#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10031614(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031614u);

    goto L_10031614;
L_1001571D:
    /* test ecx, 0x00070000u */ /* 0x1001571D: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003166D; /* 0x10015723: jne 0x1003166d */
L_10015729:
    edx = MEM32(edi); /* 0x10015729: mov edx, dword ptr [edi] */
    eax = edx; /* 0x1001572B: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001572D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10015730: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10015733: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10015733: shl edx, 6 */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x10015736: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + edx + 0x24)); /* 0x1001573D: mov al, byte ptr [ecx + edx + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + (-0x2))); /* 0x10015741: xor al, byte ptr [ebp - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x10015744: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + edx + 0x24) = (uint8_t)(MEM8(ecx + edx + 0x24) ^ LO8(eax)); /* 0x10015746: xor byte ptr [ecx + edx + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi); /* 0x1001574A: mov esi, dword ptr [edi] */
    eax = esi; /* 0x1001574C: mov eax, esi */
    ecx = MEM32(ebp + 0x14); /* 0x1001574E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10015751: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10015754: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x10015757: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x10015757: shl esi, 6 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1001575A: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1001575A: shr ecx, 0x10 */
    if (7u) _cf = (((LO8(ecx)) >> 1) & 1u); /* 0x1001575D: shl cl, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 7u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 7u); /* 0x1001575D: shl cl, 7 */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x10015760: mov edx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(edx + esi + 0x24)); /* 0x10015767: mov al, byte ptr [edx + esi + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x1001576B: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(eax)); /* 0x1001576D: or cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1001576F: mov byte ptr [edx + esi + 0x24], cl */
    ecx = MEM32(ebp + 0x14); /* 0x10015773: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ebp + (-0x3)), LO8(ebx) */ /* 0x10015776: cmp byte ptr [ebp - 3], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015784; /* 0x10015779: jne 0x10015784 */
L_1001577B:
    /* test LO8(ecx), 8 */ /* 0x1001577B: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E112; /* 0x1001577E: jne 0x1005e112 */
L_10015784:
    esi = MEM32(ebp + (-0x8)); /* 0x10015784: mov esi, dword ptr [ebp - 8] */
    edx = 0xC0000000u; /* 0x10015787: mov edx, 0xc0000000 */
    eax = esi; /* 0x1001578C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1001578E: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x10015790: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100326C9; /* 0x10015792: je 0x100326c9 */
L_10015798:
    eax = ebx; /* 0x10015798: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x1001579A: pop esi */
    edi = POP32_VAL(esp); /* 0x1001579B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001579C: pop ebx */
    esp = ebp; /* 0x1001579D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001579F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157A0: ret  */
L_1002DF97:
    PUSH32(esp, MEM32(edi)); /* 0x1002DF97: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1002DF99: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    goto L_1002E2DC; /* 0x1002DF9E: jmp 0x1002e2dc */
L_1002DFAA:
    /* test esi, esi */ /* 0x1002DFAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E082; /* 0x1002DFAC: jne 0x1005e082 */
L_1002DFB2:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1002DFB2: jmp 0x10015729 */
L_1002E2DC:
    ecx = POP32_VAL(esp); /* 0x1002E2DC: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1002E2DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1002E2E2: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1002E2E4: jmp 0x10015798 */
L_10031614:
    PUSH32(esp, ebp); /* 0x10031614: push ebp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x46)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x46) = (uint8_t)(MEM8(eax + eax + 0x46) + LO8(edx)); /* 0x10031615: add byte ptr [eax + eax + 0x46], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3800)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3800) = (uint8_t)(MEM8(0x3800) + HI8(ecx)); /* 0x10031619: add byte ptr [0x3800], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(edx)); /* 0x1003161F: add byte ptr [ebp], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x10031622: push esp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x10031623: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36003100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x36003100u; /* 0x10031626: sub eax, 0x36003100 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x45)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x45) = (uint8_t)(MEM8(eax + eax + 0x45) + LO8(ecx)); /* 0x1003162B: add byte ptr [eax + eax + 0x45], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1003162F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031631: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(edx)); /* 0x10031633: add byte ptr [ebp], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10031636: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x10031637: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1003163A: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1003163B: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x1003163E: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(eax)); /* 0x1003163F: add byte ptr [ebp], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031642: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x00010000u */ /* 0x10031644: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031656; /* 0x10031649: je 0x10031656 */
L_1003164B:
    /* cmp eax, 0x00014000u */ /* 0x1003164B: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DFD4; /* 0x10031650: jne 0x1005dfd4 */
L_10031656:
    eax = ecx; /* 0x10031656: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x10031658: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1003165D: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x10031662: jne 0x1001571d */
L_10031668:
    goto L_1005DFFD; /* 0x10031668: jmp 0x1005dffd */
L_1003166D:
    MEM32(ebp + (-0x14)) = ebx; /* 0x1003166D: mov dword ptr [ebp - 0x14], ebx */
    /* test LO8(edx), 0x40u */ /* 0x10031670: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015729; /* 0x10031673: jne 0x10015729 */
L_10031679:
    eax = MEM32(ebp + (-0x8)); /* 0x10031679: mov eax, dword ptr [ebp - 8] */
    ecx = 0xC0000000u; /* 0x1003167C: mov ecx, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10031681: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40000000u */ /* 0x10031683: cmp eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DFAA; /* 0x10031688: je 0x1002dfaa */
L_1003168E:
    /* cmp eax, 0x80000000u */ /* 0x1003168E: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E006; /* 0x10031693: jne 0x1005e006 */
L_10031699:
    PUSH32(esp, 3); /* 0x10031699: push 3 */
    eax = ebp + (-0x14); /* 0x1003169B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1003169E: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1003169F: push dword ptr [edi] */
    RECOMP_CALL(sub_10015078); /* 0x100316A1: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100316A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x100316AC: je 0x1002df97 */
L_100316B2:
    ecx = MEM32(ebp + (-0x14)); /* 0x100316B2: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 2); /* 0x100316B5: push 2 */
    edx = POP32_VAL(esp); /* 0x100316B7: pop edx */
    /* cmp eax, edx */ /* 0x100316B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100316D1; /* 0x100316BA: je 0x100316d1 */
L_100316BC:
    /* cmp eax, 3 */ /* 0x100316BC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316BF: jne 0x1005e09f */
L_100316C5:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x100316C5: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E062; /* 0x100316CB: je 0x1005e062 */
L_100316D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x100316D1: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFEu */ /* 0x100316D7: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E06B; /* 0x100316DD: je 0x1005e06b */
L_100316E3:
    /* cmp ecx, 0xFEFFu */ /* 0x100316E3: cmp ecx, 0xfeff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316E9: jne 0x1005e09f */
L_100316EF:
    PUSH32(esp, ebx); /* 0x100316EF: push ebx */
    PUSH32(esp, ebx); /* 0x100316F0: push ebx */
    PUSH32(esp, edx); /* 0x100316F1: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x100316F2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x100316F4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100316F9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100316FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316FE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x10031701: je 0x1002df97 */
L_10031707:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x10031707: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1003170B: jmp 0x10015729 */
L_100326C9:
    /* test LO8(ecx), 1 */ /* 0x100326C9: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015798; /* 0x100326CC: je 0x10015798 */
L_100326D2:
    goto L_1005E133; /* 0x100326D2: jmp 0x1005e133 */
L_1005DFD4:
    /* cmp eax, 0x00020000u */ /* 0x1005DFD4: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFD9: je 0x1005dffd */
L_1005DFDB:
    /* cmp eax, 0x00024000u */ /* 0x1005DFDB: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFE0: je 0x1005dffd */
L_1005DFE2:
    /* cmp eax, 0x00040000u */ /* 0x1005DFE2: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFF4; /* 0x1005DFE7: je 0x1005dff4 */
L_1005DFE9:
    /* cmp eax, 0x00044000u */ /* 0x1005DFE9: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x1005DFEE: jne 0x1001571d */
L_1005DFF4:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005DFF4: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005DFF8: jmp 0x1001571d */
L_1005DFFD:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1005DFFD: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005E001: jmp 0x1001571d */
L_1005E006:
    /* cmp eax, ecx */ /* 0x1005E006: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E008: jne 0x10015729 */
L_1005E00E:
    /* test esi, esi */ /* 0x1005E00E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E010: je 0x10015729 */
L_1005E016:
    PUSH32(esp, 2); /* 0x1005E016: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E018: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E019: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E01B: jbe 0x1005e0bf */
L_1005E021:
    /* cmp esi, 4 */ /* 0x1005E021: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E034; /* 0x1005E024: jbe 0x1005e034 */
L_1005E026:
    /* cmp esi, 5 */ /* 0x1005E026: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E029: jne 0x10015729 */
L_1005E02F:
    goto L_1005E0BF; /* 0x1005E02F: jmp 0x1005e0bf */
L_1005E034:
    PUSH32(esp, ecx); /* 0x1005E034: push ecx */
    PUSH32(esp, ebx); /* 0x1005E035: push ebx */
    PUSH32(esp, ebx); /* 0x1005E036: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E037: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E039: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E03E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E041: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E043: je 0x1005e0bc */
L_1005E045:
    PUSH32(esp, ebx); /* 0x1005E045: push ebx */
    PUSH32(esp, ebx); /* 0x1005E046: push ebx */
    PUSH32(esp, ebx); /* 0x1005E047: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E048: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E04A: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E04F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E051: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E054: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031699; /* 0x1005E057: jne 0x10031699 */
L_1005E05D:
    RECOMP_BACKEDGE();
    goto L_1002DF97; /* 0x1005E05D: jmp 0x1002df97 */
L_1005E062:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005E062: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E066: jmp 0x10015729 */
L_1005E06B:
    PUSH32(esp, MEM32(edi)); /* 0x1005E06B: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1005E06D: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E072: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E073: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005E078: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005E07A: pop ebx */
    MEM32(eax) = ebx; /* 0x1005E07B: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E07D: jmp 0x10015798 */
L_1005E082:
    PUSH32(esp, 2); /* 0x1005E082: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E084: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E085: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E087: jbe 0x1005e0bf */
L_1005E089:
    /* cmp esi, 4 */ /* 0x1005E089: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1005E026; /* 0x1005E08C: ja 0x1005e026 */
L_1005E08E:
    PUSH32(esp, ecx); /* 0x1005E08E: push ecx */
    PUSH32(esp, ebx); /* 0x1005E08F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E090: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E091: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E093: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E098: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E09B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E09D: je 0x1005e0bc */
L_1005E09F:
    PUSH32(esp, ebx); /* 0x1005E09F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A0: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A1: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0A2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E0A4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E0A9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E0AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0AE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0B1: je 0x1002df97 */
L_1005E0B7:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E0B7: jmp 0x10015729 */
L_1005E0BC:
    PUSH32(esp, 2); /* 0x1005E0BC: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E0BE: pop ecx */
L_1005E0BF:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x1005E0BF: movsx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1005E0C3: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005E0D8; /* 0x1005E0C6: je 0x1005e0d8 */
L_1005E0C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E0C9: jne 0x10015729 */
L_1005E0CF:
    MEM32(ebp + (-0x14)) = 0xFEFFu; /* 0x1005E0CF: mov dword ptr [ebp - 0x14], 0xfeff */
    goto L_1005E0E5; /* 0x1005E0D6: jmp 0x1005e0e5 */
L_1005E0D8:
    PUSH32(esp, 3); /* 0x1005E0D8: push 3 */
    ecx = POP32_VAL(esp); /* 0x1005E0DA: pop ecx */
    MEM32(ebp + (-0x14)) = 0x00BFBBEFu; /* 0x1005E0DB: mov dword ptr [ebp - 0x14], 0xbfbbef */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005E0E2: mov dword ptr [ebp - 0x28], ecx */
L_1005E0E5:
    eax = ecx; /* 0x1005E0E5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1005E0E7: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1005E0E9: push eax */
    eax = ebp + (-0x14); /* 0x1005E0EA: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1005E0ED: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005E0EF: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0F0: push dword ptr [edi] */
    RECOMP_CALL(sub_1002029C); /* 0x1005E0F2: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005E0F7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0FA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0FD: je 0x1002df97 */
L_1005E103:
    ecx = MEM32(ebp + (-0x28)); /* 0x1005E103: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1005E106: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x1005E108: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E10A: jle 0x10015729 */
L_1005E110:
    RECOMP_BACKEDGE();
    goto L_1005E0E5; /* 0x1005E110: jmp 0x1005e0e5 */
L_1005E112:
    ecx = MEM32(edi); /* 0x1005E112: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E114: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E116: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E119: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E11C: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E11C: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E11F: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1005E126: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1005E12B: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10015784; /* 0x1005E12E: jmp 0x10015784 */
L_1005E133:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005E133: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1005E136: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1005E13C: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x38); /* 0x1005E13F: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1005E142: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1005E148: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 3); /* 0x1005E14B: push 3 */
    PUSH32(esp, eax); /* 0x1005E14D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1005E14E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1005E151: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005E152: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x1005E155: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005E15A: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E15D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E194; /* 0x1005E160: jne 0x1005e194 */
L_1005E162:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E162: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005E168: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E169: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1005E16E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E170: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E172: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E175: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E178: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E178: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E17B: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1005E182: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1005E187: push dword ptr [edi] */
    RECOMP_CALL(sub_10014D8E); /* 0x1005E189: call 0x10014d8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E18E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002E2DC; /* 0x1005E18F: jmp 0x1002e2dc */
L_1005E194:
    edx = MEM32(edi); /* 0x1005E194: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1005E196: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1005E198: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1005E19B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x1005E19E: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x1005E19E: shl edx, 6 */
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E1A1: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM32(edx + ecx) = eax; /* 0x1005E1A8: mov dword ptr [edx + ecx], eax */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E1AB: jmp 0x10015798 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031620u);

    goto L_10031620;
L_1001571D:
    /* test ecx, 0x00070000u */ /* 0x1001571D: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003166D; /* 0x10015723: jne 0x1003166d */
L_10015729:
    edx = MEM32(edi); /* 0x10015729: mov edx, dword ptr [edi] */
    eax = edx; /* 0x1001572B: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001572D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10015730: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10015733: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10015733: shl edx, 6 */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x10015736: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + edx + 0x24)); /* 0x1001573D: mov al, byte ptr [ecx + edx + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + (-0x2))); /* 0x10015741: xor al, byte ptr [ebp - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x10015744: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + edx + 0x24) = (uint8_t)(MEM8(ecx + edx + 0x24) ^ LO8(eax)); /* 0x10015746: xor byte ptr [ecx + edx + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi); /* 0x1001574A: mov esi, dword ptr [edi] */
    eax = esi; /* 0x1001574C: mov eax, esi */
    ecx = MEM32(ebp + 0x14); /* 0x1001574E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10015751: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10015754: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x10015757: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x10015757: shl esi, 6 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1001575A: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1001575A: shr ecx, 0x10 */
    if (7u) _cf = (((LO8(ecx)) >> 1) & 1u); /* 0x1001575D: shl cl, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 7u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 7u); /* 0x1001575D: shl cl, 7 */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x10015760: mov edx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(edx + esi + 0x24)); /* 0x10015767: mov al, byte ptr [edx + esi + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x1001576B: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(eax)); /* 0x1001576D: or cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1001576F: mov byte ptr [edx + esi + 0x24], cl */
    ecx = MEM32(ebp + 0x14); /* 0x10015773: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ebp + (-0x3)), LO8(ebx) */ /* 0x10015776: cmp byte ptr [ebp - 3], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015784; /* 0x10015779: jne 0x10015784 */
L_1001577B:
    /* test LO8(ecx), 8 */ /* 0x1001577B: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E112; /* 0x1001577E: jne 0x1005e112 */
L_10015784:
    esi = MEM32(ebp + (-0x8)); /* 0x10015784: mov esi, dword ptr [ebp - 8] */
    edx = 0xC0000000u; /* 0x10015787: mov edx, 0xc0000000 */
    eax = esi; /* 0x1001578C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1001578E: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x10015790: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100326C9; /* 0x10015792: je 0x100326c9 */
L_10015798:
    eax = ebx; /* 0x10015798: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x1001579A: pop esi */
    edi = POP32_VAL(esp); /* 0x1001579B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001579C: pop ebx */
    esp = ebp; /* 0x1001579D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001579F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157A0: ret  */
L_1002DF97:
    PUSH32(esp, MEM32(edi)); /* 0x1002DF97: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1002DF99: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    goto L_1002E2DC; /* 0x1002DF9E: jmp 0x1002e2dc */
L_1002DFAA:
    /* test esi, esi */ /* 0x1002DFAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E082; /* 0x1002DFAC: jne 0x1005e082 */
L_1002DFB2:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1002DFB2: jmp 0x10015729 */
L_1002E2DC:
    ecx = POP32_VAL(esp); /* 0x1002E2DC: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1002E2DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1002E2E2: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1002E2E4: jmp 0x10015798 */
L_10031620:
    PUSH32(esp, ebp); /* 0x10031620: push ebp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x46)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x46) = (uint8_t)(MEM8(eax + eax + 0x46) + LO8(edx)); /* 0x10031621: add byte ptr [eax + eax + 0x46], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x36003100)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x36003100) = (uint8_t)(MEM8(0x36003100) + HI8(ecx)); /* 0x10031625: add byte ptr [0x36003100], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x45)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x45) = (uint8_t)(MEM8(eax + eax + 0x45) + LO8(ecx)); /* 0x1003162B: add byte ptr [eax + eax + 0x45], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1003162F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031631: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(edx)); /* 0x10031633: add byte ptr [ebp], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10031636: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x10031637: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1003163A: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1003163B: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x1003163E: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(eax)); /* 0x1003163F: add byte ptr [ebp], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031642: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x00010000u */ /* 0x10031644: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031656; /* 0x10031649: je 0x10031656 */
L_1003164B:
    /* cmp eax, 0x00014000u */ /* 0x1003164B: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DFD4; /* 0x10031650: jne 0x1005dfd4 */
L_10031656:
    eax = ecx; /* 0x10031656: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x10031658: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1003165D: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x10031662: jne 0x1001571d */
L_10031668:
    goto L_1005DFFD; /* 0x10031668: jmp 0x1005dffd */
L_1003166D:
    MEM32(ebp + (-0x14)) = ebx; /* 0x1003166D: mov dword ptr [ebp - 0x14], ebx */
    /* test LO8(edx), 0x40u */ /* 0x10031670: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015729; /* 0x10031673: jne 0x10015729 */
L_10031679:
    eax = MEM32(ebp + (-0x8)); /* 0x10031679: mov eax, dword ptr [ebp - 8] */
    ecx = 0xC0000000u; /* 0x1003167C: mov ecx, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10031681: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40000000u */ /* 0x10031683: cmp eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DFAA; /* 0x10031688: je 0x1002dfaa */
L_1003168E:
    /* cmp eax, 0x80000000u */ /* 0x1003168E: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E006; /* 0x10031693: jne 0x1005e006 */
L_10031699:
    PUSH32(esp, 3); /* 0x10031699: push 3 */
    eax = ebp + (-0x14); /* 0x1003169B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1003169E: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1003169F: push dword ptr [edi] */
    RECOMP_CALL(sub_10015078); /* 0x100316A1: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100316A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x100316AC: je 0x1002df97 */
L_100316B2:
    ecx = MEM32(ebp + (-0x14)); /* 0x100316B2: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 2); /* 0x100316B5: push 2 */
    edx = POP32_VAL(esp); /* 0x100316B7: pop edx */
    /* cmp eax, edx */ /* 0x100316B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100316D1; /* 0x100316BA: je 0x100316d1 */
L_100316BC:
    /* cmp eax, 3 */ /* 0x100316BC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316BF: jne 0x1005e09f */
L_100316C5:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x100316C5: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E062; /* 0x100316CB: je 0x1005e062 */
L_100316D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x100316D1: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFEu */ /* 0x100316D7: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E06B; /* 0x100316DD: je 0x1005e06b */
L_100316E3:
    /* cmp ecx, 0xFEFFu */ /* 0x100316E3: cmp ecx, 0xfeff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316E9: jne 0x1005e09f */
L_100316EF:
    PUSH32(esp, ebx); /* 0x100316EF: push ebx */
    PUSH32(esp, ebx); /* 0x100316F0: push ebx */
    PUSH32(esp, edx); /* 0x100316F1: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x100316F2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x100316F4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100316F9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100316FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316FE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x10031701: je 0x1002df97 */
L_10031707:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x10031707: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1003170B: jmp 0x10015729 */
L_100326C9:
    /* test LO8(ecx), 1 */ /* 0x100326C9: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015798; /* 0x100326CC: je 0x10015798 */
L_100326D2:
    goto L_1005E133; /* 0x100326D2: jmp 0x1005e133 */
L_1005DFD4:
    /* cmp eax, 0x00020000u */ /* 0x1005DFD4: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFD9: je 0x1005dffd */
L_1005DFDB:
    /* cmp eax, 0x00024000u */ /* 0x1005DFDB: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFE0: je 0x1005dffd */
L_1005DFE2:
    /* cmp eax, 0x00040000u */ /* 0x1005DFE2: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFF4; /* 0x1005DFE7: je 0x1005dff4 */
L_1005DFE9:
    /* cmp eax, 0x00044000u */ /* 0x1005DFE9: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x1005DFEE: jne 0x1001571d */
L_1005DFF4:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005DFF4: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005DFF8: jmp 0x1001571d */
L_1005DFFD:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1005DFFD: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005E001: jmp 0x1001571d */
L_1005E006:
    /* cmp eax, ecx */ /* 0x1005E006: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E008: jne 0x10015729 */
L_1005E00E:
    /* test esi, esi */ /* 0x1005E00E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E010: je 0x10015729 */
L_1005E016:
    PUSH32(esp, 2); /* 0x1005E016: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E018: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E019: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E01B: jbe 0x1005e0bf */
L_1005E021:
    /* cmp esi, 4 */ /* 0x1005E021: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E034; /* 0x1005E024: jbe 0x1005e034 */
L_1005E026:
    /* cmp esi, 5 */ /* 0x1005E026: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E029: jne 0x10015729 */
L_1005E02F:
    goto L_1005E0BF; /* 0x1005E02F: jmp 0x1005e0bf */
L_1005E034:
    PUSH32(esp, ecx); /* 0x1005E034: push ecx */
    PUSH32(esp, ebx); /* 0x1005E035: push ebx */
    PUSH32(esp, ebx); /* 0x1005E036: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E037: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E039: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E03E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E041: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E043: je 0x1005e0bc */
L_1005E045:
    PUSH32(esp, ebx); /* 0x1005E045: push ebx */
    PUSH32(esp, ebx); /* 0x1005E046: push ebx */
    PUSH32(esp, ebx); /* 0x1005E047: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E048: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E04A: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E04F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E051: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E054: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031699; /* 0x1005E057: jne 0x10031699 */
L_1005E05D:
    RECOMP_BACKEDGE();
    goto L_1002DF97; /* 0x1005E05D: jmp 0x1002df97 */
L_1005E062:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005E062: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E066: jmp 0x10015729 */
L_1005E06B:
    PUSH32(esp, MEM32(edi)); /* 0x1005E06B: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1005E06D: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E072: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E073: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005E078: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005E07A: pop ebx */
    MEM32(eax) = ebx; /* 0x1005E07B: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E07D: jmp 0x10015798 */
L_1005E082:
    PUSH32(esp, 2); /* 0x1005E082: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E084: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E085: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E087: jbe 0x1005e0bf */
L_1005E089:
    /* cmp esi, 4 */ /* 0x1005E089: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1005E026; /* 0x1005E08C: ja 0x1005e026 */
L_1005E08E:
    PUSH32(esp, ecx); /* 0x1005E08E: push ecx */
    PUSH32(esp, ebx); /* 0x1005E08F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E090: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E091: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E093: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E098: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E09B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E09D: je 0x1005e0bc */
L_1005E09F:
    PUSH32(esp, ebx); /* 0x1005E09F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A0: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A1: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0A2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E0A4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E0A9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E0AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0AE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0B1: je 0x1002df97 */
L_1005E0B7:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E0B7: jmp 0x10015729 */
L_1005E0BC:
    PUSH32(esp, 2); /* 0x1005E0BC: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E0BE: pop ecx */
L_1005E0BF:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x1005E0BF: movsx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1005E0C3: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005E0D8; /* 0x1005E0C6: je 0x1005e0d8 */
L_1005E0C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E0C9: jne 0x10015729 */
L_1005E0CF:
    MEM32(ebp + (-0x14)) = 0xFEFFu; /* 0x1005E0CF: mov dword ptr [ebp - 0x14], 0xfeff */
    goto L_1005E0E5; /* 0x1005E0D6: jmp 0x1005e0e5 */
L_1005E0D8:
    PUSH32(esp, 3); /* 0x1005E0D8: push 3 */
    ecx = POP32_VAL(esp); /* 0x1005E0DA: pop ecx */
    MEM32(ebp + (-0x14)) = 0x00BFBBEFu; /* 0x1005E0DB: mov dword ptr [ebp - 0x14], 0xbfbbef */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005E0E2: mov dword ptr [ebp - 0x28], ecx */
L_1005E0E5:
    eax = ecx; /* 0x1005E0E5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1005E0E7: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1005E0E9: push eax */
    eax = ebp + (-0x14); /* 0x1005E0EA: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1005E0ED: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005E0EF: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0F0: push dword ptr [edi] */
    RECOMP_CALL(sub_1002029C); /* 0x1005E0F2: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005E0F7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0FA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0FD: je 0x1002df97 */
L_1005E103:
    ecx = MEM32(ebp + (-0x28)); /* 0x1005E103: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1005E106: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x1005E108: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E10A: jle 0x10015729 */
L_1005E110:
    RECOMP_BACKEDGE();
    goto L_1005E0E5; /* 0x1005E110: jmp 0x1005e0e5 */
L_1005E112:
    ecx = MEM32(edi); /* 0x1005E112: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E114: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E116: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E119: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E11C: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E11C: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E11F: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1005E126: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1005E12B: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10015784; /* 0x1005E12E: jmp 0x10015784 */
L_1005E133:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005E133: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1005E136: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1005E13C: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x38); /* 0x1005E13F: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1005E142: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1005E148: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 3); /* 0x1005E14B: push 3 */
    PUSH32(esp, eax); /* 0x1005E14D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1005E14E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1005E151: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005E152: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x1005E155: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005E15A: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E15D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E194; /* 0x1005E160: jne 0x1005e194 */
L_1005E162:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E162: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005E168: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E169: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1005E16E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E170: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E172: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E175: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E178: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E178: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E17B: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1005E182: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1005E187: push dword ptr [edi] */
    RECOMP_CALL(sub_10014D8E); /* 0x1005E189: call 0x10014d8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E18E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002E2DC; /* 0x1005E18F: jmp 0x1002e2dc */
L_1005E194:
    edx = MEM32(edi); /* 0x1005E194: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1005E196: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1005E198: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1005E19B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x1005E19E: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x1005E19E: shl edx, 6 */
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E1A1: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM32(edx + ecx) = eax; /* 0x1005E1A8: mov dword ptr [edx + ecx], eax */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E1AB: jmp 0x10015798 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031634(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031634u);

    goto L_10031634;
L_1001571D:
    /* test ecx, 0x00070000u */ /* 0x1001571D: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003166D; /* 0x10015723: jne 0x1003166d */
L_10015729:
    edx = MEM32(edi); /* 0x10015729: mov edx, dword ptr [edi] */
    eax = edx; /* 0x1001572B: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001572D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10015730: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10015733: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10015733: shl edx, 6 */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x10015736: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + edx + 0x24)); /* 0x1001573D: mov al, byte ptr [ecx + edx + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + (-0x2))); /* 0x10015741: xor al, byte ptr [ebp - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x10015744: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + edx + 0x24) = (uint8_t)(MEM8(ecx + edx + 0x24) ^ LO8(eax)); /* 0x10015746: xor byte ptr [ecx + edx + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi); /* 0x1001574A: mov esi, dword ptr [edi] */
    eax = esi; /* 0x1001574C: mov eax, esi */
    ecx = MEM32(ebp + 0x14); /* 0x1001574E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10015751: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10015754: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x10015757: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x10015757: shl esi, 6 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1001575A: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1001575A: shr ecx, 0x10 */
    if (7u) _cf = (((LO8(ecx)) >> 1) & 1u); /* 0x1001575D: shl cl, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 7u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 7u); /* 0x1001575D: shl cl, 7 */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x10015760: mov edx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(edx + esi + 0x24)); /* 0x10015767: mov al, byte ptr [edx + esi + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x1001576B: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(eax)); /* 0x1001576D: or cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1001576F: mov byte ptr [edx + esi + 0x24], cl */
    ecx = MEM32(ebp + 0x14); /* 0x10015773: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ebp + (-0x3)), LO8(ebx) */ /* 0x10015776: cmp byte ptr [ebp - 3], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015784; /* 0x10015779: jne 0x10015784 */
L_1001577B:
    /* test LO8(ecx), 8 */ /* 0x1001577B: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E112; /* 0x1001577E: jne 0x1005e112 */
L_10015784:
    esi = MEM32(ebp + (-0x8)); /* 0x10015784: mov esi, dword ptr [ebp - 8] */
    edx = 0xC0000000u; /* 0x10015787: mov edx, 0xc0000000 */
    eax = esi; /* 0x1001578C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1001578E: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x10015790: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100326C9; /* 0x10015792: je 0x100326c9 */
L_10015798:
    eax = ebx; /* 0x10015798: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x1001579A: pop esi */
    edi = POP32_VAL(esp); /* 0x1001579B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001579C: pop ebx */
    esp = ebp; /* 0x1001579D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001579F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157A0: ret  */
L_1002DF97:
    PUSH32(esp, MEM32(edi)); /* 0x1002DF97: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1002DF99: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    goto L_1002E2DC; /* 0x1002DF9E: jmp 0x1002e2dc */
L_1002DFAA:
    /* test esi, esi */ /* 0x1002DFAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E082; /* 0x1002DFAC: jne 0x1005e082 */
L_1002DFB2:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1002DFB2: jmp 0x10015729 */
L_1002E2DC:
    ecx = POP32_VAL(esp); /* 0x1002E2DC: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1002E2DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1002E2E2: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1002E2E4: jmp 0x10015798 */
L_10031634:
    PUSH32(esp, ebp); /* 0x10031634: push ebp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x10031635: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10031638: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x10031639: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1003163C: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x45)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x45) = (uint8_t)(MEM8(eax + eax + 0x45) + LO8(eax)); /* 0x1003163D: add byte ptr [eax + eax + 0x45], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031641: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x10000)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x10000) = (uint8_t)(MEM8(0x10000) + HI8(ebx)); /* 0x10031643: add byte ptr [0x10000], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10031656; /* 0x10031649: je 0x10031656 */
L_1003164B:
    /* cmp eax, 0x00014000u */ /* 0x1003164B: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DFD4; /* 0x10031650: jne 0x1005dfd4 */
L_10031656:
    eax = ecx; /* 0x10031656: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x10031658: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1003165D: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x10031662: jne 0x1001571d */
L_10031668:
    goto L_1005DFFD; /* 0x10031668: jmp 0x1005dffd */
L_1003166D:
    MEM32(ebp + (-0x14)) = ebx; /* 0x1003166D: mov dword ptr [ebp - 0x14], ebx */
    /* test LO8(edx), 0x40u */ /* 0x10031670: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015729; /* 0x10031673: jne 0x10015729 */
L_10031679:
    eax = MEM32(ebp + (-0x8)); /* 0x10031679: mov eax, dword ptr [ebp - 8] */
    ecx = 0xC0000000u; /* 0x1003167C: mov ecx, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10031681: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40000000u */ /* 0x10031683: cmp eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DFAA; /* 0x10031688: je 0x1002dfaa */
L_1003168E:
    /* cmp eax, 0x80000000u */ /* 0x1003168E: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E006; /* 0x10031693: jne 0x1005e006 */
L_10031699:
    PUSH32(esp, 3); /* 0x10031699: push 3 */
    eax = ebp + (-0x14); /* 0x1003169B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1003169E: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1003169F: push dword ptr [edi] */
    RECOMP_CALL(sub_10015078); /* 0x100316A1: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100316A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x100316AC: je 0x1002df97 */
L_100316B2:
    ecx = MEM32(ebp + (-0x14)); /* 0x100316B2: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 2); /* 0x100316B5: push 2 */
    edx = POP32_VAL(esp); /* 0x100316B7: pop edx */
    /* cmp eax, edx */ /* 0x100316B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100316D1; /* 0x100316BA: je 0x100316d1 */
L_100316BC:
    /* cmp eax, 3 */ /* 0x100316BC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316BF: jne 0x1005e09f */
L_100316C5:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x100316C5: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E062; /* 0x100316CB: je 0x1005e062 */
L_100316D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x100316D1: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFEu */ /* 0x100316D7: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E06B; /* 0x100316DD: je 0x1005e06b */
L_100316E3:
    /* cmp ecx, 0xFEFFu */ /* 0x100316E3: cmp ecx, 0xfeff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316E9: jne 0x1005e09f */
L_100316EF:
    PUSH32(esp, ebx); /* 0x100316EF: push ebx */
    PUSH32(esp, ebx); /* 0x100316F0: push ebx */
    PUSH32(esp, edx); /* 0x100316F1: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x100316F2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x100316F4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100316F9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100316FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316FE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x10031701: je 0x1002df97 */
L_10031707:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x10031707: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1003170B: jmp 0x10015729 */
L_100326C9:
    /* test LO8(ecx), 1 */ /* 0x100326C9: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015798; /* 0x100326CC: je 0x10015798 */
L_100326D2:
    goto L_1005E133; /* 0x100326D2: jmp 0x1005e133 */
L_1005DFD4:
    /* cmp eax, 0x00020000u */ /* 0x1005DFD4: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFD9: je 0x1005dffd */
L_1005DFDB:
    /* cmp eax, 0x00024000u */ /* 0x1005DFDB: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFE0: je 0x1005dffd */
L_1005DFE2:
    /* cmp eax, 0x00040000u */ /* 0x1005DFE2: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFF4; /* 0x1005DFE7: je 0x1005dff4 */
L_1005DFE9:
    /* cmp eax, 0x00044000u */ /* 0x1005DFE9: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x1005DFEE: jne 0x1001571d */
L_1005DFF4:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005DFF4: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005DFF8: jmp 0x1001571d */
L_1005DFFD:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1005DFFD: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005E001: jmp 0x1001571d */
L_1005E006:
    /* cmp eax, ecx */ /* 0x1005E006: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E008: jne 0x10015729 */
L_1005E00E:
    /* test esi, esi */ /* 0x1005E00E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E010: je 0x10015729 */
L_1005E016:
    PUSH32(esp, 2); /* 0x1005E016: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E018: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E019: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E01B: jbe 0x1005e0bf */
L_1005E021:
    /* cmp esi, 4 */ /* 0x1005E021: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E034; /* 0x1005E024: jbe 0x1005e034 */
L_1005E026:
    /* cmp esi, 5 */ /* 0x1005E026: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E029: jne 0x10015729 */
L_1005E02F:
    goto L_1005E0BF; /* 0x1005E02F: jmp 0x1005e0bf */
L_1005E034:
    PUSH32(esp, ecx); /* 0x1005E034: push ecx */
    PUSH32(esp, ebx); /* 0x1005E035: push ebx */
    PUSH32(esp, ebx); /* 0x1005E036: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E037: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E039: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E03E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E041: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E043: je 0x1005e0bc */
L_1005E045:
    PUSH32(esp, ebx); /* 0x1005E045: push ebx */
    PUSH32(esp, ebx); /* 0x1005E046: push ebx */
    PUSH32(esp, ebx); /* 0x1005E047: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E048: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E04A: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E04F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E051: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E054: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031699; /* 0x1005E057: jne 0x10031699 */
L_1005E05D:
    RECOMP_BACKEDGE();
    goto L_1002DF97; /* 0x1005E05D: jmp 0x1002df97 */
L_1005E062:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005E062: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E066: jmp 0x10015729 */
L_1005E06B:
    PUSH32(esp, MEM32(edi)); /* 0x1005E06B: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1005E06D: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E072: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E073: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005E078: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005E07A: pop ebx */
    MEM32(eax) = ebx; /* 0x1005E07B: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E07D: jmp 0x10015798 */
L_1005E082:
    PUSH32(esp, 2); /* 0x1005E082: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E084: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E085: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E087: jbe 0x1005e0bf */
L_1005E089:
    /* cmp esi, 4 */ /* 0x1005E089: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1005E026; /* 0x1005E08C: ja 0x1005e026 */
L_1005E08E:
    PUSH32(esp, ecx); /* 0x1005E08E: push ecx */
    PUSH32(esp, ebx); /* 0x1005E08F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E090: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E091: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E093: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E098: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E09B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E09D: je 0x1005e0bc */
L_1005E09F:
    PUSH32(esp, ebx); /* 0x1005E09F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A0: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A1: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0A2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E0A4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E0A9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E0AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0AE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0B1: je 0x1002df97 */
L_1005E0B7:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E0B7: jmp 0x10015729 */
L_1005E0BC:
    PUSH32(esp, 2); /* 0x1005E0BC: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E0BE: pop ecx */
L_1005E0BF:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x1005E0BF: movsx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1005E0C3: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005E0D8; /* 0x1005E0C6: je 0x1005e0d8 */
L_1005E0C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E0C9: jne 0x10015729 */
L_1005E0CF:
    MEM32(ebp + (-0x14)) = 0xFEFFu; /* 0x1005E0CF: mov dword ptr [ebp - 0x14], 0xfeff */
    goto L_1005E0E5; /* 0x1005E0D6: jmp 0x1005e0e5 */
L_1005E0D8:
    PUSH32(esp, 3); /* 0x1005E0D8: push 3 */
    ecx = POP32_VAL(esp); /* 0x1005E0DA: pop ecx */
    MEM32(ebp + (-0x14)) = 0x00BFBBEFu; /* 0x1005E0DB: mov dword ptr [ebp - 0x14], 0xbfbbef */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005E0E2: mov dword ptr [ebp - 0x28], ecx */
L_1005E0E5:
    eax = ecx; /* 0x1005E0E5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1005E0E7: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1005E0E9: push eax */
    eax = ebp + (-0x14); /* 0x1005E0EA: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1005E0ED: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005E0EF: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0F0: push dword ptr [edi] */
    RECOMP_CALL(sub_1002029C); /* 0x1005E0F2: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005E0F7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0FA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0FD: je 0x1002df97 */
L_1005E103:
    ecx = MEM32(ebp + (-0x28)); /* 0x1005E103: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1005E106: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x1005E108: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E10A: jle 0x10015729 */
L_1005E110:
    RECOMP_BACKEDGE();
    goto L_1005E0E5; /* 0x1005E110: jmp 0x1005e0e5 */
L_1005E112:
    ecx = MEM32(edi); /* 0x1005E112: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E114: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E116: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E119: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E11C: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E11C: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E11F: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1005E126: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1005E12B: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10015784; /* 0x1005E12E: jmp 0x10015784 */
L_1005E133:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005E133: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1005E136: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1005E13C: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x38); /* 0x1005E13F: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1005E142: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1005E148: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 3); /* 0x1005E14B: push 3 */
    PUSH32(esp, eax); /* 0x1005E14D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1005E14E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1005E151: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005E152: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x1005E155: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005E15A: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E15D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E194; /* 0x1005E160: jne 0x1005e194 */
L_1005E162:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E162: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005E168: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E169: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1005E16E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E170: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E172: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E175: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E178: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E178: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E17B: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1005E182: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1005E187: push dword ptr [edi] */
    RECOMP_CALL(sub_10014D8E); /* 0x1005E189: call 0x10014d8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E18E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002E2DC; /* 0x1005E18F: jmp 0x1002e2dc */
L_1005E194:
    edx = MEM32(edi); /* 0x1005E194: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1005E196: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1005E198: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1005E19B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x1005E19E: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x1005E19E: shl edx, 6 */
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E1A1: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM32(edx + ecx) = eax; /* 0x1005E1A8: mov dword ptr [edx + ecx], eax */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E1AB: jmp 0x10015798 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031770u);

L_10031770:
    PUSH32(esp, ebp); /* 0x10031770: push ebp */
    ebp = esp; /* 0x10031771: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10031773: push esi */
    PUSH32(esp, 4); /* 0x10031774: push 4 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10031776: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003177B: pop ecx */
    PUSH32(esp, MEM32(0x100E0D54)); /* 0x1003177C: push dword ptr [0x100e0d54] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10031782: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031788: push dword ptr [ebp + 8] */
    esi = eax; /* 0x1003178B: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1003178D: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x10031793: push 4 */
    MEM32(0x100E0D54) = eax; /* 0x10031795: mov dword ptr [0x100e0d54], eax */
    RECOMP_CALL(sub_1000EDFC); /* 0x1003179A: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003179F: pop ecx */
    eax = esi; /* 0x100317A0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100317A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100317A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100317A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100317A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100317A5u);

L_100317A5:
    PUSH32(esp, ebp); /* 0x100317A5: push ebp */
    ebp = esp; /* 0x100317A6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100317A8: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100317AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100317B8; /* 0x100317AD: je 0x100317b8 */
L_100317AF:
    /* cmp ecx, 1 */ /* 0x100317AF: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100538B0; /* 0x100317B2: jne 0x100538b0 */
L_100317B8:
    eax = MEM32(0x100E0ED4); /* 0x100317B8: mov eax, dword ptr [0x100e0ed4] */
    MEM32(0x100E0ED4) = ecx; /* 0x100317BD: mov dword ptr [0x100e0ed4], ecx */
    ebp = POP32_VAL(esp); /* 0x100317C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100317C4: ret  */
L_100538B0:
    RECOMP_CALL(sub_1001177D); /* 0x100538B0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100538B5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100538BB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100538C0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100538C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100538C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003185B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003185Bu);

    goto L_1003185B;
L_100314E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100314E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100314E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x22u); /* 0x100314E6: push 0x22 */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100314E8: sete al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100314EB: add ecx, 2 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100314EE: mov edi, eax */
    eax = POP32_VAL(esp); /* 0x100314F0: pop eax */
    goto L_100318BB; /* 0x100314F1: jmp 0x100318bb */
L_100314F6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100314F6: add ecx, 2 */
    _flag_k = FK_ADD;
    goto L_100318E6; /* 0x100314F9: jmp 0x100318e6 */
L_100314FE:
    /* test LO8(ebx), 1 */ /* 0x100314FE: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031527; /* 0x10031501: jne 0x10031527 */
L_10031503:
    /* test esi, esi */ /* 0x10031503: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031517; /* 0x10031505: je 0x10031517 */
L_10031507:
    PUSH32(esp, 0x22u); /* 0x10031507: push 0x22 */
    edi = POP32_VAL(esp); /* 0x10031509: pop edi */
    /* cmp MEM16(ecx + 0x2), LO16(edi) */ /* 0x1003150A: cmp word ptr [ecx + 2], di */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edi = MEM32(ebp + 0x18); /* 0x1003150E: mov edi, dword ptr [ebp + 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053D59; /* 0x10031511: je 0x10053d59 */
L_10031517:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10031517: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003151B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1003151D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1003151F: sete al */
    esi = eax; /* 0x10031522: mov esi, eax */
L_10031524:
    PUSH32(esp, 0x5Cu); /* 0x10031524: push 0x5c */
    eax = POP32_VAL(esp); /* 0x10031526: pop eax */
L_10031527:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10031527: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10031527: shr ebx, 1 */
    goto L_1003193C; /* 0x10031529: jmp 0x1003193c */
L_1003152E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1003152E: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10031531: inc ebx */
    _flag_k = FK_INC;
    goto L_10031924; /* 0x10031532: jmp 0x10031924 */
L_10031537:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10031537: dec ebx */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x10031538: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031542; /* 0x1003153A: je 0x10031542 */
L_1003153C:
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1003153C: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1003153F: add edx, 2 */
    _flag_k = FK_ADD;
L_10031542:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10031542: inc dword ptr [edi] */
    _flag_k = FK_INC;
    goto L_1003193C; /* 0x10031544: jmp 0x1003193c */
L_10031830:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x10031830: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031840; /* 0x10031834: je 0x10031840 */
L_10031836:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x10031836: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031958; /* 0x1003183A: jne 0x10031958 */
L_10031840:
    MEM32(ebp + (-0x8)) = esi; /* 0x10031840: mov dword ptr [ebp - 8], esi */
    esi = MEM32(ebp + 0xC); /* 0x10031843: mov esi, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10031846: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031852; /* 0x10031848: je 0x10031852 */
L_1003184A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003184A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1003184C: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1003184F: add edx, 2 */
    _flag_k = FK_ADD;
L_10031852:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10031852: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10031854: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100318DD; /* 0x10031856: jmp 0x100318dd */
L_1003185B:
    PUSH32(esp, ebp); /* 0x1003185B: push ebp */
    ebp = esp; /* 0x1003185C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1003185E: push ecx */
    PUSH32(esp, ecx); /* 0x1003185F: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x10031860: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x10031863: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x10031866: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x10031869: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1003186A: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1003186D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1003186E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10031871: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10031872: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edi; /* 0x10031874: mov dword ptr [ebx], edi */
    MEM32(eax) = 1; /* 0x10031876: mov dword ptr [eax], 1 */
    /* test esi, esi */ /* 0x1003187C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031888; /* 0x1003187E: je 0x10031888 */
L_10031880:
    MEM32(esi) = edx; /* 0x10031880: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10031882: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x10031885: mov dword ptr [ebp + 0xc], esi */
L_10031888:
    MEM32(ebp + 0x8) = 0x20u; /* 0x10031888: mov dword ptr [ebp + 8], 0x20 */
    MEM32(ebp + (-0x4)) = 9; /* 0x1003188F: mov dword ptr [ebp - 4], 9 */
L_10031896:
    PUSH32(esp, 0x22u); /* 0x10031896: push 0x22 */
    eax = POP32_VAL(esp); /* 0x10031898: pop eax */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x10031899: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314E2; /* 0x1003189C: je 0x100314e2 */
L_100318A2:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x100318A2: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x100318A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031971; /* 0x100318A6: jne 0x10031971 */
L_100318AC:
    eax = (uint32_t)MEM16(ecx); /* 0x100318AC: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100318AF: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100318B2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034310; /* 0x100318B5: je 0x10034310 */
L_100318BB:
    /* test edi, edi */ /* 0x100318BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031896; /* 0x100318BD: jne 0x10031896 */
L_100318BF:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x100318BF: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100318CB; /* 0x100318C3: je 0x100318cb */
L_100318C5:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x100318C5: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031896; /* 0x100318C9: jne 0x10031896 */
L_100318CB:
    /* test edx, edx */ /* 0x100318CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100318D5; /* 0x100318CD: je 0x100318d5 */
L_100318CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100318CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x100318D1: mov word ptr [edx - 2], ax */
L_100318D5:
    edi = MEM32(ebp + 0x18); /* 0x100318D5: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100318D8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x100318DA: mov dword ptr [ebp - 8], ebx */
L_100318DD:
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x100318DD: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031D4A; /* 0x100318E0: je 0x10031d4a */
L_100318E6:
    eax = (uint32_t)MEM16(ecx); /* 0x100318E6: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x100318E9: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314F6; /* 0x100318ED: je 0x100314f6 */
L_100318F3:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x100318F3: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314F6; /* 0x100318F7: je 0x100314f6 */
L_100318FD:
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x100318FD: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031D4A; /* 0x10031900: je 0x10031d4a */
L_10031906:
    /* test esi, esi */ /* 0x10031906: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031912; /* 0x10031908: je 0x10031912 */
L_1003190A:
    MEM32(esi) = edx; /* 0x1003190A: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003190C: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x1003190F: mov dword ptr [ebp + 0xc], esi */
L_10031912:
    eax = MEM32(ebp + 0x14); /* 0x10031912: mov eax, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x8)); /* 0x10031915: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x10031918: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_1003191A:
    PUSH32(esp, 0x5Cu); /* 0x1003191A: push 0x5c */
    MEM32(ebp + (-0x8)) = 1; /* 0x1003191C: mov dword ptr [ebp - 8], 1 */
    eax = POP32_VAL(esp); /* 0x10031923: pop eax */
L_10031924:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x10031924: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003152E; /* 0x10031927: je 0x1003152e */
L_1003192D:
    PUSH32(esp, 0x22u); /* 0x1003192D: push 0x22 */
    eax = POP32_VAL(esp); /* 0x1003192F: pop eax */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x10031930: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x5Cu); /* 0x10031933: push 0x5c */
    eax = POP32_VAL(esp); /* 0x10031935: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314FE; /* 0x10031936: je 0x100314fe */
L_1003193C:
    /* test ebx, ebx */ /* 0x1003193C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031537; /* 0x1003193E: jne 0x10031537 */
L_10031944:
    eax = (uint32_t)MEM16(ecx); /* 0x10031944: movzx eax, word ptr [ecx] */
    /* test LO16(eax), LO16(eax) */ /* 0x10031947: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031840; /* 0x1003194A: je 0x10031840 */
L_10031950:
    /* test esi, esi */ /* 0x10031950: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031830; /* 0x10031952: je 0x10031830 */
L_10031958:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x10031958: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003196A; /* 0x1003195C: je 0x1003196a */
L_1003195E:
    /* test edx, edx */ /* 0x1003195E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031968; /* 0x10031960: je 0x10031968 */
L_10031962:
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x10031962: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10031965: add edx, 2 */
    _flag_k = FK_ADD;
L_10031968:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10031968: inc dword ptr [edi] */
    _flag_k = FK_INC;
L_1003196A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1003196A: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1003196D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003191A; /* 0x1003196F: jmp 0x1003191a */
L_10031971:
    SET_LO16(eax, MEM16(ecx)); /* 0x10031971: mov ax, word ptr [ecx] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x10031974: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10031977: add edx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100318AC; /* 0x1003197A: jmp 0x100318ac */
L_10031D4A:
    /* test esi, esi */ /* 0x10031D4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031D50; /* 0x10031D4C: je 0x10031d50 */
L_10031D4E:
    MEM32(esi) = ebx; /* 0x10031D4E: mov dword ptr [esi], ebx */
L_10031D50:
    eax = MEM32(ebp + 0x14); /* 0x10031D50: mov eax, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x10031D53: pop edi */
    esi = POP32_VAL(esp); /* 0x10031D54: pop esi */
    ebx = POP32_VAL(esp); /* 0x10031D55: pop ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x10031D56: inc dword ptr [eax] */
    _flag_k = FK_INC;
    esp = ebp; /* 0x10031D58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10031D5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031D5B: ret  */
L_10034310:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x10034310: sub ecx, 2 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100318D5; /* 0x10034313: jmp 0x100318d5 */
L_10053D59:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10053D59: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031524; /* 0x10053D5C: jmp 0x10031524 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031AA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031AA4u);

L_10031AA4:
    /* cmp eax, 0x3B00u */ /* 0x10031AA4: cmp eax, 0x3b00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3B00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ebp + 0x3F850FDB)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x3F850FDB) = (uint8_t)(MEM8(ebp + 0x3F850FDB) + LO8(eax)); /* 0x10031AA9: add byte ptr [ebp + 0x3f850fdb], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10031AAF: stc  */
    RECOMP_ITAIL(0x10031AB0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10031B83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031B83u);

L_10031B83:
    PUSH32(esp, 0x14u); /* 0x10031B83: push 0x14 */
    PUSH32(esp, 0x10031C00u); /* 0x10031B85: push 0x10031c00 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10031B8A: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10031B8F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x10031B91: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031B94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x10031B96: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10031B99: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10031B9B: setne al */
    /* test eax, eax */ /* 0x10031B9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054FCE; /* 0x10031BA0: je 0x10054fce */
L_10031BA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031BA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x10031BA8: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x10031BAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10031BAD: setne al */
    /* test eax, eax */ /* 0x10031BB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054FCE; /* 0x10031BB2: je 0x10054fce */
L_10031BB8:
    PUSH32(esp, ebx); /* 0x10031BB8: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031BB9: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x10031BBE: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, edi); /* 0x10031BC1: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10031BC2: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031BC7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10031BC8: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x10031BC9: mov dword ptr [ebp - 4], esi */
L_10031BCC:
    ecx = MEM32(ebp + (-0x1C)); /* 0x10031BCC: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ecx; /* 0x10031BCF: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10031BD1: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10031BD2: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x10031BD5: mov dword ptr [ebp - 0x24], ecx */
    /* test eax, eax */ /* 0x10031BD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031C1C; /* 0x10031BDA: je 0x10031c1c */
L_10031BDC:
    eax = (uint32_t)MEM16(ebx); /* 0x10031BDC: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x10031BDF: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x10031BE2: mov dword ptr [ebp + 8], ebx */
    PUSH32(esp, edi); /* 0x10031BE5: push edi */
    PUSH32(esp, eax); /* 0x10031BE6: push eax */
    RECOMP_CALL(sub_1001CCA8); /* 0x10031BE7: call 0x1001cca8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031BEC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10031BED: pop ecx */
    ecx = 0xFFFFu; /* 0x10031BEE: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10031BF3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031BCC; /* 0x10031BF6: jne 0x10031bcc */
L_10031BF8:
    goto L_10054FE8; /* 0x10031BF8: jmp 0x10054fe8 */
L_10031C1C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10031C1C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10031C30); /* 0x10031C23: call 0x10031c30 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10031C28: mov eax, esi */
L_10031C2A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10031C2A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C2F: ret  */
L_10054FCE:
    RECOMP_CALL(sub_1001177D); /* 0x10054FCE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054FD3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054FD9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0xFFFFu; /* 0x10054FDE: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_10031C2A; /* 0x10054FE3: jmp 0x10031c2a */
L_10054FE8:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10054FE8: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x10054FEB: mov dword ptr [ebp - 0x20], esi */
    RECOMP_BACKEDGE();
    goto L_10031C1C; /* 0x10054FEE: jmp 0x10031c1c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031C30u);

L_10031C30:
    PUSH32(esp, edi); /* 0x10031C30: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x10031C31: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031C36: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C37: ret  */
    RECOMP_REGS_OUT();
}

void sub_10031C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031C38u);

    goto L_10031C38;
L_100313FA:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100313FA: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10031C54; /* 0x10031400: jmp 0x10031c54 */
L_10031C38:
    PUSH32(esp, ebp); /* 0x10031C38: push ebp */
    ebp = esp; /* 0x10031C39: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10031C3B: pop ebp */
    goto L_10031C3E; /* 0x10031C3C: jmp 0x10031c3e */
L_10031C3E:
    PUSH32(esp, ebp); /* 0x10031C3E: push ebp */
    ebp = esp; /* 0x10031C3F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031C41: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50C8)); /* 0x10031C44: call dword ptr [0x100e50c8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10031C4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100313FA; /* 0x10031C4C: je 0x100313fa */
L_10031C52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031C52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10031C54:
    /* test eax, eax */ /* 0x10031C54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031C5C; /* 0x10031C56: jne 0x10031c5c */
L_10031C58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10031C5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C5B: ret  */
L_10031C5C:
    PUSH32(esp, eax); /* 0x10031C5C: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10031C5D: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031C62: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10031C63: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10031C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C67: ret  */
    RECOMP_REGS_OUT();
}

void sub_10031C3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031C3Eu);

    goto L_10031C3E;
L_100313FA:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100313FA: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10031C54; /* 0x10031400: jmp 0x10031c54 */
L_10031C3E:
    PUSH32(esp, ebp); /* 0x10031C3E: push ebp */
    ebp = esp; /* 0x10031C3F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031C41: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50C8)); /* 0x10031C44: call dword ptr [0x100e50c8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10031C4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100313FA; /* 0x10031C4C: je 0x100313fa */
L_10031C52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031C52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10031C54:
    /* test eax, eax */ /* 0x10031C54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031C5C; /* 0x10031C56: jne 0x10031c5c */
L_10031C58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10031C5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C5B: ret  */
L_10031C5C:
    PUSH32(esp, eax); /* 0x10031C5C: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10031C5D: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031C62: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10031C63: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10031C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031C67: ret  */
    RECOMP_REGS_OUT();
}

void sub_10031D5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031D5Cu);

L_10031D5C:
    PUSH32(esp, ebp); /* 0x10031D5C: push ebp */
    ebp = esp; /* 0x10031D5D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10031D5F: push ecx */
    PUSH32(esp, ecx); /* 0x10031D60: push ecx */
    PUSH32(esp, ebx); /* 0x10031D61: push ebx */
    PUSH32(esp, esi); /* 0x10031D62: push esi */
    PUSH32(esp, edi); /* 0x10031D63: push edi */
    PUSH32(esp, 0x104u); /* 0x10031D64: push 0x104 */
    ebx = 0x100E1008u; /* 0x10031D69: mov ebx, 0x100e1008 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031D6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10031D70: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10031D71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(0x100E1210) = (uint16_t)(LO16(eax)); /* 0x10031D73: mov word ptr [0x100e1210], ax */
    PUSH32(esp, edi); /* 0x10031D79: push edi */
    RECOMP_ICALL(MEM32(0x100E5050)); /* 0x10031D7A: call dword ptr [0x100e5050] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF634); /* 0x10031D80: mov esi, dword ptr [0x100df634] */
    MEM32(0x100DF624) = ebx; /* 0x10031D86: mov dword ptr [0x100df624], ebx */
    /* test esi, esi */ /* 0x10031D8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031E03; /* 0x10031D8E: je 0x10031e03 */
L_10031D90:
    /* cmp MEM16(esi), LO16(edi) */ /* 0x10031D90: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031E03; /* 0x10031D93: je 0x10031e03 */
L_10031D95:
    eax = ebp + (-0x8); /* 0x10031D95: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10031D98: push eax */
    eax = ebp + (-0x4); /* 0x10031D99: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10031D9C: push eax */
    PUSH32(esp, edi); /* 0x10031D9D: push edi */
    PUSH32(esp, edi); /* 0x10031D9E: push edi */
    PUSH32(esp, esi); /* 0x10031D9F: push esi */
    RECOMP_CALL(sub_1003185B); /* 0x10031DA0: call 0x1003185b */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x10031DA5: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10031DA8: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x10031DAB: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10031E07; /* 0x10031DB1: jae 0x10031e07 */
L_10031DB3:
    eax = MEM32(ebp + (-0x8)); /* 0x10031DB3: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x10031DB6: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10031E07; /* 0x10031DBB: jae 0x10031e07 */
L_10031DBD:
    ecx = eax + ebx * 2; /* 0x10031DBD: lea ecx, [eax + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10031DC0: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x10031DC2: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x10031DC4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10031E07; /* 0x10031DC6: jb 0x10031e07 */
L_10031DC8:
    PUSH32(esp, ecx); /* 0x10031DC8: push ecx */
    RECOMP_CALL(sub_10012226); /* 0x10031DC9: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10031DCE: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10031DD0: pop ecx */
    /* test edi, edi */ /* 0x10031DD1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031E07; /* 0x10031DD3: je 0x10031e07 */
L_10031DD5:
    eax = ebp + (-0x8); /* 0x10031DD5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10031DD8: push eax */
    eax = ebp + (-0x4); /* 0x10031DD9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10031DDC: push eax */
    eax = edi + ebx * 4; /* 0x10031DDD: lea eax, [edi + ebx*4] */
    PUSH32(esp, eax); /* 0x10031DE0: push eax */
    PUSH32(esp, edi); /* 0x10031DE1: push edi */
    PUSH32(esp, esi); /* 0x10031DE2: push esi */
    RECOMP_CALL(sub_1003185B); /* 0x10031DE3: call 0x1003185b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10031DE8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10031DEB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10031DEE: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF614) = edi; /* 0x10031DEF: mov dword ptr [0x100df614], edi */
    MEM32(0x100DF60C) = eax; /* 0x10031DF5: mov dword ptr [0x100df60c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031DFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10031DFC:
    edi = POP32_VAL(esp); /* 0x10031DFC: pop edi */
    esi = POP32_VAL(esp); /* 0x10031DFD: pop esi */
    ebx = POP32_VAL(esp); /* 0x10031DFE: pop ebx */
    esp = ebp; /* 0x10031DFF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10031E01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031E02: ret  */
L_10031E03:
    esi = ebx; /* 0x10031E03: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_10031D95; /* 0x10031E05: jmp 0x10031d95 */
L_10031E07:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10031E07: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10031DFC; /* 0x10031E0A: jmp 0x10031dfc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031E4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031E4Bu);

L_10031E4B:
    PUSH32(esp, ebp); /* 0x10031E4B: push ebp */
    ebp = esp; /* 0x10031E4C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x10031E4E: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10031E51: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10031E56: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10031E58: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10031E5B: push ebx */
    PUSH32(esp, esi); /* 0x10031E5C: push esi */
    PUSH32(esp, edi); /* 0x10031E5D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10031E5E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x10031E60: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x10031E63: mov edx, dword ptr [ebp + 8] */
    edi = ebp + (-0x1C); /* 0x10031E66: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 5); /* 0x10031E69: push 5 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x10031E6B: mov dword ptr [ebp - 0x48], ecx */
    esi = 0x10031FACu; /* 0x10031E6E: mov esi, 0x10031fac */
    MEM32(ebp + (-0x34)) = ecx; /* 0x10031E73: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x38)) = ecx; /* 0x10031E76: mov dword ptr [ebp - 0x38], ecx */
    ecx = POP32_VAL(esp); /* 0x10031E79: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x10031E7A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x10031E7C: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10031E7F: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x14); /* 0x10031E82: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10031E85: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031E88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x10031E8A: movsw word ptr es:[edi], word ptr [esi] */
    PUSH32(esp, 2); /* 0x10031E8C: push 2 */
    MEM32(ebp + (-0x30)) = eax; /* 0x10031E8E: mov dword ptr [ebp - 0x30], eax */
    esi = edx; /* 0x10031E91: mov esi, edx */
    MEM32(ebp + (-0x44)) = eax; /* 0x10031E93: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(edx); /* 0x10031E96: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x24)) = edx; /* 0x10031E98: mov dword ptr [ebp - 0x24], edx */
    edi = POP32_VAL(esp); /* 0x10031E9B: pop edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x10031E9C: mov dword ptr [ebp - 0x40], edi */
    /* test eax, eax */ /* 0x10031E9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031EB9; /* 0x10031EA1: je 0x10031eb9 */
L_10031EA3:
    PUSH32(esp, eax); /* 0x10031EA3: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031EA4: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10031EA9: inc eax */
    _flag_k = FK_INC;
    esi = esi + 0x4; /* 0x10031EAA: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10031EAD: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x10031EAF: mov eax, dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x10031EB1: pop ecx */
    /* test eax, eax */ /* 0x10031EB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031EA3; /* 0x10031EB4: jne 0x10031ea3 */
L_10031EB6:
    MEM32(ebp + (-0x40)) = edi; /* 0x10031EB6: mov dword ptr [ebp - 0x40], edi */
L_10031EB9:
    PUSH32(esp, 2); /* 0x10031EB9: push 2 */
    PUSH32(esp, edi); /* 0x10031EBB: push edi */
    RECOMP_CALL(sub_10011208); /* 0x10031EBC: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031EC1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10031EC2: pop ecx */
    ecx = MEM32(ebp + (-0x2C)); /* 0x10031EC3: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(ecx) = eax; /* 0x10031EC6: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x10031EC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054883; /* 0x10031ECA: je 0x10054883 */
L_10031ED0:
    eax = ebp + (-0x1C); /* 0x10031ED0: lea eax, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10031ED3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10031ED5: push eax */
    eax = ebp + (-0x30); /* 0x10031ED6: lea eax, [ebp - 0x30] */
    PUSH32(esp, edi); /* 0x10031ED9: push edi */
    PUSH32(esp, eax); /* 0x10031EDA: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x10031EDB: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031EE0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10031EE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100548A6; /* 0x10031EE5: jne 0x100548a6 */
L_10031EEB:
    eax = ebp + (-0x1C); /* 0x10031EEB: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10031EEE: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031EEF: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031EF4: pop ecx */
    esi = eax + 0x2; /* 0x10031EF5: lea esi, [eax + 2] */
    MEM32(ebp + (-0x3C)) = esi; /* 0x10031EF8: mov dword ptr [ebp - 0x3c], esi */
    /* cmp MEM32(ebp + (-0x30)), edi */ /* 0x10031EFB: cmp dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031F0E; /* 0x10031EFE: je 0x10031f0e */
L_10031F00:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x10031F00: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031F03: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10031F08: add esi, eax */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x10031F0A: pop ecx */
    MEM32(ebp + (-0x3C)) = esi; /* 0x10031F0B: mov dword ptr [ebp - 0x3c], esi */
L_10031F0E:
    /* test ebx, ebx */ /* 0x10031F0E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100548B4; /* 0x10031F10: jne 0x100548b4 */
L_10031F16:
    ecx = MEM32(ebp + (-0x20)); /* 0x10031F16: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx) = edi; /* 0x10031F19: mov dword ptr [ecx], edi */
L_10031F1B:
    eax = MEM32(ebp + (-0x24)); /* 0x10031F1B: mov eax, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x2C)); /* 0x10031F1E: mov edx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(eax), 0 */ /* 0x10031F21: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(edx); /* 0x10031F24: mov esi, dword ptr [edx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054A22; /* 0x10031F26: je 0x10054a22 */
L_10031F2C:
    PUSH32(esp, MEM32(eax)); /* 0x10031F2C: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x40)); /* 0x10031F2E: mov eax, dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x10031F31: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10031F33: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10031F35: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10031F37: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10031F39: push eax */
    PUSH32(esp, esi); /* 0x10031F3A: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10031F3B: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031F40: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10031F43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032013; /* 0x10031F45: jne 0x10032013 */
L_10031F4B:
    eax = MEM32(ebp + (-0x24)); /* 0x10031F4B: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(eax)); /* 0x10031F4E: push dword ptr [eax] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031F50: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031F55: pop ecx */
    esi = esi + eax * 2; /* 0x10031F56: lea esi, [esi + eax*2] */
    eax = MEM32(ebp + (-0x24)); /* 0x10031F59: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031F5C: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10031F5F: add eax, 4 */
    _flag_k = FK_ADD;
L_10031F62:
    edx = MEM32(ebp + (-0x2C)); /* 0x10031F62: mov edx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10031F65: mov dword ptr [ebp - 0x24], eax */
L_10031F68:
    eax = MEM32(eax); /* 0x10031F68: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x10031F6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031FC2; /* 0x10031F6C: je 0x10031fc2 */
L_10031F6E:
    PUSH32(esp, eax); /* 0x10031F6E: push eax */
    eax = MEM32(ebp + (-0x40)); /* 0x10031F6F: mov eax, dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x10031F72: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx); /* 0x10031F74: sub ecx, dword ptr [edx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10031F76: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10031F78: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10031F7A: push eax */
    PUSH32(esp, esi); /* 0x10031F7B: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10031F7C: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031F81: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10031F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032013; /* 0x10031F86: jne 0x10032013 */
L_10031F8C:
    eax = MEM32(ebp + (-0x24)); /* 0x10031F8C: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(eax)); /* 0x10031F8F: push dword ptr [eax] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031F91: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031F96: pop ecx */
    PUSH32(esp, 0x20u); /* 0x10031F97: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x10031F99: pop ecx */
    esi = esi + eax * 2; /* 0x10031F9A: lea esi, [esi + eax*2] */
    eax = MEM32(ebp + (-0x24)); /* 0x10031F9D: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10031FA0: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x10031FA3: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031FA6: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031F62; /* 0x10031FA9: jmp 0x10031f62 */
L_10031FC2:
    MEM32(esi + (-0x2)) = eax; /* 0x10031FC2: mov dword ptr [esi - 2], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x10031FC5: mov eax, dword ptr [ebp - 0x20] */
    esi = MEM32(eax); /* 0x10031FC8: mov esi, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x10031FCA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054A2A; /* 0x10031FCC: jne 0x10054a2a */
L_10031FD2:
    /* test esi, esi */ /* 0x10031FD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AD8; /* 0x10031FD4: jne 0x10054ad8 */
L_10031FDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10031FDA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10031FDC:
    ebx = MEM32(ebp + (-0x34)); /* 0x10031FDC: mov ebx, dword ptr [ebp - 0x34] */
L_10031FDF:
    eax = MEM32(0x100E029C); /* 0x10031FDF: mov eax, dword ptr [0x100e029c] */
    /* test eax, eax */ /* 0x10031FE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AF2; /* 0x10031FE6: jne 0x10054af2 */
L_10031FEC:
    eax = MEM32(ebp + (-0x30)); /* 0x10031FEC: mov eax, dword ptr [ebp - 0x30] */
    MEM32(0x100E029C) = edi; /* 0x10031FEF: mov dword ptr [0x100e029c], edi */
    /* test eax, eax */ /* 0x10031FF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032000; /* 0x10031FF7: je 0x10032000 */
L_10031FF9:
    PUSH32(esp, eax); /* 0x10031FF9: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10031FFA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031FFF: pop ecx */
L_10032000:
    eax = ebx; /* 0x10032000: mov eax, ebx */
L_10032002:
    ecx = MEM32(ebp + (-0x4)); /* 0x10032002: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10032005: pop edi */
    esi = POP32_VAL(esp); /* 0x10032006: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10032007: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10032009: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1003200A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1003200F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032011: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032012: ret  */
L_10032013:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032013: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10032015: push eax */
    PUSH32(esp, eax); /* 0x10032016: push eax */
    PUSH32(esp, eax); /* 0x10032017: push eax */
    PUSH32(esp, eax); /* 0x10032018: push eax */
    PUSH32(esp, eax); /* 0x10032019: push eax */
    goto L_10054B03; /* 0x1003201A: jmp 0x10054b03 */
L_10054883:
    ecx = MEM32(ebp + (-0x20)); /* 0x10054883: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx) = eax; /* 0x10054886: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10054888: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005488D: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x10054893: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x10054898: mov dword ptr [eax], 8 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005489E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032002; /* 0x100548A1: jmp 0x10032002 */
L_100548A6:
    /* cmp eax, 0x16u */ /* 0x100548A6: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x100548A9: je 0x10054afe */
L_100548AF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100548AF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100548F4; /* 0x100548B2: jmp 0x100548f4 */
L_100548B4:
    eax = MEM32(ebx); /* 0x100548B4: mov eax, dword ptr [ebx] */
    esi = ebx; /* 0x100548B6: mov esi, ebx */
    PUSH32(esp, 2); /* 0x100548B8: push 2 */
    edi = POP32_VAL(esp); /* 0x100548BA: pop edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x100548BB: mov dword ptr [ebp - 0x28], edi */
    /* test eax, eax */ /* 0x100548BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100548D8; /* 0x100548C0: je 0x100548d8 */
L_100548C2:
    PUSH32(esp, eax); /* 0x100548C2: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100548C3: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100548C8: inc eax */
    _flag_k = FK_INC;
    esi = esi + 0x4; /* 0x100548C9: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100548CC: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x100548CE: mov eax, dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x100548D0: pop ecx */
    /* test eax, eax */ /* 0x100548D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100548C2; /* 0x100548D3: jne 0x100548c2 */
L_100548D5:
    MEM32(ebp + (-0x28)) = edi; /* 0x100548D5: mov dword ptr [ebp - 0x28], edi */
L_100548D8:
    eax = MEM32(0x100E029C); /* 0x100548D8: mov eax, dword ptr [0x100e029c] */
    /* test eax, eax */ /* 0x100548DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005490E; /* 0x100548DF: jne 0x1005490e */
L_100548E1:
    RECOMP_CALL(sub_100295B9); /* 0x100548E1: call 0x100295b9 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E029C) = eax; /* 0x100548E6: mov dword ptr [0x100e029c], eax */
    /* test eax, eax */ /* 0x100548EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005490E; /* 0x100548ED: jne 0x1005490e */
L_100548EF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100548EF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100548F2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100548F4:
    ebx = MEM32(ebp + (-0x2C)); /* 0x100548F4: mov ebx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x34)) = eax; /* 0x100548F7: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, MEM32(ebx)); /* 0x100548FA: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100548FC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054901: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10054902: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ebx) = edi; /* 0x10054905: mov dword ptr [ebx], edi */
    MEM32(ecx) = edi; /* 0x10054907: mov dword ptr [ecx], edi */
    RECOMP_BACKEDGE();
    goto L_10031FDC; /* 0x10054909: jmp 0x10031fdc */
L_1005490E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005490E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x10054910: mov esi, ecx */
    MEM32(ebp + (-0x38)) = ecx; /* 0x10054912: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, 0x3Du); /* 0x10054915: push 0x3d */
    edx = POP32_VAL(esp); /* 0x10054917: pop edx */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10054918: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005494A; /* 0x1005491B: je 0x1005494a */
L_1005491D:
    ecx = (uint32_t)MEM16(eax); /* 0x1005491D: movzx ecx, word ptr [eax] */
    edx = eax; /* 0x10054920: mov edx, eax */
    PUSH32(esp, 0x3Du); /* 0x10054922: push 0x3d */
    edi = POP32_VAL(esp); /* 0x10054924: pop edi */
L_10054925:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x10054925: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054944; /* 0x10054928: je 0x10054944 */
L_1005492A:
    PUSH32(esp, edx); /* 0x1005492A: push edx */
    RECOMP_CALL(sub_1000F1F3); /* 0x1005492B: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10054930: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10054931: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x100E029C); /* 0x10054933: mov eax, dword ptr [0x100e029c] */
    ecx = POP32_VAL(esp); /* 0x10054938: pop ecx */
    edx = eax + esi * 2; /* 0x10054939: lea edx, [eax + esi*2] */
    ecx = (uint32_t)MEM16(edx); /* 0x1005493C: movzx ecx, word ptr [edx] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1005493F: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054925; /* 0x10054942: jne 0x10054925 */
L_10054944:
    PUSH32(esp, 0x3Du); /* 0x10054944: push 0x3d */
    MEM32(ebp + (-0x38)) = esi; /* 0x10054946: mov dword ptr [ebp - 0x38], esi */
    edx = POP32_VAL(esp); /* 0x10054949: pop edx */
L_1005494A:
    ecx = eax + esi * 2; /* 0x1005494A: lea ecx, [eax + esi*2] */
    edi = esi; /* 0x1005494D: mov edi, esi */
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x1005494F: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054990; /* 0x10054952: jne 0x10054990 */
L_10054954:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10054954: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10054956:
    /* cmp MEM16(ecx + 0x2), LO16(esi) */ /* 0x10054956: cmp word ptr [ecx + 2], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005498D; /* 0x1005495A: je 0x1005498d */
L_1005495C:
    /* cmp MEM16(eax + edi * 2 + 0x4), 0x3Au */ /* 0x1005495C: cmp word ptr [eax + edi*2 + 4], 0x3a */
    _flag_a = (uint32_t)(MEM16(eax + edi * 2 + 0x4)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005498D; /* 0x10054962: jne 0x1005498d */
L_10054964:
    /* cmp MEM16(eax + edi * 2 + 0x6), LO16(edx) */ /* 0x10054964: cmp word ptr [eax + edi*2 + 6], dx */
    _flag_a = (uint32_t)(MEM16(eax + edi * 2 + 0x6)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005498D; /* 0x10054969: jne 0x1005498d */
L_1005496B:
    eax = eax + edi * 2; /* 0x1005496B: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1005496E: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10054971: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054972: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x10054977: add eax, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1005497A: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x100E029C); /* 0x1005497C: mov eax, dword ptr [0x100e029c] */
    ecx = POP32_VAL(esp); /* 0x10054981: pop ecx */
    PUSH32(esp, 0x3Du); /* 0x10054982: push 0x3d */
    edx = POP32_VAL(esp); /* 0x10054984: pop edx */
    ecx = eax + edi * 2; /* 0x10054985: lea ecx, [eax + edi*2] */
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x10054988: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054956; /* 0x1005498B: je 0x10054956 */
L_1005498D:
    esi = MEM32(ebp + (-0x38)); /* 0x1005498D: mov esi, dword ptr [ebp - 0x38] */
L_10054990:
    ecx = MEM32(ebp + (-0x28)); /* 0x10054990: mov ecx, dword ptr [ebp - 0x28] */
    eax = edi; /* 0x10054993: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10054995: sub eax, esi */
    _flag_k = FK_CMP;
    esi = ebx; /* 0x10054997: mov esi, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10054999: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005499B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005499D: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x48)) = ecx; /* 0x100549A0: mov dword ptr [ebp - 0x48], ecx */
    /* cmp MEM32(ebx), eax */ /* 0x100549A3: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100549CF; /* 0x100549A5: je 0x100549cf */
L_100549A7:
    eax = ebp + (-0x1C); /* 0x100549A7: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100549AA: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100549AB: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100549B0: push eax */
    eax = ebp + (-0x1C); /* 0x100549B1: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100549B4: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x100549B5: push dword ptr [esi] */
    RECOMP_CALL(sub_1001C986); /* 0x100549B7: call 0x1001c986 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100549BC: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100549BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054A16; /* 0x100549C1: je 0x10054a16 */
L_100549C3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100549C3: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100549C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), eax */ /* 0x100549C8: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100549A7; /* 0x100549CA: jne 0x100549a7 */
L_100549CC:
    ecx = MEM32(ebp + (-0x28)); /* 0x100549CC: mov ecx, dword ptr [ebp - 0x28] */
L_100549CF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x3C)); /* 0x100549CF: add ecx, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
L_100549D2:
    PUSH32(esp, 2); /* 0x100549D2: push 2 */
    PUSH32(esp, ecx); /* 0x100549D4: push ecx */
    RECOMP_CALL(sub_10011208); /* 0x100549D5: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100549DA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100549DB: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x100549DC: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx) = eax; /* 0x100549DF: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x100549E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031F1B; /* 0x100549E3: jne 0x10031f1b */
L_100549E9:
    ebx = MEM32(ebp + (-0x2C)); /* 0x100549E9: mov ebx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebx)); /* 0x100549EC: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100549EE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100549F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100549F5: pop ecx */
    MEM32(ebx) = edi; /* 0x100549F6: mov dword ptr [ebx], edi */
    RECOMP_CALL(sub_1001177D); /* 0x100549F8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100549FD: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x10054A03: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10054A08: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 8; /* 0x10054A0B: mov dword ptr [eax], 8 */
    RECOMP_BACKEDGE();
    goto L_10031FDF; /* 0x10054A11: jmp 0x10031fdf */
L_10054A16:
    ecx = MEM32(ebp + (-0x28)); /* 0x10054A16: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x44)) = 1; /* 0x10054A19: mov dword ptr [ebp - 0x44], 1 */
    RECOMP_BACKEDGE();
    goto L_100549D2; /* 0x10054A20: jmp 0x100549d2 */
L_10054A22:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10054A22: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031F68; /* 0x10054A25: jmp 0x10031f68 */
L_10054A2A:
    ecx = MEM32(ebp + (-0x38)); /* 0x10054A2A: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x10054A2D: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(0x100E029C); /* 0x10054A2F: mov eax, dword ptr [0x100e029c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x10054A34: add edi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10054A36: push edi */
    eax = eax + ecx * 2; /* 0x10054A37: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x10054A3A: push eax */
    PUSH32(esp, esi); /* 0x10054A3B: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x10054A3C: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x10054A41: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A43: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054A46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), edi */ /* 0x10054A48: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054A89; /* 0x10054A4A: je 0x10054a89 */
L_10054A4C:
    edi = MEM32(ebp + (-0x48)); /* 0x10054A4C: mov edi, dword ptr [ebp - 0x48] */
L_10054A4F:
    eax = MEM32(ebp + (-0x20)); /* 0x10054A4F: mov eax, dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x10054A52: mov ecx, esi */
    PUSH32(esp, MEM32(ebx)); /* 0x10054A54: push dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x10054A56: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x10054A58: mov eax, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10054A5A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10054A5C: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10054A5E: push eax */
    PUSH32(esp, esi); /* 0x10054A5F: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10054A60: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A65: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032013; /* 0x10054A6A: jne 0x10032013 */
L_10054A70:
    PUSH32(esp, MEM32(ebx)); /* 0x10054A70: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054A72: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x10054A77: add ebx, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x10054A7A: pop ecx */
    esi = esi + eax * 2; /* 0x10054A7B: lea esi, [esi + eax*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054A7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10054A80: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), eax */ /* 0x10054A83: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054A4F; /* 0x10054A85: jne 0x10054a4f */
L_10054A87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054A87: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10054A89:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x10054A89: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054AD0; /* 0x10054A8D: jne 0x10054ad0 */
L_10054A8F:
    ebx = MEM32(ebp + (-0x3C)); /* 0x10054A8F: mov ebx, dword ptr [ebp - 0x3c] */
    eax = ebp + (-0x1C); /* 0x10054A92: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10054A95: push eax */
    PUSH32(esp, ebx); /* 0x10054A96: push ebx */
    PUSH32(esp, esi); /* 0x10054A97: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10054A98: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A9D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054AA2: jne 0x10054afe */
L_10054AA4:
    PUSH32(esp, 0x10021264u); /* 0x10054AA4: push 0x10021264 */
    PUSH32(esp, ebx); /* 0x10054AA9: push ebx */
    PUSH32(esp, esi); /* 0x10054AAA: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10054AAB: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054AB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054AB5: jne 0x10054afe */
L_10054AB7:
    eax = MEM32(ebp + (-0x30)); /* 0x10054AB7: mov eax, dword ptr [ebp - 0x30] */
    /* test eax, eax */ /* 0x10054ABA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054ACD; /* 0x10054ABC: je 0x10054acd */
L_10054ABE:
    PUSH32(esp, eax); /* 0x10054ABE: push eax */
    PUSH32(esp, ebx); /* 0x10054ABF: push ebx */
    PUSH32(esp, esi); /* 0x10054AC0: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10054AC1: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054AC6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054ACB: jne 0x10054afe */
L_10054ACD:
    esi = esi + ebx * 2; /* 0x10054ACD: lea esi, [esi + ebx*2] */
L_10054AD0:
    eax = MEM32(ebp + (-0x20)); /* 0x10054AD0: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_10031FD2; /* 0x10054AD3: jmp 0x10031fd2 */
L_10054AD8:
    /* cmp esi, MEM32(eax) */ /* 0x10054AD8: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054AE4; /* 0x10054ADA: jne 0x10054ae4 */
L_10054ADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054ADC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10054ADE: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10054AE1: add esi, 2 */
    _flag_k = FK_ADD;
L_10054AE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054AE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054AE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10054AE8: mov word ptr [esi], ax */
    ebx = eax; /* 0x10054AEB: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_10031FDF; /* 0x10054AED: jmp 0x10031fdf */
L_10054AF2:
    PUSH32(esp, eax); /* 0x10054AF2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054AF3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054AF8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10031FEC; /* 0x10054AF9: jmp 0x10031fec */
L_10054AFE:
    PUSH32(esp, edi); /* 0x10054AFE: push edi */
    PUSH32(esp, edi); /* 0x10054AFF: push edi */
    PUSH32(esp, edi); /* 0x10054B00: push edi */
    PUSH32(esp, edi); /* 0x10054B01: push edi */
    PUSH32(esp, edi); /* 0x10054B02: push edi */
L_10054B03:
    RECOMP_CALL(sub_100A469B); /* 0x10054B03: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10054B08u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031FACu);

    goto L_10031FAC;
L_10031F54:
    RECOMP_ICALL(MEM32(ecx + (-0x73))); /* 0x10031F54: call ptr [ecx - 0x73] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((LO8(eax) ^ 0x46u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x46u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x46u); /* 0x10031F57: xor al, 0x46 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x24)); /* 0x10031F59: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031F5C: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10031F5F: add eax, 4 */
    _flag_k = FK_ADD;
L_10031F62:
    edx = MEM32(ebp + (-0x2C)); /* 0x10031F62: mov edx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10031F65: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(eax); /* 0x10031F68: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x10031F6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031FC2; /* 0x10031F6C: je 0x10031fc2 */
L_10031F6E:
    PUSH32(esp, eax); /* 0x10031F6E: push eax */
    eax = MEM32(ebp + (-0x40)); /* 0x10031F6F: mov eax, dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x10031F72: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx); /* 0x10031F74: sub ecx, dword ptr [edx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10031F76: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10031F78: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10031F7A: push eax */
    PUSH32(esp, esi); /* 0x10031F7B: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10031F7C: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031F81: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10031F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032013; /* 0x10031F86: jne 0x10032013 */
L_10031F8C:
    eax = MEM32(ebp + (-0x24)); /* 0x10031F8C: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(eax)); /* 0x10031F8F: push dword ptr [eax] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10031F91: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031F96: pop ecx */
    PUSH32(esp, 0x20u); /* 0x10031F97: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x10031F99: pop ecx */
    esi = esi + eax * 2; /* 0x10031F9A: lea esi, [esi + eax*2] */
    eax = MEM32(ebp + (-0x24)); /* 0x10031F9D: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10031FA0: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x10031FA3: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031FA6: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031F62; /* 0x10031FA9: jmp 0x10031f62 */
L_10031FAC:
    PUSH32(esp, ebx); /* 0x10031FAC: push ebx */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x10031FAD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10031FB2; /* 0x10031FB0: jae 0x10031fb2 */
L_10031FB2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10031FB4; /* 0x10031FB2: je 0x10031fb4 */
L_10031FB4:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(ecx)); /* 0x10031FB4: add byte ptr gs:[ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x10031FB8: push edx */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x10031FB9: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x10031FBC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(edx)); /* 0x10031FBD: add byte ptr [eax + eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x458BFE46)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x458BFE46) = (uint8_t)(MEM8(ecx + 0x458BFE46) + LO8(ecx)); /* 0x10031FC1: add byte ptr [ecx + 0x458bfe46], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10031FC7; /* falls through past a gap */
L_10031FC2:
    MEM32(esi + (-0x2)) = eax; /* 0x10031FC2: mov dword ptr [esi - 2], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x10031FC5: mov eax, dword ptr [ebp - 0x20] */
    goto L_10031FC8; /* falls through past a gap */
L_10031FC7:
    RECOMP_BACKEDGE();
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)); if (--ecx != 0 && _zc) goto L_10031F54; } /* 0x10031FC7: loopne 0x10031f54 */
    goto L_10031FC9; /* falls through past a gap */
L_10031FC8:
    esi = MEM32(eax); /* 0x10031FC8: mov esi, dword ptr [eax] */
    goto L_10031FCA; /* falls through past a gap */
L_10031FC9:
    _flag_a = (uint32_t)((MEM8(ebp + 0x58850FDB) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x58850FDB) ^ LO8(eax))) << 24;
    MEM8(ebp + 0x58850FDB) = (uint8_t)(MEM8(ebp + 0x58850FDB) ^ LO8(eax)); /* 0x10031FC9: xor byte ptr [ebp + 0x58850fdb], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10031FCF; /* falls through past a gap */
L_10031FCA:
    /* test ebx, ebx */ /* 0x10031FCA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054A2A; /* 0x10031FCC: jne 0x10054a2a */
    goto L_10031FD2; /* falls through past a gap */
L_10031FCF:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(edx)); /* 0x10031FCF: sub al, byte ptr [edx] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x17AF00A))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x17AF00A)) = (uint8_t)(MEM8(ebp + (-0x17AF00A)) + LO8(eax)); /* 0x10031FD1: add byte ptr [ebp - 0x17af00a], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10031FD7; /* falls through past a gap */
L_10031FD2:
    /* test esi, esi */ /* 0x10031FD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AD8; /* 0x10031FD4: jne 0x10054ad8 */
    goto L_10031FDA; /* falls through past a gap */
L_10031FD7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(edx)); /* 0x10031FD7: sub al, byte ptr [edx] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10031FD9: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10031FDB; /* falls through past a gap */
L_10031FDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10031FDA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10031FDC; /* falls through past a gap */
L_10031FDB:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x635E33A3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x635E33A3)) = MEM32(ebx + (-0x635E33A3)) - 1; /* 0x10031FDB: dec dword ptr [ebx - 0x635e33a3] */
    _flag_k = FK_DEC;
    goto L_10031FE1; /* falls through past a gap */
L_10031FDC:
    ebx = MEM32(ebp + (-0x34)); /* 0x10031FDC: mov ebx, dword ptr [ebp - 0x34] */
L_10031FDF:
    eax = MEM32(0x100E029C); /* 0x10031FDF: mov eax, dword ptr [0x100e029c] */
    goto L_10031FE4; /* falls through past a gap */
L_10031FE1:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi)); /* 0x10031FE1: add cl, byte ptr [esi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebp + 0x6850FC0), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10031FE3: adc byte ptr [ebp + 0x6850fc0], al */
      MEM8(ebp + 0x6850FC0) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10031FE9; /* falls through past a gap */
L_10031FE4:
    /* test eax, eax */ /* 0x10031FE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AF2; /* 0x10031FE6: jne 0x10054af2 */
    goto L_10031FEC; /* falls through past a gap */
L_10031FE9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x10031FE9: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ebx + 0x3D89D045)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x3D89D045) = (uint8_t)(MEM8(ebx + 0x3D89D045) + LO8(ecx)); /* 0x10031FEB: add byte ptr [ebx + 0x3d89d045], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10031FF1; /* falls through past a gap */
L_10031FEC:
    eax = MEM32(ebp + (-0x30)); /* 0x10031FEC: mov eax, dword ptr [ebp - 0x30] */
    MEM32(0x100E029C) = edi; /* 0x10031FEF: mov dword ptr [0x100e029c], edi */
    goto L_10031FF5; /* falls through past a gap */
L_10031FF1:
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x10031FF1: pushfd  */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi)); /* 0x10031FF2: add cl, byte ptr [esi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebp + 0x500774C0), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10031FF4: adc byte ptr [ebp + 0x500774c0], al */
      MEM8(ebp + 0x500774C0) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10031FFA; /* falls through past a gap */
L_10031FF5:
    /* test eax, eax */ /* 0x10031FF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032000; /* 0x10031FF7: je 0x10032000 */
L_10031FF9:
    PUSH32(esp, eax); /* 0x10031FF9: push eax */
L_10031FFA:
    RECOMP_CALL(sub_1000ECE0); /* 0x10031FFA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031FFF: pop ecx */
L_10032000:
    eax = ebx; /* 0x10032000: mov eax, ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10032002: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10032005: pop edi */
    esi = POP32_VAL(esp); /* 0x10032006: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10032007: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10032009: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1003200A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1003200F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032011: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032012: ret  */
L_10032013:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032013: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10032015: push eax */
    PUSH32(esp, eax); /* 0x10032016: push eax */
    PUSH32(esp, eax); /* 0x10032017: push eax */
    PUSH32(esp, eax); /* 0x10032018: push eax */
    PUSH32(esp, eax); /* 0x10032019: push eax */
    goto L_10054B03; /* 0x1003201A: jmp 0x10054b03 */
L_10054A2A:
    ecx = MEM32(ebp + (-0x38)); /* 0x10054A2A: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x10054A2D: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(0x100E029C); /* 0x10054A2F: mov eax, dword ptr [0x100e029c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x10054A34: add edi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10054A36: push edi */
    eax = eax + ecx * 2; /* 0x10054A37: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x10054A3A: push eax */
    PUSH32(esp, esi); /* 0x10054A3B: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x10054A3C: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x10054A41: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A43: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054A46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), edi */ /* 0x10054A48: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054A89; /* 0x10054A4A: je 0x10054a89 */
L_10054A4C:
    edi = MEM32(ebp + (-0x48)); /* 0x10054A4C: mov edi, dword ptr [ebp - 0x48] */
L_10054A4F:
    eax = MEM32(ebp + (-0x20)); /* 0x10054A4F: mov eax, dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x10054A52: mov ecx, esi */
    PUSH32(esp, MEM32(ebx)); /* 0x10054A54: push dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x10054A56: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x10054A58: mov eax, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10054A5A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10054A5C: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10054A5E: push eax */
    PUSH32(esp, esi); /* 0x10054A5F: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10054A60: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A65: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032013; /* 0x10054A6A: jne 0x10032013 */
L_10054A70:
    PUSH32(esp, MEM32(ebx)); /* 0x10054A70: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054A72: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x10054A77: add ebx, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x10054A7A: pop ecx */
    esi = esi + eax * 2; /* 0x10054A7B: lea esi, [esi + eax*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054A7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10054A80: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), eax */ /* 0x10054A83: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054A4F; /* 0x10054A85: jne 0x10054a4f */
L_10054A87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054A87: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10054A89:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x10054A89: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054AD0; /* 0x10054A8D: jne 0x10054ad0 */
L_10054A8F:
    ebx = MEM32(ebp + (-0x3C)); /* 0x10054A8F: mov ebx, dword ptr [ebp - 0x3c] */
    eax = ebp + (-0x1C); /* 0x10054A92: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10054A95: push eax */
    PUSH32(esp, ebx); /* 0x10054A96: push ebx */
    PUSH32(esp, esi); /* 0x10054A97: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10054A98: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054A9D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054AA2: jne 0x10054afe */
L_10054AA4:
    PUSH32(esp, 0x10021264u); /* 0x10054AA4: push 0x10021264 */
    PUSH32(esp, ebx); /* 0x10054AA9: push ebx */
    PUSH32(esp, esi); /* 0x10054AAA: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10054AAB: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054AB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054AB5: jne 0x10054afe */
L_10054AB7:
    eax = MEM32(ebp + (-0x30)); /* 0x10054AB7: mov eax, dword ptr [ebp - 0x30] */
    /* test eax, eax */ /* 0x10054ABA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054ACD; /* 0x10054ABC: je 0x10054acd */
L_10054ABE:
    PUSH32(esp, eax); /* 0x10054ABE: push eax */
    PUSH32(esp, ebx); /* 0x10054ABF: push ebx */
    PUSH32(esp, esi); /* 0x10054AC0: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10054AC1: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054AC6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054AC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054AFE; /* 0x10054ACB: jne 0x10054afe */
L_10054ACD:
    esi = esi + ebx * 2; /* 0x10054ACD: lea esi, [esi + ebx*2] */
L_10054AD0:
    eax = MEM32(ebp + (-0x20)); /* 0x10054AD0: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_10031FD2; /* 0x10054AD3: jmp 0x10031fd2 */
L_10054AD8:
    /* cmp esi, MEM32(eax) */ /* 0x10054AD8: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054AE4; /* 0x10054ADA: jne 0x10054ae4 */
L_10054ADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054ADC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10054ADE: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10054AE1: add esi, 2 */
    _flag_k = FK_ADD;
L_10054AE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054AE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10054AE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10054AE8: mov word ptr [esi], ax */
    ebx = eax; /* 0x10054AEB: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_10031FDF; /* 0x10054AED: jmp 0x10031fdf */
L_10054AF2:
    PUSH32(esp, eax); /* 0x10054AF2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054AF3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054AF8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10031FEC; /* 0x10054AF9: jmp 0x10031fec */
L_10054AFE:
    PUSH32(esp, edi); /* 0x10054AFE: push edi */
    PUSH32(esp, edi); /* 0x10054AFF: push edi */
    PUSH32(esp, edi); /* 0x10054B00: push edi */
    PUSH32(esp, edi); /* 0x10054B01: push edi */
    PUSH32(esp, edi); /* 0x10054B02: push edi */
L_10054B03:
    RECOMP_CALL(sub_100A469B); /* 0x10054B03: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10054B08u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003201F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003201Fu);

L_1003201F:
    PUSH32(esp, ebp); /* 0x1003201F: push ebp */
    ebp = esp; /* 0x10032020: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10032022: push ecx */
    PUSH32(esp, esi); /* 0x10032023: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10032024: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x10032027: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054D10; /* 0x10032029: je 0x10054d10 */
L_1003202F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1003202F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054D10; /* 0x10032033: je 0x10054d10 */
L_10032039:
    PUSH32(esp, esi); /* 0x10032039: push esi */
    eax = ebp + (-0x4); /* 0x1003203A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1003203D: push eax */
    eax = ebp + 0xC; /* 0x1003203E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10032041: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10032042: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10032045: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10031E4B); /* 0x10032048: call 0x10031e4b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1003204D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10032050: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032080; /* 0x10032053: je 0x10032080 */
L_10032055:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10032055: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10032058: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1003205B: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1003205C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100322AF); /* 0x1003205F: call 0x100322af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10032064: push dword ptr [ebp + 0xc] */
    esi = eax; /* 0x10032067: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10032069: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1003206E: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10032071: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10032076: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10032079: mov eax, esi */
L_1003207B:
    esi = POP32_VAL(esp); /* 0x1003207B: pop esi */
    esp = ebp; /* 0x1003207C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1003207E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003207F: ret  */
L_10032080:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10032080: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003207B; /* 0x10032083: jmp 0x1003207b */
L_10054D10:
    RECOMP_CALL(sub_1001177D); /* 0x10054D10: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054D15: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054D1B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10032080; /* 0x10054D20: jmp 0x10032080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032085(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032085u);

L_10032085:
    PUSH32(esp, ebp); /* 0x10032085: push ebp */
    ebp = esp; /* 0x10032086: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10032088: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1003208B: push esi */
    PUSH32(esp, edi); /* 0x1003208C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1003208D: mov edi, dword ptr [ebp + 0xc] */
    esi = edi; /* 0x10032090: mov esi, edi */
    /* test edi, edi */ /* 0x10032092: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032126; /* 0x10032094: je 0x10032126 */
L_1003209A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1003209A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(ecx) */ /* 0x1003209C: cmp word ptr [edi], cx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032126; /* 0x1003209F: je 0x10032126 */
L_100320A5:
    eax = MEM32(ebp + 0x10); /* 0x100320A5: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x100320A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032126; /* 0x100320AA: je 0x10032126 */
L_100320AC:
    eax = MEM32(eax); /* 0x100320AC: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x100320AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032126; /* 0x100320B0: je 0x10032126 */
L_100320B2:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x100320B2: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032126; /* 0x100320B5: je 0x10032126 */
L_100320B7:
    PUSH32(esp, ebx); /* 0x100320B7: push ebx */
    PUSH32(esp, 0x5Cu); /* 0x100320B8: push 0x5c */
    PUSH32(esp, edi); /* 0x100320BA: push edi */
    RECOMP_CALL(sub_10011E16); /* 0x100320BB: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x100320C0: push 0x2f */
    PUSH32(esp, edi); /* 0x100320C2: push edi */
    ebx = eax; /* 0x100320C3: mov ebx, eax */
    RECOMP_CALL(sub_10011E16); /* 0x100320C5: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100320CA: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100320CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054C17; /* 0x100320CF: jne 0x10054c17 */
L_100320D5:
    /* test ebx, ebx */ /* 0x100320D5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054BB7; /* 0x100320D7: je 0x10054bb7 */
L_100320DD:
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x100320DD: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x100320E1: push 0x2e */
    PUSH32(esp, ebx); /* 0x100320E3: push ebx */
    RECOMP_CALL(sub_10011E16); /* 0x100320E4: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100320E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100320EA: pop ecx */
    /* test eax, eax */ /* 0x100320EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054C2A; /* 0x100320ED: je 0x10054c2a */
L_100320F3:
    PUSH32(esp, 0); /* 0x100320F3: push 0 */
    PUSH32(esp, esi); /* 0x100320F5: push esi */
    RECOMP_CALL(sub_1001EE42); /* 0x100320F6: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100320FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100320FC: pop ecx */
    /* test eax, eax */ /* 0x100320FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032130; /* 0x100320FF: jne 0x10032130 */
L_10032101:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10032101: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10032104: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10032107: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10032108: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1003201F); /* 0x1003210B: call 0x1003201f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10032110: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10032113: mov ebx, eax */
L_10032115:
    /* cmp esi, edi */ /* 0x10032115: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054CF7; /* 0x10032117: jne 0x10054cf7 */
L_1003211D:
    eax = ebx; /* 0x1003211D: mov eax, ebx */
L_1003211F:
    ebx = POP32_VAL(esp); /* 0x1003211F: pop ebx */
L_10032120:
    edi = POP32_VAL(esp); /* 0x10032120: pop edi */
    esi = POP32_VAL(esp); /* 0x10032121: pop esi */
    esp = ebp; /* 0x10032122: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032124: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032125: ret  */
L_10032126:
    RECOMP_CALL(sub_1001177D); /* 0x10032126: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10054BA4; /* 0x1003212B: jmp 0x10054ba4 */
L_10032130:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10032130: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032115; /* 0x10032133: jmp 0x10032115 */
L_10054BA4:
    MEM32(eax) = 0x16u; /* 0x10054BA4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054BAA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054BAF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032120; /* 0x10054BB2: jmp 0x10032120 */
L_10054BB7:
    PUSH32(esp, 0x3Au); /* 0x10054BB7: push 0x3a */
    PUSH32(esp, edi); /* 0x10054BB9: push edi */
    RECOMP_CALL(sub_10011236); /* 0x10054BBA: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10054BBF: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10054BC1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054BC2: pop ecx */
    /* test ebx, ebx */ /* 0x10054BC3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100320DD; /* 0x10054BC5: jne 0x100320dd */
L_10054BCB:
    PUSH32(esp, edi); /* 0x10054BCB: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054BCC: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x10054BD1: push 2 */
    ebx = eax + 0x3; /* 0x10054BD3: lea ebx, [eax + 3] */
    PUSH32(esp, ebx); /* 0x10054BD6: push ebx */
    RECOMP_CALL(sub_10011208); /* 0x10054BD7: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10054BDC: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054BDE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x10054BE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054C47; /* 0x10054BE3: je 0x10054c47 */
L_10054BE5:
    PUSH32(esp, 0x10062178u); /* 0x10054BE5: push 0x10062178 */
    PUSH32(esp, ebx); /* 0x10054BEA: push ebx */
    PUSH32(esp, esi); /* 0x10054BEB: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10054BEC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054BF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054BF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054D03; /* 0x10054BF6: jne 0x10054d03 */
L_10054BFC:
    PUSH32(esp, edi); /* 0x10054BFC: push edi */
    PUSH32(esp, ebx); /* 0x10054BFD: push ebx */
    PUSH32(esp, esi); /* 0x10054BFE: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10054BFF: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054C04: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054C07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054D03; /* 0x10054C09: jne 0x10054d03 */
L_10054C0F:
    ebx = esi + 0x4; /* 0x10054C0F: lea ebx, [esi + 4] */
    RECOMP_BACKEDGE();
    goto L_100320DD; /* 0x10054C12: jmp 0x100320dd */
L_10054C17:
    /* test ebx, ebx */ /* 0x10054C17: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054C23; /* 0x10054C19: je 0x10054c23 */
L_10054C1B:
    /* cmp eax, ebx */ /* 0x10054C1B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100320DD; /* 0x10054C1D: jbe 0x100320dd */
L_10054C23:
    ebx = eax; /* 0x10054C23: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_100320DD; /* 0x10054C25: jmp 0x100320dd */
L_10054C2A:
    PUSH32(esp, esi); /* 0x10054C2A: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054C2B: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x10054C30: add eax, 5 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x10054C33: push 2 */
    PUSH32(esp, eax); /* 0x10054C35: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x10054C36: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_10011208); /* 0x10054C39: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10054C3E: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054C40: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x10054C43: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054C4F; /* 0x10054C45: jne 0x10054c4f */
L_10054C47:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054C47: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003211F; /* 0x10054C4A: jmp 0x1003211f */
L_10054C4F:
    PUSH32(esp, esi); /* 0x10054C4F: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10054C50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10054C53: push ebx */
    RECOMP_CALL(sub_10011693); /* 0x10054C54: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054C59: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054C5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054D03; /* 0x10054C5E: jne 0x10054d03 */
L_10054C64:
    PUSH32(esp, esi); /* 0x10054C64: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054C65: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054C6A: pop ecx */
    eax = ebx + eax * 2; /* 0x10054C6B: lea eax, [ebx + eax*2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10054C6E: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10054C71: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x10054C76: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x10054C79: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x10054C7C: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10054C7E: mov dword ptr [ebp - 0x10], eax */
    eax = edx; /* 0x10054C81: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10054C83: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10054C85: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10054C87: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = 0x100E148Cu; /* 0x10054C89: mov eax, 0x100e148c */
    MEM32(ebp + 0xC) = ecx; /* 0x10054C8E: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10054C91: mov dword ptr [ebp - 4], eax */
L_10054C94:
    PUSH32(esp, MEM32(eax)); /* 0x10054C94: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x10054C96: push ecx */
    PUSH32(esp, edx); /* 0x10054C97: push edx */
    RECOMP_CALL(sub_10011693); /* 0x10054C98: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054C9D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054CA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054D03; /* 0x10054CA2: jne 0x10054d03 */
L_10054CA4:
    PUSH32(esp, eax); /* 0x10054CA4: push eax */
    PUSH32(esp, ebx); /* 0x10054CA5: push ebx */
    RECOMP_CALL(sub_1001EE42); /* 0x10054CA6: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054CAB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054CAC: pop ecx */
    /* test eax, eax */ /* 0x10054CAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054CC9; /* 0x10054CAF: je 0x10054cc9 */
L_10054CB1:
    eax = MEM32(ebp + (-0x4)); /* 0x10054CB1: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x10054CB4: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10054CB7: sub eax, 4 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x8)); /* 0x10054CBA: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10054CBD: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0x100E1480u */ /* 0x10054CC0: cmp eax, 0x100e1480 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1480u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10054CE8; /* 0x10054CC5: jl 0x10054ce8 */
L_10054CC7:
    RECOMP_BACKEDGE();
    goto L_10054C94; /* 0x10054CC7: jmp 0x10054c94 */
L_10054CC9:
    RECOMP_CALL(sub_1001177D); /* 0x10054CC9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10054CCE: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x10)); /* 0x10054CD1: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10054CD4: push dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x10054CD7: mov dword ptr [eax], ecx */
    PUSH32(esp, ebx); /* 0x10054CD9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10054CDA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1003201F); /* 0x10054CDD: call 0x1003201f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10054CE2: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x10054CE5: mov dword ptr [ebp - 0xc], eax */
L_10054CE8:
    PUSH32(esp, ebx); /* 0x10054CE8: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054CE9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x10054CEE: mov ebx, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x10054CF1: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10032115; /* 0x10054CF2: jmp 0x10032115 */
L_10054CF7:
    PUSH32(esp, esi); /* 0x10054CF7: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054CF8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054CFD: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1003211D; /* 0x10054CFE: jmp 0x1003211d */
L_10054D03:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054D03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10054D05: push eax */
    PUSH32(esp, eax); /* 0x10054D06: push eax */
    PUSH32(esp, eax); /* 0x10054D07: push eax */
    PUSH32(esp, eax); /* 0x10054D08: push eax */
    PUSH32(esp, eax); /* 0x10054D09: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10054D0A: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10054D0Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032135u);

L_10032135:
    PUSH32(esp, ebp); /* 0x10032135: push ebp */
    ebp = esp; /* 0x10032136: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10032138: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1003213B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1003213C: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1003213F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10032141: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, edi); /* 0x10032144: push edi */
    edi = ecx; /* 0x10032145: mov edi, ecx */
    /* test ebx, ebx */ /* 0x10032147: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054D25; /* 0x10032149: je 0x10054d25 */
L_1003214F:
    /* cmp MEM16(ebx), LO16(ecx) */ /* 0x1003214F: cmp word ptr [ebx], cx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054D25; /* 0x10032152: je 0x10054d25 */
L_10032158:
    PUSH32(esp, esi); /* 0x10032158: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10032159: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1003215C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100321CC; /* 0x1003215E: je 0x100321cc */
L_10032160:
    eax = MEM32(esi); /* 0x10032160: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x10032162: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100321CC; /* 0x10032164: je 0x100321cc */
L_10032166:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10032166: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100321CC; /* 0x10032169: je 0x100321cc */
L_1003216B:
    RECOMP_CALL(sub_1001177D); /* 0x1003216B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10032170: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10032172: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10032175: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1003217A: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1003217D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1003217F: push esi */
    PUSH32(esp, ebx); /* 0x10032180: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10032181: push dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x10032184: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_10032085); /* 0x10032186: call 0x10032085 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1003218B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1003218D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x10032190: mov dword ptr [ebp - 8], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10032193: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054D50; /* 0x10032196: je 0x10054d50 */
L_1003219C:
    RECOMP_CALL(sub_1001177D); /* 0x1003219C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100321A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ecx */ /* 0x100321A3: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100321B1; /* 0x100321A5: jne 0x100321b1 */
L_100321A7:
    RECOMP_CALL(sub_1001177D); /* 0x100321A7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x100321AC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x100321AF: mov dword ptr [eax], ecx */
L_100321B1:
    /* test edi, edi */ /* 0x100321B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054ECA; /* 0x100321B3: jne 0x10054eca */
L_100321B9:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100321B9: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054ED6; /* 0x100321BD: jne 0x10054ed6 */
L_100321C3:
    eax = esi; /* 0x100321C3: mov eax, esi */
L_100321C5:
    esi = POP32_VAL(esp); /* 0x100321C5: pop esi */
L_100321C6:
    edi = POP32_VAL(esp); /* 0x100321C6: pop edi */
    ebx = POP32_VAL(esp); /* 0x100321C7: pop ebx */
    esp = ebp; /* 0x100321C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100321CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100321CB: ret  */
L_100321CC:
    RECOMP_CALL(sub_1001177D); /* 0x100321CC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10054D3D; /* 0x100321D1: jmp 0x10054d3d */
L_10054D25:
    RECOMP_CALL(sub_1001177D); /* 0x10054D25: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054D2A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054D30: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054D35: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100321C6; /* 0x10054D38: jmp 0x100321c6 */
L_10054D3D:
    MEM32(eax) = 0x16u; /* 0x10054D3D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054D43: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054D48: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100321C5; /* 0x10054D4B: jmp 0x100321c5 */
L_10054D50:
    RECOMP_CALL(sub_1001177D); /* 0x10054D50: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10054D55: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054D58: jne 0x1003219c */
L_10054D5E:
    PUSH32(esp, 0x2Fu); /* 0x10054D5E: push 0x2f */
    eax = POP32_VAL(esp); /* 0x10054D60: pop eax */
    PUSH32(esp, eax); /* 0x10054D61: push eax */
    PUSH32(esp, ebx); /* 0x10054D62: push ebx */
    RECOMP_CALL(sub_10011236); /* 0x10054D63: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054D68: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054D69: pop ecx */
    /* test eax, eax */ /* 0x10054D6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054D6C: jne 0x1003219c */
L_10054D72:
    PUSH32(esp, 0x10062180u); /* 0x10054D72: push 0x10062180 */
    PUSH32(esp, eax); /* 0x10054D77: push eax */
    eax = ebp + (-0x4); /* 0x10054D78: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10054D7B: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x10054D7C: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054D81: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054D84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054D96; /* 0x10054D86: je 0x10054d96 */
L_10054D88:
    /* cmp eax, 0x16u */ /* 0x10054D88: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054EE4; /* 0x10054D8B: je 0x10054ee4 */
L_10054D91:
    RECOMP_BACKEDGE();
    goto L_1003219C; /* 0x10054D91: jmp 0x1003219c */
L_10054D96:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x10054D96: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054D99: je 0x1003219c */
L_10054D9F:
    PUSH32(esp, 2); /* 0x10054D9F: push 2 */
    PUSH32(esp, 0x104u); /* 0x10054DA1: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x10054DA6: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10054DAB: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10054DAD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054DAE: pop ecx */
    /* test edi, edi */ /* 0x10054DAF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054DB1: je 0x1003219c */
L_10054DB7:
    PUSH32(esp, 0x103u); /* 0x10054DB7: push 0x103 */
    PUSH32(esp, edi); /* 0x10054DBC: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10054DBD: push dword ptr [ebp - 4] */
    goto L_10054EAA; /* 0x10054DC0: jmp 0x10054eaa */
L_10054DC5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054DC5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(eax) */ /* 0x10054DC7: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054DCA: je 0x1003219c */
L_10054DD0:
    PUSH32(esp, edi); /* 0x10054DD0: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054DD1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054DD6: pop ecx */
    PUSH32(esp, 0x5Cu); /* 0x10054DD7: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x10054DD9: pop ecx */
    eax = edi + eax * 2; /* 0x10054DDA: lea eax, [edi + eax*2] */
    eax = (uint32_t)MEM16(eax + (-0x2)); /* 0x10054DDD: movzx eax, word ptr [eax - 2] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054DE1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054E09; /* 0x10054DE4: je 0x10054e09 */
L_10054DE6:
    PUSH32(esp, 0x2Fu); /* 0x10054DE6: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x10054DE8: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054DE9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054E09; /* 0x10054DEC: je 0x10054e09 */
L_10054DEE:
    PUSH32(esp, 0x1006218Cu); /* 0x10054DEE: push 0x1006218c */
    PUSH32(esp, 0x104u); /* 0x10054DF3: push 0x104 */
    PUSH32(esp, edi); /* 0x10054DF8: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x10054DF9: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054DFE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054E01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054EE4; /* 0x10054E03: jne 0x10054ee4 */
L_10054E09:
    PUSH32(esp, edi); /* 0x10054E09: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054E0A: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10054E0F: push ebx */
    esi = eax; /* 0x10054E10: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10054E12: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10054E17: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x10054E19: mov eax, 0x104 */
    ecx = POP32_VAL(esp); /* 0x10054E1E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054E1F: pop ecx */
    /* cmp esi, eax */ /* 0x10054E20: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10054EC2; /* 0x10054E22: jae 0x10054ec2 */
L_10054E28:
    PUSH32(esp, ebx); /* 0x10054E28: push ebx */
    PUSH32(esp, eax); /* 0x10054E29: push eax */
    PUSH32(esp, edi); /* 0x10054E2A: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x10054E2B: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054E30: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10054E33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054EE4; /* 0x10054E35: jne 0x10054ee4 */
L_10054E3B:
    RECOMP_CALL(sub_1001177D); /* 0x10054E3B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10054E40: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10054E43: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10054E45: push dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x10054E48: mov dword ptr [eax], ecx */
    PUSH32(esp, edi); /* 0x10054E4A: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10054E4B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032085); /* 0x10054E4E: call 0x10032085 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10054E53: mov esi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x10054E55: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10054E58: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10054E5B: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054E5E: jne 0x1003219c */
L_10054E64:
    RECOMP_CALL(sub_1001177D); /* 0x10054E64: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10054E69: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054EA1; /* 0x10054E6C: je 0x10054ea1 */
L_10054E6E:
    RECOMP_CALL(sub_1001E471); /* 0x10054E6E: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x15u */ /* 0x10054E73: cmp dword ptr [eax], 0x15 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054EA1; /* 0x10054E76: je 0x10054ea1 */
L_10054E78:
    eax = (uint32_t)MEM16(edi); /* 0x10054E78: movzx eax, word ptr [edi] */
    PUSH32(esp, 0x5Cu); /* 0x10054E7B: push 0x5c */
    edx = POP32_VAL(esp); /* 0x10054E7D: pop edx */
    PUSH32(esp, 0x2Fu); /* 0x10054E7E: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x10054E80: pop ecx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10054E81: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054E8F; /* 0x10054E84: je 0x10054e8f */
L_10054E86:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054E86: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054E89: jne 0x1003219c */
L_10054E8F:
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x10054E8F: movzx eax, word ptr [edi + 2] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x10054E93: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054EA1; /* 0x10054E96: je 0x10054ea1 */
L_10054E98:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10054E98: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054E9B: jne 0x1003219c */
L_10054EA1:
    PUSH32(esp, 0x103u); /* 0x10054EA1: push 0x103 */
    PUSH32(esp, edi); /* 0x10054EA6: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10054EA7: push dword ptr [ebp + 0xc] */
L_10054EAA:
    RECOMP_CALL(sub_1002EFAF); /* 0x10054EAA: call 0x1002efaf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10054EAF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x10054EB2: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x10054EB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003219C; /* 0x10054EB7: je 0x1003219c */
L_10054EBD:
    RECOMP_BACKEDGE();
    goto L_10054DC5; /* 0x10054EBD: jmp 0x10054dc5 */
L_10054EC2:
    esi = MEM32(ebp + (-0x8)); /* 0x10054EC2: mov esi, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1003219C; /* 0x10054EC5: jmp 0x1003219c */
L_10054ECA:
    PUSH32(esp, edi); /* 0x10054ECA: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054ECB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054ED0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100321B9; /* 0x10054ED1: jmp 0x100321b9 */
L_10054ED6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10054ED6: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054ED9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054EDE: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100321C3; /* 0x10054EDF: jmp 0x100321c3 */
L_10054EE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054EE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10054EE6: push eax */
    PUSH32(esp, eax); /* 0x10054EE7: push eax */
    PUSH32(esp, eax); /* 0x10054EE8: push eax */
    PUSH32(esp, eax); /* 0x10054EE9: push eax */
    PUSH32(esp, eax); /* 0x10054EEA: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10054EEB: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10054EF0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100321D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100321D6u);

L_100321D6:
    PUSH32(esp, ebp); /* 0x100321D6: push ebp */
    ebp = esp; /* 0x100321D7: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100321D9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100321DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100321DE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100321E1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032135); /* 0x100321E4: call 0x10032135 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100321E9: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100321EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100321ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100321EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100321EEu);

L_100321EE:
    PUSH32(esp, ebx); /* 0x100321EE: push ebx */
    PUSH32(esp, esi); /* 0x100321EF: push esi */
    PUSH32(esp, edi); /* 0x100321F0: push edi */
    edx = MEM32(esp + 0x10); /* 0x100321F1: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x14); /* 0x100321F5: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x100321F9: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebp); /* 0x100321FD: push ebp */
    PUSH32(esp, edx); /* 0x100321FE: push edx */
    PUSH32(esp, eax); /* 0x100321FF: push eax */
    PUSH32(esp, ecx); /* 0x10032200: push ecx */
    PUSH32(esp, ecx); /* 0x10032201: push ecx */
    PUSH32(esp, 0x10035369u); /* 0x10032202: push 0x10035369 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x10032207: push dword ptr fs:[0] */
    eax = MEM32(0x100DF7B8); /* 0x1003220E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x10032213: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x10032215: mov dword ptr [esp + 8], eax */
    MEM32(FS_BASE + (0)) = esp; /* 0x10032219: mov dword ptr fs:[0], esp */
L_10032220:
    eax = MEM32(esp + 0x30); /* 0x10032220: mov eax, dword ptr [esp + 0x30] */
    ebx = MEM32(eax + 0x8); /* 0x10032224: mov ebx, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x10032227: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x1003222B: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0xC); /* 0x1003222D: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x10032230: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003226C; /* 0x10032233: je 0x1003226c */
L_10032235:
    edx = MEM32(esp + 0x34); /* 0x10032235: mov edx, dword ptr [esp + 0x34] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10032239: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003227A; /* 0x1003223C: jne 0x1003227a */
L_1003223E:
    esi = esi + esi * 2; /* 0x1003223E: lea esi, [esi + esi*2] */
    ebx = ebx + esi * 4 + 0x10; /* 0x10032241: lea ebx, [ebx + esi*4 + 0x10] */
    ecx = MEM32(ebx); /* 0x10032245: mov ecx, dword ptr [ebx] */
    MEM32(eax + 0xC) = ecx; /* 0x10032247: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x1003224A: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032220; /* 0x1003224E: jne 0x10032220 */
L_10032250:
    PUSH32(esp, 0x101u); /* 0x10032250: push 0x101 */
    eax = MEM32(ebx + 0x8); /* 0x10032255: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_100182D1); /* 0x10032258: call 0x100182d1 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x1003225D: mov ecx, 1 */
    eax = MEM32(ebx + 0x8); /* 0x10032262: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_10032531); /* 0x10032265: call 0x10032531 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10032220; /* 0x1003226A: jmp 0x10032220 */
L_1003226C:
    POP32(esp, MEM32(FS_BASE + (0))); /* 0x1003226C: pop dword ptr fs:[0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10032273: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x10032276: pop edi */
    esi = POP32_VAL(esp); /* 0x10032277: pop esi */
    ebx = POP32_VAL(esp); /* 0x10032278: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032279: ret  */
L_1003227A:
    /* cmp esi, edx */ /* 0x1003227A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1003223E; /* 0x1003227C: ja 0x1003223e */
L_1003227E:
    RECOMP_BACKEDGE();
    goto L_1003226C; /* 0x1003227E: jmp 0x1003226c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100322AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100322AFu);

L_100322AF:
    PUSH32(esp, ebp); /* 0x100322AF: push ebp */
    ebp = esp; /* 0x100322B0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x100322B2: sub esp, 0x68 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100322B5: push ebx */
    PUSH32(esp, edi); /* 0x100322B6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100322B7: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100322BA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x100322BC: mov byte ptr [ebp - 1], bl */
    /* test edi, edi */ /* 0x100322BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054B09; /* 0x100322C1: jne 0x10054b09 */
L_100322C7:
    eax = MEM32(ebp + 0x10); /* 0x100322C7: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x100322CA: mov dword ptr [ebp - 0x10], eax */
L_100322CD:
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x100322CD: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100322EB; /* 0x100322D0: je 0x100322eb */
L_100322D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100322D2: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x100322D5: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100322D2; /* 0x100322D8: jne 0x100322d2 */
L_100322DA:
    /* cmp MEM16(eax + 0x2), LO16(ebx) */ /* 0x100322DA: cmp word ptr [eax + 2], bx */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100322CD; /* 0x100322DE: je 0x100322cd */
L_100322E0:
    PUSH32(esp, 0x20u); /* 0x100322E0: push 0x20 */
    edx = POP32_VAL(esp); /* 0x100322E2: pop edx */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x100322E3: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100322E6: add eax, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100322CD; /* 0x100322E9: jmp 0x100322cd */
L_100322EB:
    PUSH32(esp, esi); /* 0x100322EB: push esi */
    PUSH32(esp, 0x44u); /* 0x100322EC: push 0x44 */
    esi = POP32_VAL(esp); /* 0x100322EE: pop esi */
    PUSH32(esp, esi); /* 0x100322EF: push esi */
    eax = ebp + (-0x68); /* 0x100322F0: lea eax, [ebp - 0x68] */
    PUSH32(esp, ebx); /* 0x100322F3: push ebx */
    PUSH32(esp, eax); /* 0x100322F4: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100322F5: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = esi; /* 0x100322FA: mov dword ptr [ebp - 0x68], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100322FD: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x100DFDD8); /* 0x10032300: mov esi, dword ptr [0x100dfdd8] */
    /* test esi, esi */ /* 0x10032306: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003232D; /* 0x10032308: je 0x1003232d */
L_1003230A:
    edx = esi + (-0x1); /* 0x1003230A: lea edx, [esi - 1] */
L_1003230D:
    eax = edx; /* 0x1003230D: mov eax, edx */
    ecx = edx; /* 0x1003230F: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10032311: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10032314: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10032317: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10032317: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1003231A: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x10032321: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003232B; /* 0x10032325: jne 0x1003232b */
L_10032327:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10032327: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10032328: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1003230D; /* 0x10032329: jne 0x1003230d */
L_1003232B:
    /* test esi, esi */ /* 0x1003232B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1003232D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_10032462; /* 0x1003232D: js 0x10032462 */
L_10032333:
    /* cmp esi, 0x3332u */ /* 0x10032333: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10032462; /* 0x10032339: jae 0x10032462 */
L_1003233F:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x1003233F: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x10032342: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10032344: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x36)) = (uint16_t)(LO16(eax)); /* 0x10032347: mov word ptr [ebp - 0x36], ax */
    eax = (uint32_t)LO16(eax); /* 0x1003234B: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1003234E: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1003234F: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x34)) = eax; /* 0x10032354: mov dword ptr [ebp - 0x34], eax */
    ecx = POP32_VAL(esp); /* 0x10032357: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032358: pop ecx */
    /* test eax, eax */ /* 0x10032359: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032462; /* 0x1003235B: je 0x10032462 */
L_10032361:
    MEM32(eax) = esi; /* 0x10032361: mov dword ptr [eax], esi */
    edx = ebx; /* 0x10032363: mov edx, ebx */
    eax = MEM32(ebp + (-0x34)); /* 0x10032365: mov eax, dword ptr [ebp - 0x34] */
    ecx = eax + 0x4; /* 0x10032368: lea ecx, [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1003236B: mov dword ptr [ebp - 0xc], ecx */
    ecx = eax + 0x4; /* 0x1003236E: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10032371: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x10032373: mov dword ptr [ebp - 8], ecx */
    /* test esi, esi */ /* 0x10032376: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100323B9; /* 0x10032378: jle 0x100323b9 */
L_1003237A:
    edi = MEM32(ebp + (-0xC)); /* 0x1003237A: mov edi, dword ptr [ebp - 0xc] */
L_1003237D:
    eax = edx; /* 0x1003237D: mov eax, edx */
    ecx = edx; /* 0x1003237F: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10032381: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10032384: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10032387: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10032387: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1003238A: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x10032391: mov al, byte ptr [ecx + 4] */
    /* test LO8(eax), 0x10u */ /* 0x10032394: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003244B; /* 0x10032396: jne 0x1003244b */
L_1003239C:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1003239C: mov byte ptr [edi], al */
    eax = MEM32(ecx); /* 0x1003239E: mov eax, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x100323A0: mov ecx, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x100323A3: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x100323A5: mov eax, ecx */
L_100323A7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100323A7: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x100323A8: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100323AB: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x100323AC: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x100323AF: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1003237D; /* 0x100323B1: jl 0x1003237d */
L_100323B3:
    eax = MEM32(ebp + (-0x34)); /* 0x100323B3: mov eax, dword ptr [ebp - 0x34] */
    edi = MEM32(ebp + 0x8); /* 0x100323B6: mov edi, dword ptr [ebp + 8] */
L_100323B9:
    /* cmp MEM8(ebp + (-0x1)), LO8(ebx) */ /* 0x100323B9: cmp byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054B4A; /* 0x100323BC: jne 0x10054b4a */
L_100323C2:
    esi = ebx; /* 0x100323C2: mov esi, ebx */
L_100323C4:
    RECOMP_CALL(sub_1001E471); /* 0x100323C4: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0x400u)); _flag_b = (uint32_t)((esi | 0x400u));
    esi = esi | 0x400u; /* 0x100323C9: or esi, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x100323CF: mov dword ptr [eax], ebx */
    eax = ebp + (-0x24); /* 0x100323D1: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100323D4: push eax */
    eax = ebp + (-0x68); /* 0x100323D5: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x100323D8: push eax */
    PUSH32(esp, ebx); /* 0x100323D9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100323DA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x100323DD: push esi */
    PUSH32(esp, 1); /* 0x100323DE: push 1 */
    PUSH32(esp, ebx); /* 0x100323E0: push ebx */
    PUSH32(esp, ebx); /* 0x100323E1: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x100323E2: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100323E5: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x100E50F8)); /* 0x100323E8: call dword ptr [0x100e50f8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100323EE: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100323F0: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x100323F6: push dword ptr [ebp - 0x34] */
    MEM32(ebp + 0x8) = eax; /* 0x100323F9: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100323FC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032401: pop ecx */
    /* test esi, esi */ /* 0x10032402: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054B7C; /* 0x10032404: je 0x10054b7c */
L_1003240A:
    /* cmp edi, 2 */ /* 0x1003240A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054B9D; /* 0x1003240D: je 0x10054b9d */
L_10032413:
    esi = MEM32(0x100E5074); /* 0x10032413: mov esi, dword ptr [0x100e5074] */
    /* test edi, edi */ /* 0x10032419: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032458; /* 0x1003241B: jne 0x10032458 */
L_1003241D:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1003241D: push -1 */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1003241F: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x10032422: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x10032428: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1003242B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1003242C: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x1003242F: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x14)); /* 0x10032435: mov ebx, dword ptr [ebp - 0x14] */
L_10032438:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10032438: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(esi); /* 0x1003243B: call esi */
    RECOMP_FLAGS_IN();
L_1003243D:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1003243D: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x10032440: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x10032442: mov eax, ebx */
L_10032444:
    esi = POP32_VAL(esp); /* 0x10032444: pop esi */
L_10032445:
    edi = POP32_VAL(esp); /* 0x10032445: pop edi */
    ebx = POP32_VAL(esp); /* 0x10032446: pop ebx */
    esp = ebp; /* 0x10032447: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032449: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003244A: ret  */
L_1003244B:
    eax = MEM32(ebp + (-0x8)); /* 0x1003244B: mov eax, dword ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1003244E: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x10032450: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100323A7; /* 0x10032453: jmp 0x100323a7 */
L_10032458:
    /* cmp edi, 4 */ /* 0x10032458: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032438; /* 0x1003245B: je 0x10032438 */
L_1003245D:
    goto L_10054B87; /* 0x1003245D: jmp 0x10054b87 */
L_10032462:
    RECOMP_CALL(sub_1001177D); /* 0x10032462: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10054B8F; /* 0x10032467: jmp 0x10054b8f */
L_10054B09:
    /* cmp edi, 1 */ /* 0x10054B09: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100322C7; /* 0x10054B0C: je 0x100322c7 */
L_10054B12:
    if (CMP_LE(_flag_a, _flag_b)) goto L_10054B2B; /* 0x10054B12: jle 0x10054b2b */
L_10054B14:
    /* cmp edi, 3 */ /* 0x10054B14: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_100322C7; /* 0x10054B17: jle 0x100322c7 */
L_10054B1D:
    /* cmp edi, 4 */ /* 0x10054B1D: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054B2B; /* 0x10054B20: jne 0x10054b2b */
L_10054B22:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x10054B22: mov byte ptr [ebp - 1], 1 */
    RECOMP_BACKEDGE();
    goto L_100322C7; /* 0x10054B26: jmp 0x100322c7 */
L_10054B2B:
    RECOMP_CALL(sub_1001E471); /* 0x10054B2B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x10054B30: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x10054B32: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054B37: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054B3D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054B42: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032445; /* 0x10054B45: jmp 0x10032445 */
L_10054B4A:
    edx = eax + 0x4; /* 0x10054B4A: lea edx, [eax + 4] */
    ecx = ebx; /* 0x10054B4D: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10054B4F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10054B52: add eax, esi */
    _flag_k = FK_ADD;
L_10054B54:
    MEM32(ebp + 0x8) = esi; /* 0x10054B54: mov dword ptr [ebp + 8], esi */
    /* cmp esi, 3 */ /* 0x10054B57: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10054B63; /* 0x10054B5A: jl 0x10054b63 */
L_10054B5C:
    MEM32(ebp + 0x8) = 3; /* 0x10054B5C: mov dword ptr [ebp + 8], 3 */
L_10054B63:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x10054B63: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10054B74; /* 0x10054B66: jge 0x10054b74 */
L_10054B68:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x10054B68: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x10054B6A: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10054B6D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10054B6E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10054B6F: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10054B54; /* 0x10054B72: jmp 0x10054b54 */
L_10054B74:
    PUSH32(esp, 8); /* 0x10054B74: push 8 */
    esi = POP32_VAL(esp); /* 0x10054B76: pop esi */
    RECOMP_BACKEDGE();
    goto L_100323C4; /* 0x10054B77: jmp 0x100323c4 */
L_10054B7C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10054B7C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E4A7); /* 0x10054B7F: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054B84: pop ecx */
    goto L_10054B95; /* 0x10054B85: jmp 0x10054b95 */
L_10054B87:
    ebx = MEM32(ebp + (-0x24)); /* 0x10054B87: mov ebx, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_1003243D; /* 0x10054B8A: jmp 0x1003243d */
L_10054B8F:
    MEM32(eax) = 0xCu; /* 0x10054B8F: mov dword ptr [eax], 0xc */
L_10054B95:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054B95: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032444; /* 0x10054B98: jmp 0x10032444 */
L_10054B9D:
    PUSH32(esp, ebx); /* 0x10054B9D: push ebx */
    RECOMP_CALL(sub_1007BBB8); /* 0x10054B9E: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10054BA3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032531u);

L_10032531:
    RECOMP_ICALL(eax); /* 0x10032531: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032533: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032533(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032533u);

L_10032533:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032533: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032584(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032584u);

L_10032584:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10032584: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x10032586: push es */
    { uint32_t _aa = MEM8(ebp + (-0x4AEFF91B)), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10032587: adc byte ptr [ebp - 0x4aeff91b], ch */
      MEM8(ebp + (-0x4AEFF91B)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x1003258D: in eax, 6 */
    { uint32_t _aa = MEM8(ebp + (-0x1E24EFFA)), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1003258F: adc byte ptr [ebp - 0x1e24effa], bh */
      MEM8(ebp + (-0x1E24EFFA)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x10032596: push es */
    { uint32_t _aa = MEM8(eax + (-0x25)), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10032597: adc byte ptr [eax - 0x25], al */
      MEM8(eax + (-0x25)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x1003259A: push es */
    { uint32_t _aa = MEM8(esi + 0x4C1006E4), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1003259B: adc byte ptr [esi + 0x4c1006e4], dl */
      MEM8(esi + 0x4C1006E4) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x100325A1u, "aad 6");
    { uint32_t _aa = MEM8(ebp + 0x1003), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100325A3: adc byte ptr [ebp + 0x1003], bh */
      MEM8(ebp + 0x1003) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100325AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100325AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100325AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100325B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100325B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x100325B4: lodsb al, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA60C100Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xA60C100Eu; /* 0x100325B5: add eax, 0xa60c100e */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100325BA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100325BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100325BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100325BCu);

L_100325BC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100325BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100325BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100325BDu);

L_100325BD:
    PUSH32(esp, ebp); /* 0x100325BD: push ebp */
    ebp = esp; /* 0x100325BE: mov ebp, esp */
    eax = ebp + 0x18; /* 0x100325C0: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100325C3: push eax */
    PUSH32(esp, 0); /* 0x100325C4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100325C6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100325C9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100325CC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100325CF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E123); /* 0x100325D2: call 0x1001e123 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100325D7: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100325DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100325DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032637(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032637u);

L_10032637:
    PUSH32(esp, ebp); /* 0x10032637: push ebp */
    ebp = esp; /* 0x10032638: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1003263A: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x10032641: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10032643: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10032646: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10032649: push dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057086; /* 0x1003264C: je 0x10057086 */
L_10032652:
    PUSH32(esp, 0); /* 0x10032652: push 0 */
L_10032654:
    RECOMP_CALL(sub_1002E4B5); /* 0x10032654: call 0x1002e4b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10032659: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1003265C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003265D: ret  */
L_10057086:
    PUSH32(esp, 0x100E1870u); /* 0x10057086: push 0x100e1870 */
    RECOMP_BACKEDGE();
    goto L_10032654; /* 0x1005708B: jmp 0x10032654 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100326E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100326E2u);

L_100326E2:
    PUSH32(esp, ebp); /* 0x100326E2: push ebp */
    ebp = esp; /* 0x100326E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100326E5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100326E6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100326E9: push ebx */
    PUSH32(esp, esi); /* 0x100326EA: push esi */
    PUSH32(esp, edi); /* 0x100326EB: push edi */
    /* test ecx, ecx */ /* 0x100326EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032875; /* 0x100326EE: je 0x10032875 */
L_100326F4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100326F4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10032875; /* 0x100326F8: jbe 0x10032875 */
L_100326FE:
    /* cmp MEM32(ebp + 0xC), 0x1Au */ /* 0x100326FE: cmp dword ptr [ebp + 0xc], 0x1a */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ecx) = (uint8_t)(0); /* 0x10032702: mov byte ptr [ecx], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_10032875; /* 0x10032705: jb 0x10032875 */
L_1003270B:
    esi = MEM32(ebp + 0x10); /* 0x1003270B: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1003270E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032875; /* 0x10032710: je 0x10032875 */
L_10032716:
    ebx = MEM32(esi + 0x14); /* 0x10032716: mov ebx, dword ptr [esi + 0x14] */
    /* test ebx, ebx */ /* 0x10032719: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10032875; /* 0x1003271B: js 0x10032875 */
L_10032721:
    edi = MEM32(esi + 0x10); /* 0x10032721: mov edi, dword ptr [esi + 0x10] */
    /* test edi, edi */ /* 0x10032724: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10032875; /* 0x10032726: js 0x10032875 */
L_1003272C:
    /* cmp edi, 0xBu */ /* 0x1003272C: cmp edi, 0xb */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032875; /* 0x1003272F: jg 0x10032875 */
L_10032735:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x10032735: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10032875; /* 0x10032739: jl 0x10032875 */
L_1003273F:
    /* cmp MEM32(esi + 0x8), 0x17u */ /* 0x1003273F: cmp dword ptr [esi + 8], 0x17 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032875; /* 0x10032743: jg 0x10032875 */
L_10032749:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x10032749: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10032875; /* 0x1003274D: jl 0x10032875 */
L_10032753:
    /* cmp MEM32(esi + 0x4), 0x3Bu */ /* 0x10032753: cmp dword ptr [esi + 4], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032875; /* 0x10032757: jg 0x10032875 */
L_1003275D:
    /* cmp MEM32(esi), 0 */ /* 0x1003275D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10032875; /* 0x10032760: jl 0x10032875 */
L_10032766:
    /* cmp MEM32(esi), 0x3Bu */ /* 0x10032766: cmp dword ptr [esi], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032875; /* 0x10032769: jg 0x10032875 */
L_1003276F:
    /* cmp MEM32(esi + 0xC), 1 */ /* 0x1003276F: cmp dword ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10032875; /* 0x10032773: jl 0x10032875 */
L_10032779:
    eax = MEM32(edi * 4 + 0x100DFE3C); /* 0x10032779: mov eax, dword ptr [edi*4 + 0x100dfe3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi * 4 + 0x100DFE38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi * 4 + 0x100DFE38); /* 0x10032780: sub eax, dword ptr [edi*4 + 0x100dfe38] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = 0x64u; /* 0x10032787: mov dword ptr [ebp + 8], 0x64 */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x1003278E: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10056516; /* 0x10032791: jl 0x10056516 */
L_10032797:
    eax = MEM32(esi + 0x18); /* 0x10032797: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x1003279A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10032875; /* 0x1003279C: js 0x10032875 */
L_100327A2:
    /* cmp eax, 6 */ /* 0x100327A2: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032875; /* 0x100327A5: jg 0x10032875 */
L_100327AB:
    ebx = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100327AB: imul ebx, eax, 3 */
    eax = ecx + 0x4; /* 0x100327AE: lea eax, [ecx + 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)3); /* 0x100327B1: imul edi, edi, 3 */
    esi = eax; /* 0x100327B4: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100327B6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100327B8:
    SET_LO8(eax, MEM8(ebx + edx + 0x10017640)); /* 0x100327B8: mov al, byte ptr [ebx + edx + 0x10017640] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x100327BF: mov byte ptr [ecx], al */
    SET_LO8(eax, MEM8(edi + edx + 0x10017658)); /* 0x100327C1: mov al, byte ptr [edi + edx + 0x10017658] */
    MEM8(edx + esi) = (uint8_t)(LO8(eax)); /* 0x100327C8: mov byte ptr [edx + esi], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100327CB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100327CC: inc ecx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x100327CD: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100327B8; /* 0x100327D0: jl 0x100327b8 */
L_100327D2:
    esi = MEM32(ebp + 0x10); /* 0x100327D2: mov esi, dword ptr [ebp + 0x10] */
    MEM8(ecx) = (uint8_t)(0x20u); /* 0x100327D5: mov byte ptr [ecx], 0x20 */
    MEM8(ecx + 0x4) = (uint8_t)(0x20u); /* 0x100327D8: mov byte ptr [ecx + 4], 0x20 */
    PUSH32(esp, 0xAu); /* 0x100327DC: push 0xa */
    eax = MEM32(esi + 0xC); /* 0x100327DE: mov eax, dword ptr [esi + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100327E1: cdq  */
    ebx = POP32_VAL(esp); /* 0x100327E2: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100327E3: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x30u); /* 0x100327E5: push 0x30 */
    ebx = POP32_VAL(esp); /* 0x100327E7: pop ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x100327E8: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x100327EA: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x5) = (uint8_t)(LO8(eax)); /* 0x100327EC: mov byte ptr [ecx + 5], al */
    MEM8(ecx + 0x6) = (uint8_t)(LO8(edx)); /* 0x100327EF: mov byte ptr [ecx + 6], dl */
    MEM8(ecx + 0x7) = (uint8_t)(0x20u); /* 0x100327F2: mov byte ptr [ecx + 7], 0x20 */
    eax = MEM32(esi + 0x8); /* 0x100327F6: mov eax, dword ptr [esi + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100327F9: cdq  */
    PUSH32(esp, 0xAu); /* 0x100327FA: push 0xa */
    edi = POP32_VAL(esp); /* 0x100327FC: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x100327FD: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x64u); /* 0x100327FF: push 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10032801: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10032803: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x8) = (uint8_t)(LO8(eax)); /* 0x10032805: mov byte ptr [ecx + 8], al */
    MEM8(ecx + 0x9) = (uint8_t)(LO8(edx)); /* 0x10032808: mov byte ptr [ecx + 9], dl */
    MEM8(ecx + 0xA) = (uint8_t)(0x3Au); /* 0x1003280B: mov byte ptr [ecx + 0xa], 0x3a */
    eax = MEM32(esi + 0x4); /* 0x1003280F: mov eax, dword ptr [esi + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032812: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10032813: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10032815: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10032817: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0xB) = (uint8_t)(LO8(eax)); /* 0x10032819: mov byte ptr [ecx + 0xb], al */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(edx)); /* 0x1003281C: mov byte ptr [ecx + 0xc], dl */
    MEM8(ecx + 0xD) = (uint8_t)(0x3Au); /* 0x1003281F: mov byte ptr [ecx + 0xd], 0x3a */
    eax = MEM32(esi); /* 0x10032823: mov eax, dword ptr [esi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032825: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10032826: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10032828: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x1003282A: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0xE) = (uint8_t)(LO8(eax)); /* 0x1003282C: mov byte ptr [ecx + 0xe], al */
    MEM8(ecx + 0xF) = (uint8_t)(LO8(edx)); /* 0x1003282F: mov byte ptr [ecx + 0xf], dl */
    MEM8(ecx + 0x10) = (uint8_t)(0x20u); /* 0x10032832: mov byte ptr [ecx + 0x10], 0x20 */
    eax = MEM32(esi + 0x14); /* 0x10032836: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032839: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x8); /* 0x1003283A: idiv dword ptr [ebp + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x1003283D: add eax, 0x13 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032840: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10032841: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x10032843: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x10032845: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x11) = (uint8_t)(LO8(eax)); /* 0x10032847: mov byte ptr [ecx + 0x11], al */
    MEM8(ecx + 0x12) = (uint8_t)(LO8(edx)); /* 0x1003284A: mov byte ptr [ecx + 0x12], dl */
    eax = MEM32(esi + 0x14); /* 0x1003284D: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032850: cdq  */
    esi = POP32_VAL(esp); /* 0x10032851: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10032852: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x10032854: push edi */
    eax = edx; /* 0x10032855: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10032857: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10032858: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x1003285A: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x1003285C: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x13) = (uint8_t)(LO8(eax)); /* 0x1003285E: mov byte ptr [ecx + 0x13], al */
    eax = POP32_VAL(esp); /* 0x10032861: pop eax */
    MEM8(ecx + 0x14) = (uint8_t)(LO8(edx)); /* 0x10032862: mov byte ptr [ecx + 0x14], dl */
    MEM8(ecx + 0x15) = (uint8_t)(LO8(eax)); /* 0x10032865: mov byte ptr [ecx + 0x15], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032868: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + 0x16) = (uint8_t)(0); /* 0x1003286A: mov byte ptr [ecx + 0x16], 0 */
L_1003286E:
    edi = POP32_VAL(esp); /* 0x1003286E: pop edi */
    esi = POP32_VAL(esp); /* 0x1003286F: pop esi */
    ebx = POP32_VAL(esp); /* 0x10032870: pop ebx */
    esp = ebp; /* 0x10032871: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032873: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032874: ret  */
L_10032875:
    RECOMP_CALL(sub_1001177D); /* 0x10032875: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056560; /* 0x1003287A: jmp 0x10056560 */
L_10056516:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x76Cu; /* 0x10056516: add ebx, 0x76c */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1005651C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x1005651E: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1005652A; /* 0x10056523: jns 0x1005652a */
L_10056525:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10056525: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10056526: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056529: inc eax */
    _flag_k = FK_INC;
L_1005652A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10056536; /* 0x1005652A: jne 0x10056536 */
L_1005652C:
    eax = ebx; /* 0x1005652C: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005652E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x8); /* 0x1005652F: idiv dword ptr [ebp + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056532: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056548; /* 0x10056534: jne 0x10056548 */
L_10056536:
    eax = ebx; /* 0x10056536: mov eax, ebx */
    ebx = 0x190u; /* 0x10056538: mov ebx, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005653D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1005653E: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056540: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032875; /* 0x10056542: jne 0x10032875 */
L_10056548:
    /* cmp edi, 1 */ /* 0x10056548: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032875; /* 0x1005654B: jne 0x10032875 */
L_10056551:
    /* cmp MEM32(esi + 0xC), 0x1Du */ /* 0x10056551: cmp dword ptr [esi + 0xc], 0x1d */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10032797; /* 0x10056555: jle 0x10032797 */
L_1005655B:
    RECOMP_BACKEDGE();
    goto L_10032875; /* 0x1005655B: jmp 0x10032875 */
L_10056560:
    PUSH32(esp, 0x16u); /* 0x10056560: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056562: pop esi */
    MEM32(eax) = esi; /* 0x10056563: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10056565: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005656A: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1003286E; /* 0x1005656C: jmp 0x1003286e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003287F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003287Fu);

L_1003287F:
    PUSH32(esp, ebp); /* 0x1003287F: push ebp */
    ebp = esp; /* 0x10032880: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10032882: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10032885: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1003288A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1003288C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1003288F: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10032892: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10032893: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10032896: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100328F4; /* 0x10032898: je 0x100328f4 */
L_1003289A:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1003289A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100328F4; /* 0x1003289E: jbe 0x100328f4 */
L_100328A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100328A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x100328A2: mov byte ptr [esi], cl */
    /* test eax, eax */ /* 0x100328A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100328F4; /* 0x100328A6: je 0x100328f4 */
L_100328A8:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x100328A8: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100328BB; /* 0x100328AB: jg 0x100328bb */
L_100328AD:
    if (CMP_L(_flag_a, _flag_b)) goto L_10056926; /* 0x100328AD: jl 0x10056926 */
L_100328B3:
    /* cmp MEM32(eax), ecx */ /* 0x100328B3: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10056926; /* 0x100328B5: jb 0x10056926 */
L_100328BB:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x100328BB: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056932; /* 0x100328BF: jge 0x10056932 */
L_100328C5:
    PUSH32(esp, eax); /* 0x100328C5: push eax */
    eax = ebp + (-0x28); /* 0x100328C6: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100328C9: push eax */
    RECOMP_CALL(sub_10017888); /* 0x100328CA: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100328CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100328D0: pop ecx */
    /* test eax, eax */ /* 0x100328D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100328E5; /* 0x100328D3: jne 0x100328e5 */
L_100328D5:
    eax = ebp + (-0x28); /* 0x100328D5: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100328D8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100328D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100328DC: push esi */
    RECOMP_CALL(sub_100326E2); /* 0x100328DD: call 0x100326e2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100328E2: add esp, 0xc */
    _flag_k = FK_ADD;
L_100328E5:
    ecx = MEM32(ebp + (-0x4)); /* 0x100328E5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100328E8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100328EA: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100328EB: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100328F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100328F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100328F3: ret  */
L_100328F4:
    RECOMP_CALL(sub_1001177D); /* 0x100328F4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056942; /* 0x100328F9: jmp 0x10056942 */
L_10056926:
    RECOMP_CALL(sub_1001177D); /* 0x10056926: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005692B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005692D: pop esi */
    MEM32(eax) = esi; /* 0x1005692E: mov dword ptr [eax], esi */
    goto L_1005694C; /* 0x10056930: jmp 0x1005694c */
L_10056932:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10056926; /* 0x10056932: jg 0x10056926 */
L_10056934:
    /* cmp MEM32(eax), 0x93406FFFu */ /* 0x10056934: cmp dword ptr [eax], 0x93406fff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100328C5; /* 0x1005693A: jbe 0x100328c5 */
L_10056940:
    RECOMP_BACKEDGE();
    goto L_10056926; /* 0x10056940: jmp 0x10056926 */
L_10056942:
    PUSH32(esp, 0x16u); /* 0x10056942: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056944: pop esi */
    MEM32(eax) = esi; /* 0x10056945: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10056947: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005694C:
    eax = esi; /* 0x1005694C: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100328E5; /* 0x1005694E: jmp 0x100328e5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032927(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032927u);

L_10032927:
    PUSH32(esp, ebp); /* 0x10032927: push ebp */
    ebp = esp; /* 0x10032928: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1003292A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1003292D: push esi */
    /* test eax, eax */ /* 0x1003292E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053B05; /* 0x10032930: je 0x10053b05 */
L_10032936:
    ecx = MEM32(0x100DF624); /* 0x10032936: mov ecx, dword ptr [0x100df624] */
    /* test ecx, ecx */ /* 0x1003293C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053B05; /* 0x1003293E: je 0x10053b05 */
L_10032944:
    MEM32(eax) = ecx; /* 0x10032944: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032946: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10032948:
    esi = POP32_VAL(esp); /* 0x10032948: pop esi */
    ebp = POP32_VAL(esp); /* 0x10032949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003294A: ret  */
L_10053B05:
    RECOMP_CALL(sub_1001177D); /* 0x10053B05: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10053B0A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10053B0C: pop esi */
    MEM32(eax) = esi; /* 0x10053B0D: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10053B0F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10053B14: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10032948; /* 0x10053B16: jmp 0x10032948 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032A50u);

    goto L_10032A50;
L_10032A43:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x10032A43: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10032A6B; /* 0x10032A46: jne 0x10032a6b */
L_10032A48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10032A48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp HI8(eax), LO8(eax) */ /* 0x10032A4A: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032A95; /* 0x10032A4C: jne 0x10032a95 */
L_10032A4E:
    goto L_10032A9E; /* 0x10032A4E: jmp 0x10032a9e */
L_10032A50:
    PUSH32(esp, ebp); /* 0x10032A50: push ebp */
    ebp = esp; /* 0x10032A51: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10032A53: push edi */
    PUSH32(esp, esi); /* 0x10032A54: push esi */
    PUSH32(esp, ebx); /* 0x10032A55: push ebx */
    ecx = MEM32(ebp + 0x10); /* 0x10032A56: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x10032A59: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032A9E; /* 0x10032A5B: je 0x10032a9e */
L_10032A5D:
    esi = MEM32(ebp + 0x8); /* 0x10032A5D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x10032A60: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(ebx, 0x41u); /* 0x10032A63: mov bh, 0x41 */
    SET_LO8(ebx, 0x5Au); /* 0x10032A65: mov bl, 0x5a */
    SET_HI8(edx, 0x20u); /* 0x10032A67: mov dh, 0x20 */
    ecx = ecx; /* 0x10032A69: lea ecx, [ecx] */
L_10032A6B:
    SET_HI8(eax, MEM8(esi)); /* 0x10032A6B: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x10032A6D: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(edi)); /* 0x10032A6F: mov al, byte ptr [edi] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032A48; /* 0x10032A71: je 0x10032a48 */
L_10032A73:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x10032A73: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032A48; /* 0x10032A75: je 0x10032a48 */
L_10032A77:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10032A77: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10032A7A: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), HI8(ebx) */ /* 0x10032A7D: cmp ah, bh */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_10032A87; /* 0x10032A7F: jb 0x10032a87 */
L_10032A81:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x10032A81: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_10032A87; /* 0x10032A83: ja 0x10032a87 */
L_10032A85:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(edx)); /* 0x10032A85: add ah, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10032A87:
    /* cmp LO8(eax), HI8(ebx) */ /* 0x10032A87: cmp al, bh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_10032A91; /* 0x10032A89: jb 0x10032a91 */
L_10032A8B:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10032A8B: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_10032A91; /* 0x10032A8D: ja 0x10032a91 */
L_10032A8F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x10032A8F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10032A91:
    /* cmp HI8(eax), LO8(eax) */ /* 0x10032A91: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032A43; /* 0x10032A93: je 0x10032a43 */
L_10032A95:
    ecx = 0xFFFFFFFFu; /* 0x10032A95: mov ecx, 0xffffffff */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10032A9E; /* 0x10032A9A: jb 0x10032a9e */
L_10032A9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10032A9C: neg ecx */
    _flag_k = FK_CMP;
L_10032A9E:
    eax = ecx; /* 0x10032A9E: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x10032AA0: pop ebx */
    esi = POP32_VAL(esp); /* 0x10032AA1: pop esi */
    edi = POP32_VAL(esp); /* 0x10032AA2: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10032AA3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032AA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032AD0u);

    goto L_10032AD0;
L_10032908:
    SET_LO16(eax, MEM16(edx)); /* 0x10032908: mov ax, word ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1003290B: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1003290E: add ecx, 2 */
    _flag_k = FK_ADD;
    goto L_10032B2F; /* 0x10032911: jmp 0x10032b2f */
L_10032916:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x10032916: sub edx, 2 */
    _flag_k = FK_CMP;
    goto L_10032B58; /* 0x10032919: jmp 0x10032b58 */
L_1003291E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1003291E: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10032921: inc ebx */
    _flag_k = FK_INC;
    goto L_10032BB3; /* 0x10032922: jmp 0x10032bb3 */
L_10032AC8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10032AC8: add edx, 2 */
    _flag_k = FK_ADD;
    goto L_10032B66; /* 0x10032ACB: jmp 0x10032b66 */
L_10032AD0:
    PUSH32(esp, ebp); /* 0x10032AD0: push ebp */
    ebp = esp; /* 0x10032AD1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10032AD3: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x10032AD4: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x8); /* 0x10032AD7: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x10032ADA: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x10032ADD: push ebx */
    PUSH32(esp, esi); /* 0x10032ADE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10032ADF: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10032AE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10032AE4: push edi */
    edi = MEM32(ebp + 0x18); /* 0x10032AE5: mov edi, dword ptr [ebp + 0x18] */
    MEM32(edi) = ebx; /* 0x10032AE8: mov dword ptr [edi], ebx */
    MEM32(eax) = 1; /* 0x10032AEA: mov dword ptr [eax], 1 */
    /* test esi, esi */ /* 0x10032AF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032AFC; /* 0x10032AF2: je 0x10032afc */
L_10032AF4:
    MEM32(esi) = ecx; /* 0x10032AF4: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10032AF6: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x10032AF9: mov dword ptr [ebp + 0xc], esi */
L_10032AFC:
    /* test ecx, ecx */ /* 0x10032AFC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032B09; /* 0x10032AFE: je 0x10032b09 */
L_10032B00:
    SET_LO16(eax, MEM16(edx)); /* 0x10032B00: mov ax, word ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10032B03: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10032B06: add ecx, 2 */
    _flag_k = FK_ADD;
L_10032B09:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10032B09: inc dword ptr [edi] */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = 0x20u; /* 0x10032B0B: mov dword ptr [ebp + 8], 0x20 */
    MEM32(ebp + 0x10) = 9; /* 0x10032B12: mov dword ptr [ebp + 0x10], 9 */
L_10032B19:
    PUSH32(esp, 0x22u); /* 0x10032B19: push 0x22 */
    eax = POP32_VAL(esp); /* 0x10032B1B: pop eax */
    /* cmp MEM16(edx), LO16(eax) */ /* 0x10032B1C: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053E1E; /* 0x10032B1F: je 0x10053e1e */
L_10032B25:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10032B25: inc dword ptr [edi] */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x10032B27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032908; /* 0x10032B29: jne 0x10032908 */
L_10032B2F:
    eax = (uint32_t)MEM16(edx); /* 0x10032B2F: movzx eax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10032B32: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x10032B35: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032916; /* 0x10032B38: je 0x10032916 */
L_10032B3E:
    /* test ebx, ebx */ /* 0x10032B3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032B19; /* 0x10032B40: jne 0x10032b19 */
L_10032B42:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x10032B42: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032B4E; /* 0x10032B46: je 0x10032b4e */
L_10032B48:
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x10032B48: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032B19; /* 0x10032B4C: jne 0x10032b19 */
L_10032B4E:
    /* test ecx, ecx */ /* 0x10032B4E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032B58; /* 0x10032B50: je 0x10032b58 */
L_10032B52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032B52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x10032B54: mov word ptr [ecx - 2], ax */
L_10032B58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10032B58: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10032B5A: mov dword ptr [ebp - 4], ebx */
L_10032B5D:
    /* cmp MEM16(edx), LO16(ebx) */ /* 0x10032B5D: cmp word ptr [edx], bx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032D1F; /* 0x10032B60: je 0x10032d1f */
L_10032B66:
    eax = (uint32_t)MEM16(edx); /* 0x10032B66: movzx eax, word ptr [edx] */
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x10032B69: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032AC8; /* 0x10032B6D: je 0x10032ac8 */
L_10032B73:
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x10032B73: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032AC8; /* 0x10032B77: je 0x10032ac8 */
L_10032B7D:
    /* cmp MEM16(edx), LO16(ebx) */ /* 0x10032B7D: cmp word ptr [edx], bx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032D1F; /* 0x10032B80: je 0x10032d1f */
L_10032B86:
    /* test esi, esi */ /* 0x10032B86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032B92; /* 0x10032B88: je 0x10032b92 */
L_10032B8A:
    MEM32(esi) = ecx; /* 0x10032B8A: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10032B8C: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x10032B8F: mov dword ptr [ebp + 0xc], esi */
L_10032B92:
    eax = MEM32(ebp + 0x14); /* 0x10032B92: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x10032B95: inc dword ptr [eax] */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x10032B97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032BA4; /* 0x10032B99: je 0x10032ba4 */
L_10032B9B:
    SET_LO16(eax, MEM16(edx)); /* 0x10032B9B: mov ax, word ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10032B9E: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10032BA1: add ecx, 2 */
    _flag_k = FK_ADD;
L_10032BA4:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10032BA4: inc dword ptr [edi] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x4)); /* 0x10032BA6: mov esi, dword ptr [ebp - 4] */
L_10032BA9:
    PUSH32(esp, 0x5Cu); /* 0x10032BA9: push 0x5c */
    MEM32(ebp + (-0x4)) = 1; /* 0x10032BAB: mov dword ptr [ebp - 4], 1 */
    eax = POP32_VAL(esp); /* 0x10032BB2: pop eax */
L_10032BB3:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x10032BB3: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003291E; /* 0x10032BB6: je 0x1003291e */
L_10032BBC:
    PUSH32(esp, 0x22u); /* 0x10032BBC: push 0x22 */
    eax = POP32_VAL(esp); /* 0x10032BBE: pop eax */
    /* cmp MEM16(edx), LO16(eax) */ /* 0x10032BBF: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x5Cu); /* 0x10032BC2: push 0x5c */
    eax = POP32_VAL(esp); /* 0x10032BC4: pop eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053E32; /* 0x10032BC5: je 0x10053e32 */
L_10032BCB:
    /* test ebx, ebx */ /* 0x10032BCB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053E63; /* 0x10032BCD: jne 0x10053e63 */
L_10032BD3:
    eax = (uint32_t)MEM16(edx); /* 0x10032BD3: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x10032BD6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032C04; /* 0x10032BD9: je 0x10032c04 */
L_10032BDB:
    /* test esi, esi */ /* 0x10032BDB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032BEB; /* 0x10032BDD: jne 0x10032beb */
L_10032BDF:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x10032BDF: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032C04; /* 0x10032BE3: je 0x10032c04 */
L_10032BE5:
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x10032BE5: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032C04; /* 0x10032BE9: je 0x10032c04 */
L_10032BEB:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x10032BEB: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032BFD; /* 0x10032BEF: je 0x10032bfd */
L_10032BF1:
    /* test ecx, ecx */ /* 0x10032BF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032BFB; /* 0x10032BF3: je 0x10032bfb */
L_10032BF5:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10032BF5: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10032BF8: add ecx, 2 */
    _flag_k = FK_ADD;
L_10032BFB:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10032BFB: inc dword ptr [edi] */
    _flag_k = FK_INC;
L_10032BFD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10032BFD: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10032C00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032BA9; /* 0x10032C02: jmp 0x10032ba9 */
L_10032C04:
    MEM32(ebp + (-0x4)) = esi; /* 0x10032C04: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebp + 0xC); /* 0x10032C07: mov esi, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10032C0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032C16; /* 0x10032C0C: je 0x10032c16 */
L_10032C0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032C0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10032C10: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10032C13: add ecx, 2 */
    _flag_k = FK_ADD;
L_10032C16:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10032C16: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10032C18: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032B5D; /* 0x10032C1A: jmp 0x10032b5d */
L_10032D1F:
    /* test esi, esi */ /* 0x10032D1F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032D25; /* 0x10032D21: je 0x10032d25 */
L_10032D23:
    MEM32(esi) = ebx; /* 0x10032D23: mov dword ptr [esi], ebx */
L_10032D25:
    eax = MEM32(ebp + 0x14); /* 0x10032D25: mov eax, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x10032D28: pop edi */
    esi = POP32_VAL(esp); /* 0x10032D29: pop esi */
    ebx = POP32_VAL(esp); /* 0x10032D2A: pop ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x10032D2B: inc dword ptr [eax] */
    _flag_k = FK_INC;
    esp = ebp; /* 0x10032D2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032D2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032D30: ret  */
L_10053E1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053E1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x10053E20: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x22u); /* 0x10053E22: push 0x22 */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x10053E24: sete al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10053E27: add edx, 2 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10053E2A: mov ebx, eax */
    eax = POP32_VAL(esp); /* 0x10053E2C: pop eax */
    RECOMP_BACKEDGE();
    goto L_10032B3E; /* 0x10053E2D: jmp 0x10032b3e */
L_10053E32:
    /* test LO8(ebx), 1 */ /* 0x10053E32: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053E5C; /* 0x10053E35: jne 0x10053e5c */
L_10053E37:
    /* test esi, esi */ /* 0x10053E37: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053E4C; /* 0x10053E39: je 0x10053e4c */
L_10053E3B:
    PUSH32(esp, 0x22u); /* 0x10053E3B: push 0x22 */
    edi = POP32_VAL(esp); /* 0x10053E3D: pop edi */
    /* cmp MEM16(edx + 0x2), LO16(edi) */ /* 0x10053E3E: cmp word ptr [edx + 2], di */
    _flag_a = (uint32_t)(MEM16(edx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edi = MEM32(ebp + 0x18); /* 0x10053E42: mov edi, dword ptr [ebp + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053E4C; /* 0x10053E45: jne 0x10053e4c */
L_10053E47:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10053E47: add edx, 2 */
    _flag_k = FK_ADD;
    goto L_10053E59; /* 0x10053E4A: jmp 0x10053e59 */
L_10053E4C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10053E4C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053E50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10053E52: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x10053E54: sete al */
    esi = eax; /* 0x10053E57: mov esi, eax */
L_10053E59:
    PUSH32(esp, 0x5Cu); /* 0x10053E59: push 0x5c */
    eax = POP32_VAL(esp); /* 0x10053E5B: pop eax */
L_10053E5C:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10053E5C: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10053E5C: shr ebx, 1 */
    RECOMP_BACKEDGE();
    goto L_10032BCB; /* 0x10053E5E: jmp 0x10032bcb */
L_10053E63:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10053E63: dec ebx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x10053E64: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053E6E; /* 0x10053E66: je 0x10053e6e */
L_10053E68:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10053E68: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10053E6B: add ecx, 2 */
    _flag_k = FK_ADD;
L_10053E6E:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x10053E6E: inc dword ptr [edi] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10032BCB; /* 0x10053E70: jmp 0x10032bcb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032C27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032C27u);

    goto L_10032C27;
L_10032C1F:
    MEM32(0x100E1424) = ecx; /* 0x10032C1F: mov dword ptr [0x100e1424], ecx */
    goto L_10032C56; /* 0x10032C25: jmp 0x10032c56 */
L_10032C27:
    PUSH32(esp, ebp); /* 0x10032C27: push ebp */
    ebp = esp; /* 0x10032C28: mov ebp, esp */
    PUSH32(esp, 8); /* 0x10032C2A: push 8 */
    RECOMP_CALL(sub_10012226); /* 0x10032C2C: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032C31: pop ecx */
    ecx = eax; /* 0x10032C32: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10032C34: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053EAA; /* 0x10032C36: je 0x10053eaa */
L_10032C3C:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10032C3C: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E1424), 0 */ /* 0x10032C40: cmp dword ptr [0x100e1424], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1424)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10032C47: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x10032C4A: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032C1F; /* 0x10032C4C: je 0x10032c1f */
L_10032C4E:
    eax = MEM32(0x100E1428); /* 0x10032C4E: mov eax, dword ptr [0x100e1428] */
    MEM32(eax + 0x4) = ecx; /* 0x10032C53: mov dword ptr [eax + 4], ecx */
L_10032C56:
    MEM32(0x100E1428) = ecx; /* 0x10032C56: mov dword ptr [0x100e1428], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032C5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10032C5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032C5F: ret  */
L_10053EAA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10053EAA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10053EAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10053EAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032C60u);

L_10032C60:
    PUSH32(esp, esi); /* 0x10032C60: push esi */
    esi = MEM32(0x100DF614); /* 0x10032C61: mov esi, dword ptr [0x100df614] */
    PUSH32(esp, edi); /* 0x10032C67: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10032C68: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10032C6A: mov eax, edi */
    MEM32(0x100E1428) = edi; /* 0x10032C6C: mov dword ptr [0x100e1428], edi */
    MEM32(0x100E1424) = eax; /* 0x10032C72: mov dword ptr [0x100e1424], eax */
    /* cmp MEM32(esi), edi */ /* 0x10032C77: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032CAC; /* 0x10032C79: je 0x10032cac */
L_10032C7B:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x10032C7B: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10032CB8u); /* 0x10032C7E: push 0x10032cb8 */
    PUSH32(esp, MEM32(esi)); /* 0x10032C83: push dword ptr [esi] */
    RECOMP_CALL(sub_10011E8E); /* 0x10032C85: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032C8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032C8B: pop ecx */
    /* test eax, eax */ /* 0x10032C8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053E9C; /* 0x10032C8E: jne 0x10053e9c */
L_10032C94:
    PUSH32(esp, MEM32(esi)); /* 0x10032C94: push dword ptr [esi] */
    RECOMP_CALL(sub_10032C27); /* 0x10032C96: call 0x10032c27 */
    RECOMP_FLAGS_IN();
L_10032C9B:
    ecx = POP32_VAL(esp); /* 0x10032C9B: pop ecx */
    /* test eax, eax */ /* 0x10032C9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032D1A; /* 0x10032C9E: jne 0x10032d1a */
L_10032CA0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10032CA0: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), edi */ /* 0x10032CA3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032C7B; /* 0x10032CA5: jne 0x10032c7b */
L_10032CA7:
    eax = MEM32(0x100E1424); /* 0x10032CA7: mov eax, dword ptr [0x100e1424] */
L_10032CAC:
    esi = edi; /* 0x10032CAC: mov esi, edi */
L_10032CAE:
    /* test eax, eax */ /* 0x10032CAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032CBE; /* 0x10032CB0: je 0x10032cbe */
L_10032CB2:
    eax = MEM32(eax + 0x4); /* 0x10032CB2: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10032CB5: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10032CAE; /* 0x10032CB6: jmp 0x10032cae */
L_10032CBE:
    eax = esi + 0x1; /* 0x10032CBE: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x10032CC1: push eax */
    PUSH32(esp, 4); /* 0x10032CC2: push 4 */
    RECOMP_CALL(sub_10011208); /* 0x10032CC4: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032CC9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032CCA: pop ecx */
    ecx = eax; /* 0x10032CCB: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10032CCD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032D1A; /* 0x10032CCF: je 0x10032d1a */
L_10032CD1:
    MEM32(0x100DF60C) = esi; /* 0x10032CD1: mov dword ptr [0x100df60c], esi */
    esi = MEM32(0x100E1424); /* 0x10032CD7: mov esi, dword ptr [0x100e1424] */
    edx = esi; /* 0x10032CDD: mov edx, esi */
    MEM32(0x100DF614) = ecx; /* 0x10032CDF: mov dword ptr [0x100df614], ecx */
    /* test esi, esi */ /* 0x10032CE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032CF7; /* 0x10032CE7: je 0x10032cf7 */
L_10032CE9:
    eax = MEM32(edx); /* 0x10032CE9: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x10032CEB: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10032CED: add ecx, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(edx + 0x4); /* 0x10032CF0: mov edx, dword ptr [edx + 4] */
    /* test edx, edx */ /* 0x10032CF3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032CE9; /* 0x10032CF5: jne 0x10032ce9 */
L_10032CF7:
    MEM32(ecx) = edi; /* 0x10032CF7: mov dword ptr [ecx], edi */
    eax = esi; /* 0x10032CF9: mov eax, esi */
    /* test esi, esi */ /* 0x10032CFB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032D15; /* 0x10032CFD: je 0x10032d15 */
L_10032CFF:
    esi = MEM32(esi + 0x4); /* 0x10032CFF: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x10032D02: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10032D03: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10032D08: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x10032D0A: pop ecx */
    /* test esi, esi */ /* 0x10032D0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032CFF; /* 0x10032D0D: jne 0x10032cff */
L_10032D0F:
    MEM32(0x100E1424) = esi; /* 0x10032D0F: mov dword ptr [0x100e1424], esi */
L_10032D15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032D15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10032D17:
    edi = POP32_VAL(esp); /* 0x10032D17: pop edi */
    esi = POP32_VAL(esp); /* 0x10032D18: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032D19: ret  */
L_10032D1A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10032D1A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032D17; /* 0x10032D1D: jmp 0x10032d17 */
L_10053E9C:
    PUSH32(esp, eax); /* 0x10053E9C: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x10053E9D: push dword ptr [esi] */
    RECOMP_CALL(sub_1007C686); /* 0x10053E9F: call 0x1007c686 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053EA4: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10032C9B; /* 0x10053EA5: jmp 0x10032c9b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032CB8u);

L_10032CB8:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x10032CB8: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    void_lift_trap(0x10032CBAu, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10032CBB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x6A500146)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x6A500146) = (uint8_t)(MEM8(ebp + 0x6A500146) + LO8(ecx)); /* 0x10032CBD: add byte ptr [ebp + 0x6a500146], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE8u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xE8u); /* 0x10032CC3: add al, 0xe8 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10032CC5u, "aas ");
    /* in: no port I/O under Win32 */ /* 0x10032CC6: in eax, 0xfd */
    RECOMP_ICALL(MEM32(ecx + 0x59)); /* 0x10032CC8: call ptr [ecx + 0x59] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10032CCB: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10032CCD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032D1A; /* 0x10032CCF: je 0x10032d1a */
L_10032CD1:
    MEM32(0x100DF60C) = esi; /* 0x10032CD1: mov dword ptr [0x100df60c], esi */
    esi = MEM32(0x100E1424); /* 0x10032CD7: mov esi, dword ptr [0x100e1424] */
    edx = esi; /* 0x10032CDD: mov edx, esi */
    MEM32(0x100DF614) = ecx; /* 0x10032CDF: mov dword ptr [0x100df614], ecx */
    /* test esi, esi */ /* 0x10032CE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032CF7; /* 0x10032CE7: je 0x10032cf7 */
L_10032CE9:
    eax = MEM32(edx); /* 0x10032CE9: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x10032CEB: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10032CED: add ecx, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(edx + 0x4); /* 0x10032CF0: mov edx, dword ptr [edx + 4] */
    /* test edx, edx */ /* 0x10032CF3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032CE9; /* 0x10032CF5: jne 0x10032ce9 */
L_10032CF7:
    MEM32(ecx) = edi; /* 0x10032CF7: mov dword ptr [ecx], edi */
    eax = esi; /* 0x10032CF9: mov eax, esi */
    /* test esi, esi */ /* 0x10032CFB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032D15; /* 0x10032CFD: je 0x10032d15 */
L_10032CFF:
    esi = MEM32(esi + 0x4); /* 0x10032CFF: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x10032D02: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10032D03: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10032D08: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x10032D0A: pop ecx */
    /* test esi, esi */ /* 0x10032D0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10032CFF; /* 0x10032D0D: jne 0x10032cff */
L_10032D0F:
    MEM32(0x100E1424) = esi; /* 0x10032D0F: mov dword ptr [0x100e1424], esi */
L_10032D15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032D15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10032D17:
    edi = POP32_VAL(esp); /* 0x10032D17: pop edi */
    esi = POP32_VAL(esp); /* 0x10032D18: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032D19: ret  */
L_10032D1A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10032D1A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032D17; /* 0x10032D1D: jmp 0x10032d17 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032D31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032D31u);

L_10032D31:
    PUSH32(esp, ebp); /* 0x10032D31: push ebp */
    ebp = esp; /* 0x10032D32: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10032D34: push ecx */
    PUSH32(esp, ecx); /* 0x10032D35: push ecx */
    PUSH32(esp, ebx); /* 0x10032D36: push ebx */
    PUSH32(esp, esi); /* 0x10032D37: push esi */
    PUSH32(esp, edi); /* 0x10032D38: push edi */
    PUSH32(esp, 0x104u); /* 0x10032D39: push 0x104 */
    ebx = 0x100E1218u; /* 0x10032D3E: mov ebx, 0x100e1218 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032D43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10032D45: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10032D46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(0x100E1420) = (uint16_t)(LO16(eax)); /* 0x10032D48: mov word ptr [0x100e1420], ax */
    PUSH32(esp, edi); /* 0x10032D4E: push edi */
    RECOMP_ICALL(MEM32(0x100E5050)); /* 0x10032D4F: call dword ptr [0x100e5050] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF634); /* 0x10032D55: mov esi, dword ptr [0x100df634] */
    MEM32(0x100DF624) = ebx; /* 0x10032D5B: mov dword ptr [0x100df624], ebx */
    /* test esi, esi */ /* 0x10032D61: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032DDF; /* 0x10032D63: je 0x10032ddf */
L_10032D65:
    /* cmp MEM16(esi), LO16(edi) */ /* 0x10032D65: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032DDF; /* 0x10032D68: je 0x10032ddf */
L_10032D6A:
    eax = ebp + (-0x8); /* 0x10032D6A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10032D6D: push eax */
    eax = ebp + (-0x4); /* 0x10032D6E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10032D71: push eax */
    PUSH32(esp, edi); /* 0x10032D72: push edi */
    PUSH32(esp, edi); /* 0x10032D73: push edi */
    PUSH32(esp, esi); /* 0x10032D74: push esi */
    RECOMP_CALL(sub_10032AD0); /* 0x10032D75: call 0x10032ad0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x4)); /* 0x10032D7A: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10032D7D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x3FFFFFFFu */ /* 0x10032D80: cmp edi, 0x3fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10032DE3; /* 0x10032D86: jae 0x10032de3 */
L_10032D88:
    eax = MEM32(ebp + (-0x8)); /* 0x10032D88: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x10032D8B: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10032DE3; /* 0x10032D90: jae 0x10032de3 */
L_10032D92:
    ecx = eax + edi * 2; /* 0x10032D92: lea ecx, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10032D95: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x10032D97: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x10032D99: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10032DE3; /* 0x10032D9B: jb 0x10032de3 */
L_10032D9D:
    PUSH32(esp, ecx); /* 0x10032D9D: push ecx */
    RECOMP_CALL(sub_10012226); /* 0x10032D9E: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10032DA3: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10032DA5: pop ecx */
    /* test ebx, ebx */ /* 0x10032DA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032DE3; /* 0x10032DA8: je 0x10032de3 */
L_10032DAA:
    eax = ebp + (-0x8); /* 0x10032DAA: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10032DAD: push eax */
    eax = ebp + (-0x4); /* 0x10032DAE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10032DB1: push eax */
    eax = ebx + edi * 4; /* 0x10032DB2: lea eax, [ebx + edi*4] */
    PUSH32(esp, eax); /* 0x10032DB5: push eax */
    PUSH32(esp, ebx); /* 0x10032DB6: push ebx */
    PUSH32(esp, esi); /* 0x10032DB7: push esi */
    RECOMP_CALL(sub_10032AD0); /* 0x10032DB8: call 0x10032ad0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10032DBD: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10032DC0: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10032DC3: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF614) = ebx; /* 0x10032DC4: mov dword ptr [0x100df614], ebx */
    MEM32(0x100DF60C) = eax; /* 0x10032DCA: mov dword ptr [0x100df60c], eax */
    RECOMP_CALL(sub_10032C60); /* 0x10032DCF: call 0x10032c60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10032DD4: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10032DD6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10032DD8:
    edi = POP32_VAL(esp); /* 0x10032DD8: pop edi */
    esi = POP32_VAL(esp); /* 0x10032DD9: pop esi */
    ebx = POP32_VAL(esp); /* 0x10032DDA: pop ebx */
    esp = ebp; /* 0x10032DDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032DDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032DDE: ret  */
L_10032DDF:
    esi = ebx; /* 0x10032DDF: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_10032D6A; /* 0x10032DE1: jmp 0x10032d6a */
L_10032DE3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10032DE3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032DD8; /* 0x10032DE6: jmp 0x10032dd8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032DE8u);

L_10032DE8:
    PUSH32(esp, esi); /* 0x10032DE8: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x10032DE9: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10032DEE: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x10032DEF: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032DF4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032DF5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032DF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10032E0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032E0Cu);

    goto L_10032E0C;
L_10032DF7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1005F041; /* 0x10032DF7: jg 0x1005f041 */
L_10032DFD:
    goto L_10032E8B; /* 0x10032DFD: jmp 0x10032e8b */
L_10032E02:
    RECOMP_CALL(sub_1001E471); /* 0x10032E02: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005F05B; /* 0x10032E07: jmp 0x1005f05b */
L_10032E0C:
    PUSH32(esp, 0x10u); /* 0x10032E0C: push 0x10 */
    PUSH32(esp, 0x10032EB0u); /* 0x10032E0E: push 0x10032eb0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10032E13: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10032E18: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10032E1A: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x10032E1D: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x10032E20: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F011; /* 0x10032E23: je 0x1005f011 */
L_10032E29:
    /* test esi, esi */ /* 0x10032E29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10032E02; /* 0x10032E2B: js 0x10032e02 */
L_10032E2D:
    edx = MEM32(0x100DFDD8); /* 0x10032E2D: mov edx, dword ptr [0x100dfdd8] */
    /* cmp esi, edx */ /* 0x10032E33: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10032E02; /* 0x10032E35: jae 0x10032e02 */
L_10032E37:
    eax = esi; /* 0x10032E37: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10032E39: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x10032E3C: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10032E3E: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10032E41: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10032E41: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10032E44: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x10032E4B: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10032E50: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032E02; /* 0x10032E53: je 0x10032e02 */
L_10032E55:
    edi = MEM32(ebp + 0xC); /* 0x10032E55: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x10032E58: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F011; /* 0x10032E5B: je 0x1005f011 */
L_10032E61:
    /* cmp edi, 0x800u */ /* 0x10032E61: cmp edi, 0x800 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10032E67: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10032E69: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10032E02; /* 0x10032E6B: je 0x10032e02 */
L_10032E6D:
    /* cmp edi, edx */ /* 0x10032E6D: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005F025; /* 0x10032E6F: jge 0x1005f025 */
L_10032E75:
    /* cmp esi, edi */ /* 0x10032E75: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10032DF7; /* 0x10032E77: jge 0x10032df7 */
L_10032E7D:
    PUSH32(esp, esi); /* 0x10032E7D: push esi */
    RECOMP_CALL(sub_10014206); /* 0x10032E7E: call 0x10014206 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10032E83: push edi */
L_10032E84:
    RECOMP_CALL(sub_10014206); /* 0x10032E84: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032E89: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032E8A: pop ecx */
L_10032E8B:
    MEM32(ebp + (-0x4)) = ebx; /* 0x10032E8B: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x10032E8E: push edi */
    PUSH32(esp, esi); /* 0x10032E8F: push esi */
    RECOMP_CALL(sub_10032ECC); /* 0x10032E90: call 0x10032ecc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032E95: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032E96: pop ecx */
    ebx = eax; /* 0x10032E97: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10032E99: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10032E9C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10032DE8); /* 0x10032EA3: call 0x10032de8 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x10032EA8: mov eax, ebx */
L_10032EAA:
    RECOMP_CALL(sub_1000EDC3); /* 0x10032EAA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032EAF: ret  */
L_1005F011:
    RECOMP_CALL(sub_1001E471); /* 0x1005F011: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005F016: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1005F018: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005F01D: mov dword ptr [eax], 9 */
    goto L_1005F06D; /* 0x1005F023: jmp 0x1005f06d */
L_1005F025:
    PUSH32(esp, edi); /* 0x1005F025: push edi */
    RECOMP_CALL(sub_100A3914); /* 0x1005F026: call 0x100a3914 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F02B: pop ecx */
    /* test eax, eax */ /* 0x1005F02C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032E75; /* 0x1005F02E: je 0x10032e75 */
L_1005F034:
    RECOMP_CALL(sub_1001177D); /* 0x1005F034: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005F039: mov dword ptr [eax], 0xc */
    goto L_1005F06D; /* 0x1005F03F: jmp 0x1005f06d */
L_1005F041:
    PUSH32(esp, edi); /* 0x1005F041: push edi */
    RECOMP_CALL(sub_10014206); /* 0x1005F042: call 0x10014206 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005F047: push esi */
    RECOMP_BACKEDGE();
    goto L_10032E84; /* 0x1005F048: jmp 0x10032e84 */
L_1005F05B:
    MEM32(eax) = ebx; /* 0x1005F05B: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1005F05D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005F062: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x1005F068: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005F06D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005F06D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032EAA; /* 0x1005F070: jmp 0x10032eaa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032ECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032ECCu);

L_10032ECC:
    PUSH32(esp, ebp); /* 0x10032ECC: push ebp */
    ebp = esp; /* 0x10032ECD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10032ECF: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10032ED2: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10032ED5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10032ED6: mov edi, dword ptr [ebp + 8] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10032ED9: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x10032EDC: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x10032EDF: mov dword ptr [ebp - 8], eax */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x10032EE2: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x10032EE2: shl edi, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10032EE5: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x10032EEC: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F075; /* 0x10032EF1: je 0x1005f075 */
L_10032EF7:
    ecx = MEM32(ebp + 0xC); /* 0x10032EF7: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x10032EFA: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F090; /* 0x10032EFD: je 0x1005f090 */
L_10032F03:
    PUSH32(esp, ebx); /* 0x10032F03: push ebx */
    eax = ecx; /* 0x10032F04: mov eax, ecx */
    ebx = ecx; /* 0x10032F06: mov ebx, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10032F08: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x10032F0B: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x10032F0E: mov dword ptr [ebp - 0xc], eax */
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x10032F11: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x10032F11: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10032F14: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x10032F1B: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10032F29; /* 0x10032F20: je 0x10032f29 */
L_10032F22:
    PUSH32(esp, ecx); /* 0x10032F22: push ecx */
    RECOMP_CALL(sub_10014DF1); /* 0x10032F23: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032F28: pop ecx */
L_10032F29:
    PUSH32(esp, esi); /* 0x10032F29: push esi */
    esi = MEM32(0x100E510C); /* 0x10032F2A: mov esi, dword ptr [0x100e510c] */
    eax = ebp + (-0x4); /* 0x10032F30: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x10032F33: push 2 */
    PUSH32(esp, 1); /* 0x10032F35: push 1 */
    PUSH32(esp, 0); /* 0x10032F37: push 0 */
    PUSH32(esp, eax); /* 0x10032F39: push eax */
    RECOMP_ICALL(esi); /* 0x10032F3A: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10032F3C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10032F3D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014D4B); /* 0x10032F40: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032F45: pop ecx */
    PUSH32(esp, eax); /* 0x10032F46: push eax */
    RECOMP_ICALL(esi); /* 0x10032F47: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10032F49: push eax */
    RECOMP_ICALL(MEM32(0x100E5108)); /* 0x10032F4A: call dword ptr [0x100e5108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10032F50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F097; /* 0x10032F52: je 0x1005f097 */
L_10032F58:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10032F58: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10032F5B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1001501C); /* 0x10032F5E: call 0x1001501c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032F63: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032F64: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032F65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10032F67:
    /* test eax, eax */ /* 0x10032F67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F0A2; /* 0x10032F69: jne 0x1005f0a2 */
L_10032F6F:
    esi = MEM32(ebp + (-0x8)); /* 0x10032F6F: mov esi, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x10032F72: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi * 4 + 0x100DF640); /* 0x10032F75: mov eax, dword ptr [esi*4 + 0x100df640] */
    SET_LO8(ecx, MEM8(eax + edi + 0x4)); /* 0x10032F7C: mov cl, byte ptr [eax + edi + 4] */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x10032F80: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xEFu); /* 0x10032F87: and cl, 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + ebx + 0x4) = (uint8_t)(LO8(ecx)); /* 0x10032F8A: mov byte ptr [eax + ebx + 4], cl */
    eax = MEM32(esi * 4 + 0x100DF640); /* 0x10032F8E: mov eax, dword ptr [esi*4 + 0x100df640] */
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x10032F95: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(eax + edi + 0x24)); /* 0x10032F9C: mov al, byte ptr [eax + edi + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ecx + ebx + 0x24))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ecx + ebx + 0x24))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ecx + ebx + 0x24)); /* 0x10032FA0: xor al, byte ptr [ecx + ebx + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x10032FA4: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + ebx + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + ebx + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + ebx + 0x24) = (uint8_t)(MEM8(ecx + ebx + 0x24) ^ LO8(eax)); /* 0x10032FA6: xor byte ptr [ecx + ebx + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi * 4 + 0x100DF640); /* 0x10032FAA: mov eax, dword ptr [esi*4 + 0x100df640] */
    edx = MEM32(edx * 4 + 0x100DF640); /* 0x10032FB1: mov edx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(ecx, MEM8(eax + edi + 0x24)); /* 0x10032FB8: mov cl, byte ptr [eax + edi + 0x24] */
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(edx + ebx + 0x24))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(edx + ebx + 0x24))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(edx + ebx + 0x24)); /* 0x10032FBC: xor cl, byte ptr [edx + ebx + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x7Fu); /* 0x10032FC0: and cl, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(eax + edi + 0x24))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(eax + edi + 0x24))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(eax + edi + 0x24)); /* 0x10032FC3: xor cl, byte ptr [eax + edi + 0x24] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10032FC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx + ebx + 0x24) = (uint8_t)(LO8(ecx)); /* 0x10032FC9: mov byte ptr [edx + ebx + 0x24], cl */
L_10032FCD:
    esi = POP32_VAL(esp); /* 0x10032FCD: pop esi */
    ebx = POP32_VAL(esp); /* 0x10032FCE: pop ebx */
L_10032FCF:
    edi = POP32_VAL(esp); /* 0x10032FCF: pop edi */
    esp = ebp; /* 0x10032FD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10032FD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10032FD3: ret  */
L_1005F075:
    RECOMP_CALL(sub_1001177D); /* 0x1005F075: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005F07A: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005F080: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005F085: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005F088: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032FCF; /* 0x1005F08B: jmp 0x10032fcf */
L_1005F090:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F090: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032FCF; /* 0x1005F092: jmp 0x10032fcf */
L_1005F097:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005F097: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10032F67; /* 0x1005F09D: jmp 0x10032f67 */
L_1005F0A2:
    PUSH32(esp, eax); /* 0x1005F0A2: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005F0A3: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005F0A8: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005F0A9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032FCD; /* 0x1005F0AC: jmp 0x10032fcd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10032FD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10032FD4u);

    goto L_10032FD4;
L_100311DB:
    PUSH32(esp, edi); /* 0x100311DB: push edi */
    PUSH32(esp, eax); /* 0x100311DC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100311DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10029529); /* 0x100311E0: call 0x10029529 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100311E5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100311E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060426; /* 0x100311EA: je 0x10060426 */
L_100311F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100311F0: add esi, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x100311F3: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x100311F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100311DB; /* 0x100311F7: jne 0x100311db */
L_100311F9:
    ecx = MEM32(0x100DF61C); /* 0x100311F9: mov ecx, dword ptr [0x100df61c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x100311FF: sub esi, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x10031201: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10031204: neg esi */
    _flag_k = FK_CMP;
L_10031206:
    edi = POP32_VAL(esp); /* 0x10031206: pop edi */
    eax = esi; /* 0x10031207: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10031209: pop esi */
    ebp = POP32_VAL(esp); /* 0x1003120A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003120B: ret  */
L_10032FD4:
    PUSH32(esp, ebp); /* 0x10032FD4: push ebp */
    ebp = esp; /* 0x10032FD5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10032FD7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10032FD8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10032FDB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10032FDD: mov eax, esi */
    /* test esi, esi */ /* 0x10032FDF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003302D; /* 0x10032FE1: je 0x1003302d */
L_10032FE3:
    /* cmp MEM32(esi), ecx */ /* 0x10032FE3: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032FF0; /* 0x10032FE5: je 0x10032ff0 */
L_10032FE7:
    eax = eax + 0x4; /* 0x10032FE7: lea eax, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10032FEA: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), 0 */ /* 0x10032FEB: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032FE7; /* 0x10032FEE: jne 0x10032fe7 */
L_10032FF0:
    PUSH32(esp, ebx); /* 0x10032FF0: push ebx */
    PUSH32(esp, edi); /* 0x10032FF1: push edi */
    eax = ecx + 0x1; /* 0x10032FF2: lea eax, [ecx + 1] */
    PUSH32(esp, 4); /* 0x10032FF5: push 4 */
    PUSH32(esp, eax); /* 0x10032FF7: push eax */
    RECOMP_CALL(sub_10011208); /* 0x10032FF8: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10032FFD: mov edi, eax */
    ebx = edi; /* 0x10032FFF: mov ebx, edi */
    ecx = POP32_VAL(esp); /* 0x10033001: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10033002: pop ecx */
    /* test edi, edi */ /* 0x10033003: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006041C; /* 0x10033005: je 0x1006041c */
L_1003300B:
    eax = MEM32(esi); /* 0x1003300B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1003300D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033026; /* 0x1003300F: je 0x10033026 */
L_10033011:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x10033011: sub esi, edi */
    _flag_k = FK_CMP;
L_10033013:
    PUSH32(esp, eax); /* 0x10033013: push eax */
    RECOMP_CALL(sub_10030E8C); /* 0x10033014: call 0x10030e8c */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x10033019: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1003301B: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1003301E: pop ecx */
    eax = MEM32(esi + edi); /* 0x1003301F: mov eax, dword ptr [esi + edi] */
    /* test eax, eax */ /* 0x10033022: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033013; /* 0x10033024: jne 0x10033013 */
L_10033026:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10033026: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x10033029: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1003302B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1003302C: pop ebx */
L_1003302D:
    esi = POP32_VAL(esp); /* 0x1003302D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1003302E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003302F: ret  */
L_1006041C:
    PUSH32(esp, 9); /* 0x1006041C: push 9 */
    RECOMP_CALL(sub_1007BB8D); /* 0x1006041E: call 0x1007bb8d */
    RECOMP_FLAGS_IN();
    goto L_10060425; /* 0x10060423: jmp 0x10060425 */
L_10060425:
    ecx = POP32_VAL(esp); /* 0x10060425: pop ecx */
L_10060426:
    eax = MEM32(esi); /* 0x10060426: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM16(eax + edi * 2); /* 0x10060428: movzx eax, word ptr [eax + edi*2] */
    /* cmp eax, 0x3Du */ /* 0x1006042C: cmp eax, 0x3d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006043A; /* 0x1006042F: je 0x1006043a */
L_10060431:
    /* test LO16(eax), LO16(eax) */ /* 0x10060431: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100311F0; /* 0x10060434: jne 0x100311f0 */
L_1006043A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DF61C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(0x100DF61C); /* 0x1006043A: sub esi, dword ptr [0x100df61c] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x10060440: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    RECOMP_BACKEDGE();
    goto L_10031206; /* 0x10060443: jmp 0x10031206 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033051u);

L_10033051:
    PUSH32(esp, ebp); /* 0x10033051: push ebp */
    ebp = esp; /* 0x10033052: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10033054: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10033057: push eax */
    PUSH32(esp, 0); /* 0x10033058: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1003305A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1003305D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10033060: push 0x1003320e */
    RECOMP_CALL(sub_1001EAF3); /* 0x10033065: call 0x1001eaf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1003306A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1003306D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003306E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003320E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003320Eu);

    goto L_1003320E;
L_1003306F:
    PUSH32(esp, 0x25u); /* 0x1003306F: push 0x25 */
    ecx = POP32_VAL(esp); /* 0x10033071: pop ecx */
    /* cmp MEM16(ebx), LO16(ecx) */ /* 0x10033072: cmp word ptr [ebx], cx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100331AE; /* 0x10033075: jne 0x100331ae */
L_1003307B:
    goto L_10059FA6; /* 0x1003307B: jmp 0x10059fa6 */
L_10033080:
    PUSH32(esp, 0x58u); /* 0x10033080: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x10033082: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10033083: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100333CA; /* 0x10033086: je 0x100333ca */
L_1003308C:
    goto L_100333C2; /* 0x1003308C: jmp 0x100333c2 */
L_10033091:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2FC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2FC)) = MEM32(ebp + (-0x2FC)) & 0; /* 0x10033091: and dword ptr [ebp - 0x2fc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10033428; /* 0x10033098: jmp 0x10033428 */
L_1003309D:
    MEM8(ebp + (-0x2C1)) = (uint8_t)(0xFFu); /* 0x1003309D: mov byte ptr [ebp - 0x2c1], 0xff */
    goto L_10033450; /* 0x100330A4: jmp 0x10033450 */
L_100330A9:
    ebx = MEM32(ebp + (-0x2CC)); /* 0x100330A9: mov ebx, dword ptr [ebp - 0x2cc] */
    goto L_100334B8; /* 0x100330AF: jmp 0x100334b8 */
L_100330B4:
    edi = MEM32(ebp + (-0x2CC)); /* 0x100330B4: mov edi, dword ptr [ebp - 0x2cc] */
    goto L_100331AE; /* 0x100330BA: jmp 0x100331ae */
L_100330BF:
    /* test ebx, 0xFF00u */ /* 0x100330BF: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059F47; /* 0x100330C5: je 0x10059f47 */
L_100330CB:
    goto L_100330F8; /* 0x100330CB: jmp 0x100330f8 */
L_100330CD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2D4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2D4)) = MEM32(ebp + (-0x2D4)) - 1; /* 0x100330CD: dec dword ptr [ebp - 0x2d4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1003357D; /* 0x100330D3: jne 0x1003357d */
L_100330D9:
    goto L_10033119; /* 0x100330D9: jmp 0x10033119 */
L_100330DB:
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x100330DB: mov word ptr [eax], di */
    goto L_10033171; /* 0x100330DE: jmp 0x10033171 */
L_100330E3:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100330E3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059F94; /* 0x100330E6: je 0x10059f94 */
L_100330EC:
    goto L_100335B3; /* 0x100330EC: jmp 0x100335b3 */
L_100330F1:
    eax = ecx; /* 0x100330F1: mov eax, ecx */
    goto L_100331EA; /* 0x100330F3: jmp 0x100331ea */
L_100330F8:
    eax = MEM32(ebp + (-0x2C8)); /* 0x100330F8: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x100330FE: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10033104: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x10033105: push ebx */
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10033106: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x1003310C: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001EB78); /* 0x10033112: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033117: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10033118: pop ecx */
L_10033119:
    /* cmp MEM8(ebp + (-0x2ED)), 0 */ /* 0x10033119: cmp byte ptr [ebp - 0x2ed], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2ED))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059F71; /* 0x10033120: jne 0x10059f71 */
L_10033126:
    eax = MEM32(ebp + (-0x2F8)); /* 0x10033126: mov eax, dword ptr [ebp - 0x2f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x46u; /* 0x1003312C: sub eax, 0x46 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1003312F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10033131: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2F4)));
    eax = eax & MEM32(ebp + (-0x2F4)); /* 0x10033133: and eax, dword ptr [ebp - 0x2f4] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x10033139: je 0x100330b4 */
L_1003313F:
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x1003313F: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033171; /* 0x10033146: jne 0x10033171 */
L_10033148:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x310))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x310)) = MEM32(ebp + (-0x310)) + 1; /* 0x10033148: inc dword ptr [ebp - 0x310] */
    _flag_k = FK_INC;
L_1003314E:
    /* cmp MEM32(ebp + (-0x2EC)), 0 */ /* 0x1003314E: cmp dword ptr [ebp - 0x2ec], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2EC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059F78; /* 0x10033155: jne 0x10059f78 */
L_1003315B:
    SET_LO8(eax, MEM8(ebp + (-0x2CD))); /* 0x1003315B: mov al, byte ptr [ebp - 0x2cd] */
    /* test LO8(eax), LO8(eax) */ /* 0x10033161: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x2FC)); /* 0x10033163: mov eax, dword ptr [ebp - 0x2fc] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330DB; /* 0x10033169: je 0x100330db */
L_1003316F:
    MEM32(eax) = edi; /* 0x1003316F: mov dword ptr [eax], edi */
L_10033171:
    edi = MEM32(ebp + (-0x2CC)); /* 0x10033171: mov edi, dword ptr [ebp - 0x2cc] */
L_10033177:
    SET_LO8(eax, MEM8(ebp + (-0x2C3))); /* 0x10033177: mov al, byte ptr [ebp - 0x2c3] */
L_1003317D:
    ebx = MEM32(ebp + (-0x2E0)); /* 0x1003317D: mov ebx, dword ptr [ebp - 0x2e0] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x10033183: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    esi = MEM32(ebp + (-0x2C8)); /* 0x10033185: mov esi, dword ptr [ebp - 0x2c8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1003318B: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x2C3)) = (uint8_t)(LO8(eax)); /* 0x1003318E: mov byte ptr [ebp - 0x2c3], al */
L_10033194:
    eax = 0xFFFFu; /* 0x10033194: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x10033199: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003306F; /* 0x1003319C: je 0x1003306f */
L_100331A2:
    eax = (uint32_t)MEM16(ebx); /* 0x100331A2: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x100331A5: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100332D9; /* 0x100331A8: jne 0x100332d9 */
L_100331AE:
    ebx = MEM32(ebp + (-0x2DC)); /* 0x100331AE: mov ebx, dword ptr [ebp - 0x2dc] */
L_100331B4:
    /* cmp MEM32(ebp + (-0x324)), 1 */ /* 0x100331B4: cmp dword ptr [ebp - 0x324], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x324))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100596AE; /* 0x100331BB: je 0x100596ae */
L_100331C1:
    /* cmp MEM32(ebp + (-0x314)), 1 */ /* 0x100331C1: cmp dword ptr [ebp - 0x314], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x314))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100596BF; /* 0x100331C8: je 0x100596bf */
L_100331CE:
    eax = 0xFFFFu; /* 0x100331CE: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100331D3: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059FE9; /* 0x100331D6: jne 0x10059fe9 */
L_100331DC:
    eax = MEM32(ebp + (-0x310)); /* 0x100331DC: mov eax, dword ptr [ebp - 0x310] */
    /* test eax, eax */ /* 0x100331E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100596CB; /* 0x100331E4: je 0x100596cb */
L_100331EA:
    /* cmp MEM8(ebp + (-0x338)), 0 */ /* 0x100331EA: cmp byte ptr [ebp - 0x338], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x338))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x100331F1: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100331FE; /* 0x100331F2: je 0x100331fe */
L_100331F4:
    ecx = MEM32(ebp + (-0x33C)); /* 0x100331F4: mov ecx, dword ptr [ebp - 0x33c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100331FA: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100331FE:
    ecx = MEM32(ebp + (-0x4)); /* 0x100331FE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10033201: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10033202: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10033204: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10033205: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1003320A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1003320C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003320D: ret  */
L_1003320E:
    PUSH32(esp, ebp); /* 0x1003320E: push ebp */
    ebp = esp; /* 0x1003320F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x344u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x344u; /* 0x10033211: sub esp, 0x344 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10033217: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1003321C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1003321E: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x14); /* 0x10033221: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10033224: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10033226: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10033229: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1003322A: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x320)) = ecx; /* 0x1003322D: mov dword ptr [ebp - 0x320], ecx */
    ecx = ebp + (-0x2C0); /* 0x10033233: lea ecx, [ebp - 0x2c0] */
    MEM32(ebp + (-0x2D8)) = eax; /* 0x10033239: mov dword ptr [ebp - 0x2d8], eax */
    MEM32(ebp + (-0x2DC)) = ecx; /* 0x1003323F: mov dword ptr [ebp - 0x2dc], ecx */
    MEM32(ebp + (-0x318)) = 0x15Eu; /* 0x10033245: mov dword ptr [ebp - 0x318], 0x15e */
    MEM32(ebp + (-0x314)) = edx; /* 0x1003324F: mov dword ptr [ebp - 0x314], edx */
    MEM32(ebp + (-0x31C)) = edx; /* 0x10033255: mov dword ptr [ebp - 0x31c], edx */
    MEM32(ebp + (-0x324)) = edx; /* 0x1003325B: mov dword ptr [ebp - 0x324], edx */
    MEM32(ebp + (-0x30C)) = edx; /* 0x10033261: mov dword ptr [ebp - 0x30c], edx */
    MEM32(ebp + (-0x304)) = edx; /* 0x10033267: mov dword ptr [ebp - 0x304], edx */
    MEM32(ebp + (-0x32C)) = edx; /* 0x1003326D: mov dword ptr [ebp - 0x32c], edx */
    PUSH32(esp, edi); /* 0x10033273: push edi */
    edi = edx; /* 0x10033274: mov edi, edx */
    MEM32(ebp + (-0x2CC)) = edi; /* 0x10033276: mov dword ptr [ebp - 0x2cc], edi */
    /* test ebx, ebx */ /* 0x1003327C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100591C4; /* 0x1003327E: je 0x100591c4 */
L_10033284:
    /* test eax, eax */ /* 0x10033284: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100591C4; /* 0x10033286: je 0x100591c4 */
L_1003328C:
    PUSH32(esp, esi); /* 0x1003328C: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1003328D: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x344); /* 0x10033290: lea ecx, [ebp - 0x344] */
    RECOMP_CALL(sub_1000F764); /* 0x10033296: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003329B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1003329D: mov esi, eax */
    MEM8(ebp + (-0x2C3)) = (uint8_t)(LO8(eax)); /* 0x1003329F: mov byte ptr [ebp - 0x2c3], al */
    ecx = eax; /* 0x100332A5: mov ecx, eax */
    MEM32(ebp + (-0x2C8)) = esi; /* 0x100332A7: mov dword ptr [ebp - 0x2c8], esi */
    eax = (uint32_t)MEM16(ebx); /* 0x100332AD: movzx eax, word ptr [ebx] */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x100332B0: mov dword ptr [ebp - 0x2e8], esi */
    MEM32(ebp + (-0x310)) = ecx; /* 0x100332B6: mov dword ptr [ebp - 0x310], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100332BC: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330F1; /* 0x100332BF: je 0x100330f1 */
L_100332C5:
    MEM32(ebp + (-0x330)) = 0x2Du; /* 0x100332C5: mov dword ptr [ebp - 0x330], 0x2d */
    MEM32(ebp + (-0x334)) = 0x2Bu; /* 0x100332CF: mov dword ptr [ebp - 0x334], 0x2b */
L_100332D9:
    PUSH32(esp, 8); /* 0x100332D9: push 8 */
    PUSH32(esp, eax); /* 0x100332DB: push eax */
    RECOMP_CALL(sub_1000F7D4); /* 0x100332DC: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100332E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100332E2: pop ecx */
    /* test eax, eax */ /* 0x100332E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100591DC; /* 0x100332E5: jne 0x100591dc */
L_100332EB:
    eax = (uint32_t)MEM16(ebx); /* 0x100332EB: movzx eax, word ptr [ebx] */
    PUSH32(esp, 0x25u); /* 0x100332EE: push 0x25 */
    ecx = POP32_VAL(esp); /* 0x100332F0: pop ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100332F1: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100335B3; /* 0x100332F4: jne 0x100335b3 */
L_100332FA:
    /* cmp LO16(ecx), MEM16(ebx + 0x2) */ /* 0x100332FA: cmp cx, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330E3; /* 0x100332FE: je 0x100330e3 */
L_10033304:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10033304: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(edx, 1); /* 0x10033306: mov dh, 1 */
    edi = ecx; /* 0x10033308: mov edi, ecx */
    MEM32(ebp + (-0x328)) = ecx; /* 0x1003330A: mov dword ptr [ebp - 0x328], ecx */
    SET_LO8(eax, LO8(ecx)); /* 0x10033310: mov al, cl */
    MEM32(ebp + (-0x2FC)) = edi; /* 0x10033312: mov dword ptr [ebp - 0x2fc], edi */
    SET_LO8(edx, LO8(ecx)); /* 0x10033318: mov dl, cl */
    MEM32(ebp + (-0x2F4)) = ecx; /* 0x1003331A: mov dword ptr [ebp - 0x2f4], ecx */
    SET_HI8(eax, LO8(ecx)); /* 0x10033320: mov ah, cl */
    MEM32(ebp + (-0x300)) = edi; /* 0x10033322: mov dword ptr [ebp - 0x300], edi */
    esi = ecx; /* 0x10033328: mov esi, ecx */
    MEM8(ebp + (-0x305)) = (uint8_t)(LO8(ecx)); /* 0x1003332A: mov byte ptr [ebp - 0x305], cl */
    MEM8(ebp + (-0x2ED)) = (uint8_t)(LO8(ecx)); /* 0x10033330: mov byte ptr [ebp - 0x2ed], cl */
    MEM8(ebp + (-0x2C4)) = (uint8_t)(LO8(eax)); /* 0x10033336: mov byte ptr [ebp - 0x2c4], al */
    MEM8(ebp + (-0x2C2)) = (uint8_t)(LO8(edx)); /* 0x1003333C: mov byte ptr [ebp - 0x2c2], dl */
    MEM8(ebp + (-0x2E1)) = (uint8_t)(LO8(ecx)); /* 0x10033342: mov byte ptr [ebp - 0x2e1], cl */
    MEM8(ebp + (-0x2C1)) = (uint8_t)(HI8(eax)); /* 0x10033348: mov byte ptr [ebp - 0x2c1], ah */
    MEM8(ebp + (-0x2CD)) = (uint8_t)(HI8(edx)); /* 0x1003334E: mov byte ptr [ebp - 0x2cd], dh */
    MEM32(ebp + (-0x2EC)) = ecx; /* 0x10033354: mov dword ptr [ebp - 0x2ec], ecx */
L_1003335A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1003335A: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2E0)) = ebx; /* 0x1003335D: mov dword ptr [ebp - 0x2e0], ebx */
    ebx = (uint32_t)MEM16(ebx); /* 0x10033363: movzx ebx, word ptr [ebx] */
    /* test ebx, 0xFF00u */ /* 0x10033366: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003339E; /* 0x1003336C: jne 0x1003339e */
L_1003336E:
    eax = (uint32_t)LO8(ebx); /* 0x1003336E: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10033371: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10033372: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x2C2))); /* 0x10033377: mov dl, byte ptr [ebp - 0x2c2] */
    ecx = POP32_VAL(esp); /* 0x1003337D: pop ecx */
    ecx = MEM32(ebp + (-0x2EC)); /* 0x1003337E: mov ecx, dword ptr [ebp - 0x2ec] */
    /* test eax, eax */ /* 0x10033384: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059229; /* 0x10033386: jne 0x10059229 */
L_1003338C:
    SET_HI8(eax, MEM8(ebp + (-0x2C1))); /* 0x1003338C: mov ah, byte ptr [ebp - 0x2c1] */
    SET_HI8(edx, MEM8(ebp + (-0x2CD))); /* 0x10033392: mov dh, byte ptr [ebp - 0x2cd] */
    SET_LO8(eax, MEM8(ebp + (-0x2C4))); /* 0x10033398: mov al, byte ptr [ebp - 0x2c4] */
L_1003339E:
    /* cmp ebx, 0x4Eu */ /* 0x1003339E: cmp ebx, 0x4e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005923D; /* 0x100333A1: jle 0x1005923d */
L_100333A7:
    /* cmp ebx, 0x68u */ /* 0x100333A7: cmp ebx, 0x68 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059364; /* 0x100333AA: je 0x10059364 */
L_100333B0:
    /* cmp ebx, 0x6Cu */ /* 0x100333B0: cmp ebx, 0x6c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059323; /* 0x100333B3: je 0x10059323 */
L_100333B9:
    /* cmp ebx, 0x77u */ /* 0x100333B9: cmp ebx, 0x77 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059351; /* 0x100333BC: je 0x10059351 */
L_100333C2:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(edx, LO8(edx) + 1); /* 0x100333C2: inc dl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2C2)) = (uint8_t)(LO8(edx)); /* 0x100333C4: mov byte ptr [ebp - 0x2c2], dl */
L_100333CA:
    ecx = MEM32(ebp + (-0x2EC)); /* 0x100333CA: mov ecx, dword ptr [ebp - 0x2ec] */
L_100333D0:
    SET_HI8(eax, MEM8(ebp + (-0x2C1))); /* 0x100333D0: mov ah, byte ptr [ebp - 0x2c1] */
L_100333D6:
    ebx = MEM32(ebp + (-0x2E0)); /* 0x100333D6: mov ebx, dword ptr [ebp - 0x2e0] */
L_100333DC:
    SET_HI8(edx, MEM8(ebp + (-0x2CD))); /* 0x100333DC: mov dh, byte ptr [ebp - 0x2cd] */
    SET_LO8(eax, MEM8(ebp + (-0x2C4))); /* 0x100333E2: mov al, byte ptr [ebp - 0x2c4] */
    /* test LO8(edx), LO8(edx) */ /* 0x100333E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003335A; /* 0x100333EA: je 0x1003335a */
L_100333F0:
    edi = MEM32(ebp + (-0x2FC)); /* 0x100333F0: mov edi, dword ptr [ebp - 0x2fc] */
    MEM32(ebp + (-0x2D4)) = esi; /* 0x100333F6: mov dword ptr [ebp - 0x2d4], esi */
    esi = MEM32(ebp + (-0x2C8)); /* 0x100333FC: mov esi, dword ptr [ebp - 0x2c8] */
    /* test LO8(eax), LO8(eax) */ /* 0x10033402: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033091; /* 0x10033404: jne 0x10033091 */
L_1003340A:
    ecx = MEM32(ebp + (-0x320)); /* 0x1003340A: mov ecx, dword ptr [ebp - 0x320] */
    MEM32(ebp + (-0x32C)) = ecx; /* 0x10033410: mov dword ptr [ebp - 0x32c], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10033416: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x320)) = ecx; /* 0x10033419: mov dword ptr [ebp - 0x320], ecx */
    ecx = MEM32(ecx + (-0x4)); /* 0x1003341F: mov ecx, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x2FC)) = ecx; /* 0x10033422: mov dword ptr [ebp - 0x2fc], ecx */
L_10033428:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10033428: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x2C2)) = (uint8_t)(LO8(eax)); /* 0x1003342A: mov byte ptr [ebp - 0x2c2], al */
    /* test HI8(eax), HI8(eax) */ /* 0x10033430: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033450; /* 0x10033432: jne 0x10033450 */
L_10033434:
    eax = (uint32_t)MEM16(ebx); /* 0x10033434: movzx eax, word ptr [ebx] */
    /* cmp eax, 0x53u */ /* 0x10033437: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003309D; /* 0x1003343A: je 0x1003309d */
L_10033440:
    MEM8(ebp + (-0x2C1)) = (uint8_t)(1); /* 0x10033440: mov byte ptr [ebp - 0x2c1], 1 */
    /* cmp eax, 0x43u */ /* 0x10033447: cmp eax, 0x43 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003309D; /* 0x1003344A: je 0x1003309d */
L_10033450:
    ecx = (uint32_t)MEM16(ebx); /* 0x10033450: movzx ecx, word ptr [ebx] */
    PUSH32(esp, 0x20u); /* 0x10033453: push 0x20 */
    eax = POP32_VAL(esp); /* 0x10033455: pop eax */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10033456: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x6Eu); /* 0x10033458: push 0x6e */
    eax = POP32_VAL(esp); /* 0x1003345A: pop eax */
    MEM32(ebp + (-0x2F8)) = ecx; /* 0x1003345B: mov dword ptr [ebp - 0x2f8], ecx */
    /* cmp ecx, eax */ /* 0x10033461: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330A9; /* 0x10033463: je 0x100330a9 */
L_10033469:
    /* cmp ecx, 0x63u */ /* 0x10033469: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059379; /* 0x1003346C: je 0x10059379 */
L_10033472:
    /* cmp ecx, 0x7Bu */ /* 0x10033472: cmp ecx, 0x7b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059379; /* 0x10033475: je 0x10059379 */
L_1003347B:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x1003347B: push dword ptr [ebp - 0x2d8] */
    eax = ebp + (-0x2E8); /* 0x10033481: lea eax, [ebp - 0x2e8] */
    PUSH32(esp, eax); /* 0x10033487: push eax */
    RECOMP_CALL(sub_1001E5A8); /* 0x10033488: call 0x1001e5a8 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x2E8)); /* 0x1003348D: mov esi, dword ptr [ebp - 0x2e8] */
    ecx = POP32_VAL(esp); /* 0x10033493: pop ecx */
    MEM32(ebp + (-0x2C8)) = esi; /* 0x10033494: mov dword ptr [ebp - 0x2c8], esi */
L_1003349A:
    ebx = (uint32_t)LO16(eax); /* 0x1003349A: movzx ebx, ax */
    eax = 0xFFFFu; /* 0x1003349D: mov eax, 0xffff */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x100334A2: mov dword ptr [ebp - 0x2cc], ebx */
    ecx = POP32_VAL(esp); /* 0x100334A8: pop ecx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100334A9: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330B4; /* 0x100334AC: je 0x100330b4 */
L_100334B2:
    ecx = MEM32(ebp + (-0x2F8)); /* 0x100334B2: mov ecx, dword ptr [ebp - 0x2f8] */
L_100334B8:
    eax = MEM32(ebp + (-0x300)); /* 0x100334B8: mov eax, dword ptr [ebp - 0x300] */
    edx = MEM32(ebp + (-0x2D4)); /* 0x100334BE: mov edx, dword ptr [ebp - 0x2d4] */
    /* test eax, eax */ /* 0x100334C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059396; /* 0x100334C6: jne 0x10059396 */
L_100334CC:
    /* cmp ecx, 0x6Fu */ /* 0x100334CC: cmp ecx, 0x6f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005996F; /* 0x100334CF: jg 0x1005996f */
L_100334D5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100334E9; /* 0x100334D5: je 0x100334e9 */
L_100334D7:
    /* cmp ecx, 0x63u */ /* 0x100334D7: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059842; /* 0x100334DA: je 0x10059842 */
L_100334E0:
    /* cmp ecx, 0x64u */ /* 0x100334E0: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100593A3; /* 0x100334E3: jne 0x100593a3 */
L_100334E9:
    /* cmp MEM16(ebp + (-0x330)), LO16(ebx) */ /* 0x100334E9: cmp word ptr [ebp - 0x330], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x330))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059DD5; /* 0x100334F0: je 0x10059dd5 */
L_100334F6:
    /* cmp MEM16(ebp + (-0x334)), LO16(ebx) */ /* 0x100334F6: cmp word ptr [ebp - 0x334], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x334))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059DDC; /* 0x100334FD: je 0x10059ddc */
L_10033503:
    PUSH32(esp, 0x78u); /* 0x10033503: push 0x78 */
    edx = POP32_VAL(esp); /* 0x10033505: pop edx */
L_10033506:
    SET_LO8(eax, MEM8(ebp + (-0x2C2))); /* 0x10033506: mov al, byte ptr [ebp - 0x2c2] */
L_1003350C:
    /* cmp MEM32(ebp + (-0x2EC)), 0 */ /* 0x1003350C: cmp dword ptr [ebp - 0x2ec], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2EC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059C3D; /* 0x10033513: jne 0x10059c3d */
L_10033519:
    /* test LO8(eax), LO8(eax) */ /* 0x10033519: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033119; /* 0x1003351B: jne 0x10033119 */
L_10033521:
    /* cmp ecx, edx */ /* 0x10033521: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330BF; /* 0x10033523: je 0x100330bf */
L_10033529:
    /* cmp ecx, 0x70u */ /* 0x10033529: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330BF; /* 0x1003352C: je 0x100330bf */
L_10033532:
    /* test ebx, 0xFF00u */ /* 0x10033532: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100330F8; /* 0x10033538: jne 0x100330f8 */
L_1003353E:
    eax = (uint32_t)LO8(ebx); /* 0x1003353E: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10033541: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10033542: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033547: pop ecx */
    /* test eax, eax */ /* 0x10033548: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330F8; /* 0x1003354A: je 0x100330f8 */
L_10033550:
    PUSH32(esp, 0x6Fu); /* 0x10033550: push 0x6f */
    eax = POP32_VAL(esp); /* 0x10033552: pop eax */
    /* cmp MEM32(ebp + (-0x2F8)), eax */ /* 0x10033553: cmp dword ptr [ebp - 0x2f8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059F33; /* 0x10033559: je 0x10059f33 */
L_1003355F:
    edi = (uint32_t)((int32_t)edi * (int32_t)0xAu); /* 0x1003355F: imul edi, edi, 0xa */
L_10033562:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2F4)) = MEM32(ebp + (-0x2F4)) + 1; /* 0x10033562: inc dword ptr [ebp - 0x2f4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFD0u; /* 0x10033568: add edi, -0x30 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(ebx); /* 0x1003356B: movzx eax, bx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1003356E: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x300)), 0 */ /* 0x10033570: cmp dword ptr [ebp - 0x300], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x300))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100330CD; /* 0x10033577: jne 0x100330cd */
L_1003357D:
    eax = MEM32(ebp + (-0x2C8)); /* 0x1003357D: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10033583: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10033589: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = eax; /* 0x1003358A: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10033590: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001C722); /* 0x10033596: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003359B: pop ecx */
    ecx = MEM32(ebp + (-0x2F8)); /* 0x1003359C: mov ecx, dword ptr [ebp - 0x2f8] */
    ebx = (uint32_t)LO16(eax); /* 0x100335A2: movzx ebx, ax */
    PUSH32(esp, 0x78u); /* 0x100335A5: push 0x78 */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x100335A7: mov dword ptr [ebp - 0x2cc], ebx */
    edx = POP32_VAL(esp); /* 0x100335AD: pop edx */
    RECOMP_BACKEDGE();
    goto L_10033521; /* 0x100335AE: jmp 0x10033521 */
L_100335B3:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x100335B3: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100335B9: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = esi; /* 0x100335BA: mov dword ptr [ebp - 0x2c8], esi */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x100335C0: mov dword ptr [ebp - 0x2e8], esi */
    RECOMP_CALL(sub_1001C722); /* 0x100335C6: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100335CB: movzx edi, ax */
    SET_LO16(eax, MEM16(ebx)); /* 0x100335CE: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x100335D1: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2CC)) = edi; /* 0x100335D4: mov dword ptr [ebp - 0x2cc], edi */
    ecx = POP32_VAL(esp); /* 0x100335DA: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100335DB: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033194; /* 0x100335DE: je 0x10033194 */
L_100335E4:
    goto L_10059FCB; /* 0x100335E4: jmp 0x10059fcb */
L_100591C4:
    RECOMP_CALL(sub_1001177D); /* 0x100591C4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100591C9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100591CF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100591D4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100331FE; /* 0x100591D7: jmp 0x100331fe */
L_100591DC:
    eax = MEM32(ebp + (-0x2D8)); /* 0x100591DC: mov eax, dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100591E2: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x100591E3: push eax */
    PUSH32(esp, eax); /* 0x100591E4: push eax */
    eax = ebp + (-0x2E8); /* 0x100591E5: lea eax, [ebp - 0x2e8] */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x100591EB: mov dword ptr [ebp - 0x2e8], esi */
    PUSH32(esp, eax); /* 0x100591F1: push eax */
    RECOMP_CALL(sub_1001E5A8); /* 0x100591F2: call 0x1001e5a8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100591F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100591F8: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100591F9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x100591FC: push eax */
    RECOMP_CALL(sub_1001EB78); /* 0x100591FD: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059202: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059203: pop ecx */
L_10059204:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x10059204: add ebx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x10059207: push 8 */
    eax = (uint32_t)MEM16(ebx); /* 0x10059209: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1005920C: push eax */
    RECOMP_CALL(sub_1000F7D4); /* 0x1005920D: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059212: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059213: pop ecx */
    /* test eax, eax */ /* 0x10059214: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059204; /* 0x10059216: jne 0x10059204 */
L_10059218:
    esi = MEM32(ebp + (-0x2E8)); /* 0x10059218: mov esi, dword ptr [ebp - 0x2e8] */
    MEM32(ebp + (-0x2C8)) = esi; /* 0x1005921E: mov dword ptr [ebp - 0x2c8], esi */
    RECOMP_BACKEDGE();
    goto L_100331A2; /* 0x10059224: jmp 0x100331a2 */
L_10059229:
    eax = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x10059229: imul eax, esi, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005922C: inc edi */
    _flag_k = FK_INC;
    esi = ebx + (-0x30); /* 0x1005922D: lea esi, [ebx - 0x30] */
    MEM32(ebp + (-0x300)) = edi; /* 0x10059230: mov dword ptr [ebp - 0x300], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10059236: add esi, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100333D0; /* 0x10059238: jmp 0x100333d0 */
L_1005923D:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100333D6; /* 0x1005923D: je 0x100333d6 */
L_10059243:
    /* cmp ebx, 0x2Au */ /* 0x10059243: cmp ebx, 0x2a */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059316; /* 0x10059246: je 0x10059316 */
L_1005924C:
    /* cmp ebx, 0x46u */ /* 0x1005924C: cmp ebx, 0x46 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100333D6; /* 0x1005924F: je 0x100333d6 */
L_10059255:
    /* cmp ebx, 0x49u */ /* 0x10059255: cmp ebx, 0x49 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059270; /* 0x10059258: je 0x10059270 */
L_1005925A:
    /* cmp ebx, 0x4Cu */ /* 0x1005925A: cmp ebx, 0x4c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100333C2; /* 0x1005925D: jne 0x100333c2 */
L_10059263:
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(edx, HI8(edx) + 1); /* 0x10059263: inc dh */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2CD)) = (uint8_t)(HI8(edx)); /* 0x10059265: mov byte ptr [ebp - 0x2cd], dh */
    RECOMP_BACKEDGE();
    goto L_100333D6; /* 0x1005926B: jmp 0x100333d6 */
L_10059270:
    ecx = MEM32(ebp + (-0x2E0)); /* 0x10059270: mov ecx, dword ptr [ebp - 0x2e0] */
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x10059276: movzx eax, word ptr [ecx + 2] */
    /* cmp eax, 0x36u */ /* 0x1005927A: cmp eax, 0x36 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100592BB; /* 0x1005927D: jne 0x100592bb */
L_1005927F:
    /* cmp MEM16(ecx + 0x4), 0x34u */ /* 0x1005927F: cmp word ptr [ecx + 4], 0x34 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(0x34u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100592B5; /* 0x10059284: jne 0x100592b5 */
L_10059286:
    ebx = ecx + 0x4; /* 0x10059286: lea ebx, [ecx + 4] */
    ecx = MEM32(ebp + (-0x2EC)); /* 0x10059289: mov ecx, dword ptr [ebp - 0x2ec] */
L_1005928F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005928F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2E0)) = ebx; /* 0x10059290: mov dword ptr [ebp - 0x2e0], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059296: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2EC)) = ecx; /* 0x10059298: mov dword ptr [ebp - 0x2ec], ecx */
    MEM32(ebp + (-0x30C)) = eax; /* 0x1005929E: mov dword ptr [ebp - 0x30c], eax */
    MEM32(ebp + (-0x304)) = eax; /* 0x100592A4: mov dword ptr [ebp - 0x304], eax */
    SET_HI8(eax, MEM8(ebp + (-0x2C1))); /* 0x100592AA: mov ah, byte ptr [ebp - 0x2c1] */
    RECOMP_BACKEDGE();
    goto L_100333DC; /* 0x100592B0: jmp 0x100333dc */
L_100592B5:
    ecx = MEM32(ebp + (-0x2E0)); /* 0x100592B5: mov ecx, dword ptr [ebp - 0x2e0] */
L_100592BB:
    /* cmp eax, 0x33u */ /* 0x100592BB: cmp eax, 0x33 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100592E1; /* 0x100592BE: jne 0x100592e1 */
L_100592C0:
    /* cmp MEM16(ecx + 0x4), 0x32u */ /* 0x100592C0: cmp word ptr [ecx + 4], 0x32 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(0x32u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100592E1; /* 0x100592C5: jne 0x100592e1 */
L_100592C7:
    SET_HI8(eax, MEM8(ebp + (-0x2C1))); /* 0x100592C7: mov ah, byte ptr [ebp - 0x2c1] */
    ebx = ecx + 0x4; /* 0x100592CD: lea ebx, [ecx + 4] */
    ecx = MEM32(ebp + (-0x2EC)); /* 0x100592D0: mov ecx, dword ptr [ebp - 0x2ec] */
    MEM32(ebp + (-0x2E0)) = ebx; /* 0x100592D6: mov dword ptr [ebp - 0x2e0], ebx */
    RECOMP_BACKEDGE();
    goto L_100333DC; /* 0x100592DC: jmp 0x100333dc */
L_100592E1:
    PUSH32(esp, 0x64u); /* 0x100592E1: push 0x64 */
    ecx = POP32_VAL(esp); /* 0x100592E3: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100592E4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100333CA; /* 0x100592E7: je 0x100333ca */
L_100592ED:
    PUSH32(esp, 0x69u); /* 0x100592ED: push 0x69 */
    ecx = POP32_VAL(esp); /* 0x100592EF: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100592F0: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100333CA; /* 0x100592F3: je 0x100333ca */
L_100592F9:
    PUSH32(esp, 0x6Fu); /* 0x100592F9: push 0x6f */
    ecx = POP32_VAL(esp); /* 0x100592FB: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100592FC: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100333CA; /* 0x100592FF: je 0x100333ca */
L_10059305:
    PUSH32(esp, 0x78u); /* 0x10059305: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x10059307: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10059308: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033080; /* 0x1005930B: jne 0x10033080 */
L_10059311:
    RECOMP_BACKEDGE();
    goto L_100333CA; /* 0x10059311: jmp 0x100333ca */
L_10059316:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x10059316: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2C4)) = (uint8_t)(LO8(eax)); /* 0x10059318: mov byte ptr [ebp - 0x2c4], al */
    RECOMP_BACKEDGE();
    goto L_100333D6; /* 0x1005931E: jmp 0x100333d6 */
L_10059323:
    ebx = MEM32(ebp + (-0x2E0)); /* 0x10059323: mov ebx, dword ptr [ebp - 0x2e0] */
    PUSH32(esp, 0x6Cu); /* 0x10059329: push 0x6c */
    edi = POP32_VAL(esp); /* 0x1005932B: pop edi */
    eax = ebx + 0x2; /* 0x1005932C: lea eax, [ebx + 2] */
    /* cmp MEM16(eax), LO16(edi) */ /* 0x1005932F: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edi = MEM32(ebp + (-0x300)); /* 0x10059332: mov edi, dword ptr [ebp - 0x300] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059341; /* 0x10059338: jne 0x10059341 */
L_1005933A:
    ebx = eax; /* 0x1005933A: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_1005928F; /* 0x1005933C: jmp 0x1005928f */
L_10059341:
    SET_HI8(eax, MEM8(ebp + (-0x2C1))); /* 0x10059341: mov ah, byte ptr [ebp - 0x2c1] */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(edx, HI8(edx) + 1); /* 0x10059347: inc dh */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2CD)) = (uint8_t)(HI8(edx)); /* 0x10059349: mov byte ptr [ebp - 0x2cd], dh */
    goto L_10059357; /* 0x1005934F: jmp 0x10059357 */
L_10059351:
    ebx = MEM32(ebp + (-0x2E0)); /* 0x10059351: mov ebx, dword ptr [ebp - 0x2e0] */
L_10059357:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(eax, HI8(eax) + 1); /* 0x10059357: inc ah */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2C1)) = (uint8_t)(HI8(eax)); /* 0x10059359: mov byte ptr [ebp - 0x2c1], ah */
    RECOMP_BACKEDGE();
    goto L_100333DC; /* 0x1005935F: jmp 0x100333dc */
L_10059364:
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(edx, HI8(edx) - 1); /* 0x10059364: dec dh */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(eax, HI8(eax) - 1); /* 0x10059366: dec ah */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(ebp + (-0x2CD)) = (uint8_t)(HI8(edx)); /* 0x10059368: mov byte ptr [ebp - 0x2cd], dh */
    MEM8(ebp + (-0x2C1)) = (uint8_t)(HI8(eax)); /* 0x1005936E: mov byte ptr [ebp - 0x2c1], ah */
    RECOMP_BACKEDGE();
    goto L_100333D6; /* 0x10059374: jmp 0x100333d6 */
L_10059379:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059379: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005937F: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = esi; /* 0x10059380: mov dword ptr [ebp - 0x2c8], esi */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x10059386: mov dword ptr [ebp - 0x2e8], esi */
    RECOMP_CALL(sub_1001C722); /* 0x1005938C: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003349A; /* 0x10059391: jmp 0x1003349a */
L_10059396:
    /* test edx, edx */ /* 0x10059396: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100334CC; /* 0x10059398: jne 0x100334cc */
L_1005939E:
    goto L_10059FB8; /* 0x1005939E: jmp 0x10059fb8 */
L_100593A3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_10059999; /* 0x100593A3: jle 0x10059999 */
L_100593A9:
    /* cmp ecx, 0x67u */ /* 0x100593A9: cmp ecx, 0x67 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100593E2; /* 0x100593AC: jle 0x100593e2 */
L_100593AE:
    /* cmp ecx, 0x69u */ /* 0x100593AE: cmp ecx, 0x69 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100593D2; /* 0x100593B1: je 0x100593d2 */
L_100593B3:
    PUSH32(esp, 0x6Eu); /* 0x100593B3: push 0x6e */
    eax = POP32_VAL(esp); /* 0x100593B5: pop eax */
    /* cmp ecx, eax */ /* 0x100593B6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059999; /* 0x100593B8: jne 0x10059999 */
L_100593BE:
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x100593BE: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = esi; /* 0x100593C5: mov edi, esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033171; /* 0x100593C7: jne 0x10033171 */
L_100593CD:
    RECOMP_BACKEDGE();
    goto L_1003314E; /* 0x100593CD: jmp 0x1003314e */
L_100593D2:
    PUSH32(esp, 0x64u); /* 0x100593D2: push 0x64 */
    ecx = POP32_VAL(esp); /* 0x100593D4: pop ecx */
    esi = ecx; /* 0x100593D5: mov esi, ecx */
    MEM32(ebp + (-0x2F8)) = esi; /* 0x100593D7: mov dword ptr [ebp - 0x2f8], esi */
    goto L_10059B2E; /* 0x100593DD: jmp 0x10059b2e */
L_100593E2:
    PUSH32(esp, 0x2Du); /* 0x100593E2: push 0x2d */
    ecx = POP32_VAL(esp); /* 0x100593E4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100593E5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100593E7: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100593F8; /* 0x100593EA: jne 0x100593f8 */
L_100593EC:
    eax = MEM32(ebp + (-0x2DC)); /* 0x100593EC: mov eax, dword ptr [ebp - 0x2dc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100593F2: inc esi */
    _flag_k = FK_INC;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x100593F3: mov word ptr [eax], cx */
    goto L_10059400; /* 0x100593F6: jmp 0x10059400 */
L_100593F8:
    PUSH32(esp, 0x2Bu); /* 0x100593F8: push 0x2b */
    ecx = POP32_VAL(esp); /* 0x100593FA: pop ecx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100593FB: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059431; /* 0x100593FE: jne 0x10059431 */
L_10059400:
    edi = MEM32(ebp + (-0x2C8)); /* 0x10059400: mov edi, dword ptr [ebp - 0x2c8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10059406: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059407: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005940D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2D4)) = edx; /* 0x1005940E: mov dword ptr [ebp - 0x2d4], edx */
    MEM32(ebp + (-0x2C8)) = edi; /* 0x10059414: mov dword ptr [ebp - 0x2c8], edi */
    RECOMP_CALL(sub_1001C722); /* 0x1005941A: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x1005941F: movzx ebx, ax */
    eax = MEM32(ebp + (-0x300)); /* 0x10059422: mov eax, dword ptr [ebp - 0x300] */
    ecx = POP32_VAL(esp); /* 0x10059428: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059429: mov dword ptr [ebp - 0x2cc], ebx */
    goto L_10059437; /* 0x1005942F: jmp 0x10059437 */
L_10059431:
    edi = MEM32(ebp + (-0x2C8)); /* 0x10059431: mov edi, dword ptr [ebp - 0x2c8] */
L_10059437:
    /* test eax, eax */ /* 0x10059437: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100594C7; /* 0x10059439: jne 0x100594c7 */
L_1005943F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x2D4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x2D4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x2D4)) = MEM32(ebp + (-0x2D4)) | 0xFFFFFFFFu; /* 0x1005943F: or dword ptr [ebp - 0x2d4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100594C7; /* 0x10059446: jmp 0x100594c7 */
L_10059448:
    eax = (uint32_t)LO8(ebx); /* 0x10059448: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1005944B: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1005944C: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059451: pop ecx */
    /* test eax, eax */ /* 0x10059452: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100594D3; /* 0x10059454: je 0x100594d3 */
L_10059456:
    ecx = MEM32(ebp + (-0x2D4)); /* 0x10059456: mov ecx, dword ptr [ebp - 0x2d4] */
    eax = ecx; /* 0x1005945C: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005945E: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x1005945F: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x10059465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100594D3; /* 0x10059467: je 0x100594d3 */
L_10059469:
    ecx = MEM32(ebp + (-0x2DC)); /* 0x10059469: mov ecx, dword ptr [ebp - 0x2dc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2F4)) = MEM32(ebp + (-0x2F4)) + 1; /* 0x1005946F: inc dword ptr [ebp - 0x2f4] */
    _flag_k = FK_INC;
    SET_LO16(eax, (int32_t)(int8_t)LO8(ebx)); /* 0x10059475: movsx ax, bl */
    MEM16(ecx + esi * 2) = (uint16_t)(LO16(eax)); /* 0x10059479: mov word ptr [ecx + esi*2], ax */
    eax = ebp + (-0x314); /* 0x1005947D: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x10059483: push eax */
    eax = ebp + (-0x2C0); /* 0x10059484: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005948A: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005948B: push eax */
    eax = ebp + (-0x2DC); /* 0x1005948C: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x10059492: push eax */
    eax = ebp + (-0x318); /* 0x10059493: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x10059499: push eax */
    PUSH32(esp, esi); /* 0x1005949A: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x1005949B: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100594A0: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100594A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x100594A5: je 0x100330b4 */
L_100594AB:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x100594AB: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100594B1: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = edi; /* 0x100594B2: mov dword ptr [ebp - 0x2c8], edi */
    RECOMP_CALL(sub_1001C722); /* 0x100594B8: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x100594BD: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x100594C0: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x100594C1: mov dword ptr [ebp - 0x2cc], ebx */
L_100594C7:
    /* test ebx, 0xFF00u */ /* 0x100594C7: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059448; /* 0x100594CD: je 0x10059448 */
L_100594D3:
    eax = MEM32(ebp + (-0x344)); /* 0x100594D3: mov eax, dword ptr [ebp - 0x344] */
    eax = MEM32(eax + 0x84); /* 0x100594D9: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax + 0x30); /* 0x100594DF: mov eax, dword ptr [eax + 0x30] */
    edi = (uint32_t)MEM16(eax); /* 0x100594E2: movzx edi, word ptr [eax] */
    ecx = edi; /* 0x100594E5: mov ecx, edi */
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x100594E7: movsx eax, bl */
    /* cmp ecx, eax */ /* 0x100594EA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x2D4)); /* 0x100594EC: mov ecx, dword ptr [ebp - 0x2d4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100595E6; /* 0x100594F2: jne 0x100595e6 */
L_100594F8:
    eax = ecx; /* 0x100594F8: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100594FA: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x100594FB: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x10059501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100595E6; /* 0x10059503: je 0x100595e6 */
L_10059509:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059509: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C8)) = MEM32(ebp + (-0x2C8)) + 1; /* 0x1005950F: inc dword ptr [ebp - 0x2c8] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001C722); /* 0x10059515: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x1005951A: movzx ebx, ax */
    eax = MEM32(ebp + (-0x2DC)); /* 0x1005951D: mov eax, dword ptr [ebp - 0x2dc] */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059523: mov dword ptr [ebp - 0x2cc], ebx */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(edi)); /* 0x10059529: mov word ptr [eax + esi*2], di */
    eax = ebp + (-0x314); /* 0x1005952D: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x10059533: push eax */
    eax = ebp + (-0x2C0); /* 0x10059534: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005953A: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005953B: push eax */
    eax = ebp + (-0x2DC); /* 0x1005953C: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x10059542: push eax */
    eax = ebp + (-0x318); /* 0x10059543: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x10059549: push eax */
    PUSH32(esp, esi); /* 0x1005954A: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x1005954B: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10059550: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10059553: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x10059555: je 0x100330b4 */
L_1005955B:
    edi = 0xFF00u; /* 0x1005955B: mov edi, 0xff00 */
L_10059560:
    /* test edi, ebx */ /* 0x10059560: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100595E0; /* 0x10059562: jne 0x100595e0 */
L_10059564:
    eax = (uint32_t)LO8(ebx); /* 0x10059564: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059567: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10059568: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005956D: pop ecx */
    ecx = MEM32(ebp + (-0x2D4)); /* 0x1005956E: mov ecx, dword ptr [ebp - 0x2d4] */
    /* test eax, eax */ /* 0x10059574: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100595E6; /* 0x10059576: je 0x100595e6 */
L_10059578:
    eax = ecx; /* 0x10059578: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005957A: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x1005957B: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x10059581: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100595E6; /* 0x10059583: je 0x100595e6 */
L_10059585:
    eax = MEM32(ebp + (-0x2DC)); /* 0x10059585: mov eax, dword ptr [ebp - 0x2dc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2F4)) = MEM32(ebp + (-0x2F4)) + 1; /* 0x1005958B: inc dword ptr [ebp - 0x2f4] */
    _flag_k = FK_INC;
    MEM16(eax + esi * 2) = (uint16_t)(LO16(ebx)); /* 0x10059591: mov word ptr [eax + esi*2], bx */
    eax = ebp + (-0x314); /* 0x10059595: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x1005959B: push eax */
    eax = ebp + (-0x2C0); /* 0x1005959C: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100595A2: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100595A3: push eax */
    eax = ebp + (-0x2DC); /* 0x100595A4: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x100595AA: push eax */
    eax = ebp + (-0x318); /* 0x100595AB: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x100595B1: push eax */
    PUSH32(esp, esi); /* 0x100595B2: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x100595B3: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100595B8: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100595BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x100595BD: je 0x100330b4 */
L_100595C3:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x100595C3: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C8)) = MEM32(ebp + (-0x2C8)) + 1; /* 0x100595C9: inc dword ptr [ebp - 0x2c8] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001C722); /* 0x100595CF: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x100595D4: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x100595D7: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x100595D8: mov dword ptr [ebp - 0x2cc], ebx */
    RECOMP_BACKEDGE();
    goto L_10059560; /* 0x100595DE: jmp 0x10059560 */
L_100595E0:
    ecx = MEM32(ebp + (-0x2D4)); /* 0x100595E0: mov ecx, dword ptr [ebp - 0x2d4] */
L_100595E6:
    /* cmp MEM32(ebp + (-0x2F4)), 0 */ /* 0x100595E6: cmp dword ptr [ebp - 0x2f4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059785; /* 0x100595ED: je 0x10059785 */
L_100595F3:
    PUSH32(esp, 0x65u); /* 0x100595F3: push 0x65 */
    edx = POP32_VAL(esp); /* 0x100595F5: pop edx */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x100595F6: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059607; /* 0x100595F9: je 0x10059607 */
L_100595FB:
    PUSH32(esp, 0x45u); /* 0x100595FB: push 0x45 */
    eax = POP32_VAL(esp); /* 0x100595FD: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100595FE: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059785; /* 0x10059601: jne 0x10059785 */
L_10059607:
    eax = ecx; /* 0x10059607: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10059609: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x1005960A: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x10059610: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059785; /* 0x10059612: je 0x10059785 */
L_10059618:
    eax = MEM32(ebp + (-0x2DC)); /* 0x10059618: mov eax, dword ptr [ebp - 0x2dc] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(edx)); /* 0x1005961E: mov word ptr [eax + esi*2], dx */
    eax = ebp + (-0x314); /* 0x10059622: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x10059628: push eax */
    eax = ebp + (-0x2C0); /* 0x10059629: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005962F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x10059630: push eax */
    eax = ebp + (-0x2DC); /* 0x10059631: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x10059637: push eax */
    eax = ebp + (-0x318); /* 0x10059638: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x1005963E: push eax */
    PUSH32(esp, esi); /* 0x1005963F: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x10059640: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10059645: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10059648: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x1005964A: je 0x100330b4 */
L_10059650:
    edi = MEM32(ebp + (-0x2C8)); /* 0x10059650: mov edi, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059656: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005965C: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001C722); /* 0x1005965D: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059662: pop ecx */
    PUSH32(esp, 0x2Du); /* 0x10059663: push 0x2d */
    ebx = (uint32_t)LO16(eax); /* 0x10059665: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x10059668: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059669: mov dword ptr [ebp - 0x2cc], ebx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x1005966F: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100596DF; /* 0x10059672: jne 0x100596df */
L_10059674:
    eax = MEM32(ebp + (-0x2DC)); /* 0x10059674: mov eax, dword ptr [ebp - 0x2dc] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(ecx)); /* 0x1005967A: mov word ptr [eax + esi*2], cx */
    eax = ebp + (-0x314); /* 0x1005967E: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x10059684: push eax */
    eax = ebp + (-0x2C0); /* 0x10059685: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005968B: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005968C: push eax */
    eax = ebp + (-0x2DC); /* 0x1005968D: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x10059693: push eax */
    eax = ebp + (-0x318); /* 0x10059694: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x1005969A: push eax */
    PUSH32(esp, esi); /* 0x1005969B: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x1005969C: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100596A1: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100596A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x100596A6: je 0x100330b4 */
L_100596AC:
    goto L_100596EB; /* 0x100596AC: jmp 0x100596eb */
L_100596AE:
    PUSH32(esp, MEM32(ebp + (-0x31C))); /* 0x100596AE: push dword ptr [ebp - 0x31c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100596B4: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100596B9: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100331C1; /* 0x100596BA: jmp 0x100331c1 */
L_100596BF:
    PUSH32(esp, ebx); /* 0x100596BF: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x100596C0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100596C5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100331CE; /* 0x100596C6: jmp 0x100331ce */
L_100596CB:
    /* cmp MEM8(ebp + (-0x2C3)), LO8(eax) */ /* 0x100596CB: cmp byte ptr [ebp - 0x2c3], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C3))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100331EA; /* 0x100596D1: jne 0x100331ea */
L_100596D7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100596D7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100331EA; /* 0x100596DA: jmp 0x100331ea */
L_100596DF:
    PUSH32(esp, 0x2Bu); /* 0x100596DF: push 0x2b */
    eax = POP32_VAL(esp); /* 0x100596E1: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100596E2: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005977B; /* 0x100596E5: jne 0x1005977b */
L_100596EB:
    ecx = MEM32(ebp + (-0x2D4)); /* 0x100596EB: mov ecx, dword ptr [ebp - 0x2d4] */
    eax = ecx; /* 0x100596F1: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100596F3: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x100596F4: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x100596FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059765; /* 0x100596FC: jne 0x10059765 */
L_100596FE:
    MEM32(ebp + (-0x2D4)) = eax; /* 0x100596FE: mov dword ptr [ebp - 0x2d4], eax */
    goto L_1005977B; /* 0x10059704: jmp 0x1005977b */
L_10059706:
    eax = (uint32_t)LO8(ebx); /* 0x10059706: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059709: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1005970A: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005970F: pop ecx */
    /* test eax, eax */ /* 0x10059710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005978B; /* 0x10059712: je 0x1005978b */
L_10059714:
    ecx = MEM32(ebp + (-0x2D4)); /* 0x10059714: mov ecx, dword ptr [ebp - 0x2d4] */
    eax = ecx; /* 0x1005971A: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005971C: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x1005971D: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x10059723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005978B; /* 0x10059725: je 0x1005978b */
L_10059727:
    eax = MEM32(ebp + (-0x2DC)); /* 0x10059727: mov eax, dword ptr [ebp - 0x2dc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2F4)) = MEM32(ebp + (-0x2F4)) + 1; /* 0x1005972D: inc dword ptr [ebp - 0x2f4] */
    _flag_k = FK_INC;
    MEM16(eax + esi * 2) = (uint16_t)(LO16(ebx)); /* 0x10059733: mov word ptr [eax + esi*2], bx */
    eax = ebp + (-0x314); /* 0x10059737: lea eax, [ebp - 0x314] */
    PUSH32(esp, eax); /* 0x1005973D: push eax */
    eax = ebp + (-0x2C0); /* 0x1005973E: lea eax, [ebp - 0x2c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10059744: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x10059745: push eax */
    eax = ebp + (-0x2DC); /* 0x10059746: lea eax, [ebp - 0x2dc] */
    PUSH32(esp, eax); /* 0x1005974C: push eax */
    eax = ebp + (-0x318); /* 0x1005974D: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x10059753: push eax */
    PUSH32(esp, esi); /* 0x10059754: push esi */
    RECOMP_CALL(sub_1002B6B8); /* 0x10059755: call 0x1002b6b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1005975A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005975D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x1005975F: je 0x100330b4 */
L_10059765:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059765: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005976B: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001C722); /* 0x1005976C: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x10059771: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x10059774: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059775: mov dword ptr [ebp - 0x2cc], ebx */
L_1005977B:
    /* test ebx, 0xFF00u */ /* 0x1005977B: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005978B; /* 0x10059781: jne 0x1005978b */
L_10059783:
    RECOMP_BACKEDGE();
    goto L_10059706; /* 0x10059783: jmp 0x10059706 */
L_10059785:
    edi = MEM32(ebp + (-0x2C8)); /* 0x10059785: mov edi, dword ptr [ebp - 0x2c8] */
L_1005978B:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x1005978B: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10059791: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x10059792: push ebx */
    MEM32(ebp + (-0x2C8)) = edi; /* 0x10059793: mov dword ptr [ebp - 0x2c8], edi */
    MEM32(ebp + (-0x2E8)) = edi; /* 0x10059799: mov dword ptr [ebp - 0x2e8], edi */
    RECOMP_CALL(sub_1001EB78); /* 0x1005979F: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2F4)), 0 */ /* 0x100597A4: cmp dword ptr [ebp - 0x2f4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100597AB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100597AC: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330B4; /* 0x100597AD: je 0x100330b4 */
L_100597B3:
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x100597B3: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033171; /* 0x100597BA: jne 0x10033171 */
L_100597C0:
    ebx = MEM32(ebp + (-0x2DC)); /* 0x100597C0: mov ebx, dword ptr [ebp - 0x2dc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100597C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x310))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x310)) = MEM32(ebp + (-0x310)) + 1; /* 0x100597C8: inc dword ptr [ebp - 0x310] */
    _flag_k = FK_INC;
    MEM16(ebx + esi * 2) = (uint16_t)(LO16(eax)); /* 0x100597CE: mov word ptr [ebx + esi*2], ax */
    eax = MEM32(ebp + (-0x318)); /* 0x100597D2: mov eax, dword ptr [ebp - 0x318] */
    edi = eax * 2 + 0x2; /* 0x100597D8: lea edi, [eax*2 + 2] */
    PUSH32(esp, edi); /* 0x100597DF: push edi */
    RECOMP_CALL(sub_10012226); /* 0x100597E0: call 0x10012226 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100597E5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100597E7: pop ecx */
    /* test esi, esi */ /* 0x100597E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059FDE; /* 0x100597EA: je 0x10059fde */
L_100597F0:
    ecx = edi + (-0x1); /* 0x100597F0: lea ecx, [edi - 1] */
    PUSH32(esp, ecx); /* 0x100597F3: push ecx */
    PUSH32(esp, ebx); /* 0x100597F4: push ebx */
    PUSH32(esp, edi); /* 0x100597F5: push edi */
    PUSH32(esp, esi); /* 0x100597F6: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100597F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100597F9: push ebx */
    RECOMP_CALL(sub_1003362A); /* 0x100597FA: call 0x1003362a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100597FF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10059802: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059818; /* 0x10059804: je 0x10059818 */
L_10059806:
    /* cmp eax, 0x16u */ /* 0x10059806: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059FF4; /* 0x10059809: je 0x10059ff4 */
L_1005980F:
    /* cmp eax, 0x22u */ /* 0x1005980F: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059FF4; /* 0x10059812: je 0x10059ff4 */
L_10059818:
    eax = ebp + (-0x344); /* 0x10059818: lea eax, [ebp - 0x344] */
    PUSH32(esp, eax); /* 0x1005981E: push eax */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2CD)); /* 0x1005981F: movsx eax, byte ptr [ebp - 0x2cd] */
    PUSH32(esp, esi); /* 0x10059826: push esi */
    PUSH32(esp, MEM32(ebp + (-0x2FC))); /* 0x10059827: push dword ptr [ebp - 0x2fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005982D: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1005982E: push eax */
    RECOMP_CALL(sub_1001A897); /* 0x1005982F: call 0x1001a897 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10059834: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10059835: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1005983A: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10033171; /* 0x1005983D: jmp 0x10033171 */
L_10059842:
    /* test eax, eax */ /* 0x10059842: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059857; /* 0x10059844: jne 0x10059857 */
L_10059846:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10059846: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x300)) = 1; /* 0x10059847: mov dword ptr [ebp - 0x300], 1 */
    MEM32(ebp + (-0x2D4)) = edx; /* 0x10059851: mov dword ptr [ebp - 0x2d4], edx */
L_10059857:
    /* cmp MEM8(ebp + (-0x2C1)), 0 */ /* 0x10059857: cmp byte ptr [ebp - 0x2c1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_10059867; /* 0x1005985E: jle 0x10059867 */
L_10059860:
    MEM8(ebp + (-0x2E1)) = (uint8_t)(1); /* 0x10059860: mov byte ptr [ebp - 0x2e1], 1 */
L_10059867:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059867: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x1005986D: push dword ptr [ebp - 0x2d8] */
    edi = MEM32(ebp + (-0x2CC)); /* 0x10059873: mov edi, dword ptr [ebp - 0x2cc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10059879: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x2FC)); /* 0x1005987A: mov esi, dword ptr [ebp - 0x2fc] */
    PUSH32(esp, edi); /* 0x10059880: push edi */
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059881: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059887: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001EB78); /* 0x1005988D: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x2F8)); /* 0x10059892: mov ebx, dword ptr [ebp - 0x2f8] */
    ecx = POP32_VAL(esp); /* 0x10059898: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059899: pop ecx */
L_1005989A:
    /* cmp MEM32(ebp + (-0x300)), 0 */ /* 0x1005989A: cmp dword ptr [ebp - 0x300], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x300))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100598BA; /* 0x100598A1: je 0x100598ba */
L_100598A3:
    ecx = MEM32(ebp + (-0x2D4)); /* 0x100598A3: mov ecx, dword ptr [ebp - 0x2d4] */
    eax = ecx; /* 0x100598A9: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100598AB: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = ecx; /* 0x100598AC: mov dword ptr [ebp - 0x2d4], ecx */
    /* test eax, eax */ /* 0x100598B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059D80; /* 0x100598B4: je 0x10059d80 */
L_100598BA:
    eax = MEM32(ebp + (-0x2C8)); /* 0x100598BA: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x100598C0: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100598C6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = eax; /* 0x100598C7: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x100598CD: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001C722); /* 0x100598D3: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100598D8: movzx edi, ax */
    eax = 0xFFFFu; /* 0x100598DB: mov eax, 0xffff */
    MEM32(ebp + (-0x2CC)) = edi; /* 0x100598E0: mov dword ptr [ebp - 0x2cc], edi */
    ecx = POP32_VAL(esp); /* 0x100598E6: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100598E7: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059D5F; /* 0x100598EA: je 0x10059d5f */
L_100598F0:
    /* cmp ebx, 0x63u */ /* 0x100598F0: cmp ebx, 0x63 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059944; /* 0x100598F3: je 0x10059944 */
L_100598F5:
    /* cmp ebx, 0x73u */ /* 0x100598F5: cmp ebx, 0x73 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059910; /* 0x100598F8: jne 0x10059910 */
L_100598FA:
    /* cmp edi, 9 */ /* 0x100598FA: cmp edi, 9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10059908; /* 0x100598FD: jb 0x10059908 */
L_100598FF:
    /* cmp edi, 0xDu */ /* 0x100598FF: cmp edi, 0xd */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10059D5F; /* 0x10059902: jbe 0x10059d5f */
L_10059908:
    PUSH32(esp, 0x20u); /* 0x10059908: push 0x20 */
    eax = POP32_VAL(esp); /* 0x1005990A: pop eax */
    /* cmp LO16(edi), LO16(eax) */ /* 0x1005990B: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059944; /* 0x1005990E: jne 0x10059944 */
L_10059910:
    /* cmp ebx, 0x7Bu */ /* 0x10059910: cmp ebx, 0x7b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059D5F; /* 0x10059913: jne 0x10059d5f */
L_10059919:
    eax = (uint32_t)LO16(edi); /* 0x10059919: movzx eax, di */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005991C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1005991E: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10059920: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10059921: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x10059924: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x10059924: shr eax, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10059927: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x10059927: shl edx, cl */
    ecx = MEM32(ebp + (-0x31C)); /* 0x10059929: mov ecx, dword ptr [ebp - 0x31c] */
    ecx = (int32_t)(int8_t)MEM8(eax + ecx); /* 0x1005992F: movsx ecx, byte ptr [eax + ecx] */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x305)); /* 0x10059933: movsx eax, byte ptr [ebp - 0x305] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1005993A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, edx */ /* 0x1005993C: test ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059D5F; /* 0x1005993E: je 0x10059d5f */
L_10059944:
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x10059944: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059D57; /* 0x1005994B: jne 0x10059d57 */
L_10059951:
    /* cmp MEM8(ebp + (-0x2E1)), 0 */ /* 0x10059951: cmp byte ptr [ebp - 0x2e1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2E1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059D02; /* 0x10059958: je 0x10059d02 */
L_1005995E:
    eax = MEM32(ebp + (-0x2FC)); /* 0x1005995E: mov eax, dword ptr [ebp - 0x2fc] */
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x10059964: mov word ptr [eax], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10059967: add eax, 2 */
    _flag_k = FK_ADD;
    goto L_10059D4C; /* 0x1005996A: jmp 0x10059d4c */
L_1005996F:
    eax = ecx; /* 0x1005996F: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x10059971: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10059DC3; /* 0x10059974: je 0x10059dc3 */
L_1005997A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1005997A: sub eax, 3 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10059857; /* 0x1005997D: je 0x10059857 */
L_10059983:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10059983: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10059984: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10059DCA; /* 0x10059985: je 0x10059dca */
L_1005998B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1005998B: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10059B22; /* 0x1005998E: je 0x10059b22 */
L_10059994:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10059994: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100599D4; /* 0x10059997: je 0x100599d4 */
L_10059999:
    eax = MEM32(ebp + (-0x2E0)); /* 0x10059999: mov eax, dword ptr [ebp - 0x2e0] */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1005999F: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059FB8; /* 0x100599A2: jne 0x10059fb8 */
L_100599A8:
    SET_LO8(eax, MEM8(ebp + (-0x2C3))); /* 0x100599A8: mov al, byte ptr [ebp - 0x2c3] */
    edi = MEM32(ebp + (-0x2CC)); /* 0x100599AE: mov edi, dword ptr [ebp - 0x2cc] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x100599B4: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x100599B6: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003317D; /* 0x100599BD: jne 0x1003317d */
L_100599C3:
    ecx = MEM32(ebp + (-0x32C)); /* 0x100599C3: mov ecx, dword ptr [ebp - 0x32c] */
    MEM32(ebp + (-0x320)) = ecx; /* 0x100599C9: mov dword ptr [ebp - 0x320], ecx */
    RECOMP_BACKEDGE();
    goto L_1003317D; /* 0x100599CF: jmp 0x1003317d */
L_100599D4:
    /* cmp MEM8(ebp + (-0x2C1)), 0 */ /* 0x100599D4: cmp byte ptr [ebp - 0x2c1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100599E4; /* 0x100599DB: jle 0x100599e4 */
L_100599DD:
    MEM8(ebp + (-0x2E1)) = (uint8_t)(1); /* 0x100599DD: mov byte ptr [ebp - 0x2e1], 1 */
L_100599E4:
    edi = MEM32(ebp + (-0x2E0)); /* 0x100599E4: mov edi, dword ptr [ebp - 0x2e0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x100599EA: add edi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x5Eu); /* 0x100599ED: push 0x5e */
    eax = POP32_VAL(esp); /* 0x100599EF: pop eax */
    /* cmp LO16(eax), MEM16(edi) */ /* 0x100599F0: cmp ax, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100599FF; /* 0x100599F3: jne 0x100599ff */
L_100599F5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x100599F5: add edi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x305)) = (uint8_t)(0xFFu); /* 0x100599F8: mov byte ptr [ebp - 0x305], 0xff */
L_100599FF:
    esi = MEM32(ebp + (-0x31C)); /* 0x100599FF: mov esi, dword ptr [ebp - 0x31c] */
    /* test esi, esi */ /* 0x10059A05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059A2E; /* 0x10059A07: jne 0x10059a2e */
L_10059A09:
    PUSH32(esp, 0x2000u); /* 0x10059A09: push 0x2000 */
    RECOMP_CALL(sub_10012226); /* 0x10059A0E: call 0x10012226 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10059A13: mov esi, eax */
    MEM32(ebp + (-0x31C)) = esi; /* 0x10059A15: mov dword ptr [ebp - 0x31c], esi */
    ecx = POP32_VAL(esp); /* 0x10059A1B: pop ecx */
    /* test esi, esi */ /* 0x10059A1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330B4; /* 0x10059A1E: je 0x100330b4 */
L_10059A24:
    MEM32(ebp + (-0x324)) = 1; /* 0x10059A24: mov dword ptr [ebp - 0x324], 1 */
L_10059A2E:
    PUSH32(esp, 0x2000u); /* 0x10059A2E: push 0x2000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059A33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10059A35: push eax */
    PUSH32(esp, esi); /* 0x10059A36: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10059A37: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10059A3C: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x5Du); /* 0x10059A3F: push 0x5d */
    edx = POP32_VAL(esp); /* 0x10059A41: pop edx */
    /* cmp LO16(edx), MEM16(edi) */ /* 0x10059A42: cmp dx, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059A57; /* 0x10059A45: jne 0x10059a57 */
L_10059A47:
    PUSH32(esp, 0x20u); /* 0x10059A47: push 0x20 */
    eax = POP32_VAL(esp); /* 0x10059A49: pop eax */
    ebx = edx; /* 0x10059A4A: mov ebx, edx */
    MEM8(esi + 0xB) = (uint8_t)(LO8(eax)); /* 0x10059A4C: mov byte ptr [esi + 0xb], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10059A4F: add edi, 2 */
    _flag_k = FK_ADD;
    goto L_10059B00; /* 0x10059A52: jmp 0x10059b00 */
L_10059A57:
    ebx = MEM32(ebp + (-0x328)); /* 0x10059A57: mov ebx, dword ptr [ebp - 0x328] */
    goto L_10059B00; /* 0x10059A5D: jmp 0x10059b00 */
L_10059A62:
    ecx = (uint32_t)LO16(eax); /* 0x10059A62: movzx ecx, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10059A65: add edi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2Du); /* 0x10059A68: push 0x2d */
    eax = POP32_VAL(esp); /* 0x10059A6A: pop eax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10059A6B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059AEC; /* 0x10059A6E: jne 0x10059aec */
L_10059A70:
    /* test LO16(ebx), LO16(ebx) */ /* 0x10059A70: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059AEC; /* 0x10059A73: je 0x10059aec */
L_10059A75:
    eax = (uint32_t)MEM16(edi); /* 0x10059A75: movzx eax, word ptr [edi] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x10059A78: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059AEC; /* 0x10059A7B: je 0x10059aec */
L_10059A7D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10059A7D: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2E0)) = edi; /* 0x10059A80: mov dword ptr [ebp - 0x2e0], edi */
    /* cmp LO16(ebx), LO16(eax) */ /* 0x10059A86: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10059A8F; /* 0x10059A89: jae 0x10059a8f */
L_10059A8B:
    esi = eax; /* 0x10059A8B: mov esi, eax */
    goto L_10059A94; /* 0x10059A8D: jmp 0x10059a94 */
L_10059A8F:
    esi = (uint32_t)LO16(ebx); /* 0x10059A8F: movzx esi, bx */
    ebx = eax; /* 0x10059A92: mov ebx, eax */
L_10059A94:
    MEM32(ebp + (-0x2EC)) = esi; /* 0x10059A94: mov dword ptr [ebp - 0x2ec], esi */
    /* cmp LO16(ebx), LO16(esi) */ /* 0x10059A9A: cmp bx, si */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10059ACE; /* 0x10059A9D: jae 0x10059ace */
L_10059A9F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x10059A9F: sub esi, ebx */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO16(ebx); /* 0x10059AA1: movzx edi, bx */
    ebx = (uint32_t)LO16(esi); /* 0x10059AA4: movzx ebx, si */
    esi = MEM32(ebp + (-0x31C)); /* 0x10059AA7: mov esi, dword ptr [ebp - 0x31c] */
L_10059AAD:
    edx = edi; /* 0x10059AAD: mov edx, edi */
    ecx = edi; /* 0x10059AAF: mov ecx, edi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10059AB1: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10059AB1: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10059AB4: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x10059AB7: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10059AB9: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10059AB9: shl al, cl */
    _flag_a = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24;
    MEM8(edx + esi) = (uint8_t)(MEM8(edx + esi) | LO8(eax)); /* 0x10059ABB: or byte ptr [edx + esi], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10059ABE: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10059ABF: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10059AAD; /* 0x10059AC0: jne 0x10059aad */
L_10059AC2:
    esi = MEM32(ebp + (-0x2EC)); /* 0x10059AC2: mov esi, dword ptr [ebp - 0x2ec] */
    edi = MEM32(ebp + (-0x2E0)); /* 0x10059AC8: mov edi, dword ptr [ebp - 0x2e0] */
L_10059ACE:
    ecx = (uint32_t)LO16(esi); /* 0x10059ACE: movzx ecx, si */
    SET_LO8(eax, 1); /* 0x10059AD1: mov al, 1 */
    esi = MEM32(ebp + (-0x31C)); /* 0x10059AD3: mov esi, dword ptr [ebp - 0x31c] */
    edx = ecx; /* 0x10059AD9: mov edx, ecx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10059ADB: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10059ADB: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10059ADE: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10059AE1: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10059AE1: shl al, cl */
    _flag_a = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24;
    MEM8(edx + esi) = (uint8_t)(MEM8(edx + esi) | LO8(eax)); /* 0x10059AE3: or byte ptr [edx + esi], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059AE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x10059AE8: mov ebx, eax */
    goto L_10059AFD; /* 0x10059AEA: jmp 0x10059afd */
L_10059AEC:
    edx = ecx; /* 0x10059AEC: mov edx, ecx */
    ebx = ecx; /* 0x10059AEE: mov ebx, ecx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10059AF0: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10059AF0: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10059AF3: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x10059AF6: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10059AF8: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10059AF8: shl al, cl */
    _flag_a = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + esi) | LO8(eax))) << 24;
    MEM8(edx + esi) = (uint8_t)(MEM8(edx + esi) | LO8(eax)); /* 0x10059AFA: or byte ptr [edx + esi], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10059AFD:
    PUSH32(esp, 0x5Du); /* 0x10059AFD: push 0x5d */
    edx = POP32_VAL(esp); /* 0x10059AFF: pop edx */
L_10059B00:
    eax = (uint32_t)MEM16(edi); /* 0x10059B00: movzx eax, word ptr [edi] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x10059B03: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059A62; /* 0x10059B06: jne 0x10059a62 */
L_10059B0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059B0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(eax) */ /* 0x10059B0E: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100330B4; /* 0x10059B11: je 0x100330b4 */
L_10059B17:
    MEM32(ebp + (-0x2E0)) = edi; /* 0x10059B17: mov dword ptr [ebp - 0x2e0], edi */
    RECOMP_BACKEDGE();
    goto L_10059867; /* 0x10059B1D: jmp 0x10059867 */
L_10059B22:
    esi = MEM32(ebp + (-0x2F8)); /* 0x10059B22: mov esi, dword ptr [ebp - 0x2f8] */
    eax = MEM32(ebp + (-0x300)); /* 0x10059B28: mov eax, dword ptr [ebp - 0x300] */
L_10059B2E:
    PUSH32(esp, 0x2Du); /* 0x10059B2E: push 0x2d */
    ecx = POP32_VAL(esp); /* 0x10059B30: pop ecx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x10059B31: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059B3F; /* 0x10059B34: jne 0x10059b3f */
L_10059B36:
    MEM8(ebp + (-0x2ED)) = (uint8_t)(1); /* 0x10059B36: mov byte ptr [ebp - 0x2ed], 1 */
    goto L_10059B47; /* 0x10059B3D: jmp 0x10059b47 */
L_10059B3F:
    PUSH32(esp, 0x2Bu); /* 0x10059B3F: push 0x2b */
    ecx = POP32_VAL(esp); /* 0x10059B41: pop ecx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x10059B42: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059B85; /* 0x10059B45: jne 0x10059b85 */
L_10059B47:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10059B47: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = edx; /* 0x10059B48: mov dword ptr [ebp - 0x2d4], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10059B5D; /* 0x10059B4E: jne 0x10059b5d */
L_10059B50:
    /* test eax, eax */ /* 0x10059B50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059B5D; /* 0x10059B52: je 0x10059b5d */
L_10059B54:
    MEM8(ebp + (-0x2C2)) = (uint8_t)(1); /* 0x10059B54: mov byte ptr [ebp - 0x2c2], 1 */
    goto L_10059B85; /* 0x10059B5B: jmp 0x10059b85 */
L_10059B5D:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059B5D: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059B63: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10059B69: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059B6A: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059B70: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001C722); /* 0x10059B76: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x10059B7B: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x10059B7E: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059B7F: mov dword ptr [ebp - 0x2cc], ebx */
L_10059B85:
    PUSH32(esp, 0x30u); /* 0x10059B85: push 0x30 */
    eax = POP32_VAL(esp); /* 0x10059B87: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10059B88: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059C32; /* 0x10059B8B: jne 0x10059c32 */
L_10059B91:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059B91: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059B97: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10059B9D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059B9E: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059BA4: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001C722); /* 0x10059BAA: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059BAF: pop ecx */
    PUSH32(esp, 0x78u); /* 0x10059BB0: push 0x78 */
    ebx = (uint32_t)LO16(eax); /* 0x10059BB2: movzx ebx, ax */
    edx = POP32_VAL(esp); /* 0x10059BB5: pop edx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059BB6: mov dword ptr [ebp - 0x2cc], ebx */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x10059BBC: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059CAD; /* 0x10059BBF: je 0x10059cad */
L_10059BC5:
    PUSH32(esp, 0x58u); /* 0x10059BC5: push 0x58 */
    eax = POP32_VAL(esp); /* 0x10059BC7: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10059BC8: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059CAD; /* 0x10059BCB: je 0x10059cad */
L_10059BD1:
    MEM32(ebp + (-0x2F4)) = 1; /* 0x10059BD1: mov dword ptr [ebp - 0x2f4], 1 */
    /* cmp esi, edx */ /* 0x10059BDB: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059C06; /* 0x10059BDD: je 0x10059c06 */
L_10059BDF:
    /* cmp MEM32(ebp + (-0x300)), 0 */ /* 0x10059BDF: cmp dword ptr [ebp - 0x300], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x300))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059BF6; /* 0x10059BE6: je 0x10059bf6 */
L_10059BE8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2D4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2D4)) = MEM32(ebp + (-0x2D4)) - 1; /* 0x10059BE8: dec dword ptr [ebp - 0x2d4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10059BF6; /* 0x10059BEE: jne 0x10059bf6 */
L_10059BF0:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C2))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x2C2)) = (uint8_t)(MEM8(ebp + (-0x2C2)) + 1); /* 0x10059BF0: inc byte ptr [ebp - 0x2c2] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10059BF6:
    PUSH32(esp, 0x6Fu); /* 0x10059BF6: push 0x6f */
    eax = POP32_VAL(esp); /* 0x10059BF8: pop eax */
    ecx = eax; /* 0x10059BF9: mov ecx, eax */
L_10059BFB:
    MEM32(ebp + (-0x2F8)) = ecx; /* 0x10059BFB: mov dword ptr [ebp - 0x2f8], ecx */
    RECOMP_BACKEDGE();
    goto L_10033506; /* 0x10059C01: jmp 0x10033506 */
L_10059C06:
    esi = MEM32(ebp + (-0x2C8)); /* 0x10059C06: mov esi, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059C0C: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10059C12: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x10059C13: push ebx */
    MEM32(ebp + (-0x2C8)) = esi; /* 0x10059C14: mov dword ptr [ebp - 0x2c8], esi */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x10059C1A: mov dword ptr [ebp - 0x2e8], esi */
    RECOMP_CALL(sub_1001EB78); /* 0x10059C20: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059C25: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059C26: pop ecx */
    PUSH32(esp, 0x30u); /* 0x10059C27: push 0x30 */
    eax = POP32_VAL(esp); /* 0x10059C29: pop eax */
    ebx = eax; /* 0x10059C2A: mov ebx, eax */
L_10059C2C:
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059C2C: mov dword ptr [ebp - 0x2cc], ebx */
L_10059C32:
    ecx = MEM32(ebp + (-0x2F8)); /* 0x10059C32: mov ecx, dword ptr [ebp - 0x2f8] */
    RECOMP_BACKEDGE();
    goto L_10033503; /* 0x10059C38: jmp 0x10033503 */
L_10059C3D:
    esi = MEM32(ebp + (-0x30C)); /* 0x10059C3D: mov esi, dword ptr [ebp - 0x30c] */
    /* test LO8(eax), LO8(eax) */ /* 0x10059C43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059F06; /* 0x10059C45: jne 0x10059f06 */
L_10059C4B:
    /* cmp ecx, edx */ /* 0x10059C4B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059E32; /* 0x10059C4D: je 0x10059e32 */
L_10059C53:
    /* cmp ecx, 0x70u */ /* 0x10059C53: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059E32; /* 0x10059C56: je 0x10059e32 */
L_10059C5C:
    /* test ebx, 0xFF00u */ /* 0x10059C5C: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059EDF; /* 0x10059C62: jne 0x10059edf */
L_10059C68:
    eax = (uint32_t)LO8(ebx); /* 0x10059C68: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059C6B: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10059C6C: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059C71: pop ecx */
    /* test eax, eax */ /* 0x10059C72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059EDF; /* 0x10059C74: je 0x10059edf */
L_10059C7A:
    PUSH32(esp, 0x6Fu); /* 0x10059C7A: push 0x6f */
    eax = POP32_VAL(esp); /* 0x10059C7C: pop eax */
    /* cmp MEM32(ebp + (-0x2F8)), eax */ /* 0x10059C7D: cmp dword ptr [ebp - 0x2f8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059E14; /* 0x10059C83: jne 0x10059e14 */
L_10059C89:
    PUSH32(esp, 0x38u); /* 0x10059C89: push 0x38 */
    eax = POP32_VAL(esp); /* 0x10059C8B: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10059C8C: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_10059EDF; /* 0x10059C8F: jbe 0x10059edf */
L_10059C95:
    esi = MEM32(ebp + (-0x30C)); /* 0x10059C95: mov esi, dword ptr [ebp - 0x30c] */
    ecx = MEM32(ebp + (-0x304)); /* 0x10059C9B: mov ecx, dword ptr [ebp - 0x304] */
    if (1) _cf = (((ecx) >> 29) & 1u); /* 0x10059CA1: shld ecx, esi, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) << (3u)) | ((uint32_t)(esi) >> (32 - (3u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) << (3u)) | ((uint32_t)(esi) >> (32 - (3u)))) : (ecx));
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x10059CA5: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x10059CA5: shl esi, 3 */
    goto L_10059E79; /* 0x10059CA8: jmp 0x10059e79 */
L_10059CAD:
    esi = MEM32(ebp + (-0x2C8)); /* 0x10059CAD: mov esi, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059CB3: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10059CB9: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = esi; /* 0x10059CBA: mov dword ptr [ebp - 0x2c8], esi */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x10059CC0: mov dword ptr [ebp - 0x2e8], esi */
    RECOMP_CALL(sub_1001C722); /* 0x10059CC6: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x300)), 0 */ /* 0x10059CCB: cmp dword ptr [ebp - 0x300], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x300))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO16(eax); /* 0x10059CD2: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x10059CD5: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059CD6: mov dword ptr [ebp - 0x2cc], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059CF8; /* 0x10059CDC: je 0x10059cf8 */
L_10059CDE:
    eax = MEM32(ebp + (-0x2D4)); /* 0x10059CDE: mov eax, dword ptr [ebp - 0x2d4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x10059CE4: sub eax, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2D4)) = eax; /* 0x10059CE7: mov dword ptr [ebp - 0x2d4], eax */
    /* cmp eax, 1 */ /* 0x10059CED: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10059CF8; /* 0x10059CF0: jge 0x10059cf8 */
L_10059CF2:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C2))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x2C2)) = (uint8_t)(MEM8(ebp + (-0x2C2)) + 1); /* 0x10059CF2: inc byte ptr [ebp - 0x2c2] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10059CF8:
    PUSH32(esp, 0x78u); /* 0x10059CF8: push 0x78 */
    edx = POP32_VAL(esp); /* 0x10059CFA: pop edx */
    ecx = edx; /* 0x10059CFB: mov ecx, edx */
    RECOMP_BACKEDGE();
    goto L_10059BFB; /* 0x10059CFD: jmp 0x10059bfb */
L_10059D02:
    PUSH32(esp, edi); /* 0x10059D02: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059D03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 5); /* 0x10059D05: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x2FC))); /* 0x10059D07: push dword ptr [ebp - 0x2fc] */
    MEM32(ebp + (-0x2EC)) = eax; /* 0x10059D0D: mov dword ptr [ebp - 0x2ec], eax */
    eax = ebp + (-0x2EC); /* 0x10059D13: lea eax, [ebp - 0x2ec] */
    PUSH32(esp, eax); /* 0x10059D19: push eax */
    RECOMP_CALL(sub_10020636); /* 0x10059D1A: call 0x10020636 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10059D1F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10059D22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059D40; /* 0x10059D24: je 0x10059d40 */
L_10059D26:
    /* cmp eax, 0x16u */ /* 0x10059D26: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059D34; /* 0x10059D29: je 0x10059d34 */
L_10059D2B:
    /* cmp eax, 0x22u */ /* 0x10059D2B: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005989A; /* 0x10059D2E: jne 0x1005989a */
L_10059D34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059D34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10059D36: push eax */
    PUSH32(esp, eax); /* 0x10059D37: push eax */
    PUSH32(esp, eax); /* 0x10059D38: push eax */
    PUSH32(esp, eax); /* 0x10059D39: push eax */
    PUSH32(esp, eax); /* 0x10059D3A: push eax */
    goto L_10059FF9; /* 0x10059D3B: jmp 0x10059ff9 */
L_10059D40:
    eax = MEM32(ebp + (-0x2FC)); /* 0x10059D40: mov eax, dword ptr [ebp - 0x2fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2EC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2EC)); /* 0x10059D46: add eax, dword ptr [ebp - 0x2ec] */
    _flag_k = FK_ADD;
L_10059D4C:
    MEM32(ebp + (-0x2FC)) = eax; /* 0x10059D4C: mov dword ptr [ebp - 0x2fc], eax */
    RECOMP_BACKEDGE();
    goto L_1005989A; /* 0x10059D52: jmp 0x1005989a */
L_10059D57:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10059D57: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1005989A; /* 0x10059D5A: jmp 0x1005989a */
L_10059D5F:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059D5F: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059D65: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10059D6B: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x10059D6C: push edi */
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059D6D: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059D73: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001EB78); /* 0x10059D79: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059D7E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059D7F: pop ecx */
L_10059D80:
    eax = MEM32(ebp + (-0x2FC)); /* 0x10059D80: mov eax, dword ptr [ebp - 0x2fc] */
    /* cmp esi, eax */ /* 0x10059D86: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100331AE; /* 0x10059D88: je 0x100331ae */
L_10059D8E:
    /* cmp MEM8(ebp + (-0x2C4)), 0 */ /* 0x10059D8E: cmp byte ptr [ebp - 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033177; /* 0x10059D95: jne 0x10033177 */
L_10059D9B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x310))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x310)) = MEM32(ebp + (-0x310)) + 1; /* 0x10059D9B: inc dword ptr [ebp - 0x310] */
    _flag_k = FK_INC;
    /* cmp ebx, 0x63u */ /* 0x10059DA1: cmp ebx, 0x63 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033177; /* 0x10059DA4: je 0x10033177 */
L_10059DAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10059DAA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x2E1)), LO8(ecx) */ /* 0x10059DAC: cmp byte ptr [ebp - 0x2e1], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2E1))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059DBC; /* 0x10059DB2: je 0x10059dbc */
L_10059DB4:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10059DB4: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_10033177; /* 0x10059DB7: jmp 0x10033177 */
L_10059DBC:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x10059DBC: mov byte ptr [eax], cl */
    RECOMP_BACKEDGE();
    goto L_10033177; /* 0x10059DBE: jmp 0x10033177 */
L_10059DC3:
    MEM8(ebp + (-0x2CD)) = (uint8_t)(1); /* 0x10059DC3: mov byte ptr [ebp - 0x2cd], 1 */
L_10059DCA:
    eax = MEM32(ebp + (-0x300)); /* 0x10059DCA: mov eax, dword ptr [ebp - 0x300] */
    RECOMP_BACKEDGE();
    goto L_100334E9; /* 0x10059DD0: jmp 0x100334e9 */
L_10059DD5:
    MEM8(ebp + (-0x2ED)) = (uint8_t)(1); /* 0x10059DD5: mov byte ptr [ebp - 0x2ed], 1 */
L_10059DDC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10059DDC: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2D4)) = edx; /* 0x10059DDD: mov dword ptr [ebp - 0x2d4], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10059DF3; /* 0x10059DE3: jne 0x10059df3 */
L_10059DE5:
    /* test eax, eax */ /* 0x10059DE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059DF3; /* 0x10059DE7: je 0x10059df3 */
L_10059DE9:
    PUSH32(esp, 0x78u); /* 0x10059DE9: push 0x78 */
    SET_LO8(eax, 1); /* 0x10059DEB: mov al, 1 */
    edx = POP32_VAL(esp); /* 0x10059DED: pop edx */
    RECOMP_BACKEDGE();
    goto L_1003350C; /* 0x10059DEE: jmp 0x1003350c */
L_10059DF3:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059DF3: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10059DF9: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = esi; /* 0x10059DFA: mov dword ptr [ebp - 0x2c8], esi */
    MEM32(ebp + (-0x2E8)) = esi; /* 0x10059E00: mov dword ptr [ebp - 0x2e8], esi */
    RECOMP_CALL(sub_1001C722); /* 0x10059E06: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059E0B: pop ecx */
    ebx = (uint32_t)LO16(eax); /* 0x10059E0C: movzx ebx, ax */
    RECOMP_BACKEDGE();
    goto L_10059C2C; /* 0x10059E0F: jmp 0x10059c2c */
L_10059E14:
    ecx = MEM32(ebp + (-0x304)); /* 0x10059E14: mov ecx, dword ptr [ebp - 0x304] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10059E1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10059E1C: push eax */
    PUSH32(esp, 0xAu); /* 0x10059E1D: push 0xa */
    PUSH32(esp, ecx); /* 0x10059E1F: push ecx */
    ecx = MEM32(ebp + (-0x30C)); /* 0x10059E20: mov ecx, dword ptr [ebp - 0x30c] */
    PUSH32(esp, ecx); /* 0x10059E26: push ecx */
    RECOMP_CALL(sub_10015B8C); /* 0x10059E27: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10059E2C: mov esi, eax */
    ecx = edx; /* 0x10059E2E: mov ecx, edx */
    goto L_10059E79; /* 0x10059E30: jmp 0x10059e79 */
L_10059E32:
    /* test ebx, 0xFF00u */ /* 0x10059E32: test ebx, 0xff00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10059EDF; /* 0x10059E38: jne 0x10059edf */
L_10059E3E:
    eax = (uint32_t)LO8(ebx); /* 0x10059E3E: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059E41: push eax */
    RECOMP_CALL(sub_10012255); /* 0x10059E42: call 0x10012255 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059E47: pop ecx */
    /* test eax, eax */ /* 0x10059E48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10059EDF; /* 0x10059E4A: je 0x10059edf */
L_10059E50:
    eax = MEM32(ebp + (-0x304)); /* 0x10059E50: mov eax, dword ptr [ebp - 0x304] */
    if (1) _cf = (((eax) >> 28) & 1u); /* 0x10059E56: shld eax, esi, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (4u)) | ((uint32_t)(esi) >> (32 - (4u)))) : (eax));
    PUSH32(esp, ebx); /* 0x10059E5A: push ebx */
    MEM32(ebp + (-0x304)) = eax; /* 0x10059E5B: mov dword ptr [ebp - 0x304], eax */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x10059E61: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x10059E61: shl esi, 4 */
    RECOMP_CALL(sub_1001F54E); /* 0x10059E64: call 0x1001f54e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059E69: pop ecx */
    ecx = MEM32(ebp + (-0x304)); /* 0x10059E6A: mov ecx, dword ptr [ebp - 0x304] */
    ebx = (uint32_t)LO16(eax); /* 0x10059E70: movzx ebx, ax */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059E73: mov dword ptr [ebp - 0x2cc], ebx */
L_10059E79:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2F4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2F4)) = MEM32(ebp + (-0x2F4)) + 1; /* 0x10059E79: inc dword ptr [ebp - 0x2f4] */
    _flag_k = FK_INC;
    PUSH32(esp, 0x30u); /* 0x10059E7F: push 0x30 */
    edx = POP32_VAL(esp); /* 0x10059E81: pop edx */
    eax = (uint32_t)LO16(ebx); /* 0x10059E82: movzx eax, bx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10059E85: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10059E87: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10059E88: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30C)) = esi; /* 0x10059E8A: mov dword ptr [ebp - 0x30c], esi */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10059E90: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x300)), 0 */ /* 0x10059E92: cmp dword ptr [ebp - 0x300], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x300))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x304)) = ecx; /* 0x10059E99: mov dword ptr [ebp - 0x304], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059EA9; /* 0x10059E9F: je 0x10059ea9 */
L_10059EA1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2D4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2D4)) = MEM32(ebp + (-0x2D4)) - 1; /* 0x10059EA1: dec dword ptr [ebp - 0x2d4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10059F0C; /* 0x10059EA7: je 0x10059f0c */
L_10059EA9:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059EA9: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059EAF: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10059EB5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059EB6: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059EBC: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001C722); /* 0x10059EC2: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059EC7: pop ecx */
    ecx = MEM32(ebp + (-0x2F8)); /* 0x10059EC8: mov ecx, dword ptr [ebp - 0x2f8] */
    ebx = (uint32_t)LO16(eax); /* 0x10059ECE: movzx ebx, ax */
    PUSH32(esp, 0x78u); /* 0x10059ED1: push 0x78 */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059ED3: mov dword ptr [ebp - 0x2cc], ebx */
    edx = POP32_VAL(esp); /* 0x10059ED9: pop edx */
    RECOMP_BACKEDGE();
    goto L_10059C4B; /* 0x10059EDA: jmp 0x10059c4b */
L_10059EDF:
    eax = MEM32(ebp + (-0x2C8)); /* 0x10059EDF: mov eax, dword ptr [ebp - 0x2c8] */
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059EE5: push dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10059EEB: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x10059EEC: push ebx */
    MEM32(ebp + (-0x2C8)) = eax; /* 0x10059EED: mov dword ptr [ebp - 0x2c8], eax */
    MEM32(ebp + (-0x2E8)) = eax; /* 0x10059EF3: mov dword ptr [ebp - 0x2e8], eax */
    RECOMP_CALL(sub_1001EB78); /* 0x10059EF9: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x30C)); /* 0x10059EFE: mov esi, dword ptr [ebp - 0x30c] */
    ecx = POP32_VAL(esp); /* 0x10059F04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059F05: pop ecx */
L_10059F06:
    ecx = MEM32(ebp + (-0x304)); /* 0x10059F06: mov ecx, dword ptr [ebp - 0x304] */
L_10059F0C:
    /* cmp MEM8(ebp + (-0x2ED)), 0 */ /* 0x10059F0C: cmp byte ptr [ebp - 0x2ed], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2ED))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033126; /* 0x10059F13: je 0x10033126 */
L_10059F19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10059F19: neg esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10059F1B: push 0 */
    eax = POP32_VAL(esp); /* 0x10059F1D: pop eax */
    { uint32_t _aa = ecx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10059F1E: adc ecx, eax */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x30C)) = esi; /* 0x10059F20: mov dword ptr [ebp - 0x30c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10059F26: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x304)) = ecx; /* 0x10059F28: mov dword ptr [ebp - 0x304], ecx */
    RECOMP_BACKEDGE();
    goto L_10033126; /* 0x10059F2E: jmp 0x10033126 */
L_10059F33:
    PUSH32(esp, 0x38u); /* 0x10059F33: push 0x38 */
    eax = POP32_VAL(esp); /* 0x10059F35: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10059F36: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100330F8; /* 0x10059F39: jbe 0x100330f8 */
L_10059F3F:
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x10059F3F: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x10059F3F: shl edi, 3 */
    RECOMP_BACKEDGE();
    goto L_10033562; /* 0x10059F42: jmp 0x10033562 */
L_10059F47:
    eax = (uint32_t)LO8(ebx); /* 0x10059F47: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059F4A: push eax */
    RECOMP_CALL(sub_10012255); /* 0x10059F4B: call 0x10012255 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059F50: pop ecx */
    /* test eax, eax */ /* 0x10059F51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100330F8; /* 0x10059F53: je 0x100330f8 */
L_10059F59:
    PUSH32(esp, ebx); /* 0x10059F59: push ebx */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x10059F5A: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x10059F5A: shl edi, 4 */
    RECOMP_CALL(sub_1001F54E); /* 0x10059F5D: call 0x1001f54e */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x10059F62: movzx ebx, ax */
    ecx = POP32_VAL(esp); /* 0x10059F65: pop ecx */
    MEM32(ebp + (-0x2CC)) = ebx; /* 0x10059F66: mov dword ptr [ebp - 0x2cc], ebx */
    RECOMP_BACKEDGE();
    goto L_10033562; /* 0x10059F6C: jmp 0x10033562 */
L_10059F71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x10059F71: neg edi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10033126; /* 0x10059F73: jmp 0x10033126 */
L_10059F78:
    eax = MEM32(ebp + (-0x2FC)); /* 0x10059F78: mov eax, dword ptr [ebp - 0x2fc] */
    ecx = MEM32(ebp + (-0x30C)); /* 0x10059F7E: mov ecx, dword ptr [ebp - 0x30c] */
    MEM32(eax) = ecx; /* 0x10059F84: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x304)); /* 0x10059F86: mov ecx, dword ptr [ebp - 0x304] */
    MEM32(eax + 0x4) = ecx; /* 0x10059F8C: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_10033171; /* 0x10059F8F: jmp 0x10033171 */
L_10059F94:
    /* cmp LO16(ecx), MEM16(ebx + 0x2) */ /* 0x10059F94: cmp cx, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100335B3; /* 0x10059F98: jne 0x100335b3 */
L_10059F9E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x10059F9E: add ebx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100335B3; /* 0x10059FA1: jmp 0x100335b3 */
L_10059FA6:
    PUSH32(esp, 0x6Eu); /* 0x10059FA6: push 0x6e */
    eax = POP32_VAL(esp); /* 0x10059FA8: pop eax */
    /* cmp MEM16(ebx + 0x2), LO16(eax) */ /* 0x10059FA9: cmp word ptr [ebx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100331A2; /* 0x10059FAD: je 0x100331a2 */
L_10059FB3:
    RECOMP_BACKEDGE();
    goto L_100331AE; /* 0x10059FB3: jmp 0x100331ae */
L_10059FB8:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059FB8: push dword ptr [ebp - 0x2d8] */
    PUSH32(esp, ebx); /* 0x10059FBE: push ebx */
    RECOMP_CALL(sub_1001EB78); /* 0x10059FBF: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059FC4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059FC5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100330B4; /* 0x10059FC6: jmp 0x100330b4 */
L_10059FCB:
    PUSH32(esp, MEM32(ebp + (-0x2D8))); /* 0x10059FCB: push dword ptr [ebp - 0x2d8] */
    PUSH32(esp, edi); /* 0x10059FD1: push edi */
    RECOMP_CALL(sub_1001EB78); /* 0x10059FD2: call 0x1001eb78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059FD7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059FD8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100331AE; /* 0x10059FD9: jmp 0x100331ae */
L_10059FDE:
    edi = MEM32(ebp + (-0x2CC)); /* 0x10059FDE: mov edi, dword ptr [ebp - 0x2cc] */
    RECOMP_BACKEDGE();
    goto L_100331B4; /* 0x10059FE4: jmp 0x100331b4 */
L_10059FE9:
    ecx = MEM32(ebp + (-0x310)); /* 0x10059FE9: mov ecx, dword ptr [ebp - 0x310] */
    RECOMP_BACKEDGE();
    goto L_100330F1; /* 0x10059FEF: jmp 0x100330f1 */
L_10059FF4:
    PUSH32(esp, ebx); /* 0x10059FF4: push ebx */
    PUSH32(esp, ebx); /* 0x10059FF5: push ebx */
    PUSH32(esp, ebx); /* 0x10059FF6: push ebx */
    PUSH32(esp, ebx); /* 0x10059FF7: push ebx */
    PUSH32(esp, ebx); /* 0x10059FF8: push ebx */
L_10059FF9:
    RECOMP_CALL(sub_100A469B); /* 0x10059FF9: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10059FFEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100335E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100335E9u);

L_100335E9:
    PUSH32(esp, ebp); /* 0x100335E9: push ebp */
    ebp = esp; /* 0x100335EA: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100335EC: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100335EF: push eax */
    PUSH32(esp, 0); /* 0x100335F0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100335F2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100335F5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100335F8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E0B5); /* 0x100335FB: call 0x1001e0b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10033600: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10033603: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033604: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003362A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003362Au);

L_1003362A:
    PUSH32(esp, ebp); /* 0x1003362A: push ebp */
    ebp = esp; /* 0x1003362B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1003362D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1003362F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10033632: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10033635: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10033638: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1003363B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10012862); /* 0x1003363E: call 0x10012862 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10033643: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10033646: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033647: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003373C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003373Cu);

L_1003373C:
    PUSH32(esp, ebp); /* 0x1003373C: push ebp */
    ebp = esp; /* 0x1003373D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1003373F: push ecx */
    PUSH32(esp, edi); /* 0x10033740: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10033741: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x10033744: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033A40; /* 0x10033746: je 0x10033a40 */
L_1003374C:
    eax = MEM32(ebp + 0xC); /* 0x1003374C: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1003374F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033A40; /* 0x10033751: je 0x10033a40 */
L_10033757:
    ecx = MEM32(ebp + 0x8); /* 0x10033757: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1003375A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033768; /* 0x1003375C: jne 0x10033768 */
L_1003375E:
    ecx = MEM32(edi); /* 0x1003375E: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x10033760: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033A40; /* 0x10033762: je 0x10033a40 */
L_10033768:
    edx = (uint32_t)MEM16(ecx); /* 0x10033768: movzx edx, word ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1003376B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1003376C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1003376E: push esi */
    /* test LO16(edx), LO16(edx) */ /* 0x1003376F: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003379E; /* 0x10033772: je 0x1003379e */
L_10033774:
    edi = (uint32_t)MEM16(eax); /* 0x10033774: movzx edi, word ptr [eax] */
L_10033777:
    esi = eax; /* 0x10033777: mov esi, eax */
    /* test LO16(edi), LO16(edi) */ /* 0x10033779: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033792; /* 0x1003377C: je 0x10033792 */
L_1003377E:
    ebx = edi; /* 0x1003377E: mov ebx, edi */
L_10033780:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x10033780: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033790; /* 0x10033783: je 0x10033790 */
L_10033785:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10033785: add esi, 2 */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM16(esi); /* 0x10033788: movzx ebx, word ptr [esi] */
    /* test LO16(ebx), LO16(ebx) */ /* 0x1003378B: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033780; /* 0x1003378E: jne 0x10033780 */
L_10033790:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10033790: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10033792:
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x10033792: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033A2C; /* 0x10033795: jne 0x10033a2c */
L_1003379B:
    edi = MEM32(ebp + 0x10); /* 0x1003379B: mov edi, dword ptr [ebp + 0x10] */
L_1003379E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1003379E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x100337A0: mov ebx, ecx */
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x100337A2: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100337E2; /* 0x100337A5: je 0x100337e2 */
L_100337A7:
    esi = (uint32_t)MEM16(eax); /* 0x100337A7: movzx esi, word ptr [eax] */
L_100337AA:
    edx = eax; /* 0x100337AA: mov edx, eax */
    /* test LO16(esi), LO16(esi) */ /* 0x100337AC: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100337CE; /* 0x100337AF: je 0x100337ce */
L_100337B1:
    edi = (uint32_t)MEM16(ecx); /* 0x100337B1: movzx edi, word ptr [ecx] */
    MEM32(ebp + (-0x4)) = edi; /* 0x100337B4: mov dword ptr [ebp - 4], edi */
    esi = (uint32_t)LO16(esi); /* 0x100337B7: movzx esi, si */
L_100337BA:
    /* cmp LO16(esi), MEM16(ebp + (-0x4)) */ /* 0x100337BA: cmp si, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100337CB; /* 0x100337BE: je 0x100337cb */
L_100337C0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x100337C0: add edx, 2 */
    _flag_k = FK_ADD;
    esi = (uint32_t)MEM16(edx); /* 0x100337C3: movzx esi, word ptr [edx] */
    /* test LO16(esi), LO16(esi) */ /* 0x100337C6: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100337BA; /* 0x100337C9: jne 0x100337ba */
L_100337CB:
    esi = (uint32_t)MEM16(eax); /* 0x100337CB: movzx esi, word ptr [eax] */
L_100337CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100337CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(edi) */ /* 0x100337D0: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edi = MEM32(ebp + 0x10); /* 0x100337D3: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100337F5; /* 0x100337D6: jne 0x100337f5 */
L_100337D8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100337D8: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100337DB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x100337DD: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100337AA; /* 0x100337E0: jne 0x100337aa */
L_100337E2:
    eax = ebx; /* 0x100337E2: mov eax, ebx */
    MEM32(edi) = ecx; /* 0x100337E4: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100337E6: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100337E8: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x100337EA: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100337EB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x100337ED: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100337EF: pop ebx */
L_100337F0:
    edi = POP32_VAL(esp); /* 0x100337F0: pop edi */
    esp = ebp; /* 0x100337F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100337F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100337F4: ret  */
L_100337F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100337F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100337F7: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100337FA: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100337E2; /* 0x100337FD: jmp 0x100337e2 */
L_10033A2C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10033A2C: add ecx, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(ecx); /* 0x10033A2F: movzx edx, word ptr [ecx] */
    /* test LO16(edx), LO16(edx) */ /* 0x10033A32: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033777; /* 0x10033A35: jne 0x10033777 */
L_10033A3B:
    RECOMP_BACKEDGE();
    goto L_1003379B; /* 0x10033A3B: jmp 0x1003379b */
L_10033A40:
    RECOMP_CALL(sub_1001177D); /* 0x10033A40: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056444; /* 0x10033A45: jmp 0x10056444 */
L_10056444:
    MEM32(eax) = 0x16u; /* 0x10056444: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005644A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005644F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100337F0; /* 0x10056451: jmp 0x100337f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003384F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003384Fu);

L_1003384F:
    PUSH32(esp, ebp); /* 0x1003384F: push ebp */
    ebp = esp; /* 0x10033850: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x10033852: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033862; /* 0x10033856: jne 0x10033862 */
L_10033858:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10033858: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1005415E; /* 0x1003385C: jl 0x1005415e */
L_10033862:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10033862: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10033864:
    PUSH32(esp, eax); /* 0x10033864: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10033865: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10033868: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1003386B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1003386E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001CADD); /* 0x10033871: call 0x1001cadd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10033876: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033877: ret  */
L_1005415E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005415E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10054160: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10033864; /* 0x10054161: jmp 0x10033864 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100338D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100338D8u);

L_100338D8:
    PUSH32(esp, ebp); /* 0x100338D8: push ebp */
    ebp = esp; /* 0x100338D9: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x100338DB: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AC9E; /* 0x100338E2: jne 0x1005ac9e */
L_100338E8:
    eax = MEM32(ebp + 0x8); /* 0x100338E8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100338EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AC8A; /* 0x100338ED: je 0x1005ac8a */
L_100338F3:
    PUSH32(esp, edi); /* 0x100338F3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100338F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x100338F6: mov edx, eax */
    /* cmp MEM16(eax), LO16(edi) */ /* 0x100338F8: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033917; /* 0x100338FB: je 0x10033917 */
L_100338FD:
    PUSH32(esp, esi); /* 0x100338FD: push esi */
L_100338FE:
    ecx = (uint32_t)MEM16(edx); /* 0x100338FE: movzx ecx, word ptr [edx] */
    PUSH32(esp, 0x41u); /* 0x10033901: push 0x41 */
    esi = POP32_VAL(esp); /* 0x10033903: pop esi */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x10033904: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1003390E; /* 0x10033907: ja 0x1003390e */
L_10033909:
    /* cmp ecx, 0x5Au */ /* 0x10033909: cmp ecx, 0x5a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1003391A; /* 0x1003390C: jbe 0x1003391a */
L_1003390E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1003390E: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(edi) */ /* 0x10033911: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100338FE; /* 0x10033914: jne 0x100338fe */
L_10033916:
    esi = POP32_VAL(esp); /* 0x10033916: pop esi */
L_10033917:
    edi = POP32_VAL(esp); /* 0x10033917: pop edi */
    ebp = POP32_VAL(esp); /* 0x10033918: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033919: ret  */
L_1003391A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1003391A: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1003391D: mov word ptr [edx], cx */
    RECOMP_BACKEDGE();
    goto L_1003390E; /* 0x10033920: jmp 0x1003390e */
L_1005AC8A:
    RECOMP_CALL(sub_1001177D); /* 0x1005AC8A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AC8F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AC95: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AC9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005AC9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005AC9D: ret  */
L_1005AC9E:
    PUSH32(esp, 0); /* 0x1005AC9E: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1005ACA0: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005ACA2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100113C8); /* 0x1005ACA5: call 0x100113c8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005ACAA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005ACAD: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1005ACB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005ACB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_10033A06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033A06u);

L_10033A06:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10033A06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = eax; /* 0x10033A08: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x10033A0B: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = eax; /* 0x10033A0E: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x24) = eax; /* 0x10033A11: mov dword ptr [ecx + 0x24], eax */
    MEM32(ecx) = eax; /* 0x10033A14: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x10033A16: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0xC) = eax; /* 0x10033A19: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x8) = 2; /* 0x10033A1C: mov dword ptr [ecx + 8], 2 */
    MEM32(ecx + 0x10) = eax; /* 0x10033A23: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x10033A26: mov dword ptr [ecx + 0x14], eax */
    eax = ecx; /* 0x10033A29: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033A2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10033A4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033A4Au);

L_10033A4A:
    PUSH32(esp, ebp); /* 0x10033A4A: push ebp */
    ebp = esp; /* 0x10033A4B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10033A4D: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = 0x1000EB24u; /* 0x10033A50: mov dword ptr [ecx], 0x1000eb24 */
    eax = MEM32(eax); /* 0x10033A56: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x4) = eax; /* 0x10033A58: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x10033A5B: mov eax, ecx */
    MEM8(ecx + 0x8) = (uint8_t)(0); /* 0x10033A5D: mov byte ptr [ecx + 8], 0 */
    ebp = POP32_VAL(esp); /* 0x10033A61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10033A62: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10033A65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033A65u);

L_10033A65:
    MEM32(ecx) = 0x1000EB24u; /* 0x10033A65: mov dword ptr [ecx], 0x1000eb24 */
    goto L_10033A6D; /* 0x10033A6B: jmp 0x10033a6d */
L_10033A6D:
    PUSH32(esp, esi); /* 0x10033A6D: push esi */
    esi = ecx; /* 0x10033A6E: mov esi, ecx */
    /* cmp MEM8(esi + 0x8), 0 */ /* 0x10033A70: cmp byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AEBA; /* 0x10033A74: jne 0x1005aeba */
L_10033A7A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10033A7A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x10033A7E: mov byte ptr [esi + 8], 0 */
    esi = POP32_VAL(esp); /* 0x10033A82: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033A83: ret  */
L_1005AEBA:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1005AEBA: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005AEBD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005AEC2: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10033A7A; /* 0x1005AEC3: jmp 0x10033a7a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033A6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033A6Du);

L_10033A6D:
    PUSH32(esp, esi); /* 0x10033A6D: push esi */
    esi = ecx; /* 0x10033A6E: mov esi, ecx */
    /* cmp MEM8(esi + 0x8), 0 */ /* 0x10033A70: cmp byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AEBA; /* 0x10033A74: jne 0x1005aeba */
L_10033A7A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10033A7A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x10033A7E: mov byte ptr [esi + 8], 0 */
    esi = POP32_VAL(esp); /* 0x10033A82: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033A83: ret  */
L_1005AEBA:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1005AEBA: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005AEBD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005AEC2: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10033A7A; /* 0x1005AEC3: jmp 0x10033a7a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033A84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033A84u);

L_10033A84:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033A84: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033A86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(GS_BASE + (ebx)) */ /* 0x10033A88: cmp al, byte ptr gs:[ebx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033A8B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033A8D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + edi + 0x31003)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + edi + 0x31003) = (uint8_t)(MEM8(edx + edi + 0x31003) + LO8(edx)); /* 0x10033A8F: add byte ptr [edx + edi + 0x31003], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033A96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (3u) _cf = (((MEM8(edx)) >> 2) & 1u); /* 0x10033A98: sar byte ptr [edx], 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edx)) >> 3u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edx) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edx)) >> 3u));
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033A9B: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp LO8(eax), MEM8(ebx) */ /* 0x10033A9D: cmp al, byte ptr [ebx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(ebx + edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033A9F: adc byte ptr [ebx + edi], al */
      MEM8(ebx + edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033AA2: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x10033AA4: push ebp */
    ebp = esp; /* 0x10033AA5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10033AA7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033AA8: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10033AAB: mov esi, ecx */
    RECOMP_CALL(sub_1009DCF9); /* 0x10033AAD: call 0x1009dcf9 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EC28u; /* 0x10033AB2: mov dword ptr [esi], 0x1000ec28 */
    eax = esi; /* 0x10033AB8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10033ABA: pop esi */
    ebp = POP32_VAL(esp); /* 0x10033ABB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10033ABC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10033AA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033AA4u);

L_10033AA4:
    PUSH32(esp, ebp); /* 0x10033AA4: push ebp */
    ebp = esp; /* 0x10033AA5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10033AA7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033AA8: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10033AAB: mov esi, ecx */
    RECOMP_CALL(sub_1009DCF9); /* 0x10033AAD: call 0x1009dcf9 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EC28u; /* 0x10033AB2: mov dword ptr [esi], 0x1000ec28 */
    eax = esi; /* 0x10033AB8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10033ABA: pop esi */
    ebp = POP32_VAL(esp); /* 0x10033ABB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10033ABC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10033B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033B20u);

L_10033B20:
    PUSH32(esp, ebp); /* 0x10033B20: push ebp */
    ebp = esp; /* 0x10033B21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x21Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x21Cu; /* 0x10033B23: sub esp, 0x21c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10033B29: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10033B2E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10033B30: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10033B33: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x21C)) = MEM32(ebp + (-0x21C)) & 0; /* 0x10033B36: and dword ptr [ebp - 0x21c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10033B3D: push ebx */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10033B3E: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10033B41: push esi */
    esi = ebp + (-0x218); /* 0x10033B42: lea esi, [ebp - 0x218] */
    /* test eax, eax */ /* 0x10033B48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054759; /* 0x10033B4A: je 0x10054759 */
L_10033B50:
    PUSH32(esp, edi); /* 0x10033B50: push edi */
    PUSH32(esp, eax); /* 0x10033B51: push eax */
    RECOMP_ICALL(MEM32(0x100E50D8)); /* 0x10033B52: call dword ptr [0x100e50d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10033B58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033BEC; /* 0x10033B5A: je 0x10033bec */
L_10033B60:
    eax = ebp + (-0x218); /* 0x10033B60: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x10033B66: push eax */
    PUSH32(esp, 0x105u); /* 0x10033B67: push 0x105 */
    RECOMP_ICALL(MEM32(0x100E50DC)); /* 0x10033B6C: call dword ptr [0x100e50dc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10033B72: mov edi, eax */
    /* cmp edi, 0x104u */ /* 0x10033B74: cmp edi, 0x104 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10054776; /* 0x10033B7A: jg 0x10054776 */
L_10033B80:
    /* test edi, edi */ /* 0x10033B80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033BEC; /* 0x10033B82: je 0x10033bec */
L_10033B84:
    eax = (uint32_t)MEM16(esi); /* 0x10033B84: movzx eax, word ptr [esi] */
    /* cmp eax, 0x5Cu */ /* 0x10033B87: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033BE4; /* 0x10033B8A: je 0x10033be4 */
L_10033B8C:
    /* cmp eax, 0x2Fu */ /* 0x10033B8C: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033BE4; /* 0x10033B8F: je 0x10033be4 */
L_10033B91:
    PUSH32(esp, 0x3Du); /* 0x10033B91: push 0x3d */
    eax = POP32_VAL(esp); /* 0x10033B93: pop eax */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x10033B94: mov word ptr [ebp - 0xc], ax */
    eax = (uint32_t)MEM16(esi); /* 0x10033B98: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x10033B9B: push eax */
    RECOMP_CALL(sub_1002007F); /* 0x10033B9C: call 0x1002007f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033BA1: pop ecx */
    PUSH32(esp, 0x3Au); /* 0x10033BA2: push 0x3a */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x10033BA4: mov word ptr [ebp - 0xa], ax */
    eax = POP32_VAL(esp); /* 0x10033BA8: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x10033BA9: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10033BAD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x10033BAF: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0xC); /* 0x10033BB3: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x10033BB6: push esi */
    PUSH32(esp, eax); /* 0x10033BB7: push eax */
    RECOMP_ICALL(MEM32(0x100E50E0)); /* 0x10033BB8: call dword ptr [0x100e50e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10033BBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033BEC; /* 0x10033BC0: je 0x10033bec */
L_10033BC2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10033BC2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10033BC4:
    /* cmp MEM32(ebp + (-0x21C)), 0 */ /* 0x10033BC4: cmp dword ptr [ebp - 0x21c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x10033BCB: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100547BD; /* 0x10033BCC: jne 0x100547bd */
L_10033BD2:
    ecx = MEM32(ebp + (-0x4)); /* 0x10033BD2: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x10033BD5: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x10033BD7: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10033BD8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10033BDA: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10033BDB: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10033BE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10033BE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033BE3: ret  */
L_10033BE4:
    /* cmp LO16(eax), MEM16(esi + 0x2) */ /* 0x10033BE4: cmp ax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033BC2; /* 0x10033BE8: je 0x10033bc2 */
L_10033BEA:
    RECOMP_BACKEDGE();
    goto L_10033B91; /* 0x10033BEA: jmp 0x10033b91 */
L_10033BEC:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10033BEC: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_100547B1; /* 0x10033BF2: jmp 0x100547b1 */
L_10054759:
    RECOMP_CALL(sub_1001E471); /* 0x10054759: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005475E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x10054761: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054766: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005476C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033BD2; /* 0x10054771: jmp 0x10033bd2 */
L_10054776:
    eax = edi + 0x1; /* 0x10054776: lea eax, [edi + 1] */
    PUSH32(esp, 2); /* 0x10054779: push 2 */
    PUSH32(esp, eax); /* 0x1005477B: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1005477C: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10054781: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10054783: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054784: pop ecx */
    /* test esi, esi */ /* 0x10054785: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033BEC; /* 0x10054787: je 0x10033bec */
L_1005478D:
    MEM32(ebp + (-0x21C)) = 1; /* 0x1005478D: mov dword ptr [ebp - 0x21c], 1 */
    /* test edi, edi */ /* 0x10054797: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033BEC; /* 0x10054799: je 0x10033bec */
L_1005479F:
    PUSH32(esp, esi); /* 0x1005479F: push esi */
    eax = edi + 0x1; /* 0x100547A0: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x100547A3: push eax */
    RECOMP_ICALL(MEM32(0x100E50DC)); /* 0x100547A4: call dword ptr [0x100e50dc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100547AA: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_10033B80; /* 0x100547AC: jmp 0x10033b80 */
L_100547B1:
    PUSH32(esp, eax); /* 0x100547B1: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100547B2: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100547B7: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10033BC4; /* 0x100547B8: jmp 0x10033bc4 */
L_100547BD:
    PUSH32(esp, esi); /* 0x100547BD: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100547BE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100547C3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10033BD2; /* 0x100547C4: jmp 0x10033bd2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033C63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033C63u);

L_10033C63:
    PUSH32(esp, ebp); /* 0x10033C63: push ebp */
    ebp = esp; /* 0x10033C64: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10033C66: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10033C69: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10033C6E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10033C70: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10033C73: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 1 */ /* 0x10033C76: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10033CB6; /* 0x10033C79: jl 0x10033cb6 */
L_10033C7B:
    /* cmp eax, 0x1Au */ /* 0x10033C7B: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10033CB6; /* 0x10033C7E: jg 0x10033cb6 */
L_10033C80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x10033C80: add eax, 0x40 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x10033C83: mov word ptr [ebp - 0xc], ax */
    PUSH32(esp, 0x3Au); /* 0x10033C87: push 0x3a */
    eax = POP32_VAL(esp); /* 0x10033C89: pop eax */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x10033C8A: mov word ptr [ebp - 0xa], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10033C8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x10033C90: mov word ptr [ebp - 8], ax */
    eax = ebp + (-0xC); /* 0x10033C94: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x10033C97: push eax */
    RECOMP_ICALL(MEM32(0x100E50D8)); /* 0x10033C98: call dword ptr [0x100e50d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10033C9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054605; /* 0x10033CA0: je 0x10054605 */
L_10033CA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10033CA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10033CA8:
    ecx = MEM32(ebp + (-0x4)); /* 0x10033CA8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10033CAB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10033CAD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10033CB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10033CB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033CB5: ret  */
L_10033CB6:
    RECOMP_CALL(sub_1001E471); /* 0x10033CB6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_10054614; /* 0x10033CBB: jmp 0x10054614 */
L_10054605:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10054605: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005460B: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005460C: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054611: pop ecx */
    goto L_1005462A; /* 0x10054612: jmp 0x1005462a */
L_10054614:
    MEM32(eax) = 0xFu; /* 0x10054614: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_1001177D); /* 0x1005461A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x1005461F: mov dword ptr [eax], 0xd */
    RECOMP_CALL(sub_100A4670); /* 0x10054625: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005462A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005462A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10033CA8; /* 0x1005462D: jmp 0x10033ca8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033D38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033D38u);

    goto L_10033D38;
L_10033CCB:
    PUSH32(esp, 0x30u); /* 0x10033CCB: push 0x30 */
    PUSH32(esp, 0x10033D10u); /* 0x10033CCD: push 0x10033d10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10033CD2: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10033CD7: mov edi, ecx */
    MEM32(ebp + (-0x30)) = edi; /* 0x10033CD9: mov dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10033CDC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x64), ebx */ /* 0x10033CDE: cmp dword ptr [edi + 0x64], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x64)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10051C58; /* 0x10033CE1: jne 0x10051c58 */
L_10033CE7:
    /* cmp MEM32(edi + 0x84), ebx */ /* 0x10033CE7: cmp dword ptr [edi + 0x84], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x84)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10051C75; /* 0x10033CED: jg 0x10051c75 */
L_10033CF3:
    /* cmp MEM32(edi + 0x50), ebx */ /* 0x10033CF3: cmp dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10051C8D; /* 0x10033CF6: jne 0x10051c8d */
L_10033CFC:
    ecx = edi + 0x58; /* 0x10033CFC: lea ecx, [edi + 0x58] */
    /* cmp MEM32(ecx), ebx */ /* 0x10033CFF: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10051C81; /* 0x10033D01: jg 0x10051c81 */
L_10033D07:
    RECOMP_CALL(sub_1000EDC3); /* 0x10033D07: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033D0C: ret  */
L_10033D38:
    PUSH32(esp, ebx); /* 0x10033D38: push ebx */
    ebx = ecx; /* 0x10033D39: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10033D3B: push esi */
    PUSH32(esp, edi); /* 0x10033D3C: push edi */
    edi = MEM32(ebx + 0x20); /* 0x10033D3D: mov edi, dword ptr [ebx + 0x20] */
    /* test edi, edi */ /* 0x10033D40: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051DA0; /* 0x10033D42: jne 0x10051da0 */
L_10033D48:
    ecx = ebx; /* 0x10033D48: mov ecx, ebx */
    edi = POP32_VAL(esp); /* 0x10033D4A: pop edi */
    esi = POP32_VAL(esp); /* 0x10033D4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x10033D4C: pop ebx */
    RECOMP_BACKEDGE();
    goto L_10033CCB; /* 0x10033D4D: jmp 0x10033ccb */
L_10051C58:
    MEM32(ebp + (-0x38)) = ebx; /* 0x10051C58: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x34)) = 0x1007A46Cu; /* 0x10051C5B: mov dword ptr [ebp - 0x34], 0x1007a46c */
L_10051C62:
    ecx = ebp + (-0x40); /* 0x10051C62: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1006A8DE); /* 0x10051C65: call 0x1006a8de */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x64), ebx */ /* 0x10051C6A: cmp dword ptr [edi + 0x64], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x64)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033CE7; /* 0x10051C6D: je 0x10033ce7 */
L_10051C73:
    RECOMP_BACKEDGE();
    goto L_10051C62; /* 0x10051C73: jmp 0x10051c62 */
L_10051C75:
    ecx = edi; /* 0x10051C75: mov ecx, edi */
    RECOMP_CALL(sub_1006A234); /* 0x10051C77: call 0x1006a234 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033CF3; /* 0x10051C7C: jmp 0x10033cf3 */
L_10051C81:
    PUSH32(esp, ecx); /* 0x10051C81: push ecx */
    RECOMP_CALL(sub_1006F1AC); /* 0x10051C82: call 0x1006f1ac */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10051C87: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10033D07; /* 0x10051C88: jmp 0x10033d07 */
L_10051C8D:
    SET_LO8(edx, LO8(ebx)); /* 0x10051C8D: mov dl, bl */
    MEM8(ebp + (-0x1F)) = (uint8_t)(LO8(edx)); /* 0x10051C8F: mov byte ptr [ebp - 0x1f], dl */
L_10051C92:
    /* test LO8(edx), LO8(edx) */ /* 0x10051C92: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033D07; /* 0x10051C94: jne 0x10033d07 */
L_10051C9A:
    MEM8(ebp + (-0x1E)) = (uint8_t)(1); /* 0x10051C9A: mov byte ptr [ebp - 0x1e], 1 */
    ecx = edi + 0x54; /* 0x10051C9E: lea ecx, [edi + 0x54] */
    RECOMP_CALL(sub_1006F14E); /* 0x10051CA1: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x10051CA6: mov dword ptr [ebp - 4], ebx */
    SET_LO8(eax, 1); /* 0x10051CA9: mov al, 1 */
    MEM8(ebp + (-0x1D)) = (uint8_t)(LO8(eax)); /* 0x10051CAB: mov byte ptr [ebp - 0x1d], al */
    MEM8(ebp + (-0x1E)) = (uint8_t)(LO8(eax)); /* 0x10051CAE: mov byte ptr [ebp - 0x1e], al */
    esi = MEM32(edi + 0x50); /* 0x10051CB1: mov esi, dword ptr [edi + 0x50] */
    /* test esi, esi */ /* 0x10051CB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051CBD; /* 0x10051CB6: je 0x10051cbd */
L_10051CB8:
    esi = MEM32(esi + 0x4); /* 0x10051CB8: mov esi, dword ptr [esi + 4] */
    goto L_10051CBF; /* 0x10051CBB: jmp 0x10051cbf */
L_10051CBD:
    esi = ebx; /* 0x10051CBD: mov esi, ebx */
L_10051CBF:
    /* test esi, esi */ /* 0x10051CBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051D11; /* 0x10051CC1: je 0x10051d11 */
L_10051CC3:
    /* test LO8(eax), LO8(eax) */ /* 0x10051CC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051D11; /* 0x10051CC5: je 0x10051d11 */
L_10051CC7:
    /* cmp esi, MEM32(edi + 0x50) */ /* 0x10051CC7: cmp esi, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051CD4; /* 0x10051CCA: je 0x10051cd4 */
L_10051CCC:
    eax = MEM32(esi + 0x4); /* 0x10051CCC: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10051CCF: mov dword ptr [ebp - 0x24], eax */
    goto L_10051CD7; /* 0x10051CD2: jmp 0x10051cd7 */
L_10051CD4:
    MEM32(ebp + (-0x24)) = ebx; /* 0x10051CD4: mov dword ptr [ebp - 0x24], ebx */
L_10051CD7:
    eax = esi + (-0x5C); /* 0x10051CD7: lea eax, [esi - 0x5c] */
    MEM32(ebp + (-0x28)) = eax; /* 0x10051CDA: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(eax + 0x30); /* 0x10051CDD: mov eax, dword ptr [eax + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x10051CE0: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x10051CE3: mov dword ptr [ebp - 0x2c], eax */
    ecx = eax + 0x4; /* 0x10051CE6: lea ecx, [eax + 4] */
    RECOMP_CALL(sub_1006F18F); /* 0x10051CE9: call 0x1006f18f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10051CEE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051D2C; /* 0x10051CF0: jne 0x10051d2c */
L_10051CF2:
    MEM32(edi + 0x54) = ebx; /* 0x10051CF2: mov dword ptr [edi + 0x54], ebx */
    eax = edi + 0x58; /* 0x10051CF5: lea eax, [edi + 0x58] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10051CF8: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10051CFB: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, LO8(ebx)); /* 0x10051CFF: mov al, bl */
    MEM8(ebp + (-0x1D)) = (uint8_t)(LO8(eax)); /* 0x10051D01: mov byte ptr [ebp - 0x1d], al */
    MEM8(ebp + (-0x1E)) = (uint8_t)(LO8(eax)); /* 0x10051D04: mov byte ptr [ebp - 0x1e], al */
    PUSH32(esp, 1); /* 0x10051D07: push 1 */
    RECOMP_ICALL(MEM32(0x100E50A0)); /* 0x10051D09: call dword ptr [0x100e50a0] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x10051D0F: mov al, bl */
L_10051D11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10051D11: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10051D13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x10051D15: sete dl */
    MEM8(ebp + (-0x1F)) = (uint8_t)(LO8(edx)); /* 0x10051D18: mov byte ptr [ebp - 0x1f], dl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10051D1B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10051D8E); /* 0x10051D22: call 0x10051d8e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10051C92; /* 0x10051D27: jmp 0x10051c92 */
L_10051D2C:
    MEM32(ebp + (-0x4)) = 1; /* 0x10051D2C: mov dword ptr [ebp - 4], 1 */
    esi = MEM32(ebp + (-0x28)); /* 0x10051D33: mov esi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x10051D36: add esi, 0x5c */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x10051D39: push esi */
    ecx = edi + 0x50; /* 0x10051D3A: lea ecx, [edi + 0x50] */
    RECOMP_CALL(sub_10069871); /* 0x10051D3D: call 0x10069871 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x10051D42: mov eax, dword ptr [ebp - 0x28] */
    MEM8(eax + 0x4D) = (uint8_t)(LO8(ebx)); /* 0x10051D45: mov byte ptr [eax + 0x4d], bl */
    PUSH32(esp, esi); /* 0x10051D48: push esi */
    ecx = MEM32(ebp + (-0x2C)); /* 0x10051D49: mov ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_10069842); /* 0x10051D4C: call 0x10069842 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x10051D51: mov dword ptr [ebp - 4], ebx */
    esi = MEM32(ebp + (-0x24)); /* 0x10051D54: mov esi, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_10051D72); /* 0x10051D57: call 0x10051d72 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0x1D))); /* 0x10051D5C: mov al, byte ptr [ebp - 0x1d] */
    RECOMP_BACKEDGE();
    goto L_10051CBF; /* 0x10051D5F: jmp 0x10051cbf */
L_10051DA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10051DA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x20) = ecx; /* 0x10051DA2: mov dword ptr [ebx + 0x20], ecx */
    eax = MEM32(edi + 0x50); /* 0x10051DA5: mov eax, dword ptr [edi + 0x50] */
    /* cmp eax, MEM32(edi + 0x4C) */ /* 0x10051DA8: cmp eax, dword ptr [edi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10051E00; /* 0x10051DAB: jle 0x10051e00 */
L_10051DAD:
    RECOMP_CALL(sub_10023AF4); /* 0x10051DAD: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x70; /* 0x10051DB2: lea ecx, [edi + 0x70] */
    RECOMP_CALL(sub_10023D1E); /* 0x10051DB5: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0; /* 0x10051DBA: and dword ptr [edi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x70) = 0; /* 0x10051DBE: mov dword ptr [edi + 0x70], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10051DC5: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x18); /* 0x10051DCA: mov esi, dword ptr [ebx + 0x18] */
    eax = MEM32(esi + 0x100); /* 0x10051DCD: mov eax, dword ptr [esi + 0x100] */
    /* test MEM8(eax + 0x30), 4 */ /* 0x10051DD3: test byte ptr [eax + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051DE3; /* 0x10051DD7: jne 0x10051de3 */
L_10051DD9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10051DD9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x10051DDB: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10051DDE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10051DDF: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10051DE3:
    PUSH32(esp, 1); /* 0x10051DE3: push 1 */
    ecx = edi; /* 0x10051DE5: mov ecx, edi */
    RECOMP_CALL(sub_10072428); /* 0x10051DE7: call 0x10072428 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x2C; /* 0x10051DEC: lea eax, [edi + 0x2c] */
    PUSH32(esp, eax); /* 0x10051DEF: push eax */
    ecx = esi + 0xA8; /* 0x10051DF0: lea ecx, [esi + 0xa8] */
    RECOMP_CALL(sub_10023B15); /* 0x10051DF6: call 0x10023b15 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033D48; /* 0x10051DFB: jmp 0x10033d48 */
L_10051E00:
    esi = edi + 0x70; /* 0x10051E00: lea esi, [edi + 0x70] */
    /* cmp MEM32(esi), ecx */ /* 0x10051E03: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051E24; /* 0x10051E05: je 0x10051e24 */
L_10051E07:
    RECOMP_CALL(sub_10023AF4); /* 0x10051E07: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x10051E0C: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x10051E0E: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0; /* 0x10051E13: and dword ptr [edi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0; /* 0x10051E17: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10051E1D: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    goto L_10051E27; /* 0x10051E22: jmp 0x10051e27 */
L_10051E24:
    MEM32(edi + 0x48) = ecx; /* 0x10051E24: mov dword ptr [edi + 0x48], ecx */
L_10051E27:
    PUSH32(esp, ecx); /* 0x10051E27: push ecx */
    PUSH32(esp, MEM32(edi + 0x44)); /* 0x10051E28: push dword ptr [edi + 0x44] */
    ecx = MEM32(ebx + 0x18); /* 0x10051E2B: mov ecx, dword ptr [ebx + 0x18] */
    PUSH32(esp, edi); /* 0x10051E2E: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x58u; /* 0x10051E2F: add ecx, 0x58 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006AD3B); /* 0x10051E32: call 0x1006ad3b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033D48; /* 0x10051E37: jmp 0x10033d48 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033D52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033D52u);

L_10033D52:
    PUSH32(esp, ebp); /* 0x10033D52: push ebp */
    ebp = esp; /* 0x10033D53: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x10033D55: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10033D58: push 0 */
    PUSH32(esp, ecx); /* 0x10033D5A: push ecx */
    ecx = MEM32(ecx + 0x1C); /* 0x10033D5B: mov ecx, dword ptr [ecx + 0x1c] */
    RECOMP_CALL(sub_10033DB3); /* 0x10033D5E: call 0x10033db3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10033D63: push 0 */
    PUSH32(esp, 0); /* 0x10033D65: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10033D67: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10023F58); /* 0x10033D6A: call 0x10023f58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10033D6F: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10033D72: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10035338); /* 0x10033D75: call 0x10035338 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033D7A: pop ecx */
    RECOMP_CALL(sub_10033D98); /* 0x10033D7B: call 0x10033d98 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03F4); /* 0x10033D80: mov eax, dword ptr [0x100e03f4] */
    /* test eax, eax */ /* 0x10033D85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033D94; /* 0x10033D87: je 0x10033d94 */
L_10033D89:
    PUSH32(esp, eax); /* 0x10033D89: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033D8A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1003534F); /* 0x10033D8D: call 0x1003534f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033D92: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10033D93: pop ecx */
L_10033D94:
    ebp = POP32_VAL(esp); /* 0x10033D94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10033D95: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10033D98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033D98u);

L_10033D98:
    PUSH32(esp, edi); /* 0x10033D98: push edi */
    edi = 0x100DFDDCu; /* 0x10033D99: mov edi, 0x100dfddc */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10033D9E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x10033DA1: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10033DA5: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x80000000u */ /* 0x10033DA6: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052FA5; /* 0x10033DAB: je 0x10052fa5 */
L_10033DB1:
    edi = POP32_VAL(esp); /* 0x10033DB1: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033DB2: ret  */
L_10052FA5:
    PUSH32(esp, MEM32(0x100E0AF0)); /* 0x10052FA5: push dword ptr [0x100e0af0] */
    RECOMP_ICALL(MEM32(0x100E5188)); /* 0x10052FAB: call dword ptr [0x100e5188] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10052FB1: push dword ptr [0x100dfde0] */
    _flag_a = (uint32_t)(MEM32(0x100E0AF0)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AF0) = MEM32(0x100E0AF0) & 0; /* 0x10052FB7: and dword ptr [0x100e0af0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x100E5188)); /* 0x10052FBE: call dword ptr [0x100e5188] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100DFDE0)); _flag_b = (uint32_t)(0);
    MEM32(0x100DFDE0) = MEM32(0x100DFDE0) & 0; /* 0x10052FC4: and dword ptr [0x100dfde0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x7FFFFFFFu; /* 0x10052FCB: mov eax, 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    MEM32(edi) = MEM32(edi) & eax; /* 0x10052FD0: lock and dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10033DB1; /* 0x10052FD3: jmp 0x10033db1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033DB3u);

L_10033DB3:
    PUSH32(esp, ebp); /* 0x10033DB3: push ebp */
    ebp = esp; /* 0x10033DB4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10033DB6: push ecx */
    PUSH32(esp, ebx); /* 0x10033DB7: push ebx */
    PUSH32(esp, esi); /* 0x10033DB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10033DB9: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x10033DBC: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x10033DBE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10033DBF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10033DC1: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100530D9; /* 0x10033DC5: jne 0x100530d9 */
L_10033DCB:
    eax = ebx + 0x1F0; /* 0x10033DCB: lea eax, [ebx + 0x1f0] */
    PUSH32(esp, eax); /* 0x10033DD1: push eax */
    RECOMP_ICALL(MEM32(0x100E5134)); /* 0x10033DD2: call dword ptr [0x100e5134] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x10033DD8: movzx eax, ax */
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x10033DDB: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10033E34; /* 0x10033DDE: jge 0x10033e34 */
L_10033DE0:
    ecx = esi; /* 0x10033DE0: mov ecx, esi */
    RECOMP_CALL(sub_10033D38); /* 0x10033DE2: call 0x10033d38 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA4); /* 0x10033DE7: mov eax, dword ptr [esi + 0xa4] */
    /* test eax, eax */ /* 0x10033DED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033DFF; /* 0x10033DEF: je 0x10033dff */
L_10033DF1:
    PUSH32(esp, eax); /* 0x10033DF1: push eax */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10033DF2: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xA4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) & 0; /* 0x10033DF8: and dword ptr [esi + 0xa4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10033DFF:
    eax = esi + 0x4; /* 0x10033DFF: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x10033E02: push eax */
    eax = ebx + 0x1F0; /* 0x10033E03: lea eax, [ebx + 0x1f0] */
    PUSH32(esp, eax); /* 0x10033E09: push eax */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10033E0A: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
L_10033E10:
    eax = ebx + 0x184; /* 0x10033E10: lea eax, [ebx + 0x184] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10033E16: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10033E19: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebx); /* 0x10033E1D: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x10033E1F: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10033E21: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10033E24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053109; /* 0x10033E26: jne 0x10053109 */
L_10033E2C:
    edi = POP32_VAL(esp); /* 0x10033E2C: pop edi */
    esi = POP32_VAL(esp); /* 0x10033E2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x10033E2E: pop ebx */
    ecx = POP32_VAL(esp); /* 0x10033E2F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10033E30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10033E31: ret 8 */
L_10033E34:
    /* test esi, esi */ /* 0x10033E34: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100530FB; /* 0x10033E36: jne 0x100530fb */
L_10033E3C:
    RECOMP_BACKEDGE();
    goto L_10033E10; /* 0x10033E3C: jmp 0x10033e10 */
L_100530D9:
    edi = MEM32(esi + 0x24); /* 0x100530D9: mov edi, dword ptr [esi + 0x24] */
    PUSH32(esp, edi); /* 0x100530DC: push edi */
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x100530DD: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x100530E3: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100530E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100530F2; /* 0x100530EB: jne 0x100530f2 */
L_100530ED:
    RECOMP_CALL(sub_1006EE8E); /* 0x100530ED: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
L_100530F2:
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0; /* 0x100530F2: and dword ptr [esi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10033DCB; /* 0x100530F6: jmp 0x10033dcb */
L_100530FB:
    eax = MEM32(esi); /* 0x100530FB: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x100530FD: mov ecx, esi */
    PUSH32(esp, 1); /* 0x100530FF: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10053101: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033E10; /* 0x10053104: jmp 0x10033e10 */
L_10053109:
    SET_LO8(eax, MEM8(edi + 0x4C)); /* 0x10053109: mov al, byte ptr [edi + 0x4c] */
    /* test LO8(eax), LO8(eax) */ /* 0x1005310C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033E2C; /* 0x1005310E: jne 0x10033e2c */
L_10053114:
    ecx = edi + (-0x4); /* 0x10053114: lea ecx, [edi - 4] */
    PUSH32(esp, 3); /* 0x10053117: push 3 */
    RECOMP_CALL(sub_1006DE3B); /* 0x10053119: call 0x1006de3b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033E2C; /* 0x1005311E: jmp 0x10033e2c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033E3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033E3Eu);

L_10033E3E:
    eax = MEM32(0x100E0ED4); /* 0x10033E3E: mov eax, dword ptr [0x100e0ed4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033E43: ret  */
    RECOMP_REGS_OUT();
}

void sub_10033E44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033E44u);

L_10033E44:
    PUSH32(esp, esi); /* 0x10033E44: push esi */
    esi = ecx; /* 0x10033E45: mov esi, ecx */
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x10033E47: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033E9B; /* 0x10033E4D: jne 0x10033e9b */
L_10033E4F:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x10033E4F: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033E9B; /* 0x10033E53: jne 0x10033e9b */
L_10033E55:
    eax = MEM32(esi + 0x14); /* 0x10033E55: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0x19930520u */ /* 0x10033E58: cmp eax, 0x19930520 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053930; /* 0x10033E5D: jne 0x10053930 */
L_10033E63:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x10033E63: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033E66: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10033E6C: mov edx, eax */
    /* test edx, edx */ /* 0x10033E6E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053960; /* 0x10033E70: je 0x10053960 */
L_10033E76:
    ecx = MEM32(esi + 0x18); /* 0x10033E76: mov ecx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x10033E79: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033E92; /* 0x10033E7B: je 0x10033e92 */
L_10033E7D:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x10033E7D: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0xC); /* 0x10033E81: mov eax, dword ptr [edx + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x10033E84: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033EA6; /* 0x10033E87: je 0x10033ea6 */
L_10033E89:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x10033E89: push dword ptr [edx + 4] */
    PUSH32(esp, ecx); /* 0x10033E8C: push ecx */
    RECOMP_CALL(sub_10014D28); /* 0x10033E8D: call 0x10014d28 */
    RECOMP_FLAGS_IN();
L_10033E92:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x10033E92: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10033E95: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033E9A: pop ecx */
L_10033E9B:
    esi = POP32_VAL(esp); /* 0x10033E9B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033E9C: ret  */
L_10033E9D:
    /* cmp eax, 0x01994000u */ /* 0x10033E9D: cmp eax, 0x1994000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033E63; /* 0x10033EA2: je 0x10033e63 */
L_10033EA4:
    RECOMP_BACKEDGE();
    goto L_10033E9B; /* 0x10033EA4: jmp 0x10033e9b */
L_10033EA6:
    /* test MEM8(eax), 8 */ /* 0x10033EA6: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005394B; /* 0x10033EA9: jne 0x1005394b */
L_10033EAF:
    RECOMP_BACKEDGE();
    goto L_10033E92; /* 0x10033EAF: jmp 0x10033e92 */
L_10053930:
    /* cmp eax, 0x19930521u */ /* 0x10053930: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033E63; /* 0x10053935: je 0x10033e63 */
L_1005393B:
    /* cmp eax, 0x19930522u */ /* 0x1005393B: cmp eax, 0x19930522 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10033E9D; /* 0x10053940: jne 0x10033e9d */
L_10053946:
    RECOMP_BACKEDGE();
    goto L_10033E63; /* 0x10053946: jmp 0x10033e63 */
L_1005394B:
    ecx = MEM32(ecx); /* 0x1005394B: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x1005394D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033E92; /* 0x1005394F: je 0x10033e92 */
L_10053955:
    eax = MEM32(ecx); /* 0x10053955: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x10053957: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x10053958: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10033E92; /* 0x1005395B: jmp 0x10033e92 */
L_10053960:
    RECOMP_CALL(sub_1009DC2C); /* 0x10053960: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10053965u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033EE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033EE4u);

L_10033EE4:
    PUSH32(esp, esi); /* 0x10033EE4: push esi */
    esi = ecx; /* 0x10033EE5: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10033EE7: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10033EE8: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10033EEB: mov eax, edi */
    edx = esi + 0x4; /* 0x10033EED: lea edx, [esi + 4] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x10033EF0: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10033F0D; /* 0x10033EF4: jne 0x10033f0d */
L_10033EF6:
    eax = MEM32(esi); /* 0x10033EF6: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10033EF8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = esi + 0x8; /* 0x10033EFA: lea eax, [esi + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x10033EFD: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10033F01: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10033F0D; /* 0x10033F02: jne 0x10033f0d */
L_10033F04:
    eax = MEM32(esi); /* 0x10033F04: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10033F06: mov ecx, esi */
    edi = POP32_VAL(esp); /* 0x10033F08: pop edi */
    esi = POP32_VAL(esp); /* 0x10033F09: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
L_10033F0D:
    edi = POP32_VAL(esp); /* 0x10033F0D: pop edi */
    esi = POP32_VAL(esp); /* 0x10033F0E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033F0F: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10033F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033F10u);

    goto L_10033F10;
L_1000ECE0:
    PUSH32(esp, ebp); /* 0x1000ECE0: push ebp */
    ebp = esp; /* 0x1000ECE1: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1000ECE3: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1000ED02; /* 0x1000ECE7: je 0x1000ed02 */
L_1000ECE9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1000ECE9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1000ECEC: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x1000ECEE: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51E4)); /* 0x1000ECF4: call dword ptr [0x100e51e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1000ECFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005DA6B; /* 0x1000ECFC: je 0x1005da6b */
L_1000ED02:
    ebp = POP32_VAL(esp); /* 0x1000ED02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1000ED03: ret  */
L_10033F10:
    PUSH32(esp, ebp); /* 0x10033F10: push ebp */
    ebp = esp; /* 0x10033F11: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10033F13: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033E44); /* 0x10033F16: call 0x10033e44 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10033F1B: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1000ECE0; /* 0x10033F1C: jmp 0x1000ece0 */
L_1005DA6B:
    PUSH32(esp, esi); /* 0x1005DA6B: push esi */
    RECOMP_CALL(sub_1001177D); /* 0x1005DA6C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005DA71: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005DA73: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005DA79: push eax */
    RECOMP_CALL(sub_1001E482); /* 0x1005DA7A: call 0x1001e482 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005DA7F: pop ecx */
    MEM32(esi) = eax; /* 0x1005DA80: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x1005DA82: pop esi */
    RECOMP_BACKEDGE();
    goto L_1000ED02; /* 0x1005DA83: jmp 0x1000ed02 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033F3Cu);

L_10033F3C:
    PUSH32(esp, ebp); /* 0x10033F3C: push ebp */
    ebp = esp; /* 0x10033F3D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10033F3F: push ecx */
    eax = ebp + (-0x4); /* 0x10033F40: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10033F43: push eax */
    PUSH32(esp, 0x10033F70u); /* 0x10033F44: push 0x10033f70 */
    PUSH32(esp, 0); /* 0x10033F49: push 0 */
    RECOMP_ICALL(MEM32(0x100E5018)); /* 0x10033F4B: call dword ptr [0x100e5018] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10033F51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033F6C; /* 0x10033F53: je 0x10033f6c */
L_10033F55:
    PUSH32(esp, 0x10033F88u); /* 0x10033F55: push 0x10033f88 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10033F5A: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x10033F5D: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10033F63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033F6C; /* 0x10033F65: je 0x10033f6c */
L_10033F67:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033F67: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10033F6A: call eax */
    RECOMP_FLAGS_IN();
L_10033F6C:
    esp = ebp; /* 0x10033F6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10033F6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033F6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10033F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033F70u);

L_10033F70:
    void_lift_trap(0x10033F70u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10033F71: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10033F74u, "arpl word ptr [eax], ax");
    /* outsd: no port I/O under Win32 */ /* 0x10033F76: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x10033F77: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x10033F7A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x10033F7E: add byte ptr cs:[eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x10033F83: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x6F) = (uint8_t)(MEM8(ebx + 0x6F) + LO8(eax)); /* 0x10033F87: add byte ptr [ebx + 0x6f], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10033FD1; /* 0x10033F8A: jb 0x10033fd1 */
L_10033F8C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10033FF7; /* 0x10033F8C: js 0x10033ff7 */
L_10033F8E:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10033FE0; /* 0x10033F8E: je 0x10033fe0 */
L_10033F90:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034001; /* 0x10033F90: jb 0x10034001 */
L_10033F92:
    void_lift_trap(0x10033F92u, "arpl word ptr [ebp + 0x73], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10033F97; /* 0x10033F95: jae 0x10033f97 */
L_10033F97:
    PUSH32(esp, ebp); /* 0x10033F97: push ebp */
    ebp = esp; /* 0x10033F98: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033F9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033F3C); /* 0x10033F9D: call 0x10033f3c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033FA2: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033FA3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5010)); /* 0x10033FA6: call dword ptr [0x100e5010] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10033FACu, "int3 ");
L_10033FD1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FD1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x43)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x43) = (uint8_t)(MEM8(eax + 0x43) + HI8(eax)); /* 0x10033FD3: add byte ptr [eax + 0x43], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FD6: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM8(ebx + 0x3), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FD8: adc byte ptr [ebx + 3], dl */
      MEM8(ebx + 0x3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(ebx + edx * 2), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FDB: adc byte ptr [ebx + edx*2], ah */
      MEM8(ebx + edx * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FDE: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
L_10033FE0:
    /* cmp MEM32(ebx + eax + 0x10), edx */ /* 0x10033FE0: cmp dword ptr [ebx + eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = MEM8(ebx + 0x3), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE4: sbb byte ptr [ebx + 3], al */
      MEM8(ebx + 0x3) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE7: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x57569090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x57569090) = (uint8_t)(MEM8(eax + 0x57569090) + LO8(edx)); /* 0x10033FF3: add byte ptr [eax + 0x57569090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10033FF9; /* falls through past a gap */
L_10033FF7:
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
L_10033FF9:
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    goto L_10034005; /* falls through past a gap */
L_10034001:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x50u); /* 0x10034001: add al, 0x50 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x10034003: push cs */
    { uint32_t _aa = MEM8(ebx + 0xDF61C35), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034004: adc byte ptr [ebx + 0xdf61c35], cl */
      MEM8(ebx + 0xDF61C35) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1003400A; /* falls through past a gap */
L_10034005:
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    goto L_1003400B; /* falls through past a gap */
L_1003400A:
    { uint32_t _aa = MEM8(ebx + 0x74F685F8), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1003400A: adc byte ptr [ebx + 0x74f685f8], cl */
      MEM8(ebx + 0x74F685F8) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10034010; /* falls through past a gap */
L_1003400B:
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
    goto L_10034011; /* falls through past a gap */
L_10034010:
    { uint32_t _sa = MEM8(ebx + 0xD74003E), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034010: sbb byte ptr [ebx + 0xd74003e], al */
      MEM8(ebx + 0xD74003E) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10034016; /* falls through past a gap */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033F88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033F88u);

L_10033F88:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10033F88: inc ebx */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x10033F89: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10033FD1; /* 0x10033F8A: jb 0x10033fd1 */
L_10033F8C:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10033FF7; /* 0x10033F8C: js 0x10033ff7 */
L_10033F8E:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10033FE0; /* 0x10033F8E: je 0x10033fe0 */
L_10033F90:
    if ((_cf != 0)) goto L_10034001; /* 0x10033F90: jb 0x10034001 */
L_10033F92:
    void_lift_trap(0x10033F92u, "arpl word ptr [ebp + 0x73], sp");
    if ((_cf == 0)) goto L_10033F97; /* 0x10033F95: jae 0x10033f97 */
L_10033F97:
    PUSH32(esp, ebp); /* 0x10033F97: push ebp */
    ebp = esp; /* 0x10033F98: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033F9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033F3C); /* 0x10033F9D: call 0x10033f3c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033FA2: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033FA3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5010)); /* 0x10033FA6: call dword ptr [0x100e5010] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10033FACu, "int3 ");
L_10033FD1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FD1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x43)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x43) = (uint8_t)(MEM8(eax + 0x43) + HI8(eax)); /* 0x10033FD3: add byte ptr [eax + 0x43], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FD6: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM8(ebx + 0x3), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FD8: adc byte ptr [ebx + 3], dl */
      MEM8(ebx + 0x3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(ebx + edx * 2), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FDB: adc byte ptr [ebx + edx*2], ah */
      MEM8(ebx + edx * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FDE: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
L_10033FE0:
    /* cmp MEM32(ebx + eax + 0x10), edx */ /* 0x10033FE0: cmp dword ptr [ebx + eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = MEM8(ebx + 0x3), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE4: sbb byte ptr [ebx + 3], al */
      MEM8(ebx + 0x3) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE7: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x57569090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x57569090) = (uint8_t)(MEM8(eax + 0x57569090) + LO8(edx)); /* 0x10033FF3: add byte ptr [eax + 0x57569090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10033FF9; /* falls through past a gap */
L_10033FF7:
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
L_10033FF9:
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    goto L_10034005; /* falls through past a gap */
L_10034001:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x50u); /* 0x10034001: add al, 0x50 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x10034003: push cs */
    { uint32_t _aa = MEM8(ebx + 0xDF61C35), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034004: adc byte ptr [ebx + 0xdf61c35], cl */
      MEM8(ebx + 0xDF61C35) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1003400A; /* falls through past a gap */
L_10034005:
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    goto L_1003400B; /* falls through past a gap */
L_1003400A:
    { uint32_t _aa = MEM8(ebx + 0x74F685F8), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1003400A: adc byte ptr [ebx + 0x74f685f8], cl */
      MEM8(ebx + 0x74F685F8) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10034010; /* falls through past a gap */
L_1003400B:
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
    goto L_10034011; /* falls through past a gap */
L_10034010:
    { uint32_t _sa = MEM8(ebx + 0xD74003E), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034010: sbb byte ptr [ebx + 0xd74003e], al */
      MEM8(ebx + 0xD74003E) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10034016; /* falls through past a gap */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033F97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033F97u);

L_10033F97:
    PUSH32(esp, ebp); /* 0x10033F97: push ebp */
    ebp = esp; /* 0x10033F98: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033F9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033F3C); /* 0x10033F9D: call 0x10033f3c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10033FA2: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10033FA3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5010)); /* 0x10033FA6: call dword ptr [0x100e5010] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10033FACu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033FAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FADu);

L_10033FAD:
    PUSH32(esp, 0x10033FE8u); /* 0x10033FAD: push 0x10033fe8 */
    PUSH32(esp, 0x10033FD0u); /* 0x10033FB2: push 0x10033fd0 */
    RECOMP_CALL(sub_1001CC50); /* 0x10033FB7: call 0x1001cc50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10033FF0u); /* 0x10033FBC: push 0x10033ff0 */
    PUSH32(esp, 0x10033FECu); /* 0x10033FC1: push 0x10033fec */
    RECOMP_CALL(sub_1001CC50); /* 0x10033FC6: call 0x1001cc50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10033FCB: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10033FCE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10033FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FD0u);

L_10033FD0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FD0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x10033FD4: pushal  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10033FD5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FD6: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM8(ebx + 0x3), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FD8: adc byte ptr [ebx + 3], dl */
      MEM8(ebx + 0x3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(ebx + edx * 2), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FDB: adc byte ptr [ebx + edx*2], ah */
      MEM8(ebx + edx * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10033FDE: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + eax + 0x10), edx */ /* 0x10033FE0: cmp dword ptr [ebx + eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = MEM8(ebx + 0x3), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE4: sbb byte ptr [ebx + 3], al */
      MEM8(ebx + 0x3) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10033FE7: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x57569090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x57569090) = (uint8_t)(MEM8(eax + 0x57569090) + LO8(edx)); /* 0x10033FF3: add byte ptr [eax + 0x57569090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033FE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FE8u);

L_10033FE8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FE8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10033FF4: nop  */
    /* nop */ /* 0x10033FF5: nop  */
    /* nop */ /* 0x10033FF6: nop  */
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033FEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FECu);

L_10033FEC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10033FF4: nop  */
    /* nop */ /* 0x10033FF5: nop  */
    /* nop */ /* 0x10033FF6: nop  */
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FF0u);

L_10033FF0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10033FF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10033FF4: nop  */
    /* nop */ /* 0x10033FF5: nop  */
    /* nop */ /* 0x10033FF6: nop  */
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10033FF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10033FF7u);

L_10033FF7:
    PUSH32(esp, esi); /* 0x10033FF7: push esi */
    PUSH32(esp, edi); /* 0x10033FF8: push edi */
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10033FF9: push dword ptr [0x100e0654] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10033FFF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF61C); /* 0x10034005: mov esi, dword ptr [0x100df61c] */
    edi = eax; /* 0x1003400B: mov edi, eax */
    /* test esi, esi */ /* 0x1003400D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034029; /* 0x1003400F: je 0x10034029 */
L_10034011:
    /* cmp MEM32(esi), 0 */ /* 0x10034011: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034023; /* 0x10034014: je 0x10034023 */
L_10034016:
    PUSH32(esp, MEM32(esi)); /* 0x10034016: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034018: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003401D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003401E: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034011; /* 0x10034021: jne 0x10034011 */
L_10034023:
    esi = MEM32(0x100DF61C); /* 0x10034023: mov esi, dword ptr [0x100df61c] */
L_10034029:
    PUSH32(esp, ebx); /* 0x10034029: push ebx */
    PUSH32(esp, esi); /* 0x1003402A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003402B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF618); /* 0x10034030: mov esi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034036: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF61C) = ebx; /* 0x10034038: mov dword ptr [0x100df61c], ebx */
    ecx = POP32_VAL(esp); /* 0x1003403E: pop ecx */
    /* test esi, esi */ /* 0x1003403F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003405A; /* 0x10034041: je 0x1003405a */
L_10034043:
    /* cmp MEM32(esi), ebx */ /* 0x10034043: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034054; /* 0x10034045: je 0x10034054 */
L_10034047:
    PUSH32(esp, MEM32(esi)); /* 0x10034047: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034049: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003404E: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1003404F: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10034043; /* 0x10034052: jne 0x10034043 */
L_10034054:
    esi = MEM32(0x100DF618); /* 0x10034054: mov esi, dword ptr [0x100df618] */
L_1003405A:
    PUSH32(esp, esi); /* 0x1003405A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003405B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF614)); /* 0x10034060: push dword ptr [0x100df614] */
    MEM32(0x100DF618) = ebx; /* 0x10034066: mov dword ptr [0x100df618], ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003406C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100DF610)); /* 0x10034071: push dword ptr [0x100df610] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10034077: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1003407C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100DF614) = ebx; /* 0x1003407F: mov dword ptr [0x100df614], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10034085: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x100DF610) = ebx; /* 0x10034088: mov dword ptr [0x100df610], ebx */
    /* cmp edi, esi */ /* 0x1003408E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034090: je 0x100340a1 */
L_10034092:
    /* cmp MEM32(0x100E0654), ebx */ /* 0x10034092: cmp dword ptr [0x100e0654], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0654)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340A1; /* 0x10034098: je 0x100340a1 */
L_1003409A:
    PUSH32(esp, edi); /* 0x1003409A: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1003409B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340A0: pop ecx */
L_100340A1:
    PUSH32(esp, esi); /* 0x100340A1: push esi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100340A2: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0654) = eax; /* 0x100340A8: mov dword ptr [0x100e0654], eax */
    eax = MEM32(0x100E0560); /* 0x100340AD: mov eax, dword ptr [0x100e0560] */
    /* test eax, eax */ /* 0x100340B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AEF; /* 0x100340B4: jne 0x10053aef */
L_100340BA:
    eax = MEM32(0x100E0564); /* 0x100340BA: mov eax, dword ptr [0x100e0564] */
    /* test eax, eax */ /* 0x100340BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053AFA; /* 0x100340C1: jne 0x10053afa */
L_100340C7:
    eax = MEM32(0x100DFCA8); /* 0x100340C7: mov eax, dword ptr [0x100dfca8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100340CC: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100340D0: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x100340D1: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340D2: jne 0x100340ef */
L_100340D4:
    eax = MEM32(0x100DFCA8); /* 0x100340D4: mov eax, dword ptr [0x100dfca8] */
    esi = 0x100DFA88u; /* 0x100340D9: mov esi, 0x100dfa88 */
    /* cmp eax, esi */ /* 0x100340DE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100340EF; /* 0x100340E0: je 0x100340ef */
L_100340E2:
    PUSH32(esp, eax); /* 0x100340E2: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100340E3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100340E8: pop ecx */
    MEM32(0x100DFCA8) = esi; /* 0x100340E9: mov dword ptr [0x100dfca8], esi */
L_100340EF:
    edi = POP32_VAL(esp); /* 0x100340EF: pop edi */
    esi = POP32_VAL(esp); /* 0x100340F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100340F1: ret  */
L_100340F2:
    ecx = POP32_VAL(esp); /* 0x100340F2: pop ecx */
    MEM32(0x100E0560) = ebx; /* 0x100340F3: mov dword ptr [0x100e0560], ebx */
    RECOMP_BACKEDGE();
    goto L_100340BA; /* 0x100340F9: jmp 0x100340ba */
L_100340FB:
    ecx = POP32_VAL(esp); /* 0x100340FB: pop ecx */
    MEM32(0x100E0564) = ebx; /* 0x100340FC: mov dword ptr [0x100e0564], ebx */
    RECOMP_BACKEDGE();
    goto L_100340C7; /* 0x10034102: jmp 0x100340c7 */
L_10053AEF:
    PUSH32(esp, eax); /* 0x10053AEF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AF0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340F2; /* 0x10053AF5: jmp 0x100340f2 */
L_10053AFA:
    PUSH32(esp, eax); /* 0x10053AFA: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053AFB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100340FB; /* 0x10053B00: jmp 0x100340fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10034104(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034104u);

L_10034104:
    PUSH32(esp, 1); /* 0x10034104: push 1 */
    PUSH32(esp, 0); /* 0x10034106: push 0 */
    PUSH32(esp, 0); /* 0x10034108: push 0 */
    RECOMP_CALL(sub_10034152); /* 0x1003410A: call 0x10034152 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1003410F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034112: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034113(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034113u);

L_10034113:
    PUSH32(esp, 0); /* 0x10034113: push 0 */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10034115: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    ecx = 0x5A4Du; /* 0x1003411B: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10034120: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003414F; /* 0x10034123: jne 0x1003414f */
L_10034125:
    ecx = MEM32(eax + 0x3C); /* 0x10034125: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10034128: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x1003412A: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003414F; /* 0x10034130: jne 0x1003414f */
L_10034132:
    eax = 0x10Bu; /* 0x10034132: mov eax, 0x10b */
    /* cmp MEM16(ecx + 0x18), LO16(eax) */ /* 0x10034137: cmp word ptr [ecx + 0x18], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003414F; /* 0x1003413B: jne 0x1003414f */
L_1003413D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003413D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x74), 0xEu */ /* 0x1003413F: cmp dword ptr [ecx + 0x74], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1003414E; /* 0x10034143: jbe 0x1003414e */
L_10034145:
    /* cmp MEM32(ecx + 0xE8), eax */ /* 0x10034145: cmp dword ptr [ecx + 0xe8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xE8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1003414B: setne al */
L_1003414E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003414E: ret  */
L_1003414F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003414F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034151: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034152(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034152u);

L_10034152:
    PUSH32(esp, 0x1Cu); /* 0x10034152: push 0x1c */
    PUSH32(esp, 0x10034238u); /* 0x10034154: push 0x10034238 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10034159: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x1003415E: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x10034161: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034172; /* 0x10034163: jne 0x10034172 */
L_10034165:
    RECOMP_CALL(sub_10034113); /* 0x10034165: call 0x10034113 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1003416A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053B1B; /* 0x1003416C: jne 0x10053b1b */
L_10034172:
    PUSH32(esp, 8); /* 0x10034172: push 8 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10034174: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10034179: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1003417A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E1434), 1 */ /* 0x1003417E: cmp dword ptr [0x100e1434], 1 */
    _flag_a = (uint32_t)(MEM32(0x100E1434)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034254; /* 0x10034185: je 0x10034254 */
L_1003418B:
    MEM32(0x100E143C) = 1; /* 0x1003418B: mov dword ptr [0x100e143c], 1 */
    MEM8(0x100E1438) = (uint8_t)(LO8(ebx)); /* 0x10034195: mov byte ptr [0x100e1438], bl */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1003419B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034254; /* 0x1003419F: jne 0x10034254 */
L_100341A5:
    PUSH32(esp, MEM32(0x100E0654)); /* 0x100341A5: push dword ptr [0x100e0654] */
    edi = MEM32(0x100E5004); /* 0x100341AB: mov edi, dword ptr [0x100e5004] */
    RECOMP_ICALL(edi); /* 0x100341B1: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100341B3: mov esi, eax */
    MEM32(ebp + (-0x28)) = esi; /* 0x100341B5: mov dword ptr [ebp - 0x28], esi */
    /* test esi, esi */ /* 0x100341B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034254; /* 0x100341BA: je 0x10034254 */
L_100341C0:
    PUSH32(esp, MEM32(0x100E0650)); /* 0x100341C0: push dword ptr [0x100e0650] */
    RECOMP_ICALL(edi); /* 0x100341C6: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100341C8: mov edi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100341CA: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = edi; /* 0x100341CD: mov dword ptr [ebp - 0x20], edi */
L_100341D0:
    MEM32(ebp + (-0x24)) = edi; /* 0x100341D0: mov dword ptr [ebp - 0x24], edi */
L_100341D3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x100341D3: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = edi; /* 0x100341D6: mov dword ptr [ebp - 0x24], edi */
    /* cmp edi, esi */ /* 0x100341D9: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10034254; /* 0x100341DB: jb 0x10034254 */
L_100341DD:
    PUSH32(esp, 0); /* 0x100341DD: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100341DF: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), eax */ /* 0x100341E5: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100341D3; /* 0x100341E7: je 0x100341d3 */
L_100341E9:
    /* cmp edi, esi */ /* 0x100341E9: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10034254; /* 0x100341EB: jb 0x10034254 */
L_100341ED:
    PUSH32(esp, MEM32(edi)); /* 0x100341ED: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x100341EF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100341F5: mov esi, eax */
    PUSH32(esp, 0); /* 0x100341F7: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x100341F9: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x100341FF: mov dword ptr [edi], eax */
    RECOMP_ICALL(esi); /* 0x10034201: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E0654)); /* 0x10034203: push dword ptr [0x100e0654] */
    esi = MEM32(0x100E5004); /* 0x10034209: mov esi, dword ptr [0x100e5004] */
    RECOMP_ICALL(esi); /* 0x1003420F: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x10034211: mov dword ptr [ebp - 0x2c], eax */
    PUSH32(esp, MEM32(0x100E0650)); /* 0x10034214: push dword ptr [0x100e0650] */
    RECOMP_ICALL(esi); /* 0x1003421A: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x1003421C: mov ecx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x1003421F: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053B29; /* 0x10034222: jne 0x10053b29 */
L_10034228:
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x10034228: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053B29; /* 0x1003422B: jne 0x10053b29 */
L_10034231:
    esi = MEM32(ebp + (-0x28)); /* 0x10034231: mov esi, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_100341D3; /* 0x10034234: jmp 0x100341d3 */
L_10034254:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10034254: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1003427E); /* 0x1003425B: call 0x1003427e */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x10034260: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003428D; /* 0x10034262: jne 0x1003428d */
L_10034264:
    MEM32(0x100E1434) = 1; /* 0x10034264: mov dword ptr [0x100e1434], 1 */
    PUSH32(esp, 8); /* 0x1003426E: push 8 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10034270: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10034275: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10034276: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033F97); /* 0x10034279: call 0x10033f97 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1003427E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034283; /* 0x10034280: jne 0x10034283 */
L_10034282:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034282: ret  */
L_10034283:
    PUSH32(esp, 8); /* 0x10034283: push 8 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10034285: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003428A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10034282; /* 0x1003428B: jmp 0x10034282 */
L_1003428D:
    RECOMP_CALL(sub_1000EDC3); /* 0x1003428D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034292: ret  */
L_10053B1B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10053B1B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10033F3C); /* 0x10053B1E: call 0x10033f3c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053B23: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10034172; /* 0x10053B24: jmp 0x10034172 */
L_10053B29:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10053B29: mov dword ptr [ebp - 0x1c], ecx */
    esi = ecx; /* 0x10053B2C: mov esi, ecx */
    MEM32(ebp + (-0x28)) = esi; /* 0x10053B2E: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x10053B31: mov dword ptr [ebp - 0x20], eax */
    edi = eax; /* 0x10053B34: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_100341D0; /* 0x10053B36: jmp 0x100341d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003427E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003427Eu);

L_1003427E:
    /* test ebx, ebx */ /* 0x1003427E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034283; /* 0x10034280: jne 0x10034283 */
L_10034282:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034282: ret  */
L_10034283:
    PUSH32(esp, 8); /* 0x10034283: push 8 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10034285: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003428A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10034282; /* 0x1003428B: jmp 0x10034282 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10034293(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034293u);

L_10034293:
    PUSH32(esp, ebp); /* 0x10034293: push ebp */
    ebp = esp; /* 0x10034294: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10034296: push 0 */
    PUSH32(esp, 0); /* 0x10034298: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1003429A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10034152); /* 0x1003429D: call 0x10034152 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100342A2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100342A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100342A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100342EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100342ECu);

L_100342EC:
    /* test esi, esi */ /* 0x100342EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053B81; /* 0x100342EE: je 0x10053b81 */
L_100342F4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100342F4: ret  */
L_10053B81:
    /* cmp MEM32(0x100DF9EC), 0xFFFFFFFFu */ /* 0x10053B81: cmp dword ptr [0x100df9ec], -1 */
    _flag_a = (uint32_t)(MEM32(0x100DF9EC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100342F4; /* 0x10053B88: je 0x100342f4 */
L_10053B8E:
    RECOMP_CALL(sub_1007BD0B); /* 0x10053B8E: call 0x1007bd0b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100342F4; /* 0x10053B93: jmp 0x100342f4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10034304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034304u);

L_10034304:
    eax = 0x100DF638u; /* 0x10034304: mov eax, 0x100df638 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034309: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003430A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003430Au);

L_1003430A:
    eax = 0x100DF740u; /* 0x1003430A: mov eax, 0x100df740 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003430F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034360u);

L_10034360:
    PUSH32(esp, 0x10u); /* 0x10034360: push 0x10 */
    PUSH32(esp, 0x10034370u); /* 0x10034362: push 0x10034370 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10034367: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    goto L_10034398; /* 0x1003436C: jmp 0x10034398 */
L_10034398:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10034398: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1003439A: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 1); /* 0x1003439D: push 1 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1003439F: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100343A4: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edi; /* 0x100343A5: and dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100343A8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100343AA:
    MEM32(ebp + (-0x20)) = esi; /* 0x100343AA: mov dword ptr [ebp - 0x20], esi */
    /* cmp esi, MEM32(0x100DFDF0) */ /* 0x100343AD: cmp esi, dword ptr [0x100dfdf0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1003440E; /* 0x100343B3: jge 0x1003440e */
L_100343B5:
    eax = MEM32(0x100DFDF8); /* 0x100343B5: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + esi * 4); /* 0x100343BA: mov eax, dword ptr [eax + esi*4] */
    /* test eax, eax */ /* 0x100343BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100343C4; /* 0x100343BF: jne 0x100343c4 */
L_100343C1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100343C1: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100343AA; /* 0x100343C2: jmp 0x100343aa */
L_100343C4:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x100343C4: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100343C1; /* 0x100343C8: je 0x100343c1 */
L_100343CA:
    PUSH32(esp, eax); /* 0x100343CA: push eax */
    PUSH32(esp, esi); /* 0x100343CB: push esi */
    RECOMP_CALL(sub_100142FC); /* 0x100343CC: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100343D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100343D2: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x100343D3: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(0x100DFDF8); /* 0x100343DA: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + esi * 4); /* 0x100343DF: mov eax, dword ptr [eax + esi*4] */
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x100343E2: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100343F2; /* 0x100343E6: je 0x100343f2 */
L_100343E8:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x100343E8: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100558F6; /* 0x100343EC: jne 0x100558f6 */
L_100343F2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100343F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100343FD); /* 0x100343F6: call 0x100343fd */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100343C1; /* 0x100343FB: jmp 0x100343c1 */
L_1003440E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1003440E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10034422); /* 0x10034415: call 0x10034422 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1003441A: mov eax, edi */
    RECOMP_CALL(sub_1000EDC3); /* 0x1003441C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034421: ret  */
L_100558F6:
    PUSH32(esp, eax); /* 0x100558F6: push eax */
    RECOMP_CALL(sub_10014F4C); /* 0x100558F7: call 0x10014f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100558FC: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100558FD: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100558FE: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    goto L_100343F2; /* 0x10055901: jmp 0x100343f2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100343FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100343FDu);

L_100343FD:
    eax = MEM32(0x100DFDF8); /* 0x100343FD: mov eax, dword ptr [0x100dfdf8] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x10034402: push dword ptr [eax + esi*4] */
    PUSH32(esp, esi); /* 0x10034405: push esi */
    RECOMP_CALL(sub_10020611); /* 0x10034406: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003440B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1003440C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003440D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034422(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034422u);

L_10034422:
    PUSH32(esp, 1); /* 0x10034422: push 1 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10034424: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10034429: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003442A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003442B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003442Bu);

L_1003442B:
    PUSH32(esp, ebp); /* 0x1003442B: push ebp */
    ebp = esp; /* 0x1003442C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1003442E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10034431: push ebx */
    PUSH32(esp, edi); /* 0x10034432: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034433: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10034435: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10034438: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003443A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x1003443C: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x1003443F: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10034440: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10034442: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055985; /* 0x10034445: je 0x10055985 */
L_1003444B:
    eax = MEM32(ebp + 0xC); /* 0x1003444B: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1003444E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1003444F: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10034452: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003445E; /* 0x10034454: je 0x1003445e */
L_10034456:
    /* test esi, esi */ /* 0x10034456: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005599D; /* 0x10034458: je 0x1005599d */
L_1003445E:
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x1003445E: mov dword ptr [ebp - 0x14], 0x42 */
    MEM32(ebp + (-0x18)) = esi; /* 0x10034465: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x10034468: mov dword ptr [ebp - 0x20], esi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1003446B: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100559B5; /* 0x10034470: ja 0x100559b5 */
L_10034476:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10034476: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10034478: mov dword ptr [ebp - 0x1c], eax */
L_1003447B:
    eax = ebp + 0x14; /* 0x1003447B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1003447E: push eax */
    PUSH32(esp, ebx); /* 0x1003447F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10034480: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x10034483: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10034486: push eax */
    RECOMP_CALL(sub_1001D315); /* 0x10034487: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1003448C: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1003448F: mov edi, eax */
    /* test esi, esi */ /* 0x10034491: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100344B7; /* 0x10034493: je 0x100344b7 */
L_10034495:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10034495: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100559C1; /* 0x10034498: js 0x100559c1 */
L_1003449E:
    eax = MEM32(ebp + (-0x20)); /* 0x1003449E: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100344A1: mov byte ptr [eax], bl */
    eax = MEM32(ebp + (-0x20)); /* 0x100344A3: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100344A6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x100344A7: mov dword ptr [ebp - 0x20], eax */
L_100344AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x100344AA: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100559D5; /* 0x100344AD: js 0x100559d5 */
L_100344B3:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100344B3: mov byte ptr [eax], bl */
L_100344B5:
    eax = edi; /* 0x100344B5: mov eax, edi */
L_100344B7:
    esi = POP32_VAL(esp); /* 0x100344B7: pop esi */
L_100344B8:
    edi = POP32_VAL(esp); /* 0x100344B8: pop edi */
    ebx = POP32_VAL(esp); /* 0x100344B9: pop ebx */
    esp = ebp; /* 0x100344BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100344BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100344BD: ret  */
L_10055985:
    RECOMP_CALL(sub_1001177D); /* 0x10055985: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005598A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055990: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055995: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100344B8; /* 0x10055998: jmp 0x100344b8 */
L_1005599D:
    RECOMP_CALL(sub_1001177D); /* 0x1005599D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100559A2: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100559A8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100559AD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100344B7; /* 0x100559B0: jmp 0x100344b7 */
L_100559B5:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x100559B5: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_1003447B; /* 0x100559BC: jmp 0x1003447b */
L_100559C1:
    eax = ebp + (-0x20); /* 0x100559C1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100559C4: push eax */
    PUSH32(esp, ebx); /* 0x100559C5: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x100559C6: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x100559CB: mov eax, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x100559CE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100559CF: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100344AA; /* 0x100559D0: jmp 0x100344aa */
L_100559D5:
    eax = ebp + (-0x20); /* 0x100559D5: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100559D8: push eax */
    PUSH32(esp, ebx); /* 0x100559D9: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x100559DA: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100559DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100559E0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100344B5; /* 0x100559E1: jmp 0x100344b5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100344F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100344F0u);

L_100344F0:
    ecx = MEM32(esp + 0x10); /* 0x100344F0: mov ecx, dword ptr [esp + 0x10] */
    PUSH32(esp, ebx); /* 0x100344F4: push ebx */
    /* test ecx, ecx */ /* 0x100344F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003453F; /* 0x100344F7: je 0x1003453f */
L_100344F9:
    SET_HI8(ebx, MEM8(esp + 0x10)); /* 0x100344F9: mov bh, byte ptr [esp + 0x10] */
    PUSH32(esp, esi); /* 0x100344FD: push esi */
    /* test ecx, 1 */ /* 0x100344FE: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0xC); /* 0x10034504: mov eax, dword ptr [esp + 0xc] */
    esi = MEM32(esp + 0x10); /* 0x10034508: mov esi, dword ptr [esp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034521; /* 0x1003450C: je 0x10034521 */
L_1003450E:
    SET_LO8(ebx, MEM8(esi)); /* 0x1003450E: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034510: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10034513: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x10034515: add eax, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x10034518: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034548; /* 0x1003451A: je 0x10034548 */
L_1003451C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1003451C: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1003453E; /* 0x1003451F: je 0x1003453e */
L_10034521:
    SET_LO8(ebx, MEM8(esi)); /* 0x10034521: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10034523: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x10034526: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034543; /* 0x10034528: je 0x10034543 */
L_1003452A:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1003452A: mov byte ptr [eax], bl */
    SET_LO8(ebx, MEM8(esi + (-0x1))); /* 0x1003452C: mov bl, byte ptr [esi - 1] */
    MEM8(eax + 0x1) = (uint8_t)(LO8(ebx)); /* 0x1003452F: mov byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10034532: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x10034535: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034548; /* 0x10034537: je 0x10034548 */
L_10034539:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x10034539: sub ecx, 2 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10034521; /* 0x1003453C: jne 0x10034521 */
L_1003453E:
    esi = POP32_VAL(esp); /* 0x1003453E: pop esi */
L_1003453F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003453F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10034541: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034542: ret  */
L_10034543:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10034543: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x10034545: add eax, 1 */
    _flag_k = FK_ADD;
L_10034548:
    esi = POP32_VAL(esp); /* 0x10034548: pop esi */
    ebx = POP32_VAL(esp); /* 0x10034549: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003454A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003454B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003454Bu);

L_1003454B:
    PUSH32(esp, ebp); /* 0x1003454B: push ebp */
    ebp = esp; /* 0x1003454C: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1003454E: push edi */
    PUSH32(esp, esi); /* 0x1003454F: push esi */
    PUSH32(esp, ebx); /* 0x10034550: push ebx */
    ecx = MEM32(ebp + 0x10); /* 0x10034551: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x10034554: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003459C; /* 0x10034556: je 0x1003459c */
L_10034558:
    esi = MEM32(ebp + 0x8); /* 0x10034558: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1003455B: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(ebx, 0x41u); /* 0x1003455E: mov bh, 0x41 */
    SET_LO8(ebx, 0x5Au); /* 0x10034560: mov bl, 0x5a */
    SET_HI8(edx, 0x20u); /* 0x10034562: mov dh, 0x20 */
    ecx = ecx; /* 0x10034564: lea ecx, [ecx] */
L_10034566:
    SET_HI8(eax, MEM8(esi)); /* 0x10034566: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034568: add esi, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edi)); /* 0x1003456B: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1003456D: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), LO8(eax) */ /* 0x10034570: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003458C; /* 0x10034572: je 0x1003458c */
L_10034574:
    /* cmp HI8(eax), HI8(ebx) */ /* 0x10034574: cmp ah, bh */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1003457E; /* 0x10034576: jb 0x1003457e */
L_10034578:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x10034578: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1003457E; /* 0x1003457A: ja 0x1003457e */
L_1003457C:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(edx)); /* 0x1003457C: add ah, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1003457E:
    /* cmp LO8(eax), HI8(ebx) */ /* 0x1003457E: cmp al, bh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_10034588; /* 0x10034580: jb 0x10034588 */
L_10034582:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10034582: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_10034588; /* 0x10034584: ja 0x10034588 */
L_10034586:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x10034586: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10034588:
    /* cmp HI8(eax), LO8(eax) */ /* 0x10034588: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10034593; /* 0x1003458A: jne 0x10034593 */
L_1003458C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1003458C: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1003459C; /* 0x1003458F: je 0x1003459c */
L_10034591:
    RECOMP_BACKEDGE();
    goto L_10034566; /* 0x10034591: jmp 0x10034566 */
L_10034593:
    ecx = 0xFFFFFFFFu; /* 0x10034593: mov ecx, 0xffffffff */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1003459C; /* 0x10034598: jb 0x1003459c */
L_1003459A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1003459A: neg ecx */
    _flag_k = FK_CMP;
L_1003459C:
    eax = ecx; /* 0x1003459C: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1003459E: pop ebx */
    esi = POP32_VAL(esp); /* 0x1003459F: pop esi */
    edi = POP32_VAL(esp); /* 0x100345A0: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100345A1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100345A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100345B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100345B3u);

L_100345B3:
    PUSH32(esp, edi); /* 0x100345B3: push edi */
    edi = MEM32(esp + 0x8); /* 0x100345B4: mov edi, dword ptr [esp + 8] */
    goto L_1003461D; /* 0x100345B8: jmp 0x1003461d */
L_1003461D:
    ecx = MEM32(esp + 0xC); /* 0x1003461D: mov ecx, dword ptr [esp + 0xc] */
    /* test ecx, 3 */ /* 0x10034621: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034646; /* 0x10034627: je 0x10034646 */
L_10034629:
    SET_LO8(edx, MEM8(ecx)); /* 0x10034629: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1003462B: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1003462E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034696; /* 0x10034630: je 0x10034696 */
L_10034632:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034632: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10034634: add edi, 1 */
    _flag_k = FK_ADD;
    /* test ecx, 3 */ /* 0x10034637: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034646; /* 0x1003463D: je 0x10034646 */
L_1003463F:
    RECOMP_BACKEDGE();
    goto L_10034629; /* 0x1003463F: jmp 0x10034629 */
L_10034641:
    MEM32(edi) = edx; /* 0x10034641: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10034643: add edi, 4 */
    _flag_k = FK_ADD;
L_10034646:
    edx = 0x7EFEFEFFu; /* 0x10034646: mov edx, 0x7efefeff */
    eax = MEM32(ecx); /* 0x1003464B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1003464D: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1003464F: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x10034652: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx); /* 0x10034654: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10034656: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x10034659: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034641; /* 0x1003465E: je 0x10034641 */
L_10034660:
    /* test LO8(edx), LO8(edx) */ /* 0x10034660: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034696; /* 0x10034662: je 0x10034696 */
L_10034664:
    /* test HI8(edx), HI8(edx) */ /* 0x10034664: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003468D; /* 0x10034666: je 0x1003468d */
L_10034668:
    /* test edx, 0x00FF0000u */ /* 0x10034668: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034680; /* 0x1003466E: je 0x10034680 */
L_10034670:
    /* test edx, 0xFF000000u */ /* 0x10034670: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034641; /* 0x10034676: jne 0x10034641 */
L_10034678:
    MEM32(edi) = edx; /* 0x10034678: mov dword ptr [edi], edx */
    eax = MEM32(esp + 0x8); /* 0x1003467A: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1003467E: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003467F: ret  */
L_10034680:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x10034680: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x8); /* 0x10034683: mov eax, dword ptr [esp + 8] */
    MEM8(edi + 0x2) = (uint8_t)(0); /* 0x10034687: mov byte ptr [edi + 2], 0 */
    edi = POP32_VAL(esp); /* 0x1003468B: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003468C: ret  */
L_1003468D:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x1003468D: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x8); /* 0x10034690: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x10034694: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034695: ret  */
L_10034696:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034696: mov byte ptr [edi], dl */
    eax = MEM32(esp + 0x8); /* 0x10034698: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1003469C: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003469D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100345BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100345BAu);

L_100345BA:
    ecx = MEM32(esp + 0x4); /* 0x100345BA: mov ecx, dword ptr [esp + 4] */
    PUSH32(esp, edi); /* 0x100345BE: push edi */
    /* test ecx, 3 */ /* 0x100345BF: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100345DA; /* 0x100345C5: je 0x100345da */
L_100345C7:
    SET_LO8(eax, MEM8(ecx)); /* 0x100345C7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x100345C9: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x100345CC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003460B; /* 0x100345CE: je 0x1003460b */
L_100345D0:
    /* test ecx, 3 */ /* 0x100345D0: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100345C7; /* 0x100345D6: jne 0x100345c7 */
L_100345D8:
    edi = edi; /* 0x100345D8: mov edi, edi */
L_100345DA:
    eax = MEM32(ecx); /* 0x100345DA: mov eax, dword ptr [ecx] */
    edx = 0x7EFEFEFFu; /* 0x100345DC: mov edx, 0x7efefeff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100345E1: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100345E3: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100345E6: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x100345E8: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x100345EB: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100345DA; /* 0x100345F0: je 0x100345da */
L_100345F2:
    eax = MEM32(ecx + (-0x4)); /* 0x100345F2: mov eax, dword ptr [ecx - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x100345F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003461A; /* 0x100345F7: je 0x1003461a */
L_100345F9:
    /* test HI8(eax), HI8(eax) */ /* 0x100345F9: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034615; /* 0x100345FB: je 0x10034615 */
L_100345FD:
    /* test eax, 0x00FF0000u */ /* 0x100345FD: test eax, 0xff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034610; /* 0x10034602: je 0x10034610 */
L_10034604:
    /* test eax, 0xFF000000u */ /* 0x10034604: test eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100345DA; /* 0x10034609: jne 0x100345da */
L_1003460B:
    edi = ecx + (-0x1); /* 0x1003460B: lea edi, [ecx - 1] */
    goto L_1003461D; /* 0x1003460E: jmp 0x1003461d */
L_10034610:
    edi = ecx + (-0x2); /* 0x10034610: lea edi, [ecx - 2] */
    goto L_1003461D; /* 0x10034613: jmp 0x1003461d */
L_10034615:
    edi = ecx + (-0x3); /* 0x10034615: lea edi, [ecx - 3] */
    goto L_1003461D; /* 0x10034618: jmp 0x1003461d */
L_1003461A:
    edi = ecx + (-0x4); /* 0x1003461A: lea edi, [ecx - 4] */
L_1003461D:
    ecx = MEM32(esp + 0xC); /* 0x1003461D: mov ecx, dword ptr [esp + 0xc] */
    /* test ecx, 3 */ /* 0x10034621: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034646; /* 0x10034627: je 0x10034646 */
L_10034629:
    SET_LO8(edx, MEM8(ecx)); /* 0x10034629: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1003462B: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1003462E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034696; /* 0x10034630: je 0x10034696 */
L_10034632:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034632: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10034634: add edi, 1 */
    _flag_k = FK_ADD;
    /* test ecx, 3 */ /* 0x10034637: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034646; /* 0x1003463D: je 0x10034646 */
L_1003463F:
    RECOMP_BACKEDGE();
    goto L_10034629; /* 0x1003463F: jmp 0x10034629 */
L_10034641:
    MEM32(edi) = edx; /* 0x10034641: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10034643: add edi, 4 */
    _flag_k = FK_ADD;
L_10034646:
    edx = 0x7EFEFEFFu; /* 0x10034646: mov edx, 0x7efefeff */
    eax = MEM32(ecx); /* 0x1003464B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1003464D: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1003464F: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x10034652: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx); /* 0x10034654: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10034656: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x10034659: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034641; /* 0x1003465E: je 0x10034641 */
L_10034660:
    /* test LO8(edx), LO8(edx) */ /* 0x10034660: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034696; /* 0x10034662: je 0x10034696 */
L_10034664:
    /* test HI8(edx), HI8(edx) */ /* 0x10034664: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003468D; /* 0x10034666: je 0x1003468d */
L_10034668:
    /* test edx, 0x00FF0000u */ /* 0x10034668: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034680; /* 0x1003466E: je 0x10034680 */
L_10034670:
    /* test edx, 0xFF000000u */ /* 0x10034670: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034641; /* 0x10034676: jne 0x10034641 */
L_10034678:
    MEM32(edi) = edx; /* 0x10034678: mov dword ptr [edi], edx */
    eax = MEM32(esp + 0x8); /* 0x1003467A: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1003467E: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003467F: ret  */
L_10034680:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x10034680: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x8); /* 0x10034683: mov eax, dword ptr [esp + 8] */
    MEM8(edi + 0x2) = (uint8_t)(0); /* 0x10034687: mov byte ptr [edi + 2], 0 */
    edi = POP32_VAL(esp); /* 0x1003468B: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003468C: ret  */
L_1003468D:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x1003468D: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x8); /* 0x10034690: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x10034694: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034695: ret  */
L_10034696:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034696: mov byte ptr [edi], dl */
    eax = MEM32(esp + 0x8); /* 0x10034698: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1003469C: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003469D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034761(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034761u);

L_10034761:
    PUSH32(esp, ebp); /* 0x10034761: push ebp */
    ebp = esp; /* 0x10034762: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10034764: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034765: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10034767: push eax */
    PUSH32(esp, eax); /* 0x10034768: push eax */
    PUSH32(esp, eax); /* 0x10034769: push eax */
    PUSH32(esp, eax); /* 0x1003476A: push eax */
    PUSH32(esp, eax); /* 0x1003476B: push eax */
    PUSH32(esp, eax); /* 0x1003476C: push eax */
    PUSH32(esp, eax); /* 0x1003476D: push eax */
    PUSH32(esp, eax); /* 0x1003476E: push eax */
    edx = MEM32(ebp + 0xC); /* 0x1003476F: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x10034772: lea ecx, [ecx] */
L_10034774:
    SET_LO8(eax, MEM8(edx)); /* 0x10034774: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x10034776: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034783; /* 0x10034778: je 0x10034783 */
L_1003477A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1003477A: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1003477D: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x1003477D: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_10034774; /* 0x10034781: jmp 0x10034774 */
L_10034783:
    esi = MEM32(ebp + 0x8); /* 0x10034783: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10034786: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x10034789: lea ecx, [ecx] */
L_1003478B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1003478B: add ecx, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x1003478E: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x10034790: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003479D; /* 0x10034792: je 0x1003479d */
L_10034794:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034794: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x10034797: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if ((!BT_CF(_flag_a, _flag_b))) goto L_1003478B; /* 0x1003479B: jae 0x1003478b */
L_1003479D:
    eax = ecx; /* 0x1003479D: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1003479F: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100347A2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100347A3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100347A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100347A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100347A5u);

L_100347A5:
    ecx = MEM32(esp + 0xC); /* 0x100347A5: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, edi); /* 0x100347A9: push edi */
    /* test ecx, ecx */ /* 0x100347AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034869; /* 0x100347AC: je 0x10034869 */
L_100347B2:
    edi = MEM32(esp + 0x8); /* 0x100347B2: mov edi, dword ptr [esp + 8] */
    PUSH32(esp, esi); /* 0x100347B6: push esi */
    /* test edi, 3 */ /* 0x100347B7: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100347BD: push ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100347D1; /* 0x100347BE: je 0x100347d1 */
L_100347C0:
    SET_LO8(eax, MEM8(edi)); /* 0x100347C0: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x100347C2: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x100347C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034802; /* 0x100347C7: je 0x10034802 */
L_100347C9:
    /* test edi, 3 */ /* 0x100347C9: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100347C0; /* 0x100347CF: jne 0x100347c0 */
L_100347D1:
    eax = MEM32(edi); /* 0x100347D1: mov eax, dword ptr [edi] */
    edx = 0x7EFEFEFFu; /* 0x100347D3: mov edx, 0x7efefeff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100347D8: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100347DA: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100347DD: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x100347DF: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x100347E2: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100347D1; /* 0x100347E7: je 0x100347d1 */
L_100347E9:
    eax = MEM32(edi + (-0x4)); /* 0x100347E9: mov eax, dword ptr [edi - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x100347EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034811; /* 0x100347EE: je 0x10034811 */
L_100347F0:
    /* test HI8(eax), HI8(eax) */ /* 0x100347F0: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003480C; /* 0x100347F2: je 0x1003480c */
L_100347F4:
    /* test eax, 0x00FF0000u */ /* 0x100347F4: test eax, 0xff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034807; /* 0x100347F9: je 0x10034807 */
L_100347FB:
    /* test eax, 0xFF000000u */ /* 0x100347FB: test eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100347D1; /* 0x10034800: jne 0x100347d1 */
L_10034802:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x10034802: sub edi, 1 */
    _flag_k = FK_CMP;
    goto L_10034814; /* 0x10034805: jmp 0x10034814 */
L_10034807:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x10034807: sub edi, 2 */
    _flag_k = FK_CMP;
    goto L_10034814; /* 0x1003480A: jmp 0x10034814 */
L_1003480C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x1003480C: sub edi, 3 */
    _flag_k = FK_CMP;
    goto L_10034814; /* 0x1003480F: jmp 0x10034814 */
L_10034811:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x10034811: sub edi, 4 */
    _flag_k = FK_CMP;
L_10034814:
    esi = MEM32(esp + 0x14); /* 0x10034814: mov esi, dword ptr [esp + 0x14] */
    /* test esi, 3 */ /* 0x10034818: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034829; /* 0x1003481E: jne 0x10034829 */
L_10034820:
    ebx = ecx; /* 0x10034820: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x10034822: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x10034822: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1003484B; /* 0x10034825: je 0x1003484b */
L_10034827:
    goto L_10034883; /* 0x10034827: jmp 0x10034883 */
L_10034829:
    SET_LO8(edx, MEM8(esi)); /* 0x10034829: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1003482B: add esi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1003482E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003486F; /* 0x10034830: je 0x1003486f */
L_10034832:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034832: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10034834: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x10034837: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10034865; /* 0x1003483A: je 0x10034865 */
L_1003483C:
    /* test esi, 3 */ /* 0x1003483C: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034829; /* 0x10034842: jne 0x10034829 */
L_10034844:
    ebx = ecx; /* 0x10034844: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x10034846: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x10034846: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10034883; /* 0x10034849: jne 0x10034883 */
L_1003484B:
    ecx = ebx; /* 0x1003484B: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1003484D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034865; /* 0x10034850: je 0x10034865 */
L_10034852:
    SET_LO8(edx, MEM8(esi)); /* 0x10034852: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034854: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10034857: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10034859: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1003485C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034867; /* 0x1003485E: je 0x10034867 */
L_10034860:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x10034860: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10034852; /* 0x10034863: jne 0x10034852 */
L_10034865:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x10034865: mov byte ptr [edi], cl */
L_10034867:
    ebx = POP32_VAL(esp); /* 0x10034867: pop ebx */
    esi = POP32_VAL(esp); /* 0x10034868: pop esi */
L_10034869:
    eax = MEM32(esp + 0x8); /* 0x10034869: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1003486D: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003486E: ret  */
L_1003486F:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1003486F: mov byte ptr [edi], dl */
    eax = MEM32(esp + 0x10); /* 0x10034871: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x10034875: pop ebx */
    esi = POP32_VAL(esp); /* 0x10034876: pop esi */
    edi = POP32_VAL(esp); /* 0x10034877: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034878: ret  */
L_10034879:
    MEM32(edi) = edx; /* 0x10034879: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1003487B: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1003487E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1003484B; /* 0x10034881: je 0x1003484b */
L_10034883:
    edx = 0x7EFEFEFFu; /* 0x10034883: mov edx, 0x7efefeff */
    eax = MEM32(esi); /* 0x10034888: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1003488A: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1003488C: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1003488F: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x10034891: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10034893: add esi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x10034896: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034879; /* 0x1003489B: je 0x10034879 */
L_1003489D:
    /* test LO8(edx), LO8(edx) */ /* 0x1003489D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003486F; /* 0x1003489F: je 0x1003486f */
L_100348A1:
    /* test HI8(edx), HI8(edx) */ /* 0x100348A1: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100348CF; /* 0x100348A3: je 0x100348cf */
L_100348A5:
    /* test edx, 0x00FF0000u */ /* 0x100348A5: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100348BF; /* 0x100348AB: je 0x100348bf */
L_100348AD:
    /* test edx, 0xFF000000u */ /* 0x100348AD: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034879; /* 0x100348B3: jne 0x10034879 */
L_100348B5:
    MEM32(edi) = edx; /* 0x100348B5: mov dword ptr [edi], edx */
    eax = MEM32(esp + 0x10); /* 0x100348B7: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x100348BB: pop ebx */
    esi = POP32_VAL(esp); /* 0x100348BC: pop esi */
    edi = POP32_VAL(esp); /* 0x100348BD: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100348BE: ret  */
L_100348BF:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x100348BF: mov word ptr [edi], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100348C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x10); /* 0x100348C4: mov eax, dword ptr [esp + 0x10] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(edx)); /* 0x100348C8: mov byte ptr [edi + 2], dl */
    ebx = POP32_VAL(esp); /* 0x100348CB: pop ebx */
    esi = POP32_VAL(esp); /* 0x100348CC: pop esi */
    edi = POP32_VAL(esp); /* 0x100348CD: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100348CE: ret  */
L_100348CF:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x100348CF: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x10); /* 0x100348D2: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x100348D6: pop ebx */
    esi = POP32_VAL(esp); /* 0x100348D7: pop esi */
    edi = POP32_VAL(esp); /* 0x100348D8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100348D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034960u);

L_10034960:
    PUSH32(esp, ebp); /* 0x10034960: push ebp */
    ebp = esp; /* 0x10034961: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10034963: push edi */
    PUSH32(esp, ebx); /* 0x10034964: push ebx */
    edi = MEM32(ebp + 0x8); /* 0x10034965: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x10034968: mov edx, edi */
    ebx = MEM32(ebp + 0x10); /* 0x1003496A: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003496D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1003496F: mov ecx, ebx */
    if (ecx == 0) goto L_10034985; /* 0x10034971: jecxz 0x10034985 */
L_10034973:
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x10034973: repne scasb al, byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1003497A; /* 0x10034975: jne 0x1003497a */
L_10034977:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10034977: add ecx, 1 */
    _flag_k = FK_ADD;
L_1003497A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1003497A: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1003497C: mov ecx, ebx */
    edi = edx; /* 0x1003497E: mov edi, edx */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10034980: mov al, byte ptr [ebp + 0xc] */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x10034983: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_10034985:
    eax = edx; /* 0x10034985: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x10034987: pop ebx */
    edi = POP32_VAL(esp); /* 0x10034988: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034989: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003498A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003498B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003498Bu);

L_1003498B:
    PUSH32(esp, ebp); /* 0x1003498B: push ebp */
    ebp = esp; /* 0x1003498C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1003498E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003498F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10034991: push eax */
    PUSH32(esp, eax); /* 0x10034992: push eax */
    PUSH32(esp, eax); /* 0x10034993: push eax */
    PUSH32(esp, eax); /* 0x10034994: push eax */
    PUSH32(esp, eax); /* 0x10034995: push eax */
    PUSH32(esp, eax); /* 0x10034996: push eax */
    PUSH32(esp, eax); /* 0x10034997: push eax */
    PUSH32(esp, eax); /* 0x10034998: push eax */
    edx = MEM32(ebp + 0xC); /* 0x10034999: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x1003499C: lea ecx, [ecx] */
L_1003499E:
    SET_LO8(eax, MEM8(edx)); /* 0x1003499E: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x100349A0: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100349AD; /* 0x100349A2: je 0x100349ad */
L_100349A4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x100349A4: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x100349A7: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x100349A7: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_1003499E; /* 0x100349AB: jmp 0x1003499e */
L_100349AD:
    esi = MEM32(ebp + 0x8); /* 0x100349AD: mov esi, dword ptr [ebp + 8] */
    edi = edi; /* 0x100349B0: mov edi, edi */
L_100349B2:
    SET_LO8(eax, MEM8(esi)); /* 0x100349B2: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x100349B4: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100349C4; /* 0x100349B6: je 0x100349c4 */
L_100349B8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x100349B8: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x100349BB: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if ((!BT_CF(_flag_a, _flag_b))) goto L_100349B2; /* 0x100349BF: jae 0x100349b2 */
L_100349C1:
    eax = esi + (-0x1); /* 0x100349C1: lea eax, [esi - 1] */
L_100349C4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100349C4: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100349C7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100349C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100349C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034A74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034A74u);

L_10034A74:
    PUSH32(esp, ebp); /* 0x10034A74: push ebp */
    ebp = esp; /* 0x10034A75: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10034A77: push edi */
    PUSH32(esp, esi); /* 0x10034A78: push esi */
    edi = MEM32(ebp + 0x8); /* 0x10034A79: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x10034A7C: mov edx, edi */
    esi = edi; /* 0x10034A7E: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034A80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10034A82: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x10034A85: repne scasb al, byte ptr es:[edi] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10034A87: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034AA3; /* 0x10034A8A: je 0x10034aa3 */
L_10034A8C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x10034A8C: sub edi, 2 */
    _flag_k = FK_CMP;
L_10034A8F:
    /* cmp esi, edi */ /* 0x10034A8F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10034AA3; /* 0x10034A91: jae 0x10034aa3 */
L_10034A93:
    SET_HI8(eax, MEM8(esi)); /* 0x10034A93: mov ah, byte ptr [esi] */
    SET_LO8(eax, MEM8(edi)); /* 0x10034A95: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x10034A97: mov byte ptr [esi], al */
    MEM8(edi) = (uint8_t)(HI8(eax)); /* 0x10034A99: mov byte ptr [edi], ah */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034A9B: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x10034A9E: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10034A8F; /* 0x10034AA1: jmp 0x10034a8f */
L_10034AA3:
    eax = edx; /* 0x10034AA3: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x10034AA5: pop esi */
    edi = POP32_VAL(esp); /* 0x10034AA6: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034AA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034AA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034AA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034AA9u);

L_10034AA9:
    PUSH32(esp, ebp); /* 0x10034AA9: push ebp */
    ebp = esp; /* 0x10034AAA: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10034AAC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10034AAD: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x10034AB0: mov edx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034AB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10034AB4: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x10034AB7: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10034AB9: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10034ABC: neg ecx */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10034ABE: mov al, byte ptr [ebp + 0xc] */
    edi = edx; /* 0x10034AC1: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x10034AC3: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x10034AC5: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x10034AC7: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034AC8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034AC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034ACA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034ACAu);

L_10034ACA:
    PUSH32(esp, ebp); /* 0x10034ACA: push ebp */
    ebp = esp; /* 0x10034ACB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10034ACD: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034ACE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10034AD0: push eax */
    PUSH32(esp, eax); /* 0x10034AD1: push eax */
    PUSH32(esp, eax); /* 0x10034AD2: push eax */
    PUSH32(esp, eax); /* 0x10034AD3: push eax */
    PUSH32(esp, eax); /* 0x10034AD4: push eax */
    PUSH32(esp, eax); /* 0x10034AD5: push eax */
    PUSH32(esp, eax); /* 0x10034AD6: push eax */
    PUSH32(esp, eax); /* 0x10034AD7: push eax */
    edx = MEM32(ebp + 0xC); /* 0x10034AD8: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x10034ADB: lea ecx, [ecx] */
L_10034ADD:
    SET_LO8(eax, MEM8(edx)); /* 0x10034ADD: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x10034ADF: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034AEC; /* 0x10034AE1: je 0x10034aec */
L_10034AE3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10034AE3: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x10034AE6: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x10034AE6: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_10034ADD; /* 0x10034AEA: jmp 0x10034add */
L_10034AEC:
    esi = MEM32(ebp + 0x8); /* 0x10034AEC: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10034AEF: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x10034AF2: lea ecx, [ecx] */
L_10034AF4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10034AF4: add ecx, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x10034AF7: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x10034AF9: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034B06; /* 0x10034AFB: je 0x10034b06 */
L_10034AFD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x10034AFD: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x10034B00: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if (BT_CF(_flag_a, _flag_b)) goto L_10034AF4; /* 0x10034B04: jb 0x10034af4 */
L_10034B06:
    eax = ecx; /* 0x10034B06: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x10034B08: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x10034B0B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034B0C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034B0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034CDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034CDEu);

L_10034CDE:
    PUSH32(esp, edi); /* 0x10034CDE: push edi */
    PUSH32(esp, esi); /* 0x10034CDF: push esi */
    PUSH32(esp, ebp); /* 0x10034CE0: push ebp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10034CE1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebp = 0; /* 0x10034CE3: xor ebp, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x14); /* 0x10034CE5: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034CE9: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10034D02; /* 0x10034CEB: jge 0x10034d02 */
L_10034CED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10034CED: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10034CEE: inc ebp */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x10); /* 0x10034CEF: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034CF3: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034CF5: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034CF7: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x14) = eax; /* 0x10034CFA: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x10) = edx; /* 0x10034CFE: mov dword ptr [esp + 0x10], edx */
L_10034D02:
    eax = MEM32(esp + 0x1C); /* 0x10034D02: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034D06: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10034D1E; /* 0x10034D08: jge 0x10034d1e */
L_10034D0A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10034D0A: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x18); /* 0x10034D0B: mov edx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034D0F: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034D11: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034D13: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x1C) = eax; /* 0x10034D16: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x18) = edx; /* 0x10034D1A: mov dword ptr [esp + 0x18], edx */
L_10034D1E:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034D1E: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034D4A; /* 0x10034D20: jne 0x10034d4a */
L_10034D22:
    ecx = MEM32(esp + 0x18); /* 0x10034D22: mov ecx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14); /* 0x10034D26: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034D2A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034D2C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x10034D2E: mov ebx, eax */
    eax = MEM32(esp + 0x10); /* 0x10034D30: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034D34: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x10034D36: mov esi, eax */
    eax = ebx; /* 0x10034D38: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x10034D3A: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x10034D3E: mov ecx, eax */
    eax = esi; /* 0x10034D40: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x10034D42: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034D46: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_10034D91; /* 0x10034D48: jmp 0x10034d91 */
L_10034D4A:
    ebx = eax; /* 0x10034D4A: mov ebx, eax */
    ecx = MEM32(esp + 0x18); /* 0x10034D4C: mov ecx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x14); /* 0x10034D50: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x10034D54: mov eax, dword ptr [esp + 0x10] */
L_10034D58:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10034D58: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10034D58: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x10034D5A: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10034D5C: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10034D5C: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x10034D5E: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x10034D60: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034D58; /* 0x10034D62: jne 0x10034d58 */
L_10034D64:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034D64: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x10034D66: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x1C)); /* 0x10034D68: mul dword ptr [esp + 0x1c] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x10034D6C: mov ecx, eax */
    eax = MEM32(esp + 0x18); /* 0x10034D6E: mov eax, dword ptr [esp + 0x18] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x10034D72: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034D74: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034D86; /* 0x10034D76: jb 0x10034d86 */
L_10034D78:
    /* cmp edx, MEM32(esp + 0x14) */ /* 0x10034D78: cmp edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034D86; /* 0x10034D7C: ja 0x10034d86 */
L_10034D7E:
    if (CMP_B(_flag_a, _flag_b)) goto L_10034D8F; /* 0x10034D7E: jb 0x10034d8f */
L_10034D80:
    /* cmp eax, MEM32(esp + 0x10) */ /* 0x10034D80: cmp eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034D8F; /* 0x10034D84: jbe 0x10034d8f */
L_10034D86:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10034D86: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x18); /* 0x10034D87: sub eax, dword ptr [esp + 0x18] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x1C), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034D8B: sbb edx, dword ptr [esp + 0x1c] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034D8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10034D8F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10034D91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x10034D91: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034D95: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x10034D99: dec ebp */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10034DA3; /* 0x10034D9A: jns 0x10034da3 */
L_10034D9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034D9C: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034D9E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034DA0: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034DA3:
    ecx = edx; /* 0x10034DA3: mov ecx, edx */
    edx = ebx; /* 0x10034DA5: mov edx, ebx */
    ebx = ecx; /* 0x10034DA7: mov ebx, ecx */
    ecx = eax; /* 0x10034DA9: mov ecx, eax */
    eax = esi; /* 0x10034DAB: mov eax, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10034DAD: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10034DB7; /* 0x10034DAE: jne 0x10034db7 */
L_10034DB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034DB0: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034DB2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034DB4: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034DB7:
    ebp = POP32_VAL(esp); /* 0x10034DB7: pop ebp */
    esi = POP32_VAL(esp); /* 0x10034DB8: pop esi */
    edi = POP32_VAL(esp); /* 0x10034DB9: pop edi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10034DBA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10034DBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034DBDu);

L_10034DBD:
    PUSH32(esp, ebx); /* 0x10034DBD: push ebx */
    PUSH32(esp, edi); /* 0x10034DBE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10034DBF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x10); /* 0x10034DC1: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034DC5: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10034DDD; /* 0x10034DC7: jge 0x10034ddd */
L_10034DC9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10034DC9: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0xC); /* 0x10034DCA: mov edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034DCE: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034DD0: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034DD2: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x10) = eax; /* 0x10034DD5: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0xC) = edx; /* 0x10034DD9: mov dword ptr [esp + 0xc], edx */
L_10034DDD:
    eax = MEM32(esp + 0x18); /* 0x10034DDD: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034DE1: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10034DF8; /* 0x10034DE3: jge 0x10034df8 */
L_10034DE5:
    edx = MEM32(esp + 0x14); /* 0x10034DE5: mov edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034DE9: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034DEB: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034DED: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x18) = eax; /* 0x10034DF0: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = edx; /* 0x10034DF4: mov dword ptr [esp + 0x14], edx */
L_10034DF8:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034DF8: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034E17; /* 0x10034DFA: jne 0x10034e17 */
L_10034DFC:
    ecx = MEM32(esp + 0x14); /* 0x10034DFC: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x10034E00: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034E04: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034E06: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esp + 0xC); /* 0x10034E08: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034E0C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x10034E0E: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034E10: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10034E12: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10034E6A; /* 0x10034E13: js 0x10034e6a */
L_10034E15:
    goto L_10034E63; /* 0x10034E15: jmp 0x10034e63 */
L_10034E17:
    ebx = eax; /* 0x10034E17: mov ebx, eax */
    ecx = MEM32(esp + 0x14); /* 0x10034E19: mov ecx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x10034E1D: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x10034E21: mov eax, dword ptr [esp + 0xc] */
L_10034E25:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10034E25: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10034E25: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x10034E27: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10034E29: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10034E29: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x10034E2B: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x10034E2D: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034E25; /* 0x10034E2F: jne 0x10034e25 */
L_10034E31:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034E31: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x10034E33: mov ecx, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x10034E35: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    { uint32_t _tmp = ecx; /* 0x10034E39: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x10034E3A: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034E3E: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034E50; /* 0x10034E40: jb 0x10034e50 */
L_10034E42:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x10034E42: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034E50; /* 0x10034E46: ja 0x10034e50 */
L_10034E48:
    if (CMP_B(_flag_a, _flag_b)) goto L_10034E58; /* 0x10034E48: jb 0x10034e58 */
L_10034E4A:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x10034E4A: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034E58; /* 0x10034E4E: jbe 0x10034e58 */
L_10034E50:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x14); /* 0x10034E50: sub eax, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x18), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034E54: sbb edx, dword ptr [esp + 0x18] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034E58:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0xC); /* 0x10034E58: sub eax, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x10), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034E5C: sbb edx, dword ptr [esp + 0x10] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10034E60: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10034E6A; /* 0x10034E61: jns 0x10034e6a */
L_10034E63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034E63: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034E65: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034E67: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034E6A:
    edi = POP32_VAL(esp); /* 0x10034E6A: pop edi */
    ebx = POP32_VAL(esp); /* 0x10034E6B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10034E6C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10034E6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034E6Fu);

L_10034E6F:
    /* cmp LO8(ecx), 0x40u */ /* 0x10034E6F: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10034E89; /* 0x10034E72: jae 0x10034e89 */
L_10034E74:
    /* cmp LO8(ecx), 0x20u */ /* 0x10034E74: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10034E7F; /* 0x10034E77: jae 0x10034e7f */
L_10034E79:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10034E79: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10034E7C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10034E7C: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034E7E: ret  */
L_10034E7F:
    edx = eax; /* 0x10034E7F: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034E81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x10034E83: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10034E86: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x10034E86: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034E88: ret  */
L_10034E89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034E89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034E8B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034E8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10034F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034F20u);

L_10034F20:
    PUSH32(esp, ebx); /* 0x10034F20: push ebx */
    eax = MEM32(esp + 0x14); /* 0x10034F21: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10034F25: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034F41; /* 0x10034F27: jne 0x10034f41 */
L_10034F29:
    ecx = MEM32(esp + 0x10); /* 0x10034F29: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x10034F2D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034F31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034F33: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esp + 0x8); /* 0x10034F35: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034F39: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x10034F3B: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034F3D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10034F91; /* 0x10034F3F: jmp 0x10034f91 */
L_10034F41:
    ecx = eax; /* 0x10034F41: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x10034F43: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x10034F47: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x10034F4B: mov eax, dword ptr [esp + 8] */
L_10034F4F:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10034F4F: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x10034F4F: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x10034F51: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10034F53: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10034F53: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x10034F55: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x10034F57: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034F4F; /* 0x10034F59: jne 0x10034f4f */
L_10034F5B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x10034F5B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x10034F5D: mov ecx, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x10034F5F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    { uint32_t _tmp = ecx; /* 0x10034F63: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x10034F64: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034F68: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034F7A; /* 0x10034F6A: jb 0x10034f7a */
L_10034F6C:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x10034F6C: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034F7A; /* 0x10034F70: ja 0x10034f7a */
L_10034F72:
    if (CMP_B(_flag_a, _flag_b)) goto L_10034F82; /* 0x10034F72: jb 0x10034f82 */
L_10034F74:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x10034F74: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034F82; /* 0x10034F78: jbe 0x10034f82 */
L_10034F7A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x10034F7A: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034F7E: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034F82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x10034F82: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034F86: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034F8A: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034F8C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034F8E: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10034F91:
    ebx = POP32_VAL(esp); /* 0x10034F91: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10034F92: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10034F95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10034F95u);

L_10034F95:
    /* cmp LO8(ecx), 0x40u */ /* 0x10034F95: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10034FAF; /* 0x10034F98: jae 0x10034faf */
L_10034F9A:
    /* cmp LO8(ecx), 0x20u */ /* 0x10034F9A: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10034FA5; /* 0x10034F9D: jae 0x10034fa5 */
L_10034F9F:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10034F9F: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10034FA2: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x10034FA2: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034FA4: ret  */
L_10034FA5:
    eax = edx; /* 0x10034FA5: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034FA7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x10034FA9: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10034FAC: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x10034FAC: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034FAE: ret  */
L_10034FAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034FAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034FB1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034FB3: ret  */
    RECOMP_REGS_OUT();
}
