#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170462DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170462DFu);

L_170462DF:
    eax = 0x1721BF67u; /* 0x170462DF: mov eax, 0x1721bf67 */
    RECOMP_CALL(sub_1721B168); /* 0x170462E4: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x170462E9: push ebx */
    PUSH32(esp, esi); /* 0x170462EA: push esi */
    PUSH32(esp, edi); /* 0x170462EB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170462EC: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x170462EF: mov eax, edi */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x170462F1: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x170462F1: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x170462F4: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170462F7: push eax */
    esi = ecx; /* 0x170462F8: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x170462FA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170462FF: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17046301: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17046303: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17046317; /* 0x17046304: je 0x17046317 */
L_17046306:
    SET_LO8(ecx, LO8(ebx)); /* 0x17046306: mov cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xFu); /* 0x17046308: and cl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, 0x10u); /* 0x1704630B: mov al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(ecx)); /* 0x1704630D: sub al, cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO8(eax); /* 0x1704630F: movzx ecx, al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x17046312: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM8(ebx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x17046314: mov byte ptr [ebx - 1], al */
L_17046317:
    MEM32(ebp + 0x8) = ebx; /* 0x17046317: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704631A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1704631E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17046332; /* 0x17046320: je 0x17046332 */
L_17046322:
    PUSH32(esp, 0x1706E47Eu); /* 0x17046322: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x17046327: push edi */
    PUSH32(esp, 0x40u); /* 0x17046328: push 0x40 */
    PUSH32(esp, ebx); /* 0x1704632A: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1704632B: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    goto L_17046334; /* 0x17046330: jmp 0x17046334 */
L_17046332:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17046332: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17046334:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17046334: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17046338: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = ebx; /* 0x1704633A: mov dword ptr [esi + 8], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17046346; /* 0x1704633D: jne 0x17046346 */
L_1704633F:
    eax = 0x8007000Eu; /* 0x1704633F: mov eax, 0x8007000e */
    goto L_17046355; /* 0x17046344: jmp 0x17046355 */
L_17046346:
    eax = MEM32(esi); /* 0x17046346: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x17046348: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704634C: push esi */
    MEM32(esi + 0x4) = edi; /* 0x1704634D: mov dword ptr [esi + 4], edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17046350: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046353: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17046355:
    ecx = MEM32(ebp + (-0xC)); /* 0x17046355: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17046358: pop edi */
    esi = POP32_VAL(esp); /* 0x17046359: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704635A: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1704635B: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17046362: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17046363: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704636B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704636Bu);

L_1704636B:
    edi = edi; /* 0x1704636B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704636D: push ebp */
    ebp = esp; /* 0x1704636E: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x17046370: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x17046373: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704637E; /* 0x17046375: jne 0x1704637e */
L_17046377:
    eax = 0x8876086Cu; /* 0x17046377: mov eax, 0x8876086c */
    goto L_170463B8; /* 0x1704637C: jmp 0x170463b8 */
L_1704637E:
    PUSH32(esp, esi); /* 0x1704637E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704637F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17046382: push edi */
    PUSH32(esp, 4); /* 0x17046383: push 4 */
    ecx = POP32_VAL(esp); /* 0x17046385: pop ecx */
    edi = 0x17001CB0u; /* 0x17046386: mov edi, 0x17001cb0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704638B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704638D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170463A2; /* 0x1704638F: je 0x170463a2 */
L_17046391:
    esi = MEM32(ebp + 0xC); /* 0x17046391: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x17046394: push 4 */
    ecx = POP32_VAL(esp); /* 0x17046396: pop ecx */
    edi = 0x1702AA2Cu; /* 0x17046397: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704639C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704639E: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_170463B1; /* 0x170463A0: jne 0x170463b1 */
L_170463A2:
    eax = MEM32(ebp + 0x8); /* 0x170463A2: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x170463A5: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x170463A7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170463A9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170463AA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170463AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170463B6; /* 0x170463AF: jmp 0x170463b6 */
L_170463B1:
    eax = 0x80004002u; /* 0x170463B1: mov eax, 0x80004002 */
L_170463B6:
    edi = POP32_VAL(esp); /* 0x170463B6: pop edi */
    esi = POP32_VAL(esp); /* 0x170463B7: pop esi */
L_170463B8:
    ebp = POP32_VAL(esp); /* 0x170463B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170463B9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170463C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170463C1u);

L_170463C1:
    edi = edi; /* 0x170463C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170463C3: push ebp */
    ebp = esp; /* 0x170463C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170463C6: push esi */
    esi = ecx; /* 0x170463C7: mov esi, ecx */
    RECOMP_CALL(sub_170462BF); /* 0x170463C9: call 0x170462bf */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170463CE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170463DB; /* 0x170463D2: je 0x170463db */
L_170463D4:
    PUSH32(esp, esi); /* 0x170463D4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170463D5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170463DA: pop ecx */
L_170463DB:
    eax = esi; /* 0x170463DB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170463DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x170463DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170463DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170463E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170463E7u);

L_170463E7:
    eax = 0x1721BF7Fu; /* 0x170463E7: mov eax, 0x1721bf7f */
    RECOMP_CALL(sub_1721B168); /* 0x170463EC: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x170463F1: push ecx */
    PUSH32(esp, ebx); /* 0x170463F2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170463F3: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1; /* 0x170463F6: inc dword ptr [ebx + 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(ebx + 0xC); /* 0x170463F9: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x4); /* 0x170463FC: mov eax, dword ptr [ebx + 4] */
    /* cmp ecx, eax */ /* 0x170463FF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17046401: push esi */
    PUSH32(esp, edi); /* 0x17046402: push edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_170464A5; /* 0x17046403: jl 0x170464a5 */
L_17046409:
    esi = eax + eax; /* 0x17046409: lea esi, [eax + eax] */
    eax = esi; /* 0x1704640C: mov eax, esi */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1704640E: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1704640E: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17046411: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17046414: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17046415: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704641A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704641C: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1704641D: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17046436; /* 0x17046420: je 0x17046436 */
L_17046422:
    SET_LO8(edx, LO8(eax)); /* 0x17046422: mov dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x17046424: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, 0x10u); /* 0x17046427: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17046429: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = (uint32_t)LO8(ecx); /* 0x1704642B: movzx edx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1704642E: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x17046430: mov dword ptr [ebp + 8], eax */
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x17046433: mov byte ptr [eax - 1], cl */
L_17046436:
    MEM32(ebp + (-0x10)) = eax; /* 0x17046436: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17046439: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1704643D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17046457; /* 0x1704643F: je 0x17046457 */
L_17046441:
    PUSH32(esp, 0x1706E47Eu); /* 0x17046441: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x17046446: push esi */
    PUSH32(esp, 0x40u); /* 0x17046447: push 0x40 */
    PUSH32(esp, eax); /* 0x17046449: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x1704644A: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1704644F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x17046452: mov dword ptr [ebp + 8], eax */
    goto L_1704645B; /* 0x17046455: jmp 0x1704645b */
L_17046457:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17046457: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704645B:
    edi = MEM32(ebp + 0x8); /* 0x1704645B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1704645E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17046462: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704646D; /* 0x17046464: jne 0x1704646d */
L_17046466:
    eax = 0x8007000Eu; /* 0x17046466: mov eax, 0x8007000e */
    goto L_170464BB; /* 0x1704646B: jmp 0x170464bb */
L_1704646D:
    esi = MEM32(ebx + 0x8); /* 0x1704646D: mov esi, dword ptr [ebx + 8] */
    /* test esi, esi */ /* 0x17046470: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704649C; /* 0x17046472: je 0x1704649c */
L_17046474:
    ecx = MEM32(ebx + 0x4); /* 0x17046474: mov ecx, dword ptr [ebx + 4] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046477: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046477: shl ecx, 6 */
    eax = ecx; /* 0x1704647A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704647C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704647C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704647F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17046481: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17046483: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17046486: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0x8); /* 0x17046488: mov eax, dword ptr [ebx + 8] */
    /* test eax, eax */ /* 0x1704648B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704649C; /* 0x1704648D: je 0x1704649c */
L_1704648F:
    ecx = (uint32_t)MEM8(eax + (-0x1)); /* 0x1704648F: movzx ecx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17046493: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x17046495: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17046496: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704649B: pop ecx */
L_1704649C:
    eax = MEM32(ebp + 0x8); /* 0x1704649C: mov eax, dword ptr [ebp + 8] */
    if (1u) _cf = (((MEM32(ebx + 0x4)) >> 31) & 1u); /* 0x1704649F: shl dword ptr [ebx + 4], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebx + 0x4) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) << 1u; /* 0x1704649F: shl dword ptr [ebx + 4], 1 */
    MEM32(ebx + 0x8) = eax; /* 0x170464A2: mov dword ptr [ebx + 8], eax */
L_170464A5:
    eax = MEM32(ebx + 0xC); /* 0x170464A5: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x170464A8: mov ecx, dword ptr [ebx + 8] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x170464AB: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x170464AB: shl eax, 6 */
    edi = eax + ecx; /* 0x170464AE: lea edi, [eax + ecx] */
    PUSH32(esp, 0x10u); /* 0x170464B1: push 0x10 */
    esi = edi + (-0x40); /* 0x170464B3: lea esi, [edi - 0x40] */
    ecx = POP32_VAL(esp); /* 0x170464B6: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170464B7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170464B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170464BB:
    ecx = MEM32(ebp + (-0xC)); /* 0x170464BB: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x170464BE: pop edi */
    esi = POP32_VAL(esp); /* 0x170464BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x170464C0: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x170464C1: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170464C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170464C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170464D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170464D1u);

L_170464D1:
    edi = edi; /* 0x170464D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170464D3: push ebp */
    ebp = esp; /* 0x170464D4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170464D6: mov ecx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170464D9: fldz  */
    eax = MEM32(ecx + 0xC); /* 0x170464DB: mov eax, dword ptr [ecx + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x170464DE: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x170464DE: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x8); /* 0x170464E1: add eax, dword ptr [ecx + 8] */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x170464E4: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x170464E7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x170464E9: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x170464EC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x170464EE: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x170464F1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x170464F3: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x170464F6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170464F8: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x170464FB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170464FD: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17046500: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17046502: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17046505: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17046507: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1704650A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1704650C: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1704650F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046511: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17046514: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046516: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17046519: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704651B: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1704651E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17046520: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x17046523: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17046525: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x17046528: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1704652A: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1704652D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704652F: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046531: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x17046533: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17046534: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704653C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704653Cu);

L_1704653C:
    edi = edi; /* 0x1704653C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704653E: push ebp */
    ebp = esp; /* 0x1704653F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17046541: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17046544: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17046545: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17046548: push edi */
    edi = MEM32(eax + 0xC); /* 0x17046549: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x1704654C: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x1704654C: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1704654F: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x17046552: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046554: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046555: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17046557: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046558: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704655A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704655B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704655C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17046564(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046564u);

L_17046564:
    edi = edi; /* 0x17046564: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046566: push ebp */
    ebp = esp; /* 0x17046567: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x17046569: sub esp, 0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704656F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17046570: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xC); /* 0x17046573: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x17046576: push esi */
    PUSH32(esp, edi); /* 0x17046577: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17046578: push dword ptr [ebp + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1704657B: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1704657B: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x1704657E: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17046581: push eax */
    eax = ebp + (-0x40); /* 0x17046582: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17046585: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17046586: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x1704658B: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704658D: pop ecx */
    esi = ebp + (-0x40); /* 0x1704658E: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x80); /* 0x17046591: lea edi, [ebp - 0x80] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046594: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebx + 0xC); /* 0x17046596: mov edi, dword ptr [ebx + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046599: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046599: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x8); /* 0x1704659C: add edi, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704659F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170465A1: pop ecx */
    esi = ebp + (-0x80); /* 0x170465A2: lea esi, [ebp - 0x80] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170465A5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170465A7: pop edi */
    esi = POP32_VAL(esp); /* 0x170465A8: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170465A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x170465AB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170465AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170465AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170465B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170465B5u);

L_170465B5:
    edi = edi; /* 0x170465B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170465B7: push ebp */
    ebp = esp; /* 0x170465B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x170465BA: sub esp, 0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170465C0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170465C1: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xC); /* 0x170465C4: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x170465C7: push esi */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x170465C8: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x170465C8: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x170465CB: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x170465CE: push edi */
    PUSH32(esp, eax); /* 0x170465CF: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170465D0: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x40); /* 0x170465D3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170465D6: push eax */
    RECOMP_CALL(sub_17041794); /* 0x170465D7: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x170465DC: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170465DE: pop ecx */
    esi = ebp + (-0x40); /* 0x170465DF: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x80); /* 0x170465E2: lea edi, [ebp - 0x80] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170465E5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebx + 0xC); /* 0x170465E7: mov edi, dword ptr [ebx + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x170465EA: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x170465EA: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x8); /* 0x170465ED: add edi, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x170465F0: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170465F2: pop ecx */
    esi = ebp + (-0x80); /* 0x170465F3: lea esi, [ebp - 0x80] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170465F6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170465F8: pop edi */
    esi = POP32_VAL(esp); /* 0x170465F9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170465FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x170465FC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170465FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170465FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17046606(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046606u);

L_17046606:
    edi = edi; /* 0x17046606: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17046608: push ebx */
    ebx = esp; /* 0x17046609: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1704660B: push ecx */
    PUSH32(esp, ecx); /* 0x1704660C: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1704660D: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17046610: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17046613: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17046614: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17046617: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1704661B: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x1704661D: fld dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x17046620: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17046626: push esi */
    PUSH32(esp, edi); /* 0x17046627: push edi */
    PUSH32(esp, ecx); /* 0x17046628: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17046629: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1704662C: push dword ptr [ebx + 0xc] */
    eax = ebp + (-0x80); /* 0x1704662F: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17046632: push eax */
    RECOMP_CALL(sub_17042428); /* 0x17046633: call 0x17042428 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x17046638: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704663B: push eax */
    eax = MEM32(ebx + 0x8); /* 0x1704663C: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x1704663F: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046642: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046642: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046645: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x40); /* 0x17046648: lea eax, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1704664B: push ecx */
    PUSH32(esp, eax); /* 0x1704664C: push eax */
    RECOMP_CALL(sub_17041794); /* 0x1704664D: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046652: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x17046655: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046657: pop ecx */
    esi = ebp + (-0x40); /* 0x17046658: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x1704665B: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046661: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046663: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046666: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046666: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x17046669: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704666C: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704666E: pop ecx */
    esi = ebp + (-0xC0); /* 0x1704666F: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046675: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17046677: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046678: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704667A: pop esi */
    esp = ebp; /* 0x1704667B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1704667D: pop ebp */
    esp = ebx; /* 0x1704667E: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046680: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17046681: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17046689(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046689u);

L_17046689:
    edi = edi; /* 0x17046689: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704668B: push ebx */
    ebx = esp; /* 0x1704668C: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1704668E: push ecx */
    PUSH32(esp, ecx); /* 0x1704668F: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17046690: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17046693: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17046696: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17046697: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1704669A: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1704669E: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x170466A0: fld dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170466A3: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170466A9: push esi */
    PUSH32(esp, edi); /* 0x170466AA: push edi */
    PUSH32(esp, ecx); /* 0x170466AB: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170466AC: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x170466AF: push dword ptr [ebx + 0xc] */
    eax = ebp + (-0x80); /* 0x170466B2: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x170466B5: push eax */
    RECOMP_CALL(sub_17042428); /* 0x170466B6: call 0x17042428 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170466BB: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x170466BE: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x170466C1: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x170466C1: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x170466C4: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x80); /* 0x170466C7: lea eax, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x170466CA: push ecx */
    PUSH32(esp, eax); /* 0x170466CB: push eax */
    eax = ebp + (-0x40); /* 0x170466CC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170466CF: push eax */
    RECOMP_CALL(sub_17041794); /* 0x170466D0: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170466D5: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x170466D8: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170466DA: pop ecx */
    esi = ebp + (-0x40); /* 0x170466DB: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x170466DE: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170466E4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x170466E6: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x170466E9: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x170466E9: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x170466EC: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x170466EF: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170466F1: pop ecx */
    esi = ebp + (-0xC0); /* 0x170466F2: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170466F8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170466FA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170466FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170466FD: pop esi */
    esp = ebp; /* 0x170466FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17046700: pop ebp */
    esp = ebx; /* 0x17046701: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046703: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17046704: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704670C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704670Cu);

L_1704670C:
    edi = edi; /* 0x1704670C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704670E: push ebx */
    ebx = esp; /* 0x1704670F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17046711: push ecx */
    PUSH32(esp, ecx); /* 0x17046712: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17046713: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17046716: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17046719: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1704671A: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1704671D: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17046721: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x17046723: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x17046726: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704672C: push esi */
    PUSH32(esp, edi); /* 0x1704672D: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704672E: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17046731: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x17046735: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x17046738: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704673B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1704673F: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17046742: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17046745: push eax */
    RECOMP_CALL(sub_1704267A); /* 0x17046746: call 0x1704267a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x1704674B: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704674E: push eax */
    eax = MEM32(ebx + 0x8); /* 0x1704674F: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x17046752: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046755: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046755: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046758: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x40); /* 0x1704675B: lea eax, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1704675E: push ecx */
    PUSH32(esp, eax); /* 0x1704675F: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17046760: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046765: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x17046768: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704676A: pop ecx */
    esi = ebp + (-0x40); /* 0x1704676B: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x1704676E: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046774: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046776: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046779: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046779: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1704677C: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704677F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046781: pop ecx */
    esi = ebp + (-0xC0); /* 0x17046782: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046788: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1704678A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704678B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704678D: pop esi */
    esp = ebp; /* 0x1704678E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17046790: pop ebp */
    esp = ebx; /* 0x17046791: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046793: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046794: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704679C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704679Cu);

L_1704679C:
    edi = edi; /* 0x1704679C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704679E: push ebx */
    ebx = esp; /* 0x1704679F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x170467A1: push ecx */
    PUSH32(esp, ecx); /* 0x170467A2: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170467A3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170467A6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170467A9: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170467AA: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170467AD: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170467B1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x170467B3: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170467B6: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170467BC: push esi */
    PUSH32(esp, edi); /* 0x170467BD: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170467BE: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x170467C1: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x170467C5: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x170467C8: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170467CB: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x170467CF: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170467D2: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x170467D5: push eax */
    RECOMP_CALL(sub_1704267A); /* 0x170467D6: call 0x1704267a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170467DB: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x170467DE: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x170467E1: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x170467E1: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x170467E4: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x80); /* 0x170467E7: lea eax, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x170467EA: push ecx */
    PUSH32(esp, eax); /* 0x170467EB: push eax */
    eax = ebp + (-0x40); /* 0x170467EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170467EF: push eax */
    RECOMP_CALL(sub_17041794); /* 0x170467F0: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170467F5: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x170467F8: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170467FA: pop ecx */
    esi = ebp + (-0x40); /* 0x170467FB: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x170467FE: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046804: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046806: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046809: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046809: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1704680C: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704680F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046811: pop ecx */
    esi = ebp + (-0xC0); /* 0x17046812: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046818: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1704681A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704681B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704681D: pop esi */
    esp = ebp; /* 0x1704681E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17046820: pop ebp */
    esp = ebx; /* 0x17046821: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046823: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046824: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704682C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704682Cu);

L_1704682C:
    edi = edi; /* 0x1704682C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704682E: push ebx */
    ebx = esp; /* 0x1704682F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17046831: push ecx */
    PUSH32(esp, ecx); /* 0x17046832: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17046833: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17046836: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17046839: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1704683A: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1704683D: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17046841: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x17046843: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x17046846: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704684C: push esi */
    PUSH32(esp, edi); /* 0x1704684D: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704684E: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17046851: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x17046855: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x17046858: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704685B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1704685F: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17046862: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17046865: push eax */
    RECOMP_CALL(sub_170420D9); /* 0x17046866: call 0x170420d9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x1704686B: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704686E: push eax */
    eax = MEM32(ebx + 0x8); /* 0x1704686F: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x17046872: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046875: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046875: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046878: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x40); /* 0x1704687B: lea eax, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1704687E: push ecx */
    PUSH32(esp, eax); /* 0x1704687F: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17046880: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046885: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x17046888: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704688A: pop ecx */
    esi = ebp + (-0x40); /* 0x1704688B: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x1704688E: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046894: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046896: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046899: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046899: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1704689C: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704689F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170468A1: pop ecx */
    esi = ebp + (-0xC0); /* 0x170468A2: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170468A8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170468AA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170468AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170468AD: pop esi */
    esp = ebp; /* 0x170468AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x170468B0: pop ebp */
    esp = ebx; /* 0x170468B1: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x170468B3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170468B4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170468BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170468BCu);

L_170468BC:
    edi = edi; /* 0x170468BC: mov edi, edi */
    PUSH32(esp, ebx); /* 0x170468BE: push ebx */
    ebx = esp; /* 0x170468BF: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x170468C1: push ecx */
    PUSH32(esp, ecx); /* 0x170468C2: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170468C3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170468C6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170468C9: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170468CA: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170468CD: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170468D1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x170468D3: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170468D6: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170468DC: push esi */
    PUSH32(esp, edi); /* 0x170468DD: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170468DE: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x170468E1: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x170468E5: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x170468E8: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170468EB: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x170468EF: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170468F2: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x170468F5: push eax */
    RECOMP_CALL(sub_170420D9); /* 0x170468F6: call 0x170420d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170468FB: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x170468FE: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046901: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046901: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046904: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x80); /* 0x17046907: lea eax, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x1704690A: push ecx */
    PUSH32(esp, eax); /* 0x1704690B: push eax */
    eax = ebp + (-0x40); /* 0x1704690C: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1704690F: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17046910: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046915: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x17046918: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704691A: pop ecx */
    esi = ebp + (-0x40); /* 0x1704691B: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x1704691E: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046924: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046926: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046929: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046929: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1704692C: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1704692F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046931: pop ecx */
    esi = ebp + (-0xC0); /* 0x17046932: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046938: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1704693A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704693B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704693D: pop esi */
    esp = ebp; /* 0x1704693E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17046940: pop ebp */
    esp = ebx; /* 0x17046941: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046943: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046944: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704694C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704694Cu);

L_1704694C:
    edi = edi; /* 0x1704694C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704694E: push ebx */
    ebx = esp; /* 0x1704694F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17046951: push ecx */
    PUSH32(esp, ecx); /* 0x17046952: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17046953: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17046956: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17046959: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1704695A: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1704695D: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17046961: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x17046963: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x17046966: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704696C: push esi */
    PUSH32(esp, edi); /* 0x1704696D: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704696E: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17046971: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x17046975: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x17046978: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704697B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1704697F: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17046982: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17046985: push eax */
    RECOMP_CALL(sub_1704217C); /* 0x17046986: call 0x1704217c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x1704698B: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704698E: push eax */
    eax = MEM32(ebx + 0x8); /* 0x1704698F: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x17046992: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046995: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046995: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046998: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x40); /* 0x1704699B: lea eax, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1704699E: push ecx */
    PUSH32(esp, eax); /* 0x1704699F: push eax */
    RECOMP_CALL(sub_17041794); /* 0x170469A0: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x170469A5: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x170469A8: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170469AA: pop ecx */
    esi = ebp + (-0x40); /* 0x170469AB: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x170469AE: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170469B4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x170469B6: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x170469B9: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x170469B9: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x170469BC: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x170469BF: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170469C1: pop ecx */
    esi = ebp + (-0xC0); /* 0x170469C2: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170469C8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170469CA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170469CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170469CD: pop esi */
    esp = ebp; /* 0x170469CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x170469D0: pop ebp */
    esp = ebx; /* 0x170469D1: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x170469D3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170469D4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170469DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170469DCu);

L_170469DC:
    edi = edi; /* 0x170469DC: mov edi, edi */
    PUSH32(esp, ebx); /* 0x170469DE: push ebx */
    ebx = esp; /* 0x170469DF: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x170469E1: push ecx */
    PUSH32(esp, ecx); /* 0x170469E2: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170469E3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170469E6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170469E9: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170469EA: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170469ED: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170469F1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x170469F3: fld dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170469F6: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170469FC: push esi */
    PUSH32(esp, edi); /* 0x170469FD: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170469FE: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17046A01: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x80); /* 0x17046A05: lea eax, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x17046A08: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17046A0B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x17046A0F: fld dword ptr [ebx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17046A12: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17046A15: push eax */
    RECOMP_CALL(sub_1704217C); /* 0x17046A16: call 0x1704217c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046A1B: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x17046A1E: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x17046A21: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x17046A21: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x17046A24: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x80); /* 0x17046A27: lea eax, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x17046A2A: push ecx */
    PUSH32(esp, eax); /* 0x17046A2B: push eax */
    eax = ebp + (-0x40); /* 0x17046A2C: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17046A2F: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17046A30: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x17046A35: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x17046A38: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046A3A: pop ecx */
    esi = ebp + (-0x40); /* 0x17046A3B: lea esi, [ebp - 0x40] */
    edi = ebp + (-0xC0); /* 0x17046A3E: lea edi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046A44: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(eax + 0xC); /* 0x17046A46: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x17046A49: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x17046A49: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x17046A4C: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x17046A4F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17046A51: pop ecx */
    esi = ebp + (-0xC0); /* 0x17046A52: lea esi, [ebp - 0xc0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17046A58: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17046A5A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046A5B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17046A5D: pop esi */
    esp = ebp; /* 0x17046A5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17046A60: pop ebp */
    esp = ebx; /* 0x17046A61: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17046A63: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046A64: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17046A6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046A6Cu);

L_17046A6C:
    eax = ecx; /* 0x17046A6C: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17046A6E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x17005328u; /* 0x17046A70: mov dword ptr [eax], 0x17005328 */
    MEM32(eax + 0x8) = ecx; /* 0x17046A76: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x17046A79: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x17046A7C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x17046A7F: mov dword ptr [eax + 0x10], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17046A86: ret  */
    RECOMP_REGS_OUT();
}

void sub_17046A8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046A8Cu);

L_17046A8C:
    edi = edi; /* 0x17046A8C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046A8E: push ebp */
    ebp = esp; /* 0x17046A8F: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x17046A91: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x17046A94: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x17046A97: push esi */
    esi = MEM32(ecx + 0x10); /* 0x17046A98: mov esi, dword ptr [ecx + 0x10] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17046AA4; /* 0x17046A9B: jne 0x17046aa4 */
L_17046A9D:
    PUSH32(esp, 1); /* 0x17046A9D: push 1 */
    RECOMP_CALL(sub_170463C1); /* 0x17046A9F: call 0x170463c1 */
    RECOMP_FLAGS_IN();
L_17046AA4:
    eax = esi; /* 0x17046AA4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17046AA6: pop esi */
    ebp = POP32_VAL(esp); /* 0x17046AA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17046AA8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17046AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046AB0u);

L_17046AB0:
    edi = edi; /* 0x17046AB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046AB2: push ebp */
    ebp = esp; /* 0x17046AB3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17046AB5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17046AB6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x17046AB9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17046AC4; /* 0x17046ABB: jne 0x17046ac4 */
L_17046ABD:
    eax = 0x8876086Cu; /* 0x17046ABD: mov eax, 0x8876086c */
    goto L_17046B09; /* 0x17046AC2: jmp 0x17046b09 */
L_17046AC4:
    PUSH32(esp, esi); /* 0x17046AC4: push esi */
    PUSH32(esp, 0x14u); /* 0x17046AC5: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x17046AC7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17046ACC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17046ACE: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17046ADC; /* 0x17046ACF: je 0x17046adc */
L_17046AD1:
    ecx = eax; /* 0x17046AD1: mov ecx, eax */
    RECOMP_CALL(sub_17046A6C); /* 0x17046AD3: call 0x17046a6c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17046AD8: mov esi, eax */
    goto L_17046ADE; /* 0x17046ADA: jmp 0x17046ade */
L_17046ADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17046ADC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17046ADE:
    /* test esi, esi */ /* 0x17046ADE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17046AE9; /* 0x17046AE0: jne 0x17046ae9 */
L_17046AE2:
    eax = 0x8007000Eu; /* 0x17046AE2: mov eax, 0x8007000e */
    goto L_17046B08; /* 0x17046AE7: jmp 0x17046b08 */
L_17046AE9:
    PUSH32(esp, edi); /* 0x17046AE9: push edi */
    PUSH32(esp, 0x10u); /* 0x17046AEA: push 0x10 */
    ecx = esi; /* 0x17046AEC: mov ecx, esi */
    RECOMP_CALL(sub_170462DF); /* 0x17046AEE: call 0x170462df */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17046AF3: mov edi, eax */
    /* test edi, edi */ /* 0x17046AF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17046B03; /* 0x17046AF7: jge 0x17046b03 */
L_17046AF9:
    eax = MEM32(esi); /* 0x17046AF9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17046AFB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17046AFC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17046AFF: mov eax, edi */
    goto L_17046B07; /* 0x17046B01: jmp 0x17046b07 */
L_17046B03:
    MEM32(ebx) = esi; /* 0x17046B03: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17046B05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17046B07:
    edi = POP32_VAL(esp); /* 0x17046B07: pop edi */
L_17046B08:
    esi = POP32_VAL(esp); /* 0x17046B08: pop esi */
L_17046B09:
    ebx = POP32_VAL(esp); /* 0x17046B09: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17046B0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17046B0B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17046B13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046B13u);

L_17046B13:
    edi = edi; /* 0x17046B13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046B15: push ebp */
    ebp = esp; /* 0x17046B16: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x17046B18: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x17005388)); /* 0x17046B1B: fld dword ptr [0x17005388] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17046B21: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046B23: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005384); /* 0x17046B26: fmul dword ptr [0x17005384] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046B2C: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046B2F: fld dword ptr [0x17005380] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046B35: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046B38: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17046B3A: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046B3D: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17046B40: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046B42: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046B45: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17046B47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046B48: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17046B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046B50u);

L_17046B50:
    edi = edi; /* 0x17046B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046B52: push ebp */
    ebp = esp; /* 0x17046B53: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x17046B55: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x17005388)); /* 0x17046B58: fld dword ptr [0x17005388] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17046B5E: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046B60: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005384); /* 0x17046B63: fmul dword ptr [0x17005384] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046B69: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046B6C: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046B6F: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005398); /* 0x17046B72: fmul dword ptr [0x17005398] */
    _st[0] -= (double)*(float*)ADDR(0x17005394); /* 0x17046B78: fsub dword ptr [0x17005394] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17046B7E: fstp dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046B81: fld dword ptr [0x17005380] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046B87: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046B8A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17046B8C: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046B8F: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17046B92: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046B94: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046B97: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046B99: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005390); /* 0x17046B9C: fmul dword ptr [0x17005390] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046BA2: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046BA5: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17046BA7: fstp dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17046BAA: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17046BAD: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046BB0: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17046BB3: fmul dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x1700538C)); /* 0x17046BB6: fld dword ptr [0x1700538c] */
    fp_push(_st[1]); /* 0x17046BBC: fld st(1) */
    _st[0] += _st[0]; /* 0x17046BBE: fadd st(0), st(0) */
    _st[0] *= _st[1]; /* 0x17046BC0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17046BC2: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046BC5: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17046BC8: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046BCB: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17046BCE: fmul dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046BD1: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x17046BD3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17046BD5: fstp dword ptr [eax + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046BD8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046BDA: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17046BDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046BDD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17046BE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046BE5u);

L_17046BE5:
    edi = edi; /* 0x17046BE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046BE7: push ebp */
    ebp = esp; /* 0x17046BE8: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x17046BEA: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046BED: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046BF0: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17005388)); /* 0x17046BF3: fld dword ptr [0x17005388] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17046BF9: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046BFB: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005384); /* 0x17046BFE: fmul dword ptr [0x17005384] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046C04: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x17005398)); /* 0x17046C07: fld dword ptr [0x17005398] */
    _st[0] *= _st[1]; /* 0x17046C0D: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(0x17005394); /* 0x17046C0F: fsub dword ptr [0x17005394] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17046C15: fstp dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x170053B0)); /* 0x17046C18: fld dword ptr [0x170053b0] */
    _st[0] *= _st[1]; /* 0x17046C1E: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(0x170053AC); /* 0x17046C20: fsub dword ptr [0x170053ac] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046C26: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17046C29: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046C2C: fld dword ptr [0x17005380] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046C32: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046C35: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17046C37: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046C3A: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17046C3D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046C3F: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046C42: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046C44: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005390); /* 0x17046C47: fmul dword ptr [0x17005390] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046C4D: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046C50: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17046C52: fstp dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17046C55: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17046C58: fstp dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(0x170053A8); /* 0x17046C5B: fmul dword ptr [0x170053a8] */
    _st[0] = (double)*(float*)ADDR(0x170053A4) - _st[0]; /* 0x17046C61: fsubr dword ptr [0x170053a4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046C67: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17046C6A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17046C6C: fstp dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17046C6F: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17046C72: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046C75: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046C78: fld dword ptr [ebp + 0xc] */
    fp_push(_st[1]); /* 0x17046C7B: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046C7D: fmul st(1) */
    _st[0] += _st[0]; /* 0x17046C7F: fadd st(0), st(0) */
    fp_push(_st[2]); /* 0x17046C81: fld st(2) */
    _st[0] *= _st[3]; /* 0x17046C83: fmul st(3) */
    fp_push(_st[2]); /* 0x17046C85: fld st(2) */
    _st[0] *= _st[3]; /* 0x17046C87: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046C89: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1700538C)); /* 0x17046C8B: fld dword ptr [0x1700538c] */
    fp_push(_st[2]); /* 0x17046C91: fld st(2) */
    _st[0] *= _st[1]; /* 0x17046C93: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17046C95: fstp dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17046C98: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046C9A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17046C9C: fstp dword ptr [eax + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046C9F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046CA1: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053A0); /* 0x17046CA4: fmul dword ptr [0x170053a0] */
    fp_push(_st[0]); /* 0x17046CAA: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046CAC: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17046CAE: fstp dword ptr [eax + 0x28] */
    _st[0] *= _st[1]; /* 0x17046CB1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17046CB3: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(0x1700539C)); /* 0x17046CB6: fld dword ptr [0x1700539c] */
    fp_push(_st[2]); /* 0x17046CBC: fld st(2) */
    _st[0] *= _st[5]; /* 0x17046CBE: fmul st(5) */
    fp_push(_st[2]); /* 0x17046CC0: fld st(2) */
    _st[0] *= _st[5]; /* 0x17046CC2: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046CC4: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17046CC6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17046CC8: fstp dword ptr [eax + 0x24] */
    fp_push(_st[1]); /* 0x17046CCB: fld st(1) */
    _st[0] *= _st[5]; /* 0x17046CCD: fmul st(5) */
    fp_push(_st[3]); /* 0x17046CCF: fld st(3) */
    _st[0] *= _st[5]; /* 0x17046CD1: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046CD3: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x17046CD5: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17046CD7: fstp dword ptr [eax + 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046CDA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046CDC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046CDE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046CE0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046CE2: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17046CE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046CE5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17046CED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046CEDu);

L_17046CED:
    edi = edi; /* 0x17046CED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046CEF: push ebp */
    ebp = esp; /* 0x17046CF0: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x17046CF2: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046CF5: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046CF8: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17005388)); /* 0x17046CFB: fld dword ptr [0x17005388] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17046D01: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046D03: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005384); /* 0x17046D06: fmul dword ptr [0x17005384] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046D0C: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x17005398)); /* 0x17046D0F: fld dword ptr [0x17005398] */
    _st[0] *= _st[1]; /* 0x17046D15: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(0x17005394); /* 0x17046D17: fsub dword ptr [0x17005394] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x17046D1D: fst dword ptr [eax + 0x18] */
    fp_push(_st[1]); /* 0x17046D20: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170053B0); /* 0x17046D22: fmul dword ptr [0x170053b0] */
    _st[0] -= (double)*(float*)ADDR(0x170053AC); /* 0x17046D28: fsub dword ptr [0x170053ac] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046D2E: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x17046D31: fst dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046D34: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053D0); /* 0x17046D37: fmul dword ptr [0x170053d0] */
    fp_push(_st[1]); /* 0x17046D3D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170053CC); /* 0x17046D3F: fmul dword ptr [0x170053cc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046D45: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x50) = _v; } /* 0x17046D47: fstp dword ptr [eax + 0x50] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046D4A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046D4C: fld dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046D4F: fld dword ptr [0x17005380] */
    _st[0] *= _st[1]; /* 0x17046D55: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17046D57: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046D5A: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046D5D: fld dword ptr [0x17005380] */
    _st[0] *= _st[1]; /* 0x17046D63: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046D65: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046D68: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005390); /* 0x17046D6B: fmul dword ptr [0x17005390] */
    fp_push(_st[0]); /* 0x17046D71: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046D73: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17046D75: fstp dword ptr [eax + 0x14] */
    _st[0] *= _st[1]; /* 0x17046D78: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17046D7A: fstp dword ptr [eax + 0x1c] */
    fp_push(_st[2]); /* 0x17046D7D: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(0x170053A8); /* 0x17046D7F: fmul dword ptr [0x170053a8] */
    _st[0] = (double)*(float*)ADDR(0x170053A4) - _st[0]; /* 0x17046D85: fsubr dword ptr [0x170053a4] */
    fp_push(_st[0]); /* 0x17046D8B: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046D8D: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17046D8F: fstp dword ptr [eax + 0x2c] */
    _st[0] *= _st[1]; /* 0x17046D92: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17046D94: fstp dword ptr [eax + 0x34] */
    fp_push(_st[2]); /* 0x17046D97: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(0x170053C8); /* 0x17046D99: fmul dword ptr [0x170053c8] */
    _st[0] = (double)*(float*)ADDR(0x170053C4) - _st[0]; /* 0x17046D9F: fsubr dword ptr [0x170053c4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046DA5: fmul dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x17046DA8: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046DAA: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4C) = _v; } /* 0x17046DAC: fstp dword ptr [eax + 0x4c] */
    _st[0] *= _st[1]; /* 0x17046DAF: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x54) = _v; } /* 0x17046DB1: fstp dword ptr [eax + 0x54] */
    fp_push(_st[0]); /* 0x17046DB4: fld st(0) */
    _st[0] *= _st[2]; /* 0x17046DB6: fmul st(2) */
    _st[0] += _st[0]; /* 0x17046DB8: fadd st(0), st(0) */
    fp_push(_st[1]); /* 0x17046DBA: fld st(1) */
    _st[0] *= _st[2]; /* 0x17046DBC: fmul st(2) */
    fp_push(_st[3]); /* 0x17046DBE: fld st(3) */
    _st[0] *= _st[4]; /* 0x17046DC0: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046DC2: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1700538C)); /* 0x17046DC4: fld dword ptr [0x1700538c] */
    fp_push(_st[2]); /* 0x17046DCA: fld st(2) */
    _st[0] *= _st[1]; /* 0x17046DCC: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17046DCE: fstp dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17046DD1: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046DD3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17046DD5: fstp dword ptr [eax + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046DD8: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046DDA: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053A0); /* 0x17046DDD: fmul dword ptr [0x170053a0] */
    fp_push(_st[0]); /* 0x17046DE3: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046DE5: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17046DE7: fstp dword ptr [eax + 0x28] */
    _st[0] *= _st[1]; /* 0x17046DEA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17046DEC: fstp dword ptr [eax + 0x38] */
    fp_push(_st[4]); /* 0x17046DEF: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(0x170053C0); /* 0x17046DF1: fmul dword ptr [0x170053c0] */
    _st[0] -= (double)*(float*)ADDR(0x170053BC); /* 0x17046DF7: fsub dword ptr [0x170053bc] */
    fp_push(_st[0]); /* 0x17046DFD: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046DFF: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x48) = _v; } /* 0x17046E01: fstp dword ptr [eax + 0x48] */
    _st[0] *= _st[1]; /* 0x17046E04: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x58) = _v; } /* 0x17046E06: fstp dword ptr [eax + 0x58] */
    fp_push(_st[1]); /* 0x17046E09: fld st(1) */
    _st[0] *= _st[3]; /* 0x17046E0B: fmul st(3) */
    fp_push(_st[1]); /* 0x17046E0D: fld st(1) */
    _st[0] *= _st[5]; /* 0x17046E0F: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046E11: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17046E13: fstp dword ptr [ebp + 0x14] */
    _st[0] *= _st[2]; /* 0x17046E16: fmul st(2) */
    fp_push(_st[1]); /* 0x17046E18: fld st(1) */
    _st[0] *= _st[4]; /* 0x17046E1A: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046E1C: fsubp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17046E1E: fstp st(1) */
    fp_push(*(float*)&MEM32(0x1700539C)); /* 0x17046E20: fld dword ptr [0x1700539c] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17046E26: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x17046E29: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17046E2B: fstp dword ptr [eax + 0x24] */
    fp_push(_st[1]); /* 0x17046E2E: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046E30: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17046E32: fstp dword ptr [eax + 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E35: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046E37: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053B8); /* 0x17046E3A: fmul dword ptr [0x170053b8] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17046E40: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x17046E43: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x44) = _v; } /* 0x17046E45: fstp dword ptr [eax + 0x44] */
    _st[0] *= _st[1]; /* 0x17046E48: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x5C) = _v; } /* 0x17046E4A: fstp dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(0x170053B4)); /* 0x17046E4D: fld dword ptr [0x170053b4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17046E53: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[3]; /* 0x17046E56: fmul st(3) */
    fp_push(_st[2]); /* 0x17046E58: fld st(2) */
    _st[0] *= _st[5]; /* 0x17046E5A: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046E5C: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17046E5E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x17046E60: fstp dword ptr [eax + 0x40] */
    fp_push(_st[1]); /* 0x17046E63: fld st(1) */
    _st[0] *= _st[3]; /* 0x17046E65: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17046E67: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[5]; /* 0x17046E6A: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046E6C: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x17046E6E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x60) = _v; } /* 0x17046E70: fstp dword ptr [eax + 0x60] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E73: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E75: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E77: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E79: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046E7B: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17046E7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17046E7E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17046E86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046E86u);

L_17046E86:
    edi = edi; /* 0x17046E86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046E88: push ebp */
    ebp = esp; /* 0x17046E89: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17046E8B: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x17046E8C: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046E8F: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x17046E92: fld st(0) */
    _st[0] *= _st[1]; /* 0x17046E94: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17046E96: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x17005388)); /* 0x17046E99: fld dword ptr [0x17005388] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17046E9F: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x17046EA1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17005384); /* 0x17046EA3: fmul dword ptr [0x17005384] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17046EA9: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x17005398)); /* 0x17046EAC: fld dword ptr [0x17005398] */
    _st[0] *= _st[1]; /* 0x17046EB2: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(0x17005394); /* 0x17046EB4: fsub dword ptr [0x17005394] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17046EBA: fst dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17046EBD: fstp dword ptr [eax + 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x170053B0); /* 0x17046EC0: fmul dword ptr [0x170053b0] */
    _st[0] -= (double)*(float*)ADDR(0x170053AC); /* 0x17046EC6: fsub dword ptr [0x170053ac] */
    _st[0] *= _st[1]; /* 0x17046ECC: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x17046ECE: fst dword ptr [eax + 0x30] */
    fp_push(_st[0]); /* 0x17046ED1: fld st(0) */
    _st[0] *= _st[2]; /* 0x17046ED3: fmul st(2) */
    _st[0] *= (double)*(float*)ADDR(0x170053D0); /* 0x17046ED5: fmul dword ptr [0x170053d0] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17046EDB: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(0x170053CC); /* 0x17046EDE: fmul dword ptr [0x170053cc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046EE4: fsubp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x50) = _v; } /* 0x17046EE6: fst dword ptr [eax + 0x50] */
    _st[0] *= _st[2]; /* 0x17046EE9: fmul st(2) */
    _st[0] *= (double)*(float*)ADDR(0x170053F8); /* 0x17046EEB: fmul dword ptr [0x170053f8] */
    fp_push(_st[1]); /* 0x17046EF1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170053F4); /* 0x17046EF3: fmul dword ptr [0x170053f4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046EF9: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x78) = _v; } /* 0x17046EFB: fstp dword ptr [eax + 0x78] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046EFE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046F00: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17046F02: fld dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046F05: fld dword ptr [0x17005380] */
    _st[0] *= _st[1]; /* 0x17046F0B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17046F0D: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17046F10: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17005380)); /* 0x17046F13: fld dword ptr [0x17005380] */
    _st[0] *= _st[1]; /* 0x17046F19: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17046F1B: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046F1E: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005390); /* 0x17046F21: fmul dword ptr [0x17005390] */
    fp_push(_st[0]); /* 0x17046F27: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046F29: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17046F2B: fstp dword ptr [eax + 0x14] */
    _st[0] *= _st[1]; /* 0x17046F2E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17046F30: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17046F33: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x170053A8); /* 0x17046F36: fmul dword ptr [0x170053a8] */
    _st[0] = (double)*(float*)ADDR(0x170053A4) - _st[0]; /* 0x17046F3C: fsubr dword ptr [0x170053a4] */
    fp_push(_st[0]); /* 0x17046F42: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046F44: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17046F46: fstp dword ptr [eax + 0x2c] */
    fp_push(_st[0]); /* 0x17046F49: fld st(0) */
    _st[0] *= _st[2]; /* 0x17046F4B: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17046F4D: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17046F50: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x170053C8); /* 0x17046F53: fmul dword ptr [0x170053c8] */
    _st[0] = (double)*(float*)ADDR(0x170053C4) - _st[0]; /* 0x17046F59: fsubr dword ptr [0x170053c4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046F5F: fmul dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x17046F62: fld st(0) */
    _st[0] *= _st[4]; /* 0x17046F64: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4C) = _v; } /* 0x17046F66: fstp dword ptr [eax + 0x4c] */
    fp_push(_st[0]); /* 0x17046F69: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046F6B: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x54) = _v; } /* 0x17046F6D: fstp dword ptr [eax + 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046F70: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053F0); /* 0x17046F73: fmul dword ptr [0x170053f0] */
    fp_push(_st[1]); /* 0x17046F79: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170053EC); /* 0x17046F7B: fmul dword ptr [0x170053ec] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046F81: fsubp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17046F83: fstp st(1) */
    fp_push(_st[0]); /* 0x17046F85: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046F87: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x74) = _v; } /* 0x17046F89: fstp dword ptr [eax + 0x74] */
    _st[0] *= _st[1]; /* 0x17046F8C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x7C) = _v; } /* 0x17046F8E: fstp dword ptr [eax + 0x7c] */
    fp_push(_st[0]); /* 0x17046F91: fld st(0) */
    _st[0] *= _st[2]; /* 0x17046F93: fmul st(2) */
    _st[0] += _st[0]; /* 0x17046F95: fadd st(0), st(0) */
    fp_push(_st[1]); /* 0x17046F97: fld st(1) */
    _st[0] *= _st[2]; /* 0x17046F99: fmul st(2) */
    fp_push(_st[3]); /* 0x17046F9B: fld st(3) */
    _st[0] *= _st[4]; /* 0x17046F9D: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17046F9F: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1700538C)); /* 0x17046FA1: fld dword ptr [0x1700538c] */
    fp_push(_st[2]); /* 0x17046FA7: fld st(2) */
    _st[0] *= _st[1]; /* 0x17046FA9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17046FAB: fstp dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17046FAE: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046FB0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17046FB2: fstp dword ptr [eax + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046FB5: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17046FB7: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053A0); /* 0x17046FBA: fmul dword ptr [0x170053a0] */
    fp_push(_st[0]); /* 0x17046FC0: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046FC2: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17046FC4: fstp dword ptr [eax + 0x28] */
    _st[0] *= _st[1]; /* 0x17046FC7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17046FC9: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17046FCC: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x170053C0); /* 0x17046FCF: fmul dword ptr [0x170053c0] */
    _st[0] -= (double)*(float*)ADDR(0x170053BC); /* 0x17046FD5: fsub dword ptr [0x170053bc] */
    fp_push(_st[0]); /* 0x17046FDB: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046FDD: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x48) = _v; } /* 0x17046FDF: fstp dword ptr [eax + 0x48] */
    _st[0] *= _st[1]; /* 0x17046FE2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x58) = _v; } /* 0x17046FE4: fstp dword ptr [eax + 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17046FE7: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x170053E8); /* 0x17046FEA: fmul dword ptr [0x170053e8] */
    _st[0] -= (double)*(float*)ADDR(0x170053E4); /* 0x17046FF0: fsub dword ptr [0x170053e4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17046FF6: fmul dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x17046FF9: fld st(0) */
    _st[0] *= _st[3]; /* 0x17046FFB: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x70) = _v; } /* 0x17046FFD: fstp dword ptr [eax + 0x70] */
    _st[0] *= _st[1]; /* 0x17047000: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x80) = _v; } /* 0x17047002: fstp dword ptr [eax + 0x80] */
    fp_push(_st[1]); /* 0x17047008: fld st(1) */
    _st[0] *= _st[3]; /* 0x1704700A: fmul st(3) */
    fp_push(_st[1]); /* 0x1704700C: fld st(1) */
    _st[0] *= _st[5]; /* 0x1704700E: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047010: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17047012: fstp dword ptr [ebp + 0x14] */
    _st[0] *= _st[2]; /* 0x17047015: fmul st(2) */
    fp_push(_st[1]); /* 0x17047017: fld st(1) */
    _st[0] *= _st[4]; /* 0x17047019: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704701B: fsubp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704701D: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704701F: fld dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x1700539C)); /* 0x17047022: fld dword ptr [0x1700539c] */
    fp_push(_st[1]); /* 0x17047028: fld st(1) */
    _st[0] *= _st[1]; /* 0x1704702A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1704702C: fstp dword ptr [eax + 0x24] */
    fp_push(_st[2]); /* 0x1704702F: fld st(2) */
    _st[0] *= _st[1]; /* 0x17047031: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17047033: fstp dword ptr [eax + 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047036: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17047038: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053B8); /* 0x1704703B: fmul dword ptr [0x170053b8] */
    fp_push(_st[0]); /* 0x17047041: fld st(0) */
    _st[0] *= _st[2]; /* 0x17047043: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x44) = _v; } /* 0x17047045: fstp dword ptr [eax + 0x44] */
    _st[0] *= _st[2]; /* 0x17047048: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x5C) = _v; } /* 0x1704704A: fstp dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704704D: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x170053E0); /* 0x17047050: fmul dword ptr [0x170053e0] */
    _st[0] = (double)*(float*)ADDR(0x170053DC) - _st[0]; /* 0x17047056: fsubr dword ptr [0x170053dc] */
    fp_push(_st[0]); /* 0x1704705C: fld st(0) */
    _st[0] *= _st[2]; /* 0x1704705E: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x6C) = _v; } /* 0x17047060: fstp dword ptr [eax + 0x6c] */
    _st[0] *= _st[2]; /* 0x17047063: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x84) = _v; } /* 0x17047065: fstp dword ptr [eax + 0x84] */
    fp_push(_st[0]); /* 0x1704706B: fld st(0) */
    _st[0] *= _st[3]; /* 0x1704706D: fmul st(3) */
    fp_push(_st[2]); /* 0x1704706F: fld st(2) */
    _st[0] *= _st[5]; /* 0x17047071: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047073: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17047075: fstp dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x17047078: fld st(1) */
    _st[0] *= _st[3]; /* 0x1704707A: fmul st(3) */
    fp_push(_st[1]); /* 0x1704707C: fld st(1) */
    _st[0] *= _st[5]; /* 0x1704707E: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047080: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047082: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047084: fstp st(0) */
    fp_push(*(float*)&MEM32(0x170053B4)); /* 0x17047086: fld dword ptr [0x170053b4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704708C: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x1704708F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x17047091: fstp dword ptr [eax + 0x40] */
    fp_push(_st[1]); /* 0x17047094: fld st(1) */
    _st[0] *= _st[1]; /* 0x17047096: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x60) = _v; } /* 0x17047098: fstp dword ptr [eax + 0x60] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704709B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704709D: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053D8); /* 0x170470A0: fmul dword ptr [0x170053d8] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170470A6: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x170470A9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x68) = _v; } /* 0x170470AB: fstp dword ptr [eax + 0x68] */
    _st[0] *= _st[1]; /* 0x170470AE: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x88) = _v; } /* 0x170470B0: fstp dword ptr [eax + 0x88] */
    fp_push(*(float*)&MEM32(0x170053D4)); /* 0x170470B6: fld dword ptr [0x170053d4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170470BC: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[3]; /* 0x170470BF: fmul st(3) */
    fp_push(_st[2]); /* 0x170470C1: fld st(2) */
    _st[0] *= _st[5]; /* 0x170470C3: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170470C5: faddp st(1) */
    _st[0] *= _st[1]; /* 0x170470C7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x64) = _v; } /* 0x170470C9: fstp dword ptr [eax + 0x64] */
    fp_push(_st[1]); /* 0x170470CC: fld st(1) */
    _st[0] *= _st[3]; /* 0x170470CE: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170470D0: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[5]; /* 0x170470D3: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170470D5: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x170470D7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8C) = _v; } /* 0x170470D9: fstp dword ptr [eax + 0x8c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170470DF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170470E1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170470E3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170470E5: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170470E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170470E8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170470F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170470F0u);

L_170470F0:
    fp_push(*(float*)&MEM32(0x1723C99C)); /* 0x170470F0: fld dword ptr [0x1723c99c] */
    fp_push(*(float*)&MEM32(0x1723C9A0)); /* 0x170470F6: fld dword ptr [0x1723c9a0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x170470FC: fmul dword ptr [eax + 0x14] */
    fp_push(_st[1]); /* 0x170470FF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047101: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047104: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17047106: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723C9A4)); /* 0x17047108: fld dword ptr [0x1723c9a4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704710E: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17047111: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723C9A8)); /* 0x17047114: fld dword ptr [0x1723c9a8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704711A: fmul dword ptr [eax + 0xc] */
    fp_push(_st[1]); /* 0x1704711D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704711F: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047122: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17047124: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(0x1723C9B8)); /* 0x17047127: fld dword ptr [0x1723c9b8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704712D: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723C9A0)); /* 0x1704712F: fld dword ptr [0x1723c9a0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047135: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047138: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704713A: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9B0)); /* 0x1704713D: fld dword ptr [0x1723c9b0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17047143: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9AC)); /* 0x17047146: fld dword ptr [0x1723c9ac] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x1704714C: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704714F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x17047151: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(0x1723C9A8)); /* 0x17047154: fld dword ptr [0x1723c9a8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704715A: fmul dword ptr [eax] */
    fp_push(_st[1]); /* 0x1704715C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1704715E: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047161: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x17047163: fstp dword ptr [ecx + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047166: fstp st(0) */
    fp_push(*(float*)&MEM32(0x1723C9B4)); /* 0x17047168: fld dword ptr [0x1723c9b4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1704716E: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9B0)); /* 0x17047171: fld dword ptr [0x1723c9b0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047177: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704717A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x1704717C: fstp dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704717F: ret  */
    RECOMP_REGS_OUT();
}

void sub_17047185(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17047185u);

L_17047185:
    fp_push(*(float*)&MEM32(0x1723C9A8)); /* 0x17047185: fld dword ptr [0x1723c9a8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704718B: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723C9B8)); /* 0x1704718E: fld dword ptr [0x1723c9b8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047194: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047197: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17047199: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723C9A4)); /* 0x1704719B: fld dword ptr [0x1723c9a4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170471A1: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x170471A4: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723C99C)); /* 0x170471A7: fld dword ptr [0x1723c99c] */
    fp_push(*(float*)&MEM32(0x1723C9A0)); /* 0x170471AD: fld dword ptr [0x1723c9a0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170471B3: fmul dword ptr [eax + 0xc] */
    fp_push(_st[1]); /* 0x170471B6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x170471B8: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170471BB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x170471BD: fstp dword ptr [ecx + 8] */
    fp_push(_st[0]); /* 0x170471C0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170471C2: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723C9A8)); /* 0x170471C4: fld dword ptr [0x1723c9a8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170471CA: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170471CD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x170471CF: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9B0)); /* 0x170471D2: fld dword ptr [0x1723c9b0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170471D8: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9AC)); /* 0x170471DB: fld dword ptr [0x1723c9ac] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170471E1: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170471E4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x170471E6: fstp dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170471E9: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x1723C9A0)); /* 0x170471EC: fld dword ptr [0x1723c9a0] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170471F2: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170471F4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x170471F6: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(0x1723C9B4)); /* 0x170471F9: fld dword ptr [0x1723c9b4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170471FF: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9B0)); /* 0x17047202: fld dword ptr [0x1723c9b0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047208: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704720B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x1704720D: fstp dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17047210: ret  */
    RECOMP_REGS_OUT();
}

void sub_17047216(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17047216u);

L_17047216:
    fp_push(*(float*)&MEM32(0x1723C9BC)); /* 0x17047216: fld dword ptr [0x1723c9bc] */
    fp_push(*(float*)&MEM32(0x1723C9C0)); /* 0x1704721C: fld dword ptr [0x1723c9c0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17047222: fmul dword ptr [eax + 0x1c] */
    fp_push(_st[1]); /* 0x17047225: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17047227: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704722A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704722C: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723C9C8)); /* 0x1704722E: fld dword ptr [0x1723c9c8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047234: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9C4)); /* 0x17047237: fld dword ptr [0x1723c9c4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704723D: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047240: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17047242: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723C9CC)); /* 0x17047245: fld dword ptr [0x1723c9cc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704724B: fmul dword ptr [eax + 0x14] */
    fp_push(_st[1]); /* 0x1704724E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17047250: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047253: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17047255: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(0x1723C9D0)); /* 0x17047258: fld dword ptr [0x1723c9d0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704725E: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9C8)); /* 0x17047261: fld dword ptr [0x1723c9c8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17047267: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704726A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704726C: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9DC)); /* 0x1704726F: fld dword ptr [0x1723c9dc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047275: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9D8)); /* 0x17047278: fld dword ptr [0x1723c9d8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1704727E: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047281: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9D4)); /* 0x17047283: fld dword ptr [0x1723c9d4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047289: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704728C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x1704728E: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(0x1723C9C0)); /* 0x17047291: fld dword ptr [0x1723c9c0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047297: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x1723C9EC)); /* 0x1704729A: fld dword ptr [0x1723c9ec] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170472A0: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170472A2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x170472A4: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(0x1723C9E4)); /* 0x170472A7: fld dword ptr [0x1723c9e4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170472AD: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9E0)); /* 0x170472B0: fld dword ptr [0x1723c9e0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170472B6: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170472B9: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9D8)); /* 0x170472BB: fld dword ptr [0x1723c9d8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170472C1: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170472C4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x170472C6: fstp dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9CC)); /* 0x170472C9: fld dword ptr [0x1723c9cc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170472CF: fmul dword ptr [eax] */
    fp_push(_st[1]); /* 0x170472D1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170472D3: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170472D6: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x170472D8: fstp dword ptr [ecx + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170472DB: fstp st(0) */
    fp_push(*(float*)&MEM32(0x1723C9E8)); /* 0x170472DD: fld dword ptr [0x1723c9e8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170472E3: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9E4)); /* 0x170472E6: fld dword ptr [0x1723c9e4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170472EC: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170472EF: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9DC)); /* 0x170472F1: fld dword ptr [0x1723c9dc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170472F7: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170472FA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x170472FC: fstp dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170472FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_17047305(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17047305u);

L_17047305:
    fp_push(*(float*)&MEM32(0x1723C9CC)); /* 0x17047305: fld dword ptr [0x1723c9cc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1704730B: fmul dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(0x1723C9EC)); /* 0x1704730E: fld dword ptr [0x1723c9ec] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17047314: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047317: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17047319: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723C9C8)); /* 0x1704731B: fld dword ptr [0x1723c9c8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047321: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9C4)); /* 0x17047324: fld dword ptr [0x1723c9c4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704732A: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704732D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704732F: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723C9BC)); /* 0x17047332: fld dword ptr [0x1723c9bc] */
    fp_push(*(float*)&MEM32(0x1723C9C0)); /* 0x17047338: fld dword ptr [0x1723c9c0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704733E: fmul dword ptr [eax + 0x14] */
    fp_push(_st[1]); /* 0x17047341: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17047343: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047346: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17047348: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(0x1723C9D0)); /* 0x1704734B: fld dword ptr [0x1723c9d0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047351: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9C8)); /* 0x17047354: fld dword ptr [0x1723c9c8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704735A: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704735D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704735F: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9DC)); /* 0x17047362: fld dword ptr [0x1723c9dc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047368: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9D8)); /* 0x1704736B: fld dword ptr [0x1723c9d8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17047371: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047374: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9D4)); /* 0x17047376: fld dword ptr [0x1723c9d4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x1704737C: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704737F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x17047381: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(0x1723C9CC)); /* 0x17047384: fld dword ptr [0x1723c9cc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1704738A: fmul dword ptr [eax + 8] */
    fp_push(_st[1]); /* 0x1704738D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704738F: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047391: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x17047393: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(0x1723C9E4)); /* 0x17047396: fld dword ptr [0x1723c9e4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x1704739C: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9E0)); /* 0x1704739F: fld dword ptr [0x1723c9e0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170473A5: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170473A8: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9D8)); /* 0x170473AA: fld dword ptr [0x1723c9d8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170473B0: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170473B3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x170473B5: fstp dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170473B8: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x1723C9C0)); /* 0x170473BB: fld dword ptr [0x1723c9c0] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170473C1: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170473C3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x170473C5: fstp dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(0x1723C9E8)); /* 0x170473C8: fld dword ptr [0x1723c9e8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170473CE: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9E4)); /* 0x170473D1: fld dword ptr [0x1723c9e4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170473D7: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170473DA: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9DC)); /* 0x170473DC: fld dword ptr [0x1723c9dc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170473E2: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170473E5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x170473E7: fstp dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170473EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_170473F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170473F0u);

L_170473F0:
    fp_push(*(float*)&MEM32(0x1723C9F0)); /* 0x170473F0: fld dword ptr [0x1723c9f0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x170473F6: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723C9F8)); /* 0x170473F9: fld dword ptr [0x1723c9f8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170473FF: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047402: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9F4)); /* 0x17047404: fld dword ptr [0x1723c9f4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1704740A: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704740D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704740F: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723CA00)); /* 0x17047411: fld dword ptr [0x1723ca00] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047417: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9FC)); /* 0x1704741A: fld dword ptr [0x1723c9fc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17047420: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047423: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17047425: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723CA04)); /* 0x17047428: fld dword ptr [0x1723ca04] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704742E: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA0C)); /* 0x17047431: fld dword ptr [0x1723ca0c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x17047437: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704743A: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA08)); /* 0x1704743C: fld dword ptr [0x1723ca08] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17047442: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047445: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17047447: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(0x1723CA10)); /* 0x1704744A: fld dword ptr [0x1723ca10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047450: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723CA00)); /* 0x17047453: fld dword ptr [0x1723ca00] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17047459: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704745C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704745E: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723CA14)); /* 0x17047461: fld dword ptr [0x1723ca14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17047467: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA1C)); /* 0x1704746A: fld dword ptr [0x1723ca1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x17047470: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047473: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA18)); /* 0x17047475: fld dword ptr [0x1723ca18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1704747B: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704747E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x17047480: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(0x1723CA48)); /* 0x17047483: fld dword ptr [0x1723ca48] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047489: fmul dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(0x1723CA44)); /* 0x1704748C: fld dword ptr [0x1723ca44] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047492: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047495: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA38)); /* 0x17047497: fld dword ptr [0x1723ca38] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704749D: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704749F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x170474A1: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA20)); /* 0x170474A4: fld dword ptr [0x1723ca20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170474AA: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA28)); /* 0x170474AD: fld dword ptr [0x1723ca28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x170474B3: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170474B6: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA24)); /* 0x170474B8: fld dword ptr [0x1723ca24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170474BE: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170474C1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x170474C3: fstp dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA3C)); /* 0x170474C6: fld dword ptr [0x1723ca3c] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170474CC: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723CA08)); /* 0x170474CE: fld dword ptr [0x1723ca08] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170474D4: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170474D7: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA18)); /* 0x170474D9: fld dword ptr [0x1723ca18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170474DF: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170474E2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x170474E4: fstp dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(0x1723CA24)); /* 0x170474E7: fld dword ptr [0x1723ca24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170474ED: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA30)); /* 0x170474F0: fld dword ptr [0x1723ca30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x170474F6: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170474F9: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA2C)); /* 0x170474FB: fld dword ptr [0x1723ca2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047501: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047504: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x17047506: fstp dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(0x1723CA40)); /* 0x17047509: fld dword ptr [0x1723ca40] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704750F: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723CA0C)); /* 0x17047511: fld dword ptr [0x1723ca0c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047517: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704751A: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA1C)); /* 0x1704751C: fld dword ptr [0x1723ca1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047522: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047525: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x24) = _v; } /* 0x17047527: fstp dword ptr [ecx + 0x24] */
    fp_push(*(float*)&MEM32(0x1723CA28)); /* 0x1704752A: fld dword ptr [0x1723ca28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17047530: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA34)); /* 0x17047533: fld dword ptr [0x1723ca34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x17047539: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704753C: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA30)); /* 0x1704753E: fld dword ptr [0x1723ca30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047544: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047547: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x28) = _v; } /* 0x17047549: fstp dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704754C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17047552(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17047552u);

L_17047552:
    fp_push(*(float*)&MEM32(0x1723CA38)); /* 0x17047552: fld dword ptr [0x1723ca38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17047558: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA40)); /* 0x1704755B: fld dword ptr [0x1723ca40] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x17047561: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047564: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA3C)); /* 0x17047566: fld dword ptr [0x1723ca3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1704756C: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704756F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17047571: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(0x1723CA00)); /* 0x17047573: fld dword ptr [0x1723ca00] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047579: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723C9FC)); /* 0x1704757C: fld dword ptr [0x1723c9fc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17047582: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047585: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17047587: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(0x1723CA44)); /* 0x1704758A: fld dword ptr [0x1723ca44] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17047590: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA08)); /* 0x17047593: fld dword ptr [0x1723ca08] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17047599: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704759C: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA0C)); /* 0x1704759E: fld dword ptr [0x1723ca0c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170475A4: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170475A7: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x170475A9: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(0x1723CA10)); /* 0x170475AC: fld dword ptr [0x1723ca10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170475B2: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x1723CA00)); /* 0x170475B5: fld dword ptr [0x1723ca00] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170475BB: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170475BE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x170475C0: fstp dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(0x1723CA48)); /* 0x170475C3: fld dword ptr [0x1723ca48] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x170475C9: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA18)); /* 0x170475CC: fld dword ptr [0x1723ca18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x170475D2: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170475D5: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA1C)); /* 0x170475D7: fld dword ptr [0x1723ca1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170475DD: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170475E0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x170475E2: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(0x1723CA14)); /* 0x170475E5: fld dword ptr [0x1723ca14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170475EB: fmul dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(0x1723CA04)); /* 0x170475EE: fld dword ptr [0x1723ca04] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170475F4: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170475F7: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723C9F0)); /* 0x170475F9: fld dword ptr [0x1723c9f0] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170475FF: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047601: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x17047603: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(0x1723CA20)); /* 0x17047606: fld dword ptr [0x1723ca20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1704760C: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA28)); /* 0x1704760F: fld dword ptr [0x1723ca28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x17047615: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047618: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA24)); /* 0x1704761A: fld dword ptr [0x1723ca24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047620: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047623: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x17047625: fstp dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(0x1723C9F4)); /* 0x17047628: fld dword ptr [0x1723c9f4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704762E: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723CA18)); /* 0x17047630: fld dword ptr [0x1723ca18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047636: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047639: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA08)); /* 0x1704763B: fld dword ptr [0x1723ca08] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047641: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047644: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x17047646: fstp dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(0x1723CA24)); /* 0x17047649: fld dword ptr [0x1723ca24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1704764F: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA30)); /* 0x17047652: fld dword ptr [0x1723ca30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x17047658: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704765B: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA2C)); /* 0x1704765D: fld dword ptr [0x1723ca2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17047663: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047666: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x17047668: fstp dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(0x1723C9F8)); /* 0x1704766B: fld dword ptr [0x1723c9f8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17047671: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x1723CA1C)); /* 0x17047673: fld dword ptr [0x1723ca1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17047679: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704767C: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA0C)); /* 0x1704767E: fld dword ptr [0x1723ca0c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047684: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047687: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x24) = _v; } /* 0x17047689: fstp dword ptr [ecx + 0x24] */
    fp_push(*(float*)&MEM32(0x1723CA28)); /* 0x1704768C: fld dword ptr [0x1723ca28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17047692: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(0x1723CA34)); /* 0x17047695: fld dword ptr [0x1723ca34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x1704769B: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704769E: faddp st(1) */
    fp_push(*(float*)&MEM32(0x1723CA30)); /* 0x170476A0: fld dword ptr [0x1723ca30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170476A6: fmul dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170476A9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x28) = _v; } /* 0x170476AB: fstp dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170476AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_170476B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170476B4u);

L_170476B4:
    edi = edi; /* 0x170476B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170476B6: push ebp */
    ebp = esp; /* 0x170476B7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x170476B9: sub esp, 0x94 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x170476BF: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170476C2: fld dword ptr [0x17001424] */
    eax = MEM32(edx + 0x20); /* 0x170476C8: mov eax, dword ptr [edx + 0x20] */
    MEM32(ebp + 0x8) = eax; /* 0x170476CB: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170476CE: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x170476D1: fmul dword ptr [ebp + 8] */
    _st[0] = _st[1] - _st[0]; /* 0x170476D4: fsubr st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170476D6: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x170476D8: fcom dword ptr [0x17001f4c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170476DE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170476E0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17047733; /* 0x170476E3: jne 0x17047733 */
L_170476E5:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170476E5: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x170476E8: fld dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x170476EB: fld dword ptr [edx + 0x18] */
    fp_push(_st[0]); /* 0x170476EE: fld st(0) */
    _st[0] *= _st[1]; /* 0x170476F0: fmul st(1) */
    fp_push(_st[2]); /* 0x170476F2: fld st(2) */
    _st[0] *= _st[3]; /* 0x170476F4: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170476F6: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170476F8: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170476FA: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170476FC: fstp st(0) */
    _st[0] = _st[1] / _st[0]; /* 0x170476FE: fdivr st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17047700: fst dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17047703: fmul dword ptr [edx + 0x18] */
    _st[0] = -_st[0]; /* 0x17047706: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17047708: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1704770B: fmul dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x1704770E: fld dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17047711: fld dword ptr [edx + 8] */
    fp_push(_st[0]); /* 0x17047714: fld st(0) */
    _st[0] *= _st[1]; /* 0x17047716: fmul st(1) */
    fp_push(_st[2]); /* 0x17047718: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704771A: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704771C: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1704771E: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047720: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047722: fstp st(0) */
    _st[0] = _st[3] / _st[0]; /* 0x17047724: fdivr st(3) */
    fp_push(_st[0]); /* 0x17047726: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17047728: fmul dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704772B: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704772E: fmul dword ptr [edx + 0x14] */
    goto L_1704774B; /* 0x17047731: jmp 0x1704774b */
L_17047733:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047733: fstp st(0) */
    fp_push(1.0); /* 0x17047735: fld1  */
    fp_push(0.0); /* 0x17047737: fldz  */
    fp_push(0.0); /* 0x17047739: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704773B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704773E: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17047741: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17047743: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17047746: fld dword ptr [edx + 4] */
    _st[0] = -_st[0]; /* 0x17047749: fchs  */
L_1704774B:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704774B: fst dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x1704774E: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17047751: fld dword ptr [0x170018cc] */
    ecx = MEM32(ebp + 0x10); /* 0x17047757: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(_st[3]); /* 0x1704775A: fld st(3) */
    _st[0] *= _st[1]; /* 0x1704775C: fmul st(1) */
    fp_push(_st[0]); /* 0x1704775E: fld st(0) */
    _st[0] *= _st[5]; /* 0x17047760: fmul st(5) */
    _st[0] -= _st[6]; /* 0x17047762: fsub st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17047764: fstp dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x17047767: fld st(0) */
    _st[0] *= _st[4]; /* 0x17047769: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1704776B: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x1704776E: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[1]; /* 0x17047771: fmul st(1) */
    _st[0] -= _st[5]; /* 0x17047773: fsub st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17047775: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17047778: fld dword ptr [ebp - 0x4c] */
    _st[0] *= _st[1]; /* 0x1704777B: fmul st(1) */
    _st[0] -= _st[4]; /* 0x1704777D: fsub st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1704777F: fstp dword ptr [ebp - 0x48] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047782: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047784: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17047787: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047789: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x1704778C: fmul st(1) */
    _st[0] -= _st[6]; /* 0x1704778E: fsub st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17047790: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17047796: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x17047799: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1704779B: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1704779E: fld dword ptr [ebp - 0x8c] */
    _st[0] *= _st[1]; /* 0x170477A4: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x170477A6: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x170477A9: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x170477AF: fld dword ptr [ebp - 0x74] */
    _st[0] *= _st[1]; /* 0x170477B2: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170477B4: fsub dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x170477B7: fstp dword ptr [ebp - 0x70] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170477BA: fstp st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170477BC: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170477BF: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x170477C2: fmul st(1) */
    _st[0] -= _st[5]; /* 0x170477C4: fsub st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x170477C6: fstp dword ptr [ebp - 0x58] */
    fp_push(_st[0]); /* 0x170477C9: fld st(0) */
    _st[0] *= _st[2]; /* 0x170477CB: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x170477CD: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x170477D0: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[1]; /* 0x170477D3: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170477D5: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x170477D8: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x170477DB: fld dword ptr [ebp - 0x68] */
    _st[0] *= _st[1]; /* 0x170477DE: fmul st(1) */
    _st[0] -= _st[2]; /* 0x170477E0: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x170477E2: fstp dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170477E5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170477E7: fstp st(0) */
    fp_push(*(float*)&MEM32(eax)); /* 0x170477E9: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x170477EB: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170477ED: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x170477F0: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x170477F3: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170477F6: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170477F9: fsubp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x170477FB: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170477FE: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047801: fsubp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17047803: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17047806: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17047809: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1704780C: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704780F: fsubp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17047811: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047813: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047816: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17047818: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704781B: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x1704781E: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17047821: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047824: fsubp st(1) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x17047826: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17047829: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704782C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704782E: fstp dword ptr [ecx + 4] */
    fp_push(_st[1]); /* 0x17047831: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17047833: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x17047836: fstp dword ptr [ecx + 0xc] */
    edx = MEM32(eax + 0x18); /* 0x17047839: mov edx, dword ptr [eax + 0x18] */
    MEM32(ecx + 0x18) = edx; /* 0x1704783C: mov dword ptr [ecx + 0x18], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704783F: fstp st(0) */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x17047841: fld dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x17047844: fld dword ptr [eax + 0x14] */
    fp_push(_st[0]); /* 0x17047847: fld st(0) */
    _st[0] *= _st[4]; /* 0x17047849: fmul st(4) */
    fp_push(_st[2]); /* 0x1704784B: fld st(2) */
    _st[0] *= _st[4]; /* 0x1704784D: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704784F: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x17047851: fst dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x17047857: fstp dword ptr [ecx + 0x14] */
    fp_push(_st[1]); /* 0x1704785A: fld st(1) */
    _st[0] *= _st[4]; /* 0x1704785C: fmul st(4) */
    fp_push(_st[1]); /* 0x1704785E: fld st(1) */
    _st[0] *= _st[4]; /* 0x17047860: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047862: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047864: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047866: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x17047868: fst dword ptr [ecx + 0x1c] */
    edx = MEM32(eax + 0x20); /* 0x1704786B: mov edx, dword ptr [eax + 0x20] */
    MEM32(ebp + 0xC) = edx; /* 0x1704786E: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(eax + 0x10); /* 0x17047871: mov edx, dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17047874: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17047877: fmul dword ptr [ebp - 0x80] */
    MEM32(ebp + 0x10) = edx; /* 0x1704787A: mov dword ptr [ebp + 0x10], edx */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704787D: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17047880: fmul dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047883: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x17047885: fstp dword ptr [ebp - 0x60] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x17047888: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704788E: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(0x1723C98C)); /* 0x17047891: fld dword ptr [0x1723c98c] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x17047897: fld dword ptr [ebp - 0x94] */
    _st[0] *= _st[1]; /* 0x1704789D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1704789F: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(0x1723C994)); /* 0x170478A2: fld dword ptr [0x1723c994] */
    fp_push(*(float*)&MEM32(0x1723C990)); /* 0x170478A8: fld dword ptr [0x1723c990] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x170478AE: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x170478B1: fld dword ptr [ebp - 0x60] */
    _st[0] *= _st[2]; /* 0x170478B4: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170478B6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170478B8: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x170478BB: fmul dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170478BE: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x170478C1: fmul dword ptr [ebp - 0x80] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170478C4: faddp st(1) */
    _st[0] *= _st[3]; /* 0x170478C6: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170478C8: fstp dword ptr [ebp - 0x30] */
    fp_push(_st[1]); /* 0x170478CB: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x170478CD: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x170478D0: fld dword ptr [ebp - 0x60] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x170478D3: fmul dword ptr [0x1723c998] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170478D9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170478DB: fstp dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170478DE: fst dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170478E1: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x170478E4: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170478E7: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170478EA: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170478ED: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170478EF: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170478F2: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x170478F5: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170478F8: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170478FB: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170478FE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17047900: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17047903: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047906: fmul dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17047909: fld dword ptr [ebp - 0x8c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x1704790F: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047912: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17047914: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17047917: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x1704791A: fmul dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17047920: fld dword ptr [ebp - 0x74] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17047923: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047926: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17047928: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1704792B: fld dword ptr [ebp - 0x14] */
    _st[0] *= _st[3]; /* 0x1704792E: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17047930: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17047933: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[3]; /* 0x17047936: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17047938: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704793B: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[2]; /* 0x1704793E: fmul st(2) */
    fp_push(_st[1]); /* 0x17047940: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C990); /* 0x17047942: fmul dword ptr [0x1723c990] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047948: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1704794A: fstp dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + (-0x34)); /* 0x1704794D: mov edx, dword ptr [ebp - 0x34] */
    MEM32(ecx + 0x18) = edx; /* 0x17047950: mov dword ptr [ecx + 0x18], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047953: fstp st(0) */
    edx = ecx + 0x24; /* 0x17047955: lea edx, [ecx + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047958: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x1704795B: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17047961: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17047964: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x17047967: fmul dword ptr [0x1723c998] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704796D: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[2]; /* 0x17047970: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047972: faddp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047974: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047976: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17047978: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704797B: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704797E: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047981: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047984: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x17047986: fstp dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17047989: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704798C: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704798F: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047992: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047995: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x17047997: fstp dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x1704799A: fld dword ptr [ebp - 0x68] */
    _st[0] *= _st[1]; /* 0x1704799D: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1704799F: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x170479A2: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170479A5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x170479A7: fstp dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x170479AA: fmul dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x170479AD: fld dword ptr [ebp - 0x68] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x170479B0: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170479B3: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x170479B5: fstp dword ptr [ecx + 0x20] */
    ecx = MEM32(eax + 0x30); /* 0x170479B8: mov ecx, dword ptr [eax + 0x30] */
    MEM32(edx + 0xC) = ecx; /* 0x170479BB: mov dword ptr [edx + 0xc], ecx */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x170479BE: fld dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x170479C1: fld dword ptr [eax + 0x2c] */
    fp_push(_st[0]); /* 0x170479C4: fld st(0) */
    _st[0] *= _st[4]; /* 0x170479C6: fmul st(4) */
    fp_push(_st[2]); /* 0x170479C8: fld st(2) */
    _st[0] *= _st[4]; /* 0x170479CA: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170479CC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x170479CE: fstp dword ptr [edx + 8] */
    fp_push(_st[1]); /* 0x170479D1: fld st(1) */
    _st[0] *= _st[4]; /* 0x170479D3: fmul st(4) */
    fp_push(_st[1]); /* 0x170479D5: fld st(1) */
    _st[0] *= _st[4]; /* 0x170479D7: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170479D9: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x10) = _v; } /* 0x170479DB: fstp dword ptr [edx + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170479DE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170479E0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170479E2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170479E4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170479E6: fstp st(0) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x170479E8: fld dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x170479EB: fld dword ptr [eax + 0x28] */
    fp_push(_st[1]); /* 0x170479EE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x170479F0: fmul dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x170479F3: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x170479F5: fmul dword ptr [ebp - 0x80] */
    ecx = ebp + (-0x28); /* 0x170479F8: lea ecx, [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170479FB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x170479FD: fstp dword ptr [edx + 4] */
    fp_push(_st[1]); /* 0x17047A00: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17047A02: fmul dword ptr [ebp - 0x80] */
    fp_push(_st[1]); /* 0x17047A05: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17047A07: fmul dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047A0A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x14) = _v; } /* 0x17047A0C: fstp dword ptr [edx + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047A0F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047A11: fstp st(0) */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x17047A13: fld dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x17047A16: fld dword ptr [eax + 0x24] */
    eax = edx; /* 0x17047A19: mov eax, edx */
    fp_push(_st[1]); /* 0x17047A1B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17047A1D: fmul dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x17047A20: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x17047A22: fmul dword ptr [ebp - 0x7c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047A25: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17047A27: fstp dword ptr [edx] */
    fp_push(_st[1]); /* 0x17047A29: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x17047A2B: fmul dword ptr [ebp - 0x7c] */
    fp_push(_st[1]); /* 0x17047A2E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17047A30: fmul dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047A33: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x18) = _v; } /* 0x17047A35: fstp dword ptr [edx + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047A38: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047A3A: fstp st(0) */
    RECOMP_CALL(sub_170470F0); /* 0x17047A3C: call 0x170470f0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047A41: fld dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17047A44: mov eax, dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047A47: fmul dword ptr [ebp + 8] */
    MEM32(ebp + (-0x38)) = eax; /* 0x17047A4A: mov dword ptr [ebp - 0x38], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047A4D: fld dword ptr [ebp - 0x18] */
    eax = ebp + (-0x44); /* 0x17047A50: lea eax, [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047A53: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047A56: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17047A58: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047A5B: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047A5E: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047A61: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047A64: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047A67: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17047A69: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17047A6C: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x17047A6F: fmul dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17047A75: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047A78: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047A7B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17047A7D: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17047A80: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x17047A83: fmul dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17047A89: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047A8C: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047A8F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17047A91: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17047A94: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17047A97: fmul dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17047A9A: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17047A9D: fmul dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047AA3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17047AA5: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17047AA8: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17047AAB: fmul dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17047AB1: fld dword ptr [ebp - 0x70] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x17047AB4: fmul dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047AB7: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17047AB9: fstp dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_17047185); /* 0x17047ABC: call 0x17047185 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047AC1: fld dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17047AC4: mov eax, dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047AC7: fmul dword ptr [ebp - 8] */
    MEM32(edx + 0xC) = eax; /* 0x17047ACA: mov dword ptr [edx + 0xc], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047ACD: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047AD0: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047AD3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x17047AD5: fstp dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047AD8: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047ADB: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047ADE: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047AE1: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047AE4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x10) = _v; } /* 0x17047AE6: fstp dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17047AE9: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x68)); /* 0x17047AEC: fmul dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17047AEF: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17047AF2: fmul dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047AF5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x17047AF7: fstp dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17047AFA: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17047AFD: fmul dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17047B00: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x68)); /* 0x17047B03: fmul dword ptr [ebp - 0x68] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047B06: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x14) = _v; } /* 0x17047B08: fstp dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17047B0B: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17047B0E: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17047B11: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x17047B14: fmul dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047B17: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17047B19: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17047B1B: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17047B1E: fmul dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x17047B21: fld dword ptr [ebp - 0x64] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x17047B24: fmul dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047B27: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x18) = _v; } /* 0x17047B29: fstp dword ptr [edx + 0x18] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17047B2C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17047B2D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17047B35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17047B35u);

L_17047B35:
    edi = edi; /* 0x17047B35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17047B37: push ebp */
    ebp = esp; /* 0x17047B38: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x17047B3A: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x17047B40: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17047B43: fld dword ptr [0x17001424] */
    eax = MEM32(ecx + 0x20); /* 0x17047B49: mov eax, dword ptr [ecx + 0x20] */
    MEM32(ebp + 0x8) = eax; /* 0x17047B4C: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047B4F: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047B52: fmul dword ptr [ebp + 8] */
    _st[0] = _st[1] - _st[0]; /* 0x17047B55: fsubr st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17047B57: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x17047B59: fcom dword ptr [0x17001f4c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17047B5F: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17047B61: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17047BB6; /* 0x17047B64: jne 0x17047bb6 */
L_17047B66:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17047B66: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17047B69: fld dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17047B6C: fld dword ptr [ecx + 0x18] */
    fp_push(_st[0]); /* 0x17047B6F: fld st(0) */
    _st[0] *= _st[1]; /* 0x17047B71: fmul st(1) */
    fp_push(_st[2]); /* 0x17047B73: fld st(2) */
    _st[0] *= _st[3]; /* 0x17047B75: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047B77: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17047B79: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047B7B: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047B7D: fstp st(0) */
    _st[0] = _st[1] / _st[0]; /* 0x17047B7F: fdivr st(1) */
    fp_push(_st[0]); /* 0x17047B81: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17047B83: fmul dword ptr [ecx + 0x18] */
    _st[0] = -_st[0]; /* 0x17047B86: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17047B88: fstp dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17047B8B: fmul dword ptr [ecx + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17047B8E: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17047B91: fld dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17047B94: fld dword ptr [ecx + 8] */
    fp_push(_st[0]); /* 0x17047B97: fld st(0) */
    _st[0] *= _st[1]; /* 0x17047B99: fmul st(1) */
    fp_push(_st[2]); /* 0x17047B9B: fld st(2) */
    _st[0] *= _st[3]; /* 0x17047B9D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047B9F: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17047BA1: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047BA3: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047BA5: fstp st(0) */
    _st[0] = _st[1] / _st[0]; /* 0x17047BA7: fdivr st(1) */
    fp_push(_st[0]); /* 0x17047BA9: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17047BAB: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17047BAE: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17047BB1: fmul dword ptr [ecx + 0x14] */
    goto L_17047BD4; /* 0x17047BB4: jmp 0x17047bd4 */
L_17047BB6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047BB6: fstp st(0) */
    fp_push(1.0); /* 0x17047BB8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17047BBA: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x17047BBD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17047BBF: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x17047BC2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17047BC4: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047BC7: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17047BCA: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17047BCC: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17047BCF: fld dword ptr [ecx + 4] */
    _st[0] = -_st[0]; /* 0x17047BD2: fchs  */
L_17047BD4:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17047BD4: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x17047BD7: push esi */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17047BD8: fld dword ptr [0x170018cc] */
    PUSH32(esp, edi); /* 0x17047BDE: push edi */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17047BDF: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17047BE2: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17047BE4: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17047BE7: fmul st(1) */
    _st[0] -= _st[3]; /* 0x17047BE9: fsub st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x17047BEB: fst dword ptr [ebp - 0x74] */
    fp_push(_st[1]); /* 0x17047BEE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047BF0: fmul dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17047BF3: fstp dword ptr [ebp - 0x44] */
    fp_push(_st[1]); /* 0x17047BF6: fld st(1) */
    _st[0] *= _st[1]; /* 0x17047BF8: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047BFA: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17047BFD: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17047C00: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[2]; /* 0x17047C03: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047C05: fsub dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17047C08: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17047C0B: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[2]; /* 0x17047C0E: fmul st(2) */
    _st[0] -= _st[1]; /* 0x17047C10: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17047C12: fstp dword ptr [ebp - 0x6c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047C15: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17047C17: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x17047C1A: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17047C1C: fsub dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17047C1F: fstp dword ptr [ebp - 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047C22: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047C24: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17047C27: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17047C29: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17047C2C: fmul st(1) */
    _st[0] -= _st[3]; /* 0x17047C2E: fsub st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x17047C30: fst dword ptr [ebp - 0x94] */
    fp_push(_st[1]); /* 0x17047C36: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047C38: fmul dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x17047C3B: fstp dword ptr [ebp - 0x64] */
    fp_push(_st[0]); /* 0x17047C3E: fld st(0) */
    _st[0] *= _st[2]; /* 0x17047C40: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047C42: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x17047C45: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x17047C4B: fld dword ptr [ebp - 0x64] */
    _st[0] *= _st[2]; /* 0x17047C4E: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047C50: fsub dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x17047C53: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x17047C56: fld dword ptr [ebp - 0x90] */
    _st[0] *= _st[2]; /* 0x17047C5C: fmul st(2) */
    _st[0] -= _st[1]; /* 0x17047C5E: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17047C60: fstp dword ptr [ebp - 0x8c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047C66: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17047C68: fld dword ptr [ebp - 0x60] */
    _st[0] *= _st[1]; /* 0x17047C6B: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17047C6D: fsub dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17047C70: fstp dword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047C73: fstp st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047C75: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17047C78: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17047C7B: fmul st(1) */
    _st[0] -= _st[2]; /* 0x17047C7D: fsub st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17047C7F: fst dword ptr [ebp - 0x84] */
    fp_push(_st[1]); /* 0x17047C85: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17047C87: fmul dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17047C8A: fstp dword ptr [ebp - 0x54] */
    fp_push(_st[0]); /* 0x17047C8D: fld st(0) */
    _st[0] *= _st[2]; /* 0x17047C8F: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047C91: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17047C94: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17047C97: fld dword ptr [ebp - 0x54] */
    _st[0] *= _st[2]; /* 0x17047C9A: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17047C9C: fsub dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17047C9F: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17047CA2: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[2]; /* 0x17047CA5: fmul st(2) */
    _st[0] -= _st[1]; /* 0x17047CA7: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17047CA9: fstp dword ptr [ebp - 0x7c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047CAC: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17047CAE: fld dword ptr [ebp - 0x50] */
    _st[0] *= _st[1]; /* 0x17047CB1: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17047CB3: fsub dword ptr [ebp - 0x54] */
    edx = MEM32(ebp + 0xC); /* 0x17047CB6: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x10); /* 0x17047CB9: mov esi, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17047CBC: fstp dword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047CBF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047CC1: fstp st(0) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17047CC3: fld dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17047CC5: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17047CC7: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x17047CCA: fmul dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17047CCD: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17047CD0: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047CD3: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17047CD5: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17047CD8: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047CDB: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17047CDD: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17047CE0: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17047CE3: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17047CE6: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047CE9: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17047CEB: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17047CED: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047CF0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17047CF2: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17047CF5: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17047CF8: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17047CFB: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047CFE: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17047D00: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17047D03: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047D06: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17047D08: fstp dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x17047D0B: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17047D0D: fstp dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17047D10: fstp dword ptr [esi + 0xc] */
    eax = MEM32(edx + 0x18); /* 0x17047D13: mov eax, dword ptr [edx + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x17047D16: mov dword ptr [esi + 0x18], eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047D19: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x17047D1B: fld dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x17047D1E: fld dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17047D21: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17047D24: fmul st(1) */
    fp_push(_st[2]); /* 0x17047D26: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047D28: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047D2B: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x17047D2D: fst dword ptr [ebp - 0xc4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17047D33: fstp dword ptr [esi + 0x14] */
    fp_push(_st[1]); /* 0x17047D36: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047D38: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17047D3B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047D3D: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047D40: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047D42: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047D44: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17047D46: fst dword ptr [esi + 0x1c] */
    eax = MEM32(edx + 0x20); /* 0x17047D49: mov eax, dword ptr [edx + 0x20] */
    MEM32(ebp + 0xC) = eax; /* 0x17047D4C: mov dword ptr [ebp + 0xc], eax */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17047D4F: fld dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x10); /* 0x17047D52: mov eax, dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047D55: fmul dword ptr [ebp - 0x74] */
    MEM32(ebp + 0x10) = eax; /* 0x17047D58: mov dword ptr [ebp + 0x10], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17047D5B: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17047D5E: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047D61: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17047D63: fstp dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x17047D69: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x17047D6F: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(0x1723C98C)); /* 0x17047D75: fld dword ptr [0x1723c98c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC4))); /* 0x17047D7B: fld dword ptr [ebp - 0xc4] */
    _st[0] *= _st[1]; /* 0x17047D81: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x17047D83: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(0x1723C994)); /* 0x17047D89: fld dword ptr [0x1723c994] */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x17047D8F: fld dword ptr [ebp - 0xc0] */
    _st[0] *= _st[1]; /* 0x17047D95: fmul st(1) */
    fp_push(*(float*)&MEM32(0x1723C990)); /* 0x17047D97: fld dword ptr [0x1723c990] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x18); /* 0x17047D9D: fmul dword ptr [esi + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047DA0: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17047DA2: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17047DA5: fmul dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17047DA8: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047DAB: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047DAE: faddp st(1) */
    _st[0] *= _st[3]; /* 0x17047DB0: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x17047DB2: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x17047DB8: fmul dword ptr [0x1723c998] */
    fp_push(_st[3]); /* 0x17047DBE: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x18); /* 0x17047DC0: fmul dword ptr [esi + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047DC3: faddp st(1) */
    fp_push(_st[2]); /* 0x17047DC5: fld st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17047DC7: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17047DCA: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047DD0: fmul dword ptr [ebp + 8] */
    fp_push(_st[2]); /* 0x17047DD3: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047DD5: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047DD8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17047DDA: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x17047DDD: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047DDF: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17047DE2: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047DE8: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047DEB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17047DED: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x17047DF0: fld dword ptr [ebp - 0x94] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17047DF6: fmul dword ptr [ebp - 0xac] */
    fp_push(_st[1]); /* 0x17047DFC: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17047DFE: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047E01: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17047E03: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x17047E06: fmul dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x17047E0C: fld dword ptr [ebp - 0x64] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17047E0F: fmul dword ptr [ebp - 0xac] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047E15: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17047E17: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047E1A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17047E1C: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[3]; /* 0x17047E1F: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x17047E21: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17047E27: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[3]; /* 0x17047E2A: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x17047E2C: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047E32: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[2]; /* 0x17047E35: fmul st(2) */
    fp_push(_st[1]); /* 0x17047E37: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C990); /* 0x17047E39: fmul dword ptr [0x1723c990] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047E3F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17047E41: fstp dword ptr [ebp - 0xa4] */
    eax = MEM32(ebp + (-0xA4)); /* 0x17047E47: mov eax, dword ptr [ebp - 0xa4] */
    MEM32(esi + 0x18) = eax; /* 0x17047E4D: mov dword ptr [esi + 0x18], eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047E50: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17047E52: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x17047E55: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17047E5B: fstp dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047E61: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x17047E64: fmul dword ptr [0x1723c998] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047E6A: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[2]; /* 0x17047E6D: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047E6F: faddp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17047E71: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047E73: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x17047E75: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17047E7B: fmul dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17047E7E: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047E84: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047E87: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17047E89: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x17047E8C: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047E92: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17047E95: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17047E9B: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047E9E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17047EA0: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x17047EA3: fld dword ptr [ebp - 0x84] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17047EA9: fmul dword ptr [ebp - 0xac] */
    fp_push(_st[1]); /* 0x17047EAF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17047EB1: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047EB4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17047EB6: fstp dword ptr [esi + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17047EB9: fmul dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17047EBF: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17047EC2: fmul dword ptr [ebp - 0xac] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047EC8: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17047ECA: fstp dword ptr [esi + 0x20] */
    eax = MEM32(edx + 0x30); /* 0x17047ECD: mov eax, dword ptr [edx + 0x30] */
    edi = esi + 0x24; /* 0x17047ED0: lea edi, [esi + 0x24] */
    MEM32(edi + 0xC) = eax; /* 0x17047ED3: mov dword ptr [edi + 0xc], eax */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17047ED6: fld dword ptr [edx + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x17047ED9: fld dword ptr [edx + 0x2c] */
    ecx = ebp + (-0x30); /* 0x17047EDC: lea ecx, [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17047EDF: fld dword ptr [ebp - 4] */
    eax = edi; /* 0x17047EE2: mov eax, edi */
    _st[0] *= _st[1]; /* 0x17047EE4: fmul st(1) */
    fp_push(_st[2]); /* 0x17047EE6: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047EE8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047EEB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x17047EED: fstp dword ptr [edi + 8] */
    fp_push(_st[1]); /* 0x17047EF0: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17047EF2: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17047EF5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17047EF7: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047EFA: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x10) = _v; } /* 0x17047EFC: fstp dword ptr [edi + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047EFF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047F01: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17047F03: fld dword ptr [edx + 0x38] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17047F06: fld dword ptr [edx + 0x28] */
    fp_push(_st[1]); /* 0x17047F09: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17047F0B: fmul dword ptr [ebp - 0x44] */
    fp_push(_st[1]); /* 0x17047F0E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047F10: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047F13: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x17047F15: fstp dword ptr [edi + 4] */
    fp_push(_st[1]); /* 0x17047F18: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17047F1A: fmul dword ptr [ebp - 0x74] */
    fp_push(_st[1]); /* 0x17047F1D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17047F1F: fmul dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047F22: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x14) = _v; } /* 0x17047F24: fstp dword ptr [edi + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047F27: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047F29: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x17047F2B: fld dword ptr [edx + 0x3c] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17047F2E: fld dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17047F31: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[1]; /* 0x17047F34: fmul st(1) */
    fp_push(_st[2]); /* 0x17047F36: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17047F38: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047F3B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x17047F3D: fstp dword ptr [edi] */
    fp_push(_st[1]); /* 0x17047F3F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17047F41: fmul dword ptr [ebp - 0x70] */
    fp_push(_st[1]); /* 0x17047F44: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17047F46: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047F49: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x18) = _v; } /* 0x17047F4B: fstp dword ptr [edi + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047F4E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17047F50: fstp st(0) */
    RECOMP_CALL(sub_170470F0); /* 0x17047F52: call 0x170470f0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17047F57: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x24)); /* 0x17047F5A: mov eax, dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047F5D: fmul dword ptr [ebp + 8] */
    MEM32(ebp + (-0xA8)) = eax; /* 0x17047F60: mov dword ptr [ebp - 0xa8], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047F66: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047F69: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047F6C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x17047F6E: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047F74: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17047F77: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17047F7A: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17047F7D: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047F80: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17047F82: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17047F88: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17047F8B: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17047F8E: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x17047F91: fmul dword ptr [ebp - 0x94] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047F97: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x17047F99: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17047F9F: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x17047FA2: fmul dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17047FA8: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17047FAB: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047FAE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17047FB0: fstp dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x17047FB6: fld dword ptr [ebp - 0x90] */
    eax = ebp + (-0xB4); /* 0x17047FBC: lea eax, [ebp - 0xb4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17047FC2: fmul dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047FC5: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17047FC8: fmul dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17047FCB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x17047FCD: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17047FD3: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x90)); /* 0x17047FD6: fmul dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17047FDC: fld dword ptr [ebp - 0x60] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17047FDF: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17047FE2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x17047FE4: fstp dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_17047185); /* 0x17047FEA: call 0x17047185 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17047FEF: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x24)); /* 0x17047FF2: mov eax, dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17047FF5: fmul dword ptr [ebp - 8] */
    MEM32(edi + 0xC) = eax; /* 0x17047FF8: mov dword ptr [edi + 0xc], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17047FFB: fld dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x17047FFE: add esi, 0x40 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048001: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048004: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x17048006: fstp dword ptr [edi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048009: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704800C: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1704800F: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048012: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048015: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x10) = _v; } /* 0x17048017: fstp dword ptr [edi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1704801A: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x1704801D: fmul dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048020: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17048023: fmul dword ptr [ebp - 0x84] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048029: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x1704802B: fstp dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1704802E: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17048031: fmul dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048037: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x1704803A: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704803D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x14) = _v; } /* 0x1704803F: fstp dword ptr [edi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17048042: fld dword ptr [ebp - 0x80] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17048045: fmul dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048048: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1704804B: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704804E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x17048050: fstp dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048052: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17048055: fmul dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17048058: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x1704805B: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704805E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x18) = _v; } /* 0x17048060: fstp dword ptr [edi + 0x18] */
    eax = MEM32(edx + 0x50); /* 0x17048063: mov eax, dword ptr [edx + 0x50] */
    MEM32(esi + 0x10) = eax; /* 0x17048066: mov dword ptr [esi + 0x10], eax */
    fp_push(*(float*)&MEM32(edx + 0x54)); /* 0x17048069: fld dword ptr [edx + 0x54] */
    fp_push(*(float*)&MEM32(edx + 0x4C)); /* 0x1704806C: fld dword ptr [edx + 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704806F: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17048072: fmul st(1) */
    fp_push(_st[2]); /* 0x17048074: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048076: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048079: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1704807B: fstp dword ptr [esi + 0xc] */
    fp_push(_st[1]); /* 0x1704807E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17048080: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17048083: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048085: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048088: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x1704808A: fstp dword ptr [esi + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704808D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704808F: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x58)); /* 0x17048091: fld dword ptr [edx + 0x58] */
    fp_push(*(float*)&MEM32(edx + 0x48)); /* 0x17048094: fld dword ptr [edx + 0x48] */
    fp_push(_st[1]); /* 0x17048097: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17048099: fmul dword ptr [ebp - 0x44] */
    fp_push(_st[1]); /* 0x1704809C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x1704809E: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170480A1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170480A3: fstp dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x170480A6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x170480A8: fmul dword ptr [ebp - 0x74] */
    fp_push(_st[1]); /* 0x170480AB: fld st(1) */
    ecx = ebp + (-0x38); /* 0x170480AD: lea ecx, [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x170480B0: fmul dword ptr [ebp - 0x44] */
    eax = esi; /* 0x170480B3: mov eax, esi */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170480B5: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x170480B7: fstp dword ptr [esi + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170480BA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170480BC: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x5C)); /* 0x170480BE: fld dword ptr [edx + 0x5c] */
    fp_push(*(float*)&MEM32(edx + 0x44)); /* 0x170480C1: fld dword ptr [edx + 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x170480C4: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[1]; /* 0x170480C7: fmul st(1) */
    fp_push(_st[2]); /* 0x170480C9: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x170480CB: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170480CE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170480D0: fstp dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x170480D3: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x170480D5: fmul dword ptr [ebp - 0x70] */
    fp_push(_st[1]); /* 0x170480D8: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x170480DA: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170480DD: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x170480DF: fstp dword ptr [esi + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170480E2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170480E4: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x60)); /* 0x170480E6: fld dword ptr [edx + 0x60] */
    fp_push(*(float*)&MEM32(edx + 0x40)); /* 0x170480E9: fld dword ptr [edx + 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x170480EC: fld dword ptr [ebp - 0x6c] */
    _st[0] *= _st[1]; /* 0x170480EF: fmul st(1) */
    fp_push(_st[2]); /* 0x170480F1: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x170480F3: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170480F6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170480F8: fstp dword ptr [esi] */
    fp_push(_st[1]); /* 0x170480FA: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x170480FC: fmul dword ptr [ebp - 0x6c] */
    fp_push(_st[1]); /* 0x170480FF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17048101: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048104: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17048106: fstp dword ptr [esi + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048109: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704810B: fstp st(0) */
    RECOMP_CALL(sub_17047216); /* 0x1704810D: call 0x17047216 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048112: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x28)); /* 0x17048115: mov eax, dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048118: fmul dword ptr [ebp + 8] */
    MEM32(ebp + (-0xAC)) = eax; /* 0x1704811B: mov dword ptr [ebp - 0xac], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048121: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048124: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048127: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x17048129: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1704812F: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048132: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048135: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048138: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704813B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x1704813D: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048143: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048146: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048149: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x1704814C: fmul dword ptr [ebp - 0x94] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048152: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x17048154: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1704815A: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x1704815D: fmul dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048163: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048166: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048169: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x1704816B: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048171: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048174: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048177: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x90)); /* 0x1704817A: fmul dword ptr [ebp - 0x90] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048180: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x17048182: fstp dword ptr [ebp - 0xb8] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048188: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x90)); /* 0x1704818B: fmul dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048191: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048194: fmul dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048197: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17048199: fstp dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1704819F: fld dword ptr [ebp - 0x8c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x170481A5: fmul dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170481A8: fld dword ptr [ebp - 0x18] */
    eax = ebp + (-0xBC); /* 0x170481AB: lea eax, [ebp - 0xbc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x170481B1: fmul dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170481B4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x170481B6: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170481BC: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x170481BF: fmul dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x170481C5: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x170481C8: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170481CB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x170481CD: fstp dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_17047305); /* 0x170481D3: call 0x17047305 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170481D8: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x28)); /* 0x170481DB: mov eax, dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170481DE: fmul dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x170481E1: pop edi */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170481E2: fld dword ptr [ebp - 0x24] */
    MEM32(esi + 0x10) = eax; /* 0x170481E5: mov dword ptr [esi + 0x10], eax */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170481E8: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170481EB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170481ED: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170481F0: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170481F3: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170481F6: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170481F9: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170481FC: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x170481FE: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048201: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17048204: fmul dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048207: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x1704820A: fmul dword ptr [ebp - 0x84] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048210: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17048212: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048215: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17048218: fmul dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1704821E: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17048221: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048224: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17048226: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048229: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1704822C: fmul dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704822F: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17048232: fmul dword ptr [ebp - 0x80] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048235: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17048237: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1704823A: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x1704823D: fmul dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048240: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048243: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048246: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17048248: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704824B: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x1704824E: fmul dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17048251: fld dword ptr [ebp - 0x7c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17048254: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048257: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17048259: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704825B: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x1704825E: fmul dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17048261: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17048264: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048267: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17048269: fstp dword ptr [esi + 0x20] */
    esi = POP32_VAL(esp); /* 0x1704826C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704826D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704826E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17048276(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17048276u);

L_17048276:
    edi = edi; /* 0x17048276: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17048278: push ebp */
    ebp = esp; /* 0x17048279: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xECu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xECu; /* 0x1704827B: sub esp, 0xec */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x17048281: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17048284: fld dword ptr [0x17001424] */
    eax = MEM32(ecx + 0x20); /* 0x1704828A: mov eax, dword ptr [ecx + 0x20] */
    MEM32(ebp + 0x8) = eax; /* 0x1704828D: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17048290: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048293: fmul dword ptr [ebp + 8] */
    _st[0] = _st[1] - _st[0]; /* 0x17048296: fsubr st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17048298: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x1704829A: fcom dword ptr [0x17001f4c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170482A0: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170482A2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170482F7; /* 0x170482A5: jne 0x170482f7 */
L_170482A7:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170482A7: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x170482AA: fld dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x170482AD: fld dword ptr [ecx + 0x18] */
    fp_push(_st[0]); /* 0x170482B0: fld st(0) */
    _st[0] *= _st[1]; /* 0x170482B2: fmul st(1) */
    fp_push(_st[2]); /* 0x170482B4: fld st(2) */
    _st[0] *= _st[3]; /* 0x170482B6: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170482B8: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170482BA: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170482BC: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170482BE: fstp st(0) */
    _st[0] = _st[1] / _st[0]; /* 0x170482C0: fdivr st(1) */
    fp_push(_st[0]); /* 0x170482C2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x170482C4: fmul dword ptr [ecx + 0x18] */
    _st[0] = -_st[0]; /* 0x170482C7: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170482C9: fstp dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x170482CC: fmul dword ptr [ecx + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170482CF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x170482D2: fld dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170482D5: fld dword ptr [ecx + 8] */
    fp_push(_st[0]); /* 0x170482D8: fld st(0) */
    _st[0] *= _st[1]; /* 0x170482DA: fmul st(1) */
    fp_push(_st[2]); /* 0x170482DC: fld st(2) */
    _st[0] *= _st[3]; /* 0x170482DE: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170482E0: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170482E2: fsqrt  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170482E4: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170482E6: fstp st(0) */
    _st[0] = _st[1] / _st[0]; /* 0x170482E8: fdivr st(1) */
    fp_push(_st[0]); /* 0x170482EA: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170482EC: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170482EF: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x170482F2: fmul dword ptr [ecx + 0x14] */
    goto L_17048315; /* 0x170482F5: jmp 0x17048315 */
L_170482F7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170482F7: fstp st(0) */
    fp_push(1.0); /* 0x170482F9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170482FB: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x170482FE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17048300: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x17048303: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17048305: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17048308: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704830B: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704830D: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17048310: fld dword ptr [ecx + 4] */
    _st[0] = -_st[0]; /* 0x17048313: fchs  */
L_17048315:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17048315: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x17048318: push esi */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17048319: fld dword ptr [0x170018cc] */
    PUSH32(esp, edi); /* 0x1704831F: push edi */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17048320: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17048323: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17048325: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17048328: fmul st(1) */
    _st[0] -= _st[3]; /* 0x1704832A: fsub st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1704832C: fst dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x1704832F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048331: fmul dword ptr [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17048334: fst dword ptr [ebp - 0x8c] */
    fp_push(_st[2]); /* 0x1704833A: fld st(2) */
    _st[0] *= _st[2]; /* 0x1704833C: fmul st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704833E: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17048341: fstp dword ptr [ebp - 0x4c] */
    fp_push(_st[0]); /* 0x17048344: fld st(0) */
    _st[0] *= _st[3]; /* 0x17048346: fmul st(3) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048348: fsub dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x1704834B: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17048351: fld dword ptr [ebp - 0x4c] */
    _st[0] *= _st[3]; /* 0x17048354: fmul st(3) */
    _st[0] -= _st[2]; /* 0x17048356: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17048358: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x1704835B: fld dword ptr [ebp - 0x88] */
    _st[0] *= _st[3]; /* 0x17048361: fmul st(3) */
    _st[0] -= _st[1]; /* 0x17048363: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17048365: fstp dword ptr [ebp - 0x84] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704836B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704836D: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1704836F: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[1]; /* 0x17048372: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17048374: fsub dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17048377: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1704837A: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[1]; /* 0x17048380: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17048382: fsub dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17048388: fstp dword ptr [ebp - 0x80] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704838B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704838D: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17048390: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17048392: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x17048395: fmul st(1) */
    _st[0] -= _st[3]; /* 0x17048397: fsub st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x17048399: fst dword ptr [ebp - 0xb4] */
    fp_push(_st[1]); /* 0x1704839F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170483A1: fmul dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x170483A4: fst dword ptr [ebp - 0x64] */
    fp_push(_st[1]); /* 0x170483A7: fld st(1) */
    _st[0] *= _st[3]; /* 0x170483A9: fmul st(3) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x170483AB: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x170483AE: fstp dword ptr [ebp - 0xb0] */
    fp_push(_st[0]); /* 0x170483B4: fld st(0) */
    _st[0] *= _st[3]; /* 0x170483B6: fmul st(3) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170483B8: fsub dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x170483BB: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x170483BE: fld dword ptr [ebp - 0xb0] */
    _st[0] *= _st[3]; /* 0x170483C4: fmul st(3) */
    _st[0] -= _st[2]; /* 0x170483C6: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x170483C8: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x170483CE: fld dword ptr [ebp - 0x60] */
    _st[0] *= _st[3]; /* 0x170483D1: fmul st(3) */
    _st[0] -= _st[1]; /* 0x170483D3: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x170483D5: fstp dword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170483D8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170483DA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x170483DC: fld dword ptr [ebp - 0xac] */
    _st[0] *= _st[1]; /* 0x170483E2: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x170483E4: fsub dword ptr [ebp - 0xb0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x170483EA: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x170483F0: fld dword ptr [ebp - 0x5c] */
    _st[0] *= _st[1]; /* 0x170483F3: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x170483F5: fsub dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x170483F8: fstp dword ptr [ebp - 0x58] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170483FB: fstp st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170483FD: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17048400: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17048403: fmul st(1) */
    _st[0] -= _st[2]; /* 0x17048405: fsub st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x17048407: fst dword ptr [ebp - 0x78] */
    fp_push(_st[1]); /* 0x1704840A: fld st(1) */
    edx = MEM32(ebp + 0xC); /* 0x1704840C: mov edx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1704840F: fmul dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0x10); /* 0x17048412: mov edi, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17048415: fst dword ptr [ebp - 0xa0] */
    fp_push(_st[1]); /* 0x1704841B: fld st(1) */
    _st[0] *= _st[3]; /* 0x1704841D: fmul st(3) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704841F: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x17048422: fstp dword ptr [ebp - 0x74] */
    fp_push(_st[0]); /* 0x17048425: fld st(0) */
    _st[0] *= _st[3]; /* 0x17048427: fmul st(3) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048429: fsub dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1704842C: fstp dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17048432: fld dword ptr [ebp - 0x74] */
    _st[0] *= _st[3]; /* 0x17048435: fmul st(3) */
    _st[0] -= _st[2]; /* 0x17048437: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17048439: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1704843C: fld dword ptr [ebp - 0x9c] */
    _st[0] *= _st[3]; /* 0x17048442: fmul st(3) */
    _st[0] -= _st[1]; /* 0x17048444: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x17048446: fstp dword ptr [ebp - 0x98] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704844C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704844E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17048450: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[1]; /* 0x17048453: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048455: fsub dword ptr [ebp - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17048458: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x1704845B: fld dword ptr [ebp - 0x98] */
    _st[0] *= _st[1]; /* 0x17048461: fmul st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048463: fsub dword ptr [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x17048469: fstp dword ptr [ebp - 0x94] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704846F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048471: fstp st(0) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17048473: fld dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x17048475: fstp dword ptr [edi] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17048477: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x1704847A: fmul dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1704847D: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17048480: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048483: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17048485: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17048488: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704848B: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704848D: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17048490: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17048493: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17048496: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048499: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704849B: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1704849D: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170484A0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170484A2: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170484A5: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x170484A8: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170484AB: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170484AE: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170484B0: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170484B3: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170484B6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x170484B8: fstp dword ptr [edi + 4] */
    fp_push(_st[1]); /* 0x170484BB: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x170484BD: fstp dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0xC) = _v; } /* 0x170484C0: fstp dword ptr [edi + 0xc] */
    eax = MEM32(edx + 0x18); /* 0x170484C3: mov eax, dword ptr [edx + 0x18] */
    MEM32(edi + 0x18) = eax; /* 0x170484C6: mov dword ptr [edi + 0x18], eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170484C9: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x170484CB: fld dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x170484CE: fld dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170484D1: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x170484D4: fmul st(1) */
    fp_push(_st[2]); /* 0x170484D6: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170484D8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170484DB: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x170484DD: fst dword ptr [ebp - 0xec] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x14) = _v; } /* 0x170484E3: fstp dword ptr [edi + 0x14] */
    fp_push(_st[1]); /* 0x170484E6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170484E8: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x170484EB: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170484ED: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170484F0: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170484F2: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170484F4: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0x1C) = _v; } /* 0x170484F6: fst dword ptr [edi + 0x1c] */
    eax = MEM32(edx + 0x20); /* 0x170484F9: mov eax, dword ptr [edx + 0x20] */
    MEM32(ebp + 0xC) = eax; /* 0x170484FC: mov dword ptr [ebp + 0xc], eax */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170484FF: fld dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x10); /* 0x17048502: mov eax, dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048505: fmul dword ptr [ebp - 0x50] */
    MEM32(ebp + 0x10) = eax; /* 0x17048508: mov dword ptr [ebp + 0x10], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x1704850B: fld dword ptr [ebp - 0x8c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17048511: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048514: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x17048516: fstp dword ptr [ebp - 0xe8] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x1704851C: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x17048522: fstp dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(0x1723C98C)); /* 0x17048528: fld dword ptr [0x1723c98c] */
    fp_push(*(float*)&MEM32(ebp + (-0xEC))); /* 0x1704852E: fld dword ptr [ebp - 0xec] */
    _st[0] *= _st[1]; /* 0x17048534: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x17048536: fstp dword ptr [ebp - 0xc8] */
    fp_push(*(float*)&MEM32(0x1723C994)); /* 0x1704853C: fld dword ptr [0x1723c994] */
    fp_push(*(float*)&MEM32(0x1723C990)); /* 0x17048542: fld dword ptr [0x1723c990] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x18); /* 0x17048548: fmul dword ptr [edi + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xE8))); /* 0x1704854B: fld dword ptr [ebp - 0xe8] */
    _st[0] *= _st[2]; /* 0x17048551: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048553: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17048555: fld dword ptr [ebp - 0x8c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704855B: fmul dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704855E: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048561: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048564: faddp st(1) */
    _st[0] *= _st[3]; /* 0x17048566: fmul st(3) */
    fp_push(_st[2]); /* 0x17048568: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x18); /* 0x1704856A: fmul dword ptr [edi + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xE8))); /* 0x1704856D: fld dword ptr [ebp - 0xe8] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x17048573: fmul dword ptr [0x1723c998] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048579: faddp st(1) */
    fp_push(_st[2]); /* 0x1704857B: fld st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1704857D: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x17048580: fld dword ptr [ebp - 0xc8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048586: fmul dword ptr [ebp + 8] */
    fp_push(_st[2]); /* 0x17048589: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704858B: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704858E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17048590: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x17048593: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048595: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x17048598: fld dword ptr [ebp - 0xc8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704859E: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170485A1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170485A3: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x170485A6: fld dword ptr [ebp - 0xb4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xCC)); /* 0x170485AC: fmul dword ptr [ebp - 0xcc] */
    fp_push(_st[1]); /* 0x170485B2: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x170485B4: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170485B7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170485B9: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x170485BC: fmul dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x170485C2: fld dword ptr [ebp - 0x64] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xCC)); /* 0x170485C5: fmul dword ptr [ebp - 0xcc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170485CB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170485CD: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170485D0: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170485D2: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[3]; /* 0x170485D5: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x170485D7: fstp dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170485DD: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[3]; /* 0x170485E0: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x170485E2: fstp dword ptr [ebp - 0xc8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170485E8: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[2]; /* 0x170485EB: fmul st(2) */
    fp_push(_st[1]); /* 0x170485ED: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C990); /* 0x170485EF: fmul dword ptr [0x1723c990] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170485F5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x170485F7: fstp dword ptr [ebp - 0xc4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170485FD: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x170485FF: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(0x1723C988); /* 0x17048602: fmul dword ptr [0x1723c988] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17048608: fstp dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704860E: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x1723C998); /* 0x17048611: fmul dword ptr [0x1723c998] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048617: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[2]; /* 0x1704861A: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704861C: faddp st(1) */
    eax = MEM32(ebp + (-0xC4)); /* 0x1704861E: mov eax, dword ptr [ebp - 0xc4] */
    MEM32(edi + 0x18) = eax; /* 0x17048624: mov dword ptr [edi + 0x18], eax */
    esi = edi + 0x24; /* 0x17048627: lea esi, [edi + 0x24] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1704862A: fstp st(2) */
    ecx = ebp + (-0x30); /* 0x1704862C: lea ecx, [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704862F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x17048631: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048637: fmul dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x1704863A: fld dword ptr [ebp - 0xc8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17048640: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048643: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x14) = _v; } /* 0x17048645: fstp dword ptr [edi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x17048648: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704864E: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x17048651: fld dword ptr [ebp - 0xc8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048657: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704865A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x1C) = _v; } /* 0x1704865C: fstp dword ptr [edi + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x1704865F: fld dword ptr [ebp - 0x78] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xCC)); /* 0x17048662: fmul dword ptr [ebp - 0xcc] */
    fp_push(_st[1]); /* 0x17048668: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x1704866A: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048670: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x10) = _v; } /* 0x17048672: fstp dword ptr [edi + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x17048675: fmul dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x17048678: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xCC)); /* 0x1704867E: fmul dword ptr [ebp - 0xcc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048684: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x20) = _v; } /* 0x17048686: fstp dword ptr [edi + 0x20] */
    eax = MEM32(edx + 0x30); /* 0x17048689: mov eax, dword ptr [edx + 0x30] */
    MEM32(esi + 0xC) = eax; /* 0x1704868C: mov dword ptr [esi + 0xc], eax */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x1704868F: fld dword ptr [edx + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x17048692: fld dword ptr [edx + 0x2c] */
    eax = esi; /* 0x17048695: mov eax, esi */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17048697: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x1704869A: fmul st(1) */
    fp_push(_st[2]); /* 0x1704869C: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704869E: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170486A1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170486A3: fstp dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x170486A6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170486A8: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x170486AB: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170486AD: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170486B0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x170486B2: fstp dword ptr [esi + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170486B5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170486B7: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x170486B9: fld dword ptr [edx + 0x38] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x170486BC: fld dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x170486BF: fld dword ptr [ebp - 0x8c] */
    _st[0] *= _st[2]; /* 0x170486C5: fmul st(2) */
    fp_push(_st[1]); /* 0x170486C7: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x170486C9: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170486CC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170486CE: fstp dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x170486D1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x170486D3: fmul dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x170486D6: fld dword ptr [ebp - 0x8c] */
    _st[0] *= _st[2]; /* 0x170486DC: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170486DE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x170486E0: fstp dword ptr [esi + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170486E3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170486E5: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x170486E7: fld dword ptr [edx + 0x3c] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x170486EA: fld dword ptr [edx + 0x24] */
    fp_push(_st[1]); /* 0x170486ED: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x170486EF: fmul dword ptr [ebp - 0x88] */
    fp_push(_st[1]); /* 0x170486F5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x170486F7: fmul dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170486FA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170486FC: fstp dword ptr [esi] */
    fp_push(_st[1]); /* 0x170486FE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17048700: fmul dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x17048703: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17048705: fmul dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704870B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x1704870D: fstp dword ptr [esi + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048710: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048712: fstp st(0) */
    RECOMP_CALL(sub_170470F0); /* 0x17048714: call 0x170470f0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048719: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1704871C: fmul dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x24)); /* 0x1704871F: mov eax, dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048722: fld dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0xC8)) = eax; /* 0x17048725: mov dword ptr [ebp - 0xc8], eax */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704872B: fmul dword ptr [ebp - 0x14] */
    eax = ebp + (-0xD4); /* 0x1704872E: lea eax, [ebp - 0xd4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048734: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x17048736: fstp dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1704873C: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1704873F: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048742: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048745: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048748: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x1704874A: fstp dword ptr [ebp - 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048750: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048753: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048756: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x17048759: fmul dword ptr [ebp - 0xb4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704875F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x17048761: fstp dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048767: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x1704876A: fmul dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17048770: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048773: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048776: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17048778: fstp dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704877E: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048781: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x17048784: fld dword ptr [ebp - 0xb0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x1704878A: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704878D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x1704878F: fstp dword ptr [ebp - 0xd4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048795: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x17048798: fmul dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1704879E: fld dword ptr [ebp - 0x60] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x170487A1: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170487A4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x170487A6: fstp dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_17047185); /* 0x170487AC: call 0x17047185 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x170487B1: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x24)); /* 0x170487B4: mov eax, dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170487B7: fmul dword ptr [ebp - 8] */
    MEM32(esi + 0xC) = eax; /* 0x170487BA: mov dword ptr [esi + 0xc], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170487BD: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170487C0: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170487C3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170487C5: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170487C8: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170487CB: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x170487CE: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170487D1: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170487D4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x170487D6: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170487D9: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x170487DC: fmul dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170487E2: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x170487E5: fmul dword ptr [ebp - 0x78] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170487E8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170487EA: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170487ED: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x170487F0: fmul dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170487F3: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x170487F6: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170487FC: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x170487FE: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048801: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048804: fmul dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x1704880A: fld dword ptr [ebp - 0x74] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x1704880D: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048810: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17048812: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048814: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048817: fmul dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1704881A: fld dword ptr [ebp - 0x9c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17048820: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048823: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17048825: fstp dword ptr [esi + 0x18] */
    eax = MEM32(edx + 0x50); /* 0x17048828: mov eax, dword ptr [edx + 0x50] */
    esi = edi + 0x40; /* 0x1704882B: lea esi, [edi + 0x40] */
    MEM32(esi + 0x10) = eax; /* 0x1704882E: mov dword ptr [esi + 0x10], eax */
    fp_push(*(float*)&MEM32(edx + 0x54)); /* 0x17048831: fld dword ptr [edx + 0x54] */
    fp_push(*(float*)&MEM32(edx + 0x4C)); /* 0x17048834: fld dword ptr [edx + 0x4c] */
    ecx = ebp + (-0x38); /* 0x17048837: lea ecx, [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704883A: fld dword ptr [ebp - 4] */
    eax = esi; /* 0x1704883D: mov eax, esi */
    _st[0] *= _st[1]; /* 0x1704883F: fmul st(1) */
    fp_push(_st[2]); /* 0x17048841: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048843: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048846: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17048848: fstp dword ptr [esi + 0xc] */
    fp_push(_st[1]); /* 0x1704884B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704884D: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17048850: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048852: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048855: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17048857: fstp dword ptr [esi + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704885A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704885C: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x58)); /* 0x1704885E: fld dword ptr [edx + 0x58] */
    fp_push(*(float*)&MEM32(edx + 0x48)); /* 0x17048861: fld dword ptr [edx + 0x48] */
    fp_push(_st[1]); /* 0x17048864: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x17048866: fmul dword ptr [ebp - 0x8c] */
    fp_push(_st[1]); /* 0x1704886C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1704886E: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048871: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17048873: fstp dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x17048876: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048878: fmul dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x1704887B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x1704887D: fmul dword ptr [ebp - 0x8c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048883: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17048885: fstp dword ptr [esi + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048888: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704888A: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x5C)); /* 0x1704888C: fld dword ptr [edx + 0x5c] */
    fp_push(*(float*)&MEM32(edx + 0x44)); /* 0x1704888F: fld dword ptr [edx + 0x44] */
    fp_push(_st[1]); /* 0x17048892: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17048894: fmul dword ptr [ebp - 0x88] */
    fp_push(_st[1]); /* 0x1704889A: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x1704889C: fmul dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704889F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170488A1: fstp dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x170488A4: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x170488A6: fmul dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x170488A9: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x170488AB: fmul dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170488B1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x170488B3: fstp dword ptr [esi + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170488B6: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170488B8: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x60)); /* 0x170488BA: fld dword ptr [edx + 0x60] */
    fp_push(*(float*)&MEM32(edx + 0x40)); /* 0x170488BD: fld dword ptr [edx + 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x170488C0: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[2]; /* 0x170488C6: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170488C8: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[2]; /* 0x170488CB: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170488CD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170488CF: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170488D1: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[2]; /* 0x170488D4: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x170488D6: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[2]; /* 0x170488DC: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170488DE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x170488E0: fstp dword ptr [esi + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170488E3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170488E5: fstp st(0) */
    RECOMP_CALL(sub_17047216); /* 0x170488E7: call 0x17047216 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170488EC: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x28)); /* 0x170488EF: mov eax, dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x170488F2: fmul dword ptr [ebp + 8] */
    MEM32(ebp + (-0xCC)) = eax; /* 0x170488F5: mov dword ptr [ebp - 0xcc], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170488FB: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170488FE: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048901: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x17048903: fstp dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048909: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1704890C: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1704890F: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048912: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048915: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x17048917: fstp dword ptr [ebp - 0xc8] */
    eax = ebp + (-0xDC); /* 0x1704891D: lea eax, [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048923: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048926: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048929: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x1704892C: fmul dword ptr [ebp - 0xb4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048932: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x17048934: fstp dword ptr [ebp - 0xd4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1704893A: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x1704893D: fmul dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048943: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048946: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048949: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x1704894B: fstp dword ptr [ebp - 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048951: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048954: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048957: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x1704895A: fmul dword ptr [ebp - 0xb0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048960: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD8)) = _v; } /* 0x17048962: fstp dword ptr [ebp - 0xd8] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048968: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x1704896B: fmul dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048971: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048974: fmul dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048977: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17048979: fstp dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704897F: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x17048982: fmul dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x17048985: fld dword ptr [ebp - 0xac] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1704898B: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704898E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x17048990: fstp dword ptr [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048996: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17048999: fmul dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1704899F: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x170489A2: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170489A5: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x170489A7: fstp dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_17047305); /* 0x170489AD: call 0x17047305 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170489B2: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x28)); /* 0x170489B5: mov eax, dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170489B8: fmul dword ptr [ebp - 8] */
    MEM32(esi + 0x10) = eax; /* 0x170489BB: mov dword ptr [esi + 0x10], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170489BE: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170489C1: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170489C4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170489C6: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170489C9: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170489CC: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170489CF: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170489D2: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170489D5: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x170489D7: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170489DA: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x170489DD: fmul dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170489E3: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x170489E6: fmul dword ptr [ebp - 0x78] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170489E9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170489EB: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170489EE: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x170489F1: fmul dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170489F4: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x170489F7: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170489FD: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x170489FF: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048A02: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048A05: fmul dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048A0B: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048A0E: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048A11: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17048A13: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048A16: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048A19: fmul dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048A1C: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048A1F: fmul dword ptr [ebp - 0x9c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048A25: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17048A27: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048A2A: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x17048A2D: fmul dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17048A33: fld dword ptr [ebp - 0x70] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17048A36: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048A39: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17048A3B: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048A3D: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17048A40: fmul dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x17048A43: fld dword ptr [ebp - 0x98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17048A49: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048A4C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17048A4E: fstp dword ptr [esi + 0x20] */
    eax = MEM32(edx + 0x78); /* 0x17048A51: mov eax, dword ptr [edx + 0x78] */
    esi = edi + 0x64; /* 0x17048A54: lea esi, [edi + 0x64] */
    MEM32(esi + 0x14) = eax; /* 0x17048A57: mov dword ptr [esi + 0x14], eax */
    fp_push(*(float*)&MEM32(edx + 0x7C)); /* 0x17048A5A: fld dword ptr [edx + 0x7c] */
    fp_push(*(float*)&MEM32(edx + 0x74)); /* 0x17048A5D: fld dword ptr [edx + 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17048A60: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17048A63: fmul st(1) */
    fp_push(_st[2]); /* 0x17048A65: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048A67: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048A6A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17048A6C: fstp dword ptr [esi + 0x10] */
    fp_push(_st[1]); /* 0x17048A6F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17048A71: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17048A74: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17048A76: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048A79: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17048A7B: fstp dword ptr [esi + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048A7E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048A80: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x80)); /* 0x17048A82: fld dword ptr [edx + 0x80] */
    fp_push(*(float*)&MEM32(edx + 0x70)); /* 0x17048A88: fld dword ptr [edx + 0x70] */
    fp_push(_st[1]); /* 0x17048A8B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x17048A8D: fmul dword ptr [ebp - 0x8c] */
    fp_push(_st[1]); /* 0x17048A93: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048A95: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048A98: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17048A9A: fstp dword ptr [esi + 0xc] */
    fp_push(_st[1]); /* 0x17048A9D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17048A9F: fmul dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x17048AA2: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x17048AA4: fmul dword ptr [ebp - 0x8c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048AAA: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17048AAC: fstp dword ptr [esi + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048AAF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048AB1: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x84)); /* 0x17048AB3: fld dword ptr [edx + 0x84] */
    fp_push(*(float*)&MEM32(edx + 0x6C)); /* 0x17048AB9: fld dword ptr [edx + 0x6c] */
    fp_push(_st[1]); /* 0x17048ABC: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17048ABE: fmul dword ptr [ebp - 0x88] */
    fp_push(_st[1]); /* 0x17048AC4: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17048AC6: fmul dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048AC9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17048ACB: fstp dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x17048ACE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17048AD0: fmul dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x17048AD3: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17048AD5: fmul dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048ADB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17048ADD: fstp dword ptr [esi + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048AE0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048AE2: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x88)); /* 0x17048AE4: fld dword ptr [edx + 0x88] */
    fp_push(*(float*)&MEM32(edx + 0x68)); /* 0x17048AEA: fld dword ptr [edx + 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17048AED: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[1]; /* 0x17048AF0: fmul st(1) */
    fp_push(_st[2]); /* 0x17048AF2: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17048AF4: fmul dword ptr [ebp - 0x84] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048AFA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17048AFC: fstp dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x17048AFF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17048B01: fmul dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x17048B04: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x84)); /* 0x17048B06: fmul dword ptr [ebp - 0x84] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048B0C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17048B0E: fstp dword ptr [esi + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048B11: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048B13: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + 0x8C)); /* 0x17048B15: fld dword ptr [edx + 0x8c] */
    fp_push(*(float*)&MEM32(edx + 0x64)); /* 0x17048B1B: fld dword ptr [edx + 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17048B1E: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[2]; /* 0x17048B21: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17048B23: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[2]; /* 0x17048B26: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048B28: faddp st(1) */
    ecx = ebp + (-0x40); /* 0x17048B2A: lea ecx, [ebp - 0x40] */
    eax = esi; /* 0x17048B2D: mov eax, esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17048B2F: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17048B31: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[2]; /* 0x17048B34: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17048B36: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[2]; /* 0x17048B39: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048B3B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17048B3D: fstp dword ptr [esi + 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048B40: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048B42: fstp st(0) */
    RECOMP_CALL(sub_170473F0); /* 0x17048B44: call 0x170473f0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048B49: fld dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x2C)); /* 0x17048B4C: mov eax, dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048B4F: fmul dword ptr [ebp + 8] */
    MEM32(ebp + (-0xD0)) = eax; /* 0x17048B52: mov dword ptr [ebp - 0xd0], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048B58: fld dword ptr [ebp - 0x28] */
    eax = ebp + (-0xE4); /* 0x17048B5B: lea eax, [ebp - 0xe4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048B61: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048B64: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x17048B66: fstp dword ptr [ebp - 0xd4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048B6C: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17048B6F: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048B72: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17048B75: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048B78: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x17048B7A: fstp dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048B80: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048B83: fmul dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048B86: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x17048B89: fmul dword ptr [ebp - 0xb4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048B8F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD8)) = _v; } /* 0x17048B91: fstp dword ptr [ebp - 0xd8] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048B97: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x17048B9A: fmul dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048BA0: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17048BA3: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048BA6: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x17048BA8: fstp dword ptr [ebp - 0xc8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048BAE: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048BB1: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17048BB4: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x17048BB7: fmul dword ptr [ebp - 0xb0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048BBD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x17048BBF: fstp dword ptr [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048BC5: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x17048BC8: fmul dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17048BCE: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17048BD1: fmul dword ptr [ebp - 0x60] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048BD4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x17048BD6: fstp dword ptr [ebp - 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048BDC: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x17048BDF: fmul dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17048BE2: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17048BE5: fmul dword ptr [ebp - 0xac] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048BEB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE0)) = _v; } /* 0x17048BED: fstp dword ptr [ebp - 0xe0] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048BF3: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x17048BF6: fmul dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17048BFC: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x17048BFF: fmul dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048C02: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17048C04: fstp dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048C0A: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17048C0D: fmul dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17048C10: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17048C16: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048C19: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE4)) = _v; } /* 0x17048C1B: fstp dword ptr [ebp - 0xe4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048C21: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x17048C24: fmul dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17048C2A: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17048C2D: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048C30: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x17048C32: fstp dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_17047552); /* 0x17048C38: call 0x17047552 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x17048C3D: mov eax, dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048C40: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17048C43: fmul dword ptr [ebp - 8] */
    MEM32(esi + 0x14) = eax; /* 0x17048C46: mov dword ptr [esi + 0x14], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048C49: fld dword ptr [ebp - 0x28] */
    edi = POP32_VAL(esp); /* 0x17048C4C: pop edi */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048C4D: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048C50: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17048C52: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17048C55: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17048C58: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17048C5B: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17048C5E: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048C61: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17048C63: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048C66: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x17048C69: fmul dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048C6F: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x17048C72: fmul dword ptr [ebp - 0x78] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048C75: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17048C77: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17048C7A: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x17048C7D: fmul dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17048C80: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x17048C83: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048C89: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17048C8B: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048C8E: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048C91: fmul dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17048C97: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048C9A: fmul dword ptr [ebp - 0x74] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048C9D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17048C9F: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17048CA2: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17048CA5: fmul dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17048CA8: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x17048CAB: fmul dword ptr [ebp - 0x9c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048CB1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17048CB3: fstp dword ptr [esi + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048CB6: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x17048CB9: fmul dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17048CBF: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17048CC2: fmul dword ptr [ebp - 0x70] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048CC5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17048CC7: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17048CCA: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17048CCD: fmul dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17048CD0: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x17048CD3: fmul dword ptr [ebp - 0x98] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048CD9: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17048CDB: fstp dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048CDE: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x17048CE1: fmul dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x17048CE7: fld dword ptr [ebp - 0x6c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17048CEA: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17048CED: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17048CEF: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17048CF1: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x17048CF4: fmul dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x17048CF7: fld dword ptr [ebp - 0x94] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17048CFD: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048D00: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17048D02: fstp dword ptr [esi + 0x28] */
    esi = POP32_VAL(esp); /* 0x17048D05: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17048D06: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17048D07: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17048D0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17048D0Fu);

L_17048D0F:
    edi = edi; /* 0x17048D0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17048D11: push ebp */
    ebp = esp; /* 0x17048D12: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x17048D14: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17048D17: fld dword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x17048D19: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17048D1C: fld dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17048D1F: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0xC); /* 0x17048D22: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D25: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D26: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17048D8D; /* 0x17048D27: je 0x17048d8d */
L_17048D29:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D29: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17048D77; /* 0x17048D2A: je 0x17048d77 */
L_17048D2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D2C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17048D61; /* 0x17048D2D: je 0x17048d61 */
L_17048D2F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D2F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17048D4B; /* 0x17048D30: je 0x17048d4b */
L_17048D32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17048D32: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17048DA3; /* 0x17048D33: jne 0x17048da3 */
L_17048D35:
    PUSH32(esp, ecx); /* 0x17048D35: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17048D36: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17048D39: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17048D3D: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17048D41: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046E86); /* 0x17048D44: call 0x17046e86 */
    RECOMP_FLAGS_IN();
    goto L_17048DA9; /* 0x17048D49: jmp 0x17048da9 */
L_17048D4B:
    PUSH32(esp, ecx); /* 0x17048D4B: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17048D4C: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17048D4F: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17048D53: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17048D57: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046CED); /* 0x17048D5A: call 0x17046ced */
    RECOMP_FLAGS_IN();
    goto L_17048DA9; /* 0x17048D5F: jmp 0x17048da9 */
L_17048D61:
    PUSH32(esp, ecx); /* 0x17048D61: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17048D62: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17048D65: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17048D69: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17048D6D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046BE5); /* 0x17048D70: call 0x17046be5 */
    RECOMP_FLAGS_IN();
    goto L_17048DA9; /* 0x17048D75: jmp 0x17048da9 */
L_17048D77:
    PUSH32(esp, ecx); /* 0x17048D77: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17048D78: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17048D7B: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17048D7F: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17048D83: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B50); /* 0x17048D86: call 0x17046b50 */
    RECOMP_FLAGS_IN();
    goto L_17048DA9; /* 0x17048D8B: jmp 0x17048da9 */
L_17048D8D:
    PUSH32(esp, ecx); /* 0x17048D8D: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17048D8E: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17048D91: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17048D95: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17048D99: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B13); /* 0x17048D9C: call 0x17046b13 */
    RECOMP_FLAGS_IN();
    goto L_17048DA9; /* 0x17048DA1: jmp 0x17048da9 */
L_17048DA3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048DA3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048DA5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048DA7: fstp st(0) */
L_17048DA9:
    eax = ecx; /* 0x17048DA9: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x17048DAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17048DAC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17048DB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17048DB4u);

L_17048DB4:
    edi = edi; /* 0x17048DB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17048DB6: push ebp */
    ebp = esp; /* 0x17048DB7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1F4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1F4u; /* 0x17048DB9: sub esp, 0x1f4 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048DBF: fld dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x17048DC2: mov edx, dword ptr [ebp + 0x14] */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x17048DC5: fcos  */
    PUSH32(esp, ebx); /* 0x17048DC7: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17048DC8: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17048DCB: push esi */
    PUSH32(esp, edi); /* 0x17048DCC: push edi */
    eax = ebx + 0x4; /* 0x17048DCD: lea eax, [ebx + 4] */
    ecx = ebp + (-0x1F0); /* 0x17048DD0: lea ecx, [ebp - 0x1f0] */
    fp_push(_st[0]); /* 0x17048DD6: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048DD8: fld dword ptr [ebp + 0x10] */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17048DDB: fsin  */
    MEM32(ebp + 0x10) = 3; /* 0x17048DDD: mov dword ptr [ebp + 0x10], 3 */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17048DE4: fst dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x17048DE7: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1F4)) = _v; } /* 0x17048DE9: fstp dword ptr [ebp - 0x1f4] */
    fp_push(0.0); /* 0x17048DEF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1F0)) = _v; } /* 0x17048DF1: fstp dword ptr [ebp - 0x1f0] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1EC)) = _v; } /* 0x17048DF7: fst dword ptr [ebp - 0x1ec] */
    fp_push(0.0); /* 0x17048DFD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1E8)) = _v; } /* 0x17048DFF: fstp dword ptr [ebp - 0x1e8] */
    fp_push(1.0); /* 0x17048E05: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1E4)) = _v; } /* 0x17048E07: fstp dword ptr [ebp - 0x1e4] */
    fp_push(0.0); /* 0x17048E0D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1E0)) = _v; } /* 0x17048E0F: fstp dword ptr [ebp - 0x1e0] */
    _st[0] = -_st[0]; /* 0x17048E15: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1DC)) = _v; } /* 0x17048E17: fstp dword ptr [ebp - 0x1dc] */
    fp_push(0.0); /* 0x17048E1D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1D8)) = _v; } /* 0x17048E1F: fstp dword ptr [ebp - 0x1d8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1D4)) = _v; } /* 0x17048E25: fstp dword ptr [ebp - 0x1d4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17048E2B: fld dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x17048E2D: fstp dword ptr [ebx] */
L_17048E2F:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17048E2F: fld dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17048E32: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17048E34: fmul dword ptr [edx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17048E37: inc esi */
    _flag_k = FK_INC;
    edi = ecx; /* 0x17048E38: mov edi, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17048E3A: fstp dword ptr [eax] */
L_17048E3C:
    fp_push(*(float*)&MEM32(edx + esi * 4 + 0x4)); /* 0x17048E3C: fld dword ptr [edx + esi*4 + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17048E40: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17048E41: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17048E43: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 3 */ /* 0x17048E46: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17048E49: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17048E4B: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17048E3C; /* 0x17048E4D: jb 0x17048e3c */
L_17048E4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17048E4F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x17048E52: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17048E55: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17048E2F; /* 0x17048E58: jne 0x17048e2f */
L_17048E5A:
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x17048E5A: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704934B; /* 0x17048E5E: jbe 0x1704934b */
L_17048E64:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17048E64: fld dword ptr [ebp - 8] */
    PUSH32(esp, 0x19u); /* 0x17048E67: push 0x19 */
    fp_push(_st[1]); /* 0x17048E69: fld st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17048E6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x17048E6D: fld st(0) */
    ecx = POP32_VAL(esp); /* 0x17048E6F: pop ecx */
    _st[0] *= _st[1]; /* 0x17048E70: fmul st(1) */
    edi = ebp + (-0x1F4); /* 0x17048E72: lea edi, [ebp - 0x1f4] */
    fp_push(_st[2]); /* 0x17048E78: fld st(2) */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17048E7A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _st[0] *= _st[3]; /* 0x17048E7C: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048E7E: fsubp st(1) */
    ecx = ebp + (-0x1F0); /* 0x17048E80: lea ecx, [ebp - 0x1f0] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17048E86: fst dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x17048E89: fld st(1) */
    eax = MEM32(ebp + 0x14); /* 0x17048E8B: mov eax, dword ptr [ebp + 0x14] */
    _st[0] *= _st[3]; /* 0x17048E8E: fmul st(3) */
    MEM32(ebp + (-0x194)) = eax; /* 0x17048E90: mov dword ptr [ebp - 0x194], eax */
    eax = ebx + 0x10; /* 0x17048E96: lea eax, [ebx + 0x10] */
    _st[0] += _st[0]; /* 0x17048E99: fadd st(0), st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17048E9B: fst dword ptr [ebp + 0x10] */
    fp_push(_st[1]); /* 0x17048E9E: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1F4)) = _v; } /* 0x17048EA0: fstp dword ptr [ebp - 0x1f4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1E4)) = _v; } /* 0x17048EA6: fst dword ptr [ebp - 0x1e4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048EAC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048EAE: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1DC)) = _v; } /* 0x17048EB0: fst dword ptr [ebp - 0x1dc] */
    fp_push(_st[1]); /* 0x17048EB6: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1D4)) = _v; } /* 0x17048EB8: fstp dword ptr [ebp - 0x1d4] */
    fp_push(1.0); /* 0x17048EBE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C4)) = _v; } /* 0x17048EC0: fstp dword ptr [ebp - 0x1c4] */
    fp_push(_st[1]); /* 0x17048EC6: fld st(1) */
    _st[0] = -_st[0]; /* 0x17048EC8: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1B4)) = _v; } /* 0x17048ECA: fstp dword ptr [ebp - 0x1b4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1AC)) = _v; } /* 0x17048ED0: fst dword ptr [ebp - 0x1ac] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048ED6: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048ED8: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048EDA: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = 5; /* 0x17048EDD: mov dword ptr [ebp + 0x10], 5 */
    _st[0] = -_st[0]; /* 0x17048EE4: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1A4)) = _v; } /* 0x17048EE6: fstp dword ptr [ebp - 0x1a4] */
L_17048EEC:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17048EEC: fld dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17048EEF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x17048EF1: fmul dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17048EF4: inc esi */
    _flag_k = FK_INC;
    edi = ecx; /* 0x17048EF5: mov edi, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17048EF7: fstp dword ptr [eax] */
L_17048EF9:
    fp_push(*(float*)&MEM32(edx + esi * 4 + 0x10)); /* 0x17048EF9: fld dword ptr [edx + esi*4 + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17048EFD: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17048EFE: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17048F00: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 5 */ /* 0x17048F03: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17048F06: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17048F08: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17048EF9; /* 0x17048F0A: jb 0x17048ef9 */
L_17048F0C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17048F0C: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x17048F0F: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17048F12: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17048EEC; /* 0x17048F15: jne 0x17048eec */
L_17048F17:
    /* cmp MEM32(ebp + 0xC), 3 */ /* 0x17048F17: cmp dword ptr [ebp + 0xc], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704934B; /* 0x17048F1B: jbe 0x1704934b */
L_17048F21:
    fp_push(_st[0]); /* 0x17048F21: fld st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17048F23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x17048F25: fld st(0) */
    PUSH32(esp, 0x31u); /* 0x17048F27: push 0x31 */
    _st[0] *= _st[1]; /* 0x17048F29: fmul st(1) */
    ecx = POP32_VAL(esp); /* 0x17048F2B: pop ecx */
    edi = ebp + (-0x1F4); /* 0x17048F2C: lea edi, [ebp - 0x1f4] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17048F32: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17048F34: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17048F37: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x17048F3A: fld st(0) */
    _st[0] *= _st[1]; /* 0x17048F3C: fmul st(1) */
    ecx = ebp + (-0x1F0); /* 0x17048F3E: lea ecx, [ebp - 0x1f0] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048F44: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[3]; /* 0x17048F47: fmul st(3) */
    fp_push(_st[1]); /* 0x17048F49: fld st(1) */
    _st[0] *= _st[4]; /* 0x17048F4B: fmul st(4) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17048F4D: fmul dword ptr [0x17001da0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048F53: fsubp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17048F55: fst dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x17048F58: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17048F5A: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17048F5D: fmul dword ptr [0x17001da0] */
    fp_push(_st[2]); /* 0x17048F63: fld st(2) */
    _st[0] *= _st[4]; /* 0x17048F65: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17048F67: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17048F69: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048F6C: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17048F6F: mov eax, dword ptr [ebp + 8] */
    _st[0] -= _st[2]; /* 0x17048F72: fsub st(2) */
    MEM32(ebp + (-0x1DC)) = eax; /* 0x17048F74: mov dword ptr [ebp - 0x1dc], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17048F7A: fstp dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x17048F7D: mov eax, dword ptr [ebp + 0x14] */
    fp_push(_st[2]); /* 0x17048F80: fld st(2) */
    _st[0] *= _st[4]; /* 0x17048F82: fmul st(4) */
    MEM32(ebp + (-0x1D4)) = eax; /* 0x17048F84: mov dword ptr [ebp - 0x1d4], eax */
    _st[0] += _st[0]; /* 0x17048F8A: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17048F8C: fstp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x17048F8F: mov eax, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1F4)) = _v; } /* 0x17048F92: fst dword ptr [ebp - 0x1f4] */
    MEM32(ebp + (-0x1C4)) = eax; /* 0x17048F98: mov dword ptr [ebp - 0x1c4], eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048F9E: fstp st(0) */
    eax = MEM32(ebp + 0x14); /* 0x17048FA0: mov eax, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17048FA3: fstp st(0) */
    MEM32(ebp + (-0x154)) = eax; /* 0x17048FA5: mov dword ptr [ebp - 0x154], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17048FAB: mov eax, dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17048FAE: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1B4)) = _v; } /* 0x17048FB0: fstp dword ptr [ebp - 0x1b4] */
    MEM32(ebp + (-0x134)) = eax; /* 0x17048FB6: mov dword ptr [ebp - 0x134], eax */
    eax = ebx + 0x24; /* 0x17048FBC: lea eax, [ebx + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1AC)) = _v; } /* 0x17048FBF: fst dword ptr [ebp - 0x1ac] */
    fp_push(1.0); /* 0x17048FC5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x194)) = _v; } /* 0x17048FC7: fstp dword ptr [ebp - 0x194] */
    _st[0] = -_st[0]; /* 0x17048FCD: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x17C)) = _v; } /* 0x17048FCF: fstp dword ptr [ebp - 0x17c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x174)) = _v; } /* 0x17048FD5: fstp dword ptr [ebp - 0x174] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17048FDB: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = 7; /* 0x17048FDE: mov dword ptr [ebp + 0x10], 7 */
    _st[0] = -_st[0]; /* 0x17048FE5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x164)) = _v; } /* 0x17048FE7: fstp dword ptr [ebp - 0x164] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17048FED: fld dword ptr [ebp + 8] */
    _st[0] = -_st[0]; /* 0x17048FF0: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14C)) = _v; } /* 0x17048FF2: fstp dword ptr [ebp - 0x14c] */
L_17048FF8:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17048FF8: fld dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17048FFB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17048FFD: fmul dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049000: inc esi */
    _flag_k = FK_INC;
    edi = ecx; /* 0x17049001: mov edi, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049003: fstp dword ptr [eax] */
L_17049005:
    fp_push(*(float*)&MEM32(edx + esi * 4 + 0x24)); /* 0x17049005: fld dword ptr [edx + esi*4 + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049009: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1704900A: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1704900C: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 7 */ /* 0x1704900F: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17049012: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049014: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049005; /* 0x17049016: jb 0x17049005 */
L_17049018:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049018: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x1704901B: add ecx, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1704901E: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17048FF8; /* 0x17049021: jne 0x17048ff8 */
L_17049023:
    /* cmp MEM32(ebp + 0xC), 4 */ /* 0x17049023: cmp dword ptr [ebp + 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704934B; /* 0x17049027: jbe 0x1704934b */
L_1704902D:
    fp_push(_st[0]); /* 0x1704902D: fld st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704902F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x17049031: fld st(0) */
    PUSH32(esp, 0x52u); /* 0x17049033: push 0x52 */
    _st[0] *= _st[1]; /* 0x17049035: fmul st(1) */
    ecx = POP32_VAL(esp); /* 0x17049037: pop ecx */
    edi = ebp + (-0x1F4); /* 0x17049038: lea edi, [ebp - 0x1f4] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704903E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17049040: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049043: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x17049046: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049048: fmul st(1) */
    fp_push(_st[0]); /* 0x1704904A: fld st(0) */
    _st[0] *= _st[1]; /* 0x1704904C: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704904E: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17049051: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049054: faddp st(1) */
    fp_push(_st[1]); /* 0x17049056: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17049058: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005404); /* 0x1704905B: fmul dword ptr [0x17005404] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049061: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17049063: fstp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x17049066: mov eax, dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x17049069: fld st(0) */
    MEM32(ebp + (-0x1F4)) = eax; /* 0x1704906B: mov dword ptr [ebp - 0x1f4], eax */
    _st[0] *= _st[2]; /* 0x17049071: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049073: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[4]; /* 0x17049076: fmul st(4) */
    fp_push(_st[0]); /* 0x17049078: fld st(0) */
    _st[0] *= _st[4]; /* 0x1704907A: fmul st(4) */
    fp_push(_st[2]); /* 0x1704907C: fld st(2) */
    _st[0] *= _st[6]; /* 0x1704907E: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049080: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17049082: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[2]); /* 0x17049085: fld st(2) */
    _st[0] *= _st[5]; /* 0x17049087: fmul st(5) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17049089: fmul dword ptr [0x17001da0] */
    _st[0] = _st[1] - _st[0]; /* 0x1704908F: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17049091: fstp dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x17049094: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049097: fstp st(0) */
    MEM32(ebp + (-0x1CC)) = eax; /* 0x17049099: mov dword ptr [ebp - 0x1cc], eax */
    fp_push(_st[2]); /* 0x1704909F: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x170490A1: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x170490A4: fmul dword ptr [0x17001da0] */
    _st[0] -= _st[1]; /* 0x170490AA: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x170490AC: fstp dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x170490AF: mov eax, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170490B2: fstp st(0) */
    MEM32(ebp + (-0x1B4)) = eax; /* 0x170490B4: mov dword ptr [ebp - 0x1b4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170490BA: fld dword ptr [ebp + 0x10] */
    _st[0] -= _st[1]; /* 0x170490BD: fsub st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170490BF: fst dword ptr [ebp - 0x10] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x170490C2: fstp st(1) */
    eax = MEM32(ebp + (-0x10)); /* 0x170490C4: mov eax, dword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x170490C7: fld st(1) */
    MEM32(ebp + (-0x104)) = eax; /* 0x170490C9: mov dword ptr [ebp - 0x104], eax */
    _st[0] *= _st[3]; /* 0x170490CF: fmul st(3) */
    _st[0] += _st[0]; /* 0x170490D1: fadd st(0), st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170490D3: fst dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170490D6: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17005300); /* 0x170490D9: fmul dword ptr [0x17005300] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1D4)) = _v; } /* 0x170490DF: fstp dword ptr [ebp - 0x1d4] */
    fp_push(_st[1]); /* 0x170490E5: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1A4)) = _v; } /* 0x170490E7: fstp dword ptr [ebp - 0x1a4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x194)) = _v; } /* 0x170490ED: fst dword ptr [ebp - 0x194] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170490F3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170490F5: fstp st(0) */
    fp_push(_st[1]); /* 0x170490F7: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x17C)) = _v; } /* 0x170490F9: fstp dword ptr [ebp - 0x17c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x174)) = _v; } /* 0x170490FF: fst dword ptr [ebp - 0x174] */
    fp_push(1.0); /* 0x17049105: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x154)) = _v; } /* 0x17049107: fstp dword ptr [ebp - 0x154] */
    _st[0] = -_st[0]; /* 0x1704910D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x134)) = _v; } /* 0x1704910F: fstp dword ptr [ebp - 0x134] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x17049115: fstp dword ptr [ebp - 0x12c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704911B: fld dword ptr [ebp + 0x10] */
    _st[0] = -_st[0]; /* 0x1704911E: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x17049120: fstp dword ptr [ebp - 0x114] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17049126: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17049129: mov eax, dword ptr [ebp + 8] */
    _st[0] = -_st[0]; /* 0x1704912C: fchs  */
    MEM32(ebp + (-0xDC)) = eax; /* 0x1704912E: mov dword ptr [ebp - 0xdc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17049134: mov eax, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF4)) = _v; } /* 0x17049137: fstp dword ptr [ebp - 0xf4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704913D: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0xB4)) = eax; /* 0x17049140: mov dword ptr [ebp - 0xb4], eax */
    _st[0] *= (double)*(float*)ADDR(0x17005400); /* 0x17049146: fmul dword ptr [0x17005400] */
    eax = ebx + 0x40; /* 0x1704914C: lea eax, [ebx + 0x40] */
    ecx = ebp + (-0x1F0); /* 0x1704914F: lea ecx, [ebp - 0x1f0] */
    MEM32(ebp + 0x10) = 9; /* 0x17049155: mov dword ptr [ebp + 0x10], 9 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x1704915C: fstp dword ptr [ebp - 0xd4] */
L_17049162:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17049162: fld dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049165: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(edx + 0x40); /* 0x17049167: fmul dword ptr [edx + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704916A: inc esi */
    _flag_k = FK_INC;
    edi = ecx; /* 0x1704916B: mov edi, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704916D: fstp dword ptr [eax] */
L_1704916F:
    fp_push(*(float*)&MEM32(edx + esi * 4 + 0x40)); /* 0x1704916F: fld dword ptr [edx + esi*4 + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049173: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17049174: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17049176: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 9 */ /* 0x17049179: cmp esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1704917C: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704917E: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704916F; /* 0x17049180: jb 0x1704916f */
L_17049182:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049182: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x17049185: add ecx, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17049188: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049162; /* 0x1704918B: jne 0x17049162 */
L_1704918D:
    /* cmp MEM32(ebp + 0xC), 5 */ /* 0x1704918D: cmp dword ptr [ebp + 0xc], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704934B; /* 0x17049191: jbe 0x1704934b */
L_17049197:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049197: fld dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704919A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x1704919C: fld st(0) */
    PUSH32(esp, 0x79u); /* 0x1704919E: push 0x79 */
    _st[0] *= _st[1]; /* 0x170491A0: fmul st(1) */
    ecx = POP32_VAL(esp); /* 0x170491A2: pop ecx */
    edi = ebp + (-0x1F4); /* 0x170491A3: lea edi, [ebp - 0x1f4] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170491A9: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    fp_push(_st[0]); /* 0x170491AB: fld st(0) */
    _st[0] *= _st[1]; /* 0x170491AD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170491AF: fstp dword ptr [ebp + 0x10] */
    fp_push(_st[2]); /* 0x170491B2: fld st(2) */
    _st[0] *= _st[3]; /* 0x170491B4: fmul st(3) */
    fp_push(_st[0]); /* 0x170491B6: fld st(0) */
    _st[0] *= _st[4]; /* 0x170491B8: fmul st(4) */
    fp_push(_st[1]); /* 0x170491BA: fld st(1) */
    _st[0] *= _st[2]; /* 0x170491BC: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170491BE: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170491C1: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[5]; /* 0x170491C4: fmul st(5) */
    _st[0] *= (double)*(float*)ADDR(0x17005304); /* 0x170491C6: fmul dword ptr [0x17005304] */
    fp_push(_st[1]); /* 0x170491CC: fld st(1) */
    _st[0] *= _st[4]; /* 0x170491CE: fmul st(4) */
    _st[0] *= (double)*(float*)ADDR(0x170053FC); /* 0x170491D0: fmul dword ptr [0x170053fc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170491D6: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170491D8: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[6]; /* 0x170491DB: fmul st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170491DD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170491DF: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[2]); /* 0x170491E2: fld st(2) */
    eax = MEM32(ebp + (-0xC)); /* 0x170491E4: mov eax, dword ptr [ebp - 0xc] */
    _st[0] *= _st[4]; /* 0x170491E7: fmul st(4) */
    MEM32(ebp + (-0x1F4)) = eax; /* 0x170491E9: mov dword ptr [ebp - 0x1f4], eax */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170491EF: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17005304); /* 0x170491F2: fmul dword ptr [0x17005304] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170491F8: fadd dword ptr [ebp + 0x10] */
    _st[0] *= _st[5]; /* 0x170491FB: fmul st(5) */
    fp_push(_st[1]); /* 0x170491FD: fld st(1) */
    _st[0] *= _st[4]; /* 0x170491FF: fmul st(4) */
    _st[0] *= (double)*(float*)ADDR(0x170053FC); /* 0x17049201: fmul dword ptr [0x170053fc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049207: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17049209: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704920C: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x1704920F: mov eax, dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x17049212: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1CC)) = eax; /* 0x17049215: mov dword ptr [ebp - 0x1cc], eax */
    fp_push(_st[3]); /* 0x1704921B: fld st(3) */
    _st[0] *= _st[5]; /* 0x1704921D: fmul st(5) */
    _st[0] *= (double)*(float*)ADDR(0x17005404); /* 0x1704921F: fmul dword ptr [0x17005404] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049225: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17049227: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x1704922A: fld st(1) */
    eax = MEM32(ebp + 0x8); /* 0x1704922C: mov eax, dword ptr [ebp + 8] */
    _st[0] *= _st[5]; /* 0x1704922F: fmul st(5) */
    MEM32(ebp + (-0x1C4)) = eax; /* 0x17049231: mov dword ptr [ebp - 0x1c4], eax */
    fp_push(_st[1]); /* 0x17049237: fld st(1) */
    _st[0] *= _st[7]; /* 0x17049239: fmul st(7) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704923B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1704923D: fstp dword ptr [ebp + 0x14] */
    fp_push(_st[3]); /* 0x17049240: fld st(3) */
    _st[0] *= _st[6]; /* 0x17049242: fmul st(6) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17049244: fmul dword ptr [0x17001da0] */
    _st[0] = _st[2] - _st[0]; /* 0x1704924A: fsubr st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1704924C: fstp dword ptr [ebp + 0x10] */
    fp_push(_st[2]); /* 0x1704924F: fld st(2) */
    _st[0] *= _st[5]; /* 0x17049251: fmul st(5) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17049253: fmul dword ptr [0x17001da0] */
    _st[0] -= _st[1]; /* 0x17049259: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1704925B: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704925E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049260: fstp st(0) */
    _st[0] -= _st[1]; /* 0x17049262: fsub st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17049264: fst dword ptr [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17049267: fstp st(1) */
    fp_push(_st[1]); /* 0x17049269: fld st(1) */
    _st[0] *= _st[3]; /* 0x1704926B: fmul st(3) */
    _st[0] += _st[0]; /* 0x1704926D: fadd st(0), st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704926F: fst dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17049272: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(0x17005300); /* 0x17049275: fmul dword ptr [0x17005300] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1A4)) = _v; } /* 0x1704927B: fstp dword ptr [ebp - 0x1a4] */
    eax = MEM32(ebp + 0x10); /* 0x17049281: mov eax, dword ptr [ebp + 0x10] */
    fp_push(_st[1]); /* 0x17049284: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x164)) = _v; } /* 0x17049286: fstp dword ptr [ebp - 0x164] */
    MEM32(ebp + (-0x194)) = eax; /* 0x1704928C: mov dword ptr [ebp - 0x194], eax */
    eax = MEM32(ebp + 0xC); /* 0x17049292: mov eax, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x154)) = _v; } /* 0x17049295: fst dword ptr [ebp - 0x154] */
    MEM32(ebp + (-0x17C)) = eax; /* 0x1704929B: mov dword ptr [ebp - 0x17c], eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170492A1: fstp st(0) */
    eax = MEM32(ebp + (-0x8)); /* 0x170492A3: mov eax, dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170492A6: fstp st(0) */
    MEM32(ebp + (-0xA4)) = eax; /* 0x170492A8: mov dword ptr [ebp - 0xa4], eax */
    eax = MEM32(ebp + 0x10); /* 0x170492AE: mov eax, dword ptr [ebp + 0x10] */
    fp_push(_st[1]); /* 0x170492B1: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x134)) = _v; } /* 0x170492B3: fstp dword ptr [ebp - 0x134] */
    MEM32(ebp + (-0x74)) = eax; /* 0x170492B9: mov dword ptr [ebp - 0x74], eax */
    eax = MEM32(ebp + 0x8); /* 0x170492BC: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x170492BF: fst dword ptr [ebp - 0x12c] */
    MEM32(ebp + (-0x44)) = eax; /* 0x170492C5: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x170492C8: mov eax, dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x170492CB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x104)) = _v; } /* 0x170492CD: fstp dword ptr [ebp - 0x104] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170492D3: mov dword ptr [ebp - 0x14], eax */
    eax = ebx + 0x64; /* 0x170492D6: lea eax, [ebx + 0x64] */
    ecx = ebp + (-0x1F0); /* 0x170492D9: lea ecx, [ebp - 0x1f0] */
    _st[0] = -_st[0]; /* 0x170492DF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x170492E1: fstp dword ptr [ebp - 0xdc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x170492E7: fstp dword ptr [ebp - 0xd4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x170492ED: fld dword ptr [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x170492F0: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x170492F2: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170492F8: fld dword ptr [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0xBu; /* 0x170492FB: mov dword ptr [ebp + 0xc], 0xb */
    _st[0] = -_st[0]; /* 0x17049302: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17049304: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704930A: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(0x17005400); /* 0x1704930D: fmul dword ptr [0x17005400] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x17049313: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17049316: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x17049319: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704931B: fstp dword ptr [ebp - 0x3c] */
L_1704931E:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1704931E: fld dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049321: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(edx + 0x64); /* 0x17049323: fmul dword ptr [edx + 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049326: inc esi */
    _flag_k = FK_INC;
    edi = ecx; /* 0x17049327: mov edi, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049329: fstp dword ptr [eax] */
L_1704932B:
    fp_push(*(float*)&MEM32(edx + esi * 4 + 0x64)); /* 0x1704932B: fld dword ptr [edx + esi*4 + 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704932F: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17049330: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17049332: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xBu */ /* 0x17049335: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17049338: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704933A: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704932B; /* 0x1704933C: jb 0x1704932b */
L_1704933E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704933E: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2Cu; /* 0x17049341: add ecx, 0x2c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x17049344: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704931E; /* 0x17049347: jne 0x1704931e */
L_17049349:
    goto L_1704934D; /* 0x17049349: jmp 0x1704934d */
L_1704934B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704934B: fstp st(0) */
L_1704934D:
    edi = POP32_VAL(esp); /* 0x1704934D: pop edi */
    esi = POP32_VAL(esp); /* 0x1704934E: pop esi */
    eax = ebx; /* 0x1704934F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x17049351: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17049352: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17049353: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704935B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704935Bu);

L_1704935B:
    edi = edi; /* 0x1704935B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704935D: push ebp */
    ebp = esp; /* 0x1704935E: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17049360: mov ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ecx); /* 0x17049363: imul ecx, ecx */
    /* test ecx, ecx */ /* 0x17049366: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049380; /* 0x17049368: jbe 0x17049380 */
L_1704936A:
    edx = MEM32(ebp + 0x8); /* 0x1704936A: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1704936D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17049370: sub eax, edx */
    _flag_k = FK_CMP;
L_17049372:
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17049372: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + edx); /* 0x17049375: fmul dword ptr [eax + edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17049378: fstp dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1704937A: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704937D: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049372; /* 0x1704937E: jne 0x17049372 */
L_17049380:
    eax = MEM32(ebp + 0x8); /* 0x17049380: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17049383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17049384: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704938C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704938Cu);

L_1704938C:
    edi = edi; /* 0x1704938C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704938E: push ebp */
    ebp = esp; /* 0x1704938F: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x17049391: mov edx, dword ptr [ebp + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edx); /* 0x17049394: imul edx, edx */
    /* test edx, edx */ /* 0x17049397: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170493B8; /* 0x17049399: jbe 0x170493b8 */
L_1704939B:
    eax = MEM32(ebp + 0x14); /* 0x1704939B: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1704939E: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170493A1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170493A2: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170493A5: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170493A7: sub esi, eax */
    _flag_k = FK_CMP;
L_170493A9:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x170493A9: fld dword ptr [ecx + eax] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170493AC: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + eax) = _v; } /* 0x170493AE: fstp dword ptr [esi + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170493B1: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170493B4: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170493A9; /* 0x170493B5: jne 0x170493a9 */
L_170493B7:
    esi = POP32_VAL(esp); /* 0x170493B7: pop esi */
L_170493B8:
    eax = MEM32(ebp + 0x8); /* 0x170493B8: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x170493BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170493BC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170493C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170493C4u);

L_170493C4:
    edi = edi; /* 0x170493C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170493C6: push ebp */
    ebp = esp; /* 0x170493C7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170493C9: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x170493CC: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x170493CF: imul eax, eax */
    /* cmp eax, 1 */ /* 0x170493D2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170493D5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170493D6: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x170493D9: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170493DB: fmul dword ptr [edx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170493F2; /* 0x170493DD: jbe 0x170493f2 */
L_170493DF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x170493DF: sub esi, edx */
    _flag_k = FK_CMP;
    ecx = edx + 0x4; /* 0x170493E1: lea ecx, [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170493E4: dec eax */
    _flag_k = FK_DEC;
L_170493E5:
    fp_push(*(float*)&MEM32(esi + ecx)); /* 0x170493E5: fld dword ptr [esi + ecx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170493E8: fmul dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170493EA: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170493ED: dec eax */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170493EE: faddp st(1) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170493E5; /* 0x170493F0: jne 0x170493e5 */
L_170493F2:
    esi = POP32_VAL(esp); /* 0x170493F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x170493F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170493F4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170493FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170493FCu);

L_170493FC:
    edi = edi; /* 0x170493FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170493FE: push ebp */
    ebp = esp; /* 0x170493FF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x17049401: sub esp, 0x90 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17049407: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1704940A: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1704940D: push edx */
    eax = ebp + (-0x90); /* 0x1704940E: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x17049414: push eax */
    RECOMP_CALL(sub_17048D0F); /* 0x17049415: call 0x17048d0f */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x1700537C)); /* 0x1704941A: fld dword ptr [0x1700537c] */
    /* cmp edx, 2 */ /* 0x17049420: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704942D; /* 0x17049423: jbe 0x1704942d */
L_17049425:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049425: fstp st(0) */
    fp_push(*(float*)&MEM32(0x17005378)); /* 0x17049427: fld dword ptr [0x17005378] */
L_1704942D:
    /* cmp edx, 4 */ /* 0x1704942D: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17049438; /* 0x17049430: jbe 0x17049438 */
L_17049432:
    _st[0] -= (double)*(float*)ADDR(0x17005374); /* 0x17049432: fsub dword ptr [0x17005374] */
L_17049438:
    _st[0] = (double)*(float*)ADDR(0x17005408) / _st[0]; /* 0x17049438: fdivr dword ptr [0x17005408] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edx); /* 0x1704943E: imul edx, edx */
    /* test edx, edx */ /* 0x17049441: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17049443: push esi */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049444: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x17049447: fmul st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049465; /* 0x17049449: jbe 0x17049465 */
L_1704944B:
    eax = MEM32(ebp + 0x1C); /* 0x1704944B: mov eax, dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x90); /* 0x1704944E: lea ecx, [ebp - 0x90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17049454: sub ecx, eax */
    _flag_k = FK_CMP;
    esi = edx; /* 0x17049456: mov esi, edx */
L_17049458:
    fp_push(_st[0]); /* 0x17049458: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x1704945A: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704945D: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704945F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17049462: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049458; /* 0x17049463: jne 0x17049458 */
L_17049465:
    eax = MEM32(ebp + 0x20); /* 0x17049465: mov eax, dword ptr [ebp + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049468: fstp st(0) */
    /* test eax, eax */ /* 0x1704946A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049490; /* 0x1704946C: je 0x17049490 */
L_1704946E:
    /* test edx, edx */ /* 0x1704946E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17049470: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x17049473: fmul st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704948E; /* 0x17049475: jbe 0x1704948e */
L_17049477:
    ecx = ebp + (-0x90); /* 0x17049477: lea ecx, [ebp - 0x90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1704947D: sub ecx, eax */
    _flag_k = FK_CMP;
    esi = edx; /* 0x1704947F: mov esi, edx */
L_17049481:
    fp_push(_st[0]); /* 0x17049481: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049483: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049486: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049488: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1704948B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049481; /* 0x1704948C: jne 0x17049481 */
L_1704948E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704948E: fstp st(0) */
L_17049490:
    eax = MEM32(ebp + 0x24); /* 0x17049490: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x17049493: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17049495: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170494B4; /* 0x17049496: je 0x170494b4 */
L_17049498:
    /* test edx, edx */ /* 0x17049498: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x1704949A: fmul dword ptr [ebp + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170494B4; /* 0x1704949D: jbe 0x170494b4 */
L_1704949F:
    ecx = ebp + (-0x90); /* 0x1704949F: lea ecx, [ebp - 0x90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170494A5: sub ecx, eax */
    _flag_k = FK_CMP;
L_170494A7:
    fp_push(_st[0]); /* 0x170494A7: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x170494A9: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170494AC: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170494AE: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170494B1: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170494A7; /* 0x170494B2: jne 0x170494a7 */
L_170494B4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170494B4: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170494B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170494B8: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170494B9: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170494C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170494C1u);

L_170494C1:
    edi = edi; /* 0x170494C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170494C3: push ebp */
    ebp = esp; /* 0x170494C4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8u; /* 0x170494C6: sub esp, 0xa8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0xA8); /* 0x170494CC: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170494D2: push eax */
    eax = MEM32(ebp + 0xC); /* 0x170494D3: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170494D6: fld dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170494D9: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x170494DC: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170494E0: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170494E3: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170494E7: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170494E9: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B13); /* 0x170494EC: call 0x17046b13 */
    RECOMP_FLAGS_IN();
    /* test MEM8(0x1723C95C), 1 */ /* 0x170494F1: test byte ptr [0x1723c95c], 1 */
    _flag_a = (uint32_t)(MEM8(0x1723C95C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x170494F8: fld dword ptr [ebp + 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170494FB: fadd dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170494FE: fmul dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17049504: fstp dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704951E; /* 0x17049507: jne 0x1704951e */
L_17049509:
    fp_push(*(double*)ADDR(0x17005418)); /* 0x17049509: fld qword ptr [0x17005418] */
    _flag_a = (uint32_t)((MEM32(0x1723C95C) | 1)); _flag_b = (uint32_t)((MEM32(0x1723C95C) | 1));
    MEM32(0x1723C95C) = MEM32(0x1723C95C) | 1; /* 0x1704950F: or dword ptr [0x1723c95c], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049516: fsqrt  */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C958) = _v; } /* 0x17049518: fstp dword ptr [0x1723c958] */
L_1704951E:
    /* test MEM8(0x1723C95C), 2 */ /* 0x1704951E: test byte ptr [0x1723c95c], 2 */
    _flag_a = (uint32_t)(MEM8(0x1723C95C)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704953E; /* 0x17049525: jne 0x1704953e */
L_17049527:
    fp_push(*(double*)ADDR(0x17005410)); /* 0x17049527: fld qword ptr [0x17005410] */
    _flag_a = (uint32_t)((MEM32(0x1723C95C) | 2)); _flag_b = (uint32_t)((MEM32(0x1723C95C) | 2));
    MEM32(0x1723C95C) = MEM32(0x1723C95C) | 2; /* 0x1704952D: or dword ptr [0x1723c95c], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049534: fsqrt  */
    { float _v = (float)_st[0]; *(float*)ADDR(0x1723C954) = _v; } /* 0x17049536: fst dword ptr [0x1723c954] */
    goto L_17049544; /* 0x1704953C: jmp 0x17049544 */
L_1704953E:
    fp_push(*(float*)&MEM32(0x1723C954)); /* 0x1704953E: fld dword ptr [0x1723c954] */
L_17049544:
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17049544: fld dword ptr [0x170018cc] */
    PUSH32(esp, ebx); /* 0x1704954A: push ebx */
    fp_push(*(float*)&MEM32(0x1723C958)); /* 0x1704954B: fld dword ptr [0x1723c958] */
    ebx = MEM32(ebp + 0x30); /* 0x17049551: mov ebx, dword ptr [ebp + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17049554: fmul dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17049557: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049558: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704955A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x1704955C: fmul st(1) */
    PUSH32(esp, edi); /* 0x1704955E: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704955F: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17049560: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049563: fld dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17049566: fsub dword ptr [ebp + 0xc] */
    _st[0] *= _st[2]; /* 0x17049569: fmul st(2) */
    _st[0] *= _st[1]; /* 0x1704956B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704956D: fstp dword ptr [ebp - 0x14] */
L_17049570:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x17049570: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x17049577: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x18)); /* 0x17049579: fmul dword ptr [ebp + edx*4 - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1704957D: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(0x1700531C); /* 0x17049580: fmul dword ptr [0x1700531c] */
    /* test esi, esi */ /* 0x17049586: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170495A4; /* 0x17049588: jbe 0x170495a4 */
L_1704958A:
    ecx = ebp + (-0xA8); /* 0x1704958A: lea ecx, [ebp - 0xa8] */
    eax = ebx + eax * 4; /* 0x17049590: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x17049593: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x17049595: mov edi, esi */
L_17049597:
    fp_push(_st[0]); /* 0x17049597: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049599: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704959C: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704959E: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170495A1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049597; /* 0x170495A2: jne 0x17049597 */
L_170495A4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170495A4: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170495A5: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170495A7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170495A8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 5 */ /* 0x170495A9: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049570; /* 0x170495AC: jb 0x17049570 */
L_170495AE:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x170495AE: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170495D1; /* 0x170495B1: jae 0x170495d1 */
L_170495B3:
    esi = edx + edx + 0x1; /* 0x170495B3: lea esi, [edx + edx + 1] */
L_170495B7:
    eax = edx; /* 0x170495B7: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x170495B9: imul eax, edx */
    /* test esi, esi */ /* 0x170495BC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170495C9; /* 0x170495BE: jbe 0x170495c9 */
L_170495C0:
    edi = ebx + eax * 4; /* 0x170495C0: lea edi, [ebx + eax*4] */
    ecx = esi; /* 0x170495C3: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170495C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170495C7: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_170495C9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170495C9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170495CA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170495CB: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x170495CC: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170495B7; /* 0x170495CF: jb 0x170495b7 */
L_170495D1:
    ebx = MEM32(ebp + 0x34); /* 0x170495D1: mov ebx, dword ptr [ebp + 0x34] */
    /* test ebx, ebx */ /* 0x170495D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049669; /* 0x170495D6: je 0x17049669 */
L_170495DC:
    fp_push(*(float*)&MEM32(ebp + 0x24)); /* 0x170495DC: fld dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170495DF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += (double)*(float*)ADDR(ebp + 0x14); /* 0x170495E1: fadd dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170495E4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170495E6: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170495E7: fmul dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(0x1723C958)); /* 0x170495ED: fld dword ptr [0x1723c958] */
    _st[0] *= _st[1]; /* 0x170495F3: fmul st(1) */
    _st[0] *= _st[2]; /* 0x170495F5: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170495F7: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170495FA: fld dword ptr [ebp + 0x14] */
    _st[0] -= _st[1]; /* 0x170495FD: fsub st(1) */
    _st[0] *= _st[3]; /* 0x170495FF: fmul st(3) */
    _st[0] *= _st[2]; /* 0x17049601: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17049603: fstp dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049606: fstp st(0) */
L_17049608:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x17049608: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x1704960F: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x18)); /* 0x17049611: fmul dword ptr [ebp + edx*4 - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17049615: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(0x1700531C); /* 0x17049618: fmul dword ptr [0x1700531c] */
    /* test esi, esi */ /* 0x1704961E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704963C; /* 0x17049620: jbe 0x1704963c */
L_17049622:
    ecx = ebp + (-0xA8); /* 0x17049622: lea ecx, [ebp - 0xa8] */
    eax = ebx + eax * 4; /* 0x17049628: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1704962B: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x1704962D: mov edi, esi */
L_1704962F:
    fp_push(_st[0]); /* 0x1704962F: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049631: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049634: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049636: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17049639: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704962F; /* 0x1704963A: jne 0x1704962f */
L_1704963C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704963C: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704963D: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704963F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049640: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 5 */ /* 0x17049641: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049608; /* 0x17049644: jb 0x17049608 */
L_17049646:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17049646: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17049669; /* 0x17049649: jae 0x17049669 */
L_1704964B:
    esi = edx + edx + 0x1; /* 0x1704964B: lea esi, [edx + edx + 1] */
L_1704964F:
    eax = edx; /* 0x1704964F: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17049651: imul eax, edx */
    /* test esi, esi */ /* 0x17049654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049661; /* 0x17049656: jbe 0x17049661 */
L_17049658:
    edi = ebx + eax * 4; /* 0x17049658: lea edi, [ebx + eax*4] */
    ecx = esi; /* 0x1704965B: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704965D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704965F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_17049661:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17049661: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049662: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049663: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17049664: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704964F; /* 0x17049667: jb 0x1704964f */
L_17049669:
    ebx = MEM32(ebp + 0x38); /* 0x17049669: mov ebx, dword ptr [ebp + 0x38] */
    /* test ebx, ebx */ /* 0x1704966C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049707; /* 0x1704966E: je 0x17049707 */
L_17049674:
    fp_push(*(float*)&MEM32(ebp + 0x28)); /* 0x17049674: fld dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049677: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x17049679: fadd dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704967C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704967E: inc esi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1704967F: fmul dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(0x1723C958)); /* 0x17049685: fld dword ptr [0x1723c958] */
    _st[0] *= _st[1]; /* 0x1704968B: fmul st(1) */
    _st[0] *= _st[2]; /* 0x1704968D: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704968F: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17049692: fld dword ptr [ebp + 0x18] */
    _st[0] -= _st[1]; /* 0x17049695: fsub st(1) */
    _st[0] *= _st[3]; /* 0x17049697: fmul st(3) */
    _st[0] *= _st[2]; /* 0x17049699: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704969B: fstp dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704969E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170496A0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170496A2: fstp st(0) */
L_170496A4:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x170496A4: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x170496AB: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x18)); /* 0x170496AD: fmul dword ptr [ebp + edx*4 - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x170496B1: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(0x1700531C); /* 0x170496B4: fmul dword ptr [0x1700531c] */
    /* test esi, esi */ /* 0x170496BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170496D8; /* 0x170496BC: jbe 0x170496d8 */
L_170496BE:
    ecx = ebp + (-0xA8); /* 0x170496BE: lea ecx, [ebp - 0xa8] */
    eax = ebx + eax * 4; /* 0x170496C4: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x170496C7: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x170496C9: mov edi, esi */
L_170496CB:
    fp_push(_st[0]); /* 0x170496CB: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + ecx); /* 0x170496CD: fmul dword ptr [eax + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170496D0: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170496D2: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170496D5: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170496CB; /* 0x170496D6: jne 0x170496cb */
L_170496D8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170496D8: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170496D9: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170496DB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170496DC: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 5 */ /* 0x170496DD: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170496A4; /* 0x170496E0: jb 0x170496a4 */
L_170496E2:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x170496E2: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704970B; /* 0x170496E5: jae 0x1704970b */
L_170496E7:
    esi = edx + edx + 0x1; /* 0x170496E7: lea esi, [edx + edx + 1] */
L_170496EB:
    eax = edx; /* 0x170496EB: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x170496ED: imul eax, edx */
    /* test esi, esi */ /* 0x170496F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170496FD; /* 0x170496F2: jbe 0x170496fd */
L_170496F4:
    edi = ebx + eax * 4; /* 0x170496F4: lea edi, [ebx + eax*4] */
    ecx = esi; /* 0x170496F7: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170496F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170496FB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_170496FD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170496FD: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170496FE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170496FF: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17049700: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170496EB; /* 0x17049703: jb 0x170496eb */
L_17049705:
    goto L_1704970B; /* 0x17049705: jmp 0x1704970b */
L_17049707:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049707: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049709: fstp st(0) */
L_1704970B:
    edi = POP32_VAL(esp); /* 0x1704970B: pop edi */
    esi = POP32_VAL(esp); /* 0x1704970C: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704970D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704970F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17049710: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x17049711: ret 0x34 */
    RECOMP_REGS_OUT();
}

void sub_17049719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17049719u);

L_17049719:
    edi = edi; /* 0x17049719: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704971B: push ebp */
    ebp = esp; /* 0x1704971C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x1704971E: sub esp, 0xac */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17049724: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17049727: fld dword ptr [eax] */
    ecx = MEM32(eax + 0x8); /* 0x17049729: mov ecx, dword ptr [eax + 8] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1704972C: mov dword ptr [ebp - 0xc], ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1704972F: fst dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17049732: fld dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x17049735: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x17049738: mov dword ptr [ebp - 0x20], ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704973B: fst dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1704973E: fld dword ptr [eax + 0x14] */
    ecx = MEM32(eax + 0x18); /* 0x17049741: mov ecx, dword ptr [eax + 0x18] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x17049744: mov dword ptr [ebp - 8], ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17049747: fst dword ptr [ebp - 0x14] */
    ecx = MEM32(eax + 0x20); /* 0x1704974A: mov ecx, dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x1704974D: fld dword ptr [eax + 0x24] */
    eax = MEM32(eax + 0x28); /* 0x17049750: mov eax, dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17049753: fst dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17049756: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17049759: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704975C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1704975F: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17049762: fld dword ptr [eax] */
    PUSH32(esp, esi); /* 0x17049764: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17049765: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17049768: dec ecx */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17049769: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704976B: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17049A67; /* 0x1704976C: je 0x17049a67 */
L_17049772:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17049772: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170497BA; /* 0x17049773: je 0x170497ba */
L_17049775:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17049775: dec ecx */
    _flag_k = FK_DEC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049776: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049778: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704977A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704977C: fstp st(0) */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170497AA; /* 0x1704977E: je 0x170497aa */
L_17049780:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17049780: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704979A; /* 0x17049781: je 0x1704979a */
L_17049783:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17049783: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049AB6; /* 0x17049784: jne 0x17049ab6 */
L_1704978A:
    PUSH32(esp, esi); /* 0x1704978A: push esi */
    PUSH32(esp, eax); /* 0x1704978B: push eax */
    eax = ebp + (-0x24); /* 0x1704978C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1704978F: push eax */
    RECOMP_CALL(sub_17048276); /* 0x17049790: call 0x17048276 */
    RECOMP_FLAGS_IN();
    goto L_17049AB6; /* 0x17049795: jmp 0x17049ab6 */
L_1704979A:
    PUSH32(esp, esi); /* 0x1704979A: push esi */
    PUSH32(esp, eax); /* 0x1704979B: push eax */
    eax = ebp + (-0x24); /* 0x1704979C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1704979F: push eax */
    RECOMP_CALL(sub_17047B35); /* 0x170497A0: call 0x17047b35 */
    RECOMP_FLAGS_IN();
    goto L_17049AB6; /* 0x170497A5: jmp 0x17049ab6 */
L_170497AA:
    PUSH32(esp, esi); /* 0x170497AA: push esi */
    PUSH32(esp, eax); /* 0x170497AB: push eax */
    eax = ebp + (-0x24); /* 0x170497AC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x170497AF: push eax */
    RECOMP_CALL(sub_170476B4); /* 0x170497B0: call 0x170476b4 */
    RECOMP_FLAGS_IN();
    goto L_17049AB6; /* 0x170497B5: jmp 0x17049ab6 */
L_170497BA:
    fp_push(_st[1]); /* 0x170497BA: fld st(1) */
    PUSH32(esp, edi); /* 0x170497BC: push edi */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170497BD: fmul dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x170497C0: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170497C2: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170497C5: fsubp st(1) */
    fp_push(_st[3]); /* 0x170497C7: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170497C9: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170497CC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170497CE: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170497D1: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170497D4: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170497D7: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170497DA: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170497DD: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170497DF: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170497E2: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170497E5: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170497E7: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170497EA: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170497ED: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[1]); /* 0x170497F0: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170497F2: fmul dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x170497F5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170497F7: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170497FA: fsubp st(1) */
    fp_push(_st[6]); /* 0x170497FC: fld st(6) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170497FE: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049801: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17049803: fstp dword ptr [esi + 0xc] */
    fp_push(_st[1]); /* 0x17049806: fld st(1) */
    _st[0] *= _st[6]; /* 0x17049808: fmul st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1704980A: fstp dword ptr [ebp + 0x14] */
    fp_push(_st[3]); /* 0x1704980D: fld st(3) */
    _st[0] *= _st[5]; /* 0x1704980F: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17049811: fstp dword ptr [ebp + 8] */
    fp_push(_st[2]); /* 0x17049814: fld st(2) */
    _st[0] *= _st[4]; /* 0x17049816: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17049818: fstp dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x1704981B: fld st(0) */
    _st[0] *= _st[2]; /* 0x1704981D: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1704981F: fstp dword ptr [ebp - 0x48] */
    fp_push(_st[0]); /* 0x17049822: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049824: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17049826: fstp dword ptr [ebp - 0x44] */
    fp_push(_st[2]); /* 0x17049829: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704982B: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704982D: fstp dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x17049830: fld st(0) */
    _st[0] *= _st[6]; /* 0x17049832: fmul st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17049834: fstp dword ptr [ebp - 0x38] */
    fp_push(_st[2]); /* 0x17049837: fld st(2) */
    _st[0] *= _st[5]; /* 0x17049839: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1704983B: fstp dword ptr [ebp - 0x40] */
    fp_push(_st[4]); /* 0x1704983E: fld st(4) */
    _st[0] *= _st[5]; /* 0x17049840: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17049842: fstp dword ptr [ebp - 0x2c] */
    fp_push(_st[1]); /* 0x17049845: fld st(1) */
    _st[0] *= _st[2]; /* 0x17049847: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17049849: fstp dword ptr [ebp - 0x34] */
    fp_push(_st[3]); /* 0x1704984C: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704984E: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17049850: fstp dword ptr [ebp - 0x3c] */
    fp_push(_st[5]); /* 0x17049853: fld st(5) */
    _st[0] *= _st[6]; /* 0x17049855: fmul st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17049857: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[1]); /* 0x1704985A: fld st(1) */
    _st[0] *= _st[5]; /* 0x1704985C: fmul st(5) */
    fp_push(_st[4]); /* 0x1704985E: fld st(4) */
    _st[0] *= _st[7]; /* 0x17049860: fmul st(7) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049862: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x17049864: fstp dword ptr [ebp - 0xac] */
    fp_push(_st[2]); /* 0x1704986A: fld st(2) */
    _st[0] *= _st[2]; /* 0x1704986C: fmul st(2) */
    _st[0] = -_st[0]; /* 0x1704986E: fchs  */
    fp_push(_st[1]); /* 0x17049870: fld st(1) */
    _st[0] *= _st[5]; /* 0x17049872: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049874: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x17049876: fstp dword ptr [ebp - 0xa8] */
    fp_push(_st[2]); /* 0x1704987C: fld st(2) */
    _st[0] *= _st[1]; /* 0x1704987E: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17005470); /* 0x17049880: fmul dword ptr [0x17005470] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17049886: fstp dword ptr [ebp - 0xa4] */
    _st[0] *= _st[4]; /* 0x1704988C: fmul st(4) */
    _st[0] = -_st[0]; /* 0x1704988E: fchs  */
    fp_push(_st[2]); /* 0x17049890: fld st(2) */
    _st[0] *= _st[6]; /* 0x17049892: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049894: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17049896: fstp dword ptr [ebp - 0xa0] */
    fp_push(_st[3]); /* 0x1704989C: fld st(3) */
    _st[0] *= _st[5]; /* 0x1704989E: fmul st(5) */
    fp_push(_st[3]); /* 0x170498A0: fld st(3) */
    _st[0] *= _st[2]; /* 0x170498A2: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170498A4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x170498A6: fstp dword ptr [ebp - 0x9c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170498AC: fstp st(0) */
    fp_push(_st[1]); /* 0x170498AE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170498B0: fmul dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x170498B3: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170498B5: fld dword ptr [ebp - 8] */
    _st[0] *= _st[4]; /* 0x170498B8: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170498BA: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x170498BC: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170498C2: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x170498C5: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170498C7: fld dword ptr [ebp - 4] */
    _st[0] *= _st[3]; /* 0x170498CA: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170498CC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x170498CE: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170498D4: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x17005470); /* 0x170498D7: fmul dword ptr [0x17005470] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170498DD: fst dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170498E0: fmul st(1) */
    _st[0] = -_st[0]; /* 0x170498E2: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x170498E4: fstp dword ptr [ebp - 0x90] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170498EA: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170498ED: fld dword ptr [ebp - 4] */
    _st[0] *= _st[3]; /* 0x170498F0: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170498F2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x170498F4: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170498FA: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x170498FD: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170498FF: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[3]; /* 0x17049902: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049904: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17049906: fstp dword ptr [ebp - 0x88] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704990C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704990E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049910: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049913: fld dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(0x1700546C)); /* 0x17049916: fld dword ptr [0x1700546c] */
    fp_push(*(float*)&MEM32(0x17005468)); /* 0x1704991C: fld dword ptr [0x17005468] */
    fp_push(_st[3]); /* 0x17049922: fld st(3) */
    _st[0] *= _st[3]; /* 0x17049924: fmul st(3) */
    _st[0] *= _st[1]; /* 0x17049926: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17049928: fld dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x14); /* 0x1704992B: fadd dword ptr [ebp + 0x14] */
    _st[0] *= _st[3]; /* 0x1704992E: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049930: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17049932: fstp dword ptr [ebp - 0x84] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17049938: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1704993B: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x1704993E: fadd dword ptr [ebp + 0xc] */
    _st[0] *= _st[2]; /* 0x17049941: fmul st(2) */
    fp_push(_st[1]); /* 0x17049943: fld st(1) */
    _st[0] *= _st[5]; /* 0x17049945: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049947: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17049949: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704994C: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704994F: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17049952: fld dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17049955: fadd dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17049958: fmul dword ptr [0x1700141c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704995E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17049960: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17049963: fld dword ptr [ebp - 0x40] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17049966: fadd dword ptr [ebp - 0x38] */
    _st[0] *= _st[2]; /* 0x17049969: fmul st(2) */
    PUSH32(esp, 5); /* 0x1704996B: push 5 */
    fp_push(_st[1]); /* 0x1704996D: fld st(1) */
    edx = esi + 0x10; /* 0x1704996F: lea edx, [esi + 0x10] */
    _st[0] *= _st[4]; /* 0x17049972: fmul st(4) */
    ecx = ebp + (-0xA0); /* 0x17049974: lea ecx, [ebp - 0xa0] */
    edi = POP32_VAL(esp); /* 0x1704997A: pop edi */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704997B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x1704997D: fstp dword ptr [ebp - 0x78] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049980: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17049982: fld dword ptr [ebp - 0x34] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x17049985: fsub dword ptr [ebp - 0x2c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17049988: fadd dword ptr [ebp - 0x3c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x1704998B: fsub dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(0x17005464); /* 0x1704998E: fmul dword ptr [0x17005464] */
    fp_push(_st[3]); /* 0x17049994: fld st(3) */
    _st[0] *= _st[4]; /* 0x17049996: fmul st(4) */
    fp_push(_st[3]); /* 0x17049998: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704999A: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704999C: fsubp st(1) */
    _st[0] *= _st[2]; /* 0x1704999E: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170499A0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x170499A2: fstp dword ptr [ebp - 0x74] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170499A5: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x170499A7: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[1]; /* 0x170499AA: fmul st(1) */
    _st[0] = -_st[0]; /* 0x170499AC: fchs  */
    fp_push(_st[2]); /* 0x170499AE: fld st(2) */
    _st[0] *= _st[4]; /* 0x170499B0: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170499B2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x170499B4: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170499B7: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[2]; /* 0x170499BA: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170499BC: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x170499BF: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170499C2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x170499C4: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170499C7: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x170499CA: fmul dword ptr [ebp - 0x1c] */
    _st[0] = -_st[0]; /* 0x170499CD: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x170499CF: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170499D2: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[1]; /* 0x170499D5: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170499D7: fld dword ptr [ebp - 4] */
    _st[0] *= _st[4]; /* 0x170499DA: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170499DC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x170499DE: fstp dword ptr [ebp - 0x64] */
    fp_push(_st[1]); /* 0x170499E1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x170499E3: fmul dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x170499E6: fld st(1) */
    _st[0] *= _st[4]; /* 0x170499E8: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170499EA: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x170499EC: fstp dword ptr [ebp - 0x60] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170499EF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170499F1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170499F3: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170499F5: fld dword ptr [ebp + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x170499F8: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x170499FB: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170499FE: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17049A01: fsub dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x17049A04: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17049A07: fld dword ptr [ebp - 0x44] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17049A0A: fsub dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(0x17005460); /* 0x17049A0D: fmul dword ptr [0x17005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17049A13: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17049A16: fld dword ptr [ebp - 0x40] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17049A19: fsub dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17049A1C: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17049A1F: fld dword ptr [ebp - 0x28] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x17049A22: fsub dword ptr [ebp - 0x2c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17049A25: fsub dword ptr [ebp - 0x34] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17049A28: fadd dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17049A2B: fmul dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17049A31: fstp dword ptr [ebp - 0x4c] */
L_17049A34:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17049A34: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x17049A37: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x17049A3A: fld dword ptr [ecx - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17049A3D: fmul dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049A40: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x17049A42: fld dword ptr [ecx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17049A45: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049A48: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17049A4A: fld dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17049A4D: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049A50: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17049A52: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x17049A54: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17049A57: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049A5A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17049A5C: fstp dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17049A5E: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17049A61: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049A34; /* 0x17049A62: jne 0x17049a34 */
L_17049A64:
    edi = POP32_VAL(esp); /* 0x17049A64: pop edi */
    goto L_17049AB6; /* 0x17049A65: jmp 0x17049ab6 */
L_17049A67:
    fp_push(_st[1]); /* 0x17049A67: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17049A69: fmul dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x17049A6C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17049A6E: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049A71: fsubp st(1) */
    fp_push(_st[3]); /* 0x17049A73: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17049A75: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049A78: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17049A7A: fstp dword ptr [esi + 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049A7D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049A7F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049A81: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17049A83: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17049A86: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049A89: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17049A8C: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049A8F: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049A91: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17049A94: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049A97: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17049A99: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17049A9C: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17049A9F: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17049AA2: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17049AA5: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049AA8: fsubp st(1) */
    fp_push(_st[1]); /* 0x17049AAA: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17049AAC: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049AAF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17049AB1: fstp dword ptr [esi + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049AB4: fstp st(0) */
L_17049AB6:
    eax = esi; /* 0x17049AB6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17049AB8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17049AB9: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17049ABA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17049AC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17049AC2u);

L_17049AC2:
    edi = edi; /* 0x17049AC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17049AC4: push ebp */
    ebp = esp; /* 0x17049AC5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x17049AC7: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17049ACD: push ebx */
    PUSH32(esp, esi); /* 0x17049ACE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17049ACF: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17049AD2: fld dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x17049AD5: push edi */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17049AD6: fld dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17049AD9: fld dword ptr [esi] */
    fp_push(_st[0]); /* 0x17049ADB: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049ADD: fmul st(1) */
    fp_push(_st[2]); /* 0x17049ADF: fld st(2) */
    _st[0] *= _st[3]; /* 0x17049AE1: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049AE3: faddp st(1) */
    fp_push(_st[3]); /* 0x17049AE5: fld st(3) */
    _st[0] *= _st[4]; /* 0x17049AE7: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049AE9: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17049AEB: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17049AED: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049AEF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049AF1: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17049AF3: fst dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x10)); /* 0x17049AF6: fcomp dword ptr [ebp + 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17049AF9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17049AFB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17049B09; /* 0x17049AFE: jp 0x17049b09 */
L_17049B00:
    MEM32(ebp + 0x10) = 0x3FC90FDCu; /* 0x17049B00: mov dword ptr [ebp + 0x10], 0x3fc90fdc */
    goto L_17049B17; /* 0x17049B07: jmp 0x17049b17 */
L_17049B09:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049B09: fld dword ptr [ebp + 0x10] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0xC); /* 0x17049B0C: fdiv dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B18C); /* 0x17049B0F: call 0x1721b18c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17049B14: fstp dword ptr [ebp + 0x10] */
L_17049B17:
    fp_push(1.0); /* 0x17049B17: fld1  */
    eax = MEM32(0x1723C974); /* 0x17049B19: mov eax, dword ptr [0x1723c974] */
    /* test LO8(eax), 1 */ /* 0x17049B1E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _st[0] /= (double)*(float*)ADDR(ebp + 0xC); /* 0x17049B20: fdiv dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x17049B23: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17049B25: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17049B27: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x17049B2A: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17049B2C: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17049B2F: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17049B32: fmul dword ptr [esi + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049B4F; /* 0x17049B35: jne 0x17049b4f */
L_17049B37:
    fp_push(*(double*)ADDR(0x17005418)); /* 0x17049B37: fld qword ptr [0x17005418] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x17049B3D: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049B40: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049B42: mov dword ptr [0x1723c974], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(0x1723C970) = _v; } /* 0x17049B47: fst dword ptr [0x1723c970] */
    goto L_17049B55; /* 0x17049B4D: jmp 0x17049b55 */
L_17049B4F:
    fp_push(*(float*)&MEM32(0x1723C970)); /* 0x17049B4F: fld dword ptr [0x1723c970] */
L_17049B55:
    /* test LO8(eax), 2 */ /* 0x17049B55: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049B57: fld dword ptr [ebp + 0x10] */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x17049B5A: fcos  */
    fp_push(_st[0]); /* 0x17049B5C: fld st(0) */
    _st[0] *= _st[2]; /* 0x17049B5E: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17049B60: fst dword ptr [ebp - 0x10] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049B7B; /* 0x17049B63: jne 0x17049b7b */
L_17049B65:
    fp_push(*(double*)ADDR(0x17005458)); /* 0x17049B65: fld qword ptr [0x17005458] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x17049B6B: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049B6E: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049B70: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C96C) = _v; } /* 0x17049B75: fstp dword ptr [0x1723c96c] */
L_17049B7B:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049B7B: fld dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17049B7E: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 2 */ /* 0x17049B81: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17049B84: fsin  */
    fp_push(_st[3]); /* 0x17049B86: fld st(3) */
    _st[0] -= _st[2]; /* 0x17049B88: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17049B8A: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x17049B8D: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049B8F: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C96C); /* 0x17049B91: fmul dword ptr [0x1723c96c] */
    _st[0] *= _st[4]; /* 0x17049B97: fmul st(4) */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17049B99: fmul dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17049B9F: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049BA2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049BA4: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17049CC1; /* 0x17049BA6: jbe 0x17049cc1 */
L_17049BAC:
    /* test LO8(eax), 4 */ /* 0x17049BAC: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049BC6; /* 0x17049BAE: jne 0x17049bc6 */
L_17049BB0:
    fp_push(*(double*)ADDR(0x17005450)); /* 0x17049BB0: fld qword ptr [0x17005450] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x17049BB6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049BB9: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049BBB: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C968) = _v; } /* 0x17049BC0: fstp dword ptr [0x1723c968] */
L_17049BC6:
    /* cmp ecx, 3 */ /* 0x17049BC6: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(_st[0]); /* 0x17049BC9: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049BCB: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17049BCD: fst dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x17049BD0: fsub dword ptr [0x17001424] */
    _st[0] *= _st[1]; /* 0x17049BD6: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C968); /* 0x17049BD8: fmul dword ptr [0x1723c968] */
    _st[0] *= _st[2]; /* 0x17049BDE: fmul st(2) */
    _st[0] *= (double)*(float*)ADDR(0x1700194C); /* 0x17049BE0: fmul dword ptr [0x1700194c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17049BE6: fstp dword ptr [ebp - 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049BE9: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17049CC3; /* 0x17049BEB: jbe 0x17049cc3 */
L_17049BF1:
    /* test LO8(eax), 8 */ /* 0x17049BF1: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049C0B; /* 0x17049BF3: jne 0x17049c0b */
L_17049BF5:
    fp_push(*(double*)ADDR(0x17005448)); /* 0x17049BF5: fld qword ptr [0x17005448] */
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x17049BFB: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049BFE: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049C00: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C964) = _v; } /* 0x17049C05: fstp dword ptr [0x1723c964] */
L_17049C0B:
    /* cmp ecx, 4 */ /* 0x17049C0B: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x1723C964)); /* 0x17049C0E: fld dword ptr [0x1723c964] */
    _st[0] *= _st[1]; /* 0x17049C14: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049C16: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17049C19: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17049C1C: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049C1F: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700537C); /* 0x17049C22: fmul dword ptr [0x1700537c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17049C28: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17005444); /* 0x17049C2B: fmul dword ptr [0x17005444] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049C31: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x17049C33: fmul st(1) */
    fp_push(_st[1]); /* 0x17049C35: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17005440); /* 0x17049C37: fmul dword ptr [0x17005440] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049C3D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17049C3F: fstp dword ptr [ebp - 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049C42: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17049CC3; /* 0x17049C44: jbe 0x17049cc3 */
L_17049C46:
    /* cmp ecx, 5 */ /* 0x17049C46: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17049C49: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x1700543C); /* 0x17049C4C: fmul dword ptr [0x1700543c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049C52: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053FC); /* 0x17049C55: fmul dword ptr [0x170053fc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049C5B: fsubp st(1) */
    _st[0] += (double)*(float*)ADDR(0x17001DA0); /* 0x17049C5D: fadd dword ptr [0x17001da0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17049C63: fmul dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005438); /* 0x17049C66: fmul dword ptr [0x17005438] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17049C6C: fstp dword ptr [ebp - 0x18] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17049CC3; /* 0x17049C6F: jbe 0x17049cc3 */
L_17049C71:
    /* test LO8(eax), 0x10u */ /* 0x17049C71: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049C8B; /* 0x17049C73: jne 0x17049c8b */
L_17049C75:
    fp_push(*(double*)ADDR(0x17005430)); /* 0x17049C75: fld qword ptr [0x17005430] */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x17049C7B: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049C7E: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049C80: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C960) = _v; } /* 0x17049C85: fstp dword ptr [0x1723c960] */
L_17049C8B:
    _st[0] *= (double)*(float*)ADDR(0x1723C960); /* 0x17049C8B: fmul dword ptr [0x1723c960] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049C91: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005428); /* 0x17049C94: fmul dword ptr [0x17005428] */
    _st[0] = (double)*(float*)ADDR(0x17005424) - _st[0]; /* 0x17049C9A: fsubr dword ptr [0x17005424] */
    _st[0] *= _st[1]; /* 0x17049CA0: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17049CA2: fmul dword ptr [ebp + 0xc] */
    fp_push(_st[1]); /* 0x17049CA5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17049CA7: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005420); /* 0x17049CAA: fmul dword ptr [0x17005420] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049CB0: fsubp st(1) */
    fp_push(_st[1]); /* 0x17049CB2: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170018D4); /* 0x17049CB4: fmul dword ptr [0x170018d4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17049CBA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17049CBC: fstp dword ptr [ebp - 0x14] */
    goto L_17049CC3; /* 0x17049CBF: jmp 0x17049cc3 */
L_17049CC1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049CC1: fstp st(0) */
L_17049CC3:
    eax = ecx; /* 0x17049CC3: mov eax, ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049CC5: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CC7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CC8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17049D6A; /* 0x17049CC9: je 0x17049d6a */
L_17049CCF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CCF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17049D48; /* 0x17049CD0: je 0x17049d48 */
L_17049CD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CD2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17049D26; /* 0x17049CD3: je 0x17049d26 */
L_17049CD5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CD5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17049D04; /* 0x17049CD6: je 0x17049d04 */
L_17049CD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17049CD8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049D8C; /* 0x17049CD9: jne 0x17049d8c */
L_17049CDF:
    eax = ebp + (-0xB8); /* 0x17049CDF: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x17049CE5: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049CE6: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049CE9: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049CED: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049CF0: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049CF4: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049CF7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046E86); /* 0x17049CFA: call 0x17046e86 */
    RECOMP_FLAGS_IN();
    goto L_17049D8E; /* 0x17049CFF: jmp 0x17049d8e */
L_17049D04:
    eax = ebp + (-0xB8); /* 0x17049D04: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x17049D0A: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049D0B: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049D0E: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049D12: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049D15: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049D19: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049D1C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046CED); /* 0x17049D1F: call 0x17046ced */
    RECOMP_FLAGS_IN();
    goto L_17049D8E; /* 0x17049D24: jmp 0x17049d8e */
L_17049D26:
    eax = ebp + (-0xB8); /* 0x17049D26: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x17049D2C: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049D2D: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049D30: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049D34: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049D37: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049D3B: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049D3E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046BE5); /* 0x17049D41: call 0x17046be5 */
    RECOMP_FLAGS_IN();
    goto L_17049D8E; /* 0x17049D46: jmp 0x17049d8e */
L_17049D48:
    eax = ebp + (-0xB8); /* 0x17049D48: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x17049D4E: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049D4F: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049D52: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049D56: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049D59: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049D5D: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049D60: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B50); /* 0x17049D63: call 0x17046b50 */
    RECOMP_FLAGS_IN();
    goto L_17049D8E; /* 0x17049D68: jmp 0x17049d8e */
L_17049D6A:
    eax = ebp + (-0xB8); /* 0x17049D6A: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x17049D70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049D71: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049D74: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17049D78: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049D7B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17049D7F: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049D82: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B13); /* 0x17049D85: call 0x17046b13 */
    RECOMP_FLAGS_IN();
    goto L_17049D8E; /* 0x17049D8A: jmp 0x17049d8e */
L_17049D8C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049D8C: fstp st(0) */
L_17049D8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17049D8E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17049D90: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049DD7; /* 0x17049D92: jbe 0x17049dd7 */
L_17049D94:
    edi = MEM32(ebp + 0x20); /* 0x17049D94: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049D97: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049D99: inc esi */
    _flag_k = FK_INC;
L_17049D9A:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x17049D9A: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x17049DA1: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x28)); /* 0x17049DA3: fmul dword ptr [ebp + edx*4 - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17049DA7: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17049DAA: fmul dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x17049DAD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049DCB; /* 0x17049DAF: jbe 0x17049dcb */
L_17049DB1:
    ecx = ebp + (-0xB8); /* 0x17049DB1: lea ecx, [ebp - 0xb8] */
    eax = edi + eax * 4; /* 0x17049DB7: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x17049DBA: sub ecx, edi */
    _flag_k = FK_CMP;
    ebx = esi; /* 0x17049DBC: mov ebx, esi */
L_17049DBE:
    fp_push(_st[0]); /* 0x17049DBE: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049DC0: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049DC3: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049DC5: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17049DC8: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049DBE; /* 0x17049DC9: jne 0x17049dbe */
L_17049DCB:
    ecx = MEM32(ebp + 0x8); /* 0x17049DCB: mov ecx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049DCE: fstp st(0) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17049DD0: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049DD1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049DD2: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x17049DD3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049D9A; /* 0x17049DD5: jb 0x17049d9a */
L_17049DD7:
    ebx = MEM32(ebp + 0x24); /* 0x17049DD7: mov ebx, dword ptr [ebp + 0x24] */
    /* test ebx, ebx */ /* 0x17049DDA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E24; /* 0x17049DDC: je 0x17049e24 */
L_17049DDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17049DDE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17049DE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E24; /* 0x17049DE2: jbe 0x17049e24 */
L_17049DE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049DE4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049DE6: inc esi */
    _flag_k = FK_INC;
L_17049DE7:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x17049DE7: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x17049DEE: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x28)); /* 0x17049DF0: fmul dword ptr [ebp + edx*4 - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17049DF4: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17049DF7: fmul dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x17049DFA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E18; /* 0x17049DFC: jbe 0x17049e18 */
L_17049DFE:
    ecx = ebp + (-0xB8); /* 0x17049DFE: lea ecx, [ebp - 0xb8] */
    eax = ebx + eax * 4; /* 0x17049E04: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x17049E07: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x17049E09: mov edi, esi */
L_17049E0B:
    fp_push(_st[0]); /* 0x17049E0B: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049E0D: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049E10: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049E12: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17049E15: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049E0B; /* 0x17049E16: jne 0x17049e0b */
L_17049E18:
    ecx = MEM32(ebp + 0x8); /* 0x17049E18: mov ecx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049E1B: fstp st(0) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17049E1D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049E1E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049E1F: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x17049E20: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049DE7; /* 0x17049E22: jb 0x17049de7 */
L_17049E24:
    ebx = MEM32(ebp + 0x28); /* 0x17049E24: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x17049E27: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E6F; /* 0x17049E29: je 0x17049e6f */
L_17049E2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17049E2B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17049E2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E6F; /* 0x17049E2F: jbe 0x17049e6f */
L_17049E31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17049E31: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049E33: inc esi */
    _flag_k = FK_INC;
L_17049E34:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x17049E34: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x17049E3B: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x28)); /* 0x17049E3D: fmul dword ptr [ebp + edx*4 - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17049E41: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17049E44: fmul dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x17049E47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049E65; /* 0x17049E49: jbe 0x17049e65 */
L_17049E4B:
    ecx = ebp + (-0xB8); /* 0x17049E4B: lea ecx, [ebp - 0xb8] */
    eax = ebx + eax * 4; /* 0x17049E51: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x17049E54: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x17049E56: mov edi, esi */
L_17049E58:
    fp_push(_st[0]); /* 0x17049E58: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x17049E5A: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17049E5D: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17049E5F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17049E62: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17049E58; /* 0x17049E63: jne 0x17049e58 */
L_17049E65:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17049E65: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049E66: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049E68: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17049E69: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17049E6A: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17049E34; /* 0x17049E6D: jb 0x17049e34 */
L_17049E6F:
    edi = POP32_VAL(esp); /* 0x17049E6F: pop edi */
    esi = POP32_VAL(esp); /* 0x17049E70: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17049E71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x17049E73: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17049E74: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x17049E75: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_17049E7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17049E7Du);

L_17049E7D:
    edi = edi; /* 0x17049E7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17049E7F: push ebp */
    ebp = esp; /* 0x17049E80: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB4u; /* 0x17049E82: sub esp, 0xb4 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049E88: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x17049E8B: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17049E91: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17049E93: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17049EC8; /* 0x17049E96: jp 0x17049ec8 */
L_17049E98:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x17049E98: push dword ptr [ebp + 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17049E9B: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x17049E9E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x17049EA1: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17049EA4: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17049EA7: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17049EAB: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17049EAE: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17049EB2: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17049EB5: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17049EB8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17049EBB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170493FC); /* 0x17049EBE: call 0x170493fc */
    RECOMP_FLAGS_IN();
    goto L_1704A230; /* 0x17049EC3: jmp 0x1704a230 */
L_17049EC8:
    fp_push(*(float*)&MEM32(0x17005474)); /* 0x17049EC8: fld dword ptr [0x17005474] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049ECE: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17049ED1: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17049ED3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17049ED5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17049EDF; /* 0x17049ED8: je 0x17049edf */
L_17049EDA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049EDA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049EDC: fld dword ptr [ebp + 0x10] */
L_17049EDF:
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17049EDF: fsin  */
    eax = MEM32(0x1723C974); /* 0x17049EE1: mov eax, dword ptr [0x1723c974] */
    /* test LO8(eax), 1 */ /* 0x17049EE6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(_st[0]); /* 0x17049EE8: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049EEA: fmul st(1) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17049EEC: fdivr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17049EF2: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049EF5: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049F11; /* 0x17049EF7: jne 0x17049f11 */
L_17049EF9:
    fp_push(*(double*)ADDR(0x17005418)); /* 0x17049EF9: fld qword ptr [0x17005418] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x17049EFF: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049F02: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049F04: mov dword ptr [0x1723c974], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(0x1723C970) = _v; } /* 0x17049F09: fst dword ptr [0x1723c970] */
    goto L_17049F17; /* 0x17049F0F: jmp 0x17049f17 */
L_17049F11:
    fp_push(*(float*)&MEM32(0x1723C970)); /* 0x17049F11: fld dword ptr [0x1723c970] */
L_17049F17:
    /* test LO8(eax), 2 */ /* 0x17049F17: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049F19: fld dword ptr [ebp + 0x10] */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x17049F1C: fcos  */
    fp_push(_st[0]); /* 0x17049F1E: fld st(0) */
    _st[0] *= _st[2]; /* 0x17049F20: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17049F22: fst dword ptr [ebp - 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049F3D; /* 0x17049F25: jne 0x17049f3d */
L_17049F27:
    fp_push(*(double*)ADDR(0x17005458)); /* 0x17049F27: fld qword ptr [0x17005458] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x17049F2D: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049F30: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049F32: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C96C) = _v; } /* 0x17049F37: fstp dword ptr [0x1723c96c] */
L_17049F3D:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049F3D: fld dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17049F40: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 2 */ /* 0x17049F43: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17049F46: fsin  */
    fp_push(_st[3]); /* 0x17049F48: fld st(3) */
    _st[0] -= _st[2]; /* 0x17049F4A: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17049F4C: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x17049F4F: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049F51: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C96C); /* 0x17049F53: fmul dword ptr [0x1723c96c] */
    _st[0] *= _st[4]; /* 0x17049F59: fmul st(4) */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17049F5B: fmul dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17049F61: fstp dword ptr [ebp - 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049F64: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049F66: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704A083; /* 0x17049F68: jbe 0x1704a083 */
L_17049F6E:
    /* test LO8(eax), 4 */ /* 0x17049F6E: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049F88; /* 0x17049F70: jne 0x17049f88 */
L_17049F72:
    fp_push(*(double*)ADDR(0x17005450)); /* 0x17049F72: fld qword ptr [0x17005450] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x17049F78: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049F7B: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049F7D: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C968) = _v; } /* 0x17049F82: fstp dword ptr [0x1723c968] */
L_17049F88:
    /* cmp ecx, 3 */ /* 0x17049F88: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(_st[0]); /* 0x17049F8B: fld st(0) */
    _st[0] *= _st[1]; /* 0x17049F8D: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17049F8F: fst dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x17049F92: fsub dword ptr [0x17001424] */
    _st[0] *= _st[1]; /* 0x17049F98: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1723C968); /* 0x17049F9A: fmul dword ptr [0x1723c968] */
    _st[0] *= _st[2]; /* 0x17049FA0: fmul st(2) */
    _st[0] *= (double)*(float*)ADDR(0x1700194C); /* 0x17049FA2: fmul dword ptr [0x1700194c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17049FA8: fstp dword ptr [ebp - 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17049FAB: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704A085; /* 0x17049FAD: jbe 0x1704a085 */
L_17049FB3:
    /* test LO8(eax), 8 */ /* 0x17049FB3: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17049FCD; /* 0x17049FB5: jne 0x17049fcd */
L_17049FB7:
    fp_push(*(double*)ADDR(0x17005448)); /* 0x17049FB7: fld qword ptr [0x17005448] */
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x17049FBD: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x17049FC0: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x17049FC2: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C964) = _v; } /* 0x17049FC7: fstp dword ptr [0x1723c964] */
L_17049FCD:
    /* cmp ecx, 4 */ /* 0x17049FCD: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x1723C964)); /* 0x17049FD0: fld dword ptr [0x1723c964] */
    _st[0] *= _st[1]; /* 0x17049FD6: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049FD8: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17049FDB: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17049FDE: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17049FE1: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700537C); /* 0x17049FE4: fmul dword ptr [0x1700537c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17049FEA: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x17005444); /* 0x17049FED: fmul dword ptr [0x17005444] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049FF3: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x17049FF5: fmul st(1) */
    fp_push(_st[1]); /* 0x17049FF7: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17005440); /* 0x17049FF9: fmul dword ptr [0x17005440] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17049FFF: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704A001: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A004: fstp st(0) */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704A085; /* 0x1704A006: jbe 0x1704a085 */
L_1704A008:
    /* cmp ecx, 5 */ /* 0x1704A008: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704A00B: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x1700543C); /* 0x1704A00E: fmul dword ptr [0x1700543c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704A014: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x170053FC); /* 0x1704A017: fmul dword ptr [0x170053fc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704A01D: fsubp st(1) */
    _st[0] += (double)*(float*)ADDR(0x17001DA0); /* 0x1704A01F: fadd dword ptr [0x17001da0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704A025: fmul dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17005438); /* 0x1704A028: fmul dword ptr [0x17005438] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704A02E: fstp dword ptr [ebp - 0x14] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704A085; /* 0x1704A031: jbe 0x1704a085 */
L_1704A033:
    /* test LO8(eax), 0x10u */ /* 0x1704A033: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A04D; /* 0x1704A035: jne 0x1704a04d */
L_1704A037:
    fp_push(*(double*)ADDR(0x17005430)); /* 0x1704A037: fld qword ptr [0x17005430] */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x1704A03D: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = sqrt(_st[0]); /* 0x1704A040: fsqrt  */
    MEM32(0x1723C974) = eax; /* 0x1704A042: mov dword ptr [0x1723c974], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x1723C960) = _v; } /* 0x1704A047: fstp dword ptr [0x1723c960] */
L_1704A04D:
    _st[0] *= (double)*(float*)ADDR(0x1723C960); /* 0x1704A04D: fmul dword ptr [0x1723c960] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704A053: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005428); /* 0x1704A056: fmul dword ptr [0x17005428] */
    _st[0] = (double)*(float*)ADDR(0x17005424) - _st[0]; /* 0x1704A05C: fsubr dword ptr [0x17005424] */
    _st[0] *= _st[1]; /* 0x1704A062: fmul st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704A064: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x1704A067: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1704A069: fmul dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17005420); /* 0x1704A06C: fmul dword ptr [0x17005420] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704A072: fsubp st(1) */
    fp_push(_st[1]); /* 0x1704A074: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170018D4); /* 0x1704A076: fmul dword ptr [0x170018d4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704A07C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704A07E: fstp dword ptr [ebp - 0x10] */
    goto L_1704A085; /* 0x1704A081: jmp 0x1704a085 */
L_1704A083:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A083: fstp st(0) */
L_1704A085:
    eax = MEM32(ebp + 0xC); /* 0x1704A085: mov eax, dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A088: fstp st(0) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A08A: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A08C: fld dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A08F: fld dword ptr [eax + 8] */
    eax = ecx; /* 0x1704A092: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A094: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A095: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A11C; /* 0x1704A096: je 0x1704a11c */
L_1704A09C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A09C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A100; /* 0x1704A09D: je 0x1704a100 */
L_1704A09F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A09F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A0E4; /* 0x1704A0A0: je 0x1704a0e4 */
L_1704A0A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A0A2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A0C8; /* 0x1704A0A3: je 0x1704a0c8 */
L_1704A0A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A0A5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704A138; /* 0x1704A0A6: jne 0x1704a138 */
L_1704A0AC:
    eax = ebp + (-0xB4); /* 0x1704A0AC: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1704A0B2: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704A0B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1704A0B6: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704A0BA: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704A0BE: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046E86); /* 0x1704A0C1: call 0x17046e86 */
    RECOMP_FLAGS_IN();
    goto L_1704A13E; /* 0x1704A0C6: jmp 0x1704a13e */
L_1704A0C8:
    eax = ebp + (-0xB4); /* 0x1704A0C8: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1704A0CE: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704A0CF: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1704A0D2: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704A0D6: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704A0DA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046CED); /* 0x1704A0DD: call 0x17046ced */
    RECOMP_FLAGS_IN();
    goto L_1704A13E; /* 0x1704A0E2: jmp 0x1704a13e */
L_1704A0E4:
    eax = ebp + (-0xB4); /* 0x1704A0E4: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1704A0EA: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704A0EB: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1704A0EE: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704A0F2: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704A0F6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046BE5); /* 0x1704A0F9: call 0x17046be5 */
    RECOMP_FLAGS_IN();
    goto L_1704A13E; /* 0x1704A0FE: jmp 0x1704a13e */
L_1704A100:
    eax = ebp + (-0xB4); /* 0x1704A100: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1704A106: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704A107: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1704A10A: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704A10E: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704A112: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B50); /* 0x1704A115: call 0x17046b50 */
    RECOMP_FLAGS_IN();
    goto L_1704A13E; /* 0x1704A11A: jmp 0x1704a13e */
L_1704A11C:
    eax = ebp + (-0xB4); /* 0x1704A11C: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1704A122: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704A123: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1704A126: fstp dword ptr [esp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704A12A: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704A12E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17046B13); /* 0x1704A131: call 0x17046b13 */
    RECOMP_FLAGS_IN();
    goto L_1704A13E; /* 0x1704A136: jmp 0x1704a13e */
L_1704A138:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A138: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A13A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A13C: fstp st(0) */
L_1704A13E:
    PUSH32(esp, ebx); /* 0x1704A13E: push ebx */
    PUSH32(esp, esi); /* 0x1704A13F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704A140: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1704A142: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704A144: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A18D; /* 0x1704A145: jbe 0x1704a18d */
L_1704A147:
    edi = MEM32(ebp + 0x20); /* 0x1704A147: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704A14A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A14C: inc esi */
    _flag_k = FK_INC;
L_1704A14D:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x1704A14D: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x1704A154: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x24)); /* 0x1704A156: fmul dword ptr [ebp + edx*4 - 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1704A15A: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704A15D: fmul dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1704A160: fmul dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1704A163: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A181; /* 0x1704A165: jbe 0x1704a181 */
L_1704A167:
    ecx = ebp + (-0xB4); /* 0x1704A167: lea ecx, [ebp - 0xb4] */
    eax = edi + eax * 4; /* 0x1704A16D: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1704A170: sub ecx, edi */
    _flag_k = FK_CMP;
    ebx = esi; /* 0x1704A172: mov ebx, esi */
L_1704A174:
    fp_push(_st[0]); /* 0x1704A174: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x1704A176: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704A179: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704A17B: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1704A17E: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704A174; /* 0x1704A17F: jne 0x1704a174 */
L_1704A181:
    ecx = MEM32(ebp + 0x8); /* 0x1704A181: mov ecx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A184: fstp st(0) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704A186: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A187: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A188: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x1704A189: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A14D; /* 0x1704A18B: jb 0x1704a14d */
L_1704A18D:
    ebx = MEM32(ebp + 0x24); /* 0x1704A18D: mov ebx, dword ptr [ebp + 0x24] */
    /* test ebx, ebx */ /* 0x1704A190: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A1DD; /* 0x1704A192: je 0x1704a1dd */
L_1704A194:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704A194: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1704A196: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A1DD; /* 0x1704A198: jbe 0x1704a1dd */
L_1704A19A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704A19A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A19C: inc esi */
    _flag_k = FK_INC;
L_1704A19D:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x1704A19D: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x1704A1A4: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x24)); /* 0x1704A1A6: fmul dword ptr [ebp + edx*4 - 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1704A1AA: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704A1AD: fmul dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x1704A1B0: fmul dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1704A1B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A1D1; /* 0x1704A1B5: jbe 0x1704a1d1 */
L_1704A1B7:
    ecx = ebp + (-0xB4); /* 0x1704A1B7: lea ecx, [ebp - 0xb4] */
    eax = ebx + eax * 4; /* 0x1704A1BD: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1704A1C0: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x1704A1C2: mov edi, esi */
L_1704A1C4:
    fp_push(_st[0]); /* 0x1704A1C4: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x1704A1C6: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704A1C9: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704A1CB: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1704A1CE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704A1C4; /* 0x1704A1CF: jne 0x1704a1c4 */
L_1704A1D1:
    ecx = MEM32(ebp + 0x8); /* 0x1704A1D1: mov ecx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A1D4: fstp st(0) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704A1D6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A1D7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A1D8: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x1704A1D9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A19D; /* 0x1704A1DB: jb 0x1704a19d */
L_1704A1DD:
    ebx = MEM32(ebp + 0x28); /* 0x1704A1DD: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x1704A1E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A22B; /* 0x1704A1E2: je 0x1704a22b */
L_1704A1E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704A1E4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1704A1E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A22B; /* 0x1704A1E8: jbe 0x1704a22b */
L_1704A1EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704A1EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A1EC: inc esi */
    _flag_k = FK_INC;
L_1704A1ED:
    fp_push(*(float*)&MEM32(edx * 4 + 0x1723CA4C)); /* 0x1704A1ED: fld dword ptr [edx*4 + 0x1723ca4c] */
    eax = edx; /* 0x1704A1F4: mov eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x24)); /* 0x1704A1F6: fmul dword ptr [ebp + edx*4 - 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1704A1FA: imul eax, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704A1FD: fmul dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x1704A200: fmul dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x1704A203: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A221; /* 0x1704A205: jbe 0x1704a221 */
L_1704A207:
    ecx = ebp + (-0xB4); /* 0x1704A207: lea ecx, [ebp - 0xb4] */
    eax = ebx + eax * 4; /* 0x1704A20D: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1704A210: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = esi; /* 0x1704A212: mov edi, esi */
L_1704A214:
    fp_push(_st[0]); /* 0x1704A214: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + eax); /* 0x1704A216: fmul dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704A219: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704A21B: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1704A21E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704A214; /* 0x1704A21F: jne 0x1704a214 */
L_1704A221:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704A221: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A222: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A224: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704A225: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1704A226: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A1ED; /* 0x1704A229: jb 0x1704a1ed */
L_1704A22B:
    edi = POP32_VAL(esp); /* 0x1704A22B: pop edi */
    esi = POP32_VAL(esp); /* 0x1704A22C: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A22D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704A22F: pop ebx */
L_1704A230:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A230: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1704A231: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1704A239(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A239u);

L_1704A239:
    edi = edi; /* 0x1704A239: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A23B: push ebp */
    ebp = esp; /* 0x1704A23C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704A23E: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704A23F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1704A243: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704A246: push eax */
    PUSH32(esp, 0x1700149Cu); /* 0x1704A247: push 0x1700149c */
    PUSH32(esp, 0x80000002u); /* 0x1704A24C: push 0x80000002 */
    RECOMP_ICALL(MEM32(0x17001004)); /* 0x1704A251: call dword ptr [0x17001004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A257: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A292; /* 0x1704A259: jne 0x1704a292 */
L_1704A25B:
    PUSH32(esp, esi); /* 0x1704A25B: push esi */
    eax = ebp + 0x14; /* 0x1704A25C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1704A25F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704A260: push dword ptr [ebp + 0x10] */
    eax = ebp + 0x10; /* 0x1704A263: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1704A266: push eax */
    PUSH32(esp, 0); /* 0x1704A267: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704A269: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704A26C: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x17001008)); /* 0x1704A26F: call dword ptr [0x17001008] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704A275: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1704A278: mov esi, eax */
    RECOMP_ICALL(MEM32(0x17001000)); /* 0x1704A27A: call dword ptr [0x17001000] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1704A280: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704A282: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A292; /* 0x1704A283: jne 0x1704a292 */
L_1704A285:
    eax = MEM32(ebp + 0x10); /* 0x1704A285: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1704A288: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A292; /* 0x1704A28B: jne 0x1704a292 */
L_1704A28D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A28D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704A28F: inc eax */
    _flag_k = FK_INC;
    goto L_1704A294; /* 0x1704A290: jmp 0x1704a294 */
L_1704A292:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A292: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704A294:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A294: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704A295: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704A29D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A29Du);

L_1704A29D:
    edi = edi; /* 0x1704A29D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A29F: push ebp */
    ebp = esp; /* 0x1704A2A0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704A2A2: push ecx */
    PUSH32(esp, ebx); /* 0x1704A2A3: push ebx */
    PUSH32(esp, esi); /* 0x1704A2A4: push esi */
    PUSH32(esp, edi); /* 0x1704A2A5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A2A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSHAD(); /* 0x1704A2A8: pushal  */
    eax = 1; /* 0x1704A2A9: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x1704A2AE: cpuid  */
    /* test edx, 0x00800000u */ /* 0x1704A2B0: test edx, 0x800000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00800000u);
    _cf = 0;
    _flag_k = FK_TEST;
    POPAD(); /* 0x1704A2B6: popal  */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704A2B7: setne al */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A2BA: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704A2BD: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704A2C0: pop edi */
    esi = POP32_VAL(esp); /* 0x1704A2C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704A2C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A2C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704A2C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704A2CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A2CAu);

L_1704A2CA:
    edi = edi; /* 0x1704A2CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A2CC: push ebp */
    ebp = esp; /* 0x1704A2CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1704A2CF: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704A2D2: push edi */
    eax = ebp + (-0x4); /* 0x1704A2D3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704A2D6: push eax */
    PUSH32(esp, 0x1700149Cu); /* 0x1704A2D7: push 0x1700149c */
    PUSH32(esp, 0x80000002u); /* 0x1704A2DC: push 0x80000002 */
    RECOMP_ICALL(MEM32(0x17001004)); /* 0x1704A2E1: call dword ptr [0x17001004] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704A2E7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1704A2E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A33A; /* 0x1704A2EB: jne 0x1704a33a */
L_1704A2ED:
    eax = ebp + (-0x8); /* 0x1704A2ED: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1704A2F0: push eax */
    eax = ebp + (-0x10); /* 0x1704A2F1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1704A2F4: push eax */
    eax = ebp + (-0xC); /* 0x1704A2F5: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1704A2F8: push eax */
    PUSH32(esp, edi); /* 0x1704A2F9: push edi */
    PUSH32(esp, 0x170055C0u); /* 0x1704A2FA: push 0x170055c0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704A2FF: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = 4; /* 0x1704A302: mov dword ptr [ebp - 8], 4 */
    RECOMP_ICALL(MEM32(0x17001008)); /* 0x1704A309: call dword ptr [0x17001008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A30F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A331; /* 0x1704A311: jne 0x1704a331 */
L_1704A313:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x1704A313: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A331; /* 0x1704A317: jne 0x1704a331 */
L_1704A319:
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x1704A319: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704A331; /* 0x1704A31C: je 0x1704a331 */
L_1704A31E:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704A31E: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x17001000)); /* 0x1704A321: call dword ptr [0x17001000] */
    RECOMP_FLAGS_IN();
    MEM32(0x17224298) = edi; /* 0x1704A327: mov dword ptr [0x17224298], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A32D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704A379; /* 0x1704A32F: jmp 0x1704a379 */
L_1704A331:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704A331: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x17001000)); /* 0x1704A334: call dword ptr [0x17001000] */
    RECOMP_FLAGS_IN();
L_1704A33A:
    /* cmp MEM32(0x17224298), edi */ /* 0x1704A33A: cmp dword ptr [0x17224298], edi */
    _flag_a = (uint32_t)(MEM32(0x17224298)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1704A374; /* 0x1704A340: jge 0x1704a374 */
L_1704A342:
    eax = ebp + (-0x34); /* 0x1704A342: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1704A345: push eax */
    MEM32(0x17224298) = edi; /* 0x1704A346: mov dword ptr [0x17224298], edi */
    RECOMP_ICALL(MEM32(0x1700110C)); /* 0x1704A34C: call dword ptr [0x1700110c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM16(ebp + (-0x34)), LO16(edi) */ /* 0x1704A352: cmp word ptr [ebp - 0x34], di */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x34))) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A374; /* 0x1704A356: jne 0x1704a374 */
L_1704A358:
    /* cmp MEM16(ebp + (-0x14)), 5 */ /* 0x1704A358: cmp word ptr [ebp - 0x14], 5 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(5) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A374; /* 0x1704A35D: jb 0x1704a374 */
L_1704A35F:
    RECOMP_CALL(sub_1704A29D); /* 0x1704A35F: call 0x1704a29d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A364: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A374; /* 0x1704A366: je 0x1704a374 */
L_1704A368:
    /* emms */ /* 0x1704A368: emms  */
    MEM32(0x17224298) = 1; /* 0x1704A36A: mov dword ptr [0x17224298], 1 */
L_1704A374:
    eax = MEM32(0x17224298); /* 0x1704A374: mov eax, dword ptr [0x17224298] */
L_1704A379:
    edi = POP32_VAL(esp); /* 0x1704A379: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A37A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704A37B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704A381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A381u);

L_1704A381:
    edi = edi; /* 0x1704A381: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A383: push ebp */
    ebp = esp; /* 0x1704A384: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704A386: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704A387: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704A38B: push ebx */
    PUSH32(esp, esi); /* 0x1704A38C: push esi */
    PUSH32(esp, edi); /* 0x1704A38D: push edi */
    PUSHAD(); /* 0x1704A38E: pushal  */
    eax = 0x80000000u; /* 0x1704A38F: mov eax, 0x80000000 */
    CPUID(eax, ebx, ecx, edx); /* 0x1704A394: cpuid  */
    /* cmp eax, 0x80000001u */ /* 0x1704A396: cmp eax, 0x80000001 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A3B2; /* 0x1704A39B: jb 0x1704a3b2 */
L_1704A39D:
    eax = 0x80000001u; /* 0x1704A39D: mov eax, 0x80000001 */
    CPUID(eax, ebx, ecx, edx); /* 0x1704A3A2: cpuid  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A3A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, 0x80000000u */ /* 0x1704A3A6: test edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704A3AC: setne al */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A3AF: mov dword ptr [ebp - 4], eax */
L_1704A3B2:
    POPAD(); /* 0x1704A3B2: popal  */
    eax = MEM32(ebp + (-0x4)); /* 0x1704A3B3: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704A3B6: pop edi */
    esi = POP32_VAL(esp); /* 0x1704A3B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704A3B8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A3B9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704A3BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704A3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A3C0u);

L_1704A3C0:
    eax = 0x1721BF8Eu; /* 0x1704A3C0: mov eax, 0x1721bf8e */
    RECOMP_CALL(sub_1721B168); /* 0x1704A3C5: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1704A3CA: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1704A3CB: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1704A3CE: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1704A3D3: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x1704A3D6: push ebx */
    PUSH32(esp, esi); /* 0x1704A3D7: push esi */
    PUSH32(esp, edi); /* 0x1704A3D8: push edi */
    MEM32(ebp + (-0x10)) = esp; /* 0x1704A3D9: mov dword ptr [ebp - 0x10], esp */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1704A3DC: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x170055CCu; /* 0x1704A3E0: mov esi, 0x170055cc */
    edi = ebp + (-0x28); /* 0x1704A3E5: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704A3E8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704A3E9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704A3EA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x1704A3EB: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704A3EC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A3F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x1704A3F2: cpuid  */
    MEM32(ebp + (-0x30)) = eax; /* 0x1704A3F4: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1704A3F7: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = edx; /* 0x1704A3FA: mov dword ptr [ebp - 0x38], edx */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1704A3FD: mov dword ptr [ebp - 0x34], ecx */
    goto L_1704A40E; /* 0x1704A400: jmp 0x1704a40e */
L_1704A40E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1704A40E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704A419; /* 0x1704A412: jmp 0x1704a419 */
L_1704A419:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x1704A419: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A424; /* 0x1704A41D: jne 0x1704a424 */
L_1704A41F:
    eax = MEM32(ebp + (-0x14)); /* 0x1704A41F: mov eax, dword ptr [ebp - 0x14] */
    goto L_1704A45A; /* 0x1704A422: jmp 0x1704a45a */
L_1704A424:
    eax = 1; /* 0x1704A424: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x1704A429: cpuid  */
    MEM32(ebp + (-0x30)) = eax; /* 0x1704A42B: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1704A42E: mov dword ptr [ebp - 0x2c], edx */
    eax = MEM32(ebp + (-0x2C)); /* 0x1704A431: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x1704A434: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A444; /* 0x1704A439: je 0x1704a444 */
L_1704A43B:
    eax = MEM32(ebp + (-0x14)); /* 0x1704A43B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1704A43E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704A441: mov dword ptr [ebp - 0x14], eax */
L_1704A444:
    eax = MEM32(ebp + (-0x2C)); /* 0x1704A444: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x1704A447: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A457; /* 0x1704A44C: je 0x1704a457 */
L_1704A44E:
    eax = MEM32(ebp + (-0x14)); /* 0x1704A44E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x1704A451: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704A454: mov dword ptr [ebp - 0x14], eax */
L_1704A457:
    eax = MEM32(ebp + (-0x14)); /* 0x1704A457: mov eax, dword ptr [ebp - 0x14] */
L_1704A45A:
    ecx = MEM32(ebp + (-0xC)); /* 0x1704A45A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1704A45D: mov dword ptr fs:[0], ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x1704A464: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B76C); /* 0x1704A467: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1704A46C: pop edi */
    esi = POP32_VAL(esp); /* 0x1704A46D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704A46E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A46F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704A470: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704A476(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A476u);

L_1704A476:
    edi = edi; /* 0x1704A476: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A478: push ebp */
    ebp = esp; /* 0x1704A479: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x1704A47B: sub esp, 0x98 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1704A481: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, edi); /* 0x1704A486: push edi */
    PUSH32(esp, 0x25u); /* 0x1704A487: push 0x25 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A489: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1704A48C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A48D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x98); /* 0x1704A48F: lea edi, [ebp - 0x98] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704A495: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = ebp + (-0x98); /* 0x1704A497: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1704A49D: push eax */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x1704A49E: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x1700119C)); /* 0x1704A4A8: call dword ptr [0x1700119c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A4AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1704A4B0: pop edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A4B6; /* 0x1704A4B1: jne 0x1704a4b6 */
L_1704A4B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704A4B3: inc eax */
    _flag_k = FK_INC;
    goto L_1704A4F0; /* 0x1704A4B4: jmp 0x1704a4f0 */
L_1704A4B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A4B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704A4B8: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x88)), eax */ /* 0x1704A4B9: cmp dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A4E4; /* 0x1704A4BF: jne 0x1704a4e4 */
L_1704A4C1:
    /* cmp MEM32(ebp + (-0x94)), 4 */ /* 0x1704A4C1: cmp dword ptr [ebp - 0x94], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704A4E0; /* 0x1704A4C8: ja 0x1704a4e0 */
L_1704A4CA:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A4F0; /* 0x1704A4CA: jne 0x1704a4f0 */
L_1704A4CC:
    /* cmp MEM32(ebp + (-0x90)), 0xAu */ /* 0x1704A4CC: cmp dword ptr [ebp - 0x90], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A4F0; /* 0x1704A4D3: jb 0x1704a4f0 */
L_1704A4D5:
    /* cmp MEM16(ebp + (-0x8C)), 0x55Du */ /* 0x1704A4D5: cmp word ptr [ebp - 0x8c], 0x55d */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8C))) << 16; _flag_b = (uint32_t)(0x55Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A4F0; /* 0x1704A4DE: jb 0x1704a4f0 */
L_1704A4E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A4E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704A4F0; /* 0x1704A4E2: jmp 0x1704a4f0 */
L_1704A4E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A4E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x1704A4E6: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704A4ED: setne al */
L_1704A4F0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704A4F0: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x1704A4F3: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A4F8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704A4F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704A4FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A4FFu);

L_1704A4FF:
    edi = edi; /* 0x1704A4FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A501: push ebp */
    ebp = esp; /* 0x1704A502: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x1704A504: sub esp, 0x98 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1704A50A: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, edi); /* 0x1704A50F: push edi */
    PUSH32(esp, 0x25u); /* 0x1704A510: push 0x25 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A512: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1704A515: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A516: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x98); /* 0x1704A518: lea edi, [ebp - 0x98] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704A51E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = ebp + (-0x98); /* 0x1704A520: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1704A526: push eax */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x1704A527: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x1700119C)); /* 0x1704A531: call dword ptr [0x1700119c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A537: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1704A539: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A569; /* 0x1704A53A: je 0x1704a569 */
L_1704A53C:
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x1704A53C: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A569; /* 0x1704A543: jne 0x1704a569 */
L_1704A545:
    /* cmp MEM32(ebp + (-0x94)), 5 */ /* 0x1704A545: cmp dword ptr [ebp - 0x94], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704A569; /* 0x1704A54C: jb 0x1704a569 */
L_1704A54E:
    /* cmp MEM32(ebp + 0x8), 0xAu */ /* 0x1704A54E: cmp dword ptr [ebp + 8], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704A55F; /* 0x1704A552: je 0x1704a55f */
L_1704A554:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704A554: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001108)); /* 0x1704A557: call dword ptr [0x17001108] */
    RECOMP_FLAGS_IN();
    goto L_1704A5A0; /* 0x1704A55D: jmp 0x1704a5a0 */
L_1704A55F:
    RECOMP_CALL(sub_1704A3C0); /* 0x1704A55F: call 0x1704a3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1704A564: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704A5A0; /* 0x1704A567: jmp 0x1704a5a0 */
L_1704A569:
    eax = MEM32(ebp + 0x8); /* 0x1704A569: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1704A56C: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A58B; /* 0x1704A56F: je 0x1704a58b */
L_1704A571:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704A571: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704A584; /* 0x1704A572: je 0x1704a584 */
L_1704A574:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1704A574: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1704A594; /* 0x1704A577: jne 0x1704a594 */
L_1704A579:
    RECOMP_CALL(sub_1704A476); /* 0x1704A579: call 0x1704a476 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A57E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A55F; /* 0x1704A580: je 0x1704a55f */
L_1704A582:
    goto L_1704A594; /* 0x1704A582: jmp 0x1704a594 */
L_1704A584:
    RECOMP_CALL(sub_1704A381); /* 0x1704A584: call 0x1704a381 */
    RECOMP_FLAGS_IN();
    goto L_1704A5A0; /* 0x1704A589: jmp 0x1704a5a0 */
L_1704A58B:
    RECOMP_CALL(sub_1704A476); /* 0x1704A58B: call 0x1704a476 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A590: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A598; /* 0x1704A592: je 0x1704a598 */
L_1704A594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704A594: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704A5A0; /* 0x1704A596: jmp 0x1704a5a0 */
L_1704A598:
    RECOMP_CALL(sub_1704A3C0); /* 0x1704A598: call 0x1704a3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x1704A59D: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704A5A0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704A5A0: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x1704A5A3: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A5A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704A5A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704A5B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A5B1u);

L_1704A5B1:
    edi = edi; /* 0x1704A5B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A5B3: push ebp */
    ebp = esp; /* 0x1704A5B4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704A5B6: push ecx */
    PUSH32(esp, esi); /* 0x1704A5B7: push esi */
    PUSH32(esp, edi); /* 0x1704A5B8: push edi */
    RECOMP_CALL(sub_1702BC1E); /* 0x1704A5B9: call 0x1702bc1e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1704A5BE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A5E2; /* 0x1704A5C2: jne 0x1704a5e2 */
L_1704A5C4:
    PUSH32(esp, 0x4Au); /* 0x1704A5C4: push 0x4a */
    ecx = POP32_VAL(esp); /* 0x1704A5C6: pop ecx */
    esi = 0x17224170u; /* 0x1704A5C7: mov esi, 0x17224170 */
    edi = 0x17224048u; /* 0x1704A5CC: mov edi, 0x17224048 */
    MEM32(0x1722429C) = 0xFFFFu; /* 0x1704A5D1: mov dword ptr [0x1722429c], 0xffff */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704A5DB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1704A6A4; /* 0x1704A5DD: jmp 0x1704a6a4 */
L_1704A5E2:
    /* cmp MEM32(0x1722429C), 0xFFFFu */ /* 0x1704A5E2: cmp dword ptr [0x1722429c], 0xffff */
    _flag_a = (uint32_t)(MEM32(0x1722429C)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704A6A4; /* 0x1704A5EC: jne 0x1704a6a4 */
L_1704A5F2:
    _flag_a = (uint32_t)(MEM32(0x1722429C)); _flag_b = (uint32_t)(0);
    MEM32(0x1722429C) = MEM32(0x1722429C) & 0; /* 0x1704A5F2: and dword ptr [0x1722429c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704A5F9: push ebx */
    PUSH32(esp, 0x4Au); /* 0x1704A5FA: push 0x4a */
    ecx = POP32_VAL(esp); /* 0x1704A5FC: pop ecx */
    ebx = 0x17224048u; /* 0x1704A5FD: mov ebx, 0x17224048 */
    esi = 0x17224170u; /* 0x1704A602: mov esi, 0x17224170 */
    edi = ebx; /* 0x1704A607: mov edi, ebx */
    PUSH32(esp, ebx); /* 0x1704A609: push ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704A60A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1704AB92); /* 0x1704A60C: call 0x1704ab92 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x1704A611: push 4 */
    esi = POP32_VAL(esp); /* 0x1704A613: pop esi */
    PUSH32(esp, esi); /* 0x1704A614: push esi */
    eax = ebp + 0x8; /* 0x1704A615: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1704A618: push eax */
    PUSH32(esp, 0x170055ECu); /* 0x1704A619: push 0x170055ec */
    PUSH32(esp, esi); /* 0x1704A61E: push esi */
    RECOMP_CALL(sub_1704A239); /* 0x1704A61F: call 0x1704a239 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A62B; /* 0x1704A626: jne 0x1704a62b */
L_1704A628:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & eax; /* 0x1704A628: and dword ptr [ebp + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704A62B:
    PUSH32(esp, esi); /* 0x1704A62B: push esi */
    eax = ebp + (-0x4); /* 0x1704A62C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704A62F: push eax */
    PUSH32(esp, 0x170055DCu); /* 0x1704A630: push 0x170055dc */
    PUSH32(esp, esi); /* 0x1704A635: push esi */
    RECOMP_CALL(sub_1704A239); /* 0x1704A636: call 0x1704a239 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A63B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A645; /* 0x1704A63D: je 0x1704a645 */
L_1704A63F:
    eax = MEM32(ebp + (-0x4)); /* 0x1704A63F: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x8) = eax; /* 0x1704A642: mov dword ptr [ebp + 8], eax */
L_1704A645:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704A645: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704A647: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1704A648: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704A6A3; /* 0x1704A64B: je 0x1704a6a3 */
L_1704A64D:
    PUSH32(esp, 2); /* 0x1704A64D: push 2 */
    esi = POP32_VAL(esp); /* 0x1704A64F: pop esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1704A650: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704A66E; /* 0x1704A653: je 0x1704a66e */
L_1704A655:
    PUSH32(esp, 7); /* 0x1704A655: push 7 */
    RECOMP_CALL(sub_1704A4FF); /* 0x1704A657: call 0x1704a4ff */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A65C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A66E; /* 0x1704A65E: je 0x1704a66e */
L_1704A660:
    PUSH32(esp, ebx); /* 0x1704A660: push ebx */
    RECOMP_CALL(sub_17209FEF); /* 0x1704A661: call 0x17209fef */
    RECOMP_FLAGS_IN();
    MEM32(0x1722429C) = edi; /* 0x1704A666: mov dword ptr [0x1722429c], edi */
    goto L_1704A6A2; /* 0x1704A66C: jmp 0x1704a6a2 */
L_1704A66E:
    PUSH32(esp, 0xAu); /* 0x1704A66E: push 0xa */
    RECOMP_CALL(sub_1704A4FF); /* 0x1704A670: call 0x1704a4ff */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A687; /* 0x1704A677: je 0x1704a687 */
L_1704A679:
    PUSH32(esp, ebx); /* 0x1704A679: push ebx */
    RECOMP_CALL(sub_1721903E); /* 0x1704A67A: call 0x1721903e */
    RECOMP_FLAGS_IN();
    MEM32(0x1722429C) = esi; /* 0x1704A67F: mov dword ptr [0x1722429c], esi */
    goto L_1704A6A2; /* 0x1704A685: jmp 0x1704a6a2 */
L_1704A687:
    PUSH32(esp, 6); /* 0x1704A687: push 6 */
    RECOMP_CALL(sub_1704A4FF); /* 0x1704A689: call 0x1704a4ff */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704A68E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704A6A3; /* 0x1704A690: je 0x1704a6a3 */
L_1704A692:
    PUSH32(esp, ebx); /* 0x1704A692: push ebx */
    RECOMP_CALL(sub_17216C5D); /* 0x1704A693: call 0x17216c5d */
    RECOMP_FLAGS_IN();
    MEM32(0x1722429C) = 3; /* 0x1704A698: mov dword ptr [0x1722429c], 3 */
L_1704A6A2:
    ecx = POP32_VAL(esp); /* 0x1704A6A2: pop ecx */
L_1704A6A3:
    ebx = POP32_VAL(esp); /* 0x1704A6A3: pop ebx */
L_1704A6A4:
    eax = MEM32(0x1722429C); /* 0x1704A6A4: mov eax, dword ptr [0x1722429c] */
    edi = POP32_VAL(esp); /* 0x1704A6A9: pop edi */
    esi = POP32_VAL(esp); /* 0x1704A6AA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704A6AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704A6AC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704A6B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A6B4u);

L_1704A6B4:
    edi = edi; /* 0x1704A6B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A6B6: push ebp */
    ebp = esp; /* 0x1704A6B7: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704A6B9: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704A6BC: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704A6BF: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A6C2: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A6C4: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A6C6: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704A6C8: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A6CB: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A6CD: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A6D0: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1704A6D2: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x1704A6D5: fxch st(3) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A6D7: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704A6DA: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A6DD: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1704A6E0: fmul dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A6E3: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704A6E6: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A6E9: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1704A6EC: fmul dword ptr [edx + 0x1c] */
    fp_xch(3); /* 0x1704A6EF: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A6F1: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A6F3: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A6F5: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A6F7: faddp st(4) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x1704A6F9: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704A6FC: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x1704A6FE: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1704A701: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x1704A703: fld dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A706: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1704A708: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A70B: faddp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A70D: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A70F: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704A712: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704A715: fstp dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704A718: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704A71B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704A71C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704A724(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A724u);

L_1704A724:
    edi = edi; /* 0x1704A724: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A726: push ebp */
    ebp = esp; /* 0x1704A727: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704A729: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704A72C: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704A72F: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A732: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A734: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A736: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A738: fmul dword ptr [edx + 4] */
    fp_xch(1); /* 0x1704A73B: fxch st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A73D: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704A740: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A743: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704A746: fmul dword ptr [edx + 0x14] */
    fp_xch(1); /* 0x1704A749: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1704A74B: faddp st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1704A74D: faddp st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A74F: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A751: fstp dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1704A754: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704A757: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704A758: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704A760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A760u);

L_1704A760:
    edi = edi; /* 0x1704A760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A762: push ebp */
    ebp = esp; /* 0x1704A763: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704A765: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704A768: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704A76B: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A76E: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A770: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A772: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704A774: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A777: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A779: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A77C: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1704A77E: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x1704A781: fxch st(3) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A783: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704A786: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A789: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1704A78C: fmul dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A78F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704A792: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A795: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1704A798: fmul dword ptr [edx + 0x1c] */
    fp_xch(3); /* 0x1704A79B: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A79D: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A79F: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7A1: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7A3: faddp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A7A5: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1704A7A8: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A7AB: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x1704A7AE: fmul dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A7B1: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x1704A7B4: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A7B7: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x1704A7BA: fmul dword ptr [edx + 0x2c] */
    fp_xch(3); /* 0x1704A7BD: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7BF: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7C1: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7C3: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7C5: faddp st(4) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x1704A7C7: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704A7CA: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x1704A7CC: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1704A7CF: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x1704A7D1: fld dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A7D4: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1704A7D6: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A7D9: faddp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A7DB: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A7DD: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704A7E0: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704A7E3: fstp dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704A7E6: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704A7E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704A7EA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704A7F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A7F2u);

L_1704A7F2:
    edi = edi; /* 0x1704A7F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A7F4: push ebp */
    ebp = esp; /* 0x1704A7F5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704A7F7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704A7FA: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704A7FD: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A800: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A802: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A804: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A806: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A809: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704A80B: fmul dword ptr [edx + 8] */
    fp_xch(2); /* 0x1704A80E: fxch st(2) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A810: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704A813: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A816: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704A819: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A81C: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1704A81F: fmul dword ptr [edx + 0x18] */
    fp_xch(2); /* 0x1704A822: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A824: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A826: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A828: faddp st(3) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A82A: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1704A82D: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A830: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x1704A833: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A836: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x1704A839: fmul dword ptr [edx + 0x28] */
    fp_xch(2); /* 0x1704A83C: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A83E: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A840: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704A842: faddp st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A844: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A846: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704A849: fstp dword ptr [ecx + 8] */
    eax = MEM32(ebp + 0x8); /* 0x1704A84C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704A84F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704A850: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704A858(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A858u);

L_1704A858:
    edi = edi; /* 0x1704A858: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A85A: push ebp */
    ebp = esp; /* 0x1704A85B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704A85D: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704A860: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704A863: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A866: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A868: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A86A: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704A86C: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A86F: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A871: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704A874: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1704A876: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x1704A879: fxch st(3) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A87B: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704A87E: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A881: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1704A884: fmul dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A887: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704A88A: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704A88D: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1704A890: fmul dword ptr [edx + 0x1c] */
    fp_xch(3); /* 0x1704A893: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A895: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A897: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A899: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A89B: faddp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A89D: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1704A8A0: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A8A3: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x1704A8A6: fmul dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A8A9: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x1704A8AC: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704A8AF: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x1704A8B2: fmul dword ptr [edx + 0x2c] */
    fp_xch(3); /* 0x1704A8B5: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8B7: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8B9: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8BB: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8BD: faddp st(4) */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704A8BF: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x1704A8C2: fmul dword ptr [edx + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704A8C5: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x1704A8C8: fmul dword ptr [edx + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704A8CB: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x1704A8CE: fmul dword ptr [edx + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704A8D1: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x1704A8D4: fmul dword ptr [edx + 0x3c] */
    fp_xch(3); /* 0x1704A8D7: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8D9: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8DB: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8DD: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704A8DF: faddp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A8E1: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A8E3: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704A8E6: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1704A8E9: fstp dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704A8EC: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704A8EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704A8F0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704A8F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A8F8u);

L_1704A8F8:
    eax = MEM32(esp + 0x4); /* 0x1704A8F8: mov eax, dword ptr [esp + 4] */
    PUSH32(esp, ecx); /* 0x1704A8FC: push ecx */
    ecx = eax; /* 0x1704A8FD: mov ecx, eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x1704A8FF: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x1704A8FF: shr ecx, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FFFFFFu);
    eax = eax & 0x00FFFFFFu; /* 0x1704A902: and eax, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF8u);
    ecx = ecx & 0xFF8u; /* 0x1704A907: and ecx, 0xff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x3F000000u)); _flag_b = (uint32_t)((eax | 0x3F000000u));
    eax = eax | 0x3F000000u; /* 0x1704A90D: or eax, 0x3f000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1704A912: push eax */
    fp_push(*(float*)&MEM32(esp)); /* 0x1704A913: fld dword ptr [esp] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x172242A0); /* 0x1704A916: fmul dword ptr [ecx + 0x172242a0] */
    eax = 0xBEFFFFFFu; /* 0x1704A91C: mov eax, 0xbeffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0xC); /* 0x1704A921: sub eax, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(ecx + 0x172242A4); /* 0x1704A925: fadd dword ptr [ecx + 0x172242a4] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1704A92B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1704A92B: shr eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF800000u);
    eax = eax & 0xFF800000u; /* 0x1704A92D: and eax, 0xff800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp) = eax; /* 0x1704A932: mov dword ptr [esp], eax */
    _st[0] *= (double)*(float*)ADDR(esp); /* 0x1704A935: fmul dword ptr [esp] */
    ecx = POP32_VAL(esp); /* 0x1704A938: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704A939: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704A93A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704A942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704A942u);

L_1704A942:
    edi = edi; /* 0x1704A942: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704A944: push ebp */
    ebp = esp; /* 0x1704A945: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704A947: push ecx */
    PUSH32(esp, ecx); /* 0x1704A948: push ecx */
    PUSH32(esp, edi); /* 0x1704A949: push edi */
    ecx = MEM32(ebp + 0x8); /* 0x1704A94A: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1704A94D: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704A950: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704A952: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704A954: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704A957: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1704A95A: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704A95D: fmul dword ptr [edx + 8] */
    fp_xch(2); /* 0x1704A960: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704A962: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704A964: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704A966: fst dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1704A969: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1704A96C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704A97F; /* 0x1704A96E: jne 0x1704a97f */
L_1704A970:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704A970: fstp st(0) */
    MEM32(ecx) = eax; /* 0x1704A972: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x1704A974: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x1704A977: mov dword ptr [ecx + 8], eax */
    goto L_1704AA06; /* 0x1704A97A: jmp 0x1704aa06 */
L_1704A97F:
    fp_push(1.0); /* 0x1704A97F: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704A981: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704A983: fstp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1704A986: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1704A989: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3727C5ACu */ /* 0x1704A98E: cmp eax, 0x3727c5ac */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3727C5ACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1704A9AB; /* 0x1704A993: jg 0x1704a9ab */
L_1704A995:
    /* cmp ecx, edx */ /* 0x1704A995: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704AA06; /* 0x1704A997: je 0x1704aa06 */
L_1704A999:
    eax = MEM32(edx); /* 0x1704A999: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x1704A99B: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x4); /* 0x1704A99D: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1704A9A0: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x1704A9A3: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x1704A9A6: mov dword ptr [ecx + 8], eax */
    goto L_1704AA06; /* 0x1704A9A9: jmp 0x1704aa06 */
L_1704A9AB:
    eax = MEM32(ebp + (-0x8)); /* 0x1704A9AB: mov eax, dword ptr [ebp - 8] */
    edi = eax; /* 0x1704A9AE: mov edi, eax */
    if (12u) _cf = (((edi) >> 11) & 1u); /* 0x1704A9B0: shr edi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((edi >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 12u; /* 0x1704A9B0: shr edi, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FFFFFFu);
    eax = eax & 0x00FFFFFFu; /* 0x1704A9B3: and eax, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFF8u);
    edi = edi & 0xFF8u; /* 0x1704A9B8: and edi, 0xff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x3F000000u)); _flag_b = (uint32_t)((eax | 0x3F000000u));
    eax = eax | 0x3F000000u; /* 0x1704A9BE: or eax, 0x3f000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A9C3: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704A9C6: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x172242A0); /* 0x1704A9C9: fmul dword ptr [edi + 0x172242a0] */
    eax = 0xBEFFFFFFu; /* 0x1704A9CF: mov eax, 0xbeffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x8)); /* 0x1704A9D4: sub eax, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(edi + 0x172242A4); /* 0x1704A9D7: fadd dword ptr [edi + 0x172242a4] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1704A9DD: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1704A9DD: shr eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF800000u);
    eax = eax & 0xFF800000u; /* 0x1704A9DF: and eax, 0xff800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704A9E4: mov dword ptr [ebp - 4], eax */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704A9E7: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704A9EA: fld dword ptr [edx] */
    _st[0] *= _st[1]; /* 0x1704A9EC: fmul st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704A9EE: fld dword ptr [edx + 4] */
    _st[0] *= _st[2]; /* 0x1704A9F1: fmul st(2) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1704A9F3: fld dword ptr [edx + 8] */
    _st[0] *= _st[3]; /* 0x1704A9F6: fmul st(3) */
    fp_xch(2); /* 0x1704A9F8: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704A9FA: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704A9FC: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704A9FF: fstp dword ptr [ecx + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AA02: fstp st(0) */
    goto L_1704AA06; /* 0x1704AA04: jmp 0x1704aa06 */
L_1704AA06:
    eax = MEM32(ebp + 0x8); /* 0x1704AA06: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1704AA09: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704AA0A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704AA0B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704AA13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AA13u);

L_1704AA13:
    edi = edi; /* 0x1704AA13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AA15: push ebp */
    ebp = esp; /* 0x1704AA16: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1704AA18: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1704AA1B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704AA1E: push ebx */
    PUSH32(esp, esi); /* 0x1704AA1F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1704AA20: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x1704AA23: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704AA25: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704AA99; /* 0x1704AA26: jne 0x1704aa99 */
L_1704AA28:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1704AA28: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704AA8B; /* 0x1704AA2B: je 0x1704aa8b */
L_1704AA2D:
    ebx = MEM32(ebp + 0x8); /* 0x1704AA2D: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1704AA30: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704AA33: mov edx, dword ptr [ebp + 0x10] */
    edi = 0xFFFFFFFCu; /* 0x1704AA36: mov edi, 0xfffffffc */
L_1704AA3B:
    esi = 0xFFFFFFF0u; /* 0x1704AA3B: mov esi, 0xfffffff0 */
    fp_push(*(float*)&MEM32(edx + edi * 4 + 0x10)); /* 0x1704AA40: fld dword ptr [edx + edi*4 + 0x10] */
    fp_push(*(float*)&MEM32(edx + edi * 4 + 0x20)); /* 0x1704AA44: fld dword ptr [edx + edi*4 + 0x20] */
    fp_push(*(float*)&MEM32(edx + edi * 4 + 0x30)); /* 0x1704AA48: fld dword ptr [edx + edi*4 + 0x30] */
    fp_push(*(float*)&MEM32(edx + edi * 4 + 0x40)); /* 0x1704AA4C: fld dword ptr [edx + edi*4 + 0x40] */
L_1704AA50:
    fp_push(_st[3]); /* 0x1704AA50: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + esi * 4 + 0x40); /* 0x1704AA52: fmul dword ptr [ecx + esi*4 + 0x40] */
    fp_push(_st[3]); /* 0x1704AA56: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + esi * 4 + 0x44); /* 0x1704AA58: fmul dword ptr [ecx + esi*4 + 0x44] */
    fp_push(_st[3]); /* 0x1704AA5C: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + esi * 4 + 0x48); /* 0x1704AA5E: fmul dword ptr [ecx + esi*4 + 0x48] */
    fp_push(_st[3]); /* 0x1704AA62: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + esi * 4 + 0x4C); /* 0x1704AA64: fmul dword ptr [ecx + esi*4 + 0x4c] */
    fp_xch(3); /* 0x1704AA68: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AA6A: faddp st(1) */
    fp_xch(2); /* 0x1704AA6C: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AA6E: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AA70: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4 + 0x40) = _v; } /* 0x1704AA72: fstp dword ptr [ebx + esi*4 + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1704AA76: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AA50; /* 0x1704AA79: jne 0x1704aa50 */
L_1704AA7B:
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AA7B: ffree st(3) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AA7D: ffree st(2) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AA7F: ffree st(1) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AA81: ffree st(0) */
    ebx = ebx + 0x4; /* 0x1704AA83: lea ebx, [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704AA86: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AA3B; /* 0x1704AA87: jne 0x1704aa3b */
L_1704AA89:
    goto L_1704AAF1; /* 0x1704AA89: jmp 0x1704aaf1 */
L_1704AA8B:
    PUSH32(esp, 0x10u); /* 0x1704AA8B: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704AA8D: pop ecx */
    edi = ebp + (-0x40); /* 0x1704AA8E: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704AA91: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x40); /* 0x1704AA93: lea ecx, [ebp - 0x40] */
    MEM32(ebp + 0x10) = ecx; /* 0x1704AA96: mov dword ptr [ebp + 0x10], ecx */
L_1704AA99:
    ebx = MEM32(ebp + 0x8); /* 0x1704AA99: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1704AA9C: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704AA9F: mov edx, dword ptr [ebp + 0x10] */
    edi = 0xFFFFFFFCu; /* 0x1704AAA2: mov edi, 0xfffffffc */
L_1704AAA7:
    esi = 0xFFFFFFFCu; /* 0x1704AAA7: mov esi, 0xfffffffc */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704AAAC: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704AAAE: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704AAB1: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1704AAB4: fld dword ptr [ecx + 0xc] */
L_1704AAB7:
    fp_push(_st[3]); /* 0x1704AAB7: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x10); /* 0x1704AAB9: fmul dword ptr [edx + esi*4 + 0x10] */
    fp_push(_st[3]); /* 0x1704AABD: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x20); /* 0x1704AABF: fmul dword ptr [edx + esi*4 + 0x20] */
    fp_push(_st[3]); /* 0x1704AAC3: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x30); /* 0x1704AAC5: fmul dword ptr [edx + esi*4 + 0x30] */
    fp_push(_st[3]); /* 0x1704AAC9: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x40); /* 0x1704AACB: fmul dword ptr [edx + esi*4 + 0x40] */
    fp_xch(3); /* 0x1704AACF: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AAD1: faddp st(1) */
    fp_xch(2); /* 0x1704AAD3: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AAD5: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AAD7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4 + 0x10) = _v; } /* 0x1704AAD9: fstp dword ptr [ebx + esi*4 + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704AADD: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AAB7; /* 0x1704AADE: jne 0x1704aab7 */
L_1704AAE0:
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AAE0: ffree st(3) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AAE2: ffree st(2) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AAE4: ffree st(1) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AAE6: ffree st(0) */
    ecx = ecx + 0x10; /* 0x1704AAE8: lea ecx, [ecx + 0x10] */
    ebx = ebx + 0x10; /* 0x1704AAEB: lea ebx, [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704AAEE: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AAA7; /* 0x1704AAEF: jne 0x1704aaa7 */
L_1704AAF1:
    edi = POP32_VAL(esp); /* 0x1704AAF1: pop edi */
    esi = POP32_VAL(esp); /* 0x1704AAF2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704AAF3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704AAF4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704AAF5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704AAFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AAFDu);

L_1704AAFD:
    edi = edi; /* 0x1704AAFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AAFF: push ebp */
    ebp = esp; /* 0x1704AB00: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1704AB02: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1704AB05: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704AB08: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704AB12; /* 0x1704AB0B: je 0x1704ab12 */
L_1704AB0D:
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1704AB0D: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704AB15; /* 0x1704AB10: jne 0x1704ab15 */
L_1704AB12:
    eax = ebp + (-0x44); /* 0x1704AB12: lea eax, [ebp - 0x44] */
L_1704AB15:
    PUSH32(esp, ebx); /* 0x1704AB15: push ebx */
    PUSH32(esp, esi); /* 0x1704AB16: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704AB17: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x1704AB1A: push edi */
    eax = MEM32(ebp + (-0x4)); /* 0x1704AB1B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x1704AB1E: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704AB21: mov edx, dword ptr [ebp + 0x10] */
    edi = 0xFFFFFFFCu; /* 0x1704AB24: mov edi, 0xfffffffc */
L_1704AB29:
    esi = 0xFFFFFFFCu; /* 0x1704AB29: mov esi, 0xfffffffc */
    ebx = eax + edi * 4 + 0x10; /* 0x1704AB2E: lea ebx, [eax + edi*4 + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704AB32: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704AB34: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704AB37: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1704AB3A: fld dword ptr [ecx + 0xc] */
L_1704AB3D:
    fp_push(_st[3]); /* 0x1704AB3D: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x10); /* 0x1704AB3F: fmul dword ptr [edx + esi*4 + 0x10] */
    fp_push(_st[3]); /* 0x1704AB43: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x20); /* 0x1704AB45: fmul dword ptr [edx + esi*4 + 0x20] */
    fp_push(_st[3]); /* 0x1704AB49: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x30); /* 0x1704AB4B: fmul dword ptr [edx + esi*4 + 0x30] */
    fp_push(_st[3]); /* 0x1704AB4F: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + esi * 4 + 0x40); /* 0x1704AB51: fmul dword ptr [edx + esi*4 + 0x40] */
    fp_xch(3); /* 0x1704AB55: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AB57: faddp st(1) */
    fp_xch(2); /* 0x1704AB59: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AB5B: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AB5D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1704AB5F: fstp dword ptr [ebx] */
    ebx = ebx + 0x10; /* 0x1704AB61: lea ebx, [ebx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704AB64: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AB3D; /* 0x1704AB65: jne 0x1704ab3d */
L_1704AB67:
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AB67: ffree st(3) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AB69: ffree st(2) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AB6B: ffree st(1) */
    /* ffree (no-op in fixed-window FPU stack) */ /* 0x1704AB6D: ffree st(0) */
    ecx = ecx + 0x10; /* 0x1704AB6F: lea ecx, [ecx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704AB72: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1704AB29; /* 0x1704AB73: jne 0x1704ab29 */
L_1704AB75:
    esi = MEM32(ebp + (-0x4)); /* 0x1704AB75: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x1704AB78: mov eax, dword ptr [ebp + 8] */
    /* cmp esi, eax */ /* 0x1704AB7B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704AB86; /* 0x1704AB7D: je 0x1704ab86 */
L_1704AB7F:
    PUSH32(esp, 0x10u); /* 0x1704AB7F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704AB81: pop ecx */
    edi = eax; /* 0x1704AB82: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704AB84: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_1704AB86:
    edi = POP32_VAL(esp); /* 0x1704AB86: pop edi */
    esi = POP32_VAL(esp); /* 0x1704AB87: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704AB88: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704AB89: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704AB8A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704AB92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AB92u);

L_1704AB92:
    edi = edi; /* 0x1704AB92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AB94: push ebp */
    ebp = esp; /* 0x1704AB95: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704AB97: mov eax, dword ptr [ebp + 8] */
    ecx = 0x1704A858u; /* 0x1704AB9A: mov ecx, 0x1704a858 */
    MEM32(eax) = 0x1704A6B4u; /* 0x1704AB9F: mov dword ptr [eax], 0x1704a6b4 */
    MEM32(eax + 0x4) = 0x1704A760u; /* 0x1704ABA5: mov dword ptr [eax + 4], 0x1704a760 */
    MEM32(eax + 0x8) = ecx; /* 0x1704ABAC: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0x1704AA13u; /* 0x1704ABAF: mov dword ptr [eax + 0xc], 0x1704aa13 */
    MEM32(eax + 0x10) = 0x1704AAFDu; /* 0x1704ABB6: mov dword ptr [eax + 0x10], 0x1704aafd */
    MEM32(eax + 0x14) = 0x1704A724u; /* 0x1704ABBD: mov dword ptr [eax + 0x14], 0x1704a724 */
    MEM32(eax + 0x18) = 0x1704A7F2u; /* 0x1704ABC4: mov dword ptr [eax + 0x18], 0x1704a7f2 */
    MEM32(eax + 0x1C) = 0x1704A942u; /* 0x1704ABCB: mov dword ptr [eax + 0x1c], 0x1704a942 */
    MEM32(eax + 0x8C) = ecx; /* 0x1704ABD2: mov dword ptr [eax + 0x8c], ecx */
    ebp = POP32_VAL(esp); /* 0x1704ABD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704ABD9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704ABE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704ABE1u);

L_1704ABE1:
    edi = edi; /* 0x1704ABE1: mov edi, edi */
    PUSH32(esp, esi); /* 0x1704ABE3: push esi */
    esi = MEM32(ecx + 0x4); /* 0x1704ABE4: mov esi, dword ptr [ecx + 4] */
    /* test esi, esi */ /* 0x1704ABE7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704ABF9; /* 0x1704ABE9: je 0x1704abf9 */
L_1704ABEB:
    ecx = esi; /* 0x1704ABEB: mov ecx, esi */
    RECOMP_CALL(sub_1704ABE1); /* 0x1704ABED: call 0x1704abe1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1704ABF2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1704ABF3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704ABF8: pop ecx */
L_1704ABF9:
    esi = POP32_VAL(esp); /* 0x1704ABF9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704ABFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704AC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AC00u);

L_1704AC00:
    edi = edi; /* 0x1704AC00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AC02: push ebp */
    ebp = esp; /* 0x1704AC03: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704AC05: push esi */
    esi = ecx; /* 0x1704AC06: mov esi, ecx */
    RECOMP_CALL(sub_1704ABE1); /* 0x1704AC08: call 0x1704abe1 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1704AC0D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704AC1A; /* 0x1704AC11: je 0x1704ac1a */
L_1704AC13:
    PUSH32(esp, esi); /* 0x1704AC13: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1704AC14: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704AC19: pop ecx */
L_1704AC1A:
    eax = esi; /* 0x1704AC1A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1704AC1C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704AC1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704AC1E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704AC26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AC26u);

L_1704AC26:
    edi = edi; /* 0x1704AC26: mov edi, edi */
    PUSH32(esp, esi); /* 0x1704AC28: push esi */
    PUSH32(esp, edi); /* 0x1704AC29: push edi */
    esi = ecx; /* 0x1704AC2A: mov esi, ecx */
    RECOMP_CALL(sub_170B7D30); /* 0x1704AC2C: call 0x170b7d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AC31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1704AC33: push 8 */
    ecx = POP32_VAL(esp); /* 0x1704AC35: pop ecx */
    MEM32(esi + 0x88) = eax; /* 0x1704AC36: mov dword ptr [esi + 0x88], eax */
    MEM32(esi + 0x8C) = eax; /* 0x1704AC3C: mov dword ptr [esi + 0x8c], eax */
    MEM32(esi + 0x90) = eax; /* 0x1704AC42: mov dword ptr [esi + 0x90], eax */
    MEM32(esi + 0x94) = eax; /* 0x1704AC48: mov dword ptr [esi + 0x94], eax */
    MEM32(esi + 0x98) = eax; /* 0x1704AC4E: mov dword ptr [esi + 0x98], eax */
    MEM32(esi + 0x9C) = eax; /* 0x1704AC54: mov dword ptr [esi + 0x9c], eax */
    edi = esi + 0xA0; /* 0x1704AC5A: lea edi, [esi + 0xa0] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704AC60: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x1704AC62: pop edi */
    eax = esi; /* 0x1704AC63: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1704AC65: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704AC66: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704AC6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AC6Cu);

L_1704AC6C:
    edi = edi; /* 0x1704AC6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AC6E: push ebp */
    ebp = esp; /* 0x1704AC6F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704AC71: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704AC74: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704AC77: fmul dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704AC7A: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1704AC7D: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AC83: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704AC85: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704AC93; /* 0x1704AC88: jp 0x1704ac93 */
L_1704AC8A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AC8A: fstp st(0) */
L_1704AC8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AC8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704AD41; /* 0x1704AC8E: jmp 0x1704ad41 */
L_1704AC93:
    eax = MEM32(ebp + 0x10); /* 0x1704AC93: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704AC96: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704AC97: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1704AC9A: push edi */
    edi = ebp + (-0xC); /* 0x1704AC9B: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AC9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AC9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704ACA0: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704ACA1: fld dword ptr [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1704ACA4: fsub dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704ACA6: fld dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1704ACA9: pop edi */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1704ACAA: fsub dword ptr [eax + 4] */
    esi = POP32_VAL(esp); /* 0x1704ACAD: pop esi */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704ACAE: fld dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1704ACB1: fsub dword ptr [eax + 8] */
    fp_push(_st[0]); /* 0x1704ACB4: fld st(0) */
    _st[0] *= _st[1]; /* 0x1704ACB6: fmul st(1) */
    fp_push(_st[3]); /* 0x1704ACB8: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704ACBA: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704ACBC: faddp st(1) */
    fp_push(_st[2]); /* 0x1704ACBE: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704ACC0: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704ACC2: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1704ACC4: fst dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x1704ACC7: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704ACC9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704ACCB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704ACDA; /* 0x1704ACCE: jp 0x1704acda */
L_1704ACD0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACD0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACD2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACD4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACD6: fstp st(0) */
    goto L_1704AD3E; /* 0x1704ACD8: jmp 0x1704ad3e */
L_1704ACDA:
    ecx = MEM32(ebp + 0x14); /* 0x1704ACDA: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(_st[2]); /* 0x1704ACDD: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704ACDF: fmul dword ptr [ecx] */
    fp_push(_st[1]); /* 0x1704ACE1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704ACE3: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704ACE6: faddp st(1) */
    fp_push(_st[2]); /* 0x1704ACE8: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704ACEA: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704ACED: faddp st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1704ACEF: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACF1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704ACF3: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1704ACF5: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704ACFB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704ACFD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704AD06; /* 0x1704AD00: jp 0x1704ad06 */
L_1704AD02:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD02: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_1704AC8A; /* 0x1704AD04: jmp 0x1704ac8a */
L_1704AD06:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704AD06: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704AD09: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704AD0C: fld dword ptr [ecx] */
    fp_push(_st[3]); /* 0x1704AD0E: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704AD10: fmul st(4) */
    fp_push(_st[2]); /* 0x1704AD12: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704AD14: fmul st(3) */
    fp_push(_st[4]); /* 0x1704AD16: fld st(4) */
    _st[0] *= _st[5]; /* 0x1704AD18: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AD1A: faddp st(1) */
    fp_push(_st[2]); /* 0x1704AD1C: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704AD1E: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AD20: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1704AD22: fdivp st(1) */
    _st[0] = (double)*(float*)ADDR(ebp + 0xC) - _st[0]; /* 0x1704AD24: fsubr dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x1704AD27: fcomp st(5) */
    fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD29: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD2B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD2D: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AD2F: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD31: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1704AD33: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AD36: fstp st(0) */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704AC8C; /* 0x1704AD38: je 0x1704ac8c */
L_1704AD3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AD3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704AD40: inc eax */
    _flag_k = FK_INC;
L_1704AD41:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704AD41: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704AD42: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704AD4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AD4Au);

L_1704AD4A:
    edi = edi; /* 0x1704AD4A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AD4C: push ebp */
    ebp = esp; /* 0x1704AD4D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1704AD4F: sub esp, 0x30 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1704AD52: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704AD55: fld dword ptr [edx] */
    PUSH32(esp, edi); /* 0x1704AD57: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1704AD58: mov edi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1704AD5B: fld dword ptr [edi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AD5D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AD5F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704AD61: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704AD8B; /* 0x1704AD64: jp 0x1704ad8b */
L_1704AD66:
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704AD66: fld dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1704AD69: fld dword ptr [edi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AD6C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AD6E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704AD70: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704AD8B; /* 0x1704AD73: jp 0x1704ad8b */
L_1704AD75:
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1704AD75: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1704AD78: fld dword ptr [edi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AD7B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AD7D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704AD7F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704AD8B; /* 0x1704AD82: jp 0x1704ad8b */
L_1704AD84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AD84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704AE9F; /* 0x1704AD86: jmp 0x1704ae9f */
L_1704AD8B:
    PUSH32(esp, ebx); /* 0x1704AD8B: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1704AD8C: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0xC) = edx; /* 0x1704AD8F: mov dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ebx; /* 0x1704AD92: sub dword ptr [ebp + 0xc], ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1704AD95: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704AD97: push esi */
    edx = ebp + (-0x18); /* 0x1704AD98: lea edx, [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704AD9B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 1; /* 0x1704AD9D: mov dword ptr [ebp + 8], 1 */
    ecx = ebx; /* 0x1704ADA4: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1704ADA6: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1704ADA9: sub edx, ebx */
    _flag_k = FK_CMP;
L_1704ADAB:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704ADAB: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi + ecx)); /* 0x1704ADAD: fcomp dword ptr [edi + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704ADB0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704ADB2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704ADC8; /* 0x1704ADB5: jp 0x1704adc8 */
L_1704ADB7:
    fp_push(*(float*)&MEM32(edi + ecx)); /* 0x1704ADB7: fld dword ptr [edi + ecx] */
L_1704ADBA:
    _flag_a = (uint32_t)(MEM32(edx + ecx)); _flag_b = (uint32_t)(0);
    MEM32(edx + ecx) = MEM32(edx + ecx) & 0; /* 0x1704ADBA: and dword ptr [edx + ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + esi * 8 + (-0x30)) = _v; } /* 0x1704ADBE: fstp qword ptr [ebp + esi*8 - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1704ADC2: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704ADE6; /* 0x1704ADC6: jmp 0x1704ade6 */
L_1704ADC8:
    eax = MEM32(ebp + 0xC); /* 0x1704ADC8: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704ADCB: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + ecx)); /* 0x1704ADCD: fcomp dword ptr [eax + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704ADD0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704ADD2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704ADDF; /* 0x1704ADD5: jne 0x1704addf */
L_1704ADD7:
    eax = MEM32(ebp + 0xC); /* 0x1704ADD7: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x1704ADDA: fld dword ptr [eax + ecx] */
    RECOMP_BACKEDGE();
    goto L_1704ADBA; /* 0x1704ADDD: jmp 0x1704adba */
L_1704ADDF:
    MEM32(edx + ecx) = 1; /* 0x1704ADDF: mov dword ptr [edx + ecx], 1 */
L_1704ADE6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704ADE6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704ADE7: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 3 */ /* 0x1704ADEA: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1704ADAB; /* 0x1704ADED: jl 0x1704adab */
L_1704ADEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704ADEF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1704ADF1: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704AE9A; /* 0x1704ADF4: jne 0x1704ae9a */
L_1704ADFA:
    fp_push(*(double*)ADDR(0x170055F8)); /* 0x1704ADFA: fld qword ptr [0x170055f8] */
    esi = MEM32(ebp + 0x14); /* 0x1704AE00: mov esi, dword ptr [ebp + 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704AE03: fstp qword ptr [ebp - 0xc] */
    MEM32(ebp + 0x8) = edi; /* 0x1704AE06: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1704AE09: sub ebx, esi */
    _flag_k = FK_CMP;
L_1704AE0B:
    ecx = ebx + esi; /* 0x1704AE0B: lea ecx, [ebx + esi] */
    /* cmp MEM32(ecx + edx), 0 */ /* 0x1704AE0E: cmp dword ptr [ecx + edx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704AE41; /* 0x1704AE12: jne 0x1704ae41 */
L_1704AE14:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1704AE14: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1704AE1A: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AE1C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AE1E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704AE20: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704AE41; /* 0x1704AE23: jnp 0x1704ae41 */
L_1704AE25:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704AE25: fld dword ptr [ecx] */
    _st[0] = *(double*)ADDR(ebp + edi * 8 + (-0x30)) - _st[0]; /* 0x1704AE27: fsubr qword ptr [ebp + edi*8 - 0x30] */
    _st[0] /= (double)*(float*)ADDR(esi); /* 0x1704AE2B: fdiv dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0xC))); /* 0x1704AE2D: fcom qword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AE30: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704AE32: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704AE3F; /* 0x1704AE35: jne 0x1704ae3f */
L_1704AE37:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704AE37: fstp qword ptr [ebp - 0xc] */
    MEM32(ebp + 0x8) = edi; /* 0x1704AE3A: mov dword ptr [ebp + 8], edi */
    goto L_1704AE41; /* 0x1704AE3D: jmp 0x1704ae41 */
L_1704AE3F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AE3F: fstp st(0) */
L_1704AE41:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704AE41: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1704AE42: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 3 */ /* 0x1704AE45: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1704AE0B; /* 0x1704AE48: jl 0x1704ae0b */
L_1704AE4A:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x1704AE4A: fld qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1704AE4D: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AE53: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AE55: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704AEA6; /* 0x1704AE58: jnp 0x1704aea6 */
L_1704AE5A:
    ecx = MEM32(ebp + 0x10); /* 0x1704AE5A: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x1704AE5D: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704AE60: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1704AE62: sub edx, ecx */
    _flag_k = FK_CMP;
L_1704AE64:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x1704AE64: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704AE91; /* 0x1704AE67: je 0x1704ae91 */
L_1704AE69:
    fp_push(*(float*)&MEM32(edx + ecx)); /* 0x1704AE69: fld dword ptr [edx + ecx] */
    eax = MEM32(ebp + (-0x4)); /* 0x1704AE6C: mov eax, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x1704AE6F: fmul qword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1704AE72: fadd dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1704AE74: fld dword ptr [ecx + eax] */
    fp_push(_st[1]); /* 0x1704AE77: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AE79: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AE7B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AE7D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704AEA4; /* 0x1704AE80: jnp 0x1704aea4 */
L_1704AE82:
    eax = MEM32(ebp + 0xC); /* 0x1704AE82: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1704AE85: fld dword ptr [ecx + eax] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AE88: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AE8A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AE8C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704AEA6; /* 0x1704AE8F: jnp 0x1704aea6 */
L_1704AE91:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704AE91: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704AE92: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 3 */ /* 0x1704AE95: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1704AE64; /* 0x1704AE98: jl 0x1704ae64 */
L_1704AE9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AE9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704AE9C: inc eax */
    _flag_k = FK_INC;
L_1704AE9D:
    esi = POP32_VAL(esp); /* 0x1704AE9D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704AE9E: pop ebx */
L_1704AE9F:
    edi = POP32_VAL(esp); /* 0x1704AE9F: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704AEA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704AEA1: ret 0x10 */
L_1704AEA4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704AEA4: fstp st(0) */
L_1704AEA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704AEA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1704AE9D; /* 0x1704AEA8: jmp 0x1704ae9d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704AEAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704AEAFu);

L_1704AEAF:
    edi = edi; /* 0x1704AEAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704AEB1: push ebp */
    ebp = esp; /* 0x1704AEB2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x1704AEB4: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1704AEB7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704AEBA: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704AEBD: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704AEBF: fsub dword ptr [ecx] */
    edx = MEM32(ebp + 0x18); /* 0x1704AEC1: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1704AEC4: push esi */
    PUSH32(esp, edi); /* 0x1704AEC5: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1704AEC6: fstp dword ptr [ebp - 0x24] */
    esi = ebp + (-0x3C); /* 0x1704AEC9: lea esi, [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704AECC: fld dword ptr [eax + 4] */
    edi = ebp + (-0xC); /* 0x1704AECF: lea edi, [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704AED2: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1704AED5: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704AED8: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1704AEDB: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704AEDE: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1704AEE1: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704AEE4: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704AEE6: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704AEE8: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704AEEB: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704AEEE: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1704AEF1: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704AEF4: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704AEF7: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704AEFA: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1704AEFD: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704AF00: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1704AF03: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704AF06: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704AF09: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704AF0B: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1704AF0E: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704AF11: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1704AF14: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704AF17: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704AF19: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1704AF1B: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1704AF1E: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704AF21: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1704AF23: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704AF26: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704AF29: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1704AF2B: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AF2E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AF2F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AF30: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704AF31: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1704AF34: fmul dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704AF37: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1704AF3A: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AF3D: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1704AF3F: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704AF42: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AF45: faddp st(1) */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1704AF47: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x1704AF4D: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AF4F: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AF51: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704AF53: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704AF76; /* 0x1704AF56: jne 0x1704af76 */
L_1704AF58:
    eax = MEM32(ebp + 0x14); /* 0x1704AF58: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704AF5B: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704AF5D: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704AF5F: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704AF62: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704AF65: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704AF68: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704AF6B: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704AF6E: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704AF71: fstp dword ptr [ebp - 0x10] */
    goto L_1704AFA7; /* 0x1704AF74: jmp 0x1704afa7 */
L_1704AF76:
    fp_push(_st[1]); /* 0x1704AF76: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AF78: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AF7A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AF7C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704B0A3; /* 0x1704AF7F: jp 0x1704b0a3 */
L_1704AF85:
    eax = MEM32(ebp + 0x14); /* 0x1704AF85: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704AF88: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1704AF8A: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704AF8C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704AF8F: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1704AF92: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704AF95: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704AF98: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1704AF9B: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704AF9E: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x1704AFA1: fld st(1) */
    _st[0] = -_st[0]; /* 0x1704AFA3: fchs  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1704AFA5: fstp st(2) */
L_1704AFA7:
    fp_push(1.0); /* 0x1704AFA7: fld1  */
    esi = ebp + (-0x18); /* 0x1704AFA9: lea esi, [ebp - 0x18] */
    _st[0] /= _st[2]; /* 0x1704AFAC: fdiv st(2) */
    edi = ebp + (-0x3C); /* 0x1704AFAE: lea edi, [ebp - 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AFB1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AFB2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704AFB3: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704AFB4: fstp qword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704AFB7: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704AFBA: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704AFBD: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704AFC0: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AFC3: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1704AFC5: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704AFC8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704AFCB: faddp st(1) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1704AFCD: fst qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704AFD0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AFD2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AFD4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704B0A3; /* 0x1704AFD7: jnp 0x1704b0a3 */
L_1704AFDD:
    fp_push(_st[1]); /* 0x1704AFDD: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x1704AFDF: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704AFE2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704AFE4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704B0A3; /* 0x1704AFE7: jnp 0x1704b0a3 */
L_1704AFED:
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704AFED: fld dword ptr [ebp - 0x38] */
    esi = ebp + (-0x48); /* 0x1704AFF0: lea esi, [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1704AFF3: fmul dword ptr [ebp - 0x1c] */
    edi = ebp + (-0x3C); /* 0x1704AFF6: lea edi, [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704AFF9: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1704AFFC: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704AFFF: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1704B001: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704B004: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1704B007: fmul dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1704B00A: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x1704B00D: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704B010: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1704B012: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1704B015: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1704B018: fmul dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704B01B: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1704B01E: fmul dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704B021: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1704B023: fstp dword ptr [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704B026: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704B027: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704B028: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704B029: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704B02C: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704B02F: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704B032: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B035: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1704B037: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704B03A: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B03C: faddp st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x1704B03E: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B041: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B043: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704B045: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704B0A5; /* 0x1704B048: jnp 0x1704b0a5 */
L_1704B04A:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x1704B04A: fld qword ptr [ebp - 0x20] */
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1704B04D: fadd qword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x1704B050: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B052: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B054: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B056: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1704B058: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704B0A7; /* 0x1704B05B: jnp 0x1704b0a7 */
L_1704B05D:
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704B05D: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x1704B060: fmul dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704B063: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x1704B066: fmul dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B069: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1704B06B: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x1704B06E: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B071: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1704B073: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B079: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704B07B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1704B0A5; /* 0x1704B07E: jnp 0x1704b0a5 */
L_1704B080:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1704B080: fld qword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x1C); /* 0x1704B083: mov eax, dword ptr [ebp + 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x1704B086: fmul qword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704B089: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x20); /* 0x1704B08B: mov eax, dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x1704B08E: fld qword ptr [ebp - 0x20] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x1704B091: fmul qword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704B094: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x24); /* 0x1704B096: mov eax, dword ptr [ebp + 0x24] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x1704B099: fmul qword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704B09C: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B09E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704B0A0: inc eax */
    _flag_k = FK_INC;
    goto L_1704B0A9; /* 0x1704B0A1: jmp 0x1704b0a9 */
L_1704B0A3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B0A3: fstp st(0) */
L_1704B0A5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B0A5: fstp st(0) */
L_1704B0A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B0A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704B0A9:
    edi = POP32_VAL(esp); /* 0x1704B0A9: pop edi */
    esi = POP32_VAL(esp); /* 0x1704B0AA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704B0AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1704B0AC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1704B0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704B0B4u);

L_1704B0B4:
    edi = edi; /* 0x1704B0B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704B0B6: push ebp */
    ebp = esp; /* 0x1704B0B7: mov ebp, esp */
    edx = MEM32(ebp + 0x1C); /* 0x1704B0B9: mov edx, dword ptr [ebp + 0x1c] */
    /* test edx, edx */ /* 0x1704B0BC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B0C3; /* 0x1704B0BE: jne 0x1704b0c3 */
L_1704B0C0:
    edx = ebp + 0x1C; /* 0x1704B0C0: lea edx, [ebp + 0x1c] */
L_1704B0C3:
    ecx = MEM32(ebp + 0x20); /* 0x1704B0C3: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x1704B0C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B0CD; /* 0x1704B0C8: jne 0x1704b0cd */
L_1704B0CA:
    ecx = ebp + 0x1C; /* 0x1704B0CA: lea ecx, [ebp + 0x1c] */
L_1704B0CD:
    eax = MEM32(ebp + 0x24); /* 0x1704B0CD: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1704B0D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B0D7; /* 0x1704B0D2: jne 0x1704b0d7 */
L_1704B0D4:
    eax = ebp + 0x1C; /* 0x1704B0D4: lea eax, [ebp + 0x1c] */
L_1704B0D7:
    PUSH32(esp, eax); /* 0x1704B0D7: push eax */
    PUSH32(esp, ecx); /* 0x1704B0D8: push ecx */
    PUSH32(esp, edx); /* 0x1704B0D9: push edx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704B0DA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704B0DD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704B0E0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704B0E3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704B0E6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1704AEAF); /* 0x1704B0E9: call 0x1704aeaf */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704B0EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1704B0EF: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1704B0F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704B0F7u);

L_1704B0F7:
    edi = edi; /* 0x1704B0F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704B0F9: push ebp */
    ebp = esp; /* 0x1704B0FA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x318u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x318u; /* 0x1704B0FC: sub esp, 0x318 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704B102: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704B103: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704B105: push esi */
    PUSH32(esp, edi); /* 0x1704B106: push edi */
    ecx = ebp + (-0x110); /* 0x1704B107: lea ecx, [ebp - 0x110] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1704B10D: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1704B110: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704B113: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704B116: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_CALL(sub_1704AC26); /* 0x1704B119: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x30); /* 0x1704B11E: mov eax, dword ptr [ebp + 0x30] */
    /* cmp eax, ebx */ /* 0x1704B121: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B127; /* 0x1704B123: je 0x1704b127 */
L_1704B125:
    MEM32(eax) = ebx; /* 0x1704B125: mov dword ptr [eax], ebx */
L_1704B127:
    edi = MEM32(ebp + 0x8); /* 0x1704B127: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x1704B12A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B12C: je 0x1704b222 */
L_1704B132:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1704B132: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B135: je 0x1704b222 */
L_1704B13B:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1704B13B: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B13E: je 0x1704b222 */
L_1704B144:
    /* cmp MEM32(ebp + 0x1C), ebx */ /* 0x1704B144: cmp dword ptr [ebp + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B147: je 0x1704b222 */
L_1704B14D:
    eax = MEM32(edi); /* 0x1704B14D: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x318); /* 0x1704B14F: lea ecx, [ebp - 0x318] */
    PUSH32(esp, ecx); /* 0x1704B155: push ecx */
    PUSH32(esp, edi); /* 0x1704B156: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1704B157: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x318); /* 0x1704B15A: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x1704B160: push eax */
    ecx = ebp + (-0x110); /* 0x1704B161: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_1703CC5E); /* 0x1704B167: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1704B16C: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B16E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704B16F: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), 0x440u */ /* 0x1704B172: test ax, 0x440 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B176: jne 0x1704b222 */
L_1704B17C:
    /* cmp MEM32(ebp + (-0x88)), ebx */ /* 0x1704B17C: cmp dword ptr [ebp - 0x88], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B222; /* 0x1704B182: je 0x1704b222 */
L_1704B188:
    eax = MEM32(edi); /* 0x1704B188: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B18A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704B18B: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704B18E: mov esi, eax */
    eax = MEM32(edi); /* 0x1704B190: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B192: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704B193: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1704B196: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1704B199: push ecx */
    PUSH32(esp, 0); /* 0x1704B19A: push 0 */
    MEM32(ebp + (-0x20)) = eax; /* 0x1704B19C: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(edi); /* 0x1704B19F: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B1A1: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1704B1A2: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B1A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B1A7: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B229; /* 0x1704B1AA: jl 0x1704b229 */
L_1704B1AC:
    edx = ebp + (-0x24); /* 0x1704B1AC: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x1704B1AF: push edx */
    eax = edi; /* 0x1704B1B0: mov eax, edi */
    ecx = MEM32(eax); /* 0x1704B1B2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x1704B1B4: push 0x10 */
    PUSH32(esp, eax); /* 0x1704B1B6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1704B1B7: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B1BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B1BC: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B229; /* 0x1704B1BF: jl 0x1704b229 */
L_1704B1C1:
    edx = ebp + (-0xC); /* 0x1704B1C1: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1704B1C4: push edx */
    eax = edi; /* 0x1704B1C5: mov eax, edi */
    ecx = MEM32(eax); /* 0x1704B1C7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x1704B1C9: push 0x10 */
    PUSH32(esp, eax); /* 0x1704B1CB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x1704B1CC: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B1CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B1D1: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B229; /* 0x1704B1D4: jl 0x1704b229 */
L_1704B1D6:
    eax = MEM32(ebp + 0x1C); /* 0x1704B1D6: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1704B1D9: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1704B1DC: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704B1E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 0x799A130Cu; /* 0x1704B1E2: mov dword ptr [ebp - 0x2c], 0x799a130c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B229; /* 0x1704B1E9: je 0x1704b229 */
L_1704B1EB:
    eax = MEM32(ebp + (-0x8)); /* 0x1704B1EB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704B1EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704B1F0: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1704B1F1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B1F7; /* 0x1704B1F3: jae 0x1704b1f7 */
L_1704B1F5:
    eax = edi; /* 0x1704B1F5: mov eax, edi */
L_1704B1F7:
    eax = eax + eax * 4; /* 0x1704B1F7: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704B1FA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704B1FA: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704B1FD: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B1FE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704B203: pop ecx */
    ebx = eax; /* 0x1704B204: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704B206: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, ecx */ /* 0x1704B208: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704B20A: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B218; /* 0x1704B20D: jne 0x1704b218 */
L_1704B20F:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704B20F: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1704B229; /* 0x1704B216: jmp 0x1704b229 */
L_1704B218:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1704B218: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B26C; /* 0x1704B21B: je 0x1704b26c */
L_1704B21D:
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704B21D: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B26F; /* 0x1704B220: jne 0x1704b26f */
L_1704B222:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704B222: mov dword ptr [ebp - 4], 0x8876086c */
L_1704B229:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1704B229: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1704B22C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1704B231: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1704B232: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704B237: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704B238: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1704B239: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x1704B23C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B247; /* 0x1704B23E: je 0x1704b247 */
L_1704B240:
    PUSH32(esp, 1); /* 0x1704B240: push 1 */
    RECOMP_CALL(sub_1704AC00); /* 0x1704B242: call 0x1704ac00 */
    RECOMP_FLAGS_IN();
L_1704B247:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1704B247: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x1704B24B: mov esi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B256; /* 0x1704B24E: je 0x1704b256 */
L_1704B250:
    eax = MEM32(esi); /* 0x1704B250: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704B252: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704B253: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704B256:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1704B256: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B262; /* 0x1704B25A: je 0x1704b262 */
L_1704B25C:
    eax = MEM32(esi); /* 0x1704B25C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704B25E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1704B25F: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1704B262:
    eax = MEM32(ebp + (-0x4)); /* 0x1704B262: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704B265: pop edi */
    esi = POP32_VAL(esp); /* 0x1704B266: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704B267: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704B268: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x1704B269: ret 0x34 */
L_1704B26C:
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704B26C: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704B26F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_1704B2C2; /* 0x1704B26F: jbe 0x1704b2c2 */
L_1704B271:
    eax = MEM32(ebp + 0x8); /* 0x1704B271: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1704B274: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1704B276: push ecx */
    PUSH32(esp, ebx); /* 0x1704B277: push ebx */
    PUSH32(esp, eax); /* 0x1704B278: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x1704B279: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B27C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B27E: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B229; /* 0x1704B281: jl 0x1704b229 */
L_1704B283:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704B283: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704B285: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B2D4; /* 0x1704B288: je 0x1704b2d4 */
L_1704B28A:
    eax = MEM32(ebp + 0x10); /* 0x1704B28A: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0x8)); /* 0x1704B28D: mov esi, dword ptr [ebp - 8] */
    /* cmp eax, esi */ /* 0x1704B290: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B2A1; /* 0x1704B292: jae 0x1704b2a1 */
L_1704B294:
    ecx = eax + eax * 4; /* 0x1704B294: lea ecx, [eax + eax*4] */
    /* cmp MEM32(ebx + ecx * 4), eax */ /* 0x1704B297: cmp dword ptr [ebx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + ecx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B2A1; /* 0x1704B29A: jne 0x1704b2a1 */
L_1704B29C:
    MEM32(ebp + 0x10) = eax; /* 0x1704B29C: mov dword ptr [ebp + 0x10], eax */
    goto L_1704B2D4; /* 0x1704B29F: jmp 0x1704b2d4 */
L_1704B2A1:
    /* cmp edx, esi */ /* 0x1704B2A1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B2BA; /* 0x1704B2A3: jae 0x1704b2ba */
L_1704B2A5:
    ecx = ebx; /* 0x1704B2A5: mov ecx, ebx */
L_1704B2A7:
    /* cmp MEM32(ecx), eax */ /* 0x1704B2A7: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B2B5; /* 0x1704B2A9: je 0x1704b2b5 */
L_1704B2AB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704B2AB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1704B2AC: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1704B2AF: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B2A7; /* 0x1704B2B1: jb 0x1704b2a7 */
L_1704B2B3:
    goto L_1704B2B8; /* 0x1704B2B3: jmp 0x1704b2b8 */
L_1704B2B5:
    MEM32(ebp + 0x10) = edx; /* 0x1704B2B5: mov dword ptr [ebp + 0x10], edx */
L_1704B2B8:
    /* cmp edx, esi */ /* 0x1704B2B8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704B2BA:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704B229; /* 0x1704B2BA: je 0x1704b229 */
L_1704B2C0:
    goto L_1704B2D4; /* 0x1704B2C0: jmp 0x1704b2d4 */
L_1704B2C2:
    eax = MEM32(ebp + (-0x20)); /* 0x1704B2C2: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1704B2C5: mov dword ptr [ebp - 8], edi */
    MEM32(ebx + 0x4) = ecx; /* 0x1704B2C8: mov dword ptr [ebx + 4], ecx */
    MEM32(ebx + 0x8) = eax; /* 0x1704B2CB: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = ecx; /* 0x1704B2CE: mov dword ptr [ebx + 0xc], ecx */
    MEM32(ebx + 0x10) = esi; /* 0x1704B2D1: mov dword ptr [ebx + 0x10], esi */
L_1704B2D4:
    edx = MEM32(ebp + (-0x8)); /* 0x1704B2D4: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704B2D7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1704B2D9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B2F3; /* 0x1704B2DB: jbe 0x1704b2f3 */
L_1704B2DD:
    eax = ebx + 0xC; /* 0x1704B2DD: lea eax, [ebx + 0xc] */
L_1704B2E0:
    ecx = MEM32(eax + 0x4); /* 0x1704B2E0: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x1704B2E3: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1704B2E5: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x1704B2E7: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704B2ED; /* 0x1704B2E9: ja 0x1704b2ed */
L_1704B2EB:
    esi = ecx; /* 0x1704B2EB: mov esi, ecx */
L_1704B2ED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1704B2ED: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704B2F0: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704B2E0; /* 0x1704B2F1: jne 0x1704b2e0 */
L_1704B2F3:
    PUSH32(esp, esi); /* 0x1704B2F3: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B2F4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B2F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704B2FB: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1704B2FC: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B20F; /* 0x1704B2FF: je 0x1704b20f */
L_1704B305:
    edi = MEM32(ebp + (-0x14)); /* 0x1704B305: mov edi, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1704B308: fld dword ptr [0x17001430] */
    ecx = esi; /* 0x1704B30E: mov ecx, esi */
    edx = ecx; /* 0x1704B310: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704B312: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704B312: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B315: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704B317: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704B319: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704B31B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704B31E: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0x18); /* 0x1704B320: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704B323: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B325: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B327: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704B329: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x1704B32C: mov eax, dword ptr [ebp + 0x14] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704B33B; /* 0x1704B32F: jp 0x1704b33b */
L_1704B331:
    fp_push(1.0); /* 0x1704B331: fld1  */
    fp_push(0.0); /* 0x1704B333: fldz  */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704B335: fld dword ptr [eax] */
    _st[0] = -_st[0]; /* 0x1704B337: fchs  */
    goto L_1704B34E; /* 0x1704B339: jmp 0x1704b34e */
L_1704B33B:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704B33B: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704B33E: fld dword ptr [ecx] */
    _st[0] = -_st[0]; /* 0x1704B340: fchs  */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704B342: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704B345: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704B347: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704B34A: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704B34C: fsubp st(1) */
L_1704B34E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704B34E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1704B350: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B35D; /* 0x1704B353: je 0x1704b35d */
L_1704B355:
    ecx = MEM32(ebp + 0x10); /* 0x1704B355: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + 0x1; /* 0x1704B358: lea eax, [ecx + 1] */
    goto L_1704B360; /* 0x1704B35B: jmp 0x1704b360 */
L_1704B35D:
    eax = MEM32(ebp + (-0x8)); /* 0x1704B35D: mov eax, dword ptr [ebp - 8] */
L_1704B360:
    /* cmp ecx, eax */ /* 0x1704B360: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x1704B362: fchs  */
    MEM32(ebp + (-0x28)) = eax; /* 0x1704B364: mov dword ptr [ebp - 0x28], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B3C0; /* 0x1704B367: jae 0x1704b3c0 */
L_1704B369:
    edx = ecx + ecx * 4; /* 0x1704B369: lea edx, [ecx + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1704B36C: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = ebx + edx * 4 + 0x10; /* 0x1704B36E: lea edi, [ebx + edx*4 + 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x1704B372: mov dword ptr [ebp + 0xc], eax */
L_1704B375:
    edx = MEM32(edi + (-0x4)); /* 0x1704B375: mov edx, dword ptr [edi - 4] */
    esi = MEM32(edi); /* 0x1704B378: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1704B37A: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1704B37C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B3B8; /* 0x1704B37E: jae 0x1704b3b8 */
L_1704B380:
    ebx = MEM32(ebp + (-0x50)); /* 0x1704B380: mov ebx, dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x1704B383: fld st(1) */
    eax = MEM32(ebp + (-0x88)); /* 0x1704B385: mov eax, dword ptr [ebp - 0x88] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1704B38B: imul ebx, edx */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x1704B38E: movzx eax, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x1704B392: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1704B395: add eax, ebx */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704B397: fmul dword ptr [eax + 4] */
    fp_push(_st[3]); /* 0x1704B39A: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704B39C: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B39E: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B3A0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B3A2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704B3A4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B3B0; /* 0x1704B3A7: jne 0x1704b3b0 */
L_1704B3A9:
    eax = MEM32(ebp + (-0x14)); /* 0x1704B3A9: mov eax, dword ptr [ebp - 0x14] */
    MEM8(edx + eax) = (uint8_t)(1); /* 0x1704B3AC: mov byte ptr [edx + eax], 1 */
L_1704B3B0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704B3B0: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1704B3B1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B380; /* 0x1704B3B3: jb 0x1704b380 */
L_1704B3B5:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B3B5: mov ebx, dword ptr [ebp - 0x10] */
L_1704B3B8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x1704B3B8: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1704B3BB: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704B375; /* 0x1704B3BE: jne 0x1704b375 */
L_1704B3C0:
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x1704B3C0: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B3C3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B3C5: fstp st(0) */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1704B3C7: mov dword ptr [ebp - 0x30], ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B3CA: fstp st(0) */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B527; /* 0x1704B3CC: jae 0x1704b527 */
L_1704B3D2:
    eax = ecx + ecx * 4; /* 0x1704B3D2: lea eax, [ecx + ecx*4] */
    edx = ebx + eax * 4 + 0x4; /* 0x1704B3D5: lea edx, [ebx + eax*4 + 4] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1704B3D9: mov dword ptr [ebp - 0x20], edx */
L_1704B3DC:
    eax = MEM32(edx); /* 0x1704B3DC: mov eax, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x1704B3DE: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704B3E1: add ecx, eax */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1704B3E3: mov edi, eax */
    /* cmp edi, ecx */ /* 0x1704B3E5: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1704B3E7: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + 0x10) = edi; /* 0x1704B3EA: mov dword ptr [ebp + 0x10], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B512; /* 0x1704B3ED: jae 0x1704b512 */
L_1704B3F3:
    eax = edi + edi * 2; /* 0x1704B3F3: lea eax, [edi + edi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704B3F6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704B3F6: shl eax, 2 */
    MEM32(ebp + (-0x38)) = eax; /* 0x1704B3F9: mov dword ptr [ebp - 0x38], eax */
L_1704B3FC:
    ecx = MEM32(ebp + (-0x24)); /* 0x1704B3FC: mov ecx, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x14)); /* 0x1704B3FF: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B402: add eax, ecx */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x8); /* 0x1704B404: mov edx, dword ptr [eax + 8] */
    esi = MEM32(eax); /* 0x1704B407: mov esi, dword ptr [eax] */
    SET_LO8(ecx, MEM8(edx + ebx)); /* 0x1704B409: mov cl, byte ptr [edx + ebx] */
    /* cmp MEM8(esi + ebx), LO8(ecx) */ /* 0x1704B40C: cmp byte ptr [esi + ebx], cl */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B420; /* 0x1704B40F: jne 0x1704b420 */
L_1704B411:
    edi = MEM32(eax + 0x4); /* 0x1704B411: mov edi, dword ptr [eax + 4] */
    /* cmp MEM8(ebx + edi), LO8(ecx) */ /* 0x1704B414: cmp byte ptr [ebx + edi], cl */
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + 0x10); /* 0x1704B417: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B4F6; /* 0x1704B41A: je 0x1704b4f6 */
L_1704B420:
    eax = MEM32(eax + 0x4); /* 0x1704B420: mov eax, dword ptr [eax + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x50))); /* 0x1704B423: imul eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x88)); /* 0x1704B427: mov ecx, dword ptr [ebp - 0x88] */
    ecx = (uint32_t)MEM16(ecx + 0x2); /* 0x1704B42D: movzx ecx, word ptr [ecx + 2] */
    ebx = ebp + 0xC; /* 0x1704B431: lea ebx, [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704B434: push ebx */
    ebx = ebp + (-0x34); /* 0x1704B435: lea ebx, [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x1704B438: push ebx */
    ebx = ebp + (-0x3C); /* 0x1704B439: lea ebx, [ebp - 0x3c] */
    PUSH32(esp, ebx); /* 0x1704B43C: push ebx */
    ebx = MEM32(ebp + (-0x50)); /* 0x1704B43D: mov ebx, dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704B440: push dword ptr [ebp + 0x18] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1704B443: imul ebx, edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704B446: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B449: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1704B44B: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1704B44E: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x1704B450: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1704B453: push ebx */
    PUSH32(esp, eax); /* 0x1704B454: push eax */
    eax = MEM32(ebp + (-0x50)); /* 0x1704B455: mov eax, dword ptr [ebp - 0x50] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1704B458: imul eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B45B: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1704B45D: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1704B460: push eax */
    RECOMP_CALL(sub_1704AEAF); /* 0x1704B461: call 0x1704aeaf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B466: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B4F6; /* 0x1704B468: je 0x1704b4f6 */
L_1704B46E:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704B46E: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x2C))); /* 0x1704B471: fcomp dword ptr [ebp - 0x2c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B474: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704B476: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704B499; /* 0x1704B479: jp 0x1704b499 */
L_1704B47B:
    eax = MEM32(ebp + (-0x3C)); /* 0x1704B47B: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1704B47E: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1704B481: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1704B484: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x1704B487: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1704B48A: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1704B48D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x48)) = edi; /* 0x1704B490: mov dword ptr [ebp - 0x48], edi */
    MEM32(eax) = 1; /* 0x1704B493: mov dword ptr [eax], 1 */
L_1704B499:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704B499: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x30), ebx */ /* 0x1704B49B: cmp dword ptr [ebp + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B4F3; /* 0x1704B49E: je 0x1704b4f3 */
L_1704B4A0:
    esi = MEM32(ebp + (-0x1C)); /* 0x1704B4A0: mov esi, dword ptr [ebp - 0x1c] */
    /* cmp esi, ebx */ /* 0x1704B4A3: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B4AC; /* 0x1704B4A5: je 0x1704b4ac */
L_1704B4A7:
    /* cmp MEM32(esi), 0x3Fu */ /* 0x1704B4A7: cmp dword ptr [esi], 0x3f */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B4D4; /* 0x1704B4AA: jne 0x1704b4d4 */
L_1704B4AC:
    PUSH32(esp, 0x3F8u); /* 0x1704B4AC: push 0x3f8 */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B4B1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704B4B6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704B4B8: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B4C2; /* 0x1704B4B9: je 0x1704b4c2 */
L_1704B4BB:
    MEM32(eax) = ebx; /* 0x1704B4BB: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = ebx; /* 0x1704B4BD: mov dword ptr [eax + 4], ebx */
    goto L_1704B4C4; /* 0x1704B4C0: jmp 0x1704b4c4 */
L_1704B4C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B4C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704B4C4:
    /* cmp eax, ebx */ /* 0x1704B4C4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B5D3; /* 0x1704B4C6: je 0x1704b5d3 */
L_1704B4CC:
    MEM32(eax + 0x4) = esi; /* 0x1704B4CC: mov dword ptr [eax + 4], esi */
    esi = eax; /* 0x1704B4CF: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1704B4D1: mov dword ptr [ebp - 0x1c], esi */
L_1704B4D4:
    eax = MEM32(esi); /* 0x1704B4D4: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1704B4D6: mov ecx, dword ptr [ebp - 0x3c] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704B4D9: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704B4D9: shl eax, 4 */
    eax = eax + esi + 0x8; /* 0x1704B4DC: lea eax, [eax + esi + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1704B4E0: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x1704B4E3: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x8) = ecx; /* 0x1704B4E6: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1704B4E9: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x1704B4EC: mov dword ptr [eax], edi */
    MEM32(eax + 0xC) = ecx; /* 0x1704B4EE: mov dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1704B4F1: inc dword ptr [esi] */
    _flag_k = FK_INC;
L_1704B4F3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1704B4F3: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
L_1704B4F6:
    eax = MEM32(ebp + (-0x38)); /* 0x1704B4F6: mov eax, dword ptr [ebp - 0x38] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B4F9: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704B4FC: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1704B4FD: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x40)) */ /* 0x1704B500: cmp edi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x1704B503: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x38)) = eax; /* 0x1704B506: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B3FC; /* 0x1704B509: jb 0x1704b3fc */
L_1704B50F:
    edx = MEM32(ebp + (-0x20)); /* 0x1704B50F: mov edx, dword ptr [ebp - 0x20] */
L_1704B512:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x1704B512: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x30)); /* 0x1704B515: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1704B518: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x28)) */ /* 0x1704B51B: cmp eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x1704B51E: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B3DC; /* 0x1704B521: jb 0x1704b3dc */
L_1704B527:
    eax = MEM32(ebp + 0x1C); /* 0x1704B527: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(eax), 1 */ /* 0x1704B52A: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B5BE; /* 0x1704B52D: jne 0x1704b5be */
L_1704B533:
    eax = MEM32(ebp + 0x20); /* 0x1704B533: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x1704B536: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B53F; /* 0x1704B538: je 0x1704b53f */
L_1704B53A:
    ecx = MEM32(ebp + (-0x48)); /* 0x1704B53A: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(eax) = ecx; /* 0x1704B53D: mov dword ptr [eax], ecx */
L_1704B53F:
    eax = MEM32(ebp + 0x24); /* 0x1704B53F: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1704B542: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B54B; /* 0x1704B544: je 0x1704b54b */
L_1704B546:
    ecx = MEM32(ebp + (-0x4C)); /* 0x1704B546: mov ecx, dword ptr [ebp - 0x4c] */
    MEM32(eax) = ecx; /* 0x1704B549: mov dword ptr [eax], ecx */
L_1704B54B:
    eax = MEM32(ebp + 0x28); /* 0x1704B54B: mov eax, dword ptr [ebp + 0x28] */
    /* test eax, eax */ /* 0x1704B54E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B557; /* 0x1704B550: je 0x1704b557 */
L_1704B552:
    ecx = MEM32(ebp + (-0x44)); /* 0x1704B552: mov ecx, dword ptr [ebp - 0x44] */
    MEM32(eax) = ecx; /* 0x1704B555: mov dword ptr [eax], ecx */
L_1704B557:
    eax = MEM32(ebp + 0x2C); /* 0x1704B557: mov eax, dword ptr [ebp + 0x2c] */
    /* test eax, eax */ /* 0x1704B55A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B563; /* 0x1704B55C: je 0x1704b563 */
L_1704B55E:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1704B55E: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x1704B561: mov dword ptr [eax], ecx */
L_1704B563:
    /* cmp MEM32(ebp + 0x30), 0 */ /* 0x1704B563: cmp dword ptr [ebp + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B5BE; /* 0x1704B567: je 0x1704b5be */
L_1704B569:
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1704B569: push dword ptr [ebp + 0x30] */
    eax = MEM32(ebp + (-0x18)); /* 0x1704B56C: mov eax, dword ptr [ebp - 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704B56F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704B56F: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1704B572: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x1704B573: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B57A: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B229; /* 0x1704B57D: jl 0x1704b229 */
L_1704B583:
    eax = MEM32(ebp + 0x30); /* 0x1704B583: mov eax, dword ptr [ebp + 0x30] */
    eax = MEM32(eax); /* 0x1704B586: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1704B588: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704B58A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1704B58B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1704B58E: mov edx, dword ptr [ebp - 0x1c] */
    /* test edx, edx */ /* 0x1704B591: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B5BE; /* 0x1704B593: je 0x1704b5be */
L_1704B595:
    ecx = MEM32(edx); /* 0x1704B595: mov ecx, dword ptr [edx] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1704B597: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1704B597: shl ecx, 4 */
    ebx = ecx; /* 0x1704B59A: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704B59C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704B59C: shr ecx, 2 */
    esi = edx + 0x8; /* 0x1704B59F: lea esi, [edx + 8] */
    edi = eax; /* 0x1704B5A2: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704B5A4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1704B5A6: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704B5A8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704B5AB: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(edx); /* 0x1704B5AD: mov ecx, dword ptr [edx] */
    edx = MEM32(edx + 0x4); /* 0x1704B5AF: mov edx, dword ptr [edx + 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1704B5B2: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1704B5B2: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B5B5: add eax, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1704B5B7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B595; /* 0x1704B5B9: jne 0x1704b595 */
L_1704B5BB:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B5BB: mov ebx, dword ptr [ebp - 0x10] */
L_1704B5BE:
    eax = MEM32(ebp + 0x34); /* 0x1704B5BE: mov eax, dword ptr [ebp + 0x34] */
    /* test eax, eax */ /* 0x1704B5C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B229; /* 0x1704B5C3: je 0x1704b229 */
L_1704B5C9:
    ecx = MEM32(ebp + (-0x18)); /* 0x1704B5C9: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x1704B5CC: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1704B229; /* 0x1704B5CE: jmp 0x1704b229 */
L_1704B5D3:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B5D3: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704B5D6: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1704B229; /* 0x1704B5DD: jmp 0x1704b229 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704B5E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704B5E7u);

L_1704B5E7:
    edi = edi; /* 0x1704B5E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704B5E9: push ebp */
    ebp = esp; /* 0x1704B5EA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x318u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x318u; /* 0x1704B5EC: sub esp, 0x318 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704B5F2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704B5F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704B5F5: push esi */
    PUSH32(esp, edi); /* 0x1704B5F6: push edi */
    ecx = ebp + (-0x110); /* 0x1704B5F7: lea ecx, [ebp - 0x110] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1704B5FD: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1704B600: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704B603: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704B606: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_CALL(sub_1704AC26); /* 0x1704B609: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x30); /* 0x1704B60E: mov eax, dword ptr [ebp + 0x30] */
    /* cmp eax, ebx */ /* 0x1704B611: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B617; /* 0x1704B613: je 0x1704b617 */
L_1704B615:
    MEM32(eax) = ebx; /* 0x1704B615: mov dword ptr [eax], ebx */
L_1704B617:
    edi = MEM32(ebp + 0x8); /* 0x1704B617: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x1704B61A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B61C: je 0x1704b712 */
L_1704B622:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1704B622: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B625: je 0x1704b712 */
L_1704B62B:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1704B62B: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B62E: je 0x1704b712 */
L_1704B634:
    /* cmp MEM32(ebp + 0x1C), ebx */ /* 0x1704B634: cmp dword ptr [ebp + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B637: je 0x1704b712 */
L_1704B63D:
    eax = MEM32(edi); /* 0x1704B63D: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x318); /* 0x1704B63F: lea ecx, [ebp - 0x318] */
    PUSH32(esp, ecx); /* 0x1704B645: push ecx */
    PUSH32(esp, edi); /* 0x1704B646: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1704B647: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x318); /* 0x1704B64A: lea eax, [ebp - 0x318] */
    PUSH32(esp, eax); /* 0x1704B650: push eax */
    ecx = ebp + (-0x110); /* 0x1704B651: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_1703CC5E); /* 0x1704B657: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1704B65C: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B65E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704B65F: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), 0x440u */ /* 0x1704B662: test ax, 0x440 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B666: jne 0x1704b712 */
L_1704B66C:
    /* cmp MEM32(ebp + (-0x88)), ebx */ /* 0x1704B66C: cmp dword ptr [ebp - 0x88], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B712; /* 0x1704B672: je 0x1704b712 */
L_1704B678:
    eax = MEM32(edi); /* 0x1704B678: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B67A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704B67B: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704B67E: mov esi, eax */
    eax = MEM32(edi); /* 0x1704B680: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B682: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704B683: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1704B686: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1704B689: push ecx */
    PUSH32(esp, 0); /* 0x1704B68A: push 0 */
    MEM32(ebp + (-0x20)) = eax; /* 0x1704B68C: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(edi); /* 0x1704B68F: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704B691: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1704B692: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B697: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B719; /* 0x1704B69A: jl 0x1704b719 */
L_1704B69C:
    edx = ebp + (-0x24); /* 0x1704B69C: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x1704B69F: push edx */
    eax = edi; /* 0x1704B6A0: mov eax, edi */
    ecx = MEM32(eax); /* 0x1704B6A2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x1704B6A4: push 0x10 */
    PUSH32(esp, eax); /* 0x1704B6A6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1704B6A7: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B6AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B6AC: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B719; /* 0x1704B6AF: jl 0x1704b719 */
L_1704B6B1:
    edx = ebp + (-0xC); /* 0x1704B6B1: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1704B6B4: push edx */
    eax = edi; /* 0x1704B6B5: mov eax, edi */
    ecx = MEM32(eax); /* 0x1704B6B7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x1704B6B9: push 0x10 */
    PUSH32(esp, eax); /* 0x1704B6BB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x1704B6BC: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B6BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B6C1: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B719; /* 0x1704B6C4: jl 0x1704b719 */
L_1704B6C6:
    eax = MEM32(ebp + 0x1C); /* 0x1704B6C6: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1704B6C9: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1704B6CC: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704B6D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 0x799A130Cu; /* 0x1704B6D2: mov dword ptr [ebp - 0x2c], 0x799a130c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B719; /* 0x1704B6D9: je 0x1704b719 */
L_1704B6DB:
    eax = MEM32(ebp + (-0x8)); /* 0x1704B6DB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704B6DE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704B6E0: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1704B6E1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B6E7; /* 0x1704B6E3: jae 0x1704b6e7 */
L_1704B6E5:
    eax = edi; /* 0x1704B6E5: mov eax, edi */
L_1704B6E7:
    eax = eax + eax * 4; /* 0x1704B6E7: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704B6EA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704B6EA: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704B6ED: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B6EE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704B6F3: pop ecx */
    ebx = eax; /* 0x1704B6F4: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704B6F6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, ecx */ /* 0x1704B6F8: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704B6FA: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B708; /* 0x1704B6FD: jne 0x1704b708 */
L_1704B6FF:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704B6FF: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1704B719; /* 0x1704B706: jmp 0x1704b719 */
L_1704B708:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1704B708: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B75C; /* 0x1704B70B: je 0x1704b75c */
L_1704B70D:
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704B70D: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B75F; /* 0x1704B710: jne 0x1704b75f */
L_1704B712:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704B712: mov dword ptr [ebp - 4], 0x8876086c */
L_1704B719:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1704B719: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1704B71C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1704B721: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1704B722: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704B727: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704B728: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1704B729: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x1704B72C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B737; /* 0x1704B72E: je 0x1704b737 */
L_1704B730:
    PUSH32(esp, 1); /* 0x1704B730: push 1 */
    RECOMP_CALL(sub_1704AC00); /* 0x1704B732: call 0x1704ac00 */
    RECOMP_FLAGS_IN();
L_1704B737:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1704B737: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x1704B73B: mov esi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B746; /* 0x1704B73E: je 0x1704b746 */
L_1704B740:
    eax = MEM32(esi); /* 0x1704B740: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704B742: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704B743: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704B746:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1704B746: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B752; /* 0x1704B74A: je 0x1704b752 */
L_1704B74C:
    eax = MEM32(esi); /* 0x1704B74C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704B74E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1704B74F: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1704B752:
    eax = MEM32(ebp + (-0x4)); /* 0x1704B752: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704B755: pop edi */
    esi = POP32_VAL(esp); /* 0x1704B756: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704B757: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704B758: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x1704B759: ret 0x34 */
L_1704B75C:
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704B75C: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704B75F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_1704B7B2; /* 0x1704B75F: jbe 0x1704b7b2 */
L_1704B761:
    eax = MEM32(ebp + 0x8); /* 0x1704B761: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1704B764: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1704B766: push ecx */
    PUSH32(esp, ebx); /* 0x1704B767: push ebx */
    PUSH32(esp, eax); /* 0x1704B768: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x1704B769: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B76C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704B76E: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B719; /* 0x1704B771: jl 0x1704b719 */
L_1704B773:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704B773: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704B775: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B7C4; /* 0x1704B778: je 0x1704b7c4 */
L_1704B77A:
    eax = MEM32(ebp + 0x10); /* 0x1704B77A: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0x8)); /* 0x1704B77D: mov esi, dword ptr [ebp - 8] */
    /* cmp eax, esi */ /* 0x1704B780: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B791; /* 0x1704B782: jae 0x1704b791 */
L_1704B784:
    ecx = eax + eax * 4; /* 0x1704B784: lea ecx, [eax + eax*4] */
    /* cmp MEM32(ebx + ecx * 4), eax */ /* 0x1704B787: cmp dword ptr [ebx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + ecx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B791; /* 0x1704B78A: jne 0x1704b791 */
L_1704B78C:
    MEM32(ebp + 0x10) = eax; /* 0x1704B78C: mov dword ptr [ebp + 0x10], eax */
    goto L_1704B7C4; /* 0x1704B78F: jmp 0x1704b7c4 */
L_1704B791:
    /* cmp edx, esi */ /* 0x1704B791: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B7AA; /* 0x1704B793: jae 0x1704b7aa */
L_1704B795:
    ecx = ebx; /* 0x1704B795: mov ecx, ebx */
L_1704B797:
    /* cmp MEM32(ecx), eax */ /* 0x1704B797: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B7A5; /* 0x1704B799: je 0x1704b7a5 */
L_1704B79B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704B79B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1704B79C: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1704B79F: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B797; /* 0x1704B7A1: jb 0x1704b797 */
L_1704B7A3:
    goto L_1704B7A8; /* 0x1704B7A3: jmp 0x1704b7a8 */
L_1704B7A5:
    MEM32(ebp + 0x10) = edx; /* 0x1704B7A5: mov dword ptr [ebp + 0x10], edx */
L_1704B7A8:
    /* cmp edx, esi */ /* 0x1704B7A8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704B7AA:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704B719; /* 0x1704B7AA: je 0x1704b719 */
L_1704B7B0:
    goto L_1704B7C4; /* 0x1704B7B0: jmp 0x1704b7c4 */
L_1704B7B2:
    eax = MEM32(ebp + (-0x20)); /* 0x1704B7B2: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1704B7B5: mov dword ptr [ebp - 8], edi */
    MEM32(ebx + 0x4) = ecx; /* 0x1704B7B8: mov dword ptr [ebx + 4], ecx */
    MEM32(ebx + 0x8) = eax; /* 0x1704B7BB: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = ecx; /* 0x1704B7BE: mov dword ptr [ebx + 0xc], ecx */
    MEM32(ebx + 0x10) = esi; /* 0x1704B7C1: mov dword ptr [ebx + 0x10], esi */
L_1704B7C4:
    edx = MEM32(ebp + (-0x8)); /* 0x1704B7C4: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704B7C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1704B7C9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B7E3; /* 0x1704B7CB: jbe 0x1704b7e3 */
L_1704B7CD:
    eax = ebx + 0xC; /* 0x1704B7CD: lea eax, [ebx + 0xc] */
L_1704B7D0:
    ecx = MEM32(eax + 0x4); /* 0x1704B7D0: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x1704B7D3: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1704B7D5: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x1704B7D7: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704B7DD; /* 0x1704B7D9: ja 0x1704b7dd */
L_1704B7DB:
    esi = ecx; /* 0x1704B7DB: mov esi, ecx */
L_1704B7DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1704B7DD: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704B7E0: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704B7D0; /* 0x1704B7E1: jne 0x1704b7d0 */
L_1704B7E3:
    PUSH32(esp, esi); /* 0x1704B7E3: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B7E4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B7E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704B7EB: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1704B7EC: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B6FF; /* 0x1704B7EF: je 0x1704b6ff */
L_1704B7F5:
    edi = MEM32(ebp + (-0x14)); /* 0x1704B7F5: mov edi, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1704B7F8: fld dword ptr [0x17001430] */
    ecx = esi; /* 0x1704B7FE: mov ecx, esi */
    edx = ecx; /* 0x1704B800: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704B802: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704B802: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B805: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704B807: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704B809: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704B80B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704B80E: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0x18); /* 0x1704B810: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704B813: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B815: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B817: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1704B819: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x1704B81C: mov eax, dword ptr [ebp + 0x14] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704B82B; /* 0x1704B81F: jp 0x1704b82b */
L_1704B821:
    fp_push(1.0); /* 0x1704B821: fld1  */
    fp_push(0.0); /* 0x1704B823: fldz  */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704B825: fld dword ptr [eax] */
    _st[0] = -_st[0]; /* 0x1704B827: fchs  */
    goto L_1704B83E; /* 0x1704B829: jmp 0x1704b83e */
L_1704B82B:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704B82B: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704B82E: fld dword ptr [ecx] */
    _st[0] = -_st[0]; /* 0x1704B830: fchs  */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704B832: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704B835: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704B837: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704B83A: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704B83C: fsubp st(1) */
L_1704B83E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704B83E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1704B840: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B84D; /* 0x1704B843: je 0x1704b84d */
L_1704B845:
    ecx = MEM32(ebp + 0x10); /* 0x1704B845: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + 0x1; /* 0x1704B848: lea eax, [ecx + 1] */
    goto L_1704B850; /* 0x1704B84B: jmp 0x1704b850 */
L_1704B84D:
    eax = MEM32(ebp + (-0x8)); /* 0x1704B84D: mov eax, dword ptr [ebp - 8] */
L_1704B850:
    /* cmp ecx, eax */ /* 0x1704B850: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x1704B852: fchs  */
    MEM32(ebp + (-0x28)) = eax; /* 0x1704B854: mov dword ptr [ebp - 0x28], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B8B0; /* 0x1704B857: jae 0x1704b8b0 */
L_1704B859:
    edx = ecx + ecx * 4; /* 0x1704B859: lea edx, [ecx + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1704B85C: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = ebx + edx * 4 + 0x10; /* 0x1704B85E: lea edi, [ebx + edx*4 + 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x1704B862: mov dword ptr [ebp + 0xc], eax */
L_1704B865:
    edx = MEM32(edi + (-0x4)); /* 0x1704B865: mov edx, dword ptr [edi - 4] */
    esi = MEM32(edi); /* 0x1704B868: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1704B86A: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1704B86C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704B8A8; /* 0x1704B86E: jae 0x1704b8a8 */
L_1704B870:
    ebx = MEM32(ebp + (-0x50)); /* 0x1704B870: mov ebx, dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x1704B873: fld st(1) */
    eax = MEM32(ebp + (-0x88)); /* 0x1704B875: mov eax, dword ptr [ebp - 0x88] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1704B87B: imul ebx, edx */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x1704B87E: movzx eax, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x1704B882: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1704B885: add eax, ebx */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704B887: fmul dword ptr [eax + 4] */
    fp_push(_st[3]); /* 0x1704B88A: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704B88C: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704B88E: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704B890: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B892: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704B894: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704B8A0; /* 0x1704B897: jne 0x1704b8a0 */
L_1704B899:
    eax = MEM32(ebp + (-0x14)); /* 0x1704B899: mov eax, dword ptr [ebp - 0x14] */
    MEM8(edx + eax) = (uint8_t)(1); /* 0x1704B89C: mov byte ptr [edx + eax], 1 */
L_1704B8A0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704B8A0: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1704B8A1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B870; /* 0x1704B8A3: jb 0x1704b870 */
L_1704B8A5:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B8A5: mov ebx, dword ptr [ebp - 0x10] */
L_1704B8A8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x1704B8A8: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1704B8AB: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704B865; /* 0x1704B8AE: jne 0x1704b865 */
L_1704B8B0:
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x1704B8B0: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B8B3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B8B5: fstp st(0) */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1704B8B7: mov dword ptr [ebp - 0x30], ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704B8BA: fstp st(0) */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704BA1A; /* 0x1704B8BC: jae 0x1704ba1a */
L_1704B8C2:
    eax = ecx + ecx * 4; /* 0x1704B8C2: lea eax, [ecx + ecx*4] */
    edx = ebx + eax * 4 + 0x4; /* 0x1704B8C5: lea edx, [ebx + eax*4 + 4] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1704B8C9: mov dword ptr [ebp - 0x20], edx */
L_1704B8CC:
    eax = MEM32(edx); /* 0x1704B8CC: mov eax, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x1704B8CE: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704B8D1: add ecx, eax */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1704B8D3: mov edi, eax */
    /* cmp edi, ecx */ /* 0x1704B8D5: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1704B8D7: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + 0x10) = edi; /* 0x1704B8DA: mov dword ptr [ebp + 0x10], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704BA05; /* 0x1704B8DD: jae 0x1704ba05 */
L_1704B8E3:
    eax = edi + edi * 2; /* 0x1704B8E3: lea eax, [edi + edi*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1704B8E6: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1704B8E6: shl eax, 1 */
    MEM32(ebp + (-0x38)) = eax; /* 0x1704B8E8: mov dword ptr [ebp - 0x38], eax */
L_1704B8EB:
    ecx = MEM32(ebp + (-0x24)); /* 0x1704B8EB: mov ecx, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x14)); /* 0x1704B8EE: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B8F1: add eax, ecx */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x1704B8F3: movzx edx, word ptr [eax + 4] */
    esi = (uint32_t)MEM16(eax); /* 0x1704B8F7: movzx esi, word ptr [eax] */
    SET_LO8(ecx, MEM8(edx + ebx)); /* 0x1704B8FA: mov cl, byte ptr [edx + ebx] */
    /* cmp MEM8(esi + ebx), LO8(ecx) */ /* 0x1704B8FD: cmp byte ptr [esi + ebx], cl */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B912; /* 0x1704B900: jne 0x1704b912 */
L_1704B902:
    edi = (uint32_t)MEM16(eax + 0x2); /* 0x1704B902: movzx edi, word ptr [eax + 2] */
    /* cmp MEM8(edi + ebx), LO8(ecx) */ /* 0x1704B906: cmp byte ptr [edi + ebx], cl */
    _flag_a = (uint32_t)(MEM8(edi + ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + 0x10); /* 0x1704B909: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B9E9; /* 0x1704B90C: je 0x1704b9e9 */
L_1704B912:
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x1704B912: movzx eax, word ptr [eax + 2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x50))); /* 0x1704B916: imul eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x88)); /* 0x1704B91A: mov ecx, dword ptr [ebp - 0x88] */
    ecx = (uint32_t)MEM16(ecx + 0x2); /* 0x1704B920: movzx ecx, word ptr [ecx + 2] */
    ebx = ebp + 0xC; /* 0x1704B924: lea ebx, [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704B927: push ebx */
    ebx = ebp + (-0x34); /* 0x1704B928: lea ebx, [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x1704B92B: push ebx */
    ebx = ebp + (-0x3C); /* 0x1704B92C: lea ebx, [ebp - 0x3c] */
    PUSH32(esp, ebx); /* 0x1704B92F: push ebx */
    ebx = MEM32(ebp + (-0x50)); /* 0x1704B930: mov ebx, dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704B933: push dword ptr [ebp + 0x18] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1704B936: imul ebx, edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704B939: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B93C: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1704B93E: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1704B941: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0xC)); /* 0x1704B943: add ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1704B946: push ebx */
    PUSH32(esp, eax); /* 0x1704B947: push eax */
    eax = MEM32(ebp + (-0x50)); /* 0x1704B948: mov eax, dword ptr [ebp - 0x50] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1704B94B: imul eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704B94E: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1704B950: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1704B953: push eax */
    RECOMP_CALL(sub_1704AEAF); /* 0x1704B954: call 0x1704aeaf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704B959: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B9E9; /* 0x1704B95B: je 0x1704b9e9 */
L_1704B961:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704B961: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x2C))); /* 0x1704B964: fcomp dword ptr [ebp - 0x2c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704B967: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704B969: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704B98C; /* 0x1704B96C: jp 0x1704b98c */
L_1704B96E:
    eax = MEM32(ebp + (-0x3C)); /* 0x1704B96E: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1704B971: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1704B974: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1704B977: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x1704B97A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1704B97D: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1704B980: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x48)) = edi; /* 0x1704B983: mov dword ptr [ebp - 0x48], edi */
    MEM32(eax) = 1; /* 0x1704B986: mov dword ptr [eax], 1 */
L_1704B98C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704B98C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x30), ebx */ /* 0x1704B98E: cmp dword ptr [ebp + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B9E6; /* 0x1704B991: je 0x1704b9e6 */
L_1704B993:
    esi = MEM32(ebp + (-0x1C)); /* 0x1704B993: mov esi, dword ptr [ebp - 0x1c] */
    /* cmp esi, ebx */ /* 0x1704B996: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B99F; /* 0x1704B998: je 0x1704b99f */
L_1704B99A:
    /* cmp MEM32(esi), 0x3Fu */ /* 0x1704B99A: cmp dword ptr [esi], 0x3f */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704B9C7; /* 0x1704B99D: jne 0x1704b9c7 */
L_1704B99F:
    PUSH32(esp, 0x3F8u); /* 0x1704B99F: push 0x3f8 */
    RECOMP_CALL(sub_1721B01C); /* 0x1704B9A4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704B9A9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704B9AB: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704B9B5; /* 0x1704B9AC: je 0x1704b9b5 */
L_1704B9AE:
    MEM32(eax) = ebx; /* 0x1704B9AE: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = ebx; /* 0x1704B9B0: mov dword ptr [eax + 4], ebx */
    goto L_1704B9B7; /* 0x1704B9B3: jmp 0x1704b9b7 */
L_1704B9B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704B9B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704B9B7:
    /* cmp eax, ebx */ /* 0x1704B9B7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BAC6; /* 0x1704B9B9: je 0x1704bac6 */
L_1704B9BF:
    MEM32(eax + 0x4) = esi; /* 0x1704B9BF: mov dword ptr [eax + 4], esi */
    esi = eax; /* 0x1704B9C2: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1704B9C4: mov dword ptr [ebp - 0x1c], esi */
L_1704B9C7:
    eax = MEM32(esi); /* 0x1704B9C7: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1704B9C9: mov ecx, dword ptr [ebp - 0x3c] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704B9CC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704B9CC: shl eax, 4 */
    eax = eax + esi + 0x8; /* 0x1704B9CF: lea eax, [eax + esi + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1704B9D3: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x1704B9D6: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x8) = ecx; /* 0x1704B9D9: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1704B9DC: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x1704B9DF: mov dword ptr [eax], edi */
    MEM32(eax + 0xC) = ecx; /* 0x1704B9E1: mov dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1704B9E4: inc dword ptr [esi] */
    _flag_k = FK_INC;
L_1704B9E6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1704B9E6: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
L_1704B9E9:
    eax = MEM32(ebp + (-0x38)); /* 0x1704B9E9: mov eax, dword ptr [ebp - 0x38] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1704B9EC: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704B9EF: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x1704B9F0: add eax, 6 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x40)) */ /* 0x1704B9F3: cmp edi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x1704B9F6: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x38)) = eax; /* 0x1704B9F9: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B8EB; /* 0x1704B9FC: jb 0x1704b8eb */
L_1704BA02:
    edx = MEM32(ebp + (-0x20)); /* 0x1704BA02: mov edx, dword ptr [ebp - 0x20] */
L_1704BA05:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x1704BA05: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x30)); /* 0x1704BA08: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1704BA0B: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x28)) */ /* 0x1704BA0E: cmp eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x1704BA11: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704B8CC; /* 0x1704BA14: jb 0x1704b8cc */
L_1704BA1A:
    eax = MEM32(ebp + 0x1C); /* 0x1704BA1A: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(eax), 1 */ /* 0x1704BA1D: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BAB1; /* 0x1704BA20: jne 0x1704bab1 */
L_1704BA26:
    eax = MEM32(ebp + 0x20); /* 0x1704BA26: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x1704BA29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BA32; /* 0x1704BA2B: je 0x1704ba32 */
L_1704BA2D:
    ecx = MEM32(ebp + (-0x48)); /* 0x1704BA2D: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(eax) = ecx; /* 0x1704BA30: mov dword ptr [eax], ecx */
L_1704BA32:
    eax = MEM32(ebp + 0x24); /* 0x1704BA32: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1704BA35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BA3E; /* 0x1704BA37: je 0x1704ba3e */
L_1704BA39:
    ecx = MEM32(ebp + (-0x4C)); /* 0x1704BA39: mov ecx, dword ptr [ebp - 0x4c] */
    MEM32(eax) = ecx; /* 0x1704BA3C: mov dword ptr [eax], ecx */
L_1704BA3E:
    eax = MEM32(ebp + 0x28); /* 0x1704BA3E: mov eax, dword ptr [ebp + 0x28] */
    /* test eax, eax */ /* 0x1704BA41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BA4A; /* 0x1704BA43: je 0x1704ba4a */
L_1704BA45:
    ecx = MEM32(ebp + (-0x44)); /* 0x1704BA45: mov ecx, dword ptr [ebp - 0x44] */
    MEM32(eax) = ecx; /* 0x1704BA48: mov dword ptr [eax], ecx */
L_1704BA4A:
    eax = MEM32(ebp + 0x2C); /* 0x1704BA4A: mov eax, dword ptr [ebp + 0x2c] */
    /* test eax, eax */ /* 0x1704BA4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BA56; /* 0x1704BA4F: je 0x1704ba56 */
L_1704BA51:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1704BA51: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x1704BA54: mov dword ptr [eax], ecx */
L_1704BA56:
    /* cmp MEM32(ebp + 0x30), 0 */ /* 0x1704BA56: cmp dword ptr [ebp + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BAB1; /* 0x1704BA5A: je 0x1704bab1 */
L_1704BA5C:
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1704BA5C: push dword ptr [ebp + 0x30] */
    eax = MEM32(ebp + (-0x18)); /* 0x1704BA5F: mov eax, dword ptr [ebp - 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704BA62: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704BA62: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1704BA65: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x1704BA66: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704BA6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704BA6D: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704B719; /* 0x1704BA70: jl 0x1704b719 */
L_1704BA76:
    eax = MEM32(ebp + 0x30); /* 0x1704BA76: mov eax, dword ptr [ebp + 0x30] */
    eax = MEM32(eax); /* 0x1704BA79: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1704BA7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704BA7D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1704BA7E: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1704BA81: mov edx, dword ptr [ebp - 0x1c] */
    /* test edx, edx */ /* 0x1704BA84: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BAB1; /* 0x1704BA86: je 0x1704bab1 */
L_1704BA88:
    ecx = MEM32(edx); /* 0x1704BA88: mov ecx, dword ptr [edx] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1704BA8A: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1704BA8A: shl ecx, 4 */
    ebx = ecx; /* 0x1704BA8D: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704BA8F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704BA8F: shr ecx, 2 */
    esi = edx + 0x8; /* 0x1704BA92: lea esi, [edx + 8] */
    edi = eax; /* 0x1704BA95: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704BA97: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1704BA99: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704BA9B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704BA9E: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(edx); /* 0x1704BAA0: mov ecx, dword ptr [edx] */
    edx = MEM32(edx + 0x4); /* 0x1704BAA2: mov edx, dword ptr [edx + 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1704BAA5: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1704BAA5: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704BAA8: add eax, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1704BAAA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BA88; /* 0x1704BAAC: jne 0x1704ba88 */
L_1704BAAE:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704BAAE: mov ebx, dword ptr [ebp - 0x10] */
L_1704BAB1:
    eax = MEM32(ebp + 0x34); /* 0x1704BAB1: mov eax, dword ptr [ebp + 0x34] */
    /* test eax, eax */ /* 0x1704BAB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704B719; /* 0x1704BAB6: je 0x1704b719 */
L_1704BABC:
    ecx = MEM32(ebp + (-0x18)); /* 0x1704BABC: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x1704BABF: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1704B719; /* 0x1704BAC1: jmp 0x1704b719 */
L_1704BAC6:
    ebx = MEM32(ebp + (-0x10)); /* 0x1704BAC6: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704BAC9: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1704B719; /* 0x1704BAD0: jmp 0x1704b719 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704BADA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BADAu);

L_1704BADA:
    edi = edi; /* 0x1704BADA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BADC: push ebp */
    ebp = esp; /* 0x1704BADD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704BADF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704BAE0: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1704BAE3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BAEE; /* 0x1704BAE5: jne 0x1704baee */
L_1704BAE7:
    eax = 0x8876086Cu; /* 0x1704BAE7: mov eax, 0x8876086c */
    goto L_1704BB26; /* 0x1704BAEC: jmp 0x1704bb26 */
L_1704BAEE:
    eax = MEM32(esi); /* 0x1704BAEE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704BAF0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704BAF1: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x1704BAF4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1704BAF6: push 0 */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1704BAF8: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1704BAFB: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1704BAFE: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1704BB01: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1704BB04: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704BB07: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704BB0A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704BB0D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704BB10: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1704BB13: push -1 */
    PUSH32(esp, 0); /* 0x1704BB15: push 0 */
    PUSH32(esp, esi); /* 0x1704BB17: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BB21; /* 0x1704BB18: je 0x1704bb21 */
L_1704BB1A:
    RECOMP_CALL(sub_1704B0F7); /* 0x1704BB1A: call 0x1704b0f7 */
    RECOMP_FLAGS_IN();
    goto L_1704BB26; /* 0x1704BB1F: jmp 0x1704bb26 */
L_1704BB21:
    RECOMP_CALL(sub_1704B5E7); /* 0x1704BB21: call 0x1704b5e7 */
    RECOMP_FLAGS_IN();
L_1704BB26:
    esi = POP32_VAL(esp); /* 0x1704BB26: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704BB27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x1704BB28: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_1704BB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BB30u);

L_1704BB30:
    edi = edi; /* 0x1704BB30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BB32: push ebp */
    ebp = esp; /* 0x1704BB33: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704BB35: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704BB36: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1704BB39: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BB44; /* 0x1704BB3B: jne 0x1704bb44 */
L_1704BB3D:
    eax = 0x8876086Cu; /* 0x1704BB3D: mov eax, 0x8876086c */
    goto L_1704BB7D; /* 0x1704BB42: jmp 0x1704bb7d */
L_1704BB44:
    eax = MEM32(esi); /* 0x1704BB44: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704BB46: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704BB47: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x1704BB4A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1704BB4C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1704BB4E: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1704BB51: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1704BB54: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1704BB57: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1704BB5A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1704BB5D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704BB60: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704BB63: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704BB66: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704BB69: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1704BB6C: push 1 */
    PUSH32(esp, esi); /* 0x1704BB6E: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704BB78; /* 0x1704BB6F: je 0x1704bb78 */
L_1704BB71:
    RECOMP_CALL(sub_1704B0F7); /* 0x1704BB71: call 0x1704b0f7 */
    RECOMP_FLAGS_IN();
    goto L_1704BB7D; /* 0x1704BB76: jmp 0x1704bb7d */
L_1704BB78:
    RECOMP_CALL(sub_1704B5E7); /* 0x1704BB78: call 0x1704b5e7 */
    RECOMP_FLAGS_IN();
L_1704BB7D:
    esi = POP32_VAL(esp); /* 0x1704BB7D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704BB7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x1704BB7F: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_1704BB87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BB87u);

L_1704BB87:
    edi = edi; /* 0x1704BB87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BB89: push ebp */
    ebp = esp; /* 0x1704BB8A: mov ebp, esp */
    eax = ecx; /* 0x1704BB8C: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1704BB8E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1704BB91: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 0xFFFFFFFFu; /* 0x1704BB94: or dword ptr [eax + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x1704BB98: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0; /* 0x1704BB9C: and dword ptr [eax + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0; /* 0x1704BBA0: and dword ptr [eax + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x14) = ecx; /* 0x1704BBA4: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1704BBA7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x18) = ecx; /* 0x1704BBAA: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1704BBAD: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x1C) = ecx; /* 0x1704BBB0: mov dword ptr [eax + 0x1c], ecx */
    ebp = POP32_VAL(esp); /* 0x1704BBB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704BBB4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704BBBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BBBCu);

L_1704BBBC:
    edi = edi; /* 0x1704BBBC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BBBE: push ebp */
    ebp = esp; /* 0x1704BBBF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704BBC1: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x1C), 2 */ /* 0x1704BBC4: cmp dword ptr [ecx + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x18); /* 0x1704BBC8: mov ecx, dword ptr [ecx + 0x18] */
    eax = eax + eax * 2; /* 0x1704BBCB: lea eax, [eax + eax*2] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BBEC; /* 0x1704BBCE: jne 0x1704bbec */
L_1704BBD0:
    eax = ecx + eax * 2; /* 0x1704BBD0: lea eax, [ecx + eax*2] */
    ecx = (uint32_t)MEM16(eax); /* 0x1704BBD3: movzx ecx, word ptr [eax] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1704BBD6: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BBF6; /* 0x1704BBD9: je 0x1704bbf6 */
L_1704BBDB:
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x1704BBDB: movzx eax, word ptr [eax + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704BBDF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704BBE1: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BBE4: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704BBE7: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1704BBE8: mov eax, ecx */
    goto L_1704BC05; /* 0x1704BBEA: jmp 0x1704bc05 */
L_1704BBEC:
    eax = ecx + eax * 4; /* 0x1704BBEC: lea eax, [ecx + eax*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1704BBEF: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), ecx */ /* 0x1704BBF2: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BBFA; /* 0x1704BBF4: jne 0x1704bbfa */
L_1704BBF6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704BBF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704BC05; /* 0x1704BBF8: jmp 0x1704bc05 */
L_1704BBFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BBFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x1704BBFC: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BBFF: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704BC02: inc edx */
    _flag_k = FK_INC;
    eax = edx; /* 0x1704BC03: mov eax, edx */
L_1704BC05:
    ebp = POP32_VAL(esp); /* 0x1704BC05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704BC06: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704BC0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BC0Eu);

L_1704BC0E:
    edi = edi; /* 0x1704BC0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BC10: push ebp */
    ebp = esp; /* 0x1704BC11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704BC13: push ecx */
    PUSH32(esp, ebx); /* 0x1704BC14: push ebx */
    PUSH32(esp, esi); /* 0x1704BC15: push esi */
    esi = ecx; /* 0x1704BC16: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1704BC18: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x10); /* 0x1704BC1B: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(esi + 0x14); /* 0x1704BC1E: mov edx, dword ptr [esi + 0x14] */
    MEM32(esi + 0xC) = ecx; /* 0x1704BC21: mov dword ptr [esi + 0xc], ecx */
    ecx = ecx + eax * 2; /* 0x1704BC24: lea ecx, [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704BC27: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + ecx * 4); /* 0x1704BC29: mov ecx, dword ptr [edx + ecx*4] */
    /* cmp ecx, MEM32(esi) */ /* 0x1704BC2C: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704BC2E: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704BC2F: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x8) = ecx; /* 0x1704BC32: mov dword ptr [esi + 8], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BC8C; /* 0x1704BC35: je 0x1704bc8c */
L_1704BC37:
    PUSH32(esp, 3); /* 0x1704BC37: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704BC39: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704BC3B: pop ebx */
L_1704BC3C:
    /* cmp MEM32(esi + 0x8), 0xFFFFFFFFu */ /* 0x1704BC3C: cmp dword ptr [esi + 8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BC98; /* 0x1704BC40: jne 0x1704bc98 */
L_1704BC42:
    /* cmp MEM32(esi + 0x20), edi */ /* 0x1704BC42: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BC90; /* 0x1704BC45: je 0x1704bc90 */
L_1704BC47:
    /* cmp MEM32(esi + 0x24), edi */ /* 0x1704BC47: cmp dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BC90; /* 0x1704BC4A: jne 0x1704bc90 */
L_1704BC4C:
    eax = MEM32(esi); /* 0x1704BC4C: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1704BC4E: push dword ptr [esi + 4] */
    ecx = esi; /* 0x1704BC51: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1704BC53: push eax */
    MEM32(esi + 0x20) = edi; /* 0x1704BC54: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x8) = eax; /* 0x1704BC57: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1704BBBC); /* 0x1704BC5A: call 0x1704bbbc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BC5F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BC60: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BC61: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1704BC63: mov ecx, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704BC65: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esi + 0xC); /* 0x1704BC67: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BC6A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BC6B: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x10) = edx; /* 0x1704BC6C: mov dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BC6F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704BC71: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xC) = edx; /* 0x1704BC73: mov dword ptr [esi + 0xc], edx */
    eax = MEM32(esi + 0x8); /* 0x1704BC76: mov eax, dword ptr [esi + 8] */
    edx = MEM32(esi + 0x14); /* 0x1704BC79: mov edx, dword ptr [esi + 0x14] */
    ecx = eax + eax * 2; /* 0x1704BC7C: lea ecx, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x10); /* 0x1704BC7F: add ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + ecx * 4); /* 0x1704BC82: mov ecx, dword ptr [edx + ecx*4] */
    MEM32(esi + 0x8) = ecx; /* 0x1704BC85: mov dword ptr [esi + 8], ecx */
    /* cmp ecx, MEM32(esi) */ /* 0x1704BC88: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BC3C; /* 0x1704BC8A: jne 0x1704bc3c */
L_1704BC8C:
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 0xFFFFFFFFu; /* 0x1704BC8C: or dword ptr [esi + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704BC90:
    eax = MEM32(ebp + (-0x4)); /* 0x1704BC90: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704BC93: pop edi */
    esi = POP32_VAL(esp); /* 0x1704BC94: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704BC95: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704BC96: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704BC97: ret  */
L_1704BC98:
    ecx = MEM32(esi + 0x8); /* 0x1704BC98: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(esi + 0x14); /* 0x1704BC9B: mov edx, dword ptr [esi + 0x14] */
    ecx = ecx + ecx * 2; /* 0x1704BC9E: lea ecx, [ecx + ecx*2] */
    ecx = edx + ecx * 4; /* 0x1704BCA1: lea ecx, [edx + ecx*4] */
    /* cmp MEM32(ecx), eax */ /* 0x1704BCA4: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BCAD; /* 0x1704BCA6: jne 0x1704bcad */
L_1704BCA8:
    MEM32(esi + 0x10) = edi; /* 0x1704BCA8: mov dword ptr [esi + 0x10], edi */
    goto L_1704BCB9; /* 0x1704BCAB: jmp 0x1704bcb9 */
L_1704BCAD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BCAD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1704BCAF: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BCB2: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704BCB5: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x10) = edx; /* 0x1704BCB6: mov dword ptr [esi + 0x10], edx */
L_1704BCB9:
    eax = MEM32(esi + 0x10); /* 0x1704BCB9: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BCBC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BCBE: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x20), edi */ /* 0x1704BCBF: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BCCB; /* 0x1704BCC2: je 0x1704bccb */
L_1704BCC4:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1704BCC4: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x10) = edx; /* 0x1704BCC6: mov dword ptr [esi + 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_1704BC90; /* 0x1704BCC9: jmp 0x1704bc90 */
L_1704BCCB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BCCB: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1704BCC4; /* 0x1704BCCC: jmp 0x1704bcc4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704BCD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BCD3u);

L_1704BCD3:
    edi = edi; /* 0x1704BCD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BCD5: push ebp */
    ebp = esp; /* 0x1704BCD6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704BCD8: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704BCDB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704BCDF: push ebx */
    PUSH32(esp, esi); /* 0x1704BCE0: push esi */
    PUSH32(esp, edi); /* 0x1704BCE1: push edi */
    esi = ecx; /* 0x1704BCE2: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1704BCE4: push dword ptr [esi + 4] */
    edi = MEM32(esi); /* 0x1704BCE7: mov edi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1704BCE9: push edi */
    MEM32(esi + 0x8) = edi; /* 0x1704BCEA: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_1704BBBC); /* 0x1704BCED: call 0x1704bbbc */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1704BCF2: mov ebx, eax */
    PUSH32(esp, 3); /* 0x1704BCF4: push 3 */
    ecx = POP32_VAL(esp); /* 0x1704BCF6: pop ecx */
    eax = ebx + 0x2; /* 0x1704BCF7: lea eax, [ebx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BCFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704BCFC: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x14); /* 0x1704BCFE: mov ecx, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704BD01: mov dword ptr [ebp - 0xc], ebx */
    MEM32(esi + 0x10) = edx; /* 0x1704BD04: mov dword ptr [esi + 0x10], edx */
L_1704BD07:
    eax = MEM32(esi + 0x8); /* 0x1704BD07: mov eax, dword ptr [esi + 8] */
    edx = eax; /* 0x1704BD0A: mov edx, eax */
    eax = eax + eax * 2; /* 0x1704BD0C: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x1704BD0F: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x1704BD12: mov dword ptr [ebp - 8], edx */
    eax = MEM32(ecx + eax * 4); /* 0x1704BD15: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1704BD18: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x8) = eax; /* 0x1704BD1B: mov dword ptr [esi + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BD51; /* 0x1704BD1E: je 0x1704bd51 */
L_1704BD20:
    eax = eax + eax * 2; /* 0x1704BD20: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1704BD23: lea eax, [ecx + eax*4] */
    /* cmp MEM32(eax), edx */ /* 0x1704BD26: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BD30; /* 0x1704BD28: jne 0x1704bd30 */
L_1704BD2A:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1704BD2A: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704BD3C; /* 0x1704BD2E: jmp 0x1704bd3c */
L_1704BD30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704BD30: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x4), edx */ /* 0x1704BD32: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BD35: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704BD38: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi + 0x10) = ebx; /* 0x1704BD39: mov dword ptr [esi + 0x10], ebx */
L_1704BD3C:
    eax = MEM32(esi + 0x10); /* 0x1704BD3C: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BD3F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1704BD40: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BD42: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704BD44: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BD45: inc eax */
    _flag_k = FK_INC;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1704BD46: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = MEM32(ebp + (-0xC)); /* 0x1704BD48: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x10) = edx; /* 0x1704BD4B: mov dword ptr [esi + 0x10], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x1704BD4E: mov edx, dword ptr [ebp - 8] */
L_1704BD51:
    eax = MEM32(esi + 0x8); /* 0x1704BD51: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x1704BD54: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BD5D; /* 0x1704BD56: je 0x1704bd5d */
L_1704BD58:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1704BD58: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BD07; /* 0x1704BD5B: jne 0x1704bd07 */
L_1704BD5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704BD5D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704BD5F: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x8), 0xFFFFFFFFu */ /* 0x1704BD60: cmp dword ptr [esi + 8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BD99; /* 0x1704BD64: jne 0x1704bd99 */
L_1704BD66:
    eax = MEM32(esi + 0x10); /* 0x1704BD66: mov eax, dword ptr [esi + 0x10] */
    MEM32(esi + 0x8) = edx; /* 0x1704BD69: mov dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BD6C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BD6D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1704BD6F: push 3 */
    edi = POP32_VAL(esp); /* 0x1704BD71: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1704BD72: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esi + 0x8); /* 0x1704BD74: mov eax, dword ptr [esi + 8] */
    MEM32(esi + 0x10) = edx; /* 0x1704BD77: mov dword ptr [esi + 0x10], edx */
    edx = edx + eax * 2; /* 0x1704BD7A: lea edx, [edx + eax*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1704BD7D: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x1C), 2 */ /* 0x1704BD7F: cmp dword ptr [esi + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x18); /* 0x1704BD83: mov eax, dword ptr [esi + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BD8E; /* 0x1704BD86: jne 0x1704bd8e */
L_1704BD88:
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x1704BD88: movzx eax, word ptr [eax + edx*2] */
    goto L_1704BD91; /* 0x1704BD8C: jmp 0x1704bd91 */
L_1704BD8E:
    eax = MEM32(eax + edx * 4); /* 0x1704BD8E: mov eax, dword ptr [eax + edx*4] */
L_1704BD91:
    MEM32(esi + 0x4) = eax; /* 0x1704BD91: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1704BD94: mov dword ptr [ebp - 4], ecx */
    goto L_1704BD9C; /* 0x1704BD97: jmp 0x1704bd9c */
L_1704BD99:
    MEM32(esi + 0x10) = ebx; /* 0x1704BD99: mov dword ptr [esi + 0x10], ebx */
L_1704BD9C:
    eax = MEM32(esi + 0x10); /* 0x1704BD9C: mov eax, dword ptr [esi + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x1704BD9F: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi + 0x8); /* 0x1704BDA2: mov eax, dword ptr [esi + 8] */
    edi = POP32_VAL(esp); /* 0x1704BDA5: pop edi */
    MEM32(esi) = eax; /* 0x1704BDA6: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704BDA8: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x20) = ecx; /* 0x1704BDAB: mov dword ptr [esi + 0x20], ecx */
    esi = POP32_VAL(esp); /* 0x1704BDAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704BDAF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704BDB0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704BDB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704BDB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BDB7u);

L_1704BDB7:
    edi = edi; /* 0x1704BDB7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BDB9: push ebp */
    ebp = esp; /* 0x1704BDBA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704BDBC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1704BDBF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704BDC1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1704BDC2: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x1704BDC5: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704BDC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1704BDCA: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704BE2E; /* 0x1704BDCD: jbe 0x1704be2e */
L_1704BDCF:
    PUSH32(esp, ebx); /* 0x1704BDCF: push ebx */
    PUSH32(esp, esi); /* 0x1704BDD0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704BDD1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1704BDD4: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1704BDD5: add esi, 4 */
    _flag_k = FK_ADD;
L_1704BDD8:
    edx = MEM32(esi); /* 0x1704BDD8: mov edx, dword ptr [esi] */
    edi = esi + (-0x4); /* 0x1704BDDA: lea edi, [esi - 4] */
    ecx = MEM32(edi); /* 0x1704BDDD: mov ecx, dword ptr [edi] */
    /* cmp ecx, edx */ /* 0x1704BDDF: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BDF7; /* 0x1704BDE1: je 0x1704bdf7 */
L_1704BDE3:
    ebx = MEM32(esi + 0x4); /* 0x1704BDE3: mov ebx, dword ptr [esi + 4] */
    /* cmp ecx, ebx */ /* 0x1704BDE6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BDEE; /* 0x1704BDE8: je 0x1704bdee */
L_1704BDEA:
    /* cmp edx, ebx */ /* 0x1704BDEA: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BE22; /* 0x1704BDEC: jne 0x1704be22 */
L_1704BDEE:
    /* cmp ecx, edx */ /* 0x1704BDEE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BDF7; /* 0x1704BDF0: je 0x1704bdf7 */
L_1704BDF2:
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x1704BDF2: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BDF9; /* 0x1704BDF5: jne 0x1704bdf9 */
L_1704BDF7:
    edx = ecx; /* 0x1704BDF7: mov edx, ecx */
L_1704BDF9:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1704BDF9: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BE22; /* 0x1704BDFC: je 0x1704be22 */
L_1704BDFE:
    ebx = MEM32(ebp + 0xC); /* 0x1704BDFE: mov ebx, dword ptr [ebp + 0xc] */
    ecx = edx + edx * 2; /* 0x1704BE01: lea ecx, [edx + edx*2] */
    ecx = ebx + ecx * 4; /* 0x1704BE04: lea ecx, [ebx + ecx*4] */
    PUSH32(esp, 3); /* 0x1704BE07: push 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1704BE09: sub edi, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1704BE0B: pop ebx */
L_1704BE0C:
    /* cmp MEM32(edi + ecx), edx */ /* 0x1704BE0C: cmp dword ptr [edi + ecx], edx */
    _flag_a = (uint32_t)(MEM32(edi + ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BE15; /* 0x1704BE0F: jne 0x1704be15 */
L_1704BE11:
    _flag_a = (uint32_t)((MEM32(edi + ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + ecx) | 0xFFFFFFFFu));
    MEM32(edi + ecx) = MEM32(edi + ecx) | 0xFFFFFFFFu; /* 0x1704BE11: or dword ptr [edi + ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704BE15:
    /* cmp MEM32(ecx), eax */ /* 0x1704BE15: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BE1C; /* 0x1704BE17: jne 0x1704be1c */
L_1704BE19:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x1704BE19: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704BE1C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704BE1C: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1704BE1F: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704BE0C; /* 0x1704BE20: jne 0x1704be0c */
L_1704BE22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704BE22: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1704BE23: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1704BE26: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704BDD8; /* 0x1704BE29: jb 0x1704bdd8 */
L_1704BE2B:
    edi = POP32_VAL(esp); /* 0x1704BE2B: pop edi */
    esi = POP32_VAL(esp); /* 0x1704BE2C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704BE2D: pop ebx */
L_1704BE2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704BE2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1704BE30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704BE31: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704BE39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BE39u);

L_1704BE39:
    edi = edi; /* 0x1704BE39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BE3B: push ebp */
    ebp = esp; /* 0x1704BE3C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704BE3E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704BE41: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704BE42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1704BE44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BE4F; /* 0x1704BE46: jne 0x1704be4f */
L_1704BE48:
    ebx = 0x80070057u; /* 0x1704BE48: mov ebx, 0x80070057 */
    goto L_1704BE7E; /* 0x1704BE4D: jmp 0x1704be7e */
L_1704BE4F:
    PUSH32(esp, esi); /* 0x1704BE4F: push esi */
    PUSH32(esp, edi); /* 0x1704BE50: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704BE51: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x1704BE54: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704BE57: push dword ptr [ebp + 0x10] */
    esi = eax + (-0x1); /* 0x1704BE5A: lea esi, [eax - 1] */
    PUSH32(esp, esi); /* 0x1704BE5D: push esi */
    PUSH32(esp, edi); /* 0x1704BE5E: push edi */
    RECOMP_CALL(sub_1721B198); /* 0x1704BE5F: call 0x1721b198 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704BE64: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1704BE67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704BE73; /* 0x1704BE69: jl 0x1704be73 */
L_1704BE6B:
    /* cmp eax, esi */ /* 0x1704BE6B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704BE73; /* 0x1704BE6D: ja 0x1704be73 */
L_1704BE6F:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BE7C; /* 0x1704BE6F: jne 0x1704be7c */
L_1704BE71:
    goto L_1704BE78; /* 0x1704BE71: jmp 0x1704be78 */
L_1704BE73:
    ebx = 0x8007007Au; /* 0x1704BE73: mov ebx, 0x8007007a */
L_1704BE78:
    MEM8(esi + edi) = (uint8_t)(0); /* 0x1704BE78: mov byte ptr [esi + edi], 0 */
L_1704BE7C:
    edi = POP32_VAL(esp); /* 0x1704BE7C: pop edi */
    esi = POP32_VAL(esp); /* 0x1704BE7D: pop esi */
L_1704BE7E:
    eax = ebx; /* 0x1704BE7E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1704BE80: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704BE81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704BE82: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704BE8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BE8Au);

L_1704BE8A:
    edi = edi; /* 0x1704BE8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BE8C: push ebp */
    ebp = esp; /* 0x1704BE8D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704BE8F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BE92: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x10), 2 */ /* 0x1704BE94: cmp byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x1704BE98: push esi */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BE99: setne dl */
    PUSH32(esp, edi); /* 0x1704BE9C: push edi */
    esi = ecx; /* 0x1704BE9D: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1704BE9F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1704BEA2: push ecx */
    MEM32(esi + 0x4) = ecx; /* 0x1704BEA3: mov dword ptr [esi + 4], ecx */
    PUSH32(esp, eax); /* 0x1704BEA6: push eax */
    edi = edx; /* 0x1704BEA7: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BEA9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x10), LO8(edx) */ /* 0x1704BEAB: cmp byte ptr [ebp + 0x10], dl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x1704BEAE: mov ecx, esi */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704BEB0: setne dl */
    MEM32(esi) = eax; /* 0x1704BEB3: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = eax; /* 0x1704BEB5: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x20) = edi; /* 0x1704BEB8: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x24) = edx; /* 0x1704BEBB: mov dword ptr [esi + 0x24], edx */
    RECOMP_CALL(sub_1704BBBC); /* 0x1704BEBE: call 0x1704bbbc */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1704BEC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x1704BEC5: mov dword ptr [esi + 0x10], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BED7; /* 0x1704BEC8: jne 0x1704bed7 */
L_1704BECA:
    PUSH32(esp, 3); /* 0x1704BECA: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1704BECC: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704BECF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704BED1: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704BED2: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x10) = edx; /* 0x1704BED4: mov dword ptr [esi + 0x10], edx */
L_1704BED7:
    eax = MEM32(esi + 0x10); /* 0x1704BED7: mov eax, dword ptr [esi + 0x10] */
    edi = POP32_VAL(esp); /* 0x1704BEDA: pop edi */
    MEM32(esi + 0xC) = eax; /* 0x1704BEDB: mov dword ptr [esi + 0xc], eax */
    esi = POP32_VAL(esp); /* 0x1704BEDE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704BEDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704BEE0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704BEE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BEE8u);

    goto L_1704BEE8;
L_1704BE39:
    edi = edi; /* 0x1704BE39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BE3B: push ebp */
    ebp = esp; /* 0x1704BE3C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704BE3E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704BE41: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704BE42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1704BE44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704BE4F; /* 0x1704BE46: jne 0x1704be4f */
L_1704BE48:
    ebx = 0x80070057u; /* 0x1704BE48: mov ebx, 0x80070057 */
    goto L_1704BE7E; /* 0x1704BE4D: jmp 0x1704be7e */
L_1704BE4F:
    PUSH32(esp, esi); /* 0x1704BE4F: push esi */
    PUSH32(esp, edi); /* 0x1704BE50: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704BE51: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x1704BE54: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704BE57: push dword ptr [ebp + 0x10] */
    esi = eax + (-0x1); /* 0x1704BE5A: lea esi, [eax - 1] */
    PUSH32(esp, esi); /* 0x1704BE5D: push esi */
    PUSH32(esp, edi); /* 0x1704BE5E: push edi */
    RECOMP_CALL(sub_1721B198); /* 0x1704BE5F: call 0x1721b198 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704BE64: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1704BE67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704BE73; /* 0x1704BE69: jl 0x1704be73 */
L_1704BE6B:
    /* cmp eax, esi */ /* 0x1704BE6B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704BE73; /* 0x1704BE6D: ja 0x1704be73 */
L_1704BE6F:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BE7C; /* 0x1704BE6F: jne 0x1704be7c */
L_1704BE71:
    goto L_1704BE78; /* 0x1704BE71: jmp 0x1704be78 */
L_1704BE73:
    ebx = 0x8007007Au; /* 0x1704BE73: mov ebx, 0x8007007a */
L_1704BE78:
    MEM8(esi + edi) = (uint8_t)(0); /* 0x1704BE78: mov byte ptr [esi + edi], 0 */
L_1704BE7C:
    edi = POP32_VAL(esp); /* 0x1704BE7C: pop edi */
    esi = POP32_VAL(esp); /* 0x1704BE7D: pop esi */
L_1704BE7E:
    eax = ebx; /* 0x1704BE7E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1704BE80: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704BE81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704BE82: ret 0x10 */
L_1704BEE8:
    edi = edi; /* 0x1704BEE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BEEA: push ebp */
    ebp = esp; /* 0x1704BEEB: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0x7FFFFFFFu */ /* 0x1704BEED: cmp dword ptr [ebp + 0xc], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704BEFF; /* 0x1704BEF4: jbe 0x1704beff */
L_1704BEF6:
    eax = 0x80070057u; /* 0x1704BEF6: mov eax, 0x80070057 */
    ebp = POP32_VAL(esp); /* 0x1704BEFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704BEFC: ret 0x10 */
L_1704BEFF:
    ebp = POP32_VAL(esp); /* 0x1704BEFF: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1704BE39; /* 0x1704BF00: jmp 0x1704be39 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704BF0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BF0Au);

L_1704BF0A:
    edi = edi; /* 0x1704BF0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BF0C: push ebp */
    ebp = esp; /* 0x1704BF0D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x1704BF0F: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1704BF15: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704BF1A: mov dword ptr [ebp - 4], eax */
    eax = ebp + 0x10; /* 0x1704BF1D: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1704BF20: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704BF21: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x104); /* 0x1704BF24: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x1704BF2A: push 0x100 */
    PUSH32(esp, eax); /* 0x1704BF2F: push eax */
    RECOMP_CALL(sub_1704BE39); /* 0x1704BF30: call 0x1704be39 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1704BF35: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x104); /* 0x1704BF38: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1704BF3E: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x1704BF3F: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_1721B8B9); /* 0x1704BF43: call 0x1721b8b9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1704BF48: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x1704BF4B: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704BF50: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704BF51: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704BF57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704BF57u);

L_1704BF57:
    edi = edi; /* 0x1704BF57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704BF59: push ebp */
    ebp = esp; /* 0x1704BF5A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704BF5C: push ecx */
    PUSH32(esp, ecx); /* 0x1704BF5D: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704BF5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1704BF60: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704BF63: mov dword ptr [ebp - 4], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704C0AA; /* 0x1704BF66: jbe 0x1704c0aa */
L_1704BF6C:
    ecx = MEM32(ebp + 0x8); /* 0x1704BF6C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704BF6F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704BF70: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704BF73: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704BF74: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1704BF77: push edi */
    MEM32(ebp + 0xC) = ecx; /* 0x1704BF78: mov dword ptr [ebp + 0xc], ecx */
L_1704BF7B:
    esi = MEM32(ebp + 0xC); /* 0x1704BF7B: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x1704BF7E: add esi, -4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x1704BF81: mov dword ptr [ebp + 8], ebx */
    edi = esi; /* 0x1704BF84: mov edi, esi */
    MEM32(ebp + (-0x8)) = 3; /* 0x1704BF86: mov dword ptr [ebp - 8], 3 */
L_1704BF8D:
    SET_LO16(edx, MEM16(edi)); /* 0x1704BF8D: mov dx, word ptr [edi] */
    ecx = (uint32_t)LO16(edx); /* 0x1704BF90: movzx ecx, dx */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1704BF93: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704BF9F; /* 0x1704BF96: jae 0x1704bf9f */
L_1704BF98:
    /* cmp LO16(edx), 0xFFFFu */ /* 0x1704BF98: cmp dx, 0xffff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704BFB8; /* 0x1704BF9D: jne 0x1704bfb8 */
L_1704BF9F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704BF9F: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704BFA2: push ecx */
    PUSH32(esp, 0x17005758u); /* 0x1704BFA3: push 0x17005758 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704BFA8: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704BFAB: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704BFB0: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = 0x88760B55u; /* 0x1704BFB3: mov eax, 0x88760b55 */
L_1704BFB8:
    ecx = MEM32(ebp + 0x8); /* 0x1704BFB8: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x1704BFBB: mov ecx, dword ptr [ecx] */
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1704BFBD: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704BFE0; /* 0x1704BFC0: jb 0x1704bfe0 */
L_1704BFC2:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704BFC2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704BFE0; /* 0x1704BFC5: je 0x1704bfe0 */
L_1704BFC7:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704BFC7: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704BFCA: push ecx */
    PUSH32(esp, 0x17005708u); /* 0x1704BFCB: push 0x17005708 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704BFD0: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704BFD3: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704BFD8: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = 0x88760B55u; /* 0x1704BFDB: mov eax, 0x88760b55 */
L_1704BFE0:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x1704BFE0: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704BFE4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704BFE5: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1704BFE6: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704BF8D; /* 0x1704BFE9: jne 0x1704bf8d */
L_1704BFEB:
    edi = MEM32(ebp + 0xC); /* 0x1704BFEB: mov edi, dword ptr [ebp + 0xc] */
    SET_LO16(ecx, MEM16(esi)); /* 0x1704BFEE: mov cx, word ptr [esi] */
    SET_LO16(edx, MEM16(edi + (-0x2))); /* 0x1704BFF1: mov dx, word ptr [edi - 2] */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1704BFF5: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C017; /* 0x1704BFF8: je 0x1704c017 */
L_1704BFFA:
    SET_LO16(esi, MEM16(edi)); /* 0x1704BFFA: mov si, word ptr [edi] */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1704BFFD: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C007; /* 0x1704C000: je 0x1704c007 */
L_1704C002:
    /* cmp LO16(edx), LO16(esi) */ /* 0x1704C002: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C033; /* 0x1704C005: jne 0x1704c033 */
L_1704C007:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1704C007: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C017; /* 0x1704C00A: je 0x1704c017 */
L_1704C00C:
    SET_LO16(eax, MEM16(edi)); /* 0x1704C00C: mov ax, word ptr [edi] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1704C00F: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (uint32_t)LO16(eax); /* 0x1704C012: movzx eax, ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C01A; /* 0x1704C015: je 0x1704c01a */
L_1704C017:
    eax = (uint32_t)LO16(ecx); /* 0x1704C017: movzx eax, cx */
L_1704C01A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C01A: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704C01D: push eax */
    PUSH32(esp, 0x170056C0u); /* 0x1704C01E: push 0x170056c0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C023: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C026: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C02B: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = 0x88760B55u; /* 0x1704C02E: mov eax, 0x88760b55 */
L_1704C033:
    ecx = MEM32(ebx); /* 0x1704C033: mov ecx, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x1704C035: mov esi, dword ptr [ebx + 4] */
    /* cmp ecx, esi */ /* 0x1704C038: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C041; /* 0x1704C03A: jne 0x1704c041 */
L_1704C03C:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C03C: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C056; /* 0x1704C03F: jne 0x1704c056 */
L_1704C041:
    edx = MEM32(ebx + 0x8); /* 0x1704C041: mov edx, dword ptr [ebx + 8] */
    /* cmp ecx, edx */ /* 0x1704C044: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C04D; /* 0x1704C046: jne 0x1704c04d */
L_1704C048:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C048: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C056; /* 0x1704C04B: jne 0x1704c056 */
L_1704C04D:
    /* cmp esi, edx */ /* 0x1704C04D: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C091; /* 0x1704C04F: jne 0x1704c091 */
L_1704C051:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1704C051: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C091; /* 0x1704C054: je 0x1704c091 */
L_1704C056:
    /* cmp ecx, esi */ /* 0x1704C056: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C05F; /* 0x1704C058: jne 0x1704c05f */
L_1704C05A:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C05A: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C06B; /* 0x1704C05D: jne 0x1704c06b */
L_1704C05F:
    /* cmp ecx, MEM32(ebx + 0x8) */ /* 0x1704C05F: cmp ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C069; /* 0x1704C062: jne 0x1704c069 */
L_1704C064:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C064: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C06B; /* 0x1704C067: jne 0x1704c06b */
L_1704C069:
    ecx = esi; /* 0x1704C069: mov ecx, esi */
L_1704C06B:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C06B: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704C06E: push ecx */
    PUSH32(esp, 0x17005668u); /* 0x1704C06F: push 0x17005668 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C074: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C077: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17005600u); /* 0x1704C07C: push 0x17005600 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C081: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C084: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1704C089: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = 0x88760B55u; /* 0x1704C08C: mov eax, 0x88760b55 */
L_1704C091:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704C091: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x4)); /* 0x1704C094: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 6; /* 0x1704C097: add dword ptr [ebp + 0xc], 6 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1704C09B: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1704C09E: mov ebx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704BF7B; /* 0x1704C0A1: jb 0x1704bf7b */
L_1704C0A7:
    edi = POP32_VAL(esp); /* 0x1704C0A7: pop edi */
    esi = POP32_VAL(esp); /* 0x1704C0A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704C0A9: pop ebx */
L_1704C0AA:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704C0AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704C0AB: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704C0B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704C0B3u);

L_1704C0B3:
    edi = edi; /* 0x1704C0B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704C0B5: push ebp */
    ebp = esp; /* 0x1704C0B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704C0B8: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C0BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1704C0BD: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704C0C0: mov dword ptr [ebp - 4], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704C1FB; /* 0x1704C0C3: jbe 0x1704c1fb */
L_1704C0C9:
    ecx = MEM32(ebp + 0x8); /* 0x1704C0C9: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1704C0CC: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704C0CF: push ebx */
    PUSH32(esp, esi); /* 0x1704C0D0: push esi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1704C0D1: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - edx; /* 0x1704C0D4: sub dword ptr [ebp - 8], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edx; /* 0x1704C0D7: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - ecx; /* 0x1704C0DA: sub dword ptr [ebp + 8], ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704C0DD: push edi */
    MEM32(ebp + 0xC) = edx; /* 0x1704C0DE: mov dword ptr [ebp + 0xc], edx */
    edi = ecx + 0x8; /* 0x1704C0E1: lea edi, [ecx + 8] */
    ebx = 0x88760B55u; /* 0x1704C0E4: mov ebx, 0x88760b55 */
L_1704C0E9:
    esi = MEM32(ebp + 0xC); /* 0x1704C0E9: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = 3; /* 0x1704C0EC: mov dword ptr [ebp - 0xc], 3 */
L_1704C0F3:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704C0F3: mov ecx, dword ptr [ebp - 8] */
    ecx = MEM32(ecx + esi); /* 0x1704C0F6: mov ecx, dword ptr [ecx + esi] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1704C0F9: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704C103; /* 0x1704C0FC: jae 0x1704c103 */
L_1704C0FE:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C0FE: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C119; /* 0x1704C101: jne 0x1704c119 */
L_1704C103:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C103: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704C106: push ecx */
    PUSH32(esp, 0x17005758u); /* 0x1704C107: push 0x17005758 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C10C: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C10F: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C114: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1704C117: mov eax, ebx */
L_1704C119:
    ecx = MEM32(esi); /* 0x1704C119: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1704C11B: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C13B; /* 0x1704C11E: jb 0x1704c13b */
L_1704C120:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C120: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C13B; /* 0x1704C123: je 0x1704c13b */
L_1704C125:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C125: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704C128: push ecx */
    PUSH32(esp, 0x17005708u); /* 0x1704C129: push 0x17005708 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C12E: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C131: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C136: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1704C139: mov eax, ebx */
L_1704C13B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1704C13B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x1704C13E: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704C0F3; /* 0x1704C141: jne 0x1704c0f3 */
L_1704C143:
    ecx = MEM32(edi + (-0x8)); /* 0x1704C143: mov ecx, dword ptr [edi - 8] */
    edx = MEM32(edi + (-0x4)); /* 0x1704C146: mov edx, dword ptr [edi - 4] */
    /* cmp ecx, edx */ /* 0x1704C149: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x1704C14B: mov dword ptr [ebp - 0xc], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C164; /* 0x1704C14E: je 0x1704c164 */
L_1704C150:
    esi = MEM32(edi); /* 0x1704C150: mov esi, dword ptr [edi] */
    /* cmp ecx, esi */ /* 0x1704C152: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C15A; /* 0x1704C154: je 0x1704c15a */
L_1704C156:
    /* cmp edx, esi */ /* 0x1704C156: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C17C; /* 0x1704C158: jne 0x1704c17c */
L_1704C15A:
    /* cmp ecx, edx */ /* 0x1704C15A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C164; /* 0x1704C15C: je 0x1704c164 */
L_1704C15E:
    eax = MEM32(edi); /* 0x1704C15E: mov eax, dword ptr [edi] */
    /* cmp edx, eax */ /* 0x1704C160: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C166; /* 0x1704C162: je 0x1704c166 */
L_1704C164:
    eax = ecx; /* 0x1704C164: mov eax, ecx */
L_1704C166:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C166: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704C169: push eax */
    PUSH32(esp, 0x170056C0u); /* 0x1704C16A: push 0x170056c0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C16F: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C172: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C177: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1704C17A: mov eax, ebx */
L_1704C17C:
    edx = MEM32(ebp + 0xC); /* 0x1704C17C: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x1704C17F: mov ecx, dword ptr [edx] */
    esi = MEM32(edx + 0x4); /* 0x1704C181: mov esi, dword ptr [edx + 4] */
    /* cmp ecx, esi */ /* 0x1704C184: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C18D; /* 0x1704C186: jne 0x1704c18d */
L_1704C188:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C188: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1A5; /* 0x1704C18B: jne 0x1704c1a5 */
L_1704C18D:
    edx = MEM32(ebp + 0x8); /* 0x1704C18D: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + edi); /* 0x1704C190: mov edx, dword ptr [edx + edi] */
    /* cmp ecx, edx */ /* 0x1704C193: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C19C; /* 0x1704C195: jne 0x1704c19c */
L_1704C197:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C197: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1A5; /* 0x1704C19A: jne 0x1704c1a5 */
L_1704C19C:
    /* cmp esi, edx */ /* 0x1704C19C: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1E0; /* 0x1704C19E: jne 0x1704c1e0 */
L_1704C1A0:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1704C1A0: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C1E0; /* 0x1704C1A3: je 0x1704c1e0 */
L_1704C1A5:
    /* cmp ecx, esi */ /* 0x1704C1A5: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1AE; /* 0x1704C1A7: jne 0x1704c1ae */
L_1704C1A9:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C1A9: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1BD; /* 0x1704C1AC: jne 0x1704c1bd */
L_1704C1AE:
    eax = MEM32(ebp + 0x8); /* 0x1704C1AE: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + edi) */ /* 0x1704C1B1: cmp ecx, dword ptr [eax + edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1BB; /* 0x1704C1B4: jne 0x1704c1bb */
L_1704C1B6:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704C1B6: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C1BD; /* 0x1704C1B9: jne 0x1704c1bd */
L_1704C1BB:
    ecx = esi; /* 0x1704C1BB: mov ecx, esi */
L_1704C1BD:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704C1BD: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1704C1C0: push ecx */
    PUSH32(esp, 0x17005668u); /* 0x1704C1C1: push 0x17005668 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C1C6: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C1C9: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17005600u); /* 0x1704C1CE: push 0x17005600 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704C1D3: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C1D6: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1704C1DB: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1704C1DE: mov eax, ebx */
L_1704C1E0:
    ecx = MEM32(ebp + (-0xC)); /* 0x1704C1E0: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704C1E3: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = ecx; /* 0x1704C1E6: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1704C1E9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1704C1EC: add edi, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1704C1EF: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C0E9; /* 0x1704C1F2: jb 0x1704c0e9 */
L_1704C1F8:
    edi = POP32_VAL(esp); /* 0x1704C1F8: pop edi */
    esi = POP32_VAL(esp); /* 0x1704C1F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704C1FA: pop ebx */
L_1704C1FB:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704C1FB: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704C1FC: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704C204(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704C204u);

L_1704C204:
    edi = edi; /* 0x1704C204: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704C206: push ebp */
    ebp = esp; /* 0x1704C207: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x1704C209: sub esp, 0x8c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704C20F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C210: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704C212: push edi */
    PUSH32(esp, 2); /* 0x1704C213: push 2 */
    PUSH32(esp, esi); /* 0x1704C215: push esi */
    PUSH32(esp, esi); /* 0x1704C216: push esi */
    ecx = ebp + (-0x64); /* 0x1704C217: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1704C21A: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1704C21D: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1704C220: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x1704C223: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1704C226: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C229: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x3C); /* 0x1704C22E: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B86C); /* 0x1704C231: call 0x1721b86c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1704C236: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, esi */ /* 0x1704C239: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C50B; /* 0x1704C23B: je 0x1704c50b */
L_1704C241:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1704C241: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C50B; /* 0x1704C244: je 0x1704c50b */
L_1704C24A:
    eax = MEM32(edi); /* 0x1704C24A: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C24C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704C24D: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test HI8(eax), 4 */ /* 0x1704C250: test ah, 4 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704C50B; /* 0x1704C253: jne 0x1704c50b */
L_1704C259:
    eax = MEM32(edi); /* 0x1704C259: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1704C25B: push ebx */
    PUSH32(esp, edi); /* 0x1704C25C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704C25D: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704C260: mov esi, eax */
    eax = MEM32(edi); /* 0x1704C262: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C264: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704C265: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1704C268: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1704C26B: push ecx */
    ebx = eax; /* 0x1704C26C: mov ebx, eax */
    eax = MEM32(edi); /* 0x1704C26E: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x1704C270: push 0 */
    PUSH32(esp, edi); /* 0x1704C272: push edi */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1704C273: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1704C276: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704C279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704C27B: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704C4B9; /* 0x1704C27E: jl 0x1704c4b9 */
L_1704C284:
    eax = ebp + (-0x3C); /* 0x1704C284: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1704C287: push eax */
    PUSH32(esp, esi); /* 0x1704C288: push esi */
    PUSH32(esp, ebx); /* 0x1704C289: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C28A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704C28D: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1704C0B3); /* 0x1704C290: call 0x1704c0b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704C295: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704C297: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704C4B9; /* 0x1704C29A: jl 0x1704c4b9 */
L_1704C2A0:
    edi = ebx + ebx * 2; /* 0x1704C2A0: lea edi, [ebx + ebx*2] */
    PUSH32(esp, edi); /* 0x1704C2A3: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C2A4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1704C2A9: mov dword ptr [ebp - 8], eax */
    eax = esi; /* 0x1704C2AC: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704C2AE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704C2AE: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704C2B1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C2B2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1704C2B7: mov dword ptr [ebp - 0x14], eax */
    eax = esi; /* 0x1704C2BA: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704C2BC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704C2BC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704C2BF: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C2C0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1704C2C5: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1704C2C6: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C2C9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704C2CE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C2D0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704C2D3: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1704C2D6: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4AF; /* 0x1704C2D9: je 0x1704c4af */
L_1704C2DF:
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1704C2DF: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4AF; /* 0x1704C2E2: je 0x1704c4af */
L_1704C2E8:
    /* cmp eax, ecx */ /* 0x1704C2E8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4AF; /* 0x1704C2EA: je 0x1704c4af */
L_1704C2F0:
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x1704C2F0: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4AF; /* 0x1704C2F3: je 0x1704c4af */
L_1704C2F9:
    ecx = edi; /* 0x1704C2F9: mov ecx, edi */
    edi = MEM32(ebp + (-0x8)); /* 0x1704C2FB: mov edi, dword ptr [ebp - 8] */
    edx = ecx; /* 0x1704C2FE: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C300: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C300: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C303: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C305: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C307: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C309: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C30C: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x14)); /* 0x1704C30E: mov edi, dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x1704C311: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704C313: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704C313: shl ecx, 2 */
    edx = ecx; /* 0x1704C316: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C318: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C318: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704C31B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C31E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C320: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C322: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C325: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x10)); /* 0x1704C327: mov edi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1704C32A: mov ecx, esi */
    edx = ecx; /* 0x1704C32C: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C32E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C32E: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C331: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C333: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C335: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C337: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1704C33A: push 4 */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C33C: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704C33E: push dword ptr [ebp - 0xc] */
    ecx = ebp + (-0x8C); /* 0x1704C341: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C347: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C34A: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1704C34F: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1704C351: pop ecx */
    esi = eax; /* 0x1704C352: mov esi, eax */
    edi = ebp + (-0x64); /* 0x1704C354: lea edi, [ebp - 0x64] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704C357: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C359: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x1704C35B: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = esi; /* 0x1704C35D: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + 0xC) = esi; /* 0x1704C360: mov dword ptr [ebp + 0xc], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704C4B6; /* 0x1704C363: jbe 0x1704c4b6 */
L_1704C369:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704C369: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C36C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1704C36E: mov dword ptr [ebp - 0x24], ecx */
L_1704C371:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1704C371: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x1704C374: mov dword ptr [ebp - 0x20], eax */
L_1704C377:
    eax = MEM32(ebp + (-0x24)); /* 0x1704C377: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1704C37A: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704C37D: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1704C37F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C47A; /* 0x1704C382: jne 0x1704c47a */
L_1704C388:
    ecx = MEM32(ebp + (-0x20)); /* 0x1704C388: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(1); /* 0x1704C38B: mov byte ptr [eax], 1 */
    eax = MEM32(ebp + (-0xC)); /* 0x1704C38E: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1704C391: push esi */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1704C392: push dword ptr [ecx + eax] */
    ecx = ebp + (-0x64); /* 0x1704C395: lea ecx, [ebp - 0x64] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C398: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704BE8A); /* 0x1704C39B: call 0x1704be8a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x64); /* 0x1704C3A0: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1704BCD3); /* 0x1704C3A3: call 0x1704bcd3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x5C)), 0xFFFFFFFFu */ /* 0x1704C3A8: cmp dword ptr [ebp - 0x5c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C47A; /* 0x1704C3AC: je 0x1704c47a */
L_1704C3B2:
    ecx = ebp + (-0x64); /* 0x1704C3B2: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1704BC0E); /* 0x1704C3B5: call 0x1704bc0e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1704C3BA: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x1704C3BE: mov ebx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C3C7; /* 0x1704C3C0: je 0x1704c3c7 */
L_1704C3C2:
    edx = MEM32(ebp + (-0x58)); /* 0x1704C3C2: mov edx, dword ptr [ebp - 0x58] */
    goto L_1704C3D2; /* 0x1704C3C5: jmp 0x1704c3d2 */
L_1704C3C7:
    eax = MEM32(ebp + (-0x58)); /* 0x1704C3C7: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 3); /* 0x1704C3CA: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704C3CC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704C3CD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704C3CF: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704C3D0: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1704C3D2:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704C3D2: mov ecx, dword ptr [ebp - 8] */
    eax = edx + ebx * 2; /* 0x1704C3D5: lea eax, [edx + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1704C3D8: add eax, ebx */
    _flag_k = FK_ADD;
    MEM8(eax + ecx) = (uint8_t)(1); /* 0x1704C3DA: mov byte ptr [eax + ecx], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x1704C3DE: mov ecx, dword ptr [ebp - 0xc] */
    edi = MEM32(ecx + eax * 4); /* 0x1704C3E1: mov edi, dword ptr [ecx + eax*4] */
    eax = MEM32(ebp + (-0x14)); /* 0x1704C3E4: mov eax, dword ptr [ebp - 0x14] */
    esi = edi; /* 0x1704C3E7: mov esi, edi */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1704C3E9: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1704C3E9: shl esi, 2 */
    ecx = esi + eax; /* 0x1704C3EC: lea ecx, [esi + eax] */
    eax = MEM32(ecx); /* 0x1704C3EF: mov eax, dword ptr [ecx] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1704C3F1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C403; /* 0x1704C3F4: jne 0x1704c403 */
L_1704C3F6:
    eax = MEM32(ebp + 0xC); /* 0x1704C3F6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x1704C3F9: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1704C3FB: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + eax) = ebx; /* 0x1704C3FE: mov dword ptr [esi + eax], ebx */
    goto L_1704C46B; /* 0x1704C401: jmp 0x1704c46b */
L_1704C403:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704C403: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C46B; /* 0x1704C406: je 0x1704c46b */
L_1704C408:
    eax = MEM32(ebp + (-0x10)); /* 0x1704C408: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM8(edi + eax), 0 */ /* 0x1704C40B: cmp byte ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM8(edi + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C46B; /* 0x1704C40F: jne 0x1704c46b */
L_1704C411:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1704C411: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C444; /* 0x1704C415: jne 0x1704c444 */
L_1704C417:
    eax = ebp + (-0x3C); /* 0x1704C417: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x170058A8u); /* 0x1704C41A: push 0x170058a8 */
    PUSH32(esp, eax); /* 0x1704C41F: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C420: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1704C425: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x17005848u); /* 0x1704C428: push 0x17005848 */
    PUSH32(esp, eax); /* 0x1704C42D: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C42E: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1704C433: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x170057E8u); /* 0x1704C436: push 0x170057e8 */
    PUSH32(esp, eax); /* 0x1704C43B: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C43C: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1704C441: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1704C444:
    eax = MEM32(ebp + (-0x10)); /* 0x1704C444: mov eax, dword ptr [ebp - 0x10] */
    MEM8(edi + eax) = (uint8_t)(1); /* 0x1704C447: mov byte ptr [edi + eax], 1 */
    eax = MEM32(ebp + (-0x18)); /* 0x1704C44B: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(esi + eax)); /* 0x1704C44E: push dword ptr [esi + eax] */
    eax = ebp + (-0x3C); /* 0x1704C451: lea eax, [ebp - 0x3c] */
    PUSH32(esp, ebx); /* 0x1704C454: push ebx */
    PUSH32(esp, edi); /* 0x1704C455: push edi */
    PUSH32(esp, 0x170057A0u); /* 0x1704C456: push 0x170057a0 */
    PUSH32(esp, eax); /* 0x1704C45B: push eax */
    MEM32(ebp + (-0x28)) = 1; /* 0x1704C45C: mov dword ptr [ebp - 0x28], 1 */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C463: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704C468: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1704C46B:
    /* cmp MEM32(ebp + (-0x5C)), 0xFFFFFFFFu */ /* 0x1704C46B: cmp dword ptr [ebp - 0x5c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C3B2; /* 0x1704C46F: jne 0x1704c3b2 */
L_1704C475:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1704C475: mov ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C478: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704C47A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x1704C47A: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 4; /* 0x1704C47D: add dword ptr [ebp - 0x20], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1C)), 3 */ /* 0x1704C481: cmp dword ptr [ebp - 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C377; /* 0x1704C485: jb 0x1704c377 */
L_1704C48B:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1704C48B: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 3; /* 0x1704C48E: add dword ptr [ebp - 0x24], 3 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1704C492: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x20)); /* 0x1704C495: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C371; /* 0x1704C498: jb 0x1704c371 */
L_1704C49E:
    /* cmp MEM32(ebp + (-0x28)), esi */ /* 0x1704C49E: cmp dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x1704C4A1: mov edi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4B9; /* 0x1704C4A4: je 0x1704c4b9 */
L_1704C4A6:
    MEM32(ebp + (-0x4)) = 0x88760B55u; /* 0x1704C4A6: mov dword ptr [ebp - 4], 0x88760b55 */
    goto L_1704C4B9; /* 0x1704C4AD: jmp 0x1704c4b9 */
L_1704C4AF:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704C4AF: mov dword ptr [ebp - 4], 0x8007000e */
L_1704C4B6:
    edi = MEM32(ebp + 0x8); /* 0x1704C4B6: mov edi, dword ptr [ebp + 8] */
L_1704C4B9:
    ebx = POP32_VAL(esp); /* 0x1704C4B9: pop ebx */
L_1704C4BA:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1704C4BA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4CB; /* 0x1704C4BE: je 0x1704c4cb */
L_1704C4C0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704C4C0: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x3C); /* 0x1704C4C3: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B980); /* 0x1704C4C6: call 0x1721b980 */
    RECOMP_FLAGS_IN();
L_1704C4CB:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1704C4CB: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C4D7; /* 0x1704C4CF: je 0x1704c4d7 */
L_1704C4D1:
    eax = MEM32(edi); /* 0x1704C4D1: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C4D3: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704C4D4: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704C4D7:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1704C4D7: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C4DA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1704C4DF: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C4E2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1704C4E7: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C4EA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1704C4EF: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C4F2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C4F7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x3C); /* 0x1704C4FA: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B881); /* 0x1704C4FD: call 0x1721b881 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1704C502: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704C505: pop edi */
    esi = POP32_VAL(esp); /* 0x1704C506: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704C507: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704C508: ret 0x10 */
L_1704C50B:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704C50B: mov dword ptr [ebp - 4], 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1704C4BA; /* 0x1704C512: jmp 0x1704c4ba */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704C519(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704C519u);

L_1704C519:
    edi = edi; /* 0x1704C519: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704C51B: push ebp */
    ebp = esp; /* 0x1704C51C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x1704C51E: sub esp, 0x8c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704C524: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C525: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704C527: push edi */
    PUSH32(esp, 2); /* 0x1704C528: push 2 */
    PUSH32(esp, esi); /* 0x1704C52A: push esi */
    PUSH32(esp, esi); /* 0x1704C52B: push esi */
    ecx = ebp + (-0x64); /* 0x1704C52C: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1704C52F: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1704C532: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1704C535: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x1704C538: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1704C53B: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C53E: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x3C); /* 0x1704C543: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B86C); /* 0x1704C546: call 0x1721b86c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1704C54B: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, esi */ /* 0x1704C54E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C825; /* 0x1704C550: je 0x1704c825 */
L_1704C556:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1704C556: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C825; /* 0x1704C559: je 0x1704c825 */
L_1704C55F:
    eax = MEM32(edi); /* 0x1704C55F: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C561: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704C562: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test HI8(eax), 4 */ /* 0x1704C565: test ah, 4 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704C825; /* 0x1704C568: jne 0x1704c825 */
L_1704C56E:
    eax = MEM32(edi); /* 0x1704C56E: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1704C570: push ebx */
    PUSH32(esp, edi); /* 0x1704C571: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704C572: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704C575: mov esi, eax */
    eax = MEM32(edi); /* 0x1704C577: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C579: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704C57A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1704C57D: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1704C580: push ecx */
    ebx = eax; /* 0x1704C581: mov ebx, eax */
    eax = MEM32(edi); /* 0x1704C583: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x1704C585: push 0 */
    PUSH32(esp, edi); /* 0x1704C587: push edi */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1704C588: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1704C58B: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704C58E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704C590: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704C7D3; /* 0x1704C593: jl 0x1704c7d3 */
L_1704C599:
    eax = ebp + (-0x3C); /* 0x1704C599: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1704C59C: push eax */
    PUSH32(esp, esi); /* 0x1704C59D: push esi */
    PUSH32(esp, ebx); /* 0x1704C59E: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C59F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704C5A2: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1704BF57); /* 0x1704C5A5: call 0x1704bf57 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704C5AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704C5AC: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704C7D3; /* 0x1704C5AF: jl 0x1704c7d3 */
L_1704C5B5:
    edi = ebx + ebx * 2; /* 0x1704C5B5: lea edi, [ebx + ebx*2] */
    PUSH32(esp, edi); /* 0x1704C5B8: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C5B9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1704C5BE: mov dword ptr [ebp - 8], eax */
    eax = esi + esi; /* 0x1704C5C1: lea eax, [esi + esi] */
    PUSH32(esp, eax); /* 0x1704C5C4: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C5C5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1704C5CA: mov dword ptr [ebp - 0x14], eax */
    eax = esi + esi; /* 0x1704C5CD: lea eax, [esi + esi] */
    PUSH32(esp, eax); /* 0x1704C5D0: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C5D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1704C5D6: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1704C5D7: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C5DA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704C5DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C5E1: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1704C5E4: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1704C5E7: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7C9; /* 0x1704C5EA: je 0x1704c7c9 */
L_1704C5F0:
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1704C5F0: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7C9; /* 0x1704C5F3: je 0x1704c7c9 */
L_1704C5F9:
    /* cmp eax, ecx */ /* 0x1704C5F9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7C9; /* 0x1704C5FB: je 0x1704c7c9 */
L_1704C601:
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x1704C601: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7C9; /* 0x1704C604: je 0x1704c7c9 */
L_1704C60A:
    ecx = edi; /* 0x1704C60A: mov ecx, edi */
    edi = MEM32(ebp + (-0x8)); /* 0x1704C60C: mov edi, dword ptr [ebp - 8] */
    edx = ecx; /* 0x1704C60F: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C611: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C611: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C614: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C616: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C618: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C61A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C61D: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x14)); /* 0x1704C61F: mov edi, dword ptr [ebp - 0x14] */
    ecx = esi + esi; /* 0x1704C622: lea ecx, [esi + esi] */
    edx = ecx; /* 0x1704C625: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C627: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C627: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704C62A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C62D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C62F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C631: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C634: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x10)); /* 0x1704C636: mov edi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1704C639: mov ecx, esi */
    edx = ecx; /* 0x1704C63B: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C63D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C63D: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C640: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C642: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704C644: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C646: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1704C649: push 2 */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C64B: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704C64D: push dword ptr [ebp - 0xc] */
    ecx = ebp + (-0x8C); /* 0x1704C650: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C656: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C659: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1704C65E: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1704C660: pop ecx */
    esi = eax; /* 0x1704C661: mov esi, eax */
    edi = ebp + (-0x64); /* 0x1704C663: lea edi, [ebp - 0x64] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704C666: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C668: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x1704C66A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = esi; /* 0x1704C66C: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + 0xC) = esi; /* 0x1704C66F: mov dword ptr [ebp + 0xc], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704C7D0; /* 0x1704C672: jbe 0x1704c7d0 */
L_1704C678:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704C678: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C67B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1704C67D: mov dword ptr [ebp - 0x24], ecx */
L_1704C680:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1704C680: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x1704C683: mov dword ptr [ebp - 0x20], eax */
L_1704C686:
    eax = MEM32(ebp + (-0x24)); /* 0x1704C686: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1704C689: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704C68C: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1704C68E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C794; /* 0x1704C691: jne 0x1704c794 */
L_1704C697:
    ecx = MEM32(ebp + (-0x20)); /* 0x1704C697: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(1); /* 0x1704C69A: mov byte ptr [eax], 1 */
    eax = MEM32(ebp + (-0xC)); /* 0x1704C69D: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)MEM16(ecx + eax); /* 0x1704C6A0: movzx eax, word ptr [ecx + eax] */
    PUSH32(esp, esi); /* 0x1704C6A4: push esi */
    PUSH32(esp, eax); /* 0x1704C6A5: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C6A6: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x64); /* 0x1704C6A9: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1704BE8A); /* 0x1704C6AC: call 0x1704be8a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x64); /* 0x1704C6B1: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1704BCD3); /* 0x1704C6B4: call 0x1704bcd3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x5C)), 0xFFFFFFFFu */ /* 0x1704C6B9: cmp dword ptr [ebp - 0x5c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C794; /* 0x1704C6BD: je 0x1704c794 */
L_1704C6C3:
    ecx = ebp + (-0x64); /* 0x1704C6C3: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1704BC0E); /* 0x1704C6C6: call 0x1704bc0e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1704C6CB: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x1704C6CF: mov ebx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C6D8; /* 0x1704C6D1: je 0x1704c6d8 */
L_1704C6D3:
    edx = MEM32(ebp + (-0x58)); /* 0x1704C6D3: mov edx, dword ptr [ebp - 0x58] */
    goto L_1704C6E3; /* 0x1704C6D6: jmp 0x1704c6e3 */
L_1704C6D8:
    eax = MEM32(ebp + (-0x58)); /* 0x1704C6D8: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 3); /* 0x1704C6DB: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704C6DD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704C6DE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704C6E0: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1704C6E1: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1704C6E3:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704C6E3: mov ecx, dword ptr [ebp - 8] */
    eax = edx + ebx * 2; /* 0x1704C6E6: lea eax, [edx + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1704C6E9: add eax, ebx */
    _flag_k = FK_ADD;
    MEM8(eax + ecx) = (uint8_t)(1); /* 0x1704C6EB: mov byte ptr [eax + ecx], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x1704C6EF: mov ecx, dword ptr [ebp - 0xc] */
    edi = (uint32_t)MEM16(ecx + eax * 2); /* 0x1704C6F2: movzx edi, word ptr [ecx + eax*2] */
    eax = MEM32(ebp + (-0x14)); /* 0x1704C6F6: mov eax, dword ptr [ebp - 0x14] */
    esi = edi + edi; /* 0x1704C6F9: lea esi, [edi + edi] */
    ecx = esi + eax; /* 0x1704C6FC: lea ecx, [esi + eax] */
    SET_LO16(eax, MEM16(ecx)); /* 0x1704C6FF: mov ax, word ptr [ecx] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1704C702: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C718; /* 0x1704C706: jne 0x1704c718 */
L_1704C708:
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1704C708: mov ax, word ptr [ebp + 0xc] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1704C70C: mov word ptr [ecx], ax */
    eax = MEM32(ebp + (-0x18)); /* 0x1704C70F: mov eax, dword ptr [ebp - 0x18] */
    MEM16(esi + eax) = (uint16_t)(LO16(ebx)); /* 0x1704C712: mov word ptr [esi + eax], bx */
    goto L_1704C785; /* 0x1704C716: jmp 0x1704c785 */
L_1704C718:
    eax = (uint32_t)LO16(eax); /* 0x1704C718: movzx eax, ax */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704C71B: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C785; /* 0x1704C71E: je 0x1704c785 */
L_1704C720:
    eax = MEM32(ebp + (-0x10)); /* 0x1704C720: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM8(edi + eax), 0 */ /* 0x1704C723: cmp byte ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM8(edi + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C785; /* 0x1704C727: jne 0x1704c785 */
L_1704C729:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1704C729: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C75C; /* 0x1704C72D: jne 0x1704c75c */
L_1704C72F:
    eax = ebp + (-0x3C); /* 0x1704C72F: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x170058A8u); /* 0x1704C732: push 0x170058a8 */
    PUSH32(esp, eax); /* 0x1704C737: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C738: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1704C73D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x17005848u); /* 0x1704C740: push 0x17005848 */
    PUSH32(esp, eax); /* 0x1704C745: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C746: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1704C74B: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x170057E8u); /* 0x1704C74E: push 0x170057e8 */
    PUSH32(esp, eax); /* 0x1704C753: push eax */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C754: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1704C759: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1704C75C:
    eax = MEM32(ebp + (-0x10)); /* 0x1704C75C: mov eax, dword ptr [ebp - 0x10] */
    MEM8(edi + eax) = (uint8_t)(1); /* 0x1704C75F: mov byte ptr [edi + eax], 1 */
    eax = MEM32(ebp + (-0x18)); /* 0x1704C763: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)MEM16(esi + eax); /* 0x1704C766: movzx eax, word ptr [esi + eax] */
    PUSH32(esp, eax); /* 0x1704C76A: push eax */
    PUSH32(esp, ebx); /* 0x1704C76B: push ebx */
    PUSH32(esp, edi); /* 0x1704C76C: push edi */
    eax = ebp + (-0x3C); /* 0x1704C76D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x170057A0u); /* 0x1704C770: push 0x170057a0 */
    PUSH32(esp, eax); /* 0x1704C775: push eax */
    MEM32(ebp + (-0x28)) = 1; /* 0x1704C776: mov dword ptr [ebp - 0x28], 1 */
    RECOMP_CALL(sub_1704BF0A); /* 0x1704C77D: call 0x1704bf0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704C782: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1704C785:
    /* cmp MEM32(ebp + (-0x5C)), 0xFFFFFFFFu */ /* 0x1704C785: cmp dword ptr [ebp - 0x5c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704C6C3; /* 0x1704C789: jne 0x1704c6c3 */
L_1704C78F:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1704C78F: mov ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704C792: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704C794:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x1704C794: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 2; /* 0x1704C797: add dword ptr [ebp - 0x20], 2 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1C)), 3 */ /* 0x1704C79B: cmp dword ptr [ebp - 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C686; /* 0x1704C79F: jb 0x1704c686 */
L_1704C7A5:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1704C7A5: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 3; /* 0x1704C7A8: add dword ptr [ebp - 0x24], 3 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1704C7AC: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x20)); /* 0x1704C7AF: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704C680; /* 0x1704C7B2: jb 0x1704c680 */
L_1704C7B8:
    /* cmp MEM32(ebp + (-0x28)), esi */ /* 0x1704C7B8: cmp dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x1704C7BB: mov edi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7D3; /* 0x1704C7BE: je 0x1704c7d3 */
L_1704C7C0:
    MEM32(ebp + (-0x4)) = 0x88760B55u; /* 0x1704C7C0: mov dword ptr [ebp - 4], 0x88760b55 */
    goto L_1704C7D3; /* 0x1704C7C7: jmp 0x1704c7d3 */
L_1704C7C9:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704C7C9: mov dword ptr [ebp - 4], 0x8007000e */
L_1704C7D0:
    edi = MEM32(ebp + 0x8); /* 0x1704C7D0: mov edi, dword ptr [ebp + 8] */
L_1704C7D3:
    ebx = POP32_VAL(esp); /* 0x1704C7D3: pop ebx */
L_1704C7D4:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1704C7D4: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7E5; /* 0x1704C7D8: je 0x1704c7e5 */
L_1704C7DA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704C7DA: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x3C); /* 0x1704C7DD: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B980); /* 0x1704C7E0: call 0x1721b980 */
    RECOMP_FLAGS_IN();
L_1704C7E5:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1704C7E5: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C7F1; /* 0x1704C7E9: je 0x1704c7f1 */
L_1704C7EB:
    eax = MEM32(edi); /* 0x1704C7EB: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704C7ED: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704C7EE: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704C7F1:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1704C7F1: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C7F4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1704C7F9: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C7FC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1704C801: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C804: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1704C809: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1704C80C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1704C811: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x3C); /* 0x1704C814: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B881); /* 0x1704C817: call 0x1721b881 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1704C81C: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704C81F: pop edi */
    esi = POP32_VAL(esp); /* 0x1704C820: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704C821: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704C822: ret 0x10 */
L_1704C825:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704C825: mov dword ptr [ebp - 4], 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1704C7D4; /* 0x1704C82C: jmp 0x1704c7d4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704C833(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704C833u);

L_1704C833:
    edi = edi; /* 0x1704C833: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704C835: push ebp */
    ebp = esp; /* 0x1704C836: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x594u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x594u; /* 0x1704C838: sub esp, 0x594 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704C83E: push ebx */
    PUSH32(esp, esi); /* 0x1704C83F: push esi */
    PUSH32(esp, edi); /* 0x1704C840: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704C841: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1704C843: push 2 */
    PUSH32(esp, edi); /* 0x1704C845: push edi */
    PUSH32(esp, edi); /* 0x1704C846: push edi */
    ecx = ebp + (-0x98); /* 0x1704C847: lea ecx, [ebp - 0x98] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1704C84D: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x24)) = edi; /* 0x1704C850: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1704C853: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C856: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x184); /* 0x1704C85B: lea ecx, [ebp - 0x184] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1704C861: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x1704C864: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x1704C867: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1704C86A: mov dword ptr [ebp - 0x3c], edi */
    MEM32(ebp + (-0x38)) = edi; /* 0x1704C86D: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x30)) = edi; /* 0x1704C870: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x5C)) = edi; /* 0x1704C873: mov dword ptr [ebp - 0x5c], edi */
    MEM32(ebp + (-0x54)) = edi; /* 0x1704C876: mov dword ptr [ebp - 0x54], edi */
    RECOMP_CALL(sub_1704AC26); /* 0x1704C879: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1704C87E: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x1704C881: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704C883: push ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1704C884: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704C887: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x1704C88A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebx); /* 0x1704C88D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704C88F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704C890: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1704C893: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx); /* 0x1704C896: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704C898: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704C899: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704C89C: mov esi, eax */
    eax = MEM32(ebx); /* 0x1704C89E: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x38C); /* 0x1704C8A0: lea ecx, [ebp - 0x38c] */
    esi = ~esi; /* 0x1704C8A6: not esi */
    PUSH32(esp, ecx); /* 0x1704C8A8: push ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1704C8A9: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704C8AC: push ebx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1704C8AD: mov dword ptr [ebp - 0x10], esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1704C8B0: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x38C); /* 0x1704C8B3: lea eax, [ebp - 0x38c] */
    PUSH32(esp, eax); /* 0x1704C8B9: push eax */
    ecx = ebp + (-0x184); /* 0x1704C8BA: lea ecx, [ebp - 0x184] */
    RECOMP_CALL(sub_1703CC5E); /* 0x1704C8C0: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1704C8C5: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x8); /* 0x1704C8C7: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1704C8CA: push ecx */
    PUSH32(esp, edi); /* 0x1704C8CB: push edi */
    PUSH32(esp, ebx); /* 0x1704C8CC: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1704C8CD: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704C8D0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1704C8D2: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704CD3D; /* 0x1704C8D5: jl 0x1704cd3d */
L_1704C8DB:
    /* cmp esi, edi */ /* 0x1704C8DB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704C8DD: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x8)); /* 0x1704C8E0: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1704C8E3: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x58)) = eax; /* 0x1704C8E6: mov dword ptr [ebp - 0x58], eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1704C8E9: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C8EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1704C8EF: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C8F9; /* 0x1704C8F0: je 0x1704c8f9 */
L_1704C8F2:
    RECOMP_CALL(sub_1704BF57); /* 0x1704C8F2: call 0x1704bf57 */
    RECOMP_FLAGS_IN();
    goto L_1704C8FE; /* 0x1704C8F7: jmp 0x1704c8fe */
L_1704C8F9:
    RECOMP_CALL(sub_1704C0B3); /* 0x1704C8F9: call 0x1704c0b3 */
    RECOMP_FLAGS_IN();
L_1704C8FE:
    /* cmp eax, edi */ /* 0x1704C8FE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1704C900: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704CD3D; /* 0x1704C903: jl 0x1704cd3d */
L_1704C909:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C909: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x1704C90B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704C90D: sete al */
    ecx = ebp + (-0xC0); /* 0x1704C910: lea ecx, [ebp - 0xc0] */
    eax = eax + eax + 0x2; /* 0x1704C916: lea eax, [eax + eax + 2] */
    PUSH32(esp, eax); /* 0x1704C91A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1704C91B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704C91E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704BB87); /* 0x1704C921: call 0x1704bb87 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1704C926: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x1704C92A: push 0xa */
    edx = POP32_VAL(esp); /* 0x1704C92C: pop edx */
    esi = eax; /* 0x1704C92D: mov esi, eax */
    ecx = edx; /* 0x1704C92F: mov ecx, edx */
    edi = ebp + (-0x98); /* 0x1704C931: lea edi, [ebp - 0x98] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704C937: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x14)); /* 0x1704C939: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x1704C93C: mov edi, dword ptr [ebp - 0x18] */
    eax = esi + esi * 2; /* 0x1704C93F: lea eax, [esi + esi*2] */
    PUSH32(esp, eax); /* 0x1704C942: push eax */
    MEM32(ebp + (-0x68)) = edx; /* 0x1704C943: mov dword ptr [ebp - 0x68], edx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1704C946: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + 0x14) = eax; /* 0x1704C949: mov dword ptr [ebp + 0x14], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C94C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1704C951: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1704C951: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1704C954: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1704C955: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C958: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x28u); /* 0x1704C95D: push 0x28 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1704C95F: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C962: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704C967: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1704C969: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1704C96C: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1704C96F: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704C972: je 0x1704cd34 */
L_1704C978:
    /* cmp MEM32(ebp + (-0x24)), edi */ /* 0x1704C978: cmp dword ptr [ebp - 0x24], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704C97B: je 0x1704cd34 */
L_1704C981:
    /* cmp eax, edi */ /* 0x1704C981: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704C983: je 0x1704cd34 */
L_1704C989:
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x1704C989: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esi + esi * 2; /* 0x1704C98C: lea esi, [esi + esi*2] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704C9AC; /* 0x1704C98F: je 0x1704c9ac */
L_1704C991:
    if (1u) _cf = (((esi) >> 31) & 1u); /* 0x1704C991: shl esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 1u; /* 0x1704C991: shl esi, 1 */
    PUSH32(esp, esi); /* 0x1704C993: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C994: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704C999: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704C99B: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1704C99C: mov dword ptr [ebp - 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704C99F: je 0x1704cd34 */
L_1704C9A5:
    ecx = esi; /* 0x1704C9A5: mov ecx, esi */
    esi = MEM32(ebp + (-0x8)); /* 0x1704C9A7: mov esi, dword ptr [ebp - 8] */
    goto L_1704C9C6; /* 0x1704C9AA: jmp 0x1704c9c6 */
L_1704C9AC:
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1704C9AC: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1704C9AC: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1704C9AF: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704C9B0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704C9B5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704C9B7: pop ecx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1704C9B8: mov dword ptr [ebp - 0x28], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704C9BB: je 0x1704cd34 */
L_1704C9C1:
    ecx = esi; /* 0x1704C9C1: mov ecx, esi */
    esi = MEM32(ebp + (-0x58)); /* 0x1704C9C3: mov esi, dword ptr [ebp - 0x58] */
L_1704C9C6:
    edx = MEM32(ebp + (-0x1C)); /* 0x1704C9C6: mov edx, dword ptr [ebp - 0x1c] */
    edi = eax; /* 0x1704C9C9: mov edi, eax */
    eax = ecx; /* 0x1704C9CB: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C9CD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C9CD: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704C9D0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704C9D2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C9D4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704C9D7: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x14); /* 0x1704C9D9: mov ecx, dword ptr [ebp + 0x14] */
    esi = ecx; /* 0x1704C9DC: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C9DE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C9DE: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704C9E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1704C9E3: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C9E5: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1704C9E7: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704C9E9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704C9EC: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + (-0x18)); /* 0x1704C9EE: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x24)); /* 0x1704C9F1: mov edi, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704C9F4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704C9F4: shl ecx, 2 */
    esi = ecx; /* 0x1704C9F7: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704C9F9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704C9F9: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704C9FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704C9FF: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1704CA01: mov ecx, esi */
    esi = MEM32(ebp + (-0x14)); /* 0x1704CA03: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CA06: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704CA09: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704CA0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x1704CA0D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edi; /* 0x1704CA0F: mov dword ptr [ebp + 0x14], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704CD27; /* 0x1704CA12: jbe 0x1704cd27 */
L_1704CA18:
    eax = MEM32(ebp + (-0x58)); /* 0x1704CA18: mov eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x60)) = edi; /* 0x1704CA1B: mov dword ptr [ebp - 0x60], edi */
    MEM32(ebp + (-0x4C)) = edx; /* 0x1704CA1E: mov dword ptr [ebp - 0x4c], edx */
    MEM32(ebp + (-0x48)) = eax; /* 0x1704CA21: mov dword ptr [ebp - 0x48], eax */
L_1704CA24:
    eax = MEM32(ebp + (-0x60)); /* 0x1704CA24: mov eax, dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x64)) = eax; /* 0x1704CA27: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1704CA2A: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x40)) = edi; /* 0x1704CA2D: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x50)) = eax; /* 0x1704CA30: mov dword ptr [ebp - 0x50], eax */
L_1704CA33:
    eax = MEM32(ebp + (-0x4C)); /* 0x1704CA33: mov eax, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x40)); /* 0x1704CA36: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704CA39: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1704CA3B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CB79; /* 0x1704CA3E: jne 0x1704cb79 */
L_1704CA44:
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x1704CA44: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(eax) = (uint8_t)(1); /* 0x1704CA47: mov byte ptr [eax], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CA58; /* 0x1704CA4A: je 0x1704ca58 */
L_1704CA4C:
    eax = MEM32(ebp + (-0x8)); /* 0x1704CA4C: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x64)); /* 0x1704CA4F: mov ecx, dword ptr [ebp - 0x64] */
    eax = (uint32_t)MEM16(ecx + eax); /* 0x1704CA52: movzx eax, word ptr [ecx + eax] */
    goto L_1704CA5D; /* 0x1704CA56: jmp 0x1704ca5d */
L_1704CA58:
    eax = MEM32(ebp + (-0x50)); /* 0x1704CA58: mov eax, dword ptr [ebp - 0x50] */
    eax = MEM32(eax); /* 0x1704CA5B: mov eax, dword ptr [eax] */
L_1704CA5D:
    PUSH32(esp, edi); /* 0x1704CA5D: push edi */
    PUSH32(esp, eax); /* 0x1704CA5E: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704CA5F: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x98); /* 0x1704CA62: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1704BE8A); /* 0x1704CA68: call 0x1704be8a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x98); /* 0x1704CA6D: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1704BCD3); /* 0x1704CA73: call 0x1704bcd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1704CA78: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x90)), edi */ /* 0x1704CA7B: cmp dword ptr [ebp - 0x90], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = edi; /* 0x1704CA81: mov dword ptr [ebp - 0x34], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CB77; /* 0x1704CA84: je 0x1704cb77 */
L_1704CA8A:
    ecx = ebp + (-0x98); /* 0x1704CA8A: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1704BC0E); /* 0x1704CA90: call 0x1704bc0e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x78)), 0 */ /* 0x1704CA95: cmp dword ptr [ebp - 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax; /* 0x1704CA99: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CAA5; /* 0x1704CA9B: je 0x1704caa5 */
L_1704CA9D:
    edx = MEM32(ebp + (-0x8C)); /* 0x1704CA9D: mov edx, dword ptr [ebp - 0x8c] */
    goto L_1704CAB3; /* 0x1704CAA3: jmp 0x1704cab3 */
L_1704CAA5:
    eax = MEM32(ebp + (-0x8C)); /* 0x1704CAA5: mov eax, dword ptr [ebp - 0x8c] */
    PUSH32(esp, 3); /* 0x1704CAAB: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704CAAD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704CAAE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704CAB0: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1704CAB1: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1704CAB3:
    eax = edx + ecx * 2; /* 0x1704CAB3: lea eax, [edx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704CAB6: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1704CAB8: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x1704CABC: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x70)) = ecx; /* 0x1704CABF: mov dword ptr [ebp - 0x70], ecx */
    MEM8(ecx + eax) = (uint8_t)(1); /* 0x1704CAC2: mov byte ptr [ecx + eax], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CAD4; /* 0x1704CAC6: je 0x1704cad4 */
L_1704CAC8:
    eax = MEM32(ebp + (-0x8)); /* 0x1704CAC8: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1704CACB: movzx eax, word ptr [eax + ecx*2] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1704CACF: mov dword ptr [ebp - 0x44], eax */
    goto L_1704CADD; /* 0x1704CAD2: jmp 0x1704cadd */
L_1704CAD4:
    eax = MEM32(ebp + (-0x58)); /* 0x1704CAD4: mov eax, dword ptr [ebp - 0x58] */
    eax = MEM32(eax + ecx * 4); /* 0x1704CAD7: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1704CADA: mov dword ptr [ebp - 0x44], eax */
L_1704CADD:
    /* cmp eax, MEM32(ebp + (-0x34)) */ /* 0x1704CADD: cmp eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CB52; /* 0x1704CAE0: je 0x1704cb52 */
L_1704CAE2:
    edx = MEM32(ebp + (-0x24)); /* 0x1704CAE2: mov edx, dword ptr [ebp - 0x24] */
    edx = edx + eax * 4; /* 0x1704CAE5: lea edx, [edx + eax*4] */
    esi = MEM32(edx); /* 0x1704CAE8: mov esi, dword ptr [edx] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1704CAEA: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CAF6; /* 0x1704CAED: jne 0x1704caf6 */
L_1704CAEF:
    eax = MEM32(ebp + 0x14); /* 0x1704CAEF: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edx) = eax; /* 0x1704CAF2: mov dword ptr [edx], eax */
    goto L_1704CB67; /* 0x1704CAF4: jmp 0x1704cb67 */
L_1704CAF6:
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1704CAF6: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CB67; /* 0x1704CAF9: je 0x1704cb67 */
L_1704CAFB:
    edx = MEM32(ebp + (-0x68)); /* 0x1704CAFB: mov edx, dword ptr [ebp - 0x68] */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704CAFE: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CB3D; /* 0x1704CB01: jne 0x1704cb3d */
L_1704CB03:
    eax = edx + edx; /* 0x1704CB03: lea eax, [edx + edx] */
    MEM32(ebp + (-0x68)) = eax; /* 0x1704CB06: mov dword ptr [ebp - 0x68], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704CB09: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704CB09: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704CB0C: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704CB0D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1704CB12: mov edi, eax */
    /* test edi, edi */ /* 0x1704CB14: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704CB16: pop ecx */
    MEM32(ebp + (-0x34)) = edi; /* 0x1704CB17: mov dword ptr [ebp - 0x34], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CD34; /* 0x1704CB1A: je 0x1704cd34 */
L_1704CB20:
    ecx = MEM32(ebp + 0xC); /* 0x1704CB20: mov ecx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0xC)); /* 0x1704CB23: mov esi, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704CB26: push dword ptr [ebp - 0xc] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CB29: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CB2B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1704CB30: mov eax, dword ptr [ebp - 0x34] */
    ecx = POP32_VAL(esp); /* 0x1704CB33: pop ecx */
    ecx = MEM32(ebp + (-0x70)); /* 0x1704CB34: mov ecx, dword ptr [ebp - 0x70] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1704CB37: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1704CB3A: mov eax, dword ptr [ebp - 0x44] */
L_1704CB3D:
    esi = MEM32(ebp + 0xC); /* 0x1704CB3D: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x2C)); /* 0x1704CB40: mov edi, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0xC)); /* 0x1704CB43: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 1; /* 0x1704CB46: inc dword ptr [ebp - 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1704CB49: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = eax; /* 0x1704CB4C: mov dword ptr [ebp - 0x34], eax */
    MEM32(edx + esi * 4) = eax; /* 0x1704CB4F: mov dword ptr [edx + esi*4], eax */
L_1704CB52:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1704CB52: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CB61; /* 0x1704CB56: je 0x1704cb61 */
L_1704CB58:
    eax = MEM32(ebp + (-0x20)); /* 0x1704CB58: mov eax, dword ptr [ebp - 0x20] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edi)); /* 0x1704CB5B: mov word ptr [eax + ecx*2], di */
    goto L_1704CB67; /* 0x1704CB5F: jmp 0x1704cb67 */
L_1704CB61:
    eax = MEM32(ebp + (-0x28)); /* 0x1704CB61: mov eax, dword ptr [ebp - 0x28] */
    MEM32(eax + ecx * 4) = edi; /* 0x1704CB64: mov dword ptr [eax + ecx*4], edi */
L_1704CB67:
    /* cmp MEM32(ebp + (-0x90)), 0xFFFFFFFFu */ /* 0x1704CB67: cmp dword ptr [ebp - 0x90], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CA8A; /* 0x1704CB6E: jne 0x1704ca8a */
L_1704CB74:
    esi = MEM32(ebp + (-0x14)); /* 0x1704CB74: mov esi, dword ptr [ebp - 0x14] */
L_1704CB77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704CB77: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704CB79:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) + 1; /* 0x1704CB79: inc dword ptr [ebp - 0x40] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) + 2; /* 0x1704CB7C: add dword ptr [ebp - 0x64], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) + 4; /* 0x1704CB80: add dword ptr [ebp - 0x50], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x40)), 3 */ /* 0x1704CB84: cmp dword ptr [ebp - 0x40], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704CA33; /* 0x1704CB88: jb 0x1704ca33 */
L_1704CB8E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1704CB8E: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + 6; /* 0x1704CB91: add dword ptr [ebp - 0x60], 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) + 0xCu; /* 0x1704CB95: add dword ptr [ebp - 0x48], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) + 3; /* 0x1704CB99: add dword ptr [ebp - 0x4c], 3 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1704CB9D: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704CA24; /* 0x1704CBA0: jb 0x1704ca24 */
L_1704CBA6:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704CBA6: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704CD27; /* 0x1704CBA9: jbe 0x1704cd27 */
L_1704CBAF:
    eax = MEM32(ebx); /* 0x1704CBAF: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x6C); /* 0x1704CBB1: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, ecx); /* 0x1704CBB4: push ecx */
    PUSH32(esp, ebx); /* 0x1704CBB5: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1704CBB6: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x6C)); /* 0x1704CBB9: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax); /* 0x1704CBBC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CBBE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704CBBF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1704CBC2: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x594); /* 0x1704CBC4: lea ecx, [ebp - 0x594] */
    PUSH32(esp, ecx); /* 0x1704CBCA: push ecx */
    PUSH32(esp, ebx); /* 0x1704CBCB: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1704CBCC: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704CBCF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1704CBD1: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704CD3B; /* 0x1704CBD4: jl 0x1704cd3b */
L_1704CBDA:
    eax = ebp + (-0x4); /* 0x1704CBDA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1704CBDD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x1704CBDE: push dword ptr [ebp - 0x6c] */
    eax = ebp + (-0x594); /* 0x1704CBE1: lea eax, [ebp - 0x594] */
    PUSH32(esp, eax); /* 0x1704CBE7: push eax */
    eax = MEM32(ebx); /* 0x1704CBE8: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CBEA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704CBEB: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1704CBEE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1704CBEF: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1704CBF2: push esi */
    RECOMP_CALL(sub_1705F236); /* 0x1704CBF3: call 0x1705f236 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CBF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CBFA: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CBFD: jl 0x1704cd3b */
L_1704CC03:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CC03: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CC06: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x3C); /* 0x1704CC08: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x1704CC0B: push edx */
    PUSH32(esp, 0); /* 0x1704CC0C: push 0 */
    PUSH32(esp, eax); /* 0x1704CC0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1704CC0F: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CC12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CC14: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CC17: jl 0x1704cd3b */
L_1704CC1D:
    eax = MEM32(ebx); /* 0x1704CC1D: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x30); /* 0x1704CC1F: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x1704CC22: push ecx */
    PUSH32(esp, 0); /* 0x1704CC23: push 0 */
    PUSH32(esp, ebx); /* 0x1704CC25: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1704CC26: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CC29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CC2B: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CC2E: jl 0x1704cd3b */
L_1704CC34:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CC34: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CC37: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x38); /* 0x1704CC39: lea edx, [ebp - 0x38] */
    PUSH32(esp, edx); /* 0x1704CC3C: push edx */
    PUSH32(esp, 0); /* 0x1704CC3D: push 0 */
    PUSH32(esp, eax); /* 0x1704CC3F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x1704CC40: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CC43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CC45: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CC48: jl 0x1704cd3b */
L_1704CC4E:
    eax = MEM32(ebx); /* 0x1704CC4E: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x54); /* 0x1704CC50: lea ecx, [ebp - 0x54] */
    PUSH32(esp, ecx); /* 0x1704CC53: push ecx */
    PUSH32(esp, 0); /* 0x1704CC54: push 0 */
    PUSH32(esp, ebx); /* 0x1704CC56: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1704CC57: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CC5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CC5C: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CC5F: jl 0x1704cd3b */
L_1704CC65:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CC65: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CC68: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x5C); /* 0x1704CC6A: lea edx, [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x1704CC6D: push edx */
    PUSH32(esp, 0); /* 0x1704CC6E: push 0 */
    PUSH32(esp, eax); /* 0x1704CC70: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x60)); /* 0x1704CC71: call dword ptr [ecx + 0x60] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CC74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1704CC76: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CD3B; /* 0x1704CC79: jl 0x1704cd3b */
L_1704CC7F:
    edi = MEM32(ebp + (-0x3C)); /* 0x1704CC7F: mov edi, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704CC82: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x1704CC84: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi + esi * 2; /* 0x1704CC87: lea ecx, [esi + esi*2] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CC93; /* 0x1704CC8A: je 0x1704cc93 */
L_1704CC8C:
    esi = MEM32(ebp + (-0x20)); /* 0x1704CC8C: mov esi, dword ptr [ebp - 0x20] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1704CC8F: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1704CC8F: shl ecx, 1 */
    goto L_1704CC99; /* 0x1704CC91: jmp 0x1704cc99 */
L_1704CC93:
    esi = MEM32(ebp + (-0x28)); /* 0x1704CC93: mov esi, dword ptr [ebp - 0x28] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704CC96: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704CC96: shl ecx, 2 */
L_1704CC99:
    eax = ecx; /* 0x1704CC99: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704CC9B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704CC9B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CC9E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704CCA0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CCA2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704CCA5: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0xC4)); /* 0x1704CCA7: mov ecx, dword ptr [ebp - 0xc4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x18))); /* 0x1704CCAD: imul ecx, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + (-0x30)); /* 0x1704CCB1: mov esi, dword ptr [ebp - 0x30] */
    edi = MEM32(ebp + (-0x38)); /* 0x1704CCB4: mov edi, dword ptr [ebp - 0x38] */
    eax = ecx; /* 0x1704CCB7: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704CCB9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704CCB9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CCBC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704CCBE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CCC0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704CCC3: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1704CCC5: mov ecx, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x54)); /* 0x1704CCC8: mov esi, dword ptr [ebp - 0x54] */
    edi = MEM32(ebp + (-0x5C)); /* 0x1704CCCB: mov edi, dword ptr [ebp - 0x5c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CCCE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0xC4)); /* 0x1704CCD0: mov ecx, dword ptr [ebp - 0xc4] */
    eax = ecx; /* 0x1704CCD6: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x18))); /* 0x1704CCD8: imul eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x38)); /* 0x1704CCDC: add eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704CCDF: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x1704CCE2: mov dword ptr [ebp + 0x14], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704CD17; /* 0x1704CCE5: jbe 0x1704cd17 */
L_1704CCE7:
    esi = MEM32(ebp + (-0xC)); /* 0x1704CCE7: mov esi, dword ptr [ebp - 0xc] */
    esi = MEM32(esi + edx * 4); /* 0x1704CCEA: mov esi, dword ptr [esi + edx*4] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x1704CCED: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x30)); /* 0x1704CCF0: add esi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1704CCF3: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704CCF5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704CCF5: shr ecx, 2 */
    edi = eax; /* 0x1704CCF8: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CCFA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1704CCFC: mov ecx, edx */
    edx = MEM32(ebp + 0x14); /* 0x1704CCFE: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CD01: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704CD04: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0xC4)); /* 0x1704CD06: mov ecx, dword ptr [ebp - 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704CD0C: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704CD0E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1704CD0F: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x1704CD12: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704CCE7; /* 0x1704CD15: jb 0x1704cce7 */
L_1704CD17:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CD17: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x1704CD1A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1704CD1D: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x1704CD1F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CD21: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1704CD22: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_1704CD3B; /* 0x1704CD25: jmp 0x1704cd3b */
L_1704CD27:
    eax = MEM32(ebp + 0x10); /* 0x1704CD27: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ebx; /* 0x1704CD2A: mov dword ptr [eax], ebx */
    eax = MEM32(ebx); /* 0x1704CD2C: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CD2E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1704CD2F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1704CD3B; /* 0x1704CD32: jmp 0x1704cd3b */
L_1704CD34:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1704CD34: mov dword ptr [ebp + 8], 0x8007000e */
L_1704CD3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704CD3B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704CD3D:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1704CD3D: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CD40: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1704CD45: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CD48: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704CD4D: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CD50: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1704CD55: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CD58: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1704CD5D: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1721B010); /* 0x1704CD60: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704CD65: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1704CD68: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD73; /* 0x1704CD6B: je 0x1704cd73 */
L_1704CD6D:
    eax = MEM32(ebx); /* 0x1704CD6D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CD6F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704CD70: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704CD73:
    /* cmp MEM32(ebp + (-0x3C)), edi */ /* 0x1704CD73: cmp dword ptr [ebp - 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD81; /* 0x1704CD76: je 0x1704cd81 */
L_1704CD78:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CD78: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CD7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CD7D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x1704CD7E: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
L_1704CD81:
    /* cmp MEM32(ebp + (-0x30)), edi */ /* 0x1704CD81: cmp dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD8C; /* 0x1704CD84: je 0x1704cd8c */
L_1704CD86:
    eax = MEM32(ebx); /* 0x1704CD86: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CD88: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1704CD89: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1704CD8C:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x1704CD8C: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CD9A; /* 0x1704CD8F: je 0x1704cd9a */
L_1704CD91:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CD91: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CD94: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CD96: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x1704CD97: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
L_1704CD9A:
    /* cmp MEM32(ebp + (-0x54)), edi */ /* 0x1704CD9A: cmp dword ptr [ebp - 0x54], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CDA5; /* 0x1704CD9D: je 0x1704cda5 */
L_1704CD9F:
    eax = MEM32(ebx); /* 0x1704CD9F: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CDA1: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x1704CDA2: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_1704CDA5:
    /* cmp MEM32(ebp + (-0x5C)), edi */ /* 0x1704CDA5: cmp dword ptr [ebp - 0x5c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CDB3; /* 0x1704CDA8: je 0x1704cdb3 */
L_1704CDAA:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CDAA: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704CDAD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CDAF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x64)); /* 0x1704CDB0: call dword ptr [ecx + 0x64] */
    RECOMP_FLAGS_IN();
L_1704CDB3:
    eax = MEM32(ebp + (-0x4)); /* 0x1704CDB3: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, edi */ /* 0x1704CDB6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1704CDB8: pop edi */
    esi = POP32_VAL(esp); /* 0x1704CDB9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704CDBA: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CDC3; /* 0x1704CDBB: je 0x1704cdc3 */
L_1704CDBD:
    ecx = MEM32(eax); /* 0x1704CDBD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704CDBF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704CDC0: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1704CDC3:
    eax = MEM32(ebp + 0x8); /* 0x1704CDC3: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704CDC6: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704CDC7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704CDCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704CDCFu);

L_1704CDCF:
    edi = edi; /* 0x1704CDCF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704CDD1: push ebp */
    ebp = esp; /* 0x1704CDD2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1704CDD4: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704CDD7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704CDDB: push ebx */
    PUSH32(esp, esi); /* 0x1704CDDC: push esi */
    PUSH32(esp, edi); /* 0x1704CDDD: push edi */
    ecx = ebp + (-0x14); /* 0x1704CDDE: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1721B86C); /* 0x1704CDE1: call 0x1721b86c */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1704CDE6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1704CDE9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CE95; /* 0x1704CDEB: je 0x1704ce95 */
L_1704CDF1:
    esi = MEM32(ebp + 0x10); /* 0x1704CDF1: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1704CDF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CE95; /* 0x1704CDF6: je 0x1704ce95 */
L_1704CDFC:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1704CDFC: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CE95; /* 0x1704CE00: je 0x1704ce95 */
L_1704CE06:
    edi = MEM32(ebp + 0x18); /* 0x1704CE06: mov edi, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x1704CE09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CE95; /* 0x1704CE0B: je 0x1704ce95 */
L_1704CE11:
    eax = MEM32(ebx); /* 0x1704CE11: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CE13: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704CE14: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), 0x440u */ /* 0x1704CE17: test ax, 0x440 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704CE95; /* 0x1704CE1B: jne 0x1704ce95 */
L_1704CE1D:
    /* cmp esi, edi */ /* 0x1704CE1D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CE3B; /* 0x1704CE1F: je 0x1704ce3b */
L_1704CE21:
    eax = MEM32(ebx); /* 0x1704CE21: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CE23: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1704CE24: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = eax + eax * 2; /* 0x1704CE27: lea ecx, [eax + eax*2] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704CE2A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704CE2A: shl ecx, 2 */
    eax = ecx; /* 0x1704CE2D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704CE2F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704CE2F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704CE32: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704CE34: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CE36: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704CE39: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1704CE3B:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1704CE3B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CE51; /* 0x1704CE3F: je 0x1704ce51 */
L_1704CE41:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704CE41: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1704CE44: push ebx */
    RECOMP_CALL(sub_1704BDB7); /* 0x1704CE45: call 0x1704bdb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CE4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704CE4C: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704CE77; /* 0x1704CE4F: jl 0x1704ce77 */
L_1704CE51:
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1704CE51: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CE6C; /* 0x1704CE55: je 0x1704ce6c */
L_1704CE57:
    eax = ebp + (-0x14); /* 0x1704CE57: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1704CE5A: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704CE5B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704CE5E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1704CE61: push ebx */
    RECOMP_CALL(sub_1704C833); /* 0x1704CE62: call 0x1704c833 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1704CE67: mov dword ptr [ebp - 4], eax */
    goto L_1704CE77; /* 0x1704CE6A: jmp 0x1704ce77 */
L_1704CE6C:
    eax = MEM32(ebp + 0x14); /* 0x1704CE6C: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ebx; /* 0x1704CE6F: mov dword ptr [eax], ebx */
    eax = MEM32(ebx); /* 0x1704CE71: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1704CE73: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1704CE74: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1704CE77:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1704CE77: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CE90; /* 0x1704CE7B: je 0x1704ce90 */
L_1704CE7D:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1704CE7D: push dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x14); /* 0x1704CE80: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1721B980); /* 0x1704CE83: call 0x1721b980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704CE88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704CE90; /* 0x1704CE8A: jge 0x1704ce90 */
L_1704CE8C:
    esi = eax; /* 0x1704CE8C: mov esi, eax */
    goto L_1704CE9A; /* 0x1704CE8E: jmp 0x1704ce9a */
L_1704CE90:
    esi = MEM32(ebp + (-0x4)); /* 0x1704CE90: mov esi, dword ptr [ebp - 4] */
    goto L_1704CE9A; /* 0x1704CE93: jmp 0x1704ce9a */
L_1704CE95:
    esi = 0x8876086Cu; /* 0x1704CE95: mov esi, 0x8876086c */
L_1704CE9A:
    ecx = ebp + (-0x14); /* 0x1704CE9A: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1721B881); /* 0x1704CE9D: call 0x1721b881 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1704CEA2: pop edi */
    eax = esi; /* 0x1704CEA3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1704CEA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704CEA6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704CEA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1704CEA8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704CEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704CEB0u);

L_1704CEB0:
    edi = edi; /* 0x1704CEB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704CEB2: push ebp */
    ebp = esp; /* 0x1704CEB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704CEB5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704CEB6: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1704CEB9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704CEC4; /* 0x1704CEBB: jne 0x1704cec4 */
L_1704CEBD:
    eax = 0x8876086Cu; /* 0x1704CEBD: mov eax, 0x8876086c */
    goto L_1704CEE3; /* 0x1704CEC2: jmp 0x1704cee3 */
L_1704CEC4:
    eax = MEM32(esi); /* 0x1704CEC4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704CEC6: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704CEC7: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x1704CECA: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1704CECC: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704CECE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704CED1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704CED4: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CEDE; /* 0x1704CED5: je 0x1704cede */
L_1704CED7:
    RECOMP_CALL(sub_1704C204); /* 0x1704CED7: call 0x1704c204 */
    RECOMP_FLAGS_IN();
    goto L_1704CEE3; /* 0x1704CEDC: jmp 0x1704cee3 */
L_1704CEDE:
    RECOMP_CALL(sub_1704C519); /* 0x1704CEDE: call 0x1704c519 */
    RECOMP_FLAGS_IN();
L_1704CEE3:
    esi = POP32_VAL(esp); /* 0x1704CEE3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704CEE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704CEE5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704CEED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704CEEDu);

L_1704CEED:
    edi = edi; /* 0x1704CEED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704CEEF: push ebp */
    ebp = esp; /* 0x1704CEF0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704CEF2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1704CEF5: mov ecx, dword ptr [ebp + 0x10] */
    eax = eax + eax * 2; /* 0x1704CEF8: lea eax, [eax + eax*2] */
    edx = ecx + eax * 4; /* 0x1704CEFB: lea edx, [ecx + eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x1704CEFE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704CF01: push esi */
    PUSH32(esp, edi); /* 0x1704CF02: push edi */
    eax = eax + eax * 2; /* 0x1704CF03: lea eax, [eax + eax*2] */
    ecx = ecx + eax * 4; /* 0x1704CF06: lea ecx, [ecx + eax*4] */
    PUSH32(esp, 3); /* 0x1704CF09: push 3 */
    eax = edx; /* 0x1704CF0B: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704CF0D: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1704CF0F: pop esi */
L_1704CF10:
    edi = MEM32(eax); /* 0x1704CF10: mov edi, dword ptr [eax] */
    edx = MEM32(ecx + eax); /* 0x1704CF12: mov edx, dword ptr [ecx + eax] */
    MEM32(ecx + eax) = edi; /* 0x1704CF15: mov dword ptr [ecx + eax], edi */
    MEM32(eax) = edx; /* 0x1704CF18: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704CF1A: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1704CF1D: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704CF10; /* 0x1704CF1E: jne 0x1704cf10 */
L_1704CF20:
    edi = POP32_VAL(esp); /* 0x1704CF20: pop edi */
    esi = POP32_VAL(esp); /* 0x1704CF21: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704CF22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704CF23: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704CF2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704CF2Bu);

L_1704CF2B:
    edi = edi; /* 0x1704CF2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704CF2D: push ebp */
    ebp = esp; /* 0x1704CF2E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704CF30: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1704CF33: mov ecx, dword ptr [ebp + 0x10] */
    eax = eax + eax * 2; /* 0x1704CF36: lea eax, [eax + eax*2] */
    ecx = ecx + eax * 4; /* 0x1704CF39: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704CF3C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704CF3E: push esi */
L_1704CF3F:
    eax = MEM32(ecx + edx * 4); /* 0x1704CF3F: mov eax, dword ptr [ecx + edx*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1704CF42: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CF52; /* 0x1704CF45: je 0x1704cf52 */
L_1704CF47:
    esi = MEM32(ebp + 0xC); /* 0x1704CF47: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + eax * 4); /* 0x1704CF4A: mov eax, dword ptr [esi + eax*4] */
    MEM32(ecx + edx * 4) = eax; /* 0x1704CF4D: mov dword ptr [ecx + edx*4], eax */
    goto L_1704CF56; /* 0x1704CF50: jmp 0x1704cf56 */
L_1704CF52:
    _flag_a = (uint32_t)((MEM32(ecx + edx * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + edx * 4) | 0xFFFFFFFFu));
    MEM32(ecx + edx * 4) = MEM32(ecx + edx * 4) | 0xFFFFFFFFu; /* 0x1704CF52: or dword ptr [ecx + edx*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704CF56:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704CF56: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x1704CF57: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704CF3F; /* 0x1704CF5A: jb 0x1704cf3f */
L_1704CF5C:
    esi = POP32_VAL(esp); /* 0x1704CF5C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704CF5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704CF5E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704CF66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704CF66u);

L_1704CF66:
    edi = edi; /* 0x1704CF66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704CF68: push ebp */
    ebp = esp; /* 0x1704CF69: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704CF6B: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704CF6C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704CF70: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704CF71: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B01C); /* 0x1704CF74: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1704CF79: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1704CF7B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704CF7D: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704CF89; /* 0x1704CF7E: jne 0x1704cf89 */
L_1704CF80:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704CF80: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1704CFF9; /* 0x1704CF87: jmp 0x1704cff9 */
L_1704CF89:
    ecx = MEM32(ebp + 0x10); /* 0x1704CF89: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1704CF8C: mov edx, ecx */
    PUSH32(esp, edi); /* 0x1704CF8E: push edi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704CF8F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704CF8F: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704CF92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704CF94: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704CF96: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704CF98: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704CF9A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704CF9D: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704CF9F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1704CFA1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704CFF8; /* 0x1704CFA3: jbe 0x1704cff8 */
L_1704CFA5:
    PUSH32(esp, esi); /* 0x1704CFA5: push esi */
L_1704CFA6:
    /* cmp MEM8(edi + ebx), 0 */ /* 0x1704CFA6: cmp byte ptr [edi + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(edi + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CFF1; /* 0x1704CFAA: jne 0x1704cff1 */
L_1704CFAC:
    eax = MEM32(ebp + 0x8); /* 0x1704CFAC: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + edi * 4); /* 0x1704CFAF: mov esi, dword ptr [eax + edi*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1704CFB2: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CFF1; /* 0x1704CFB5: je 0x1704cff1 */
L_1704CFB7:
    goto L_1704CFE1; /* 0x1704CFB7: jmp 0x1704cfe1 */
L_1704CFB9:
    PUSH32(esp, esi); /* 0x1704CFB9: push esi */
    PUSH32(esp, edi); /* 0x1704CFBA: push edi */
    RECOMP_CALL(sub_1704CEED); /* 0x1704CFBB: call 0x1704ceed */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704CFC0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704CFC3: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1704CFC6: push esi */
    RECOMP_CALL(sub_1704CF2B); /* 0x1704CFC7: call 0x1704cf2b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1704CFCC: mov eax, dword ptr [ebp + 8] */
    MEM8(esi + ebx) = (uint8_t)(1); /* 0x1704CFCF: mov byte ptr [esi + ebx], 1 */
    esi = MEM32(eax + esi * 4); /* 0x1704CFD3: mov esi, dword ptr [eax + esi*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1704CFD6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704CFF1; /* 0x1704CFD9: je 0x1704cff1 */
L_1704CFDB:
    /* cmp MEM8(esi + ebx), 0 */ /* 0x1704CFDB: cmp byte ptr [esi + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CFF1; /* 0x1704CFDF: jne 0x1704cff1 */
L_1704CFE1:
    /* cmp esi, edi */ /* 0x1704CFE1: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704CFE3: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704CFB9; /* 0x1704CFE6: jne 0x1704cfb9 */
L_1704CFE8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704CFE8: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1704CFEB: push edi */
    RECOMP_CALL(sub_1704CF2B); /* 0x1704CFEC: call 0x1704cf2b */
    RECOMP_FLAGS_IN();
L_1704CFF1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704CFF1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x1704CFF2: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704CFA6; /* 0x1704CFF5: jb 0x1704cfa6 */
L_1704CFF7:
    esi = POP32_VAL(esp); /* 0x1704CFF7: pop esi */
L_1704CFF8:
    edi = POP32_VAL(esp); /* 0x1704CFF8: pop edi */
L_1704CFF9:
    PUSH32(esp, ebx); /* 0x1704CFF9: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1704CFFA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1704CFFF: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1704D002: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1704D003: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704D004: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704D005: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704D00D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D00Du);

L_1704D00D:
    edi = edi; /* 0x1704D00D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D00F: push ebp */
    ebp = esp; /* 0x1704D010: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1704D012: push ebx */
    PUSH32(esp, esi); /* 0x1704D013: push esi */
    esi = MEM32(ebp + 0x24); /* 0x1704D014: mov esi, dword ptr [ebp + 0x24] */
    ecx = MEM32(esi); /* 0x1704D017: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1704D019: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1704D01A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D01D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x1C); /* 0x1704D01F: mov ebx, dword ptr [ebp + 0x1c] */
    eax = edi; /* 0x1704D022: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x20); /* 0x1704D024: div dword ptr [ebp + 0x20] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = ecx + ecx * 4; /* 0x1704D027: lea eax, [ecx + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704D02A: inc ecx */
    _flag_k = FK_INC;
    MEM32(esi) = ecx; /* 0x1704D02B: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1704D02D: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebx + eax * 4; /* 0x1704D030: lea eax, [ebx + eax*4] */
    MEM32(eax + 0xC) = ecx; /* 0x1704D033: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1704D036: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x1704D039: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1704D03C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x1704D03F: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x1704D042: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax) = edi; /* 0x1704D045: mov dword ptr [eax], edi */
    edi = POP32_VAL(esp); /* 0x1704D047: pop edi */
    esi = POP32_VAL(esp); /* 0x1704D048: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704D049: pop ebx */
    ecx = ecx + edx * 4; /* 0x1704D04A: lea ecx, [ecx + edx*4] */
    edx = MEM32(ecx); /* 0x1704D04D: mov edx, dword ptr [ecx] */
    MEM32(eax + 0x10) = edx; /* 0x1704D04F: mov dword ptr [eax + 0x10], edx */
    MEM32(ecx) = eax; /* 0x1704D052: mov dword ptr [ecx], eax */
    ebp = POP32_VAL(esp); /* 0x1704D054: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1704D055: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1704D05D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D05Du);

L_1704D05D:
    edi = edi; /* 0x1704D05D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D05F: push ebp */
    ebp = esp; /* 0x1704D060: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704D062: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704D063: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D066: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1704D068: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x18); /* 0x1704D06A: div dword ptr [ebp + 0x18] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0x14); /* 0x1704D06D: mov eax, dword ptr [ebp + 0x14] */
    ecx = eax + edx * 4; /* 0x1704D070: lea ecx, [eax + edx*4] */
    eax = MEM32(ecx); /* 0x1704D073: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D075: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1704D077: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D0AA; /* 0x1704D079: je 0x1704d0aa */
L_1704D07B:
    PUSH32(esp, edi); /* 0x1704D07B: push edi */
L_1704D07C:
    edi = MEM32(eax + 0xC); /* 0x1704D07C: mov edi, dword ptr [eax + 0xc] */
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x1704D07F: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D090; /* 0x1704D082: jne 0x1704d090 */
L_1704D084:
    edi = MEM32(eax + 0x4); /* 0x1704D084: mov edi, dword ptr [eax + 4] */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1704D087: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D090; /* 0x1704D08A: jne 0x1704d090 */
L_1704D08C:
    /* cmp MEM32(eax), esi */ /* 0x1704D08C: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D09B; /* 0x1704D08E: je 0x1704d09b */
L_1704D090:
    edx = eax; /* 0x1704D090: mov edx, eax */
    eax = MEM32(eax + 0x10); /* 0x1704D092: mov eax, dword ptr [eax + 0x10] */
    /* test eax, eax */ /* 0x1704D095: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D07C; /* 0x1704D097: jne 0x1704d07c */
L_1704D099:
    goto L_1704D0A9; /* 0x1704D099: jmp 0x1704d0a9 */
L_1704D09B:
    /* test edx, edx */ /* 0x1704D09B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x10); /* 0x1704D09D: mov eax, dword ptr [eax + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D0A7; /* 0x1704D0A0: je 0x1704d0a7 */
L_1704D0A2:
    MEM32(edx + 0x10) = eax; /* 0x1704D0A2: mov dword ptr [edx + 0x10], eax */
    goto L_1704D0A9; /* 0x1704D0A5: jmp 0x1704d0a9 */
L_1704D0A7:
    MEM32(ecx) = eax; /* 0x1704D0A7: mov dword ptr [ecx], eax */
L_1704D0A9:
    edi = POP32_VAL(esp); /* 0x1704D0A9: pop edi */
L_1704D0AA:
    esi = POP32_VAL(esp); /* 0x1704D0AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704D0AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704D0AC: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704D0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D0B4u);

L_1704D0B4:
    edi = edi; /* 0x1704D0B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D0B6: push ebp */
    ebp = esp; /* 0x1704D0B7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D0B9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704D0BC: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1704D0BF: push eax */
    RECOMP_ICALL(MEM32(0x17001104)); /* 0x1704D0C0: call dword ptr [0x17001104] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704D0C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D0C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D0CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D0CFu);

L_1704D0CF:
    edi = edi; /* 0x1704D0CF: mov edi, edi */
    PUSH32(esp, edi); /* 0x1704D0D1: push edi */
    edx = ecx; /* 0x1704D0D2: mov edx, ecx */
    PUSH32(esp, 8); /* 0x1704D0D4: push 8 */
    ecx = POP32_VAL(esp); /* 0x1704D0D6: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D0D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1704D0D9: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704D0DB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x1704D0DD: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x1704D0DF: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704D0E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704D0E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D0E6u);

L_1704D0E6:
    edi = edi; /* 0x1704D0E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D0E8: push ebp */
    ebp = esp; /* 0x1704D0E9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D0EB: mov eax, dword ptr [ebp + 8] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1704D0EE: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1704D0EE: shr eax, 5 */
    eax = ecx + eax * 4; /* 0x1704D0F1: lea eax, [ecx + eax*4] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D0F4: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D0F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1704D0F9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704D0FC: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1704D0FD: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1704D0FD: shl edx, cl */
    _flag_a = (uint32_t)((MEM32(eax) | edx)); _flag_b = (uint32_t)((MEM32(eax) | edx));
    MEM32(eax) = MEM32(eax) | edx; /* 0x1704D0FF: or dword ptr [eax], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1704D101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D102: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D10A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D10Au);

L_1704D10A:
    edi = edi; /* 0x1704D10A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D10C: push ebp */
    ebp = esp; /* 0x1704D10D: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1704D10F: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1704D112: push esi */
    esi = ecx; /* 0x1704D113: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D115: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1704D117: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1704D119: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704D11C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1704D11D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1704D11D: shl eax, cl */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1704D11F: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1704D11F: shr edx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edx * 4));
    eax = eax & MEM32(esi + edx * 4); /* 0x1704D122: and eax, dword ptr [esi + edx*4] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704D125: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704D126: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D127: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D12F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D12Fu);

L_1704D12F:
    edi = edi; /* 0x1704D12F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D131: push ebp */
    ebp = esp; /* 0x1704D132: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D134: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1704D137: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1704D139: push esi */
    esi = edx; /* 0x1704D13A: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    esi = esi & MEM32(ecx); /* 0x1704D13C: and esi, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D13E: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D140: jne 0x1704d19b */
L_1704D142:
    edx = MEM32(eax + 0x4); /* 0x1704D142: mov edx, dword ptr [eax + 4] */
    esi = MEM32(ecx + 0x4); /* 0x1704D145: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D148: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D14A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D14C: jne 0x1704d19b */
L_1704D14E:
    edx = MEM32(eax + 0x8); /* 0x1704D14E: mov edx, dword ptr [eax + 8] */
    esi = MEM32(ecx + 0x8); /* 0x1704D151: mov esi, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D154: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D156: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D158: jne 0x1704d19b */
L_1704D15A:
    edx = MEM32(eax + 0xC); /* 0x1704D15A: mov edx, dword ptr [eax + 0xc] */
    esi = MEM32(ecx + 0xC); /* 0x1704D15D: mov esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D160: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D162: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D164: jne 0x1704d19b */
L_1704D166:
    edx = MEM32(eax + 0x10); /* 0x1704D166: mov edx, dword ptr [eax + 0x10] */
    esi = MEM32(ecx + 0x10); /* 0x1704D169: mov esi, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D16C: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D16E: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D170: jne 0x1704d19b */
L_1704D172:
    edx = MEM32(eax + 0x14); /* 0x1704D172: mov edx, dword ptr [eax + 0x14] */
    esi = MEM32(ecx + 0x14); /* 0x1704D175: mov esi, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D178: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D17A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D17C: jne 0x1704d19b */
L_1704D17E:
    edx = MEM32(eax + 0x18); /* 0x1704D17E: mov edx, dword ptr [eax + 0x18] */
    esi = MEM32(ecx + 0x18); /* 0x1704D181: mov esi, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1704D184: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1704D186: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D188: jne 0x1704d19b */
L_1704D18A:
    eax = MEM32(eax + 0x1C); /* 0x1704D18A: mov eax, dword ptr [eax + 0x1c] */
    ecx = MEM32(ecx + 0x1C); /* 0x1704D18D: mov ecx, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1704D190: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1704D192: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D19B; /* 0x1704D194: jne 0x1704d19b */
L_1704D196:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D196: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704D198: inc eax */
    _flag_k = FK_INC;
    goto L_1704D19D; /* 0x1704D199: jmp 0x1704d19d */
L_1704D19B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D19B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D19D:
    esi = POP32_VAL(esp); /* 0x1704D19D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704D19E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D19F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D1A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D1A7u);

L_1704D1A7:
    edi = edi; /* 0x1704D1A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D1A9: push ebp */
    ebp = esp; /* 0x1704D1AA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D1AC: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1704D1AF: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704D1B2: push esi */
    esi = MEM32(eax); /* 0x1704D1B3: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)((esi | MEM32(edx))); _flag_b = (uint32_t)((esi | MEM32(edx)));
    esi = esi | MEM32(edx); /* 0x1704D1B5: or esi, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = esi; /* 0x1704D1B7: mov dword ptr [ecx], esi */
    esi = MEM32(eax + 0x4); /* 0x1704D1B9: mov esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0x4))); _flag_b = (uint32_t)((esi | MEM32(edx + 0x4)));
    esi = esi | MEM32(edx + 0x4); /* 0x1704D1BC: or esi, dword ptr [edx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = esi; /* 0x1704D1BF: mov dword ptr [ecx + 4], esi */
    esi = MEM32(eax + 0x8); /* 0x1704D1C2: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0x8))); _flag_b = (uint32_t)((esi | MEM32(edx + 0x8)));
    esi = esi | MEM32(edx + 0x8); /* 0x1704D1C5: or esi, dword ptr [edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = esi; /* 0x1704D1C8: mov dword ptr [ecx + 8], esi */
    esi = MEM32(eax + 0xC); /* 0x1704D1CB: mov esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0xC))); _flag_b = (uint32_t)((esi | MEM32(edx + 0xC)));
    esi = esi | MEM32(edx + 0xC); /* 0x1704D1CE: or esi, dword ptr [edx + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = esi; /* 0x1704D1D1: mov dword ptr [ecx + 0xc], esi */
    esi = MEM32(eax + 0x10); /* 0x1704D1D4: mov esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0x10))); _flag_b = (uint32_t)((esi | MEM32(edx + 0x10)));
    esi = esi | MEM32(edx + 0x10); /* 0x1704D1D7: or esi, dword ptr [edx + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x10) = esi; /* 0x1704D1DA: mov dword ptr [ecx + 0x10], esi */
    esi = MEM32(eax + 0x14); /* 0x1704D1DD: mov esi, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0x14))); _flag_b = (uint32_t)((esi | MEM32(edx + 0x14)));
    esi = esi | MEM32(edx + 0x14); /* 0x1704D1E0: or esi, dword ptr [edx + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = esi; /* 0x1704D1E3: mov dword ptr [ecx + 0x14], esi */
    esi = MEM32(eax + 0x18); /* 0x1704D1E6: mov esi, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)((esi | MEM32(edx + 0x18))); _flag_b = (uint32_t)((esi | MEM32(edx + 0x18)));
    esi = esi | MEM32(edx + 0x18); /* 0x1704D1E9: or esi, dword ptr [edx + 0x18] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = esi; /* 0x1704D1EC: mov dword ptr [ecx + 0x18], esi */
    eax = MEM32(eax + 0x1C); /* 0x1704D1EF: mov eax, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)((eax | MEM32(edx + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(edx + 0x1C)));
    eax = eax | MEM32(edx + 0x1C); /* 0x1704D1F2: or eax, dword ptr [edx + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704D1F5: pop esi */
    MEM32(ecx + 0x1C) = eax; /* 0x1704D1F6: mov dword ptr [ecx + 0x1c], eax */
    ebp = POP32_VAL(esp); /* 0x1704D1F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704D1FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704D202(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D202u);

L_1704D202:
    edi = edi; /* 0x1704D202: mov edi, edi */
    PUSH32(esp, esi); /* 0x1704D204: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D205: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704D207: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704D208: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D20A:
    edx = MEM32(ecx + esi * 4); /* 0x1704D20A: mov edx, dword ptr [ecx + esi*4] */
    goto L_1704D21B; /* 0x1704D20D: jmp 0x1704d21b */
L_1704D20F:
    edi = edx + (-0x1); /* 0x1704D20F: lea edi, [edx - 1] */
    edi = ~edi; /* 0x1704D212: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x1704D214: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ~edi; /* 0x1704D216: not edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x1704D218: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704D21A: inc eax */
    _flag_k = FK_INC;
L_1704D21B:
    /* test edx, edx */ /* 0x1704D21B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D20F; /* 0x1704D21D: jne 0x1704d20f */
L_1704D21F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704D21F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x1704D220: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D20A; /* 0x1704D223: jb 0x1704d20a */
L_1704D225:
    edi = POP32_VAL(esp); /* 0x1704D225: pop edi */
    esi = POP32_VAL(esp); /* 0x1704D226: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704D227: ret  */
    RECOMP_REGS_OUT();
}
