#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1002E3AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E3ADu);

L_1002E3AD:
    PUSH32(esp, ebp); /* 0x1002E3AD: push ebp */
    ebp = esp; /* 0x1002E3AE: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1002E3B0: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1002E3B7: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AB33; /* 0x1002E3B8: je 0x1005ab33 */
L_1002E3BE:
    PUSH32(esp, 0); /* 0x1002E3BE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002E3C0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002E3C3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E3C6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002E311); /* 0x1002E3C9: call 0x1002e311 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002E3CE: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1002E3D1:
    esi = POP32_VAL(esp); /* 0x1002E3D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002E3D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E3D3: ret  */
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
L_1005AB33:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1005AB33: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AB53; /* 0x1005AB37: jne 0x1005ab53 */
L_1005AB39:
    RECOMP_CALL(sub_1001177D); /* 0x1005AB39: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AB3E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AB44: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1005AB49: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_1002E3D1; /* 0x1005AB4E: jmp 0x1002e3d1 */
L_1005AB53:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1005AB53: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005AB39; /* 0x1005AB57: je 0x1005ab39 */
L_1005AB59:
    esi = 0x7FFFFFFFu; /* 0x1005AB59: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1005AB5E: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005AB7A; /* 0x1005AB61: jbe 0x1005ab7a */
L_1005AB63:
    RECOMP_CALL(sub_1001177D); /* 0x1005AB63: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AB68: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005AB6E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005AB73: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1002E3D1; /* 0x1005AB75: jmp 0x1002e3d1 */
L_1005AB7A:
    esi = POP32_VAL(esp); /* 0x1005AB7A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1005AB7B: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10032A50; /* 0x1005AB7C: jmp 0x10032a50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E3D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E3D4u);

L_1002E3D4:
    PUSH32(esp, ebp); /* 0x1002E3D4: push ebp */
    ebp = esp; /* 0x1002E3D5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1002E3D7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1002E3DA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002E3DC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002E3DF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E3E2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10013EF3); /* 0x1002E3E5: call 0x10013ef3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002E3EA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002E3ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E3EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E40C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E40Cu);

L_1002E40C:
    PUSH32(esp, 7); /* 0x1002E40C: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002E40E: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E413: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E414: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E415(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E415u);

    goto L_1002E415;
L_1002E40C:
    PUSH32(esp, 7); /* 0x1002E40C: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002E40E: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E413: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E414: ret  */
L_1002E415:
    PUSH32(esp, 0x10u); /* 0x1002E415: push 0x10 */
    PUSH32(esp, 0x1002E490u); /* 0x1002E417: push 0x1002e490 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002E41C: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002E421: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1002E423: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x1002E426: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002E428: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E42D: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1002E42E: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E431: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1002E433: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1002E436: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002E438: setne al */
    /* test eax, eax */ /* 0x1002E43B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F4D5; /* 0x1002E43D: je 0x1005f4d5 */
L_1002E443:
    MEM32(ecx) = esi; /* 0x1002E443: mov dword ptr [ecx], esi */
    edi = MEM32(ebp + 0xC); /* 0x1002E445: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1002E448: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F4E9; /* 0x1002E44A: jne 0x1005f4e9 */
L_1002E450:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E450: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1002E452: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002E455: setne al */
    /* test eax, eax */ /* 0x1002E458: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F4D5; /* 0x1002E45A: je 0x1005f4d5 */
L_1002E460:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002E460: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10029555); /* 0x1002E463: call 0x10029555 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E468: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1002E469: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1002E46C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E7B5; /* 0x1002E46E: jne 0x1002e7b5 */
L_1002E474:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1002E474: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002E477: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002E40C); /* 0x1002E47E: call 0x1002e40c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002E483: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x1002E485: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E48A: ret  */
L_1002E7B5:
    PUSH32(esp, eax); /* 0x1002E7B5: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002E7B6: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ebx = eax + 0x1; /* 0x1002E7BB: lea ebx, [eax + 1] */
    PUSH32(esp, 2); /* 0x1002E7BE: push 2 */
    PUSH32(esp, ebx); /* 0x1002E7C0: push ebx */
    RECOMP_CALL(sub_1001CBFF); /* 0x1002E7C1: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002E7C6: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x1002E7C9: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1002E7CC: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x1002E7CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F4F0; /* 0x1002E7D0: je 0x1005f4f0 */
L_1002E7D6:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1002E7D6: push dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x1002E7D9: push ebx */
    PUSH32(esp, eax); /* 0x1002E7DA: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1002E7DB: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002E7E0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002E7E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F50E; /* 0x1002E7E5: jne 0x1005f50e */
L_1002E7EB:
    /* test edi, edi */ /* 0x1002E7EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E474; /* 0x1002E7ED: je 0x1002e474 */
L_1002E7F3:
    goto L_1005F507; /* 0x1002E7F3: jmp 0x1005f507 */
L_1005F4D5:
    RECOMP_CALL(sub_1001177D); /* 0x1005F4D5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005F4DA: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005F4DC: pop esi */
    MEM32(eax) = esi; /* 0x1005F4DD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005F4DF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002E474; /* 0x1005F4E4: jmp 0x1002e474 */
L_1005F4E9:
    MEM32(edi) = esi; /* 0x1005F4E9: mov dword ptr [edi], esi */
    RECOMP_BACKEDGE();
    goto L_1002E450; /* 0x1005F4EB: jmp 0x1002e450 */
L_1005F4F0:
    RECOMP_CALL(sub_1001177D); /* 0x1005F4F0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005F4F5: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001177D); /* 0x1005F4FB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1005F500: mov esi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1002E474; /* 0x1005F502: jmp 0x1002e474 */
L_1005F507:
    MEM32(edi) = ebx; /* 0x1005F507: mov dword ptr [edi], ebx */
    RECOMP_BACKEDGE();
    goto L_1002E474; /* 0x1005F509: jmp 0x1002e474 */
L_1005F50E:
    PUSH32(esp, esi); /* 0x1005F50E: push esi */
    PUSH32(esp, esi); /* 0x1005F50F: push esi */
    PUSH32(esp, esi); /* 0x1005F510: push esi */
    PUSH32(esp, esi); /* 0x1005F511: push esi */
    PUSH32(esp, esi); /* 0x1005F512: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1005F513: call 0x100a469b */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1005F518: mov esi, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_1002E40C; /* 0x1005F51B: jmp 0x1002e40c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E4ACu);

L_1002E4AC:
    PUSH32(esp, ebp); /* 0x1002E4AC: push ebp */
    ebp = esp; /* 0x1002E4AD: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1002E4AF: pop ebp */
    goto L_1002E662; /* 0x1002E4B0: jmp 0x1002e662 */
L_1002E662:
    PUSH32(esp, ebp); /* 0x1002E662: push ebp */
    ebp = esp; /* 0x1002E663: mov ebp, esp */
    PUSH32(esp, 0xAu); /* 0x1002E665: push 0xa */
    PUSH32(esp, 0); /* 0x1002E667: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E669: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002E63B); /* 0x1002E66C: call 0x1002e63b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002E671: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002E674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E675: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E4B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E4B5u);

L_1002E4B5:
    PUSH32(esp, ebp); /* 0x1002E4B5: push ebp */
    ebp = esp; /* 0x1002E4B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1002E4B8: sub esp, 0x24 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x24); /* 0x1002E4BB: lea ecx, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E4BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F764); /* 0x1002E4C1: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1002E4C6: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1002E4C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056F80; /* 0x1002E4CB: jne 0x10056f80 */
L_1002E4D1:
    eax = MEM32(ebp + 0xC); /* 0x1002E4D1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1002E4D4: push ebx */
    PUSH32(esp, esi); /* 0x1002E4D5: push esi */
    PUSH32(esp, edi); /* 0x1002E4D6: push edi */
    /* test eax, eax */ /* 0x1002E4D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003267B; /* 0x1002E4D9: je 0x1003267b */
L_1002E4DF:
    edi = MEM32(ebp + 0x14); /* 0x1002E4DF: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1002E4E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E4F8; /* 0x1002E4E4: je 0x1002e4f8 */
L_1002E4E6:
    /* cmp edi, 2 */ /* 0x1002E4E6: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1003267B; /* 0x1002E4E9: jl 0x1003267b */
L_1002E4EF:
    /* cmp edi, 0x24u */ /* 0x1002E4EF: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1003267B; /* 0x1002E4F2: jg 0x1003267b */
L_1002E4F8:
    edi = MEM32(ebp + (-0x24)); /* 0x1002E4F8: mov edi, dword ptr [ebp - 0x24] */
    esi = eax + 0x1; /* 0x1002E4FB: lea esi, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002E4FE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1002E500: mov dword ptr [ebp - 0xc], ebx */
    SET_LO8(ebx, MEM8(eax)); /* 0x1002E503: mov bl, byte ptr [eax] */
L_1002E505:
    /* cmp MEM32(edi + 0x74), 1 */ /* 0x1002E505: cmp dword ptr [edi + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056F9A; /* 0x1002E509: jg 0x10056f9a */
L_1002E50F:
    eax = MEM32(edi + 0x90); /* 0x1002E50F: mov eax, dword ptr [edi + 0x90] */
    ecx = (uint32_t)LO8(ebx); /* 0x1002E515: movzx ecx, bl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1002E518: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1002E51C: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002E51F:
    /* test eax, eax */ /* 0x1002E51F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056FB4; /* 0x1002E521: jne 0x10056fb4 */
L_1002E527:
    eax = MEM32(ebp + 0x18); /* 0x1002E527: mov eax, dword ptr [ebp + 0x18] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1002E52A: mov byte ptr [ebp - 1], bl */
    /* cmp LO8(ebx), 0x2Du */ /* 0x1002E52D: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056FBC; /* 0x1002E530: je 0x10056fbc */
L_1002E536:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x1002E536: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032685; /* 0x1002E539: je 0x10032685 */
L_1002E53F:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x1002E53F: mov cl, byte ptr [ebp - 1] */
L_1002E542:
    edi = MEM32(ebp + 0x14); /* 0x1002E542: mov edi, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1002E545: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1002E548: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x1002E54B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10032699; /* 0x1002E54D: js 0x10032699 */
L_1002E553:
    /* cmp edi, 1 */ /* 0x1002E553: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032699; /* 0x1002E556: je 0x10032699 */
L_1002E55C:
    /* cmp edi, 0x24u */ /* 0x1002E55C: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10032699; /* 0x1002E55F: jg 0x10032699 */
L_1002E565:
    /* test edi, edi */ /* 0x1002E565: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056FC4; /* 0x1002E567: je 0x10056fc4 */
L_1002E56D:
    /* cmp edi, 0x10u */ /* 0x1002E56D: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003265E; /* 0x1002E570: je 0x1003265e */
L_1002E576:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002E576: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1002E579: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1002E57B: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0xC)) = eax; /* 0x1002E57D: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1002E580: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1002E583: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x1002E586: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x90); /* 0x1002E589: mov eax, dword ptr [eax + 0x90] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002E58F: mov dword ptr [ebp - 0x14], eax */
L_1002E592:
    ecx = (uint32_t)LO8(ecx); /* 0x1002E592: movzx ecx, cl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1002E595: movzx eax, word ptr [eax + ecx*2] */
    ecx = eax; /* 0x1002E599: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    ecx = ecx & 4; /* 0x1002E59B: and ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E5C9; /* 0x1002E59E: je 0x1002e5c9 */
L_1002E5A0:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x1002E5A0: movsx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1002E5A4: sub eax, 0x30 */
    _flag_k = FK_CMP;
L_1002E5A7:
    /* cmp eax, edi */ /* 0x1002E5A7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002E5D4; /* 0x1002E5A9: jae 0x1002e5d4 */
L_1002E5AB:
    ecx = MEM32(ebp + (-0xC)); /* 0x1002E5AB: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((edx | 8)); _flag_b = (uint32_t)((edx | 8));
    edx = edx | 8; /* 0x1002E5AE: or edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, ecx */ /* 0x1002E5B1: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10056FFF; /* 0x1002E5B3: jae 0x10056fff */
L_1002E5B9:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1002E5B9: imul ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1002E5BC: add ebx, eax */
    _flag_k = FK_ADD;
L_1002E5BE:
    SET_LO8(ecx, MEM8(esi)); /* 0x1002E5BE: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002E5C0: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x1002E5C1: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1002E5C4: mov byte ptr [ebp - 1], cl */
    RECOMP_BACKEDGE();
    goto L_1002E592; /* 0x1002E5C7: jmp 0x1002e592 */
L_1002E5C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    eax = eax & 0x103u; /* 0x1002E5C9: and eax, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056FE7; /* 0x1002E5CE: jne 0x10056fe7 */
L_1002E5D4:
    eax = MEM32(ebp + 0x10); /* 0x1002E5D4: mov eax, dword ptr [ebp + 0x10] */
L_1002E5D7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002E5D7: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1002E5D8: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1002E5DB: mov dword ptr [ebp - 8], edx */
    /* test LO8(edx), 8 */ /* 0x1002E5DE: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005701D; /* 0x1002E5E1: je 0x1005701d */
L_1002E5E7:
    edi = 0x7FFFFFFFu; /* 0x1002E5E7: mov edi, 0x7fffffff */
    /* test LO8(edx), 4 */ /* 0x1002E5EC: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057037; /* 0x1002E5EF: jne 0x10057037 */
L_1002E5F5:
    /* test LO8(edx), 1 */ /* 0x1002E5F5: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E611; /* 0x1002E5F8: jne 0x1002e611 */
L_1002E5FA:
    eax = edx; /* 0x1002E5FA: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1002E5FC: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005702B; /* 0x1002E5FF: jne 0x1005702b */
L_1002E605:
    /* test eax, eax */ /* 0x1002E605: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E611; /* 0x1002E607: jne 0x1002e611 */
L_1002E609:
    /* cmp ebx, edi */ /* 0x1002E609: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10057037; /* 0x1002E60B: ja 0x10057037 */
L_1002E611:
    eax = MEM32(ebp + 0x10); /* 0x1002E611: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1002E614: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057062; /* 0x1002E616: jne 0x10057062 */
L_1002E61C:
    /* test LO8(edx), 2 */ /* 0x1002E61C: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057069; /* 0x1002E61F: jne 0x10057069 */
L_1002E625:
    /* cmp MEM8(ebp + (-0x18)), 0 */ /* 0x1002E625: cmp byte ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E632; /* 0x1002E629: je 0x1002e632 */
L_1002E62B:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1002E62B: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002E62E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002E632:
    edi = POP32_VAL(esp); /* 0x1002E632: pop edi */
    esi = POP32_VAL(esp); /* 0x1002E633: pop esi */
    eax = ebx; /* 0x1002E634: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1002E636: pop ebx */
    esp = ebp; /* 0x1002E637: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002E639: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E63A: ret  */
L_1003265E:
    /* cmp LO8(ecx), 0x30u */ /* 0x1003265E: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002E576; /* 0x10032661: jne 0x1002e576 */
L_10032667:
    SET_LO8(eax, MEM8(esi)); /* 0x10032667: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x10032669: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10032690; /* 0x1003266B: jne 0x10032690 */
L_1003266D:
    SET_LO8(ecx, MEM8(esi + 0x1)); /* 0x1003266D: mov cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10032670: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x10032673: mov byte ptr [ebp - 1], cl */
    RECOMP_BACKEDGE();
    goto L_1002E576; /* 0x10032676: jmp 0x1002e576 */
L_1003267B:
    RECOMP_CALL(sub_1001177D); /* 0x1003267B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056F8A; /* 0x10032680: jmp 0x10056f8a */
L_10032685:
    SET_LO8(ecx, MEM8(esi)); /* 0x10032685: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10032687: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x10032688: mov byte ptr [ebp - 1], cl */
    RECOMP_BACKEDGE();
    goto L_1002E542; /* 0x1003268B: jmp 0x1002e542 */
L_10032690:
    /* cmp LO8(eax), 0x58u */ /* 0x10032690: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003266D; /* 0x10032692: je 0x1003266d */
L_10032694:
    RECOMP_BACKEDGE();
    goto L_1002E576; /* 0x10032694: jmp 0x1002e576 */
L_10032699:
    eax = MEM32(ebp + 0x10); /* 0x10032699: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1003269C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057070; /* 0x1003269E: jne 0x10057070 */
L_100326A4:
    goto L_10057075; /* 0x100326A4: jmp 0x10057075 */
L_10056F80:
    ecx = MEM32(ebp + 0xC); /* 0x10056F80: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x10056F83: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1002E4D1; /* 0x10056F85: jmp 0x1002e4d1 */
L_10056F8A:
    MEM32(eax) = 0x16u; /* 0x10056F8A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10056F90: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10057075; /* 0x10056F95: jmp 0x10057075 */
L_10056F9A:
    eax = ebp + (-0x24); /* 0x10056F9A: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x10056F9D: push eax */
    eax = (uint32_t)LO8(ebx); /* 0x10056F9E: movzx eax, bl */
    PUSH32(esp, 8); /* 0x10056FA1: push 8 */
    PUSH32(esp, eax); /* 0x10056FA3: push eax */
    RECOMP_CALL(sub_100895AC); /* 0x10056FA4: call 0x100895ac */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24)); /* 0x10056FA9: mov edi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056FAC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002E51F; /* 0x10056FAF: jmp 0x1002e51f */
L_10056FB4:
    SET_LO8(ebx, MEM8(esi)); /* 0x10056FB4: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10056FB6: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002E505; /* 0x10056FB7: jmp 0x1002e505 */
L_10056FBC:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x10056FBC: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10032685; /* 0x10056FBF: jmp 0x10032685 */
L_10056FC4:
    /* cmp LO8(ecx), 0x30u */ /* 0x10056FC4: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056FD1; /* 0x10056FC7: je 0x10056fd1 */
L_10056FC9:
    PUSH32(esp, 0xAu); /* 0x10056FC9: push 0xa */
L_10056FCB:
    edi = POP32_VAL(esp); /* 0x10056FCB: pop edi */
    RECOMP_BACKEDGE();
    goto L_1002E576; /* 0x10056FCC: jmp 0x1002e576 */
L_10056FD1:
    SET_LO8(eax, MEM8(esi)); /* 0x10056FD1: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x10056FD3: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056FDF; /* 0x10056FD5: je 0x10056fdf */
L_10056FD7:
    /* cmp LO8(eax), 0x58u */ /* 0x10056FD7: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056FDF; /* 0x10056FD9: je 0x10056fdf */
L_10056FDB:
    PUSH32(esp, 8); /* 0x10056FDB: push 8 */
    RECOMP_BACKEDGE();
    goto L_10056FCB; /* 0x10056FDD: jmp 0x10056fcb */
L_10056FDF:
    PUSH32(esp, 0x10u); /* 0x10056FDF: push 0x10 */
    edi = POP32_VAL(esp); /* 0x10056FE1: pop edi */
    RECOMP_BACKEDGE();
    goto L_10032667; /* 0x10056FE2: jmp 0x10032667 */
L_10056FE7:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x10056FE7: mov cl, byte ptr [ebp - 1] */
    eax = ecx + (-0x61); /* 0x10056FEA: lea eax, [ecx - 0x61] */
    /* cmp LO8(eax), 0x19u */ /* 0x10056FED: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x10056FEF: movsx eax, cl */
    if (CMP_A(_flag_a, _flag_b)) goto L_10056FF7; /* 0x10056FF2: ja 0x10056ff7 */
L_10056FF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x10056FF4: sub eax, 0x20 */
    _flag_k = FK_CMP;
L_10056FF7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFC9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFC9u; /* 0x10056FF7: add eax, -0x37 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002E5A7; /* 0x10056FFA: jmp 0x1002e5a7 */
L_10056FFF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1005700A; /* 0x10056FFF: jne 0x1005700a */
L_10057001:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x10057001: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002E5B9; /* 0x10057004: jbe 0x1002e5b9 */
L_1005700A:
    eax = MEM32(ebp + 0x10); /* 0x1005700A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((edx | 4)); _flag_b = (uint32_t)((edx | 4));
    edx = edx | 4; /* 0x1005700D: or edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10057010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E5BE; /* 0x10057012: jne 0x1002e5be */
L_10057018:
    RECOMP_BACKEDGE();
    goto L_1002E5D7; /* 0x10057018: jmp 0x1002e5d7 */
L_1005701D:
    /* test eax, eax */ /* 0x1005701D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057024; /* 0x1005701F: je 0x10057024 */
L_10057021:
    esi = MEM32(ebp + 0xC); /* 0x10057021: mov esi, dword ptr [ebp + 0xc] */
L_10057024:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10057024: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002E611; /* 0x10057026: jmp 0x1002e611 */
L_1005702B:
    /* cmp ebx, 0x80000000u */ /* 0x1005702B: cmp ebx, 0x80000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002E605; /* 0x10057031: jbe 0x1002e605 */
L_10057037:
    RECOMP_CALL(sub_1001177D); /* 0x10057037: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1005703C: mov edx, dword ptr [ebp - 8] */
    MEM32(eax) = 0x22u; /* 0x1005703F: mov dword ptr [eax], 0x22 */
    /* test LO8(edx), 1 */ /* 0x10057045: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057052; /* 0x10057048: je 0x10057052 */
L_1005704A:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1005704A: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002E611; /* 0x1005704D: jmp 0x1002e611 */
L_10057052:
    /* test LO8(edx), 2 */ /* 0x10057052: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x10057055: push 0 */
    ebx = POP32_VAL(esp); /* 0x10057057: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10057058: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1005705B: add ebx, edi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002E611; /* 0x1005705D: jmp 0x1002e611 */
L_10057062:
    MEM32(eax) = esi; /* 0x10057062: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1002E61C; /* 0x10057064: jmp 0x1002e61c */
L_10057069:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x10057069: neg ebx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1002E625; /* 0x1005706B: jmp 0x1002e625 */
L_10057070:
    ecx = MEM32(ebp + 0xC); /* 0x10057070: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x10057073: mov dword ptr [eax], ecx */
L_10057075:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10057075: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002E625; /* 0x10057077: jmp 0x1002e625 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E63B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E63Bu);

L_1002E63B:
    PUSH32(esp, ebp); /* 0x1002E63B: push ebp */
    ebp = esp; /* 0x1002E63C: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1002E63E: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1002E645: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002E647: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002E64A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E64D: push dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005707C; /* 0x1002E650: je 0x1005707c */
L_1002E656:
    PUSH32(esp, 0); /* 0x1002E656: push 0 */
L_1002E658:
    RECOMP_CALL(sub_1002E4B5); /* 0x1002E658: call 0x1002e4b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002E65D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002E660: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E661: ret  */
L_1005707C:
    PUSH32(esp, 0x100E1870u); /* 0x1005707C: push 0x100e1870 */
    RECOMP_BACKEDGE();
    goto L_1002E658; /* 0x10057081: jmp 0x1002e658 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E662(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E662u);

L_1002E662:
    PUSH32(esp, ebp); /* 0x1002E662: push ebp */
    ebp = esp; /* 0x1002E663: mov ebp, esp */
    PUSH32(esp, 0xAu); /* 0x1002E665: push 0xa */
    PUSH32(esp, 0); /* 0x1002E667: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E669: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002E63B); /* 0x1002E66C: call 0x1002e63b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002E671: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002E674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E675: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E676(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E676u);

L_1002E676:
    PUSH32(esp, ebp); /* 0x1002E676: push ebp */
    ebp = esp; /* 0x1002E677: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002E679: push esi */
    PUSH32(esp, edi); /* 0x1002E67A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1002E67B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1002E67E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E6C4; /* 0x1002E680: je 0x1002e6c4 */
L_1002E682:
    ecx = MEM32(ebp + 0xC); /* 0x1002E682: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1002E685: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E6C4; /* 0x1002E687: je 0x1002e6c4 */
L_1002E689:
    esi = MEM32(ebp + 0x10); /* 0x1002E689: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1002E68C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056227; /* 0x1002E68E: je 0x10056227 */
L_1002E694:
    edx = edi; /* 0x1002E694: mov edx, edi */
L_1002E696:
    /* cmp MEM8(edx), 0 */ /* 0x1002E696: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E69F; /* 0x1002E699: je 0x1002e69f */
L_1002E69B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002E69B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002E69C: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002E696; /* 0x1002E69D: jne 0x1002e696 */
L_1002E69F:
    /* test ecx, ecx */ /* 0x1002E69F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056227; /* 0x1002E6A1: je 0x10056227 */
L_1002E6A7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1002E6A7: sub edx, esi */
    _flag_k = FK_CMP;
L_1002E6A9:
    SET_LO8(eax, MEM8(esi)); /* 0x1002E6A9: mov al, byte ptr [esi] */
    MEM8(edx + esi) = (uint8_t)(LO8(eax)); /* 0x1002E6AB: mov byte ptr [edx + esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002E6AE: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1002E6AF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E6B6; /* 0x1002E6B1: je 0x1002e6b6 */
L_1002E6B3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002E6B3: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002E6A9; /* 0x1002E6B4: jne 0x1002e6a9 */
L_1002E6B6:
    /* test ecx, ecx */ /* 0x1002E6B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056240; /* 0x1002E6B8: je 0x10056240 */
L_1002E6BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E6BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002E6C0:
    edi = POP32_VAL(esp); /* 0x1002E6C0: pop edi */
    esi = POP32_VAL(esp); /* 0x1002E6C1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002E6C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E6C3: ret  */
L_1002E6C4:
    RECOMP_CALL(sub_1001177D); /* 0x1002E6C4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005622F; /* 0x1002E6C9: jmp 0x1005622f */
L_10056227:
    MEM8(edi) = (uint8_t)(0); /* 0x10056227: mov byte ptr [edi], 0 */
    RECOMP_BACKEDGE();
    goto L_1002E6C4; /* 0x1005622A: jmp 0x1002e6c4 */
L_1005622F:
    PUSH32(esp, 0x16u); /* 0x1005622F: push 0x16 */
L_10056231:
    esi = POP32_VAL(esp); /* 0x10056231: pop esi */
    MEM32(eax) = esi; /* 0x10056232: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10056234: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10056239: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1002E6C0; /* 0x1005623B: jmp 0x1002e6c0 */
L_10056240:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x10056240: mov byte ptr [edi], cl */
    RECOMP_CALL(sub_1001177D); /* 0x10056242: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10056247: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10056231; /* 0x10056249: jmp 0x10056231 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E6CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E6CEu);

L_1002E6CE:
    PUSH32(esp, ebp); /* 0x1002E6CE: push ebp */
    ebp = esp; /* 0x1002E6CF: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1002E6D1: push edi */
    /* cmp MEM32(0x100DF7C0), 1 */ /* 0x1002E6D2: cmp dword ptr [0x100df7c0], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10034A4B; /* 0x1002E6D9: jb 0x10034a4b */
L_1002E6DF:
    edi = MEM32(ebp + 0x8); /* 0x1002E6DF: mov edi, dword ptr [ebp + 8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_100349CA; /* 0x1002E6E2: ja 0x100349ca */
L_1002E6E8:
    edx = (uint32_t)MEM8(ebp + 0xC); /* 0x1002E6E8: movzx edx, byte ptr [ebp + 0xc] */
    eax = edx; /* 0x1002E6EC: mov eax, edx */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1002E6EE: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1002E6EE: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1002E6F1: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = (uint32_t)(edx); _xmm[3].u64[1] = 0; /* 0x1002E6F3: movd xmm3, edx */
    { xmm_t _s = _xmm[3]; _xmm[3].u64[1] = _s.u64[1]; _xmm[3].u16[0] = _s.u16[0]; _xmm[3].u16[1] = _s.u16[0]; _xmm[3].u16[2] = _s.u16[0]; _xmm[3].u16[3] = _s.u16[0]; } /* 0x1002E6F7: pshuflw xmm3, xmm3, 0 */
    _xmm[3].u64[1] = _xmm[3].u64[0]; /* 0x1002E6FC: movlhps xmm3, xmm3 */
    ecx = 0xFu; /* 0x1002E6FF: mov ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1002E704: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002E706: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002E709: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1002E709: shl eax, cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1002E70B: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1002E70D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002E70F:
    _xmm[1] = xmm_ld(edi); /* 0x1002E70F: movdqu xmm1, xmmword ptr [edi] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1002E713: pxor xmm2, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_xmm[2].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1002E717: pcmpeqb xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_xmm[1].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1002E71B: pcmpeqb xmm1, xmm3 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1002E71F: pmovmskb ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1002E723: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E73F; /* 0x1002E725: jne 0x1002e73f */
L_1002E727:
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1002E727: pmovmskb ecx, xmm1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1002E72B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _v = ecx, _i; if (_v) { for (_i = 31; !((_v >> _i) & 1u); _i--) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1002E72D: bsr eax, ecx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1002E730: add eax, edi */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1002E732: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x1002E734: cmovne edx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002E737: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1002E73A: add edi, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002E70F; /* 0x1002E73D: jmp 0x1002e70f */
L_1002E73F:
    PUSH32(esp, ebx); /* 0x1002E73F: push ebx */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[1].u8[_k] >> 7) << _k; ebx = _m; } /* 0x1002E740: pmovmskb ebx, xmm1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x1002E744: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1002E746: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1002E746: shl ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E748: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1002E74A: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1002E74C: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002E74E: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x1002E74F: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002E751: pop ebx */
    { uint32_t _v = ecx, _i; if (_v) { for (_i = 31; !((_v >> _i) & 1u); _i--) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1002E752: bsr eax, ecx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1002E755: add eax, edi */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1002E757: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = edx; } /* 0x1002E759: cmove eax, edx */
    edi = POP32_VAL(esp); /* 0x1002E75C: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1002E75D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E75E: ret  */
L_100349CA:
    edx = (uint32_t)MEM8(ebp + 0xC); /* 0x100349CA: movzx edx, byte ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100349CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034A0B; /* 0x100349D0: je 0x10034a0b */
L_100349D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100349D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, 0xFu */ /* 0x100349D4: test edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100349F1; /* 0x100349DA: je 0x100349f1 */
L_100349DC:
    ecx = (uint32_t)MEM8(edi); /* 0x100349DC: movzx ecx, byte ptr [edi] */
    /* cmp ecx, edx */ /* 0x100349DF: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edi; } /* 0x100349E1: cmove eax, edi */
    /* test ecx, ecx */ /* 0x100349E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034A08; /* 0x100349E6: je 0x10034a08 */
L_100349E8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100349E8: inc edi */
    _flag_k = FK_INC;
    /* test edi, 0xFu */ /* 0x100349E9: test edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100349DC; /* 0x100349EF: jne 0x100349dc */
L_100349F1:
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x100349F1: movd xmm0, edx */
L_100349F5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x100349F5: add edi, 0x10 */
    _flag_k = FK_ADD;
    { uint32_t _index, _f = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); _f = (_f & ~0x8D5u) | recomp_pcmpistri(_xmm[0], xmm_ld(edi + (-0x10)), 64u, &_index); ecx = _index; _flag_k = FK_EFLAGS; _flag_a = _f; _flag_b = 0; _cf = _f & 1u; } /* 0x100349F8: pcmpistri xmm0, xmmword ptr [edi - 0x10], 0x40 */
    ecx = edi + ecx + (-0x10); /* 0x100349FF: lea ecx, [edi + ecx - 0x10] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) { eax = ecx; } /* 0x10034A03: cmovb eax, ecx */
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100349F5; /* 0x10034A06: jne 0x100349f5 */
L_10034A08:
    edi = POP32_VAL(esp); /* 0x10034A08: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034A09: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034A0A: ret  */
L_10034A0B:
    eax = 0xFFFFFFF0u; /* 0x10034A0B: mov eax, 0xfffffff0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x10034A10: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x10034A12: pxor xmm0, xmm0 */
    { xmm_t _s = xmm_ld(eax); for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_xmm[0].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x10034A16: pcmpeqb xmm0, xmmword ptr [eax] */
    ecx = 0xFu; /* 0x10034A1A: mov ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x10034A1F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0xFFFFFFFFu; /* 0x10034A21: mov edx, 0xffffffff */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10034A26: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x10034A26: shl edx, cl */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; edi = _m; } /* 0x10034A28: pmovmskb edi, xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x10034A2C: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034A44; /* 0x10034A2E: jne 0x10034a44 */
L_10034A30:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x10034A30: pxor xmm0, xmm0 */
    { xmm_t _s = xmm_ld(eax + 0x10); for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_xmm[0].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x10034A34: pcmpeqb xmm0, xmmword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10034A39: add eax, 0x10 */
    _flag_k = FK_ADD;
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; edi = _m; } /* 0x10034A3C: pmovmskb edi, xmm0 */
    /* test edi, edi */ /* 0x10034A40: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034A30; /* 0x10034A42: je 0x10034a30 */
L_10034A44:
    { uint32_t _v = edi, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; edx = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x10034A44: bsf edx, edi */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10034A47: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10034A08; /* 0x10034A49: jmp 0x10034a08 */
L_10034A4B:
    edi = MEM32(ebp + 0x8); /* 0x10034A4B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034A4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10034A50: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x10034A53: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10034A55: add ecx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10034A58: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x10034A5A: sub edi, 1 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10034A5D: mov al, byte ptr [ebp + 0xc] */
    _df = -1; /* 0x10034A60: std  */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x10034A61: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10034A63: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), LO8(eax) */ /* 0x10034A66: cmp byte ptr [edi], al */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034A6E; /* 0x10034A68: je 0x10034a6e */
L_10034A6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034A6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10034A70; /* 0x10034A6C: jmp 0x10034a70 */
L_10034A6E:
    eax = edi; /* 0x10034A6E: mov eax, edi */
L_10034A70:
    _df = 1; /* 0x10034A70: cld  */
    edi = POP32_VAL(esp); /* 0x10034A71: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10034A72: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034A73: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E7F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E7F8u);

L_1002E7F8:
    PUSH32(esp, ebp); /* 0x1002E7F8: push ebp */
    ebp = esp; /* 0x1002E7F9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002E7FB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002E7FE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001EE42); /* 0x1002E801: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002E806: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1002E808: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002E809: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002E80A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x1002E80C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E80D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E83D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E83Du);

L_1002E83D:
    eax = MEM32(0x100DFDF8); /* 0x1002E83D: mov eax, dword ptr [0x100dfdf8] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x1002E842: push dword ptr [eax + esi*4] */
    PUSH32(esp, esi); /* 0x1002E845: push esi */
    RECOMP_CALL(sub_10020611); /* 0x1002E846: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E84B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002E84C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E84D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E8B0u);

L_1002E8B0:
    PUSH32(esp, 1); /* 0x1002E8B0: push 1 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002E8B2: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E8B7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E8B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E8D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E8D6u);

    goto L_1002E8D6;
L_1002E84E:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x1002E84E: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E8AD; /* 0x1002E852: je 0x1002e8ad */
L_1002E854:
    PUSH32(esp, eax); /* 0x1002E854: push eax */
    PUSH32(esp, esi); /* 0x1002E855: push esi */
    RECOMP_CALL(sub_100142FC); /* 0x1002E856: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E85B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002E85C: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1002E85D: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(0x100DFDF8); /* 0x1002E864: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + esi * 4); /* 0x1002E869: mov eax, dword ptr [eax + esi*4] */
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x1002E86C: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E88B; /* 0x1002E870: je 0x1002e88b */
L_1002E872:
    /* cmp ebx, 1 */ /* 0x1002E872: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F257; /* 0x1002E875: jne 0x1002f257 */
L_1002E87B:
    PUSH32(esp, eax); /* 0x1002E87B: push eax */
    RECOMP_CALL(sub_10020A5C); /* 0x1002E87C: call 0x10020a5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E881: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002E882: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E88B; /* 0x1002E885: je 0x1002e88b */
L_1002E887:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1002E887: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002E888: mov dword ptr [ebp - 0x1c], edi */
L_1002E88B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002E88B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1002E83D); /* 0x1002E88F: call 0x1002e83d */
    RECOMP_FLAGS_IN();
    goto L_1002E8AD; /* 0x1002E894: jmp 0x1002e8ad */
L_1002E896:
    MEM32(ebp + (-0x20)) = esi; /* 0x1002E896: mov dword ptr [ebp - 0x20], esi */
    /* cmp esi, MEM32(0x100DFDF0) */ /* 0x1002E899: cmp esi, dword ptr [0x100dfdf0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002E8B9; /* 0x1002E89F: jge 0x1002e8b9 */
L_1002E8A1:
    eax = MEM32(0x100DFDF8); /* 0x1002E8A1: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + esi * 4); /* 0x1002E8A6: mov eax, dword ptr [eax + esi*4] */
    /* test eax, eax */ /* 0x1002E8A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E84E; /* 0x1002E8AB: jne 0x1002e84e */
L_1002E8AD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002E8AD: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002E896; /* 0x1002E8AE: jmp 0x1002e896 */
L_1002E8B9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002E8B9: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002E8B0); /* 0x1002E8C0: call 0x1002e8b0 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 1 */ /* 0x1002E8C5: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x1002E8C8: mov eax, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F27E; /* 0x1002E8CA: jne 0x1002f27e */
L_1002E8D0:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002E8D0: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E8D5: ret  */
L_1002E8D6:
    PUSH32(esp, 0x14u); /* 0x1002E8D6: push 0x14 */
    PUSH32(esp, 0x1002E8E8u); /* 0x1002E8D8: push 0x1002e8e8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002E8DD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    goto L_1002E910; /* 0x1002E8E2: jmp 0x1002e910 */
L_1002E910:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002E910: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002E912: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & edi; /* 0x1002E915: and dword ptr [ebp - 0x24], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x1002E918: push 1 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002E91A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E91F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edi; /* 0x1002E920: and dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002E923: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x1002E925: mov ebx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002E896; /* 0x1002E928: jmp 0x1002e896 */
L_1002F257:
    /* test ebx, ebx */ /* 0x1002F257: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E88B; /* 0x1002F259: jne 0x1002e88b */
L_1002F25F:
    /* test MEM8(eax + 0xC), 2 */ /* 0x1002F25F: test byte ptr [eax + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E88B; /* 0x1002F263: je 0x1002e88b */
L_1002F269:
    PUSH32(esp, eax); /* 0x1002F269: push eax */
    RECOMP_CALL(sub_10020A5C); /* 0x1002F26A: call 0x10020a5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F26F: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002F270: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002E88B; /* 0x1002F273: jne 0x1002e88b */
L_1002F279:
    goto L_10055518; /* 0x1002F279: jmp 0x10055518 */
L_1002F27E:
    eax = MEM32(ebp + (-0x24)); /* 0x1002F27E: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_1002E8D0; /* 0x1002F281: jmp 0x1002e8d0 */
L_10055518:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x24)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x24)) | eax));
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) | eax; /* 0x10055518: or dword ptr [ebp - 0x24], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002E88B; /* 0x1005551B: jmp 0x1002e88b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002E98E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E98Eu);

L_1002E98E:
    PUSH32(esp, edi); /* 0x1002E98E: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x1002E98F: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E994: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002E995: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002E996(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002E996u);

L_1002E996:
    PUSH32(esp, 0xCu); /* 0x1002E996: push 0xc */
    PUSH32(esp, 0x1002EA10u); /* 0x1002E998: push 0x1002ea10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002E99D: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002E9A2: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E9A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1002E9A8: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1002E9AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002E9AD: setne al */
    /* test eax, eax */ /* 0x1002E9B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055CBA; /* 0x1002E9B2: je 0x10055cba */
L_1002E9B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002E9B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1002E9BA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002E9BD: setne al */
    /* test eax, eax */ /* 0x1002E9C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055CBA; /* 0x1002E9C2: je 0x10055cba */
L_1002E9C8:
    MEM32(ebp + 0xC) = edi; /* 0x1002E9C8: mov dword ptr [ebp + 0xc], edi */
    PUSH32(esp, edi); /* 0x1002E9CB: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x1002E9CC: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002E9D1: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002E9D2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1002E9D6: push edi */
    RECOMP_CALL(sub_10020477); /* 0x1002E9D7: call 0x10020477 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002E9DC: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1002E9DE: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1002E9E1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002E9E4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1002E9E7: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1002E9E8: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1002E9EB: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1002E9ED: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, edi); /* 0x1002E9F0: push edi */
    PUSH32(esp, esi); /* 0x1002E9F1: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x1002E9F2: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1002E9F7: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002E9FA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002E98E); /* 0x1002EA01: call 0x1002e98e */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1002EA06: mov eax, ebx */
L_1002EA08:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002EA08: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002EA0D: ret  */
L_10055CBA:
    RECOMP_CALL(sub_1001177D); /* 0x10055CBA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055CBF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055CC5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055CCA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002EA08; /* 0x10055CCD: jmp 0x1002ea08 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002EA2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002EA2Cu);

L_1002EA2C:
    PUSH32(esp, ebp); /* 0x1002EA2C: push ebp */
    ebp = esp; /* 0x1002EA2D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002EA2F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1002EA32: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002EA34: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002EA37: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x1002EA3A: push 0x1001d315 */
    RECOMP_CALL(sub_1002E996); /* 0x1002EA3F: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002EA44: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002EA47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002EA48: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002EA62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002EA62u);

L_1002EA62:
    PUSH32(esp, ebp); /* 0x1002EA62: push ebp */
    ebp = esp; /* 0x1002EA63: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1002EA65: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1002EA68: push eax */
    PUSH32(esp, 0); /* 0x1002EA69: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002EA6B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002EA6E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x1002EA71: push 0x1002ea80 */
    RECOMP_CALL(sub_1001ACD3); /* 0x1002EA76: call 0x1001acd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002EA7B: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002EA7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002EA7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002EA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002EA80u);

L_1002EA80:
    PUSH32(esp, ebp); /* 0x1002EA80: push ebp */
    ebp = esp; /* 0x1002EA81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x204u; /* 0x1002EA83: sub esp, 0x204 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002EA89: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002EA8E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002EA90: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1002EA93: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x184); /* 0x1002EA96: lea eax, [ebp - 0x184] */
    edx = MEM32(ebp + 0x14); /* 0x1002EA9C: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1002EA9F: push ebx */
    MEM32(ebp + (-0x1BC)) = eax; /* 0x1002EAA0: mov dword ptr [ebp - 0x1bc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002EAA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1002EAA8: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1002EAA9: mov edi, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x1002EAAC: mov ebx, eax */
    MEM32(ebp + (-0x18C)) = ecx; /* 0x1002EAAE: mov dword ptr [ebp - 0x18c], ecx */
    MEM32(ebp + (-0x198)) = edi; /* 0x1002EAB4: mov dword ptr [ebp - 0x198], edi */
    MEM32(ebp + (-0x1E8)) = edx; /* 0x1002EABA: mov dword ptr [ebp - 0x1e8], edx */
    MEM32(ebp + (-0x1E0)) = 0x15Eu; /* 0x1002EAC0: mov dword ptr [ebp - 0x1e0], 0x15e */
    MEM32(ebp + (-0x1F4)) = eax; /* 0x1002EACA: mov dword ptr [ebp - 0x1f4], eax */
    MEM32(ebp + (-0x1D8)) = eax; /* 0x1002EAD0: mov dword ptr [ebp - 0x1d8], eax */
    MEM32(ebp + (-0x1C4)) = eax; /* 0x1002EAD6: mov dword ptr [ebp - 0x1c4], eax */
    MEM32(ebp + (-0x1B0)) = eax; /* 0x1002EADC: mov dword ptr [ebp - 0x1b0], eax */
    MEM32(ebp + (-0x1F0)) = eax; /* 0x1002EAE2: mov dword ptr [ebp - 0x1f0], eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1002EAE8: mov dword ptr [ebp - 0x1a4], ebx */
    MEM32(ebp + (-0x1EC)) = eax; /* 0x1002EAEE: mov dword ptr [ebp - 0x1ec], eax */
    /* test edi, edi */ /* 0x1002EAF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058316; /* 0x1002EAF6: je 0x10058316 */
L_1002EAFC:
    /* test ecx, ecx */ /* 0x1002EAFC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058316; /* 0x1002EAFE: je 0x10058316 */
L_1002EB04:
    PUSH32(esp, esi); /* 0x1002EB04: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1002EB05: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ecx + 0xC), 0x40u */ /* 0x1002EB08: test byte ptr [ecx + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005832E; /* 0x1002EB0C: je 0x1005832e */
L_1002EB12:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002EB12: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x204); /* 0x1002EB15: lea ecx, [ebp - 0x204] */
    RECOMP_CALL(sub_1000F764); /* 0x1002EB1B: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002EB20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1002EB22: mov esi, eax */
    MEM8(ebp + (-0x187)) = (uint8_t)(LO8(eax)); /* 0x1002EB24: mov byte ptr [ebp - 0x187], al */
    ecx = eax; /* 0x1002EB2A: mov ecx, eax */
    MEM32(ebp + (-0x190)) = esi; /* 0x1002EB2C: mov dword ptr [ebp - 0x190], esi */
    SET_LO8(eax, MEM8(edi)); /* 0x1002EB32: mov al, byte ptr [edi] */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x1002EB34: mov dword ptr [ebp - 0x1a0], esi */
    MEM32(ebp + (-0x1D0)) = ecx; /* 0x1002EB3A: mov dword ptr [ebp - 0x1d0], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1002EB40: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EEBC; /* 0x1002EB42: je 0x1002eebc */
L_1002EB48:
    eax = (uint32_t)LO8(eax); /* 0x1002EB48: movzx eax, al */
    PUSH32(esp, eax); /* 0x1002EB4B: push eax */
    RECOMP_CALL(sub_1001AD77); /* 0x1002EB4C: call 0x1001ad77 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002EB51: pop ecx */
    /* test eax, eax */ /* 0x1002EB52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100583A2; /* 0x1002EB54: jne 0x100583a2 */
L_1002EB5A:
    SET_LO8(eax, MEM8(edi)); /* 0x1002EB5A: mov al, byte ptr [edi] */
    PUSH32(esp, 0x25u); /* 0x1002EB5C: push 0x25 */
    ecx = POP32_VAL(esp); /* 0x1002EB5E: pop ecx */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x1002EB5F: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005902F; /* 0x1002EB61: jne 0x1005902f */
L_1002EB67:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x1002EB67: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059025; /* 0x1002EB6A: je 0x10059025 */
L_1002EB70:
    esi = MEM32(ebp + (-0x198)); /* 0x1002EB70: mov esi, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002EB76: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1CC)) = ecx; /* 0x1002EB78: mov dword ptr [ebp - 0x1cc], ecx */
    edi = ecx; /* 0x1002EB7E: mov edi, ecx */
    MEM8(ebp + (-0x1B1)) = (uint8_t)(LO8(ecx)); /* 0x1002EB80: mov byte ptr [ebp - 0x1b1], cl */
    SET_HI8(ebx, 1); /* 0x1002EB86: mov bh, 1 */
    MEM32(ebp + (-0x1C0)) = ecx; /* 0x1002EB88: mov dword ptr [ebp - 0x1c0], ecx */
    SET_LO8(ebx, LO8(ecx)); /* 0x1002EB8E: mov bl, cl */
    MEM32(ebp + (-0x1C8)) = ecx; /* 0x1002EB90: mov dword ptr [ebp - 0x1c8], ecx */
    MEM32(ebp + (-0x1D4)) = ecx; /* 0x1002EB96: mov dword ptr [ebp - 0x1d4], ecx */
    MEM8(ebp + (-0x1A9)) = (uint8_t)(LO8(ecx)); /* 0x1002EB9C: mov byte ptr [ebp - 0x1a9], cl */
    MEM8(ebp + (-0x1AA)) = (uint8_t)(LO8(ecx)); /* 0x1002EBA2: mov byte ptr [ebp - 0x1aa], cl */
    MEM8(ebp + (-0x186)) = (uint8_t)(LO8(ecx)); /* 0x1002EBA8: mov byte ptr [ebp - 0x186], cl */
    MEM8(ebp + (-0x199)) = (uint8_t)(LO8(ecx)); /* 0x1002EBAE: mov byte ptr [ebp - 0x199], cl */
    MEM8(ebp + (-0x185)) = (uint8_t)(LO8(ecx)); /* 0x1002EBB4: mov byte ptr [ebp - 0x185], cl */
    MEM32(ebp + (-0x1DC)) = ecx; /* 0x1002EBBA: mov dword ptr [ebp - 0x1dc], ecx */
L_1002EBC0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002EBC0: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1002EBC1: movzx eax, byte ptr [esi] */
    MEM32(ebp + (-0x1B8)) = eax; /* 0x1002EBC4: mov dword ptr [ebp - 0x1b8], eax */
    eax = (uint32_t)LO8(eax); /* 0x1002EBCA: movzx eax, al */
    PUSH32(esp, eax); /* 0x1002EBCD: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1002EBCE: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002EBD3: pop ecx */
    /* test eax, eax */ /* 0x1002EBD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EEE2; /* 0x1002EBD6: jne 0x1002eee2 */
L_1002EBDC:
    eax = MEM32(ebp + (-0x1B8)); /* 0x1002EBDC: mov eax, dword ptr [ebp - 0x1b8] */
    /* cmp eax, 0x4Eu */ /* 0x1002EBE2: cmp eax, 0x4e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100583F2; /* 0x1002EBE5: jle 0x100583f2 */
L_1002EBEB:
    /* cmp eax, 0x68u */ /* 0x1002EBEB: cmp eax, 0x68 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584B3; /* 0x1002EBEE: je 0x100584b3 */
L_1002EBF4:
    /* cmp eax, 0x6Cu */ /* 0x1002EBF4: cmp eax, 0x6c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005848C; /* 0x1002EBF7: je 0x1005848c */
L_1002EBFD:
    /* cmp eax, 0x77u */ /* 0x1002EBFD: cmp eax, 0x77 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005849A; /* 0x1002EC00: je 0x1005849a */
L_1002EC06:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1002EC06: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1002EC08:
    SET_HI8(eax, MEM8(ebp + (-0x186))); /* 0x1002EC08: mov ah, byte ptr [ebp - 0x186] */
L_1002EC0E:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x1002EC0E: mov al, byte ptr [ebp - 0x185] */
L_1002EC14:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1002EC14: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EBC0; /* 0x1002EC16: je 0x1002ebc0 */
L_1002EC18:
    MEM8(ebp + (-0x19A)) = (uint8_t)(HI8(ebx)); /* 0x1002EC18: mov byte ptr [ebp - 0x19a], bh */
    ebx = MEM32(ebp + (-0x1A4)); /* 0x1002EC1E: mov ebx, dword ptr [ebp - 0x1a4] */
    MEM32(ebp + (-0x198)) = esi; /* 0x1002EC24: mov dword ptr [ebp - 0x198], esi */
    esi = MEM32(ebp + (-0x190)); /* 0x1002EC2A: mov esi, dword ptr [ebp - 0x190] */
    MEM32(ebp + (-0x194)) = edi; /* 0x1002EC30: mov dword ptr [ebp - 0x194], edi */
    /* test HI8(eax), HI8(eax) */ /* 0x1002EC36: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EF40; /* 0x1002EC38: jne 0x1002ef40 */
L_1002EC3E:
    ecx = MEM32(ebp + (-0x1E8)); /* 0x1002EC3E: mov ecx, dword ptr [ebp - 0x1e8] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x1002EC44: mov dword ptr [ebp - 0x1ec], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1002EC4A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1E8)) = ecx; /* 0x1002EC4D: mov dword ptr [ebp - 0x1e8], ecx */
    edx = MEM32(ecx + (-0x4)); /* 0x1002EC53: mov edx, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x1B8)) = edx; /* 0x1002EC56: mov dword ptr [ebp - 0x1b8], edx */
L_1002EC5C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1002EC5C: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x188)) = (uint8_t)(LO8(ecx)); /* 0x1002EC5E: mov byte ptr [ebp - 0x188], cl */
    ecx = MEM32(ebp + (-0x198)); /* 0x1002EC64: mov ecx, dword ptr [ebp - 0x198] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002EC6A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EC87; /* 0x1002EC6C: jne 0x1002ec87 */
L_1002EC6E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1002EC6E: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x53u */ /* 0x1002EC70: cmp al, 0x53 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x53u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF4C; /* 0x1002EC72: je 0x1002ef4c */
L_1002EC78:
    MEM8(ebp + (-0x185)) = (uint8_t)(0xFFu); /* 0x1002EC78: mov byte ptr [ebp - 0x185], 0xff */
    /* cmp LO8(eax), 0x43u */ /* 0x1002EC7F: cmp al, 0x43 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF4C; /* 0x1002EC81: je 0x1002ef4c */
L_1002EC87:
    ecx = (uint32_t)MEM8(ecx); /* 0x1002EC87: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x1002EC8A: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1A8)) = ecx; /* 0x1002EC8D: mov dword ptr [ebp - 0x1a8], ecx */
    /* cmp ecx, 0x6Eu */ /* 0x1002EC93: cmp ecx, 0x6e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ECE7; /* 0x1002EC96: je 0x1002ece7 */
L_1002EC98:
    /* cmp ecx, 0x63u */ /* 0x1002EC98: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584C7; /* 0x1002EC9B: je 0x100584c7 */
L_1002ECA1:
    /* cmp ecx, 0x7Bu */ /* 0x1002ECA1: cmp ecx, 0x7b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584C7; /* 0x1002ECA4: je 0x100584c7 */
L_1002ECAA:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1002ECAA: push dword ptr [ebp - 0x18c] */
    eax = ebp + (-0x1A0); /* 0x1002ECB0: lea eax, [ebp - 0x1a0] */
    PUSH32(esp, eax); /* 0x1002ECB6: push eax */
    RECOMP_CALL(sub_1001AD95); /* 0x1002ECB7: call 0x1001ad95 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1A0)); /* 0x1002ECBC: mov esi, dword ptr [ebp - 0x1a0] */
    ecx = POP32_VAL(esp); /* 0x1002ECC2: pop ecx */
    MEM32(ebp + (-0x190)) = esi; /* 0x1002ECC3: mov dword ptr [ebp - 0x190], esi */
L_1002ECC9:
    ebx = eax; /* 0x1002ECC9: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1002ECCB: mov dword ptr [ebp - 0x1a4], ebx */
    ecx = POP32_VAL(esp); /* 0x1002ECD1: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002ECD2: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE95; /* 0x1002ECD5: je 0x1002ee95 */
L_1002ECDB:
    ecx = MEM32(ebp + (-0x1A8)); /* 0x1002ECDB: mov ecx, dword ptr [ebp - 0x1a8] */
    SET_HI8(eax, MEM8(ebp + (-0x186))); /* 0x1002ECE1: mov ah, byte ptr [ebp - 0x186] */
L_1002ECE7:
    edx = MEM32(ebp + (-0x1C8)); /* 0x1002ECE7: mov edx, dword ptr [ebp - 0x1c8] */
    /* test edx, edx */ /* 0x1002ECED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EF1B; /* 0x1002ECEF: jne 0x1002ef1b */
L_1002ECF5:
    /* test HI8(eax), HI8(eax) */ /* 0x1002ECF5: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002ED14; /* 0x1002ECF7: jne 0x1002ed14 */
L_1002ECF9:
    /* cmp ecx, 0x63u */ /* 0x1002ECF9: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584E4; /* 0x1002ECFC: je 0x100584e4 */
L_1002ED02:
    /* cmp ecx, 0x73u */ /* 0x1002ED02: cmp ecx, 0x73 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584E4; /* 0x1002ED05: je 0x100584e4 */
L_1002ED0B:
    /* cmp ecx, 0x7Bu */ /* 0x1002ED0B: cmp ecx, 0x7b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584E4; /* 0x1002ED0E: je 0x100584e4 */
L_1002ED14:
    /* cmp ecx, 0x6Fu */ /* 0x1002ED14: cmp ecx, 0x6f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10058522; /* 0x1002ED17: jle 0x10058522 */
L_1002ED1D:
    eax = ecx; /* 0x1002ED1D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x1002ED1F: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002EF63; /* 0x1002ED22: je 0x1002ef63 */
L_1002ED28:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1002ED28: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10058945; /* 0x1002ED2B: je 0x10058945 */
L_1002ED31:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ED31: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002ED32: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10058AE3; /* 0x1002ED33: jne 0x10058ae3 */
L_1002ED39:
    /* cmp ebx, 0x2Du */ /* 0x1002ED39: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058DEB; /* 0x1002ED3C: je 0x10058deb */
L_1002ED42:
    /* cmp ebx, 0x2Bu */ /* 0x1002ED42: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058DF2; /* 0x1002ED45: je 0x10058df2 */
L_1002ED4B:
    SET_LO8(eax, MEM8(ebp + (-0x188))); /* 0x1002ED4B: mov al, byte ptr [ebp - 0x188] */
L_1002ED51:
    /* cmp MEM32(ebp + (-0x1DC)), 0 */ /* 0x1002ED51: cmp dword ptr [ebp - 0x1dc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058E32; /* 0x1002ED58: jne 0x10058e32 */
L_1002ED5E:
    /* test LO8(eax), LO8(eax) */ /* 0x1002ED5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EF7D; /* 0x1002ED60: jne 0x1002ef7d */
L_1002ED66:
    /* cmp ecx, 0x78u */ /* 0x1002ED66: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF6F; /* 0x1002ED69: je 0x1002ef6f */
L_1002ED6F:
    /* cmp ecx, 0x70u */ /* 0x1002ED6F: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF6F; /* 0x1002ED72: je 0x1002ef6f */
L_1002ED78:
    eax = (uint32_t)LO8(ebx); /* 0x1002ED78: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1002ED7B: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x1002ED7C: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A8)); /* 0x1002ED81: mov edi, dword ptr [ebp - 0x1a8] */
    ecx = POP32_VAL(esp); /* 0x1002ED87: pop ecx */
    /* test eax, eax */ /* 0x1002ED88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EDE3; /* 0x1002ED8A: je 0x1002ede3 */
L_1002ED8C:
    /* cmp edi, 0x6Fu */ /* 0x1002ED8C: cmp edi, 0x6f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058FAE; /* 0x1002ED8F: je 0x10058fae */
L_1002ED95:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x1CC)) * (int32_t)0xAu); /* 0x1002ED95: imul eax, dword ptr [ebp - 0x1cc], 0xa */
L_1002ED9C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x1002ED9C: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1002EDA2: add eax, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1002EDA5: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x1002EDA7: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1CC)) = eax; /* 0x1002EDAE: mov dword ptr [ebp - 0x1cc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EEFB; /* 0x1002EDB4: jne 0x1002eefb */
L_1002EDBA:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1002EDBA: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002EDC0: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x1002EDC1: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x1002EDC7: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x1002EDCD: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002EDD2: pop ecx */
    ecx = MEM32(ebp + (-0x1A8)); /* 0x1002EDD3: mov ecx, dword ptr [ebp - 0x1a8] */
    ebx = eax; /* 0x1002EDD9: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1002EDDB: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002ED66; /* 0x1002EDE1: jmp 0x1002ed66 */
L_1002EDE3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002EDE3: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x1002EDE4: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x1002EDEA: mov dword ptr [ebp - 0x1a0], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002EDF0: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE03; /* 0x1002EDF3: je 0x1002ee03 */
L_1002EDF5:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1002EDF5: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x1002EDFB: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x1002EDFC: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002EE01: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002EE02: pop ecx */
L_1002EE03:
    eax = MEM32(ebp + (-0x1CC)); /* 0x1002EE03: mov eax, dword ptr [ebp - 0x1cc] */
L_1002EE09:
    /* cmp MEM8(ebp + (-0x1AA)), 0 */ /* 0x1002EE09: cmp byte ptr [ebp - 0x1aa], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1AA))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058FFC; /* 0x1002EE10: jne 0x10058ffc */
L_1002EE16:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x46u; /* 0x1002EE16: sub edi, 0x46 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1002EE19: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002EE1B: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C0)));
    edi = edi & MEM32(ebp + (-0x1C0)); /* 0x1002EE1D: and edi, dword ptr [ebp - 0x1c0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x1002EE23: je 0x1002ee95 */
L_1002EE25:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x1002EE25: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF58; /* 0x1002EE2C: jne 0x1002ef58 */
L_1002EE32:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x1002EE32: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x1CC)); /* 0x1002EE38: mov eax, dword ptr [ebp - 0x1cc] */
L_1002EE3E:
    /* cmp MEM32(ebp + (-0x1DC)), 0 */ /* 0x1002EE3E: cmp dword ptr [ebp - 0x1dc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10059009; /* 0x1002EE45: jne 0x10059009 */
L_1002EE4B:
    SET_LO8(ecx, MEM8(ebp + (-0x19A))); /* 0x1002EE4B: mov cl, byte ptr [ebp - 0x19a] */
    edi = MEM32(ebp + (-0x198)); /* 0x1002EE51: mov edi, dword ptr [ebp - 0x198] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1002EE57: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0x1B8)); /* 0x1002EE59: mov ecx, dword ptr [ebp - 0x1b8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EF88; /* 0x1002EE5F: je 0x1002ef88 */
L_1002EE65:
    MEM32(ecx) = eax; /* 0x1002EE65: mov dword ptr [ecx], eax */
L_1002EE67:
    SET_LO8(eax, MEM8(ebp + (-0x187))); /* 0x1002EE67: mov al, byte ptr [ebp - 0x187] */
L_1002EE6D:
    esi = MEM32(ebp + (-0x190)); /* 0x1002EE6D: mov esi, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1002EE73: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1002EE75: inc edi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x187)) = (uint8_t)(LO8(eax)); /* 0x1002EE76: mov byte ptr [ebp - 0x187], al */
    MEM32(ebp + (-0x198)) = edi; /* 0x1002EE7C: mov dword ptr [ebp - 0x198], edi */
L_1002EE82:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002EE82: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF25; /* 0x1002EE85: je 0x1002ef25 */
L_1002EE8B:
    SET_LO8(eax, MEM8(edi)); /* 0x1002EE8B: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002EE8D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EB48; /* 0x1002EE8F: jne 0x1002eb48 */
L_1002EE95:
    /* cmp MEM32(ebp + (-0x1D8)), 1 */ /* 0x1002EE95: cmp dword ptr [ebp - 0x1d8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D8))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059152; /* 0x1002EE9C: je 0x10059152 */
L_1002EEA2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002EEA2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x1002EEA5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF0C; /* 0x1002EEA7: je 0x1002ef0c */
L_1002EEA9:
    /* cmp MEM32(ebp + (-0x1F4)), 1 */ /* 0x1002EEA9: cmp dword ptr [ebp - 0x1f4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1F4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059163; /* 0x1002EEB0: je 0x10059163 */
L_1002EEB6:
    ecx = MEM32(ebp + (-0x1D0)); /* 0x1002EEB6: mov ecx, dword ptr [ebp - 0x1d0] */
L_1002EEBC:
    eax = ecx; /* 0x1002EEBC: mov eax, ecx */
L_1002EEBE:
    /* cmp MEM8(ebp + (-0x1F8)), 0 */ /* 0x1002EEBE: cmp byte ptr [ebp - 0x1f8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1F8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EED1; /* 0x1002EEC5: je 0x1002eed1 */
L_1002EEC7:
    ecx = MEM32(ebp + (-0x1FC)); /* 0x1002EEC7: mov ecx, dword ptr [ebp - 0x1fc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002EECD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002EED1:
    esi = POP32_VAL(esp); /* 0x1002EED1: pop esi */
L_1002EED2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002EED2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1002EED5: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002EED6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002EED8: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002EED9: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002EEDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002EEE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002EEE1: ret  */
L_1002EEE2:
    ecx = MEM32(ebp + (-0x1B8)); /* 0x1002EEE2: mov ecx, dword ptr [ebp - 0x1b8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C8)) = MEM32(ebp + (-0x1C8)) + 1; /* 0x1002EEE8: inc dword ptr [ebp - 0x1c8] */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)edi * (int32_t)0xAu); /* 0x1002EEEE: imul eax, edi, 0xa */
    edi = ecx + (-0x30); /* 0x1002EEF1: lea edi, [ecx - 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1002EEF4: add edi, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002EC08; /* 0x1002EEF6: jmp 0x1002ec08 */
L_1002EEFB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x194))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x194)) = MEM32(ebp + (-0x194)) - 1; /* 0x1002EEFB: dec dword ptr [ebp - 0x194] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002EDBA; /* 0x1002EF01: jne 0x1002edba */
L_1002EF07:
    RECOMP_BACKEDGE();
    goto L_1002EE09; /* 0x1002EF07: jmp 0x1002ee09 */
L_1002EF0C:
    ecx = MEM32(ebp + (-0x1D0)); /* 0x1002EF0C: mov ecx, dword ptr [ebp - 0x1d0] */
    /* test ecx, ecx */ /* 0x1002EF12: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EEBC; /* 0x1002EF14: jne 0x1002eebc */
L_1002EF16:
    goto L_1002EF9E; /* 0x1002EF16: jmp 0x1002ef9e */
L_1002EF1B:
    /* test edi, edi */ /* 0x1002EF1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002ECF5; /* 0x1002EF1D: jne 0x1002ecf5 */
L_1002EF23:
    goto L_1002EF90; /* 0x1002EF23: jmp 0x1002ef90 */
L_1002EF25:
    /* cmp MEM8(edi), 0x25u */ /* 0x1002EF25: cmp byte ptr [edi], 0x25 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EE95; /* 0x1002EF28: jne 0x1002ee95 */
L_1002EF2E:
    goto L_100590A3; /* 0x1002EF2E: jmp 0x100590a3 */
L_1002EF33:
    /* cmp LO8(eax), 0x58u */ /* 0x1002EF33: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EC08; /* 0x1002EF35: je 0x1002ec08 */
L_1002EF3B:
    RECOMP_BACKEDGE();
    goto L_1002EC06; /* 0x1002EF3B: jmp 0x1002ec06 */
L_1002EF40:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1B8)) = MEM32(ebp + (-0x1B8)) & 0; /* 0x1002EF40: and dword ptr [ebp - 0x1b8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002EC5C; /* 0x1002EF47: jmp 0x1002ec5c */
L_1002EF4C:
    MEM8(ebp + (-0x185)) = (uint8_t)(1); /* 0x1002EF4C: mov byte ptr [ebp - 0x185], 1 */
    RECOMP_BACKEDGE();
    goto L_1002EC87; /* 0x1002EF53: jmp 0x1002ec87 */
L_1002EF58:
    edi = MEM32(ebp + (-0x198)); /* 0x1002EF58: mov edi, dword ptr [ebp - 0x198] */
    RECOMP_BACKEDGE();
    goto L_1002EE67; /* 0x1002EF5E: jmp 0x1002ee67 */
L_1002EF63:
    MEM8(ebp + (-0x19A)) = (uint8_t)(1); /* 0x1002EF63: mov byte ptr [ebp - 0x19a], 1 */
    RECOMP_BACKEDGE();
    goto L_1002ED39; /* 0x1002EF6A: jmp 0x1002ed39 */
L_1002EF6F:
    eax = (uint32_t)LO8(ebx); /* 0x1002EF6F: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1002EF72: push eax */
    RECOMP_CALL(sub_10012255); /* 0x1002EF73: call 0x10012255 */
    RECOMP_FLAGS_IN();
    goto L_10058FC5; /* 0x1002EF78: jmp 0x10058fc5 */
L_1002EF7D:
    edi = MEM32(ebp + (-0x1A8)); /* 0x1002EF7D: mov edi, dword ptr [ebp - 0x1a8] */
    RECOMP_BACKEDGE();
    goto L_1002EE03; /* 0x1002EF83: jmp 0x1002ee03 */
L_1002EF88:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1002EF88: mov word ptr [ecx], ax */
    RECOMP_BACKEDGE();
    goto L_1002EE67; /* 0x1002EF8B: jmp 0x1002ee67 */
L_1002EF90:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002EF90: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005913F; /* 0x1002EF93: jne 0x1005913f */
L_1002EF99:
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x1002EF99: jmp 0x1002ee95 */
L_1002EF9E:
    /* cmp MEM8(ebp + (-0x187)), LO8(ecx) */ /* 0x1002EF9E: cmp byte ptr [ebp - 0x187], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x187))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EEBC; /* 0x1002EFA4: jne 0x1002eebc */
L_1002EFAA:
    RECOMP_BACKEDGE();
    goto L_1002EEBE; /* 0x1002EFAA: jmp 0x1002eebe */
L_10058316:
    RECOMP_CALL(sub_1001177D); /* 0x10058316: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005831B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10058321: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10058326: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002EED2; /* 0x10058329: jmp 0x1002eed2 */
L_1005832E:
    PUSH32(esp, ecx); /* 0x1005832E: push ecx */
    RECOMP_CALL(sub_1001427C); /* 0x1005832F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058334: pop ecx */
    ecx = eax; /* 0x10058335: mov ecx, eax */
    /* cmp ecx, esi */ /* 0x10058337: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058354; /* 0x10058339: je 0x10058354 */
L_1005833B:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1005833B: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058354; /* 0x1005833E: je 0x10058354 */
L_10058340:
    edx = ecx; /* 0x10058340: mov edx, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10058342: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10058345: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10058348: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10058348: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x1005834B: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10058359; /* 0x10058352: jmp 0x10058359 */
L_10058354:
    edx = 0x100DF520u; /* 0x10058354: mov edx, 0x100df520 */
L_10058359:
    /* test MEM8(edx + 0x24), 0x7Fu */ /* 0x10058359: test byte ptr [edx + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005838B; /* 0x1005835D: jne 0x1005838b */
L_1005835F:
    /* cmp ecx, esi */ /* 0x1005835F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005837C; /* 0x10058361: je 0x1005837c */
L_10058363:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10058363: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005837C; /* 0x10058366: je 0x1005837c */
L_10058368:
    eax = ecx; /* 0x10058368: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005836A: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005836D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10058370: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10058370: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x10058373: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10058381; /* 0x1005837A: jmp 0x10058381 */
L_1005837C:
    ecx = 0x100DF520u; /* 0x1005837C: mov ecx, 0x100df520 */
L_10058381:
    /* test MEM8(ecx + 0x24), 0x80u */ /* 0x10058381: test byte ptr [ecx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EB12; /* 0x10058385: je 0x1002eb12 */
L_1005838B:
    RECOMP_CALL(sub_1001177D); /* 0x1005838B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10058390: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10058396: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005839B: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1002EED1; /* 0x1005839D: jmp 0x1002eed1 */
L_100583A2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100583A2: dec esi */
    _flag_k = FK_DEC;
    eax = ebp + (-0x1A0); /* 0x100583A3: lea eax, [ebp - 0x1a0] */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x100583A9: mov dword ptr [ebp - 0x1a0], esi */
    esi = MEM32(ebp + (-0x18C)); /* 0x100583AF: mov esi, dword ptr [ebp - 0x18c] */
    PUSH32(esp, esi); /* 0x100583B5: push esi */
    PUSH32(esp, eax); /* 0x100583B6: push eax */
    RECOMP_CALL(sub_1001AD95); /* 0x100583B7: call 0x1001ad95 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100583BC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100583BD: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100583BE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100583CC; /* 0x100583C1: je 0x100583cc */
L_100583C3:
    PUSH32(esp, esi); /* 0x100583C3: push esi */
    PUSH32(esp, eax); /* 0x100583C4: push eax */
    RECOMP_CALL(sub_1001C4D0); /* 0x100583C5: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100583CA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100583CB: pop ecx */
L_100583CC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100583CC: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(edi); /* 0x100583CD: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x100583D0: push eax */
    RECOMP_CALL(sub_1001AD77); /* 0x100583D1: call 0x1001ad77 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100583D6: pop ecx */
    /* test eax, eax */ /* 0x100583D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100583CC; /* 0x100583D9: jne 0x100583cc */
L_100583DB:
    esi = MEM32(ebp + (-0x1A0)); /* 0x100583DB: mov esi, dword ptr [ebp - 0x1a0] */
    MEM32(ebp + (-0x198)) = edi; /* 0x100583E1: mov dword ptr [ebp - 0x198], edi */
    MEM32(ebp + (-0x190)) = esi; /* 0x100583E7: mov dword ptr [ebp - 0x190], esi */
    RECOMP_BACKEDGE();
    goto L_1002EE8B; /* 0x100583ED: jmp 0x1002ee8b */
L_100583F2:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002EC08; /* 0x100583F2: je 0x1002ec08 */
L_100583F8:
    /* cmp eax, 0x2Au */ /* 0x100583F8: cmp eax, 0x2a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058479; /* 0x100583FB: je 0x10058479 */
L_100583FD:
    /* cmp eax, 0x46u */ /* 0x100583FD: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EC08; /* 0x10058400: je 0x1002ec08 */
L_10058406:
    /* cmp eax, 0x49u */ /* 0x10058406: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005841B; /* 0x10058409: je 0x1005841b */
L_1005840B:
    /* cmp eax, 0x4Cu */ /* 0x1005840B: cmp eax, 0x4c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EC06; /* 0x1005840E: jne 0x1002ec06 */
L_10058414:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) + 1); /* 0x10058414: inc bh */
    _flag_k = FK_NARROW(FK_INC, 24);
    RECOMP_BACKEDGE();
    goto L_1002EC08; /* 0x10058416: jmp 0x1002ec08 */
L_1005841B:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1005841B: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x36u */ /* 0x1005841E: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058445; /* 0x10058420: jne 0x10058445 */
L_10058422:
    ecx = esi + 0x2; /* 0x10058422: lea ecx, [esi + 2] */
    /* cmp MEM8(ecx), 0x34u */ /* 0x10058425: cmp byte ptr [ecx], 0x34 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058445; /* 0x10058428: jne 0x10058445 */
L_1005842A:
    esi = ecx; /* 0x1005842A: mov esi, ecx */
L_1005842C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1DC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1DC)) = MEM32(ebp + (-0x1DC)) + 1; /* 0x1005842C: inc dword ptr [ebp - 0x1dc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C4)) = MEM32(ebp + (-0x1C4)) & 0; /* 0x10058432: and dword ptr [ebp - 0x1c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1B0)) = MEM32(ebp + (-0x1B0)) & 0; /* 0x10058439: and dword ptr [ebp - 0x1b0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002EC08; /* 0x10058440: jmp 0x1002ec08 */
L_10058445:
    /* cmp LO8(eax), 0x33u */ /* 0x10058445: cmp al, 0x33 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x33u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058458; /* 0x10058447: jne 0x10058458 */
L_10058449:
    ecx = esi + 0x2; /* 0x10058449: lea ecx, [esi + 2] */
    /* cmp MEM8(ecx), 0x32u */ /* 0x1005844C: cmp byte ptr [ecx], 0x32 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x32u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058458; /* 0x1005844F: jne 0x10058458 */
L_10058451:
    esi = ecx; /* 0x10058451: mov esi, ecx */
    RECOMP_BACKEDGE();
    goto L_1002EC08; /* 0x10058453: jmp 0x1002ec08 */
L_10058458:
    /* cmp LO8(eax), 0x64u */ /* 0x10058458: cmp al, 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EC08; /* 0x1005845A: je 0x1002ec08 */
L_10058460:
    /* cmp LO8(eax), 0x69u */ /* 0x10058460: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100584BF; /* 0x10058462: je 0x100584bf */
L_10058464:
    /* cmp LO8(eax), 0x6Fu */ /* 0x10058464: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EC08; /* 0x10058466: je 0x1002ec08 */
L_1005846C:
    /* cmp LO8(eax), 0x78u */ /* 0x1005846C: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF33; /* 0x1005846E: jne 0x1002ef33 */
L_10058474:
    RECOMP_BACKEDGE();
    goto L_1002EC08; /* 0x10058474: jmp 0x1002ec08 */
L_10058479:
    SET_HI8(eax, MEM8(ebp + (-0x186))); /* 0x10058479: mov ah, byte ptr [ebp - 0x186] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(eax, HI8(eax) + 1); /* 0x1005847F: inc ah */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x186)) = (uint8_t)(HI8(eax)); /* 0x10058481: mov byte ptr [ebp - 0x186], ah */
    RECOMP_BACKEDGE();
    goto L_1002EC0E; /* 0x10058487: jmp 0x1002ec0e */
L_1005848C:
    eax = esi + 0x1; /* 0x1005848C: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0x6Cu */ /* 0x1005848F: cmp byte ptr [eax], 0x6c */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058498; /* 0x10058492: jne 0x10058498 */
L_10058494:
    esi = eax; /* 0x10058494: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_1005842C; /* 0x10058496: jmp 0x1005842c */
L_10058498:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) + 1); /* 0x10058498: inc bh */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1005849A:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x1005849A: mov al, byte ptr [ebp - 0x185] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x100584A0: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
L_100584A2:
    MEM8(ebp + (-0x185)) = (uint8_t)(LO8(eax)); /* 0x100584A2: mov byte ptr [ebp - 0x185], al */
L_100584A8:
    SET_HI8(eax, MEM8(ebp + (-0x186))); /* 0x100584A8: mov ah, byte ptr [ebp - 0x186] */
    RECOMP_BACKEDGE();
    goto L_1002EC14; /* 0x100584AE: jmp 0x1002ec14 */
L_100584B3:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x100584B3: mov al, byte ptr [ebp - 0x185] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(ebx, HI8(ebx) - 1); /* 0x100584B9: dec bh */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x100584BB: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    RECOMP_BACKEDGE();
    goto L_100584A2; /* 0x100584BD: jmp 0x100584a2 */
L_100584BF:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x100584BF: mov al, byte ptr [ebp - 0x185] */
    RECOMP_BACKEDGE();
    goto L_100584A8; /* 0x100584C5: jmp 0x100584a8 */
L_100584C7:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x100584C7: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100584CD: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x100584CE: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x100584D4: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x100584DA: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002ECC9; /* 0x100584DF: jmp 0x1002ecc9 */
L_100584E4:
    eax = MEM32(ebp + (-0x1EC)); /* 0x100584E4: mov eax, dword ptr [ebp - 0x1ec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x100584EA: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1EC)) = eax; /* 0x100584ED: mov dword ptr [ebp - 0x1ec], eax */
    edx = MEM32(eax + (-0x4)); /* 0x100584F3: mov edx, dword ptr [eax - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x100584F6: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1E8)) = eax; /* 0x100584F9: mov dword ptr [ebp - 0x1e8], eax */
    MEM32(ebp + (-0x1B8)) = edx; /* 0x100584FF: mov dword ptr [ebp - 0x1b8], edx */
    eax = MEM32(eax + (-0x4)); /* 0x10058505: mov eax, dword ptr [eax - 4] */
    MEM32(ebp + (-0x1D4)) = eax; /* 0x10058508: mov dword ptr [ebp - 0x1d4], eax */
    /* cmp eax, 1 */ /* 0x1005850E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100590B2; /* 0x10058511: jb 0x100590b2 */
L_10058517:
    edx = MEM32(ebp + (-0x1C8)); /* 0x10058517: mov edx, dword ptr [ebp - 0x1c8] */
    RECOMP_BACKEDGE();
    goto L_1002ED14; /* 0x1005851D: jmp 0x1002ed14 */
L_10058522:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002ED39; /* 0x10058522: je 0x1002ed39 */
L_10058528:
    /* cmp ecx, 0x63u */ /* 0x10058528: cmp ecx, 0x63 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058930; /* 0x1005852B: je 0x10058930 */
L_10058531:
    /* cmp ecx, 0x64u */ /* 0x10058531: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002ED39; /* 0x10058534: je 0x1002ed39 */
L_1005853A:
    if (CMP_LE(_flag_a, _flag_b)) goto L_10058AF1; /* 0x1005853A: jle 0x10058af1 */
L_10058540:
    /* cmp ecx, 0x67u */ /* 0x10058540: cmp ecx, 0x67 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10058585; /* 0x10058543: jle 0x10058585 */
L_10058545:
    /* cmp ecx, 0x69u */ /* 0x10058545: cmp ecx, 0x69 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058567; /* 0x10058548: je 0x10058567 */
L_1005854A:
    /* cmp ecx, 0x6Eu */ /* 0x1005854A: cmp ecx, 0x6e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058AF1; /* 0x1005854D: jne 0x10058af1 */
L_10058553:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10058553: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x1005855A: mov eax, esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF58; /* 0x1005855C: jne 0x1002ef58 */
L_10058562:
    RECOMP_BACKEDGE();
    goto L_1002EE3E; /* 0x10058562: jmp 0x1002ee3e */
L_10058567:
    PUSH32(esp, 0x64u); /* 0x10058567: push 0x64 */
    edi = POP32_VAL(esp); /* 0x10058569: pop edi */
    MEM32(ebp + (-0x1A8)) = edi; /* 0x1005856A: mov dword ptr [ebp - 0x1a8], edi */
L_10058570:
    /* cmp ebx, 0x2Du */ /* 0x10058570: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058C24; /* 0x10058573: jne 0x10058c24 */
L_10058579:
    MEM8(ebp + (-0x1AA)) = (uint8_t)(1); /* 0x10058579: mov byte ptr [ebp - 0x1aa], 1 */
    goto L_10058C29; /* 0x10058580: jmp 0x10058c29 */
L_10058585:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10058585: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x2Du */ /* 0x10058587: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058597; /* 0x1005858A: jne 0x10058597 */
L_1005858C:
    eax = MEM32(ebp + (-0x1BC)); /* 0x1005858C: mov eax, dword ptr [ebp - 0x1bc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058592: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10058593: mov byte ptr [eax], bl */
    goto L_1005859C; /* 0x10058595: jmp 0x1005859c */
L_10058597:
    /* cmp ebx, 0x2Bu */ /* 0x10058597: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100585C0; /* 0x1005859A: jne 0x100585c0 */
L_1005859C:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005859C: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100585A2: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = edi; /* 0x100585A3: mov dword ptr [ebp - 0x194], edi */
    edi = MEM32(ebp + (-0x190)); /* 0x100585A9: mov edi, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100585AF: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x100585B0: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100585B5: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x100585B7: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x100585B8: mov dword ptr [ebp - 0x1a4], ebx */
    goto L_100585C6; /* 0x100585BE: jmp 0x100585c6 */
L_100585C0:
    edi = MEM32(ebp + (-0x190)); /* 0x100585C0: mov edi, dword ptr [ebp - 0x190] */
L_100585C6:
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x100585C6: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100585D6; /* 0x100585CD: jne 0x100585d6 */
L_100585CF:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x194)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x194)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x194)) = MEM32(ebp + (-0x194)) | 0xFFFFFFFFu; /* 0x100585CF: or dword ptr [ebp - 0x194], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100585D6:
    eax = (uint32_t)LO8(ebx); /* 0x100585D6: movzx eax, bl */
    PUSH32(esp, eax); /* 0x100585D9: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x100585DA: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
L_100585DF:
    ecx = POP32_VAL(esp); /* 0x100585DF: pop ecx */
    ecx = MEM32(ebp + (-0x194)); /* 0x100585E0: mov ecx, dword ptr [ebp - 0x194] */
    /* test eax, eax */ /* 0x100585E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058654; /* 0x100585E8: je 0x10058654 */
L_100585EA:
    eax = ecx; /* 0x100585EA: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100585EC: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x100585ED: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x100585F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058654; /* 0x100585F5: je 0x10058654 */
L_100585F7:
    eax = MEM32(ebp + (-0x1BC)); /* 0x100585F7: mov eax, dword ptr [ebp - 0x1bc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x100585FD: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x10058603: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D8); /* 0x10058606: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x1005860C: push eax */
    eax = ebp + (-0x184); /* 0x1005860D: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058613: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x10058614: push eax */
    eax = ebp + (-0x1BC); /* 0x10058615: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x1005861B: push eax */
    eax = ebp + (-0x1E0); /* 0x1005861C: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x10058622: push eax */
    PUSH32(esp, esi); /* 0x10058623: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x10058624: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10058629: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005862C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x1005862E: je 0x1002ee95 */
L_10058634:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058634: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005863A: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1005863B: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10058640: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x10058642: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058645: push eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058646: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x1005864C: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058651: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100585DF; /* 0x10058652: jmp 0x100585df */
L_10058654:
    eax = MEM32(ebp + (-0x204)); /* 0x10058654: mov eax, dword ptr [ebp - 0x204] */
    eax = MEM32(eax + 0x84); /* 0x1005865A: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x10058660: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x10058662: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x1A9)) = (uint8_t)(LO8(eax)); /* 0x10058664: mov byte ptr [ebp - 0x1a9], al */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1005866A: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058752; /* 0x1005866C: jne 0x10058752 */
L_10058672:
    eax = ecx; /* 0x10058672: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10058674: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x10058675: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x1005867B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058752; /* 0x1005867D: je 0x10058752 */
L_10058683:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058683: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058689: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x1005868A: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1BC)); /* 0x1005868F: mov ecx, dword ptr [ebp - 0x1bc] */
    ebx = eax; /* 0x10058695: mov ebx, eax */
    SET_LO8(eax, MEM8(ebp + (-0x1A9))); /* 0x10058697: mov al, byte ptr [ebp - 0x1a9] */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1005869D: mov dword ptr [ebp - 0x1a4], ebx */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x100586A3: mov byte ptr [ecx + esi], al */
    eax = ebp + (-0x1D8); /* 0x100586A6: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x100586AC: push eax */
    eax = ebp + (-0x184); /* 0x100586AD: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100586B3: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100586B4: push eax */
    eax = ebp + (-0x1BC); /* 0x100586B5: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x100586BB: push eax */
    eax = ebp + (-0x1E0); /* 0x100586BC: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x100586C2: push eax */
    PUSH32(esp, esi); /* 0x100586C3: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x100586C4: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100586C9: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100586CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x100586CE: je 0x1002ee95 */
L_100586D4:
    eax = (uint32_t)LO8(ebx); /* 0x100586D4: movzx eax, bl */
    PUSH32(esp, eax); /* 0x100586D7: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x100586D8: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    goto L_1005874D; /* 0x100586DD: jmp 0x1005874d */
L_100586DF:
    ecx = MEM32(ebp + (-0x194)); /* 0x100586DF: mov ecx, dword ptr [ebp - 0x194] */
    eax = ecx; /* 0x100586E5: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100586E7: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x100586E8: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x100586EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058752; /* 0x100586F0: je 0x10058752 */
L_100586F2:
    eax = MEM32(ebp + (-0x1BC)); /* 0x100586F2: mov eax, dword ptr [ebp - 0x1bc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x100586F8: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x100586FE: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D8); /* 0x10058701: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x10058707: push eax */
    eax = ebp + (-0x184); /* 0x10058708: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005870E: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005870F: push eax */
    eax = ebp + (-0x1BC); /* 0x10058710: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x10058716: push eax */
    eax = ebp + (-0x1E0); /* 0x10058717: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x1005871D: push eax */
    PUSH32(esp, esi); /* 0x1005871E: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1005871F: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10058724: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10058727: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x10058729: je 0x1002ee95 */
L_1005872F:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005872F: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058735: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x10058736: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1005873B: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x1005873D: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058740: push eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058741: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x10058747: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005874C: pop ecx */
L_1005874D:
    ecx = POP32_VAL(esp); /* 0x1005874D: pop ecx */
    /* test eax, eax */ /* 0x1005874E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100586DF; /* 0x10058750: jne 0x100586df */
L_10058752:
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x10058752: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100588C1; /* 0x10058759: je 0x100588c1 */
L_1005875F:
    /* cmp ebx, 0x65u */ /* 0x1005875F: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005876D; /* 0x10058762: je 0x1005876d */
L_10058764:
    /* cmp ebx, 0x45u */ /* 0x10058764: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100588C1; /* 0x10058767: jne 0x100588c1 */
L_1005876D:
    ecx = MEM32(ebp + (-0x194)); /* 0x1005876D: mov ecx, dword ptr [ebp - 0x194] */
    eax = ecx; /* 0x10058773: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10058775: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x10058776: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x1005877C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100588C1; /* 0x1005877E: je 0x100588c1 */
L_10058784:
    eax = MEM32(ebp + (-0x1BC)); /* 0x10058784: mov eax, dword ptr [ebp - 0x1bc] */
    MEM8(esi + eax) = (uint8_t)(0x65u); /* 0x1005878A: mov byte ptr [esi + eax], 0x65 */
    eax = ebp + (-0x1D8); /* 0x1005878E: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x10058794: push eax */
    eax = ebp + (-0x184); /* 0x10058795: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005879B: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005879C: push eax */
    eax = ebp + (-0x1BC); /* 0x1005879D: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x100587A3: push eax */
    eax = ebp + (-0x1E0); /* 0x100587A4: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x100587AA: push eax */
    PUSH32(esp, esi); /* 0x100587AB: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x100587AC: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100587B1: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100587B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x100587B6: je 0x1002ee95 */
L_100587BC:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x100587BC: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100587C2: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x100587C3: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100587C8: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x100587CA: mov dword ptr [ebp - 0x1a4], ebx */
    ecx = POP32_VAL(esp); /* 0x100587D0: pop ecx */
    /* cmp ebx, 0x2Du */ /* 0x100587D1: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005880E; /* 0x100587D4: jne 0x1005880e */
L_100587D6:
    eax = MEM32(ebp + (-0x1BC)); /* 0x100587D6: mov eax, dword ptr [ebp - 0x1bc] */
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x100587DC: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D8); /* 0x100587DF: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x100587E5: push eax */
    eax = ebp + (-0x184); /* 0x100587E6: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100587EC: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100587ED: push eax */
    eax = ebp + (-0x1BC); /* 0x100587EE: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x100587F4: push eax */
    eax = ebp + (-0x1E0); /* 0x100587F5: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x100587FB: push eax */
    PUSH32(esp, esi); /* 0x100587FC: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x100587FD: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10058802: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10058805: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10058813; /* 0x10058807: jne 0x10058813 */
L_10058809:
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x10058809: jmp 0x1002ee95 */
L_1005880E:
    /* cmp ebx, 0x2Bu */ /* 0x1005880E: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058843; /* 0x10058811: jne 0x10058843 */
L_10058813:
    ecx = MEM32(ebp + (-0x194)); /* 0x10058813: mov ecx, dword ptr [ebp - 0x194] */
    eax = ecx; /* 0x10058819: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005881B: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x1005881C: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x10058822: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005882E; /* 0x10058824: jne 0x1005882e */
L_10058826:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x194))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x194)) = MEM32(ebp + (-0x194)) & eax; /* 0x10058826: and dword ptr [ebp - 0x194], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10058843; /* 0x1005882C: jmp 0x10058843 */
L_1005882E:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005882E: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058834: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x10058835: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1005883A: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1005883C: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1005883D: mov dword ptr [ebp - 0x1a4], ebx */
L_10058843:
    eax = (uint32_t)LO8(ebx); /* 0x10058843: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058846: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10058847: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    goto L_100588BC; /* 0x1005884C: jmp 0x100588bc */
L_1005884E:
    ecx = MEM32(ebp + (-0x194)); /* 0x1005884E: mov ecx, dword ptr [ebp - 0x194] */
    eax = ecx; /* 0x10058854: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10058856: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = ecx; /* 0x10058857: mov dword ptr [ebp - 0x194], ecx */
    /* test eax, eax */ /* 0x1005885D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100588C1; /* 0x1005885F: je 0x100588c1 */
L_10058861:
    eax = MEM32(ebp + (-0x1BC)); /* 0x10058861: mov eax, dword ptr [ebp - 0x1bc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x10058867: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1005886D: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1D8); /* 0x10058870: lea eax, [ebp - 0x1d8] */
    PUSH32(esp, eax); /* 0x10058876: push eax */
    eax = ebp + (-0x184); /* 0x10058877: lea eax, [ebp - 0x184] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005887D: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005887E: push eax */
    eax = ebp + (-0x1BC); /* 0x1005887F: lea eax, [ebp - 0x1bc] */
    PUSH32(esp, eax); /* 0x10058885: push eax */
    eax = ebp + (-0x1E0); /* 0x10058886: lea eax, [ebp - 0x1e0] */
    PUSH32(esp, eax); /* 0x1005888C: push eax */
    PUSH32(esp, esi); /* 0x1005888D: push esi */
    RECOMP_CALL(sub_1001B85F); /* 0x1005888E: call 0x1001b85f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10058893: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10058896: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE95; /* 0x10058898: je 0x1002ee95 */
L_1005889E:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005889E: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100588A4: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1001ADC3); /* 0x100588A5: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100588AA: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x100588AC: movzx eax, bl */
    PUSH32(esp, eax); /* 0x100588AF: push eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x100588B0: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_CALL(sub_1000F1D5); /* 0x100588B6: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100588BB: pop ecx */
L_100588BC:
    ecx = POP32_VAL(esp); /* 0x100588BC: pop ecx */
    /* test eax, eax */ /* 0x100588BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005884E; /* 0x100588BF: jne 0x1005884e */
L_100588C1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100588C1: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x100588C2: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x1A0)) = edi; /* 0x100588C8: mov dword ptr [ebp - 0x1a0], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100588CE: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100588E1; /* 0x100588D1: je 0x100588e1 */
L_100588D3:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x100588D3: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x100588D9: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x100588DA: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100588DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100588E0: pop ecx */
L_100588E1:
    /* cmp MEM32(ebp + (-0x1C0)), 0 */ /* 0x100588E1: cmp dword ptr [ebp - 0x1c0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE95; /* 0x100588E8: je 0x1002ee95 */
L_100588EE:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x100588EE: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF58; /* 0x100588F5: jne 0x1002ef58 */
L_100588FB:
    eax = MEM32(ebp + (-0x1BC)); /* 0x100588FB: mov eax, dword ptr [ebp - 0x1bc] */
    ecx = ebp + (-0x204); /* 0x10058901: lea ecx, [ebp - 0x204] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x10058907: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1005890D: push ecx */
    ecx = MEM32(ebp + (-0x1B8)); /* 0x1005890E: mov ecx, dword ptr [ebp - 0x1b8] */
    PUSH32(esp, eax); /* 0x10058914: push eax */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x10058915: mov byte ptr [esi + eax], 0 */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x19A)); /* 0x10058919: movsx eax, byte ptr [ebp - 0x19a] */
    PUSH32(esp, ecx); /* 0x10058920: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10058921: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x10058922: push eax */
    RECOMP_CALL(sub_1001A897); /* 0x10058923: call 0x1001a897 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10058928: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002EF58; /* 0x1005892B: jmp 0x1002ef58 */
L_10058930:
    /* test edx, edx */ /* 0x10058930: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10058945; /* 0x10058932: jne 0x10058945 */
L_10058934:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10058934: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C8)) = 1; /* 0x10058935: mov dword ptr [ebp - 0x1c8], 1 */
    MEM32(ebp + (-0x194)) = edi; /* 0x1005893F: mov dword ptr [ebp - 0x194], edi */
L_10058945:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x10058945: mov al, byte ptr [ebp - 0x185] */
    /* test LO8(eax), LO8(eax) */ /* 0x1005894B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10058956; /* 0x1005894D: jle 0x10058956 */
L_1005894F:
    MEM8(ebp + (-0x199)) = (uint8_t)(1); /* 0x1005894F: mov byte ptr [ebp - 0x199], 1 */
L_10058956:
    ecx = MEM32(ebp + (-0x190)); /* 0x10058956: mov ecx, dword ptr [ebp - 0x190] */
    esi = MEM32(ebp + (-0x1B8)); /* 0x1005895C: mov esi, dword ptr [ebp - 0x1b8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10058962: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = ecx; /* 0x10058963: mov dword ptr [ebp - 0x190], ecx */
    MEM32(ebp + (-0x1A0)) = ecx; /* 0x10058969: mov dword ptr [ebp - 0x1a0], ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1005896F: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058988; /* 0x10058972: je 0x10058988 */
L_10058974:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058974: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x1005897A: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x1005897B: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058980: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10058981: pop ecx */
    ecx = MEM32(ebp + (-0x190)); /* 0x10058982: mov ecx, dword ptr [ebp - 0x190] */
L_10058988:
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058988: mov edi, dword ptr [ebp - 0x1a8] */
    /* cmp edi, 0x63u */ /* 0x1005898E: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058999; /* 0x10058991: je 0x10058999 */
L_10058993:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D4)) = MEM32(ebp + (-0x1D4)) - 1; /* 0x10058993: dec dword ptr [ebp - 0x1d4] */
    _flag_k = FK_DEC;
L_10058999:
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x10058999: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100589B9; /* 0x100589A0: je 0x100589b9 */
L_100589A2:
    edx = MEM32(ebp + (-0x194)); /* 0x100589A2: mov edx, dword ptr [ebp - 0x194] */
    eax = edx; /* 0x100589A8: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100589AA: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = edx; /* 0x100589AB: mov dword ptr [ebp - 0x194], edx */
    /* test eax, eax */ /* 0x100589B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058DA0; /* 0x100589B3: je 0x10058da0 */
L_100589B9:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x100589B9: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100589BF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = ecx; /* 0x100589C0: mov dword ptr [ebp - 0x190], ecx */
    MEM32(ebp + (-0x1A0)) = ecx; /* 0x100589C6: mov dword ptr [ebp - 0x1a0], ecx */
    RECOMP_CALL(sub_1001ADC3); /* 0x100589CC: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100589D1: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x100589D3: mov dword ptr [ebp - 0x1a4], ebx */
    ecx = POP32_VAL(esp); /* 0x100589D9: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100589DA: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D7A; /* 0x100589DD: je 0x10058d7a */
L_100589E3:
    /* cmp edi, 0x63u */ /* 0x100589E3: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058A2E; /* 0x100589E6: je 0x10058a2e */
L_100589E8:
    /* cmp edi, 0x73u */ /* 0x100589E8: cmp edi, 0x73 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058A00; /* 0x100589EB: jne 0x10058a00 */
L_100589ED:
    /* cmp ebx, 9 */ /* 0x100589ED: cmp ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100589FB; /* 0x100589F0: jl 0x100589fb */
L_100589F2:
    /* cmp ebx, 0xDu */ /* 0x100589F2: cmp ebx, 0xd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10058D7A; /* 0x100589F5: jle 0x10058d7a */
L_100589FB:
    /* cmp ebx, 0x20u */ /* 0x100589FB: cmp ebx, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058A2E; /* 0x100589FE: jne 0x10058a2e */
L_10058A00:
    /* cmp edi, 0x7Bu */ /* 0x10058A00: cmp edi, 0x7b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058D7A; /* 0x10058A03: jne 0x10058d7a */
L_10058A09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10058A09: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x10058A0B: mov eax, ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x10058A0D: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    ecx = ebx; /* 0x10058A10: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10058A12: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10058A15: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10058A16: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x10058A16: shl edx, cl */
    ecx = (int32_t)(int8_t)MEM8(ebp + eax + (-0x24)); /* 0x10058A18: movsx ecx, byte ptr [ebp + eax - 0x24] */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x1A9)); /* 0x10058A1D: movsx eax, byte ptr [ebp - 0x1a9] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10058A24: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, edx */ /* 0x10058A26: test ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058D7A; /* 0x10058A28: je 0x10058d7a */
L_10058A2E:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10058A2E: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058D6E; /* 0x10058A35: jne 0x10058d6e */
L_10058A3B:
    eax = MEM32(ebp + (-0x1D4)); /* 0x10058A3B: mov eax, dword ptr [ebp - 0x1d4] */
    /* test eax, eax */ /* 0x10058A41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100590F8; /* 0x10058A43: je 0x100590f8 */
L_10058A49:
    /* cmp MEM8(ebp + (-0x199)), 0 */ /* 0x10058A49: cmp byte ptr [ebp - 0x199], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x199))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D56; /* 0x10058A50: je 0x10058d56 */
L_10058A56:
    eax = (uint32_t)LO8(ebx); /* 0x10058A56: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058A59: push eax */
    MEM8(ebp + (-0x1E4)) = (uint8_t)(LO8(ebx)); /* 0x10058A5A: mov byte ptr [ebp - 0x1e4], bl */
    RECOMP_CALL(sub_1002DFC5); /* 0x10058A60: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058A65: pop ecx */
    /* test eax, eax */ /* 0x10058A66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058A8F; /* 0x10058A68: je 0x10058a8f */
L_10058A6A:
    eax = MEM32(ebp + (-0x190)); /* 0x10058A6A: mov eax, dword ptr [ebp - 0x190] */
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058A70: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10058A76: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = eax; /* 0x10058A77: mov dword ptr [ebp - 0x190], eax */
    MEM32(ebp + (-0x1A0)) = eax; /* 0x10058A7D: mov dword ptr [ebp - 0x1a0], eax */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058A83: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058A88: pop ecx */
    MEM8(ebp + (-0x1E3)) = (uint8_t)(LO8(eax)); /* 0x10058A89: mov byte ptr [ebp - 0x1e3], al */
L_10058A8F:
    eax = ebp + (-0x204); /* 0x10058A8F: lea eax, [ebp - 0x204] */
    MEM32(ebp + (-0x1F0)) = 0x3Fu; /* 0x10058A95: mov dword ptr [ebp - 0x1f0], 0x3f */
    PUSH32(esp, eax); /* 0x10058A9F: push eax */
    eax = MEM32(ebp + (-0x204)); /* 0x10058AA0: mov eax, dword ptr [ebp - 0x204] */
    PUSH32(esp, MEM32(eax + 0x74)); /* 0x10058AA6: push dword ptr [eax + 0x74] */
    eax = ebp + (-0x1E4); /* 0x10058AA9: lea eax, [ebp - 0x1e4] */
    PUSH32(esp, eax); /* 0x10058AAF: push eax */
    eax = ebp + (-0x1F0); /* 0x10058AB0: lea eax, [ebp - 0x1f0] */
    PUSH32(esp, eax); /* 0x10058AB6: push eax */
    RECOMP_CALL(sub_1001EF00); /* 0x10058AB7: call 0x1001ef00 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1B8)); /* 0x10058ABC: mov edx, dword ptr [ebp - 0x1b8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10058AC2: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x1F0))); /* 0x10058AC5: mov ax, word ptr [ebp - 0x1f0] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x10058ACC: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10058ACF: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D4)) = MEM32(ebp + (-0x1D4)) - 1; /* 0x10058AD2: dec dword ptr [ebp - 0x1d4] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1B8)) = edx; /* 0x10058AD8: mov dword ptr [ebp - 0x1b8], edx */
    goto L_10058D6F; /* 0x10058ADE: jmp 0x10058d6f */
L_10058AE3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10058AE3: sub eax, 3 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10058570; /* 0x10058AE6: je 0x10058570 */
L_10058AEC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10058AEC: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10058B28; /* 0x10058AEF: je 0x10058b28 */
L_10058AF1:
    edi = MEM32(ebp + (-0x198)); /* 0x10058AF1: mov edi, dword ptr [ebp - 0x198] */
    eax = (uint32_t)MEM8(edi); /* 0x10058AF7: movzx eax, byte ptr [edi] */
    /* cmp eax, ebx */ /* 0x10058AFA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100590D6; /* 0x10058AFC: jne 0x100590d6 */
L_10058B02:
    SET_LO8(eax, MEM8(ebp + (-0x187))); /* 0x10058B02: mov al, byte ptr [ebp - 0x187] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x10058B08: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10058B0A: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EE6D; /* 0x10058B11: jne 0x1002ee6d */
L_10058B17:
    edx = MEM32(ebp + (-0x1EC)); /* 0x10058B17: mov edx, dword ptr [ebp - 0x1ec] */
    MEM32(ebp + (-0x1E8)) = edx; /* 0x10058B1D: mov dword ptr [ebp - 0x1e8], edx */
    RECOMP_BACKEDGE();
    goto L_1002EE6D; /* 0x10058B23: jmp 0x1002ee6d */
L_10058B28:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x10058B28: mov al, byte ptr [ebp - 0x185] */
    /* test LO8(eax), LO8(eax) */ /* 0x10058B2E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10058B39; /* 0x10058B30: jle 0x10058b39 */
L_10058B32:
    MEM8(ebp + (-0x199)) = (uint8_t)(1); /* 0x10058B32: mov byte ptr [ebp - 0x199], 1 */
L_10058B39:
    esi = MEM32(ebp + (-0x198)); /* 0x10058B39: mov esi, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058B3F: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x5Eu */ /* 0x10058B40: cmp byte ptr [esi], 0x5e */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058B4D; /* 0x10058B43: jne 0x10058b4d */
L_10058B45:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058B45: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1A9)) = (uint8_t)(0xFFu); /* 0x10058B46: mov byte ptr [ebp - 0x1a9], 0xff */
L_10058B4D:
    PUSH32(esp, 0x20u); /* 0x10058B4D: push 0x20 */
    eax = ebp + (-0x24); /* 0x10058B4F: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0); /* 0x10058B52: push 0 */
    PUSH32(esp, eax); /* 0x10058B54: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10058B55: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10058B5A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi), 0x5Du */ /* 0x10058B5D: cmp byte ptr [esi], 0x5d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058B6B; /* 0x10058B60: jne 0x10058b6b */
L_10058B62:
    SET_LO8(edx, 0x5Du); /* 0x10058B62: mov dl, 0x5d */
    MEM8(ebp + (-0x19)) = (uint8_t)(0x20u); /* 0x10058B64: mov byte ptr [ebp - 0x19], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058B68: inc esi */
    _flag_k = FK_INC;
    goto L_10058B71; /* 0x10058B69: jmp 0x10058b71 */
L_10058B6B:
    SET_LO8(edx, MEM8(ebp + (-0x1B1))); /* 0x10058B6B: mov dl, byte ptr [ebp - 0x1b1] */
L_10058B71:
    SET_LO8(ecx, MEM8(esi)); /* 0x10058B71: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x5Du */ /* 0x10058B73: cmp cl, 0x5d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058C10; /* 0x10058B76: je 0x10058c10 */
L_10058B7C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058B7C: inc esi */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x2Du */ /* 0x10058B7D: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058BE0; /* 0x10058B80: jne 0x10058be0 */
L_10058B82:
    /* test LO8(edx), LO8(edx) */ /* 0x10058B82: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058BE0; /* 0x10058B84: je 0x10058be0 */
L_10058B86:
    SET_LO8(eax, MEM8(esi)); /* 0x10058B86: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Du */ /* 0x10058B88: cmp al, 0x5d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058BE0; /* 0x10058B8A: je 0x10058be0 */
L_10058B8C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058B8C: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x198)) = esi; /* 0x10058B8D: mov dword ptr [ebp - 0x198], esi */
    /* cmp LO8(edx), LO8(eax) */ /* 0x10058B93: cmp dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10058B9B; /* 0x10058B95: jae 0x10058b9b */
L_10058B97:
    SET_HI8(eax, LO8(eax)); /* 0x10058B97: mov ah, al */
    goto L_10058B9F; /* 0x10058B99: jmp 0x10058b9f */
L_10058B9B:
    SET_HI8(eax, LO8(edx)); /* 0x10058B9B: mov ah, dl */
    SET_LO8(edx, LO8(eax)); /* 0x10058B9D: mov dl, al */
L_10058B9F:
    /* cmp LO8(edx), HI8(eax) */ /* 0x10058B9F: cmp dl, ah */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10058BC9; /* 0x10058BA1: jae 0x10058bc9 */
L_10058BA3:
    SET_LO8(eax, HI8(eax)); /* 0x10058BA3: mov al, ah */
    esi = (uint32_t)LO8(edx); /* 0x10058BA5: movzx esi, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(edx)); /* 0x10058BA8: sub al, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = (uint32_t)LO8(eax); /* 0x10058BAA: movzx edi, al */
L_10058BAD:
    edx = esi; /* 0x10058BAD: mov edx, esi */
    ecx = esi; /* 0x10058BAF: mov ecx, esi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10058BB1: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10058BB1: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10058BB4: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x10058BB7: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10058BB9: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10058BB9: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10058BBB: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058BBF: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10058BC0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10058BAD; /* 0x10058BC1: jne 0x10058bad */
L_10058BC3:
    esi = MEM32(ebp + (-0x198)); /* 0x10058BC3: mov esi, dword ptr [ebp - 0x198] */
L_10058BC9:
    ecx = (uint32_t)HI8(eax); /* 0x10058BC9: movzx ecx, ah */
    SET_LO8(eax, 1); /* 0x10058BCC: mov al, 1 */
    edx = ecx; /* 0x10058BCE: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10058BD0: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10058BD3: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10058BD3: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10058BD6: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10058BD6: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10058BD8: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x10058BDC: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10058BFF; /* 0x10058BDE: jmp 0x10058bff */
L_10058BE0:
    MEM8(ebp + (-0x1B1)) = (uint8_t)(LO8(ecx)); /* 0x10058BE0: mov byte ptr [ebp - 0x1b1], cl */
    SET_LO8(eax, 1); /* 0x10058BE6: mov al, 1 */
    ecx = (uint32_t)LO8(ecx); /* 0x10058BE8: movzx ecx, cl */
    edx = ecx; /* 0x10058BEB: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10058BED: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10058BF0: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10058BF0: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10058BF3: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x10058BF3: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x10058BF5: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, MEM8(ebp + (-0x1B1))); /* 0x10058BF9: mov dl, byte ptr [ebp - 0x1b1] */
L_10058BFF:
    SET_LO8(ecx, MEM8(esi)); /* 0x10058BFF: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x5Du */ /* 0x10058C01: cmp cl, 0x5d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058B7C; /* 0x10058C04: jne 0x10058b7c */
L_10058C0A:
    ebx = MEM32(ebp + (-0x1A4)); /* 0x10058C0A: mov ebx, dword ptr [ebp - 0x1a4] */
L_10058C10:
    /* cmp MEM8(esi), 0 */ /* 0x10058C10: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE95; /* 0x10058C13: je 0x1002ee95 */
L_10058C19:
    MEM32(ebp + (-0x198)) = esi; /* 0x10058C19: mov dword ptr [ebp - 0x198], esi */
    RECOMP_BACKEDGE();
    goto L_10058956; /* 0x10058C1F: jmp 0x10058956 */
L_10058C24:
    /* cmp ebx, 0x2Bu */ /* 0x10058C24: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058C68; /* 0x10058C27: jne 0x10058c68 */
L_10058C29:
    edi = MEM32(ebp + (-0x194)); /* 0x10058C29: mov edi, dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10058C2F: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = edi; /* 0x10058C30: mov dword ptr [ebp - 0x194], edi */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10058C45; /* 0x10058C36: jne 0x10058c45 */
L_10058C38:
    /* test edx, edx */ /* 0x10058C38: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058C45; /* 0x10058C3A: je 0x10058c45 */
L_10058C3C:
    MEM8(ebp + (-0x188)) = (uint8_t)(1); /* 0x10058C3C: mov byte ptr [ebp - 0x188], 1 */
    goto L_10058C6E; /* 0x10058C43: jmp 0x10058c6e */
L_10058C45:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058C45: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058C4B: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058C4C: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058C52: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058C58: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10058C5D: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10058C5F: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058C60: mov dword ptr [ebp - 0x1a4], ebx */
    goto L_10058C6E; /* 0x10058C66: jmp 0x10058c6e */
L_10058C68:
    edi = MEM32(ebp + (-0x194)); /* 0x10058C68: mov edi, dword ptr [ebp - 0x194] */
L_10058C6E:
    /* cmp ebx, 0x30u */ /* 0x10058C6E: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058E27; /* 0x10058C71: jne 0x10058e27 */
L_10058C77:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058C77: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058C7D: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058C7E: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058C84: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058C8A: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10058C8F: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058C91: mov dword ptr [ebp - 0x1a4], ebx */
    ecx = POP32_VAL(esp); /* 0x10058C97: pop ecx */
    /* cmp LO8(ebx), 0x78u */ /* 0x10058C98: cmp bl, 0x78 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D11; /* 0x10058C9B: je 0x10058d11 */
L_10058C9D:
    /* cmp LO8(ebx), 0x58u */ /* 0x10058C9D: cmp bl, 0x58 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D11; /* 0x10058CA0: je 0x10058d11 */
L_10058CA2:
    ecx = MEM32(ebp + (-0x1A8)); /* 0x10058CA2: mov ecx, dword ptr [ebp - 0x1a8] */
    MEM32(ebp + (-0x1C0)) = 1; /* 0x10058CA8: mov dword ptr [ebp - 0x1c0], 1 */
    /* cmp ecx, 0x78u */ /* 0x10058CB2: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058CDD; /* 0x10058CB5: je 0x10058cdd */
L_10058CB7:
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x10058CB7: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058CCF; /* 0x10058CBE: je 0x10058ccf */
L_10058CC0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10058CC0: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = edi; /* 0x10058CC1: mov dword ptr [ebp - 0x194], edi */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10058CCF; /* 0x10058CC7: jne 0x10058ccf */
L_10058CC9:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x188))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x188)) = (uint8_t)(MEM8(ebp + (-0x188)) + 1); /* 0x10058CC9: inc byte ptr [ebp - 0x188] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10058CCF:
    PUSH32(esp, 0x6Fu); /* 0x10058CCF: push 0x6f */
L_10058CD1:
    ecx = POP32_VAL(esp); /* 0x10058CD1: pop ecx */
    MEM32(ebp + (-0x1A8)) = ecx; /* 0x10058CD2: mov dword ptr [ebp - 0x1a8], ecx */
    RECOMP_BACKEDGE();
    goto L_1002ED4B; /* 0x10058CD8: jmp 0x1002ed4b */
L_10058CDD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10058CDD: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058CDE: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058CE4: mov dword ptr [ebp - 0x1a0], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10058CEA: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D03; /* 0x10058CED: je 0x10058d03 */
L_10058CEF:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058CEF: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x10058CF5: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10058CF6: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058CFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10058CFC: pop ecx */
    ecx = MEM32(ebp + (-0x1A8)); /* 0x10058CFD: mov ecx, dword ptr [ebp - 0x1a8] */
L_10058D03:
    PUSH32(esp, 0x30u); /* 0x10058D03: push 0x30 */
    ebx = POP32_VAL(esp); /* 0x10058D05: pop ebx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058D06: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002ED4B; /* 0x10058D0C: jmp 0x1002ed4b */
L_10058D11:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058D11: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058D17: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058D18: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058D1E: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058D24: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x10058D29: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x10058D30: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10058D32: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058D33: mov dword ptr [ebp - 0x1a4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058D4F; /* 0x10058D39: je 0x10058d4f */
L_10058D3B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x10058D3B: sub edi, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x194)) = edi; /* 0x10058D3E: mov dword ptr [ebp - 0x194], edi */
    /* cmp edi, 1 */ /* 0x10058D44: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10058D4F; /* 0x10058D47: jge 0x10058d4f */
L_10058D49:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x188))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x188)) = (uint8_t)(MEM8(ebp + (-0x188)) + 1); /* 0x10058D49: inc byte ptr [ebp - 0x188] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10058D4F:
    PUSH32(esp, 0x78u); /* 0x10058D4F: push 0x78 */
    RECOMP_BACKEDGE();
    goto L_10058CD1; /* 0x10058D51: jmp 0x10058cd1 */
L_10058D56:
    ecx = MEM32(ebp + (-0x1B8)); /* 0x10058D56: mov ecx, dword ptr [ebp - 0x1b8] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10058D5C: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10058D5E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10058D5F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1B8)) = ecx; /* 0x10058D60: mov dword ptr [ebp - 0x1b8], ecx */
    MEM32(ebp + (-0x1D4)) = eax; /* 0x10058D66: mov dword ptr [ebp - 0x1d4], eax */
    goto L_10058D6F; /* 0x10058D6C: jmp 0x10058d6f */
L_10058D6E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058D6E: inc esi */
    _flag_k = FK_INC;
L_10058D6F:
    ecx = MEM32(ebp + (-0x190)); /* 0x10058D6F: mov ecx, dword ptr [ebp - 0x190] */
    RECOMP_BACKEDGE();
    goto L_10058999; /* 0x10058D75: jmp 0x10058999 */
L_10058D7A:
    eax = MEM32(ebp + (-0x190)); /* 0x10058D7A: mov eax, dword ptr [ebp - 0x190] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10058D80: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = eax; /* 0x10058D81: mov dword ptr [ebp - 0x190], eax */
    MEM32(ebp + (-0x1A0)) = eax; /* 0x10058D87: mov dword ptr [ebp - 0x1a0], eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10058D8D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058DA0; /* 0x10058D90: je 0x10058da0 */
L_10058D92:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058D92: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x10058D98: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10058D99: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058D9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10058D9F: pop ecx */
L_10058DA0:
    eax = MEM32(ebp + (-0x1B8)); /* 0x10058DA0: mov eax, dword ptr [ebp - 0x1b8] */
    /* cmp esi, eax */ /* 0x10058DA6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE95; /* 0x10058DA8: je 0x1002ee95 */
L_10058DAE:
    /* cmp MEM8(ebp + (-0x186)), 0 */ /* 0x10058DAE: cmp byte ptr [ebp - 0x186], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x186))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF58; /* 0x10058DB5: jne 0x1002ef58 */
L_10058DBB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1D0)) = MEM32(ebp + (-0x1D0)) + 1; /* 0x10058DBB: inc dword ptr [ebp - 0x1d0] */
    _flag_k = FK_INC;
    /* cmp edi, 0x63u */ /* 0x10058DC1: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EF58; /* 0x10058DC4: je 0x1002ef58 */
L_10058DCA:
    /* cmp MEM8(ebp + (-0x199)), 0 */ /* 0x10058DCA: cmp byte ptr [ebp - 0x199], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x199))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + (-0x198)); /* 0x10058DD1: mov edi, dword ptr [ebp - 0x198] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058DE3; /* 0x10058DD7: je 0x10058de3 */
L_10058DD9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10058DD9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10058DDB: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1002EE67; /* 0x10058DDE: jmp 0x1002ee67 */
L_10058DE3:
    MEM8(eax) = (uint8_t)(0); /* 0x10058DE3: mov byte ptr [eax], 0 */
    RECOMP_BACKEDGE();
    goto L_1002EE67; /* 0x10058DE6: jmp 0x1002ee67 */
L_10058DEB:
    MEM8(ebp + (-0x1AA)) = (uint8_t)(1); /* 0x10058DEB: mov byte ptr [ebp - 0x1aa], 1 */
L_10058DF2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10058DF2: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x194)) = edi; /* 0x10058DF3: mov dword ptr [ebp - 0x194], edi */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10058E06; /* 0x10058DF9: jne 0x10058e06 */
L_10058DFB:
    /* test edx, edx */ /* 0x10058DFB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058E06; /* 0x10058DFD: je 0x10058e06 */
L_10058DFF:
    SET_LO8(eax, 1); /* 0x10058DFF: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1002ED51; /* 0x10058E01: jmp 0x1002ed51 */
L_10058E06:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058E06: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058E0C: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058E0D: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058E13: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058E19: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10058E1E: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10058E20: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058E21: mov dword ptr [ebp - 0x1a4], ebx */
L_10058E27:
    ecx = MEM32(ebp + (-0x1A8)); /* 0x10058E27: mov ecx, dword ptr [ebp - 0x1a8] */
    RECOMP_BACKEDGE();
    goto L_1002ED4B; /* 0x10058E2D: jmp 0x1002ed4b */
L_10058E32:
    /* test LO8(eax), LO8(eax) */ /* 0x10058E32: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10058F77; /* 0x10058E34: jne 0x10058f77 */
L_10058E3A:
    /* cmp ecx, 0x78u */ /* 0x10058E3A: cmp ecx, 0x78 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058EA6; /* 0x10058E3D: je 0x10058ea6 */
L_10058E3F:
    /* cmp ecx, 0x70u */ /* 0x10058E3F: cmp ecx, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058EA6; /* 0x10058E42: je 0x10058ea6 */
L_10058E44:
    eax = (uint32_t)LO8(ebx); /* 0x10058E44: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058E47: push eax */
    RECOMP_CALL(sub_1000F1D5); /* 0x10058E48: call 0x1000f1d5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058E4D: mov edi, dword ptr [ebp - 0x1a8] */
    ecx = POP32_VAL(esp); /* 0x10058E53: pop ecx */
    /* test eax, eax */ /* 0x10058E54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058F55; /* 0x10058E56: je 0x10058f55 */
L_10058E5C:
    /* cmp edi, 0x6Fu */ /* 0x10058E5C: cmp edi, 0x6f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10058E85; /* 0x10058E5F: jne 0x10058e85 */
L_10058E61:
    /* cmp ebx, 0x38u */ /* 0x10058E61: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10058F55; /* 0x10058E64: jge 0x10058f55 */
L_10058E6A:
    eax = MEM32(ebp + (-0x1B0)); /* 0x10058E6A: mov eax, dword ptr [ebp - 0x1b0] */
    ecx = MEM32(ebp + (-0x1C4)); /* 0x10058E70: mov ecx, dword ptr [ebp - 0x1c4] */
    if (1) _cf = (((eax) >> 29) & 1u); /* 0x10058E76: shld eax, ecx, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (3u)) | ((uint32_t)(ecx) >> (32 - (3u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (3u)) | ((uint32_t)(ecx) >> (32 - (3u)))) : (eax));
    MEM32(ebp + (-0x1B0)) = eax; /* 0x10058E7A: mov dword ptr [ebp - 0x1b0], eax */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x10058E80: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x10058E80: shl ecx, 3 */
    goto L_10058EF2; /* 0x10058E83: jmp 0x10058ef2 */
L_10058E85:
    edx = MEM32(ebp + (-0x1B0)); /* 0x10058E85: mov edx, dword ptr [ebp - 0x1b0] */
    PUSH32(esp, 0); /* 0x10058E8B: push 0 */
    PUSH32(esp, 0xAu); /* 0x10058E8D: push 0xa */
    PUSH32(esp, edx); /* 0x10058E8F: push edx */
    edx = MEM32(ebp + (-0x1C4)); /* 0x10058E90: mov edx, dword ptr [ebp - 0x1c4] */
    PUSH32(esp, edx); /* 0x10058E96: push edx */
    RECOMP_CALL(sub_10015B8C); /* 0x10058E97: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10058E9C: mov ecx, eax */
    MEM32(ebp + (-0x1B0)) = edx; /* 0x10058E9E: mov dword ptr [ebp - 0x1b0], edx */
    goto L_10058EF2; /* 0x10058EA4: jmp 0x10058ef2 */
L_10058EA6:
    eax = (uint32_t)LO8(ebx); /* 0x10058EA6: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10058EA9: push eax */
    RECOMP_CALL(sub_10012255); /* 0x10058EAA: call 0x10012255 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058EAF: pop ecx */
    /* test eax, eax */ /* 0x10058EB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058F4F; /* 0x10058EB2: je 0x10058f4f */
L_10058EB8:
    eax = MEM32(ebp + (-0x1C4)); /* 0x10058EB8: mov eax, dword ptr [ebp - 0x1c4] */
    ecx = MEM32(ebp + (-0x1B0)); /* 0x10058EBE: mov ecx, dword ptr [ebp - 0x1b0] */
    if (1) _cf = (((ecx) >> 28) & 1u); /* 0x10058EC4: shld ecx, eax, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) << (4u)) | ((uint32_t)(eax) >> (32 - (4u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) << (4u)) | ((uint32_t)(eax) >> (32 - (4u)))) : (ecx));
    PUSH32(esp, ebx); /* 0x10058EC8: push ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10058EC9: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10058EC9: shl eax, 4 */
    MEM32(ebp + (-0x1B0)) = ecx; /* 0x10058ECC: mov dword ptr [ebp - 0x1b0], ecx */
    MEM32(ebp + (-0x1C4)) = eax; /* 0x10058ED2: mov dword ptr [ebp - 0x1c4], eax */
    RECOMP_CALL(sub_10092A88); /* 0x10058ED8: call 0x10092a88 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058EDD: mov edi, dword ptr [ebp - 0x1a8] */
    ebx = eax; /* 0x10058EE3: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10058EE5: pop ecx */
    ecx = MEM32(ebp + (-0x1C4)); /* 0x10058EE6: mov ecx, dword ptr [ebp - 0x1c4] */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058EEC: mov dword ptr [ebp - 0x1a4], ebx */
L_10058EF2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) + 1; /* 0x10058EF2: inc dword ptr [ebp - 0x1c0] */
    _flag_k = FK_INC;
    eax = ebx + (-0x30); /* 0x10058EF8: lea eax, [ebx - 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10058EFB: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10058EFC: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1B0)); /* 0x10058EFE: mov eax, dword ptr [ebp - 0x1b0] */
    MEM32(ebp + (-0x1C4)) = ecx; /* 0x10058F04: mov dword ptr [ebp - 0x1c4], ecx */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10058F0A: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x1C8)), 0 */ /* 0x10058F0C: cmp dword ptr [ebp - 0x1c8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1B0)) = eax; /* 0x10058F13: mov dword ptr [ebp - 0x1b0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058F23; /* 0x10058F19: je 0x10058f23 */
L_10058F1B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x194))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x194)) = MEM32(ebp + (-0x194)) - 1; /* 0x10058F1B: dec dword ptr [ebp - 0x194] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10058F89; /* 0x10058F21: je 0x10058f89 */
L_10058F23:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058F23: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10058F29: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058F2A: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058F30: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10058F36: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058F3B: pop ecx */
    ecx = MEM32(ebp + (-0x1A8)); /* 0x10058F3C: mov ecx, dword ptr [ebp - 0x1a8] */
    ebx = eax; /* 0x10058F42: mov ebx, eax */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058F44: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_BACKEDGE();
    goto L_10058E3A; /* 0x10058F4A: jmp 0x10058e3a */
L_10058F4F:
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058F4F: mov edi, dword ptr [ebp - 0x1a8] */
L_10058F55:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10058F55: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10058F56: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10058F5C: mov dword ptr [ebp - 0x1a0], esi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10058F62: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10058F7D; /* 0x10058F65: je 0x10058f7d */
L_10058F67:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10058F67: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x10058F6D: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10058F6E: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10058F73: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10058F74: pop ecx */
    goto L_10058F7D; /* 0x10058F75: jmp 0x10058f7d */
L_10058F77:
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058F77: mov edi, dword ptr [ebp - 0x1a8] */
L_10058F7D:
    ecx = MEM32(ebp + (-0x1C4)); /* 0x10058F7D: mov ecx, dword ptr [ebp - 0x1c4] */
    eax = MEM32(ebp + (-0x1B0)); /* 0x10058F83: mov eax, dword ptr [ebp - 0x1b0] */
L_10058F89:
    /* cmp MEM8(ebp + (-0x1AA)), 0 */ /* 0x10058F89: cmp byte ptr [ebp - 0x1aa], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1AA))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE16; /* 0x10058F90: je 0x1002ee16 */
L_10058F96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10058F96: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C4)) = ecx; /* 0x10058F98: mov dword ptr [ebp - 0x1c4], ecx */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10058F9E: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10058FA1: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1B0)) = eax; /* 0x10058FA3: mov dword ptr [ebp - 0x1b0], eax */
    RECOMP_BACKEDGE();
    goto L_1002EE16; /* 0x10058FA9: jmp 0x1002ee16 */
L_10058FAE:
    /* cmp ebx, 0x38u */ /* 0x10058FAE: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002EDE3; /* 0x10058FB1: jge 0x1002ede3 */
L_10058FB7:
    eax = MEM32(ebp + (-0x1CC)); /* 0x10058FB7: mov eax, dword ptr [ebp - 0x1cc] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x10058FBD: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x10058FBD: shl eax, 3 */
    RECOMP_BACKEDGE();
    goto L_1002ED9C; /* 0x10058FC0: jmp 0x1002ed9c */
L_10058FC5:
    ecx = POP32_VAL(esp); /* 0x10058FC5: pop ecx */
    /* test eax, eax */ /* 0x10058FC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10058FF1; /* 0x10058FC8: je 0x10058ff1 */
L_10058FCA:
    if (4u) _cf = (((MEM32(ebp + (-0x1CC))) >> 28) & 1u); /* 0x10058FCA: shl dword ptr [ebp - 0x1cc], 4 */
    if (4u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x1CC)) << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x1CC)) = MEM32(ebp + (-0x1CC)) << 4u; /* 0x10058FCA: shl dword ptr [ebp - 0x1cc], 4 */
    PUSH32(esp, ebx); /* 0x10058FD1: push ebx */
    RECOMP_CALL(sub_10092A88); /* 0x10058FD2: call 0x10092a88 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058FD7: mov edi, dword ptr [ebp - 0x1a8] */
    ebx = eax; /* 0x10058FDD: mov ebx, eax */
    eax = MEM32(ebp + (-0x1CC)); /* 0x10058FDF: mov eax, dword ptr [ebp - 0x1cc] */
    ecx = POP32_VAL(esp); /* 0x10058FE5: pop ecx */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x10058FE6: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002ED9C; /* 0x10058FEC: jmp 0x1002ed9c */
L_10058FF1:
    edi = MEM32(ebp + (-0x1A8)); /* 0x10058FF1: mov edi, dword ptr [ebp - 0x1a8] */
    RECOMP_BACKEDGE();
    goto L_1002EDE3; /* 0x10058FF7: jmp 0x1002ede3 */
L_10058FFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10058FFC: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1CC)) = eax; /* 0x10058FFE: mov dword ptr [ebp - 0x1cc], eax */
    RECOMP_BACKEDGE();
    goto L_1002EE16; /* 0x10059004: jmp 0x1002ee16 */
L_10059009:
    eax = MEM32(ebp + (-0x1B8)); /* 0x10059009: mov eax, dword ptr [ebp - 0x1b8] */
    edx = MEM32(ebp + (-0x1C4)); /* 0x1005900F: mov edx, dword ptr [ebp - 0x1c4] */
    MEM32(eax) = edx; /* 0x10059015: mov dword ptr [eax], edx */
    edx = MEM32(ebp + (-0x1B0)); /* 0x10059017: mov edx, dword ptr [ebp - 0x1b0] */
    MEM32(eax + 0x4) = edx; /* 0x1005901D: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_1002EF58; /* 0x10059020: jmp 0x1002ef58 */
L_10059025:
    /* cmp LO8(eax), LO8(ecx) */ /* 0x10059025: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005902F; /* 0x10059027: jne 0x1005902f */
L_10059029:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x10059029: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005902F; /* 0x1005902C: jne 0x1005902f */
L_1005902E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005902E: inc edi */
    _flag_k = FK_INC;
L_1005902F:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005902F: push dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10059035: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = esi; /* 0x10059036: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x1005903C: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_CALL(sub_1001ADC3); /* 0x10059042: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10059047: mov ebx, eax */
    eax = (uint32_t)MEM8(edi); /* 0x10059049: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005904C: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x1005904D: mov dword ptr [ebp - 0x1a4], ebx */
    MEM32(ebp + (-0x198)) = edi; /* 0x10059053: mov dword ptr [ebp - 0x198], edi */
    ecx = POP32_VAL(esp); /* 0x10059059: pop ecx */
    /* cmp eax, ebx */ /* 0x1005905A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002EF90; /* 0x1005905C: jne 0x1002ef90 */
L_10059062:
    eax = (uint32_t)LO8(ebx); /* 0x10059062: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10059065: push eax */
    RECOMP_CALL(sub_1002DFC5); /* 0x10059066: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005906B: pop ecx */
    /* test eax, eax */ /* 0x1005906C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002EE82; /* 0x1005906E: je 0x1002ee82 */
L_10059074:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x10059074: push dword ptr [ebp - 0x18c] */
    RECOMP_CALL(sub_1001ADC3); /* 0x1005907A: call 0x1001adc3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005907F: pop ecx */
    ecx = (uint32_t)MEM8(edi); /* 0x10059080: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10059083: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x198)) = edi; /* 0x10059084: mov dword ptr [ebp - 0x198], edi */
    /* cmp ecx, eax */ /* 0x1005908A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005911E; /* 0x1005908C: jne 0x1005911e */
L_10059092:
    MEM32(ebp + (-0x190)) = esi; /* 0x10059092: mov dword ptr [ebp - 0x190], esi */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x10059098: mov dword ptr [ebp - 0x1a0], esi */
    RECOMP_BACKEDGE();
    goto L_1002EE82; /* 0x1005909E: jmp 0x1002ee82 */
L_100590A3:
    /* cmp MEM8(edi + 0x1), 0x6Eu */ /* 0x100590A3: cmp byte ptr [edi + 1], 0x6e */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE8B; /* 0x100590A7: je 0x1002ee8b */
L_100590AD:
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x100590AD: jmp 0x1002ee95 */
L_100590B2:
    SET_LO8(eax, MEM8(ebp + (-0x185))); /* 0x100590B2: mov al, byte ptr [ebp - 0x185] */
    /* test LO8(eax), LO8(eax) */ /* 0x100590B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100590C3; /* 0x100590BA: jle 0x100590c3 */
L_100590BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100590BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x100590BE: mov word ptr [edx], ax */
    goto L_100590C6; /* 0x100590C1: jmp 0x100590c6 */
L_100590C3:
    MEM8(edx) = (uint8_t)(0); /* 0x100590C3: mov byte ptr [edx], 0 */
L_100590C6:
    RECOMP_CALL(sub_1001177D); /* 0x100590C6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100590CB: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x100590D1: jmp 0x1002ee95 */
L_100590D6:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100590D6: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100590E9; /* 0x100590D9: je 0x100590e9 */
L_100590DB:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x100590DB: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, ebx); /* 0x100590E1: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x100590E2: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100590E7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100590E8: pop ecx */
L_100590E9:
    MEM32(ebp + (-0x1F4)) = 1; /* 0x100590E9: mov dword ptr [ebp - 0x1f4], 1 */
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x100590F3: jmp 0x1002ee95 */
L_100590F8:
    RECOMP_CALL(sub_1001177D); /* 0x100590F8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x199)), 0 */ /* 0x100590FD: cmp byte ptr [ebp - 0x199], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x199))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(eax) = 0xCu; /* 0x10059104: mov dword ptr [eax], 0xc */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059116; /* 0x1005910A: je 0x10059116 */
L_1005910C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005910C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005910E: mov word ptr [esi], ax */
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x10059111: jmp 0x1002ee95 */
L_10059116:
    MEM8(esi) = (uint8_t)(0); /* 0x10059116: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x10059119: jmp 0x1002ee95 */
L_1005911E:
    edi = MEM32(ebp + (-0x18C)); /* 0x1005911E: mov edi, dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10059124: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x10059127: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10059134; /* 0x10059129: je 0x10059134 */
L_1005912B:
    PUSH32(esp, edi); /* 0x1005912B: push edi */
    PUSH32(esp, eax); /* 0x1005912C: push eax */
    RECOMP_CALL(sub_1001C4D0); /* 0x1005912D: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10059132: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10059133: pop ecx */
L_10059134:
    /* cmp ebx, esi */ /* 0x10059134: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002EE95; /* 0x10059136: je 0x1002ee95 */
L_1005913C:
    PUSH32(esp, edi); /* 0x1005913C: push edi */
    goto L_10059145; /* 0x1005913D: jmp 0x10059145 */
L_1005913F:
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x1005913F: push dword ptr [ebp - 0x18c] */
L_10059145:
    PUSH32(esp, ebx); /* 0x10059145: push ebx */
    RECOMP_CALL(sub_1001C4D0); /* 0x10059146: call 0x1001c4d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005914B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005914C: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002EE95; /* 0x1005914D: jmp 0x1002ee95 */
L_10059152:
    PUSH32(esp, MEM32(ebp + (-0x1BC))); /* 0x10059152: push dword ptr [ebp - 0x1bc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10059158: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005915D: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002EEA2; /* 0x1005915E: jmp 0x1002eea2 */
L_10059163:
    RECOMP_CALL(sub_1001177D); /* 0x10059163: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10059168: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005916E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1D0)); /* 0x10059173: mov eax, dword ptr [ebp - 0x1d0] */
    RECOMP_BACKEDGE();
    goto L_1002EEBE; /* 0x10059179: jmp 0x1002eebe */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002EFAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002EFAFu);

L_1002EFAF:
    PUSH32(esp, ebp); /* 0x1002EFAF: push ebp */
    ebp = esp; /* 0x1002EFB0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002EFB2: push ecx */
    PUSH32(esp, ebx); /* 0x1002EFB3: push ebx */
    PUSH32(esp, esi); /* 0x1002EFB4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002EFB5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002EFB8: push edi */
    PUSH32(esp, 2); /* 0x1002EFB9: push 2 */
    edx = POP32_VAL(esp); /* 0x1002EFBB: pop edx */
    PUSH32(esp, 0x3Bu); /* 0x1002EFBC: push 0x3b */
    eax = POP32_VAL(esp); /* 0x1002EFBE: pop eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002EFBF: mov dword ptr [ebp - 4], eax */
L_1002EFC2:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002EFC2: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F02D; /* 0x1002EFC5: je 0x1002f02d */
L_1002EFC7:
    ecx = MEM32(ebp + 0x10); /* 0x1002EFC7: mov ecx, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x1002EFCA: mov edi, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002EFCC: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F565; /* 0x1002EFCD: je 0x1005f565 */
L_1002EFD3:
    eax = (uint32_t)MEM16(esi); /* 0x1002EFD3: movzx eax, word ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x1002EFD6: mov ebx, dword ptr [ebp + 0xc] */
    /* test LO16(eax), LO16(eax) */ /* 0x1002EFD9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F031; /* 0x1002EFDC: je 0x1002f031 */
L_1002EFDE:
    MEM32(ebp + 0x8) = 0x22u; /* 0x1002EFDE: mov dword ptr [ebp + 8], 0x22 */
L_1002EFE5:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1002EFE5: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F00D; /* 0x1002EFE9: je 0x1002f00d */
L_1002EFEB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1002EFEB: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x1002EFED: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F589; /* 0x1002EFF1: je 0x1005f589 */
L_1002EFF7:
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1002EFF7: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1002EFFA: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002EFFC: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F578; /* 0x1002EFFD: je 0x1005f578 */
L_1002F003:
    eax = (uint32_t)MEM16(esi); /* 0x1002F003: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1002F006: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002EFE5; /* 0x1002F009: jne 0x1002efe5 */
L_1002F00B:
    goto L_1002F031; /* 0x1002F00B: jmp 0x1002f031 */
L_1002F00D:
    PUSH32(esp, 0x3Bu); /* 0x1002F00D: push 0x3b */
    eax = POP32_VAL(esp); /* 0x1002F00F: pop eax */
L_1002F010:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1002F010: add esi, edx */
    _flag_k = FK_ADD;
L_1002F012:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1002F012: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F010; /* 0x1002F015: je 0x1002f010 */
L_1002F017:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1002F017: sub edi, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F019: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1002F01B: neg edi */
    _flag_k = FK_CMP;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1002F01D: mov word ptr [ebx], ax */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002F020: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x1002F022: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1002F024: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1002F026: pop edi */
    esi = POP32_VAL(esp); /* 0x1002F027: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002F028: pop ebx */
    esp = ebp; /* 0x1002F029: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F02B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F02C: ret  */
L_1002F02D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1002F02D: add esi, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002EFC2; /* 0x1002F02F: jmp 0x1002efc2 */
L_1002F031:
    PUSH32(esp, 0x3Bu); /* 0x1002F031: push 0x3b */
    eax = POP32_VAL(esp); /* 0x1002F033: pop eax */
    RECOMP_BACKEDGE();
    goto L_1002F012; /* 0x1002F034: jmp 0x1002f012 */
L_1005F565:
    RECOMP_CALL(sub_1001177D); /* 0x1005F565: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1005F56A: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x22u; /* 0x1005F56D: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_1002F017; /* 0x1005F573: jmp 0x1002f017 */
L_1005F578:
    edi = esi; /* 0x1005F578: mov edi, esi */
    RECOMP_CALL(sub_1001177D); /* 0x1005F57A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1005F57F: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x1005F581: pop ecx */
    MEM32(eax) = ecx; /* 0x1005F582: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1002F017; /* 0x1005F584: jmp 0x1002f017 */
L_1005F589:
    eax = (uint32_t)MEM16(esi); /* 0x1005F589: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1005F58C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F031; /* 0x1005F58F: je 0x1002f031 */
L_1005F595:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x1005F595: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F5AD; /* 0x1005F599: je 0x1005f5ad */
L_1005F59B:
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1005F59B: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1005F59E: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1005F5A0: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005F5A2: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F578; /* 0x1005F5A3: je 0x1005f578 */
L_1005F5A5:
    eax = (uint32_t)MEM16(esi); /* 0x1005F5A5: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1005F5A8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F595; /* 0x1005F5AB: jne 0x1005f595 */
L_1005F5AD:
    /* cmp MEM16(esi), 0 */ /* 0x1005F5AD: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F031; /* 0x1005F5B1: je 0x1002f031 */
L_1005F5B7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1005F5B7: add esi, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002F003; /* 0x1005F5B9: jmp 0x1002f003 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F036u);

L_1002F036:
    PUSH32(esp, ebp); /* 0x1002F036: push ebp */
    ebp = esp; /* 0x1002F037: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x234u; /* 0x1002F039: sub esp, 0x234 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1002F03F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002F044: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002F046: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1002F049: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1002F04C: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x1002F04F: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1002F052: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002F053: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x21C)) = eax; /* 0x1002F055: mov dword ptr [ebp - 0x21c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1002F05B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x228)) = ecx; /* 0x1002F05E: mov dword ptr [ebp - 0x228], ecx */
    MEM32(ebp + (-0x220)) = eax; /* 0x1002F064: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x230)) = edx; /* 0x1002F06A: mov dword ptr [ebp - 0x230], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x1002F070: mov dword ptr [ebp - 0x22c], ebx */
    PUSH32(esp, esi); /* 0x1002F076: push esi */
    esi = ebx; /* 0x1002F077: mov esi, ebx */
    MEM32(ebp + (-0x218)) = esi; /* 0x1002F079: mov dword ptr [ebp - 0x218], esi */
    /* test eax, eax */ /* 0x1002F07F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FE21; /* 0x1002F081: je 0x1005fe21 */
L_1002F087:
    /* test edx, edx */ /* 0x1002F087: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FE21; /* 0x1002F089: je 0x1005fe21 */
L_1002F08F:
    /* test ecx, ecx */ /* 0x1002F08F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FE37; /* 0x1002F091: je 0x1005fe37 */
L_1002F097:
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x1002F097: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FE3C; /* 0x1002F09A: je 0x1005fe3c */
L_1002F0A0:
    PUSH32(esp, edi); /* 0x1002F0A0: push edi */
    RECOMP_CALL(sub_1001177D); /* 0x1002F0A1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1002F0A6: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1002F0A7: push dword ptr [ebp - 0x228] */
    edi = MEM32(eax); /* 0x1002F0AD: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_1001EE42); /* 0x1002F0AF: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F0B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F0B5: pop ecx */
    esi = eax; /* 0x1002F0B6: mov esi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x1002F0B8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1002F0BD: mov dword ptr [eax], edi */
    /* test esi, esi */ /* 0x1002F0BF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FE58; /* 0x1002F0C1: je 0x1005fe58 */
L_1002F0C7:
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x1002F0C7: push dword ptr [ebp - 0x21c] */
    eax = ebp + (-0x22C); /* 0x1002F0CD: lea eax, [ebp - 0x22c] */
    PUSH32(esp, ebx); /* 0x1002F0D3: push ebx */
    PUSH32(esp, eax); /* 0x1002F0D4: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x1002F0D5: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F0DA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002F0DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FE87; /* 0x1002F0DF: jne 0x1005fe87 */
L_1002F0E5:
    edi = MEM32(ebp + (-0x22C)); /* 0x1002F0E5: mov edi, dword ptr [ebp - 0x22c] */
    /* test edi, edi */ /* 0x1002F0EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FF95; /* 0x1002F0ED: je 0x1005ff95 */
L_1002F0F3:
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1002F0F3: push dword ptr [ebp - 0x228] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002F0F9: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F0FE: pop ecx */
    ecx = eax; /* 0x1002F0FF: mov ecx, eax */
    esi = ebp + (-0x214); /* 0x1002F101: lea esi, [ebp - 0x214] */
    eax = 0x108u; /* 0x1002F107: mov eax, 0x108 */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1002F10C: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x218)) = eax; /* 0x1002F112: mov dword ptr [ebp - 0x218], eax */
    /* cmp ecx, eax */ /* 0x1002F118: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005FE95; /* 0x1002F11A: jae 0x1005fe95 */
L_1002F120:
    RECOMP_CALL(sub_1001177D); /* 0x1002F120: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1002F125: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x234)) = eax; /* 0x1002F127: mov dword ptr [ebp - 0x234], eax */
L_1002F12D:
    /* test edi, edi */ /* 0x1002F12D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FF42; /* 0x1002F12F: je 0x1005ff42 */
L_1002F135:
    eax = MEM32(ebp + (-0x218)); /* 0x1002F135: mov eax, dword ptr [ebp - 0x218] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x224)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x224)); /* 0x1002F13B: sub eax, dword ptr [ebp - 0x224] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002F141: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x21C)) = edi; /* 0x1002F142: mov dword ptr [ebp - 0x21c], edi */
    PUSH32(esp, eax); /* 0x1002F148: push eax */
    PUSH32(esp, esi); /* 0x1002F149: push esi */
    PUSH32(esp, edi); /* 0x1002F14A: push edi */
    RECOMP_CALL(sub_1002EFAF); /* 0x1002F14B: call 0x1002efaf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1002F150: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F152: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1002F155: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FEE1; /* 0x1002F157: je 0x1005fee1 */
L_1002F15D:
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x1002F15D: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FF42; /* 0x1002F160: je 0x1005ff42 */
L_1002F166:
    PUSH32(esp, esi); /* 0x1002F166: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002F167: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F16C: pop ecx */
    MEM32(ebp + (-0x21C)) = eax; /* 0x1002F16D: mov dword ptr [ebp - 0x21c], eax */
    edx = esi + eax * 2; /* 0x1002F173: lea edx, [esi + eax*2] */
    ecx = (uint32_t)MEM16(edx + (-0x2)); /* 0x1002F176: movzx ecx, word ptr [edx - 2] */
    /* cmp ecx, 0x2Fu */ /* 0x1002F17A: cmp ecx, 0x2f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F199; /* 0x1002F17D: je 0x1002f199 */
L_1002F17F:
    /* cmp ecx, 0x5Cu */ /* 0x1002F17F: cmp ecx, 0x5c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F199; /* 0x1002F182: je 0x1002f199 */
L_1002F184:
    /* cmp ecx, 0x3Au */ /* 0x1002F184: cmp ecx, 0x3a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F199; /* 0x1002F187: je 0x1002f199 */
L_1002F189:
    PUSH32(esp, 0x5Cu); /* 0x1002F189: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x1002F18B: pop ecx */
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1002F18C: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1002F18F: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002F192: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x21C)) = eax; /* 0x1002F193: mov dword ptr [ebp - 0x21c], eax */
L_1002F199:
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1002F199: push dword ptr [ebp - 0x228] */
    eax = MEM32(ebp + (-0x218)); /* 0x1002F19F: mov eax, dword ptr [ebp - 0x218] */
    ecx = edx; /* 0x1002F1A5: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1002F1A7: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1002F1A9: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1002F1AB: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1002F1AD: push eax */
    PUSH32(esp, edx); /* 0x1002F1AE: push edx */
    RECOMP_CALL(sub_10011693); /* 0x1002F1AF: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F1B4: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1002F1B7: push ebx */
    /* test eax, eax */ /* 0x1002F1B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FFCA; /* 0x1002F1BA: jne 0x1005ffca */
L_1002F1C0:
    PUSH32(esp, esi); /* 0x1002F1C0: push esi */
    RECOMP_CALL(sub_1001EE42); /* 0x1002F1C1: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F1C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F1C7: pop ecx */
    /* test eax, eax */ /* 0x1002F1C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F12D; /* 0x1002F1CA: jne 0x1002f12d */
L_1002F1D0:
    eax = MEM32(ebp + (-0x224)); /* 0x1002F1D0: mov eax, dword ptr [ebp - 0x224] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x21C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x21C)); /* 0x1002F1D6: add eax, dword ptr [ebp - 0x21c] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x230)); /* 0x1002F1DC: mov edi, dword ptr [ebp - 0x230] */
    /* cmp eax, edi */ /* 0x1002F1E2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005FF5D; /* 0x1002F1E4: jae 0x1005ff5d */
L_1002F1EA:
    RECOMP_CALL(sub_1001177D); /* 0x1002F1EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x234)); /* 0x1002F1EF: mov ecx, dword ptr [ebp - 0x234] */
    PUSH32(esp, esi); /* 0x1002F1F5: push esi */
    PUSH32(esp, edi); /* 0x1002F1F6: push edi */
    edi = MEM32(ebp + (-0x220)); /* 0x1002F1F7: mov edi, dword ptr [ebp - 0x220] */
    PUSH32(esp, edi); /* 0x1002F1FD: push edi */
    MEM32(eax) = ecx; /* 0x1002F1FE: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_10011693); /* 0x1002F200: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F205: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002F208: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FFC9; /* 0x1002F20A: jne 0x1005ffc9 */
L_1002F210:
    eax = ebp + (-0x214); /* 0x1002F210: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1002F216: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FF89; /* 0x1002F218: jne 0x1005ff89 */
L_1002F21E:
    edi = POP32_VAL(esp); /* 0x1002F21E: pop edi */
L_1002F21F:
    eax = ebp + (-0x214); /* 0x1002F21F: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1002F225: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FFBD; /* 0x1002F227: jne 0x1005ffbd */
L_1002F22D:
    PUSH32(esp, MEM32(ebp + (-0x22C))); /* 0x1002F22D: push dword ptr [ebp - 0x22c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002F233: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F238: pop ecx */
    eax = ebx; /* 0x1002F239: mov eax, ebx */
L_1002F23B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002F23B: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1002F23E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002F23F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1002F241: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002F242: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002F247: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F249: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F24A: ret  */
L_1005FE21:
    RECOMP_CALL(sub_1001177D); /* 0x1005FE21: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005FE26: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005FE28: pop esi */
    MEM32(eax) = esi; /* 0x1005FE29: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005FE2B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005FE30: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1002F23B; /* 0x1005FE32: jmp 0x1002f23b */
L_1005FE37:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1005FE37: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1005FE21; /* 0x1005FE3A: jmp 0x1005fe21 */
L_1005FE3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005FE3C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1005FE3E: mov word ptr [eax], cx */
    RECOMP_CALL(sub_1001177D); /* 0x1005FE41: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1005FE46: mov dword ptr [eax], 2 */
    RECOMP_CALL(sub_1001177D); /* 0x1005FE4C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1005FE51: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1002F21F; /* 0x1005FE53: jmp 0x1002f21f */
L_1005FE58:
    edi = MEM32(ebp + (-0x230)); /* 0x1005FE58: mov edi, dword ptr [ebp - 0x230] */
    PUSH32(esp, edi); /* 0x1005FE5E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1005FE5F: push dword ptr [ebp - 0x228] */
    edi = MEM32(ebp + (-0x220)); /* 0x1005FE65: mov edi, dword ptr [ebp - 0x220] */
    PUSH32(esp, edi); /* 0x1005FE6B: push edi */
    RECOMP_CALL(sub_10014BF0); /* 0x1005FE6C: call 0x10014bf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FE71: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005FE74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FE80; /* 0x1005FE76: jne 0x1005fe80 */
L_1005FE78:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1005FE78: mov word ptr [edi], ax */
    goto L_1005FFAB; /* 0x1005FE7B: jmp 0x1005ffab */
L_1005FE80:
    esi = ebx; /* 0x1005FE80: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1002F21E; /* 0x1005FE82: jmp 0x1002f21e */
L_1005FE87:
    /* cmp eax, 0x16u */ /* 0x1005FE87: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FFC9; /* 0x1005FE8A: je 0x1005ffc9 */
L_1005FE90:
    goto L_1005FF95; /* 0x1005FE90: jmp 0x1005ff95 */
L_1005FE95:
    PUSH32(esp, edi); /* 0x1005FE95: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1005FE96: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x224)); /* 0x1005FE9B: mov ecx, dword ptr [ebp - 0x224] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005FEA1: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1005FEA4: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1005FEA6: push 2 */
    PUSH32(esp, eax); /* 0x1005FEA8: push eax */
    MEM32(ebp + (-0x218)) = eax; /* 0x1005FEA9: mov dword ptr [ebp - 0x218], eax */
    RECOMP_CALL(sub_10011208); /* 0x1005FEAF: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005FEB4: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FEB6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1005FEB9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F120; /* 0x1005FEBB: jne 0x1002f120 */
L_1005FEC1:
    edi = MEM32(ebp + (-0x220)); /* 0x1005FEC1: mov edi, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FEC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1005FEC9: mov word ptr [edi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x1005FECC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005FED1: mov dword ptr [eax], 0xc */
L_1005FED7:
    RECOMP_CALL(sub_1001177D); /* 0x1005FED7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005FFB6; /* 0x1005FEDC: jmp 0x1005ffb6 */
L_1005FEE1:
    eax = ebp + (-0x214); /* 0x1005FEE1: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1005FEE7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FF42; /* 0x1005FEE9: jne 0x1005ff42 */
L_1005FEEB:
    RECOMP_CALL(sub_1001177D); /* 0x1005FEEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1005FEF0: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005FF42; /* 0x1005FEF3: jne 0x1005ff42 */
L_1005FEF5:
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x1005FEF5: push dword ptr [ebp - 0x21c] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1005FEFB: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x224)); /* 0x1005FF00: mov edi, dword ptr [ebp - 0x224] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1005FF06: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1005FF09: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1005FF0B: push 2 */
    PUSH32(esp, edi); /* 0x1005FF0D: push edi */
    MEM32(ebp + (-0x218)) = edi; /* 0x1005FF0E: mov dword ptr [ebp - 0x218], edi */
    RECOMP_CALL(sub_10011208); /* 0x1005FF14: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005FF19: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FF1B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1005FF1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FEC1; /* 0x1005FF20: je 0x1005fec1 */
L_1005FF22:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x224)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x224)); /* 0x1005FF22: sub edi, dword ptr [ebp - 0x224] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1005FF28: push edi */
    PUSH32(esp, esi); /* 0x1005FF29: push esi */
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x1005FF2A: push dword ptr [ebp - 0x21c] */
    RECOMP_CALL(sub_1002EFAF); /* 0x1005FF30: call 0x1002efaf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1005FF35: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FF37: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1005FF3A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F15D; /* 0x1005FF3C: jne 0x1002f15d */
L_1005FF42:
    edi = MEM32(ebp + (-0x220)); /* 0x1005FF42: mov edi, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FF48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1005FF4A: mov word ptr [edi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x1005FF4D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1005FF52: mov dword ptr [eax], 2 */
    RECOMP_BACKEDGE();
    goto L_1005FED7; /* 0x1005FF58: jmp 0x1005fed7 */
L_1005FF5D:
    edi = MEM32(ebp + (-0x220)); /* 0x1005FF5D: mov edi, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FF63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1005FF65: mov word ptr [edi], ax */
    eax = ebp + (-0x214); /* 0x1005FF68: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1005FF6E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005FF79; /* 0x1005FF70: je 0x1005ff79 */
L_1005FF72:
    PUSH32(esp, esi); /* 0x1005FF72: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005FF73: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FF78: pop ecx */
L_1005FF79:
    RECOMP_CALL(sub_1001177D); /* 0x1005FF79: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1005FF7E: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_1005FED7; /* 0x1005FF84: jmp 0x1005fed7 */
L_1005FF89:
    PUSH32(esp, esi); /* 0x1005FF89: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005FF8A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FF8F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002F21E; /* 0x1005FF90: jmp 0x1002f21e */
L_1005FF95:
    edi = MEM32(ebp + (-0x220)); /* 0x1005FF95: mov edi, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005FF9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1005FF9D: mov word ptr [edi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x1005FFA0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1005FFA5: mov dword ptr [eax], 2 */
L_1005FFAB:
    RECOMP_CALL(sub_1001177D); /* 0x1005FFAB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x218)); /* 0x1005FFB0: mov esi, dword ptr [ebp - 0x218] */
L_1005FFB6:
    ebx = MEM32(eax); /* 0x1005FFB6: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1002F21E; /* 0x1005FFB8: jmp 0x1002f21e */
L_1005FFBD:
    PUSH32(esp, esi); /* 0x1005FFBD: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005FFBE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FFC3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002F22D; /* 0x1005FFC4: jmp 0x1002f22d */
L_1005FFC9:
    PUSH32(esp, ebx); /* 0x1005FFC9: push ebx */
L_1005FFCA:
    PUSH32(esp, ebx); /* 0x1005FFCA: push ebx */
    PUSH32(esp, ebx); /* 0x1005FFCB: push ebx */
    PUSH32(esp, ebx); /* 0x1005FFCC: push ebx */
    PUSH32(esp, ebx); /* 0x1005FFCD: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1005FFCE: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005FFD3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F286(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F286u);

L_1002F286:
    PUSH32(esp, esi); /* 0x1002F286: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002F287: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F28C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F28D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F28E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F28Eu);

L_1002F28E:
    PUSH32(esp, 0xCu); /* 0x1002F28E: push 0xc */
    PUSH32(esp, 0x1002F2E8u); /* 0x1002F290: push 0x1002f2e8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002F295: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002F29A: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F29E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x1002F2A0: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1002F2A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002F2A5: setne al */
    /* test eax, eax */ /* 0x1002F2A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054FA9; /* 0x1002F2AA: je 0x10054fa9 */
L_1002F2B0:
    MEM32(ebp + 0xC) = esi; /* 0x1002F2B0: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, esi); /* 0x1002F2B3: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002F2B4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F2B9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002F2BA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1002F2BE: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F2BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001CCA8); /* 0x1002F2C2: call 0x1001cca8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F2C7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F2C8: pop ecx */
    edi = (uint32_t)LO16(eax); /* 0x1002F2C9: movzx edi, ax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002F2CC: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002F2CF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002F286); /* 0x1002F2D6: call 0x1002f286 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1002F2DB: mov ax, di */
L_1002F2DE:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002F2DE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F2E3: ret  */
L_10054FA9:
    RECOMP_CALL(sub_1001177D); /* 0x10054FA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054FAE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054FB4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0xFFFFu; /* 0x10054FB9: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_1002F2DE; /* 0x10054FBE: jmp 0x1002f2de */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F404(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F404u);

L_1002F404:
    PUSH32(esp, ebp); /* 0x1002F404: push ebp */
    ebp = esp; /* 0x1002F405: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002F407: push ecx */
    PUSH32(esp, ecx); /* 0x1002F408: push ecx */
    eax = MEM32(0x100DF7B8); /* 0x1002F409: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002F40E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002F410: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1002F413: push ebx */
    PUSH32(esp, esi); /* 0x1002F414: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002F415: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1002F418: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AAA5; /* 0x1002F41A: je 0x1005aaa5 */
L_1002F420:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F420: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1002F423: push esi */
    RECOMP_CALL(sub_10017154); /* 0x1002F424: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F429: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F42A: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1002F42B: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005AAB9; /* 0x1002F42E: jae 0x1005aab9 */
L_1002F434:
    edx = MEM32(ebp + 0x10); /* 0x1002F434: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx); /* 0x1002F437: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0xA8); /* 0x1002F439: mov ecx, dword ptr [eax + 0xa8] */
    /* test ecx, ecx */ /* 0x1002F43F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AAE4; /* 0x1002F441: je 0x1005aae4 */
L_1002F447:
    PUSH32(esp, 1); /* 0x1002F447: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1002F449: push dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002F44C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1002F44E: push ebx */
    PUSH32(esp, ebx); /* 0x1002F44F: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1002F450: push -1 */
    PUSH32(esp, esi); /* 0x1002F452: push esi */
    PUSH32(esp, 0x100u); /* 0x1002F453: push 0x100 */
    PUSH32(esp, ecx); /* 0x1002F458: push ecx */
    PUSH32(esp, edx); /* 0x1002F459: push edx */
    RECOMP_CALL(sub_10020EFE); /* 0x1002F45A: call 0x10020efe */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002F45F: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1002F461: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1002F464: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x1002F467: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AABE; /* 0x1002F469: je 0x1005aabe */
L_1002F46F:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1002F46F: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1005AAF0; /* 0x1002F472: jb 0x1005aaf0 */
L_1002F478:
    /* test ecx, ecx */ /* 0x1002F478: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002F4B1; /* 0x1002F47A: jle 0x1002f4b1 */
L_1002F47C:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1002F47C: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1002F47E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1002F480: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1002F481: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 1 */ /* 0x1002F483: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002F4B1; /* 0x1002F486: jb 0x1002f4b1 */
L_1002F488:
    eax = ecx + 0x8; /* 0x1002F488: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x1002F48B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002F4B1; /* 0x1002F48D: jbe 0x1002f4b1 */
L_1002F48F:
    /* cmp eax, 0x400u */ /* 0x1002F48F: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005AAFB; /* 0x1002F494: ja 0x1005aafb */
L_1002F49A:
    RECOMP_CALL(sub_10012BBF); /* 0x1002F49A: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x1002F49F: mov ebx, esp */
    /* test ebx, ebx */ /* 0x1002F4A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F4AE; /* 0x1002F4A3: je 0x1002f4ae */
L_1002F4A5:
    MEM32(ebx) = 0xCCCCu; /* 0x1002F4A5: mov dword ptr [ebx], 0xcccc */
L_1002F4AB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1002F4AB: add ebx, 8 */
    _flag_k = FK_ADD;
L_1002F4AE:
    ecx = MEM32(ebp + (-0x8)); /* 0x1002F4AE: mov ecx, dword ptr [ebp - 8] */
L_1002F4B1:
    /* test ebx, ebx */ /* 0x1002F4B1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AB17; /* 0x1002F4B3: je 0x1005ab17 */
L_1002F4B9:
    edx = MEM32(ebp + 0x10); /* 0x1002F4B9: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x1002F4BC: push 1 */
    eax = MEM32(edx); /* 0x1002F4BE: mov eax, dword ptr [edx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1002F4C0: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1002F4C3: push ecx */
    PUSH32(esp, ebx); /* 0x1002F4C4: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1002F4C5: push -1 */
    PUSH32(esp, esi); /* 0x1002F4C7: push esi */
    PUSH32(esp, 0x100u); /* 0x1002F4C8: push 0x100 */
    PUSH32(esp, MEM32(eax + 0xA8)); /* 0x1002F4CD: push dword ptr [eax + 0xa8] */
    PUSH32(esp, edx); /* 0x1002F4D3: push edx */
    RECOMP_CALL(sub_10020EFE); /* 0x1002F4D4: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1002F4D9: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002F4DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AB24; /* 0x1002F4DE: je 0x1005ab24 */
L_1002F4E4:
    PUSH32(esp, ebx); /* 0x1002F4E4: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F4E5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1002F4E8: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1002F4E9: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F4EE: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1002F4F1: mov esi, eax */
L_1002F4F3:
    PUSH32(esp, ebx); /* 0x1002F4F3: push ebx */
    RECOMP_CALL(sub_10012BD5); /* 0x1002F4F4: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F4F9: pop ecx */
L_1002F4FA:
    eax = esi; /* 0x1002F4FA: mov eax, esi */
L_1002F4FC:
    esp = ebp + (-0x10); /* 0x1002F4FC: lea esp, [ebp - 0x10] */
    esi = POP32_VAL(esp); /* 0x1002F4FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002F500: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1002F501: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002F504: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1002F506: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002F50B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F50D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F50E: ret  */
L_1005AAA5:
    RECOMP_CALL(sub_1001177D); /* 0x1005AAA5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005AAAA: push 0x16 */
L_1005AAAC:
    esi = POP32_VAL(esp); /* 0x1005AAAC: pop esi */
    MEM32(eax) = esi; /* 0x1005AAAD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005AAAF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002F4FA; /* 0x1005AAB4: jmp 0x1002f4fa */
L_1005AAB9:
    MEM8(esi) = (uint8_t)(0); /* 0x1005AAB9: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_1005AAA5; /* 0x1005AABC: jmp 0x1005aaa5 */
L_1005AABE:
    RECOMP_CALL(sub_1001177D); /* 0x1005AABE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1005AAC3: mov dword ptr [eax], 0x2a */
L_1005AAC9:
    RECOMP_CALL(sub_1001177D); /* 0x1005AAC9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1005AACE: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1002F4FC; /* 0x1005AAD0: jmp 0x1002f4fc */
L_1005AAD5:
    SET_LO8(eax, MEM8(esi)); /* 0x1005AAD5: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x41u */ /* 0x1005AAD7: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005AAE3; /* 0x1005AAD9: jl 0x1005aae3 */
L_1005AADB:
    /* cmp LO8(eax), 0x5Au */ /* 0x1005AADB: cmp al, 0x5a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005AAE3; /* 0x1005AADD: jg 0x1005aae3 */
L_1005AADF:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x20u); /* 0x1005AADF: add al, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1005AAE1: mov byte ptr [esi], al */
L_1005AAE3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005AAE3: inc esi */
    _flag_k = FK_INC;
L_1005AAE4:
    /* cmp MEM8(esi), 0 */ /* 0x1005AAE4: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005AAD5; /* 0x1005AAE7: jne 0x1005aad5 */
L_1005AAE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005AAE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F4FC; /* 0x1005AAEB: jmp 0x1002f4fc */
L_1005AAF0:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1005AAF0: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1005AAF2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1005AAF7: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1005AAAC; /* 0x1005AAF9: jmp 0x1005aaac */
L_1005AAFB:
    PUSH32(esp, eax); /* 0x1005AAFB: push eax */
    RECOMP_CALL(sub_1000ED30); /* 0x1005AAFC: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1005AB01: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1005AB03: pop ecx */
    /* test ebx, ebx */ /* 0x1005AB04: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F4AE; /* 0x1005AB06: je 0x1002f4ae */
L_1005AB0C:
    MEM32(ebx) = 0xDDDDu; /* 0x1005AB0C: mov dword ptr [ebx], 0xdddd */
    RECOMP_BACKEDGE();
    goto L_1002F4AB; /* 0x1005AB12: jmp 0x1002f4ab */
L_1005AB17:
    RECOMP_CALL(sub_1001177D); /* 0x1005AB17: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005AB1C: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1005AAC9; /* 0x1005AB22: jmp 0x1005aac9 */
L_1005AB24:
    RECOMP_CALL(sub_1001177D); /* 0x1005AB24: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1005AB29: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1005AB2B: pop esi */
    MEM32(eax) = esi; /* 0x1005AB2C: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1002F4F3; /* 0x1005AB2E: jmp 0x1002f4f3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F50F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F50Fu);

L_1002F50F:
    PUSH32(esp, ebp); /* 0x1002F50F: push ebp */
    ebp = esp; /* 0x1002F510: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1002F512: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002F515: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1002F518: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1002F51B: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1002F520: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002F523: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F524: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F527: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F404); /* 0x1002F52A: call 0x1002f404 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F52F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1002F532: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F53F; /* 0x1002F536: je 0x1002f53f */
L_1002F538:
    ecx = MEM32(ebp + (-0x8)); /* 0x1002F538: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002F53B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002F53F:
    esp = ebp; /* 0x1002F53F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F541: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F542: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F543(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F543u);

L_1002F543:
    PUSH32(esp, ebp); /* 0x1002F543: push ebp */
    ebp = esp; /* 0x1002F544: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1002F546: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F548: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F54B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F50F); /* 0x1002F54E: call 0x1002f50f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F553: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1002F556: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F557: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F558u);

L_1002F558:
    PUSH32(esp, ebp); /* 0x1002F558: push ebp */
    ebp = esp; /* 0x1002F559: mov ebp, esp */
    eax = 0x80u; /* 0x1002F55B: mov eax, 0x80 */
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x1002F560: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002F564: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002F566: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1002F568: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F569: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F576u);

L_1002F576:
    PUSH32(esp, ebp); /* 0x1002F576: push ebp */
    ebp = esp; /* 0x1002F577: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1002F579: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F57C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1002F57F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1002F582: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1002F587: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x1002F58A: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056C24; /* 0x1002F58E: jg 0x10056c24 */
L_1002F594:
    ecx = MEM32(ecx + 0x90); /* 0x1002F594: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x1002F59A: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x1002F59D: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x107u);
    ecx = ecx & 0x107u; /* 0x1002F5A1: and ecx, 0x107 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002F5A7:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1002F5A7: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F5B4; /* 0x1002F5AB: je 0x1002f5b4 */
L_1002F5AD:
    eax = MEM32(ebp + (-0x8)); /* 0x1002F5AD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1002F5B0: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002F5B4:
    eax = ecx; /* 0x1002F5B4: mov eax, ecx */
    esp = ebp; /* 0x1002F5B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F5B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F5B9: ret  */
L_10056C24:
    eax = ebp + (-0x10); /* 0x10056C24: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10056C27: push eax */
    PUSH32(esp, 0x107u); /* 0x10056C28: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10056C2D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10056C30: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056C35: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10056C38: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_1002F5A7; /* 0x10056C3A: jmp 0x1002f5a7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F5BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F5BAu);

L_1002F5BA:
    PUSH32(esp, ebp); /* 0x1002F5BA: push ebp */
    ebp = esp; /* 0x1002F5BB: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1002F5BD: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056CFC; /* 0x1002F5C4: je 0x10056cfc */
L_1002F5CA:
    PUSH32(esp, 0); /* 0x1002F5CA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F5CC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F576); /* 0x1002F5CF: call 0x1002f576 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F5D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F5D5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1002F5D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F5D7: ret  */
L_10056CFC:
    ecx = MEM32(ebp + 0x8); /* 0x10056CFC: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10056CFF: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10056D04: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x107u);
    eax = eax & 0x107u; /* 0x10056D08: and eax, 0x107 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056D0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056D0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F5F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F5F8u);

L_1002F5F8:
    PUSH32(esp, ebp); /* 0x1002F5F8: push ebp */
    ebp = esp; /* 0x1002F5F9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002F5FB: push esi */
    PUSH32(esp, edi); /* 0x1002F5FC: push edi */
    RECOMP_CALL(sub_1001177D); /* 0x1002F5FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1002F602: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_1001177D); /* 0x1002F604: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002F609: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F60C: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1002F60F: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F612: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014BF0); /* 0x1002F615: call 0x10014bf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F61A: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1002F61D: mov esi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x1002F61F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1002F624: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054393; /* 0x1002F626: je 0x10054393 */
L_1002F62C:
    MEM32(eax) = edi; /* 0x1002F62C: mov dword ptr [eax], edi */
    eax = esi; /* 0x1002F62E: mov eax, esi */
L_1002F630:
    edi = POP32_VAL(esp); /* 0x1002F630: pop edi */
    esi = POP32_VAL(esp); /* 0x1002F631: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002F632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F633: ret  */
L_10054393:
    /* cmp MEM32(eax), 0x22u */ /* 0x10054393: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005439F; /* 0x10054396: je 0x1005439f */
L_10054398:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054398: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F630; /* 0x1005439A: jmp 0x1002f630 */
L_1005439F:
    RECOMP_CALL(sub_1001177D); /* 0x1005439F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100543A4: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100543A6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x100543A9: push 0 */
    MEM32(eax) = edi; /* 0x100543AB: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_10014BF0); /* 0x100543AD: call 0x10014bf0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x100543B2: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100543B5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x100543B8: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_1002F630; /* 0x100543BA: jmp 0x1002f630 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F634(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F634u);

L_1002F634:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x1002F634: add byte ptr cs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(ebx)); /* 0x1002F637: add byte ptr [eax + eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002F63B: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002F63E: in al, dx */
    PUSH32(esp, ebx); /* 0x1002F63F: push ebx */
    PUSH32(esp, esi); /* 0x1002F640: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002F641: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002F644: push edi */
    PUSH32(esp, esi); /* 0x1002F645: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002F646: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F64B: pop ecx */
    /* cmp eax, 5 */ /* 0x1002F64C: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1002F64F: jb 0x1002f66c */
L_1002F651:
    eax = (uint32_t)MEM16(esi); /* 0x1002F651: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x2Fu); /* 0x1002F654: push 0x2f */
    edi = POP32_VAL(esp); /* 0x1002F656: pop edi */
    PUSH32(esp, 0x5Cu); /* 0x1002F657: push 0x5c */
    ebx = POP32_VAL(esp); /* 0x1002F659: pop ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1002F65A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005456E; /* 0x1002F65D: je 0x1005456e */
L_1002F663:
    /* cmp LO16(eax), LO16(edi) */ /* 0x1002F663: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005456E; /* 0x1002F666: je 0x1005456e */
L_1002F66C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F66C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002F66E:
    edi = POP32_VAL(esp); /* 0x1002F66E: pop edi */
    esi = POP32_VAL(esp); /* 0x1002F66F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002F670: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002F671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F672: ret  */
L_1005456E:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x1005456E: movzx eax, word ptr [esi + 2] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10054572: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054580; /* 0x10054575: je 0x10054580 */
L_10054577:
    /* cmp LO16(eax), LO16(edi) */ /* 0x10054577: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1005457A: jne 0x1002f66c */
L_10054580:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x10054580: movzx eax, word ptr [esi + 4] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10054584: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x10054587: je 0x1002f66c */
L_1005458D:
    /* cmp LO16(eax), LO16(edi) */ /* 0x1005458D: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x10054590: je 0x1002f66c */
L_10054596:
    eax = esi + 0x6; /* 0x10054596: lea eax, [esi + 6] */
    ecx = (uint32_t)MEM16(eax); /* 0x10054599: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1005459C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1005459F: je 0x1002f66c */
L_100545A5:
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100545A5: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545BA; /* 0x100545A8: je 0x100545ba */
L_100545AA:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100545AA: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545BA; /* 0x100545AD: je 0x100545ba */
L_100545AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545AF: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax); /* 0x100545B2: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545B5: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100545A5; /* 0x100545B8: jne 0x100545a5 */
L_100545BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100545BA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545BC: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545BF: je 0x1002f66c */
L_100545C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545C5: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545C8: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545CB: je 0x1002f66c */
L_100545D1:
    ecx = (uint32_t)MEM16(eax); /* 0x100545D1: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545D4: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100545FD; /* 0x100545D7: je 0x100545fd */
L_100545D9:
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100545D9: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545EE; /* 0x100545DC: je 0x100545ee */
L_100545DE:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100545DE: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545EE; /* 0x100545E1: je 0x100545ee */
L_100545E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545E3: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax); /* 0x100545E6: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545E9: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100545D9; /* 0x100545EC: jne 0x100545d9 */
L_100545EE:
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545EE: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545FD; /* 0x100545F1: je 0x100545fd */
L_100545F3:
    /* cmp MEM16(eax + 0x2), LO16(edx) */ /* 0x100545F3: cmp word ptr [eax + 2], dx */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545F7: jne 0x1002f66c */
L_100545FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100545FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100545FF: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002F66E; /* 0x10054600: jmp 0x1002f66e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F63Cu);

L_1002F63C:
    PUSH32(esp, ebp); /* 0x1002F63C: push ebp */
    ebp = esp; /* 0x1002F63D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1002F63F: push ebx */
    PUSH32(esp, esi); /* 0x1002F640: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002F641: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002F644: push edi */
    PUSH32(esp, esi); /* 0x1002F645: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002F646: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F64B: pop ecx */
    /* cmp eax, 5 */ /* 0x1002F64C: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1002F64F: jb 0x1002f66c */
L_1002F651:
    eax = (uint32_t)MEM16(esi); /* 0x1002F651: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x2Fu); /* 0x1002F654: push 0x2f */
    edi = POP32_VAL(esp); /* 0x1002F656: pop edi */
    PUSH32(esp, 0x5Cu); /* 0x1002F657: push 0x5c */
    ebx = POP32_VAL(esp); /* 0x1002F659: pop ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1002F65A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005456E; /* 0x1002F65D: je 0x1005456e */
L_1002F663:
    /* cmp LO16(eax), LO16(edi) */ /* 0x1002F663: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005456E; /* 0x1002F666: je 0x1005456e */
L_1002F66C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F66C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002F66E:
    edi = POP32_VAL(esp); /* 0x1002F66E: pop edi */
    esi = POP32_VAL(esp); /* 0x1002F66F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002F670: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002F671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F672: ret  */
L_1005456E:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x1005456E: movzx eax, word ptr [esi + 2] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10054572: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054580; /* 0x10054575: je 0x10054580 */
L_10054577:
    /* cmp LO16(eax), LO16(edi) */ /* 0x10054577: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1005457A: jne 0x1002f66c */
L_10054580:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x10054580: movzx eax, word ptr [esi + 4] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x10054584: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x10054587: je 0x1002f66c */
L_1005458D:
    /* cmp LO16(eax), LO16(edi) */ /* 0x1005458D: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x10054590: je 0x1002f66c */
L_10054596:
    eax = esi + 0x6; /* 0x10054596: lea eax, [esi + 6] */
    ecx = (uint32_t)MEM16(eax); /* 0x10054599: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1005459C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F66C; /* 0x1005459F: je 0x1002f66c */
L_100545A5:
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100545A5: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545BA; /* 0x100545A8: je 0x100545ba */
L_100545AA:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100545AA: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545BA; /* 0x100545AD: je 0x100545ba */
L_100545AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545AF: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax); /* 0x100545B2: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545B5: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100545A5; /* 0x100545B8: jne 0x100545a5 */
L_100545BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100545BA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545BC: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545BF: je 0x1002f66c */
L_100545C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545C5: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545C8: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545CB: je 0x1002f66c */
L_100545D1:
    ecx = (uint32_t)MEM16(eax); /* 0x100545D1: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545D4: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100545FD; /* 0x100545D7: je 0x100545fd */
L_100545D9:
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x100545D9: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545EE; /* 0x100545DC: je 0x100545ee */
L_100545DE:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100545DE: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545EE; /* 0x100545E1: je 0x100545ee */
L_100545E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100545E3: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax); /* 0x100545E6: movzx ecx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100545E9: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100545D9; /* 0x100545EC: jne 0x100545d9 */
L_100545EE:
    /* cmp MEM16(eax), LO16(edx) */ /* 0x100545EE: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100545FD; /* 0x100545F1: je 0x100545fd */
L_100545F3:
    /* cmp MEM16(eax + 0x2), LO16(edx) */ /* 0x100545F3: cmp word ptr [eax + 2], dx */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F66C; /* 0x100545F7: jne 0x1002f66c */
L_100545FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100545FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100545FF: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002F66E; /* 0x10054600: jmp 0x1002f66e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F6FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F6FAu);

L_1002F6FA:
    PUSH32(esp, 6); /* 0x1002F6FA: push 6 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1002F6FC: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F701: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F702: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F703(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F703u);

L_1002F703:
    PUSH32(esp, 8); /* 0x1002F703: push 8 */
    PUSH32(esp, 0x1002F738u); /* 0x1002F705: push 0x1002f738 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002F70A: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x1002F70F: push 6 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002F711: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F716: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002F717: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10028D59); /* 0x1002F71B: call 0x10028d59 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002F720: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002F6FA); /* 0x1002F727: call 0x1002f6fa */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000EDC3); /* 0x1002F72C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F731: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F802(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F802u);

L_1002F802:
    PUSH32(esp, esi); /* 0x1002F802: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002F803: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F808: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F809: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F80E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F80Eu);

    goto L_1002F80E;
L_1002F80A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F80A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1002F86C; /* 0x1002F80C: jmp 0x1002f86c */
L_1002F80E:
    PUSH32(esp, 0xCu); /* 0x1002F80E: push 0xc */
    PUSH32(esp, 0x1002F878u); /* 0x1002F810: push 0x1002f878 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002F815: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002F81A: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1002F81E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F80A; /* 0x1002F822: je 0x1002f80a */
L_1002F824:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1002F824: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F80A; /* 0x1002F828: je 0x1002f80a */
L_1002F82A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F82A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x1002F82C: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1002F82F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002F831: setne al */
    /* test eax, eax */ /* 0x1002F834: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055893; /* 0x1002F836: je 0x10055893 */
L_1002F83C:
    PUSH32(esp, esi); /* 0x1002F83C: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002F83D: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F842: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002F843: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1002F847: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002F848: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F84B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002F84E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10020891); /* 0x1002F851: call 0x10020891 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002F856: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1002F859: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002F85B: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002F85E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002F802); /* 0x1002F865: call 0x1002f802 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002F86A: mov eax, edi */
L_1002F86C:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002F86C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F871: ret  */
L_10055893:
    RECOMP_CALL(sub_1001177D); /* 0x10055893: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055898: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005589E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002F80A; /* 0x100558A3: jmp 0x1002f80a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F894(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F894u);

L_1002F894:
    PUSH32(esp, ebp); /* 0x1002F894: push ebp */
    ebp = esp; /* 0x1002F895: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1002F897: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1002F89A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002F89B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1002F89E: push edi */
    PUSH32(esp, esi); /* 0x1002F89F: push esi */
    RECOMP_CALL(sub_10014D4B); /* 0x1002F8A0: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1002F8A5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1002F8A7: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1002F8A8: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005EEB7; /* 0x1002F8AB: je 0x1005eeb7 */
L_1002F8B1:
    PUSH32(esp, ebx); /* 0x1002F8B1: push ebx */
    ebx = MEM32(0x100E5234); /* 0x1002F8B2: mov ebx, dword ptr [0x100e5234] */
    eax = ebp + (-0x8); /* 0x1002F8B8: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x1002F8BB: push 1 */
    PUSH32(esp, eax); /* 0x1002F8BD: push eax */
    PUSH32(esp, 0); /* 0x1002F8BE: push 0 */
    PUSH32(esp, 0); /* 0x1002F8C0: push 0 */
    PUSH32(esp, edi); /* 0x1002F8C2: push edi */
    RECOMP_ICALL(ebx); /* 0x1002F8C3: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002F8C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EEC9; /* 0x1002F8C7: je 0x1005eec9 */
L_1002F8CD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002F8CD: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1002F8D0: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1002F8D3: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1002F8D6: push ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002F8D7: cdq  */
    PUSH32(esp, edx); /* 0x1002F8D8: push edx */
    PUSH32(esp, eax); /* 0x1002F8D9: push eax */
    PUSH32(esp, edi); /* 0x1002F8DA: push edi */
    RECOMP_ICALL(ebx); /* 0x1002F8DB: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002F8DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EEC9; /* 0x1002F8DF: je 0x1005eec9 */
L_1002F8E5:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1002F8E5: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005EED8; /* 0x1002F8E9: jne 0x1005eed8 */
L_1002F8EF:
    eax = esi; /* 0x1002F8EF: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1002F8F1: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002F8F4: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x1002F8F7: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x1002F8F7: shl esi, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1002F8FA: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + esi + 0x4) = (uint8_t)(MEM8(eax + esi + 0x4) & 0xFDu); /* 0x1002F901: and byte ptr [eax + esi + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x10)); /* 0x1002F906: mov eax, dword ptr [ebp - 0x10] */
L_1002F909:
    ebx = POP32_VAL(esp); /* 0x1002F909: pop ebx */
L_1002F90A:
    edi = POP32_VAL(esp); /* 0x1002F90A: pop edi */
    esi = POP32_VAL(esp); /* 0x1002F90B: pop esi */
    esp = ebp; /* 0x1002F90C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002F90E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F90F: ret  */
L_1005EEB7:
    RECOMP_CALL(sub_1001177D); /* 0x1005EEB7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EEBC: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x1005EEC2: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F90A; /* 0x1005EEC4: jmp 0x1002f90a */
L_1005EEC9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005EEC9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005EECF: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005EED0: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005EED5: pop ecx */
    goto L_1005EEF0; /* 0x1005EED6: jmp 0x1005eef0 */
L_1005EED8:
    PUSH32(esp, 0); /* 0x1005EED8: push 0 */
    PUSH32(esp, 0); /* 0x1005EEDA: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1005EEDC: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1005EEDF: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1005EEE2: push edi */
    RECOMP_ICALL(ebx); /* 0x1005EEE3: call ebx */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001177D); /* 0x1005EEE5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005EEEA: mov dword ptr [eax], 0x16 */
L_1005EEF0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005EEF0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F909; /* 0x1005EEF3: jmp 0x1002f909 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F910u);

L_1002F910:
    PUSH32(esp, 0x10u); /* 0x1002F910: push 0x10 */
    PUSH32(esp, 0x1002F9A8u); /* 0x1002F912: push 0x1002f9a8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002F917: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002F91C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1002F91E: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x1002F921: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1002F924: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005EE59; /* 0x1002F927: je 0x1005ee59 */
L_1002F92D:
    /* test esi, esi */ /* 0x1002F92D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002F9CC; /* 0x1002F92F: js 0x1002f9cc */
L_1002F935:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x1002F935: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002F9CC; /* 0x1002F93B: jae 0x1002f9cc */
L_1002F941:
    ebx = esi; /* 0x1002F941: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1002F943: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edi = esi; /* 0x1002F946: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x1002F948: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x1002F94B: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x1002F94B: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x1002F94E: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + edi + 0x4); /* 0x1002F955: movsx eax, byte ptr [eax + edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1002F95A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EE6D; /* 0x1002F95D: je 0x1005ee6d */
L_1002F963:
    PUSH32(esp, esi); /* 0x1002F963: push esi */
    RECOMP_CALL(sub_10014206); /* 0x1002F964: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F969: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002F96A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x1002F96E: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x1002F975: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EE77; /* 0x1002F97A: je 0x1005ee77 */
L_1002F980:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1002F980: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002F983: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1002F986: push esi */
    RECOMP_CALL(sub_1002F894); /* 0x1002F987: call 0x1002f894 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002F98C: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1002F98F: mov edi, eax */
L_1002F991:
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002F991: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002F994: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002F9C4); /* 0x1002F99B: call 0x1002f9c4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002F9A0: mov eax, edi */
L_1002F9A2:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002F9A2: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F9A7: ret  */
L_1002F9CC:
    RECOMP_CALL(sub_1001E471); /* 0x1002F9CC: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005EE9D; /* 0x1002F9D1: jmp 0x1005ee9d */
L_1005EE59:
    RECOMP_CALL(sub_1001E471); /* 0x1005EE59: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005EE5E: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1005EE60: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EE65: mov dword ptr [eax], 9 */
    goto L_1005EEAF; /* 0x1005EE6B: jmp 0x1005eeaf */
L_1005EE6D:
    RECOMP_CALL(sub_1001E471); /* 0x1005EE6D: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005EE72: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005EE9F; /* 0x1005EE75: jmp 0x1005ee9f */
L_1005EE77:
    RECOMP_CALL(sub_1001177D); /* 0x1005EE77: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EE7C: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005EE82: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005EE87: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1005EE8A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F991; /* 0x1005EE8D: jmp 0x1002f991 */
L_1005EE9D:
    MEM32(eax) = ebx; /* 0x1005EE9D: mov dword ptr [eax], ebx */
L_1005EE9F:
    RECOMP_CALL(sub_1001177D); /* 0x1005EE9F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EEA4: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x1005EEAA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005EEAF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005EEAF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002F9A2; /* 0x1005EEB2: jmp 0x1002f9a2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002F9C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F9C4u);

L_1002F9C4:
    PUSH32(esp, esi); /* 0x1002F9C4: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x1002F9C5: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F9CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F9CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F9D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F9D6u);

L_1002F9D6:
    PUSH32(esp, esi); /* 0x1002F9D6: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002F9D7: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F9DC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002F9DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002F9DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002F9DEu);

L_1002F9DE:
    PUSH32(esp, 0xCu); /* 0x1002F9DE: push 0xc */
    PUSH32(esp, 0x1002FA30u); /* 0x1002F9E0: push 0x1002fa30 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002F9E5: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002F9EA: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002F9EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1002F9F0: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1002F9F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002F9F5: setne al */
    /* test eax, eax */ /* 0x1002F9F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055855; /* 0x1002F9FA: je 0x10055855 */
L_1002FA00:
    PUSH32(esp, esi); /* 0x1002FA00: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002FA01: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FA06: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002FA07: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1002FA0B: push esi */
    RECOMP_CALL(sub_1002FA4C); /* 0x1002FA0C: call 0x1002fa4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FA11: pop ecx */
    edi = eax; /* 0x1002FA12: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002FA14: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002FA17: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002F9D6); /* 0x1002FA1E: call 0x1002f9d6 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002FA23: mov eax, edi */
L_1002FA25:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002FA25: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FA2A: ret  */
L_10055855:
    RECOMP_CALL(sub_1001177D); /* 0x10055855: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005585A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055860: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055865: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FA25; /* 0x10055868: jmp 0x1002fa25 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FA4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FA4Cu);

L_1002FA4C:
    PUSH32(esp, ebp); /* 0x1002FA4C: push ebp */
    ebp = esp; /* 0x1002FA4D: mov ebp, esp */
    eax = 0x1028u; /* 0x1002FA4F: mov eax, 0x1028 */
    RECOMP_CALL(sub_10011E68); /* 0x1002FA54: call 0x10011e68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100DF7B8); /* 0x1002FA59: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1002FA5E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002FA60: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x1002FA63: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1002FA64: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1014)) = edi; /* 0x1002FA67: mov dword ptr [ebp - 0x1014], edi */
    /* test edi, edi */ /* 0x1002FA6D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055699; /* 0x1002FA6F: je 0x10055699 */
L_1002FA75:
    PUSH32(esp, ebx); /* 0x1002FA75: push ebx */
    PUSH32(esp, esi); /* 0x1002FA76: push esi */
    PUSH32(esp, edi); /* 0x1002FA77: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x1002FA78: call 0x1001427c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002FA7D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1002FA7F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1002FA81: pop ecx */
    MEM32(ebp + (-0x1018)) = esi; /* 0x1002FA82: mov dword ptr [ebp - 0x1018], esi */
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x1002FA88: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100556B1; /* 0x1002FA8B: jl 0x100556b1 */
L_1002FA91:
    PUSH32(esp, 1); /* 0x1002FA91: push 1 */
    PUSH32(esp, ebx); /* 0x1002FA93: push ebx */
    PUSH32(esp, esi); /* 0x1002FA94: push esi */
    RECOMP_CALL(sub_1002F910); /* 0x1002FA95: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002FA9A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x100C)) = eax; /* 0x1002FA9D: mov dword ptr [ebp - 0x100c], eax */
    /* test eax, eax */ /* 0x1002FAA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002FC18; /* 0x1002FAA5: js 0x1002fc18 */
L_1002FAAB:
    eax = esi; /* 0x1002FAAB: mov eax, esi */
    ecx = esi; /* 0x1002FAAD: mov ecx, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002FAAF: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1002FAB2: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1002FAB5: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1002FAB5: shl ecx, 6 */
    MEM32(ebp + (-0x1010)) = eax; /* 0x1002FAB8: mov dword ptr [ebp - 0x1010], eax */
    MEM32(ebp + (-0x1020)) = ecx; /* 0x1002FABE: mov dword ptr [ebp - 0x1020], ecx */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x1002FAC4: mov edx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(edi + 0xC); /* 0x1002FACB: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x1024)) = eax; /* 0x1002FACE: mov dword ptr [ebp - 0x1024], eax */
    SET_LO8(edx, MEM8(ecx + edx + 0x24)); /* 0x1002FAD4: mov dl, byte ptr [ecx + edx + 0x24] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(edx)); /* 0x1002FAD8: add dl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (1u) _cf = (((LO8(edx)) >> 0) & 1u); /* 0x1002FADA: sar dl, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(LO8(edx)) >> 1u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, (uint32_t)((int32_t)(int32_t)(int8_t)(LO8(edx)) >> 1u));
    /* test eax, 0x108u */ /* 0x1002FADC: test eax, 0x108 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x100C)); /* 0x1002FAE1: mov eax, dword ptr [ebp - 0x100c] */
    MEM8(ebp + (-0x1005)) = (uint8_t)(LO8(edx)); /* 0x1002FAE7: mov byte ptr [ebp - 0x1005], dl */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003137A; /* 0x1002FAED: je 0x1003137a */
L_1002FAF3:
    esi = MEM32(edi); /* 0x1002FAF3: mov esi, dword ptr [edi] */
    edi = MEM32(edi + 0x8); /* 0x1002FAF5: mov edi, dword ptr [edi + 8] */
    MEM32(ebp + (-0x101C)) = edi; /* 0x1002FAF8: mov dword ptr [ebp - 0x101c], edi */
    edi = esi; /* 0x1002FAFE: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x101C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x101C)); /* 0x1002FB00: sub edi, dword ptr [ebp - 0x101c] */
    _flag_k = FK_CMP;
    /* test MEM8(ebp + (-0x1024)), 3 */ /* 0x1002FB06: test byte ptr [ebp - 0x1024], 3 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1024))) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x1028)) = edi; /* 0x1002FB0D: mov dword ptr [ebp - 0x1028], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FC06; /* 0x1002FB13: je 0x1002fc06 */
L_1002FB19:
    /* cmp LO8(edx), 1 */ /* 0x1002FB19: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100556B9; /* 0x1002FB1C: je 0x100556b9 */
L_1002FB22:
    edi = MEM32(ebp + (-0x1010)); /* 0x1002FB22: mov edi, dword ptr [ebp - 0x1010] */
    eax = MEM32(edi * 4 + 0x100DF640); /* 0x1002FB28: mov eax, dword ptr [edi*4 + 0x100df640] */
    edi = MEM32(ebp + (-0x1028)); /* 0x1002FB2F: mov edi, dword ptr [ebp - 0x1028] */
    /* test MEM8(ecx + eax + 0x4), 0x80u */ /* 0x1002FB35: test byte ptr [ecx + eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x100C)); /* 0x1002FB3A: mov eax, dword ptr [ebp - 0x100c] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031ABE; /* 0x1002FB40: jne 0x10031abe */
L_1002FB46:
    /* test eax, eax */ /* 0x1002FB46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FC20; /* 0x1002FB48: je 0x1002fc20 */
L_1002FB4E:
    /* test MEM8(ebp + (-0x1024)), 1 */ /* 0x1002FB4E: test byte ptr [ebp - 0x1024], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1024))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031AD7; /* 0x1002FB55: jne 0x10031ad7 */
L_1002FB5B:
    /* cmp LO8(edx), 1 */ /* 0x1002FB5B: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005584E; /* 0x1002FB5E: je 0x1005584e */
L_1002FB64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1002FB64: add eax, edi */
    _flag_k = FK_ADD;
L_1002FB66:
    esi = POP32_VAL(esp); /* 0x1002FB66: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002FB67: pop ebx */
L_1002FB68:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002FB68: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002FB6B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1002FB6D: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1002FB6E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002FB73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002FB75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FB76: ret  */
L_1002FC06:
    /* test MEM8(ebp + (-0x1024)), 0x80u */ /* 0x1002FC06: test byte ptr [ebp - 0x1024], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1024))) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002FB46; /* 0x1002FC0D: jne 0x1002fb46 */
L_1002FC13:
    goto L_100557D9; /* 0x1002FC13: jmp 0x100557d9 */
L_1002FC18:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002FC18: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FB66; /* 0x1002FC1B: jmp 0x1002fb66 */
L_1002FC20:
    eax = edi; /* 0x1002FC20: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1002FB66; /* 0x1002FC22: jmp 0x1002fb66 */
L_1003137A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x4); /* 0x1003137A: sub eax, dword ptr [edi + 4] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1002FB66; /* 0x1003137D: jmp 0x1002fb66 */
L_10031724:
    SET_LO8(edx, MEM8(ebp + (-0x1005))); /* 0x10031724: mov dl, byte ptr [ebp - 0x1005] */
    RECOMP_BACKEDGE();
    goto L_1002FB46; /* 0x1003172A: jmp 0x1002fb46 */
L_1003172F:
    eax = MEM32(ebp + (-0x100C)); /* 0x1003172F: mov eax, dword ptr [ebp - 0x100c] */
    edi = ebx; /* 0x10031735: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1002FB5B; /* 0x10031737: jmp 0x1002fb5b */
L_10031ABE:
    edx = MEM32(ebp + (-0x101C)); /* 0x10031ABE: mov edx, dword ptr [ebp - 0x101c] */
L_10031AC4:
    /* cmp edx, esi */ /* 0x10031AC4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10031724; /* 0x10031AC6: jae 0x10031724 */
L_10031ACC:
    /* cmp MEM8(edx), 0xAu */ /* 0x10031ACC: cmp byte ptr [edx], 0xa */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031AD4; /* 0x10031ACF: je 0x10031ad4 */
L_10031AD1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10031AD1: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10031AC4; /* 0x10031AD2: jmp 0x10031ac4 */
L_10031AD4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10031AD4: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10031AD1; /* 0x10031AD5: jmp 0x10031ad1 */
L_10031AD7:
    eax = MEM32(ebp + (-0x1014)); /* 0x10031AD7: mov eax, dword ptr [ebp - 0x1014] */
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x10031ADD: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003172F; /* 0x10031AE0: je 0x1003172f */
L_10031AE6:
    ebx = MEM32(ebp + (-0x1010)); /* 0x10031AE6: mov ebx, dword ptr [ebp - 0x1010] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(eax + 0x8); /* 0x10031AEC: sub esi, dword ptr [eax + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x10031AEF: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10031AF2: push 0 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10031AF4: mov eax, dword ptr [ebx*4 + 0x100df640] */
    ebx = POP32_VAL(esp); /* 0x10031AFB: pop ebx */
    /* test MEM8(ecx + eax + 0x4), 0x80u */ /* 0x10031AFC: test byte ptr [ecx + eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031B73; /* 0x10031B01: je 0x10031b73 */
L_10031B03:
    PUSH32(esp, 2); /* 0x10031B03: push 2 */
    PUSH32(esp, ebx); /* 0x10031B05: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x10031B06: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_1002F910); /* 0x10031B0C: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x100C)); /* 0x10031B11: mov ecx, dword ptr [ebp - 0x100c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031B17: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x10031B1A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100557E9; /* 0x10031B1C: jne 0x100557e9 */
L_10031B22:
    edx = MEM32(ebp + (-0x1014)); /* 0x10031B22: mov edx, dword ptr [ebp - 0x1014] */
    eax = MEM32(edx + 0x8); /* 0x10031B28: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10031B2B: add eax, esi */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10031B2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x8); /* 0x10031B2F: sub ecx, dword ptr [edx + 8] */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x10031B32: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10031B35: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10031B37: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10031B39: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1020)) = eax; /* 0x10031B3B: mov dword ptr [ebp - 0x1020], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031B57; /* 0x10031B41: jbe 0x10031b57 */
L_10031B43:
    eax = MEM32(edx + 0x8); /* 0x10031B43: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(ebp + (-0x1020)); /* 0x10031B46: mov ecx, dword ptr [ebp - 0x1020] */
L_10031B4C:
    /* cmp MEM8(eax), 0xAu */ /* 0x10031B4C: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031B80; /* 0x10031B4F: je 0x10031b80 */
L_10031B51:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10031B51: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10031B52: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x10031B53: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10031B4C; /* 0x10031B55: jb 0x10031b4c */
L_10031B57:
    /* test MEM32(edx + 0xC), 0x2000u */ /* 0x10031B57: test dword ptr [edx + 0xc], 0x2000 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_10031B5E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10055841; /* 0x10031B5E: jne 0x10055841 */
L_10031B64:
    SET_LO8(edx, MEM8(ebp + (-0x1005))); /* 0x10031B64: mov dl, byte ptr [ebp - 0x1005] */
    /* cmp LO8(edx), 1 */ /* 0x10031B6A: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055847; /* 0x10031B6D: je 0x10055847 */
L_10031B73:
    eax = MEM32(ebp + (-0x100C)); /* 0x10031B73: mov eax, dword ptr [ebp - 0x100c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10031B79: sub eax, esi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1002FB5B; /* 0x10031B7B: jmp 0x1002fb5b */
L_10031B80:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10031B80: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10031B51; /* 0x10031B81: jmp 0x10031b51 */
L_10055699:
    RECOMP_CALL(sub_1001177D); /* 0x10055699: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005569E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100556A4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100556A9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FB68; /* 0x100556AC: jmp 0x1002fb68 */
L_100556B1:
    MEM32(edi + 0x4) = ebx; /* 0x100556B1: mov dword ptr [edi + 4], ebx */
    RECOMP_BACKEDGE();
    goto L_1002FA91; /* 0x100556B4: jmp 0x1002fa91 */
L_100556B9:
    edi = MEM32(ebp + (-0x1010)); /* 0x100556B9: mov edi, dword ptr [ebp - 0x1010] */
    eax = MEM32(edi * 4 + 0x100DF640); /* 0x100556BF: mov eax, dword ptr [edi*4 + 0x100df640] */
    edi = MEM32(ebp + (-0x1028)); /* 0x100556C6: mov edi, dword ptr [ebp - 0x1028] */
    /* cmp MEM32(ecx + eax + 0x30), ebx */ /* 0x100556CC: cmp dword ptr [ecx + eax + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FB22; /* 0x100556D0: je 0x1002fb22 */
L_100556D6:
    eax = MEM32(ebp + (-0x1014)); /* 0x100556D6: mov eax, dword ptr [ebp - 0x1014] */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x100556DC: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x100556DC: shr edi, 1 */
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x100556DE: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100556EE; /* 0x100556E1: jne 0x100556ee */
L_100556E3:
    eax = MEM32(ebp + (-0x100C)); /* 0x100556E3: mov eax, dword ptr [ebp - 0x100c] */
    RECOMP_BACKEDGE();
    goto L_1002FB66; /* 0x100556E9: jmp 0x1002fb66 */
L_100556EE:
    edx = MEM32(ebp + (-0x1010)); /* 0x100556EE: mov edx, dword ptr [ebp - 0x1010] */
    PUSH32(esp, ebx); /* 0x100556F4: push ebx */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100556F5: mov eax, dword ptr [edx*4 + 0x100df640] */
    PUSH32(esp, MEM32(ecx + eax + 0x2C)); /* 0x100556FC: push dword ptr [ecx + eax + 0x2c] */
    PUSH32(esp, MEM32(ecx + eax + 0x28)); /* 0x10055700: push dword ptr [ecx + eax + 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x10055704: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_100A18FC); /* 0x1005570A: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1020)); /* 0x1005570F: mov ecx, dword ptr [ebp - 0x1020] */
    esi = eax; /* 0x10055715: mov esi, eax */
    eax = MEM32(ebp + (-0x1010)); /* 0x10055717: mov eax, dword ptr [ebp - 0x1010] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005571D: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10055720: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* cmp esi, MEM32(ecx + eax + 0x28) */ /* 0x10055727: cmp esi, dword ptr [ecx + eax + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002FC18; /* 0x1005572B: jne 0x1002fc18 */
L_10055731:
    /* cmp edx, MEM32(ecx + eax + 0x2C) */ /* 0x10055731: cmp edx, dword ptr [ecx + eax + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002FC18; /* 0x10055735: jne 0x1002fc18 */
L_1005573B:
    PUSH32(esp, ebx); /* 0x1005573B: push ebx */
    edx = ebp + (-0x101C); /* 0x1005573C: lea edx, [ebp - 0x101c] */
    PUSH32(esp, edx); /* 0x10055742: push edx */
    PUSH32(esp, 0x1000u); /* 0x10055743: push 0x1000 */
    edx = ebp + (-0x1004); /* 0x10055748: lea edx, [ebp - 0x1004] */
    PUSH32(esp, edx); /* 0x1005574E: push edx */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1005574F: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E50FC)); /* 0x10055752: call dword ptr [0x100e50fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10055758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FC18; /* 0x1005575A: je 0x1002fc18 */
L_10055760:
    ecx = MEM32(ebp + (-0x100C)); /* 0x10055760: mov ecx, dword ptr [ebp - 0x100c] */
    PUSH32(esp, ebx); /* 0x10055766: push ebx */
    PUSH32(esp, ecx); /* 0x10055767: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x10055768: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_1002F910); /* 0x1005576E: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10055773: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10055776: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002FC18; /* 0x10055778: js 0x1002fc18 */
L_1005577E:
    eax = MEM32(ebp + (-0x101C)); /* 0x1005577E: mov eax, dword ptr [ebp - 0x101c] */
    /* cmp edi, eax */ /* 0x10055784: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1002FC18; /* 0x10055786: ja 0x1002fc18 */
L_1005578C:
    ecx = ebp + (-0x1004); /* 0x1005578C: lea ecx, [ebp - 0x1004] */
    /* test edi, edi */ /* 0x10055792: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100557C9; /* 0x10055794: je 0x100557c9 */
L_10055796:
    edx = ecx; /* 0x10055796: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10055798: add edx, eax */
    _flag_k = FK_ADD;
L_1005579A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005579A: dec edi */
    _flag_k = FK_DEC;
    /* cmp ecx, edx */ /* 0x1005579B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100557C9; /* 0x1005579D: jae 0x100557c9 */
L_1005579F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1005579F: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0xDu */ /* 0x100557A1: cmp al, 0xd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100557B8; /* 0x100557A3: jne 0x100557b8 */
L_100557A5:
    eax = edx + (-0x1); /* 0x100557A5: lea eax, [edx - 1] */
    /* cmp ecx, eax */ /* 0x100557A8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100557C4; /* 0x100557AA: jae 0x100557c4 */
L_100557AC:
    eax = ecx + 0x1; /* 0x100557AC: lea eax, [ecx + 1] */
    /* cmp MEM8(eax), 0xAu */ /* 0x100557AF: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100557C4; /* 0x100557B2: jne 0x100557c4 */
L_100557B4:
    ecx = eax; /* 0x100557B4: mov ecx, eax */
    goto L_100557C4; /* 0x100557B6: jmp 0x100557c4 */
L_100557B8:
    eax = (uint32_t)LO8(eax); /* 0x100557B8: movzx eax, al */
    eax = (int32_t)(int8_t)MEM8(eax + 0x100E1768); /* 0x100557BB: movsx eax, byte ptr [eax + 0x100e1768] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100557C2: add ecx, eax */
    _flag_k = FK_ADD;
L_100557C4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100557C4: inc ecx */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x100557C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005579A; /* 0x100557C7: jne 0x1005579a */
L_100557C9:
    eax = ebp + (-0x1004); /* 0x100557C9: lea eax, [ebp - 0x1004] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x100557CF: sub esi, eax */
    _flag_k = FK_CMP;
    eax = esi + ecx; /* 0x100557D1: lea eax, [esi + ecx] */
    RECOMP_BACKEDGE();
    goto L_1002FB66; /* 0x100557D4: jmp 0x1002fb66 */
L_100557D9:
    RECOMP_CALL(sub_1001177D); /* 0x100557D9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100557DE: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1002FC18; /* 0x100557E4: jmp 0x1002fc18 */
L_100557E9:
    PUSH32(esp, ebx); /* 0x100557E9: push ebx */
    PUSH32(esp, ecx); /* 0x100557EA: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x100557EB: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_1002F910); /* 0x100557F1: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100557F6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100557F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002FC18; /* 0x100557FB: js 0x1002fc18 */
L_10055801:
    eax = MEM32(ebp + (-0x1014)); /* 0x10055801: mov eax, dword ptr [ebp - 0x1014] */
    ecx = 0x200u; /* 0x10055807: mov ecx, 0x200 */
    /* cmp esi, ecx */ /* 0x1005580C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10055821; /* 0x1005580E: ja 0x10055821 */
L_10055810:
    /* test MEM8(eax + 0xC), 8 */ /* 0x10055810: test byte ptr [eax + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055821; /* 0x10055814: je 0x10055821 */
L_10055816:
    /* test MEM32(eax + 0xC), 0x400u */ /* 0x10055816: test dword ptr [eax + 0xc], 0x400 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1005581D: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055824; /* 0x1005581F: je 0x10055824 */
L_10055821:
    esi = MEM32(eax + 0x18); /* 0x10055821: mov esi, dword ptr [eax + 0x18] */
L_10055824:
    eax = MEM32(ebp + (-0x1010)); /* 0x10055824: mov eax, dword ptr [ebp - 0x1010] */
    ecx = MEM32(ebp + (-0x1020)); /* 0x1005582A: mov ecx, dword ptr [ebp - 0x1020] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10055830: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(ecx + eax + 0x4), 4 */ /* 0x10055837: test byte ptr [ecx + eax + 4], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_10031B5E; /* 0x1005583C: jmp 0x10031b5e */
L_10055841:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055841: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10031B64; /* 0x10055842: jmp 0x10031b64 */
L_10055847:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x10055847: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x10055847: shr esi, 1 */
    RECOMP_BACKEDGE();
    goto L_10031B73; /* 0x10055849: jmp 0x10031b73 */
L_1005584E:
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1005584E: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1005584E: shr edi, 1 */
    RECOMP_BACKEDGE();
    goto L_1002FB64; /* 0x10055850: jmp 0x1002fb64 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FB81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FB81u);

L_1002FB81:
    PUSH32(esp, ebp); /* 0x1002FB81: push ebp */
    ebp = esp; /* 0x1002FB82: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1002FB84: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1002FB85: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1002FB88: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FBA6; /* 0x1002FB8A: je 0x1002fba6 */
L_1002FB8C:
    PUSH32(esp, esi); /* 0x1002FB8C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002FB8D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1002FB90: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1002FB91: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002FB96: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1002FB97: push eax */
    eax = edi + esi; /* 0x1002FB98: lea eax, [edi + esi] */
    PUSH32(esp, esi); /* 0x1002FB9B: push esi */
    PUSH32(esp, eax); /* 0x1002FB9C: push eax */
    RECOMP_CALL(sub_1000F10E); /* 0x1002FB9D: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002FBA2: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1002FBA5: pop esi */
L_1002FBA6:
    edi = POP32_VAL(esp); /* 0x1002FBA6: pop edi */
    ebp = POP32_VAL(esp); /* 0x1002FBA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FBA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002FCC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FCC8u);

L_1002FCC8:
    PUSH32(esp, esi); /* 0x1002FCC8: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002FCC9: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FCCE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FCCF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002FCDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FCDAu);

    goto L_1002FCDA;
L_1002FCD0:
    /* test ebx, ebx */ /* 0x1002FCD0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005593C; /* 0x1002FCD2: jne 0x1005593c */
L_1002FCD8:
    goto L_1002FD0D; /* 0x1002FCD8: jmp 0x1002fd0d */
L_1002FCDA:
    PUSH32(esp, 0x10u); /* 0x1002FCDA: push 0x10 */
    PUSH32(esp, 0x1002FD98u); /* 0x1002FCDC: push 0x1002fd98 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002FCE1: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002FCE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002FCE8: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FCEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1002FCED: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1002FCF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002FCF2: setne al */
    /* test eax, eax */ /* 0x1002FCF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055919; /* 0x1002FCF7: je 0x10055919 */
L_1002FCFD:
    ebx = MEM32(ebp + 0x10); /* 0x1002FCFD: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, 4 */ /* 0x1002FD00: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FCD0; /* 0x1002FD03: je 0x1002fcd0 */
L_1002FD05:
    /* test ebx, ebx */ /* 0x1002FD05: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055931; /* 0x1002FD07: jne 0x10055931 */
L_1002FD0D:
    ecx = MEM32(ebp + 0x14); /* 0x1002FD0D: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx + (-0x2); /* 0x1002FD10: lea eax, [ecx - 2] */
    /* cmp eax, 0x7FFFFFFDu */ /* 0x1002FD13: cmp eax, 0x7ffffffd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10055919; /* 0x1002FD18: ja 0x10055919 */
L_1002FD1E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x1002FD1E: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x1002FD21: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x20)) = esi; /* 0x1002FD24: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, esi); /* 0x1002FD27: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002FD28: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FD2D: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1002FD2E: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, esi); /* 0x1002FD31: push esi */
    RECOMP_CALL(sub_1001428F); /* 0x1002FD32: call 0x1001428f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1002FD37: push esi */
    RECOMP_CALL(sub_10014E60); /* 0x1002FD38: call 0x10014e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FD3D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002FD3E: pop ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFC2F3u);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFC2F3u; /* 0x1002FD3F: and dword ptr [esi + 0xc], 0xffffc2f3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0xC); /* 0x1002FD46: mov ecx, dword ptr [esi + 0xc] */
    /* test LO8(ebx), 4 */ /* 0x1002FD49: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005594D; /* 0x1002FD4C: jne 0x1005594d */
L_1002FD52:
    eax = MEM32(ebp + 0xC); /* 0x1002FD52: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1002FD55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055969; /* 0x1002FD57: jne 0x10055969 */
L_1002FD5D:
    ebx = MEM32(ebp + 0x8); /* 0x1002FD5D: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1002FD60: push ebx */
    RECOMP_CALL(sub_10012226); /* 0x1002FD61: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FD66: pop ecx */
    /* test eax, eax */ /* 0x1002FD67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005595E; /* 0x1002FD69: je 0x1005595e */
L_1002FD6F:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x408u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x408u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x408u; /* 0x1002FD6F: or dword ptr [esi + 0xc], 0x408 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002FD76:
    MEM32(esi + 0x18) = ebx; /* 0x1002FD76: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x8) = eax; /* 0x1002FD79: mov dword ptr [esi + 8], eax */
    MEM32(esi) = eax; /* 0x1002FD7C: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = edi; /* 0x1002FD7E: mov dword ptr [esi + 4], edi */
L_1002FD81:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002FD81: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002FCC8); /* 0x1002FD88: call 0x1002fcc8 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002FD8D: mov eax, edi */
L_1002FD8F:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002FD8F: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FD94: ret  */
L_10055919:
    RECOMP_CALL(sub_1001177D); /* 0x10055919: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005591E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055924: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055929: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FD8F; /* 0x1005592C: jmp 0x1002fd8f */
L_10055931:
    /* cmp ebx, 0x40u */ /* 0x10055931: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FCD0; /* 0x10055934: je 0x1002fcd0 */
L_1005593A:
    RECOMP_BACKEDGE();
    goto L_10055919; /* 0x1005593A: jmp 0x10055919 */
L_1005593C:
    /* cmp ebx, 0x40u */ /* 0x1005593C: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FD0D; /* 0x1005593F: je 0x1002fd0d */
L_10055945:
    ecx = MEM32(ebp + 0x14); /* 0x10055945: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002FD1E; /* 0x10055948: jmp 0x1002fd1e */
L_1005594D:
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x1005594D: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x10055950: mov dword ptr [esi + 0xc], ecx */
    eax = esi + 0x14; /* 0x10055953: lea eax, [esi + 0x14] */
    PUSH32(esp, 2); /* 0x10055956: push 2 */
    ebx = POP32_VAL(esp); /* 0x10055958: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002FD76; /* 0x10055959: jmp 0x1002fd76 */
L_1005595E:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1005595E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10055961: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    goto L_1002FD81; /* 0x10055964: jmp 0x1002fd81 */
L_10055969:
    _flag_a = (uint32_t)((ecx | 0x500u)); _flag_b = (uint32_t)((ecx | 0x500u));
    ecx = ecx | 0x500u; /* 0x10055969: or ecx, 0x500 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x1005596F: mov dword ptr [esi + 0xc], ecx */
    ebx = MEM32(ebp + 0x8); /* 0x10055972: mov ebx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_1002FD76; /* 0x10055975: jmp 0x1002fd76 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FDB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FDB4u);

L_1002FDB4:
    PUSH32(esp, esi); /* 0x1002FDB4: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002FDB5: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FDBA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FDBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002FDBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FDBCu);

L_1002FDBC:
    PUSH32(esp, 0xCu); /* 0x1002FDBC: push 0xc */
    PUSH32(esp, 0x1002FE20u); /* 0x1002FDBE: push 0x1002fe20 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002FDC3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1002FDC8: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FDCC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1002FDCE: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1002FDD1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002FDD3: setne al */
    /* test eax, eax */ /* 0x1002FDD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055676; /* 0x1002FDD8: je 0x10055676 */
L_1002FDDE:
    edi = MEM32(ebp + 0x10); /* 0x1002FDDE: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1002FDE1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100313E3; /* 0x1002FDE3: jne 0x100313e3 */
L_1002FDE9:
    PUSH32(esp, esi); /* 0x1002FDE9: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002FDEA: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FDEF: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002FDF0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1002FDF4: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002FDF5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1002FDF8: push esi */
    RECOMP_CALL(sub_1002FE3C); /* 0x1002FDF9: call 0x1002fe3c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002FDFE: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1002FE01: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1002FE03: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002FE06: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002FDB4); /* 0x1002FE0D: call 0x1002fdb4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1002FE12: mov eax, edi */
L_1002FE14:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002FE14: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FE19: ret  */
L_100313E3:
    /* cmp edi, 1 */ /* 0x100313E3: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FDE9; /* 0x100313E6: je 0x1002fde9 */
L_100313EC:
    /* cmp edi, 2 */ /* 0x100313EC: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FDE9; /* 0x100313EF: je 0x1002fde9 */
L_100313F5:
    goto L_10055676; /* 0x100313F5: jmp 0x10055676 */
L_10055676:
    RECOMP_CALL(sub_1001177D); /* 0x10055676: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005567B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055681: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10055686: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FE14; /* 0x10055689: jmp 0x1002fe14 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FE3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FE3Cu);

L_1002FE3C:
    PUSH32(esp, ebp); /* 0x1002FE3C: push ebp */
    ebp = esp; /* 0x1002FE3D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002FE3F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002FE40: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xC); /* 0x1002FE43: mov eax, dword ptr [esi + 0xc] */
    /* test LO8(eax), 0x83u */ /* 0x1002FE46: test al, 0x83 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055631; /* 0x1002FE48: je 0x10055631 */
L_1002FE4E:
    PUSH32(esp, ebx); /* 0x1002FE4E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1002FE4F: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x1002FE52: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1002FE55: mov dword ptr [esi + 0xc], eax */
    PUSH32(esp, edi); /* 0x1002FE58: push edi */
    /* cmp ebx, 1 */ /* 0x1002FE59: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055644; /* 0x1002FE5C: je 0x10055644 */
L_1002FE62:
    edi = MEM32(ebp + 0xC); /* 0x1002FE62: mov edi, dword ptr [ebp + 0xc] */
L_1002FE65:
    PUSH32(esp, esi); /* 0x1002FE65: push esi */
    RECOMP_CALL(sub_1001428F); /* 0x1002FE66: call 0x1001428f */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1002FE6B: mov eax, dword ptr [esi + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1002FE6E: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1002FE6F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100326D7; /* 0x1002FE71: js 0x100326d7 */
L_1002FE77:
    /* test LO8(eax), 1 */ /* 0x1002FE77: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055657; /* 0x1002FE79: jne 0x10055657 */
L_1002FE7F:
    PUSH32(esp, ebx); /* 0x1002FE7F: push ebx */
    PUSH32(esp, edi); /* 0x1002FE80: push edi */
    PUSH32(esp, esi); /* 0x1002FE81: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x1002FE82: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FE87: pop ecx */
    PUSH32(esp, eax); /* 0x1002FE88: push eax */
    RECOMP_CALL(sub_1002F910); /* 0x1002FE89: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002FE8E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002FE91: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002FE93: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002FE96: setne cl */
    edi = POP32_VAL(esp); /* 0x1002FE99: pop edi */
    ebx = POP32_VAL(esp); /* 0x1002FE9A: pop ebx */
    eax = ecx + (-0x1); /* 0x1002FE9B: lea eax, [ecx - 1] */
L_1002FE9E:
    esi = POP32_VAL(esp); /* 0x1002FE9E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1002FE9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FEA0: ret  */
L_100326D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x100326D7: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x100326DA: mov dword ptr [esi + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_1002FE7F; /* 0x100326DD: jmp 0x1002fe7f */
L_10055631:
    RECOMP_CALL(sub_1001177D); /* 0x10055631: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055636: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005563C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FE9E; /* 0x1005563F: jmp 0x1002fe9e */
L_10055644:
    PUSH32(esp, esi); /* 0x10055644: push esi */
    RECOMP_CALL(sub_1002FA4C); /* 0x10055645: call 0x1002fa4c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1005564A: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1005564D: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1005564F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10055651: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002FE65; /* 0x10055652: jmp 0x1002fe65 */
L_10055657:
    /* test LO8(eax), 8 */ /* 0x10055657: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FE7F; /* 0x10055659: je 0x1002fe7f */
L_1005565F:
    /* test eax, 0x400u */ /* 0x1005565F: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002FE7F; /* 0x10055664: jne 0x1002fe7f */
L_1005566A:
    MEM32(esi + 0x18) = 0x200u; /* 0x1005566A: mov dword ptr [esi + 0x18], 0x200 */
    RECOMP_BACKEDGE();
    goto L_1002FE7F; /* 0x10055671: jmp 0x1002fe7f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FEA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FEA1u);

L_1002FEA1:
    PUSH32(esp, ebp); /* 0x1002FEA1: push ebp */
    ebp = esp; /* 0x1002FEA2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002FEA4: push ecx */
    PUSH32(esp, esi); /* 0x1002FEA5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002FEA6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1002FEA9: push edi */
    PUSH32(esp, esi); /* 0x1002FEAA: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x1002FEAB: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FEB0: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x1002FEB1: mov ecx, dword ptr [esi + 0xc] */
    edi = eax; /* 0x1002FEB4: mov edi, eax */
    /* test LO8(ecx), 0x82u */ /* 0x1002FEB6: test cl, 0x82 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055272; /* 0x1002FEB9: je 0x10055272 */
L_1002FEBF:
    /* test LO8(ecx), 0x40u */ /* 0x1002FEBF: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031405; /* 0x1002FEC2: je 0x10031405 */
L_1002FEC8:
    RECOMP_CALL(sub_1001177D); /* 0x1002FEC8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1002FECD: mov dword ptr [eax], 0x22 */
L_1002FED3:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x1002FED3: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFu; /* 0x1002FED7: mov eax, 0xffff */
L_1002FEDC:
    edi = POP32_VAL(esp); /* 0x1002FEDC: pop edi */
    esi = POP32_VAL(esp); /* 0x1002FEDD: pop esi */
    esp = ebp; /* 0x1002FEDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002FEE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FEE1: ret  */
L_10031405:
    PUSH32(esp, ebx); /* 0x10031405: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10031406: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 1 */ /* 0x10031408: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055282; /* 0x1003140B: jne 0x10055282 */
L_10031411:
    eax = MEM32(esi + 0xC); /* 0x10031411: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x10031414: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ebx; /* 0x10031417: mov dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1003141A: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1003141D: mov dword ptr [esi + 0xc], eax */
    /* test eax, 0x10Cu */ /* 0x10031420: test eax, 0x10c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003144E; /* 0x10031425: jne 0x1003144e */
L_10031427:
    RECOMP_CALL(sub_100142B5); /* 0x10031427: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1003142C: add eax, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x1003142F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005529A; /* 0x10031431: je 0x1005529a */
L_10031437:
    RECOMP_CALL(sub_100142B5); /* 0x10031437: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1003143C: add eax, 0x40 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x1003143F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005529A; /* 0x10031441: je 0x1005529a */
L_10031447:
    PUSH32(esp, esi); /* 0x10031447: push esi */
    RECOMP_CALL(sub_100158BC); /* 0x10031448: call 0x100158bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003144D: pop ecx */
L_1003144E:
    /* test MEM32(esi + 0xC), 0x108u */ /* 0x1003144E: test dword ptr [esi + 0xc], 0x108 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100552D9; /* 0x10031455: je 0x100552d9 */
L_1003145B:
    edx = MEM32(esi + 0x8); /* 0x1003145B: mov edx, dword ptr [esi + 8] */
    ecx = MEM32(esi); /* 0x1003145E: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x10031460: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x10031462: mov dword ptr [ebp + 0xc], ecx */
    eax = edx + 0x2; /* 0x10031465: lea eax, [edx + 2] */
    MEM32(esi) = eax; /* 0x10031468: mov dword ptr [esi], eax */
    eax = MEM32(esi + 0x18); /* 0x1003146A: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1003146D: sub eax, 2 */
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = eax; /* 0x10031470: mov dword ptr [esi + 4], eax */
    /* test ecx, ecx */ /* 0x10031473: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100552A5; /* 0x10031475: jg 0x100552a5 */
L_1003147B:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1003147B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314C5; /* 0x1003147E: je 0x100314c5 */
L_10031480:
    /* cmp edi, 0xFFFFFFFEu */ /* 0x10031480: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100314C5; /* 0x10031483: je 0x100314c5 */
L_10031485:
    eax = edi; /* 0x10031485: mov eax, edi */
    ecx = edi; /* 0x10031487: mov ecx, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10031489: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1003148C: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1003148F: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1003148F: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x10031492: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
L_10031499:
    /* test MEM8(ecx + 0x4), 0x20u */ /* 0x10031499: test byte ptr [ecx + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100552BF; /* 0x1003149D: jne 0x100552bf */
L_100314A3:
    eax = MEM32(esi + 0x8); /* 0x100314A3: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x100314A6: mov ecx, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x100314A9: mov word ptr [eax], cx */
L_100314AC:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x100314AC: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10055300; /* 0x100314AF: jne 0x10055300 */
L_100314B5:
    eax = (uint32_t)LO16(ecx); /* 0x100314B5: movzx eax, cx */
L_100314B8:
    ebx = POP32_VAL(esp); /* 0x100314B8: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002FEDC; /* 0x100314B9: jmp 0x1002fedc */
L_100314BE:
    ecx = POP32_VAL(esp); /* 0x100314BE: pop ecx */
    /* test eax, eax */ /* 0x100314BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031447; /* 0x100314C1: je 0x10031447 */
L_100314C3:
    RECOMP_BACKEDGE();
    goto L_1003144E; /* 0x100314C3: jmp 0x1003144e */
L_100314C5:
    ecx = 0x100DF520u; /* 0x100314C5: mov ecx, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_10031499; /* 0x100314CA: jmp 0x10031499 */
L_10055272:
    RECOMP_CALL(sub_1001177D); /* 0x10055272: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10055277: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1002FED3; /* 0x1005527D: jmp 0x1002fed3 */
L_10055282:
    MEM32(esi + 0x4) = ebx; /* 0x10055282: mov dword ptr [esi + 4], ebx */
    /* test LO8(ecx), 0x10u */ /* 0x10055285: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100552B7; /* 0x10055288: je 0x100552b7 */
L_1005528A:
    eax = MEM32(esi + 0x8); /* 0x1005528A: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x1005528D: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10055290: mov dword ptr [esi], eax */
    MEM32(esi + 0xC) = ecx; /* 0x10055292: mov dword ptr [esi + 0xc], ecx */
    RECOMP_BACKEDGE();
    goto L_10031411; /* 0x10055295: jmp 0x10031411 */
L_1005529A:
    PUSH32(esp, edi); /* 0x1005529A: push edi */
    RECOMP_CALL(sub_100142BB); /* 0x1005529B: call 0x100142bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100314BE; /* 0x100552A0: jmp 0x100314be */
L_100552A5:
    PUSH32(esp, ecx); /* 0x100552A5: push ecx */
    PUSH32(esp, edx); /* 0x100552A6: push edx */
    PUSH32(esp, edi); /* 0x100552A7: push edi */
    RECOMP_CALL(sub_1002029C); /* 0x100552A8: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100552AD: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x100552B0: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_100314A3; /* 0x100552B2: jmp 0x100314a3 */
L_100552B7:
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x100552B7: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x100552BA: mov dword ptr [esi + 0xc], ecx */
    goto L_10055304; /* 0x100552BD: jmp 0x10055304 */
L_100552BF:
    PUSH32(esp, 2); /* 0x100552BF: push 2 */
    PUSH32(esp, ebx); /* 0x100552C1: push ebx */
    PUSH32(esp, ebx); /* 0x100552C2: push ebx */
    PUSH32(esp, edi); /* 0x100552C3: push edi */
    RECOMP_CALL(sub_100A18FC); /* 0x100552C4: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100552C9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100552CB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100552CE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100314A3; /* 0x100552D1: jne 0x100314a3 */
L_100552D7:
    goto L_10055300; /* 0x100552D7: jmp 0x10055300 */
L_100552D9:
    eax = MEM32(ebp + 0x8); /* 0x100552D9: mov eax, dword ptr [ebp + 8] */
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x100552DC: mov word ptr [ebp - 4], ax */
    eax = ebp + (-0x4); /* 0x100552E0: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x100552E3: push 2 */
    PUSH32(esp, eax); /* 0x100552E5: push eax */
    PUSH32(esp, edi); /* 0x100552E6: push edi */
    MEM32(ebp + 0xC) = 2; /* 0x100552E7: mov dword ptr [ebp + 0xc], 2 */
    RECOMP_CALL(sub_1002029C); /* 0x100552EE: call 0x1002029c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100552F3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100552F6: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x100552F9: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_100314AC; /* 0x100552FB: jmp 0x100314ac */
L_10055300:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x10055300: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10055304:
    eax = 0xFFFFu; /* 0x10055304: mov eax, 0xffff */
    RECOMP_BACKEDGE();
    goto L_100314B8; /* 0x10055309: jmp 0x100314b8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FEF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FEF3u);

L_1002FEF3:
    PUSH32(esp, 8); /* 0x1002FEF3: push 8 */
    PUSH32(esp, 0x1002FF90u); /* 0x1002FEF5: push 0x1002ff90 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1002FEFA: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FEFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1002FF01: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1002FF04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002FF06: setne al */
    /* test eax, eax */ /* 0x1002FF09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100558D0; /* 0x1002FF0B: je 0x100558d0 */
L_1002FF11:
    MEM32(ebp + 0x8) = esi; /* 0x1002FF11: mov dword ptr [ebp + 8], esi */
    PUSH32(esp, esi); /* 0x1002FF14: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x1002FF15: call 0x1001427c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1002FF1A: mov edi, eax */
    PUSH32(esp, esi); /* 0x1002FF1C: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1002FF1D: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FF22: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002FF23: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002FF24: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1002FF28: push esi */
    RECOMP_CALL(sub_1001428F); /* 0x1002FF29: call 0x1001428f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FF2E: pop ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFCFu; /* 0x1002FF2F: and dword ptr [esi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1002FF33: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FFB4; /* 0x1002FF36: je 0x1002ffb4 */
L_1002FF38:
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1002FF38: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FFB4; /* 0x1002FF3B: je 0x1002ffb4 */
L_1002FF3D:
    eax = edi; /* 0x1002FF3D: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002FF3F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x1002FF42: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1002FF44: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1002FF47: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1002FF47: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1002FF4A: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
L_1002FF51:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x1002FF51: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x1002FF55: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1002FF57: mov byte ptr [ecx + 4], al */
    eax = MEM32(esi + 0xC); /* 0x1002FF5A: mov eax, dword ptr [esi + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002FF5D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1002FF67; /* 0x1002FF5F: jns 0x1002ff67 */
L_1002FF61:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1002FF61: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1002FF64: mov dword ptr [esi + 0xc], eax */
L_1002FF67:
    PUSH32(esp, 0); /* 0x1002FF67: push 0 */
    PUSH32(esp, 0); /* 0x1002FF69: push 0 */
    PUSH32(esp, edi); /* 0x1002FF6B: push edi */
    RECOMP_CALL(sub_1002F910); /* 0x1002FF6C: call 0x1002f910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002FF71: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1002FF74: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100558E5; /* 0x1002FF77: je 0x100558e5 */
L_1002FF7D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1002FF7D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1002FFAC); /* 0x1002FF84: call 0x1002ffac */
    RECOMP_FLAGS_IN();
L_1002FF89:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002FF89: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FF8E: ret  */
L_1002FFB4:
    ecx = 0x100DF520u; /* 0x1002FFB4: mov ecx, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_1002FF51; /* 0x1002FFB9: jmp 0x1002ff51 */
L_100558D0:
    RECOMP_CALL(sub_1001177D); /* 0x100558D0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100558D5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100558DB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002FF89; /* 0x100558E0: jmp 0x1002ff89 */
L_100558E5:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x100558E5: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002FF7D; /* 0x100558E9: jmp 0x1002ff7d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002FFAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FFACu);

L_1002FFAC:
    PUSH32(esp, esi); /* 0x1002FFAC: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1002FFAD: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002FFB2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FFB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002FFBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002FFBBu);

L_1002FFBB:
    PUSH32(esp, ebp); /* 0x1002FFBB: push ebp */
    ebp = esp; /* 0x1002FFBC: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1002FFBE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1002FFC1: push ebx */
    PUSH32(esp, esi); /* 0x1002FFC2: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1002FFC3: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1002FFC6: push edi */
    /* test esi, esi */ /* 0x1002FFC7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005624B; /* 0x1002FFC9: je 0x1005624b */
L_1002FFCF:
    /* test ecx, ecx */ /* 0x1002FFCF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030025; /* 0x1002FFD1: je 0x10030025 */
L_1002FFD3:
    eax = MEM32(ebp + 0xC); /* 0x1002FFD3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1002FFD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030025; /* 0x1002FFD8: je 0x10030025 */
L_1002FFDA:
    ebx = MEM32(ebp + 0x10); /* 0x1002FFDA: mov ebx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1002FFDD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002FFE9; /* 0x1002FFDF: je 0x1002ffe9 */
L_1002FFE1:
    /* test ebx, ebx */ /* 0x1002FFE1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056261; /* 0x1002FFE3: je 0x10056261 */
L_1002FFE9:
    edx = ecx; /* 0x1002FFE9: mov edx, ecx */
    edi = eax; /* 0x1002FFEB: mov edi, eax */
L_1002FFED:
    /* cmp MEM8(edx), 0 */ /* 0x1002FFED: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FFF6; /* 0x1002FFF0: je 0x1002fff6 */
L_1002FFF2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002FFF2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002FFF3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002FFED; /* 0x1002FFF4: jne 0x1002ffed */
L_1002FFF6:
    /* test edi, edi */ /* 0x1002FFF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056261; /* 0x1002FFF8: je 0x10056261 */
L_1002FFFE:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1002FFFE: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005627A; /* 0x10030001: jne 0x1005627a */
L_10030007:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x10030007: sub edx, ebx */
    _flag_k = FK_CMP;
L_10030009:
    SET_LO8(eax, MEM8(ebx)); /* 0x10030009: mov al, byte ptr [ebx] */
    MEM8(edx + ebx) = (uint8_t)(LO8(eax)); /* 0x1003000B: mov byte ptr [edx + ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1003000E: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1003000F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030016; /* 0x10030011: je 0x10030016 */
L_10030013:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10030013: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10030009; /* 0x10030014: jne 0x10030009 */
L_10030016:
    /* test edi, edi */ /* 0x10030016: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100562A0; /* 0x10030018: je 0x100562a0 */
L_1003001E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003001E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10030020:
    edi = POP32_VAL(esp); /* 0x10030020: pop edi */
    esi = POP32_VAL(esp); /* 0x10030021: pop esi */
    ebx = POP32_VAL(esp); /* 0x10030022: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10030023: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030024: ret  */
L_10030025:
    RECOMP_CALL(sub_1001177D); /* 0x10030025: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10056269; /* 0x1003002A: jmp 0x10056269 */
L_1005624B:
    /* test ecx, ecx */ /* 0x1005624B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002FFD3; /* 0x1005624D: jne 0x1002ffd3 */
L_10056253:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x10056253: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003001E; /* 0x10056256: je 0x1003001e */
L_1005625C:
    RECOMP_BACKEDGE();
    goto L_10030025; /* 0x1005625C: jmp 0x10030025 */
L_10056261:
    MEM8(ecx) = (uint8_t)(0); /* 0x10056261: mov byte ptr [ecx], 0 */
    RECOMP_BACKEDGE();
    goto L_10030025; /* 0x10056264: jmp 0x10030025 */
L_10056269:
    PUSH32(esp, 0x16u); /* 0x10056269: push 0x16 */
L_1005626B:
    esi = POP32_VAL(esp); /* 0x1005626B: pop esi */
    MEM32(eax) = esi; /* 0x1005626C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005626E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10056273: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030020; /* 0x10056275: jmp 0x10030020 */
L_1005627A:
    /* test esi, esi */ /* 0x1005627A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056298; /* 0x1005627C: je 0x10056298 */
L_1005627E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x1005627E: sub ebx, edx */
    _flag_k = FK_CMP;
L_10056280:
    SET_LO8(eax, MEM8(ebx + edx)); /* 0x10056280: mov al, byte ptr [ebx + edx] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x10056283: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10056285: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x10056286: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056290; /* 0x10056288: je 0x10056290 */
L_1005628A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005628A: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10056290; /* 0x1005628B: je 0x10056290 */
L_1005628D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005628D: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10056280; /* 0x1005628E: jne 0x10056280 */
L_10056290:
    /* test esi, esi */ /* 0x10056290: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030016; /* 0x10056292: jne 0x10030016 */
L_10056298:
    MEM8(edx) = (uint8_t)(0); /* 0x10056298: mov byte ptr [edx], 0 */
    RECOMP_BACKEDGE();
    goto L_10030016; /* 0x1005629B: jmp 0x10030016 */
L_100562A0:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100562A0: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100562B5; /* 0x100562A3: jne 0x100562b5 */
L_100562A5:
    eax = MEM32(ebp + 0xC); /* 0x100562A5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x50u); /* 0x100562A8: push 0x50 */
    MEM8(ecx + eax + (-0x1)) = (uint8_t)(0); /* 0x100562AA: mov byte ptr [ecx + eax - 1], 0 */
    eax = POP32_VAL(esp); /* 0x100562AF: pop eax */
    RECOMP_BACKEDGE();
    goto L_10030020; /* 0x100562B0: jmp 0x10030020 */
L_100562B5:
    MEM8(ecx) = (uint8_t)(0); /* 0x100562B5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x100562B8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x100562BD: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1005626B; /* 0x100562BF: jmp 0x1005626b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003008C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003008Cu);

L_1003008C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100300F1; /* 0x1003008C: ja 0x100300f1 */
L_1003008E:
    PUSH32(esp, 0x745F7261u); /* 0x1003008E: push 0x745f7261 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x60))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x60)) = (uint8_t)(MEM8(eax + (-0x60)) + HI8(ecx)); /* 0x10030093: add byte ptr [eax - 0x60], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x10030096: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(ecx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10030098: adc cl, ch */
      SET_LO8(ecx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1003009A: pop es */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x1003009B: movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_ITAIL(0x1003009Cu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_100300F1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100300A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100300A0u);

L_100300A0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1003010A; /* 0x100300A0: jae 0x1003010a */
L_100300A2:
    /* outsd: no port I/O under Win32 */ /* 0x100300A2: outsd dx, dword ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10030119; /* 0x100300A3: jb 0x10030119 */
L_100300A5:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100300A5: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100300A8: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x100300A9: sub esp, 0x78 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100300AC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100300B1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100300B3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100300B6: push ebx */
    PUSH32(esp, esi); /* 0x100300B7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100300B8: mov esi, dword ptr [ebp + 8] */
    SET_LO8(ebx, 1); /* 0x100300BB: mov bl, 1 */
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(ebx)); /* 0x100300BD: mov byte ptr [ebp - 0x15], bl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100300C0: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x100300C3: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x100300C7: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(LO8(ebx)); /* 0x100300CE: mov byte ptr [0x100e0664], bl */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100300D4: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100301CA; /* 0x100300D8: jne 0x100301ca */
L_100300DE:
    ecx = MEM32(0x100E02F0); /* 0x100300DE: mov ecx, dword ptr [0x100e02f0] */
    PUSH32(esp, edi); /* 0x100300E4: push edi */
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
L_1003010A:
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10030119:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
L_100301CA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100300A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100300A6u);

L_100300A6:
    PUSH32(esp, ebp); /* 0x100300A6: push ebp */
    ebp = esp; /* 0x100300A7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x100300A9: sub esp, 0x78 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100300AC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100300B1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100300B3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100300B6: push ebx */
    PUSH32(esp, esi); /* 0x100300B7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100300B8: mov esi, dword ptr [ebp + 8] */
    SET_LO8(ebx, 1); /* 0x100300BB: mov bl, 1 */
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(ebx)); /* 0x100300BD: mov byte ptr [ebp - 0x15], bl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100300C0: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x100300C3: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x100300C7: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(LO8(ebx)); /* 0x100300CE: mov byte ptr [0x100e0664], bl */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100300D4: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100301CA; /* 0x100300D8: jne 0x100301ca */
L_100300DE:
    ecx = MEM32(0x100E02F0); /* 0x100300DE: mov ecx, dword ptr [0x100e02f0] */
    PUSH32(esp, edi); /* 0x100300E4: push edi */
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
L_100301CA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100301E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100301E3u);

L_100301E3:
    PUSH32(esp, ebp); /* 0x100301E3: push ebp */
    ebp = esp; /* 0x100301E4: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x100301E6: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x100301EB: sub esp, 0xac */
    _flag_k = FK_CMP;
    /* cmp MEM8(eax), 0x3Fu */ /* 0x100301F1: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D417; /* 0x100301F4: jne 0x1005d417 */
L_100301FA:
    /* cmp MEM8(eax + 0x1), 0x24u */ /* 0x100301FA: cmp byte ptr [eax + 1], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D417; /* 0x100301FE: jne 0x1005d417 */
L_10030204:
    ecx = MEM32(0x100E0660); /* 0x10030204: mov ecx, dword ptr [0x100e0660] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1003020A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x54)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x54)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) | 0xFFFFFFFFu; /* 0x1003020D: or dword ptr [ebp - 0x54], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x80)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x80)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) | 0xFFFFFFFFu; /* 0x10030211: or dword ptr [ebp - 0x80], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xAC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xAC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xAC)) = MEM32(ebp + (-0xAC)) | 0xFFFFFFFFu; /* 0x10030215: or dword ptr [ebp - 0xac], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1003021C: push ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1003021D: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030220: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x10030222: push esi */
    esi = MEM32(0x100E02E8); /* 0x10030223: mov esi, dword ptr [0x100e02e8] */
    ecx = ebp + (-0x54); /* 0x10030229: lea ecx, [ebp - 0x54] */
    MEM32(0x100E02E8) = ecx; /* 0x1003022C: mov dword ptr [0x100e02e8], ecx */
    ecx = ebp + (-0x80); /* 0x10030232: lea ecx, [ebp - 0x80] */
    PUSH32(esp, edi); /* 0x10030235: push edi */
    edi = MEM32(0x100E02EC); /* 0x10030236: mov edi, dword ptr [0x100e02ec] */
    MEM32(0x100E02EC) = ecx; /* 0x1003023C: mov dword ptr [0x100e02ec], ecx */
    ecx = ebp + (-0xAC); /* 0x10030242: lea ecx, [ebp - 0xac] */
    MEM32(0x100E02F0) = eax; /* 0x10030248: mov dword ptr [0x100e02f0], eax */
    MEM32(0x100E0660) = ecx; /* 0x1003024D: mov dword ptr [0x100e0660], ecx */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x10030253: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x10030256: mov byte ptr [ebp - 1], bl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D3D5; /* 0x10030259: je 0x1005d3d5 */
L_1003025F:
    PUSH32(esp, 1); /* 0x1003025F: push 1 */
    eax = ebp + (-0x18); /* 0x10030261: lea eax, [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x10030264: push 1 */
    PUSH32(esp, eax); /* 0x10030266: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x10030267: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
L_1003026C:
    ecx = MEM32(eax); /* 0x1003026C: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1003026E: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x4); /* 0x10030271: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10030274: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10030277: mov dword ptr [ebp - 0xc], ecx */
    /* test ecx, ecx */ /* 0x1003027A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D3F2; /* 0x1003027C: je 0x1005d3f2 */
L_10030282:
    /* test LO8(ebx), LO8(ebx) */ /* 0x10030282: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100302DD; /* 0x10030284: jne 0x100302dd */
L_10030286:
    eax = ebp + (-0x20); /* 0x10030286: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10030289: push eax */
    RECOMP_CALL(sub_100300A6); /* 0x1003028A: call 0x100300a6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003028F: pop ecx */
    PUSH32(esp, eax); /* 0x10030290: push eax */
    eax = ebp + (-0x18); /* 0x10030291: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x10030294: push eax */
    PUSH32(esp, 0x3Cu); /* 0x10030295: push 0x3c */
    ecx = ebp + (-0x28); /* 0x10030297: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1002A173); /* 0x1003029A: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003029F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x100302A1: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100302A6: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100302A9: push eax */
    ecx = ebp + (-0xC); /* 0x100302AA: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x100302AD: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x100302B2: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x100302B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100302C6; /* 0x100302B7: je 0x100302c6 */
L_100302B9:
    eax = MEM32(ecx); /* 0x100302B9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x100302BB: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Eu */ /* 0x100302BE: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100309F9; /* 0x100302C0: je 0x100309f9 */
L_100302C6:
    PUSH32(esp, 0x3Eu); /* 0x100302C6: push 0x3e */
    ecx = ebp + (-0xC); /* 0x100302C8: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A1C1); /* 0x100302CB: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x100302D0: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D3FE; /* 0x100302D4: jne 0x1005d3fe */
L_100302DA:
    ecx = MEM32(ebp + (-0xC)); /* 0x100302DA: mov ecx, dword ptr [ebp - 0xc] */
L_100302DD:
    eax = MEM32(ebp + (-0x10)); /* 0x100302DD: mov eax, dword ptr [ebp - 0x10] */
    MEM32(0x100E0660) = eax; /* 0x100302E0: mov dword ptr [0x100e0660], eax */
    eax = MEM32(ebp + 0x8); /* 0x100302E5: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E02EC) = edi; /* 0x100302E8: mov dword ptr [0x100e02ec], edi */
    MEM32(0x100E02E8) = esi; /* 0x100302EE: mov dword ptr [0x100e02e8], esi */
    edi = POP32_VAL(esp); /* 0x100302F4: pop edi */
    MEM32(eax) = ecx; /* 0x100302F5: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x100302F7: mov ecx, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x100302FA: pop esi */
    MEM32(eax + 0x4) = ecx; /* 0x100302FB: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x100302FE: pop ebx */
L_100302FF:
    esp = ebp; /* 0x100302FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030301: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030302: ret  */
L_100309F9:
    PUSH32(esp, 0x20u); /* 0x100309F9: push 0x20 */
    ecx = ebp + (-0xC); /* 0x100309FB: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A1C1); /* 0x100309FE: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100302C6; /* 0x10030A03: jmp 0x100302c6 */
L_1005D3D5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005D3D5: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005D3D6: mov dword ptr [0x100e02f0], eax */
    eax = ebp + (-0x1); /* 0x1005D3DB: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1005D3DE: push eax */
    eax = ebp + (-0x18); /* 0x1005D3DF: lea eax, [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x1005D3E2: push 1 */
    PUSH32(esp, eax); /* 0x1005D3E4: push eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1005D3E5: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x1005D3EA: mov bl, byte ptr [ebp - 1] */
    RECOMP_BACKEDGE();
    goto L_1003026C; /* 0x1005D3ED: jmp 0x1003026c */
L_1005D3F2:
    MEM8(0x100E0304) = (uint8_t)(1); /* 0x1005D3F2: mov byte ptr [0x100e0304], 1 */
    RECOMP_BACKEDGE();
    goto L_10030282; /* 0x1005D3F9: jmp 0x10030282 */
L_1005D3FE:
    eax = MEM32(0x100E02F0); /* 0x1005D3FE: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1005D403: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100302DA; /* 0x1005D406: je 0x100302da */
L_1005D40C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005D40C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005D40D: mov dword ptr [0x100e02f0], eax */
    RECOMP_BACKEDGE();
    goto L_100302DA; /* 0x1005D412: jmp 0x100302da */
L_1005D417:
    ecx = MEM32(ebp + 0x8); /* 0x1005D417: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005D41A: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005D41C: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005D421: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_100302FF; /* 0x1005D424: jmp 0x100302ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003032B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003032Bu);

L_1003032B:
    PUSH32(esp, 5); /* 0x1003032B: push 5 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1003032D: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10030332: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030333: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003033B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003033Bu);

    goto L_1003033B;
L_10030334:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030334: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100303C6; /* 0x10030336: jmp 0x100303c6 */
L_1003033B:
    PUSH32(esp, 0x64u); /* 0x1003033B: push 0x64 */
    PUSH32(esp, 0x100303D0u); /* 0x1003033D: push 0x100303d0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10030342: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x10030347: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1003034A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030334; /* 0x1003034C: je 0x10030334 */
L_1003034E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1003034E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10030350: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 5); /* 0x10030353: push 5 */
    RECOMP_CALL(sub_100145F8); /* 0x10030355: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003035A: pop ecx */
    /* test eax, eax */ /* 0x1003035B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030334; /* 0x1003035D: je 0x10030334 */
L_1003035F:
    PUSH32(esp, 5); /* 0x1003035F: push 5 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10030361: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10030366: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x10030367: mov dword ptr [ebp - 4], edi */
    MEM32(0x100E030C) = esi; /* 0x1003036A: mov dword ptr [0x100e030c], esi */
    eax = MEM32(ebp + 0x18); /* 0x10030370: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x100E0310) = eax; /* 0x10030373: mov dword ptr [0x100e0310], eax */
    MEM32(0x100E031C) = edi; /* 0x10030378: mov dword ptr [0x100e031c], edi */
    MEM32(0x100E0314) = edi; /* 0x1003037E: mov dword ptr [0x100e0314], edi */
    MEM32(0x100E0318) = edi; /* 0x10030384: mov dword ptr [0x100e0318], edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1003038A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1003038D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030390: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030393: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030396: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x74); /* 0x10030399: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_10022B64); /* 0x1003039C: call 0x10022b64 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x100303A1: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_10022E64); /* 0x100303A4: call 0x10022e64 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100303A9: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100303AB: mov dword ptr [ebp - 0x1c], esi */
    ecx = 0x100E030Cu; /* 0x100303AE: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_100233A5); /* 0x100303B3: call 0x100233a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100303B8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1003032B); /* 0x100303BF: call 0x1003032b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100303C4: mov eax, esi */
L_100303C6:
    RECOMP_CALL(sub_1000EDC3); /* 0x100303C6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100303CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_10030438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030438u);

    goto L_10030438;
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030438:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100304A8; /* 0x10030438: jne 0x100304a8 */
L_1003043A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100304A5; /* 0x1003043A: jae 0x100304a5 */
L_1003043C:
    /* outsb: no port I/O under Win32 */ /* 0x1003043C: outsb dx, byte ptr [si] */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) & LO8(eax)); /* 0x1003043E: and byte ptr fs:[eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304A5:
    { uint32_t _aa = LO8(ecx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100304A5: adc cl, ch */
      SET_LO8(ecx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x100304A7: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    RECOMP_ITAIL(0x100304A9u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100304A8:
    void_lift_trap(0x100304A8u, "sti ");
    RECOMP_ITAIL(0x100304A9u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030454(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030454u);

    goto L_10030454;
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030454:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x8B2C6A00u); /* 0x10030454: imul ebp, dword ptr [esi + 0x74], 0x8b2c6a00 */
    goto L_1003045B; /* falls through past a gap */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    goto L_1003045C; /* falls through past a gap */
L_1003045B:
    void_lift_trap(0x1003045Bu, "into ");
L_1003045C:
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003047C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003047Cu);

    goto L_1003047C;
L_100232F9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A260:
    /* cmp eax, 0x46u */ /* 0x1002A260: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002A2BC; /* 0x1002A263: jge 0x1002a2bc */
L_1002A265:
    /* test eax, eax */ /* 0x1002A265: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A2A6; /* 0x1002A267: je 0x1002a2a6 */
L_1002A269:
    /* cmp eax, 0x24u */ /* 0x1002A269: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A284; /* 0x1002A26C: je 0x1002a284 */
L_1002A26E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBCu; /* 0x1002A26E: add eax, -0x44 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1002A271: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002A2FF; /* 0x1002A274: ja 0x1002a2ff */
L_1002A27A:
    PUSH32(esp, 0x1002A3D0u); /* 0x1002A27A: push 0x1002a3d0 */
    goto L_1003007C; /* 0x1002A27F: jmp 0x1003007c */
L_1002A284:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A284: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x1C); /* 0x1002A287: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A28A: push eax */
    RECOMP_CALL(sub_1002326B); /* 0x1002A28B: call 0x1002326b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002A290: push eax */
    PUSH32(esp, 0x1002A3ECu); /* 0x1002A291: push 0x1002a3ec */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A296: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030A83); /* 0x1002A299: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002A29E: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1002A473; /* 0x1002A2A1: jmp 0x1002a473 */
L_1002A2A6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002A2A6: dec ecx */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A2A7: mov dword ptr [0x100e02f0], ecx */
    ecx = ebp + (-0xC); /* 0x1002A2AD: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x1002A2B0: push 1 */
    RECOMP_CALL(sub_10023A53); /* 0x1002A2B2: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F9; /* 0x1002A2B7: jmp 0x100232f9 */
L_1002A2BC:
    PUSH32(esp, 0x1002A3D8u); /* 0x1002A2BC: push 0x1002a3d8 */
    goto L_1003007C; /* 0x1002A2C1: jmp 0x1003007c */
L_1002A2FF:
    PUSH32(esp, 0x1002A3F4u); /* 0x1002A2FF: push 0x1002a3f4 */
    goto L_1003007C; /* 0x1002A304: jmp 0x1003007c */
L_1002A473:
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_1003007C:
    ecx = ebp + (-0xC); /* 0x1003007C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003007F: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F9; /* 0x10030084: jmp 0x100232f9 */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_1003047C:
    void_lift_trap(0x1003047Cu, "bound ebp, qword ptr [edi + 0x6f]");
    void_lift_trap(0x1003047Fu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + (-0x72F0B308))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x72F0B308)) = (uint8_t)(MEM8(ebx + (-0x72F0B308)) + LO8(eax)); /* 0x10030480: add byte ptr [ebx - 0x72f0b308], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(eax) = (uint16_t)(_seg_es); /* 0x10030486: mov word ptr [eax], es */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10030488: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x47u */ /* 0x1003048A: cmp eax, 0x47 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002A260; /* 0x1003048D: jle 0x1002a260 */
L_10030493:
    /* cmp eax, 0x49u */ /* 0x10030493: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1003050C; /* 0x10030496: jle 0x1003050c */
L_10030498:
    /* cmp eax, 0x4Bu */ /* 0x10030498: cmp eax, 0x4b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A2FF; /* 0x1003049B: jg 0x1002a2ff */
L_100304A1:
    PUSH32(esp, 0x100304ACu); /* 0x100304A1: push 0x100304ac */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x100304A6: jmp 0x1003007c */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
L_1003050C:
    PUSH32(esp, 0x10030528u); /* 0x1003050C: push 0x10030528 */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x10030511: jmp 0x1003007c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100304AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100304ACu);

    goto L_100304AC;
L_100300E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x100300E5: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100300E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300E9: je 0x100301c9 */
L_100300EF:
    /* cmp LO8(eax), 0x40u */ /* 0x100300EF: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301C9; /* 0x100300F1: je 0x100301c9 */
L_100300F7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x100300F7: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ebx), LO8(ebx) */ /* 0x100300F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030442; /* 0x100300FB: je 0x10030442 */
L_10030101:
    MEM8(ebp + (-0x15)) = (uint8_t)(HI8(ebx)); /* 0x10030101: mov byte ptr [ebp - 0x15], bh */
L_10030104:
    edx = (int32_t)(int8_t)LO8(eax); /* 0x10030104: movsx edx, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x10030107: sub edx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp edx, 9 */ /* 0x1003010A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005D018; /* 0x1003010D: jbe 0x1005d018 */
L_10030113:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10030113: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10030117: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0xFFFF0000u; /* 0x10030119: and dword ptr [ebp - 0x1c], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030120: mov edi, ecx */
    /* cmp LO8(eax), 0x24u */ /* 0x10030122: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A08; /* 0x10030124: je 0x10030a08 */
L_1003012A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1003012A: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x58u */ /* 0x1003012C: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100304B4; /* 0x1003012E: je 0x100304b4 */
L_10030134:
    /* cmp LO8(eax), 0x24u */ /* 0x10030134: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030A16; /* 0x10030136: je 0x10030a16 */
L_1003013C:
    /* cmp LO8(eax), 0x3Fu */ /* 0x1003013C: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D069; /* 0x1003013E: je 0x1005d069 */
L_10030144:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x10030144: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x10030148: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFF0000u; /* 0x1003014B: and dword ptr [ebp - 0x34], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10030152: push eax */
    eax = ebp + (-0x68); /* 0x10030153: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10030156: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x10030157: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003015C: pop ecx */
L_1003015D:
    ecx = POP32_VAL(esp); /* 0x1003015D: pop ecx */
    ecx = eax; /* 0x1003015E: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10030160: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10030162: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030165: mov eax, dword ptr [ecx + 4] */
L_10030168:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10030168: mov dword ptr [ebp - 0x1c], eax */
L_1003016B:
    ecx = MEM32(0x100E02F0); /* 0x1003016B: mov ecx, dword ptr [0x100e02f0] */
    eax = ecx; /* 0x10030171: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10030173: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x10030175: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030195; /* 0x10030178: jle 0x10030195 */
L_1003017A:
    eax = MEM32(0x100E0660); /* 0x1003017A: mov eax, dword ptr [0x100e0660] */
    /* cmp MEM32(eax), 9 */ /* 0x1003017F: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030195; /* 0x10030182: je 0x10030195 */
L_10030184:
    ecx = ebp + (-0x20); /* 0x10030184: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x10030187: push ecx */
    ecx = eax; /* 0x10030188: mov ecx, eax */
    RECOMP_CALL(sub_100230C2); /* 0x1003018A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1003018F: mov ecx, dword ptr [0x100e02f0] */
L_10030195:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10030195: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100301BC; /* 0x10030199: je 0x100301bc */
L_1003019B:
    /* test HI8(ebx), HI8(ebx) */ /* 0x1003019B: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030458; /* 0x1003019D: jne 0x10030458 */
L_100301A3:
    eax = ebp + (-0x20); /* 0x100301A3: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x100301A6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100301A8: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100301A9: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100301AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D12F; /* 0x100301B0: jne 0x1005d12f */
L_100301B6:
    ecx = MEM32(0x100E02F0); /* 0x100301B6: mov ecx, dword ptr [0x100e02f0] */
L_100301BC:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x100301BC: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, MEM8(ebp + (-0x15))); /* 0x100301C0: mov bl, byte ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100300E5; /* 0x100301C3: je 0x100300e5 */
L_100301C9:
    edi = POP32_VAL(esp); /* 0x100301C9: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100301CA: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100301CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100301CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100301D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E0664) = (uint8_t)(0); /* 0x100301D2: mov byte ptr [0x100e0664], 0 */
    ebx = POP32_VAL(esp); /* 0x100301D9: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100301DA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100301DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100301E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100301E2: ret  */
L_10030442:
    SET_HI8(ebx, 1); /* 0x10030442: mov bh, 1 */
    RECOMP_BACKEDGE();
    goto L_10030104; /* 0x10030444: jmp 0x10030104 */
L_10030458:
    PUSH32(esp, 0x2Cu); /* 0x10030458: push 0x2c */
    ecx = esi; /* 0x1003045A: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1003045C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301A3; /* 0x10030461: jmp 0x100301a3 */
L_100304AC:
    edi = POP32_VAL(esp); /* 0x100304AC: pop edi */
    edi = POP32_VAL(esp); /* 0x100304AD: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x41003436u); /* 0x100304AE: imul ebp, dword ptr [esi + 0x74], 0x41003436 */
    goto L_100304B5; /* falls through past a gap */
L_100304B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100304B4: inc ecx */
    _flag_k = FK_INC;
L_100304B5:
    MEM32(0x100E02F0) = ecx; /* 0x100304B5: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, 0x1002A664u); /* 0x100304BB: push 0x1002a664 */
L_100304C0:
    ecx = ebp + (-0x20); /* 0x100304C0: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022C2C); /* 0x100304C3: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003016B; /* 0x100304C8: jmp 0x1003016b */
L_10030A08:
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x10030A08: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x10030A0B: jne 0x1003012a */
L_10030A11:
    goto L_1005D03C; /* 0x10030A11: jmp 0x1005d03c */
L_10030A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030A16: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10030A17: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003013C; /* 0x10030A19: je 0x1003013c */
L_10030A1F:
    eax = ebp + (-0x78); /* 0x10030A1F: lea eax, [ebp - 0x78] */
    MEM32(0x100E02F0) = ecx; /* 0x10030A22: mov dword ptr [0x100e02f0], ecx */
    PUSH32(esp, eax); /* 0x10030A28: push eax */
    RECOMP_CALL(sub_10030C66); /* 0x10030A29: call 0x10030c66 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003015D; /* 0x10030A2E: jmp 0x1003015d */
L_1005D018:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005D018: inc ecx */
    _flag_k = FK_INC;
    eax = ebp + (-0x70); /* 0x1005D019: lea eax, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x1005D01C: push edx */
    MEM32(0x100E02F0) = ecx; /* 0x1005D01D: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(0x100E0660); /* 0x1005D023: mov ecx, dword ptr [0x100e0660] */
    PUSH32(esp, eax); /* 0x1005D029: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1005D02A: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D02F: push eax */
    ecx = esi; /* 0x1005D030: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D032: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D037: jmp 0x100301b6 */
L_1005D03C:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x1005D03C: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), 0x57u */ /* 0x1005D03F: cmp al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D053; /* 0x1005D041: jne 0x1005d053 */
L_1005D043:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1005D043: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D045: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D048: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1003012A; /* 0x1005D04E: jmp 0x1003012a */
L_1005D053:
    /* cmp LO8(eax), 0x56u */ /* 0x1005D053: cmp al, 0x56 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x56u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1003012A; /* 0x1005D055: jne 0x1003012a */
L_1005D05B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1005D05B: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005D05E: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_100301BC; /* 0x1005D064: jmp 0x100301bc */
L_1005D069:
    eax = ebp + (-0x40); /* 0x1005D069: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D06C: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D06D: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D072: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D07C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0EC; /* 0x1005D07D: je 0x1005d0ec */
L_1005D07F:
    PUSH32(esp, 0x10u); /* 0x1005D07F: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D081: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D084: push eax */
    ecx = ebp + (-0x40); /* 0x1005D085: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D088: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D08D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D090: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D091: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D096: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D097: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D09D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D09E: pop ecx */
    /* test eax, eax */ /* 0x1005D09F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D0A9; /* 0x1005D0A1: je 0x1005d0a9 */
L_1005D0A3:
    PUSH32(esp, eax); /* 0x1005D0A3: push eax */
    RECOMP_BACKEDGE();
    goto L_100304C0; /* 0x1005D0A4: jmp 0x100304c0 */
L_1005D0A9:
    eax = ebp + (-0x40); /* 0x1005D0A9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0AC: push eax */
    eax = ebp + (-0x48); /* 0x1005D0AD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1005D0B0: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0B1: push 0x10062724 */
    ecx = ebp + (-0x58); /* 0x1005D0B6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0B9: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D0BE: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D0C0: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1005D0C5: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x30); /* 0x1005D0C8: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005D0CB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1005D0CE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D0D1: push 0x100626e8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D0D6: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D0D9: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1005D0DE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D0E1: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1005D0E4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D0E7: jmp 0x10030168 */
L_1005D0EC:
    eax = ebp + (-0x40); /* 0x1005D0EC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1005D0EF: push eax */
    eax = ebp + (-0x50); /* 0x1005D0F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1005D0F3: push eax */
    PUSH32(esp, 0x10062724u); /* 0x1005D0F4: push 0x10062724 */
    ecx = ebp + (-0x60); /* 0x1005D0F9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D0FC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D101: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D103: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x1005D108: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x1005D10B: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D10E: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1005D111: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D114: push 0x100626e8 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D119: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D11C: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1005D121: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D124: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1005D127: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_10030168; /* 0x1005D12A: jmp 0x10030168 */
L_1005D12F:
    PUSH32(esp, 0x10062738u); /* 0x1005D12F: push 0x10062738 */
    ecx = esi; /* 0x1005D134: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x1005D136: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100301B6; /* 0x1005D13B: jmp 0x100301b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100304F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100304F4u);

    goto L_100304F4;
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304F4:
    void_lift_trap(0x100304F4u, "insb byte ptr es:[edi], dx");
    /* outsd: no port I/O under Win32 */ /* 0x100304F6: outsd dx, dword ptr [esi] */
    POPAD(); /* 0x100304F7: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100304FA; /* 0x100304F8: je 0x100304fa */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030528(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030528u);

    goto L_10030528;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A410:
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
L_10030528:
    edi = POP32_VAL(esp); /* 0x10030528: pop edi */
    edi = POP32_VAL(esp); /* 0x10030529: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x5F003233u); /* 0x1003052A: imul ebp, dword ptr [esi + 0x74], 0x5f003233 */
    edi = POP32_VAL(esp); /* 0x10030531: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x00383231u); /* 0x10030532: imul ebp, dword ptr [esi + 0x74], 0x383231 */
    /* nop */ /* 0x10030539: nop  */
    /* nop */ /* 0x1003053A: nop  */
    /* nop */ /* 0x1003053B: nop  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100305A7; /* 0x1003053C: jae 0x100305a7 */
L_1003053E:
    /* outsb: no port I/O under Win32 */ /* 0x1003053E: outsb dx, byte ptr [si] */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) & LO8(eax)); /* 0x10030540: and byte ptr fs:[eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x10030558u); /* 0x10030544: push 0x10030558 */
    ecx = ebp + (-0xC); /* 0x10030549: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003054C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A410; /* 0x10030551: jmp 0x1002a410 */
L_100305A7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA1u) << 24;
    SET_LO8(eax, LO8(eax) & 0xA1u); /* 0x100305A7: and al, 0xa1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x33100DF7u; /* 0x100305A9: mov eax, 0x33100df7 */
    ecx = MEM32(ecx + 0x458BFC45); _seg_ds = MEM16(ecx + 0x458BFC45 + 4); /* 0x100305AE: lds ecx, ptr [ecx + 0x458bfc45] */
    _flag_a = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24;
    MEM8(ebx + 0x56530C4D) = (uint8_t)(MEM8(ebx + 0x56530C4D) | LO8(ecx)); /* 0x100305B4: or byte ptr [ebx + 0x56530c4d], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x100305BA: push edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x100305BB: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100305BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x100305C0: mov eax, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x100305C3: mov edi, esi */
    PUSH32(esp, eax); /* 0x100305C5: push eax */
    PUSH32(esp, esi); /* 0x100305C6: push esi */
    PUSH32(esp, esi); /* 0x100305C7: push esi */
    PUSH32(esp, esi); /* 0x100305C8: push esi */
    PUSH32(esp, esi); /* 0x100305C9: push esi */
    PUSH32(esp, ecx); /* 0x100305CA: push ecx */
    eax = ebp + (-0x20); /* 0x100305CB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100305CE: mov dword ptr [ebp - 0x1c], ecx */
    PUSH32(esp, eax); /* 0x100305D1: push eax */
    eax = ebp + (-0x10); /* 0x100305D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305D5: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x100305D6: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100305DB: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100305DD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), 4 */ /* 0x100305E0: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060EAD; /* 0x100305E3: jne 0x10060ead */
L_100305E9:
    eax = ebp + (-0x18); /* 0x100305E9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100305EC: push eax */
    eax = ebp + (-0x10); /* 0x100305ED: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305F0: push eax */
    RECOMP_CALL(sub_1001ADE5); /* 0x100305F1: call 0x1001ade5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100305F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100305F7: pop ecx */
    /* test LO8(ebx), 2 */ /* 0x100305F8: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030639; /* 0x100305FB: jne 0x10030639 */
L_100305FD:
    /* cmp eax, 1 */ /* 0x100305FD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030639; /* 0x10030600: je 0x10030639 */
L_10030602:
    /* test LO8(ebx), 1 */ /* 0x10030602: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030640; /* 0x10030605: jne 0x10030640 */
L_10030607:
    /* cmp eax, 2 */ /* 0x10030607: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030640; /* 0x1003060A: je 0x10030640 */
L_1003060C:
    esi = MEM32(ebp + (-0x18)); /* 0x1003060C: mov esi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1003060F: mov eax, dword ptr [ebp - 0x14] */
L_10030612:
    edx = MEM32(ebp + (-0x24)); /* 0x10030612: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x20)); /* 0x10030615: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x10030618: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    MEM32(edx) = edi; /* 0x1003061B: mov dword ptr [edx], edi */
    MEM32(edx + 0x4) = ecx; /* 0x1003061D: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10030620: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10030623: pop edi */
    MEM32(edx + 0x10) = esi; /* 0x10030624: mov dword ptr [edx + 0x10], esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10030627: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10030629: pop esi */
    MEM32(edx + 0x14) = eax; /* 0x1003062A: mov dword ptr [edx + 0x14], eax */
    eax = edx; /* 0x1003062D: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1003062F: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10030630: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030635: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030637: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030638: ret  */
L_10030639:
    edi = 0x80u; /* 0x10030639: mov edi, 0x80 */
    RECOMP_BACKEDGE();
    goto L_10030602; /* 0x1003063E: jmp 0x10030602 */
L_10030640:
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x10030640: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003060C; /* 0x10030646: jmp 0x1003060c */
L_10060EAD:
    edi = 0x200u; /* 0x10060EAD: mov edi, 0x200 */
    eax = esi; /* 0x10060EB2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030612; /* 0x10060EB4: jmp 0x10030612 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030530u);

    goto L_10030530;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A410:
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
L_10030530:
    edi = POP32_VAL(esp); /* 0x10030530: pop edi */
    edi = POP32_VAL(esp); /* 0x10030531: pop edi */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x00383231u); /* 0x10030532: imul ebp, dword ptr [esi + 0x74], 0x383231 */
    /* nop */ /* 0x10030539: nop  */
    /* nop */ /* 0x1003053A: nop  */
    /* nop */ /* 0x1003053B: nop  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100305A7; /* 0x1003053C: jae 0x100305a7 */
L_1003053E:
    /* outsb: no port I/O under Win32 */ /* 0x1003053E: outsb dx, byte ptr [si] */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) & LO8(eax)); /* 0x10030540: and byte ptr fs:[eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x10030558u); /* 0x10030544: push 0x10030558 */
    ecx = ebp + (-0xC); /* 0x10030549: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003054C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A410; /* 0x10030551: jmp 0x1002a410 */
L_100305A7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA1u) << 24;
    SET_LO8(eax, LO8(eax) & 0xA1u); /* 0x100305A7: and al, 0xa1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x33100DF7u; /* 0x100305A9: mov eax, 0x33100df7 */
    ecx = MEM32(ecx + 0x458BFC45); _seg_ds = MEM16(ecx + 0x458BFC45 + 4); /* 0x100305AE: lds ecx, ptr [ecx + 0x458bfc45] */
    _flag_a = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24;
    MEM8(ebx + 0x56530C4D) = (uint8_t)(MEM8(ebx + 0x56530C4D) | LO8(ecx)); /* 0x100305B4: or byte ptr [ebx + 0x56530c4d], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x100305BA: push edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x100305BB: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100305BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x100305C0: mov eax, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x100305C3: mov edi, esi */
    PUSH32(esp, eax); /* 0x100305C5: push eax */
    PUSH32(esp, esi); /* 0x100305C6: push esi */
    PUSH32(esp, esi); /* 0x100305C7: push esi */
    PUSH32(esp, esi); /* 0x100305C8: push esi */
    PUSH32(esp, esi); /* 0x100305C9: push esi */
    PUSH32(esp, ecx); /* 0x100305CA: push ecx */
    eax = ebp + (-0x20); /* 0x100305CB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100305CE: mov dword ptr [ebp - 0x1c], ecx */
    PUSH32(esp, eax); /* 0x100305D1: push eax */
    eax = ebp + (-0x10); /* 0x100305D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305D5: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x100305D6: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100305DB: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100305DD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), 4 */ /* 0x100305E0: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060EAD; /* 0x100305E3: jne 0x10060ead */
L_100305E9:
    eax = ebp + (-0x18); /* 0x100305E9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100305EC: push eax */
    eax = ebp + (-0x10); /* 0x100305ED: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305F0: push eax */
    RECOMP_CALL(sub_1001ADE5); /* 0x100305F1: call 0x1001ade5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100305F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100305F7: pop ecx */
    /* test LO8(ebx), 2 */ /* 0x100305F8: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030639; /* 0x100305FB: jne 0x10030639 */
L_100305FD:
    /* cmp eax, 1 */ /* 0x100305FD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030639; /* 0x10030600: je 0x10030639 */
L_10030602:
    /* test LO8(ebx), 1 */ /* 0x10030602: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030640; /* 0x10030605: jne 0x10030640 */
L_10030607:
    /* cmp eax, 2 */ /* 0x10030607: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030640; /* 0x1003060A: je 0x10030640 */
L_1003060C:
    esi = MEM32(ebp + (-0x18)); /* 0x1003060C: mov esi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1003060F: mov eax, dword ptr [ebp - 0x14] */
L_10030612:
    edx = MEM32(ebp + (-0x24)); /* 0x10030612: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x20)); /* 0x10030615: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x10030618: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    MEM32(edx) = edi; /* 0x1003061B: mov dword ptr [edx], edi */
    MEM32(edx + 0x4) = ecx; /* 0x1003061D: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10030620: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10030623: pop edi */
    MEM32(edx + 0x10) = esi; /* 0x10030624: mov dword ptr [edx + 0x10], esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10030627: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10030629: pop esi */
    MEM32(edx + 0x14) = eax; /* 0x1003062A: mov dword ptr [edx + 0x14], eax */
    eax = edx; /* 0x1003062D: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1003062F: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10030630: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030635: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030637: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030638: ret  */
L_10030639:
    edi = 0x80u; /* 0x10030639: mov edi, 0x80 */
    RECOMP_BACKEDGE();
    goto L_10030602; /* 0x1003063E: jmp 0x10030602 */
L_10030640:
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x10030640: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003060C; /* 0x10030646: jmp 0x1003060c */
L_10060EAD:
    edi = 0x200u; /* 0x10060EAD: mov edi, 0x200 */
    eax = esi; /* 0x10060EB2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030612; /* 0x10060EB4: jmp 0x10030612 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1003053C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003053Cu);

    goto L_1003053C;
L_100232F6:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x100232F6: mov bl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x43u; /* 0x100232F9: sub esi, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100304FA; /* 0x100232FC: je 0x100304fa */
L_10023302:
    PUSH32(esp, 2); /* 0x10023302: push 2 */
    ecx = POP32_VAL(esp); /* 0x10023304: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023305: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023307: je 0x10030408 */
L_1002330D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002330D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002330F: je 0x10030408 */
L_10023315:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10023315: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x10023317: je 0x10030408 */
L_1002331D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1002331D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x1002331F: je 0x10030408 */
L_10023325:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x10023325: sub esi, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100303EC; /* 0x10023328: je 0x100303ec */
L_1002332E:
    eax = MEM32(ebp + 0xC); /* 0x1002332E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10023331: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A7A4; /* 0x10023334: jne 0x1002a7a4 */
L_1002333A:
    eax = MEM32(ebp + 0x8); /* 0x1002333A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002333D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10023340: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10023342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10023345: mov dword ptr [eax + 4], ecx */
L_10023348:
    edi = POP32_VAL(esp); /* 0x10023348: pop edi */
    esi = POP32_VAL(esp); /* 0x10023349: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002334A: pop ebx */
    esp = ebp; /* 0x1002334B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002334D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002334E: ret  */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A313:
    esi = 0x800u; /* 0x1002A313: mov esi, 0x800 */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1002A318: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A31A: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1002A31D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100237BAu); /* 0x1002A320: push 0x100237ba */
    PUSH32(esp, eax); /* 0x1002A325: push eax */
    eax = ebp + (-0xC); /* 0x1002A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A329: push eax */
    eax = ebp + (-0x14); /* 0x1002A32A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002A32D: push eax */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A32E: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A333: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A336: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, edx */ /* 0x1002A339: test esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A34D; /* 0x1002A33B: jne 0x1002a34d */
L_1002A33D:
    PUSH32(esp, 0x10062210u); /* 0x1002A33D: push 0x10062210 */
    ecx = ebp + (-0x14); /* 0x1002A342: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A345: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1002A34A: mov edx, dword ptr [ebp - 0x10] */
L_1002A34D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1002A34D: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1002A2F2; /* 0x1002A350: jmp 0x1002a2f2 */
L_1002A35C:
    PUSH32(esp, 0x1002A3FCu); /* 0x1002A35C: push 0x1002a3fc */
    ecx = ebp + (-0xC); /* 0x1002A361: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A364: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), 2 */ /* 0x1002A369: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A36C: je 0x1002a45b */
L_1002A372:
    PUSH32(esp, 0x1002A404u); /* 0x1002A372: push 0x1002a404 */
    ecx = ebp + (-0xC); /* 0x1002A377: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A37A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A37F: jmp 0x1002a45b */
L_1002A384:
    PUSH32(esp, 0x10062740u); /* 0x1002A384: push 0x10062740 */
    ecx = ebp + (-0xC); /* 0x1002A389: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1002A38C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1002A45B; /* 0x1002A391: jmp 0x1002a45b */
L_1002A410:
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1002A41D: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100232F6; /* 0x1002A420: je 0x100232f6 */
L_1002A426:
    ecx = MEM32(ebp + 0xC); /* 0x1002A426: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1002A429: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002A42D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1002A430: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1002A432: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x1002A435: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1002A438: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1002A43B: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A313; /* 0x1002A43E: je 0x1002a313 */
L_1002A444:
    /* cmp MEM32(ecx), 0 */ /* 0x1002A444: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A45B; /* 0x1002A447: jne 0x1002a45b */
L_1002A449:
    /* test LO8(ebx), 1 */ /* 0x1002A449: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A35C; /* 0x1002A44C: jne 0x1002a35c */
L_1002A452:
    /* test LO8(ebx), 2 */ /* 0x1002A452: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002A384; /* 0x1002A455: jne 0x1002a384 */
L_1002A45B:
    PUSH32(esp, 0x1002A484u); /* 0x1002A45B: push 0x1002a484 */
    eax = ebp + (-0x1C); /* 0x1002A460: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A463: push eax */
    eax = ebp + (-0xC); /* 0x1002A464: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002A467: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A468: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x1002A46B: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002A470: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A7A4:
    PUSH32(esp, eax); /* 0x1002A7A4: push eax */
    eax = ebp + (-0x1C); /* 0x1002A7A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7A8: push eax */
    PUSH32(esp, 0x20u); /* 0x1002A7A9: push 0x20 */
    ecx = ebp + (-0x24); /* 0x1002A7AB: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1002A173); /* 0x1002A7AE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002A7B3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002A7B5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1002A7BA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A7BD: push eax */
    ecx = ebp + (-0xC); /* 0x1002A7BE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022BFB); /* 0x1002A7C1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002333A; /* 0x1002A7C6: jmp 0x1002333a */
L_100303EC:
    eax = (uint32_t)LO8(ebx); /* 0x100303EC: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x100303EF: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F2: je 0x10030408 */
L_100303F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303F6: je 0x10030408 */
L_100303F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303F8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FA: je 0x10030408 */
L_100303FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100303FC: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030408; /* 0x100303FE: je 0x10030408 */
L_10030400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10030400: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002332E; /* 0x10030402: jne 0x1002332e */
L_10030408:
    eax = ebp + (-0xC); /* 0x10030408: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1003040B: push eax */
    eax = ebp + (-0x1C); /* 0x1003040C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1003040F: push eax */
    PUSH32(esp, 0x10030438u); /* 0x10030410: push 0x10030438 */
L_10030415:
    ecx = ebp + (-0x24); /* 0x10030415: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030418: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1003041D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1003041F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10030424: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030427: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1003042A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1003042D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1002332E; /* 0x10030430: jmp 0x1002332e */
L_100304FA:
    eax = ebp + (-0xC); /* 0x100304FA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100304FD: push eax */
    eax = ebp + (-0x1C); /* 0x100304FE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10030501: push eax */
    PUSH32(esp, 0x1003053Cu); /* 0x10030502: push 0x1003053c */
    RECOMP_BACKEDGE();
    goto L_10030415; /* 0x10030507: jmp 0x10030415 */
L_1003053C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100305A7; /* 0x1003053C: jae 0x100305a7 */
L_1003053E:
    /* outsb: no port I/O under Win32 */ /* 0x1003053E: outsb dx, byte ptr [si] */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) & LO8(eax)); /* 0x10030540: and byte ptr fs:[eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x10030558u); /* 0x10030544: push 0x10030558 */
    ecx = ebp + (-0xC); /* 0x10030549: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003054C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A410; /* 0x10030551: jmp 0x1002a410 */
L_100305A7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA1u) << 24;
    SET_LO8(eax, LO8(eax) & 0xA1u); /* 0x100305A7: and al, 0xa1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x33100DF7u; /* 0x100305A9: mov eax, 0x33100df7 */
    ecx = MEM32(ecx + 0x458BFC45); _seg_ds = MEM16(ecx + 0x458BFC45 + 4); /* 0x100305AE: lds ecx, ptr [ecx + 0x458bfc45] */
    _flag_a = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x56530C4D) | LO8(ecx))) << 24;
    MEM8(ebx + 0x56530C4D) = (uint8_t)(MEM8(ebx + 0x56530C4D) | LO8(ecx)); /* 0x100305B4: or byte ptr [ebx + 0x56530c4d], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x100305BA: push edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x100305BB: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100305BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x100305C0: mov eax, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x100305C3: mov edi, esi */
    PUSH32(esp, eax); /* 0x100305C5: push eax */
    PUSH32(esp, esi); /* 0x100305C6: push esi */
    PUSH32(esp, esi); /* 0x100305C7: push esi */
    PUSH32(esp, esi); /* 0x100305C8: push esi */
    PUSH32(esp, esi); /* 0x100305C9: push esi */
    PUSH32(esp, ecx); /* 0x100305CA: push ecx */
    eax = ebp + (-0x20); /* 0x100305CB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100305CE: mov dword ptr [ebp - 0x1c], ecx */
    PUSH32(esp, eax); /* 0x100305D1: push eax */
    eax = ebp + (-0x10); /* 0x100305D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305D5: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x100305D6: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100305DB: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100305DD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), 4 */ /* 0x100305E0: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060EAD; /* 0x100305E3: jne 0x10060ead */
L_100305E9:
    eax = ebp + (-0x18); /* 0x100305E9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100305EC: push eax */
    eax = ebp + (-0x10); /* 0x100305ED: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305F0: push eax */
    RECOMP_CALL(sub_1001ADE5); /* 0x100305F1: call 0x1001ade5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100305F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100305F7: pop ecx */
    /* test LO8(ebx), 2 */ /* 0x100305F8: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030639; /* 0x100305FB: jne 0x10030639 */
L_100305FD:
    /* cmp eax, 1 */ /* 0x100305FD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030639; /* 0x10030600: je 0x10030639 */
L_10030602:
    /* test LO8(ebx), 1 */ /* 0x10030602: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030640; /* 0x10030605: jne 0x10030640 */
L_10030607:
    /* cmp eax, 2 */ /* 0x10030607: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030640; /* 0x1003060A: je 0x10030640 */
L_1003060C:
    esi = MEM32(ebp + (-0x18)); /* 0x1003060C: mov esi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1003060F: mov eax, dword ptr [ebp - 0x14] */
L_10030612:
    edx = MEM32(ebp + (-0x24)); /* 0x10030612: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x20)); /* 0x10030615: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x10030618: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    MEM32(edx) = edi; /* 0x1003061B: mov dword ptr [edx], edi */
    MEM32(edx + 0x4) = ecx; /* 0x1003061D: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10030620: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10030623: pop edi */
    MEM32(edx + 0x10) = esi; /* 0x10030624: mov dword ptr [edx + 0x10], esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10030627: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10030629: pop esi */
    MEM32(edx + 0x14) = eax; /* 0x1003062A: mov dword ptr [edx + 0x14], eax */
    eax = edx; /* 0x1003062D: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1003062F: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10030630: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030635: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030637: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030638: ret  */
L_10030639:
    edi = 0x80u; /* 0x10030639: mov edi, 0x80 */
    RECOMP_BACKEDGE();
    goto L_10030602; /* 0x1003063E: jmp 0x10030602 */
L_10030640:
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x10030640: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003060C; /* 0x10030646: jmp 0x1003060c */
L_10060EAD:
    edi = 0x200u; /* 0x10060EAD: mov edi, 0x200 */
    eax = esi; /* 0x10060EB2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030612; /* 0x10060EB4: jmp 0x10030612 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030558u);

    goto L_10030558;
L_10014852:
    PUSH32(esp, 5); /* 0x10014852: push 5 */
    goto L_1001A5BD; /* 0x10014854: jmp 0x1001a5bd */
L_10014859:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014859: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001485B: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001485E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001485F: mov dword ptr [ebp - 0x5c], eax */
    /* cmp LO8(ecx), 9 */ /* 0x10014862: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x10014865: ja 0x1002fbc9 */
L_1001486B:
    PUSH32(esp, 4); /* 0x1001486B: push 4 */
    goto L_1001AA7D; /* 0x1001486D: jmp 0x1001aa7d */
L_1001A364:
    PUSH32(esp, 2); /* 0x1001A364: push 2 */
    ecx = 0x8000u; /* 0x1001A366: mov ecx, 0x8000 */
    eax = POP32_VAL(esp); /* 0x1001A36B: pop eax */
    MEM32(ebp + (-0x70)) = ecx; /* 0x1001A36C: mov dword ptr [ebp - 0x70], ecx */
    goto L_1001A63A; /* 0x1001A36F: jmp 0x1001a63a */
L_1001A374:
    eax = ecx + (-0x31); /* 0x1001A374: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001A377: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001A379: jbe 0x1001abe8 */
L_1001A37F:
    eax = MEM32(ebp + 0x24); /* 0x1001A37F: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001A382: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001A384: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001A38A: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001A38C: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014852; /* 0x1001A38E: je 0x10014852 */
L_1001A394:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A394: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x1001A397: jne 0x1002fbc9 */
L_1001A39D:
    goto L_1001A68D; /* 0x1001A39D: jmp 0x1001a68d */
L_1001A3A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1001A3A2: sub eax, 3 */
    _flag_k = FK_CMP;
    goto L_1003058E; /* 0x1001A3A5: jmp 0x1003058e */
L_1001A3AA:
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1001A3AA: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A3D5; /* 0x1001A3AD: je 0x1001a3d5 */
L_1001A3AF:
    eax = edx + (-0x1); /* 0x1001A3AF: lea eax, [edx - 1] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1001A3B2: mov dword ptr [ebp - 0x50], eax */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1001A3B5: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x1001A3B8: sub eax, 0x2b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBA9; /* 0x1001A3BB: je 0x1002fba9 */
L_1001A3C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A3C1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A3C2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1002FBC9; /* 0x1001A3C3: jne 0x1002fbc9 */
L_1001A3C9:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu; /* 0x1001A3C9: or dword ptr [ebp - 0x6c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 7); /* 0x1001A3CD: push 7 */
    eax = POP32_VAL(esp); /* 0x1001A3CF: pop eax */
    goto L_1001A63A; /* 0x1001A3D0: jmp 0x1001a63a */
L_1001A3D5:
    PUSH32(esp, 0xAu); /* 0x1001A3D5: push 0xa */
    eax = POP32_VAL(esp); /* 0x1001A3D7: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001A3D8: dec edx */
    _flag_k = FK_DEC;
    goto L_1002FBDC; /* 0x1001A3D9: jmp 0x1002fbdc */
L_1001A3DE:
    SET_LO8(ecx, MEM8(ebp + (-0x55))); /* 0x1001A3DE: mov cl, byte ptr [ebp - 0x55] */
    esi = 0x1451u; /* 0x1001A3E1: mov esi, 0x1451 */
    goto L_1001C2F8; /* 0x1001A3E6: jmp 0x1001c2f8 */
L_1001A3EB:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A3EB: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A3ED: inc edx */
    _flag_k = FK_INC;
    goto L_1001C2F8; /* 0x1001A3EE: jmp 0x1001c2f8 */
L_1001A3F3:
    SET_LO8(eax, MEM8(ebp + (-0x9))); /* 0x1001A3F3: mov al, byte ptr [ebp - 9] */
    /* cmp LO8(eax), 5 */ /* 0x1001A3F6: cmp al, 5 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001A3FF; /* 0x1001A3F8: jl 0x1001a3ff */
L_1001A3FA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1001A3FA: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x9)) = (uint8_t)(LO8(eax)); /* 0x1001A3FC: mov byte ptr [ebp - 9], al */
L_1001A3FF:
    ecx = MEM32(ebp + (-0x54)); /* 0x1001A3FF: mov ecx, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001A402: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x18u); /* 0x1001A403: push 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001A405: inc ecx */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x1001A406: pop eax */
    MEM32(ebp + (-0x54)) = ecx; /* 0x1001A407: mov dword ptr [ebp - 0x54], ecx */
    goto L_1001A70E; /* 0x1001A40A: jmp 0x1001a70e */
L_1001A40F:
    MEM32(ebp + (-0x34)) = ebx; /* 0x1001A40F: mov dword ptr [ebp - 0x34], ebx */
    goto L_1001A54F; /* 0x1001A412: jmp 0x1001a54f */
L_1001A417:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A417: inc esi */
    _flag_k = FK_INC;
    /* test MEM32(ebp + (-0x34)), 0x7FFFFFFFu */ /* 0x1001A418: test dword ptr [ebp - 0x34], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A41F: mov dword ptr [ebp - 0x6c], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A422: jne 0x1001a83d */
L_1001A428:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1001A428: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A42C: jne 0x1001a83d */
L_1001A432:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1001A432: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A83D; /* 0x1001A436: jne 0x1001a83d */
L_1001A43C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A43C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x1001A43E: mov word ptr [ebp - 0x32], ax */
    goto L_1001A555; /* 0x1001A442: jmp 0x1001a555 */
L_1001A447:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A447: inc esi */
    _flag_k = FK_INC;
    /* test MEM32(ecx + 0x8), 0x7FFFFFFFu */ /* 0x1001A448: test dword ptr [ecx + 8], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A44F: mov dword ptr [ebp - 0x6c], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A452: jne 0x1001a846 */
L_1001A458:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1001A458: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A45B: jne 0x1001a846 */
L_1001A461:
    /* cmp MEM32(ecx), ebx */ /* 0x1001A461: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A846; /* 0x1001A463: jne 0x1001a846 */
L_1001A469:
    RECOMP_BACKEDGE();
    goto L_1001A40F; /* 0x1001A469: jmp 0x1001a40f */
L_1001A46B:
    eax = 0xFFFFu; /* 0x1001A46B: mov eax, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001A470: add esi, eax */
    _flag_k = FK_ADD;
    /* test LO16(esi), LO16(esi) */ /* 0x1001A472: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB2F; /* 0x1001A475: jns 0x1001ab2f */
L_1001A47B:
    ebx = MEM32(ebp + (-0x7C)); /* 0x1001A47B: mov ebx, dword ptr [ebp - 0x7c] */
    eax = esi; /* 0x1001A47E: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001A480: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x1001A482: movzx eax, ax */
    MEM32(ebp + (-0x68)) = eax; /* 0x1001A485: mov dword ptr [ebp - 0x68], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001A488: add esi, eax */
    _flag_k = FK_ADD;
L_1001A48A:
    /* test MEM8(ebp + (-0x2C)), 1 */ /* 0x1001A48A: test byte ptr [ebp - 0x2c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A491; /* 0x1001A48E: je 0x1001a491 */
L_1001A490:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1001A490: inc ebx */
    _flag_k = FK_INC;
L_1001A491:
    ecx = MEM32(ebp + (-0x28)); /* 0x1001A491: mov ecx, dword ptr [ebp - 0x28] */
    eax = edx; /* 0x1001A494: mov eax, edx */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x1001A496: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x1001A496: shl eax, 0x1f */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A499: mov dword ptr [ebp - 0x50], ecx */
    if (1u) _cf = (((MEM32(ebp + (-0x50))) >> 0) & 1u); /* 0x1001A49C: shr dword ptr [ebp - 0x50], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x50)) >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) >> 1u; /* 0x1001A49C: shr dword ptr [ebp - 0x50], 1 */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x50)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x50)) | eax));
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) | eax; /* 0x1001A49F: or dword ptr [ebp - 0x50], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x50)); /* 0x1001A4A2: mov eax, dword ptr [ebp - 0x50] */
    if (31u) _cf = (((ecx) >> 1) & 1u); /* 0x1001A4A5: shl ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 31u; /* 0x1001A4A5: shl ecx, 0x1f */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1001A4A8: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1001A4A8: shr edi, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1001A4AA: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1001A4AA: shr edx, 1 */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1001A4AC: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) - 1; /* 0x1001A4AE: dec dword ptr [ebp - 0x68] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = edx; /* 0x1001A4B1: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1001A4B4: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1001A4B7: mov dword ptr [ebp - 0x2c], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1001A48A; /* 0x1001A4BA: jne 0x1001a48a */
L_1001A4BC:
    PUSH32(esp, 0); /* 0x1001A4BC: push 0 */
    /* test ebx, ebx */ /* 0x1001A4BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = edx; /* 0x1001A4C0: mov dword ptr [ebp - 0x50], edx */
    ebx = POP32_VAL(esp); /* 0x1001A4C3: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001AB2F; /* 0x1001A4C4: je 0x1001ab2f */
L_1001A4CA:
    SET_LO16(eax, LO16(edi)); /* 0x1001A4CA: mov ax, di */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001A4CD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001A4CF: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO16(eax) | LO16(edi))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edi))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edi)); /* 0x1001A4D0: or ax, di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x1001A4D3: mov word ptr [ebp - 0x2c], ax */
    edi = MEM32(ebp + (-0x2C)); /* 0x1001A4D7: mov edi, dword ptr [ebp - 0x2c] */
    goto L_1001AB33; /* 0x1001A4DA: jmp 0x1001ab33 */
L_1001A4DF:
    eax = MEM32(ebp + (-0x26)); /* 0x1001A4DF: mov eax, dword ptr [ebp - 0x26] */
    MEM32(ebp + (-0x2A)) = ebx; /* 0x1001A4E2: mov dword ptr [ebp - 0x2a], ebx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001A4E5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A50A; /* 0x1001A4E8: jne 0x1001a50a */
L_1001A4EA:
    SET_LO16(eax, MEM16(ebp + (-0x22))); /* 0x1001A4EA: mov ax, word ptr [ebp - 0x22] */
    ecx = 0xFFFFu; /* 0x1001A4EE: mov ecx, 0xffff */
    MEM32(ebp + (-0x26)) = ebx; /* 0x1001A4F3: mov dword ptr [ebp - 0x26], ebx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1001A4F6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A502; /* 0x1001A4F9: jne 0x1001a502 */
L_1001A4FB:
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(edx)); /* 0x1001A4FB: mov word ptr [ebp - 0x22], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001A4FF: inc esi */
    _flag_k = FK_INC;
    goto L_1001A50E; /* 0x1001A500: jmp 0x1001a50e */
L_1001A502:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1001A502: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(eax)); /* 0x1001A504: mov word ptr [ebp - 0x22], ax */
    goto L_1001A50E; /* 0x1001A508: jmp 0x1001a50e */
L_1001A50A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A50A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x26)) = eax; /* 0x1001A50B: mov dword ptr [ebp - 0x26], eax */
L_1001A50E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1001A50E: mov ecx, dword ptr [ebp - 0x24] */
    goto L_1001AB4E; /* 0x1001A511: jmp 0x1001ab4e */
L_1001A516:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A516: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ebx; /* 0x1001A518: mov dword ptr [ebp - 0x38], ebx */
    /* cmp MEM16(ebp + (-0x60)), LO16(eax) */ /* 0x1001A51B: cmp word ptr [ebp - 0x60], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1001A51F: mov dword ptr [ebp - 0x3c], ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001A522: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A525: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1001A526: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x1001A52B: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = eax; /* 0x1001A530: mov dword ptr [ebp - 0x34], eax */
    goto L_1001AB77; /* 0x1001A533: jmp 0x1001ab77 */
L_1001A538:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A538: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x60)), LO16(eax) */ /* 0x1001A53A: cmp word ptr [ebp - 0x60], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x60))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001A53E: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A541: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1001A542: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x7FFF8000u; /* 0x1001A547: add eax, 0x7fff8000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = eax; /* 0x1001A54C: mov dword ptr [ebp - 0x34], eax */
L_1001A54F:
    MEM32(ebp + (-0x38)) = ebx; /* 0x1001A54F: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1001A552: mov dword ptr [ebp - 0x3c], ebx */
L_1001A555:
    edx = MEM32(ebp + (-0x54)); /* 0x1001A555: mov edx, dword ptr [ebp - 0x54] */
    goto L_1001AB77; /* 0x1001A558: jmp 0x1001ab77 */
L_1001A55D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001A55D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1001A55F: mov ecx, ebx */
    eax = ebx; /* 0x1001A561: mov eax, ebx */
    esi = ebx; /* 0x1001A563: mov esi, ebx */
    edx = ebx; /* 0x1001A565: mov edx, ebx */
    ebx = edi + 0x1; /* 0x1001A567: lea ebx, [edi + 1] */
    goto L_1001A869; /* 0x1001A56A: jmp 0x1001a869 */
L_1001A56F:
    eax = 0x7FFFu; /* 0x1001A56F: mov eax, 0x7fff */
    esi = 0x80000000u; /* 0x1001A574: mov esi, 0x80000000 */
    PUSH32(esp, 2); /* 0x1001A579: push 2 */
    goto L_1001A583; /* 0x1001A57B: jmp 0x1001a583 */
L_1001A57D:
    eax = ebx; /* 0x1001A57D: mov eax, ebx */
    esi = ebx; /* 0x1001A57F: mov esi, ebx */
    PUSH32(esp, 4); /* 0x1001A581: push 4 */
L_1001A583:
    ecx = ebx; /* 0x1001A583: mov ecx, ebx */
    edx = ebx; /* 0x1001A585: mov edx, ebx */
    ebx = POP32_VAL(esp); /* 0x1001A587: pop ebx */
    goto L_1001A869; /* 0x1001A588: jmp 0x1001a869 */
L_1001A5BD:
    eax = POP32_VAL(esp); /* 0x1001A5BD: pop eax */
    goto L_1001A63A; /* 0x1001A5BE: jmp 0x1001a63a */
L_1001A63A:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A63A: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A63C: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x55)) = (uint8_t)(LO8(ecx)); /* 0x1001A63D: mov byte ptr [ebp - 0x55], cl */
    /* cmp eax, 0xBu */ /* 0x1001A640: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002FBDC; /* 0x1001A643: ja 0x1002fbdc */
L_1001A649:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1001A58D)); goto _ljump; }
L_1001A650:
    eax = ecx + (-0x31); /* 0x1001A650: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001A653: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001A655: jbe 0x1001abe8 */
L_1001A65B:
    eax = MEM32(ebp + 0x24); /* 0x1001A65B: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001A65E: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001A660: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001A666: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001A668: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014852; /* 0x1001A66A: je 0x10014852 */
L_1001A670:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1001A670: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x1001A673: sub eax, 0x2b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBB6; /* 0x1001A676: je 0x1002fbb6 */
L_1001A67C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A67C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001A67D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001A364; /* 0x1001A67E: je 0x1001a364 */
L_1001A684:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1001A684: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001A687: jne 0x1001ac51 */
L_1001A68D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A68D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A68F: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1001A690: jmp 0x1001a63a */
L_1001A692:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A692: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A694: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001A695: mov dword ptr [ebp - 0x60], eax */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001A698: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1001A69B: mov eax, dword ptr [ebp - 0x4c] */
    /* test eax, eax */ /* 0x1001A69E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A88F; /* 0x1001A6A0: jne 0x1001a88f */
L_1001A6A6:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A6A6: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B27C; /* 0x1001A6A9: je 0x1001b27c */
L_1001A6AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_1001A6D6; /* 0x1001A6AF: jl 0x1001a6d6 */
L_1001A6B1:
    esi = MEM32(ebp + (-0x54)); /* 0x1001A6B1: mov esi, dword ptr [ebp - 0x54] */
L_1001A6B4:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001A6B4: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A6CE; /* 0x1001A6B7: jg 0x1001a6ce */
L_1001A6B9:
    /* cmp eax, 0x19u */ /* 0x1001A6B9: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A6C6; /* 0x1001A6BC: jae 0x1001a6c6 */
L_1001A6BE:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001A6BE: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001A6C1: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1001A6C2: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001A6C4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1001A6C5: dec esi */
    _flag_k = FK_DEC;
L_1001A6C6:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001A6C6: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001A6C8: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A6C9: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001A6B4; /* 0x1001A6CC: jge 0x1001a6b4 */
L_1001A6CE:
    MEM32(ebp + (-0x54)) = esi; /* 0x1001A6CE: mov dword ptr [ebp - 0x54], esi */
    esi = ebx; /* 0x1001A6D1: mov esi, ebx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1001A6D3: mov dword ptr [ebp - 0x4c], eax */
L_1001A6D6:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001A6D6: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001A6D9: je 0x1002fbc1 */
L_1001A6DF:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001A6DF: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001A6E2: je 0x1002fbc1 */
L_1001A6E8:
    /* cmp LO8(ecx), 0x43u */ /* 0x1001A6E8: cmp cl, 0x43 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001C30F; /* 0x1001A6EB: jg 0x1001c30f */
L_1001A6F1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001A6F1: dec edx */
    _flag_k = FK_DEC;
L_1001A6F2:
    ecx = MEM32(ebp + (-0x68)); /* 0x1001A6F2: mov ecx, dword ptr [ebp - 0x68] */
    MEM32(ecx) = edx; /* 0x1001A6F5: mov dword ptr [ecx], edx */
    ecx = MEM32(ebp + (-0x60)); /* 0x1001A6F7: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x1001A6FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A57D; /* 0x1001A6FC: je 0x1001a57d */
L_1001A702:
    /* cmp eax, 0x18u */ /* 0x1001A702: cmp eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001A3F3; /* 0x1001A705: ja 0x1001a3f3 */
L_1001A70B:
    ecx = MEM32(ebp + (-0x54)); /* 0x1001A70B: mov ecx, dword ptr [ebp - 0x54] */
L_1001A70E:
    /* test eax, eax */ /* 0x1001A70E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001B222; /* 0x1001A710: je 0x1001b222 */
L_1001A716:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001A716: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1001A717: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AA84; /* 0x1001A719: je 0x1001aa84 */
L_1001A71F:
    ecx = ebp + (-0x3C); /* 0x1001A71F: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x1001A722: push ecx */
    PUSH32(esp, eax); /* 0x1001A723: push eax */
    eax = ebp + (-0x20); /* 0x1001A724: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1001A727: push eax */
    RECOMP_CALL(sub_1001A8CA); /* 0x1001A728: call 0x1001a8ca */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x6C)); /* 0x1001A72D: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001A730: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1001A733: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1003059B; /* 0x1001A735: js 0x1003059b */
L_1001A73B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x1001A73B: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x64)); /* 0x1001A73E: mov eax, dword ptr [ebp - 0x64] */
    /* test eax, eax */ /* 0x1001A741: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001A748; /* 0x1001A743: jne 0x1001a748 */
L_1001A745:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x18); /* 0x1001A745: add esi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
L_1001A748:
    eax = MEM32(ebp + (-0x5C)); /* 0x1001A748: mov eax, dword ptr [ebp - 0x5c] */
    /* test eax, eax */ /* 0x1001A74B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030D4D; /* 0x1001A74D: je 0x10030d4d */
L_1001A753:
    /* cmp esi, 0x1450u */ /* 0x1001A753: cmp esi, 0x1450 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A56F; /* 0x1001A759: jg 0x1001a56f */
L_1001A75F:
    /* cmp esi, 0xFFFFEBB0u */ /* 0x1001A75F: cmp esi, 0xffffebb0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFEBB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001A55D; /* 0x1001A765: jl 0x1001a55d */
L_1001A76B:
    edx = 0x100DFEC0u; /* 0x1001A76B: mov edx, 0x100dfec0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x60u; /* 0x1001A770: sub edx, 0x60 */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x1001A773: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A859; /* 0x1001A775: je 0x1001a859 */
L_1001A77B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001A787; /* 0x1001A77B: jns 0x1001a787 */
L_1001A77D:
    edx = 0x100E0040u; /* 0x1001A77D: mov edx, 0x100e0040 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1001A782: neg esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x60u; /* 0x1001A784: sub edx, 0x60 */
    _flag_k = FK_CMP;
L_1001A787:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1001A787: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001A792; /* 0x1001A78A: jne 0x1001a792 */
L_1001A78C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001A78C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x3C)) = (uint16_t)(LO16(eax)); /* 0x1001A78E: mov word ptr [ebp - 0x3c], ax */
L_1001A792:
    /* test esi, esi */ /* 0x1001A792: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A859; /* 0x1001A794: je 0x1001a859 */
L_1001A79A:
    eax = esi; /* 0x1001A79A: mov eax, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x1001A79C: add edx, 0x54 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x1001A79F: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    MEM32(ebp + (-0x54)) = edx; /* 0x1001A7A2: mov dword ptr [ebp - 0x54], edx */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1001A7A5: mov dword ptr [ebp - 0x4c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1001A7A8: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A792; /* 0x1001A7AB: je 0x1001a792 */
L_1001A7AD:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1001A7AD: imul ecx, eax, 0xc */
    eax = 0x8000u; /* 0x1001A7B0: mov eax, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1001A7B5: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A7B7: mov dword ptr [ebp - 0x50], ecx */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x1001A7BA: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1001A7D0; /* 0x1001A7BD: jb 0x1001a7d0 */
L_1001A7BF:
    esi = ecx; /* 0x1001A7BF: mov esi, ecx */
    edi = ebp + (-0x48); /* 0x1001A7C1: lea edi, [ebp - 0x48] */
    ecx = ebp + (-0x48); /* 0x1001A7C4: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1001A7C7: mov dword ptr [ebp - 0x50], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1001A7CC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x46)) = MEM32(ebp + (-0x46)) - 1; /* 0x1001A7CD: dec dword ptr [ebp - 0x46] */
    _flag_k = FK_DEC;
L_1001A7D0:
    edi = (uint32_t)MEM16(ecx + 0xA); /* 0x1001A7D0: movzx edi, word ptr [ecx + 0xa] */
    edx = MEM32(ebp + (-0x32)); /* 0x1001A7D4: mov edx, dword ptr [ebp - 0x32] */
    eax = edi; /* 0x1001A7D7: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1001A7D9: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1001A7DB: mov dword ptr [ebp - 0x7c], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1001A7DE: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1001A7E3: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x60)) = eax; /* 0x1001A7E6: mov dword ptr [ebp - 0x60], eax */
    eax = 0x7FFFu; /* 0x1001A7E9: mov eax, 0x7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x1001A7EE: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ebx; /* 0x1001A7F0: mov dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1001A7F3: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1001A7F5: mov dword ptr [ebp - 0x24], ebx */
    eax = edx + edi; /* 0x1001A7F8: lea eax, [edx + edi] */
    esi = (uint32_t)LO16(eax); /* 0x1001A7FB: movzx esi, ax */
    eax = 0x7FFFu; /* 0x1001A7FE: mov eax, 0x7fff */
    MEM32(ebp + (-0x6C)) = esi; /* 0x1001A803: mov dword ptr [ebp - 0x6c], esi */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1001A806: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A809: jae 0x1001a538 */
L_1001A80F:
    /* cmp LO16(edi), LO16(eax) */ /* 0x1001A80F: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A812: jae 0x1001a538 */
L_1001A818:
    eax = 0xBFFDu; /* 0x1001A818: mov eax, 0xbffd */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001A81D: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001A538; /* 0x1001A820: ja 0x1001a538 */
L_1001A826:
    eax = 0x3FBFu; /* 0x1001A826: mov eax, 0x3fbf */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001A82B: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001A40F; /* 0x1001A82E: jbe 0x1001a40f */
L_1001A834:
    /* test LO16(edx), LO16(edx) */ /* 0x1001A834: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A417; /* 0x1001A837: je 0x1001a417 */
L_1001A83D:
    /* test LO16(edi), LO16(edi) */ /* 0x1001A83D: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001A447; /* 0x1001A840: je 0x1001a447 */
L_1001A846:
    PUSH32(esp, 5); /* 0x1001A846: push 5 */
    eax = ebx; /* 0x1001A848: mov eax, ebx */
    edx = ebp + (-0x28); /* 0x1001A84A: lea edx, [ebp - 0x28] */
    edi = POP32_VAL(esp); /* 0x1001A84D: pop edi */
    MEM32(ebp + (-0x74)) = eax; /* 0x1001A84E: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x68)) = edi; /* 0x1001A851: mov dword ptr [ebp - 0x68], edi */
    goto L_1001AAF2; /* 0x1001A854: jmp 0x1001aaf2 */
L_1001A859:
    eax = MEM32(ebp + (-0x34)); /* 0x1001A859: mov eax, dword ptr [ebp - 0x34] */
    ecx = (uint32_t)MEM16(ebp + (-0x3C)); /* 0x1001A85C: movzx ecx, word ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x3A)); /* 0x1001A860: mov edx, dword ptr [ebp - 0x3a] */
    esi = MEM32(ebp + (-0x36)); /* 0x1001A863: mov esi, dword ptr [ebp - 0x36] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001A866: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1001A866: shr eax, 0x10 */
L_1001A869:
    edi = MEM32(ebp + (-0x80)); /* 0x1001A869: mov edi, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x70)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x70))));
    eax = eax | MEM32(ebp + (-0x70)); /* 0x1001A86C: or eax, dword ptr [ebp - 0x70] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0xA) = (uint16_t)(LO16(eax)); /* 0x1001A86F: mov word ptr [edi + 0xa], ax */
    eax = ebx; /* 0x1001A873: mov eax, ebx */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1001A875: mov word ptr [edi], cx */
    MEM32(edi + 0x2) = edx; /* 0x1001A878: mov dword ptr [edi + 2], edx */
    MEM32(edi + 0x6) = esi; /* 0x1001A87B: mov dword ptr [edi + 6], esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x1001A87E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1001A881: pop edi */
    esi = POP32_VAL(esp); /* 0x1001A882: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001A883: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001A885: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001A886: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001A88B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001A88D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001A88E: ret  */
L_1001A88F:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001A88F: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    goto L_1001A6AF; /* 0x1001A892: jmp 0x1001a6af */
L_1001AA7D:
    eax = POP32_VAL(esp); /* 0x1001AA7D: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001AA7E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1001AA7F: jmp 0x1001a63a */
L_1001AA84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001AA84: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001AA85: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AA86: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1001AA87: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AA84; /* 0x1001AA89: je 0x1001aa84 */
L_1001AA8B:
    MEM32(ebp + (-0x54)) = ecx; /* 0x1001AA8B: mov dword ptr [ebp - 0x54], ecx */
    RECOMP_BACKEDGE();
    goto L_1001A71F; /* 0x1001AA8E: jmp 0x1001a71f */
L_1001AA93:
    eax = (uint32_t)MEM16(esi); /* 0x1001AA93: movzx eax, word ptr [esi] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1001AA96: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + (-0x64)); /* 0x1001AA99: mov eax, dword ptr [ebp - 0x64] */
    ecx = MEM32(ebp + (-0x5C)); /* 0x1001AA9C: mov ecx, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x78)) = ebx; /* 0x1001AA9F: mov dword ptr [ebp - 0x78], ebx */
    eax = (uint32_t)MEM16(eax); /* 0x1001AAA2: movzx eax, word ptr [eax] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1001AAA5: imul ecx, eax */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x1001AAA8: mov dword ptr [ebp - 0x5c], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + (-0x4)); /* 0x1001AAAB: add ecx, dword ptr [edx - 4] */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edx + (-0x4)) */ /* 0x1001AAAE: cmp ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAB7; /* 0x1001AAB1: jb 0x1001fab7 */
L_1001AAB7:
    /* cmp ecx, MEM32(ebp + (-0x5C)) */ /* 0x1001AAB7: cmp ecx, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1001FAB7; /* 0x1001AABA: jb 0x1001fab7 */
L_1001AAC0:
    eax = MEM32(ebp + (-0x78)); /* 0x1001AAC0: mov eax, dword ptr [ebp - 0x78] */
L_1001AAC3:
    MEM32(edx + (-0x4)) = ecx; /* 0x1001AAC3: mov dword ptr [edx - 4], ecx */
    /* test eax, eax */ /* 0x1001AAC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001FABF; /* 0x1001AAC8: jne 0x1001fabf */
L_1001AACE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) - 2; /* 0x1001AACE: sub dword ptr [ebp - 0x64], 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1001AAD2: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AAD5: dec edi */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x1001AAD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AA93; /* 0x1001AAD8: jg 0x1001aa93 */
L_1001AADA:
    ecx = MEM32(ebp + (-0x50)); /* 0x1001AADA: mov ecx, dword ptr [ebp - 0x50] */
    edi = MEM32(ebp + (-0x68)); /* 0x1001AADD: mov edi, dword ptr [ebp - 0x68] */
    eax = MEM32(ebp + (-0x74)); /* 0x1001AAE0: mov eax, dword ptr [ebp - 0x74] */
L_1001AAE3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1001AAE3: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001AAE6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1001AAE7: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x74)) = eax; /* 0x1001AAE8: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x68)) = edi; /* 0x1001AAEB: mov dword ptr [ebp - 0x68], edi */
    /* test edi, edi */ /* 0x1001AAEE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001AB07; /* 0x1001AAF0: jle 0x1001ab07 */
L_1001AAF2:
    MEM32(ebp + (-0x5C)) = edi; /* 0x1001AAF2: mov dword ptr [ebp - 0x5c], edi */
    /* test edi, edi */ /* 0x1001AAF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001AAE3; /* 0x1001AAF7: jle 0x1001aae3 */
L_1001AAF9:
    esi = ebp + (-0x3C); /* 0x1001AAF9: lea esi, [ebp - 0x3c] */
    esi = esi + eax * 2; /* 0x1001AAFC: lea esi, [esi + eax*2] */
    eax = ecx + 0x8; /* 0x1001AAFF: lea eax, [ecx + 8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x1001AB02: mov dword ptr [ebp - 0x64], eax */
    RECOMP_BACKEDGE();
    goto L_1001AA93; /* 0x1001AB05: jmp 0x1001aa93 */
L_1001AB07:
    esi = MEM32(ebp + (-0x6C)); /* 0x1001AB07: mov esi, dword ptr [ebp - 0x6c] */
    edx = MEM32(ebp + (-0x24)); /* 0x1001AB0A: mov edx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC002u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xC002u; /* 0x1001AB0D: add esi, 0xc002 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x2C)); /* 0x1001AB13: mov edi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x50)) = edx; /* 0x1001AB16: mov dword ptr [ebp - 0x50], edx */
    /* test LO16(esi), LO16(esi) */ /* 0x1001AB19: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001A46B; /* 0x1001AB1C: jle 0x1001a46b */
L_1001AB22:
    /* test edx, edx */ /* 0x1001AB22: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB7F; /* 0x1001AB24: jns 0x1001ab7f */
L_1001AB26:
    /* test LO16(esi), LO16(esi) */ /* 0x1001AB26: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001A46B; /* 0x1001AB29: jle 0x1001a46b */
L_1001AB2F:
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x1001AB2F: mov ax, word ptr [ebp - 0x2c] */
L_1001AB33:
    edx = 0x8000u; /* 0x1001AB33: mov edx, 0x8000 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1001AB38: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1001ABBA; /* 0x1001AB3B: ja 0x1001abba */
L_1001AB3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0001FFFFu);
    edi = edi & 0x0001FFFFu; /* 0x1001AB3D: and edi, 0x1ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x00018000u */ /* 0x1001AB43: cmp edi, 0x18000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00018000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABBA; /* 0x1001AB49: je 0x1001abba */
L_1001AB4B:
    ecx = MEM32(ebp + (-0x50)); /* 0x1001AB4B: mov ecx, dword ptr [ebp - 0x50] */
L_1001AB4E:
    edx = MEM32(ebp + (-0x54)); /* 0x1001AB4E: mov edx, dword ptr [ebp - 0x54] */
    eax = 0x7FFFu; /* 0x1001AB51: mov eax, 0x7fff */
    /* cmp LO16(esi), LO16(eax) */ /* 0x1001AB56: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001A516; /* 0x1001AB59: jae 0x1001a516 */
L_1001AB5F:
    SET_LO16(eax, MEM16(ebp + (-0x2A))); /* 0x1001AB5F: mov ax, word ptr [ebp - 0x2a] */
    _flag_a = (uint32_t)((esi | MEM32(ebp + (-0x60)))); _flag_b = (uint32_t)((esi | MEM32(ebp + (-0x60))));
    esi = esi | MEM32(ebp + (-0x60)); /* 0x1001AB63: or esi, dword ptr [ebp - 0x60] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x3C)) = (uint16_t)(LO16(eax)); /* 0x1001AB66: mov word ptr [ebp - 0x3c], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x1001AB6A: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x3A)) = eax; /* 0x1001AB6D: mov dword ptr [ebp - 0x3a], eax */
    MEM32(ebp + (-0x36)) = ecx; /* 0x1001AB70: mov dword ptr [ebp - 0x36], ecx */
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(esi)); /* 0x1001AB73: mov word ptr [ebp - 0x32], si */
L_1001AB77:
    esi = MEM32(ebp + (-0x4C)); /* 0x1001AB77: mov esi, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A792; /* 0x1001AB7A: jmp 0x1001a792 */
L_1001AB7F:
    eax = MEM32(ebp + (-0x28)); /* 0x1001AB7F: mov eax, dword ptr [ebp - 0x28] */
    edx = edi; /* 0x1001AB82: mov edx, edi */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1001AB84: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x1001AB84: shr edx, 0x1f */
    ecx = eax; /* 0x1001AB87: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1001AB89: add eax, eax */
    _flag_k = FK_ADD;
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x1001AB8B: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x1001AB8B: shr ecx, 0x1f */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1001AB8E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1001AB90: add edi, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x50)); /* 0x1001AB92: mov edx, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1001AB95: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1001AB98: add edx, edx */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x1001AB9A: mov eax, 0xffff */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1001AB9F: mov dword ptr [ebp - 0x2c], edi */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x1001ABA2: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001ABA4: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x1001ABA6: mov dword ptr [ebp - 0x50], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1001ABA9: mov dword ptr [ebp - 0x24], edx */
    /* test LO16(esi), LO16(esi) */ /* 0x1001ABAC: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001AB22; /* 0x1001ABAF: jg 0x1001ab22 */
L_1001ABB5:
    RECOMP_BACKEDGE();
    goto L_1001AB26; /* 0x1001ABB5: jmp 0x1001ab26 */
L_1001ABBA:
    eax = MEM32(ebp + (-0x2A)); /* 0x1001ABBA: mov eax, dword ptr [ebp - 0x2a] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001ABBD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001A4DF; /* 0x1001ABC0: je 0x1001a4df */
L_1001ABC6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001ABC6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2A)) = eax; /* 0x1001ABC7: mov dword ptr [ebp - 0x2a], eax */
    RECOMP_BACKEDGE();
    goto L_1001AB4B; /* 0x1001ABCA: jmp 0x1001ab4b */
L_1001ABE1:
    PUSH32(esp, 4); /* 0x1001ABE1: push 4 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1001ABE3: jmp 0x1001a5bd */
L_1001ABE8:
    PUSH32(esp, 3); /* 0x1001ABE8: push 3 */
    RECOMP_BACKEDGE();
    goto L_1001AA7D; /* 0x1001ABEA: jmp 0x1001aa7d */
L_1001ABEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001ABEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001ABF1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001ABF2: mov dword ptr [ebp - 0x60], eax */
    /* cmp LO8(ecx), 0x30u */ /* 0x1001ABF5: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001AC25; /* 0x1001ABF8: jl 0x1001ac25 */
L_1001ABFA:
    eax = MEM32(ebp + (-0x4C)); /* 0x1001ABFA: mov eax, dword ptr [ebp - 0x4c] */
    esi = MEM32(ebp + (-0x54)); /* 0x1001ABFD: mov esi, dword ptr [ebp - 0x54] */
L_1001AC00:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001AC00: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001AC1D; /* 0x1001AC03: jg 0x1001ac1d */
L_1001AC05:
    /* cmp eax, 0x19u */ /* 0x1001AC05: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002FBD1; /* 0x1001AC08: jae 0x1002fbd1 */
L_1001AC0E:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x30u); /* 0x1001AC0E: sub cl, 0x30 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001AC11: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1001AC12: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001AC14: inc edi */
    _flag_k = FK_INC;
L_1001AC15:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001AC15: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001AC17: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001AC18: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1001AC00; /* 0x1001AC1B: jge 0x1001ac00 */
L_1001AC1D:
    MEM32(ebp + (-0x54)) = esi; /* 0x1001AC1D: mov dword ptr [ebp - 0x54], esi */
    esi = ebx; /* 0x1001AC20: mov esi, ebx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1001AC22: mov dword ptr [ebp - 0x4c], eax */
L_1001AC25:
    eax = MEM32(ebp + 0x24); /* 0x1001AC25: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001AC28: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001AC2A: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001AC30: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001AC32: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABE1; /* 0x1001AC34: je 0x1001abe1 */
L_1001AC36:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001AC36: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001AC39: je 0x1002fbc1 */
L_1001AC3F:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001AC3F: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001AC42: je 0x1002fbc1 */
L_1001AC48:
    /* cmp LO8(ecx), 0x43u */ /* 0x1001AC48: cmp cl, 0x43 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_10030D33; /* 0x1001AC4B: jg 0x10030d33 */
L_1001AC51:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1001AC51: dec edx */
    _flag_k = FK_DEC;
L_1001AC52:
    eax = MEM32(ebp + (-0x4C)); /* 0x1001AC52: mov eax, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A6F2; /* 0x1001AC55: jmp 0x1001a6f2 */
L_1001B222:
    ecx = ebx; /* 0x1001B222: mov ecx, ebx */
    eax = ebx; /* 0x1001B224: mov eax, ebx */
    esi = ebx; /* 0x1001B226: mov esi, ebx */
    edx = ebx; /* 0x1001B228: mov edx, ebx */
    RECOMP_BACKEDGE();
    goto L_1001A869; /* 0x1001B22A: jmp 0x1001a869 */
L_1001B27C:
    eax = MEM32(ebp + (-0x54)); /* 0x1001B27C: mov eax, dword ptr [ebp - 0x54] */
L_1001B27F:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001B27F: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001B281: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001B282: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x30u */ /* 0x1001B283: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001B27F; /* 0x1001B286: je 0x1001b27f */
L_1001B288:
    MEM32(ebp + (-0x54)) = eax; /* 0x1001B288: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1001B28B: mov eax, dword ptr [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_1001A88F; /* 0x1001B28E: jmp 0x1001a88f */
L_1001C261:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C261: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C263: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1001C264: mov dword ptr [ebp - 0x60], eax */
    eax = ecx + (-0x31); /* 0x1001C267: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001C26A: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001ABE8; /* 0x1001C26C: jbe 0x1001abe8 */
L_1001C272:
    eax = MEM32(ebp + 0x24); /* 0x1001C272: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x1001C275: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x84); /* 0x1001C277: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1001C27D: mov eax, dword ptr [eax] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1001C27F: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001ABE1; /* 0x1001C281: je 0x1001abe1 */
L_1001C287:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x1001C287: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001C28A: je 0x1002fbc1 */
L_1001C290:
    /* cmp LO8(ecx), 0x2Du */ /* 0x1001C290: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBC1; /* 0x1001C293: je 0x1002fbc1 */
L_1001C299:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C299: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001AC48; /* 0x1001C29C: jne 0x1001ac48 */
L_1001C2A2:
    RECOMP_BACKEDGE();
    goto L_1001A68D; /* 0x1001C2A2: jmp 0x1001a68d */
L_1001C2A7:
    PUSH32(esp, 6); /* 0x1001C2A7: push 6 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1001C2A9: jmp 0x1001a5bd */
L_1001C2AE:
    eax = edx + (-0x2); /* 0x1001C2AE: lea eax, [edx - 2] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1001C2B1: mov dword ptr [ebp - 0x50], eax */
    eax = ecx + (-0x31); /* 0x1001C2B4: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x1001C2B7: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1003055E; /* 0x1001C2B9: ja 0x1003055e */
L_1001C2BF:
    PUSH32(esp, 9); /* 0x1001C2BF: push 9 */
    RECOMP_BACKEDGE();
    goto L_1001AA7D; /* 0x1001C2C1: jmp 0x1001aa7d */
L_1001C2C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001C2C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1001C2C8: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001C2CA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = eax; /* 0x1001C2CB: mov dword ptr [ebp - 0x64], eax */
L_1001C2CE:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C2CE: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1001C2F8; /* 0x1001C2D1: jl 0x1001c2f8 */
L_1001C2D3:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001C2D3: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1001C2F8; /* 0x1001C2D6: jg 0x1001c2f8 */
L_1001C2D8:
    ecx = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x1001C2D8: imul ecx, esi, 0xa */
    esi = (int32_t)(int8_t)MEM8(ebp + (-0x55)); /* 0x1001C2DB: movsx esi, byte ptr [ebp - 0x55] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFD0u; /* 0x1001C2DF: add esi, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1001C2E2: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, 0x1450u */ /* 0x1001C2E4: cmp esi, 0x1450 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001A3DE; /* 0x1001C2EA: jg 0x1001a3de */
L_1001C2F0:
    SET_LO8(ecx, MEM8(edx)); /* 0x1001C2F0: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1001C2F2: inc edx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x55)) = (uint8_t)(LO8(ecx)); /* 0x1001C2F3: mov byte ptr [ebp - 0x55], cl */
    RECOMP_BACKEDGE();
    goto L_1001C2CE; /* 0x1001C2F6: jmp 0x1001c2ce */
L_1001C2F8:
    /* cmp LO8(ecx), 0x30u */ /* 0x1001C2F8: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001C2FB: jl 0x1001ac51 */
L_1001C301:
    /* cmp LO8(ecx), 0x39u */ /* 0x1001C301: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001AC51; /* 0x1001C304: jg 0x1001ac51 */
L_1001C30A:
    RECOMP_BACKEDGE();
    goto L_1001A3EB; /* 0x1001C30A: jmp 0x1001a3eb */
L_1001C30F:
    /* cmp LO8(ecx), 0x45u */ /* 0x1001C30F: cmp cl, 0x45 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x1001C312: jle 0x1001c2a7 */
L_1001C314:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x64u); /* 0x1001C314: sub cl, 0x64 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 1 */ /* 0x1001C317: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x1001C31A: jbe 0x1001c2a7 */
L_1001C31C:
    RECOMP_BACKEDGE();
    goto L_1001A6F1; /* 0x1001C31C: jmp 0x1001a6f1 */
L_1001FAB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001FAB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001FAB9: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AAC3; /* 0x1001FABA: jmp 0x1001aac3 */
L_1001FABF:
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) + 1); /* 0x1001FABF: inc word ptr [edx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    RECOMP_BACKEDGE();
    goto L_1001AACE; /* 0x1001FAC2: jmp 0x1001aace */
L_1002FBA9:
    PUSH32(esp, 7); /* 0x1002FBA9: push 7 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1002FBAB: jmp 0x1001a5bd */
L_1002FBB6:
    PUSH32(esp, 2); /* 0x1002FBB6: push 2 */
    eax = POP32_VAL(esp); /* 0x1002FBB8: pop eax */
    MEM32(ebp + (-0x70)) = ebx; /* 0x1002FBB9: mov dword ptr [ebp - 0x70], ebx */
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1002FBBC: jmp 0x1001a63a */
L_1002FBC1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1002FBC1: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, 0xBu); /* 0x1002FBC2: push 0xb */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x1002FBC4: jmp 0x1001a5bd */
L_1002FBC9:
    edx = MEM32(ebp + (-0x50)); /* 0x1002FBC9: mov edx, dword ptr [ebp - 0x50] */
    RECOMP_BACKEDGE();
    goto L_1001AC52; /* 0x1002FBCC: jmp 0x1001ac52 */
L_1002FBD1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002FBD1: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001AC15; /* 0x1002FBD2: jmp 0x1001ac15 */
L_1002FBD7:
    SET_LO8(ecx, MEM8(edx)); /* 0x1002FBD7: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002FBD9: inc edx */
    _flag_k = FK_INC;
    goto L_1002FBF0; /* 0x1002FBDA: jmp 0x1002fbf0 */
L_1002FBDC:
    /* cmp eax, 0xAu */ /* 0x1002FBDC: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001AC52; /* 0x1002FBDF: je 0x1001ac52 */
L_1002FBE5:
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1002FBE5: jmp 0x1001a63a */
L_1002FBEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002FBEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002FBEC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = eax; /* 0x1002FBED: mov dword ptr [ebp - 0x64], eax */
L_1002FBF0:
    /* cmp LO8(ecx), 0x30u */ /* 0x1002FBF0: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002FBD7; /* 0x1002FBF3: je 0x1002fbd7 */
L_1002FBF5:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x31u); /* 0x1002FBF5: sub cl, 0x31 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 8 */ /* 0x1002FBF8: cmp cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2BF; /* 0x1002FBFB: jbe 0x1001c2bf */
L_1002FC01:
    RECOMP_BACKEDGE();
    goto L_1001AC51; /* 0x1002FC01: jmp 0x1001ac51 */
L_10030558:
    void_lift_trap(0x10030558u, "insb byte ptr es:[edi], dx");
    /* outsd: no port I/O under Win32 */ /* 0x10030559: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x1003055A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) & LO8(eax)); /* 0x1003055B: and byte ptr [bx + si], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1003055E:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1003055E: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Bu; /* 0x10030561: sub eax, 0x2b */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002FBA9; /* 0x10030564: je 0x1002fba9 */
L_1003056A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003056A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1003056B: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1001A3A2; /* 0x1003056C: jne 0x1001a3a2 */
L_10030572:
    PUSH32(esp, 7); /* 0x10030572: push 7 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10030574: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10030577: pop eax */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x10030578: mov dword ptr [ebp - 0x6c], ecx */
    RECOMP_BACKEDGE();
    goto L_1001A63A; /* 0x1003057B: jmp 0x1001a63a */
L_10030580:
    eax = ecx + (-0x31); /* 0x10030580: lea eax, [ecx - 0x31] */
    /* cmp LO8(eax), 8 */ /* 0x10030583: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001C2BF; /* 0x10030585: jbe 0x1001c2bf */
L_1003058B:
    /* cmp LO8(ecx), 0x30u */ /* 0x1003058B: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1003058E:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002FBC9; /* 0x1003058E: jne 0x1002fbc9 */
L_10030594:
    PUSH32(esp, 8); /* 0x10030594: push 8 */
    RECOMP_BACKEDGE();
    goto L_1001A5BD; /* 0x10030596: jmp 0x1001a5bd */
L_1003059B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1003059B: neg esi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001A73B; /* 0x1003059D: jmp 0x1001a73b */
L_10030D33:
    /* cmp LO8(ecx), 0x45u */ /* 0x10030D33: cmp cl, 0x45 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001C2A7; /* 0x10030D36: jle 0x1001c2a7 */
L_10030D3C:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x64u); /* 0x10030D3C: sub cl, 0x64 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 1 */ /* 0x10030D3F: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1001AC51; /* 0x10030D42: ja 0x1001ac51 */
L_10030D48:
    RECOMP_BACKEDGE();
    goto L_1001C2A7; /* 0x10030D48: jmp 0x1001c2a7 */
L_10030D4D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x1C); /* 0x10030D4D: sub esi, dword ptr [ebp + 0x1c] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1001A753; /* 0x10030D50: jmp 0x1001a753 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x10014859u: goto L_10014859;
      case 0x1001A374u: goto L_1001A374;
      case 0x1001A3AAu: goto L_1001A3AA;
      case 0x1001A650u: goto L_1001A650;
      case 0x1001A692u: goto L_1001A692;
      case 0x1001ABEFu: goto L_1001ABEF;
      case 0x1001C261u: goto L_1001C261;
      case 0x1001C2AEu: goto L_1001C2AE;
      case 0x1001C2C6u: goto L_1001C2C6;
      case 0x1002FBDCu: goto L_1002FBDC;
      case 0x1002FBEAu: goto L_1002FBEA;
      case 0x10030580u: goto L_10030580;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100305A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100305A2u);

L_100305A2:
    PUSH32(esp, ebp); /* 0x100305A2: push ebp */
    ebp = esp; /* 0x100305A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100305A5: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100305A8: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100305AD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100305AF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100305B2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x100305B5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100305B8: push ebx */
    PUSH32(esp, esi); /* 0x100305B9: push esi */
    PUSH32(esp, edi); /* 0x100305BA: push edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x100305BB: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100305BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x100305C0: mov eax, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x100305C3: mov edi, esi */
    PUSH32(esp, eax); /* 0x100305C5: push eax */
    PUSH32(esp, esi); /* 0x100305C6: push esi */
    PUSH32(esp, esi); /* 0x100305C7: push esi */
    PUSH32(esp, esi); /* 0x100305C8: push esi */
    PUSH32(esp, esi); /* 0x100305C9: push esi */
    PUSH32(esp, ecx); /* 0x100305CA: push ecx */
    eax = ebp + (-0x20); /* 0x100305CB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100305CE: mov dword ptr [ebp - 0x1c], ecx */
    PUSH32(esp, eax); /* 0x100305D1: push eax */
    eax = ebp + (-0x10); /* 0x100305D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305D5: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x100305D6: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100305DB: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100305DD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), 4 */ /* 0x100305E0: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060EAD; /* 0x100305E3: jne 0x10060ead */
L_100305E9:
    eax = ebp + (-0x18); /* 0x100305E9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100305EC: push eax */
    eax = ebp + (-0x10); /* 0x100305ED: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100305F0: push eax */
    RECOMP_CALL(sub_1001ADE5); /* 0x100305F1: call 0x1001ade5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100305F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100305F7: pop ecx */
    /* test LO8(ebx), 2 */ /* 0x100305F8: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030639; /* 0x100305FB: jne 0x10030639 */
L_100305FD:
    /* cmp eax, 1 */ /* 0x100305FD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030639; /* 0x10030600: je 0x10030639 */
L_10030602:
    /* test LO8(ebx), 1 */ /* 0x10030602: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030640; /* 0x10030605: jne 0x10030640 */
L_10030607:
    /* cmp eax, 2 */ /* 0x10030607: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030640; /* 0x1003060A: je 0x10030640 */
L_1003060C:
    esi = MEM32(ebp + (-0x18)); /* 0x1003060C: mov esi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1003060F: mov eax, dword ptr [ebp - 0x14] */
L_10030612:
    edx = MEM32(ebp + (-0x24)); /* 0x10030612: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x20)); /* 0x10030615: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x10030618: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    MEM32(edx) = edi; /* 0x1003061B: mov dword ptr [edx], edi */
    MEM32(edx + 0x4) = ecx; /* 0x1003061D: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10030620: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10030623: pop edi */
    MEM32(edx + 0x10) = esi; /* 0x10030624: mov dword ptr [edx + 0x10], esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10030627: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10030629: pop esi */
    MEM32(edx + 0x14) = eax; /* 0x1003062A: mov dword ptr [edx + 0x14], eax */
    eax = edx; /* 0x1003062D: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1003062F: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10030630: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030635: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030637: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030638: ret  */
L_10030639:
    edi = 0x80u; /* 0x10030639: mov edi, 0x80 */
    RECOMP_BACKEDGE();
    goto L_10030602; /* 0x1003063E: jmp 0x10030602 */
L_10030640:
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x10030640: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003060C; /* 0x10030646: jmp 0x1003060c */
L_10060EAD:
    edi = 0x200u; /* 0x10060EAD: mov edi, 0x200 */
    eax = esi; /* 0x10060EB2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030612; /* 0x10060EB4: jmp 0x10030612 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030648u);

L_10030648:
    PUSH32(esp, ebp); /* 0x10030648: push ebp */
    ebp = esp; /* 0x10030649: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1003064B: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1003064E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10030653: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10030655: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10030658: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030659: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1003065C: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x1003065F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1000F764); /* 0x10030662: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x10030667: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056DA9; /* 0x10030669: je 0x10056da9 */
L_1003066F:
    edx = MEM32(ebp + (-0x2C)); /* 0x1003066F: mov edx, dword ptr [ebp - 0x2c] */
L_10030672:
    /* cmp MEM32(edx + 0x74), 1 */ /* 0x10030672: cmp dword ptr [edx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056DC0; /* 0x10030676: jg 0x10056dc0 */
L_1003067C:
    ecx = (uint32_t)MEM8(esi); /* 0x1003067C: movzx ecx, byte ptr [esi] */
    eax = MEM32(edx + 0x90); /* 0x1003067F: mov eax, dword ptr [edx + 0x90] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10030685: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x10030689: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1003068C:
    /* test eax, eax */ /* 0x1003068C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056DDA; /* 0x1003068E: jne 0x10056dda */
L_10030694:
    eax = ebp + (-0x2C); /* 0x10030694: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10030697: push eax */
    eax = ebp + (-0x1C); /* 0x10030698: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1003069B: push esi */
    PUSH32(esp, eax); /* 0x1003069C: push eax */
    RECOMP_CALL(sub_100305A2); /* 0x1003069D: call 0x100305a2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100306A2: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x100306A5: fld qword ptr [eax + 0x10] */
L_100306A8:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x100306A8: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x100306AC: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100306B6; /* 0x100306AD: je 0x100306b6 */
L_100306AF:
    eax = MEM32(ebp + (-0x24)); /* 0x100306AF: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x100306B2: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100306B6:
    ecx = MEM32(ebp + (-0x4)); /* 0x100306B6: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100306B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100306BB: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100306C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100306C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100306C3: ret  */
L_10056DA9:
    RECOMP_CALL(sub_1001177D); /* 0x10056DA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10056DAE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10056DB4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x10056DB9: fldz  */
    RECOMP_BACKEDGE();
    goto L_100306A8; /* 0x10056DBB: jmp 0x100306a8 */
L_10056DC0:
    eax = ebp + (-0x2C); /* 0x10056DC0: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10056DC3: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x10056DC4: movzx eax, byte ptr [esi] */
    PUSH32(esp, 8); /* 0x10056DC7: push 8 */
    PUSH32(esp, eax); /* 0x10056DC9: push eax */
    RECOMP_CALL(sub_100895AC); /* 0x10056DCA: call 0x100895ac */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x10056DCF: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056DD2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1003068C; /* 0x10056DD5: jmp 0x1003068c */
L_10056DDA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10056DDA: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10030672; /* 0x10056DDB: jmp 0x10030672 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100306C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100306C4u);

L_100306C4:
    PUSH32(esp, ebp); /* 0x100306C4: push ebp */
    ebp = esp; /* 0x100306C5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100306C7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100306C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030648); /* 0x100306CC: call 0x10030648 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100306D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100306D2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100306D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100306D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100306D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100306D5u);

    goto L_100306D5;
L_1002FB77:
    fp_push(0.0); /* 0x1002FB77: fldz  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002FB79: ret  */
L_100306D5:
    /* cmp MEM32(0x100E065C), 0 */ /* 0x100306D5: cmp dword ptr [0x100e065c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E065C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100D6E53; /* 0x100306DC: je 0x100d6e53 */
L_100306E2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x100306E2: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = g_mxcsr; /* 0x100306E5: stmxcsr dword ptr [esp + 4] */
    eax = MEM32(esp + 0x4); /* 0x100306EA: mov eax, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F80u);
    eax = eax & 0x7F80u; /* 0x100306EE: and eax, 0x7f80 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1F80u */ /* 0x100306F3: cmp eax, 0x1f80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1F80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10030709; /* 0x100306F8: jne 0x10030709 */
L_100306FA:
    MEM16(esp) = _fpu_cw; /* 0x100306FA: fnstcw word ptr [esp] */
    SET_LO16(eax, MEM16(esp)); /* 0x100306FD: mov ax, word ptr [esp] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7Fu) << 16;
    SET_LO16(eax, LO16(eax) & 0x7Fu); /* 0x10030701: and ax, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), 0x7Fu */ /* 0x10030705: cmp ax, 0x7f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_10030709:
    esp = esp + 0x8; /* 0x10030709: lea esp, [esp + 8] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100D6E53; /* 0x1003070D: jne 0x100d6e53 */
L_10030713:
    _xmm[0].u64[0] = MEM64(esp + 0x4); _xmm[0].u64[1] = 0; /* 0x10030713: movq xmm0, qword ptr [esp + 4] */
    _xmm[2] = xmm_ld(0x10030780); /* 0x10030719: movapd xmm2, xmmword ptr [0x10030780] */
    _xmm[1] = _xmm[0]; /* 0x10030721: movapd xmm1, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x10030725: movapd xmm7, xmm0 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x10030729: psrlq xmm0, 0x34 */
    eax = _xmm[0].u32[0]; /* 0x1003072E: movd eax, xmm0 */
    { xmm_t _s = xmm_ld(0x10030790); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x10030732: andpd xmm0, xmmword ptr [0x10030790] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] -= _s.u32[_k]; } /* 0x1003073A: psubd xmm2, xmm0 */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x1003073E: psrlq xmm1, xmm2 */
    /* test eax, 0x800u */ /* 0x10030742: test eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10044187; /* 0x10030747: jne 0x10044187 */
L_1003074D:
    /* cmp eax, 0x3FFu */ /* 0x1003074D: cmp eax, 0x3ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1002FB77; /* 0x10030752: jl 0x1002fb77 */
L_10030758:
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x10030758: psllq xmm1, xmm2 */
    /* cmp eax, 0x432u */ /* 0x1003075C: cmp eax, 0x432 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x432u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10044158; /* 0x10030761: jg 0x10044158 */
L_10030767:
    MEM64(esp + 0x4) = _xmm[1].u64[0]; /* 0x10030767: movq qword ptr [esp + 4], xmm1 */
    fp_push(*(double*)ADDR(esp + 0x4)); /* 0x1003076D: fld qword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030771: ret  */
L_10044158:
    _flag_a = SSE_COMI(_xmm[7].f64[0], _xmm[7].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x10044158: ucomisd xmm7, xmm7 */
    _flag_k = FK_EFLAGS;
    if ((!((_flag_a >> 2) & 1u))) goto L_10044182; /* 0x1004415C: jnp 0x10044182 */
L_1004415E:
    edx = 0x3EDu; /* 0x1004415E: mov edx, 0x3ed */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10044163: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = edx; /* 0x10044166: mov dword ptr [esp + 0xc], edx */
    edx = esp; /* 0x1004416A: mov edx, esp */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1004416C: add edx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x8) = edx; /* 0x1004416F: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = edx; /* 0x10044173: mov dword ptr [esp + 4], edx */
    MEM32(esp) = edx; /* 0x10044177: mov dword ptr [esp], edx */
    RECOMP_CALL(sub_100D6158); /* 0x1004417A: call 0x100d6158 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1004417F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_10044182:
    fp_push(*(double*)ADDR(esp + 0x4)); /* 0x10044182: fld qword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10044186: ret  */
L_10044187:
    _xmm[0].u64[0] = MEM64(esp + 0x4); _xmm[0].u64[1] = 0; /* 0x10044187: movq xmm0, qword ptr [esp + 4] */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x1004418D: psllq xmm1, xmm2 */
    _xmm[3] = _xmm[0]; /* 0x10044191: movapd xmm3, xmm0 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; _xmm[0].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[0].f64[0], _s0, 1); _xmm[0].u64[1] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[0].f64[1], _s1, 1); } /* 0x10044195: cmpltpd xmm0, xmm1 */
    /* cmp eax, 0xBFFu */ /* 0x1004419A: cmp eax, 0xbff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100441BF; /* 0x1004419F: jl 0x100441bf */
L_100441A1:
    /* cmp eax, 0xC32u */ /* 0x100441A1: cmp eax, 0xc32 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_10044158; /* 0x100441A6: jg 0x10044158 */
L_100441A8:
    { xmm_t _s = xmm_ld(0x100441F0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x100441A8: andpd xmm0, xmmword ptr [0x100441f0] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x100441B0: subsd xmm1, xmm0 */
    MEM64(esp + 0x4) = _xmm[1].u64[0]; /* 0x100441B4: movq qword ptr [esp + 4], xmm1 */
    fp_push(*(double*)ADDR(esp + 0x4)); /* 0x100441BA: fld qword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100441BE: ret  */
L_100441BF:
    { double _s0 = sse_f64(MEM64(0x10044210)); double _s1 = sse_f64(MEM64(0x10044210 + 8)); _xmm[3].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[3].f64[0], _s0, 1); _xmm[3].u64[1] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[3].f64[1], _s1, 1); } /* 0x100441BF: cmpltpd xmm3, xmmword ptr [0x10044210] */
    { xmm_t _s = xmm_ld(0x10044210); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x100441C8: orpd xmm3, xmmword ptr [0x10044210] */
    { xmm_t _s = xmm_ld(0x10044200); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x100441D0: andpd xmm3, xmmword ptr [0x10044200] */
    MEM64(esp + 0x4) = _xmm[3].u64[0]; /* 0x100441D8: movq qword ptr [esp + 4], xmm3 */
    fp_push(*(double*)ADDR(esp + 0x4)); /* 0x100441DE: fld qword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100441E2: ret  */
L_100D6E53:
    PUSH32(esp, ebp); /* 0x100D6E53: push ebp */
    ebp = esp; /* 0x100D6E54: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100D6E56: push ecx */
    PUSH32(esp, ecx); /* 0x100D6E57: push ecx */
    PUSH32(esp, ebx); /* 0x100D6E58: push ebx */
    PUSH32(esp, esi); /* 0x100D6E59: push esi */
    esi = 0xFFFFu; /* 0x100D6E5A: mov esi, 0xffff */
    PUSH32(esp, esi); /* 0x100D6E5F: push esi */
    PUSH32(esp, MEM32(0x100E2910)); /* 0x100D6E60: push dword ptr [0x100e2910] */
    RECOMP_CALL(sub_100D3175); /* 0x100D6E66: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D6E6B: fld qword ptr [ebp + 8] */
    ebx = eax; /* 0x100D6E6E: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x100D6E70: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100D6E71: pop ecx */
    ecx = MEM32(ebp + 0xE); /* 0x100D6E72: mov ecx, dword ptr [ebp + 0xe] */
    eax = 0x7FF0u; /* 0x100D6E75: mov eax, 0x7ff0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100D6E7A: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100D6E7D: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100D6E7F: push ecx */
    PUSH32(esp, ecx); /* 0x100D6E80: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100D6E81: fstp qword ptr [esp] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100D6E84: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D6EDD; /* 0x100D6E87: jne 0x100d6edd */
L_100D6E89:
    RECOMP_CALL(sub_100D305A); /* 0x100D6E89: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100D6E8E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100D6E8F: pop ecx */
    /* test eax, eax */ /* 0x100D6E90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100D6EC1; /* 0x100D6E92: jle 0x100d6ec1 */
L_100D6E94:
    /* cmp eax, 2 */ /* 0x100D6E94: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100D6EB3; /* 0x100D6E97: jle 0x100d6eb3 */
L_100D6E99:
    /* cmp eax, 3 */ /* 0x100D6E99: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D6EC1; /* 0x100D6E9C: jne 0x100d6ec1 */
L_100D6E9E:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D6E9E: fld qword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100D6EA1: push ebx */
    PUSH32(esp, ecx); /* 0x100D6EA2: push ecx */
    PUSH32(esp, ecx); /* 0x100D6EA3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100D6EA4: fstp qword ptr [esp] */
    PUSH32(esp, 0xBu); /* 0x100D6EA7: push 0xb */
    RECOMP_CALL(sub_100C03F1); /* 0x100D6EA9: call 0x100c03f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100D6EAE: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100D6F24; /* 0x100D6EB1: jmp 0x100d6f24 */
L_100D6EB3:
    PUSH32(esp, esi); /* 0x100D6EB3: push esi */
    PUSH32(esp, ebx); /* 0x100D6EB4: push ebx */
    RECOMP_CALL(sub_100D3175); /* 0x100D6EB5: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D6EBA: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100D6EBD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100D6EBE: pop ecx */
    goto L_100D6F24; /* 0x100D6EBF: jmp 0x100d6f24 */
L_100D6EC1:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D6EC1: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10067CD8)); /* 0x100D6EC4: fld qword ptr [0x10067cd8] */
    PUSH32(esp, ebx); /* 0x100D6ECA: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100D6ECB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] += _st[1]; /* 0x100D6ECE: fadd st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100D6ED0: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100D6ED4: fstp qword ptr [esp] */
    PUSH32(esp, 0xBu); /* 0x100D6ED7: push 0xb */
    PUSH32(esp, 8); /* 0x100D6ED9: push 8 */
    goto L_100D6F1C; /* 0x100D6EDB: jmp 0x100d6f1c */
L_100D6EDD:
    RECOMP_CALL(sub_100D714C); /* 0x100D6EDD: call 0x100d714c */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100D6EE2: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D6EE5: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100D6EE8: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100D6EEB: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100D6EED: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100D6EEF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100D6F06; /* 0x100D6EF2: jp 0x100d6f06 */
L_100D6EF4:
    PUSH32(esp, esi); /* 0x100D6EF4: push esi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100D6EF5: fstp st(1) */
    PUSH32(esp, ebx); /* 0x100D6EF7: push ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100D6EF8: fstp st(0) */
    RECOMP_CALL(sub_100D3175); /* 0x100D6EFA: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100D6EFF: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100D6F02: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100D6F03: pop ecx */
    goto L_100D6F24; /* 0x100D6F04: jmp 0x100d6f24 */
L_100D6F06:
    /* test LO8(ebx), 0x20u */ /* 0x100D6F06: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100D6EF4; /* 0x100D6F09: jne 0x100d6ef4 */
L_100D6F0B:
    PUSH32(esp, ebx); /* 0x100D6F0B: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100D6F0C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x100D6F0F: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100D6F11: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100D6F15: fstp qword ptr [esp] */
    PUSH32(esp, 0xBu); /* 0x100D6F18: push 0xb */
    PUSH32(esp, 0x10u); /* 0x100D6F1A: push 0x10 */
L_100D6F1C:
    RECOMP_CALL(sub_100C006F); /* 0x100D6F1C: call 0x100c006f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100D6F21: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100D6F24:
    esi = POP32_VAL(esp); /* 0x100D6F24: pop esi */
    ebx = POP32_VAL(esp); /* 0x100D6F25: pop ebx */
    esp = ebp; /* 0x100D6F26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100D6F28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D6F29: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003086D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003086Du);

L_1003086D:
    PUSH32(esp, ebp); /* 0x1003086D: push ebp */
    ebp = esp; /* 0x1003086E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10030870: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x10030873: mov eax, dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x10030876: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x10030879: push ebx */
    PUSH32(esp, esi); /* 0x1003087A: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1003087B: push dword ptr [ebp + 0x1c] */
    eax = MEM32(eax + 0x4); /* 0x1003087E: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10030881: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x10030882: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1000F764); /* 0x10030885: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1003088A: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1003088D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060FE8; /* 0x1003088F: je 0x10060fe8 */
L_10030895:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10030895: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10060FE8; /* 0x10030899: jbe 0x10060fe8 */
L_1003089F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1003089F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100308A1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100308A2: mov edi, dword ptr [ebp + 0x10] */
    /* cmp MEM8(ebp + 0x18), LO8(ebx) */ /* 0x100308A5: cmp byte ptr [ebp + 0x18], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060FFC; /* 0x100308A8: jne 0x10060ffc */
L_100308AE:
    eax = MEM32(ebp + 0x14); /* 0x100308AE: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), 0x2Du */ /* 0x100308B1: cmp dword ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006101F; /* 0x100308B4: je 0x1006101f */
L_100308BA:
    eax = MEM32(eax + 0x4); /* 0x100308BA: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x100308BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10030D55; /* 0x100308BF: jg 0x10030d55 */
L_100308C5:
    PUSH32(esp, 1); /* 0x100308C5: push 1 */
    PUSH32(esp, esi); /* 0x100308C7: push esi */
    RECOMP_CALL(sub_1002FB81); /* 0x100308C8: call 0x1002fb81 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100308CD: pop ecx */
    MEM8(esi) = (uint8_t)(0x30u); /* 0x100308CE: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100308D1: inc esi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x100308D2: pop ecx */
L_100308D3:
    /* test edi, edi */ /* 0x100308D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10061028; /* 0x100308D5: jg 0x10061028 */
L_100308DB:
    edi = POP32_VAL(esp); /* 0x100308DB: pop edi */
L_100308DC:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x100308DC: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006107B; /* 0x100308E0: jne 0x1006107b */
L_100308E6:
    esi = POP32_VAL(esp); /* 0x100308E6: pop esi */
    eax = ebx; /* 0x100308E7: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100308E9: pop ebx */
    esp = ebp; /* 0x100308EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100308EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100308ED: ret  */
L_10030D55:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10030D55: add esi, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100308D3; /* 0x10030D57: jmp 0x100308d3 */
L_10060FE8:
    RECOMP_CALL(sub_1001177D); /* 0x10060FE8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10060FED: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x10060FEF: pop ebx */
    MEM32(eax) = ebx; /* 0x10060FF0: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x10060FF2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100308DC; /* 0x10060FF7: jmp 0x100308dc */
L_10060FFC:
    ecx = MEM32(ebp + (-0x4)); /* 0x10060FFC: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, edi */ /* 0x10060FFF: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100308AE; /* 0x10061001: jne 0x100308ae */
L_10061007:
    edx = MEM32(ebp + 0x14); /* 0x10061007: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006100A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx), 0x2Du */ /* 0x1006100C: cmp dword ptr [edx], 0x2d */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006100F: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10061012: add eax, ecx */
    _flag_k = FK_ADD;
    MEM16(eax + esi) = (uint16_t)(0x30u); /* 0x10061014: mov word ptr [eax + esi], 0x30 */
    RECOMP_BACKEDGE();
    goto L_100308AE; /* 0x1006101A: jmp 0x100308ae */
L_1006101F:
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1006101F: mov byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10061022: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100308BA; /* 0x10061023: jmp 0x100308ba */
L_10061028:
    PUSH32(esp, 1); /* 0x10061028: push 1 */
    PUSH32(esp, esi); /* 0x1006102A: push esi */
    RECOMP_CALL(sub_1002FB81); /* 0x1006102B: call 0x1002fb81 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x10061030: mov eax, dword ptr [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x10061033: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10061034: pop ecx */
    eax = MEM32(eax + 0x84); /* 0x10061035: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x1006103B: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1006103D: mov al, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1006103F: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10061041: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x14); /* 0x10061042: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x4); /* 0x10061045: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x10061048: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100308DB; /* 0x1006104A: jns 0x100308db */
L_10061050:
    /* cmp MEM8(ebp + 0x18), LO8(ebx) */ /* 0x10061050: cmp byte ptr [ebp + 0x18], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006105B; /* 0x10061053: je 0x1006105b */
L_10061055:
    edi = eax; /* 0x10061055: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x10061057: neg edi */
    _flag_k = FK_CMP;
    goto L_10061063; /* 0x10061059: jmp 0x10061063 */
L_1006105B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006105B: neg eax */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x1006105D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10061063; /* 0x1006105F: jl 0x10061063 */
L_10061061:
    edi = eax; /* 0x10061061: mov edi, eax */
L_10061063:
    PUSH32(esp, edi); /* 0x10061063: push edi */
    PUSH32(esp, esi); /* 0x10061064: push esi */
    RECOMP_CALL(sub_1002FB81); /* 0x10061065: call 0x1002fb81 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1006106A: push edi */
    PUSH32(esp, 0x30u); /* 0x1006106B: push 0x30 */
    PUSH32(esp, esi); /* 0x1006106D: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1006106E: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10061073: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100308DB; /* 0x10061076: jmp 0x100308db */
L_1006107B:
    ecx = MEM32(ebp + (-0xC)); /* 0x1006107B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1006107E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100308E6; /* 0x10061082: jmp 0x100308e6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100308EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100308EEu);

L_100308EE:
    PUSH32(esp, ebp); /* 0x100308EE: push ebp */
    ebp = esp; /* 0x100308EF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x100308F1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100308F4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100308F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100308FB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100308FE: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x10030901: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x10030904: push ebx */
    PUSH32(esp, edi); /* 0x10030905: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10030906: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x16u); /* 0x10030909: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1003090B: pop ebx */
    PUSH32(esp, ebx); /* 0x1003090C: push ebx */
    PUSH32(esp, ecx); /* 0x1003090D: push ecx */
    ecx = ebp + (-0x2C); /* 0x1003090E: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x10030911: push ecx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10030912: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x10030915: push dword ptr [eax] */
    RECOMP_CALL(sub_1001B131); /* 0x10030917: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1003091C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1003091F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10061087; /* 0x10030921: je 0x10061087 */
L_10030927:
    PUSH32(esp, esi); /* 0x10030927: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10030928: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1003092B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006109A; /* 0x1003092D: je 0x1006109a */
L_10030933:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10030933: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x10030936: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030947; /* 0x10030938: je 0x10030947 */
L_1003093A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003093A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1003093C: mov ecx, esi */
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x1003093E: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10030942: sete al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10030945: sub ecx, eax */
    _flag_k = FK_CMP;
L_10030947:
    ebx = MEM32(ebp + 0x14); /* 0x10030947: mov ebx, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x2C); /* 0x1003094A: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1003094D: push eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1003094E: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x10030951: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10030953: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030954: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0x2Du */ /* 0x10030956: cmp dword ptr [ebp - 0x2c], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1003095A: push ecx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1003095B: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1003095E: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10030960: push eax */
    RECOMP_CALL(sub_1001AFF1); /* 0x10030961: call 0x1001aff1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10030966: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10030969: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100610AD; /* 0x1003096B: jne 0x100610ad */
L_10030971:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10030971: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x2C); /* 0x10030974: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x10030977: push 0 */
    PUSH32(esp, eax); /* 0x10030979: push eax */
    PUSH32(esp, ebx); /* 0x1003097A: push ebx */
    PUSH32(esp, esi); /* 0x1003097B: push esi */
    PUSH32(esp, edi); /* 0x1003097C: push edi */
    RECOMP_CALL(sub_1003086D); /* 0x1003097D: call 0x1003086d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10030982: add esp, 0x18 */
    _flag_k = FK_ADD;
L_10030985:
    esi = POP32_VAL(esp); /* 0x10030985: pop esi */
L_10030986:
    ecx = MEM32(ebp + (-0x4)); /* 0x10030986: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10030989: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1003098A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1003098C: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1003098D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030992: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030994: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030995: ret  */
L_10061087:
    RECOMP_CALL(sub_1001177D); /* 0x10061087: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1006108C: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1006108E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x10061093: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_10030986; /* 0x10061095: jmp 0x10030986 */
L_1006109A:
    RECOMP_CALL(sub_1001177D); /* 0x1006109A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1006109F: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x100610A1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x100610A6: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_10030985; /* 0x100610A8: jmp 0x10030985 */
L_100610AD:
    MEM8(edi) = (uint8_t)(0); /* 0x100610AD: mov byte ptr [edi], 0 */
    RECOMP_BACKEDGE();
    goto L_10030985; /* 0x100610B0: jmp 0x10030985 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030A7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030A7Cu);

L_10030A7C:
    void_lift_trap(0x10030A7Cu, "arpl word ptr [edi + 0x6e], bp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10030AF5; /* 0x10030A7F: jae 0x10030af5 */
L_10030A81:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x10030A81: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebp); /* 0x10030A83: push ebp */
    ebp = esp; /* 0x10030A84: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10030A86: push ecx */
    PUSH32(esp, ecx); /* 0x10030A87: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030A88: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x10030A8B: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030A8E: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030A91: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030A94: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10030A99: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x10030A9B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10030AA0: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x10030AA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030AA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030AA6: ret  */
L_10030AF5:
    if (11u) _cf = (((MEM32(edi + 0x2)) >> 21) & 1u); /* 0x10030AF5: sal dword ptr [edi + 2], 0x8b */
    if (11u) { _flag_a = recomp_flags_pack((MEM32(edi + 0x2) << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(edi + 0x2) = MEM32(edi + 0x2) << 11u; /* 0x10030AF5: sal dword ptr [edi + 2], 0x8b */
    { uint32_t _rv = (MEM8(ecx)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(ecx) = (uint8_t)(_rv); } /* 0x10030AF9: rol byte ptr [ecx], 1 */
    PUSH32(esp, ebp); /* 0x10030AFB: push ebp */
    _flag_a = (uint32_t)((MEM8(ebx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | HI8(ecx))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | HI8(ecx)); /* 0x10030AFC: or byte ptr [ebx], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _st[0] = (double)(int32_t)MEM32(ebx) / _st[0]; /* 0x10030AFE: fidivr dword ptr [ebx] */
    { uint32_t _rv = (MEM32(edi)) & 0xFFFFFFFFu, _rn = ((0x83u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(edi) = _rv; } /* 0x10030B00: ror dword ptr [edi], 0x83 */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x10030B03: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x10030B05u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10030A83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030A83u);

L_10030A83:
    PUSH32(esp, ebp); /* 0x10030A83: push ebp */
    ebp = esp; /* 0x10030A84: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10030A86: push ecx */
    PUSH32(esp, ecx); /* 0x10030A87: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030A88: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x10030A8B: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030A8E: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030A91: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030A94: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10030A99: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x10030A9B: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10030AA0: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x10030AA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030AA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030AA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10030B0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030B0Cu);

L_10030B0C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10030B7D; /* 0x10030B0C: jbe 0x10030b7d */
L_10030B0E:
    esp = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0F59F980u); /* 0x10030B0E: imul esp, dword ptr [eax], 0xf59f980 */
    /* test MEM8(edx + 0x560002BF), LO8(edx) */ /* 0x10030B16: test byte ptr [edx + 0x560002bf], dl */
    _flag_a = (uint32_t)(MEM8(edx + 0x560002BF)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + 0xC); /* 0x10030B1C: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x10030B1F: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x10030B22: push esi */
    PUSH32(esp, eax); /* 0x10030B23: push eax */
    RECOMP_CALL(sub_1002326B); /* 0x10030B24: call 0x1002326b */
    RECOMP_FLAGS_IN();
    /* test MEM32(esi + 0x4), 0x4000u */ /* 0x10030B29: test dword ptr [esi + 4], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10030B30: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030B31: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CAC5; /* 0x10030B32: jne 0x1005cac5 */
L_10030B38:
    /* test MEM32(esi + 0x4), 0x2000u */ /* 0x10030B38: test dword ptr [esi + 4], 0x2000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CAEC; /* 0x10030B3F: jne 0x1005caec */
L_10030B45:
    edx = MEM32(ebp + (-0x4)); /* 0x10030B45: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x10030B48: mov ecx, dword ptr [ebp - 8] */
L_10030B4B:
    eax = MEM32(ebp + 0x8); /* 0x10030B4B: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x10030B4E: pop esi */
    MEM32(eax) = ecx; /* 0x10030B4F: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x10030B51: mov dword ptr [eax + 4], edx */
    goto L_10030B9C; /* 0x10030B54: jmp 0x10030b9c */
L_10030B7D:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10030B7D: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x83u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x83u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x83u); /* 0x10030B7E: or al, 0x83 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM8(eax), LO8(eax) */ /* 0x10030B80: cmp byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CA9B; /* 0x10030B82: je 0x1005ca9b */
L_10030B88:
    PUSH32(esp, eax); /* 0x10030B88: push eax */
    PUSH32(esp, 0x10030B0Cu); /* 0x10030B89: push 0x10030b0c */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030B8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030A83); /* 0x10030B91: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10030B96: add esp, 0xc */
    _flag_k = FK_ADD;
L_10030B99:
    eax = MEM32(ebp + 0x8); /* 0x10030B99: mov eax, dword ptr [ebp + 8] */
L_10030B9C:
    esp = ebp; /* 0x10030B9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030B9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030B9F: ret  */
L_1005CA9B:
    ecx = MEM32(ebp + 0x8); /* 0x1005CA9B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002A664u); /* 0x1005CA9E: push 0x1002a664 */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CAA3: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030B99; /* 0x1005CAA8: jmp 0x10030b99 */
L_1005CAC5:
    eax = ebp + (-0x8); /* 0x1005CAC5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CAC8: push eax */
    eax = ebp + (-0x10); /* 0x1005CAC9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005CACC: push eax */
    PUSH32(esp, 0x1005CB10u); /* 0x1005CACD: push 0x1005cb10 */
L_1005CAD2:
    ecx = ebp + (-0x18); /* 0x1005CAD2: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CAD5: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CADA: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CADC: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1005CAE1: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x1005CAE4: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_10030B4B; /* 0x1005CAE7: jmp 0x10030b4b */
L_1005CAEC:
    eax = ebp + (-0x8); /* 0x1005CAEC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CAEF: push eax */
    eax = ebp + (-0x10); /* 0x1005CAF0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005CAF3: push eax */
    PUSH32(esp, 0x1005CB1Cu); /* 0x1005CAF4: push 0x1005cb1c */
    RECOMP_BACKEDGE();
    goto L_1005CAD2; /* 0x1005CAF9: jmp 0x1005cad2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030B56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030B56u);

    goto L_10030B56;
L_10030B12:
    /* cmp LO8(ecx), 0x59u */ /* 0x10030B12: cmp cl, 0x59 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x59u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CAAD; /* 0x10030B15: je 0x1005caad */
L_10030B1B:
    PUSH32(esp, esi); /* 0x10030B1B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10030B1C: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x10030B1F: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x10030B22: push esi */
    PUSH32(esp, eax); /* 0x10030B23: push eax */
    RECOMP_CALL(sub_1002326B); /* 0x10030B24: call 0x1002326b */
    RECOMP_FLAGS_IN();
    /* test MEM32(esi + 0x4), 0x4000u */ /* 0x10030B29: test dword ptr [esi + 4], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10030B30: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030B31: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CAC5; /* 0x10030B32: jne 0x1005cac5 */
L_10030B38:
    /* test MEM32(esi + 0x4), 0x2000u */ /* 0x10030B38: test dword ptr [esi + 4], 0x2000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CAEC; /* 0x10030B3F: jne 0x1005caec */
L_10030B45:
    edx = MEM32(ebp + (-0x4)); /* 0x10030B45: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x10030B48: mov ecx, dword ptr [ebp - 8] */
L_10030B4B:
    eax = MEM32(ebp + 0x8); /* 0x10030B4B: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x10030B4E: pop esi */
    MEM32(eax) = ecx; /* 0x10030B4F: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x10030B51: mov dword ptr [eax + 4], edx */
    goto L_10030B9C; /* 0x10030B54: jmp 0x10030b9c */
L_10030B56:
    PUSH32(esp, ebp); /* 0x10030B56: push ebp */
    ebp = esp; /* 0x10030B57: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x10030B59: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10030B5E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x10030B61: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10030B63: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CAFB; /* 0x10030B65: je 0x1005cafb */
L_10030B6B:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10030B6B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030B12; /* 0x10030B6F: je 0x10030b12 */
L_10030B71:
    /* cmp LO8(ecx), 0x58u */ /* 0x10030B71: cmp cl, 0x58 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10030B12; /* 0x10030B74: jne 0x10030b12 */
L_10030B76:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10030B76: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x10030B77: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0xC); /* 0x10030B7C: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x10030B7F: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CA9B; /* 0x10030B82: je 0x1005ca9b */
L_10030B88:
    PUSH32(esp, eax); /* 0x10030B88: push eax */
    PUSH32(esp, 0x10030B0Cu); /* 0x10030B89: push 0x10030b0c */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030B8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030A83); /* 0x10030B91: call 0x10030a83 */
    RECOMP_FLAGS_IN();
L_10030B96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10030B96: add esp, 0xc */
    _flag_k = FK_ADD;
L_10030B99:
    eax = MEM32(ebp + 0x8); /* 0x10030B99: mov eax, dword ptr [ebp + 8] */
L_10030B9C:
    esp = ebp; /* 0x10030B9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030B9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030B9F: ret  */
L_1005CA9B:
    ecx = MEM32(ebp + 0x8); /* 0x1005CA9B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002A664u); /* 0x1005CA9E: push 0x1002a664 */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CAA3: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030B99; /* 0x1005CAA8: jmp 0x10030b99 */
L_1005CAAD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005CAAD: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CAB0: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CAB1: push dword ptr [ebp + 8] */
    MEM32(0x100E02F0) = eax; /* 0x1005CAB4: mov dword ptr [0x100e02f0], eax */
    RECOMP_CALL(sub_1009ED5F); /* 0x1005CAB9: call 0x1009ed5f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005CABE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005CABF: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10030B99; /* 0x1005CAC0: jmp 0x10030b99 */
L_1005CAC5:
    eax = ebp + (-0x8); /* 0x1005CAC5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CAC8: push eax */
    eax = ebp + (-0x10); /* 0x1005CAC9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005CACC: push eax */
    PUSH32(esp, 0x1005CB10u); /* 0x1005CACD: push 0x1005cb10 */
L_1005CAD2:
    ecx = ebp + (-0x18); /* 0x1005CAD2: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CAD5: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CADA: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CADC: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1005CAE1: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x1005CAE4: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_10030B4B; /* 0x1005CAE7: jmp 0x10030b4b */
L_1005CAEC:
    eax = ebp + (-0x8); /* 0x1005CAEC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CAEF: push eax */
    eax = ebp + (-0x10); /* 0x1005CAF0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005CAF3: push eax */
    PUSH32(esp, 0x1005CB1Cu); /* 0x1005CAF4: push 0x1005cb1c */
    RECOMP_BACKEDGE();
    goto L_1005CAD2; /* 0x1005CAF9: jmp 0x1005cad2 */
L_1005CAFB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005CAFB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1005CAFE: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CB00: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1005CB03: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030B96; /* 0x1005CB08: jmp 0x10030b96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030BA0u);

L_10030BA0:
    PUSH32(esp, ebp); /* 0x10030BA0: push ebp */
    ebp = esp; /* 0x10030BA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10030BA3: push ecx */
    PUSH32(esp, ecx); /* 0x10030BA4: push ecx */
    eax = MEM32(0x100E02F0); /* 0x10030BA5: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, esi); /* 0x10030BAA: push esi */
    PUSH32(esp, edi); /* 0x10030BAB: push edi */
    SET_LO8(eax, MEM8(eax)); /* 0x10030BAC: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x10030BAE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CB77; /* 0x10030BB0: je 0x1005cb77 */
L_10030BB6:
    /* cmp LO8(eax), 0x36u */ /* 0x10030BB6: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_10030BC2; /* 0x10030BB8: jl 0x10030bc2 */
L_10030BBA:
    /* cmp LO8(eax), 0x39u */ /* 0x10030BBA: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005CB2A; /* 0x10030BBC: jle 0x1005cb2a */
L_10030BC2:
    /* cmp LO8(eax), 0x5Fu */ /* 0x10030BC2: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CB2A; /* 0x10030BC4: je 0x1005cb2a */
L_10030BCA:
    esi = MEM32(ebp + 0x14); /* 0x10030BCA: mov esi, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x8); /* 0x10030BCD: lea eax, [ebp - 8] */
    PUSH32(esp, 0); /* 0x10030BD0: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030BD2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10030BD5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030BD6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10030BD9: push eax */
    RECOMP_CALL(sub_10023486); /* 0x10030BDA: call 0x10023486 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030BDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi), 0x2Au */ /* 0x10030BE1: cmp byte ptr [esi], 0x2a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10030BE4: sete al */
    PUSH32(esp, eax); /* 0x10030BE7: push eax */
    eax = ebp + (-0x8); /* 0x10030BE8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10030BEB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030BEC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030B56); /* 0x10030BEF: call 0x10030b56 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x10030BF4: add esp, 0x20 */
    _flag_k = FK_ADD;
L_10030BF7:
    eax = MEM32(ebp + 0x8); /* 0x10030BF7: mov eax, dword ptr [ebp + 8] */
L_10030BFA:
    edi = POP32_VAL(esp); /* 0x10030BFA: pop edi */
    esi = POP32_VAL(esp); /* 0x10030BFB: pop esi */
    esp = ebp; /* 0x10030BFC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030BFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030BFF: ret  */
L_1005CB2A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005CB2A: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x8); /* 0x1005CB2D: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CB30: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1005CB35: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005CB38: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x10); /* 0x1005CB3A: mov edi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), esi */ /* 0x1005CB3D: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CB57; /* 0x1005CB3F: je 0x1005cb57 */
L_1005CB41:
    /* cmp MEM32(edi), esi */ /* 0x1005CB41: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CB4E; /* 0x1005CB43: je 0x1005cb4e */
L_1005CB45:
    /* test MEM32(edi + 0x4), 0x100u */ /* 0x1005CB45: test dword ptr [edi + 4], 0x100 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CB57; /* 0x1005CB4C: jne 0x1005cb57 */
L_1005CB4E:
    PUSH32(esp, eax); /* 0x1005CB4E: push eax */
    ecx = ebp + (-0x8); /* 0x1005CB4F: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CB52: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005CB57:
    /* cmp MEM32(edi), esi */ /* 0x1005CB57: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CB64; /* 0x1005CB59: je 0x1005cb64 */
L_1005CB5B:
    PUSH32(esp, edi); /* 0x1005CB5B: push edi */
    ecx = ebp + (-0x8); /* 0x1005CB5C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CB5F: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005CB64:
    eax = ebp + (-0x8); /* 0x1005CB64: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CB67: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CB68: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009F35B); /* 0x1005CB6B: call 0x1009f35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005CB70: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005CB71: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10030BF7; /* 0x1005CB72: jmp 0x10030bf7 */
L_1005CB77:
    PUSH32(esp, 1); /* 0x1005CB77: push 1 */
    ecx = ebp + (-0x8); /* 0x1005CB79: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CB7C: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005CB81: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x8); /* 0x1005CB84: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1005CB87: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1005CB8C: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005CB8F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x1005CB91: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CB9E; /* 0x1005CB93: je 0x1005cb9e */
L_1005CB95:
    PUSH32(esp, edi); /* 0x1005CB95: push edi */
    ecx = ebp + (-0x8); /* 0x1005CB96: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CB99: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005CB9E:
    PUSH32(esp, ebx); /* 0x1005CB9E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1005CB9F: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ebx), esi */ /* 0x1005CBA2: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CBBD; /* 0x1005CBA4: je 0x1005cbbd */
L_1005CBA6:
    /* cmp MEM32(edi), esi */ /* 0x1005CBA6: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CBB4; /* 0x1005CBA8: je 0x1005cbb4 */
L_1005CBAA:
    PUSH32(esp, 0x20u); /* 0x1005CBAA: push 0x20 */
    ecx = ebp + (-0x8); /* 0x1005CBAC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CBAF: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005CBB4:
    PUSH32(esp, ebx); /* 0x1005CBB4: push ebx */
    ecx = ebp + (-0x8); /* 0x1005CBB5: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005CBB8: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005CBBD:
    eax = MEM32(ebp + 0x8); /* 0x1005CBBD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1005CBC0: mov ecx, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1005CBC3: pop ebx */
    MEM32(eax) = ecx; /* 0x1005CBC4: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1005CBC6: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1005CBC9: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_10030BFA; /* 0x1005CBCC: jmp 0x10030bfa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030C34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030C34u);

L_10030C34:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x10030C34: add byte ptr es:[ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x10030C38: in al, dx */
    PUSH32(esp, ecx); /* 0x10030C39: push ecx */
    PUSH32(esp, ecx); /* 0x10030C3A: push ecx */
    eax = MEM32(0x100E02F0); /* 0x10030C3B: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x10030C40: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10030C42: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CF8C; /* 0x10030C44: je 0x1005cf8c */
L_10030C4A:
    PUSH32(esp, 0); /* 0x10030C4A: push 0 */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x10030C4C: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CF9B; /* 0x10030C4F: je 0x1005cf9b */
L_10030C55:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030C55: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002A7CF); /* 0x10030C58: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10030C5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030C5E: pop ecx */
L_10030C5F:
    eax = MEM32(ebp + 0x8); /* 0x10030C5F: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x10030C62: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030C64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030C65: ret  */
L_1005CF8C:
    ecx = MEM32(ebp + 0x8); /* 0x1005CF8C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1005CF8F: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF91: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030C5F; /* 0x1005CF96: jmp 0x10030c5f */
L_1005CF9B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CF9B: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005CF9C: mov dword ptr [0x100e02f0], eax */
    eax = ebp + (-0x8); /* 0x1005CFA1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CFA4: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005CFA5: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005CFAA: push eax */
    PUSH32(esp, 0x2Du); /* 0x1005CFAB: push 0x2d */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CFAD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EBEA); /* 0x1005CFB0: call 0x1009ebea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1005CFB5: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10030C5F; /* 0x1005CFB8: jmp 0x10030c5f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030C36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030C36u);

L_10030C36:
    PUSH32(esp, ebp); /* 0x10030C36: push ebp */
    ebp = esp; /* 0x10030C37: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10030C39: push ecx */
    PUSH32(esp, ecx); /* 0x10030C3A: push ecx */
    eax = MEM32(0x100E02F0); /* 0x10030C3B: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x10030C40: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10030C42: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CF8C; /* 0x10030C44: je 0x1005cf8c */
L_10030C4A:
    PUSH32(esp, 0); /* 0x10030C4A: push 0 */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x10030C4C: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CF9B; /* 0x10030C4F: je 0x1005cf9b */
L_10030C55:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030C55: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002A7CF); /* 0x10030C58: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10030C5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030C5E: pop ecx */
L_10030C5F:
    eax = MEM32(ebp + 0x8); /* 0x10030C5F: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x10030C62: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030C64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030C65: ret  */
L_1005CF8C:
    ecx = MEM32(ebp + 0x8); /* 0x1005CF8C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1005CF8F: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF91: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030C5F; /* 0x1005CF96: jmp 0x10030c5f */
L_1005CF9B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005CF9B: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005CF9C: mov dword ptr [0x100e02f0], eax */
    eax = ebp + (-0x8); /* 0x1005CFA1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005CFA4: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1005CFA5: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005CFAA: push eax */
    PUSH32(esp, 0x2Du); /* 0x1005CFAB: push 0x2d */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CFAD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EBEA); /* 0x1005CFB0: call 0x1009ebea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1005CFB5: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10030C5F; /* 0x1005CFB8: jmp 0x10030c5f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030C66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030C66u);

L_10030C66:
    PUSH32(esp, ebp); /* 0x10030C66: push ebp */
    ebp = esp; /* 0x10030C67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x10030C69: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10030C6F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10030C74: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10030C76: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E02F0); /* 0x10030C79: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x10030C7E: push ebx */
    PUSH32(esp, esi); /* 0x10030C7F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10030C80: mov esi, dword ptr [ebp + 8] */
    SET_LO8(ebx, MEM8(eax)); /* 0x10030C83: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10030C85: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10030C86: push edi */
    edi = (int32_t)(int8_t)LO8(ebx); /* 0x10030C87: movsx edi, bl */
    MEM32(0x100E02F0) = eax; /* 0x10030C8A: mov dword ptr [0x100e02f0], eax */
    /* cmp edi, 0x45u */ /* 0x10030C8F: cmp edi, 0x45 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D280; /* 0x10030C92: jg 0x1005d280 */
L_10030C98:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030CC6; /* 0x10030C98: je 0x10030cc6 */
L_10030C9A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0; /* 0x10030C9A: sub edi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D273; /* 0x10030C9D: je 0x1005d273 */
L_10030CA3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x30u; /* 0x10030CA3: sub edi, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D140; /* 0x10030CA6: jne 0x1005d140 */
L_10030CAC:
    PUSH32(esp, esi); /* 0x10030CAC: push esi */
    RECOMP_CALL(sub_10030C36); /* 0x10030CAD: call 0x10030c36 */
    RECOMP_FLAGS_IN();
L_10030CB2:
    ecx = POP32_VAL(esp); /* 0x10030CB2: pop ecx */
L_10030CB3:
    ecx = MEM32(ebp + (-0x4)); /* 0x10030CB3: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x10030CB6: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x10030CB8: pop edi */
    esi = POP32_VAL(esp); /* 0x10030CB9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10030CBA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10030CBC: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10030CBD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10030CC2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030CC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030CC5: ret  */
L_10030CC6:
    PUSH32(esp, esi); /* 0x10030CC6: push esi */
    RECOMP_CALL(sub_10023854); /* 0x10030CC7: call 0x10023854 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB2; /* 0x10030CCC: jmp 0x10030cb2 */
L_1005D140:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D140: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D236; /* 0x1005D141: je 0x1005d236 */
L_1005D147:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D147: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D19B; /* 0x1005D148: je 0x1005d19b */
L_1005D14A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x12u; /* 0x1005D14A: sub edi, 0x12 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D1DB; /* 0x1005D14D: jne 0x1005d1db */
L_1005D153:
    eax = ebp + (-0x80); /* 0x1005D153: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1005D156: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D157: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D15C: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D166: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D2E5; /* 0x1005D167: je 0x1005d2e5 */
L_1005D16D:
    PUSH32(esp, 0x10u); /* 0x1005D16D: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D16F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D172: push eax */
    ecx = ebp + (-0x80); /* 0x1005D173: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D176: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D17B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D17E: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D17F: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D184: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D185: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D18B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D18C: pop ecx */
    /* test eax, eax */ /* 0x1005D18D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D2E5; /* 0x1005D18F: je 0x1005d2e5 */
L_1005D195:
    PUSH32(esp, eax); /* 0x1005D195: push eax */
    goto L_1005D246; /* 0x1005D196: jmp 0x1005d246 */
L_1005D19B:
    eax = ebp + (-0x80); /* 0x1005D19B: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1005D19E: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D19F: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x88); /* 0x1005D1A4: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1005D1AA: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D1AB: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x7C)), 1 */ /* 0x1005D1B0: cmp byte ptr [ebp - 0x7c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x7C))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x1005D1B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D1B5: pop ecx */
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D279; /* 0x1005D1B6: jg 0x1005d279 */
L_1005D1BC:
    /* cmp MEM8(ebp + (-0x84)), 1 */ /* 0x1005D1BC: cmp byte ptr [ebp - 0x84], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x84))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1005D279; /* 0x1005D1C3: jg 0x1005d279 */
L_1005D1C9:
    PUSH32(esp, 0x64u); /* 0x1005D1C9: push 0x64 */
    eax = ebp + (-0x77); /* 0x1005D1CB: lea eax, [ebp - 0x77] */
    PUSH32(esp, eax); /* 0x1005D1CE: push eax */
    ecx = ebp + (-0x80); /* 0x1005D1CF: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D1D2: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005D1D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005D1E9; /* 0x1005D1D9: jne 0x1005d1e9 */
L_1005D1DB:
    PUSH32(esp, 2); /* 0x1005D1DB: push 2 */
L_1005D1DD:
    ecx = esi; /* 0x1005D1DD: mov ecx, esi */
    RECOMP_CALL(sub_1009EB14); /* 0x1005D1DF: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D1E4: jmp 0x10030cb3 */
L_1005D1E9:
    SET_LO8(eax, MEM8(ebp + (-0x77))); /* 0x1005D1E9: mov al, byte ptr [ebp - 0x77] */
    MEM8(ebp + (-0x78)) = (uint8_t)(LO8(eax)); /* 0x1005D1EC: mov byte ptr [ebp - 0x78], al */
    /* cmp LO8(eax), 0x2Du */ /* 0x1005D1EF: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D1FF; /* 0x1005D1F1: jne 0x1005d1ff */
L_1005D1F3:
    SET_LO8(eax, MEM8(ebp + (-0x76))); /* 0x1005D1F3: mov al, byte ptr [ebp - 0x76] */
    MEM8(ebp + (-0x77)) = (uint8_t)(LO8(eax)); /* 0x1005D1F6: mov byte ptr [ebp - 0x77], al */
    MEM8(ebp + (-0x76)) = (uint8_t)(0x2Eu); /* 0x1005D1F9: mov byte ptr [ebp - 0x76], 0x2e */
    goto L_1005D203; /* 0x1005D1FD: jmp 0x1005d203 */
L_1005D1FF:
    MEM8(ebp + (-0x77)) = (uint8_t)(0x2Eu); /* 0x1005D1FF: mov byte ptr [ebp - 0x77], 0x2e */
L_1005D203:
    eax = ebp + (-0x88); /* 0x1005D203: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1005D209: push eax */
    PUSH32(esp, esi); /* 0x1005D20A: push esi */
    PUSH32(esp, 0x65u); /* 0x1005D20B: push 0x65 */
    eax = ebp + (-0xA0); /* 0x1005D20D: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1005D213: push eax */
    eax = ebp + (-0x78); /* 0x1005D214: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1005D217: push eax */
    ecx = ebp + (-0xC0); /* 0x1005D218: lea ecx, [ebp - 0xc0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D21E: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D223: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1005D225: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
L_1005D22A:
    ecx = eax; /* 0x1005D22A: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D22C: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D231: jmp 0x10030cb3 */
L_1005D236:
    /* cmp MEM8(eax), 0x40u */ /* 0x1005D236: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D252; /* 0x1005D239: jne 0x1005d252 */
L_1005D23B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005D23B: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005D23C: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 0x1005D3D0u); /* 0x1005D241: push 0x1005d3d0 */
L_1005D246:
    ecx = esi; /* 0x1005D246: mov ecx, esi */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D248: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D24D: jmp 0x10030cb3 */
L_1005D252:
    eax = ebp + (-0xC8); /* 0x1005D252: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x1005D258: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1005D259: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D25E: pop ecx */
    PUSH32(esp, eax); /* 0x1005D25F: push eax */
    PUSH32(esp, esi); /* 0x1005D260: push esi */
    PUSH32(esp, 0x10030C34u); /* 0x1005D261: push 0x10030c34 */
    ecx = ebp + (-0x90); /* 0x1005D266: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D26C: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1005D22A; /* 0x1005D271: jmp 0x1005d22a */
L_1005D273:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005D273: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1005D274: mov dword ptr [0x100e02f0], eax */
L_1005D279:
    PUSH32(esp, 1); /* 0x1005D279: push 1 */
    RECOMP_BACKEDGE();
    goto L_1005D1DD; /* 0x1005D27B: jmp 0x1005d1dd */
L_1005D280:
    /* cmp edi, 0x4Au */ /* 0x1005D280: cmp edi, 0x4a */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1005D326; /* 0x1005D283: jle 0x1005d326 */
L_1005D289:
    /* cmp edi, 0x51u */ /* 0x1005D289: cmp edi, 0x51 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D153; /* 0x1005D28C: je 0x1005d153 */
L_1005D292:
    /* cmp edi, 0x52u */ /* 0x1005D292: cmp edi, 0x52 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D2B3; /* 0x1005D295: je 0x1005d2b3 */
L_1005D297:
    /* cmp edi, 0x53u */ /* 0x1005D297: cmp edi, 0x53 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D1DB; /* 0x1005D29A: jne 0x1005d1db */
L_1005D2A0:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005D2A0: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1005D2A3: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005D2A7: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D2AE: jmp 0x10030cb3 */
L_1005D2B3:
    PUSH32(esp, 0); /* 0x1005D2B3: push 0 */
    eax = ebp + (-0x88); /* 0x1005D2B5: lea eax, [ebp - 0x88] */
    PUSH32(esp, 0); /* 0x1005D2BB: push 0 */
    PUSH32(esp, eax); /* 0x1005D2BD: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1005D2BE: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x1005D2C3: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1005D2C6: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D2C7: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x88)); /* 0x1005D2CC: mov eax, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005D2D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x1005D2D5: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x84)); /* 0x1005D2D7: mov eax, dword ptr [ebp - 0x84] */
    MEM32(esi + 0x4) = eax; /* 0x1005D2DD: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D2E0: jmp 0x10030cb3 */
L_1005D2E5:
    eax = ebp + (-0x80); /* 0x1005D2E5: lea eax, [ebp - 0x80] */
    ecx = ebp + (-0xC); /* 0x1005D2E8: lea ecx, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1005D2EB: push eax */
    eax = ebp + (-0x88); /* 0x1005D2EC: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1005D2F2: push eax */
    /* cmp LO8(ebx), 0x44u */ /* 0x1005D2F3: cmp bl, 0x44 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005D31F; /* 0x1005D2F6: jne 0x1005d31f */
L_1005D2F8:
    PUSH32(esp, 0x10062724u); /* 0x1005D2F8: push 0x10062724 */
L_1005D2FD:
    RECOMP_CALL(sub_10022BC1); /* 0x1005D2FD: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D302: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D304: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100626E8u); /* 0x1005D309: push 0x100626e8 */
    PUSH32(esp, esi); /* 0x1005D30E: push esi */
    ecx = ebp + (-0x88); /* 0x1005D30F: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_1002A782); /* 0x1005D315: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D31A: jmp 0x10030cb3 */
L_1005D31F:
    PUSH32(esp, 0x10062704u); /* 0x1005D31F: push 0x10062704 */
    RECOMP_BACKEDGE();
    goto L_1005D2FD; /* 0x1005D324: jmp 0x1005d2fd */
L_1005D326:
    PUSH32(esp, 0x7Bu); /* 0x1005D326: push 0x7b */
    ecx = ebp + (-0x80); /* 0x1005D328: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1002A173); /* 0x1005D32B: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - 0x48u); /* 0x1005D330: sub bl, 0x48 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ebx), 2 */ /* 0x1005D333: cmp bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1005D358; /* 0x1005D336: ja 0x1005d358 */
L_1005D338:
    eax = ebp + (-0xB0); /* 0x1005D338: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x1005D33E: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1005D33F: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D344: pop ecx */
    PUSH32(esp, eax); /* 0x1005D345: push eax */
    ecx = ebp + (-0x80); /* 0x1005D346: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D349: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1005D34E: push 0x2c */
    ecx = ebp + (-0x80); /* 0x1005D350: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005D353: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005D358:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x46u; /* 0x1005D358: sub edi, 0x46 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D389; /* 0x1005D35B: je 0x1005d389 */
L_1005D35D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D35D: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D369; /* 0x1005D35E: je 0x1005d369 */
L_1005D360:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D360: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D3A9; /* 0x1005D361: je 0x1005d3a9 */
L_1005D363:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D363: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005D389; /* 0x1005D364: je 0x1005d389 */
L_1005D366:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1005D366: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005D3BF; /* 0x1005D367: jne 0x1005d3bf */
L_1005D369:
    eax = ebp + (-0x98); /* 0x1005D369: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1005D36F: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D370: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D375: pop ecx */
    PUSH32(esp, eax); /* 0x1005D376: push eax */
    ecx = ebp + (-0x80); /* 0x1005D377: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D37A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1005D37F: push 0x2c */
    ecx = ebp + (-0x80); /* 0x1005D381: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005D384: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005D389:
    eax = ebp + (-0xA8); /* 0x1005D389: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x1005D38F: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D390: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D395: pop ecx */
    PUSH32(esp, eax); /* 0x1005D396: push eax */
    ecx = ebp + (-0x80); /* 0x1005D397: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D39A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1005D39F: push 0x2c */
    ecx = ebp + (-0x80); /* 0x1005D3A1: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005D3A4: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005D3A9:
    eax = ebp + (-0xB8); /* 0x1005D3A9: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x1005D3AF: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D3B0: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D3B5: pop ecx */
    PUSH32(esp, eax); /* 0x1005D3B6: push eax */
    ecx = ebp + (-0x80); /* 0x1005D3B7: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D3BA: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1005D3BF:
    PUSH32(esp, 0x7Du); /* 0x1005D3BF: push 0x7d */
    PUSH32(esp, esi); /* 0x1005D3C1: push esi */
    ecx = ebp + (-0x80); /* 0x1005D3C2: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1002AC44); /* 0x1005D3C5: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030CB3; /* 0x1005D3CA: jmp 0x10030cb3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030CE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030CE7u);

L_10030CE7:
    PUSH32(esp, ebp); /* 0x10030CE7: push ebp */
    ebp = esp; /* 0x10030CE8: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10030CEA: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, 9 */ /* 0x10030CED: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005B61A; /* 0x10030CF0: ja 0x1005b61a */
L_10030CF6:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x10030CF6: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030D14; /* 0x10030CF9: je 0x10030d14 */
L_10030CFB:
    /* cmp edx, MEM32(ecx) */ /* 0x10030CFB: cmp edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10030D14; /* 0x10030CFD: jg 0x10030d14 */
L_10030CFF:
    edx = MEM32(ecx + edx * 4 + 0x4); /* 0x10030CFF: mov edx, dword ptr [ecx + edx*4 + 4] */
    eax = MEM32(ebp + 0x8); /* 0x10030D03: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x10030D06: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x10030D08: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x10030D0A: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x10030D0D: mov dword ptr [eax + 4], ecx */
L_10030D10:
    ebp = POP32_VAL(esp); /* 0x10030D10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10030D11: ret 8 */
L_10030D14:
    PUSH32(esp, 2); /* 0x10030D14: push 2 */
    goto L_1005B61C; /* 0x10030D16: jmp 0x1005b61c */
L_1005B61A:
    PUSH32(esp, 3); /* 0x1005B61A: push 3 */
L_1005B61C:
    ecx = MEM32(ebp + 0x8); /* 0x1005B61C: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005B61F: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005B624: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10030D10; /* 0x1005B627: jmp 0x10030d10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030D1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030D1Bu);

L_10030D1B:
    PUSH32(esp, ebp); /* 0x10030D1B: push ebp */
    ebp = esp; /* 0x10030D1C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10030D1E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10030D20: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030D23: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030D26: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030D29: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030D63); /* 0x10030D2C: call 0x10030d63 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10030D31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030D32: ret  */
    RECOMP_REGS_OUT();
}

void sub_10030D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030D63u);

    goto L_10030D63;
L_10030D5C:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x10030D5C: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10030DBD; /* 0x10030D5F: jb 0x10030dbd */
L_10030D61:
    goto L_10030DD6; /* 0x10030D61: jmp 0x10030dd6 */
L_10030D63:
    PUSH32(esp, ebp); /* 0x10030D63: push ebp */
    ebp = esp; /* 0x10030D64: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x10030D66: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10030D69: push esi */
    /* test ecx, ecx */ /* 0x10030D6A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100540FA; /* 0x10030D6C: je 0x100540fa */
L_10030D72:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10030D72: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10030D76: push ebx */
    PUSH32(esp, edi); /* 0x10030D77: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_10054110; /* 0x10030D78: jbe 0x10054110 */
L_10030D7E:
    edx = MEM32(ebp + 0x18); /* 0x10030D7E: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030D81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x10030D83: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(0); /* 0x10030D85: mov byte ptr [ecx], 0 */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10030D88: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10030D8B: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10030D8C: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005411A; /* 0x10030D8F: jbe 0x1005411a */
L_10030D95:
    eax = MEM32(ebp + 0x14); /* 0x10030D95: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x22u); /* 0x10030D98: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x10030D9A: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x10030D9D: pop esi */
    /* cmp eax, esi */ /* 0x10030D9E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10054110; /* 0x10030DA0: ja 0x10054110 */
L_10030DA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030DA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x10030DA8: mov edi, ecx */
    MEM32(ebp + 0x18) = eax; /* 0x10030DAA: mov dword ptr [ebp + 0x18], eax */
    /* test edx, edx */ /* 0x10030DAD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054123; /* 0x10030DAF: jne 0x10054123 */
L_10030DB5:
    eax = MEM32(ebp + 0x8); /* 0x10030DB5: mov eax, dword ptr [ebp + 8] */
L_10030DB8:
    ecx = MEM32(ebp + 0x18); /* 0x10030DB8: mov ecx, dword ptr [ebp + 0x18] */
    ebx = edi; /* 0x10030DBB: mov ebx, edi */
L_10030DBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10030DBD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x14); /* 0x10030DBF: div dword ptr [ebp + 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 9 */ /* 0x10030DC2: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10054137; /* 0x10030DC5: ja 0x10054137 */
L_10030DCB:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x10030DCB: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10030DCE:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x10030DCE: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10030DD0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030DD1: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x10030DD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030D5C; /* 0x10030DD4: jne 0x10030d5c */
L_10030DD6:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x10030DD6: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x10030DD9: mov ecx, dword ptr [ebp + 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005413F; /* 0x10030DDC: jae 0x1005413f */
L_10030DE2:
    MEM8(edi) = (uint8_t)(0); /* 0x10030DE2: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10030DE5: dec edi */
    _flag_k = FK_DEC;
L_10030DE6:
    SET_LO8(eax, MEM8(ebx)); /* 0x10030DE6: mov al, byte ptr [ebx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x10030DE8: mov cl, byte ptr [edi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x10030DEA: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10030DEC: dec edi */
    _flag_k = FK_DEC;
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x10030DED: mov byte ptr [ebx], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10030DEF: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x10030DF0: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10030DE6; /* 0x10030DF2: jb 0x10030de6 */
L_10030DF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030DF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10030DF6:
    edi = POP32_VAL(esp); /* 0x10030DF6: pop edi */
    ebx = POP32_VAL(esp); /* 0x10030DF7: pop ebx */
L_10030DF8:
    esi = POP32_VAL(esp); /* 0x10030DF8: pop esi */
    ebp = POP32_VAL(esp); /* 0x10030DF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10030DFA: ret 0x14 */
L_100540FA:
    RECOMP_CALL(sub_1001177D); /* 0x100540FA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100540FF: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10054101: pop esi */
    MEM32(eax) = esi; /* 0x10054102: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10054104: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10054109: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030DF8; /* 0x1005410B: jmp 0x10030df8 */
L_10054110:
    RECOMP_CALL(sub_1001177D); /* 0x10054110: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10054115: push 0x16 */
L_10054117:
    esi = POP32_VAL(esp); /* 0x10054117: pop esi */
    goto L_10054147; /* 0x10054118: jmp 0x10054147 */
L_1005411A:
    RECOMP_CALL(sub_1001177D); /* 0x1005411A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1005411F: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10054117; /* 0x10054121: jmp 0x10054117 */
L_10054123:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10054123: inc eax */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(0x2Du); /* 0x10054124: mov byte ptr [ecx], 0x2d */
    MEM32(ebp + 0x18) = eax; /* 0x10054127: mov dword ptr [ebp + 0x18], eax */
    edi = ecx + 0x1; /* 0x1005412A: lea edi, [ecx + 1] */
    eax = MEM32(ebp + 0x8); /* 0x1005412D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10054130: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10030DB8; /* 0x10054132: jmp 0x10030db8 */
L_10054137:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x57u); /* 0x10054137: add dl, 0x57 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    goto L_10030DCE; /* 0x1005413A: jmp 0x10030dce */
L_1005413F:
    MEM8(ecx) = (uint8_t)(0); /* 0x1005413F: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x10054142: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_10054147:
    MEM32(eax) = esi; /* 0x10054147: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10054149: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005414E: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10030DF6; /* 0x10054150: jmp 0x10030df6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030DFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030DFDu);

L_10030DFD:
    PUSH32(esp, ebp); /* 0x10030DFD: push ebp */
    ebp = esp; /* 0x10030DFE: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x10030E00: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10030E10; /* 0x10030E04: jne 0x10030e10 */
L_10030E06:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10030E06: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100540F2; /* 0x10030E0A: jl 0x100540f2 */
L_10030E10:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030E10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10030E12:
    PUSH32(esp, eax); /* 0x10030E12: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10030E13: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10030E16: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10030E19: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030E1C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030D63); /* 0x10030E1F: call 0x10030d63 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10030E24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030E25: ret  */
L_100540F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100540F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100540F4: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10030E12; /* 0x100540F5: jmp 0x10030e12 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030E26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030E26u);

L_10030E26:
    PUSH32(esp, ebp); /* 0x10030E26: push ebp */
    ebp = esp; /* 0x10030E27: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10030E29: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x10030E2D: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10030E30: push esi */
    eax = MEM32(eax); /* 0x10030E31: mov eax, dword ptr [eax] */
    MEM32(0x100E0ED4) = eax; /* 0x10030E33: mov dword ptr [0x100e0ed4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100328FE; /* 0x10030E38: jne 0x100328fe */
L_10030E3E:
    RECOMP_CALL(sub_10031D5C); /* 0x10030E3E: call 0x10031d5c */
    RECOMP_FLAGS_IN();
L_10030E43:
    esi = eax; /* 0x10030E43: mov esi, eax */
    /* test esi, esi */ /* 0x10030E45: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10030E87; /* 0x10030E47: js 0x10030e87 */
L_10030E49:
    ecx = MEM32(ebp + 0x8); /* 0x10030E49: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF60C); /* 0x10030E4C: mov eax, dword ptr [0x100df60c] */
    MEM32(ecx) = eax; /* 0x10030E51: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0xC); /* 0x10030E53: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(0x100DF614); /* 0x10030E56: mov eax, dword ptr [0x100df614] */
    MEM32(ecx) = eax; /* 0x10030E5B: mov dword ptr [ecx], eax */
    /* cmp MEM32(0x100DF61C), 0 */ /* 0x10030E5D: cmp dword ptr [0x100df61c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10030E7D; /* 0x10030E64: jne 0x10030e7d */
L_10030E66:
    RECOMP_CALL(sub_100295B9); /* 0x10030E66: call 0x100295b9 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E029C) = eax; /* 0x10030E6B: mov dword ptr [0x100e029c], eax */
    RECOMP_CALL(sub_10029704); /* 0x10030E70: call 0x10029704 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10030E75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10053BAE; /* 0x10030E77: js 0x10053bae */
L_10030E7D:
    ecx = MEM32(ebp + 0x10); /* 0x10030E7D: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(0x100DF61C); /* 0x10030E80: mov eax, dword ptr [0x100df61c] */
    MEM32(ecx) = eax; /* 0x10030E85: mov dword ptr [ecx], eax */
L_10030E87:
    eax = esi; /* 0x10030E87: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10030E89: pop esi */
    ebp = POP32_VAL(esp); /* 0x10030E8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030E8B: ret  */
L_100328FE:
    RECOMP_CALL(sub_10032D31); /* 0x100328FE: call 0x10032d31 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030E43; /* 0x10032903: jmp 0x10030e43 */
L_10053BAE:
    RECOMP_CALL(sub_100A4C6A); /* 0x10053BAE: call 0x100a4c6a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10030E7D; /* 0x10053BB3: jmp 0x10030e7d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030E8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030E8Cu);

L_10030E8C:
    PUSH32(esp, ebp); /* 0x10030E8C: push ebp */
    ebp = esp; /* 0x10030E8D: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10030E8F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056365; /* 0x10030E93: je 0x10056365 */
L_10030E99:
    PUSH32(esp, ebx); /* 0x10030E99: push ebx */
    PUSH32(esp, edi); /* 0x10030E9A: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030E9B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10030E9E: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x10030EA3: push 2 */
    edi = eax + 0x1; /* 0x10030EA5: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x10030EA8: push edi */
    RECOMP_CALL(sub_1001CBFF); /* 0x10030EA9: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10030EAE: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10030EB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x10030EB3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030ED2; /* 0x10030EB5: je 0x10030ed2 */
L_10030EB7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030EB7: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10030EBA: push edi */
    PUSH32(esp, ebx); /* 0x10030EBB: push ebx */
    RECOMP_CALL(sub_10011693); /* 0x10030EBC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10030EC1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10030EC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056369; /* 0x10030EC6: jne 0x10056369 */
L_10030ECC:
    eax = ebx; /* 0x10030ECC: mov eax, ebx */
L_10030ECE:
    edi = POP32_VAL(esp); /* 0x10030ECE: pop edi */
    ebx = POP32_VAL(esp); /* 0x10030ECF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10030ED0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030ED1: ret  */
L_10030ED2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030ED2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10030ECE; /* 0x10030ED4: jmp 0x10030ece */
L_10056365:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056365: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056367: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056368: ret  */
L_10056369:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056369: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005636B: push eax */
    PUSH32(esp, eax); /* 0x1005636C: push eax */
    PUSH32(esp, eax); /* 0x1005636D: push eax */
    PUSH32(esp, eax); /* 0x1005636E: push eax */
    PUSH32(esp, eax); /* 0x1005636F: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10056370: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10056375u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030EDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030EDDu);

L_10030EDD:
    PUSH32(esp, 1); /* 0x10030EDD: push 1 */
    RECOMP_CALL(sub_1002E8D6); /* 0x10030EDF: call 0x1002e8d6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10030EE4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030EE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_10030EE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030EE6u);

L_10030EE6:
    PUSH32(esp, ebp); /* 0x10030EE6: push ebp */
    ebp = esp; /* 0x10030EE7: mov ebp, esp */
    ecx = MEM32(0x100DF618); /* 0x10030EE9: mov ecx, dword ptr [0x100df618] */
    PUSH32(esp, esi); /* 0x10030EEF: push esi */
    esi = ecx; /* 0x10030EF0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10030EF2: push edi */
    eax = MEM32(esi); /* 0x10030EF3: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x10030EF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030F20; /* 0x10030EF7: je 0x10030f20 */
L_10030EF9:
    edi = MEM32(ebp + 0xC); /* 0x10030EF9: mov edi, dword ptr [ebp + 0xc] */
L_10030EFC:
    PUSH32(esp, edi); /* 0x10030EFC: push edi */
    PUSH32(esp, eax); /* 0x10030EFD: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030EFE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017048); /* 0x10030F01: call 0x10017048 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10030F06: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10030F09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100607C1; /* 0x10030F0B: je 0x100607c1 */
L_10030F11:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10030F11: add esi, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x10030F14: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x10030F16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030EFC; /* 0x10030F18: jne 0x10030efc */
L_10030F1A:
    ecx = MEM32(0x100DF618); /* 0x10030F1A: mov ecx, dword ptr [0x100df618] */
L_10030F20:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10030F20: sub esi, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x10030F22: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10030F25: neg esi */
    _flag_k = FK_CMP;
L_10030F27:
    edi = POP32_VAL(esp); /* 0x10030F27: pop edi */
    eax = esi; /* 0x10030F28: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10030F2A: pop esi */
    ebp = POP32_VAL(esp); /* 0x10030F2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030F2C: ret  */
L_100607C1:
    eax = MEM32(esi); /* 0x100607C1: mov eax, dword ptr [esi] */
    SET_LO8(eax, MEM8(edi + eax)); /* 0x100607C3: mov al, byte ptr [edi + eax] */
    /* cmp LO8(eax), 0x3Du */ /* 0x100607C6: cmp al, 0x3d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100607D2; /* 0x100607C8: je 0x100607d2 */
L_100607CA:
    /* test LO8(eax), LO8(eax) */ /* 0x100607CA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030F11; /* 0x100607CC: jne 0x10030f11 */
L_100607D2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DF618));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(0x100DF618); /* 0x100607D2: sub esi, dword ptr [0x100df618] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x100607D8: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    RECOMP_BACKEDGE();
    goto L_10030F27; /* 0x100607DB: jmp 0x10030f27 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030F2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030F2Du);

L_10030F2D:
    PUSH32(esp, ebp); /* 0x10030F2D: push ebp */
    ebp = esp; /* 0x10030F2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10030F30: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10030F33: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10030F37: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10030F3A: push edi */
    /* test eax, eax */ /* 0x10030F3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100605EA; /* 0x10030F3D: je 0x100605ea */
L_10030F43:
    PUSH32(esp, ebx); /* 0x10030F43: push ebx */
    ebx = MEM32(eax); /* 0x10030F44: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x10030F46: push esi */
    /* test ebx, ebx */ /* 0x10030F47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030FBE; /* 0x10030F49: je 0x10030fbe */
L_10030F4B:
    PUSH32(esp, 0x3Du); /* 0x10030F4B: push 0x3d */
    PUSH32(esp, ebx); /* 0x10030F4D: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x10030F4E: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10030F53: mov esi, eax */
    MEM32(ebp + (-0xC)) = esi; /* 0x10030F55: mov dword ptr [ebp - 0xc], esi */
    ecx = POP32_VAL(esp); /* 0x10030F58: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030F59: pop ecx */
    /* test esi, esi */ /* 0x10030F5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030FBE; /* 0x10030F5C: je 0x10030fbe */
L_10030F5E:
    /* cmp ebx, esi */ /* 0x10030F5E: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030FBE; /* 0x10030F60: je 0x10030fbe */
L_10030F62:
    edi = MEM32(0x100DF618); /* 0x10030F62: mov edi, dword ptr [0x100df618] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030F68: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x1), LO8(eax) */ /* 0x10030F6A: cmp byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10030F6D: sete al */
    MEM32(ebp + (-0x4)) = eax; /* 0x10030F70: mov dword ptr [ebp - 4], eax */
    /* cmp edi, MEM32(0x100DF62C) */ /* 0x10030F73: cmp edi, dword ptr [0x100df62c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DF62C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060602; /* 0x10030F79: je 0x10060602 */
L_10030F7F:
    /* test edi, edi */ /* 0x10030F7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060619; /* 0x10030F81: je 0x10060619 */
L_10030F87:
    eax = esi; /* 0x10030F87: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10030F89: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10030F8B: push eax */
    PUSH32(esp, ebx); /* 0x10030F8C: push ebx */
    RECOMP_CALL(sub_10030EE6); /* 0x10030F8D: call 0x10030ee6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10030F92: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10030F94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10030F95: pop ecx */
    /* test esi, esi */ /* 0x10030F96: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006068C; /* 0x10030F98: jns 0x1006068c */
L_10030F9E:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x10030F9E: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100606E4; /* 0x10030FA2: je 0x100606e4 */
L_10030FA8:
    PUSH32(esp, ebx); /* 0x10030FA8: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10030FA9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10030FAE: mov edi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x10030FB1: pop ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10030FB2: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10030FB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10030FB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10030FB7:
    esi = POP32_VAL(esp); /* 0x10030FB7: pop esi */
    ebx = POP32_VAL(esp); /* 0x10030FB8: pop ebx */
L_10030FB9:
    edi = POP32_VAL(esp); /* 0x10030FB9: pop edi */
    esp = ebp; /* 0x10030FBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10030FBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10030FBD: ret  */
L_10030FBE:
    RECOMP_CALL(sub_1001177D); /* 0x10030FBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10060635; /* 0x10030FC3: jmp 0x10060635 */
L_100605EA:
    RECOMP_CALL(sub_1001177D); /* 0x100605EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100605EF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100605F5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100605FA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10030FB9; /* 0x100605FD: jmp 0x10030fb9 */
L_10060602:
    PUSH32(esp, edi); /* 0x10060602: push edi */
    RECOMP_CALL(sub_100AA334); /* 0x10060603: call 0x100aa334 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10060608: mov edi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1006060A: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1006060D: pop ecx */
    MEM32(0x100DF618) = edi; /* 0x1006060E: mov dword ptr [0x100df618], edi */
    RECOMP_BACKEDGE();
    goto L_10030F7F; /* 0x10060614: jmp 0x10030f7f */
L_10060619:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x10060619: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060643; /* 0x1006061C: je 0x10060643 */
L_1006061E:
    /* cmp MEM32(0x100DF61C), edi */ /* 0x1006061E: cmp dword ptr [0x100df61c], edi */
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060643; /* 0x10060624: je 0x10060643 */
L_10060626:
    RECOMP_CALL(sub_100A92D0); /* 0x10060626: call 0x100a92d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006062B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030FBE; /* 0x1006062D: jne 0x10030fbe */
L_10060633:
    goto L_1006067C; /* 0x10060633: jmp 0x1006067c */
L_10060635:
    MEM32(eax) = 0x16u; /* 0x10060635: mov dword ptr [eax], 0x16 */
L_1006063B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006063B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10030FB7; /* 0x1006063E: jmp 0x10030fb7 */
L_10060643:
    /* test eax, eax */ /* 0x10060643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030FB5; /* 0x10060645: jne 0x10030fb5 */
L_1006064B:
    PUSH32(esp, 4); /* 0x1006064B: push 4 */
    RECOMP_CALL(sub_10012226); /* 0x1006064D: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100DF618) = eax; /* 0x10060652: mov dword ptr [0x100df618], eax */
    ecx = POP32_VAL(esp); /* 0x10060657: pop ecx */
    /* test eax, eax */ /* 0x10060658: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006063B; /* 0x1006065A: je 0x1006063b */
L_1006065C:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1006065C: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100DF61C), 0 */ /* 0x1006065F: cmp dword ptr [0x100df61c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006067C; /* 0x10060666: jne 0x1006067c */
L_10060668:
    PUSH32(esp, 4); /* 0x10060668: push 4 */
    RECOMP_CALL(sub_10012226); /* 0x1006066A: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100DF61C) = eax; /* 0x1006066F: mov dword ptr [0x100df61c], eax */
    ecx = POP32_VAL(esp); /* 0x10060674: pop ecx */
    /* test eax, eax */ /* 0x10060675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006063B; /* 0x10060677: je 0x1006063b */
L_10060679:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10060679: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006067C:
    edi = MEM32(0x100DF618); /* 0x1006067C: mov edi, dword ptr [0x100df618] */
    /* test edi, edi */ /* 0x10060682: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030F87; /* 0x10060684: jne 0x10030f87 */
L_1006068A:
    RECOMP_BACKEDGE();
    goto L_1006063B; /* 0x1006068A: jmp 0x1006063b */
L_1006068C:
    /* cmp MEM32(edi), 0 */ /* 0x1006068C: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030F9E; /* 0x1006068F: je 0x10030f9e */
L_10060695:
    PUSH32(esp, MEM32(edi + esi * 4)); /* 0x10060695: push dword ptr [edi + esi*4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10060698: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1006069D: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100606A1: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100606B7; /* 0x100606A2: jne 0x100606b7 */
L_100606A4:
    MEM32(edi + esi * 4) = ebx; /* 0x100606A4: mov dword ptr [edi + esi*4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x100606A7: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x100606AA: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006072C; /* 0x100606AD: jmp 0x1006072c */
L_100606AF:
    eax = MEM32(edi + esi * 4 + 0x4); /* 0x100606AF: mov eax, dword ptr [edi + esi*4 + 4] */
    MEM32(edi + esi * 4) = eax; /* 0x100606B3: mov dword ptr [edi + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100606B6: inc esi */
    _flag_k = FK_INC;
L_100606B7:
    /* cmp MEM32(edi + esi * 4), 0 */ /* 0x100606B7: cmp dword ptr [edi + esi*4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + esi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100606AF; /* 0x100606BB: jne 0x100606af */
L_100606BD:
    /* cmp esi, 0x3FFFFFFFu */ /* 0x100606BD: cmp esi, 0x3fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060729; /* 0x100606C3: jae 0x10060729 */
L_100606C5:
    PUSH32(esp, 4); /* 0x100606C5: push 4 */
    PUSH32(esp, esi); /* 0x100606C7: push esi */
    PUSH32(esp, MEM32(0x100DF618)); /* 0x100606C8: push dword ptr [0x100df618] */
    RECOMP_CALL(sub_100A02C4); /* 0x100606CE: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x100606D3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100606D6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100606D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006072C; /* 0x100606DB: je 0x1006072c */
L_100606DD:
    MEM32(0x100DF618) = eax; /* 0x100606DD: mov dword ptr [0x100df618], eax */
    goto L_1006072C; /* 0x100606E2: jmp 0x1006072c */
L_100606E4:
    /* test esi, esi */ /* 0x100606E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100606EA; /* 0x100606E6: jns 0x100606ea */
L_100606E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x100606E8: neg esi */
    _flag_k = FK_CMP;
L_100606EA:
    eax = esi + 0x2; /* 0x100606EA: lea eax, [esi + 2] */
    /* cmp eax, esi */ /* 0x100606ED: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006063B; /* 0x100606EF: jl 0x1006063b */
L_100606F5:
    /* cmp eax, 0x3FFFFFFFu */ /* 0x100606F5: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006063B; /* 0x100606FA: jae 0x1006063b */
L_10060700:
    PUSH32(esp, eax); /* 0x10060700: push eax */
    PUSH32(esp, 4); /* 0x10060701: push 4 */
    PUSH32(esp, MEM32(0x100DF618)); /* 0x10060703: push dword ptr [0x100df618] */
    RECOMP_CALL(sub_100A02C4); /* 0x10060709: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006070E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060711: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006063B; /* 0x10060713: je 0x1006063b */
L_10060719:
    edi = MEM32(ebp + 0x8); /* 0x10060719: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + esi * 4 + 0x4) = MEM32(eax + esi * 4 + 0x4) & 0; /* 0x1006071C: and dword ptr [eax + esi*4 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + esi * 4) = ebx; /* 0x10060721: mov dword ptr [eax + esi*4], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10060724: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100606DD; /* 0x10060727: jmp 0x100606dd */
L_10060729:
    edi = MEM32(ebp + 0x8); /* 0x10060729: mov edi, dword ptr [ebp + 8] */
L_1006072C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1006072C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006079C; /* 0x10060730: je 0x1006079c */
L_10060732:
    PUSH32(esp, 1); /* 0x10060732: push 1 */
    PUSH32(esp, ebx); /* 0x10060734: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x10060735: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006073A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1006073B: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006073E: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1006073F: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10060744: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10060746: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10060747: pop ecx */
    /* test esi, esi */ /* 0x10060748: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006079C; /* 0x1006074A: je 0x1006079c */
L_1006074C:
    PUSH32(esp, ebx); /* 0x1006074C: push ebx */
    PUSH32(esp, ebx); /* 0x1006074D: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x1006074E: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10060753: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10060754: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10060757: push eax */
    PUSH32(esp, esi); /* 0x10060758: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x10060759: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006075E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060761: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100607B4; /* 0x10060763: jne 0x100607b4 */
L_10060765:
    ecx = esi; /* 0x10060765: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x10060767: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x10060769: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1006076C: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006076E: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1006076F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10060772: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10060774: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10060776: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10060778: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006077A: push eax */
    PUSH32(esp, esi); /* 0x1006077B: push esi */
    RECOMP_ICALL(MEM32(0x100E50CC)); /* 0x1006077C: call dword ptr [0x100e50cc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10060782: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060795; /* 0x10060784: jne 0x10060795 */
L_10060786:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x10060786: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1006078A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1006078F: mov dword ptr [eax], 0x2a */
L_10060795:
    PUSH32(esp, esi); /* 0x10060795: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10060796: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006079B: pop ecx */
L_1006079C:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1006079C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100607AC; /* 0x100607A0: je 0x100607ac */
L_100607A2:
    PUSH32(esp, ebx); /* 0x100607A2: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x100607A3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x100607A8: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100607AB: pop ecx */
L_100607AC:
    eax = MEM32(ebp + (-0x8)); /* 0x100607AC: mov eax, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_10030FB7; /* 0x100607AF: jmp 0x10030fb7 */
L_100607B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100607B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100607B6: push eax */
    PUSH32(esp, eax); /* 0x100607B7: push eax */
    PUSH32(esp, eax); /* 0x100607B8: push eax */
    PUSH32(esp, eax); /* 0x100607B9: push eax */
    PUSH32(esp, eax); /* 0x100607BA: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100607BB: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100607C0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10030FC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10030FC8u);

L_10030FC8:
    PUSH32(esp, ebp); /* 0x10030FC8: push ebp */
    ebp = esp; /* 0x10030FC9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10030FCB: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10030FCC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10030FD0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10030FD1: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10030FD4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FD29; /* 0x10030FD6: je 0x1005fd29 */
L_10030FDC:
    PUSH32(esp, ebx); /* 0x10030FDC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10030FDD: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10030FE0: push edi */
    /* test ebx, ebx */ /* 0x10030FE1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FD41; /* 0x10030FE3: je 0x1005fd41 */
L_10030FE9:
    edi = 0x7FFFu; /* 0x10030FE9: mov edi, 0x7fff */
    PUSH32(esp, edi); /* 0x10030FEE: push edi */
    PUSH32(esp, esi); /* 0x10030FEF: push esi */
    RECOMP_CALL(sub_1000F810); /* 0x10030FF0: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10030FF5: push edi */
    PUSH32(esp, ebx); /* 0x10030FF6: push ebx */
    MEM32(ebp + 0x8) = eax; /* 0x10030FF7: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1000F810); /* 0x10030FFA: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10030FFF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x10031002: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005FDA4; /* 0x10031005: jae 0x1005fda4 */
L_1003100B:
    /* cmp eax, edi */ /* 0x1003100B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005FDA4; /* 0x1003100D: jae 0x1005fda4 */
L_10031013:
    edi = MEM32(ebp + 0x8); /* 0x10031013: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10031016: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10031019: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1003101B: push 2 */
    PUSH32(esp, eax); /* 0x1003101D: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1003101E: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_10011208); /* 0x10031021: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x10031026: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x10031029: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1003102A: pop ecx */
    /* test eax, eax */ /* 0x1003102B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003113D; /* 0x1003102D: je 0x1003113d */
L_10031033:
    PUSH32(esp, esi); /* 0x10031033: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031034: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10031037: push eax */
    RECOMP_CALL(sub_10011693); /* 0x10031038: call 0x10011693 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1003103D: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x3Du); /* 0x10031040: push 0x3d */
    ecx = POP32_VAL(esp); /* 0x10031042: pop ecx */
    PUSH32(esp, ebx); /* 0x10031043: push ebx */
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x10031044: mov word ptr [eax + edi*2], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10031048: inc edi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x10031049: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1003104C: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1003104E: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1003104F: mov eax, dword ptr [ebp - 4] */
    eax = eax + edi * 2; /* 0x10031052: lea eax, [eax + edi*2] */
    PUSH32(esp, eax); /* 0x10031055: push eax */
    RECOMP_CALL(sub_10011693); /* 0x10031056: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1003105B: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1003105E:
    eax = ebp + (-0x4); /* 0x1003105E: lea eax, [ebp - 4] */
    PUSH32(esp, 1); /* 0x10031061: push 1 */
    PUSH32(esp, eax); /* 0x10031063: push eax */
    RECOMP_CALL(sub_1003120C); /* 0x10031064: call 0x1003120c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031069: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1003106A: pop ecx */
    /* test eax, eax */ /* 0x1003106B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FDB9; /* 0x1003106D: jne 0x1005fdb9 */
L_10031073:
    /* cmp MEM32(0x100DF618), 0 */ /* 0x10031073: cmp dword ptr [0x100df618], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF618)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003112A; /* 0x1003107A: je 0x1003112a */
L_10031080:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031080: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10031082: push eax */
    PUSH32(esp, eax); /* 0x10031083: push eax */
    PUSH32(esp, eax); /* 0x10031084: push eax */
    PUSH32(esp, eax); /* 0x10031085: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10031086: push -1 */
    PUSH32(esp, esi); /* 0x10031088: push esi */
    PUSH32(esp, eax); /* 0x10031089: push eax */
    PUSH32(esp, eax); /* 0x1003108A: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1003108B: mov dword ptr [ebp + 8], eax */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1003108E: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10031094: mov edi, eax */
    /* test edi, edi */ /* 0x10031096: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031133; /* 0x10031098: je 0x10031133 */
L_1003109E:
    /* test ebx, ebx */ /* 0x1003109E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100310BA; /* 0x100310A0: je 0x100310ba */
L_100310A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100310A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100310A4: push eax */
    PUSH32(esp, eax); /* 0x100310A5: push eax */
    PUSH32(esp, eax); /* 0x100310A6: push eax */
    PUSH32(esp, eax); /* 0x100310A7: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100310A8: push -1 */
    PUSH32(esp, ebx); /* 0x100310AA: push ebx */
    PUSH32(esp, eax); /* 0x100310AB: push eax */
    PUSH32(esp, eax); /* 0x100310AC: push eax */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x100310AD: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100310B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031133; /* 0x100310B5: je 0x10031133 */
L_100310B7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100310B7: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100310B8: add edi, eax */
    _flag_k = FK_ADD;
L_100310BA:
    PUSH32(esp, 1); /* 0x100310BA: push 1 */
    PUSH32(esp, edi); /* 0x100310BC: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100310BD: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x100310C2: mov dword ptr [ebp + 8], eax */
    ecx = POP32_VAL(esp); /* 0x100310C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100310C6: pop ecx */
    /* test eax, eax */ /* 0x100310C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003113D; /* 0x100310C9: je 0x1003113d */
L_100310CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100310CB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100310CD: push ecx */
    PUSH32(esp, ecx); /* 0x100310CE: push ecx */
    PUSH32(esp, edi); /* 0x100310CF: push edi */
    PUSH32(esp, eax); /* 0x100310D0: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100310D1: push -1 */
    PUSH32(esp, esi); /* 0x100310D3: push esi */
    esi = MEM32(0x100E5028); /* 0x100310D4: mov esi, dword ptr [0x100e5028] */
    PUSH32(esp, ecx); /* 0x100310DA: push ecx */
    PUSH32(esp, ecx); /* 0x100310DB: push ecx */
    RECOMP_ICALL(esi); /* 0x100310DC: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100310DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FDC8; /* 0x100310E0: je 0x1005fdc8 */
L_100310E6:
    /* test ebx, ebx */ /* 0x100310E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031115; /* 0x100310E8: je 0x10031115 */
L_100310EA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100310EA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x100310ED: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100310F2: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100310F3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100310F6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x100310F8: push edx */
    PUSH32(esp, edx); /* 0x100310F9: push edx */
    MEM8(eax + ecx) = (uint8_t)(0x3Du); /* 0x100310FA: mov byte ptr [eax + ecx], 0x3d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100310FE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100310FF: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x10031101: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10031104: push edi */
    PUSH32(esp, eax); /* 0x10031105: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10031106: push -1 */
    PUSH32(esp, ebx); /* 0x10031108: push ebx */
    PUSH32(esp, edx); /* 0x10031109: push edx */
    PUSH32(esp, edx); /* 0x1003110A: push edx */
    RECOMP_ICALL(esi); /* 0x1003110B: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1003110D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FDC8; /* 0x1003110F: je 0x1005fdc8 */
L_10031115:
    eax = ebp + 0x8; /* 0x10031115: lea eax, [ebp + 8] */
    PUSH32(esp, 0); /* 0x10031118: push 0 */
    PUSH32(esp, eax); /* 0x1003111A: push eax */
    RECOMP_CALL(sub_10030F2D); /* 0x1003111B: call 0x10030f2d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031120: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10031121: pop ecx */
    /* test eax, eax */ /* 0x10031122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FDE1; /* 0x10031124: jne 0x1005fde1 */
L_1003112A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003112A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1003112C:
    edi = POP32_VAL(esp); /* 0x1003112C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1003112D: pop ebx */
L_1003112E:
    esi = POP32_VAL(esp); /* 0x1003112E: pop esi */
    esp = ebp; /* 0x1003112F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10031131: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031132: ret  */
L_10031133:
    RECOMP_CALL(sub_1001177D); /* 0x10031133: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005FDD6; /* 0x10031138: jmp 0x1005fdd6 */
L_1003113D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1003113D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003112C; /* 0x10031140: jmp 0x1003112c */
L_1005FD29:
    RECOMP_CALL(sub_1001177D); /* 0x1005FD29: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005FD2E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005FD34: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005FD39: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1003112E; /* 0x1005FD3C: jmp 0x1003112e */
L_1005FD41:
    PUSH32(esp, 0x3Du); /* 0x1005FD41: push 0x3d */
    eax = POP32_VAL(esp); /* 0x1005FD43: pop eax */
    PUSH32(esp, eax); /* 0x1005FD44: push eax */
    PUSH32(esp, esi); /* 0x1005FD45: push esi */
    RECOMP_CALL(sub_10011236); /* 0x1005FD46: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FD4B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005FD4C: pop ecx */
    /* test eax, eax */ /* 0x1005FD4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FD75; /* 0x1005FD4F: je 0x1005fd75 */
L_1005FD51:
    ecx = eax; /* 0x1005FD51: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1005FD53: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x1005FD55: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFEu */ /* 0x1005FD58: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005FDA4; /* 0x1005FD5E: jge 0x1005fda4 */
L_1005FD60:
    edi = 0x7FFFu; /* 0x1005FD60: mov edi, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1005FD65: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1005FD68: push edi */
    PUSH32(esp, eax); /* 0x1005FD69: push eax */
    RECOMP_CALL(sub_1000F810); /* 0x1005FD6A: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FD6F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005FD70: pop ecx */
    /* cmp eax, edi */ /* 0x1005FD71: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005FDA4; /* 0x1005FD73: jae 0x1005fda4 */
L_1005FD75:
    PUSH32(esp, esi); /* 0x1005FD75: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1005FD76: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1005FD7B: push 2 */
    edi = eax + 0x1; /* 0x1005FD7D: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x1005FD80: push edi */
    RECOMP_CALL(sub_10011208); /* 0x1005FD81: call 0x10011208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FD86: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1005FD89: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1005FD8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003113D; /* 0x1005FD8E: je 0x1003113d */
L_1005FD94:
    PUSH32(esp, esi); /* 0x1005FD94: push esi */
    PUSH32(esp, edi); /* 0x1005FD95: push edi */
    PUSH32(esp, eax); /* 0x1005FD96: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1005FD97: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FD9C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1003105E; /* 0x1005FD9F: jmp 0x1003105e */
L_1005FDA4:
    RECOMP_CALL(sub_1001177D); /* 0x1005FDA4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005FDA9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005FDAF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1003113D; /* 0x1005FDB4: jmp 0x1003113d */
L_1005FDB9:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1005FDB9: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003113D; /* 0x1005FDBD: je 0x1003113d */
L_1005FDC3:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1005FDC3: push dword ptr [ebp - 4] */
    goto L_1005FDEE; /* 0x1005FDC6: jmp 0x1005fdee */
L_1005FDC8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005FDC8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005FDCB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FDD0: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10031133; /* 0x1005FDD1: jmp 0x10031133 */
L_1005FDD6:
    MEM32(eax) = 0x2Au; /* 0x1005FDD6: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_1003113D; /* 0x1005FDDC: jmp 0x1003113d */
L_1005FDE1:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1005FDE1: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003113D; /* 0x1005FDE5: je 0x1003113d */
L_1005FDEB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005FDEB: push dword ptr [ebp + 8] */
L_1005FDEE:
    RECOMP_CALL(sub_1000ECE0); /* 0x1005FDEE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FDF3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1003113D; /* 0x1005FDF4: jmp 0x1003113d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031142(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031142u);

L_10031142:
    PUSH32(esp, 0xCu); /* 0x10031142: push 0xc */
    PUSH32(esp, 0x100311A0u); /* 0x10031144: push 0x100311a0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10031149: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1003114E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x10031150: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10031153: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10031155: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10031158: setne al */
    /* test eax, eax */ /* 0x1003115B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FDF9; /* 0x1003115D: je 0x1005fdf9 */
L_10031163:
    PUSH32(esp, 7); /* 0x10031163: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10031165: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1003116A: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1003116B: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1003116E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031171: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030FC8); /* 0x10031174: call 0x10030fc8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10031179: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1003117A: pop ecx */
    /* test eax, eax */ /* 0x1003117B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005FE0D; /* 0x1003117D: jne 0x1005fe0d */
L_10031183:
    MEM32(ebp + (-0x1C)) = esi; /* 0x10031183: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10031186: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100311BC); /* 0x1003118D: call 0x100311bc */
    RECOMP_FLAGS_IN();
L_10031192:
    eax = esi; /* 0x10031192: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10031194: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031199: ret  */
L_1005FDF9:
    RECOMP_CALL(sub_1001177D); /* 0x1005FDF9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005FDFE: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005FE00: pop esi */
    MEM32(eax) = esi; /* 0x1005FE01: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005FE03: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10031192; /* 0x1005FE08: jmp 0x10031192 */
L_1005FE0D:
    RECOMP_CALL(sub_1001177D); /* 0x1005FE0D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1005FE12: mov esi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10031183; /* 0x1005FE14: jmp 0x10031183 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100311BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100311BCu);

L_100311BC:
    PUSH32(esp, 7); /* 0x100311BC: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100311BE: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100311C3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100311C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100311C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100311C5u);

L_100311C5:
    PUSH32(esp, ebp); /* 0x100311C5: push ebp */
    ebp = esp; /* 0x100311C6: mov ebp, esp */
    ecx = MEM32(0x100DF61C); /* 0x100311C8: mov ecx, dword ptr [0x100df61c] */
    PUSH32(esp, esi); /* 0x100311CE: push esi */
    esi = ecx; /* 0x100311CF: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100311D1: push edi */
    eax = MEM32(esi); /* 0x100311D2: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x100311D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100311FF; /* 0x100311D6: je 0x100311ff */
L_100311D8:
    edi = MEM32(ebp + 0xC); /* 0x100311D8: mov edi, dword ptr [ebp + 0xc] */
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
L_100311FF:
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

void sub_1003120C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003120Cu);

L_1003120C:
    PUSH32(esp, ebp); /* 0x1003120C: push ebp */
    ebp = esp; /* 0x1003120D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1003120F: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10031212: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10031215: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10031216: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x10031218: mov dword ptr [ebp - 8], esi */
    /* test eax, eax */ /* 0x1003121B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006023A; /* 0x1003121D: je 0x1006023a */
L_10031223:
    PUSH32(esp, ebx); /* 0x10031223: push ebx */
    ebx = MEM32(eax); /* 0x10031224: mov ebx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x10031226: push edi */
    /* test ebx, ebx */ /* 0x10031227: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033047; /* 0x10031229: je 0x10033047 */
L_1003122F:
    PUSH32(esp, 0x3Du); /* 0x1003122F: push 0x3d */
    PUSH32(esp, ebx); /* 0x10031231: push ebx */
    RECOMP_CALL(sub_10011236); /* 0x10031232: call 0x10011236 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10031237: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10031239: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1003123A: pop ecx */
    /* test edi, edi */ /* 0x1003123B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10033047; /* 0x1003123D: je 0x10033047 */
L_10031243:
    /* cmp ebx, edi */ /* 0x10031243: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033047; /* 0x10031245: je 0x10033047 */
L_1003124B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003124B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x2), LO16(esi) */ /* 0x1003124D: cmp word ptr [edi + 2], si */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = MEM32(0x100DF61C); /* 0x10031251: mov esi, dword ptr [0x100df61c] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10031257: sete al */
    MEM32(ebp + (-0x4)) = eax; /* 0x1003125A: mov dword ptr [ebp - 4], eax */
    /* cmp esi, MEM32(0x100DF628) */ /* 0x1003125D: cmp esi, dword ptr [0x100df628] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DF628));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10033030; /* 0x10031263: je 0x10033030 */
L_10031269:
    /* test esi, esi */ /* 0x10031269: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060252; /* 0x1003126B: je 0x10060252 */
L_10031271:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x10031271: sub edi, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x10031273: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, edi); /* 0x10031275: push edi */
    PUSH32(esp, ebx); /* 0x10031276: push ebx */
    MEM32(ebp + (-0xC)) = edi; /* 0x10031277: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_100311C5); /* 0x1003127A: call 0x100311c5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1003127F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10031281: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10031282: pop ecx */
    /* test edi, edi */ /* 0x10031283: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100602E3; /* 0x10031285: jns 0x100602e3 */
L_1003128B:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1003128B: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006033B; /* 0x1003128F: je 0x1006033b */
L_10031295:
    PUSH32(esp, ebx); /* 0x10031295: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10031296: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1003129B: mov edi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1003129E: pop ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1003129F: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100312A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100312A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100312A4:
    edi = POP32_VAL(esp); /* 0x100312A4: pop edi */
    ebx = POP32_VAL(esp); /* 0x100312A5: pop ebx */
L_100312A6:
    esi = POP32_VAL(esp); /* 0x100312A6: pop esi */
    esp = ebp; /* 0x100312A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100312A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100312AA: ret  */
L_10033030:
    PUSH32(esp, esi); /* 0x10033030: push esi */
    RECOMP_CALL(sub_10032FD4); /* 0x10033031: call 0x10032fd4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10033036: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10033038: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1003303B: pop ecx */
    MEM32(0x100DF61C) = esi; /* 0x1003303C: mov dword ptr [0x100df61c], esi */
    RECOMP_BACKEDGE();
    goto L_10031269; /* 0x10033042: jmp 0x10031269 */
L_10033047:
    RECOMP_CALL(sub_1001177D); /* 0x10033047: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10060283; /* 0x1003304C: jmp 0x10060283 */
L_1006023A:
    RECOMP_CALL(sub_1001177D); /* 0x1006023A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1006023F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10060245: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006024A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100312A6; /* 0x1006024D: jmp 0x100312a6 */
L_10060252:
    ecx = MEM32(0x100DF618); /* 0x10060252: mov ecx, dword ptr [0x100df618] */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x10060258: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060291; /* 0x1006025B: je 0x10060291 */
L_1006025D:
    /* test ecx, ecx */ /* 0x1006025D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060291; /* 0x1006025F: je 0x10060291 */
L_10060261:
    RECOMP_CALL(sub_100295B9); /* 0x10060261: call 0x100295b9 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E029C) = eax; /* 0x10060266: mov dword ptr [0x100e029c], eax */
    RECOMP_CALL(sub_10029704); /* 0x1006026B: call 0x10029704 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10060270: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100602D3; /* 0x10060272: jns 0x100602d3 */
L_10060274:
    RECOMP_CALL(sub_100A4C6A); /* 0x10060274: call 0x100a4c6a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10060279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10033047; /* 0x1006027B: jne 0x10033047 */
L_10060281:
    goto L_100602D3; /* 0x10060281: jmp 0x100602d3 */
L_10060283:
    MEM32(eax) = 0x16u; /* 0x10060283: mov dword ptr [eax], 0x16 */
L_10060289:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10060289: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100312A4; /* 0x1006028C: jmp 0x100312a4 */
L_10060291:
    /* test eax, eax */ /* 0x10060291: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100312A2; /* 0x10060293: jne 0x100312a2 */
L_10060299:
    /* test ecx, ecx */ /* 0x10060299: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100602BF; /* 0x1006029B: jne 0x100602bf */
L_1006029D:
    PUSH32(esp, 4); /* 0x1006029D: push 4 */
    RECOMP_CALL(sub_10012226); /* 0x1006029F: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100DF618) = eax; /* 0x100602A4: mov dword ptr [0x100df618], eax */
    ecx = POP32_VAL(esp); /* 0x100602A9: pop ecx */
    /* test eax, eax */ /* 0x100602AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060289; /* 0x100602AC: je 0x10060289 */
L_100602AE:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100602AE: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x100DF61C); /* 0x100602B1: mov esi, dword ptr [0x100df61c] */
    /* test esi, esi */ /* 0x100602B7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031271; /* 0x100602B9: jne 0x10031271 */
L_100602BF:
    PUSH32(esp, 4); /* 0x100602BF: push 4 */
    RECOMP_CALL(sub_10012226); /* 0x100602C1: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100DF61C) = eax; /* 0x100602C6: mov dword ptr [0x100df61c], eax */
    ecx = POP32_VAL(esp); /* 0x100602CB: pop ecx */
    /* test eax, eax */ /* 0x100602CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060289; /* 0x100602CE: je 0x10060289 */
L_100602D0:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100602D0: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100602D3:
    esi = MEM32(0x100DF61C); /* 0x100602D3: mov esi, dword ptr [0x100df61c] */
    /* test esi, esi */ /* 0x100602D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10031271; /* 0x100602DB: jne 0x10031271 */
L_100602E1:
    RECOMP_BACKEDGE();
    goto L_10060289; /* 0x100602E1: jmp 0x10060289 */
L_100602E3:
    /* cmp MEM32(esi), 0 */ /* 0x100602E3: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003128B; /* 0x100602E6: je 0x1003128b */
L_100602EC:
    PUSH32(esp, MEM32(esi + edi * 4)); /* 0x100602EC: push dword ptr [esi + edi*4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100602EF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100602F4: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100602F8: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006030E; /* 0x100602F9: jne 0x1006030e */
L_100602FB:
    MEM32(esi + edi * 4) = ebx; /* 0x100602FB: mov dword ptr [esi + edi*4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x100602FE: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10060301: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10060383; /* 0x10060304: jmp 0x10060383 */
L_10060306:
    eax = MEM32(esi + edi * 4 + 0x4); /* 0x10060306: mov eax, dword ptr [esi + edi*4 + 4] */
    MEM32(esi + edi * 4) = eax; /* 0x1006030A: mov dword ptr [esi + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006030D: inc edi */
    _flag_k = FK_INC;
L_1006030E:
    /* cmp MEM32(esi + edi * 4), 0 */ /* 0x1006030E: cmp dword ptr [esi + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060306; /* 0x10060312: jne 0x10060306 */
L_10060314:
    /* cmp edi, 0x3FFFFFFFu */ /* 0x10060314: cmp edi, 0x3fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060380; /* 0x1006031A: jae 0x10060380 */
L_1006031C:
    PUSH32(esp, 4); /* 0x1006031C: push 4 */
    PUSH32(esp, edi); /* 0x1006031E: push edi */
    PUSH32(esp, MEM32(0x100DF61C)); /* 0x1006031F: push dword ptr [0x100df61c] */
    RECOMP_CALL(sub_100A02C4); /* 0x10060325: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1006032A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006032D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060330: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060383; /* 0x10060332: je 0x10060383 */
L_10060334:
    MEM32(0x100DF61C) = eax; /* 0x10060334: mov dword ptr [0x100df61c], eax */
    goto L_10060383; /* 0x10060339: jmp 0x10060383 */
L_1006033B:
    /* test edi, edi */ /* 0x1006033B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10060341; /* 0x1006033D: jns 0x10060341 */
L_1006033F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1006033F: neg edi */
    _flag_k = FK_CMP;
L_10060341:
    eax = edi + 0x2; /* 0x10060341: lea eax, [edi + 2] */
    /* cmp eax, edi */ /* 0x10060344: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10060289; /* 0x10060346: jl 0x10060289 */
L_1006034C:
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1006034C: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10060289; /* 0x10060351: jae 0x10060289 */
L_10060357:
    PUSH32(esp, eax); /* 0x10060357: push eax */
    PUSH32(esp, 4); /* 0x10060358: push 4 */
    PUSH32(esp, MEM32(0x100DF61C)); /* 0x1006035A: push dword ptr [0x100df61c] */
    RECOMP_CALL(sub_100A02C4); /* 0x10060360: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10060365: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060368: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060289; /* 0x1006036A: je 0x10060289 */
L_10060370:
    _flag_a = (uint32_t)(MEM32(eax + edi * 4 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4 + 0x4) = MEM32(eax + edi * 4 + 0x4) & 0; /* 0x10060370: and dword ptr [eax + edi*4 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + edi * 4) = ebx; /* 0x10060375: mov dword ptr [eax + edi*4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x10060378: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006037B: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10060334; /* 0x1006037E: jmp 0x10060334 */
L_10060380:
    edi = MEM32(ebp + 0x8); /* 0x10060380: mov edi, dword ptr [ebp + 8] */
L_10060383:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10060383: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100603F7; /* 0x10060387: je 0x100603f7 */
L_10060389:
    PUSH32(esp, 2); /* 0x10060389: push 2 */
    PUSH32(esp, ebx); /* 0x1006038B: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x1006038C: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10060391: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10060392: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10060395: push eax */
    RECOMP_CALL(sub_10011208); /* 0x10060396: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006039B: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1006039D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006039E: pop ecx */
    /* test esi, esi */ /* 0x1006039F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100603F7; /* 0x100603A1: je 0x100603f7 */
L_100603A3:
    PUSH32(esp, ebx); /* 0x100603A3: push ebx */
    PUSH32(esp, ebx); /* 0x100603A4: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100603A5: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100603AA: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100603AB: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100603AE: push eax */
    PUSH32(esp, esi); /* 0x100603AF: push esi */
    RECOMP_CALL(sub_10011693); /* 0x100603B0: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100603B5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100603B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006040F; /* 0x100603BA: jne 0x1006040f */
L_100603BC:
    eax = MEM32(ebp + (-0xC)); /* 0x100603BC: mov eax, dword ptr [ebp - 0xc] */
    ecx = esi + eax * 2; /* 0x100603BF: lea ecx, [esi + eax*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100603C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100603C4: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100603C7: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x100603CA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100603CD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100603CF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100603D1: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100603D3: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100603D5: push eax */
    PUSH32(esp, esi); /* 0x100603D6: push esi */
    RECOMP_ICALL(MEM32(0x100E50E0)); /* 0x100603D7: call dword ptr [0x100e50e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100603DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100603F0; /* 0x100603DF: jne 0x100603f0 */
L_100603E1:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x100603E1: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100603E5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x100603EA: mov dword ptr [eax], 0x2a */
L_100603F0:
    PUSH32(esp, esi); /* 0x100603F0: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100603F1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100603F6: pop ecx */
L_100603F7:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100603F7: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060407; /* 0x100603FB: je 0x10060407 */
L_100603FD:
    PUSH32(esp, ebx); /* 0x100603FD: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x100603FE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10060403: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10060406: pop ecx */
L_10060407:
    eax = MEM32(ebp + (-0x8)); /* 0x10060407: mov eax, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_100312A4; /* 0x1006040A: jmp 0x100312a4 */
L_1006040F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006040F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10060411: push eax */
    PUSH32(esp, eax); /* 0x10060412: push eax */
    PUSH32(esp, eax); /* 0x10060413: push eax */
    PUSH32(esp, eax); /* 0x10060414: push eax */
    PUSH32(esp, eax); /* 0x10060415: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10060416: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006041Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100312AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100312ABu);

L_100312AB:
    PUSH32(esp, ebp); /* 0x100312AB: push ebp */
    ebp = esp; /* 0x100312AC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100312AE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x100312B1: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x100312B4: push esi */
    PUSH32(esp, edi); /* 0x100312B5: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100312B6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x100312B9: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x100312BE: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x100312C1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005770D; /* 0x100312C3: je 0x1005770d */
L_100312C9:
    edi = MEM32(ebp + (-0xC)); /* 0x100312C9: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100312CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), esi */ /* 0x100312CE: cmp dword ptr [edi + 8], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005775A; /* 0x100312D1: jne 0x1005775a */
L_100312D7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100312D7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x100312DA: push edx */
    RECOMP_CALL(sub_100146BC); /* 0x100312DB: call 0x100146bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100312E0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100312E1: pop ecx */
    esi = eax; /* 0x100312E2: mov esi, eax */
L_100312E4:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x100312E4: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100312F1; /* 0x100312E8: je 0x100312f1 */
L_100312EA:
    ecx = MEM32(ebp + (-0x8)); /* 0x100312EA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100312ED: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100312F1:
    edi = POP32_VAL(esp); /* 0x100312F1: pop edi */
    eax = esi; /* 0x100312F2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100312F4: pop esi */
    esp = ebp; /* 0x100312F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100312F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100312F8: ret  */
L_1005770D:
    RECOMP_CALL(sub_1001177D); /* 0x1005770D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10057712: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10057718: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005771D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100312E4; /* 0x1005771F: jmp 0x100312e4 */
L_10057724:
    eax = (uint32_t)LO8(ecx); /* 0x10057724: movzx eax, cl */
    /* test MEM8(eax + edi + 0x19), 4 */ /* 0x10057727: test byte ptr [eax + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057751; /* 0x1005772C: je 0x10057751 */
L_1005772E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005772E: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x1005772F: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10057731: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100312E4; /* 0x10057733: je 0x100312e4 */
L_10057739:
    ecx = (uint32_t)LO16(ecx); /* 0x10057739: movzx ecx, cx */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x1005773C: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x1005773C: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1005773F: movzx eax, al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10057742: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x10057744: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057759; /* 0x10057747: jne 0x10057759 */
L_10057749:
    esi = edx + (-0x1); /* 0x10057749: lea esi, [edx - 1] */
    RECOMP_BACKEDGE();
    goto L_100312E4; /* 0x1005774C: jmp 0x100312e4 */
L_10057751:
    eax = (uint32_t)LO16(ecx); /* 0x10057751: movzx eax, cx */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10057754: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057762; /* 0x10057757: je 0x10057762 */
L_10057759:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10057759: inc edx */
    _flag_k = FK_INC;
L_1005775A:
    ecx = (uint32_t)MEM8(edx); /* 0x1005775A: movzx ecx, byte ptr [edx] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1005775D: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10057724; /* 0x10057760: jne 0x10057724 */
L_10057762:
    eax = (uint32_t)LO16(ecx); /* 0x10057762: movzx eax, cx */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10057765: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100312E4; /* 0x10057768: jne 0x100312e4 */
L_1005776E:
    esi = edx; /* 0x1005776E: mov esi, edx */
    RECOMP_BACKEDGE();
    goto L_100312E4; /* 0x10057770: jmp 0x100312e4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100312F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100312F9u);

L_100312F9:
    PUSH32(esp, ebp); /* 0x100312F9: push ebp */
    ebp = esp; /* 0x100312FA: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100312FC: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100312FE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031301: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100312AB); /* 0x10031304: call 0x100312ab */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10031309: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1003130C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003130D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10031321(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031321u);

L_10031321:
    PUSH32(esp, ebp); /* 0x10031321: push ebp */
    ebp = esp; /* 0x10031322: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10031324: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x10031325: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10031328: push ebx */
    PUSH32(esp, esi); /* 0x10031329: push esi */
    PUSH32(esp, edi); /* 0x1003132A: push edi */
    /* test eax, eax */ /* 0x1003132B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054290; /* 0x1003132D: je 0x10054290 */
L_10031333:
    /* cmp MEM8(eax), 0 */ /* 0x10031333: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054290; /* 0x10031336: je 0x10054290 */
L_1003133C:
    ebx = MEM32(ebp + 0x8); /* 0x1003133C: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1003133F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100541EA; /* 0x10031341: je 0x100541ea */
L_10031347:
    esi = MEM32(ebp + 0x10); /* 0x10031347: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1003134A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005424A; /* 0x1003134C: je 0x1005424a */
L_10031352:
    edi = ebx; /* 0x10031352: mov edi, ebx */
L_10031354:
    ecx = ebp + (-0x4); /* 0x10031354: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x10031357: push ecx */
    PUSH32(esp, edi); /* 0x10031358: push edi */
    PUSH32(esp, esi); /* 0x10031359: push esi */
    PUSH32(esp, eax); /* 0x1003135A: push eax */
    RECOMP_ICALL(MEM32(0x100E50A4)); /* 0x1003135B: call dword ptr [0x100e50a4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x10031361: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10054264; /* 0x10031363: jae 0x10054264 */
L_10031369:
    /* test eax, eax */ /* 0x10031369: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005427C; /* 0x1003136B: je 0x1005427c */
L_10031371:
    eax = edi; /* 0x10031371: mov eax, edi */
L_10031373:
    edi = POP32_VAL(esp); /* 0x10031373: pop edi */
    esi = POP32_VAL(esp); /* 0x10031374: pop esi */
    ebx = POP32_VAL(esp); /* 0x10031375: pop ebx */
    esp = ebp; /* 0x10031376: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10031378: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10031379: ret  */
L_100541EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100541EA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100541EC: push ecx */
    PUSH32(esp, ecx); /* 0x100541ED: push ecx */
    PUSH32(esp, ecx); /* 0x100541EE: push ecx */
    PUSH32(esp, eax); /* 0x100541EF: push eax */
    RECOMP_ICALL(MEM32(0x100E50A4)); /* 0x100541F0: call dword ptr [0x100e50a4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100541F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005420D; /* 0x100541F8: jne 0x1005420d */
L_100541FA:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100541FA: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10054200: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10054201: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054206: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005429C; /* 0x10054208: jmp 0x1005429c */
L_1005420D:
    esi = MEM32(ebp + 0x10); /* 0x1005420D: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x10054210: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10054216; /* 0x10054212: ja 0x10054216 */
L_10054214:
    esi = eax; /* 0x10054214: mov esi, eax */
L_10054216:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10054216: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005422D; /* 0x10054219: jbe 0x1005422d */
L_1005421B:
    RECOMP_CALL(sub_1001177D); /* 0x1005421B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054220: mov dword ptr [eax], 0x16 */
L_10054226:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054226: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10031373; /* 0x10054228: jmp 0x10031373 */
L_1005422D:
    PUSH32(esp, 1); /* 0x1005422D: push 1 */
    PUSH32(esp, esi); /* 0x1005422F: push esi */
    RECOMP_CALL(sub_1001CBFF); /* 0x10054230: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10054235: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10054237: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054238: pop ecx */
    /* test edi, edi */ /* 0x10054239: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005425C; /* 0x1005423B: jne 0x1005425c */
L_1005423D:
    RECOMP_CALL(sub_1001177D); /* 0x1005423D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x10054242: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_10054226; /* 0x10054248: jmp 0x10054226 */
L_1005424A:
    RECOMP_CALL(sub_1001177D); /* 0x1005424A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005424F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054255: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10054226; /* 0x1005425A: jmp 0x10054226 */
L_1005425C:
    eax = MEM32(ebp + 0xC); /* 0x1005425C: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_10031354; /* 0x1005425F: jmp 0x10031354 */
L_10054264:
    /* test ebx, ebx */ /* 0x10054264: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005426F; /* 0x10054266: jne 0x1005426f */
L_10054268:
    PUSH32(esp, edi); /* 0x10054268: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054269: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005426E: pop ecx */
L_1005426F:
    RECOMP_CALL(sub_1001177D); /* 0x1005426F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10054274: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_10054226; /* 0x1005427A: jmp 0x10054226 */
L_1005427C:
    /* test ebx, ebx */ /* 0x1005427C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100541FA; /* 0x1005427E: jne 0x100541fa */
L_10054284:
    PUSH32(esp, edi); /* 0x10054284: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054285: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005428A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100541FA; /* 0x1005428B: jmp 0x100541fa */
L_10054290:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10054290: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10054293: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017CE9); /* 0x10054296: call 0x10017ce9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005429B: pop ecx */
L_1005429C:
    ecx = POP32_VAL(esp); /* 0x1005429C: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10031373; /* 0x1005429D: jmp 0x10031373 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10031549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10031549u);

L_10031549:
    PUSH32(esp, ebp); /* 0x10031549: push ebp */
    ebp = esp; /* 0x1003154A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1003154C: push esi */
    PUSH32(esp, MEM32(0x100E0ED8)); /* 0x1003154D: push dword ptr [0x100e0ed8] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x10031553: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10031559: push dword ptr [ebp + 8] */
    esi = eax; /* 0x1003155C: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1003155E: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0ED8) = eax; /* 0x10031564: mov dword ptr [0x100e0ed8], eax */
    eax = esi; /* 0x10031569: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1003156B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1003156C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003156D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1003160C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1003160Cu);

    goto L_1003160C;
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
L_1003160C:
    void_lift_trap(0x1003160Cu, "arpl word ptr [eax], ax");
    void_lift_trap(0x1003160Eu, "arpl word ptr [eax], ax");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10031612; /* 0x10031610: jae 0x10031612 */
L_10031612:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10031612: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
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
