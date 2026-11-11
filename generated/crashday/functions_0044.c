#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_006655E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006655E0u);

L_006655E0:
    PUSH32(esp, ebp); /* 0x006655E0: push ebp */
    ebp = esp; /* 0x006655E1: mov ebp, esp */
    edx = MEM32(ebp + 0x20); /* 0x006655E3: mov edx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0xC); /* 0x006655E6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006655E9: push ebx */
    PUSH32(esp, esi); /* 0x006655EA: push esi */
    PUSH32(esp, edi); /* 0x006655EB: push edi */
    edi = MEM32(ebp + 0x14); /* 0x006655EC: mov edi, dword ptr [ebp + 0x14] */
    MEM32(edi) = eax; /* 0x006655EF: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x18); /* 0x006655F1: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx) = eax; /* 0x006655F4: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0x10); /* 0x006655F6: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edi), eax */ /* 0x006655F9: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066569C; /* 0x006655FB: je 0x66569c */
L_00665601:
    eax = MEM32(ebp + 0x1C); /* 0x00665601: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(edx), eax */ /* 0x00665604: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066569C; /* 0x00665606: je 0x66569c */
L_0066560C:
    ebx = MEM32(edi); /* 0x0066560C: mov ebx, dword ptr [edi] */
    SET_LO8(ecx, MEM8(ebx)); /* 0x0066560E: mov cl, byte ptr [ebx] */
    /* cmp LO8(ecx), 0x80u */ /* 0x00665610: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066561F; /* 0x00665613: jae 0x66561f */
L_00665615:
    eax = (uint32_t)LO8(ecx); /* 0x00665615: movzx eax, cl */
    ecx = ebx + 0x1; /* 0x00665618: lea ecx, [ebx + 1] */
    MEM32(edi) = ecx; /* 0x0066561B: mov dword ptr [edi], ecx */
    goto L_00665677; /* 0x0066561D: jmp 0x665677 */
L_0066561F:
    /* cmp LO8(ecx), 0xC0u */ /* 0x0066561F: cmp cl, 0xc0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_006656E9; /* 0x00665622: jb 0x6656e9 */
L_00665628:
    eax = (uint32_t)LO8(ecx); /* 0x00665628: movzx eax, cl */
    /* cmp LO8(ecx), 0xE0u */ /* 0x0066562B: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006656AD; /* 0x0066562E: jae 0x6656ad */
L_00665630:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x00665630: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 1; /* 0x00665633: mov esi, 1 */
L_00665638:
    edx = MEM32(ebp + 0x10); /* 0x00665638: mov edx, dword ptr [ebp + 0x10] */
    ecx = esi + 0x1; /* 0x0066563B: lea ecx, [esi + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x0066563E: sub edx, ebx */
    _flag_k = FK_CMP;
    /* cmp edx, ecx */ /* 0x00665640: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0066569C; /* 0x00665642: jl 0x66569c */
L_00665644:
    edx = ebx + 0x1; /* 0x00665644: lea edx, [ebx + 1] */
    MEM32(edi) = edx; /* 0x00665647: mov dword ptr [edi], edx */
    /* test esi, esi */ /* 0x00665649: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00665674; /* 0x0066564B: jle 0x665674 */
L_0066564D:
    ecx = ecx; /* 0x0066564D: lea ecx, [ecx] */
L_00665650:
    SET_LO8(ebx, MEM8(edx)); /* 0x00665650: mov bl, byte ptr [edx] */
    ecx = ebx + 0x80; /* 0x00665652: lea ecx, [ebx + 0x80] */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x00665658: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006656EB; /* 0x0066565B: ja 0x6656eb */
L_00665661:
    ecx = (uint32_t)LO8(ebx); /* 0x00665661: movzx ecx, bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00665664: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    ecx = ecx & 0x3Fu; /* 0x00665665: and ecx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x00665668: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x00665668: shl eax, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0066566B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0066566C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x0066566E: mov dword ptr [edi], edx */
    /* test esi, esi */ /* 0x00665670: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00665650; /* 0x00665672: jg 0x665650 */
L_00665674:
    edx = MEM32(ebp + 0x20); /* 0x00665674: mov edx, dword ptr [ebp + 0x20] */
L_00665677:
    ecx = MEM32(ebp + 0x8); /* 0x00665677: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x0066567A: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665682; /* 0x0066567D: jne 0x665682 */
L_0066567F:
    MEM8(ecx) = (uint8_t)(1); /* 0x0066567F: mov byte ptr [ecx], 1 */
L_00665682:
    /* cmp eax, 0x0010FFFFu */ /* 0x00665682: cmp eax, 0x10ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006656EB; /* 0x00665687: ja 0x6656eb */
L_00665689:
    ecx = MEM32(edx); /* 0x00665689: mov ecx, dword ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x0066568B: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 2; /* 0x0066568E: add dword ptr [edx], 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x00665691: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edi), eax */ /* 0x00665694: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665601; /* 0x00665696: jne 0x665601 */
L_0066569C:
    ecx = MEM32(ebp + 0xC); /* 0x0066569C: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066569F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edi) */ /* 0x006656A1: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006656A3: pop edi */
    esi = POP32_VAL(esp); /* 0x006656A4: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006656A5: sete al */
    ebx = POP32_VAL(esp); /* 0x006656A8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006656A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x006656AA: ret 0x1c */
L_006656AD:
    /* cmp LO8(ecx), 0xF0u */ /* 0x006656AD: cmp cl, 0xf0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006656BF; /* 0x006656B0: jae 0x6656bf */
L_006656B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006656B2: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 2; /* 0x006656B5: mov esi, 2 */
    RECOMP_BACKEDGE();
    goto L_00665638; /* 0x006656BA: jmp 0x665638 */
L_006656BF:
    /* cmp LO8(ecx), 0xF8u */ /* 0x006656BF: cmp cl, 0xf8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006656D1; /* 0x006656C2: jae 0x6656d1 */
L_006656C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x006656C4: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 3; /* 0x006656C7: mov esi, 3 */
    RECOMP_BACKEDGE();
    goto L_00665638; /* 0x006656CC: jmp 0x665638 */
L_006656D1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x006656D1: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0xFCu */ /* 0x006656D4: cmp cl, 0xfc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006656D7: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 5; /* 0x006656D9: add esi, 5 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_00665638; /* 0x006656DC: jne 0x665638 */
L_006656E2:
    ecx = ebx + 0x1; /* 0x006656E2: lea ecx, [ebx + 1] */
    MEM32(edi) = ecx; /* 0x006656E5: mov dword ptr [edi], ecx */
    RECOMP_BACKEDGE();
    goto L_00665677; /* 0x006656E7: jmp 0x665677 */
L_006656E9:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x006656E9: inc dword ptr [edi] */
    _flag_k = FK_INC;
L_006656EB:
    edi = POP32_VAL(esp); /* 0x006656EB: pop edi */
    esi = POP32_VAL(esp); /* 0x006656EC: pop esi */
    eax = 2; /* 0x006656ED: mov eax, 2 */
    ebx = POP32_VAL(esp); /* 0x006656F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006656F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x006656F4: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_00665700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665700u);

L_00665700:
    PUSH32(esp, ebp); /* 0x00665700: push ebp */
    ebp = esp; /* 0x00665701: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x00665703: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x00665706: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x00665709: push ebx */
    PUSH32(esp, esi); /* 0x0066570A: push esi */
    PUSH32(esp, edi); /* 0x0066570B: push edi */
    edi = MEM32(ebp + 0x20); /* 0x0066570C: mov edi, dword ptr [ebp + 0x20] */
    MEM32(edx) = eax; /* 0x0066570F: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0x18); /* 0x00665711: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi) = eax; /* 0x00665714: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x10); /* 0x00665716: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edx), eax */ /* 0x00665719: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006657F9; /* 0x0066571B: je 0x6657f9 */
L_00665721:
    ecx = MEM32(ebp + 0x1C); /* 0x00665721: mov ecx, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(edi), ecx */ /* 0x00665724: cmp dword ptr [edi], ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006657F9; /* 0x00665726: je 0x6657f9 */
L_0066572C:
    eax = MEM32(edx); /* 0x0066572C: mov eax, dword ptr [edx] */
    eax = (uint32_t)MEM16(eax); /* 0x0066572E: movzx eax, word ptr [eax] */
    /* cmp eax, 0x0010FFFFu */ /* 0x00665731: cmp eax, 0x10ffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066580A; /* 0x00665736: ja 0x66580a */
L_0066573C:
    /* cmp eax, 0x80u */ /* 0x0066573C: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665749; /* 0x00665741: jae 0x665749 */
L_00665743:
    SET_LO8(ebx, LO8(eax)); /* 0x00665743: mov bl, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00665745: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006657A6; /* 0x00665747: jmp 0x6657a6 */
L_00665749:
    ebx = eax; /* 0x00665749: mov ebx, eax */
    /* cmp eax, 0x800u */ /* 0x0066574B: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066575F; /* 0x00665750: jae 0x66575f */
L_00665752:
    if (6u) _cf = (((ebx) >> 5) & 1u); /* 0x00665752: shr ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 6u; /* 0x00665752: shr ebx, 6 */
    esi = 1; /* 0x00665755: mov esi, 1 */
    _flag_a = (uint32_t)((LO8(ebx) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xC0u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xC0u); /* 0x0066575A: or bl, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006657A6; /* 0x0066575D: jmp 0x6657a6 */
L_0066575F:
    /* cmp eax, 0x00010000u */ /* 0x0066575F: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665773; /* 0x00665764: jae 0x665773 */
L_00665766:
    if (12u) _cf = (((ebx) >> 11) & 1u); /* 0x00665766: shr ebx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ebx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 12u; /* 0x00665766: shr ebx, 0xc */
    esi = 2; /* 0x00665769: mov esi, 2 */
    _flag_a = (uint32_t)((LO8(ebx) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xE0u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xE0u); /* 0x0066576E: or bl, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006657A6; /* 0x00665771: jmp 0x6657a6 */
L_00665773:
    /* cmp eax, 0x00200000u */ /* 0x00665773: cmp eax, 0x200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665787; /* 0x00665778: jae 0x665787 */
L_0066577A:
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x0066577A: shr ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ebx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 18u; /* 0x0066577A: shr ebx, 0x12 */
    esi = 3; /* 0x0066577D: mov esi, 3 */
    _flag_a = (uint32_t)((LO8(ebx) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xF0u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xF0u); /* 0x00665782: or bl, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006657A6; /* 0x00665785: jmp 0x6657a6 */
L_00665787:
    /* cmp eax, 0x04000000u */ /* 0x00665787: cmp eax, 0x4000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066579B; /* 0x0066578C: jae 0x66579b */
L_0066578E:
    if (24u) _cf = (((ebx) >> 23) & 1u); /* 0x0066578E: shr ebx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ebx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 24u; /* 0x0066578E: shr ebx, 0x18 */
    esi = 4; /* 0x00665791: mov esi, 4 */
    _flag_a = (uint32_t)((LO8(ebx) | 0xF8u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xF8u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xF8u); /* 0x00665796: or bl, 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006657A6; /* 0x00665799: jmp 0x6657a6 */
L_0066579B:
    if (30u) _cf = (((ebx) >> 29) & 1u); /* 0x0066579B: shr ebx, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((ebx >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 30u; /* 0x0066579B: shr ebx, 0x1e */
    esi = 5; /* 0x0066579E: mov esi, 5 */
    _flag_a = (uint32_t)((LO8(ebx) | 0xFCu)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xFCu)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xFCu); /* 0x006657A3: or bl, 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006657A6:
    edx = MEM32(ebp + 0x8); /* 0x006657A6: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx), 0 */ /* 0x006657A9: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006657B1; /* 0x006657AC: jne 0x6657b1 */
L_006657AE:
    MEM8(edx) = (uint8_t)(1); /* 0x006657AE: mov byte ptr [edx], 1 */
L_006657B1:
    edx = ecx; /* 0x006657B1: mov edx, ecx */
    ecx = esi + 0x1; /* 0x006657B3: lea ecx, [esi + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x006657B6: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    /* cmp edx, ecx */ /* 0x006657B8: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x006657BA: mov edx, dword ptr [ebp + 0x14] */
    if (CMP_L(_flag_a, _flag_b)) goto L_006657F9; /* 0x006657BD: jl 0x6657f9 */
L_006657BF:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 2; /* 0x006657BF: add dword ptr [edx], 2 */
    _flag_k = FK_ADD;
    ecx = MEM32(edi); /* 0x006657C2: mov ecx, dword ptr [edi] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x006657C4: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x006657C6: inc dword ptr [edi] */
    _flag_k = FK_INC;
    ebx = MEM32(edi); /* 0x006657C8: mov ebx, dword ptr [edi] */
    /* test esi, esi */ /* 0x006657CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006657EE; /* 0x006657CC: jle 0x6657ee */
L_006657CE:
    ecx = esi + esi * 2; /* 0x006657CE: lea ecx, [esi + esi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006657D1: add ecx, ecx */
    _flag_k = FK_ADD;
L_006657D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 6; /* 0x006657D3: sub ecx, 6 */
    _flag_k = FK_CMP;
    edx = eax; /* 0x006657D6: mov edx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006657D8: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006657D8: shr edx, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006657DA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(edx, LO8(edx) & 0x3Fu); /* 0x006657DB: and dl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(edx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x80u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x80u); /* 0x006657DE: or dl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebx) = (uint8_t)(LO8(edx)); /* 0x006657E1: mov byte ptr [ebx], dl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x006657E3: inc dword ptr [edi] */
    _flag_k = FK_INC;
    ebx = MEM32(edi); /* 0x006657E5: mov ebx, dword ptr [edi] */
    /* test esi, esi */ /* 0x006657E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006657D3; /* 0x006657E9: jg 0x6657d3 */
L_006657EB:
    edx = MEM32(ebp + 0x14); /* 0x006657EB: mov edx, dword ptr [ebp + 0x14] */
L_006657EE:
    eax = MEM32(ebp + 0x10); /* 0x006657EE: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edx), eax */ /* 0x006657F1: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665721; /* 0x006657F3: jne 0x665721 */
L_006657F9:
    ecx = MEM32(ebp + 0xC); /* 0x006657F9: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006657FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edx) */ /* 0x006657FE: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00665800: pop edi */
    esi = POP32_VAL(esp); /* 0x00665801: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00665802: sete al */
    ebx = POP32_VAL(esp); /* 0x00665805: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00665806: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x00665807: ret 0x1c */
L_0066580A:
    edi = POP32_VAL(esp); /* 0x0066580A: pop edi */
    esi = POP32_VAL(esp); /* 0x0066580B: pop esi */
    eax = 2; /* 0x0066580C: mov eax, 2 */
    ebx = POP32_VAL(esp); /* 0x00665811: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00665812: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x00665813: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_00665820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665820u);

L_00665820:
    PUSH32(esp, ebp); /* 0x00665820: push ebp */
    ebp = esp; /* 0x00665821: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x00665823: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x00665826: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x00665829: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066582B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0066582D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0066582E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00665840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665840u);

L_00665840:
    PUSH32(esp, ebp); /* 0x00665840: push ebp */
    ebp = esp; /* 0x00665841: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00665843: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x00665846: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x00665849: push ebx */
    PUSH32(esp, esi); /* 0x0066584A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0066584B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x0066584D: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(eax); /* 0x00665850: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x00665852: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x00665853: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x00665856: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00665898; /* 0x00665859: jbe 0x665898 */
L_0066585B:
    ebx = MEM32(ebp + 0x10); /* 0x0066585B: mov ebx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x0066585E: mov edi, dword ptr [ebp + 0xc] */
L_00665861:
    /* cmp edi, ebx */ /* 0x00665861: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665898; /* 0x00665863: je 0x665898 */
L_00665865:
    eax = MEM32(ecx); /* 0x00665865: mov eax, dword ptr [ecx] */
    edx = ebp + 0x10; /* 0x00665867: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x0066586A: push edx */
    edx = ebp + 0xA; /* 0x0066586B: lea edx, [ebp + 0xa] */
    PUSH32(esp, edx); /* 0x0066586E: push edx */
    edx = ebp + 0x8; /* 0x0066586F: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x00665872: push edx */
    edx = ebp + 0xC; /* 0x00665873: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x00665876: push edx */
    PUSH32(esp, ebx); /* 0x00665877: push ebx */
    PUSH32(esp, edi); /* 0x00665878: push edi */
    edx = ebp + (-0x4); /* 0x00665879: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x0066587C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x0066587D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00665880: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006658A3; /* 0x00665882: jne 0x6658a3 */
L_00665884:
    eax = ebp + 0xA; /* 0x00665884: lea eax, [ebp + 0xa] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x00665887: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066588D; /* 0x0066588A: jne 0x66588d */
L_0066588C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0066588C: inc esi */
    _flag_k = FK_INC;
L_0066588D:
    edi = MEM32(ebp + 0xC); /* 0x0066588D: mov edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x00665890: mov ecx, dword ptr [ebp - 8] */
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x00665893: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00665861; /* 0x00665896: jb 0x665861 */
L_00665898:
    edi = POP32_VAL(esp); /* 0x00665898: pop edi */
    eax = esi; /* 0x00665899: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0066589B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066589C: pop ebx */
    esp = ebp; /* 0x0066589D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066589F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006658A0: ret 0x10 */
L_006658A3:
    /* cmp eax, 3 */ /* 0x006658A3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665898; /* 0x006658A6: jne 0x665898 */
L_006658A8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x006658A8: sub esi, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006658AA: pop edi */
    eax = ebx + esi; /* 0x006658AB: lea eax, [ebx + esi] */
    esi = POP32_VAL(esp); /* 0x006658AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006658AF: pop ebx */
    esp = ebp; /* 0x006658B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006658B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006658B3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006658C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006658C0u);

L_006658C0:
    eax = 6; /* 0x006658C0: mov eax, 6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006658C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006658D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006658D0u);

L_006658D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006658D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006658D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006658E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006658E0u);

L_006658E0:
    PUSH32(esp, ebp); /* 0x006658E0: push ebp */
    ebp = esp; /* 0x006658E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006658E3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x006658E5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x006658EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006658F0: push eax */
    PUSH32(esp, esi); /* 0x006658F1: push esi */
    PUSH32(esp, edi); /* 0x006658F2: push edi */
    eax = MEM32(0x855000); /* 0x006658F3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006658F8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006658FA: push eax */
    eax = ebp + (-0xC); /* 0x006658FB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006658FE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00665904: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x00665906: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x00665909: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x0066590C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665962; /* 0x0066590E: jae 0x665962 */
L_00665910:
    eax = MEM32(esi); /* 0x00665910: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x00665912: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00665962; /* 0x00665914: ja 0x665962 */
L_00665916:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x00665916: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x00665918: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x0066591D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0066591F: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    edi = edx; /* 0x00665922: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x00665924: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x00665924: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x00665927: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x00665929: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665936; /* 0x0066592C: jne 0x665936 */
L_0066592E:
    PUSH32(esp, ecx); /* 0x0066592E: push ecx */
    ecx = esi; /* 0x0066592F: mov ecx, esi */
    RECOMP_CALL(sub_005CEC10); /* 0x00665931: call 0x5cec10 */
    RECOMP_FLAGS_IN();
L_00665936:
    eax = MEM32(esi); /* 0x00665936: mov eax, dword ptr [esi] */
    ecx = edi + edi * 2; /* 0x00665938: lea ecx, [edi + edi*2] */
    eax = eax + ecx * 8; /* 0x0066593B: lea eax, [eax + ecx*8] */
    ecx = MEM32(esi + 0x4); /* 0x0066593E: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x00665941: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00665948: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665996; /* 0x0066594A: je 0x665996 */
L_0066594C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0066594C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = 7; /* 0x0066594E: mov dword ptr [ecx + 0x14], 7 */
    MEM32(ecx + 0x10) = 0; /* 0x00665955: mov dword ptr [ecx + 0x10], 0 */
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x0066595C: mov word ptr [ecx], dx */
    PUSH32(esp, eax); /* 0x0066595F: push eax */
    goto L_00665991; /* 0x00665960: jmp 0x665991 */
L_00665962:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x00665962: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066596F; /* 0x00665965: jne 0x66596f */
L_00665967:
    PUSH32(esp, ecx); /* 0x00665967: push ecx */
    ecx = esi; /* 0x00665968: mov ecx, esi */
    RECOMP_CALL(sub_005CEC10); /* 0x0066596A: call 0x5cec10 */
    RECOMP_FLAGS_IN();
L_0066596F:
    ecx = MEM32(esi + 0x4); /* 0x0066596F: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x00665972: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x00665979: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665996; /* 0x0066597B: je 0x665996 */
L_0066597D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066597D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = 7; /* 0x0066597F: mov dword ptr [ecx + 0x14], 7 */
    MEM32(ecx + 0x10) = 0; /* 0x00665986: mov dword ptr [ecx + 0x10], 0 */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x0066598D: mov word ptr [ecx], ax */
    PUSH32(esp, edi); /* 0x00665990: push edi */
L_00665991:
    RECOMP_CALL(sub_005C8F60); /* 0x00665991: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
L_00665996:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665996: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x18u; /* 0x0066599D: add dword ptr [esi + 4], 0x18 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006659A1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006659A4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006659AB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006659AC: pop edi */
    esi = POP32_VAL(esp); /* 0x006659AD: pop esi */
    esp = ebp; /* 0x006659AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006659B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006659B1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006659C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006659C0u);

L_006659C0:
    PUSH32(esp, ebp); /* 0x006659C0: push ebp */
    ebp = esp; /* 0x006659C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006659C3: push esi */
    esi = ecx; /* 0x006659C4: mov esi, ecx */
    RECOMP_CALL(sub_00665440); /* 0x006659C6: call 0x665440 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006659CB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006659DB; /* 0x006659CF: je 0x6659db */
L_006659D1:
    PUSH32(esp, esi); /* 0x006659D1: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006659D2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006659D8: add esp, 4 */
    _flag_k = FK_ADD;
L_006659DB:
    eax = esi; /* 0x006659DB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006659DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006659DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006659DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006659F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006659F0u);

L_006659F0:
    PUSH32(esp, ebp); /* 0x006659F0: push ebp */
    ebp = esp; /* 0x006659F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006659F3: push -1 */
    PUSH32(esp, 0x007BC104u); /* 0x006659F5: push 0x7bc104 */
    eax = MEM32(FS_BASE + (0)); /* 0x006659FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665A00: push eax */
    PUSH32(esp, ecx); /* 0x00665A01: push ecx */
    PUSH32(esp, esi); /* 0x00665A02: push esi */
    eax = MEM32(0x855000); /* 0x00665A03: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665A08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00665A0A: push eax */
    eax = ebp + (-0xC); /* 0x00665A0B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665A0E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00665A14: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00665A16: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x007FC1A0u; /* 0x00665A19: mov dword ptr [esi], 0x7fc1a0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665A1F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(0x7CC268); /* 0x00665A26: mov eax, dword ptr [0x7cc268] */
    MEM32(esi) = eax; /* 0x00665A2B: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665A2D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(0x7CC264); /* 0x00665A34: mov eax, dword ptr [0x7cc264] */
    MEM32(esi) = eax; /* 0x00665A39: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665A3B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(0x7CC2EC); /* 0x00665A42: mov eax, dword ptr [0x7cc2ec] */
    MEM32(esi) = eax; /* 0x00665A47: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665A49: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x00665A50: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x7CC2E8); /* 0x00665A54: mov eax, dword ptr [0x7cc2e8] */
    MEM32(esi) = eax; /* 0x00665A59: mov dword ptr [esi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665A67; /* 0x00665A5B: je 0x665a67 */
L_00665A5D:
    PUSH32(esp, esi); /* 0x00665A5D: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00665A5E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665A64: add esp, 4 */
    _flag_k = FK_ADD;
L_00665A67:
    eax = esi; /* 0x00665A67: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665A69: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665A6C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00665A73: pop ecx */
    esi = POP32_VAL(esp); /* 0x00665A74: pop esi */
    esp = ebp; /* 0x00665A75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00665A77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00665A78: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00665A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665A80u);

L_00665A80:
    PUSH32(esp, ebp); /* 0x00665A80: push ebp */
    ebp = esp; /* 0x00665A81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00665A83: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00665A84: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00665A87: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00665A8A: push esi */
    esi = ecx; /* 0x00665A8B: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x00665A8D: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00665A90: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x00665A92: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00665AA1; /* 0x00665A94: ja 0x665aa1 */
L_00665A96:
    PUSH32(esp, 0x007CCE5Cu); /* 0x00665A96: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00665A9B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00665AA1:
    /* test ebx, ebx */ /* 0x00665AA1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665B2F; /* 0x00665AA3: je 0x665b2f */
L_00665AA9:
    PUSH32(esp, edi); /* 0x00665AA9: push edi */
    edi = ecx + ebx; /* 0x00665AAA: lea edi, [ecx + ebx] */
    /* cmp edi, 0x7FFFFFFEu */ /* 0x00665AAD: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00665AC0; /* 0x00665AB3: jbe 0x665ac0 */
L_00665AB5:
    PUSH32(esp, 0x007CCE5Cu); /* 0x00665AB5: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00665ABA: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00665AC0:
    eax = MEM32(esi + 0x14); /* 0x00665AC0: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x00665AC3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665AFC; /* 0x00665AC5: jae 0x665afc */
L_00665AC7:
    PUSH32(esp, ecx); /* 0x00665AC7: push ecx */
    PUSH32(esp, edi); /* 0x00665AC8: push edi */
    ecx = esi; /* 0x00665AC9: mov ecx, esi */
    RECOMP_CALL(sub_005C9C30); /* 0x00665ACB: call 0x5c9c30 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x00665AD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665B2E; /* 0x00665AD2: je 0x665b2e */
L_00665AD4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00665AD4: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x00665AD7: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x00665AD9: push ebx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x00665ADA: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_006662E0); /* 0x00665ADD: call 0x6662e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x00665AE2: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x00665AE6: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_00665B26; /* 0x00665AE9: jb 0x665b26 */
L_00665AEB:
    eax = MEM32(esi); /* 0x00665AEB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00665AED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x00665AEF: mov word ptr [eax + edi*2], cx */
    eax = esi; /* 0x00665AF3: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x00665AF5: pop edi */
    esi = POP32_VAL(esp); /* 0x00665AF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665AF7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00665AF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00665AF9: ret 8 */
L_00665AFC:
    /* test edi, edi */ /* 0x00665AFC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00665AD4; /* 0x00665AFE: jne 0x665ad4 */
L_00665B00:
    MEM32(esi + 0x10) = edi; /* 0x00665B00: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 8 */ /* 0x00665B03: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665B18; /* 0x00665B06: jb 0x665b18 */
L_00665B08:
    eax = MEM32(esi); /* 0x00665B08: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00665B0A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00665B0C: pop edi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x00665B0D: mov word ptr [eax], cx */
    eax = esi; /* 0x00665B10: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00665B12: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665B13: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00665B14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00665B15: ret 8 */
L_00665B18:
    eax = esi; /* 0x00665B18: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00665B1A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00665B1C: pop edi */
    esi = POP32_VAL(esp); /* 0x00665B1D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665B1E: pop ebx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x00665B1F: mov word ptr [eax], cx */
    ebp = POP32_VAL(esp); /* 0x00665B22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00665B23: ret 8 */
L_00665B26:
    eax = esi; /* 0x00665B26: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00665B28: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x00665B2A: mov word ptr [eax + edi*2], cx */
L_00665B2E:
    edi = POP32_VAL(esp); /* 0x00665B2E: pop edi */
L_00665B2F:
    eax = esi; /* 0x00665B2F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00665B31: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665B32: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00665B33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00665B34: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00665B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665B40u);

L_00665B40:
    PUSH32(esp, ebp); /* 0x00665B40: push ebp */
    ebp = esp; /* 0x00665B41: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00665B43: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00665B46: push esi */
    PUSH32(esp, edi); /* 0x00665B47: push edi */
    MEM32(ecx + 0x1384) = 0xFFFFFFFFu; /* 0x00665B48: mov dword ptr [ecx + 0x1384], 0xffffffff */
    edi = ecx + 0x8; /* 0x00665B52: lea edi, [ecx + 8] */
    MEM32(ecx + 0x4) = edx; /* 0x00665B55: mov dword ptr [ecx + 4], edx */
    esi = 1; /* 0x00665B58: mov esi, 1 */
    ecx = ecx; /* 0x00665B5D: lea ecx, [ecx] */
L_00665B60:
    eax = edx; /* 0x00665B60: mov eax, edx */
    edi = edi + 0x4; /* 0x00665B62: lea edi, [edi + 4] */
    if (30u) _cf = (((eax) >> 29) & 1u); /* 0x00665B65: shr eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 30u; /* 0x00665B65: shr eax, 0x1e */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x00665B68: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x6C078965u); /* 0x00665B6A: imul edx, eax, 0x6c078965 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00665B70: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00665B72: inc esi */
    _flag_k = FK_INC;
    MEM32(edi + (-0x4)) = edx; /* 0x00665B73: mov dword ptr [edi - 4], edx */
    /* cmp esi, 0x270u */ /* 0x00665B76: cmp esi, 0x270 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00665B60; /* 0x00665B7C: jl 0x665b60 */
L_00665B7E:
    edi = POP32_VAL(esp); /* 0x00665B7E: pop edi */
    MEM32(ecx) = 0x270u; /* 0x00665B7F: mov dword ptr [ecx], 0x270 */
    eax = ecx; /* 0x00665B85: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x00665B87: pop esi */
    ebp = POP32_VAL(esp); /* 0x00665B88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00665B89: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00665B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665B90u);

L_00665B90:
    PUSH32(esp, ebp); /* 0x00665B90: push ebp */
    ebp = esp; /* 0x00665B91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665B93: push -1 */
    PUSH32(esp, 0x007BC128u); /* 0x00665B95: push 0x7bc128 */
    eax = MEM32(FS_BASE + (0)); /* 0x00665B9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665BA0: push eax */
    PUSH32(esp, ebx); /* 0x00665BA1: push ebx */
    PUSH32(esp, esi); /* 0x00665BA2: push esi */
    PUSH32(esp, edi); /* 0x00665BA3: push edi */
    eax = MEM32(0x855000); /* 0x00665BA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665BA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00665BAB: push eax */
    eax = ebp + (-0xC); /* 0x00665BAC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665BAF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00665BB5: mov edi, ecx */
    eax = MEM32(0x928530); /* 0x00665BB7: mov eax, dword ptr [0x928530] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x00665BBC: push dword ptr [edi + 8] */
    ebx = MEM32(ebp + 0x8); /* 0x00665BBF: mov ebx, dword ptr [ebp + 8] */
    MEM32(edi + 0x3C) = eax; /* 0x00665BC2: mov dword ptr [edi + 0x3c], eax */
    MEM32(edi + 0x4) = ebx; /* 0x00665BC5: mov dword ptr [edi + 4], ebx */
    RECOMP_ICALL(MEM32(0x7CC26C)); /* 0x00665BC8: call dword ptr [0x7cc26c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665BCE: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00665BD1: mov esi, eax */
    MEM32(ebp + 0x8) = esi; /* 0x00665BD3: mov dword ptr [ebp + 8], esi */
    /* test ebx, ebx */ /* 0x00665BD6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665C17; /* 0x00665BD8: je 0x665c17 */
L_00665BDA:
    ecx = MEM32(0x7CC270); /* 0x00665BDA: mov ecx, dword ptr [0x7cc270] */
    RECOMP_ICALL(MEM32(0x7CC30C)); /* 0x00665BE0: call dword ptr [0x7cc30c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00665BE6: push eax */
    PUSH32(esp, ebx); /* 0x00665BE7: push ebx */
    ecx = esi; /* 0x00665BE8: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC3A0)); /* 0x00665BEA: call dword ptr [0x7cc3a0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00665BF0: push 0 */
    PUSH32(esp, 0); /* 0x00665BF2: push 0 */
    RECOMP_ICALL(MEM32(0x7CC258)); /* 0x00665BF4: call dword ptr [0x7cc258] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00665BFA: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00665BFD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665C17; /* 0x00665C00: je 0x665c17 */
L_00665C02:
    PUSH32(esp, 0x007F6BECu); /* 0x00665C02: push 0x7f6bec */
    ecx = esi + 0x18; /* 0x00665C07: lea ecx, [esi + 0x18] */
    MEM32(esi + 0x10) = 0; /* 0x00665C0A: mov dword ptr [esi + 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC260)); /* 0x00665C11: call dword ptr [0x7cc260] */
    RECOMP_FLAGS_IN();
L_00665C17:
    MEM32(ebp + (-0x4)) = 0; /* 0x00665C17: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(edi + 0x8); /* 0x00665C1E: mov ecx, dword ptr [edi + 8] */
    /* cmp ecx, esi */ /* 0x00665C21: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665C40; /* 0x00665C23: je 0x665c40 */
L_00665C25:
    eax = MEM32(ecx); /* 0x00665C25: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00665C27: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00665C2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665C36; /* 0x00665C2C: je 0x665c36 */
L_00665C2E:
    edx = MEM32(eax); /* 0x00665C2E: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x00665C30: mov ecx, eax */
    PUSH32(esp, 1); /* 0x00665C32: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x00665C34: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_00665C36:
    MEM32(edi + 0x8) = esi; /* 0x00665C36: mov dword ptr [edi + 8], esi */
    ecx = esi; /* 0x00665C39: mov ecx, esi */
    eax = MEM32(esi); /* 0x00665C3B: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x00665C3D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_00665C40:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665C40: mov dword ptr [ebp - 4], 0xffffffff */
    /* test esi, esi */ /* 0x00665C47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665C5E; /* 0x00665C49: je 0x665c5e */
L_00665C4B:
    eax = MEM32(esi); /* 0x00665C4B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x00665C4D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00665C4F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00665C52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665C5E; /* 0x00665C54: je 0x665c5e */
L_00665C56:
    edx = MEM32(eax); /* 0x00665C56: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x00665C58: mov ecx, eax */
    PUSH32(esp, 1); /* 0x00665C5A: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x00665C5C: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_00665C5E:
    MEM32(edi + 0x44) = 0; /* 0x00665C5E: mov dword ptr [edi + 0x44], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665C65: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665C68: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00665C6F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00665C70: pop edi */
    esi = POP32_VAL(esp); /* 0x00665C71: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665C72: pop ebx */
    esp = ebp; /* 0x00665C73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00665C75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00665C76: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00665C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665C80u);

L_00665C80:
    PUSH32(esp, ebp); /* 0x00665C80: push ebp */
    ebp = esp; /* 0x00665C81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665C83: push -1 */
    PUSH32(esp, 0x007BC18Fu); /* 0x00665C85: push 0x7bc18f */
    eax = MEM32(FS_BASE + (0)); /* 0x00665C8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665C90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x00665C91: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00665C94: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665C99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x00665C9B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00665C9E: push ebx */
    PUSH32(esp, esi); /* 0x00665C9F: push esi */
    PUSH32(esp, edi); /* 0x00665CA0: push edi */
    PUSH32(esp, eax); /* 0x00665CA1: push eax */
    eax = ebp + (-0xC); /* 0x00665CA2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665CA5: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x00665CAB: mov dword ptr [ebp - 0x4c], ecx */
    eax = MEM32(ebp + 0xC); /* 0x00665CAE: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x00665CB1: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x10); /* 0x00665CB4: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x54)) = 0; /* 0x00665CB7: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x48)) = eax; /* 0x00665CBE: mov dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665CC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 0; /* 0x00665CC3: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00665CCA: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x68)) = edi; /* 0x00665CD1: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x30)) = 7; /* 0x00665CD4: mov dword ptr [ebp - 0x30], 7 */
    MEM32(ebp + (-0x34)) = 0; /* 0x00665CDB: mov dword ptr [ebp - 0x34], 0 */
    MEM16(ebp + (-0x44)) = (uint16_t)(LO16(eax)); /* 0x00665CE2: mov word ptr [ebp - 0x44], ax */
    MEM32(ebp + (-0x4)) = 1; /* 0x00665CE6: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00665CED: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x00665CF0: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x18)) = 7; /* 0x00665CF3: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00665CFA: mov dword ptr [ebp - 0x1c], eax */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x00665CFD: mov word ptr [ebp - 0x2c], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00665D01: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM8(ecx + 0x40), 0 */ /* 0x00665D05: cmp byte ptr [ecx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x48)); /* 0x00665D09: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x50)) = eax; /* 0x00665D0C: mov dword ptr [ebp - 0x50], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665D19; /* 0x00665D0F: jne 0x665d19 */
L_00665D11:
    eax = MEM32(0x92852C); /* 0x00665D11: mov eax, dword ptr [0x92852c] */
    MEM32(ecx + 0x3C) = eax; /* 0x00665D16: mov dword ptr [ecx + 0x3c], eax */
L_00665D19:
    PUSH32(esp, 0); /* 0x00665D19: push 0 */
    PUSH32(esp, 8); /* 0x00665D1B: push 8 */
    ecx = ebp + (-0x44); /* 0x00665D1D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00665A80); /* 0x00665D20: call 0x665a80 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4C)); /* 0x00665D25: mov edx, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x00665D28: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(edx + 0x44) = 0; /* 0x00665D2B: mov dword ptr [edx + 0x44], 0 */
    /* cmp ecx, esi */ /* 0x00665D32: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665DE1; /* 0x00665D34: je 0x665de1 */
L_00665D3A:
    ebx = ebx; /* 0x00665D3A: lea ebx, [ebx] */
L_00665D40:
    /* cmp MEM32(ebp + (-0x30)), 8 */ /* 0x00665D40: cmp dword ptr [ebp - 0x30], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x00665D44: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x00665D47: push eax */
    eax = MEM32(ebp + (-0x34)); /* 0x00665D48: mov eax, dword ptr [ebp - 0x34] */
    ebx = ebp + (-0x44); /* 0x00665D4B: lea ebx, [ebp - 0x44] */
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x44)); } /* 0x00665D4E: cmovae ebx, dword ptr [ebp - 0x44] */
    eax = ebx + eax * 2; /* 0x00665D52: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x00665D55: push eax */
    PUSH32(esp, ebx); /* 0x00665D56: push ebx */
    eax = ebp + (-0x48); /* 0x00665D57: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x00665D5A: push eax */
    PUSH32(esp, esi); /* 0x00665D5B: push esi */
    PUSH32(esp, ecx); /* 0x00665D5C: push ecx */
    ecx = MEM32(edx + 0x4); /* 0x00665D5D: mov ecx, dword ptr [edx + 4] */
    eax = edx + 0x3C; /* 0x00665D60: lea eax, [edx + 0x3c] */
    PUSH32(esp, eax); /* 0x00665D63: push eax */
    RECOMP_ICALL(MEM32(0x7CC24C)); /* 0x00665D64: call dword ptr [0x7cc24c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00665D6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00665E64; /* 0x00665D6C: js 0x665e64 */
L_00665D72:
    /* cmp eax, 1 */ /* 0x00665D72: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00665DA2; /* 0x00665D75: jle 0x665da2 */
L_00665D77:
    /* cmp eax, 3 */ /* 0x00665D77: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665E64; /* 0x00665D7A: jne 0x665e64 */
L_00665D80:
    ecx = MEM32(ebp + (-0x48)); /* 0x00665D80: mov ecx, dword ptr [ebp - 0x48] */
    /* cmp ecx, esi */ /* 0x00665D83: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665DCE; /* 0x00665D85: je 0x665dce */
L_00665D87:
    eax = (uint32_t)MEM8(ecx); /* 0x00665D87: movzx eax, byte ptr [ecx] */
    ecx = ebp + (-0x2C); /* 0x00665D8A: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00665D8D: push eax */
    PUSH32(esp, 1); /* 0x00665D8E: push 1 */
    RECOMP_CALL(sub_00665A80); /* 0x00665D90: call 0x665a80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00665D95: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00665D98: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x48)) = ecx; /* 0x00665D99: mov dword ptr [ebp - 0x48], ecx */
    /* cmp ecx, esi */ /* 0x00665D9C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665D87; /* 0x00665D9E: jne 0x665d87 */
L_00665DA0:
    goto L_00665DCE; /* 0x00665DA0: jmp 0x665dce */
L_00665DA2:
    eax = MEM32(ebp + (-0x58)); /* 0x00665DA2: mov eax, dword ptr [ebp - 0x58] */
    /* cmp ebx, eax */ /* 0x00665DA5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665DB9; /* 0x00665DA7: jae 0x665db9 */
L_00665DA9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x00665DA9: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x00665DAB: lea ecx, [ebp - 0x2c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00665DAE: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    PUSH32(esp, eax); /* 0x00665DB0: push eax */
    PUSH32(esp, ebx); /* 0x00665DB1: push ebx */
    RECOMP_CALL(sub_005CA6C0); /* 0x00665DB2: call 0x5ca6c0 */
    RECOMP_FLAGS_IN();
    goto L_00665DCB; /* 0x00665DB7: jmp 0x665dcb */
L_00665DB9:
    /* cmp MEM32(ebp + (-0x34)), 0x10u */ /* 0x00665DB9: cmp dword ptr [ebp - 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665E1E; /* 0x00665DBD: jae 0x665e1e */
L_00665DBF:
    PUSH32(esp, 0); /* 0x00665DBF: push 0 */
    PUSH32(esp, 8); /* 0x00665DC1: push 8 */
    ecx = ebp + (-0x44); /* 0x00665DC3: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00665A80); /* 0x00665DC6: call 0x665a80 */
    RECOMP_FLAGS_IN();
L_00665DCB:
    ecx = MEM32(ebp + (-0x48)); /* 0x00665DCB: mov ecx, dword ptr [ebp - 0x48] */
L_00665DCE:
    edx = MEM32(ebp + (-0x4C)); /* 0x00665DCE: mov edx, dword ptr [ebp - 0x4c] */
    eax = ecx; /* 0x00665DD1: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x50)); /* 0x00665DD3: sub eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_CMP;
    MEM32(edx + 0x44) = eax; /* 0x00665DD6: mov dword ptr [edx + 0x44], eax */
    /* cmp ecx, esi */ /* 0x00665DD9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665D40; /* 0x00665DDB: jne 0x665d40 */
L_00665DE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665DE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 7; /* 0x00665DE3: mov dword ptr [edi + 0x14], 7 */
    MEM32(edi + 0x10) = 0; /* 0x00665DEA: mov dword ptr [edi + 0x10], 0 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00665DF1: mov word ptr [edi], ax */
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x00665DF4: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00665ECC; /* 0x00665DF8: jae 0x665ecc */
L_00665DFE:
    eax = MEM32(ebp + (-0x1C)); /* 0x00665DFE: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00665E01: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00665EE0; /* 0x00665E02: je 0x665ee0 */
L_00665E08:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00665E08: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00665E0A: push eax */
    eax = ebp + (-0x2C); /* 0x00665E0B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00665E0E: push eax */
    PUSH32(esp, edi); /* 0x00665E0F: push edi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00665E10: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00665E16: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00665EE0; /* 0x00665E19: jmp 0x665ee0 */
L_00665E1E:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00665E1E: mov ecx, dword ptr [ebp - 0x4c] */
    /* cmp MEM8(ecx + 0x42), 0 */ /* 0x00665E21: cmp byte ptr [ecx + 0x42], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x42)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665E4D; /* 0x00665E25: je 0x665e4d */
L_00665E27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665E27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 7; /* 0x00665E29: mov dword ptr [edi + 0x14], 7 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665E30: push -1 */
    MEM32(edi + 0x10) = 0; /* 0x00665E32: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00665E39: push eax */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00665E3A: mov word ptr [edi], ax */
    eax = ecx + 0x24; /* 0x00665E3D: lea eax, [ecx + 0x24] */
    PUSH32(esp, eax); /* 0x00665E40: push eax */
    ecx = edi; /* 0x00665E41: mov ecx, edi */
    RECOMP_CALL(sub_005C9000); /* 0x00665E43: call 0x5c9000 */
    RECOMP_FLAGS_IN();
    goto L_00665F00; /* 0x00665E48: jmp 0x665f00 */
L_00665E4D:
    PUSH32(esp, ecx); /* 0x00665E4D: push ecx */
    ecx = ebp + (-0x74); /* 0x00665E4E: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_00664AD0); /* 0x00665E51: call 0x664ad0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0084FF00u); /* 0x00665E56: push 0x84ff00 */
    eax = ebp + (-0x74); /* 0x00665E5B: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x00665E5E: push eax */
    RECOMP_CALL(sub_00780016); /* 0x00665E5F: call 0x780016 */
    RECOMP_FLAGS_IN();
L_00665E64:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00665E64: mov ecx, dword ptr [ebp - 0x4c] */
    /* cmp MEM8(ecx + 0x42), 0 */ /* 0x00665E67: cmp byte ptr [ecx + 0x42], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x42)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665E90; /* 0x00665E6B: je 0x665e90 */
L_00665E6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665E6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 7; /* 0x00665E6F: mov dword ptr [edi + 0x14], 7 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665E76: push -1 */
    MEM32(edi + 0x10) = 0; /* 0x00665E78: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00665E7F: push eax */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00665E80: mov word ptr [edi], ax */
    eax = ecx + 0x24; /* 0x00665E83: lea eax, [ecx + 0x24] */
    PUSH32(esp, eax); /* 0x00665E86: push eax */
    ecx = edi; /* 0x00665E87: mov ecx, edi */
    RECOMP_CALL(sub_005C9000); /* 0x00665E89: call 0x5c9000 */
    RECOMP_FLAGS_IN();
    goto L_00665F00; /* 0x00665E8E: jmp 0x665f00 */
L_00665E90:
    eax = ebp + (-0x50); /* 0x00665E90: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x50)) = 0x007FC1DCu; /* 0x00665E93: mov dword ptr [ebp - 0x50], 0x7fc1dc */
    PUSH32(esp, eax); /* 0x00665E9A: push eax */
    ecx = ebp + (-0x64); /* 0x00665E9B: lea ecx, [ebp - 0x64] */
    RECOMP_ICALL(MEM32(0x7CC524)); /* 0x00665E9E: call dword ptr [0x7cc524] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00665EA4: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x64)) = 0x007FC194u; /* 0x00665EA8: mov dword ptr [ebp - 0x64], 0x7fc194 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00665EAF: mov byte ptr [ebp - 4], 4 */
    MEM32(ebp + (-0x64)) = 0x007FC1D4u; /* 0x00665EB3: mov dword ptr [ebp - 0x64], 0x7fc1d4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00665EBA: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x64); /* 0x00665EBE: lea eax, [ebp - 0x64] */
    PUSH32(esp, 0x0084FF00u); /* 0x00665EC1: push 0x84ff00 */
    PUSH32(esp, eax); /* 0x00665EC6: push eax */
    RECOMP_CALL(sub_00780016); /* 0x00665EC7: call 0x780016 */
    RECOMP_FLAGS_IN();
L_00665ECC:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00665ECC: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(ebp + (-0x2C)); /* 0x00665ED0: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(edi) = eax; /* 0x00665ED3: mov dword ptr [edi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00665ED5: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00665ED9: mov dword ptr [ebp - 0x2c], 0 */
L_00665EE0:
    eax = MEM32(ebp + (-0x1C)); /* 0x00665EE0: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x10) = eax; /* 0x00665EE3: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x00665EE6: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x14) = eax; /* 0x00665EE9: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665EEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 7; /* 0x00665EEE: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00665EF5: mov dword ptr [ebp - 0x1c], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x00665EFC: mov word ptr [ebp - 0x2c], ax */
L_00665F00:
    MEM32(ebp + (-0x54)) = 1; /* 0x00665F00: mov dword ptr [ebp - 0x54], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00665F07: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x00665F0B: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00665F0F: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00665F1F; /* 0x00665F15: jb 0x665f1f */
L_00665F17:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00665F17: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x00665F1A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665F1C: add esp, 4 */
    _flag_k = FK_ADD;
L_00665F1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665F1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 7; /* 0x00665F21: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00665F28: mov dword ptr [ebp - 0x1c], eax */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x00665F2B: mov word ptr [ebp - 0x2c], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x00665F2F: mov byte ptr [ebp - 4], al */
    /* cmp MEM32(ebp + (-0x30)), 8 */ /* 0x00665F32: cmp dword ptr [ebp - 0x30], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665F40; /* 0x00665F36: jb 0x665f40 */
L_00665F38:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00665F38: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x00665F3B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665F3D: add esp, 4 */
    _flag_k = FK_ADD;
L_00665F40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665F40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = 7; /* 0x00665F42: mov dword ptr [ebp - 0x30], 7 */
    MEM32(ebp + (-0x34)) = eax; /* 0x00665F49: mov dword ptr [ebp - 0x34], eax */
    MEM16(ebp + (-0x44)) = (uint16_t)(LO16(eax)); /* 0x00665F4C: mov word ptr [ebp - 0x44], ax */
    eax = edi; /* 0x00665F50: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665F52: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665F55: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00665F5C: pop ecx */
    edi = POP32_VAL(esp); /* 0x00665F5D: pop edi */
    esi = POP32_VAL(esp); /* 0x00665F5E: pop esi */
    ebx = POP32_VAL(esp); /* 0x00665F5F: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00665F60: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00665F63: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00665F65: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00665F6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00665F6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00665F6D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00665F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665F70u);

L_00665F70:
    PUSH32(esp, ebp); /* 0x00665F70: push ebp */
    ebp = esp; /* 0x00665F71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665F73: push -1 */
    PUSH32(esp, 0x007BC1FFu); /* 0x00665F75: push 0x7bc1ff */
    eax = MEM32(FS_BASE + (0)); /* 0x00665F7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665F80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x00665F81: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00665F84: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665F89: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x00665F8B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00665F8E: push ebx */
    PUSH32(esp, esi); /* 0x00665F8F: push esi */
    PUSH32(esp, edi); /* 0x00665F90: push edi */
    PUSH32(esp, eax); /* 0x00665F91: push eax */
    eax = ebp + (-0xC); /* 0x00665F92: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665F95: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x00665F9B: mov dword ptr [ebp - 0x4c], ecx */
    edi = MEM32(ebp + 0x8); /* 0x00665F9E: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x00665FA1: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x10); /* 0x00665FA4: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x54)) = 0; /* 0x00665FA7: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x00665FAE: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00665FB5: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x68)) = edi; /* 0x00665FBC: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x48)) = eax; /* 0x00665FBF: mov dword ptr [ebp - 0x48], eax */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00665FC2: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00665FC9: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00665FD0: mov byte ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00665FD4: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00665FDB: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00665FE2: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00665FE9: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00665FF0: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00665FF7: mov byte ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00665FFB: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM8(ecx + 0x40), 0 */ /* 0x00665FFF: cmp byte ptr [ecx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x48)); /* 0x00666003: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x50)) = eax; /* 0x00666006: mov dword ptr [ebp - 0x50], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666013; /* 0x00666009: jne 0x666013 */
L_0066600B:
    eax = MEM32(0x928528); /* 0x0066600B: mov eax, dword ptr [0x928528] */
    MEM32(ecx + 0x3C) = eax; /* 0x00666010: mov dword ptr [ecx + 0x3c], eax */
L_00666013:
    PUSH32(esp, 0); /* 0x00666013: push 0 */
    PUSH32(esp, 8); /* 0x00666015: push 8 */
    ecx = ebp + (-0x44); /* 0x00666017: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00429FC0); /* 0x0066601A: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4C)); /* 0x0066601F: mov edx, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x00666022: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(edx + 0x44) = 0; /* 0x00666025: mov dword ptr [edx + 0x44], 0 */
    /* cmp ecx, esi */ /* 0x0066602C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006660DC; /* 0x0066602E: je 0x6660dc */
L_00666034:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00666034: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x00666038: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0066603B: push eax */
    eax = MEM32(ebp + (-0x34)); /* 0x0066603C: mov eax, dword ptr [ebp - 0x34] */
    ebx = ebp + (-0x44); /* 0x0066603F: lea ebx, [ebp - 0x44] */
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x44)); } /* 0x00666042: cmovae ebx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x00666046: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00666048: push eax */
    PUSH32(esp, ebx); /* 0x00666049: push ebx */
    eax = ebp + (-0x48); /* 0x0066604A: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0066604D: push eax */
    PUSH32(esp, esi); /* 0x0066604E: push esi */
    PUSH32(esp, ecx); /* 0x0066604F: push ecx */
    ecx = MEM32(edx + 0x4); /* 0x00666050: mov ecx, dword ptr [edx + 4] */
    eax = edx + 0x3C; /* 0x00666053: lea eax, [edx + 0x3c] */
    PUSH32(esp, eax); /* 0x00666056: push eax */
    RECOMP_ICALL(MEM32(0x7CC250)); /* 0x00666057: call dword ptr [0x7cc250] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0066605D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066615A; /* 0x0066605F: js 0x66615a */
L_00666065:
    /* cmp eax, 1 */ /* 0x00666065: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0066609D; /* 0x00666068: jle 0x66609d */
L_0066606A:
    /* cmp eax, 3 */ /* 0x0066606A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066615A; /* 0x0066606D: jne 0x66615a */
L_00666073:
    ecx = MEM32(ebp + (-0x48)); /* 0x00666073: mov ecx, dword ptr [ebp - 0x48] */
    /* cmp ecx, esi */ /* 0x00666076: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006660C7; /* 0x00666078: je 0x6660c7 */
L_0066607A:
    ebx = ebx; /* 0x0066607A: lea ebx, [ebx] */
L_00666080:
    eax = (uint32_t)MEM8(ecx); /* 0x00666080: movzx eax, byte ptr [ecx] */
    ecx = ebp + (-0x2C); /* 0x00666083: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00666086: push eax */
    PUSH32(esp, 1); /* 0x00666087: push 1 */
    RECOMP_CALL(sub_00429FC0); /* 0x00666089: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0066608E: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x00666091: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x48)) = ecx; /* 0x00666094: mov dword ptr [ebp - 0x48], ecx */
    /* cmp ecx, esi */ /* 0x00666097: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666080; /* 0x00666099: jne 0x666080 */
L_0066609B:
    goto L_006660C7; /* 0x0066609B: jmp 0x6660c7 */
L_0066609D:
    eax = MEM32(ebp + (-0x58)); /* 0x0066609D: mov eax, dword ptr [ebp - 0x58] */
    /* cmp ebx, eax */ /* 0x006660A0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006660B2; /* 0x006660A2: jae 0x6660b2 */
L_006660A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x006660A4: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x006660A6: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006660A9: push eax */
    PUSH32(esp, ebx); /* 0x006660AA: push ebx */
    RECOMP_CALL(sub_004199E0); /* 0x006660AB: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    goto L_006660C4; /* 0x006660B0: jmp 0x6660c4 */
L_006660B2:
    /* cmp MEM32(ebp + (-0x34)), 0x10u */ /* 0x006660B2: cmp dword ptr [ebp - 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00666115; /* 0x006660B6: jae 0x666115 */
L_006660B8:
    PUSH32(esp, 0); /* 0x006660B8: push 0 */
    PUSH32(esp, 8); /* 0x006660BA: push 8 */
    ecx = ebp + (-0x44); /* 0x006660BC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00429FC0); /* 0x006660BF: call 0x429fc0 */
    RECOMP_FLAGS_IN();
L_006660C4:
    ecx = MEM32(ebp + (-0x48)); /* 0x006660C4: mov ecx, dword ptr [ebp - 0x48] */
L_006660C7:
    edx = MEM32(ebp + (-0x4C)); /* 0x006660C7: mov edx, dword ptr [ebp - 0x4c] */
    eax = ecx; /* 0x006660CA: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x50)); /* 0x006660CC: sub eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006660CF: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(edx + 0x44) = eax; /* 0x006660D1: mov dword ptr [edx + 0x44], eax */
    /* cmp ecx, esi */ /* 0x006660D4: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666034; /* 0x006660D6: jne 0x666034 */
L_006660DC:
    MEM32(edi + 0x14) = 0xFu; /* 0x006660DC: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x006660E3: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x006660EA: mov byte ptr [edi], 0 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006660ED: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006661C1; /* 0x006660F1: jae 0x6661c1 */
L_006660F7:
    eax = MEM32(ebp + (-0x1C)); /* 0x006660F7: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006660FA: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006661D5; /* 0x006660FB: je 0x6661d5 */
L_00666101:
    PUSH32(esp, eax); /* 0x00666101: push eax */
    eax = ebp + (-0x2C); /* 0x00666102: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00666105: push eax */
    PUSH32(esp, edi); /* 0x00666106: push edi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00666107: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0066610D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006661D5; /* 0x00666110: jmp 0x6661d5 */
L_00666115:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00666115: mov ecx, dword ptr [ebp - 0x4c] */
    /* cmp MEM8(ecx + 0x41), 0 */ /* 0x00666118: cmp byte ptr [ecx + 0x41], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x41)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666143; /* 0x0066611C: je 0x666143 */
L_0066611E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066611E: push -1 */
    eax = ecx + 0xC; /* 0x00666120: lea eax, [ecx + 0xc] */
    MEM32(edi + 0x14) = 0xFu; /* 0x00666123: mov dword ptr [edi + 0x14], 0xf */
    PUSH32(esp, 0); /* 0x0066612A: push 0 */
    MEM32(edi + 0x10) = 0; /* 0x0066612C: mov dword ptr [edi + 0x10], 0 */
    ecx = edi; /* 0x00666133: mov ecx, edi */
    PUSH32(esp, eax); /* 0x00666135: push eax */
    MEM8(edi) = (uint8_t)(0); /* 0x00666136: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00666139: call 0x40a030 */
    RECOMP_FLAGS_IN();
    goto L_006661F3; /* 0x0066613E: jmp 0x6661f3 */
L_00666143:
    PUSH32(esp, ecx); /* 0x00666143: push ecx */
    ecx = ebp + (-0x74); /* 0x00666144: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_00664AD0); /* 0x00666147: call 0x664ad0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0084FF00u); /* 0x0066614C: push 0x84ff00 */
    eax = ebp + (-0x74); /* 0x00666151: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x00666154: push eax */
    RECOMP_CALL(sub_00780016); /* 0x00666155: call 0x780016 */
    RECOMP_FLAGS_IN();
L_0066615A:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0066615A: mov ecx, dword ptr [ebp - 0x4c] */
    /* cmp MEM8(ecx + 0x41), 0 */ /* 0x0066615D: cmp byte ptr [ecx + 0x41], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x41)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666185; /* 0x00666161: je 0x666185 */
L_00666163:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666163: push -1 */
    eax = ecx + 0xC; /* 0x00666165: lea eax, [ecx + 0xc] */
    MEM32(edi + 0x14) = 0xFu; /* 0x00666168: mov dword ptr [edi + 0x14], 0xf */
    PUSH32(esp, 0); /* 0x0066616F: push 0 */
    MEM32(edi + 0x10) = 0; /* 0x00666171: mov dword ptr [edi + 0x10], 0 */
    ecx = edi; /* 0x00666178: mov ecx, edi */
    PUSH32(esp, eax); /* 0x0066617A: push eax */
    MEM8(edi) = (uint8_t)(0); /* 0x0066617B: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0066617E: call 0x40a030 */
    RECOMP_FLAGS_IN();
    goto L_006661F3; /* 0x00666183: jmp 0x6661f3 */
L_00666185:
    eax = ebp + (-0x50); /* 0x00666185: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x50)) = 0x007FC1DCu; /* 0x00666188: mov dword ptr [ebp - 0x50], 0x7fc1dc */
    PUSH32(esp, eax); /* 0x0066618F: push eax */
    ecx = ebp + (-0x64); /* 0x00666190: lea ecx, [ebp - 0x64] */
    RECOMP_ICALL(MEM32(0x7CC524)); /* 0x00666193: call dword ptr [0x7cc524] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00666199: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x64)) = 0x007FC194u; /* 0x0066619D: mov dword ptr [ebp - 0x64], 0x7fc194 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006661A4: mov byte ptr [ebp - 4], 4 */
    MEM32(ebp + (-0x64)) = 0x007FC1D4u; /* 0x006661A8: mov dword ptr [ebp - 0x64], 0x7fc1d4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006661AF: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x64); /* 0x006661B3: lea eax, [ebp - 0x64] */
    PUSH32(esp, 0x0084FF00u); /* 0x006661B6: push 0x84ff00 */
    PUSH32(esp, eax); /* 0x006661BB: push eax */
    RECOMP_CALL(sub_00780016); /* 0x006661BC: call 0x780016 */
    RECOMP_FLAGS_IN();
L_006661C1:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006661C1: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(ebp + (-0x2C)); /* 0x006661C5: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(edi) = eax; /* 0x006661C8: mov dword ptr [edi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006661CA: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x006661CE: mov dword ptr [ebp - 0x2c], 0 */
L_006661D5:
    eax = MEM32(ebp + (-0x1C)); /* 0x006661D5: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x10) = eax; /* 0x006661D8: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x006661DB: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x14) = eax; /* 0x006661DE: mov dword ptr [edi + 0x14], eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x006661E1: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006661E8: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x006661EF: mov byte ptr [ebp - 0x2c], 0 */
L_006661F3:
    MEM32(ebp + (-0x54)) = 1; /* 0x006661F3: mov dword ptr [ebp - 0x54], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006661FA: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006661FE: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00666202: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00666212; /* 0x00666208: jb 0x666212 */
L_0066620A:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0066620A: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x0066620D: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066620F: add esp, 4 */
    _flag_k = FK_ADD;
L_00666212:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00666212: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00666219: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00666220: mov byte ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666224: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00666228: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00666236; /* 0x0066622C: jb 0x666236 */
L_0066622E:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x0066622E: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x00666231: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666233: add esp, 4 */
    _flag_k = FK_ADD;
L_00666236:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00666236: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x0066623D: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00666244: mov byte ptr [ebp - 0x44], 0 */
    eax = edi; /* 0x00666248: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066624A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066624D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666254: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666255: pop edi */
    esi = POP32_VAL(esp); /* 0x00666256: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666257: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00666258: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066625B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066625D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00666262: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666264: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00666265: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00666270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666270u);

L_00666270:
    PUSH32(esp, ebp); /* 0x00666270: push ebp */
    ebp = esp; /* 0x00666271: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666273: push -1 */
    PUSH32(esp, 0x007BC241u); /* 0x00666275: push 0x7bc241 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066627A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666280: push eax */
    PUSH32(esp, ecx); /* 0x00666281: push ecx */
    PUSH32(esp, esi); /* 0x00666282: push esi */
    eax = MEM32(0x855000); /* 0x00666283: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00666288: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066628A: push eax */
    eax = ebp + (-0xC); /* 0x0066628B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066628E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00666294: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00666296: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00666299: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC6C8)); /* 0x0066629C: call dword ptr [0x7cc6c8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006662A2: mov dword ptr [ebp - 4], 0 */
    MEM32(esi) = 0x007FC194u; /* 0x006662A9: mov dword ptr [esi], 0x7fc194 */
    MEM32(ebp + (-0x4)) = 1; /* 0x006662AF: mov dword ptr [ebp - 4], 1 */
    MEM32(esi) = 0x007FC1D4u; /* 0x006662B6: mov dword ptr [esi], 0x7fc1d4 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006662BC: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x006662C3: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006662C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006662C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006662CF: pop ecx */
    esi = POP32_VAL(esp); /* 0x006662D0: pop esi */
    esp = ebp; /* 0x006662D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006662D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006662D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006662E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006662E0u);

L_006662E0:
    PUSH32(esp, ebp); /* 0x006662E0: push ebp */
    ebp = esp; /* 0x006662E1: mov ebp, esp */
    edx = ecx; /* 0x006662E3: mov edx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x006662E5: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x006662E8: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666304; /* 0x006662EB: jne 0x666304 */
L_006662ED:
    /* cmp MEM32(edx + 0x14), 8 */ /* 0x006662ED: cmp dword ptr [edx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006662F5; /* 0x006662F1: jb 0x6662f5 */
L_006662F3:
    edx = MEM32(edx); /* 0x006662F3: mov edx, dword ptr [edx] */
L_006662F5:
    ecx = MEM32(ebp + 0x8); /* 0x006662F5: mov ecx, dword ptr [ebp + 8] */
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x006662F8: mov ax, word ptr [ebp + 0x10] */
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x006662FC: mov word ptr [edx + ecx*2], ax */
    ebp = POP32_VAL(esp); /* 0x00666300: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00666301: ret 0xc */
L_00666304:
    /* cmp MEM32(edx + 0x14), 8 */ /* 0x00666304: cmp dword ptr [edx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066630C; /* 0x00666308: jb 0x66630c */
L_0066630A:
    edx = MEM32(edx); /* 0x0066630A: mov edx, dword ptr [edx] */
L_0066630C:
    eax = MEM32(ebp + 0x8); /* 0x0066630C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0066630F: push edi */
    edi = edx + eax * 2; /* 0x00666310: lea edi, [edx + eax*2] */
    /* test ecx, ecx */ /* 0x00666313: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066632D; /* 0x00666315: je 0x66632d */
L_00666317:
    eax = MEM32(ebp + 0x10); /* 0x00666317: mov eax, dword ptr [ebp + 0x10] */
    edx = (uint32_t)LO16(eax); /* 0x0066631A: movzx edx, ax */
    eax = edx; /* 0x0066631D: mov eax, edx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x0066631F: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x0066631F: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x00666322: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00666324: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00666324: shr ecx, 1 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x00666326: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { uint32_t _aa = ecx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00666328: adc ecx, ecx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _n = ecx, _b = _n * 2u; /* 0x0066632A: rep stosw word ptr es:[edi], ax */ if (_df > 0) { MEMSET16((void*)ADDR(edi), (uint16_t)LO16(eax), _n); edi += _b; } else { MEMSET16((void*)ADDR(edi - _b + 2u), (uint16_t)LO16(eax), _n); edi -= _b; } ecx = 0; }
L_0066632D:
    edi = POP32_VAL(esp); /* 0x0066632D: pop edi */
    ebp = POP32_VAL(esp); /* 0x0066632E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066632F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00666340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666340u);

L_00666340:
    PUSH32(esp, ebp); /* 0x00666340: push ebp */
    ebp = esp; /* 0x00666341: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00666343: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x00666344: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x00666347: push ebx */
    PUSH32(esp, esi); /* 0x00666348: push esi */
    PUSH32(esp, edi); /* 0x00666349: push edi */
    edi = ecx; /* 0x0066634A: mov edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0066634C: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + 0x8); /* 0x0066634D: mov ecx, dword ptr [ebp + 8] */
L_00666350:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00666350: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00666352: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x00666354: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006663EC; /* 0x00666356: je 0x6663ec */
L_0066635C:
    esp = esp; /* 0x0066635C: lea esp, [esp] */
L_00666360:
    ecx = MEM32(edi + 0x4); /* 0x00666360: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00666363: dec ecx */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00666364: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x00666364: shl esi, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x00666366: add esi, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = esi; /* 0x00666368: mov dword ptr [ebp - 4], esi */
    goto L_00666370; /* 0x0066636B: jmp 0x666370 */
L_00666370:
    esi = MEM32(edi); /* 0x00666370: mov esi, dword ptr [edi] */
    eax = MEM32(esi); /* 0x00666372: mov eax, dword ptr [esi] */
    /* cmp eax, 0x270u */ /* 0x00666374: cmp eax, 0x270 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666384; /* 0x00666379: jne 0x666384 */
L_0066637B:
    ecx = esi; /* 0x0066637B: mov ecx, esi */
    RECOMP_CALL(sub_006664E0); /* 0x0066637D: call 0x6664e0 */
    RECOMP_FLAGS_IN();
    goto L_00666392; /* 0x00666382: jmp 0x666392 */
L_00666384:
    /* cmp eax, 0x4E0u */ /* 0x00666384: cmp eax, 0x4e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00666392; /* 0x00666389: jb 0x666392 */
L_0066638B:
    ecx = esi; /* 0x0066638B: mov ecx, esi */
    RECOMP_CALL(sub_00666420); /* 0x0066638D: call 0x666420 */
    RECOMP_FLAGS_IN();
L_00666392:
    eax = MEM32(esi); /* 0x00666392: mov eax, dword ptr [esi] */
    edx = MEM32(esi + eax * 4 + 0x4); /* 0x00666394: mov edx, dword ptr [esi + eax*4 + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00666398: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x00666399: mov dword ptr [esi], eax */
    ecx = edx; /* 0x0066639B: mov ecx, edx */
    eax = MEM32(esi + 0x1384); /* 0x0066639D: mov eax, dword ptr [esi + 0x1384] */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x006663A3: shr ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 11u; /* 0x006663A3: shr ecx, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x006663A6: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x006663A8: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x006663AA: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF3A58ADu);
    eax = eax & 0xFF3A58ADu; /* 0x006663AC: and eax, 0xff3a58ad */
    _cf = 0;
    _flag_k = FK_TEST;
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x006663B1: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x006663B1: shl eax, 7 */
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x006663B4: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x006663B6: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFDF8Cu);
    eax = eax & 0xFFFFDF8Cu; /* 0x006663B8: and eax, 0xffffdf8c */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x006663BD: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x006663BD: shl eax, 0xf */
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x006663C0: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x006663C2: mov eax, edx */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x006663C4: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x006663C4: shr eax, 0x12 */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x006663C7: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edi + 0x8) */ /* 0x006663C9: cmp eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_00666370; /* 0x006663CC: ja 0x666370 */
L_006663CE:
    ecx = MEM32(edi + 0x4); /* 0x006663CE: mov ecx, dword ptr [edi + 4] */
    esi = MEM32(ebp + (-0x4)); /* 0x006663D1: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006663D4: dec ecx */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006663D5: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x006663D5: shl ebx, cl */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006663D7: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x006663D9: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x006663DC: add ebx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | MEM32(edi + 0x8))); _flag_b = (uint32_t)((ebx | MEM32(edi + 0x8)));
    ebx = ebx | MEM32(edi + 0x8); /* 0x006663DE: or ebx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + (-0x1); /* 0x006663E1: lea eax, [ecx - 1] */
    /* cmp ebx, eax */ /* 0x006663E4: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00666360; /* 0x006663E6: jb 0x666360 */
L_006663EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006663EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x006663EE: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006663F0: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x006663F2: mov ecx, eax */
    ebx = edx; /* 0x006663F4: mov ebx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006663F6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x006663F8: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x8); /* 0x006663FA: div dword ptr [ebp + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, ecx */ /* 0x006663FD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x006663FF: mov ecx, dword ptr [ebp + 8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066640F; /* 0x00666402: jb 0x66640f */
L_00666404:
    eax = ecx + (-0x1); /* 0x00666404: lea eax, [ecx - 1] */
    /* cmp ebx, eax */ /* 0x00666407: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666350; /* 0x00666409: jne 0x666350 */
L_0066640F:
    eax = esi; /* 0x0066640F: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00666411: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x00666413: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x00666415: pop edi */
    esi = POP32_VAL(esp); /* 0x00666416: pop esi */
    eax = edx; /* 0x00666417: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x00666419: pop ebx */
    esp = ebp; /* 0x0066641A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066641C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066641D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00666420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666420u);

L_00666420:
    PUSH32(esp, ebx); /* 0x00666420: push ebx */
    ebx = ecx; /* 0x00666421: mov ebx, ecx */
    ecx = 0xE3u; /* 0x00666423: mov ecx, 0xe3 */
    PUSH32(esp, esi); /* 0x00666428: push esi */
    PUSH32(esp, edi); /* 0x00666429: push edi */
    edi = ebx + 0x9C4; /* 0x0066642A: lea edi, [ebx + 0x9c4] */
L_00666430:
    edx = MEM32(edi + 0x4); /* 0x00666430: mov edx, dword ptr [edi + 4] */
    edi = edi + 0x4; /* 0x00666433: lea edi, [edi + 4] */
    _flag_a = (uint32_t)((edx ^ MEM32(edi + (-0x4)))); _flag_b = (uint32_t)((edx ^ MEM32(edi + (-0x4))));
    edx = edx ^ MEM32(edi + (-0x4)); /* 0x00666436: xor edx, dword ptr [edi - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x00666439: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ MEM32(edi + (-0x4)))); _flag_b = (uint32_t)((edx ^ MEM32(edi + (-0x4))));
    edx = edx ^ MEM32(edi + (-0x4)); /* 0x0066643F: xor edx, dword ptr [edi - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x00666442: mov eax, edx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00666444: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x00666446: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00666449: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0066644B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0066644D: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0066644D: shr edx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x9908B0DFu);
    eax = eax & 0x9908B0DFu; /* 0x0066644F: and eax, 0x9908b0df */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x630))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x630)));
    eax = eax ^ MEM32(edi + 0x630); /* 0x00666454: xor eax, dword ptr [edi + 0x630] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x0066645A: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + (-0x9C4)) = eax; /* 0x0066645C: mov dword ptr [edi - 0x9c4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00666462: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00666430; /* 0x00666463: jne 0x666430 */
L_00666465:
    esi = ebx + 0xD50; /* 0x00666465: lea esi, [ebx + 0xd50] */
    edi = 0x18Cu; /* 0x0066646B: mov edi, 0x18c */
L_00666470:
    ecx = MEM32(esi); /* 0x00666470: mov ecx, dword ptr [esi] */
    esi = esi + 0x4; /* 0x00666472: lea esi, [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ MEM32(esi))); _flag_b = (uint32_t)((ecx ^ MEM32(esi)));
    ecx = ecx ^ MEM32(esi); /* 0x00666475: xor ecx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x00666477: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(esi + (-0x4)))); _flag_b = (uint32_t)((ecx ^ MEM32(esi + (-0x4))));
    ecx = ecx ^ MEM32(esi + (-0x4)); /* 0x0066647D: xor ecx, dword ptr [esi - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00666480: mov eax, ecx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00666482: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x00666484: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00666487: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00666489: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0066648B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0066648B: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x9908B0DFu);
    eax = eax & 0x9908B0DFu; /* 0x0066648D: and eax, 0x9908b0df */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + (-0xD50)))); _flag_b = (uint32_t)((eax ^ MEM32(esi + (-0xD50))));
    eax = eax ^ MEM32(esi + (-0xD50)); /* 0x00666492: xor eax, dword ptr [esi - 0xd50] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x00666498: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x9C4)) = eax; /* 0x0066649A: mov dword ptr [esi - 0x9c4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006664A0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00666470; /* 0x006664A1: jne 0x666470 */
L_006664A3:
    ecx = MEM32(ebx + 0x1380); /* 0x006664A3: mov ecx, dword ptr [ebx + 0x1380] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x4))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x4)));
    ecx = ecx ^ MEM32(ebx + 0x4); /* 0x006664A9: xor ecx, dword ptr [ebx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x006664AC: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x1380))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x1380)));
    ecx = ecx ^ MEM32(ebx + 0x1380); /* 0x006664B2: xor ecx, dword ptr [ebx + 0x1380] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x006664B8: mov eax, ecx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x006664BA: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x006664BC: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006664BF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006664C1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006664C3: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x006664C3: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x9908B0DFu);
    eax = eax & 0x9908B0DFu; /* 0x006664C5: and eax, 0x9908b0df */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x634))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x634)));
    eax = eax ^ MEM32(ebx + 0x634); /* 0x006664CA: xor eax, dword ptr [ebx + 0x634] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x006664D0: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x9C0) = eax; /* 0x006664D2: mov dword ptr [ebx + 0x9c0], eax */
    MEM32(ebx) = edi; /* 0x006664D8: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x006664DA: pop edi */
    esi = POP32_VAL(esp); /* 0x006664DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006664DC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006664DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006664E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006664E0u);

L_006664E0:
    PUSH32(esp, esi); /* 0x006664E0: push esi */
    eax = ecx + 0x8; /* 0x006664E1: lea eax, [ecx + 8] */
    esi = 0x270u; /* 0x006664E4: mov esi, 0x270 */
    esp = esp; /* 0x006664E9: lea esp, [esp] */
L_006664F0:
    edx = MEM32(eax + (-0x4)); /* 0x006664F0: mov edx, dword ptr [eax - 4] */
    eax = eax + 0x4; /* 0x006664F3: lea eax, [eax + 4] */
    _flag_a = (uint32_t)((edx ^ MEM32(eax + (-0x4)))); _flag_b = (uint32_t)((edx ^ MEM32(eax + (-0x4))));
    edx = edx ^ MEM32(eax + (-0x4)); /* 0x006664F6: xor edx, dword ptr [eax - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    edx = edx & 0x7FFFFFFFu; /* 0x006664F9: and edx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ MEM32(eax + (-0x8)))); _flag_b = (uint32_t)((edx ^ MEM32(eax + (-0x8))));
    edx = edx ^ MEM32(eax + (-0x8)); /* 0x006664FF: xor edx, dword ptr [eax - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x00666502: mov ecx, edx */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) & 1); /* 0x00666504: and cl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)LO8(ecx); /* 0x00666507: movzx ecx, cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x0066650A: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0066650C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0066650E: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0066650E: shr edx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9908B0DFu);
    ecx = ecx & 0x9908B0DFu; /* 0x00666510: and ecx, 0x9908b0df */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + 0x62C))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + 0x62C)));
    ecx = ecx ^ MEM32(eax + 0x62C); /* 0x00666516: xor ecx, dword ptr [eax + 0x62c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x0066651C: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x9B8) = ecx; /* 0x0066651E: mov dword ptr [eax + 0x9b8], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00666524: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006664F0; /* 0x00666525: jne 0x6664f0 */
L_00666527:
    esi = POP32_VAL(esp); /* 0x00666527: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00666528: ret  */
    RECOMP_REGS_OUT();
}

void sub_00666530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666530u);

L_00666530:
    PUSH32(esp, ebp); /* 0x00666530: push ebp */
    ebp = esp; /* 0x00666531: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666533: push -1 */
    PUSH32(esp, 0x007BC320u); /* 0x00666535: push 0x7bc320 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066653A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666540: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00666541: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00666544: push esi */
    eax = MEM32(0x855000); /* 0x00666545: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066654A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066654C: push eax */
    eax = ebp + (-0xC); /* 0x0066654D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666550: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00666556: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00666558: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066655B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x00666562: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x00666564: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x00666565: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x00666567: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0066656A: push eax */
    RECOMP_CALL(sub_00666AC0); /* 0x0066656B: call 0x666ac0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666570: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x00666577: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666579: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066657F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00666582: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666585: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066658C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066658D: pop esi */
    esp = ebp; /* 0x0066658E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666590: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00666591: ret  */
    RECOMP_REGS_OUT();
}

void sub_006665A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006665A0u);

L_006665A0:
    PUSH32(esp, ebp); /* 0x006665A0: push ebp */
    ebp = esp; /* 0x006665A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006665A3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006665A6: push ebx */
    PUSH32(esp, esi); /* 0x006665A7: push esi */
    PUSH32(esp, edi); /* 0x006665A8: push edi */
    ebx = ecx; /* 0x006665A9: mov ebx, ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006665AB: mov dword ptr [ebp - 8], edx */
    PUSH32(esp, ebx); /* 0x006665AE: push ebx */
    RECOMP_CALL(sub_00666B80); /* 0x006665AF: call 0x666b80 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x921990); /* 0x006665B4: mov edi, dword ptr [0x921990] */
    esi = eax; /* 0x006665BA: mov esi, eax */
    /* cmp esi, edi */ /* 0x006665BC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006665D7; /* 0x006665BE: je 0x6665d7 */
L_006665C0:
    eax = esi + 0x10; /* 0x006665C0: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x006665C3: push eax */
    PUSH32(esp, ebx); /* 0x006665C4: push ebx */
    RECOMP_CALL(sub_005E0380); /* 0x006665C5: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x921990); /* 0x006665CA: mov edi, dword ptr [0x921990] */
    MEM32(ebp + (-0x4)) = esi; /* 0x006665D0: mov dword ptr [ebp - 4], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x006665D3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006665DA; /* 0x006665D5: je 0x6665da */
L_006665D7:
    MEM32(ebp + (-0x4)) = edi; /* 0x006665D7: mov dword ptr [ebp - 4], edi */
L_006665DA:
    eax = ebp + (-0x4); /* 0x006665DA: lea eax, [ebp - 4] */
    eax = MEM32(eax); /* 0x006665DD: mov eax, dword ptr [eax] */
    /* cmp eax, edi */ /* 0x006665DF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006665E1: pop edi */
    esi = POP32_VAL(esp); /* 0x006665E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006665E3: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006665F1; /* 0x006665E4: je 0x6665f1 */
L_006665E6:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006665E6: push dword ptr [ebp - 8] */
    ecx = eax + 0x28; /* 0x006665E9: lea ecx, [eax + 0x28] */
    RECOMP_CALL(sub_0046D2F0); /* 0x006665EC: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
L_006665F1:
    esp = ebp; /* 0x006665F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006665F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006665F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00666600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666600u);

L_00666600:
    PUSH32(esp, ebp); /* 0x00666600: push ebp */
    ebp = esp; /* 0x00666601: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666603: push -1 */
    PUSH32(esp, 0x00789EE0u); /* 0x00666605: push 0x789ee0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066660A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666610: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00666611: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00666614: push esi */
    PUSH32(esp, edi); /* 0x00666615: push edi */
    eax = MEM32(0x855000); /* 0x00666616: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066661B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066661D: push eax */
    eax = ebp + (-0xC); /* 0x0066661E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666621: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00666627: mov edi, ecx */
    PUSH32(esp, edi); /* 0x00666629: push edi */
    RECOMP_CALL(sub_00666B80); /* 0x0066662A: call 0x666b80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0066662F: mov esi, eax */
    eax = MEM32(0x921990); /* 0x00666631: mov eax, dword ptr [0x921990] */
    /* cmp esi, eax */ /* 0x00666636: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666650; /* 0x00666638: je 0x666650 */
L_0066663A:
    eax = esi + 0x10; /* 0x0066663A: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x0066663D: push eax */
    PUSH32(esp, edi); /* 0x0066663E: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x0066663F: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666644: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = esi; /* 0x00666646: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(0x921990); /* 0x00666649: mov eax, dword ptr [0x921990] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666653; /* 0x0066664E: je 0x666653 */
L_00666650:
    MEM32(ebp + (-0x10)) = eax; /* 0x00666650: mov dword ptr [ebp - 0x10], eax */
L_00666653:
    esi = ebp + (-0x10); /* 0x00666653: lea esi, [ebp - 0x10] */
    esi = MEM32(esi); /* 0x00666656: mov esi, dword ptr [esi] */
    /* cmp esi, eax */ /* 0x00666658: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006666CF; /* 0x0066665A: jne 0x6666cf */
L_0066665C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066665C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066665F: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00666661: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FC268u); /* 0x00666664: push 0x7fc268 */
    RECOMP_CALL(sub_00409FA0); /* 0x00666669: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066666E: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x00666675: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066667D; /* 0x00666679: jb 0x66667d */
L_0066667B:
    edi = MEM32(edi); /* 0x0066667B: mov edi, dword ptr [edi] */
L_0066667D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066667D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00666680: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00666682: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, edi); /* 0x00666685: push edi */
    RECOMP_CALL(sub_00409FA0); /* 0x00666686: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066668B: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066668F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00666692: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x00666694: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007FC294u); /* 0x00666697: push 0x7fc294 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066669C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006666A1: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006666A5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006666A8: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x006666AA: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007FC24Cu); /* 0x006666AD: push 0x7fc24c */
    RECOMP_CALL(sub_00409FA0); /* 0x006666B2: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006666B7: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006666BB: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x35u; /* 0x006666C2: mov ecx, 0x35 */
    RECOMP_CALL(sub_00668A10); /* 0x006666C7: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x006666CC: add esp, 0x60 */
    _flag_k = FK_ADD;
L_006666CF:
    eax = esi + 0x28; /* 0x006666CF: lea eax, [esi + 0x28] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006666D2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006666D5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006666DC: pop ecx */
    edi = POP32_VAL(esp); /* 0x006666DD: pop edi */
    esi = POP32_VAL(esp); /* 0x006666DE: pop esi */
    esp = ebp; /* 0x006666DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006666E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006666E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_00666666(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666666u);

L_00666666:
    RECOMP_FLAGS_OUT(); esp += 131; { RECOMP_REGS_OUT(); return; } /* 0x00666666: ret 0x7f */
    RECOMP_REGS_OUT();
}

void sub_006666F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006666F0u);

L_006666F0:
    PUSH32(esp, ebp); /* 0x006666F0: push ebp */
    ebp = esp; /* 0x006666F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006666F3: push esi */
    PUSH32(esp, edi); /* 0x006666F4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006666F5: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006666F8: push edi */
    RECOMP_CALL(sub_00666B80); /* 0x006666F9: call 0x666b80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006666FE: mov esi, eax */
    /* cmp esi, MEM32(0x921990) */ /* 0x00666700: cmp esi, dword ptr [0x921990] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x921990));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066671F; /* 0x00666706: je 0x66671f */
L_00666708:
    eax = esi + 0x10; /* 0x00666708: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x0066670B: push eax */
    PUSH32(esp, edi); /* 0x0066670C: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x0066670D: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666712: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066671F; /* 0x00666714: jne 0x66671f */
L_00666716:
    edi = POP32_VAL(esp); /* 0x00666716: pop edi */
    eax = esi + 0x28; /* 0x00666717: lea eax, [esi + 0x28] */
    esi = POP32_VAL(esp); /* 0x0066671A: pop esi */
    ebp = POP32_VAL(esp); /* 0x0066671B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066671C: ret 4 */
L_0066671F:
    PUSH32(esp, ecx); /* 0x0066671F: push ecx */
    eax = ebp + 0x8; /* 0x00666720: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x00666723: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x00666726: push eax */
    PUSH32(esp, ecx); /* 0x00666727: push ecx */
    RECOMP_CALL(sub_00666E30); /* 0x00666728: call 0x666e30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0066672D: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066672E: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = 0x00921990u; /* 0x00666731: mov ecx, 0x921990 */
    PUSH32(esp, eax); /* 0x00666736: push eax */
    PUSH32(esp, esi); /* 0x00666737: push esi */
    eax = ebp + 0x8; /* 0x00666738: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x0066673B: push eax */
    RECOMP_CALL(sub_00666EF0); /* 0x0066673C: call 0x666ef0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00666741: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x00666744: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x00666745: add eax, 0x28 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00666748: pop esi */
    ebp = POP32_VAL(esp); /* 0x00666749: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066674A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00666750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666750u);

L_00666750:
    PUSH32(esp, ebp); /* 0x00666750: push ebp */
    ebp = esp; /* 0x00666751: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666753: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x00666755: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066675A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666760: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00666761: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00666764: push esi */
    eax = MEM32(0x855000); /* 0x00666765: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066676A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066676C: push eax */
    eax = ebp + (-0xC); /* 0x0066676D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666770: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00666776: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00666778: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066677B: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x00666782: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x00666784: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x00666785: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x00666787: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0066678A: push eax */
    RECOMP_CALL(sub_00666AC0); /* 0x0066678B: call 0x666ac0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666790: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x00666797: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666799: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066679F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006667A2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006667A5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006667AC: pop ecx */
    esi = POP32_VAL(esp); /* 0x006667AD: pop esi */
    esp = ebp; /* 0x006667AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006667B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006667B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006667C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006667C0u);

L_006667C0:
    PUSH32(esp, ebp); /* 0x006667C0: push ebp */
    ebp = esp; /* 0x006667C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006667C3: push -1 */
    PUSH32(esp, 0x007BC389u); /* 0x006667C5: push 0x7bc389 */
    eax = MEM32(FS_BASE + (0)); /* 0x006667CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006667D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006667D1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006667D4: push ebx */
    PUSH32(esp, esi); /* 0x006667D5: push esi */
    PUSH32(esp, edi); /* 0x006667D6: push edi */
    eax = MEM32(0x855000); /* 0x006667D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006667DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006667DE: push eax */
    eax = ebp + (-0xC); /* 0x006667DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006667E2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x006667E8: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x006667EA: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x006667ED: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006667F0: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x006667F3: call 0x40b880 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x006667F8: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ecx); /* 0x006667FB: mov esi, dword ptr [ecx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x006667FD: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666808; /* 0x00666801: je 0x666808 */
L_00666803:
    edi = MEM32(ecx + 0x8); /* 0x00666803: mov edi, dword ptr [ecx + 8] */
    goto L_0066681F; /* 0x00666806: jmp 0x66681f */
L_00666808:
    eax = MEM32(ecx + 0x8); /* 0x00666808: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0066680B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666815; /* 0x0066680F: je 0x666815 */
L_00666811:
    edi = esi; /* 0x00666811: mov edi, esi */
    goto L_0066681F; /* 0x00666813: jmp 0x66681f */
L_00666815:
    edx = MEM32(ebp + 0xC); /* 0x00666815: mov edx, dword ptr [ebp + 0xc] */
    edi = MEM32(edx + 0x8); /* 0x00666818: mov edi, dword ptr [edx + 8] */
    /* cmp edx, ecx */ /* 0x0066681B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666892; /* 0x0066681D: jne 0x666892 */
L_0066681F:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0066681F: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x00666823: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066682B; /* 0x00666826: jne 0x66682b */
L_00666828:
    MEM32(edi + 0x4) = esi; /* 0x00666828: mov dword ptr [edi + 4], esi */
L_0066682B:
    eax = MEM32(ebx); /* 0x0066682B: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x0066682D: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666837; /* 0x00666830: jne 0x666837 */
L_00666832:
    MEM32(eax + 0x4) = edi; /* 0x00666832: mov dword ptr [eax + 4], edi */
    goto L_00666842; /* 0x00666835: jmp 0x666842 */
L_00666837:
    /* cmp MEM32(esi), ecx */ /* 0x00666837: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066683F; /* 0x00666839: jne 0x66683f */
L_0066683B:
    MEM32(esi) = edi; /* 0x0066683B: mov dword ptr [esi], edi */
    goto L_00666842; /* 0x0066683D: jmp 0x666842 */
L_0066683F:
    MEM32(esi + 0x8) = edi; /* 0x0066683F: mov dword ptr [esi + 8], edi */
L_00666842:
    eax = MEM32(ebx); /* 0x00666842: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), ecx */ /* 0x00666844: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066686E; /* 0x00666846: jne 0x66686e */
L_00666848:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00666848: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666852; /* 0x0066684C: je 0x666852 */
L_0066684E:
    edx = esi; /* 0x0066684E: mov edx, esi */
    goto L_0066686C; /* 0x00666850: jmp 0x66686c */
L_00666852:
    eax = MEM32(edi); /* 0x00666852: mov eax, dword ptr [edi] */
    edx = edi; /* 0x00666854: mov edx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666856: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066686A; /* 0x0066685A: jne 0x66686a */
L_0066685C:
    esp = esp; /* 0x0066685C: lea esp, [esp] */
L_00666860:
    edx = eax; /* 0x00666860: mov edx, eax */
    eax = MEM32(edx); /* 0x00666862: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666864: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666860; /* 0x00666868: je 0x666860 */
L_0066686A:
    eax = MEM32(ebx); /* 0x0066686A: mov eax, dword ptr [ebx] */
L_0066686C:
    MEM32(eax) = edx; /* 0x0066686C: mov dword ptr [eax], edx */
L_0066686E:
    eax = MEM32(ebx); /* 0x0066686E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x00666870: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006668EE; /* 0x00666873: jne 0x6668ee */
L_00666875:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00666875: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666884; /* 0x00666879: je 0x666884 */
L_0066687B:
    ecx = MEM32(ebx); /* 0x0066687B: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x0066687D: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x0066687F: mov dword ptr [ecx + 8], eax */
    goto L_006668EE; /* 0x00666882: jmp 0x6668ee */
L_00666884:
    ecx = edi; /* 0x00666884: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x00666886: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x0066688B: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x8) = eax; /* 0x0066688D: mov dword ptr [ecx + 8], eax */
    goto L_006668EE; /* 0x00666890: jmp 0x6668ee */
L_00666892:
    MEM32(esi + 0x4) = edx; /* 0x00666892: mov dword ptr [esi + 4], edx */
    eax = MEM32(ecx); /* 0x00666895: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x00666897: mov dword ptr [edx], eax */
    /* cmp edx, MEM32(ecx + 0x8) */ /* 0x00666899: cmp edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006668A2; /* 0x0066689C: jne 0x6668a2 */
L_0066689E:
    esi = edx; /* 0x0066689E: mov esi, edx */
    goto L_006668BC; /* 0x006668A0: jmp 0x6668bc */
L_006668A2:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x006668A2: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x006668A6: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006668AE; /* 0x006668A9: jne 0x6668ae */
L_006668AB:
    MEM32(edi + 0x4) = esi; /* 0x006668AB: mov dword ptr [edi + 4], esi */
L_006668AE:
    MEM32(esi) = edi; /* 0x006668AE: mov dword ptr [esi], edi */
    eax = MEM32(ecx + 0x8); /* 0x006668B0: mov eax, dword ptr [ecx + 8] */
    MEM32(edx + 0x8) = eax; /* 0x006668B3: mov dword ptr [edx + 8], eax */
    eax = MEM32(ecx + 0x8); /* 0x006668B6: mov eax, dword ptr [ecx + 8] */
    MEM32(eax + 0x4) = edx; /* 0x006668B9: mov dword ptr [eax + 4], edx */
L_006668BC:
    eax = MEM32(ebx); /* 0x006668BC: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x006668BE: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006668C8; /* 0x006668C1: jne 0x6668c8 */
L_006668C3:
    MEM32(eax + 0x4) = edx; /* 0x006668C3: mov dword ptr [eax + 4], edx */
    goto L_006668D6; /* 0x006668C6: jmp 0x6668d6 */
L_006668C8:
    eax = MEM32(ecx + 0x4); /* 0x006668C8: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(eax), ecx */ /* 0x006668CB: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006668D3; /* 0x006668CD: jne 0x6668d3 */
L_006668CF:
    MEM32(eax) = edx; /* 0x006668CF: mov dword ptr [eax], edx */
    goto L_006668D6; /* 0x006668D1: jmp 0x6668d6 */
L_006668D3:
    MEM32(eax + 0x8) = edx; /* 0x006668D3: mov dword ptr [eax + 8], edx */
L_006668D6:
    eax = MEM32(ecx + 0x4); /* 0x006668D6: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x006668D9: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x006668DC: mov eax, dword ptr [ebp - 0x10] */
    SET_LO8(ecx, MEM8(edx + 0xC)); /* 0x006668DF: mov cl, byte ptr [edx + 0xc] */
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x006668E2: mov al, byte ptr [eax + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x006668E5: mov byte ptr [edx + 0xc], al */
    eax = MEM32(ebp + (-0x10)); /* 0x006668E8: mov eax, dword ptr [ebp - 0x10] */
    MEM8(eax + 0xC) = (uint8_t)(LO8(ecx)); /* 0x006668EB: mov byte ptr [eax + 0xc], cl */
L_006668EE:
    ecx = MEM32(ebp + (-0x10)); /* 0x006668EE: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM8(ecx + 0xC), 1 */ /* 0x006668F1: cmp byte ptr [ecx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666A03; /* 0x006668F5: jne 0x666a03 */
L_006668FB:
    eax = MEM32(ebx); /* 0x006668FB: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x006668FD: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006669FF; /* 0x00666900: je 0x6669ff */
L_00666906:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x00666906: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669FC; /* 0x0066690A: jne 0x6669fc */
L_00666910:
    ecx = MEM32(esi); /* 0x00666910: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x00666912: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666982; /* 0x00666914: jne 0x666982 */
L_00666916:
    ecx = MEM32(esi + 0x8); /* 0x00666916: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00666919: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666932; /* 0x0066691D: jne 0x666932 */
L_0066691F:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x0066691F: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x00666923: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x00666925: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x00666926: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x0066692A: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x0066692F: mov ecx, dword ptr [esi + 8] */
L_00666932:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x00666932: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669B5; /* 0x00666936: jne 0x6669b5 */
L_00666938:
    eax = MEM32(ecx); /* 0x00666938: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0066693A: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666949; /* 0x0066693E: jne 0x666949 */
L_00666940:
    eax = MEM32(ecx + 0x8); /* 0x00666940: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x00666943: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006669B1; /* 0x00666947: je 0x6669b1 */
L_00666949:
    eax = MEM32(ecx + 0x8); /* 0x00666949: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0066694C: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666967; /* 0x00666950: jne 0x666967 */
L_00666952:
    eax = MEM32(ecx); /* 0x00666952: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x00666954: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00666955: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x00666959: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x0066695D: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x0066695F: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x00666964: mov ecx, dword ptr [esi + 8] */
L_00666967:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x00666967: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x0066696A: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x0066696D: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x00666971: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x00666974: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x00666976: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00666977: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x0066697B: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_006669FC; /* 0x00666980: jmp 0x6669fc */
L_00666982:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00666982: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066699A; /* 0x00666986: jne 0x66699a */
L_00666988:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x00666988: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x0066698C: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0066698E: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x0066698F: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x00666993: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x00666998: mov ecx, dword ptr [esi] */
L_0066699A:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x0066699A: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669B5; /* 0x0066699E: jne 0x6669b5 */
L_006669A0:
    eax = MEM32(ecx + 0x8); /* 0x006669A0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006669A3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669C7; /* 0x006669A7: jne 0x6669c7 */
L_006669A9:
    eax = MEM32(ecx); /* 0x006669A9: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006669AB: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669C7; /* 0x006669AF: jne 0x6669c7 */
L_006669B1:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x006669B1: mov byte ptr [ecx + 0xc], 0 */
L_006669B5:
    eax = MEM32(ebx); /* 0x006669B5: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x006669B7: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x006669B9: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x006669BC: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666906; /* 0x006669BF: jne 0x666906 */
L_006669C5:
    goto L_006669FC; /* 0x006669C5: jmp 0x6669fc */
L_006669C7:
    eax = MEM32(ecx); /* 0x006669C7: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x006669C9: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006669E4; /* 0x006669CD: jne 0x6669e4 */
L_006669CF:
    eax = MEM32(ecx + 0x8); /* 0x006669CF: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x006669D2: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006669D3: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x006669D7: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x006669DB: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x006669DD: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x006669E2: mov ecx, dword ptr [esi] */
L_006669E4:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x006669E4: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x006669E7: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x006669EA: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x006669EE: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x006669F0: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x006669F2: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006669F3: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x006669F7: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_006669FC:
    ecx = MEM32(ebp + (-0x10)); /* 0x006669FC: mov ecx, dword ptr [ebp - 0x10] */
L_006669FF:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x006669FF: mov byte ptr [edi + 0xc], 1 */
L_00666A03:
    esi = ecx + 0x10; /* 0x00666A03: lea esi, [ecx + 0x10] */
    MEM32(ebp + (-0x14)) = esi; /* 0x00666A06: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00666A09: mov dword ptr [ebp - 4], 0 */
    edi = esi + 0x18; /* 0x00666A10: lea edi, [esi + 0x18] */
    MEM32(ebp + (-0x18)) = edi; /* 0x00666A13: mov dword ptr [ebp - 0x18], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00666A16: mov byte ptr [ebp - 4], 3 */
    eax = edi + 0x8; /* 0x00666A1A: lea eax, [edi + 8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00666A1D: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00666A20: mov byte ptr [ebp - 4], 3 */
    ecx = MEM32(eax); /* 0x00666A24: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x00666A26: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666A30; /* 0x00666A28: je 0x666a30 */
L_00666A2A:
    eax = MEM32(ecx); /* 0x00666A2A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666A2C: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666A2E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666A30:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00666A30: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0x4; /* 0x00666A34: lea eax, [edi + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00666A37: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00666A3A: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(eax); /* 0x00666A3E: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x00666A40: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666A4A; /* 0x00666A42: je 0x666a4a */
L_00666A44:
    eax = MEM32(ecx); /* 0x00666A44: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666A46: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666A48: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666A4A:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666A4A: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x1C)) = edi; /* 0x00666A4E: mov dword ptr [ebp - 0x1c], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666A51: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(edi); /* 0x00666A55: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x00666A57: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666A61; /* 0x00666A59: je 0x666a61 */
L_00666A5B:
    eax = MEM32(ecx); /* 0x00666A5B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666A5D: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666A5F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666A61:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666A61: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00666A68: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00666A6C: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00666A7B; /* 0x00666A72: jb 0x666a7b */
L_00666A74:
    PUSH32(esp, MEM32(esi)); /* 0x00666A74: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00666A76: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666A78: add esp, 4 */
    _flag_k = FK_ADD;
L_00666A7B:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x00666A7B: push dword ptr [ebp - 0x10] */
    MEM32(esi + 0x14) = 0xFu; /* 0x00666A7E: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00666A85: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00666A8C: mov byte ptr [esi], 0 */
    RECOMP_ICALL(edi); /* 0x00666A8F: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x00666A91: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666A94: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x00666A97: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x00666A9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666AA2; /* 0x00666A9C: je 0x666aa2 */
L_00666A9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00666A9E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x00666A9F: mov dword ptr [ebx + 4], eax */
L_00666AA2:
    eax = MEM32(ebp + 0x8); /* 0x00666AA2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x00666AA5: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00666AA7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666AAA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666AB1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666AB2: pop edi */
    esi = POP32_VAL(esp); /* 0x00666AB3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666AB4: pop ebx */
    esp = ebp; /* 0x00666AB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666AB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00666AB8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00666AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666AC0u);

L_00666AC0:
    PUSH32(esp, ebp); /* 0x00666AC0: push ebp */
    ebp = esp; /* 0x00666AC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00666AC3: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x00666AC4: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x00666AC7: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x00666ACA: push esi */
    esi = ecx; /* 0x00666ACB: mov esi, ecx */
    ecx = MEM32(esi); /* 0x00666ACD: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x00666ACF: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B06; /* 0x00666AD1: jne 0x666b06 */
L_00666AD3:
    /* cmp edx, ecx */ /* 0x00666AD3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B06; /* 0x00666AD5: jne 0x666b06 */
L_00666AD7:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x00666AD7: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x00666ADA: mov ecx, esi */
    RECOMP_CALL(sub_00666C70); /* 0x00666ADC: call 0x666c70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x00666AE1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x00666AE3: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x00666AE6: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x00666AE8: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x00666AEA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x00666AEC: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x00666AEF: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x00666AF1: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x00666AF8: pop esi */
    ecx = MEM32(eax); /* 0x00666AF9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x00666AFB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x00666AFE: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x00666B00: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666B02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00666B03: ret 0xc */
L_00666B06:
    /* cmp eax, edx */ /* 0x00666B06: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666B6F; /* 0x00666B08: je 0x666b6f */
L_00666B0A:
    ebx = ebx; /* 0x00666B0A: lea ebx, [ebx] */
L_00666B10:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666B10: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x00666B14: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B5B; /* 0x00666B16: jne 0x666b5b */
L_00666B18:
    edx = MEM32(eax + 0x8); /* 0x00666B18: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x00666B1B: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B3C; /* 0x00666B1F: jne 0x666b3c */
L_00666B21:
    eax = MEM32(edx); /* 0x00666B21: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666B23: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B58; /* 0x00666B27: jne 0x666b58 */
L_00666B29:
    esp = esp; /* 0x00666B29: lea esp, [esp] */
L_00666B30:
    edx = eax; /* 0x00666B30: mov edx, eax */
    eax = MEM32(edx); /* 0x00666B32: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666B34: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666B30; /* 0x00666B38: je 0x666b30 */
L_00666B3A:
    goto L_00666B58; /* 0x00666B3A: jmp 0x666b58 */
L_00666B3C:
    edx = MEM32(eax + 0x4); /* 0x00666B3C: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x00666B3F: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B58; /* 0x00666B43: jne 0x666b58 */
L_00666B45:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x00666B45: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B58; /* 0x00666B48: jne 0x666b58 */
L_00666B4A:
    eax = edx; /* 0x00666B4A: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x00666B4C: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x00666B4F: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x00666B52: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666B45; /* 0x00666B56: je 0x666b45 */
L_00666B58:
    MEM32(ebp + 0xC) = edx; /* 0x00666B58: mov dword ptr [ebp + 0xc], edx */
L_00666B5B:
    PUSH32(esp, ecx); /* 0x00666B5B: push ecx */
    eax = ebp + (-0x4); /* 0x00666B5C: lea eax, [ebp - 4] */
    ecx = esi; /* 0x00666B5F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00666B61: push eax */
    RECOMP_CALL(sub_006667C0); /* 0x00666B62: call 0x6667c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x00666B67: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x00666B6A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666B10; /* 0x00666B6D: jne 0x666b10 */
L_00666B6F:
    ecx = MEM32(ebp + 0x8); /* 0x00666B6F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x00666B72: pop esi */
    MEM32(ecx) = eax; /* 0x00666B73: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x00666B75: mov eax, ecx */
    esp = ebp; /* 0x00666B77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666B79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00666B7A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00666B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666B80u);

L_00666B80:
    PUSH32(esp, ebp); /* 0x00666B80: push ebp */
    ebp = esp; /* 0x00666B81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00666B83: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00666B86: push ebx */
    ebx = MEM32(0x921990); /* 0x00666B87: mov ebx, dword ptr [0x921990] */
    PUSH32(esp, edi); /* 0x00666B8D: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x00666B8E: mov dword ptr [ebp - 8], ebx */
    edi = MEM32(ebx + 0x4); /* 0x00666B91: mov edi, dword ptr [ebx + 4] */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00666B94: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666C5F; /* 0x00666B98: jne 0x666c5f */
L_00666B9E:
    edx = MEM32(ebp + 0x8); /* 0x00666B9E: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00666BA1: push esi */
    ecx = MEM32(edx + 0x10); /* 0x00666BA2: mov ecx, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x00666BA5: mov dword ptr [ebp - 4], ecx */
    goto L_00666BB0; /* 0x00666BA8: jmp 0x666bb0 */
L_00666BB0:
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x00666BB0: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x10; /* 0x00666BB4: lea eax, [edi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00666BBD; /* 0x00666BB7: jb 0x666bbd */
L_00666BB9:
    esi = MEM32(edx); /* 0x00666BB9: mov esi, dword ptr [edx] */
    goto L_00666BBF; /* 0x00666BBB: jmp 0x666bbf */
L_00666BBD:
    esi = edx; /* 0x00666BBD: mov esi, edx */
L_00666BBF:
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00666BBF: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(eax + 0x10); /* 0x00666BC3: mov ebx, dword ptr [eax + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00666BCA; /* 0x00666BC6: jb 0x666bca */
L_00666BC8:
    eax = MEM32(eax); /* 0x00666BC8: mov eax, dword ptr [eax] */
L_00666BCA:
    /* cmp ebx, ecx */ /* 0x00666BCA: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x00666BCC: mov edx, ecx */
    if (CMP_B(_flag_a, _flag_b)) { edx = ebx; } /* 0x00666BCE: cmovb edx, ebx */
    /* test edx, edx */ /* 0x00666BD1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666C33; /* 0x00666BD3: je 0x666c33 */
L_00666BD5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x00666BD5: sub edx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_00666BF1; /* 0x00666BD8: jb 0x666bf1 */
L_00666BDA:
    ebx = ebx; /* 0x00666BDA: lea ebx, [ebx] */
L_00666BE0:
    ecx = MEM32(eax); /* 0x00666BE0: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi) */ /* 0x00666BE2: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666BF6; /* 0x00666BE4: jne 0x666bf6 */
L_00666BE6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00666BE6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x00666BE9: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x00666BEC: sub edx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00666BE0; /* 0x00666BEF: jae 0x666be0 */
L_00666BF1:
    /* cmp edx, 0xFFFFFFFCu */ /* 0x00666BF1: cmp edx, -4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666C2A; /* 0x00666BF4: je 0x666c2a */
L_00666BF6:
    SET_LO8(ecx, MEM8(eax)); /* 0x00666BF6: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(esi) */ /* 0x00666BF8: cmp cl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666C23; /* 0x00666BFA: jne 0x666c23 */
L_00666BFC:
    /* cmp edx, 0xFFFFFFFDu */ /* 0x00666BFC: cmp edx, -3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666C2A; /* 0x00666BFF: je 0x666c2a */
L_00666C01:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x00666C01: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(esi + 0x1) */ /* 0x00666C04: cmp cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666C23; /* 0x00666C07: jne 0x666c23 */
L_00666C09:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x00666C09: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666C2A; /* 0x00666C0C: je 0x666c2a */
L_00666C0E:
    SET_LO8(ecx, MEM8(eax + 0x2)); /* 0x00666C0E: mov cl, byte ptr [eax + 2] */
    /* cmp LO8(ecx), MEM8(esi + 0x2) */ /* 0x00666C11: cmp cl, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666C23; /* 0x00666C14: jne 0x666c23 */
L_00666C16:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x00666C16: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666C2A; /* 0x00666C19: je 0x666c2a */
L_00666C1B:
    SET_LO8(eax, MEM8(eax + 0x3)); /* 0x00666C1B: mov al, byte ptr [eax + 3] */
    /* cmp LO8(eax), MEM8(esi + 0x3) */ /* 0x00666C1E: cmp al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666C2A; /* 0x00666C21: je 0x666c2a */
L_00666C23:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00666C23: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x00666C25: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00666C2C; /* 0x00666C28: jmp 0x666c2c */
L_00666C2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00666C2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_00666C2C:
    ecx = MEM32(ebp + (-0x4)); /* 0x00666C2C: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x00666C2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00666C40; /* 0x00666C31: jne 0x666c40 */
L_00666C33:
    /* cmp ebx, ecx */ /* 0x00666C33: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00666C4B; /* 0x00666C35: jb 0x666c4b */
L_00666C37:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00666C37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, ecx */ /* 0x00666C39: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00666C3B: setne al */
    /* test eax, eax */ /* 0x00666C3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_00666C40:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_00666C4B; /* 0x00666C40: js 0x666c4b */
L_00666C42:
    ebx = edi; /* 0x00666C42: mov ebx, edi */
    edi = MEM32(edi); /* 0x00666C44: mov edi, dword ptr [edi] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x00666C46: mov dword ptr [ebp - 8], ebx */
    goto L_00666C51; /* 0x00666C49: jmp 0x666c51 */
L_00666C4B:
    edi = MEM32(edi + 0x8); /* 0x00666C4B: mov edi, dword ptr [edi + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x00666C4E: mov ebx, dword ptr [ebp - 8] */
L_00666C51:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x00666C51: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(ebp + 0x8); /* 0x00666C55: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666BB0; /* 0x00666C58: je 0x666bb0 */
L_00666C5E:
    esi = POP32_VAL(esp); /* 0x00666C5E: pop esi */
L_00666C5F:
    edi = POP32_VAL(esp); /* 0x00666C5F: pop edi */
    eax = ebx; /* 0x00666C60: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x00666C62: pop ebx */
    esp = ebp; /* 0x00666C63: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666C65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00666C66: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00666C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666C70u);

L_00666C70:
    PUSH32(esp, ebp); /* 0x00666C70: push ebp */
    ebp = esp; /* 0x00666C71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666C73: push -1 */
    PUSH32(esp, 0x007BC389u); /* 0x00666C75: push 0x7bc389 */
    eax = MEM32(FS_BASE + (0)); /* 0x00666C7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666C80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00666C81: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00666C84: push ebx */
    PUSH32(esp, esi); /* 0x00666C85: push esi */
    PUSH32(esp, edi); /* 0x00666C86: push edi */
    eax = MEM32(0x855000); /* 0x00666C87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00666C8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00666C8E: push eax */
    eax = ebp + (-0xC); /* 0x00666C8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666C92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00666C98: mov dword ptr [ebp - 0x10], ecx */
    esi = MEM32(ebp + 0x8); /* 0x00666C9B: mov esi, dword ptr [ebp + 8] */
    ebx = esi; /* 0x00666C9E: mov ebx, esi */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x00666CA0: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666D5F; /* 0x00666CA4: jne 0x666d5f */
L_00666CAA:
    ebx = ebx; /* 0x00666CAA: lea ebx, [ebx] */
L_00666CB0:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x00666CB0: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_00666C70); /* 0x00666CB3: call 0x666c70 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebx); /* 0x00666CB8: mov ebx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x00666CBA: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = esi; /* 0x00666CBD: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00666CC0: mov dword ptr [ebp - 4], 0 */
    edi = esi + 0x18; /* 0x00666CC7: lea edi, [esi + 0x18] */
    MEM32(ebp + (-0x18)) = edi; /* 0x00666CCA: mov dword ptr [ebp - 0x18], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00666CCD: mov byte ptr [ebp - 4], 3 */
    eax = edi + 0x8; /* 0x00666CD1: lea eax, [edi + 8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00666CD4: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00666CD7: mov byte ptr [ebp - 4], 3 */
    ecx = MEM32(eax); /* 0x00666CDB: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x00666CDD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666CE7; /* 0x00666CDF: je 0x666ce7 */
L_00666CE1:
    eax = MEM32(ecx); /* 0x00666CE1: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666CE3: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666CE5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666CE7:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00666CE7: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0x4; /* 0x00666CEB: lea eax, [edi + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00666CEE: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00666CF1: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(eax); /* 0x00666CF5: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x00666CF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666D01; /* 0x00666CF9: je 0x666d01 */
L_00666CFB:
    eax = MEM32(ecx); /* 0x00666CFB: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666CFD: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666CFF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666D01:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666D01: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x1C)) = edi; /* 0x00666D05: mov dword ptr [ebp - 0x1c], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666D08: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(edi); /* 0x00666D0C: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x00666D0E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666D18; /* 0x00666D10: je 0x666d18 */
L_00666D12:
    eax = MEM32(ecx); /* 0x00666D12: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00666D14: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x00666D16: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_00666D18:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666D18: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00666D1F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00666D30; /* 0x00666D23: jb 0x666d30 */
L_00666D25:
    PUSH32(esp, MEM32(esi)); /* 0x00666D25: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666D27: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666D2D: add esp, 4 */
    _flag_k = FK_ADD;
L_00666D30:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00666D30: push dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x00666D33: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00666D3A: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00666D41: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666D44: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x00666D4A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666D4D: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x00666D50: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = ebx; /* 0x00666D54: mov esi, ebx */
    MEM32(ebp + 0x8) = esi; /* 0x00666D56: mov dword ptr [ebp + 8], esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666CB0; /* 0x00666D59: je 0x666cb0 */
L_00666D5F:
    ecx = MEM32(ebp + (-0xC)); /* 0x00666D5F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666D62: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666D69: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666D6A: pop edi */
    esi = POP32_VAL(esp); /* 0x00666D6B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666D6C: pop ebx */
    esp = ebp; /* 0x00666D6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666D6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00666D70: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00666D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666D80u);

L_00666D80:
    PUSH32(esp, ebp); /* 0x00666D80: push ebp */
    ebp = esp; /* 0x00666D81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666D83: push -1 */
    PUSH32(esp, 0x007BC3B0u); /* 0x00666D85: push 0x7bc3b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00666D8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666D90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00666D91: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00666D94: push ebx */
    PUSH32(esp, esi); /* 0x00666D95: push esi */
    PUSH32(esp, edi); /* 0x00666D96: push edi */
    eax = MEM32(0x855000); /* 0x00666D97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00666D9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00666D9E: push eax */
    eax = ebp + (-0xC); /* 0x00666D9F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666DA2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00666DA8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x34u); /* 0x00666DAB: push 0x34 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00666DAD: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666DB3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00666DB6: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x00666DB8: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x00666DBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00666DC5; /* 0x00666DBD: jne 0x666dc5 */
L_00666DBF:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00666DBF: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00666DC5:
    MEM32(ebp + (-0x14)) = esi; /* 0x00666DC5: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00666DC8: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x00666DCF: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00666DD2: push eax */
    PUSH32(esp, esi); /* 0x00666DD3: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x00666DD4: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x00666DD9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00666DDC: push eax */
    eax = esi + 0x4; /* 0x00666DDD: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x00666DE0: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x00666DE1: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x00666DE6: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00666DE9: push eax */
    eax = esi + 0x8; /* 0x00666DEA: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x00666DED: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x00666DEE: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666DF3: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x00666DFA: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x00666E00: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00666E02: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666E05: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666E0C: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666E0D: pop edi */
    esi = POP32_VAL(esp); /* 0x00666E0E: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666E0F: pop ebx */
    esp = ebp; /* 0x00666E10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00666E13: ret  */
    RECOMP_REGS_OUT();
}

void sub_00666E14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666E14u);

L_00666E14:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x00666E14: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666E17: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666E1D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00666E20: push 0 */
    PUSH32(esp, 0); /* 0x00666E22: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00666E24: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00666E29u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00666E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666E30u);

L_00666E30:
    PUSH32(esp, ebp); /* 0x00666E30: push ebp */
    ebp = esp; /* 0x00666E31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666E33: push -1 */
    PUSH32(esp, 0x007BC3DDu); /* 0x00666E35: push 0x7bc3dd */
    eax = MEM32(FS_BASE + (0)); /* 0x00666E3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666E40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00666E41: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00666E44: push ebx */
    PUSH32(esp, esi); /* 0x00666E45: push esi */
    PUSH32(esp, edi); /* 0x00666E46: push edi */
    eax = MEM32(0x855000); /* 0x00666E47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00666E4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00666E4E: push eax */
    eax = ebp + (-0xC); /* 0x00666E4F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666E52: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00666E58: mov dword ptr [ebp - 0x10], esp */
    ecx = 0x00921990u; /* 0x00666E5B: mov ecx, 0x921990 */
    RECOMP_CALL(sub_00667120); /* 0x00666E60: call 0x667120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00666E65: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x00666E67: mov dword ptr [ebp - 0x1c], esi */
    MEM16(esi + 0xC) = (uint16_t)(0); /* 0x00666E6A: mov word ptr [esi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00666E70: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x10; /* 0x00666E77: lea ecx, [esi + 0x10] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x00666E7A: mov dword ptr [ebp - 0x20], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00666E7D: mov byte ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x00666E81: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666EAD; /* 0x00666E83: je 0x666ead */
L_00666E85:
    eax = MEM32(ebp + 0xC); /* 0x00666E85: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x00666E88: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x18)) = eax; /* 0x00666E8A: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + 0xC) = (uint8_t)(0); /* 0x00666E8D: mov byte ptr [ebp + 0xc], 0 */
    MEM8(ebp + (-0x14)) = (uint8_t)(0); /* 0x00666E91: mov byte ptr [ebp - 0x14], 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00666E95: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00666E98: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x00666E9B: push ecx */
    eax = ebp + (-0x18); /* 0x00666E9C: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00666E9F: push eax */
    RECOMP_CALL(sub_00667500); /* 0x00666EA0: call 0x667500 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00666EA5: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00666EA9: mov byte ptr [ebp - 4], 1 */
L_00666EAD:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00666EAD: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00666EB1: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00666EB8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00666EBA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666EBD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666EC4: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666EC5: pop edi */
    esi = POP32_VAL(esp); /* 0x00666EC6: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666EC7: pop ebx */
    esp = ebp; /* 0x00666EC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666ECA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00666ECB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00666ECE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666ECEu);

L_00666ECE:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x00666ECE: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00666ED1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00666ED7: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00666EDA: push 0 */
    PUSH32(esp, 0); /* 0x00666EDC: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00666EDE: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00666EE3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00666EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00666EF0u);

L_00666EF0:
    PUSH32(esp, ebp); /* 0x00666EF0: push ebp */
    ebp = esp; /* 0x00666EF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00666EF3: push -1 */
    PUSH32(esp, 0x007BC400u); /* 0x00666EF5: push 0x7bc400 */
    eax = MEM32(FS_BASE + (0)); /* 0x00666EFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00666F00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00666F01: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00666F04: push ebx */
    PUSH32(esp, esi); /* 0x00666F05: push esi */
    PUSH32(esp, edi); /* 0x00666F06: push edi */
    eax = MEM32(0x855000); /* 0x00666F07: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00666F0C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00666F0E: push eax */
    eax = ebp + (-0xC); /* 0x00666F0F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00666F12: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00666F18: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x00666F1B: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00666F1D: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x00666F24: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666F53; /* 0x00666F28: jne 0x666f53 */
L_00666F2A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00666F2A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00666F2D: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x00666F2E: push dword ptr [ebx] */
L_00666F30:
    PUSH32(esp, 1); /* 0x00666F30: push 1 */
L_00666F32:
    ecx = ebx; /* 0x00666F32: mov ecx, ebx */
L_00666F34:
    esi = MEM32(ebp + 0x8); /* 0x00666F34: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00666F37: push esi */
    RECOMP_CALL(sub_006671C0); /* 0x00666F38: call 0x6671c0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x00666F3D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00666F3F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00666F42: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00666F49: pop ecx */
    edi = POP32_VAL(esp); /* 0x00666F4A: pop edi */
    esi = POP32_VAL(esp); /* 0x00666F4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00666F4C: pop ebx */
    esp = ebp; /* 0x00666F4D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00666F4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00666F50: ret 0x10 */
L_00666F53:
    ecx = MEM32(ebx); /* 0x00666F53: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x00666F55: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x00666F58: mov edi, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ecx) */ /* 0x00666F5B: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666F7A; /* 0x00666F5D: jne 0x666f7a */
L_00666F5F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00666F5F: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00666F62: push eax */
    PUSH32(esp, edi); /* 0x00666F63: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x00666F64: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666F69: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667041; /* 0x00666F6B: je 0x667041 */
L_00666F71:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00666F71: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00666F74: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00666F75: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_00666F30; /* 0x00666F78: jmp 0x666f30 */
L_00666F7A:
    /* cmp eax, ecx */ /* 0x00666F7A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666FA0; /* 0x00666F7C: jne 0x666fa0 */
L_00666F7E:
    eax = MEM32(ecx + 0x8); /* 0x00666F7E: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00666F81: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x00666F84: push edi */
    PUSH32(esp, eax); /* 0x00666F85: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x00666F86: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666F8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667041; /* 0x00666F8D: je 0x667041 */
L_00666F93:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00666F93: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00666F96: push ecx */
    eax = MEM32(ebx); /* 0x00666F97: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x00666F99: push dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x00666F9C: push 0 */
    RECOMP_BACKEDGE();
    goto L_00666F32; /* 0x00666F9E: jmp 0x666f32 */
L_00666FA0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00666FA0: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00666FA3: push eax */
    PUSH32(esp, edi); /* 0x00666FA4: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x00666FA5: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666FAA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666FEE; /* 0x00666FAC: je 0x666fee */
L_00666FAE:
    eax = MEM32(ebp + 0xC); /* 0x00666FAE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00666FB1: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0x14); /* 0x00666FB4: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x00666FB7: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00666FBC: push edi */
    esi = MEM32(ebp + (-0x14)); /* 0x00666FBD: mov esi, dword ptr [ebp - 0x14] */
    eax = esi + 0x10; /* 0x00666FC0: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x00666FC3: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x00666FC4: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666FC9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00666FEE; /* 0x00666FCB: je 0x666fee */
L_00666FCD:
    eax = MEM32(esi + 0x8); /* 0x00666FCD: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00666FD0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00666FD3: push ecx */
    ecx = ebx; /* 0x00666FD4: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00666FD6: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00666FE4; /* 0x00666FDA: je 0x666fe4 */
L_00666FDC:
    PUSH32(esp, esi); /* 0x00666FDC: push esi */
    PUSH32(esp, 0); /* 0x00666FDD: push 0 */
    RECOMP_BACKEDGE();
    goto L_00666F34; /* 0x00666FDF: jmp 0x666f34 */
L_00666FE4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00666FE4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x00666FE7: push 1 */
    RECOMP_BACKEDGE();
    goto L_00666F34; /* 0x00666FE9: jmp 0x666f34 */
L_00666FEE:
    PUSH32(esp, edi); /* 0x00666FEE: push edi */
    eax = MEM32(ebp + 0xC); /* 0x00666FEF: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x00666FF2: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00666FF5: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x00666FF6: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00666FFB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667041; /* 0x00666FFD: je 0x667041 */
L_00666FFF:
    esi = MEM32(ebp + 0xC); /* 0x00666FFF: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x00667002: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x00667005: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x00667008: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x14)); /* 0x0066700D: mov edi, dword ptr [ebp - 0x14] */
    /* cmp edi, MEM32(ebx) */ /* 0x00667010: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667027; /* 0x00667012: je 0x667027 */
L_00667014:
    eax = edi + 0x10; /* 0x00667014: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x00667017: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00667018: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_005E0380); /* 0x0066701B: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00667020: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066703E; /* 0x00667022: je 0x66703e */
L_00667024:
    esi = MEM32(ebp + 0xC); /* 0x00667024: mov esi, dword ptr [ebp + 0xc] */
L_00667027:
    eax = MEM32(esi + 0x8); /* 0x00667027: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0066702A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x0066702D: push ecx */
    ecx = ebx; /* 0x0066702E: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00667030: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00666FDC; /* 0x00667034: jne 0x666fdc */
L_00667036:
    PUSH32(esp, edi); /* 0x00667036: push edi */
    PUSH32(esp, 1); /* 0x00667037: push 1 */
    RECOMP_BACKEDGE();
    goto L_00666F34; /* 0x00667039: jmp 0x666f34 */
L_0066703E:
    edi = MEM32(ebp + 0x10); /* 0x0066703E: mov edi, dword ptr [ebp + 0x10] */
L_00667041:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667041: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00667048: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x0066704B: push edi */
    PUSH32(esp, 0); /* 0x0066704C: push 0 */
    eax = ebp + (-0x18); /* 0x0066704E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00667051: push eax */
    ecx = ebx; /* 0x00667052: mov ecx, ebx */
    RECOMP_CALL(sub_00667360); /* 0x00667054: call 0x667360 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x00667059: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x0066705B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x0066705E: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667060: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667063: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066706A: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066706B: pop edi */
    esi = POP32_VAL(esp); /* 0x0066706C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066706D: pop ebx */
    esp = ebp; /* 0x0066706E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667071: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00667074(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667074u);

L_00667074:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00667074: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_00667090); /* 0x00667077: call 0x667090 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0066707C: push 0 */
    PUSH32(esp, 0); /* 0x0066707E: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00667080: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00667085u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00667090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667090u);

L_00667090:
    PUSH32(esp, ebp); /* 0x00667090: push ebp */
    ebp = esp; /* 0x00667091: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667093: push -1 */
    PUSH32(esp, 0x007BC433u); /* 0x00667095: push 0x7bc433 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066709A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006670A0: push eax */
    PUSH32(esp, ebx); /* 0x006670A1: push ebx */
    PUSH32(esp, esi); /* 0x006670A2: push esi */
    eax = MEM32(0x855000); /* 0x006670A3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006670A8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006670AA: push eax */
    eax = ebp + (-0xC); /* 0x006670AB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006670AE: mov dword ptr fs:[0], eax */
    ebx = MEM32(ebp + 0x8); /* 0x006670B4: mov ebx, dword ptr [ebp + 8] */
    esi = ebx + 0x10; /* 0x006670B7: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = esi; /* 0x006670BA: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006670BD: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x006670C4: lea ecx, [esi + 0x18] */
    RECOMP_CALL(sub_0041A4B0); /* 0x006670C7: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006670CC: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006670D3: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006670E4; /* 0x006670D7: jb 0x6670e4 */
L_006670D9:
    PUSH32(esp, MEM32(esi)); /* 0x006670D9: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006670DB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006670E1: add esp, 4 */
    _flag_k = FK_ADD;
L_006670E4:
    MEM32(esi + 0x14) = 0xFu; /* 0x006670E4: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x006670EB: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x006670F2: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x006670F3: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006670F6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006670FC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006670FF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667102: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667109: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066710A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066710B: pop ebx */
    esp = ebp; /* 0x0066710C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066710E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066710F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00667120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667120u);

L_00667120:
    PUSH32(esp, ebp); /* 0x00667120: push ebp */
    ebp = esp; /* 0x00667121: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667123: push -1 */
    PUSH32(esp, 0x007BC450u); /* 0x00667125: push 0x7bc450 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066712A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667130: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00667131: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00667134: push ebx */
    PUSH32(esp, esi); /* 0x00667135: push esi */
    PUSH32(esp, edi); /* 0x00667136: push edi */
    eax = MEM32(0x855000); /* 0x00667137: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066713C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066713E: push eax */
    eax = ebp + (-0xC); /* 0x0066713F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667142: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00667148: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x0066714B: mov edi, ecx */
    PUSH32(esp, 0x34u); /* 0x0066714D: push 0x34 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0066714F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667155: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00667158: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x0066715A: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x0066715D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667167; /* 0x0066715F: jne 0x667167 */
L_00667161:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00667161: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00667167:
    MEM32(ebp + (-0x4)) = 0; /* 0x00667167: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x0066716E: push edi */
    PUSH32(esp, esi); /* 0x0066716F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x00667170: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00667175: push edi */
    eax = esi + 0x4; /* 0x00667176: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x00667179: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x0066717A: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0066717F: push edi */
    eax = esi + 0x8; /* 0x00667180: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x00667183: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x00667184: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667189: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00667190: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667192: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667195: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066719C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066719D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066719E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066719F: pop ebx */
    esp = ebp; /* 0x006671A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006671A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006671A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006671A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006671A4u);

L_006671A4:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006671A4: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006671A7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006671AD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006671B0: push 0 */
    PUSH32(esp, 0); /* 0x006671B2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006671B4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006671B9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006671C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006671C0u);

L_006671C0:
    PUSH32(esp, ebp); /* 0x006671C0: push ebp */
    ebp = esp; /* 0x006671C1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006671C3: push ebx */
    PUSH32(esp, esi); /* 0x006671C4: push esi */
    PUSH32(esp, edi); /* 0x006671C5: push edi */
    edi = ecx; /* 0x006671C6: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x006671C8: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 0x04EC4EC3u */ /* 0x006671CB: cmp eax, 0x4ec4ec3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04EC4EC3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006671E5; /* 0x006671D0: jb 0x6671e5 */
L_006671D2:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x006671D2: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_00667090); /* 0x006671D5: call 0x667090 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CD71Cu); /* 0x006671DA: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x006671DF: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_006671E5:
    ebx = MEM32(ebp + 0x18); /* 0x006671E5: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006671E8: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x006671E9: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x006671EC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x006671EF: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x006671F2: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x006671F4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667206; /* 0x006671F6: jne 0x667206 */
L_006671F8:
    MEM32(ecx + 0x4) = ebx; /* 0x006671F8: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x006671FB: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x006671FD: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x006671FF: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x00667201: mov dword ptr [eax + 8], ebx */
    goto L_00667225; /* 0x00667204: jmp 0x667225 */
L_00667206:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x00667206: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667218; /* 0x0066720A: je 0x667218 */
L_0066720C:
    MEM32(eax) = ebx; /* 0x0066720C: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x0066720E: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x00667210: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667225; /* 0x00667212: jne 0x667225 */
L_00667214:
    MEM32(ecx) = ebx; /* 0x00667214: mov dword ptr [ecx], ebx */
    goto L_00667225; /* 0x00667216: jmp 0x667225 */
L_00667218:
    MEM32(eax + 0x8) = ebx; /* 0x00667218: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x0066721B: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x0066721D: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667225; /* 0x00667220: jne 0x667225 */
L_00667222:
    MEM32(ecx + 0x8) = ebx; /* 0x00667222: mov dword ptr [ecx + 8], ebx */
L_00667225:
    eax = MEM32(ebx + 0x4); /* 0x00667225: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x00667228: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x0066722A: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066733E; /* 0x0066722E: jne 0x66733e */
L_00667234:
    eax = MEM32(esi + 0x4); /* 0x00667234: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x00667237: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x0066723A: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x0066723C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006672B4; /* 0x0066723E: jne 0x6672b4 */
L_00667240:
    ecx = MEM32(edx + 0x8); /* 0x00667240: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00667243: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006672BA; /* 0x00667247: je 0x6672ba */
L_00667249:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x00667249: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667258; /* 0x0066724C: jne 0x667258 */
L_0066724E:
    esi = eax; /* 0x0066724E: mov esi, eax */
    ecx = edi; /* 0x00667250: mov ecx, edi */
    PUSH32(esp, esi); /* 0x00667252: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x00667253: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_00667258:
    eax = MEM32(esi + 0x4); /* 0x00667258: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0066725B: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x0066725F: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x00667262: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x00667265: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x00667269: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x0066726C: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x0066726F: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x00667271: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x00667274: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x00667276: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00667279: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667282; /* 0x0066727D: jne 0x667282 */
L_0066727F:
    MEM32(eax + 0x4) = ecx; /* 0x0066727F: mov dword ptr [eax + 4], ecx */
L_00667282:
    eax = MEM32(ecx + 0x4); /* 0x00667282: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x00667285: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x00667288: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x0066728A: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066729A; /* 0x0066728D: jne 0x66729a */
L_0066728F:
    MEM32(eax + 0x4) = edx; /* 0x0066728F: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00667292: mov dword ptr [edx + 8], ecx */
    goto L_0066732E; /* 0x00667295: jmp 0x66732e */
L_0066729A:
    eax = MEM32(ecx + 0x4); /* 0x0066729A: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x0066729D: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006672AD; /* 0x006672A0: jne 0x6672ad */
L_006672A2:
    MEM32(eax + 0x8) = edx; /* 0x006672A2: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x006672A5: mov dword ptr [edx + 8], ecx */
    goto L_0066732E; /* 0x006672A8: jmp 0x66732e */
L_006672AD:
    MEM32(eax) = edx; /* 0x006672AD: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x006672AF: mov dword ptr [edx + 8], ecx */
    goto L_0066732E; /* 0x006672B2: jmp 0x66732e */
L_006672B4:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x006672B4: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006672D4; /* 0x006672B8: jne 0x6672d4 */
L_006672BA:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006672BA: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x006672BE: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x006672C2: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006672C5: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x006672C8: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x006672CC: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x006672CF: mov esi, dword ptr [eax + 4] */
    goto L_00667331; /* 0x006672D2: jmp 0x667331 */
L_006672D4:
    /* cmp esi, MEM32(eax) */ /* 0x006672D4: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006672E2; /* 0x006672D6: jne 0x6672e2 */
L_006672D8:
    esi = eax; /* 0x006672D8: mov esi, eax */
    ecx = edi; /* 0x006672DA: mov ecx, edi */
    PUSH32(esp, esi); /* 0x006672DC: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x006672DD: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_006672E2:
    eax = MEM32(esi + 0x4); /* 0x006672E2: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006672E5: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x006672E9: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006672EC: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x006672EF: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x006672F3: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x006672F6: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x006672F9: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x006672FC: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x006672FE: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x00667301: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00667303: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066730C; /* 0x00667307: jne 0x66730c */
L_00667309:
    MEM32(eax + 0x4) = ecx; /* 0x00667309: mov dword ptr [eax + 4], ecx */
L_0066730C:
    eax = MEM32(ecx + 0x4); /* 0x0066730C: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x0066730F: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x00667312: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x00667314: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066731E; /* 0x00667317: jne 0x66731e */
L_00667319:
    MEM32(eax + 0x4) = edx; /* 0x00667319: mov dword ptr [eax + 4], edx */
    goto L_0066732C; /* 0x0066731C: jmp 0x66732c */
L_0066731E:
    eax = MEM32(ecx + 0x4); /* 0x0066731E: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x00667321: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667329; /* 0x00667323: jne 0x667329 */
L_00667325:
    MEM32(eax) = edx; /* 0x00667325: mov dword ptr [eax], edx */
    goto L_0066732C; /* 0x00667327: jmp 0x66732c */
L_00667329:
    MEM32(eax + 0x8) = edx; /* 0x00667329: mov dword ptr [eax + 8], edx */
L_0066732C:
    MEM32(edx) = ecx; /* 0x0066732C: mov dword ptr [edx], ecx */
L_0066732E:
    MEM32(ecx + 0x4) = edx; /* 0x0066732E: mov dword ptr [ecx + 4], edx */
L_00667331:
    eax = MEM32(esi + 0x4); /* 0x00667331: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x00667334: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667234; /* 0x00667338: je 0x667234 */
L_0066733E:
    eax = MEM32(edi); /* 0x0066733E: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x00667340: pop edi */
    esi = POP32_VAL(esp); /* 0x00667341: pop esi */
    eax = MEM32(eax + 0x4); /* 0x00667342: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00667345: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x00667349: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x0066734C: mov dword ptr [eax], ebx */
    ebx = POP32_VAL(esp); /* 0x0066734E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0066734F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x00667350: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_00667360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667360u);

L_00667360:
    PUSH32(esp, ebp); /* 0x00667360: push ebp */
    ebp = esp; /* 0x00667361: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667363: push -1 */
    PUSH32(esp, 0x007BC470u); /* 0x00667365: push 0x7bc470 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066736A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667370: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00667371: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00667374: push ebx */
    PUSH32(esp, esi); /* 0x00667375: push esi */
    PUSH32(esp, edi); /* 0x00667376: push edi */
    eax = MEM32(0x855000); /* 0x00667377: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066737C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066737E: push eax */
    eax = ebp + (-0xC); /* 0x0066737F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667382: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00667388: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x0066738B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066738E: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x00667395: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x00667397: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x0066739A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x0066739C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x0066739F: mov ebx, dword ptr [ebp + 0x10] */
L_006673A2:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x006673A2: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006673D8; /* 0x006673A6: jne 0x6673d8 */
L_006673A8:
    edi = esi; /* 0x006673A8: mov edi, esi */
    eax = esi + 0x10; /* 0x006673AA: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x006673AD: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006673C1; /* 0x006673B1: je 0x6673c1 */
L_006673B3:
    PUSH32(esp, ebx); /* 0x006673B3: push ebx */
    PUSH32(esp, eax); /* 0x006673B4: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x006673B5: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006673BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006673BC: sete al */
    goto L_006673C8; /* 0x006673BF: jmp 0x6673c8 */
L_006673C1:
    PUSH32(esp, eax); /* 0x006673C1: push eax */
    PUSH32(esp, ebx); /* 0x006673C2: push ebx */
    RECOMP_CALL(sub_005E0380); /* 0x006673C3: call 0x5e0380 */
    RECOMP_FLAGS_IN();
L_006673C8:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x006673C8: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x006673CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006673D3; /* 0x006673CD: je 0x6673d3 */
L_006673CF:
    esi = MEM32(esi); /* 0x006673CF: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_006673A2; /* 0x006673D1: jmp 0x6673a2 */
L_006673D3:
    esi = MEM32(esi + 0x8); /* 0x006673D3: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_006673A2; /* 0x006673D6: jmp 0x6673a2 */
L_006673D8:
    esi = edi; /* 0x006673D8: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x006673DA: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x006673DD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667424; /* 0x006673DF: je 0x667424 */
L_006673E1:
    ecx = MEM32(ebp + (-0x18)); /* 0x006673E1: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x006673E4: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x006673E6: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667419; /* 0x006673E8: jne 0x667419 */
L_006673EA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006673EA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x006673ED: push ecx */
    PUSH32(esp, edi); /* 0x006673EE: push edi */
    PUSH32(esp, 1); /* 0x006673EF: push 1 */
L_006673F1:
    eax = ebp + 0xC; /* 0x006673F1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x006673F4: push eax */
    RECOMP_CALL(sub_006671C0); /* 0x006673F5: call 0x6671c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x006673FA: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x006673FC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x006673FF: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x00667401: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667405: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667408: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066740F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667410: pop edi */
    esi = POP32_VAL(esp); /* 0x00667411: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667412: pop ebx */
    esp = ebp; /* 0x00667413: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667416: ret 0x10 */
L_00667419:
    ecx = ebp + 0xC; /* 0x00667419: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x0066741C: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x00667421: mov esi, dword ptr [ebp + 0xc] */
L_00667424:
    PUSH32(esp, ebx); /* 0x00667424: push ebx */
    eax = esi + 0x10; /* 0x00667425: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x00667428: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x00667429: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0066742E: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x00667431: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066743F; /* 0x00667433: je 0x66743f */
L_00667435:
    PUSH32(esp, ecx); /* 0x00667435: push ecx */
    PUSH32(esp, edi); /* 0x00667436: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00667437: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x0066743A: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_006673F1; /* 0x0066743D: jmp 0x6673f1 */
L_0066743F:
    RECOMP_CALL(sub_00667090); /* 0x0066743F: call 0x667090 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00667444: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x00667447: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x00667449: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066744D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667450: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667457: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667458: pop edi */
    esi = POP32_VAL(esp); /* 0x00667459: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066745A: pop ebx */
    esp = ebp; /* 0x0066745B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066745D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0066745E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00667461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667461u);

L_00667461:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00667461: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_00667090); /* 0x00667464: call 0x667090 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00667469: push 0 */
    PUSH32(esp, 0); /* 0x0066746B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0066746D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00667472u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00667480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667480u);

L_00667480:
    PUSH32(esp, ebp); /* 0x00667480: push ebp */
    ebp = esp; /* 0x00667481: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667483: push -1 */
    PUSH32(esp, 0x007BC4A3u); /* 0x00667485: push 0x7bc4a3 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066748A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667490: push eax */
    PUSH32(esp, ecx); /* 0x00667491: push ecx */
    PUSH32(esp, esi); /* 0x00667492: push esi */
    eax = MEM32(0x855000); /* 0x00667493: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00667498: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066749A: push eax */
    eax = ebp + (-0xC); /* 0x0066749B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066749E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006674A4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006674A6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006674A9: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x006674B0: lea ecx, [esi + 0x18] */
    RECOMP_CALL(sub_0041A4B0); /* 0x006674B3: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006674B8: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006674BF: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006674D0; /* 0x006674C3: jb 0x6674d0 */
L_006674C5:
    PUSH32(esp, MEM32(esi)); /* 0x006674C5: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006674C7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006674CD: add esp, 4 */
    _flag_k = FK_ADD;
L_006674D0:
    MEM32(esi + 0x14) = 0xFu; /* 0x006674D0: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x006674D7: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x006674DE: mov byte ptr [esi], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006674E1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006674E4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006674EB: pop ecx */
    esi = POP32_VAL(esp); /* 0x006674EC: pop esi */
    esp = ebp; /* 0x006674ED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006674EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006674F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667500u);

L_00667500:
    PUSH32(esp, ebp); /* 0x00667500: push ebp */
    ebp = esp; /* 0x00667501: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667503: push -1 */
    PUSH32(esp, 0x007BC509u); /* 0x00667505: push 0x7bc509 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066750A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667510: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00667511: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00667514: push esi */
    eax = MEM32(0x855000); /* 0x00667515: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066751A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066751C: push eax */
    eax = ebp + (-0xC); /* 0x0066751D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667520: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00667526: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00667528: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x0066752B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066752E: push -1 */
    PUSH32(esp, 0); /* 0x00667530: push 0 */
    eax = MEM32(eax); /* 0x00667532: mov eax, dword ptr [eax] */
    MEM32(esi + 0x14) = 0xFu; /* 0x00667534: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0066753B: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00667542: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x00667543: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00667546: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066754B: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x00667552: lea ecx, [esi + 0x18] */
    MEM32(ebp + 0x8) = ecx; /* 0x00667555: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x00667558: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ecx) = 0; /* 0x0066755B: mov dword ptr [ecx], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00667561: mov byte ptr [ebp - 4], 2 */
    eax = ecx + 0x4; /* 0x00667565: lea eax, [ecx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00667568: mov dword ptr [ebp - 0x14], eax */
    MEM32(eax) = 0; /* 0x0066756B: mov dword ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00667571: mov byte ptr [ebp - 4], 4 */
    eax = ecx + 0x8; /* 0x00667575: lea eax, [ecx + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00667578: mov dword ptr [ebp - 0x14], eax */
    MEM32(eax) = 0; /* 0x0066757B: mov dword ptr [eax], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667581: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00667588: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066758A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066758D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667594: pop ecx */
    esi = POP32_VAL(esp); /* 0x00667595: pop esi */
    esp = ebp; /* 0x00667596: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667598: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667599: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006675A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006675A0u);

L_006675A0:
    PUSH32(esp, ebp); /* 0x006675A0: push ebp */
    ebp = esp; /* 0x006675A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006675A3: push -1 */
    PUSH32(esp, 0x007BC538u); /* 0x006675A5: push 0x7bc538 */
    eax = MEM32(FS_BASE + (0)); /* 0x006675AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006675B0: push eax */
    PUSH32(esp, ecx); /* 0x006675B1: push ecx */
    PUSH32(esp, esi); /* 0x006675B2: push esi */
    eax = MEM32(0x855000); /* 0x006675B3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006675B8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006675BA: push eax */
    eax = ebp + (-0xC); /* 0x006675BB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006675BE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006675C4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006675C6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006675C9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi); /* 0x006675D0: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006675D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006675F4; /* 0x006675D4: je 0x6675f4 */
L_006675D6:
    PUSH32(esp, eax); /* 0x006675D6: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006675D7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006675DD: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x006675E0: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x006675E6: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x006675ED: mov dword ptr [esi + 8], 0 */
L_006675F4:
    ecx = MEM32(ebp + (-0xC)); /* 0x006675F4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006675F7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006675FE: pop ecx */
    esi = POP32_VAL(esp); /* 0x006675FF: pop esi */
    esp = ebp; /* 0x00667600: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667602: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00667603: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667610u);

L_00667610:
    PUSH32(esp, ebp); /* 0x00667610: push ebp */
    ebp = esp; /* 0x00667611: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00667613: push ecx */
    PUSH32(esp, esi); /* 0x00667614: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00667615: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00667618: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00667619: push dword ptr [ebp + 8] */
    edi = ecx; /* 0x0066761C: mov edi, ecx */
    eax = MEM32(esi + 0x10); /* 0x0066761E: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00667621: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x00667622: mov dword ptr [ebp - 4], eax */
    eax = ebp; /* 0x00667625: lea eax, [ebp] */
    PUSH32(esp, eax); /* 0x00667628: push eax */
    eax = ebp + (-0x4); /* 0x00667629: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0066762C: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x0066762D: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_00667D60); /* 0x00667630: call 0x667d60 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00667635: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x10); /* 0x00667639: mov eax, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00667640; /* 0x0066763C: jb 0x667640 */
L_0066763E:
    esi = MEM32(esi); /* 0x0066763E: mov esi, dword ptr [esi] */
L_00667640:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00667640: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00667643: add eax, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x00667645: mov ecx, edi */
    PUSH32(esp, eax); /* 0x00667647: push eax */
    PUSH32(esp, esi); /* 0x00667648: push esi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x00667649: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_00667D60); /* 0x0066764C: call 0x667d60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00667651: mov byte ptr [ebp + 8], 0 */
    eax = ebp + 0x9; /* 0x00667655: lea eax, [ebp + 9] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00667658: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x0066765B: mov ecx, edi */
    PUSH32(esp, eax); /* 0x0066765D: push eax */
    eax = ebp + 0x8; /* 0x0066765E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00667661: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x00667662: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_00667D60); /* 0x00667665: call 0x667d60 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0066766A: pop edi */
    esi = POP32_VAL(esp); /* 0x0066766B: pop esi */
    esp = ebp; /* 0x0066766C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066766E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066766F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00667680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667680u);

L_00667680:
    PUSH32(esp, ebp); /* 0x00667680: push ebp */
    ebp = esp; /* 0x00667681: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667683: push -1 */
    PUSH32(esp, 0x007BC57Du); /* 0x00667685: push 0x7bc57d */
    eax = MEM32(FS_BASE + (0)); /* 0x0066768A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667690: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x00667691: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00667697: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066769C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066769E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x006676A1: push esi */
    PUSH32(esp, edi); /* 0x006676A2: push edi */
    PUSH32(esp, eax); /* 0x006676A3: push eax */
    eax = ebp + (-0xC); /* 0x006676A4: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006676A7: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006676AD: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x006676AF: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006676B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006676BD; /* 0x006676B7: jne 0x6676bd */
L_006676B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006676B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006676D7; /* 0x006676BB: jmp 0x6676d7 */
L_006676BD:
    ecx = MEM32(0x927AEC); /* 0x006676BD: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x006676C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006676D7; /* 0x006676C5: jne 0x6676d7 */
L_006676C7:
    ecx = 0x00927AE8u; /* 0x006676C7: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x006676CC: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x006676D1: mov ecx, dword ptr [0x927aec] */
L_006676D7:
    eax = MEM32(ecx); /* 0x006676D7: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x006676D9: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x006676DC: push edx */
    eax = MEM32(eax + 0x8); /* 0x006676DD: mov eax, dword ptr [eax + 8] */
    RECOMP_FLAGS_OUT(); eax = MEM32(esp); MEM32(eax) = 1; MEM32(eax + 4) = 0x01100001u; esp += 4; /* Original save identity */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(0x809CD0); /* 0x006676E2: movdqa xmm0, xmmword ptr [0x809cd0] */
    xmm_st(ebp + (-0x130), _xmm[0]); /* 0x006676EA: movdqu xmmword ptr [ebp - 0x130], xmm0 */
    edx = MEM32(eax); /* 0x006676F2: mov edx, dword ptr [eax] */
    ecx = edx; /* 0x006676F4: mov ecx, edx */
    edi = MEM32(eax + 0x4); /* 0x006676F6: mov edi, dword ptr [eax + 4] */
    eax = edi; /* 0x006676F9: mov eax, edi */
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x006676FB: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    MEM8(ebp + (-0x130)) = (uint8_t)(LO8(edx)); /* 0x006676FF: mov byte ptr [ebp - 0x130], dl */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x00667705: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x00667705: shr eax, 8 */
    MEM8(ebp + (-0x12F)) = (uint8_t)(LO8(ecx)); /* 0x00667708: mov byte ptr [ebp - 0x12f], cl */
    eax = edi; /* 0x0066770E: mov eax, edi */
    ecx = edx; /* 0x00667710: mov ecx, edx */
    MEM32(ebp + (-0x14)) = edi; /* 0x00667712: mov dword ptr [ebp - 0x14], edi */
    if (1) _cf = (((ecx) >> 15) & 1u); /* 0x00667715: shrd ecx, eax, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (16u)) | ((uint32_t)(eax) << (32 - (16u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (16u)) | ((uint32_t)(eax) << (32 - (16u)))) : (ecx));
    MEM32(ebp + (-0x120)) = edi; /* 0x00667719: mov dword ptr [ebp - 0x120], edi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0066771F: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0066771F: shr eax, 0x10 */
    MEM8(ebp + (-0x12E)) = (uint8_t)(LO8(ecx)); /* 0x00667722: mov byte ptr [ebp - 0x12e], cl */
    ecx = edi; /* 0x00667728: mov ecx, edi */
    eax = ecx; /* 0x0066772A: mov eax, ecx */
    MEM32(ebp + (-0x20)) = 0x160D74F9u; /* 0x0066772C: mov dword ptr [ebp - 0x20], 0x160d74f9 */
    if (1) _cf = (((edx) >> 23) & 1u); /* 0x00667733: shrd edx, eax, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (24u)) | ((uint32_t)(eax) << (32 - (24u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (24u)) | ((uint32_t)(eax) << (32 - (24u)))) : (edx));
    MEM32(ebp + (-0x1C)) = 0xCCD2274Cu; /* 0x00667737: mov dword ptr [ebp - 0x1c], 0xccd2274c */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x0066773E: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x0066773E: shr eax, 0x18 */
    SET_LO8(eax, MEM8(ebp + (-0x14))); /* 0x00667741: mov al, byte ptr [ebp - 0x14] */
    MEM8(ebp + (-0x12C)) = (uint8_t)(LO8(eax)); /* 0x00667744: mov byte ptr [ebp - 0x12c], al */
    eax = ecx; /* 0x0066774A: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0066774C: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0066774C: shr eax, 8 */
    MEM8(ebp + (-0x12B)) = (uint8_t)(LO8(eax)); /* 0x0066774F: mov byte ptr [ebp - 0x12b], al */
    eax = ecx; /* 0x00667755: mov eax, ecx */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x00667757: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x00667757: shr ecx, 0x18 */
    MEM8(ebp + (-0x12D)) = (uint8_t)(LO8(edx)); /* 0x0066775A: mov byte ptr [ebp - 0x12d], dl */
    edx = ebp + (-0x20); /* 0x00667760: lea edx, [ebp - 0x20] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00667763: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00667763: shr eax, 0x10 */
    MEM8(ebp + (-0x129)) = (uint8_t)(LO8(ecx)); /* 0x00667766: mov byte ptr [ebp - 0x129], cl */
    PUSH32(esp, ecx); /* 0x0066776C: push ecx */
    ecx = ebp + (-0x118); /* 0x0066776D: lea ecx, [ebp - 0x118] */
    MEM8(ebp + (-0x12A)) = (uint8_t)(LO8(eax)); /* 0x00667773: mov byte ptr [ebp - 0x12a], al */
    MEM32(ebp + (-0x18)) = 0x8838E7ABu; /* 0x00667779: mov dword ptr [ebp - 0x18], 0x8838e7ab */
    MEM32(ebp + (-0x14)) = 0x3E65CF25u; /* 0x00667780: mov dword ptr [ebp - 0x14], 0x3e65cf25 */
    RECOMP_CALL(sub_00672F90); /* 0x00667787: call 0x672f90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066778C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x0066778F: mov dword ptr [ebp - 0x28], eax */
    ecx = ebp + (-0x20); /* 0x00667792: lea ecx, [ebp - 0x20] */
    edx = eax; /* 0x00667795: mov edx, eax */
    PUSH32(esp, ecx); /* 0x00667797: push ecx */
    ecx = ebp + (-0x130); /* 0x00667798: lea ecx, [ebp - 0x130] */
    PUSH32(esp, ecx); /* 0x0066779E: push ecx */
    ecx = ebp + (-0x118); /* 0x0066779F: lea ecx, [ebp - 0x118] */
    RECOMP_CALL(sub_00673310); /* 0x006677A5: call 0x673310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006677AA: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x20); /* 0x006677AD: lea edx, [ebp - 0x20] */
    ecx = ebp + (-0x118); /* 0x006677B0: lea ecx, [ebp - 0x118] */
    RECOMP_CALL(sub_00672F90); /* 0x006677B6: call 0x672f90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x006677BB: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006677BE: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x006677C1: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    SET_LO8(edx, 0); /* 0x006677C3: mov dl, 0 */
    MEM32(ebp + (-0x28)) = eax; /* 0x006677C5: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006677C8: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x10u; /* 0x006677CB: mov eax, 0x10 */
    MEM8(ebp + (-0x119)) = (uint8_t)(LO8(edx)); /* 0x006677D0: mov byte ptr [ebp - 0x119], dl */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x006677D6: cmove ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006677D9: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x120)) = eax; /* 0x006677DB: mov dword ptr [ebp - 0x120], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0066787C; /* 0x006677E1: je 0x66787c */
L_006677E7:
    MEM8(ebp + (-0x11A)) = (uint8_t)(0xFFu); /* 0x006677E7: mov byte ptr [ebp - 0x11a], 0xff */
    edi = edi; /* 0x006677EE: mov edi, edi */
L_006677F0:
    eax = MEM32(esi + 0x4); /* 0x006677F0: mov eax, dword ptr [esi + 4] */
    ecx = ebp + (-0x11A); /* 0x006677F3: lea ecx, [ebp - 0x11a] */
    /* cmp ecx, eax */ /* 0x006677F9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00667836; /* 0x006677FB: jae 0x667836 */
L_006677FD:
    ecx = MEM32(esi); /* 0x006677FD: mov ecx, dword ptr [esi] */
    edi = ebp + (-0x11A); /* 0x006677FF: lea edi, [ebp - 0x11a] */
    /* cmp ecx, edi */ /* 0x00667805: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00667836; /* 0x00667807: ja 0x667836 */
L_00667809:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x00667809: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x0066780B: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066781F; /* 0x0066780E: jne 0x66781f */
L_00667810:
    PUSH32(esp, 1); /* 0x00667810: push 1 */
    ecx = esi; /* 0x00667812: mov ecx, esi */
    RECOMP_CALL(sub_0055BEA0); /* 0x00667814: call 0x55bea0 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x119))); /* 0x00667819: mov dl, byte ptr [ebp - 0x119] */
L_0066781F:
    eax = MEM32(esi); /* 0x0066781F: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x4); /* 0x00667821: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x00667824: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0066782B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066785B; /* 0x0066782D: je 0x66785b */
L_0066782F:
    SET_LO8(eax, MEM8(eax + edi)); /* 0x0066782F: mov al, byte ptr [eax + edi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x00667832: mov byte ptr [ecx], al */
    goto L_0066785B; /* 0x00667834: jmp 0x66785b */
L_00667836:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x00667836: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066784A; /* 0x00667839: jne 0x66784a */
L_0066783B:
    PUSH32(esp, 1); /* 0x0066783B: push 1 */
    ecx = esi; /* 0x0066783D: mov ecx, esi */
    RECOMP_CALL(sub_0055BEA0); /* 0x0066783F: call 0x55bea0 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x119))); /* 0x00667844: mov dl, byte ptr [ebp - 0x119] */
L_0066784A:
    eax = MEM32(esi + 0x4); /* 0x0066784A: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066784D: mov dword ptr [ebp - 4], 1 */
    /* test eax, eax */ /* 0x00667854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066785B; /* 0x00667856: je 0x66785b */
L_00667858:
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x00667858: mov byte ptr [eax], 0xff */
L_0066785B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066785B: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(edx, LO8(edx) + 1); /* 0x00667862: inc dl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x00667864: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(edx); /* 0x00667867: movzx eax, dl */
    MEM8(ebp + (-0x119)) = (uint8_t)(LO8(edx)); /* 0x0066786A: mov byte ptr [ebp - 0x119], dl */
    /* cmp eax, MEM32(ebp + (-0x120)) */ /* 0x00667870: cmp eax, dword ptr [ebp - 0x120] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x120)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006677F0; /* 0x00667876: jb 0x6677f0 */
L_0066787C:
    eax = MEM32(esi + 0x4); /* 0x0066787C: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x0066787F: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0xFu */ /* 0x00667881: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006678F1; /* 0x00667883: je 0x6678f1 */
L_00667885:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00667885: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00667888: mov ecx, esp */
    MEM32(ebp + (-0x120)) = esp; /* 0x0066788A: mov dword ptr [ebp - 0x120], esp */
    PUSH32(esp, 0x2Eu); /* 0x00667890: push 0x2e */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00667892: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00667899: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FC2C0u); /* 0x006678A0: push 0x7fc2c0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006678A5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006678A8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x006678AD: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006678B4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006678B7: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x006678B9: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x16u); /* 0x006678BC: push 0x16 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006678BE: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006678C5: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FC2A8u); /* 0x006678CC: push 0x7fc2a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006678D1: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006678D4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006678D9: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006678DD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x47u; /* 0x006678E4: mov ecx, 0x47 */
    RECOMP_CALL(sub_00668410); /* 0x006678E9: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006678EE: add esp, 0x30 */
    _flag_k = FK_ADD;
L_006678F1:
    eax = MEM32(esi + 0x4); /* 0x006678F1: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006678F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x006678F6: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00667923; /* 0x006678F8: je 0x667923 */
L_006678FA:
    ebx = ebx; /* 0x006678FA: lea ebx, [ebx] */
L_00667900:
    eax = MEM32(esi); /* 0x00667900: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x118); /* 0x00667902: lea ecx, [ebp - 0x118] */
    edx = MEM32(ebp + (-0x28)); /* 0x00667908: mov edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0066790B: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0066790D: push eax */
    PUSH32(esp, eax); /* 0x0066790E: push eax */
    RECOMP_CALL(sub_00673310); /* 0x0066790F: call 0x673310 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x00667914: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x00667917: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x0066791A: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0066791C: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0066791F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00667900; /* 0x00667921: jb 0x667900 */
L_00667923:
    ecx = MEM32(ebp + (-0xC)); /* 0x00667923: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667926: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066792D: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066792E: pop edi */
    esi = POP32_VAL(esp); /* 0x0066792F: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00667930: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00667933: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00667935: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066793A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066793C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066793D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667940u);

L_00667940:
    PUSH32(esp, ebp); /* 0x00667940: push ebp */
    ebp = esp; /* 0x00667941: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00667943: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00667946: push esi */
    PUSH32(esp, edi); /* 0x00667947: push edi */
    edi = ecx; /* 0x00667948: mov edi, ecx */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x0066794A: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00667952; /* 0x0066794E: jb 0x667952 */
L_00667950:
    eax = MEM32(eax); /* 0x00667950: mov eax, dword ptr [eax] */
L_00667952:
    PUSH32(esp, 0x007F8FCCu); /* 0x00667952: push 0x7f8fcc */
    PUSH32(esp, eax); /* 0x00667957: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x00667958: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0066795E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00667960: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00667963: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066796F; /* 0x00667965: jne 0x66796f */
L_00667967:
    edi = POP32_VAL(esp); /* 0x00667967: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00667968: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x0066796A: pop esi */
    ebp = POP32_VAL(esp); /* 0x0066796B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066796C: ret 4 */
L_0066796F:
    ecx = MEM32(edi); /* 0x0066796F: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + 0x4); /* 0x00667971: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x00667974: push esi */
    PUSH32(esp, 1); /* 0x00667975: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00667977: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00667979: push eax */
    PUSH32(esp, ecx); /* 0x0066797A: push ecx */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x0066797B: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00667981: push esi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x00667982: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x00667988: add esp, 0x14 */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x0066798B: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0066798D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066798E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0066798F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00667990: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006679A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006679A0u);
    RECOMP_EH_ENTER();

L_006679A0:
    PUSH32(esp, ebp); /* 0x006679A0: push ebp */
    ebp = esp; /* 0x006679A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006679A3: push -1 */
    PUSH32(esp, 0x007BC5B0u); /* 0x006679A5: push 0x7bc5b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006679AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006679B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006679B1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006679B4: push ebx */
    PUSH32(esp, esi); /* 0x006679B5: push esi */
    PUSH32(esp, edi); /* 0x006679B6: push edi */
    eax = MEM32(0x855000); /* 0x006679B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006679BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006679BE: push eax */
    eax = ebp + (-0xC); /* 0x006679BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006679C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006679C8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x006679CB: mov ebx, ecx */
    esi = MEM32(ebx); /* 0x006679CD: mov esi, dword ptr [ebx] */
    ecx = MEM32(ebx + 0xC); /* 0x006679CF: mov ecx, dword ptr [ebx + 0xc] */
    edx = ecx + 0x4; /* 0x006679D2: lea edx, [ecx + 4] */
    eax = MEM32(ebx + 0x4); /* 0x006679D5: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006679D8: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp edx, eax */ /* 0x006679DA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006679E2; /* 0x006679DC: jb 0x6679e2 */
L_006679DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006679DE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006679E8; /* 0x006679E0: jmp 0x6679e8 */
L_006679E2:
    esi = MEM32(esi + ecx); /* 0x006679E2: mov esi, dword ptr [esi + ecx] */
    MEM32(ebx + 0xC) = edx; /* 0x006679E5: mov dword ptr [ebx + 0xc], edx */
L_006679E8:
    eax = MEM32(ebp + 0xC); /* 0x006679E8: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x006679EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006679F4; /* 0x006679ED: je 0x6679f4 */
L_006679EF:
    /* cmp esi, eax */ /* 0x006679EF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x006679F1: cmova esi, eax */
L_006679F4:
    /* test esi, esi */ /* 0x006679F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667AB1; /* 0x006679F6: je 0x667ab1 */
L_006679FC:
    MEM32(ebp + (-0x4)) = 0; /* 0x006679FC: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, esi); /* 0x00667A03: push esi */
    RECOMP_CALL(sub_0077F3DF); /* 0x00667A04: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667A09: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00667A0C: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x00667A0E: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667A11: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx + 0xC); /* 0x00667A18: mov eax, dword ptr [ebx + 0xc] */
    edx = MEM32(ebx + 0x4); /* 0x00667A1B: mov edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx); /* 0x00667A1E: sub edx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    ecx = eax + esi; /* 0x00667A20: lea ecx, [eax + esi] */
    PUSH32(esp, esi); /* 0x00667A23: push esi */
    /* cmp ecx, edx */ /* 0x00667A24: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00667A35; /* 0x00667A26: jb 0x667a35 */
L_00667A28:
    PUSH32(esp, 0); /* 0x00667A28: push 0 */
    PUSH32(esp, edi); /* 0x00667A2A: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x00667A2B: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667A30: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00667A44; /* 0x00667A33: jmp 0x667a44 */
L_00667A35:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x00667A35: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00667A37: push eax */
    PUSH32(esp, edi); /* 0x00667A38: push edi */
    RECOMP_CALL(sub_00780838); /* 0x00667A39: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667A3E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + esi; /* 0x00667A41: add dword ptr [ebx + 0xc], esi */
    _flag_k = FK_ADD;
L_00667A44:
    /* cmp MEM8(edi), 0 */ /* 0x00667A44: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667A4D; /* 0x00667A47: jne 0x667a4d */
L_00667A49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00667A49: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00667A5B; /* 0x00667A4B: jmp 0x667a5b */
L_00667A4D:
    ecx = edi; /* 0x00667A4D: mov ecx, edi */
    edx = ecx + 0x1; /* 0x00667A4F: lea edx, [ecx + 1] */
L_00667A52:
    SET_LO8(eax, MEM8(ecx)); /* 0x00667A52: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00667A54: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00667A55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667A52; /* 0x00667A57: jne 0x667a52 */
L_00667A59:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00667A59: sub ecx, edx */
    _flag_k = FK_CMP;
L_00667A5B:
    PUSH32(esp, ecx); /* 0x00667A5B: push ecx */
    PUSH32(esp, edi); /* 0x00667A5C: push edi */
    ecx = MEM32(ebp + 0x8); /* 0x00667A5D: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00667A60: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00667A65: push edi */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00667A66: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667A6C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00667A6F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667A72: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667A79: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667A7A: pop edi */
    esi = POP32_VAL(esp); /* 0x00667A7B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667A7C: pop ebx */
    esp = ebp; /* 0x00667A7D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667A7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x00667A80: ret 8 */
L_00667A96:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667A96: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667A9D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667AA0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667AA7: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667AA8: pop edi */
    esi = POP32_VAL(esp); /* 0x00667AA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667AAA: pop ebx */
    esp = ebp; /* 0x00667AAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667AAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x00667AAE: ret 8 */
L_00667AB1:
    PUSH32(esp, 0); /* 0x00667AB1: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00667AB3: push 0x7cd0c4 */
    ecx = MEM32(ebp + 0x8); /* 0x00667AB8: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00667ABB: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x00667AC0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667AC3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667ACA: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667ACB: pop edi */
    esi = POP32_VAL(esp); /* 0x00667ACC: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667ACD: pop ebx */
    esp = ebp; /* 0x00667ACE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667AD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x00667AD1: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x00667A96u: goto L_00667A96;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_00667A83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667A83u);

L_00667A83:
    PUSH32(esp, 0x007CD0C4u); /* 0x00667A83: push 0x7cd0c4 */
    ecx = MEM32(ebp + 0x8); /* 0x00667A88: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_004196F0); /* 0x00667A8B: call 0x4196f0 */
    RECOMP_FLAGS_IN();
    eax = 0x00667A96u; /* 0x00667A90: mov eax, 0x667a96 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00667A95: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667A96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667A96u);

L_00667A96:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667A96: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667A9D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667AA0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667AA7: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667AA8: pop edi */
    esi = POP32_VAL(esp); /* 0x00667AA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667AAA: pop ebx */
    esp = ebp; /* 0x00667AAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667AAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00667AAE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00667AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667AE0u);

L_00667AE0:
    PUSH32(esp, ebp); /* 0x00667AE0: push ebp */
    ebp = esp; /* 0x00667AE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667AE3: push -1 */
    PUSH32(esp, 0x007BC5E3u); /* 0x00667AE5: push 0x7bc5e3 */
    eax = MEM32(FS_BASE + (0)); /* 0x00667AEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667AF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x00667AF1: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00667AF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00667AFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00667AFE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x00667B01: push esi */
    PUSH32(esp, edi); /* 0x00667B02: push edi */
    PUSH32(esp, eax); /* 0x00667B03: push eax */
    eax = ebp + (-0xC); /* 0x00667B04: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667B07: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00667B0D: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x00667B0F: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00667B15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667B1D; /* 0x00667B17: jne 0x667b1d */
L_00667B19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00667B19: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00667B37; /* 0x00667B1B: jmp 0x667b37 */
L_00667B1D:
    ecx = MEM32(0x927AEC); /* 0x00667B1D: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x00667B23: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667B37; /* 0x00667B25: jne 0x667b37 */
L_00667B27:
    ecx = 0x00927AE8u; /* 0x00667B27: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x00667B2C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x00667B31: mov ecx, dword ptr [0x927aec] */
L_00667B37:
    eax = MEM32(ecx); /* 0x00667B37: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x00667B39: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x00667B3C: push edx */
    eax = MEM32(eax + 0x8); /* 0x00667B3D: mov eax, dword ptr [eax + 8] */
    RECOMP_FLAGS_OUT(); eax = MEM32(esp); MEM32(eax) = 1; MEM32(eax + 4) = 0x01100001u; esp += 4; /* Original save identity */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(0x809CD0); /* 0x00667B42: movdqa xmm0, xmmword ptr [0x809cd0] */
    xmm_st(ebp + (-0x12C), _xmm[0]); /* 0x00667B4A: movdqu xmmword ptr [ebp - 0x12c], xmm0 */
    edx = MEM32(eax); /* 0x00667B52: mov edx, dword ptr [eax] */
    ecx = edx; /* 0x00667B54: mov ecx, edx */
    esi = MEM32(eax + 0x4); /* 0x00667B56: mov esi, dword ptr [eax + 4] */
    eax = esi; /* 0x00667B59: mov eax, esi */
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x00667B5B: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    MEM8(ebp + (-0x12C)) = (uint8_t)(LO8(edx)); /* 0x00667B5F: mov byte ptr [ebp - 0x12c], dl */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x00667B65: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x00667B65: shr eax, 8 */
    MEM8(ebp + (-0x12B)) = (uint8_t)(LO8(ecx)); /* 0x00667B68: mov byte ptr [ebp - 0x12b], cl */
    eax = esi; /* 0x00667B6E: mov eax, esi */
    ecx = edx; /* 0x00667B70: mov ecx, edx */
    MEM32(ebp + (-0x14)) = esi; /* 0x00667B72: mov dword ptr [ebp - 0x14], esi */
    if (1) _cf = (((ecx) >> 15) & 1u); /* 0x00667B75: shrd ecx, eax, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (16u)) | ((uint32_t)(eax) << (32 - (16u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (16u)) | ((uint32_t)(eax) << (32 - (16u)))) : (ecx));
    MEM32(ebp + (-0x11C)) = esi; /* 0x00667B79: mov dword ptr [ebp - 0x11c], esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00667B7F: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00667B7F: shr eax, 0x10 */
    MEM8(ebp + (-0x12A)) = (uint8_t)(LO8(ecx)); /* 0x00667B82: mov byte ptr [ebp - 0x12a], cl */
    ecx = esi; /* 0x00667B88: mov ecx, esi */
    eax = ecx; /* 0x00667B8A: mov eax, ecx */
    MEM32(ebp + (-0x20)) = 0x160D74F9u; /* 0x00667B8C: mov dword ptr [ebp - 0x20], 0x160d74f9 */
    if (1) _cf = (((edx) >> 23) & 1u); /* 0x00667B93: shrd edx, eax, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (24u)) | ((uint32_t)(eax) << (32 - (24u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (24u)) | ((uint32_t)(eax) << (32 - (24u)))) : (edx));
    MEM32(ebp + (-0x1C)) = 0xCCD2274Cu; /* 0x00667B97: mov dword ptr [ebp - 0x1c], 0xccd2274c */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x00667B9E: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x00667B9E: shr eax, 0x18 */
    SET_LO8(eax, MEM8(ebp + (-0x14))); /* 0x00667BA1: mov al, byte ptr [ebp - 0x14] */
    MEM8(ebp + (-0x128)) = (uint8_t)(LO8(eax)); /* 0x00667BA4: mov byte ptr [ebp - 0x128], al */
    eax = ecx; /* 0x00667BAA: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x00667BAC: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x00667BAC: shr eax, 8 */
    MEM8(ebp + (-0x127)) = (uint8_t)(LO8(eax)); /* 0x00667BAF: mov byte ptr [ebp - 0x127], al */
    eax = ecx; /* 0x00667BB5: mov eax, ecx */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x00667BB7: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x00667BB7: shr ecx, 0x18 */
    MEM8(ebp + (-0x129)) = (uint8_t)(LO8(edx)); /* 0x00667BBA: mov byte ptr [ebp - 0x129], dl */
    edx = ebp + (-0x20); /* 0x00667BC0: lea edx, [ebp - 0x20] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00667BC3: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00667BC3: shr eax, 0x10 */
    MEM8(ebp + (-0x125)) = (uint8_t)(LO8(ecx)); /* 0x00667BC6: mov byte ptr [ebp - 0x125], cl */
    PUSH32(esp, ecx); /* 0x00667BCC: push ecx */
    ecx = ebp + (-0x118); /* 0x00667BCD: lea ecx, [ebp - 0x118] */
    MEM8(ebp + (-0x126)) = (uint8_t)(LO8(eax)); /* 0x00667BD3: mov byte ptr [ebp - 0x126], al */
    MEM32(ebp + (-0x18)) = 0x8838E7ABu; /* 0x00667BD9: mov dword ptr [ebp - 0x18], 0x8838e7ab */
    MEM32(ebp + (-0x14)) = 0x3E65CF25u; /* 0x00667BE0: mov dword ptr [ebp - 0x14], 0x3e65cf25 */
    RECOMP_CALL(sub_00672F90); /* 0x00667BE7: call 0x672f90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667BEC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x00667BEF: mov dword ptr [ebp - 0x28], eax */
    ecx = ebp + (-0x20); /* 0x00667BF2: lea ecx, [ebp - 0x20] */
    edx = eax; /* 0x00667BF5: mov edx, eax */
    PUSH32(esp, ecx); /* 0x00667BF7: push ecx */
    ecx = ebp + (-0x12C); /* 0x00667BF8: lea ecx, [ebp - 0x12c] */
    PUSH32(esp, ecx); /* 0x00667BFE: push ecx */
    ecx = ebp + (-0x118); /* 0x00667BFF: lea ecx, [ebp - 0x118] */
    RECOMP_CALL(sub_00673310); /* 0x00667C05: call 0x673310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667C0A: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x20); /* 0x00667C0D: lea edx, [ebp - 0x20] */
    ecx = ebp + (-0x118); /* 0x00667C10: lea ecx, [ebp - 0x118] */
    RECOMP_CALL(sub_00673120); /* 0x00667C16: call 0x673120 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x4); /* 0x00667C1B: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667C1E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x00667C21: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    edx = eax; /* 0x00667C23: mov edx, eax */
    MEM32(ebp + (-0x28)) = edx; /* 0x00667C25: mov dword ptr [ebp - 0x28], edx */
    /* test LO8(ecx), 0xFu */ /* 0x00667C28: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667C76; /* 0x00667C2B: je 0x667c76 */
L_00667C2D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00667C2D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00667C30: mov ecx, esp */
    MEM32(ebp + (-0x11C)) = esp; /* 0x00667C32: mov dword ptr [ebp - 0x11c], esp */
    PUSH32(esp, 0x007FC2C0u); /* 0x00667C38: push 0x7fc2c0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00667C3D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00667C42: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00667C49: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00667C4C: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00667C4E: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FC2A8u); /* 0x00667C51: push 0x7fc2a8 */
    RECOMP_CALL(sub_00409FA0); /* 0x00667C56: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00667C5B: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667C5F: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xB3u; /* 0x00667C66: mov ecx, 0xb3 */
    RECOMP_CALL(sub_00668410); /* 0x00667C6B: call 0x668410 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x28)); /* 0x00667C70: mov edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00667C73: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00667C76:
    eax = MEM32(edi + 0x4); /* 0x00667C76: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00667C79: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x00667C7B: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00667CA3; /* 0x00667C7D: je 0x667ca3 */
L_00667C7F:
    /* nop */ /* 0x00667C7F: nop  */
L_00667C80:
    eax = MEM32(edi); /* 0x00667C80: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x118); /* 0x00667C82: lea ecx, [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00667C88: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00667C8A: push eax */
    PUSH32(esp, eax); /* 0x00667C8B: push eax */
    RECOMP_CALL(sub_006738A0); /* 0x00667C8C: call 0x6738a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x00667C91: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x00667C94: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x00667C97: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00667C99: add esp, 8 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x28)); /* 0x00667C9C: mov edx, dword ptr [ebp - 0x28] */
    /* cmp esi, eax */ /* 0x00667C9F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00667C80; /* 0x00667CA1: jb 0x667c80 */
L_00667CA3:
    ecx = MEM32(ebp + (-0xC)); /* 0x00667CA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667CA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667CAD: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667CAE: pop edi */
    esi = POP32_VAL(esp); /* 0x00667CAF: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00667CB0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00667CB3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00667CB5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00667CBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667CBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00667CBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667CC0u);

L_00667CC0:
    PUSH32(esp, ebp); /* 0x00667CC0: push ebp */
    ebp = esp; /* 0x00667CC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00667CC3: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x00667CC4: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x00667CC7: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00667CCA: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00667CD2; /* 0x00667CCE: jb 0x667cd2 */
L_00667CD0:
    eax = MEM32(eax); /* 0x00667CD0: mov eax, dword ptr [eax] */
L_00667CD2:
    PUSH32(esp, ebx); /* 0x00667CD2: push ebx */
    PUSH32(esp, 0x007F24ECu); /* 0x00667CD3: push 0x7f24ec */
    PUSH32(esp, eax); /* 0x00667CD8: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x00667CD9: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00667CDF: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00667CE1: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x00667CE4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667CF1; /* 0x00667CE6: jne 0x667cf1 */
L_00667CE8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00667CE8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x00667CEA: pop ebx */
    esp = ebp; /* 0x00667CEB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667CED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00667CEE: ret 4 */
L_00667CF1:
    PUSH32(esp, esi); /* 0x00667CF1: push esi */
    esi = MEM32(0x7CC514); /* 0x00667CF2: mov esi, dword ptr [0x7cc514] */
    PUSH32(esp, edi); /* 0x00667CF8: push edi */
    PUSH32(esp, 2); /* 0x00667CF9: push 2 */
    PUSH32(esp, 0); /* 0x00667CFB: push 0 */
    PUSH32(esp, ebx); /* 0x00667CFD: push ebx */
    RECOMP_ICALL(esi); /* 0x00667CFE: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00667D00: push ebx */
    RECOMP_ICALL(MEM32(0x7CC510)); /* 0x00667D01: call dword ptr [0x7cc510] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00667D07: push 0 */
    PUSH32(esp, 0); /* 0x00667D09: push 0 */
    PUSH32(esp, ebx); /* 0x00667D0B: push ebx */
    edi = eax; /* 0x00667D0C: mov edi, eax */
    RECOMP_ICALL(esi); /* 0x00667D0E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00667D10: push edi */
    RECOMP_CALL(sub_0077F3DF); /* 0x00667D11: call 0x77f3df */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00667D16: push ebx */
    PUSH32(esp, 1); /* 0x00667D17: push 1 */
    esi = eax; /* 0x00667D19: mov esi, eax */
    PUSH32(esp, edi); /* 0x00667D1B: push edi */
    PUSH32(esp, esi); /* 0x00667D1C: push esi */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x00667D1D: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00667D23: push ebx */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x00667D24: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x00667D2A: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = esi + edi; /* 0x00667D2D: lea eax, [esi + edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00667D30: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00667D33: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x00667D34: mov eax, dword ptr [ebp - 4] */
    ecx = eax; /* 0x00667D37: mov ecx, eax */
    PUSH32(esp, esi); /* 0x00667D39: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x00667D3A: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_00667D60); /* 0x00667D3D: call 0x667d60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00667D42: push esi */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00667D43: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667D49: add esp, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x00667D4C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x00667D4E: pop edi */
    esi = POP32_VAL(esp); /* 0x00667D4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667D50: pop ebx */
    esp = ebp; /* 0x00667D51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667D53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00667D54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00667D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667D60u);

L_00667D60:
    PUSH32(esp, ebp); /* 0x00667D60: push ebp */
    ebp = esp; /* 0x00667D61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667D63: push -1 */
    PUSH32(esp, 0x007BC610u); /* 0x00667D65: push 0x7bc610 */
    eax = MEM32(FS_BASE + (0)); /* 0x00667D6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667D70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00667D71: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00667D74: push ebx */
    PUSH32(esp, esi); /* 0x00667D75: push esi */
    PUSH32(esp, edi); /* 0x00667D76: push edi */
    eax = MEM32(0x855000); /* 0x00667D77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00667D7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00667D7E: push eax */
    eax = ebp + (-0xC); /* 0x00667D7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667D82: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00667D88: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x00667D8B: mov ebx, ecx */
    edx = MEM32(ebp + 0xC); /* 0x00667D8D: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x10); /* 0x00667D90: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x00667D93: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = esi; /* 0x00667D95: mov dword ptr [ebp + 0x10], esi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00667EB7; /* 0x00667D98: je 0x667eb7 */
L_00667D9E:
    ecx = MEM32(ebx + 0x4); /* 0x00667D9E: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x00667DA1: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00667DA4: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x00667DA6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00667E8B; /* 0x00667DA8: jae 0x667e8b */
L_00667DAE:
    edx = MEM32(ebx); /* 0x00667DAE: mov edx, dword ptr [ebx] */
    eax = edx; /* 0x00667DB0: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00667DB2: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00667DB4: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, esi */ /* 0x00667DB5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00667DC4; /* 0x00667DB7: jae 0x667dc4 */
L_00667DB9:
    PUSH32(esp, 0x007DFAB0u); /* 0x00667DB9: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00667DBE: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00667DC4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00667DC4: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x00667DC6: add ecx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x00667DC8: push ecx */
    ecx = ebx; /* 0x00667DC9: mov ecx, ebx */
    RECOMP_CALL(sub_0055BF10); /* 0x00667DCB: call 0x55bf10 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x00667DD0: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00667DD3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00667DD5: mov dword ptr [ebp - 0x14], ecx */
    /* test eax, eax */ /* 0x00667DD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667DFA; /* 0x00667DDA: je 0x667dfa */
L_00667DDC:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00667DDC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00667DF4; /* 0x00667DDF: ja 0x667df4 */
L_00667DE1:
    PUSH32(esp, eax); /* 0x00667DE1: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00667DE2: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667DE8: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x00667DEB: mov ecx, eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x00667DED: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x00667DF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667DFA; /* 0x00667DF2: jne 0x667dfa */
L_00667DF4:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00667DF4: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00667DFA:
    MEM32(ebp + (-0x4)) = 0; /* 0x00667DFA: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebx); /* 0x00667E01: mov eax, dword ptr [ebx] */
    esi = MEM32(ebp + 0x8); /* 0x00667E03: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x00667E06: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00667E08: push esi */
    PUSH32(esp, eax); /* 0x00667E09: push eax */
    PUSH32(esp, ecx); /* 0x00667E0A: push ecx */
    edi = MEM32(0x7CC68C); /* 0x00667E0B: mov edi, dword ptr [0x7cc68c] */
    RECOMP_ICALL(edi); /* 0x00667E11: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00667E13: add eax, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x10); /* 0x00667E15: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x00667E18: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00667E19: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00667E1C: push eax */
    RECOMP_ICALL(edi); /* 0x00667E1D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x00667E1F: add eax, esi */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x00667E21: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x00667E24: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00667E27: sub edx, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x00667E29: push edx */
    PUSH32(esp, ecx); /* 0x00667E2A: push ecx */
    PUSH32(esp, eax); /* 0x00667E2B: push eax */
    RECOMP_ICALL(edi); /* 0x00667E2C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x00667E2E: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00667E31: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx); /* 0x00667E38: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebx + 0x4); /* 0x00667E3A: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00667E3D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00667E3F: add esi, eax */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00667E41: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667E4F; /* 0x00667E43: je 0x667e4f */
L_00667E45:
    PUSH32(esp, ecx); /* 0x00667E45: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00667E46: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667E4C: add esp, 4 */
    _flag_k = FK_ADD;
L_00667E4F:
    ecx = MEM32(ebp + (-0x14)); /* 0x00667E4F: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x18)); /* 0x00667E52: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00667E55: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x00667E57: mov dword ptr [ebx + 8], eax */
    eax = ecx + esi; /* 0x00667E5A: lea eax, [ecx + esi] */
    MEM32(ebx + 0x4) = eax; /* 0x00667E5D: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = ecx; /* 0x00667E60: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00667E62: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667E65: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667E6C: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667E6D: pop edi */
    esi = POP32_VAL(esp); /* 0x00667E6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667E6F: pop ebx */
    esp = ebp; /* 0x00667E70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667E72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667E73: ret 0x10 */
L_00667E8B:
    PUSH32(esp, esi); /* 0x00667E8B: push esi */
    PUSH32(esp, edx); /* 0x00667E8C: push edx */
    PUSH32(esp, ecx); /* 0x00667E8D: push ecx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00667E8E: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667E94: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x00667E97: mov edx, dword ptr [ebx + 4] */
    eax = edx + esi; /* 0x00667E9A: lea eax, [edx + esi] */
    ecx = MEM32(ebp + 0x8); /* 0x00667E9D: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x00667EA0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667EB4; /* 0x00667EA2: je 0x667eb4 */
L_00667EA4:
    /* cmp edx, eax */ /* 0x00667EA4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667EB4; /* 0x00667EA6: je 0x667eb4 */
L_00667EA8:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00667EA8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00667EAB: push eax */
    RECOMP_CALL(sub_00667ED0); /* 0x00667EAC: call 0x667ed0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667EB1: add esp, 0xc */
    _flag_k = FK_ADD;
L_00667EB4:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + esi; /* 0x00667EB4: add dword ptr [ebx + 4], esi */
    _flag_k = FK_ADD;
L_00667EB7:
    ecx = MEM32(ebp + (-0xC)); /* 0x00667EB7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667EBA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667EC1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667EC2: pop edi */
    esi = POP32_VAL(esp); /* 0x00667EC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667EC4: pop ebx */
    esp = ebp; /* 0x00667EC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667EC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667EC8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00667E76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667E76u);

L_00667E76:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00667E76: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00667E79: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667E7F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00667E82: push 0 */
    PUSH32(esp, 0); /* 0x00667E84: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00667E86: call 0x780016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00667E8B: push esi */
    PUSH32(esp, edx); /* 0x00667E8C: push edx */
    PUSH32(esp, ecx); /* 0x00667E8D: push ecx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00667E8E: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667E94: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x00667E97: mov edx, dword ptr [ebx + 4] */
    eax = edx + esi; /* 0x00667E9A: lea eax, [edx + esi] */
    ecx = MEM32(ebp + 0x8); /* 0x00667E9D: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x00667EA0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667EB4; /* 0x00667EA2: je 0x667eb4 */
L_00667EA4:
    /* cmp edx, eax */ /* 0x00667EA4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00667EB4; /* 0x00667EA6: je 0x667eb4 */
L_00667EA8:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00667EA8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00667EAB: push eax */
    RECOMP_CALL(sub_00667ED0); /* 0x00667EAC: call 0x667ed0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00667EB1: add esp, 0xc */
    _flag_k = FK_ADD;
L_00667EB4:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + esi; /* 0x00667EB4: add dword ptr [ebx + 4], esi */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00667EB7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00667EBA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00667EC1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00667EC2: pop edi */
    esi = POP32_VAL(esp); /* 0x00667EC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667EC4: pop ebx */
    esp = ebp; /* 0x00667EC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667EC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00667EC8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00667ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667ED0u);

L_00667ED0:
    PUSH32(esp, ebp); /* 0x00667ED0: push ebp */
    ebp = esp; /* 0x00667ED1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x00667ED3: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00667ED6: push ebx */
    PUSH32(esp, esi); /* 0x00667ED7: push esi */
    PUSH32(esp, edi); /* 0x00667ED8: push edi */
    edi = edx; /* 0x00667ED9: mov edi, edx */
    edx = ecx; /* 0x00667EDB: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x00667EDD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x00667EE0: sub edi, edx */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x00667EE2: mov eax, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x00667EE4: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00667EE7: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x00667EE9: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x00667EEC: mov dword ptr [ebp - 0x10], eax */
    ebx = eax; /* 0x00667EEF: mov ebx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x00667EF1: mov dword ptr [ebp - 0xc], eax */
    esi = edi; /* 0x00667EF4: mov esi, edi */
    /* test edi, edi */ /* 0x00667EF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00667F16; /* 0x00667EF8: je 0x667f16 */
L_00667EFA:
    ebx = ebx; /* 0x00667EFA: lea ebx, [ebx] */
L_00667F00:
    eax = ebx; /* 0x00667F00: mov eax, ebx */
    ebx = esi; /* 0x00667F02: mov ebx, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00667F04: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x00667F05: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = edx; /* 0x00667F07: mov esi, edx */
    /* test edx, edx */ /* 0x00667F09: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00667F00; /* 0x00667F0B: jne 0x667f00 */
L_00667F0D:
    edx = MEM32(ebp + (-0x4)); /* 0x00667F0D: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x10)); /* 0x00667F10: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x00667F13: mov dword ptr [ebp - 0xc], ebx */
L_00667F16:
    /* cmp ebx, eax */ /* 0x00667F16: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_00667F97; /* 0x00667F18: jge 0x667f97 */
L_00667F1A:
    /* test ebx, ebx */ /* 0x00667F1A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00667F97; /* 0x00667F1C: jle 0x667f97 */
L_00667F1E:
    eax = edx; /* 0x00667F1E: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00667F20: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x00667F22: mov dword ptr [ebp - 0x1c], eax */
    eax = edi; /* 0x00667F25: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00667F27: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x00667F29: mov dword ptr [ebp - 0x10], eax */
    eax = ecx; /* 0x00667F2C: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00667F2E: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x00667F30: add ebx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x00667F32: mov dword ptr [ebp - 0x18], eax */
L_00667F35:
    eax = ebx + edi; /* 0x00667F35: lea eax, [ebx + edi] */
    edx = ebx; /* 0x00667F38: mov edx, ebx */
    /* cmp eax, ecx */ /* 0x00667F3A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x00667F3C: mov dword ptr [ebp - 8], edx */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x4)); } /* 0x00667F3F: cmove eax, dword ptr [ebp - 4] */
    esi = eax; /* 0x00667F43: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x00667F45: neg esi */
    _flag_k = FK_CMP;
L_00667F47:
    edi = MEM32(ebp + (-0x8)); /* 0x00667F47: mov edi, dword ptr [ebp - 8] */
    SET_LO8(ecx, MEM8(eax)); /* 0x00667F4A: mov cl, byte ptr [eax] */
    SET_LO8(edx, MEM8(edx)); /* 0x00667F4C: mov dl, byte ptr [edx] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x00667F4E: mov byte ptr [edi], cl */
    ecx = MEM32(ebp + 0x8); /* 0x00667F50: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x14)); /* 0x00667F53: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x00667F56: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x00667F58: mov byte ptr [eax], dl */
    edx = eax; /* 0x00667F5A: mov edx, eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x00667F5C: mov dword ptr [ebp - 8], edx */
    /* cmp edi, ecx */ /* 0x00667F5F: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_00667F6A; /* 0x00667F61: jge 0x667f6a */
L_00667F63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x00667F63: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x00667F65: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    goto L_00667F84; /* 0x00667F68: jmp 0x667f84 */
L_00667F6A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x18)); /* 0x00667F6A: sub esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x00667F6D: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x00667F6F: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x00667F72: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x00667F75: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00667F78: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x1C)); /* 0x00667F7A: mov esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00667F7D: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00667F7F: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x00667F81: mov edx, dword ptr [ebp - 8] */
L_00667F84:
    /* cmp eax, ebx */ /* 0x00667F84: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00667F47; /* 0x00667F86: jne 0x667f47 */
L_00667F88:
    eax = MEM32(ebp + (-0xC)); /* 0x00667F88: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00667F8B: dec ebx */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + 0x8); /* 0x00667F8C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00667F8F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x00667F90: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x00667F93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00667F35; /* 0x00667F95: jg 0x667f35 */
L_00667F97:
    edi = POP32_VAL(esp); /* 0x00667F97: pop edi */
    esi = POP32_VAL(esp); /* 0x00667F98: pop esi */
    ebx = POP32_VAL(esp); /* 0x00667F99: pop ebx */
    esp = ebp; /* 0x00667F9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00667F9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00667F9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00667FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00667FC0u);

L_00667FC0:
    PUSH32(esp, ebp); /* 0x00667FC0: push ebp */
    ebp = esp; /* 0x00667FC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00667FC3: push -1 */
    PUSH32(esp, 0x00793FC8u); /* 0x00667FC5: push 0x793fc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00667FCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00667FD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x00667FD1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00667FD4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00667FD9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00667FDB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, edi); /* 0x00667FDE: push edi */
    PUSH32(esp, eax); /* 0x00667FDF: push eax */
    eax = ebp + (-0xC); /* 0x00667FE0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00667FE3: mov dword ptr fs:[0], eax */
    edx = ecx; /* 0x00667FE9: mov edx, ecx */
    ecx = ebp + (-0x28); /* 0x00667FEB: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0x007EB4F4u); /* 0x00667FEE: push 0x7eb4f4 */
    RECOMP_CALL(sub_0041A0F0); /* 0x00667FF3: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00667FF8: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00667FFB: mov edi, eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00667FFD: mov dword ptr [ebp - 4], 0 */
    /* cmp edi, 0x00865F28u */ /* 0x00668004: cmp edi, 0x865f28 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00865F28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066804A; /* 0x0066800A: je 0x66804a */
L_0066800C:
    /* cmp MEM32(0x865F3C), 0x10u */ /* 0x0066800C: cmp dword ptr [0x865f3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668024; /* 0x00668013: jb 0x668024 */
L_00668015:
    PUSH32(esp, MEM32(0x865F28)); /* 0x00668015: push dword ptr [0x865f28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066801B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668021: add esp, 4 */
    _flag_k = FK_ADD;
L_00668024:
    PUSH32(esp, edi); /* 0x00668024: push edi */
    ecx = 0x00865F28u; /* 0x00668025: mov ecx, 0x865f28 */
    MEM32(0x865F3C) = 0xFu; /* 0x0066802A: mov dword ptr [0x865f3c], 0xf */
    MEM32(0x865F38) = 0; /* 0x00668034: mov dword ptr [0x865f38], 0 */
    MEM8(0x865F28) = (uint8_t)(0); /* 0x0066803E: mov byte ptr [0x865f28], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00668045: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0066804A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066804A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00668051: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668063; /* 0x00668055: jb 0x668063 */
L_00668057:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00668057: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066805A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668060: add esp, 4 */
    _flag_k = FK_ADD;
L_00668063:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00668063: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066806A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00668071: mov byte ptr [ebp - 0x28], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00668075: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00668078: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066807F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00668080: pop edi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00668081: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00668084: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00668086: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066808B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066808D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066808E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00668090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668090u);

L_00668090:
    PUSH32(esp, ebp); /* 0x00668090: push ebp */
    ebp = esp; /* 0x00668091: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00668093: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668096: push -1 */
    PUSH32(esp, 0x007BC646u); /* 0x00668098: push 0x7bc646 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066809D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006680A3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x154u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x154u; /* 0x006680A4: sub esp, 0x154 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006680AA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006680AF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14C) = eax; /* 0x006680B1: mov dword ptr [esp + 0x14c], eax */
    PUSH32(esp, ebx); /* 0x006680B8: push ebx */
    PUSH32(esp, esi); /* 0x006680B9: push esi */
    eax = MEM32(0x855000); /* 0x006680BA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006680BF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006680C1: push eax */
    eax = esp + 0x160; /* 0x006680C2: lea eax, [esp + 0x160] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006680C9: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x006680CF: mov ebx, ecx */
    /* cmp MEM8(0x875994), 0 */ /* 0x006680D1: cmp byte ptr [0x875994], 0 */
    _flag_a = (uint32_t)(MEM8(0x875994)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006682F4; /* 0x006680D8: jne 0x6682f4 */
L_006680DE:
    PUSH32(esp, 4); /* 0x006680DE: push 4 */
    MEM32(esp + 0x50) = 0; /* 0x006680E0: mov dword ptr [esp + 0x50], 0 */
    ecx = esp + 0x40; /* 0x006680E8: lea ecx, [esp + 0x40] */
    MEM32(esp + 0x54) = 0; /* 0x006680EC: mov dword ptr [esp + 0x54], 0 */
    PUSH32(esp, 0x007CE250u); /* 0x006680F4: push 0x7ce250 */
    MEM8(0x875994) = (uint8_t)(1); /* 0x006680F9: mov byte ptr [0x875994], 1 */
    MEM32(esp + 0x58) = 0xFu; /* 0x00668100: mov dword ptr [esp + 0x58], 0xf */
    MEM32(esp + 0x54) = 0; /* 0x00668108: mov dword ptr [esp + 0x54], 0 */
    MEM8(esp + 0x44) = (uint8_t)(0); /* 0x00668110: mov byte ptr [esp + 0x44], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00668115: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x168) = 0; /* 0x0066811A: mov dword ptr [esp + 0x168], 0 */
    ecx = MEM32(0x8780CC); /* 0x00668125: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x0066812B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066813F; /* 0x0066812D: je 0x66813f */
L_0066812F:
    ecx = MEM32(ecx + 0xC0); /* 0x0066812F: mov ecx, dword ptr [ecx + 0xc0] */
    eax = esp + 0x3C; /* 0x00668135: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x00668139: push eax */
    RECOMP_CALL(sub_00671EF0); /* 0x0066813A: call 0x671ef0 */
    RECOMP_FLAGS_IN();
L_0066813F:
    MEM32(esp + 0x168) = 0xFFFFFFFFu; /* 0x0066813F: mov dword ptr [esp + 0x168], 0xffffffff */
    /* cmp MEM32(esp + 0x50), 0x10u */ /* 0x0066814A: cmp dword ptr [esp + 0x50], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x50)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066815E; /* 0x0066814F: jb 0x66815e */
L_00668151:
    PUSH32(esp, MEM32(esp + 0x3C)); /* 0x00668151: push dword ptr [esp + 0x3c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00668155: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066815B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066815E:
    MEM32(esp + 0x50) = 0xFu; /* 0x0066815E: mov dword ptr [esp + 0x50], 0xf */
    MEM32(esp + 0x4C) = 0; /* 0x00668166: mov dword ptr [esp + 0x4c], 0 */
    MEM8(esp + 0x3C) = (uint8_t)(0); /* 0x0066816E: mov byte ptr [esp + 0x3c], 0 */
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x00668173: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x87CBB8), 0 */ /* 0x00668179: cmp byte ptr [0x87cbb8], 0 */
    _flag_a = (uint32_t)(MEM8(0x87CBB8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = 1; /* 0x00668180: mov ecx, 1 */
    MEM32(esp + 0x10) = eax; /* 0x00668185: mov dword ptr [esp + 0x10], eax */
    eax = 0x1826u; /* 0x00668189: mov eax, 0x1826 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x0066818E: cmove eax, ecx */
    MEM32(esp + 0x34) = 0; /* 0x00668191: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x00668199: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x14) = ebx; /* 0x006681A1: mov dword ptr [esp + 0x14], ebx */
    MEM32(esp + 0x18) = 1; /* 0x006681A5: mov dword ptr [esp + 0x18], 1 */
    MEM32(esp + 0xC) = eax; /* 0x006681AD: mov dword ptr [esp + 0xc], eax */
    MEM32(esp + 0x38) = 0xFu; /* 0x006681B1: mov dword ptr [esp + 0x38], 0xf */
    MEM32(esp + 0x34) = 0; /* 0x006681B9: mov dword ptr [esp + 0x34], 0 */
    MEM8(esp + 0x24) = (uint8_t)(0); /* 0x006681C1: mov byte ptr [esp + 0x24], 0 */
    MEM32(esp + 0x168) = ecx; /* 0x006681C6: mov dword ptr [esp + 0x168], ecx */
    eax = esp + 0x1C; /* 0x006681CD: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006681D1: push eax */
    RECOMP_ICALL(MEM32(0x7CC6B8)); /* 0x006681D2: call dword ptr [0x7cc6b8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006681D8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esp + 0x1C; /* 0x006681DB: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006681DF: push eax */
    RECOMP_ICALL(MEM32(0x7CC54C)); /* 0x006681E0: call dword ptr [0x7cc54c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006681E6: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esp + 0x24; /* 0x006681E9: lea ecx, [esp + 0x24] */
    esi = eax; /* 0x006681ED: mov esi, eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006681EF: push -1 */
    PUSH32(esp, 0); /* 0x006681F1: push 0 */
    PUSH32(esp, 0x00865F28u); /* 0x006681F3: push 0x865f28 */
    RECOMP_CALL(sub_00419920); /* 0x006681F8: call 0x419920 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC0D8)); /* 0x006681FD: call dword ptr [0x7cc0d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00668203: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x00668204: push dword ptr [esi] */
    eax = MEM32(esi + 0x10); /* 0x00668206: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00668209: push dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066820C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0066820D: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x00668210: push dword ptr [esi + 0xc] */
    PUSH32(esp, eax); /* 0x00668213: push eax */
    eax = MEM32(esi + 0x14); /* 0x00668214: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x00668217: add eax, 0x76c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0066821C: push eax */
    eax = esp + 0x70; /* 0x0066821D: lea eax, [esp + 0x70] */
    PUSH32(esp, 0x007FC3BCu); /* 0x00668221: push 0x7fc3bc */
    PUSH32(esp, eax); /* 0x00668226: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A4)); /* 0x00668227: call dword ptr [0x7cc6a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x0066822D: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esp + 0x54), 0 */ /* 0x00668230: cmp byte ptr [esp + 0x54], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x54)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066823B; /* 0x00668235: jne 0x66823b */
L_00668237:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00668237: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0066824B; /* 0x00668239: jmp 0x66824b */
L_0066823B:
    ecx = esp + 0x54; /* 0x0066823B: lea ecx, [esp + 0x54] */
    edx = ecx + 0x1; /* 0x0066823F: lea edx, [ecx + 1] */
L_00668242:
    SET_LO8(eax, MEM8(ecx)); /* 0x00668242: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00668244: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00668245: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00668242; /* 0x00668247: jne 0x668242 */
L_00668249:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00668249: sub ecx, edx */
    _flag_k = FK_CMP;
L_0066824B:
    PUSH32(esp, ecx); /* 0x0066824B: push ecx */
    eax = esp + 0x58; /* 0x0066824C: lea eax, [esp + 0x58] */
    PUSH32(esp, eax); /* 0x00668250: push eax */
    ecx = esp + 0x2C; /* 0x00668251: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_004199E0); /* 0x00668255: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x0066825A: push 4 */
    PUSH32(esp, 0x007FC3ACu); /* 0x0066825C: push 0x7fc3ac */
    ecx = esp + 0x2C; /* 0x00668261: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_004199E0); /* 0x00668265: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x38), 0x10u */ /* 0x0066826A: cmp dword ptr [esp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x24; /* 0x0066826F: lea eax, [esp + 0x24] */
    PUSH32(esp, 0); /* 0x00668273: push 0 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x28); } /* 0x00668275: cmovae eax, dword ptr [esp + 0x28] */
    PUSH32(esp, 0); /* 0x0066827A: push 0 */
    PUSH32(esp, 2); /* 0x0066827C: push 2 */
    PUSH32(esp, 0); /* 0x0066827E: push 0 */
    PUSH32(esp, 3); /* 0x00668280: push 3 */
    PUSH32(esp, 0xC0000000u); /* 0x00668282: push 0xc0000000 */
    PUSH32(esp, eax); /* 0x00668287: push eax */
    RECOMP_ICALL(MEM32(0x7CC0D4)); /* 0x00668288: call dword ptr [0x7cc0d4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0066828E: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00668290: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x00668292: push 0 */
    PUSH32(esp, 0); /* 0x00668294: push 0 */
    /* test ebx, ebx */ /* 0x00668296: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x18; /* 0x00668298: lea eax, [esp + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x0066829C: cmove eax, ecx */
    PUSH32(esp, eax); /* 0x0066829F: push eax */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006682A0: push dword ptr [esp + 0x18] */
    PUSH32(esp, esi); /* 0x006682A4: push esi */
    RECOMP_ICALL(MEM32(0x7CC0FC)); /* 0x006682A5: call dword ptr [0x7cc0fc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006682AB: push eax */
    RECOMP_ICALL(MEM32(0x7CC114)); /* 0x006682AC: call dword ptr [0x7cc114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006682B2: push eax */
    RECOMP_ICALL(MEM32(0x7CC954)); /* 0x006682B3: call dword ptr [0x7cc954] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006682B9: push esi */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x006682BA: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x168) = 0xFFFFFFFFu; /* 0x006682C0: mov dword ptr [esp + 0x168], 0xffffffff */
    /* cmp MEM32(esp + 0x38), 0x10u */ /* 0x006682CB: cmp dword ptr [esp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006682DF; /* 0x006682D0: jb 0x6682df */
L_006682D2:
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x006682D2: push dword ptr [esp + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006682D6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006682DC: add esp, 4 */
    _flag_k = FK_ADD;
L_006682DF:
    MEM32(esp + 0x38) = 0xFu; /* 0x006682DF: mov dword ptr [esp + 0x38], 0xf */
    MEM32(esp + 0x34) = 0; /* 0x006682E7: mov dword ptr [esp + 0x34], 0 */
    MEM8(esp + 0x24) = (uint8_t)(0); /* 0x006682EF: mov byte ptr [esp + 0x24], 0 */
L_006682F4:
    eax = 1; /* 0x006682F4: mov eax, 1 */
    ecx = MEM32(esp + 0x160); /* 0x006682F9: mov ecx, dword ptr [esp + 0x160] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00668300: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00668307: pop ecx */
    esi = POP32_VAL(esp); /* 0x00668308: pop esi */
    ebx = POP32_VAL(esp); /* 0x00668309: pop ebx */
    ecx = MEM32(esp + 0x14C); /* 0x0066830A: mov ecx, dword ptr [esp + 0x14c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00668311: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00668313: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00668318: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066831A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066831B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00668320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668320u);

L_00668320:
    /* cmp MEM8(0x87191B), 0 */ /* 0x00668320: cmp byte ptr [0x87191b], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x00668327: push esi */
    esi = ecx; /* 0x00668328: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668333; /* 0x0066832A: je 0x668333 */
L_0066832C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066832C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00668090); /* 0x0066832E: call 0x668090 */
    RECOMP_FLAGS_IN();
L_00668333:
    RECOMP_ICALL(MEM32(0x924FE4)); /* 0x00668333: call dword ptr [0x924fe4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00668339: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668341; /* 0x0066833D: jb 0x668341 */
L_0066833F:
    esi = MEM32(esi); /* 0x0066833F: mov esi, dword ptr [esi] */
L_00668341:
    PUSH32(esp, 0x30u); /* 0x00668341: push 0x30 */
    PUSH32(esp, 0x007FC3B4u); /* 0x00668343: push 0x7fc3b4 */
    PUSH32(esp, esi); /* 0x00668348: push esi */
    PUSH32(esp, 0); /* 0x00668349: push 0 */
    RECOMP_ICALL(MEM32(0x7CC870)); /* 0x0066834B: call dword ptr [0x7cc870] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x924FE0)); /* 0x00668351: call dword ptr [0x924fe0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668357: push -1 */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x00668359: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0066835Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00668360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668360u);

L_00668360:
    PUSH32(esp, ebp); /* 0x00668360: push ebp */
    ebp = esp; /* 0x00668361: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x00668363: push -2 */
    PUSH32(esp, 0x00846350u); /* 0x00668365: push 0x846350 */
    PUSH32(esp, 0x0077FD09u); /* 0x0066836A: push 0x77fd09 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066836F: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00668375: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00668376: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00668379: push ebx */
    PUSH32(esp, esi); /* 0x0066837A: push esi */
    PUSH32(esp, edi); /* 0x0066837B: push edi */
    eax = MEM32(0x855000); /* 0x0066837C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x00668381: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00668384: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00668386: push eax */
    eax = ebp + (-0x10); /* 0x00668387: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066838A: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x00668390: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x00668393: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_005CF620); /* 0x0066839A: call 0x5cf620 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0066839F: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = 1; /* 0x006683A6: mov eax, 1 */
    ecx = MEM32(ebp + (-0x10)); /* 0x006683AB: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006683AE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006683B5: pop ecx */
    edi = POP32_VAL(esp); /* 0x006683B6: pop edi */
    esi = POP32_VAL(esp); /* 0x006683B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006683B8: pop ebx */
    esp = ebp; /* 0x006683B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006683BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006683BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006683BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006683BDu);

L_006683BD:
    ecx = MEM32(ebp + (-0x14)); /* 0x006683BD: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00668090); /* 0x006683C0: call 0x668090 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006683C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006683C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006683C6u);

L_006683C6:
    esp = MEM32(ebp + (-0x18)); /* 0x006683C6: mov esp, dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x924FE4)); /* 0x006683C9: call dword ptr [0x924fe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x006683CF: push 0x10 */
    PUSH32(esp, 0x007FC3B4u); /* 0x006683D1: push 0x7fc3b4 */
    PUSH32(esp, 0x007FC320u); /* 0x006683D6: push 0x7fc320 */
    PUSH32(esp, 0); /* 0x006683DB: push 0 */
    RECOMP_ICALL(MEM32(0x7CC870)); /* 0x006683DD: call dword ptr [0x7cc870] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x924FE0)); /* 0x006683E3: call dword ptr [0x924fe0] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x006683E9: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006683F0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x006683F3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006683F6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006683FD: pop ecx */
    edi = POP32_VAL(esp); /* 0x006683FE: pop edi */
    esi = POP32_VAL(esp); /* 0x006683FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x00668400: pop ebx */
    esp = ebp; /* 0x00668401: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00668403: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00668404: ret  */
    RECOMP_REGS_OUT();
}

void sub_00668410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668410u);

L_00668410:
    PUSH32(esp, ebp); /* 0x00668410: push ebp */
    ebp = esp; /* 0x00668411: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668413: push -1 */
    PUSH32(esp, 0x007BC6C9u); /* 0x00668415: push 0x7bc6c9 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066841A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00668420: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8u; /* 0x00668421: sub esp, 0xa8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00668427: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066842C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066842E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x00668431: push esi */
    PUSH32(esp, edi); /* 0x00668432: push edi */
    PUSH32(esp, eax); /* 0x00668433: push eax */
    eax = ebp + (-0xC); /* 0x00668434: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00668437: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0066843D: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066843F: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x00668446: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006684BB; /* 0x0066844D: je 0x6684bb */
L_0066844F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066844F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00668453: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00668457: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00668467; /* 0x0066845D: jb 0x668467 */
L_0066845F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0066845F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x00668462: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668464: add esp, 4 */
    _flag_k = FK_ADD;
L_00668467:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00668467: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0066846E: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00668475: mov byte ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00668479: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00668480: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066848E; /* 0x00668484: jb 0x66848e */
L_00668486:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x00668486: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x00668489: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066848B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066848E:
    MEM32(ebp + 0x34) = 0xFu; /* 0x0066848E: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x00668495: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x0066849C: mov byte ptr [ebp + 0x20], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006684A0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006684A3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006684AA: pop ecx */
    edi = POP32_VAL(esp); /* 0x006684AB: pop edi */
    esi = POP32_VAL(esp); /* 0x006684AC: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x006684AD: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006684B0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006684B2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006684B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006684B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006684BA: ret  */
L_006684BB:
    MEM32(ebp + (-0x2C)) = 0; /* 0x006684BB: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x006684C2: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x006684C9: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x006684D0: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x006684D7: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x006684DE: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006684E2: mov byte ptr [ebp - 4], 2 */
    edx = ebp + 0x8; /* 0x006684E6: lea edx, [ebp + 8] */
    PUSH32(esp, 0x007FC2F8u); /* 0x006684E9: push 0x7fc2f8 */
    ecx = ebp + (-0xB4); /* 0x006684EE: lea ecx, [ebp - 0xb4] */
    RECOMP_CALL(sub_0041A0F0); /* 0x006684F4: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006684F9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006684FC: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + 0x20; /* 0x00668500: lea ecx, [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x00668503: push ecx */
    edx = eax; /* 0x00668504: mov edx, eax */
    ecx = ebp + (-0x84); /* 0x00668506: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_0045F540); /* 0x0066850C: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668511: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668514: mov byte ptr [ebp - 4], 4 */
    edx = eax; /* 0x00668518: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x0066851A: push 0x7fc2f0 */
    ecx = ebp + (-0x6C); /* 0x0066851F: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00419C40); /* 0x00668522: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668527: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0066852A: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066852C: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x24); /* 0x00668530: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x00668533: push 0xa */
    PUSH32(esp, eax); /* 0x00668535: push eax */
    PUSH32(esp, edi); /* 0x00668536: push edi */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x00668537: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0066853D: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x54); /* 0x00668540: lea ecx, [ebp - 0x54] */
    edx = esi; /* 0x00668543: mov edx, esi */
    PUSH32(esp, eax); /* 0x00668545: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00668546: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066854B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066854E: mov byte ptr [ebp - 4], 6 */
    edx = eax; /* 0x00668552: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00668554: push 0x7fc364 */
    ecx = ebp + (-0x9C); /* 0x00668559: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_00419C40); /* 0x0066855F: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668564: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00668567: mov edi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00668569: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x3C); /* 0x0066856D: lea eax, [ebp - 0x3c] */
    esi = MEM32(0x7CC694); /* 0x00668570: mov esi, dword ptr [0x7cc694] */
    /* cmp eax, edi */ /* 0x00668576: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006685A3; /* 0x00668578: je 0x6685a3 */
L_0066857A:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x0066857A: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668588; /* 0x0066857E: jb 0x668588 */
L_00668580:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x00668580: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(esi); /* 0x00668583: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668585: add esp, 4 */
    _flag_k = FK_ADD;
L_00668588:
    PUSH32(esp, edi); /* 0x00668588: push edi */
    ecx = ebp + (-0x3C); /* 0x00668589: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x0066858C: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668593: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x0066859A: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066859E: call 0x419890 */
    RECOMP_FLAGS_IN();
L_006685A3:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006685A3: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x006685A7: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006685BB; /* 0x006685AE: jb 0x6685bb */
L_006685B0:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x006685B0: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(esi); /* 0x006685B6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006685B8: add esp, 4 */
    _flag_k = FK_ADD;
L_006685BB:
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x006685BB: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x006685C5: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x006685CF: mov byte ptr [ebp - 0x9c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006685D6: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x006685DA: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006685E8; /* 0x006685DE: jb 0x6685e8 */
L_006685E0:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x006685E0: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(esi); /* 0x006685E3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006685E5: add esp, 4 */
    _flag_k = FK_ADD;
L_006685E8:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x006685E8: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x006685EF: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x006685F6: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006685FA: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x006685FE: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066860C; /* 0x00668602: jb 0x66860c */
L_00668604:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668604: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(esi); /* 0x00668607: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668609: add esp, 4 */
    _flag_k = FK_ADD;
L_0066860C:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x0066860C: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00668613: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x0066861A: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066861E: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x00668622: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668633; /* 0x00668626: jb 0x668633 */
L_00668628:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00668628: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(esi); /* 0x0066862E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668630: add esp, 4 */
    _flag_k = FK_ADD;
L_00668633:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x00668633: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x0066863A: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x00668641: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00668648: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0xA0)), 0x10u */ /* 0x0066864C: cmp dword ptr [ebp - 0xa0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668660; /* 0x00668653: jb 0x668660 */
L_00668655:
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x00668655: push dword ptr [ebp - 0xb4] */
    RECOMP_ICALL(esi); /* 0x0066865B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066865D: add esp, 4 */
    _flag_k = FK_ADD;
L_00668660:
    ecx = ebp + (-0x3C); /* 0x00668660: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0xA0)) = 0xFu; /* 0x00668663: mov dword ptr [ebp - 0xa0], 0xf */
    MEM32(ebp + (-0xA4)) = 0; /* 0x0066866D: mov dword ptr [ebp - 0xa4], 0 */
    MEM8(ebp + (-0xB4)) = (uint8_t)(0); /* 0x00668677: mov byte ptr [ebp - 0xb4], 0 */
    RECOMP_CALL(sub_00668320); /* 0x0066867E: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00668683u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00668690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668690u);

L_00668690:
    PUSH32(esp, ebp); /* 0x00668690: push ebp */
    ebp = esp; /* 0x00668691: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668693: push -1 */
    PUSH32(esp, 0x007BC76Cu); /* 0x00668695: push 0x7bc76c */
    eax = MEM32(FS_BASE + (0)); /* 0x0066869A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006686A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x006686A1: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006686A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006686AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006686AE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006686B1: push ebx */
    PUSH32(esp, esi); /* 0x006686B2: push esi */
    PUSH32(esp, edi); /* 0x006686B3: push edi */
    PUSH32(esp, eax); /* 0x006686B4: push eax */
    eax = ebp + (-0xC); /* 0x006686B5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006686B8: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x006686BE: mov ebx, edx */
    edi = ecx; /* 0x006686C0: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 2; /* 0x006686C2: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x006686C9: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668767; /* 0x006686D0: je 0x668767 */
L_006686D6:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006686D6: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x006686DA: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x006686DE: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006686EE; /* 0x006686E4: jb 0x6686ee */
L_006686E6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006686E6: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x006686E9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006686EB: add esp, 4 */
    _flag_k = FK_ADD;
L_006686EE:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x006686EE: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x006686F5: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x006686FC: mov byte ptr [ebp + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00668700: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00668704: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668712; /* 0x00668708: jb 0x668712 */
L_0066870A:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x0066870A: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x0066870D: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066870F: add esp, 4 */
    _flag_k = FK_ADD;
L_00668712:
    MEM32(ebp + 0x34) = 0xFu; /* 0x00668712: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x00668719: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x00668720: mov byte ptr [ebp + 0x20], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00668724: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x4C), 0x10u */ /* 0x0066872B: cmp dword ptr [ebp + 0x4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668739; /* 0x0066872F: jb 0x668739 */
L_00668731:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x00668731: push dword ptr [ebp + 0x38] */
    RECOMP_ICALL(esi); /* 0x00668734: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668736: add esp, 4 */
    _flag_k = FK_ADD;
L_00668739:
    MEM32(ebp + 0x4C) = 0xFu; /* 0x00668739: mov dword ptr [ebp + 0x4c], 0xf */
    MEM32(ebp + 0x48) = 0; /* 0x00668740: mov dword ptr [ebp + 0x48], 0 */
    MEM8(ebp + 0x38) = (uint8_t)(0); /* 0x00668747: mov byte ptr [ebp + 0x38], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066874B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066874E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00668755: pop ecx */
    edi = POP32_VAL(esp); /* 0x00668756: pop edi */
    esi = POP32_VAL(esp); /* 0x00668757: pop esi */
    ebx = POP32_VAL(esp); /* 0x00668758: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00668759: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066875C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066875E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00668763: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00668765: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00668766: ret  */
L_00668767:
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668767: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x0066876E: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x00668775: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x0066877C: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668783: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x0066878A: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066878E: mov byte ptr [ebp - 4], 3 */
    edx = ebp + 0x8; /* 0x00668792: lea edx, [ebp + 8] */
    PUSH32(esp, 0x007F86C4u); /* 0x00668795: push 0x7f86c4 */
    ecx = ebp + (-0x9C); /* 0x0066879A: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_0041A0F0); /* 0x006687A0: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006687A5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006687A8: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + 0x20; /* 0x006687AC: lea ecx, [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x006687AF: push ecx */
    edx = eax; /* 0x006687B0: mov edx, eax */
    ecx = ebp + (-0x6C); /* 0x006687B2: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045F540); /* 0x006687B5: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006687BA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006687BD: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x006687C1: mov edx, eax */
    PUSH32(esp, 0x007FC384u); /* 0x006687C3: push 0x7fc384 */
    ecx = ebp + (-0x84); /* 0x006687C8: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x006687CE: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006687D3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006687D6: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006687D8: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x24); /* 0x006687DC: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x006687DF: push 0xa */
    PUSH32(esp, eax); /* 0x006687E1: push eax */
    PUSH32(esp, edi); /* 0x006687E2: push edi */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x006687E3: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006687E9: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x54); /* 0x006687EC: lea ecx, [ebp - 0x54] */
    edx = esi; /* 0x006687EF: mov edx, esi */
    PUSH32(esp, eax); /* 0x006687F1: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x006687F2: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006687F7: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006687FA: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006687FC: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x3C); /* 0x00668800: lea eax, [ebp - 0x3c] */
    edi = MEM32(0x7CC694); /* 0x00668803: mov edi, dword ptr [0x7cc694] */
    /* cmp eax, esi */ /* 0x00668809: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668836; /* 0x0066880B: je 0x668836 */
L_0066880D:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x0066880D: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066881B; /* 0x00668811: jb 0x66881b */
L_00668813:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x00668813: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(edi); /* 0x00668816: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668818: add esp, 4 */
    _flag_k = FK_ADD;
L_0066881B:
    PUSH32(esp, esi); /* 0x0066881B: push esi */
    ecx = ebp + (-0x3C); /* 0x0066881C: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x0066881F: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668826: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x0066882D: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00668831: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00668836:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00668836: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x0066883A: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668848; /* 0x0066883E: jb 0x668848 */
L_00668840:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00668840: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00668843: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668845: add esp, 4 */
    _flag_k = FK_ADD;
L_00668848:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00668848: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x0066884F: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00668856: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066885A: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x0066885E: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066886F; /* 0x00668862: jb 0x66886f */
L_00668864:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00668864: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x0066886A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066886C: add esp, 4 */
    _flag_k = FK_ADD;
L_0066886F:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x0066886F: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00668876: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x0066887D: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668884: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00668888: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668896; /* 0x0066888C: jb 0x668896 */
L_0066888E:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x0066888E: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668891: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668893: add esp, 4 */
    _flag_k = FK_ADD;
L_00668896:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00668896: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0066889D: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x006688A4: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006688A8: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x006688AC: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006688C0; /* 0x006688B3: jb 0x6688c0 */
L_006688B5:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x006688B5: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x006688BB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006688BD: add esp, 4 */
    _flag_k = FK_ADD;
L_006688C0:
    eax = ebp + 0x38; /* 0x006688C0: lea eax, [ebp + 0x38] */
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x006688C3: mov dword ptr [ebp - 0x88], 0xf */
    PUSH32(esp, eax); /* 0x006688CD: push eax */
    edx = 0x007FC388u; /* 0x006688CE: mov edx, 0x7fc388 */
    MEM32(ebp + (-0x8C)) = 0; /* 0x006688D3: mov dword ptr [ebp - 0x8c], 0 */
    ecx = ebp + (-0x54); /* 0x006688DD: lea ecx, [ebp - 0x54] */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x006688E0: mov byte ptr [ebp - 0x9c], 0 */
    RECOMP_CALL(sub_0042A130); /* 0x006688E7: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006688EC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006688EF: mov byte ptr [ebp - 4], 8 */
    edx = eax; /* 0x006688F3: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x006688F5: push 0x7fc2f0 */
    ecx = ebp + (-0x84); /* 0x006688FA: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x00668900: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668905: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00668908: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0066890A: mov byte ptr [ebp - 4], 9 */
    eax = ebp + (-0x24); /* 0x0066890E: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x00668911: push 0xa */
    PUSH32(esp, eax); /* 0x00668913: push eax */
    PUSH32(esp, ebx); /* 0x00668914: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x00668915: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0066891B: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x6C); /* 0x0066891E: lea ecx, [ebp - 0x6c] */
    edx = esi; /* 0x00668921: mov edx, esi */
    PUSH32(esp, eax); /* 0x00668923: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00668924: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668929: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0066892C: mov byte ptr [ebp - 4], 0xa */
    edx = eax; /* 0x00668930: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00668932: push 0x7fc364 */
    ecx = ebp + (-0x9C); /* 0x00668937: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_00419C40); /* 0x0066893D: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668942: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00668945: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0x3C); /* 0x00668949: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066894C: push -1 */
    PUSH32(esp, 0); /* 0x0066894E: push 0 */
    PUSH32(esp, eax); /* 0x00668950: push eax */
    RECOMP_CALL(sub_00419920); /* 0x00668951: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00668956: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x0066895A: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066896E; /* 0x00668961: jb 0x66896e */
L_00668963:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00668963: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00668969: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066896B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066896E:
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x0066896E: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00668978: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00668982: mov byte ptr [ebp - 0x9c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00668989: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x0066898D: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066899B; /* 0x00668991: jb 0x66899b */
L_00668993:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668993: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668996: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668998: add esp, 4 */
    _flag_k = FK_ADD;
L_0066899B:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x0066899B: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x006689A2: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x006689A9: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006689AD: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x006689B1: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006689C2; /* 0x006689B5: jb 0x6689c2 */
L_006689B7:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006689B7: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x006689BD: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006689BF: add esp, 4 */
    _flag_k = FK_ADD;
L_006689C2:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x006689C2: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x006689C9: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x006689D0: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006689D7: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x006689DB: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006689E9; /* 0x006689DF: jb 0x6689e9 */
L_006689E1:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x006689E1: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x006689E4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006689E6: add esp, 4 */
    _flag_k = FK_ADD;
L_006689E9:
    ecx = ebp + (-0x3C); /* 0x006689E9: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x006689EC: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x006689F3: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x006689FA: mov byte ptr [ebp - 0x54], 0 */
    RECOMP_CALL(sub_00668320); /* 0x006689FE: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00668A03u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00668A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668A10u);

L_00668A10:
    PUSH32(esp, ebp); /* 0x00668A10: push ebp */
    ebp = esp; /* 0x00668A11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668A13: push -1 */
    PUSH32(esp, 0x007BC814u); /* 0x00668A15: push 0x7bc814 */
    eax = MEM32(FS_BASE + (0)); /* 0x00668A1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00668A20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x00668A21: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00668A27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00668A2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00668A2E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00668A31: push ebx */
    PUSH32(esp, esi); /* 0x00668A32: push esi */
    PUSH32(esp, edi); /* 0x00668A33: push edi */
    PUSH32(esp, eax); /* 0x00668A34: push eax */
    eax = ebp + (-0xC); /* 0x00668A35: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00668A38: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x00668A3E: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 3; /* 0x00668A40: mov dword ptr [ebp - 4], 3 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x00668A47: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668B09; /* 0x00668A4E: je 0x668b09 */
L_00668A54:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00668A54: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00668A58: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00668A5C: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00668A6C; /* 0x00668A62: jb 0x668a6c */
L_00668A64:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00668A64: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x00668A67: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668A69: add esp, 4 */
    _flag_k = FK_ADD;
L_00668A6C:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00668A6C: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00668A73: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00668A7A: mov byte ptr [ebp + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00668A7E: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00668A82: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668A90; /* 0x00668A86: jb 0x668a90 */
L_00668A88:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x00668A88: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x00668A8B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668A8D: add esp, 4 */
    _flag_k = FK_ADD;
L_00668A90:
    MEM32(ebp + 0x34) = 0xFu; /* 0x00668A90: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x00668A97: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x00668A9E: mov byte ptr [ebp + 0x20], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00668AA2: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x4C), 0x10u */ /* 0x00668AA6: cmp dword ptr [ebp + 0x4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668AB4; /* 0x00668AAA: jb 0x668ab4 */
L_00668AAC:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x00668AAC: push dword ptr [ebp + 0x38] */
    RECOMP_ICALL(esi); /* 0x00668AAF: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668AB1: add esp, 4 */
    _flag_k = FK_ADD;
L_00668AB4:
    MEM32(ebp + 0x4C) = 0xFu; /* 0x00668AB4: mov dword ptr [ebp + 0x4c], 0xf */
    MEM32(ebp + 0x48) = 0; /* 0x00668ABB: mov dword ptr [ebp + 0x48], 0 */
    MEM8(ebp + 0x38) = (uint8_t)(0); /* 0x00668AC2: mov byte ptr [ebp + 0x38], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00668AC6: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x64), 0x10u */ /* 0x00668ACD: cmp dword ptr [ebp + 0x64], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668ADB; /* 0x00668AD1: jb 0x668adb */
L_00668AD3:
    PUSH32(esp, MEM32(ebp + 0x50)); /* 0x00668AD3: push dword ptr [ebp + 0x50] */
    RECOMP_ICALL(esi); /* 0x00668AD6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668AD8: add esp, 4 */
    _flag_k = FK_ADD;
L_00668ADB:
    MEM32(ebp + 0x64) = 0xFu; /* 0x00668ADB: mov dword ptr [ebp + 0x64], 0xf */
    MEM32(ebp + 0x60) = 0; /* 0x00668AE2: mov dword ptr [ebp + 0x60], 0 */
    MEM8(ebp + 0x50) = (uint8_t)(0); /* 0x00668AE9: mov byte ptr [ebp + 0x50], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00668AED: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00668AF0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00668AF7: pop ecx */
    edi = POP32_VAL(esp); /* 0x00668AF8: pop edi */
    esi = POP32_VAL(esp); /* 0x00668AF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x00668AFA: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00668AFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00668AFE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00668B00: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00668B05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00668B07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00668B08: ret  */
L_00668B09:
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668B09: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00668B10: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x00668B17: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x00668B1E: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668B25: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x00668B2C: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668B30: mov byte ptr [ebp - 4], 4 */
    edx = ebp + 0x8; /* 0x00668B34: lea edx, [ebp + 8] */
    PUSH32(esp, 0x007F86C4u); /* 0x00668B37: push 0x7f86c4 */
    ecx = ebp + (-0x9C); /* 0x00668B3C: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00668B42: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668B47: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00668B4A: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + 0x20; /* 0x00668B4E: lea ecx, [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x00668B51: push ecx */
    edx = eax; /* 0x00668B52: mov edx, eax */
    ecx = ebp + (-0x6C); /* 0x00668B54: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045F540); /* 0x00668B57: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668B5C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00668B5F: mov byte ptr [ebp - 4], 6 */
    edx = eax; /* 0x00668B63: mov edx, eax */
    PUSH32(esp, 0x007FC384u); /* 0x00668B65: push 0x7fc384 */
    ecx = ebp + (-0x84); /* 0x00668B6A: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x00668B70: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668B75: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00668B78: mov byte ptr [ebp - 4], 7 */
    ecx = ebp + 0x38; /* 0x00668B7C: lea ecx, [ebp + 0x38] */
    PUSH32(esp, ecx); /* 0x00668B7F: push ecx */
    edx = eax; /* 0x00668B80: mov edx, eax */
    ecx = ebp + (-0x54); /* 0x00668B82: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_0045F540); /* 0x00668B85: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668B8A: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00668B8D: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00668B8F: mov byte ptr [ebp - 4], 8 */
    eax = ebp + (-0x3C); /* 0x00668B93: lea eax, [ebp - 0x3c] */
    edi = MEM32(0x7CC694); /* 0x00668B96: mov edi, dword ptr [0x7cc694] */
    /* cmp eax, esi */ /* 0x00668B9C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668BC9; /* 0x00668B9E: je 0x668bc9 */
L_00668BA0:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x00668BA0: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668BAE; /* 0x00668BA4: jb 0x668bae */
L_00668BA6:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x00668BA6: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(edi); /* 0x00668BA9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668BAB: add esp, 4 */
    _flag_k = FK_ADD;
L_00668BAE:
    PUSH32(esp, esi); /* 0x00668BAE: push esi */
    ecx = ebp + (-0x3C); /* 0x00668BAF: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x00668BB2: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668BB9: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x00668BC0: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00668BC4: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00668BC9:
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00668BC9: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x00668BCD: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668BDB; /* 0x00668BD1: jb 0x668bdb */
L_00668BD3:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00668BD3: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00668BD6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668BD8: add esp, 4 */
    _flag_k = FK_ADD;
L_00668BDB:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00668BDB: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x00668BE2: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00668BE9: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00668BED: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x00668BF1: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668C02; /* 0x00668BF5: jb 0x668c02 */
L_00668BF7:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00668BF7: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x00668BFD: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668BFF: add esp, 4 */
    _flag_k = FK_ADD;
L_00668C02:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x00668C02: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00668C09: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x00668C10: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00668C17: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00668C1B: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668C29; /* 0x00668C1F: jb 0x668c29 */
L_00668C21:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668C21: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668C24: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668C26: add esp, 4 */
    _flag_k = FK_ADD;
L_00668C29:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00668C29: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00668C30: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x00668C37: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668C3B: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x00668C3F: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668C53; /* 0x00668C46: jb 0x668c53 */
L_00668C48:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00668C48: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00668C4E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668C50: add esp, 4 */
    _flag_k = FK_ADD;
L_00668C53:
    eax = ebp + 0x50; /* 0x00668C53: lea eax, [ebp + 0x50] */
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x00668C56: mov dword ptr [ebp - 0x88], 0xf */
    PUSH32(esp, eax); /* 0x00668C60: push eax */
    edx = 0x007FC388u; /* 0x00668C61: mov edx, 0x7fc388 */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00668C66: mov dword ptr [ebp - 0x8c], 0 */
    ecx = ebp + (-0x54); /* 0x00668C70: lea ecx, [ebp - 0x54] */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00668C73: mov byte ptr [ebp - 0x9c], 0 */
    RECOMP_CALL(sub_0042A130); /* 0x00668C7A: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668C7F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00668C82: mov byte ptr [ebp - 4], 9 */
    edx = eax; /* 0x00668C86: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x00668C88: push 0x7fc2f0 */
    ecx = ebp + (-0x84); /* 0x00668C8D: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x00668C93: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668C98: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00668C9B: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00668C9D: mov byte ptr [ebp - 4], 0xa */
    eax = ebp + (-0x24); /* 0x00668CA1: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x00668CA4: push 0xa */
    PUSH32(esp, eax); /* 0x00668CA6: push eax */
    PUSH32(esp, ebx); /* 0x00668CA7: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x00668CA8: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00668CAE: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x6C); /* 0x00668CB1: lea ecx, [ebp - 0x6c] */
    edx = esi; /* 0x00668CB4: mov edx, esi */
    PUSH32(esp, eax); /* 0x00668CB6: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00668CB7: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668CBC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00668CBF: mov byte ptr [ebp - 4], 0xb */
    edx = eax; /* 0x00668CC3: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00668CC5: push 0x7fc364 */
    ecx = ebp + (-0x9C); /* 0x00668CCA: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_00419C40); /* 0x00668CD0: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668CD5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00668CD8: mov byte ptr [ebp - 4], 0xc */
    ecx = ebp + (-0x3C); /* 0x00668CDC: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668CDF: push -1 */
    PUSH32(esp, 0); /* 0x00668CE1: push 0 */
    PUSH32(esp, eax); /* 0x00668CE3: push eax */
    RECOMP_CALL(sub_00419920); /* 0x00668CE4: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00668CE9: mov byte ptr [ebp - 4], 0xb */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x00668CED: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668D01; /* 0x00668CF4: jb 0x668d01 */
L_00668CF6:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00668CF6: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00668CFC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668CFE: add esp, 4 */
    _flag_k = FK_ADD;
L_00668D01:
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x00668D01: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00668D0B: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00668D15: mov byte ptr [ebp - 0x9c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00668D1C: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00668D20: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668D2E; /* 0x00668D24: jb 0x668d2e */
L_00668D26:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668D26: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668D29: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668D2B: add esp, 4 */
    _flag_k = FK_ADD;
L_00668D2E:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00668D2E: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00668D35: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x00668D3C: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00668D40: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x00668D44: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668D55; /* 0x00668D48: jb 0x668d55 */
L_00668D4A:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00668D4A: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x00668D50: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668D52: add esp, 4 */
    _flag_k = FK_ADD;
L_00668D55:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x00668D55: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00668D5C: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x00668D63: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668D6A: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x00668D6E: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668D7C; /* 0x00668D72: jb 0x668d7c */
L_00668D74:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00668D74: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00668D77: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668D79: add esp, 4 */
    _flag_k = FK_ADD;
L_00668D7C:
    ecx = ebp + (-0x3C); /* 0x00668D7C: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00668D7F: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x00668D86: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00668D8D: mov byte ptr [ebp - 0x54], 0 */
    RECOMP_CALL(sub_00668320); /* 0x00668D91: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00668D96u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00668DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00668DA0u);

L_00668DA0:
    PUSH32(esp, ebp); /* 0x00668DA0: push ebp */
    ebp = esp; /* 0x00668DA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668DA3: push -1 */
    PUSH32(esp, 0x007BC88Eu); /* 0x00668DA5: push 0x7bc88e */
    eax = MEM32(FS_BASE + (0)); /* 0x00668DAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00668DB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x00668DB1: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00668DB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00668DBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00668DBE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00668DC1: push ebx */
    PUSH32(esp, esi); /* 0x00668DC2: push esi */
    PUSH32(esp, edi); /* 0x00668DC3: push edi */
    PUSH32(esp, eax); /* 0x00668DC4: push eax */
    eax = ebp + (-0xC); /* 0x00668DC5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00668DC8: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x00668DCE: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x00668DD0: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x00668DD7: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668E4D; /* 0x00668DDE: je 0x668e4d */
L_00668DE0:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00668DE0: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00668DE4: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00668DE8: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00668DF8; /* 0x00668DEE: jb 0x668df8 */
L_00668DF0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00668DF0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x00668DF3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668DF5: add esp, 4 */
    _flag_k = FK_ADD;
L_00668DF8:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00668DF8: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00668DFF: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00668E06: mov byte ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00668E0A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00668E11: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668E1F; /* 0x00668E15: jb 0x668e1f */
L_00668E17:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x00668E17: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x00668E1A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668E1C: add esp, 4 */
    _flag_k = FK_ADD;
L_00668E1F:
    MEM32(ebp + 0x34) = 0xFu; /* 0x00668E1F: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x00668E26: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x00668E2D: mov byte ptr [ebp + 0x20], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00668E31: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00668E34: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00668E3B: pop ecx */
    edi = POP32_VAL(esp); /* 0x00668E3C: pop edi */
    esi = POP32_VAL(esp); /* 0x00668E3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00668E3E: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00668E3F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00668E42: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00668E44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00668E49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00668E4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00668E4C: ret  */
L_00668E4D:
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668E4D: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00668E54: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x00668E5B: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x00668E62: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668E69: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x00668E70: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00668E74: mov byte ptr [ebp - 4], 2 */
    eax = ebp + 0x8; /* 0x00668E78: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00668E7B: push eax */
    edx = 0x007FC368u; /* 0x00668E7C: mov edx, 0x7fc368 */
    ecx = ebp + (-0x6C); /* 0x00668E81: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0042A130); /* 0x00668E84: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668E89: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00668E8C: mov byte ptr [ebp - 4], 3 */
    edx = eax; /* 0x00668E90: mov edx, eax */
    PUSH32(esp, 0x007F86C4u); /* 0x00668E92: push 0x7f86c4 */
    ecx = ebp + (-0x54); /* 0x00668E97: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_00419C40); /* 0x00668E9A: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668E9F: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00668EA2: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00668EA4: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x3C); /* 0x00668EA8: lea eax, [ebp - 0x3c] */
    edi = MEM32(0x7CC694); /* 0x00668EAB: mov edi, dword ptr [0x7cc694] */
    /* cmp eax, esi */ /* 0x00668EB1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00668EDE; /* 0x00668EB3: je 0x668ede */
L_00668EB5:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x00668EB5: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668EC3; /* 0x00668EB9: jb 0x668ec3 */
L_00668EBB:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x00668EBB: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(edi); /* 0x00668EBE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668EC0: add esp, 4 */
    _flag_k = FK_ADD;
L_00668EC3:
    PUSH32(esp, esi); /* 0x00668EC3: push esi */
    ecx = ebp + (-0x3C); /* 0x00668EC4: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x00668EC7: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00668ECE: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x00668ED5: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00668ED9: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00668EDE:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00668EDE: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x00668EE2: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668EF0; /* 0x00668EE6: jb 0x668ef0 */
L_00668EE8:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00668EE8: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00668EEB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668EED: add esp, 4 */
    _flag_k = FK_ADD;
L_00668EF0:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00668EF0: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x00668EF7: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00668EFE: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00668F02: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00668F06: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668F14; /* 0x00668F0A: jb 0x668f14 */
L_00668F0C:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668F0C: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668F0F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668F11: add esp, 4 */
    _flag_k = FK_ADD;
L_00668F14:
    eax = ebp + 0x20; /* 0x00668F14: lea eax, [ebp + 0x20] */
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00668F17: mov dword ptr [ebp - 0x58], 0xf */
    PUSH32(esp, eax); /* 0x00668F1E: push eax */
    edx = 0x007FC37Cu; /* 0x00668F1F: mov edx, 0x7fc37c */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00668F24: mov dword ptr [ebp - 0x5c], 0 */
    ecx = ebp + (-0x9C); /* 0x00668F2B: lea ecx, [ebp - 0x9c] */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x00668F31: mov byte ptr [ebp - 0x6c], 0 */
    RECOMP_CALL(sub_0042A130); /* 0x00668F35: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668F3A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00668F3D: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x00668F41: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x00668F43: push 0x7fc2f0 */
    ecx = ebp + (-0x84); /* 0x00668F48: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x00668F4E: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668F53: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00668F56: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00668F58: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x24); /* 0x00668F5C: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x00668F5F: push 0xa */
    PUSH32(esp, eax); /* 0x00668F61: push eax */
    PUSH32(esp, ebx); /* 0x00668F62: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x00668F63: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00668F69: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x54); /* 0x00668F6C: lea ecx, [ebp - 0x54] */
    edx = esi; /* 0x00668F6F: mov edx, esi */
    PUSH32(esp, eax); /* 0x00668F71: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00668F72: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668F77: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00668F7A: mov byte ptr [ebp - 4], 7 */
    edx = eax; /* 0x00668F7E: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00668F80: push 0x7fc364 */
    ecx = ebp + (-0x6C); /* 0x00668F85: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00419C40); /* 0x00668F88: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668F8D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00668F90: mov byte ptr [ebp - 4], 8 */
    ecx = ebp + (-0x3C); /* 0x00668F94: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00668F97: push -1 */
    PUSH32(esp, 0); /* 0x00668F99: push 0 */
    PUSH32(esp, eax); /* 0x00668F9B: push eax */
    RECOMP_CALL(sub_00419920); /* 0x00668F9C: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00668FA1: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00668FA5: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668FB3; /* 0x00668FA9: jb 0x668fb3 */
L_00668FAB:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00668FAB: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00668FAE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668FB0: add esp, 4 */
    _flag_k = FK_ADD;
L_00668FB3:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00668FB3: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00668FBA: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x00668FC1: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00668FC5: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x00668FC9: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668FD7; /* 0x00668FCD: jb 0x668fd7 */
L_00668FCF:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00668FCF: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00668FD2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668FD4: add esp, 4 */
    _flag_k = FK_ADD;
L_00668FD7:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00668FD7: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x00668FDE: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00668FE5: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00668FE9: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x00668FED: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00668FFE; /* 0x00668FF1: jb 0x668ffe */
L_00668FF3:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00668FF3: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x00668FF9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00668FFB: add esp, 4 */
    _flag_k = FK_ADD;
L_00668FFE:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x00668FFE: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00669005: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x0066900C: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669013: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x00669017: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066902B; /* 0x0066901E: jb 0x66902b */
L_00669020:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00669020: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00669026: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669028: add esp, 4 */
    _flag_k = FK_ADD;
L_0066902B:
    ecx = ebp + (-0x3C); /* 0x0066902B: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x0066902E: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00669038: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00669042: mov byte ptr [ebp - 0x9c], 0 */
    RECOMP_CALL(sub_00668320); /* 0x00669049: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0066904Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00669050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669050u);

L_00669050:
    PUSH32(esp, ebp); /* 0x00669050: push ebp */
    ebp = esp; /* 0x00669051: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669053: push -1 */
    PUSH32(esp, 0x007BC93Fu); /* 0x00669055: push 0x7bc93f */
    eax = MEM32(FS_BASE + (0)); /* 0x0066905A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669060: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x00669061: sub esp, 0xac */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00669067: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066906C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066906E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00669071: push ebx */
    PUSH32(esp, esi); /* 0x00669072: push esi */
    PUSH32(esp, edi); /* 0x00669073: push edi */
    PUSH32(esp, eax); /* 0x00669074: push eax */
    eax = ebp + (-0xC); /* 0x00669075: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669078: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0066907E: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 3; /* 0x00669080: mov dword ptr [ebp - 4], 3 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x00669087: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669149; /* 0x0066908E: je 0x669149 */
L_00669094:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669094: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669098: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x0066909C: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006690AC; /* 0x006690A2: jb 0x6690ac */
L_006690A4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006690A4: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x006690A7: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006690A9: add esp, 4 */
    _flag_k = FK_ADD;
L_006690AC:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x006690AC: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x006690B3: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x006690BA: mov byte ptr [ebp + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006690BE: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x006690C2: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006690D0; /* 0x006690C6: jb 0x6690d0 */
L_006690C8:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x006690C8: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x006690CB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006690CD: add esp, 4 */
    _flag_k = FK_ADD;
L_006690D0:
    MEM32(ebp + 0x34) = 0xFu; /* 0x006690D0: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x006690D7: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x006690DE: mov byte ptr [ebp + 0x20], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006690E2: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x4C), 0x10u */ /* 0x006690E6: cmp dword ptr [ebp + 0x4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006690F4; /* 0x006690EA: jb 0x6690f4 */
L_006690EC:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x006690EC: push dword ptr [ebp + 0x38] */
    RECOMP_ICALL(esi); /* 0x006690EF: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006690F1: add esp, 4 */
    _flag_k = FK_ADD;
L_006690F4:
    MEM32(ebp + 0x4C) = 0xFu; /* 0x006690F4: mov dword ptr [ebp + 0x4c], 0xf */
    MEM32(ebp + 0x48) = 0; /* 0x006690FB: mov dword ptr [ebp + 0x48], 0 */
    MEM8(ebp + 0x38) = (uint8_t)(0); /* 0x00669102: mov byte ptr [ebp + 0x38], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00669106: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x64), 0x10u */ /* 0x0066910D: cmp dword ptr [ebp + 0x64], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066911B; /* 0x00669111: jb 0x66911b */
L_00669113:
    PUSH32(esp, MEM32(ebp + 0x50)); /* 0x00669113: push dword ptr [ebp + 0x50] */
    RECOMP_ICALL(esi); /* 0x00669116: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669118: add esp, 4 */
    _flag_k = FK_ADD;
L_0066911B:
    MEM32(ebp + 0x64) = 0xFu; /* 0x0066911B: mov dword ptr [ebp + 0x64], 0xf */
    MEM32(ebp + 0x60) = 0; /* 0x00669122: mov dword ptr [ebp + 0x60], 0 */
    MEM8(ebp + 0x50) = (uint8_t)(0); /* 0x00669129: mov byte ptr [ebp + 0x50], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066912D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00669130: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00669137: pop ecx */
    edi = POP32_VAL(esp); /* 0x00669138: pop edi */
    esi = POP32_VAL(esp); /* 0x00669139: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066913A: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066913B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066913E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00669140: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00669145: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00669147: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00669148: ret  */
L_00669149:
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669149: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00669150: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x00669157: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x0066915E: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669165: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x0066916C: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00669170: mov byte ptr [ebp - 4], 4 */
    eax = ebp + 0x8; /* 0x00669174: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00669177: push eax */
    edx = 0x007FC368u; /* 0x00669178: mov edx, 0x7fc368 */
    ecx = ebp + (-0x9C); /* 0x0066917D: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_0042A130); /* 0x00669183: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669188: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066918B: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x0066918F: mov edx, eax */
    PUSH32(esp, 0x007F86C4u); /* 0x00669191: push 0x7f86c4 */
    ecx = ebp + (-0x84); /* 0x00669196: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x0066919C: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006691A1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006691A4: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + 0x38; /* 0x006691A8: lea ecx, [ebp + 0x38] */
    PUSH32(esp, ecx); /* 0x006691AB: push ecx */
    edx = eax; /* 0x006691AC: mov edx, eax */
    ecx = ebp + (-0x6C); /* 0x006691AE: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045F540); /* 0x006691B1: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006691B6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006691B9: mov byte ptr [ebp - 4], 7 */
    edx = eax; /* 0x006691BD: mov edx, eax */
    PUSH32(esp, 0x007FC384u); /* 0x006691BF: push 0x7fc384 */
    ecx = ebp + (-0x54); /* 0x006691C4: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_00419C40); /* 0x006691C7: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006691CC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006691CF: mov byte ptr [ebp - 4], 8 */
    ecx = ebp + 0x20; /* 0x006691D3: lea ecx, [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x006691D6: push ecx */
    edx = eax; /* 0x006691D7: mov edx, eax */
    ecx = ebp + (-0xB4); /* 0x006691D9: lea ecx, [ebp - 0xb4] */
    RECOMP_CALL(sub_0045F540); /* 0x006691DF: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006691E4: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006691E7: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x006691E9: mov byte ptr [ebp - 4], 9 */
    eax = ebp + (-0x3C); /* 0x006691ED: lea eax, [ebp - 0x3c] */
    edi = MEM32(0x7CC694); /* 0x006691F0: mov edi, dword ptr [0x7cc694] */
    /* cmp eax, esi */ /* 0x006691F6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669223; /* 0x006691F8: je 0x669223 */
L_006691FA:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x006691FA: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669208; /* 0x006691FE: jb 0x669208 */
L_00669200:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x00669200: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(edi); /* 0x00669203: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669205: add esp, 4 */
    _flag_k = FK_ADD;
L_00669208:
    PUSH32(esp, esi); /* 0x00669208: push esi */
    ecx = ebp + (-0x3C); /* 0x00669209: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x0066920C: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669213: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x0066921A: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066921E: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00669223:
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00669223: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0xA0)), 0x10u */ /* 0x00669227: cmp dword ptr [ebp - 0xa0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066923B; /* 0x0066922E: jb 0x66923b */
L_00669230:
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x00669230: push dword ptr [ebp - 0xb4] */
    RECOMP_ICALL(edi); /* 0x00669236: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669238: add esp, 4 */
    _flag_k = FK_ADD;
L_0066923B:
    MEM32(ebp + (-0xA0)) = 0xFu; /* 0x0066923B: mov dword ptr [ebp - 0xa0], 0xf */
    MEM32(ebp + (-0xA4)) = 0; /* 0x00669245: mov dword ptr [ebp - 0xa4], 0 */
    MEM8(ebp + (-0xB4)) = (uint8_t)(0); /* 0x0066924F: mov byte ptr [ebp - 0xb4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00669256: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x0066925A: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669268; /* 0x0066925E: jb 0x669268 */
L_00669260:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00669260: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00669263: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669265: add esp, 4 */
    _flag_k = FK_ADD;
L_00669268:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x00669268: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x0066926F: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x00669276: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066927A: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x0066927E: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066928C; /* 0x00669282: jb 0x66928c */
L_00669284:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x00669284: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00669287: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669289: add esp, 4 */
    _flag_k = FK_ADD;
L_0066928C:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x0066928C: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00669293: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x0066929A: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066929E: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x006692A2: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006692B3; /* 0x006692A6: jb 0x6692b3 */
L_006692A8:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006692A8: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x006692AE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006692B0: add esp, 4 */
    _flag_k = FK_ADD;
L_006692B3:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x006692B3: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x006692BA: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x006692C1: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006692C8: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x006692CC: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006692E0; /* 0x006692D3: jb 0x6692e0 */
L_006692D5:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x006692D5: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x006692DB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006692DD: add esp, 4 */
    _flag_k = FK_ADD;
L_006692E0:
    eax = ebp + 0x50; /* 0x006692E0: lea eax, [ebp + 0x50] */
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x006692E3: mov dword ptr [ebp - 0x88], 0xf */
    PUSH32(esp, eax); /* 0x006692ED: push eax */
    edx = 0x007FC37Cu; /* 0x006692EE: mov edx, 0x7fc37c */
    MEM32(ebp + (-0x8C)) = 0; /* 0x006692F3: mov dword ptr [ebp - 0x8c], 0 */
    ecx = ebp + (-0x54); /* 0x006692FD: lea ecx, [ebp - 0x54] */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00669300: mov byte ptr [ebp - 0x9c], 0 */
    RECOMP_CALL(sub_0042A130); /* 0x00669307: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066930C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0066930F: mov byte ptr [ebp - 4], 0xa */
    edx = eax; /* 0x00669313: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x00669315: push 0x7fc2f0 */
    ecx = ebp + (-0x6C); /* 0x0066931A: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00419C40); /* 0x0066931D: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669322: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00669325: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00669327: mov byte ptr [ebp - 4], 0xb */
    eax = ebp + (-0x24); /* 0x0066932B: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x0066932E: push 0xa */
    PUSH32(esp, eax); /* 0x00669330: push eax */
    PUSH32(esp, ebx); /* 0x00669331: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x00669332: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00669338: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x84); /* 0x0066933B: lea ecx, [ebp - 0x84] */
    edx = esi; /* 0x00669341: mov edx, esi */
    PUSH32(esp, eax); /* 0x00669343: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00669344: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669349: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0066934C: mov byte ptr [ebp - 4], 0xc */
    edx = eax; /* 0x00669350: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00669352: push 0x7fc364 */
    ecx = ebp + (-0x9C); /* 0x00669357: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_00419C40); /* 0x0066935D: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669362: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00669365: mov byte ptr [ebp - 4], 0xd */
    ecx = ebp + (-0x3C); /* 0x00669369: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066936C: push -1 */
    PUSH32(esp, 0); /* 0x0066936E: push 0 */
    PUSH32(esp, eax); /* 0x00669370: push eax */
    RECOMP_CALL(sub_00419920); /* 0x00669371: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00669376: mov byte ptr [ebp - 4], 0xc */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x0066937A: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066938E; /* 0x00669381: jb 0x66938e */
L_00669383:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00669383: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00669389: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066938B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066938E:
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x0066938E: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00669398: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x006693A2: mov byte ptr [ebp - 0x9c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x006693A9: mov byte ptr [ebp - 4], 0xb */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x006693AD: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006693BE; /* 0x006693B1: jb 0x6693be */
L_006693B3:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006693B3: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x006693B9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006693BB: add esp, 4 */
    _flag_k = FK_ADD;
L_006693BE:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x006693BE: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x006693C5: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x006693CC: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x006693D3: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x006693D7: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006693E5; /* 0x006693DB: jb 0x6693e5 */
L_006693DD:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x006693DD: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x006693E0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006693E2: add esp, 4 */
    _flag_k = FK_ADD;
L_006693E5:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x006693E5: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x006693EC: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x006693F3: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006693F7: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x006693FB: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669409; /* 0x006693FF: jb 0x669409 */
L_00669401:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00669401: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x00669404: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669406: add esp, 4 */
    _flag_k = FK_ADD;
L_00669409:
    ecx = ebp + (-0x3C); /* 0x00669409: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x0066940C: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x00669413: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x0066941A: mov byte ptr [ebp - 0x54], 0 */
    RECOMP_CALL(sub_00668320); /* 0x0066941E: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00669423u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00669430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669430u);

L_00669430:
    PUSH32(esp, ebp); /* 0x00669430: push ebp */
    ebp = esp; /* 0x00669431: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669433: push -1 */
    PUSH32(esp, 0x007BC9DCu); /* 0x00669435: push 0x7bc9dc */
    eax = MEM32(FS_BASE + (0)); /* 0x0066943A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669440: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x00669441: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00669447: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066944C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066944E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00669451: push ebx */
    PUSH32(esp, esi); /* 0x00669452: push esi */
    PUSH32(esp, edi); /* 0x00669453: push edi */
    PUSH32(esp, eax); /* 0x00669454: push eax */
    eax = ebp + (-0xC); /* 0x00669455: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669458: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0066945E: mov ebx, ecx */
    MEM32(ebp + (-0xA0)) = _xmm[0].u32[0]; /* 0x00669460: movss dword ptr [ebp - 0xa0], xmm0 */
    MEM32(ebp + (-0x4)) = 2; /* 0x00669468: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM8(0x87191A), 0 */ /* 0x0066946F: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066950D; /* 0x00669476: je 0x66950d */
L_0066947C:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066947C: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669480: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00669484: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00669494; /* 0x0066948A: jb 0x669494 */
L_0066948C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0066948C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x0066948F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669491: add esp, 4 */
    _flag_k = FK_ADD;
L_00669494:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669494: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0066949B: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x006694A2: mov byte ptr [ebp + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006694A6: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x006694AA: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006694B8; /* 0x006694AE: jb 0x6694b8 */
L_006694B0:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x006694B0: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x006694B3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006694B5: add esp, 4 */
    _flag_k = FK_ADD;
L_006694B8:
    MEM32(ebp + 0x34) = 0xFu; /* 0x006694B8: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x006694BF: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x006694C6: mov byte ptr [ebp + 0x20], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006694CA: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x4C), 0x10u */ /* 0x006694D1: cmp dword ptr [ebp + 0x4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006694DF; /* 0x006694D5: jb 0x6694df */
L_006694D7:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x006694D7: push dword ptr [ebp + 0x38] */
    RECOMP_ICALL(esi); /* 0x006694DA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006694DC: add esp, 4 */
    _flag_k = FK_ADD;
L_006694DF:
    MEM32(ebp + 0x4C) = 0xFu; /* 0x006694DF: mov dword ptr [ebp + 0x4c], 0xf */
    MEM32(ebp + 0x48) = 0; /* 0x006694E6: mov dword ptr [ebp + 0x48], 0 */
    MEM8(ebp + 0x38) = (uint8_t)(0); /* 0x006694ED: mov byte ptr [ebp + 0x38], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006694F1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006694F4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006694FB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006694FC: pop edi */
    esi = POP32_VAL(esp); /* 0x006694FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006694FE: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006694FF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00669502: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00669504: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00669509: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066950B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066950C: ret  */
L_0066950D:
    MEM32(ebp + (-0x2C)) = 0; /* 0x0066950D: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00669514: mov dword ptr [ebp - 0x28], 0 */
    MEM8(0x87191A) = (uint8_t)(1); /* 0x0066951B: mov byte ptr [0x87191a], 1 */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x00669522: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669529: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x00669530: mov byte ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00669534: mov byte ptr [ebp - 4], 3 */
    eax = ebp + 0x8; /* 0x00669538: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x0066953B: push eax */
    edx = 0x007FC368u; /* 0x0066953C: mov edx, 0x7fc368 */
    ecx = ebp + (-0x9C); /* 0x00669541: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_0042A130); /* 0x00669547: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066954C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0066954F: mov byte ptr [ebp - 4], 4 */
    edx = eax; /* 0x00669553: mov edx, eax */
    PUSH32(esp, 0x007F86C4u); /* 0x00669555: push 0x7f86c4 */
    ecx = ebp + (-0x84); /* 0x0066955A: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_00419C40); /* 0x00669560: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669565: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00669568: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + 0x20; /* 0x0066956C: lea ecx, [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x0066956F: push ecx */
    edx = eax; /* 0x00669570: mov edx, eax */
    ecx = ebp + (-0x6C); /* 0x00669572: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045F540); /* 0x00669575: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066957A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066957D: mov byte ptr [ebp - 4], 6 */
    edx = eax; /* 0x00669581: mov edx, eax */
    PUSH32(esp, 0x007FC384u); /* 0x00669583: push 0x7fc384 */
    ecx = ebp + (-0x54); /* 0x00669588: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_00419C40); /* 0x0066958B: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669590: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00669593: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x00669595: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x3C); /* 0x00669599: lea eax, [ebp - 0x3c] */
    edi = MEM32(0x7CC694); /* 0x0066959C: mov edi, dword ptr [0x7cc694] */
    /* cmp eax, esi */ /* 0x006695A2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006695CF; /* 0x006695A4: je 0x6695cf */
L_006695A6:
    /* cmp MEM32(ebp + (-0x28)), 0x10u */ /* 0x006695A6: cmp dword ptr [ebp - 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006695B4; /* 0x006695AA: jb 0x6695b4 */
L_006695AC:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x006695AC: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(edi); /* 0x006695AF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006695B1: add esp, 4 */
    _flag_k = FK_ADD;
L_006695B4:
    PUSH32(esp, esi); /* 0x006695B4: push esi */
    ecx = ebp + (-0x3C); /* 0x006695B5: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x28)) = 0xFu; /* 0x006695B8: mov dword ptr [ebp - 0x28], 0xf */
    MEM32(ebp + (-0x2C)) = 0; /* 0x006695BF: mov dword ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x006695C6: mov byte ptr [ebp - 0x3c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x006695CA: call 0x419890 */
    RECOMP_FLAGS_IN();
L_006695CF:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006695CF: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x006695D3: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006695E1; /* 0x006695D7: jb 0x6695e1 */
L_006695D9:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x006695D9: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x006695DC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006695DE: add esp, 4 */
    _flag_k = FK_ADD;
L_006695E1:
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x006695E1: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x006695E8: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x006695EF: mov byte ptr [ebp - 0x54], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006695F3: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x006695F7: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669605; /* 0x006695FB: jb 0x669605 */
L_006695FD:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x006695FD: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x00669600: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669602: add esp, 4 */
    _flag_k = FK_ADD;
L_00669605:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x00669605: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0066960C: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x00669613: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00669617: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x0066961B: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066962C; /* 0x0066961F: jb 0x66962c */
L_00669621:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00669621: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x00669627: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669629: add esp, 4 */
    _flag_k = FK_ADD;
L_0066962C:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x0066962C: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00669633: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x0066963A: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00669641: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x00669645: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669659; /* 0x0066964C: jb 0x669659 */
L_0066964E:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x0066964E: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00669654: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669656: add esp, 4 */
    _flag_k = FK_ADD;
L_00669659:
    _xmm[0].u64[0] = MEM32(ebp + (-0xA0)); _xmm[0].u64[1] = 0; /* 0x00669659: movss xmm0, dword ptr [ebp - 0xa0] */
    eax = ebp + (-0x24); /* 0x00669661: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00669664: push eax */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00669665: cvtps2pd xmm0, xmm0 */
    PUSH32(esp, 3); /* 0x00669668: push 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066966A: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x0066966D: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00669677: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00669681: mov byte ptr [ebp - 0x9c], 0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x00669688: movsd qword ptr [esp], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC548)); /* 0x0066968D: call dword ptr [0x7cc548] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00669693: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00669695: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edx), 0 */ /* 0x00669698: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006696A1; /* 0x0066969B: jne 0x6696a1 */
L_0066969D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066969D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006696AF; /* 0x0066969F: jmp 0x6696af */
L_006696A1:
    ecx = edx; /* 0x006696A1: mov ecx, edx */
    esi = ecx + 0x1; /* 0x006696A3: lea esi, [ecx + 1] */
L_006696A6:
    SET_LO8(eax, MEM8(ecx)); /* 0x006696A6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006696A8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006696A9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006696A6; /* 0x006696AB: jne 0x6696a6 */
L_006696AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006696AD: sub ecx, esi */
    _flag_k = FK_CMP;
L_006696AF:
    PUSH32(esp, ecx); /* 0x006696AF: push ecx */
    PUSH32(esp, edx); /* 0x006696B0: push edx */
    ecx = ebp + (-0x3C); /* 0x006696B1: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_004199E0); /* 0x006696B4: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x38; /* 0x006696B9: lea eax, [ebp + 0x38] */
    edx = 0x007FC37Cu; /* 0x006696BC: mov edx, 0x7fc37c */
    PUSH32(esp, eax); /* 0x006696C1: push eax */
    ecx = ebp + (-0x54); /* 0x006696C2: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_0042A130); /* 0x006696C5: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006696CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006696CD: mov byte ptr [ebp - 4], 8 */
    edx = eax; /* 0x006696D1: mov edx, eax */
    PUSH32(esp, 0x007FC2F0u); /* 0x006696D3: push 0x7fc2f0 */
    ecx = ebp + (-0x6C); /* 0x006696D8: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00419C40); /* 0x006696DB: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006696E0: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006696E3: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x006696E5: mov byte ptr [ebp - 4], 9 */
    eax = ebp + (-0x24); /* 0x006696E9: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0xAu); /* 0x006696EC: push 0xa */
    PUSH32(esp, eax); /* 0x006696EE: push eax */
    PUSH32(esp, ebx); /* 0x006696EF: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4C4)); /* 0x006696F0: call dword ptr [0x7cc4c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006696F6: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x84); /* 0x006696F9: lea ecx, [ebp - 0x84] */
    edx = esi; /* 0x006696FF: mov edx, esi */
    PUSH32(esp, eax); /* 0x00669701: push eax */
    RECOMP_CALL(sub_00419C40); /* 0x00669702: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669707: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0066970A: mov byte ptr [ebp - 4], 0xa */
    edx = eax; /* 0x0066970E: mov edx, eax */
    PUSH32(esp, 0x007FC364u); /* 0x00669710: push 0x7fc364 */
    ecx = ebp + (-0x9C); /* 0x00669715: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_00419C40); /* 0x0066971B: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669720: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00669723: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0x3C); /* 0x00669727: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066972A: push -1 */
    PUSH32(esp, 0); /* 0x0066972C: push 0 */
    PUSH32(esp, eax); /* 0x0066972E: push eax */
    RECOMP_CALL(sub_00419920); /* 0x0066972F: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00669734: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x88)), 0x10u */ /* 0x00669738: cmp dword ptr [ebp - 0x88], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066974C; /* 0x0066973F: jb 0x66974c */
L_00669741:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x00669741: push dword ptr [ebp - 0x9c] */
    RECOMP_ICALL(edi); /* 0x00669747: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669749: add esp, 4 */
    _flag_k = FK_ADD;
L_0066974C:
    MEM32(ebp + (-0x88)) = 0xFu; /* 0x0066974C: mov dword ptr [ebp - 0x88], 0xf */
    MEM32(ebp + (-0x8C)) = 0; /* 0x00669756: mov dword ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0); /* 0x00669760: mov byte ptr [ebp - 0x9c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00669767: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x70)), 0x10u */ /* 0x0066976B: cmp dword ptr [ebp - 0x70], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066977C; /* 0x0066976F: jb 0x66977c */
L_00669771:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00669771: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(edi); /* 0x00669777: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669779: add esp, 4 */
    _flag_k = FK_ADD;
L_0066977C:
    MEM32(ebp + (-0x70)) = 0xFu; /* 0x0066977C: mov dword ptr [ebp - 0x70], 0xf */
    MEM32(ebp + (-0x74)) = 0; /* 0x00669783: mov dword ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x84)) = (uint8_t)(0); /* 0x0066978A: mov byte ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00669791: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x00669795: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006697A3; /* 0x00669799: jb 0x6697a3 */
L_0066979B:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x0066979B: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(edi); /* 0x0066979E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006697A0: add esp, 4 */
    _flag_k = FK_ADD;
L_006697A3:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x006697A3: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x006697AA: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x006697B1: mov byte ptr [ebp - 0x6c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006697B5: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x40)), 0x10u */ /* 0x006697B9: cmp dword ptr [ebp - 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006697C7; /* 0x006697BD: jb 0x6697c7 */
L_006697BF:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x006697BF: push dword ptr [ebp - 0x54] */
    RECOMP_ICALL(edi); /* 0x006697C2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006697C4: add esp, 4 */
    _flag_k = FK_ADD;
L_006697C7:
    ecx = ebp + (-0x3C); /* 0x006697C7: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x40)) = 0xFu; /* 0x006697CA: mov dword ptr [ebp - 0x40], 0xf */
    MEM32(ebp + (-0x44)) = 0; /* 0x006697D1: mov dword ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x54)) = (uint8_t)(0); /* 0x006697D8: mov byte ptr [ebp - 0x54], 0 */
    RECOMP_CALL(sub_00668320); /* 0x006697DC: call 0x668320 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006697E1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006697F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006697F0u);

L_006697F0:
    PUSH32(esp, ebp); /* 0x006697F0: push ebp */
    ebp = esp; /* 0x006697F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006697F3: push -1 */
    PUSH32(esp, 0x007830E8u); /* 0x006697F5: push 0x7830e8 */
    eax = MEM32(FS_BASE + (0)); /* 0x006697FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669800: push eax */
    PUSH32(esp, ecx); /* 0x00669801: push ecx */
    PUSH32(esp, ebx); /* 0x00669802: push ebx */
    PUSH32(esp, esi); /* 0x00669803: push esi */
    PUSH32(esp, edi); /* 0x00669804: push edi */
    eax = MEM32(0x855000); /* 0x00669805: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066980A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066980C: push eax */
    eax = ebp + (-0xC); /* 0x0066980D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669810: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00669816: mov dword ptr [ebp - 4], 0 */
    edx = 0x007CD0C4u; /* 0x0066981D: mov edx, 0x7cd0c4 */
    ecx = ebp + 0x8; /* 0x00669822: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_004261B0); /* 0x00669825: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0066982A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00669907; /* 0x0066982C: jne 0x669907 */
L_00669832:
    edi = MEM32(ebp + 0x18); /* 0x00669832: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00669835: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, 1); /* 0x00669837: mov bl, 1 */
    /* test edi, edi */ /* 0x00669839: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00669907; /* 0x0066983B: je 0x669907 */
L_00669841:
    edx = MEM32(ebp + 0x1C); /* 0x00669841: mov edx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x8); /* 0x00669844: mov esi, dword ptr [ebp + 8] */
L_00669847:
    /* cmp edx, 0x10u */ /* 0x00669847: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x0066984A: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0066984D: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x5Cu */ /* 0x00669850: cmp byte ptr [ecx + eax], 0x5c */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x00669854: je 0x669907 */
L_0066985A:
    /* cmp edx, 0x10u */ /* 0x0066985A: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x0066985D: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x00669860: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x2Fu */ /* 0x00669863: cmp byte ptr [ecx + eax], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x00669867: je 0x669907 */
L_0066986D:
    /* cmp edx, 0x10u */ /* 0x0066986D: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x00669870: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x00669873: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x3Au */ /* 0x00669876: cmp byte ptr [ecx + eax], 0x3a */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x0066987A: je 0x669907 */
L_00669880:
    /* cmp edx, 0x10u */ /* 0x00669880: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x00669883: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x00669886: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x2Au */ /* 0x00669889: cmp byte ptr [ecx + eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x0066988D: je 0x669907 */
L_0066988F:
    /* cmp edx, 0x10u */ /* 0x0066988F: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x00669892: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x00669895: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x3Fu */ /* 0x00669898: cmp byte ptr [ecx + eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x0066989C: je 0x669907 */
L_0066989E:
    /* cmp edx, 0x10u */ /* 0x0066989E: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x006698A1: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x006698A4: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x22u */ /* 0x006698A7: cmp byte ptr [ecx + eax], 0x22 */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x006698AB: je 0x669907 */
L_006698AD:
    /* cmp edx, 0x10u */ /* 0x006698AD: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x006698B0: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x006698B3: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x3Cu */ /* 0x006698B6: cmp byte ptr [ecx + eax], 0x3c */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x006698BA: je 0x669907 */
L_006698BC:
    /* cmp edx, 0x10u */ /* 0x006698BC: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x006698BF: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x006698C2: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x3Eu */ /* 0x006698C5: cmp byte ptr [ecx + eax], 0x3e */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x006698C9: je 0x669907 */
L_006698CB:
    /* cmp edx, 0x10u */ /* 0x006698CB: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x006698CE: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x006698D1: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x7Cu */ /* 0x006698D4: cmp byte ptr [ecx + eax], 0x7c */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x7Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x006698D8: je 0x669907 */
L_006698DA:
    /* cmp edx, 0x10u */ /* 0x006698DA: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO8(ebx); /* 0x006698DD: movzx ebx, bl */
    ecx = ebp + 0x8; /* 0x006698E0: lea ecx, [ebp + 8] */
    MEM32(ebp + (-0x10)) = 0; /* 0x006698E3: mov dword ptr [ebp - 0x10], 0 */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x006698EA: cmovae ecx, esi */
    /* cmp MEM8(ecx + eax), 0x20u */ /* 0x006698ED: cmp byte ptr [ecx + eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x10)); } /* 0x006698F1: cmovne ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006698F5: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x006698F6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00669847; /* 0x006698F8: jb 0x669847 */
L_006698FE:
    /* cmp LO8(ebx), 1 */ /* 0x006698FE: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669907; /* 0x00669901: je 0x669907 */
L_00669903:
    SET_LO8(ebx, 1); /* 0x00669903: mov bl, 1 */
    goto L_00669909; /* 0x00669905: jmp 0x669909 */
L_00669907:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x00669907: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00669909:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00669909: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669910: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669922; /* 0x00669914: jb 0x669922 */
L_00669916:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00669916: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00669919: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066991F: add esp, 4 */
    _flag_k = FK_ADD;
L_00669922:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669922: mov dword ptr [ebp + 0x1c], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x00669929: mov al, bl */
    MEM32(ebp + 0x18) = 0; /* 0x0066992B: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00669932: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00669936: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00669939: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00669940: pop ecx */
    edi = POP32_VAL(esp); /* 0x00669941: pop edi */
    esi = POP32_VAL(esp); /* 0x00669942: pop esi */
    ebx = POP32_VAL(esp); /* 0x00669943: pop ebx */
    esp = ebp; /* 0x00669944: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00669946: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00669947: ret  */
    RECOMP_REGS_OUT();
}

void sub_00669950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669950u);

L_00669950:
    PUSH32(esp, ebp); /* 0x00669950: push ebp */
    ebp = esp; /* 0x00669951: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669953: push -1 */
    PUSH32(esp, 0x007BCA4Bu); /* 0x00669955: push 0x7bca4b */
    eax = MEM32(FS_BASE + (0)); /* 0x0066995A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669960: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x00669961: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00669964: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00669969: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066996B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0066996E: push ebx */
    PUSH32(esp, esi); /* 0x0066996F: push esi */
    PUSH32(esp, edi); /* 0x00669970: push edi */
    PUSH32(esp, eax); /* 0x00669971: push eax */
    eax = ebp + (-0xC); /* 0x00669972: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669975: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066997B: mov esi, ecx */
    MEM32(ebp + (-0x48)) = esi; /* 0x0066997D: mov dword ptr [ebp - 0x48], esi */
    MEM32(ebp + (-0x44)) = 0; /* 0x00669980: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00669987: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066998E: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x00669995: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066999C: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x006699A3: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x006699AA: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006699AE: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006699B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x18); /* 0x006699B4: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x006699B7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006699DA; /* 0x006699B9: je 0x6699da */
L_006699BB:
    ebx = MEM32(ebp + 0x1C); /* 0x006699BB: mov ebx, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0x8); /* 0x006699BE: mov edi, dword ptr [ebp + 8] */
L_006699C1:
    /* cmp ebx, 0x10u */ /* 0x006699C1: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x006699C4: lea eax, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = edi; } /* 0x006699C7: cmovae eax, edi */
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x006699CA: mov al, byte ptr [eax + ecx] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x006699CD: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669A13; /* 0x006699CF: je 0x669a13 */
L_006699D1:
    /* cmp LO8(eax), 0x2Fu */ /* 0x006699D1: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669A13; /* 0x006699D3: je 0x669a13 */
L_006699D5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006699D5: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x006699D6: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006699C1; /* 0x006699D8: jb 0x6699c1 */
L_006699DA:
    MEM32(esi + 0x14) = 0xFu; /* 0x006699DA: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x006699E1: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x006699E8: mov byte ptr [esi], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x006699EB: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00669B3B; /* 0x006699EF: jae 0x669b3b */
L_006699F5:
    eax = MEM32(ebp + 0x18); /* 0x006699F5: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006699F8: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00669B4F; /* 0x006699F9: je 0x669b4f */
L_006699FF:
    PUSH32(esp, eax); /* 0x006699FF: push eax */
    eax = ebp + 0x8; /* 0x00669A00: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00669A03: push eax */
    PUSH32(esp, esi); /* 0x00669A04: push esi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00669A05: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00669A0B: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00669B4F; /* 0x00669A0E: jmp 0x669b4f */
L_00669A13:
    /* cmp ebx, 0x10u */ /* 0x00669A13: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x00669A16: lea ecx, [ebp + 8] */
    eax = ebp + 0x8; /* 0x00669A19: lea eax, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = edi; } /* 0x00669A1C: cmovae ecx, edi */
    edi = ebp + 0x8; /* 0x00669A1F: lea edi, [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00669A22: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x10u */ /* 0x00669A24: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x00669A27: cmovae eax, dword ptr [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { edi = MEM32(ebp + 0x8); } /* 0x00669A2B: cmovae edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00669A2F: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x00669A31: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669A47; /* 0x00669A33: je 0x669a47 */
L_00669A35:
    SET_LO8(ebx, MEM8(eax + (-0x1))); /* 0x00669A35: mov bl, byte ptr [eax - 1] */
    /* cmp LO8(ebx), 0x5Cu */ /* 0x00669A38: cmp bl, 0x5c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669A47; /* 0x00669A3B: je 0x669a47 */
L_00669A3D:
    /* cmp LO8(ebx), 0x2Fu */ /* 0x00669A3D: cmp bl, 0x2f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669A47; /* 0x00669A40: je 0x669a47 */
L_00669A42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00669A42: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, edi */ /* 0x00669A43: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00669A35; /* 0x00669A45: jne 0x669a35 */
L_00669A47:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00669A47: push dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x30)) = 0; /* 0x00669A4A: mov dword ptr [ebp - 0x30], 0 */
    PUSH32(esp, ecx); /* 0x00669A51: push ecx */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669A52: mov dword ptr [ebp - 0x2c], 0 */
    ecx = ebp + (-0x40); /* 0x00669A59: lea ecx, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x00669A5C: push eax */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00669A5D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00669A64: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00669A6B: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0066A230); /* 0x00669A6F: call 0x66a230 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00669A74: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669A78: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00669A7C: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00669A8C; /* 0x00669A82: jb 0x669a8c */
L_00669A84:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00669A84: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00669A87: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669A89: add esp, 4 */
    _flag_k = FK_ADD;
L_00669A8C:
    eax = ebp + (-0x40); /* 0x00669A8C: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669A8F: mov dword ptr [ebp - 0x14], 0xf */
    PUSH32(esp, eax); /* 0x00669A96: push eax */
    ecx = ebp + (-0x28); /* 0x00669A97: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669A9A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669AA1: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00669AA5: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669AAA: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00669AAE: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669ABC; /* 0x00669AB2: jb 0x669abc */
L_00669AB4:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x00669AB4: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x00669AB7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669AB9: add esp, 4 */
    _flag_k = FK_ADD;
L_00669ABC:
    MEM32(esi + 0x14) = 0xFu; /* 0x00669ABC: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00669AC3: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00669ACA: mov byte ptr [esi], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669ACD: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00669AD1: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00669AD8: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00669ADF: mov byte ptr [ebp - 0x40], 0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_00669AFC; /* 0x00669AE3: jae 0x669afc */
L_00669AE5:
    eax = MEM32(ebp + (-0x18)); /* 0x00669AE5: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00669AE8: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00669B10; /* 0x00669AE9: je 0x669b10 */
L_00669AEB:
    PUSH32(esp, eax); /* 0x00669AEB: push eax */
    eax = ebp + (-0x28); /* 0x00669AEC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00669AEF: push eax */
    PUSH32(esp, esi); /* 0x00669AF0: push esi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00669AF1: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00669AF7: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00669B10; /* 0x00669AFA: jmp 0x669b10 */
L_00669AFC:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00669AFC: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(ebp + (-0x28)); /* 0x00669B00: mov eax, dword ptr [ebp - 0x28] */
    MEM32(esi) = eax; /* 0x00669B03: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669B05: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00669B09: mov dword ptr [ebp - 0x28], 0 */
L_00669B10:
    eax = MEM32(ebp + (-0x18)); /* 0x00669B10: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x10) = eax; /* 0x00669B13: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x00669B16: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x00669B19: mov dword ptr [esi + 0x14], eax */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669B1C: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669B23: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669B2A: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x44)) = 1; /* 0x00669B2E: mov dword ptr [ebp - 0x44], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00669B35: mov byte ptr [ebp - 4], 1 */
    goto L_00669B7E; /* 0x00669B39: jmp 0x669b7e */
L_00669B3B:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00669B3B: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + 0x8); /* 0x00669B3F: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x00669B42: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669B44: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + 0x8) = 0; /* 0x00669B48: mov dword ptr [ebp + 8], 0 */
L_00669B4F:
    eax = MEM32(ebp + 0x18); /* 0x00669B4F: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x10) = eax; /* 0x00669B52: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0x1C); /* 0x00669B55: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x14) = eax; /* 0x00669B58: mov dword ptr [esi + 0x14], eax */
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669B5B: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00669B62: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00669B69: mov byte ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x44)) = 1; /* 0x00669B6D: mov dword ptr [ebp - 0x44], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00669B74: mov byte ptr [ebp - 4], 1 */
    edi = MEM32(0x7CC694); /* 0x00669B78: mov edi, dword ptr [0x7cc694] */
L_00669B7E:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669B7E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669B8C; /* 0x00669B82: jb 0x669b8c */
L_00669B84:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00669B84: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00669B87: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669B89: add esp, 4 */
    _flag_k = FK_ADD;
L_00669B8C:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669B8C: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669B93: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669B9A: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00669B9E: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669BA2: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669BB0; /* 0x00669BA6: jb 0x669bb0 */
L_00669BA8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00669BA8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(edi); /* 0x00669BAB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669BAD: add esp, 4 */
    _flag_k = FK_ADD;
L_00669BB0:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669BB0: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00669BB7: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00669BBE: mov byte ptr [ebp + 8], 0 */
    eax = esi; /* 0x00669BC2: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00669BC4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00669BC7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00669BCE: pop ecx */
    edi = POP32_VAL(esp); /* 0x00669BCF: pop edi */
    esi = POP32_VAL(esp); /* 0x00669BD0: pop esi */
    ebx = POP32_VAL(esp); /* 0x00669BD1: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00669BD2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00669BD5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00669BD7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00669BDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00669BDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00669BDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_00669BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669BE0u);

L_00669BE0:
    PUSH32(esp, ebp); /* 0x00669BE0: push ebp */
    ebp = esp; /* 0x00669BE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669BE3: push -1 */
    PUSH32(esp, 0x007BCA9Eu); /* 0x00669BE5: push 0x7bca9e */
    eax = MEM32(FS_BASE + (0)); /* 0x00669BEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669BF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x00669BF1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00669BF4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00669BF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00669BFB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00669BFE: push ebx */
    PUSH32(esp, esi); /* 0x00669BFF: push esi */
    PUSH32(esp, edi); /* 0x00669C00: push edi */
    PUSH32(esp, eax); /* 0x00669C01: push eax */
    eax = ebp + (-0xC); /* 0x00669C02: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669C05: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00669C0B: mov edi, ecx */
    MEM32(ebp + (-0x34)) = edi; /* 0x00669C0D: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00669C10: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00669C17: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x28); /* 0x00669C1E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x00669C21: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669C23: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x00669C2A: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00669C31: push 0x7cd0c4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669C36: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669C3D: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669C44: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00669C48: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669C4D: mov byte ptr [ebp - 4], 2 */
    esi = MEM32(ebp + 0x18); /* 0x00669C51: mov esi, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x1C); /* 0x00669C54: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x8); /* 0x00669C57: mov edx, dword ptr [ebp + 8] */
L_00669C5A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00669C5A: dec esi */
    _flag_k = FK_DEC;
    eax = ebp + 0x8; /* 0x00669C5B: lea eax, [ebp + 8] */
    /* cmp ecx, 0x10u */ /* 0x00669C5E: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { eax = edx; } /* 0x00669C61: cmovae eax, edx */
    /* cmp MEM8(eax + esi), 0x2Fu */ /* 0x00669C64: cmp byte ptr [eax + esi], 0x2f */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669C7F; /* 0x00669C68: je 0x669c7f */
L_00669C6A:
    /* cmp ecx, 0x10u */ /* 0x00669C6A: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x00669C6D: lea eax, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = edx; } /* 0x00669C70: cmovae eax, edx */
    /* cmp MEM8(eax + esi), 0x5Cu */ /* 0x00669C73: cmp byte ptr [eax + esi], 0x5c */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669C7F; /* 0x00669C77: je 0x669c7f */
L_00669C79:
    /* test esi, esi */ /* 0x00669C79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00669C81; /* 0x00669C7B: jle 0x669c81 */
L_00669C7D:
    RECOMP_BACKEDGE();
    goto L_00669C5A; /* 0x00669C7D: jmp 0x669c5a */
L_00669C7F:
    /* test esi, esi */ /* 0x00669C7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_00669C81:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_00669CA7; /* 0x00669C81: jne 0x669ca7 */
L_00669C83:
    PUSH32(esp, 0); /* 0x00669C83: push 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x00669C85: mov dword ptr [edi + 0x14], 0xf */
    ecx = edi; /* 0x00669C8C: mov ecx, edi */
    MEM32(edi + 0x10) = 0; /* 0x00669C8E: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00669C95: push 0x7cd0c4 */
    MEM8(edi) = (uint8_t)(0); /* 0x00669C9A: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00669C9D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    goto L_00669D39; /* 0x00669CA2: jmp 0x669d39 */
L_00669CA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00669CA7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x00669CA9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00669CD9; /* 0x00669CAB: js 0x669cd9 */
L_00669CAD:
    ecx = ecx; /* 0x00669CAD: lea ecx, [ecx] */
L_00669CB0:
    /* cmp ecx, 0x10u */ /* 0x00669CB0: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x00669CB3: lea eax, [ebp + 8] */
    ecx = ebp + (-0x28); /* 0x00669CB6: lea ecx, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = edx; } /* 0x00669CB9: cmovae eax, edx */
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x00669CBC: mov al, byte ptr [eax + ebx] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x00669CBF: mov byte ptr [ebp - 0x30], al */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x00669CC2: push dword ptr [ebp - 0x30] */
    PUSH32(esp, 1); /* 0x00669CC5: push 1 */
    RECOMP_CALL(sub_00429FC0); /* 0x00669CC7: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00669CCC: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, esi */ /* 0x00669CCD: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00669CD9; /* 0x00669CCF: jg 0x669cd9 */
L_00669CD1:
    ecx = MEM32(ebp + 0x1C); /* 0x00669CD1: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x8); /* 0x00669CD4: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_00669CB0; /* 0x00669CD7: jmp 0x669cb0 */
L_00669CD9:
    MEM32(edi + 0x14) = 0xFu; /* 0x00669CD9: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x00669CE0: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x00669CE7: mov byte ptr [edi], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669CEA: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00669D07; /* 0x00669CEE: jae 0x669d07 */
L_00669CF0:
    eax = MEM32(ebp + (-0x18)); /* 0x00669CF0: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00669CF3: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00669D1B; /* 0x00669CF4: je 0x669d1b */
L_00669CF6:
    PUSH32(esp, eax); /* 0x00669CF6: push eax */
    eax = ebp + (-0x28); /* 0x00669CF7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00669CFA: push eax */
    PUSH32(esp, edi); /* 0x00669CFB: push edi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00669CFC: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00669D02: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00669D1B; /* 0x00669D05: jmp 0x669d1b */
L_00669D07:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00669D07: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + (-0x28)); /* 0x00669D0B: mov eax, dword ptr [ebp - 0x28] */
    MEM32(edi) = eax; /* 0x00669D0E: mov dword ptr [edi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669D10: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x28)) = 0; /* 0x00669D14: mov dword ptr [ebp - 0x28], 0 */
L_00669D1B:
    eax = MEM32(ebp + (-0x18)); /* 0x00669D1B: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x10) = eax; /* 0x00669D1E: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x00669D21: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x14) = eax; /* 0x00669D24: mov dword ptr [edi + 0x14], eax */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669D27: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669D2E: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669D35: mov byte ptr [ebp - 0x28], 0 */
L_00669D39:
    MEM32(ebp + (-0x2C)) = 1; /* 0x00669D39: mov dword ptr [ebp - 0x2c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00669D40: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669D44: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x00669D48: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00669D58; /* 0x00669D4E: jb 0x669d58 */
L_00669D50:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00669D50: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x00669D53: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669D55: add esp, 4 */
    _flag_k = FK_ADD;
L_00669D58:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669D58: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669D5F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669D66: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00669D6A: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669D6E: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669D7C; /* 0x00669D72: jb 0x669d7c */
L_00669D74:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00669D74: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x00669D77: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669D79: add esp, 4 */
    _flag_k = FK_ADD;
L_00669D7C:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669D7C: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00669D83: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00669D8A: mov byte ptr [ebp + 8], 0 */
    eax = edi; /* 0x00669D8E: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00669D90: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00669D93: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00669D9A: pop ecx */
    edi = POP32_VAL(esp); /* 0x00669D9B: pop edi */
    esi = POP32_VAL(esp); /* 0x00669D9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x00669D9D: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00669D9E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00669DA1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00669DA3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00669DA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00669DAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00669DAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00669DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669DB0u);

L_00669DB0:
    PUSH32(esp, ebp); /* 0x00669DB0: push ebp */
    ebp = esp; /* 0x00669DB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669DB3: push -1 */
    PUSH32(esp, 0x007BCAF9u); /* 0x00669DB5: push 0x7bcaf9 */
    eax = MEM32(FS_BASE + (0)); /* 0x00669DBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669DC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x00669DC1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00669DC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00669DC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00669DCB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x00669DCE: push esi */
    PUSH32(esp, edi); /* 0x00669DCF: push edi */
    PUSH32(esp, eax); /* 0x00669DD0: push eax */
    eax = ebp + (-0xC); /* 0x00669DD1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669DD4: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00669DDA: mov esi, ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x00669DDC: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = 0; /* 0x00669DDF: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00669DE6: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x2C); /* 0x00669DED: lea eax, [ebp - 0x2c] */
    edi = MEM32(ebp + 0x18); /* 0x00669DF0: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x00669DF3: push ecx */
    PUSH32(esp, edi); /* 0x00669DF4: push edi */
    PUSH32(esp, eax); /* 0x00669DF5: push eax */
    ecx = ebp + 0x8; /* 0x00669DF6: lea ecx, [ebp + 8] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0x2Eu); /* 0x00669DF9: mov byte ptr [ebp - 0x2c], 0x2e */
    RECOMP_CALL(sub_0066A1B0); /* 0x00669DFD: call 0x66a1b0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00669E02: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669E7A; /* 0x00669E05: je 0x669e7a */
L_00669E07:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x00669E07: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x00669E09: lea ecx, [ebp + 8] */
    PUSH32(esp, edi); /* 0x00669E0C: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00669E0D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x00669E0E: push eax */
    eax = ebp + (-0x28); /* 0x00669E0F: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00669E12: push eax */
    RECOMP_CALL(sub_0045F3F0); /* 0x00669E13: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669E18: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x28); /* 0x00669E1C: lea eax, [ebp - 0x28] */
    MEM32(esi + 0x14) = 0xFu; /* 0x00669E1F: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x00669E26: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x00669E28: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00669E2F: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x00669E30: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00669E33: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = 1; /* 0x00669E38: mov dword ptr [ebp - 0x30], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00669E3F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00669E43: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00669E47: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00669E57; /* 0x00669E4D: jb 0x669e57 */
L_00669E4F:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00669E4F: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00669E52: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669E54: add esp, 4 */
    _flag_k = FK_ADD;
L_00669E57:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00669E57: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00669E5E: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00669E65: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00669E69: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669E6D: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669EA3; /* 0x00669E71: jb 0x669ea3 */
L_00669E73:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00669E73: push dword ptr [ebp + 8] */
    RECOMP_ICALL(edi); /* 0x00669E76: call edi */
    RECOMP_FLAGS_IN();
    goto L_00669EA0; /* 0x00669E78: jmp 0x669ea0 */
L_00669E7A:
    PUSH32(esp, 0x007CD0C4u); /* 0x00669E7A: push 0x7cd0c4 */
    ecx = esi; /* 0x00669E7F: mov ecx, esi */
    RECOMP_CALL(sub_00409FA0); /* 0x00669E81: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = 1; /* 0x00669E86: mov dword ptr [ebp - 0x30], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00669E8D: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669E91: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00669EA3; /* 0x00669E95: jb 0x669ea3 */
L_00669E97:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00669E97: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00669E9A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
L_00669EA0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00669EA0: add esp, 4 */
    _flag_k = FK_ADD;
L_00669EA3:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x00669EA3: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00669EAA: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x00669EB1: mov byte ptr [ebp + 8], 0 */
    eax = esi; /* 0x00669EB5: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00669EB7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00669EBA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00669EC1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00669EC2: pop edi */
    esi = POP32_VAL(esp); /* 0x00669EC3: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00669EC4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00669EC7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00669EC9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00669ECE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00669ED0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00669ED1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00669EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00669EE0u);

L_00669EE0:
    PUSH32(esp, ebp); /* 0x00669EE0: push ebp */
    ebp = esp; /* 0x00669EE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00669EE3: push -1 */
    PUSH32(esp, 0x007BCB69u); /* 0x00669EE5: push 0x7bcb69 */
    eax = MEM32(FS_BASE + (0)); /* 0x00669EEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00669EF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00669EF1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00669EF4: push esi */
    eax = MEM32(0x855000); /* 0x00669EF5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00669EFA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00669EFC: push eax */
    eax = ebp + (-0xC); /* 0x00669EFD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00669F00: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00669F06: mov esi, ecx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x00669F08: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x10)) = 0; /* 0x00669F0B: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0x4)) = 2; /* 0x00669F12: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + 0x18), 4 */ /* 0x00669F19: cmp dword ptr [ebp + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00669F5C; /* 0x00669F1D: ja 0x669f5c */
L_00669F1F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00669F1F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00669F22: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x00669F24: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007FC3DCu); /* 0x00669F27: push 0x7fc3dc */
    RECOMP_CALL(sub_00409FA0); /* 0x00669F2C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00669F31: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00669F35: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00669F38: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00669F3A: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FC420u); /* 0x00669F3D: push 0x7fc420 */
    RECOMP_CALL(sub_00409FA0); /* 0x00669F42: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00669F47: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669F4B: mov byte ptr [ebp - 4], 2 */
    ecx = 0xDAu; /* 0x00669F4F: mov ecx, 0xda */
    RECOMP_CALL(sub_00668DA0); /* 0x00669F54: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00669F59: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00669F5C:
    /* cmp MEM32(ebp + 0x30), 3 */ /* 0x00669F5C: cmp dword ptr [ebp + 0x30], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00669F9F; /* 0x00669F60: je 0x669f9f */
L_00669F62:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00669F62: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00669F65: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00669F67: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FC3DCu); /* 0x00669F6A: push 0x7fc3dc */
    RECOMP_CALL(sub_00409FA0); /* 0x00669F6F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00669F74: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00669F78: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00669F7B: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x00669F7D: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007FC408u); /* 0x00669F80: push 0x7fc408 */
    RECOMP_CALL(sub_00409FA0); /* 0x00669F85: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00669F8A: mov byte ptr [ebp - 4], 6 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00669F8E: mov byte ptr [ebp - 4], 2 */
    ecx = 0xDBu; /* 0x00669F92: mov ecx, 0xdb */
    RECOMP_CALL(sub_00668DA0); /* 0x00669F97: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00669F9C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00669F9F:
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00669F9F: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x20; /* 0x00669FA3: lea eax, [ebp + 0x20] */
    edx = ebp + 0x8; /* 0x00669FA6: lea edx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x20); } /* 0x00669FA9: cmovae eax, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669FAD: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + 0x8); } /* 0x00669FB1: cmovae edx, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM8(eax); /* 0x00669FB5: movzx ecx, byte ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x00669FB8: mov eax, dword ptr [ebp + 0x18] */
    MEM8(edx + eax + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x00669FBB: mov byte ptr [edx + eax - 3], cl */
    eax = ebp + 0x20; /* 0x00669FBF: lea eax, [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00669FC2: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + 0x8; /* 0x00669FC6: lea edx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x20); } /* 0x00669FC9: cmovae eax, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669FCD: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + 0x8); } /* 0x00669FD1: cmovae edx, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x00669FD5: movzx ecx, byte ptr [eax + 1] */
    eax = MEM32(ebp + 0x18); /* 0x00669FD9: mov eax, dword ptr [ebp + 0x18] */
    MEM8(edx + eax + (-0x2)) = (uint8_t)(LO8(ecx)); /* 0x00669FDC: mov byte ptr [edx + eax - 2], cl */
    eax = ebp + 0x20; /* 0x00669FE0: lea eax, [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x00669FE3: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + 0x8; /* 0x00669FE7: lea edx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x20); } /* 0x00669FEA: cmovae eax, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x00669FEE: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + 0x8); } /* 0x00669FF2: cmovae edx, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM8(eax + 0x2); /* 0x00669FF6: movzx ecx, byte ptr [eax + 2] */
    eax = MEM32(ebp + 0x18); /* 0x00669FFA: mov eax, dword ptr [ebp + 0x18] */
    MEM8(edx + eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x00669FFD: mov byte ptr [edx + eax - 1], cl */
    eax = ebp + 0x8; /* 0x0066A001: lea eax, [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x0066A004: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x0066A00B: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x0066A00D: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0066A014: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x0066A015: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066A018: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 1; /* 0x0066A01D: mov dword ptr [ebp - 0x10], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066A024: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0066A028: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A03A; /* 0x0066A02C: jb 0x66a03a */
L_0066A02E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0066A02E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066A031: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066A037: add esp, 4 */
    _flag_k = FK_ADD;
L_0066A03A:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0066A03A: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0066A041: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0066A048: mov byte ptr [ebp + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066A04C: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x0066A050: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A062; /* 0x0066A054: jb 0x66a062 */
L_0066A056:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x0066A056: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066A059: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066A05F: add esp, 4 */
    _flag_k = FK_ADD;
L_0066A062:
    MEM32(ebp + 0x34) = 0xFu; /* 0x0066A062: mov dword ptr [ebp + 0x34], 0xf */
    MEM32(ebp + 0x30) = 0; /* 0x0066A069: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x0066A070: mov byte ptr [ebp + 0x20], 0 */
    eax = esi; /* 0x0066A074: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066A076: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066A079: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066A080: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066A081: pop esi */
    esp = ebp; /* 0x0066A082: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A084: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066A085: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066A090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A090u);

L_0066A090:
    PUSH32(esp, ebp); /* 0x0066A090: push ebp */
    ebp = esp; /* 0x0066A091: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066A093: push -1 */
    PUSH32(esp, 0x007BCBC1u); /* 0x0066A095: push 0x7bcbc1 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066A09A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066A0A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0066A0A1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0066A0A4: push esi */
    PUSH32(esp, edi); /* 0x0066A0A5: push edi */
    eax = MEM32(0x855000); /* 0x0066A0A6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A0AB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066A0AD: push eax */
    eax = ebp + (-0xC); /* 0x0066A0AE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066A0B1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066A0B7: mov esi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066A0B9: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x18)) = esi; /* 0x0066A0C0: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x14)) = 0; /* 0x0066A0C3: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066A0CA: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + 0x18), 4 */ /* 0x0066A0D1: cmp dword ptr [ebp + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066A114; /* 0x0066A0D5: ja 0x66a114 */
L_0066A0D7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066A0D7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066A0DA: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0066A0DC: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FC3DCu); /* 0x0066A0DF: push 0x7fc3dc */
    RECOMP_CALL(sub_00409FA0); /* 0x0066A0E4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066A0E9: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066A0ED: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066A0F0: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x0066A0F2: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007FC420u); /* 0x0066A0F5: push 0x7fc420 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066A0FA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066A0FF: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066A103: mov byte ptr [ebp - 4], 1 */
    ecx = 0xECu; /* 0x0066A107: mov ecx, 0xec */
    RECOMP_CALL(sub_00668DA0); /* 0x0066A10C: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066A111: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066A114:
    PUSH32(esp, 0); /* 0x0066A114: push 0 */
    MEM32(esi + 0x14) = 0xFu; /* 0x0066A116: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x0066A11D: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x0066A11F: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0066A126: push 0x7cd0c4 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066A12B: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066A12E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x0066A133: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0066A136: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 1; /* 0x0066A138: mov dword ptr [ebp - 0x14], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x0066A13F: add eax, -4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0066A16C; /* 0x0066A142: je 0x66a16c */
L_0066A144:
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0066A144: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x0066A148: lea eax, [ebp + 8] */
    ecx = esi; /* 0x0066A14B: mov ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x0066A14D: cmovae eax, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax + edi)); /* 0x0066A151: mov al, byte ptr [eax + edi] */
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x0066A154: mov byte ptr [ebp - 0x10], al */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x0066A157: push dword ptr [ebp - 0x10] */
    PUSH32(esp, 1); /* 0x0066A15A: push 1 */
    RECOMP_CALL(sub_00429FC0); /* 0x0066A15C: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x0066A161: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0066A164: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x0066A165: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0066A168: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A144; /* 0x0066A16A: jb 0x66a144 */
L_0066A16C:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066A16C: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0066A170: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A182; /* 0x0066A174: jb 0x66a182 */
L_0066A176:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0066A176: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066A179: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066A17F: add esp, 4 */
    _flag_k = FK_ADD;
L_0066A182:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0066A182: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0066A189: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0066A190: mov byte ptr [ebp + 8], 0 */
    eax = esi; /* 0x0066A194: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066A196: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066A199: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066A1A0: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066A1A1: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A1A2: pop esi */
    esp = ebp; /* 0x0066A1A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A1A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066A1A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066A1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A1B0u);

L_0066A1B0:
    PUSH32(esp, ebp); /* 0x0066A1B0: push ebp */
    ebp = esp; /* 0x0066A1B1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0066A1B3: push ebx */
    PUSH32(esp, esi); /* 0x0066A1B4: push esi */
    PUSH32(esp, edi); /* 0x0066A1B5: push edi */
    edi = ecx; /* 0x0066A1B6: mov edi, ecx */
    eax = MEM32(edi + 0x10); /* 0x0066A1B8: mov eax, dword ptr [edi + 0x10] */
    /* cmp eax, 1 */ /* 0x0066A1BB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A21A; /* 0x0066A1BE: jb 0x66a21a */
L_0066A1C0:
    ecx = eax + (-0x1); /* 0x0066A1C0: lea ecx, [eax - 1] */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x0066A1C3: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0xC); } /* 0x0066A1C6: cmovb ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x0066A1CA: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A1D4; /* 0x0066A1CE: jb 0x66a1d4 */
L_0066A1D0:
    eax = MEM32(edi); /* 0x0066A1D0: mov eax, dword ptr [edi] */
    goto L_0066A1D6; /* 0x0066A1D2: jmp 0x66a1d6 */
L_0066A1D4:
    eax = edi; /* 0x0066A1D4: mov eax, edi */
L_0066A1D6:
    esi = eax + ecx; /* 0x0066A1D6: lea esi, [eax + ecx] */
    eax = MEM32(ebp + 0x8); /* 0x0066A1D9: mov eax, dword ptr [ebp + 8] */
    SET_LO8(ebx, MEM8(eax)); /* 0x0066A1DC: mov bl, byte ptr [eax] */
    edi = edi; /* 0x0066A1DE: mov edi, edi */
L_0066A1E0:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x0066A1E0: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A1F6; /* 0x0066A1E2: jne 0x66a1f6 */
L_0066A1E4:
    PUSH32(esp, 1); /* 0x0066A1E4: push 1 */
    edx = eax; /* 0x0066A1E6: mov edx, eax */
    ecx = esi; /* 0x0066A1E8: mov ecx, esi */
    RECOMP_CALL(sub_00424360); /* 0x0066A1EA: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066A1EF: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0066A1F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A207; /* 0x0066A1F4: je 0x66a207 */
L_0066A1F6:
    ecx = edi; /* 0x0066A1F6: mov ecx, edi */
    RECOMP_CALL(sub_0040A2E0); /* 0x0066A1F8: call 0x40a2e0 */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x0066A1FD: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A21A; /* 0x0066A1FF: je 0x66a21a */
L_0066A201:
    eax = MEM32(ebp + 0x8); /* 0x0066A201: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0066A204: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_0066A1E0; /* 0x0066A205: jmp 0x66a1e0 */
L_0066A207:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x0066A207: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A20F; /* 0x0066A20B: jb 0x66a20f */
L_0066A20D:
    edi = MEM32(edi); /* 0x0066A20D: mov edi, dword ptr [edi] */
L_0066A20F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x0066A20F: sub esi, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0066A211: pop edi */
    eax = esi; /* 0x0066A212: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0066A214: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066A215: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0066A216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066A217: ret 0xc */
L_0066A21A:
    edi = POP32_VAL(esp); /* 0x0066A21A: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A21B: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0066A21C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0066A21F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0066A220: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066A221: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0066A230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A230u);

L_0066A230:
    PUSH32(esp, ebp); /* 0x0066A230: push ebp */
    ebp = esp; /* 0x0066A231: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066A233: push -1 */
    PUSH32(esp, 0x007BCBE0u); /* 0x0066A235: push 0x7bcbe0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066A23A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066A240: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066A241: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0066A244: push ebx */
    PUSH32(esp, esi); /* 0x0066A245: push esi */
    PUSH32(esp, edi); /* 0x0066A246: push edi */
    eax = MEM32(0x855000); /* 0x0066A247: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A24C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066A24E: push eax */
    eax = ebp + (-0xC); /* 0x0066A24F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066A252: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0066A258: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x0066A25B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0066A25D: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(ebp + 0xC); /* 0x0066A260: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x0066A263: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x10); /* 0x0066A266: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, eax */ /* 0x0066A269: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066A291; /* 0x0066A26B: ja 0x66a291 */
L_0066A26D:
    /* cmp MEM32(esi + 0x14), eax */ /* 0x0066A26D: cmp dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A291; /* 0x0066A270: je 0x66a291 */
L_0066A272:
    PUSH32(esp, 1); /* 0x0066A272: push 1 */
    PUSH32(esp, eax); /* 0x0066A274: push eax */
    RECOMP_CALL(sub_0040A3F0); /* 0x0066A275: call 0x40a3f0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0066A27A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A291; /* 0x0066A27C: je 0x66a291 */
L_0066A27E:
    MEM32(esi + 0x10) = edi; /* 0x0066A27E: mov dword ptr [esi + 0x10], edi */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0066A281: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A28B; /* 0x0066A285: jb 0x66a28b */
L_0066A287:
    eax = MEM32(esi); /* 0x0066A287: mov eax, dword ptr [esi] */
    goto L_0066A28D; /* 0x0066A289: jmp 0x66a28d */
L_0066A28B:
    eax = esi; /* 0x0066A28B: mov eax, esi */
L_0066A28D:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0066A28D: mov byte ptr [eax + edi], 0 */
L_0066A291:
    MEM32(ebp + (-0x4)) = 0; /* 0x0066A291: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + 0x8); /* 0x0066A298: mov eax, dword ptr [ebp + 8] */
    goto L_0066A2A0; /* 0x0066A29B: jmp 0x66a2a0 */
L_0066A2A0:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x0066A2A0: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A2BB; /* 0x0066A2A3: je 0x66a2bb */
L_0066A2A5:
    eax = (uint32_t)MEM8(eax); /* 0x0066A2A5: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x0066A2A8: push eax */
    PUSH32(esp, 1); /* 0x0066A2A9: push 1 */
    ecx = esi; /* 0x0066A2AB: mov ecx, esi */
    RECOMP_CALL(sub_00429FC0); /* 0x0066A2AD: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x0066A2B2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066A2B5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x0066A2B6: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    goto L_0066A2A0; /* 0x0066A2B9: jmp 0x66a2a0 */
L_0066A2BB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066A2BB: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066A2C2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066A2C5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066A2CC: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066A2CD: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A2CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066A2CF: pop ebx */
    esp = ebp; /* 0x0066A2D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A2D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066A2D3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0066A2D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A2D6u);

L_0066A2D6:
    esi = MEM32(ebp + (-0x14)); /* 0x0066A2D6: mov esi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0066A2D9: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A2EA; /* 0x0066A2DD: jb 0x66a2ea */
L_0066A2DF:
    PUSH32(esp, MEM32(esi)); /* 0x0066A2DF: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066A2E1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066A2E7: add esp, 4 */
    _flag_k = FK_ADD;
L_0066A2EA:
    MEM32(esi + 0x14) = 0xFu; /* 0x0066A2EA: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0066A2F1: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066A2F8: mov byte ptr [esi], 0 */
    PUSH32(esp, 0); /* 0x0066A2FB: push 0 */
    PUSH32(esp, 0); /* 0x0066A2FD: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0066A2FF: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0066A304u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0066A310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A310u);

L_0066A310:
    PUSH32(esp, ebp); /* 0x0066A310: push ebp */
    ebp = esp; /* 0x0066A311: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066A313: push -1 */
    PUSH32(esp, 0x007BCC16u); /* 0x0066A315: push 0x7bcc16 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066A31A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066A320: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0066A321: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066A324: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A329: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066A32B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0066A32E: push esi */
    PUSH32(esp, eax); /* 0x0066A32F: push eax */
    eax = ebp + (-0xC); /* 0x0066A330: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066A333: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066A339: mov esi, ecx */
    MEM32(ebp + (-0x24)) = esi; /* 0x0066A33B: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = 0; /* 0x0066A33E: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0066A345: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0066A34C: mov dword ptr [esi + 0x10], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066A353: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x14; /* 0x0066A35A: lea ecx, [esi + 0x14] */
    MEM32(ecx) = 0; /* 0x0066A35D: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x0066A363: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x0066A36A: mov dword ptr [ecx + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066A371: mov byte ptr [ebp - 4], 1 */
    _xmm[0] = xmm_ld(0x809A80); /* 0x0066A375: movdqa xmm0, xmmword ptr [0x809a80] */
    MEM32(esi) = 6; /* 0x0066A37D: mov dword ptr [esi], 6 */
    MEM32(esi + 0x4) = 8; /* 0x0066A383: mov dword ptr [esi + 4], 8 */
    eax = MEM32(esi + 0x8); /* 0x0066A38A: mov eax, dword ptr [esi + 8] */
    MEM32(esi + 0xC) = eax; /* 0x0066A38D: mov dword ptr [esi + 0xc], eax */
    eax = ebp + (-0x20); /* 0x0066A390: lea eax, [ebp - 0x20] */
    edx = MEM32(ecx); /* 0x0066A393: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x0066A395: push eax */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x0066A396: movdqu xmmword ptr [ebp - 0x20], xmm0 */
    MEM32(ecx + 0x4) = edx; /* 0x0066A39B: mov dword ptr [ecx + 4], edx */
    RECOMP_CALL(sub_0066A8D0); /* 0x0066A39E: call 0x66a8d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066A3A3: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0066A3AA: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066A3AC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066A3AF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066A3B6: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066A3B7: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066A3B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066A3BB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066A3BD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066A3C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A3C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0066A3C5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0066A3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A3D0u);

L_0066A3D0:
    PUSH32(esp, ebp); /* 0x0066A3D0: push ebp */
    ebp = esp; /* 0x0066A3D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0066A3D3: push ecx */
    PUSH32(esp, ebx); /* 0x0066A3D4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0066A3D5: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x0066A3D8: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x0066A3DB: push esi */
    PUSH32(esp, edi); /* 0x0066A3DC: push edi */
    PUSH32(esp, eax); /* 0x0066A3DD: push eax */
    PUSH32(esp, ecx); /* 0x0066A3DE: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0066A3DF: push dword ptr [ebp + 0x10] */
    edi = ecx; /* 0x0066A3E2: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066A3E4: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0066A3EB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x0066A3EE: push ebx */
    RECOMP_CALL(sub_0066A470); /* 0x0066A3EF: call 0x66a470 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x0066A3F4: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A45C; /* 0x0066A3F8: je 0x66a45c */
L_0066A3FA:
    esi = MEM32(ebp + (-0x4)); /* 0x0066A3FA: mov esi, dword ptr [ebp - 4] */
    edx = MEM32(edi + 0x14); /* 0x0066A3FD: mov edx, dword ptr [edi + 0x14] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x0066A400: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x0066A400: shl esi, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x0066A403: add edx, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + 0x8); /* 0x0066A405: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0xC); /* 0x0066A408: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x8); /* 0x0066A40B: sub ecx, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0xC); /* 0x0066A40E: sub eax, dword ptr [ebx + 0xc] */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x0066A411: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = edi; /* 0x0066A413: mov ecx, edi */
    MEM8(ebp + 0x10) = (uint8_t)((CMP_LE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0066A415: setle byte ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0066A419: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x0066A41C: push ebx */
    PUSH32(esp, edx); /* 0x0066A41D: push edx */
    RECOMP_CALL(sub_0066A620); /* 0x0066A41E: call 0x66a620 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x14); /* 0x0066A423: mov eax, dword ptr [edi + 0x14] */
    edx = MEM32(edi + 0x18); /* 0x0066A426: mov edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A429: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A42C: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x0066A42E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A448; /* 0x0066A430: je 0x66a448 */
L_0066A432:
    ecx = eax + (-0x10); /* 0x0066A432: lea ecx, [eax - 0x10] */
L_0066A435:
    _xmm[0] = xmm_ld(eax); /* 0x0066A435: movdqu xmm0, xmmword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A439: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x10; /* 0x0066A43C: lea ecx, [ecx + 0x10] */
    xmm_st(ecx + (-0x10), _xmm[0]); /* 0x0066A43F: movdqu xmmword ptr [ecx - 0x10], xmm0 */
    /* cmp eax, edx */ /* 0x0066A444: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A435; /* 0x0066A446: jne 0x66a435 */
L_0066A448:
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + 0xFFFFFFF0u; /* 0x0066A448: add dword ptr [edi + 0x18], -0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x0066A44C: mov ecx, edi */
    RECOMP_CALL(sub_0066A6D0); /* 0x0066A44E: call 0x66a6d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x0066A453: push ebx */
    ecx = edi + 0x8; /* 0x0066A454: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_0066A8D0); /* 0x0066A457: call 0x66a8d0 */
    RECOMP_FLAGS_IN();
L_0066A45C:
    edi = POP32_VAL(esp); /* 0x0066A45C: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A45D: pop esi */
    eax = ebx; /* 0x0066A45E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x0066A460: pop ebx */
    esp = ebp; /* 0x0066A461: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A463: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x0066A464: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_0066A470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A470u);

L_0066A470:
    PUSH32(esp, ebp); /* 0x0066A470: push ebp */
    ebp = esp; /* 0x0066A471: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066A473: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x18); /* 0x0066A476: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0066A479: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x14); /* 0x0066A47B: sub eax, dword ptr [ecx + 0x14] */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0066A47E: xorps xmm0, xmm0 */
    PUSH32(esp, esi); /* 0x0066A481: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0066A482: mov esi, dword ptr [ebp + 8] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A485: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(ebp + (-0x18)) = ecx; /* 0x0066A488: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x10)) = 0x7FFFFFFFu; /* 0x0066A48B: mov dword ptr [ebp - 0x10], 0x7fffffff */
    MEM32(ebp + (-0xC)) = edx; /* 0x0066A492: mov dword ptr [ebp - 0xc], edx */
    xmm_st(esi, _xmm[0]); /* 0x0066A495: movdqu xmmword ptr [esi], xmm0 */
    /* test eax, eax */ /* 0x0066A499: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A609; /* 0x0066A49B: je 0x66a609 */
L_0066A4A1:
    eax = MEM32(ecx + 0x14); /* 0x0066A4A1: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066A4A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0066A4A6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x0066A4A7: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x0066A4AA: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0066A4AD: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x0066A4B0: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0066A4B1: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0066A4B4: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x0066A4B7: mov dword ptr [ebp - 0x14], eax */
    ebx = ebx; /* 0x0066A4BA: lea ebx, [ebx] */
L_0066A4C0:
    eax = MEM32(ebp + (-0x4)); /* 0x0066A4C0: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(ecx + eax + 0x8); /* 0x0066A4C3: mov eax, dword ptr [ecx + eax + 8] */
    /* cmp edi, eax */ /* 0x0066A4C7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A4DB; /* 0x0066A4C9: jne 0x66a4db */
L_0066A4CB:
    edx = MEM32(ebp + (-0x4)); /* 0x0066A4CB: mov edx, dword ptr [ebp - 4] */
    /* cmp ebx, MEM32(ecx + edx + 0xC) */ /* 0x0066A4CE: cmp ebx, dword ptr [ecx + edx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xC)); /* 0x0066A4D2: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A5B9; /* 0x0066A4D5: je 0x66a5b9 */
L_0066A4DB:
    /* cmp ebx, eax */ /* 0x0066A4DB: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A4EF; /* 0x0066A4DD: jne 0x66a4ef */
L_0066A4DF:
    esi = MEM32(ebp + (-0x4)); /* 0x0066A4DF: mov esi, dword ptr [ebp - 4] */
    /* cmp edi, MEM32(ecx + esi + 0xC) */ /* 0x0066A4E2: cmp edi, dword ptr [ecx + esi + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x0066A4E6: mov esi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A5E5; /* 0x0066A4E9: je 0x66a5e5 */
L_0066A4EF:
    /* cmp edi, eax */ /* 0x0066A4EF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_0066A534; /* 0x0066A4F1: jg 0x66a534 */
L_0066A4F3:
    edx = MEM32(ebp + (-0x4)); /* 0x0066A4F3: mov edx, dword ptr [ebp - 4] */
    /* cmp ebx, MEM32(ecx + edx + 0xC) */ /* 0x0066A4F6: cmp ebx, dword ptr [ecx + edx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xC)); /* 0x0066A4FA: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_G(_flag_a, _flag_b)) goto L_0066A534; /* 0x0066A4FD: jg 0x66a534 */
L_0066A4FF:
    eax = MEM32(ebp + (-0x4)); /* 0x0066A4FF: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x4)); /* 0x0066A502: mov esi, dword ptr [ebp - 4] */
    ecx = MEM32(ecx + eax + 0xC); /* 0x0066A505: mov ecx, dword ptr [ecx + eax + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x0066A509: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + esi + 0x8)); /* 0x0066A50C: imul ecx, dword ptr [eax + esi + 8] */
    eax = edi; /* 0x0066A511: mov eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x0066A513: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x0066A516: imul eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0066A519: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x0066A51B: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066A583; /* 0x0066A51E: jge 0x66a583 */
L_0066A520:
    edx = MEM32(ebp + (-0x4)); /* 0x0066A520: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x0066A523: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x8) = edi; /* 0x0066A526: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = ebx; /* 0x0066A529: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(eax + edx); /* 0x0066A52C: mov eax, dword ptr [eax + edx] */
    edx = MEM32(ebp + (-0xC)); /* 0x0066A52F: mov edx, dword ptr [ebp - 0xc] */
    goto L_0066A571; /* 0x0066A532: jmp 0x66a571 */
L_0066A534:
    /* cmp ebx, eax */ /* 0x0066A534: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_0066A586; /* 0x0066A536: jg 0x66a586 */
L_0066A538:
    eax = MEM32(ebp + (-0x4)); /* 0x0066A538: mov eax, dword ptr [ebp - 4] */
    /* cmp edi, MEM32(ecx + eax + 0xC) */ /* 0x0066A53B: cmp edi, dword ptr [ecx + eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_0066A586; /* 0x0066A53F: jg 0x66a586 */
L_0066A541:
    ecx = MEM32(ecx + eax + 0xC); /* 0x0066A541: mov ecx, dword ptr [ecx + eax + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x0066A545: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x0066A548: mov edx, dword ptr [ebp - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + edx + 0x8)); /* 0x0066A54B: imul ecx, dword ptr [eax + edx + 8] */
    eax = edi; /* 0x0066A550: mov eax, edi */
    edx = MEM32(ebp + (-0xC)); /* 0x0066A552: mov edx, dword ptr [ebp - 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x0066A555: imul eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0066A558: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x0066A55A: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066A583; /* 0x0066A55D: jge 0x66a583 */
L_0066A55F:
    esi = MEM32(ebp + (-0x4)); /* 0x0066A55F: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x0066A562: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + esi); /* 0x0066A565: mov eax, dword ptr [eax + esi] */
    esi = MEM32(ebp + 0x8); /* 0x0066A568: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = ebx; /* 0x0066A56B: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = edi; /* 0x0066A56E: mov dword ptr [esi + 0xc], edi */
L_0066A571:
    MEM32(esi) = eax; /* 0x0066A571: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x0066A573: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0066A576: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(eax); /* 0x0066A579: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4) = eax; /* 0x0066A57B: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x0066A57E: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = edx; /* 0x0066A581: mov dword ptr [eax], edx */
L_0066A583:
    ecx = MEM32(ebp + (-0x8)); /* 0x0066A583: mov ecx, dword ptr [ebp - 8] */
L_0066A586:
    eax = MEM32(ebp + (-0x18)); /* 0x0066A586: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0066A589: inc edx */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x18)); /* 0x0066A58A: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0066A58D: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 0x10u; /* 0x0066A590: add dword ptr [ebp - 0x14], 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x0066A594: mov dword ptr [ebp - 0xc], edx */
    eax = MEM32(eax + 0x18); /* 0x0066A597: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x14); /* 0x0066A59A: sub eax, dword ptr [ebx + 0x14] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x10); /* 0x0066A59D: mov ebx, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A5A0: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(ebp + (-0x8)) = ecx; /* 0x0066A5A3: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, eax */ /* 0x0066A5A6: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A4C0; /* 0x0066A5A8: jb 0x66a4c0 */
L_0066A5AE:
    edi = POP32_VAL(esp); /* 0x0066A5AE: pop edi */
    ebx = POP32_VAL(esp); /* 0x0066A5AF: pop ebx */
    eax = esi; /* 0x0066A5B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0066A5B2: pop esi */
    esp = ebp; /* 0x0066A5B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A5B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0066A5B6: ret 0x14 */
L_0066A5B9:
    eax = MEM32(ebp + (-0x18)); /* 0x0066A5B9: mov eax, dword ptr [ebp - 0x18] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x0066A5BC: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x0066A5BC: shl edx, 4 */
    MEM32(esi + 0x8) = edi; /* 0x0066A5BF: mov dword ptr [esi + 8], edi */
    edi = POP32_VAL(esp); /* 0x0066A5C2: pop edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x14); /* 0x0066A5C3: add edx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x0066A5C6: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0xC) = ebx; /* 0x0066A5C9: mov dword ptr [esi + 0xc], ebx */
    ebx = POP32_VAL(esp); /* 0x0066A5CC: pop ebx */
    ecx = MEM32(edx); /* 0x0066A5CD: mov ecx, dword ptr [edx] */
    MEM32(esi) = ecx; /* 0x0066A5CF: mov dword ptr [esi], ecx */
    ecx = MEM32(edx + 0x4); /* 0x0066A5D1: mov ecx, dword ptr [edx + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x0066A5D4: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x0066A5D7: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ecx) = eax; /* 0x0066A5DA: mov dword ptr [ecx], eax */
    eax = esi; /* 0x0066A5DC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0066A5DE: pop esi */
    esp = ebp; /* 0x0066A5DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A5E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0066A5E2: ret 0x14 */
L_0066A5E5:
    eax = MEM32(ebp + (-0x18)); /* 0x0066A5E5: mov eax, dword ptr [ebp - 0x18] */
    ecx = edx; /* 0x0066A5E8: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x0066A5EA: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x0066A5EA: shl ecx, 4 */
    MEM32(esi + 0xC) = edi; /* 0x0066A5ED: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x0066A5F0: pop edi */
    eax = MEM32(eax + 0x14); /* 0x0066A5F1: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0066A5F4: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = ebx; /* 0x0066A5F6: mov dword ptr [esi + 8], ebx */
    ebx = POP32_VAL(esp); /* 0x0066A5F9: pop ebx */
    eax = MEM32(ecx); /* 0x0066A5FA: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x0066A5FC: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x0066A5FE: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x0066A601: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x0066A604: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = edx; /* 0x0066A607: mov dword ptr [eax], edx */
L_0066A609:
    eax = esi; /* 0x0066A609: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0066A60B: pop esi */
    esp = ebp; /* 0x0066A60C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A60E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0066A60F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_0066A620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A620u);

L_0066A620:
    PUSH32(esp, ebp); /* 0x0066A620: push ebp */
    ebp = esp; /* 0x0066A621: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x0066A623: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066A626: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A62B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x0066A62D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x0066A630: push ebx */
    PUSH32(esp, esi); /* 0x0066A631: push esi */
    PUSH32(esp, edi); /* 0x0066A632: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0066A633: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x0066A636: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0066A639: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0xC); /* 0x0066A63C: mov ebx, dword ptr [edi + 0xc] */
    edx = MEM32(ecx + 0x4); /* 0x0066A63F: mov edx, dword ptr [ecx + 4] */
    esi = MEM32(ecx); /* 0x0066A642: mov esi, dword ptr [ecx] */
    MEM32(ebp + (-0x18)) = esi; /* 0x0066A644: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x24)) = edx; /* 0x0066A647: mov dword ptr [ebp - 0x24], edx */
    eax = edx + ebx; /* 0x0066A64A: lea eax, [edx + ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0066A64D: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ecx + 0xC); /* 0x0066A650: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x0066A653: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x0066A656: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = eax; /* 0x0066A658: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x0066A65B: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0x8); /* 0x0066A65E: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x0066A661: mov dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A664: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x0066A666: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ecx + 0x8); /* 0x0066A669: mov eax, dword ptr [ecx + 8] */
    edi = eax; /* 0x0066A66C: mov edi, eax */
    ecx = MEM32(ebp + (-0x34)); /* 0x0066A66E: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0066A671: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x0066A673: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x20)) = edi; /* 0x0066A677: mov dword ptr [ebp - 0x20], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A681; /* 0x0066A67A: jne 0x66a681 */
L_0066A67C:
    ebx = MEM32(ebp + (-0x30)); /* 0x0066A67C: mov ebx, dword ptr [ebp - 0x30] */
    eax = ecx; /* 0x0066A67F: mov eax, ecx */
L_0066A681:
    esi = MEM32(ebp + (-0x2C)); /* 0x0066A681: mov esi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x0066A684: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x0066A687: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x0066A68A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066A6A0; /* 0x0066A68C: jle 0x66a6a0 */
L_0066A68E:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x0066A68E: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0066A6A0; /* 0x0066A692: jle 0x66a6a0 */
L_0066A694:
    eax = ebp + (-0x18); /* 0x0066A694: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0066A697: push eax */
    ecx = esi + 0x14; /* 0x0066A698: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_0066A8D0); /* 0x0066A69B: call 0x66a8d0 */
    RECOMP_FLAGS_IN();
L_0066A6A0:
    /* test edi, edi */ /* 0x0066A6A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066A6B4; /* 0x0066A6A2: jle 0x66a6b4 */
L_0066A6A4:
    /* test ebx, ebx */ /* 0x0066A6A4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066A6B4; /* 0x0066A6A6: jle 0x66a6b4 */
L_0066A6A8:
    eax = ebp + (-0x28); /* 0x0066A6A8: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0066A6AB: push eax */
    ecx = esi + 0x14; /* 0x0066A6AC: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_0066A8D0); /* 0x0066A6AF: call 0x66a8d0 */
    RECOMP_FLAGS_IN();
L_0066A6B4:
    ecx = MEM32(ebp + (-0x8)); /* 0x0066A6B4: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x0066A6B7: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A6B8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066A6B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0066A6BB: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0066A6BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066A6C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A6C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066A6C4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0066A6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A6D0u);

L_0066A6D0:
    PUSH32(esp, ebp); /* 0x0066A6D0: push ebp */
    ebp = esp; /* 0x0066A6D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0066A6D3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x0066A6D6: mov edx, ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x0066A6D8: mov dword ptr [ebp - 0xc], edx */
    eax = MEM32(edx + 0x18); /* 0x0066A6DB: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x14); /* 0x0066A6DE: sub eax, dword ptr [edx + 0x14] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A6E1: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test eax, eax */ /* 0x0066A6E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A8CA; /* 0x0066A6E6: je 0x66a8ca */
L_0066A6EC:
    PUSH32(esp, ebx); /* 0x0066A6EC: push ebx */
    PUSH32(esp, esi); /* 0x0066A6ED: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066A6EE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 1; /* 0x0066A6F0: mov ebx, 1 */
    PUSH32(esp, edi); /* 0x0066A6F5: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0066A6F6: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x0066A6F9: mov dword ptr [ebp - 0x14], ebx */
    esp = esp; /* 0x0066A6FC: lea esp, [esp] */
L_0066A700:
    eax = MEM32(edx + 0x18); /* 0x0066A700: mov eax, dword ptr [edx + 0x18] */
    edi = ebx; /* 0x0066A703: mov edi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x14); /* 0x0066A705: sub eax, dword ptr [edx + 0x14] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A708: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp ebx, eax */ /* 0x0066A70B: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066A8A6; /* 0x0066A70D: jae 0x66a8a6 */
L_0066A713:
    esi = ecx + 0x10; /* 0x0066A713: lea esi, [ecx + 0x10] */
L_0066A716:
    eax = MEM32(edx + 0x14); /* 0x0066A716: mov eax, dword ptr [edx + 0x14] */
    ecx = MEM32(eax + esi + 0x8); /* 0x0066A719: mov ecx, dword ptr [eax + esi + 8] */
    ebx = eax + esi; /* 0x0066A71D: lea ebx, [eax + esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0066A720: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0066A723: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0066A726: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x8); /* 0x0066A728: mov eax, dword ptr [ecx + 8] */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x0066A72B: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A7DC; /* 0x0066A72E: jne 0x66a7dc */
L_0066A734:
    eax = MEM32(ecx); /* 0x0066A734: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(ebx) */ /* 0x0066A736: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A7DC; /* 0x0066A738: jne 0x66a7dc */
L_0066A73E:
    eax = MEM32(ebx + 0xC); /* 0x0066A73E: mov eax, dword ptr [ebx + 0xc] */
    edx = MEM32(ebp + (-0xC)); /* 0x0066A741: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0066A744: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x4); /* 0x0066A747: mov eax, dword ptr [ebx + 4] */
    ebx = MEM32(ecx + 0x4); /* 0x0066A74A: mov ebx, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0066A74D: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x0066A750: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x0066A753: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A79A; /* 0x0066A755: jne 0x66a79a */
L_0066A757:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x8)); /* 0x0066A757: sub ebx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM32(ecx + 0x4) = ebx; /* 0x0066A75A: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edx + 0x14); /* 0x0066A75D: mov eax, dword ptr [edx + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x0066A760: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0066A763: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(eax + esi + 0xC); /* 0x0066A765: mov eax, dword ptr [eax + esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0066A769: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x14); /* 0x0066A76C: mov eax, dword ptr [edx + 0x14] */
    ebx = MEM32(edx + 0x18); /* 0x0066A76F: mov ebx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A772: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A775: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x0066A777: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A883; /* 0x0066A779: je 0x66a883 */
L_0066A77F:
    ecx = eax + (-0x10); /* 0x0066A77F: lea ecx, [eax - 0x10] */
L_0066A782:
    _xmm[0] = xmm_ld(eax); /* 0x0066A782: movdqu xmm0, xmmword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A786: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x10; /* 0x0066A789: lea ecx, [ecx + 0x10] */
    xmm_st(ecx + (-0x10), _xmm[0]); /* 0x0066A78C: movdqu xmmword ptr [ecx - 0x10], xmm0 */
    /* cmp eax, ebx */ /* 0x0066A791: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A782; /* 0x0066A793: jne 0x66a782 */
L_0066A795:
    goto L_0066A883; /* 0x0066A795: jmp 0x66a883 */
L_0066A79A:
    eax = MEM32(ecx + 0xC); /* 0x0066A79A: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x0066A79D: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x0066A79F: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A88B; /* 0x0066A7A2: jne 0x66a88b */
L_0066A7A8:
    eax = MEM32(ebp + (-0x8)); /* 0x0066A7A8: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0066A7AB: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x14); /* 0x0066A7AE: mov eax, dword ptr [edx + 0x14] */
    ebx = MEM32(edx + 0x18); /* 0x0066A7B1: mov ebx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A7B4: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A7B7: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x0066A7B9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A883; /* 0x0066A7BB: je 0x66a883 */
L_0066A7C1:
    ecx = eax + (-0x10); /* 0x0066A7C1: lea ecx, [eax - 0x10] */
L_0066A7C4:
    _xmm[0] = xmm_ld(eax); /* 0x0066A7C4: movdqu xmm0, xmmword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A7C8: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x10; /* 0x0066A7CB: lea ecx, [ecx + 0x10] */
    xmm_st(ecx + (-0x10), _xmm[0]); /* 0x0066A7CE: movdqu xmmword ptr [ecx - 0x10], xmm0 */
    /* cmp eax, ebx */ /* 0x0066A7D3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A7C4; /* 0x0066A7D5: jne 0x66a7c4 */
L_0066A7D7:
    goto L_0066A883; /* 0x0066A7D7: jmp 0x66a883 */
L_0066A7DC:
    eax = MEM32(ecx + 0xC); /* 0x0066A7DC: mov eax, dword ptr [ecx + 0xc] */
    /* cmp eax, MEM32(ebx + 0xC) */ /* 0x0066A7DF: cmp eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A88B; /* 0x0066A7E2: jne 0x66a88b */
L_0066A7E8:
    eax = MEM32(ecx + 0x4); /* 0x0066A7E8: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x0066A7EB: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A88B; /* 0x0066A7EE: jne 0x66a88b */
L_0066A7F4:
    eax = MEM32(ebx); /* 0x0066A7F4: mov eax, dword ptr [ebx] */
    ebx = MEM32(ecx); /* 0x0066A7F6: mov ebx, dword ptr [ecx] */
    edx = MEM32(ebp + (-0xC)); /* 0x0066A7F8: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0066A7FB: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x0066A7FE: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x0066A801: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x0066A804: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A845; /* 0x0066A806: jne 0x66a845 */
L_0066A808:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x8)); /* 0x0066A808: sub ebx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM32(ecx) = ebx; /* 0x0066A80B: mov dword ptr [ecx], ebx */
    eax = MEM32(edx + 0x14); /* 0x0066A80D: mov eax, dword ptr [edx + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x0066A810: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0066A813: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax + 0x8); /* 0x0066A815: mov eax, dword ptr [esi + eax + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x0066A819: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x14); /* 0x0066A81C: mov eax, dword ptr [edx + 0x14] */
    ebx = MEM32(edx + 0x18); /* 0x0066A81F: mov ebx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A822: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A825: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x0066A827: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A883; /* 0x0066A829: je 0x66a883 */
L_0066A82B:
    ecx = eax + (-0x10); /* 0x0066A82B: lea ecx, [eax - 0x10] */
    edi = edi; /* 0x0066A82E: mov edi, edi */
L_0066A830:
    _xmm[0] = xmm_ld(eax); /* 0x0066A830: movdqu xmm0, xmmword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A834: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x10; /* 0x0066A837: lea ecx, [ecx + 0x10] */
    xmm_st(ecx + (-0x10), _xmm[0]); /* 0x0066A83A: movdqu xmmword ptr [ecx - 0x10], xmm0 */
    /* cmp eax, ebx */ /* 0x0066A83F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A830; /* 0x0066A841: jne 0x66a830 */
L_0066A843:
    goto L_0066A883; /* 0x0066A843: jmp 0x66a883 */
L_0066A845:
    eax = MEM32(ecx + 0x8); /* 0x0066A845: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x0066A848: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x0066A84A: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A88B; /* 0x0066A84D: jne 0x66a88b */
L_0066A84F:
    eax = MEM32(ebp + (-0x8)); /* 0x0066A84F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x0066A852: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x14); /* 0x0066A855: mov eax, dword ptr [edx + 0x14] */
    ebx = MEM32(edx + 0x18); /* 0x0066A858: mov ebx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A85B: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0066A85E: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x0066A860: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066A883; /* 0x0066A862: je 0x66a883 */
L_0066A864:
    ecx = eax + (-0x10); /* 0x0066A864: lea ecx, [eax - 0x10] */
    goto L_0066A870; /* 0x0066A867: jmp 0x66a870 */
L_0066A870:
    _xmm[0] = xmm_ld(eax); /* 0x0066A870: movdqu xmm0, xmmword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066A874: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ecx + 0x10; /* 0x0066A877: lea ecx, [ecx + 0x10] */
    xmm_st(ecx + (-0x10), _xmm[0]); /* 0x0066A87A: movdqu xmmword ptr [ecx - 0x10], xmm0 */
    /* cmp eax, ebx */ /* 0x0066A87F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A870; /* 0x0066A881: jne 0x66a870 */
L_0066A883:
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x18) = MEM32(edx + 0x18) + 0xFFFFFFF0u; /* 0x0066A883: add dword ptr [edx + 0x18], -0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0066A887: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x10u; /* 0x0066A888: sub esi, 0x10 */
    _flag_k = FK_CMP;
L_0066A88B:
    eax = MEM32(edx + 0x18); /* 0x0066A88B: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0066A88E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x14); /* 0x0066A88F: sub eax, dword ptr [edx + 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x0066A892: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A895: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp edi, eax */ /* 0x0066A898: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A716; /* 0x0066A89A: jb 0x66a716 */
L_0066A8A0:
    ecx = MEM32(ebp + (-0x4)); /* 0x0066A8A0: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x14)); /* 0x0066A8A3: mov ebx, dword ptr [ebp - 0x14] */
L_0066A8A6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0066A8A6: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0066A8A9: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x0066A8AA: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(edx + 0x18); /* 0x0066A8AD: mov ecx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x14); /* 0x0066A8B0: sub ecx, dword ptr [edx + 0x14] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x0066A8B3: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    eax = ebx + (-0x1); /* 0x0066A8B6: lea eax, [ebx - 1] */
    /* cmp eax, ecx */ /* 0x0066A8B9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ebx; /* 0x0066A8BB: mov dword ptr [ebp - 0x14], ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0066A8BE: mov ecx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0066A700; /* 0x0066A8C1: jb 0x66a700 */
L_0066A8C7:
    edi = POP32_VAL(esp); /* 0x0066A8C7: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A8C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066A8C9: pop ebx */
L_0066A8CA:
    esp = ebp; /* 0x0066A8CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A8CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066A8CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066A8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A8D0u);

L_0066A8D0:
    PUSH32(esp, ebp); /* 0x0066A8D0: push ebp */
    ebp = esp; /* 0x0066A8D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066A8D3: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0066A8D5: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066A8DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066A8E0: push eax */
    PUSH32(esp, esi); /* 0x0066A8E1: push esi */
    PUSH32(esp, edi); /* 0x0066A8E2: push edi */
    eax = MEM32(0x855000); /* 0x0066A8E3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A8E8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066A8EA: push eax */
    eax = ebp + (-0xC); /* 0x0066A8EB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066A8EE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066A8F4: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x0066A8F6: mov eax, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x0066A8F9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x0066A8FC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066A939; /* 0x0066A8FE: jae 0x66a939 */
L_0066A900:
    ecx = MEM32(esi); /* 0x0066A900: mov ecx, dword ptr [esi] */
    /* cmp ecx, edi */ /* 0x0066A902: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066A939; /* 0x0066A904: ja 0x66a939 */
L_0066A906:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0066A906: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x0066A908: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A915; /* 0x0066A90B: jne 0x66a915 */
L_0066A90D:
    PUSH32(esp, ecx); /* 0x0066A90D: push ecx */
    ecx = esi; /* 0x0066A90E: mov ecx, esi */
    RECOMP_CALL(sub_0066A970); /* 0x0066A910: call 0x66a970 */
    RECOMP_FLAGS_IN();
L_0066A915:
    eax = MEM32(esi + 0x4); /* 0x0066A915: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edi = edi & 0xFFFFFFF0u; /* 0x0066A918: and edi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x0066A91B: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x0066A91D: mov dword ptr [ebp - 4], 0 */
    /* test eax, eax */ /* 0x0066A924: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A930; /* 0x0066A926: je 0x66a930 */
L_0066A928:
    _xmm[0] = xmm_ld(edi); /* 0x0066A928: movdqu xmm0, xmmword ptr [edi] */
    xmm_st(eax, _xmm[0]); /* 0x0066A92C: movdqu xmmword ptr [eax], xmm0 */
L_0066A930:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066A930: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_0066A955; /* 0x0066A937: jmp 0x66a955 */
L_0066A939:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x0066A939: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066A946; /* 0x0066A93C: jne 0x66a946 */
L_0066A93E:
    PUSH32(esp, ecx); /* 0x0066A93E: push ecx */
    ecx = esi; /* 0x0066A93F: mov ecx, esi */
    RECOMP_CALL(sub_0066A970); /* 0x0066A941: call 0x66a970 */
    RECOMP_FLAGS_IN();
L_0066A946:
    eax = MEM32(esi + 0x4); /* 0x0066A946: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x0066A949: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066A955; /* 0x0066A94B: je 0x66a955 */
L_0066A94D:
    _xmm[0] = xmm_ld(edi); /* 0x0066A94D: movdqu xmm0, xmmword ptr [edi] */
    xmm_st(eax, _xmm[0]); /* 0x0066A951: movdqu xmmword ptr [eax], xmm0 */
L_0066A955:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x10u; /* 0x0066A955: add dword ptr [esi + 4], 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0066A959: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066A95C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066A963: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066A964: pop edi */
    esi = POP32_VAL(esp); /* 0x0066A965: pop esi */
    esp = ebp; /* 0x0066A966: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066A968: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066A969: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0066A970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A970u);

L_0066A970:
    edx = MEM32(ecx + 0x8); /* 0x0066A970: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x0066A973: mov eax, edx */
    PUSH32(esp, esi); /* 0x0066A975: push esi */
    esi = MEM32(ecx + 0x4); /* 0x0066A976: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0066A979: sub eax, esi */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0066A97B: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, 1 */ /* 0x0066A97E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066A9D1; /* 0x0066A981: jae 0x66a9d1 */
L_0066A983:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x0066A983: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0066A985: push edi */
    edi = 0x0FFFFFFFu; /* 0x0066A986: mov edi, 0xfffffff */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x0066A98B: sar esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 4u);
    eax = edi; /* 0x0066A98E: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0066A990: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x0066A992: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066A9A2; /* 0x0066A995: jae 0x66a9a2 */
L_0066A997:
    PUSH32(esp, 0x007DFAB0u); /* 0x0066A997: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0066A99C: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0066A9A2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x0066A9A2: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0066A9A4: inc esi */
    _flag_k = FK_INC;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x0066A9A5: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x0066A9A8: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0066A9AA: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0066A9AA: shr eax, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0066A9AC: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp edi, edx */ /* 0x0066A9AE: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0066A9B0: pop edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066A9C4; /* 0x0066A9B1: jae 0x66a9c4 */
L_0066A9B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0066A9B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x0066A9B5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x0066A9B7: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x0066A9BA: push edx */
    RECOMP_CALL(sub_0066A9E0); /* 0x0066A9BB: call 0x66a9e0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0066A9C0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066A9C1: ret 4 */
L_0066A9C4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0066A9C4: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x0066A9C6: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x0066A9C8: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x0066A9CB: push edx */
    RECOMP_CALL(sub_0066A9E0); /* 0x0066A9CC: call 0x66a9e0 */
    RECOMP_FLAGS_IN();
L_0066A9D1:
    esi = POP32_VAL(esp); /* 0x0066A9D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066A9D2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0066A9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066A9E0u);

L_0066A9E0:
    PUSH32(esp, ebp); /* 0x0066A9E0: push ebp */
    ebp = esp; /* 0x0066A9E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066A9E3: push -1 */
    PUSH32(esp, 0x007BCC40u); /* 0x0066A9E5: push 0x7bcc40 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066A9EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066A9F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0066A9F1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0066A9F4: push ebx */
    PUSH32(esp, esi); /* 0x0066A9F5: push esi */
    PUSH32(esp, edi); /* 0x0066A9F6: push edi */
    eax = MEM32(0x855000); /* 0x0066A9F7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066A9FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066A9FE: push eax */
    eax = ebp + (-0xC); /* 0x0066A9FF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066AA02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0066AA08: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0066AA0B: mov ebx, ecx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x0066AA0D: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0066AA10: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x0066AA12: mov dword ptr [ebp - 0x14], edi */
    esi = MEM32(ebp + 0x8); /* 0x0066AA15: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x0066AA18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066AA42; /* 0x0066AA1A: je 0x66aa42 */
L_0066AA1C:
    /* cmp esi, 0x0FFFFFFFu */ /* 0x0066AA1C: cmp esi, 0xfffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066AA3C; /* 0x0066AA22: ja 0x66aa3c */
L_0066AA24:
    eax = esi; /* 0x0066AA24: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x0066AA26: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x0066AA26: shl eax, 4 */
    PUSH32(esp, eax); /* 0x0066AA29: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0066AA2A: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AA30: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0066AA33: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x0066AA35: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x0066AA38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066AA42; /* 0x0066AA3A: jne 0x66aa42 */
L_0066AA3C:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0066AA3C: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0066AA42:
    MEM32(ebp + (-0x4)) = 0; /* 0x0066AA42: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0066AA49: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066AA4C: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0066AA4F: push edi */
    edx = MEM32(ebx + 0x4); /* 0x0066AA50: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x0066AA53: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_0066AAC0); /* 0x0066AA55: call 0x66aac0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0066AA5A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066AA5D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx); /* 0x0066AA64: mov eax, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x0066AA66: mov ebx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0066AA69: sub ebx, eax */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x0066AA6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066AA79; /* 0x0066AA6D: je 0x66aa79 */
L_0066AA6F:
    PUSH32(esp, eax); /* 0x0066AA6F: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066AA70: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AA76: add esp, 4 */
    _flag_k = FK_ADD;
L_0066AA79:
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x0066AA79: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x0066AA79: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x0066AA7C: add esi, edi */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x0066AA7E: mov eax, dword ptr [ebp - 0x18] */
    MEM32(eax + 0x8) = esi; /* 0x0066AA81: mov dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ebx = ebx & 0xFFFFFFF0u; /* 0x0066AA84: and ebx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x0066AA87: add ebx, edi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = ebx; /* 0x0066AA89: mov dword ptr [eax + 4], ebx */
    MEM32(eax) = edi; /* 0x0066AA8C: mov dword ptr [eax], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066AA8E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066AA91: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066AA98: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066AA99: pop edi */
    esi = POP32_VAL(esp); /* 0x0066AA9A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066AA9B: pop ebx */
    esp = ebp; /* 0x0066AA9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066AA9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066AA9F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0066AAA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066AAA2u);

L_0066AAA2:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0066AAA2: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066AAA5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AAAB: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0066AAAE: push 0 */
    PUSH32(esp, 0); /* 0x0066AAB0: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0066AAB2: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0066AAB7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0066AAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066AAC0u);

L_0066AAC0:
    PUSH32(esp, ebp); /* 0x0066AAC0: push ebp */
    ebp = esp; /* 0x0066AAC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066AAC3: push -1 */
    PUSH32(esp, 0x007BCC65u); /* 0x0066AAC5: push 0x7bcc65 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066AACA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066AAD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066AAD1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0066AAD4: push ebx */
    PUSH32(esp, esi); /* 0x0066AAD5: push esi */
    PUSH32(esp, edi); /* 0x0066AAD6: push edi */
    eax = MEM32(0x855000); /* 0x0066AAD7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066AADC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066AADE: push eax */
    eax = ebp + (-0xC); /* 0x0066AADF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066AAE2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0066AAE8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066AAEB: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + 0x8); /* 0x0066AAF2: mov eax, dword ptr [ebp + 8] */
L_0066AAF5:
    /* cmp ecx, edx */ /* 0x0066AAF5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066AB1B; /* 0x0066AAF7: je 0x66ab1b */
L_0066AAF9:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066AAF9: mov byte ptr [ebp - 4], 1 */
    /* test eax, eax */ /* 0x0066AAFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066AB09; /* 0x0066AAFF: je 0x66ab09 */
L_0066AB01:
    _xmm[0] = xmm_ld(ecx); /* 0x0066AB01: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(eax, _xmm[0]); /* 0x0066AB05: movdqu xmmword ptr [eax], xmm0 */
L_0066AB09:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066AB09: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0066AB0D: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x0066AB10: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0066AB13: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x0066AB16: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_0066AAF5; /* 0x0066AB19: jmp 0x66aaf5 */
L_0066AB1B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066AB1B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066AB22: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066AB25: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066AB2C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066AB2D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066AB2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066AB2F: pop ebx */
    esp = ebp; /* 0x0066AB30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066AB32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066AB33: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066AB34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066AB34u);

L_0066AB34:
    PUSH32(esp, 0); /* 0x0066AB34: push 0 */
    PUSH32(esp, 0); /* 0x0066AB36: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0066AB38: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0066AB3Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0066AB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066AB40u);

L_0066AB40:
    PUSH32(esp, ebp); /* 0x0066AB40: push ebp */
    ebp = esp; /* 0x0066AB41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066AB43: push -1 */
    PUSH32(esp, 0x007824A9u); /* 0x0066AB45: push 0x7824a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066AB4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066AB50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066AB51: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0066AB54: push esi */
    eax = MEM32(0x855000); /* 0x0066AB55: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066AB5A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066AB5C: push eax */
    eax = ebp + (-0xC); /* 0x0066AB5D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066AB60: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066AB66: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0066AB68: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066AB6B: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x0066AB72: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_CALL(sub_00454120); /* 0x0066AB79: call 0x454120 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066AB7E: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x0066AB85: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x0066AB8C: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066AB8E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066AB91: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066AB98: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066AB99: pop esi */
    esp = ebp; /* 0x0066AB9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066AB9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066AB9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066ABA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066ABA0u);

L_0066ABA0:
    PUSH32(esp, ebp); /* 0x0066ABA0: push ebp */
    ebp = esp; /* 0x0066ABA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066ABA3: push -1 */
    PUSH32(esp, 0x00782669u); /* 0x0066ABA5: push 0x782669 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066ABAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066ABB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0066ABB1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0066ABB4: push esi */
    eax = MEM32(0x855000); /* 0x0066ABB5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066ABBA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066ABBC: push eax */
    eax = ebp + (-0xC); /* 0x0066ABBD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066ABC0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066ABC6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0066ABC8: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066ABCB: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x0066ABD2: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_CALL(sub_00546790); /* 0x0066ABD9: call 0x546790 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066ABDE: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x0066ABE5: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x0066ABEC: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066ABEE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066ABF1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066ABF8: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066ABF9: pop esi */
    esp = ebp; /* 0x0066ABFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066ABFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066ABFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066AC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066AC00u);

L_0066AC00:
    PUSH32(esp, ebp); /* 0x0066AC00: push ebp */
    ebp = esp; /* 0x0066AC01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066AC03: push -1 */
    PUSH32(esp, 0x007BCCDCu); /* 0x0066AC05: push 0x7bccdc */
    eax = MEM32(FS_BASE + (0)); /* 0x0066AC0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066AC10: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x0066AC11: sub esp, 0xfc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066AC17: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066AC1C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066AC1E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0066AC21: push ebx */
    PUSH32(esp, esi); /* 0x0066AC22: push esi */
    PUSH32(esp, edi); /* 0x0066AC23: push edi */
    PUSH32(esp, eax); /* 0x0066AC24: push eax */
    eax = ebp + (-0xC); /* 0x0066AC25: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066AC28: mov dword ptr fs:[0], eax */
    SET_LO8(ebx, LO8(edx)); /* 0x0066AC2E: mov bl, dl */
    MEM32(ebp + (-0x48)) = _xmm[1].u32[0]; /* 0x0066AC30: movss dword ptr [ebp - 0x48], xmm1 */
    esi = ecx; /* 0x0066AC35: mov esi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066AC37: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x54)) = esi; /* 0x0066AC3E: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x50)) = 0; /* 0x0066AC41: mov dword ptr [ebp - 0x50], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0066AC48: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066AC96; /* 0x0066AC4A: je 0x66ac96 */
L_0066AC4C:
    /* cmp LO8(ebx), 1 */ /* 0x0066AC4C: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066AC96; /* 0x0066AC4F: je 0x66ac96 */
L_0066AC51:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066AC51: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066AC54: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0066AC56: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007FC438u); /* 0x0066AC59: push 0x7fc438 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066AC5E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0066AC63: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066AC6A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066AC6D: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0066AC6F: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007FC460u); /* 0x0066AC72: push 0x7fc460 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066AC77: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066AC7C: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066AC80: mov byte ptr [ebp - 4], 0 */
    ecx = 0x56u; /* 0x0066AC84: mov ecx, 0x56 */
    RECOMP_CALL(sub_00668DA0); /* 0x0066AC89: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x48)); _xmm[1].u64[1] = 0; /* 0x0066AC8E: movss xmm1, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066AC93: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066AC96:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0066AC96: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0066AC99: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0066ACA1; /* 0x0066AC9C: jbe 0x66aca1 */
L_0066AC9E:
    _xmm[1] = _xmm[0]; /* 0x0066AC9E: movaps xmm1, xmm0 */
L_0066ACA1:
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0066ACA1: cvttss2si ecx, xmm1 */
    edi = 0x3Cu; /* 0x0066ACA5: mov edi, 0x3c */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066ACAA: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x0066ACAD: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0066ACAF: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x0066ACB0: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = 0x88888889u; /* 0x0066ACB2: mov eax, 0x88888889 */
    edi = edx; /* 0x0066ACB7: mov edi, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x0066ACB9: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x48)) = edi; /* 0x0066ACBB: mov dword ptr [ebp - 0x48], edi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0066ACBE: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _xmm[0].u64[0] = (uint32_t)(edi); _xmm[0].u64[1] = 0; /* 0x0066ACC0: movd xmm0, edi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0066ACC4: cvtdq2ps xmm0, xmm0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0066ACC7: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x108); /* 0x0066ACC9: lea ecx, [ebp - 0x108] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0066ACCF: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0066ACD2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0066ACD4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0066ACD4: shr eax, 0x1f */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0066ACD7: subss xmm1, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0066ACDB: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x0066ACDD: mov dword ptr [ebp - 0x44], eax */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0066ACE0: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0066ACE4: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x8094A8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0066ACE7: mulss xmm0, dword ptr [0x8094a8] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0066ACEF: subss xmm1, xmm0 */
    { float _s = sse_f32(MEM32(0x809704)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0066ACF3: mulss xmm1, dword ptr [0x809704] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0066ACFB: cvttss2si eax, xmm1 */
    MEM32(ebp + (-0x4C)) = eax; /* 0x0066ACFF: mov dword ptr [ebp - 0x4c], eax */
    RECOMP_CALL(sub_0047C9C0); /* 0x0066AD02: call 0x47c9c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x0066AD07: mov dword ptr [ebp - 4], 3 */
    ecx = ebp + (-0xF8); /* 0x0066AD0E: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x0066AD14: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x7CC36C)); /* 0x0066AD17: call dword ptr [0x7cc36c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0066AD1D: push esi */
    ecx = ebp + (-0x108); /* 0x0066AD1E: lea ecx, [ebp - 0x108] */
    RECOMP_CALL(sub_0047CA90); /* 0x0066AD24: call 0x47ca90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0066AD29: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AD2B: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0066AD32: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0066AD35: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0066AD3C: push 0x7cd0c4 */
    MEM32(ebp + (-0x50)) = 1; /* 0x0066AD41: mov dword ptr [ebp - 0x50], 1 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066AD48: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AD4F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066AD56: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066AD5A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0066AD5F: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0xF0); /* 0x0066AD63: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0044E5B0); /* 0x0066AD69: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066AD6E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x0066AD72: lea ecx, [ebp - 0x28] */
    eax = MEM32(ebp + (-0xB4)); /* 0x0066AD75: mov eax, dword ptr [ebp - 0xb4] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x28)); } /* 0x0066AD7B: cmovae ecx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xB4)) = eax; /* 0x0066AD7F: mov dword ptr [ebp - 0xb4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0066AD85: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xB8)) = 0; /* 0x0066AD88: mov dword ptr [ebp - 0xb8], 0 */
    /* test eax, eax */ /* 0x0066AD92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066ADA3; /* 0x0066AD94: je 0x66ada3 */
L_0066AD96:
    PUSH32(esp, eax); /* 0x0066AD96: push eax */
    PUSH32(esp, ecx); /* 0x0066AD97: push ecx */
    ecx = ebp + (-0xF0); /* 0x0066AD98: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0044E6C0); /* 0x0066AD9E: call 0x44e6c0 */
    RECOMP_FLAGS_IN();
L_0066ADA3:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066ADA3: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066ADA7: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x0066ADAB: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066ADBB; /* 0x0066ADB1: jb 0x66adbb */
L_0066ADB3:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066ADB3: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0066ADB6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066ADB8: add esp, 4 */
    _flag_k = FK_ADD;
L_0066ADBB:
    /* cmp MEM32(ebp + (-0x44)), 0xAu */ /* 0x0066ADBB: cmp dword ptr [ebp - 0x44], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066ADBF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066ADC6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066ADCD: mov byte ptr [ebp - 0x28], 0 */
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066AE3C; /* 0x0066ADD1: jge 0x66ae3c */
L_0066ADD3:
    PUSH32(esp, esi); /* 0x0066ADD3: push esi */
    edx = 0x007CE2BCu; /* 0x0066ADD4: mov edx, 0x7ce2bc */
    ecx = ebp + (-0x28); /* 0x0066ADD9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0042A130); /* 0x0066ADDC: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066ADE1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x0066ADE4: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066ADE7: mov byte ptr [ebp - 4], 5 */
    /* cmp esi, eax */ /* 0x0066ADEB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066AE18; /* 0x0066ADED: je 0x66ae18 */
L_0066ADEF:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0066ADEF: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066ADFF; /* 0x0066ADF3: jb 0x66adff */
L_0066ADF5:
    PUSH32(esp, MEM32(esi)); /* 0x0066ADF5: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0066ADF7: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x0066ADF9: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066ADFC: add esp, 4 */
    _flag_k = FK_ADD;
L_0066ADFF:
    MEM32(esi + 0x14) = 0xFu; /* 0x0066ADFF: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x0066AE06: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x0066AE08: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0066AE0F: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x0066AE10: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066AE13: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0066AE18:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066AE18: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066AE1C: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066AE2A; /* 0x0066AE20: jb 0x66ae2a */
L_0066AE22:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066AE22: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0066AE25: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AE27: add esp, 4 */
    _flag_k = FK_ADD;
L_0066AE2A:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066AE2A: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AE31: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066AE38: mov byte ptr [ebp - 0x28], 0 */
L_0066AE3C:
    PUSH32(esp, 1); /* 0x0066AE3C: push 1 */
    PUSH32(esp, 0x007EF7D4u); /* 0x0066AE3E: push 0x7ef7d4 */
    ecx = esi; /* 0x0066AE43: mov ecx, esi */
    RECOMP_CALL(sub_004199E0); /* 0x0066AE45: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x0066AE4A: mov eax, dword ptr [ebp - 0x48] */
    /* cmp eax, 0xAu */ /* 0x0066AE4D: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066AE63; /* 0x0066AE50: jge 0x66ae63 */
L_0066AE52:
    PUSH32(esp, 1); /* 0x0066AE52: push 1 */
    PUSH32(esp, 0x007CE2BCu); /* 0x0066AE54: push 0x7ce2bc */
    ecx = esi; /* 0x0066AE59: mov ecx, esi */
    RECOMP_CALL(sub_004199E0); /* 0x0066AE5B: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x0066AE60: mov eax, dword ptr [ebp - 0x48] */
L_0066AE63:
    PUSH32(esp, eax); /* 0x0066AE63: push eax */
    ecx = ebp + (-0xF8); /* 0x0066AE64: lea ecx, [ebp - 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC36C)); /* 0x0066AE6A: call dword ptr [0x7cc36c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x0066AE70: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0066AE73: push eax */
    ecx = ebp + (-0x108); /* 0x0066AE74: lea ecx, [ebp - 0x108] */
    RECOMP_CALL(sub_0047CA90); /* 0x0066AE7A: call 0x47ca90 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066AE7F: mov byte ptr [ebp - 4], 6 */
    ecx = esi; /* 0x0066AE83: mov ecx, esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066AE85: push -1 */
    PUSH32(esp, 0); /* 0x0066AE87: push 0 */
    PUSH32(esp, eax); /* 0x0066AE89: push eax */
    RECOMP_CALL(sub_00419920); /* 0x0066AE8A: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066AE8F: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0066AE93: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066AEA1; /* 0x0066AE97: jb 0x66aea1 */
L_0066AE99:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0066AE99: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0066AE9C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AE9E: add esp, 4 */
    _flag_k = FK_ADD;
L_0066AEA1:
    PUSH32(esp, 0); /* 0x0066AEA1: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AEA3: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0066AEAA: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0066AEAD: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0066AEB4: push 0x7cd0c4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0066AEB9: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066AEC0: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0066AEC7: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066AECB: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AED2: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066AED9: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066AEDD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0066AEE2: mov byte ptr [ebp - 4], 7 */
    ecx = ebp + (-0xF0); /* 0x0066AEE6: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0044E5B0); /* 0x0066AEEC: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066AEF1: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x0066AEF5: lea ecx, [ebp - 0x28] */
    eax = MEM32(ebp + (-0xB4)); /* 0x0066AEF8: mov eax, dword ptr [ebp - 0xb4] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x28)); } /* 0x0066AEFE: cmovae ecx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xB4)) = eax; /* 0x0066AF02: mov dword ptr [ebp - 0xb4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0066AF08: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xB8)) = 0; /* 0x0066AF0B: mov dword ptr [ebp - 0xb8], 0 */
    /* test eax, eax */ /* 0x0066AF15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066AF26; /* 0x0066AF17: je 0x66af26 */
L_0066AF19:
    PUSH32(esp, eax); /* 0x0066AF19: push eax */
    PUSH32(esp, ecx); /* 0x0066AF1A: push ecx */
    ecx = ebp + (-0xF0); /* 0x0066AF1B: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0044E6C0); /* 0x0066AF21: call 0x44e6c0 */
    RECOMP_FLAGS_IN();
L_0066AF26:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066AF26: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066AF2A: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066AF38; /* 0x0066AF2E: jb 0x66af38 */
L_0066AF30:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066AF30: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0066AF33: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AF35: add esp, 4 */
    _flag_k = FK_ADD;
L_0066AF38:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066AF38: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066AF3F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066AF46: mov byte ptr [ebp - 0x28], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0066AF4A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066AFD9; /* 0x0066AF4C: jne 0x66afd9 */
L_0066AF52:
    PUSH32(esp, 1); /* 0x0066AF52: push 1 */
    PUSH32(esp, 0x007DF180u); /* 0x0066AF54: push 0x7df180 */
    ecx = esi; /* 0x0066AF59: mov ecx, esi */
    RECOMP_CALL(sub_004199E0); /* 0x0066AF5B: call 0x4199e0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4C)); /* 0x0066AF60: mov ebx, dword ptr [ebp - 0x4c] */
    /* cmp ebx, 0x64u */ /* 0x0066AF63: cmp ebx, 0x64 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066AF76; /* 0x0066AF66: jge 0x66af76 */
L_0066AF68:
    PUSH32(esp, 1); /* 0x0066AF68: push 1 */
    PUSH32(esp, 0x007CE2BCu); /* 0x0066AF6A: push 0x7ce2bc */
    ecx = esi; /* 0x0066AF6F: mov ecx, esi */
    RECOMP_CALL(sub_004199E0); /* 0x0066AF71: call 0x4199e0 */
    RECOMP_FLAGS_IN();
L_0066AF76:
    /* cmp ebx, 0xAu */ /* 0x0066AF76: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0066AF89; /* 0x0066AF79: jge 0x66af89 */
L_0066AF7B:
    PUSH32(esp, 1); /* 0x0066AF7B: push 1 */
    PUSH32(esp, 0x007CE2BCu); /* 0x0066AF7D: push 0x7ce2bc */
    ecx = esi; /* 0x0066AF82: mov ecx, esi */
    RECOMP_CALL(sub_004199E0); /* 0x0066AF84: call 0x4199e0 */
    RECOMP_FLAGS_IN();
L_0066AF89:
    PUSH32(esp, ebx); /* 0x0066AF89: push ebx */
    ecx = ebp + (-0xF8); /* 0x0066AF8A: lea ecx, [ebp - 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC36C)); /* 0x0066AF90: call dword ptr [0x7cc36c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x0066AF96: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0066AF99: push eax */
    ecx = ebp + (-0x108); /* 0x0066AF9A: lea ecx, [ebp - 0x108] */
    RECOMP_CALL(sub_0047CA90); /* 0x0066AFA0: call 0x47ca90 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0066AFA5: mov byte ptr [ebp - 4], 8 */
    ecx = esi; /* 0x0066AFA9: mov ecx, esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066AFAB: push -1 */
    PUSH32(esp, 0); /* 0x0066AFAD: push 0 */
    PUSH32(esp, eax); /* 0x0066AFAF: push eax */
    RECOMP_CALL(sub_00419920); /* 0x0066AFB0: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066AFB5: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0066AFB9: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066AFC7; /* 0x0066AFBD: jb 0x66afc7 */
L_0066AFBF:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0066AFBF: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0066AFC2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066AFC4: add esp, 4 */
    _flag_k = FK_ADD;
L_0066AFC7:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0066AFC7: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066AFCE: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0066AFD5: mov byte ptr [ebp - 0x40], 0 */
L_0066AFD9:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066AFD9: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0xA0); /* 0x0066AFDD: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_0044DCF0); /* 0x0066AFE3: call 0x44dcf0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA0); /* 0x0066AFE8: lea ecx, [ebp - 0xa0] */
    RECOMP_ICALL(MEM32(0x7CC3F4)); /* 0x0066AFEE: call dword ptr [0x7cc3f4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x0066AFF4: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066AFF6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066AFF9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B000: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066B001: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B002: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066B003: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066B004: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066B007: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066B009: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066B00E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B010: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B011: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B020u);

L_0066B020:
    PUSH32(esp, ebp); /* 0x0066B020: push ebp */
    ebp = esp; /* 0x0066B021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B023: push -1 */
    PUSH32(esp, 0x007ACFC0u); /* 0x0066B025: push 0x7acfc0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B02A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B030: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0066B031: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0066B034: push ebx */
    PUSH32(esp, esi); /* 0x0066B035: push esi */
    PUSH32(esp, edi); /* 0x0066B036: push edi */
    eax = MEM32(0x855000); /* 0x0066B037: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B03C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066B03E: push eax */
    eax = ebp + (-0xC); /* 0x0066B03F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B042: mov dword ptr fs:[0], eax */
    SET_LO8(eax, LO8(edx)); /* 0x0066B048: mov al, dl */
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(eax)); /* 0x0066B04A: mov byte ptr [ebp - 0xd], al */
    edi = ecx; /* 0x0066B04D: mov edi, ecx */
    _xmm[1] = _xmm[0]; /* 0x0066B04F: movaps xmm1, xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[1].u32[0]; /* 0x0066B052: movss dword ptr [ebp - 0x14], xmm1 */
    /* test LO8(eax), LO8(eax) */ /* 0x0066B057: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066B0A7; /* 0x0066B059: je 0x66b0a7 */
L_0066B05B:
    /* cmp LO8(eax), 1 */ /* 0x0066B05B: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066B0A7; /* 0x0066B05D: je 0x66b0a7 */
L_0066B05F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B05F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B062: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x0066B064: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007FC438u); /* 0x0066B067: push 0x7fc438 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B06C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066B071: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B078: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B07B: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x0066B07D: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007FC460u); /* 0x0066B080: push 0x7fc460 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B085: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066B08A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066B08E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x8Au; /* 0x0066B095: mov ecx, 0x8a */
    RECOMP_CALL(sub_00668DA0); /* 0x0066B09A: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x14)); _xmm[1].u64[1] = 0; /* 0x0066B09F: movss xmm1, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066B0A4: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066B0A7:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0066B0A7: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0066B0AA: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0066B0B2; /* 0x0066B0AD: jbe 0x66b0b2 */
L_0066B0AF:
    _xmm[1] = _xmm[0]; /* 0x0066B0AF: movaps xmm1, xmm0 */
L_0066B0B2:
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0066B0B2: cvttss2si ecx, xmm1 */
    esi = 0x3Cu; /* 0x0066B0B6: mov esi, 0x3c */
    eax = ecx; /* 0x0066B0BB: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0066B0BD: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x0066B0BE: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = 0x88888889u; /* 0x0066B0C0: mov eax, 0x88888889 */
    esi = edx; /* 0x0066B0C5: mov esi, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0066B0C7: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = esi; /* 0x0066B0C9: mov dword ptr [ebp - 0x14], esi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0066B0CC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _xmm[0].u64[0] = (uint32_t)(esi); _xmm[0].u64[1] = 0; /* 0x0066B0CE: movd xmm0, esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0066B0D2: cvtdq2ps xmm0, xmm0 */
    eax = 0x66666667u; /* 0x0066B0D5: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0066B0DA: add edx, ecx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0066B0DC: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = edx; /* 0x0066B0DF: mov ebx, edx */
    if (31u) _cf = (((ebx) >> 30) & 1u); /* 0x0066B0E1: shr ebx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ebx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 31u; /* 0x0066B0E1: shr ebx, 0x1f */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0066B0E4: subss xmm1, xmm0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x0066B0E8: add ebx, edx */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0066B0EA: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _xmm[0].u64[0] = (uint32_t)(ebx); _xmm[0].u64[1] = 0; /* 0x0066B0EC: movd xmm0, ebx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0066B0F0: cvtdq2ps xmm0, xmm0 */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0066B0F3: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ecx = edx; /* 0x0066B0F6: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x0066B0F8: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x0066B0F8: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x0066B0FB: add ecx, edx */
    _flag_k = FK_ADD;
    { float _s = sse_f32(MEM32(0x8094A8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0066B0FD: mulss xmm0, dword ptr [0x8094a8] */
    eax = ecx + 0x30; /* 0x0066B105: lea eax, [ecx + 0x30] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x0066B108: mov byte ptr [edi], al */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0066B10A: subss xmm1, xmm0 */
    SET_LO8(eax, LO8(ecx)); /* 0x0066B10E: mov al, cl */
    if (2u) _cf = (((LO8(ecx)) >> 6) & 1u); /* 0x0066B110: shl cl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 2u); /* 0x0066B110: shl cl, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x0066B113: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x0066B115: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(eax)); /* 0x0066B117: sub bl, al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x66666667u; /* 0x0066B119: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x30u); /* 0x0066B11E: add bl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { float _s = sse_f32(MEM32(0x809704)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0066B121: mulss xmm1, dword ptr [0x809704] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ebx)); /* 0x0066B129: mov byte ptr [edi + 1], bl */
    ebx = esi; /* 0x0066B12C: mov ebx, esi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0066B12E: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(edi + 0x2) = (uint8_t)(0x27u); /* 0x0066B130: mov byte ptr [edi + 2], 0x27 */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0066B134: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ecx = edx; /* 0x0066B137: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x0066B139: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x0066B139: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x0066B13C: add ecx, edx */
    _flag_k = FK_ADD;
    eax = ecx + 0x30; /* 0x0066B13E: lea eax, [ecx + 0x30] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x0066B141: mov byte ptr [edi + 3], al */
    SET_LO8(eax, LO8(ecx)); /* 0x0066B144: mov al, cl */
    if (2u) _cf = (((LO8(ecx)) >> 6) & 1u); /* 0x0066B146: shl cl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 2u); /* 0x0066B146: shl cl, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x0066B149: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x0066B14B: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(eax)); /* 0x0066B14D: sub bl, al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 5; /* 0x0066B14F: mov eax, 5 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x30u); /* 0x0066B154: add bl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebp + (-0xD)), 0 */ /* 0x0066B157: cmp byte ptr [ebp - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(edi + 0x4) = (uint8_t)(LO8(ebx)); /* 0x0066B15B: mov byte ptr [edi + 4], bl */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066B1B1; /* 0x0066B15E: jne 0x66b1b1 */
L_0066B160:
    ebx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0066B160: cvttss2si ebx, xmm1 */
    eax = 0x51EB851Fu; /* 0x0066B164: mov eax, 0x51eb851f */
    MEM8(edi + 0x5) = (uint8_t)(0x2Eu); /* 0x0066B169: mov byte ptr [edi + 5], 0x2e */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0066B16D: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0066B16F: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0066B172: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0066B174: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0066B174: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0066B177: add eax, edx */
    _flag_k = FK_ADD;
    ecx = eax + 0x30; /* 0x0066B179: lea ecx, [eax + 0x30] */
    MEM8(edi + 0x6) = (uint8_t)(LO8(ecx)); /* 0x0066B17C: mov byte ptr [edi + 6], cl */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xFFFFFF9Cu); /* 0x0066B17F: imul ecx, eax, -0x64 */
    eax = 0x66666667u; /* 0x0066B182: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x0066B187: add ebx, ecx */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0066B189: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0066B18B: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ecx = edx; /* 0x0066B18E: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x0066B190: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x0066B190: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x0066B193: add ecx, edx */
    _flag_k = FK_ADD;
    eax = ecx + 0x30; /* 0x0066B195: lea eax, [ecx + 0x30] */
    MEM8(edi + 0x7) = (uint8_t)(LO8(eax)); /* 0x0066B198: mov byte ptr [edi + 7], al */
    SET_LO8(eax, LO8(ecx)); /* 0x0066B19B: mov al, cl */
    if (2u) _cf = (((LO8(ecx)) >> 6) & 1u); /* 0x0066B19D: shl cl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 2u); /* 0x0066B19D: shl cl, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x0066B1A0: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x0066B1A2: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(eax)); /* 0x0066B1A4: sub bl, al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 9; /* 0x0066B1A6: mov eax, 9 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x30u); /* 0x0066B1AB: add bl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x8) = (uint8_t)(LO8(ebx)); /* 0x0066B1AE: mov byte ptr [edi + 8], bl */
L_0066B1B1:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0066B1B1: mov byte ptr [eax + edi], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066B1B5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066B1B8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B1BF: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066B1C0: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B1C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066B1C2: pop ebx */
    esp = ebp; /* 0x0066B1C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B1C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B1C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B1D0u);

L_0066B1D0:
    PUSH32(esp, esi); /* 0x0066B1D0: push esi */
    esi = ecx; /* 0x0066B1D1: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066B1D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0066B1D5: push edi */
    edx = 1; /* 0x0066B1D6: mov edx, 1 */
    edi = MEM32(esi + 0x10); /* 0x0066B1DB: mov edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0066B1DE: dec edi */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x0066B1DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066B1FF; /* 0x0066B1E1: jle 0x66b1ff */
L_0066B1E3:
    PUSH32(esp, ebx); /* 0x0066B1E3: push ebx */
    ebx = MEM32(esi + 0x14); /* 0x0066B1E4: mov ebx, dword ptr [esi + 0x14] */
L_0066B1E7:
    /* cmp ebx, 0x10u */ /* 0x0066B1E7: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B1F0; /* 0x0066B1EA: jb 0x66b1f0 */
L_0066B1EC:
    ecx = MEM32(esi); /* 0x0066B1EC: mov ecx, dword ptr [esi] */
    goto L_0066B1F2; /* 0x0066B1EE: jmp 0x66b1f2 */
L_0066B1F0:
    ecx = esi; /* 0x0066B1F0: mov ecx, esi */
L_0066B1F2:
    /* cmp MEM8(ecx + eax), 0x7Cu */ /* 0x0066B1F2: cmp byte ptr [ecx + eax], 0x7c */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x7Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066B1F9; /* 0x0066B1F6: jne 0x66b1f9 */
L_0066B1F8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0066B1F8: inc edx */
    _flag_k = FK_INC;
L_0066B1F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066B1F9: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x0066B1FA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_0066B1E7; /* 0x0066B1FC: jl 0x66b1e7 */
L_0066B1FE:
    ebx = POP32_VAL(esp); /* 0x0066B1FE: pop ebx */
L_0066B1FF:
    edi = POP32_VAL(esp); /* 0x0066B1FF: pop edi */
    eax = edx; /* 0x0066B200: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x0066B202: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B203: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B210u);

L_0066B210:
    PUSH32(esp, ebp); /* 0x0066B210: push ebp */
    ebp = esp; /* 0x0066B211: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0066B213: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x0066B214: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x0066B217: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0066B250; /* 0x0066B219: jle 0x66b250 */
L_0066B21B:
    PUSH32(esp, esi); /* 0x0066B21B: push esi */
    edx = ebp + 0xC; /* 0x0066B21C: lea edx, [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0066B21F: push edi */
L_0066B220:
    eax = MEM32(edx + 0x4); /* 0x0066B220: mov eax, dword ptr [edx + 4] */
    edx = edx + 0x4; /* 0x0066B223: lea edx, [edx + 4] */
    esi = eax; /* 0x0066B226: mov esi, eax */
L_0066B228:
    SET_LO8(ecx, MEM8(eax)); /* 0x0066B228: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066B22A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0066B22B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B228; /* 0x0066B22D: jne 0x66b228 */
L_0066B22F:
    edi = MEM32(ebp + 0x8); /* 0x0066B22F: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0066B232: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0066B234: dec edi */
    _flag_k = FK_DEC;
L_0066B235:
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x0066B235: mov cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0066B238: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0066B239: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B235; /* 0x0066B23B: jne 0x66b235 */
L_0066B23D:
    ecx = eax; /* 0x0066B23D: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x0066B23F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x0066B23F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x0066B242: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x0066B244: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x0066B246: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x0066B249: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0066B24B: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0066B220; /* 0x0066B24C: jne 0x66b220 */
L_0066B24E:
    edi = POP32_VAL(esp); /* 0x0066B24E: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B24F: pop esi */
L_0066B250:
    ebx = POP32_VAL(esp); /* 0x0066B250: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0066B251: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B252: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B260u);

L_0066B260:
    PUSH32(esp, ebp); /* 0x0066B260: push ebp */
    ebp = esp; /* 0x0066B261: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B263: push -1 */
    PUSH32(esp, 0x00783000u); /* 0x0066B265: push 0x783000 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B26A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B270: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0066B271: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0066B274: push ebx */
    PUSH32(esp, esi); /* 0x0066B275: push esi */
    PUSH32(esp, edi); /* 0x0066B276: push edi */
    eax = MEM32(0x855000); /* 0x0066B277: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B27C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066B27E: push eax */
    eax = ebp + (-0xC); /* 0x0066B27F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B282: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0xC); /* 0x0066B288: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x0066B28B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B2CE; /* 0x0066B28D: jne 0x66b2ce */
L_0066B28F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B28F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B292: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0066B294: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FC438u); /* 0x0066B297: push 0x7fc438 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B29C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x0066B2A1: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B2A4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B2A7: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0066B2A9: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FC434u); /* 0x0066B2AC: push 0x7fc434 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B2B1: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066B2B6: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066B2BA: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xF9u; /* 0x0066B2C1: mov ecx, 0xf9 */
    RECOMP_CALL(sub_00668DA0); /* 0x0066B2C6: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066B2CB: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066B2CE:
    ebx = MEM32(ebp + 0x8); /* 0x0066B2CE: mov ebx, dword ptr [ebp + 8] */
    edx = ebx; /* 0x0066B2D1: mov edx, ebx */
    ecx = MEM32(ebp + 0x10); /* 0x0066B2D3: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0066B2D6: sub edx, ecx */
    _flag_k = FK_CMP;
    goto L_0066B2E0; /* 0x0066B2D8: jmp 0x66b2e0 */
L_0066B2E0:
    SET_LO8(eax, MEM8(ecx)); /* 0x0066B2E0: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x0066B2E2: lea ecx, [ecx + 1] */
    MEM8(edx + ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0066B2E5: mov byte ptr [edx + ecx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066B2E9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B2E0; /* 0x0066B2EB: jne 0x66b2e0 */
L_0066B2ED:
    /* cmp esi, 1 */ /* 0x0066B2ED: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0066B32F; /* 0x0066B2F0: jle 0x66b32f */
L_0066B2F2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0066B2F2: dec esi */
    _flag_k = FK_DEC;
    edx = ebp + 0x10; /* 0x0066B2F3: lea edx, [ebp + 0x10] */
    MEM32(ebp + 0x8) = esi; /* 0x0066B2F6: mov dword ptr [ebp + 8], esi */
    esp = esp; /* 0x0066B2F9: lea esp, [esp] */
L_0066B300:
    eax = MEM32(edx + 0x4); /* 0x0066B300: mov eax, dword ptr [edx + 4] */
    edx = edx + 0x4; /* 0x0066B303: lea edx, [edx + 4] */
    esi = eax; /* 0x0066B306: mov esi, eax */
L_0066B308:
    SET_LO8(ecx, MEM8(eax)); /* 0x0066B308: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066B30A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0066B30B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B308; /* 0x0066B30D: jne 0x66b308 */
L_0066B30F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0066B30F: sub eax, esi */
    _flag_k = FK_CMP;
    edi = ebx + (-0x1); /* 0x0066B311: lea edi, [ebx - 1] */
L_0066B314:
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x0066B314: mov cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0066B317: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0066B318: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B314; /* 0x0066B31A: jne 0x66b314 */
L_0066B31C:
    ecx = eax; /* 0x0066B31C: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x0066B31E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x0066B31E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x0066B321: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x0066B323: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x0066B325: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x0066B328: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x0066B32B: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0066B300; /* 0x0066B32D: jne 0x66b300 */
L_0066B32F:
    ecx = MEM32(ebp + (-0xC)); /* 0x0066B32F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066B332: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B339: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066B33A: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B33B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066B33C: pop ebx */
    esp = ebp; /* 0x0066B33D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B33F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B340: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B350u);

L_0066B350:
    PUSH32(esp, ebp); /* 0x0066B350: push ebp */
    ebp = esp; /* 0x0066B351: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B353: push -1 */
    PUSH32(esp, 0x007BCD41u); /* 0x0066B355: push 0x7bcd41 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B35A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B360: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0066B361: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066B364: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B369: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066B36B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0066B36E: push ebx */
    PUSH32(esp, esi); /* 0x0066B36F: push esi */
    PUSH32(esp, edi); /* 0x0066B370: push edi */
    PUSH32(esp, eax); /* 0x0066B371: push eax */
    eax = ebp + (-0xC); /* 0x0066B372: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B375: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066B37B: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x0066B37D: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B380: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B383: mov ecx, esp */
    MEM32(ebp + (-0x44)) = 0; /* 0x0066B385: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x48)) = esp; /* 0x0066B38C: mov dword ptr [ebp - 0x48], esp */
    MEM32(ebp + (-0x4C)) = esi; /* 0x0066B38F: mov dword ptr [ebp - 0x4c], esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B392: push -1 */
    PUSH32(esp, 0); /* 0x0066B394: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066B396: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0066B39D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edx); /* 0x0066B3A4: push edx */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066B3A5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0066B3A8: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0066B3AD: mov dword ptr [ebp - 4], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066B3B4: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x28); /* 0x0066B3B8: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_006791D0); /* 0x0066B3BB: call 0x6791d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0066B3C0: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 2; /* 0x0066B3C3: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x0066B3CA: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066B405; /* 0x0066B3CE: jne 0x66b405 */
L_0066B3D0:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x0066B3D0: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066B405; /* 0x0066B3D4: jne 0x66b405 */
L_0066B3D6:
    PUSH32(esp, 0x007F7FD0u); /* 0x0066B3D6: push 0x7f7fd0 */
    ecx = esi; /* 0x0066B3DB: mov ecx, esi */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B3DD: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = 1; /* 0x0066B3E2: mov dword ptr [ebp - 0x44], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066B3E9: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066B3ED: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B4AD; /* 0x0066B3F1: jb 0x66b4ad */
L_0066B3F7:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066B3F7: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066B3FA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    goto L_0066B4AA; /* 0x0066B400: jmp 0x66b4aa */
L_0066B405:
    edi = MEM32(0x7CC694); /* 0x0066B405: mov edi, dword ptr [0x7cc694] */
    /* test ebx, ebx */ /* 0x0066B40B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066B478; /* 0x0066B40D: je 0x66b478 */
L_0066B40F:
    PUSH32(esp, ebx); /* 0x0066B40F: push ebx */
    edx = ebp + (-0x28); /* 0x0066B410: lea edx, [ebp - 0x28] */
    ecx = ebp + (-0x40); /* 0x0066B413: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_00677670); /* 0x0066B416: call 0x677670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B41B: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x0066B41E: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066B420: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x28); /* 0x0066B424: lea eax, [ebp - 0x28] */
    /* cmp eax, ebx */ /* 0x0066B427: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066B454; /* 0x0066B429: je 0x66b454 */
L_0066B42B:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066B42B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B439; /* 0x0066B42F: jb 0x66b439 */
L_0066B431:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066B431: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0066B434: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B436: add esp, 4 */
    _flag_k = FK_ADD;
L_0066B439:
    PUSH32(esp, ebx); /* 0x0066B439: push ebx */
    ecx = ebp + (-0x28); /* 0x0066B43A: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066B43D: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066B444: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066B44B: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066B44F: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0066B454:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066B454: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0066B458: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B466; /* 0x0066B45C: jb 0x66b466 */
L_0066B45E:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0066B45E: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0066B461: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B463: add esp, 4 */
    _flag_k = FK_ADD;
L_0066B466:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0066B466: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066B46D: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0066B474: mov byte ptr [ebp - 0x40], 0 */
L_0066B478:
    eax = ebp + (-0x28); /* 0x0066B478: lea eax, [ebp - 0x28] */
    MEM32(esi + 0x14) = 0xFu; /* 0x0066B47B: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0066B482: mov dword ptr [esi + 0x10], 0 */
    ecx = esi; /* 0x0066B489: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0066B48B: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x0066B48C: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066B48F: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = 1; /* 0x0066B494: mov dword ptr [ebp - 0x44], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066B49B: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066B49F: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B4AD; /* 0x0066B4A3: jb 0x66b4ad */
L_0066B4A5:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066B4A5: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0066B4A8: call edi */
    RECOMP_FLAGS_IN();
L_0066B4AA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B4AA: add esp, 4 */
    _flag_k = FK_ADD;
L_0066B4AD:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066B4AD: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066B4B4: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066B4BB: mov byte ptr [ebp - 0x28], 0 */
    eax = esi; /* 0x0066B4BF: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066B4C1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066B4C4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B4CB: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066B4CC: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B4CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066B4CE: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066B4CF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066B4D2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066B4D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066B4D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B4DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B4DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B4E0u);

L_0066B4E0:
    PUSH32(esp, ebp); /* 0x0066B4E0: push ebp */
    ebp = esp; /* 0x0066B4E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x0066B4E3: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066B4E9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B4EE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0066B4F0: mov dword ptr [ebp - 4], eax */
    eax = edx; /* 0x0066B4F3: mov eax, edx */
    MEM32(ebp + (-0x104)) = 0; /* 0x0066B4F5: mov dword ptr [ebp - 0x104], 0 */
    PUSH32(esp, ebx); /* 0x0066B4FF: push ebx */
    PUSH32(esp, esi); /* 0x0066B500: push esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0066B501: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x108)) = eax; /* 0x0066B504: mov dword ptr [ebp - 0x108], eax */
    PUSH32(esp, edi); /* 0x0066B50A: push edi */
    xmm_st(eax, _xmm[0]); /* 0x0066B50B: movdqu xmmword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x0066B50F: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x100)) = 0; /* 0x0066B511: mov dword ptr [ebp - 0x100], 0 */
    edi = ecx; /* 0x0066B51B: mov edi, ecx */
    MEM32(ebp + (-0xFC)) = 0; /* 0x0066B51D: mov dword ptr [ebp - 0xfc], 0 */
    MEM32(ebp + (-0xF8)) = 0; /* 0x0066B527: mov dword ptr [ebp - 0xf8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0066B531: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xF4)) = 0; /* 0x0066B533: mov dword ptr [ebp - 0xf4], 0 */
    MEM32(ebp + (-0xF0)) = 0; /* 0x0066B53D: mov dword ptr [ebp - 0xf0], 0 */
    MEM32(ebp + (-0xEC)) = 0; /* 0x0066B547: mov dword ptr [ebp - 0xec], 0 */
    MEM32(ebp + (-0xE8)) = 0; /* 0x0066B551: mov dword ptr [ebp - 0xe8], 0 */
    MEM32(ebp + (-0xE4)) = 0; /* 0x0066B55B: mov dword ptr [ebp - 0xe4], 0 */
    MEM32(ebp + (-0xE0)) = 0; /* 0x0066B565: mov dword ptr [ebp - 0xe0], 0 */
    MEM32(ebp + (-0xDC)) = 0; /* 0x0066B56F: mov dword ptr [ebp - 0xdc], 0 */
    MEM32(ebp + (-0xD8)) = 0; /* 0x0066B579: mov dword ptr [ebp - 0xd8], 0 */
    MEM32(ebp + (-0xD4)) = 0x03020100u; /* 0x0066B583: mov dword ptr [ebp - 0xd4], 0x3020100 */
    MEM32(ebp + (-0xD0)) = 0x07060504u; /* 0x0066B58D: mov dword ptr [ebp - 0xd0], 0x7060504 */
    MEM32(ebp + (-0xCC)) = 0x908u; /* 0x0066B597: mov dword ptr [ebp - 0xcc], 0x908 */
    MEM32(ebp + (-0xC8)) = 0; /* 0x0066B5A1: mov dword ptr [ebp - 0xc8], 0 */
    MEM32(ebp + (-0xC4)) = 0x0C0B0A00u; /* 0x0066B5AB: mov dword ptr [ebp - 0xc4], 0xc0b0a00 */
    MEM32(ebp + (-0xC0)) = 0x000F0E0Du; /* 0x0066B5B5: mov dword ptr [ebp - 0xc0], 0xf0e0d */
    MEM32(ebp + (-0xBC)) = 0; /* 0x0066B5BF: mov dword ptr [ebp - 0xbc], 0 */
    MEM32(ebp + (-0xB8)) = 0; /* 0x0066B5C9: mov dword ptr [ebp - 0xb8], 0 */
    MEM32(ebp + (-0xB4)) = 0; /* 0x0066B5D3: mov dword ptr [ebp - 0xb4], 0 */
    MEM32(ebp + (-0xB0)) = 0; /* 0x0066B5DD: mov dword ptr [ebp - 0xb0], 0 */
    MEM32(ebp + (-0xAC)) = 0; /* 0x0066B5E7: mov dword ptr [ebp - 0xac], 0 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x0066B5F1: mov dword ptr [ebp - 0xa8], 0 */
    MEM32(ebp + (-0xA4)) = 0x0C0B0A00u; /* 0x0066B5FB: mov dword ptr [ebp - 0xa4], 0xc0b0a00 */
    MEM32(ebp + (-0xA0)) = 0x000F0E0Du; /* 0x0066B605: mov dword ptr [ebp - 0xa0], 0xf0e0d */
    MEM32(ebp + (-0x9C)) = 0; /* 0x0066B60F: mov dword ptr [ebp - 0x9c], 0 */
    MEM32(ebp + (-0x98)) = 0; /* 0x0066B619: mov dword ptr [ebp - 0x98], 0 */
    MEM32(ebp + (-0x94)) = 0; /* 0x0066B623: mov dword ptr [ebp - 0x94], 0 */
    MEM32(ebp + (-0x90)) = 0; /* 0x0066B62D: mov dword ptr [ebp - 0x90], 0 */
    MEM32(ebp + (-0x8C)) = 0; /* 0x0066B637: mov dword ptr [ebp - 0x8c], 0 */
    MEM32(ebp + (-0x88)) = 0; /* 0x0066B641: mov dword ptr [ebp - 0x88], 0 */
    MEM32(ebp + (-0x84)) = 0; /* 0x0066B64B: mov dword ptr [ebp - 0x84], 0 */
    MEM32(ebp + (-0x80)) = 0; /* 0x0066B655: mov dword ptr [ebp - 0x80], 0 */
    MEM32(ebp + (-0x7C)) = 0; /* 0x0066B65C: mov dword ptr [ebp - 0x7c], 0 */
    MEM32(ebp + (-0x78)) = 0; /* 0x0066B663: mov dword ptr [ebp - 0x78], 0 */
    MEM32(ebp + (-0x74)) = 0; /* 0x0066B66A: mov dword ptr [ebp - 0x74], 0 */
    MEM32(ebp + (-0x70)) = 0; /* 0x0066B671: mov dword ptr [ebp - 0x70], 0 */
    MEM32(ebp + (-0x6C)) = 0; /* 0x0066B678: mov dword ptr [ebp - 0x6c], 0 */
    MEM32(ebp + (-0x68)) = 0; /* 0x0066B67F: mov dword ptr [ebp - 0x68], 0 */
    MEM32(ebp + (-0x64)) = 0; /* 0x0066B686: mov dword ptr [ebp - 0x64], 0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x0066B68D: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0066B694: mov dword ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x58)) = 0; /* 0x0066B69B: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x0066B6A2: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x0066B6A9: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x0066B6B0: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x0066B6B7: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x0066B6BE: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x0066B6C5: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x0066B6CC: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x0066B6D3: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x0066B6DA: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066B6E1: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0066B6E8: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x0066B6EF: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x0066B6F6: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x0066B6FD: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066B704: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066B70B: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0066B712: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x0066B719: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x0066B720: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0066B727: mov dword ptr [ebp - 8], 0 */
    MEM32(eax + 0x10) = 0; /* 0x0066B72E: mov dword ptr [eax + 0x10], 0 */
L_0066B735:
    ecx = edi; /* 0x0066B735: mov ecx, edi */
    esi = ecx + 0x1; /* 0x0066B737: lea esi, [ecx + 1] */
    ebx = ebx; /* 0x0066B73A: lea ebx, [ebx] */
L_0066B740:
    SET_LO8(eax, MEM8(ecx)); /* 0x0066B740: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0066B742: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0066B743: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B740; /* 0x0066B745: jne 0x66b740 */
L_0066B747:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0066B747: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp edx, ecx */ /* 0x0066B749: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066B77D; /* 0x0066B74B: jae 0x66b77d */
L_0066B74D:
    eax = (uint32_t)MEM8(edx + edi); /* 0x0066B74D: movzx eax, byte ptr [edx + edi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 2); /* 0x0066B751: add bl, 2 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = (uint32_t)MEM8(edx + edi + 0x1); /* 0x0066B754: movzx ecx, byte ptr [edx + edi + 1] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0066B759: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0066B759: shr edx, 1 */
    SET_LO8(eax, MEM8(ebp + eax + (-0x104))); /* 0x0066B75B: mov al, byte ptr [ebp + eax - 0x104] */
    if (4u) _cf = (((LO8(eax)) >> 4) & 1u); /* 0x0066B762: shl al, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << 4u); /* 0x0066B762: shl al, 4 */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(ebp + ecx + (-0x104)))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(ebp + ecx + (-0x104)))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(ebp + ecx + (-0x104))); /* 0x0066B765: or al, byte ptr [ebp + ecx - 0x104] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0x108)); /* 0x0066B76C: mov ecx, dword ptr [ebp - 0x108] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x0066B772: mov byte ptr [edx + ecx], al */
    edx = (uint32_t)LO8(ebx); /* 0x0066B775: movzx edx, bl */
    /* cmp edx, 0x28u */ /* 0x0066B778: cmp edx, 0x28 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B735; /* 0x0066B77B: jb 0x66b735 */
L_0066B77D:
    ecx = MEM32(ebp + (-0x4)); /* 0x0066B77D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0066B780: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x0066B782: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B783: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066B784: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0066B786: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0066B787: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066B78C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B78E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B78F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B790u);

L_0066B790:
    PUSH32(esp, ebp); /* 0x0066B790: push ebp */
    ebp = esp; /* 0x0066B791: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B793: push -1 */
    PUSH32(esp, 0x007BCDBBu); /* 0x0066B795: push 0x7bcdbb */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B79A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B7A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x0066B7A1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066B7A4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B7A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0066B7AB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x0066B7AE: push esi */
    PUSH32(esp, edi); /* 0x0066B7AF: push edi */
    PUSH32(esp, eax); /* 0x0066B7B0: push eax */
    eax = ebp + (-0xC); /* 0x0066B7B1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B7B4: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0066B7BA: mov edi, ecx */
    MEM32(edi + 0x14) = 0xFu; /* 0x0066B7BC: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x0066B7C3: mov dword ptr [edi + 0x10], 0 */
    MEM32(ebp + (-0x38)) = edi; /* 0x0066B7CA: mov dword ptr [ebp - 0x38], edi */
    MEM8(edi) = (uint8_t)(0); /* 0x0066B7CD: mov byte ptr [edi], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066B7D0: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x5C; /* 0x0066B7D7: lea esi, [edi + 0x5c] */
    MEM32(ebp + (-0x30)) = esi; /* 0x0066B7DA: mov dword ptr [ebp - 0x30], esi */
    MEM32(esi) = 0; /* 0x0066B7DD: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x0066B7E3: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_00670370); /* 0x0066B7EA: call 0x670370 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x0066B7EF: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066B7F1: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(0x8780CC), 0 */ /* 0x0066B7F5: cmp dword ptr [0x8780cc], 0 */
    _flag_a = (uint32_t)(MEM32(0x8780CC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066B83B; /* 0x0066B7FC: jne 0x66b83b */
L_0066B7FE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B7FE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B801: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0066B803: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007FC47Cu); /* 0x0066B806: push 0x7fc47c */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B80B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066B810: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066B814: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066B817: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0066B819: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 0x007FC4B8u); /* 0x0066B81C: push 0x7fc4b8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066B821: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0066B826: mov byte ptr [ebp - 4], 7 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066B82A: mov byte ptr [ebp - 4], 5 */
    ecx = 0x27u; /* 0x0066B82E: mov ecx, 0x27 */
    RECOMP_CALL(sub_00668DA0); /* 0x0066B833: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066B838: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066B83B:
    ecx = MEM32(ebp + 0x8); /* 0x0066B83B: mov ecx, dword ptr [ebp + 8] */
    edx = 0x00924FF0u; /* 0x0066B83E: mov edx, 0x924ff0 */
    MEM8(edi + 0x58) = (uint8_t)(0); /* 0x0066B843: mov byte ptr [edi + 0x58], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0066B847: sub edx, ecx */
    _flag_k = FK_CMP;
    esp = esp; /* 0x0066B849: lea esp, [esp] */
L_0066B850:
    SET_LO8(eax, MEM8(ecx)); /* 0x0066B850: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x0066B852: lea ecx, [ecx + 1] */
    MEM8(edx + ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0066B855: mov byte ptr [edx + ecx - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066B859: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066B850; /* 0x0066B85B: jne 0x66b850 */
L_0066B85D:
    PUSH32(esp, 4); /* 0x0066B85D: push 4 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066B85F: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x0066B866: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066B869: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007CE250u); /* 0x0066B870: push 0x7ce250 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0066B875: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066B87C: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(LO8(eax)); /* 0x0066B883: mov byte ptr [ebp - 0x2c], al */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066B886: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0066B88B: mov byte ptr [ebp - 4], 8 */
    ecx = MEM32(0x8780CC); /* 0x0066B88F: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x0066B895: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066B8A8; /* 0x0066B897: je 0x66b8a8 */
L_0066B899:
    ecx = MEM32(ecx + 0xC0); /* 0x0066B899: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x2C); /* 0x0066B89F: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0066B8A2: push eax */
    RECOMP_CALL(sub_00671EF0); /* 0x0066B8A3: call 0x671ef0 */
    RECOMP_FLAGS_IN();
L_0066B8A8:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066B8A8: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0066B8AC: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B8BE; /* 0x0066B8B0: jb 0x66b8be */
L_0066B8B2:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0066B8B2: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066B8B5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B8BB: add esp, 4 */
    _flag_k = FK_ADD;
L_0066B8BE:
    ecx = edi; /* 0x0066B8BE: mov ecx, edi */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0066B8C0: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066B8C7: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0066B8CE: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0066B980); /* 0x0066B8D2: call 0x66b980 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x0066B8D7: mov ecx, edi */
    RECOMP_CALL(sub_0066DEC0); /* 0x0066B8D9: call 0x66dec0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066B8DE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x0066B8E5: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066B8E7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066B8EA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B8F1: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066B8F2: pop edi */
    esi = POP32_VAL(esp); /* 0x0066B8F3: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x0066B8F4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066B8F7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066B8F9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066B8FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B900: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066B901: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0066B910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B910u);

L_0066B910:
    PUSH32(esp, ebp); /* 0x0066B910: push ebp */
    ebp = esp; /* 0x0066B911: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B913: push -1 */
    PUSH32(esp, 0x007BCE00u); /* 0x0066B915: push 0x7bce00 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B91A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B920: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0066B921: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0066B924: push esi */
    eax = MEM32(0x855000); /* 0x0066B925: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B92A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066B92C: push eax */
    eax = ebp + (-0xC); /* 0x0066B92D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B930: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066B936: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0066B938: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066B93B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x0066B942: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0066B944: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0066B945: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x0066B947: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0066B94A: push eax */
    RECOMP_CALL(sub_00670000); /* 0x0066B94B: call 0x670000 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066B950: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0066B957: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066B959: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066B95F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0066B962: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066B965: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066B96C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066B96D: pop esi */
    esp = ebp; /* 0x0066B96E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066B970: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066B971: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066B980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066B980u);

L_0066B980:
    PUSH32(esp, ebp); /* 0x0066B980: push ebp */
    ebp = esp; /* 0x0066B981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066B983: push -1 */
    PUSH32(esp, 0x007BCE30u); /* 0x0066B985: push 0x7bce30 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066B98A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066B990: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x0066B991: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0066B994: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066B999: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066B99B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0066B99E: push esi */
    PUSH32(esp, eax); /* 0x0066B99F: push eax */
    eax = ebp + (-0xC); /* 0x0066B9A0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066B9A3: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066B9A9: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0066B9AB: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066B9B5; /* 0x0066B9AF: jb 0x66b9b5 */
L_0066B9B1:
    eax = MEM32(esi); /* 0x0066B9B1: mov eax, dword ptr [esi] */
    goto L_0066B9B7; /* 0x0066B9B3: jmp 0x66b9b7 */
L_0066B9B5:
    eax = esi; /* 0x0066B9B5: mov eax, esi */
L_0066B9B7:
    MEM8(eax) = (uint8_t)(0); /* 0x0066B9B7: mov byte ptr [eax], 0 */
    ecx = ebp + (-0x28); /* 0x0066B9BA: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066B9BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x6C) = (uint8_t)(1); /* 0x0066B9BF: mov byte ptr [esi + 0x6c], 1 */
    PUSH32(esp, 3); /* 0x0066B9C3: push 3 */
    MEM32(ebp + (-0x18)) = eax; /* 0x0066B9C5: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x0066B9C8: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, 0x007FC4C8u); /* 0x0066B9CB: push 0x7fc4c8 */
    MEM16(esi + 0x64) = (uint16_t)(LO16(eax)); /* 0x0066B9D0: mov word ptr [esi + 0x64], ax */
    MEM32(esi + 0x68) = eax; /* 0x0066B9D4: mov dword ptr [esi + 0x68], eax */
    MEM8(esi + 0x59) = (uint8_t)(LO8(eax)); /* 0x0066B9D7: mov byte ptr [esi + 0x59], al */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066B9DA: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = eax; /* 0x0066B9E1: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x0066B9E4: mov byte ptr [ebp - 0x28], al */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066B9E7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066B9EC: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x28); /* 0x0066B9F3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0066B9F6: push eax */
    ecx = esi; /* 0x0066B9F7: mov ecx, esi */
    RECOMP_CALL(sub_0066BC50); /* 0x0066B9F9: call 0x66bc50 */
    RECOMP_FLAGS_IN();
    edx = 0x00924FF0u; /* 0x0066B9FE: mov edx, 0x924ff0 */
    ecx = ebp + (-0x28); /* 0x0066BA03: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_004261B0); /* 0x0066BA06: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0066BA0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066BA94; /* 0x0066BA0D: jne 0x66ba94 */
L_0066BA13:
    MEM32(ebp + (-0x30)) = 0; /* 0x0066BA13: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0066BA1A: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0066BA21: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066BA28: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(LO8(eax)); /* 0x0066BA2F: mov byte ptr [ebp - 0x40], al */
    /* cmp MEM8(0x924FF0), LO8(eax) */ /* 0x0066BA32: cmp byte ptr [0x924ff0], al */
    _flag_a = (uint32_t)(MEM8(0x924FF0)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066BA3E; /* 0x0066BA38: jne 0x66ba3e */
L_0066BA3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066BA3A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0066BA4F; /* 0x0066BA3C: jmp 0x66ba4f */
L_0066BA3E:
    ecx = 0x00924FF0u; /* 0x0066BA3E: mov ecx, 0x924ff0 */
    edx = ecx + 0x1; /* 0x0066BA43: lea edx, [ecx + 1] */
L_0066BA46:
    SET_LO8(eax, MEM8(ecx)); /* 0x0066BA46: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0066BA48: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0066BA49: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066BA46; /* 0x0066BA4B: jne 0x66ba46 */
L_0066BA4D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0066BA4D: sub ecx, edx */
    _flag_k = FK_CMP;
L_0066BA4F:
    PUSH32(esp, ecx); /* 0x0066BA4F: push ecx */
    PUSH32(esp, 0x00924FF0u); /* 0x0066BA50: push 0x924ff0 */
    ecx = ebp + (-0x40); /* 0x0066BA55: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066BA58: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066BA5D: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0x40); /* 0x0066BA61: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0066BA64: push eax */
    ecx = esi; /* 0x0066BA65: mov ecx, esi */
    RECOMP_CALL(sub_0066BC50); /* 0x0066BA67: call 0x66bc50 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066BA6C: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0066BA70: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066BA82; /* 0x0066BA74: jb 0x66ba82 */
L_0066BA76:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0066BA76: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066BA79: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066BA7F: add esp, 4 */
    _flag_k = FK_ADD;
L_0066BA82:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0066BA82: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066BA89: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0066BA90: mov byte ptr [ebp - 0x40], 0 */
L_0066BA94:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066BA94: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066BA9B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066BAAD; /* 0x0066BA9F: jb 0x66baad */
L_0066BAA1:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066BAA1: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066BAA4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066BAAA: add esp, 4 */
    _flag_k = FK_ADD;
L_0066BAAD:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066BAAD: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066BAB4: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066BABB: mov byte ptr [ebp - 0x28], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066BABF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066BAC2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066BAC9: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066BACA: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066BACB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066BACE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066BAD0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066BAD5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066BAD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066BAD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0066BAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066BAE0u);

L_0066BAE0:
    PUSH32(esp, ebp); /* 0x0066BAE0: push ebp */
    ebp = esp; /* 0x0066BAE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066BAE3: push -1 */
    PUSH32(esp, 0x007BCE93u); /* 0x0066BAE5: push 0x7bce93 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066BAEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0066BAF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0066BAF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0066BAF4: push esi */
    PUSH32(esp, edi); /* 0x0066BAF5: push edi */
    eax = MEM32(0x855000); /* 0x0066BAF6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066BAFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066BAFD: push eax */
    eax = ebp + (-0xC); /* 0x0066BAFE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066BB01: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0066BB07: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x0066BB09: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066BB0C: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi + 0x68); /* 0x0066BB13: mov eax, dword ptr [edi + 0x68] */
    /* test eax, eax */ /* 0x0066BB16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066BB31; /* 0x0066BB18: je 0x66bb31 */
L_0066BB1A:
    PUSH32(esp, eax); /* 0x0066BB1A: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0066BB1B: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066BB21: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x68) = 0; /* 0x0066BB24: mov dword ptr [edi + 0x68], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066BB2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x64) = (uint16_t)(LO16(eax)); /* 0x0066BB2D: mov word ptr [edi + 0x64], ax */
L_0066BB31:
    MEM8(0x924FF0) = (uint8_t)(0); /* 0x0066BB31: mov byte ptr [0x924ff0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066BB38: mov byte ptr [ebp - 4], 0 */
    esi = edi + 0x5C; /* 0x0066BB3C: lea esi, [edi + 0x5c] */
    MEM32(ebp + (-0x14)) = esi; /* 0x0066BB3F: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066BB42: mov byte ptr [ebp - 4], 3 */
    ecx = esi; /* 0x0066BB46: mov ecx, esi */
    eax = MEM32(esi); /* 0x0066BB48: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0066BB4A: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0066BB4B: push dword ptr [eax] */
    eax = ebp + (-0x18); /* 0x0066BB4D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0066BB50: push eax */
    RECOMP_CALL(sub_00670000); /* 0x0066BB51: call 0x670000 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066BB56: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(esi)); /* 0x0066BB5A: push dword ptr [esi] */
    esi = MEM32(0x7CC694); /* 0x0066BB5C: mov esi, dword ptr [0x7cc694] */
    RECOMP_ICALL(esi); /* 0x0066BB62: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066BB64: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066BB67: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x0066BB6E: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066BB7B; /* 0x0066BB72: jb 0x66bb7b */
L_0066BB74:
    PUSH32(esp, MEM32(edi)); /* 0x0066BB74: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x0066BB76: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066BB78: add esp, 4 */
    _flag_k = FK_ADD;
L_0066BB7B:
    MEM32(edi + 0x14) = 0xFu; /* 0x0066BB7B: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x0066BB82: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x0066BB89: mov byte ptr [edi], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066BB8C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066BB8F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066BB96: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066BB97: pop edi */
    esi = POP32_VAL(esp); /* 0x0066BB98: pop esi */
    esp = ebp; /* 0x0066BB99: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066BB9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066BB9C: ret  */
    RECOMP_REGS_OUT();
}
