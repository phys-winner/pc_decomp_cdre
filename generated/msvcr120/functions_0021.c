#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1007CD35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CD35u);

L_1007CD35:
    PUSH32(esp, ebp); /* 0x1007CD35: push ebp */
    ebp = esp; /* 0x1007CD36: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007CD38: push ecx */
    PUSH32(esp, ecx); /* 0x1007CD39: push ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1007CD3A: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1007CD3D: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, esi); /* 0x1007CD40: push esi */
    /* test ecx, ecx */ /* 0x1007CD41: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CD5B; /* 0x1007CD43: jne 0x1007cd5b */
L_1007CD45:
    RECOMP_CALL(sub_1001177D); /* 0x1007CD45: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007CD4A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1007CD4C: pop esi */
    MEM32(eax) = esi; /* 0x1007CD4D: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007CD4F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007CD54: mov eax, esi */
    goto L_1007CE21; /* 0x1007CD56: jmp 0x1007ce21 */
L_1007CD5B:
    PUSH32(esp, ebx); /* 0x1007CD5B: push ebx */
    PUSH32(esp, edi); /* 0x1007CD5C: push edi */
    /* test edx, edx */ /* 0x1007CD5D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CD6E; /* 0x1007CD5F: jne 0x1007cd6e */
L_1007CD61:
    RECOMP_CALL(sub_1001177D); /* 0x1007CD61: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007CD66: push 0x16 */
L_1007CD68:
    esi = POP32_VAL(esp); /* 0x1007CD68: pop esi */
    goto L_1007CDFD; /* 0x1007CD69: jmp 0x1007cdfd */
L_1007CD6E:
    ebx = MEM32(ebp + 0x14); /* 0x1007CD6E: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CD71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1007CD73: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(0); /* 0x1007CD75: mov byte ptr [ecx], 0 */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007CD78: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CD7B: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x1007CD7C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1007CD89; /* 0x1007CD7E: ja 0x1007cd89 */
L_1007CD80:
    RECOMP_CALL(sub_1001177D); /* 0x1007CD80: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1007CD85: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1007CD68; /* 0x1007CD87: jmp 0x1007cd68 */
L_1007CD89:
    eax = MEM32(ebp + 0x10); /* 0x1007CD89: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x22u); /* 0x1007CD8C: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1007CD8E: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1007CD91: pop esi */
    /* cmp eax, esi */ /* 0x1007CD92: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1007CD61; /* 0x1007CD94: ja 0x1007cd61 */
L_1007CD96:
    edx = MEM32(ebp + 0xC); /* 0x1007CD96: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007CD99: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1007CD9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x1007CD9D: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x1007CD9F: mov ebx, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007CDB2; /* 0x1007CDA2: je 0x1007cdb2 */
L_1007CDA4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CDA4: inc esi */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(0x2Du); /* 0x1007CDA5: mov byte ptr [ecx], 0x2d */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1007CDA8: neg ebx */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x1007CDAA: lea edi, [ecx + 1] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007CDAD: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1007CDB0: neg edx */
    _flag_k = FK_CMP;
L_1007CDB2:
    MEM32(ebp + 0x14) = edi; /* 0x1007CDB2: mov dword ptr [ebp + 0x14], edi */
L_1007CDB5:
    PUSH32(esp, 0); /* 0x1007CDB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CDB7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x1007CDBA: push edx */
    PUSH32(esp, ebx); /* 0x1007CDBB: push ebx */
    RECOMP_CALL(sub_10011849); /* 0x1007CDBC: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = ebx; /* 0x1007CDC1: mov dword ptr [ebp + 0xc], ebx */
    ebx = eax; /* 0x1007CDC4: mov ebx, eax */
    /* cmp ecx, 9 */ /* 0x1007CDC6: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007CDD0; /* 0x1007CDC9: jbe 0x1007cdd0 */
L_1007CDCB:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x57u); /* 0x1007CDCB: add cl, 0x57 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1007CDD3; /* 0x1007CDCE: jmp 0x1007cdd3 */
L_1007CDD0:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1007CDD0: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1007CDD3:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1007CDD3: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007CDD5: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CDD6: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x1007CDD7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CDDF; /* 0x1007CDD9: jne 0x1007cddf */
L_1007CDDB:
    /* test ebx, ebx */ /* 0x1007CDDB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007CDE8; /* 0x1007CDDD: je 0x1007cde8 */
L_1007CDDF:
    eax = MEM32(ebp + (-0x4)); /* 0x1007CDDF: mov eax, dword ptr [ebp - 4] */
    /* cmp esi, eax */ /* 0x1007CDE2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007CDEB; /* 0x1007CDE4: jae 0x1007cdeb */
L_1007CDE6:
    RECOMP_BACKEDGE();
    goto L_1007CDB5; /* 0x1007CDE6: jmp 0x1007cdb5 */
L_1007CDE8:
    eax = MEM32(ebp + (-0x4)); /* 0x1007CDE8: mov eax, dword ptr [ebp - 4] */
L_1007CDEB:
    PUSH32(esp, 0x22u); /* 0x1007CDEB: push 0x22 */
    /* cmp esi, eax */ /* 0x1007CDED: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1007CDEF: pop esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_1007CE08; /* 0x1007CDF0: jb 0x1007ce08 */
L_1007CDF2:
    eax = MEM32(ebp + (-0x8)); /* 0x1007CDF2: mov eax, dword ptr [ebp - 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x1007CDF5: mov byte ptr [eax], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x1007CDF8: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_1007CDFD:
    MEM32(eax) = esi; /* 0x1007CDFD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007CDFF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007CE04: mov eax, esi */
    goto L_1007CE1F; /* 0x1007CE06: jmp 0x1007ce1f */
L_1007CE08:
    edx = MEM32(ebp + 0x14); /* 0x1007CE08: mov edx, dword ptr [ebp + 0x14] */
    MEM8(edi) = (uint8_t)(0); /* 0x1007CE0B: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007CE0E: dec edi */
    _flag_k = FK_DEC;
L_1007CE0F:
    SET_LO8(eax, MEM8(edx)); /* 0x1007CE0F: mov al, byte ptr [edx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x1007CE11: mov cl, byte ptr [edi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1007CE13: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007CE15: dec edi */
    _flag_k = FK_DEC;
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x1007CE16: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007CE18: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1007CE19: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007CE0F; /* 0x1007CE1B: jb 0x1007ce0f */
L_1007CE1D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CE1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007CE1F:
    edi = POP32_VAL(esp); /* 0x1007CE1F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007CE20: pop ebx */
L_1007CE21:
    esi = POP32_VAL(esp); /* 0x1007CE21: pop esi */
    esp = ebp; /* 0x1007CE22: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007CE24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007CE25: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1007CE28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CE28u);

L_1007CE28:
    PUSH32(esp, ebp); /* 0x1007CE28: push ebp */
    ebp = esp; /* 0x1007CE29: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CE2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0xAu */ /* 0x1007CE2D: cmp dword ptr [ebp + 0x18], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CE42; /* 0x1007CE31: jne 0x1007ce42 */
L_1007CE33:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1007CE33: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007CE42; /* 0x1007CE36: jg 0x1007ce42 */
L_1007CE38:
    if (CMP_L(_flag_a, _flag_b)) goto L_1007CE3F; /* 0x1007CE38: jl 0x1007ce3f */
L_1007CE3A:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007CE3A: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007CE42; /* 0x1007CE3D: jae 0x1007ce42 */
L_1007CE3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CE3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CE41: inc eax */
    _flag_k = FK_INC;
L_1007CE42:
    edx = MEM32(ebp + 0x14); /* 0x1007CE42: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007CE45: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1007CE48: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1007CE49: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CE4C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CE4F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CD35); /* 0x1007CE52: call 0x1007cd35 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007CE57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CE58: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CE59u);

L_1007CE59:
    PUSH32(esp, ebp); /* 0x1007CE59: push ebp */
    ebp = esp; /* 0x1007CE5A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0xAu */ /* 0x1007CE5C: cmp dword ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007CE60: mov eax, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CE6F; /* 0x1007CE63: jne 0x1007ce6f */
L_1007CE65:
    /* test eax, eax */ /* 0x1007CE65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007CE6F; /* 0x1007CE67: jns 0x1007ce6f */
L_1007CE69:
    PUSH32(esp, 1); /* 0x1007CE69: push 1 */
    PUSH32(esp, 0xAu); /* 0x1007CE6B: push 0xa */
    goto L_1007CE74; /* 0x1007CE6D: jmp 0x1007ce74 */
L_1007CE6F:
    PUSH32(esp, 0); /* 0x1007CE6F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007CE71: push dword ptr [ebp + 0x14] */
L_1007CE74:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CE74: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CE77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007CE7A: push eax */
    RECOMP_CALL(sub_10030D63); /* 0x1007CE7B: call 0x10030d63 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007CE80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CE81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CE82u);

L_1007CE82:
    PUSH32(esp, ebp); /* 0x1007CE82: push ebp */
    ebp = esp; /* 0x1007CE83: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007CE85: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007CE88: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1007CE8B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1007CE8D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CE90: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CE93: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CD35); /* 0x1007CE96: call 0x1007cd35 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007CE9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CE9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CE9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CE9Du);

L_1007CE9D:
    PUSH32(esp, ebp); /* 0x1007CE9D: push ebp */
    ebp = esp; /* 0x1007CE9E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007CEA0: push ecx */
    PUSH32(esp, ecx); /* 0x1007CEA1: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1007CEA2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1007CEA6: push esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1007CEA7: mov dword ptr [ebp - 4], edx */
    esi = ecx; /* 0x1007CEAA: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1007CEAC: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1007CEAF: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007CEB2: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007CEC5; /* 0x1007CEB3: je 0x1007cec5 */
L_1007CEB5:
    PUSH32(esp, 0x2Du); /* 0x1007CEB5: push 0x2d */
    eax = POP32_VAL(esp); /* 0x1007CEB7: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007CEB8: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1007CEBB: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1007CEBE: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007CEC0: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1007CEC3: neg edx */
    _flag_k = FK_CMP;
L_1007CEC5:
    edi = MEM32(ebp + (-0x4)); /* 0x1007CEC5: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0xC) = esi; /* 0x1007CEC8: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, ebx); /* 0x1007CECB: push ebx */
L_1007CECC:
    PUSH32(esp, 0); /* 0x1007CECC: push 0 */
    PUSH32(esp, edi); /* 0x1007CECE: push edi */
    PUSH32(esp, edx); /* 0x1007CECF: push edx */
    PUSH32(esp, ecx); /* 0x1007CED0: push ecx */
    RECOMP_CALL(sub_10011849); /* 0x1007CED1: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = ecx; /* 0x1007CED6: mov dword ptr [ebp + 0x10], ecx */
    ecx = eax; /* 0x1007CED9: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x1007CEDB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007CEDE: mov dword ptr [ebp - 4], ebx */
    /* cmp eax, 9 */ /* 0x1007CEE1: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007CEEB; /* 0x1007CEE4: jbe 0x1007ceeb */
L_1007CEE6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x57u; /* 0x1007CEE6: add eax, 0x57 */
    _flag_k = FK_ADD;
    goto L_1007CEEE; /* 0x1007CEE9: jmp 0x1007ceee */
L_1007CEEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1007CEEB: add eax, 0x30 */
    _flag_k = FK_ADD;
L_1007CEEE:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007CEEE: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1007CEF1: add esi, 2 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1007CEF4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CECC; /* 0x1007CEF6: ja 0x1007cecc */
L_1007CEF8:
    if (0) goto L_1007CEFE; /* 0x1007CEF8: jb 0x1007cefe */
L_1007CEFA:
    /* test ecx, ecx */ /* 0x1007CEFA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CECC; /* 0x1007CEFC: jne 0x1007cecc */
L_1007CEFE:
    edi = MEM32(ebp + 0xC); /* 0x1007CEFE: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CF01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007CF03: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1007CF06: sub esi, 2 */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1007CF09: pop ebx */
L_1007CF0A:
    SET_LO16(eax, MEM16(edi)); /* 0x1007CF0A: mov ax, word ptr [edi] */
    ecx = (uint32_t)MEM16(esi); /* 0x1007CF0D: movzx ecx, word ptr [esi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007CF10: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1007CF13: sub esi, 2 */
    _flag_k = FK_CMP;
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1007CF16: mov word ptr [edi], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1007CF19: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x1007CF1C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007CF0A; /* 0x1007CF1E: jb 0x1007cf0a */
L_1007CF20:
    edi = POP32_VAL(esp); /* 0x1007CF20: pop edi */
    esi = POP32_VAL(esp); /* 0x1007CF21: pop esi */
    esp = ebp; /* 0x1007CF22: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007CF24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007CF25: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007CF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CF28u);

L_1007CF28:
    PUSH32(esp, ebp); /* 0x1007CF28: push ebp */
    ebp = esp; /* 0x1007CF29: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007CF2B: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CF2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xAu */ /* 0x1007CF30: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CF44; /* 0x1007CF33: jne 0x1007cf44 */
L_1007CF35:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1007CF35: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007CF44; /* 0x1007CF38: jg 0x1007cf44 */
L_1007CF3A:
    if (CMP_L(_flag_a, _flag_b)) goto L_1007CF41; /* 0x1007CF3A: jl 0x1007cf41 */
L_1007CF3C:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007CF3C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007CF44; /* 0x1007CF3F: jae 0x1007cf44 */
L_1007CF41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CF41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CF43: inc eax */
    _flag_k = FK_INC;
L_1007CF44:
    ecx = MEM32(ebp + 0x10); /* 0x1007CF44: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1007CF47: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CF48: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CF4B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CE9D); /* 0x1007CF4E: call 0x1007ce9d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007CF53: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1007CF56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CF57: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CF58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CF58u);

L_1007CF58:
    PUSH32(esp, ebp); /* 0x1007CF58: push ebp */
    ebp = esp; /* 0x1007CF59: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x1007CF5B: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007CF5F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007CF62: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CF6F; /* 0x1007CF63: jne 0x1007cf6f */
L_1007CF65:
    /* test eax, eax */ /* 0x1007CF65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007CF6F; /* 0x1007CF67: jns 0x1007cf6f */
L_1007CF69:
    PUSH32(esp, 1); /* 0x1007CF69: push 1 */
    PUSH32(esp, 0xAu); /* 0x1007CF6B: push 0xa */
    goto L_1007CF74; /* 0x1007CF6D: jmp 0x1007cf74 */
L_1007CF6F:
    PUSH32(esp, 0); /* 0x1007CF6F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CF71: push dword ptr [ebp + 0x10] */
L_1007CF74:
    esi = MEM32(ebp + 0xC); /* 0x1007CF74: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007CF77: push esi */
    PUSH32(esp, eax); /* 0x1007CF78: push eax */
    RECOMP_CALL(sub_1007CFE0); /* 0x1007CF79: call 0x1007cfe0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007CF7E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007CF80: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007CF81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CF82: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CF83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CF83u);

L_1007CF83:
    PUSH32(esp, ebp); /* 0x1007CF83: push ebp */
    ebp = esp; /* 0x1007CF84: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x1007CF86: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CF97; /* 0x1007CF8A: jne 0x1007cf97 */
L_1007CF8C:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1007CF8C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007CF97; /* 0x1007CF90: jge 0x1007cf97 */
L_1007CF92:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CF92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CF94: inc eax */
    _flag_k = FK_INC;
    goto L_1007CF99; /* 0x1007CF95: jmp 0x1007cf99 */
L_1007CF97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CF97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007CF99:
    PUSH32(esp, eax); /* 0x1007CF99: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CF9A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CF9D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CFA0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CFE0); /* 0x1007CFA3: call 0x1007cfe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007CFA8: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x1007CFAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CFAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CFAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CFADu);

L_1007CFAD:
    PUSH32(esp, ebp); /* 0x1007CFAD: push ebp */
    ebp = esp; /* 0x1007CFAE: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007CFB0: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007CFB3: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1007CFB6: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CFB8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CFBB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CE9D); /* 0x1007CFBE: call 0x1007ce9d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007CFC3: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1007CFC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CFC7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CFC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CFC8u);

L_1007CFC8:
    PUSH32(esp, ebp); /* 0x1007CFC8: push ebp */
    ebp = esp; /* 0x1007CFC9: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1007CFCB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CFCD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CFD0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CFD3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CFE0); /* 0x1007CFD6: call 0x1007cfe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007CFDB: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x1007CFDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CFDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CFE0u);

L_1007CFE0:
    PUSH32(esp, ebp); /* 0x1007CFE0: push ebp */
    ebp = esp; /* 0x1007CFE1: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1007CFE3: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1007CFE7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1007CFEA: push ebx */
    PUSH32(esp, esi); /* 0x1007CFEB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007CFEC: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007CFEF: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007CFFD; /* 0x1007CFF0: je 0x1007cffd */
L_1007CFF2:
    PUSH32(esp, 0x2Du); /* 0x1007CFF2: push 0x2d */
    eax = POP32_VAL(esp); /* 0x1007CFF4: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007CFF5: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1007CFF8: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1007CFFB: neg ecx */
    _flag_k = FK_CMP;
L_1007CFFD:
    PUSH32(esp, 2); /* 0x1007CFFD: push 2 */
    edi = esi; /* 0x1007CFFF: mov edi, esi */
    ebx = POP32_VAL(esp); /* 0x1007D001: pop ebx */
L_1007D002:
    eax = ecx; /* 0x1007D002: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007D004: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x1007D006: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x1007D009: mov ecx, eax */
    eax = edx + 0x57; /* 0x1007D00B: lea eax, [edx + 0x57] */
    /* cmp edx, 9 */ /* 0x1007D00E: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1007D016; /* 0x1007D011: ja 0x1007d016 */
L_1007D013:
    eax = edx + 0x30; /* 0x1007D013: lea eax, [edx + 0x30] */
L_1007D016:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007D016: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x1007D019: add esi, ebx */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1007D01B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D002; /* 0x1007D01D: jne 0x1007d002 */
L_1007D01F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D01F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007D021: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1007D024: sub esi, ebx */
    _flag_k = FK_CMP;
L_1007D026:
    SET_LO16(eax, MEM16(edi)); /* 0x1007D026: mov ax, word ptr [edi] */
    ecx = (uint32_t)MEM16(esi); /* 0x1007D029: movzx ecx, word ptr [esi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1007D02C: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1007D02F: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1007D031: mov word ptr [edi], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1007D034: add edi, ebx */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x1007D036: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007D026; /* 0x1007D038: jb 0x1007d026 */
L_1007D03A:
    edi = POP32_VAL(esp); /* 0x1007D03A: pop edi */
    esi = POP32_VAL(esp); /* 0x1007D03B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007D03C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007D03D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007D03E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1007D041(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D041u);

L_1007D041:
    PUSH32(esp, ebp); /* 0x1007D041: push ebp */
    ebp = esp; /* 0x1007D042: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007D044: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x1007D047: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1007D04A: mov dword ptr [ebp - 0xc], ecx */
    PUSH32(esp, esi); /* 0x1007D04D: push esi */
    /* test ecx, ecx */ /* 0x1007D04E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D068; /* 0x1007D050: jne 0x1007d068 */
L_1007D052:
    RECOMP_CALL(sub_1001177D); /* 0x1007D052: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007D057: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1007D059: pop esi */
    MEM32(eax) = esi; /* 0x1007D05A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007D05C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007D061: mov eax, esi */
    goto L_1007D156; /* 0x1007D063: jmp 0x1007d156 */
L_1007D068:
    PUSH32(esp, ebx); /* 0x1007D068: push ebx */
    PUSH32(esp, edi); /* 0x1007D069: push edi */
    /* test edx, edx */ /* 0x1007D06A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D07B; /* 0x1007D06C: jne 0x1007d07b */
L_1007D06E:
    RECOMP_CALL(sub_1001177D); /* 0x1007D06E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007D073: push 0x16 */
L_1007D075:
    esi = POP32_VAL(esp); /* 0x1007D075: pop esi */
    goto L_1007D126; /* 0x1007D076: jmp 0x1007d126 */
L_1007D07B:
    ebx = MEM32(ebp + 0x14); /* 0x1007D07B: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D07E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1007D080: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1007D082: mov word ptr [ecx], ax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007D085: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D088: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x1007D089: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1007D096; /* 0x1007D08B: ja 0x1007d096 */
L_1007D08D:
    RECOMP_CALL(sub_1001177D); /* 0x1007D08D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1007D092: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1007D075; /* 0x1007D094: jmp 0x1007d075 */
L_1007D096:
    eax = MEM32(ebp + 0x10); /* 0x1007D096: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x22u); /* 0x1007D099: push 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1007D09B: add eax, -2 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1007D09E: pop esi */
    /* cmp eax, esi */ /* 0x1007D09F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1007D06E; /* 0x1007D0A1: ja 0x1007d06e */
L_1007D0A3:
    edx = MEM32(ebp + 0xC); /* 0x1007D0A3: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D0A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x1007D0A8: mov dword ptr [ebp + 0x14], eax */
    edi = ecx; /* 0x1007D0AB: mov edi, ecx */
    /* test ebx, ebx */ /* 0x1007D0AD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D0CC; /* 0x1007D0AF: je 0x1007d0cc */
L_1007D0B1:
    PUSH32(esp, 0x2Du); /* 0x1007D0B1: push 0x2d */
    eax = POP32_VAL(esp); /* 0x1007D0B3: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1007D0B4: mov word ptr [ecx], ax */
    edi = ecx + 0x2; /* 0x1007D0B7: lea edi, [ecx + 2] */
    ecx = MEM32(ebp + 0x8); /* 0x1007D0BA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D0BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D0BF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1007D0C0: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x1007D0C2: mov dword ptr [ebp + 0x14], eax */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007D0C5: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1007D0C8: neg edx */
    _flag_k = FK_CMP;
    goto L_1007D0CF; /* 0x1007D0CA: jmp 0x1007d0cf */
L_1007D0CC:
    ecx = MEM32(ebp + 0x8); /* 0x1007D0CC: mov ecx, dword ptr [ebp + 8] */
L_1007D0CF:
    esi = MEM32(ebp + (-0x4)); /* 0x1007D0CF: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = edi; /* 0x1007D0D2: mov dword ptr [ebp - 0x10], edi */
L_1007D0D5:
    PUSH32(esp, 0); /* 0x1007D0D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007D0D7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x1007D0DA: push edx */
    PUSH32(esp, ecx); /* 0x1007D0DB: push ecx */
    RECOMP_CALL(sub_10011849); /* 0x1007D0DC: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = ecx; /* 0x1007D0E1: mov dword ptr [ebp + 0xc], ecx */
    ecx = eax; /* 0x1007D0E4: mov ecx, eax */
    eax = MEM32(ebp + 0xC); /* 0x1007D0E6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007D0E9: mov dword ptr [ebp - 4], ebx */
    /* cmp eax, 9 */ /* 0x1007D0EC: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007D0F6; /* 0x1007D0EF: jbe 0x1007d0f6 */
L_1007D0F1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x57u; /* 0x1007D0F1: add eax, 0x57 */
    _flag_k = FK_ADD;
    goto L_1007D0F9; /* 0x1007D0F4: jmp 0x1007d0f9 */
L_1007D0F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1007D0F6: add eax, 0x30 */
    _flag_k = FK_ADD;
L_1007D0F9:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1007D0F9: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1007D0FC: add edi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x1007D0FF: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D102: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x1007D103: mov dword ptr [ebp + 0x14], eax */
    /* test edx, edx */ /* 0x1007D106: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D10E; /* 0x1007D108: jne 0x1007d10e */
L_1007D10A:
    /* test ecx, ecx */ /* 0x1007D10A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D112; /* 0x1007D10C: je 0x1007d112 */
L_1007D10E:
    /* cmp eax, esi */ /* 0x1007D10E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007D0D5; /* 0x1007D110: jb 0x1007d0d5 */
L_1007D112:
    PUSH32(esp, 0x22u); /* 0x1007D112: push 0x22 */
    /* cmp eax, esi */ /* 0x1007D114: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1007D116: pop esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_1007D131; /* 0x1007D117: jb 0x1007d131 */
L_1007D119:
    eax = MEM32(ebp + (-0xC)); /* 0x1007D119: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007D11C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1007D11E: mov word ptr [eax], cx */
    RECOMP_CALL(sub_1001177D); /* 0x1007D121: call 0x1001177d */
    RECOMP_FLAGS_IN();
L_1007D126:
    MEM32(eax) = esi; /* 0x1007D126: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007D128: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007D12D: mov eax, esi */
    goto L_1007D154; /* 0x1007D12F: jmp 0x1007d154 */
L_1007D131:
    edx = MEM32(ebp + (-0x10)); /* 0x1007D131: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D134: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1007D136: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1007D139: sub edi, 2 */
    _flag_k = FK_CMP;
L_1007D13C:
    SET_LO16(eax, MEM16(edx)); /* 0x1007D13C: mov ax, word ptr [edx] */
    ecx = (uint32_t)MEM16(edi); /* 0x1007D13F: movzx ecx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1007D142: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1007D145: sub edi, 2 */
    _flag_k = FK_CMP;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1007D148: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1007D14B: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x1007D14E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007D13C; /* 0x1007D150: jb 0x1007d13c */
L_1007D152:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D152: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007D154:
    edi = POP32_VAL(esp); /* 0x1007D154: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D155: pop ebx */
L_1007D156:
    esi = POP32_VAL(esp); /* 0x1007D156: pop esi */
    esp = ebp; /* 0x1007D157: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D159: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007D15A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1007D15D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D15Du);

L_1007D15D:
    PUSH32(esp, ebp); /* 0x1007D15D: push ebp */
    ebp = esp; /* 0x1007D15E: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D160: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0xAu */ /* 0x1007D162: cmp dword ptr [ebp + 0x18], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007D177; /* 0x1007D166: jne 0x1007d177 */
L_1007D168:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1007D168: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007D177; /* 0x1007D16B: jg 0x1007d177 */
L_1007D16D:
    if (CMP_L(_flag_a, _flag_b)) goto L_1007D174; /* 0x1007D16D: jl 0x1007d174 */
L_1007D16F:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007D16F: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007D177; /* 0x1007D172: jae 0x1007d177 */
L_1007D174:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D174: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D176: inc eax */
    _flag_k = FK_INC;
L_1007D177:
    edx = MEM32(ebp + 0x14); /* 0x1007D177: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007D17A: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1007D17D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1007D17E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007D181: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D184: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007D041); /* 0x1007D187: call 0x1007d041 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007D18C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D18D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D18E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D18Eu);

L_1007D18E:
    PUSH32(esp, ebp); /* 0x1007D18E: push ebp */
    ebp = esp; /* 0x1007D18F: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007D191: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007D194: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1007D197: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1007D199: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007D19C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D19F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007D041); /* 0x1007D1A2: call 0x1007d041 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007D1A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D1A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D1A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D1A9u);

L_1007D1A9:
    PUSH32(esp, ebp); /* 0x1007D1A9: push ebp */
    ebp = esp; /* 0x1007D1AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1007D1AC: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D1AF: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D1B4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D1B6: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D1B9: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x1007D1BC: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007D1C7; /* 0x1007D1BF: jne 0x1007d1c7 */
L_1007D1C1:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1007D1C1: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D214; /* 0x1007D1C5: je 0x1007d214 */
L_1007D1C7:
    ecx = ebp + (-0x24); /* 0x1007D1C7: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1007D1CA: push ecx */
    PUSH32(esp, eax); /* 0x1007D1CB: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007D1CC: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D1D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D214; /* 0x1007D1D4: je 0x1007d214 */
L_1007D1D6:
    eax = ebp + (-0x14); /* 0x1007D1D6: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007D1D9: push eax */
    eax = ebp + (-0x24); /* 0x1007D1DA: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1007D1DD: push eax */
    PUSH32(esp, 0); /* 0x1007D1DE: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007D1E0: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D1E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D214; /* 0x1007D1E8: je 0x1007d214 */
L_1007D1EA:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x1007D1EA: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007D1EE: push -1 */
    PUSH32(esp, eax); /* 0x1007D1F0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x1007D1F1: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x1007D1F5: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x1007D1F6: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1007D1FA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1007D1FB: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x1007D1FF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1007D200: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x1007D204: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x1007D205: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007D209: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007D20A: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007D20F: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_1007D217; /* 0x1007D212: jmp 0x1007d217 */
L_1007D214:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D214: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007D217:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D217: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D21A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D21C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D221: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D223: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D224: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D225(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D225u);

L_1007D225:
    PUSH32(esp, ebp); /* 0x1007D225: push ebp */
    ebp = esp; /* 0x1007D226: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007D228: push ecx */
    PUSH32(esp, ebx); /* 0x1007D229: push ebx */
    PUSH32(esp, edi); /* 0x1007D22A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D22B: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1007D22E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007D231: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007D232: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007D234: mov dword ptr [ebp - 4], ebx */
    eax = edi + 0x14; /* 0x1007D237: lea eax, [edi + 0x14] */
    PUSH32(esp, eax); /* 0x1007D23A: push eax */
    RECOMP_CALL(sub_1007BAD8); /* 0x1007D23B: call 0x1007bad8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D240: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D241: pop ecx */
    /* test eax, eax */ /* 0x1007D242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D24C; /* 0x1007D244: jne 0x1007d24c */
L_1007D246:
    edi = POP32_VAL(esp); /* 0x1007D246: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D247: pop ebx */
    esp = ebp; /* 0x1007D248: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D24A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D24B: ret  */
L_1007D24C:
    PUSH32(esp, esi); /* 0x1007D24C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D24D: push dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1007D250: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x104u); /* 0x1007D253: push 0x104 */
    eax = esi + 0x14; /* 0x1007D258: lea eax, [esi + 0x14] */
    PUSH32(esp, eax); /* 0x1007D25B: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1007D25C: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D261: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007D264: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D293; /* 0x1007D266: jne 0x1007d293 */
L_1007D268:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D268: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D26B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1007D270: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1007D272: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x1007D274: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007D277: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x1007D27A: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1007D27D: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x1007D280: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1007D283: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x1007D286: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1007D289: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D28C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007D28E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D28F: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1007D290: pop esi */
    RECOMP_BACKEDGE();
    goto L_1007D246; /* 0x1007D291: jmp 0x1007d246 */
L_1007D293:
    PUSH32(esp, ebx); /* 0x1007D293: push ebx */
    PUSH32(esp, ebx); /* 0x1007D294: push ebx */
    PUSH32(esp, ebx); /* 0x1007D295: push ebx */
    PUSH32(esp, ebx); /* 0x1007D296: push ebx */
    PUSH32(esp, ebx); /* 0x1007D297: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007D298: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007D29Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007D29E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D29Eu);

L_1007D29E:
    PUSH32(esp, ebp); /* 0x1007D29E: push ebp */
    ebp = esp; /* 0x1007D29F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D2A1: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007D2A4: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D2AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D2BE; /* 0x1007D2AC: jne 0x1007d2be */
L_1007D2AE:
    RECOMP_CALL(sub_1001177D); /* 0x1007D2AE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007D2B3: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D2B9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007D2BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D2BD: ret  */
L_1007D2BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D2BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007D2C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D2C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D2C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D2C2u);

L_1007D2C2:
    PUSH32(esp, ebp); /* 0x1007D2C2: push ebp */
    ebp = esp; /* 0x1007D2C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x224u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x224u; /* 0x1007D2C5: sub esp, 0x224 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D2CB: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D2D0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D2D2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D2D5: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x224); /* 0x1007D2D8: lea ecx, [ebp - 0x224] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x224))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x224)) = MEM32(ebp + (-0x224)) & 0; /* 0x1007D2DE: and dword ptr [ebp - 0x224], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007D2E5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D2E6: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007D2E9: push ecx */
    PUSH32(esp, eax); /* 0x1007D2EA: push eax */
    RECOMP_CALL(sub_1007BA26); /* 0x1007D2EB: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D2F0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D2F1: pop ecx */
    /* test eax, eax */ /* 0x1007D2F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D2FB; /* 0x1007D2F4: jne 0x1007d2fb */
L_1007D2F6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D2F6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D33E; /* 0x1007D2F9: jmp 0x1007d33e */
L_1007D2FB:
    PUSH32(esp, esi); /* 0x1007D2FB: push esi */
    eax = ebp + (-0x220); /* 0x1007D2FC: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x1007D302: push eax */
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1007D303: push dword ptr [ebp - 0x224] */
    RECOMP_CALL(sub_1007D86F); /* 0x1007D309: call 0x1007d86f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1007D30E: push dword ptr [ebp - 0x224] */
    esi = eax; /* 0x1007D314: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D316: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D31B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D31E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D33B; /* 0x1007D321: je 0x1007d33b */
L_1007D323:
    ecx = ebp + (-0x220); /* 0x1007D323: lea ecx, [ebp - 0x220] */
    PUSH32(esp, ecx); /* 0x1007D329: push ecx */
    PUSH32(esp, edi); /* 0x1007D32A: push edi */
    RECOMP_CALL(sub_1007D225); /* 0x1007D32B: call 0x1007d225 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D330: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D331: pop ecx */
    /* test eax, eax */ /* 0x1007D332: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D33B; /* 0x1007D334: jne 0x1007d33b */
L_1007D336:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D336: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D33D; /* 0x1007D339: jmp 0x1007d33d */
L_1007D33B:
    eax = esi; /* 0x1007D33B: mov eax, esi */
L_1007D33D:
    esi = POP32_VAL(esp); /* 0x1007D33D: pop esi */
L_1007D33E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D33E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D341: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1007D343: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D344: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D349: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D34B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D34C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D34D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D34Du);

L_1007D34D:
    PUSH32(esp, ebp); /* 0x1007D34D: push ebp */
    ebp = esp; /* 0x1007D34E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x220u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x220u; /* 0x1007D350: sub esp, 0x220 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D356: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D35B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D35D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007D360: push esi */
    PUSH32(esp, edi); /* 0x1007D361: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D362: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x220); /* 0x1007D365: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x1007D36B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D36C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007D98D); /* 0x1007D36F: call 0x1007d98d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007D374: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007D376: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D377: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D378: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D395; /* 0x1007D37B: je 0x1007d395 */
L_1007D37D:
    ecx = ebp + (-0x220); /* 0x1007D37D: lea ecx, [ebp - 0x220] */
    PUSH32(esp, ecx); /* 0x1007D383: push ecx */
    PUSH32(esp, edi); /* 0x1007D384: push edi */
    RECOMP_CALL(sub_1007D225); /* 0x1007D385: call 0x1007d225 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D38A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D38B: pop ecx */
    /* test eax, eax */ /* 0x1007D38C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D395; /* 0x1007D38E: jne 0x1007d395 */
L_1007D390:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D390: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D397; /* 0x1007D393: jmp 0x1007d397 */
L_1007D395:
    eax = esi; /* 0x1007D395: mov eax, esi */
L_1007D397:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D397: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007D39A: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D39B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D39D: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D39E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D3A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D3A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D3A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D3A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D3A7u);

L_1007D3A7:
    PUSH32(esp, ebp); /* 0x1007D3A7: push ebp */
    ebp = esp; /* 0x1007D3A8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007D3AA: push ecx */
    PUSH32(esp, ebx); /* 0x1007D3AB: push ebx */
    PUSH32(esp, edi); /* 0x1007D3AC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D3AD: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1007D3B0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007D3B3: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007D3B4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007D3B6: mov dword ptr [ebp - 4], ebx */
    eax = edi + 0x28; /* 0x1007D3B9: lea eax, [edi + 0x28] */
    PUSH32(esp, eax); /* 0x1007D3BC: push eax */
    RECOMP_CALL(sub_1007BAD8); /* 0x1007D3BD: call 0x1007bad8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D3C2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D3C3: pop ecx */
    /* test eax, eax */ /* 0x1007D3C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D3CE; /* 0x1007D3C6: jne 0x1007d3ce */
L_1007D3C8:
    edi = POP32_VAL(esp); /* 0x1007D3C8: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D3C9: pop ebx */
    esp = ebp; /* 0x1007D3CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D3CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D3CD: ret  */
L_1007D3CE:
    PUSH32(esp, esi); /* 0x1007D3CE: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D3CF: push dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1007D3D2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x104u); /* 0x1007D3D5: push 0x104 */
    eax = esi + 0x28; /* 0x1007D3DA: lea eax, [esi + 0x28] */
    PUSH32(esp, eax); /* 0x1007D3DD: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1007D3DE: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D3E3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007D3E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D42D; /* 0x1007D3E8: jne 0x1007d42d */
L_1007D3EA:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D3EA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D3ED: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1007D3F2: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1007D3F4: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x8); /* 0x1007D3F6: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1007D3F9: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x1007D3FC: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1007D3FF: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x1007D402: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1007D405: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x14); /* 0x1007D408: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x1007D40B: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x18); /* 0x1007D40E: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x1007D411: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x1007D414: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x1007D417: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x20); /* 0x1007D41A: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x1007D41D: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(edi + 0x24); /* 0x1007D420: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = eax; /* 0x1007D423: mov dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D426: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007D428: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D429: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1007D42A: pop esi */
    RECOMP_BACKEDGE();
    goto L_1007D3C8; /* 0x1007D42B: jmp 0x1007d3c8 */
L_1007D42D:
    PUSH32(esp, ebx); /* 0x1007D42D: push ebx */
    PUSH32(esp, ebx); /* 0x1007D42E: push ebx */
    PUSH32(esp, ebx); /* 0x1007D42F: push ebx */
    PUSH32(esp, ebx); /* 0x1007D430: push ebx */
    PUSH32(esp, ebx); /* 0x1007D431: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007D432: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007D437u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007D438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D438u);

L_1007D438:
    PUSH32(esp, ebp); /* 0x1007D438: push ebp */
    ebp = esp; /* 0x1007D439: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x238u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x238u; /* 0x1007D43B: sub esp, 0x238 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D441: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D446: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D448: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D44B: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x238); /* 0x1007D44E: lea ecx, [ebp - 0x238] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x238)) = MEM32(ebp + (-0x238)) & 0; /* 0x1007D454: and dword ptr [ebp - 0x238], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007D45B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D45C: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007D45F: push ecx */
    PUSH32(esp, eax); /* 0x1007D460: push eax */
    RECOMP_CALL(sub_1007BA26); /* 0x1007D461: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D466: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D467: pop ecx */
    /* test eax, eax */ /* 0x1007D468: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D471; /* 0x1007D46A: jne 0x1007d471 */
L_1007D46C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D46C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D4B4; /* 0x1007D46F: jmp 0x1007d4b4 */
L_1007D471:
    PUSH32(esp, esi); /* 0x1007D471: push esi */
    eax = ebp + (-0x234); /* 0x1007D472: lea eax, [ebp - 0x234] */
    PUSH32(esp, eax); /* 0x1007D478: push eax */
    PUSH32(esp, MEM32(ebp + (-0x238))); /* 0x1007D479: push dword ptr [ebp - 0x238] */
    RECOMP_CALL(sub_1007DA9B); /* 0x1007D47F: call 0x1007da9b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x238))); /* 0x1007D484: push dword ptr [ebp - 0x238] */
    esi = eax; /* 0x1007D48A: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D48C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D491: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D494: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D4B1; /* 0x1007D497: je 0x1007d4b1 */
L_1007D499:
    ecx = ebp + (-0x234); /* 0x1007D499: lea ecx, [ebp - 0x234] */
    PUSH32(esp, ecx); /* 0x1007D49F: push ecx */
    PUSH32(esp, edi); /* 0x1007D4A0: push edi */
    RECOMP_CALL(sub_1007D3A7); /* 0x1007D4A1: call 0x1007d3a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D4A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D4A7: pop ecx */
    /* test eax, eax */ /* 0x1007D4A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D4B1; /* 0x1007D4AA: jne 0x1007d4b1 */
L_1007D4AC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D4AC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D4B3; /* 0x1007D4AF: jmp 0x1007d4b3 */
L_1007D4B1:
    eax = esi; /* 0x1007D4B1: mov eax, esi */
L_1007D4B3:
    esi = POP32_VAL(esp); /* 0x1007D4B3: pop esi */
L_1007D4B4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D4B4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D4B7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1007D4B9: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D4BA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D4BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D4C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D4C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D4C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D4C3u);

L_1007D4C3:
    PUSH32(esp, ebp); /* 0x1007D4C3: push ebp */
    ebp = esp; /* 0x1007D4C4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x234u; /* 0x1007D4C6: sub esp, 0x234 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D4CC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D4D1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D4D3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007D4D6: push esi */
    PUSH32(esp, edi); /* 0x1007D4D7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D4D8: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x234); /* 0x1007D4DB: lea eax, [ebp - 0x234] */
    PUSH32(esp, eax); /* 0x1007D4E1: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D4E2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007DBCF); /* 0x1007D4E5: call 0x1007dbcf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007D4EA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007D4EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D4ED: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D4EE: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D50B; /* 0x1007D4F1: je 0x1007d50b */
L_1007D4F3:
    ecx = ebp + (-0x234); /* 0x1007D4F3: lea ecx, [ebp - 0x234] */
    PUSH32(esp, ecx); /* 0x1007D4F9: push ecx */
    PUSH32(esp, edi); /* 0x1007D4FA: push edi */
    RECOMP_CALL(sub_1007D3A7); /* 0x1007D4FB: call 0x1007d3a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D500: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D501: pop ecx */
    /* test eax, eax */ /* 0x1007D502: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D50B; /* 0x1007D504: jne 0x1007d50b */
L_1007D506:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D506: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D50D; /* 0x1007D509: jmp 0x1007d50d */
L_1007D50B:
    eax = esi; /* 0x1007D50B: mov eax, esi */
L_1007D50D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D50D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007D510: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D511: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D513: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D514: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D519: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D51B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D51C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D51D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D51Du);

L_1007D51D:
    PUSH32(esp, ebp); /* 0x1007D51D: push ebp */
    ebp = esp; /* 0x1007D51E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1007D520: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D523: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D528: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D52A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D52D: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x1007D530: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007D53B; /* 0x1007D533: jne 0x1007d53b */
L_1007D535:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1007D535: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D588; /* 0x1007D539: je 0x1007d588 */
L_1007D53B:
    ecx = ebp + (-0x24); /* 0x1007D53B: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1007D53E: push ecx */
    PUSH32(esp, eax); /* 0x1007D53F: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007D540: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D546: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D588; /* 0x1007D548: je 0x1007d588 */
L_1007D54A:
    eax = ebp + (-0x14); /* 0x1007D54A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007D54D: push eax */
    eax = ebp + (-0x24); /* 0x1007D54E: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1007D551: push eax */
    PUSH32(esp, 0); /* 0x1007D552: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007D554: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D55A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D588; /* 0x1007D55C: je 0x1007d588 */
L_1007D55E:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x1007D55E: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007D562: push -1 */
    PUSH32(esp, eax); /* 0x1007D564: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x1007D565: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x1007D569: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x1007D56A: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1007D56E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1007D56F: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x1007D573: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1007D574: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x1007D578: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x1007D579: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007D57D: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x1007D57E: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007D583: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_1007D58D; /* 0x1007D586: jmp 0x1007d58d */
L_1007D588:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D588: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1007D58B: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007D58D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D58D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D590: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D592: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D597: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D59A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D59B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D59Bu);

L_1007D59B:
    PUSH32(esp, ebp); /* 0x1007D59B: push ebp */
    ebp = esp; /* 0x1007D59C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007D59E: push ecx */
    PUSH32(esp, ebx); /* 0x1007D59F: push ebx */
    PUSH32(esp, edi); /* 0x1007D5A0: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D5A1: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1007D5A4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007D5A7: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007D5A8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007D5AA: mov dword ptr [ebp - 4], ebx */
    eax = edi + 0x24; /* 0x1007D5AD: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x1007D5B0: push eax */
    RECOMP_CALL(sub_1007BAD8); /* 0x1007D5B1: call 0x1007bad8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D5B6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D5B7: pop ecx */
    /* test eax, eax */ /* 0x1007D5B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D5C2; /* 0x1007D5BA: jne 0x1007d5c2 */
L_1007D5BC:
    edi = POP32_VAL(esp); /* 0x1007D5BC: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D5BD: pop ebx */
    esp = ebp; /* 0x1007D5BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D5C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D5C1: ret  */
L_1007D5C2:
    PUSH32(esp, esi); /* 0x1007D5C2: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D5C3: push dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1007D5C6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x104u); /* 0x1007D5C9: push 0x104 */
    eax = esi + 0x24; /* 0x1007D5CE: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x1007D5D1: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1007D5D2: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D5D7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007D5DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D61B; /* 0x1007D5DC: jne 0x1007d61b */
L_1007D5DE:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D5DE: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D5E1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1007D5E6: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1007D5E8: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x8); /* 0x1007D5EA: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1007D5ED: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x1007D5F0: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1007D5F3: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x1007D5F6: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1007D5F9: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x14); /* 0x1007D5FC: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x1007D5FF: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x18); /* 0x1007D602: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x1007D605: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x1007D608: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x1007D60B: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x20); /* 0x1007D60E: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x1007D611: mov dword ptr [esi + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D614: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007D616: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D617: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1007D618: pop esi */
    RECOMP_BACKEDGE();
    goto L_1007D5BC; /* 0x1007D619: jmp 0x1007d5bc */
L_1007D61B:
    PUSH32(esp, ebx); /* 0x1007D61B: push ebx */
    PUSH32(esp, ebx); /* 0x1007D61C: push ebx */
    PUSH32(esp, ebx); /* 0x1007D61D: push ebx */
    PUSH32(esp, ebx); /* 0x1007D61E: push ebx */
    PUSH32(esp, ebx); /* 0x1007D61F: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007D620: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007D625u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007D626(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D626u);

L_1007D626:
    PUSH32(esp, ebp); /* 0x1007D626: push ebp */
    ebp = esp; /* 0x1007D627: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x238u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x238u; /* 0x1007D629: sub esp, 0x238 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D62F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D634: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D636: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D639: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x238); /* 0x1007D63C: lea ecx, [ebp - 0x238] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x238)) = MEM32(ebp + (-0x238)) & 0; /* 0x1007D642: and dword ptr [ebp - 0x238], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007D649: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D64A: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007D64D: push ecx */
    PUSH32(esp, eax); /* 0x1007D64E: push eax */
    RECOMP_CALL(sub_1007BA26); /* 0x1007D64F: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D654: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D655: pop ecx */
    /* test eax, eax */ /* 0x1007D656: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D65F; /* 0x1007D658: jne 0x1007d65f */
L_1007D65A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D65A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D6A2; /* 0x1007D65D: jmp 0x1007d6a2 */
L_1007D65F:
    PUSH32(esp, esi); /* 0x1007D65F: push esi */
    eax = ebp + (-0x234); /* 0x1007D660: lea eax, [ebp - 0x234] */
    PUSH32(esp, eax); /* 0x1007D666: push eax */
    PUSH32(esp, MEM32(ebp + (-0x238))); /* 0x1007D667: push dword ptr [ebp - 0x238] */
    RECOMP_CALL(sub_1007DCF7); /* 0x1007D66D: call 0x1007dcf7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x238))); /* 0x1007D672: push dword ptr [ebp - 0x238] */
    esi = eax; /* 0x1007D678: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D67A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D67F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D682: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D69F; /* 0x1007D685: je 0x1007d69f */
L_1007D687:
    ecx = ebp + (-0x234); /* 0x1007D687: lea ecx, [ebp - 0x234] */
    PUSH32(esp, ecx); /* 0x1007D68D: push ecx */
    PUSH32(esp, edi); /* 0x1007D68E: push edi */
    RECOMP_CALL(sub_1007D59B); /* 0x1007D68F: call 0x1007d59b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D694: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D695: pop ecx */
    /* test eax, eax */ /* 0x1007D696: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D69F; /* 0x1007D698: jne 0x1007d69f */
L_1007D69A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D69A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D6A1; /* 0x1007D69D: jmp 0x1007d6a1 */
L_1007D69F:
    eax = esi; /* 0x1007D69F: mov eax, esi */
L_1007D6A1:
    esi = POP32_VAL(esp); /* 0x1007D6A1: pop esi */
L_1007D6A2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D6A2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D6A5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1007D6A7: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D6A8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D6AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D6AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D6B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D6B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D6B1u);

L_1007D6B1:
    PUSH32(esp, ebp); /* 0x1007D6B1: push ebp */
    ebp = esp; /* 0x1007D6B2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x234u; /* 0x1007D6B4: sub esp, 0x234 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D6BA: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D6BF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D6C1: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007D6C4: push esi */
    PUSH32(esp, edi); /* 0x1007D6C5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D6C6: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x234); /* 0x1007D6C9: lea eax, [ebp - 0x234] */
    PUSH32(esp, eax); /* 0x1007D6CF: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D6D0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007DE1E); /* 0x1007D6D3: call 0x1007de1e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007D6D8: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007D6DA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D6DB: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D6DC: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D6F9; /* 0x1007D6DF: je 0x1007d6f9 */
L_1007D6E1:
    ecx = ebp + (-0x234); /* 0x1007D6E1: lea ecx, [ebp - 0x234] */
    PUSH32(esp, ecx); /* 0x1007D6E7: push ecx */
    PUSH32(esp, edi); /* 0x1007D6E8: push edi */
    RECOMP_CALL(sub_1007D59B); /* 0x1007D6E9: call 0x1007d59b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D6EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D6EF: pop ecx */
    /* test eax, eax */ /* 0x1007D6F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D6F9; /* 0x1007D6F2: jne 0x1007d6f9 */
L_1007D6F4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D6F4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D6FB; /* 0x1007D6F7: jmp 0x1007d6fb */
L_1007D6F9:
    eax = esi; /* 0x1007D6F9: mov eax, esi */
L_1007D6FB:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D6FB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007D6FE: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D6FF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D701: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D702: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D707: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D709: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D70A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D70B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D70Bu);

L_1007D70B:
    PUSH32(esp, ebp); /* 0x1007D70B: push ebp */
    ebp = esp; /* 0x1007D70C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007D70E: push ecx */
    PUSH32(esp, ebx); /* 0x1007D70F: push ebx */
    PUSH32(esp, edi); /* 0x1007D710: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D711: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1007D714: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007D717: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007D718: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007D71A: mov dword ptr [ebp - 4], ebx */
    eax = edi + 0x18; /* 0x1007D71D: lea eax, [edi + 0x18] */
    PUSH32(esp, eax); /* 0x1007D720: push eax */
    RECOMP_CALL(sub_1007BAD8); /* 0x1007D721: call 0x1007bad8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D726: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D727: pop ecx */
    /* test eax, eax */ /* 0x1007D728: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D732; /* 0x1007D72A: jne 0x1007d732 */
L_1007D72C:
    edi = POP32_VAL(esp); /* 0x1007D72C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D72D: pop ebx */
    esp = ebp; /* 0x1007D72E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D730: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D731: ret  */
L_1007D732:
    PUSH32(esp, esi); /* 0x1007D732: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D733: push dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1007D736: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x104u); /* 0x1007D739: push 0x104 */
    eax = esi + 0x18; /* 0x1007D73E: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1007D741: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1007D742: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D747: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007D74A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D77F; /* 0x1007D74C: jne 0x1007d77f */
L_1007D74E:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007D74E: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D751: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1007D756: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1007D758: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x1007D75A: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007D75D: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x1007D760: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1007D763: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x1007D766: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1007D769: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x1007D76C: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1007D76F: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x14); /* 0x1007D772: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x1007D775: mov dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007D778: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007D77A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007D77B: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1007D77C: pop esi */
    RECOMP_BACKEDGE();
    goto L_1007D72C; /* 0x1007D77D: jmp 0x1007d72c */
L_1007D77F:
    PUSH32(esp, ebx); /* 0x1007D77F: push ebx */
    PUSH32(esp, ebx); /* 0x1007D780: push ebx */
    PUSH32(esp, ebx); /* 0x1007D781: push ebx */
    PUSH32(esp, ebx); /* 0x1007D782: push ebx */
    PUSH32(esp, ebx); /* 0x1007D783: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007D784: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007D789u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007D78A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D78Au);

L_1007D78A:
    PUSH32(esp, ebp); /* 0x1007D78A: push ebp */
    ebp = esp; /* 0x1007D78B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x228u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x228u; /* 0x1007D78D: sub esp, 0x228 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D793: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D798: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D79A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D79D: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x228); /* 0x1007D7A0: lea ecx, [ebp - 0x228] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x228))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x228)) = MEM32(ebp + (-0x228)) & 0; /* 0x1007D7A6: and dword ptr [ebp - 0x228], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007D7AD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D7AE: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007D7B1: push ecx */
    PUSH32(esp, eax); /* 0x1007D7B2: push eax */
    RECOMP_CALL(sub_1007BA26); /* 0x1007D7B3: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D7B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D7B9: pop ecx */
    /* test eax, eax */ /* 0x1007D7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D7C3; /* 0x1007D7BC: jne 0x1007d7c3 */
L_1007D7BE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D7BE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D806; /* 0x1007D7C1: jmp 0x1007d806 */
L_1007D7C3:
    PUSH32(esp, esi); /* 0x1007D7C3: push esi */
    eax = ebp + (-0x224); /* 0x1007D7C4: lea eax, [ebp - 0x224] */
    PUSH32(esp, eax); /* 0x1007D7CA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1007D7CB: push dword ptr [ebp - 0x228] */
    RECOMP_CALL(sub_1007DF35); /* 0x1007D7D1: call 0x1007df35 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1007D7D6: push dword ptr [ebp - 0x228] */
    esi = eax; /* 0x1007D7DC: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007D7DE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007D7E3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D7E6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D803; /* 0x1007D7E9: je 0x1007d803 */
L_1007D7EB:
    ecx = ebp + (-0x224); /* 0x1007D7EB: lea ecx, [ebp - 0x224] */
    PUSH32(esp, ecx); /* 0x1007D7F1: push ecx */
    PUSH32(esp, edi); /* 0x1007D7F2: push edi */
    RECOMP_CALL(sub_1007D70B); /* 0x1007D7F3: call 0x1007d70b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D7F8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D7F9: pop ecx */
    /* test eax, eax */ /* 0x1007D7FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D803; /* 0x1007D7FC: jne 0x1007d803 */
L_1007D7FE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D7FE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D805; /* 0x1007D801: jmp 0x1007d805 */
L_1007D803:
    eax = esi; /* 0x1007D803: mov eax, esi */
L_1007D805:
    esi = POP32_VAL(esp); /* 0x1007D805: pop esi */
L_1007D806:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D806: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D809: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1007D80B: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D80C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D811: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D813: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D814: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D815(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D815u);

L_1007D815:
    PUSH32(esp, ebp); /* 0x1007D815: push ebp */
    ebp = esp; /* 0x1007D816: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x224u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x224u; /* 0x1007D818: sub esp, 0x224 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D81E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D823: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D825: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007D828: push esi */
    PUSH32(esp, edi); /* 0x1007D829: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007D82A: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x224); /* 0x1007D82D: lea eax, [ebp - 0x224] */
    PUSH32(esp, eax); /* 0x1007D833: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007D834: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007E060); /* 0x1007D837: call 0x1007e060 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007D83C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007D83E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D83F: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007D840: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D85D; /* 0x1007D843: je 0x1007d85d */
L_1007D845:
    ecx = ebp + (-0x224); /* 0x1007D845: lea ecx, [ebp - 0x224] */
    PUSH32(esp, ecx); /* 0x1007D84B: push ecx */
    PUSH32(esp, edi); /* 0x1007D84C: push edi */
    RECOMP_CALL(sub_1007D70B); /* 0x1007D84D: call 0x1007d70b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007D852: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007D853: pop ecx */
    /* test eax, eax */ /* 0x1007D854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D85D; /* 0x1007D856: jne 0x1007d85d */
L_1007D858:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D858: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D85F; /* 0x1007D85B: jmp 0x1007d85f */
L_1007D85D:
    eax = esi; /* 0x1007D85D: mov eax, esi */
L_1007D85F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D85F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007D862: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D863: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D865: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D866: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D86B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D86D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D86E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007D86F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D86Fu);

L_1007D86F:
    PUSH32(esp, ebp); /* 0x1007D86F: push ebp */
    ebp = esp; /* 0x1007D870: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007D872: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D878: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D87D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D87F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007D882: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007D885: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007D886: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007D889: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D8A2; /* 0x1007D88B: jne 0x1007d8a2 */
L_1007D88D:
    RECOMP_CALL(sub_1001177D); /* 0x1007D88D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007D892: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007D898: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D89D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007D8EF; /* 0x1007D8A0: jmp 0x1007d8ef */
L_1007D8A2:
    /* test eax, eax */ /* 0x1007D8A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D88D; /* 0x1007D8A4: je 0x1007d88d */
L_1007D8A6:
    PUSH32(esp, ebx); /* 0x1007D8A6: push ebx */
    PUSH32(esp, edi); /* 0x1007D8A7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007D8A8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x254); /* 0x1007D8AA: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x1007D8B0: push ebx */
    PUSH32(esp, ebx); /* 0x1007D8B1: push ebx */
    PUSH32(esp, ebx); /* 0x1007D8B2: push ebx */
    PUSH32(esp, ecx); /* 0x1007D8B3: push ecx */
    PUSH32(esp, ebx); /* 0x1007D8B4: push ebx */
    PUSH32(esp, eax); /* 0x1007D8B5: push eax */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007D8B6: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007D8BC: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1007D8BE: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007D914; /* 0x1007D8C1: jne 0x1007d914 */
L_1007D8C3:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007D8C3: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007D8C9: push 2 */
    esi = POP32_VAL(esp); /* 0x1007D8CB: pop esi */
    /* cmp eax, esi */ /* 0x1007D8CC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007D8DF; /* 0x1007D8CE: jb 0x1007d8df */
L_1007D8D0:
    /* cmp eax, 3 */ /* 0x1007D8D0: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007D90B; /* 0x1007D8D3: jbe 0x1007d90b */
L_1007D8D5:
    /* cmp eax, 8 */ /* 0x1007D8D5: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D8FE; /* 0x1007D8D8: je 0x1007d8fe */
L_1007D8DA:
    /* cmp eax, 0x12u */ /* 0x1007D8DA: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007D90B; /* 0x1007D8DD: je 0x1007d90b */
L_1007D8DF:
    RECOMP_CALL(sub_1001177D); /* 0x1007D8DF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007D8E4: mov dword ptr [eax], 0x16 */
L_1007D8EA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D8EA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007D8ED:
    edi = POP32_VAL(esp); /* 0x1007D8ED: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007D8EE: pop ebx */
L_1007D8EF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D8EF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D8F2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D8F4: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D8F5: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D8FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D8FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D8FD: ret  */
L_1007D8FE:
    RECOMP_CALL(sub_1001177D); /* 0x1007D8FE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007D903: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007D8EA; /* 0x1007D909: jmp 0x1007d8ea */
L_1007D90B:
    RECOMP_CALL(sub_1001177D); /* 0x1007D90B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007D910: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007D8EA; /* 0x1007D912: jmp 0x1007d8ea */
L_1007D914:
    eax = MEM32(ebp + (-0x254)); /* 0x1007D914: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007D91A: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007D91D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007D91F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007D921: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007D927: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007D929: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007D92F: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007D930: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1007D935: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x1007D938: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007D93E: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007D93F: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007D944: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1007D947: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007D94D: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007D94E: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1007D953: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x1007D956: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x1007D95C: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x1007D95F: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007D965: push eax */
    eax = esi + 0x14; /* 0x1007D966: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x1007D969: push 0x104 */
    PUSH32(esp, eax); /* 0x1007D96E: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007D96F: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007D974: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007D977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007D982; /* 0x1007D979: jne 0x1007d982 */
L_1007D97B:
    eax = edi; /* 0x1007D97B: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1007D8ED; /* 0x1007D97D: jmp 0x1007d8ed */
L_1007D982:
    PUSH32(esp, ebx); /* 0x1007D982: push ebx */
    PUSH32(esp, ebx); /* 0x1007D983: push ebx */
    PUSH32(esp, ebx); /* 0x1007D984: push ebx */
    PUSH32(esp, ebx); /* 0x1007D985: push ebx */
    PUSH32(esp, ebx); /* 0x1007D986: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007D987: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007D98Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007D98D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007D98Du);

L_1007D98D:
    PUSH32(esp, ebp); /* 0x1007D98D: push ebp */
    ebp = esp; /* 0x1007D98E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007D990: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007D996: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007D99B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007D99D: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1007D9A0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007D9A3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007D9A4: mov esi, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007D9A7: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007D9CE; /* 0x1007D9AA: jne 0x1007d9ce */
L_1007D9AC:
    RECOMP_CALL(sub_1001177D); /* 0x1007D9AC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007D9B1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007D9B7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007D9BC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007D9BC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007D9BF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007D9BF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007D9C2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007D9C4: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007D9C5: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007D9CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007D9CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007D9CD: ret  */
L_1007D9CE:
    /* test esi, esi */ /* 0x1007D9CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D9AC; /* 0x1007D9D0: je 0x1007d9ac */
L_1007D9D2:
    eax = ebp + (-0x254); /* 0x1007D9D2: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x1007D9D8: push eax */
    PUSH32(esp, ecx); /* 0x1007D9D9: push ecx */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007D9DA: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007D9E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DA23; /* 0x1007D9E2: jne 0x1007da23 */
L_1007D9E4:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007D9E4: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007D9EA: push 2 */
    esi = POP32_VAL(esp); /* 0x1007D9EC: pop esi */
    /* cmp eax, esi */ /* 0x1007D9ED: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DA00; /* 0x1007D9EF: jb 0x1007da00 */
L_1007D9F1:
    /* cmp eax, 3 */ /* 0x1007D9F1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DA1A; /* 0x1007D9F4: jbe 0x1007da1a */
L_1007D9F6:
    /* cmp eax, 8 */ /* 0x1007D9F6: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DA0D; /* 0x1007D9F9: je 0x1007da0d */
L_1007D9FB:
    /* cmp eax, 0x12u */ /* 0x1007D9FB: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DA1A; /* 0x1007D9FE: je 0x1007da1a */
L_1007DA00:
    RECOMP_CALL(sub_1001177D); /* 0x1007DA00: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DA05: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1007D9BC; /* 0x1007DA0B: jmp 0x1007d9bc */
L_1007DA0D:
    RECOMP_CALL(sub_1001177D); /* 0x1007DA0D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DA12: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007D9BC; /* 0x1007DA18: jmp 0x1007d9bc */
L_1007DA1A:
    RECOMP_CALL(sub_1001177D); /* 0x1007DA1A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DA1F: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007D9BC; /* 0x1007DA21: jmp 0x1007d9bc */
L_1007DA23:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DA23: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DA29: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DA2C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DA2E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DA30: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DA36: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DA38: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DA3E: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007DA3F: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1007DA44: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x1007DA47: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007DA4D: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007DA4E: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007DA53: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1007DA56: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007DA5C: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007DA5D: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1007DA62: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x1007DA65: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x1007DA6B: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x1007DA6E: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007DA74: push eax */
    eax = esi + 0x14; /* 0x1007DA75: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x1007DA78: push 0x104 */
    PUSH32(esp, eax); /* 0x1007DA7D: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007DA7E: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007DA83: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007DA86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007D9BF; /* 0x1007DA88: je 0x1007d9bf */
L_1007DA8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007DA8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007DA90: push eax */
    PUSH32(esp, eax); /* 0x1007DA91: push eax */
    PUSH32(esp, eax); /* 0x1007DA92: push eax */
    PUSH32(esp, eax); /* 0x1007DA93: push eax */
    PUSH32(esp, eax); /* 0x1007DA94: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1007DA95: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007DA9Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007DA9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007DA9Bu);

L_1007DA9B:
    PUSH32(esp, ebp); /* 0x1007DA9B: push ebp */
    ebp = esp; /* 0x1007DA9C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007DA9E: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007DAA4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007DAA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007DAAB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007DAAE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007DAB1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007DAB2: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007DAB5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DACE; /* 0x1007DAB7: jne 0x1007dace */
L_1007DAB9:
    RECOMP_CALL(sub_1001177D); /* 0x1007DAB9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DABE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007DAC4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DAC9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007DB1B; /* 0x1007DACC: jmp 0x1007db1b */
L_1007DACE:
    /* test eax, eax */ /* 0x1007DACE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DAB9; /* 0x1007DAD0: je 0x1007dab9 */
L_1007DAD2:
    PUSH32(esp, ebx); /* 0x1007DAD2: push ebx */
    PUSH32(esp, edi); /* 0x1007DAD3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007DAD4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x254); /* 0x1007DAD6: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x1007DADC: push ebx */
    PUSH32(esp, ebx); /* 0x1007DADD: push ebx */
    PUSH32(esp, ebx); /* 0x1007DADE: push ebx */
    PUSH32(esp, ecx); /* 0x1007DADF: push ecx */
    PUSH32(esp, ebx); /* 0x1007DAE0: push ebx */
    PUSH32(esp, eax); /* 0x1007DAE1: push eax */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007DAE2: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007DAE8: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1007DAEA: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007DB40; /* 0x1007DAED: jne 0x1007db40 */
L_1007DAEF:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007DAEF: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007DAF5: push 2 */
    esi = POP32_VAL(esp); /* 0x1007DAF7: pop esi */
    /* cmp eax, esi */ /* 0x1007DAF8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DB0B; /* 0x1007DAFA: jb 0x1007db0b */
L_1007DAFC:
    /* cmp eax, 3 */ /* 0x1007DAFC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DB37; /* 0x1007DAFF: jbe 0x1007db37 */
L_1007DB01:
    /* cmp eax, 8 */ /* 0x1007DB01: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DB2A; /* 0x1007DB04: je 0x1007db2a */
L_1007DB06:
    /* cmp eax, 0x12u */ /* 0x1007DB06: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DB37; /* 0x1007DB09: je 0x1007db37 */
L_1007DB0B:
    RECOMP_CALL(sub_1001177D); /* 0x1007DB0B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DB10: mov dword ptr [eax], 0x16 */
L_1007DB16:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DB16: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007DB19:
    edi = POP32_VAL(esp); /* 0x1007DB19: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007DB1A: pop ebx */
L_1007DB1B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007DB1B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007DB1E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007DB20: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007DB21: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007DB26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007DB28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007DB29: ret  */
L_1007DB2A:
    RECOMP_CALL(sub_1001177D); /* 0x1007DB2A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DB2F: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007DB16; /* 0x1007DB35: jmp 0x1007db16 */
L_1007DB37:
    RECOMP_CALL(sub_1001177D); /* 0x1007DB37: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DB3C: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007DB16; /* 0x1007DB3E: jmp 0x1007db16 */
L_1007DB40:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DB40: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DB46: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DB49: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DB4B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DB4D: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DB53: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DB55: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DB5B: push eax */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DB5C: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007DB61: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x248); /* 0x1007DB64: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007DB6A: push eax */
    MEM32(esi + 0xC) = edx; /* 0x1007DB6B: mov dword ptr [esi + 0xc], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DB6E: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1007DB73: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x1007DB76: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007DB7C: push eax */
    MEM32(esi + 0x14) = edx; /* 0x1007DB7D: mov dword ptr [esi + 0x14], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DB80: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1007DB85: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(esi + 0x18) = eax; /* 0x1007DB8B: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007DB8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x1007DB90: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = eax; /* 0x1007DB96: mov dword ptr [esi + 0x20], eax */
    eax = ebp + (-0x228); /* 0x1007DB99: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007DB9F: push eax */
    eax = esi + 0x28; /* 0x1007DBA0: lea eax, [esi + 0x28] */
    MEM32(esi + 0x1C) = edx; /* 0x1007DBA3: mov dword ptr [esi + 0x1c], edx */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007DBA6: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0x104u); /* 0x1007DBA8: push 0x104 */
    PUSH32(esp, eax); /* 0x1007DBAD: push eax */
    MEM32(esi + 0x24) = ecx; /* 0x1007DBAE: mov dword ptr [esi + 0x24], ecx */
    RECOMP_CALL(sub_10011693); /* 0x1007DBB1: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007DBB6: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007DBB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DBC4; /* 0x1007DBBB: jne 0x1007dbc4 */
L_1007DBBD:
    eax = edi; /* 0x1007DBBD: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1007DB19; /* 0x1007DBBF: jmp 0x1007db19 */
L_1007DBC4:
    PUSH32(esp, ebx); /* 0x1007DBC4: push ebx */
    PUSH32(esp, ebx); /* 0x1007DBC5: push ebx */
    PUSH32(esp, ebx); /* 0x1007DBC6: push ebx */
    PUSH32(esp, ebx); /* 0x1007DBC7: push ebx */
    PUSH32(esp, ebx); /* 0x1007DBC8: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007DBC9: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007DBCEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007DBCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007DBCFu);

L_1007DBCF:
    PUSH32(esp, ebp); /* 0x1007DBCF: push ebp */
    ebp = esp; /* 0x1007DBD0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007DBD2: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007DBD8: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007DBDD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007DBDF: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1007DBE2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007DBE5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007DBE6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007DBE9: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1007DBEA: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x1007DBED: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007DC13; /* 0x1007DBEF: jne 0x1007dc13 */
L_1007DBF1:
    RECOMP_CALL(sub_1001177D); /* 0x1007DBF1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DBF6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007DBFC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007DC01:
    eax = edi; /* 0x1007DC01: mov eax, edi */
L_1007DC03:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007DC03: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007DC06: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007DC07: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007DC09: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007DC0A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007DC0F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007DC11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007DC12: ret  */
L_1007DC13:
    /* test esi, esi */ /* 0x1007DC13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DBF1; /* 0x1007DC15: je 0x1007dbf1 */
L_1007DC17:
    eax = ebp + (-0x254); /* 0x1007DC17: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x1007DC1D: push eax */
    PUSH32(esp, ecx); /* 0x1007DC1E: push ecx */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007DC1F: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007DC25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DC68; /* 0x1007DC27: jne 0x1007dc68 */
L_1007DC29:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007DC29: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007DC2F: push 2 */
    esi = POP32_VAL(esp); /* 0x1007DC31: pop esi */
    /* cmp eax, esi */ /* 0x1007DC32: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DC45; /* 0x1007DC34: jb 0x1007dc45 */
L_1007DC36:
    /* cmp eax, 3 */ /* 0x1007DC36: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DC5F; /* 0x1007DC39: jbe 0x1007dc5f */
L_1007DC3B:
    /* cmp eax, 8 */ /* 0x1007DC3B: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DC52; /* 0x1007DC3E: je 0x1007dc52 */
L_1007DC40:
    /* cmp eax, 0x12u */ /* 0x1007DC40: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DC5F; /* 0x1007DC43: je 0x1007dc5f */
L_1007DC45:
    RECOMP_CALL(sub_1001177D); /* 0x1007DC45: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DC4A: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1007DC01; /* 0x1007DC50: jmp 0x1007dc01 */
L_1007DC52:
    RECOMP_CALL(sub_1001177D); /* 0x1007DC52: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DC57: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007DC01; /* 0x1007DC5D: jmp 0x1007dc01 */
L_1007DC5F:
    RECOMP_CALL(sub_1001177D); /* 0x1007DC5F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DC64: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007DC01; /* 0x1007DC66: jmp 0x1007dc01 */
L_1007DC68:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DC68: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DC6E: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DC71: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DC73: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DC75: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DC7B: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DC7D: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DC83: push eax */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DC84: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007DC89: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x248); /* 0x1007DC8C: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007DC92: push eax */
    MEM32(esi + 0xC) = edx; /* 0x1007DC93: mov dword ptr [esi + 0xc], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DC96: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1007DC9B: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x1007DC9E: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007DCA4: push eax */
    MEM32(esi + 0x14) = edx; /* 0x1007DCA5: mov dword ptr [esi + 0x14], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DCA8: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1007DCAD: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(esi + 0x18) = eax; /* 0x1007DCB3: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007DCB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x1007DCB8: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1007DCBE: push 0 */
    edi = POP32_VAL(esp); /* 0x1007DCC0: pop edi */
    MEM32(esi + 0x20) = eax; /* 0x1007DCC1: mov dword ptr [esi + 0x20], eax */
    { uint32_t _aa = ecx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007DCC4: adc ecx, edi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x1007DCC6: lea eax, [ebp - 0x228] */
    MEM32(esi + 0x1C) = edx; /* 0x1007DCCC: mov dword ptr [esi + 0x1c], edx */
    PUSH32(esp, eax); /* 0x1007DCCF: push eax */
    eax = esi + 0x28; /* 0x1007DCD0: lea eax, [esi + 0x28] */
    MEM32(esi + 0x24) = ecx; /* 0x1007DCD3: mov dword ptr [esi + 0x24], ecx */
    PUSH32(esp, 0x104u); /* 0x1007DCD6: push 0x104 */
    PUSH32(esp, eax); /* 0x1007DCDB: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007DCDC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007DCE1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007DCE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DC03; /* 0x1007DCE6: je 0x1007dc03 */
L_1007DCEC:
    PUSH32(esp, edi); /* 0x1007DCEC: push edi */
    PUSH32(esp, edi); /* 0x1007DCED: push edi */
    PUSH32(esp, edi); /* 0x1007DCEE: push edi */
    PUSH32(esp, edi); /* 0x1007DCEF: push edi */
    PUSH32(esp, edi); /* 0x1007DCF0: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x1007DCF1: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007DCF6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007DCF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007DCF7u);

L_1007DCF7:
    PUSH32(esp, ebp); /* 0x1007DCF7: push ebp */
    ebp = esp; /* 0x1007DCF8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007DCFA: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007DD00: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007DD05: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007DD07: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007DD0A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007DD0D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007DD0E: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007DD11: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DD2A; /* 0x1007DD13: jne 0x1007dd2a */
L_1007DD15:
    RECOMP_CALL(sub_1001177D); /* 0x1007DD15: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DD1A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007DD20: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DD25: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007DD77; /* 0x1007DD28: jmp 0x1007dd77 */
L_1007DD2A:
    /* test eax, eax */ /* 0x1007DD2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DD15; /* 0x1007DD2C: je 0x1007dd15 */
L_1007DD2E:
    PUSH32(esp, ebx); /* 0x1007DD2E: push ebx */
    PUSH32(esp, edi); /* 0x1007DD2F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007DD30: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x254); /* 0x1007DD32: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x1007DD38: push ebx */
    PUSH32(esp, ebx); /* 0x1007DD39: push ebx */
    PUSH32(esp, ebx); /* 0x1007DD3A: push ebx */
    PUSH32(esp, ecx); /* 0x1007DD3B: push ecx */
    PUSH32(esp, ebx); /* 0x1007DD3C: push ebx */
    PUSH32(esp, eax); /* 0x1007DD3D: push eax */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007DD3E: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007DD44: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1007DD46: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007DD9C; /* 0x1007DD49: jne 0x1007dd9c */
L_1007DD4B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007DD4B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007DD51: push 2 */
    esi = POP32_VAL(esp); /* 0x1007DD53: pop esi */
    /* cmp eax, esi */ /* 0x1007DD54: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DD67; /* 0x1007DD56: jb 0x1007dd67 */
L_1007DD58:
    /* cmp eax, 3 */ /* 0x1007DD58: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DD93; /* 0x1007DD5B: jbe 0x1007dd93 */
L_1007DD5D:
    /* cmp eax, 8 */ /* 0x1007DD5D: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DD86; /* 0x1007DD60: je 0x1007dd86 */
L_1007DD62:
    /* cmp eax, 0x12u */ /* 0x1007DD62: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DD93; /* 0x1007DD65: je 0x1007dd93 */
L_1007DD67:
    RECOMP_CALL(sub_1001177D); /* 0x1007DD67: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DD6C: mov dword ptr [eax], 0x16 */
L_1007DD72:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DD72: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007DD75:
    edi = POP32_VAL(esp); /* 0x1007DD75: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007DD76: pop ebx */
L_1007DD77:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007DD77: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007DD7A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007DD7C: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007DD7D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007DD82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007DD84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007DD85: ret  */
L_1007DD86:
    RECOMP_CALL(sub_1001177D); /* 0x1007DD86: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DD8B: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007DD72; /* 0x1007DD91: jmp 0x1007dd72 */
L_1007DD93:
    RECOMP_CALL(sub_1001177D); /* 0x1007DD93: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DD98: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007DD72; /* 0x1007DD9A: jmp 0x1007dd72 */
L_1007DD9C:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DD9C: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DDA2: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DDA5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DDA7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DDA9: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DDAF: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DDB1: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DDB7: push eax */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DDB8: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007DDBD: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x248); /* 0x1007DDC0: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007DDC6: push eax */
    MEM32(esi + 0xC) = edx; /* 0x1007DDC7: mov dword ptr [esi + 0xc], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DDCA: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1007DDCF: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x1007DDD2: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007DDD8: push eax */
    MEM32(esi + 0x14) = edx; /* 0x1007DDD9: mov dword ptr [esi + 0x14], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DDDC: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x1007DDE1: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x1007DDE4: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x20) = eax; /* 0x1007DDEA: mov dword ptr [esi + 0x20], eax */
    eax = ebp + (-0x228); /* 0x1007DDED: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007DDF3: push eax */
    eax = esi + 0x24; /* 0x1007DDF4: lea eax, [esi + 0x24] */
    MEM32(esi + 0x1C) = edx; /* 0x1007DDF7: mov dword ptr [esi + 0x1c], edx */
    PUSH32(esp, 0x104u); /* 0x1007DDFA: push 0x104 */
    PUSH32(esp, eax); /* 0x1007DDFF: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007DE00: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007DE05: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007DE08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DE13; /* 0x1007DE0A: jne 0x1007de13 */
L_1007DE0C:
    eax = edi; /* 0x1007DE0C: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1007DD75; /* 0x1007DE0E: jmp 0x1007dd75 */
L_1007DE13:
    PUSH32(esp, ebx); /* 0x1007DE13: push ebx */
    PUSH32(esp, ebx); /* 0x1007DE14: push ebx */
    PUSH32(esp, ebx); /* 0x1007DE15: push ebx */
    PUSH32(esp, ebx); /* 0x1007DE16: push ebx */
    PUSH32(esp, ebx); /* 0x1007DE17: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007DE18: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007DE1Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007DE1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007DE1Eu);

L_1007DE1E:
    PUSH32(esp, ebp); /* 0x1007DE1E: push ebp */
    ebp = esp; /* 0x1007DE1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007DE21: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007DE27: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007DE2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007DE2E: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1007DE31: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007DE34: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007DE35: mov esi, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007DE38: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007DE5F; /* 0x1007DE3B: jne 0x1007de5f */
L_1007DE3D:
    RECOMP_CALL(sub_1001177D); /* 0x1007DE3D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DE42: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007DE48: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007DE4D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DE4D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007DE50:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007DE50: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007DE53: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007DE55: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007DE56: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007DE5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007DE5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007DE5E: ret  */
L_1007DE5F:
    /* test esi, esi */ /* 0x1007DE5F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DE3D; /* 0x1007DE61: je 0x1007de3d */
L_1007DE63:
    eax = ebp + (-0x254); /* 0x1007DE63: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x1007DE69: push eax */
    PUSH32(esp, ecx); /* 0x1007DE6A: push ecx */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007DE6B: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007DE71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DEB4; /* 0x1007DE73: jne 0x1007deb4 */
L_1007DE75:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007DE75: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007DE7B: push 2 */
    esi = POP32_VAL(esp); /* 0x1007DE7D: pop esi */
    /* cmp eax, esi */ /* 0x1007DE7E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DE91; /* 0x1007DE80: jb 0x1007de91 */
L_1007DE82:
    /* cmp eax, 3 */ /* 0x1007DE82: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DEAB; /* 0x1007DE85: jbe 0x1007deab */
L_1007DE87:
    /* cmp eax, 8 */ /* 0x1007DE87: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DE9E; /* 0x1007DE8A: je 0x1007de9e */
L_1007DE8C:
    /* cmp eax, 0x12u */ /* 0x1007DE8C: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DEAB; /* 0x1007DE8F: je 0x1007deab */
L_1007DE91:
    RECOMP_CALL(sub_1001177D); /* 0x1007DE91: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DE96: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1007DE4D; /* 0x1007DE9C: jmp 0x1007de4d */
L_1007DE9E:
    RECOMP_CALL(sub_1001177D); /* 0x1007DE9E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DEA3: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007DE4D; /* 0x1007DEA9: jmp 0x1007de4d */
L_1007DEAB:
    RECOMP_CALL(sub_1001177D); /* 0x1007DEAB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DEB0: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007DE4D; /* 0x1007DEB2: jmp 0x1007de4d */
L_1007DEB4:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DEB4: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DEBA: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DEBD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DEBF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DEC1: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DEC7: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DEC9: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DECF: push eax */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DED0: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007DED5: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x248); /* 0x1007DED8: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007DEDE: push eax */
    MEM32(esi + 0xC) = edx; /* 0x1007DEDF: mov dword ptr [esi + 0xc], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DEE2: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1007DEE7: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x1007DEEA: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007DEF0: push eax */
    MEM32(esi + 0x14) = edx; /* 0x1007DEF1: mov dword ptr [esi + 0x14], edx */
    RECOMP_CALL(sub_1007D51D); /* 0x1007DEF4: call 0x1007d51d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x1007DEF9: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x1007DEFC: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x20) = eax; /* 0x1007DF02: mov dword ptr [esi + 0x20], eax */
    eax = ebp + (-0x228); /* 0x1007DF05: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007DF0B: push eax */
    eax = esi + 0x24; /* 0x1007DF0C: lea eax, [esi + 0x24] */
    MEM32(esi + 0x1C) = edx; /* 0x1007DF0F: mov dword ptr [esi + 0x1c], edx */
    PUSH32(esp, 0x104u); /* 0x1007DF12: push 0x104 */
    PUSH32(esp, eax); /* 0x1007DF17: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007DF18: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007DF1D: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007DF20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DE50; /* 0x1007DF22: je 0x1007de50 */
L_1007DF28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007DF28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007DF2A: push eax */
    PUSH32(esp, eax); /* 0x1007DF2B: push eax */
    PUSH32(esp, eax); /* 0x1007DF2C: push eax */
    PUSH32(esp, eax); /* 0x1007DF2D: push eax */
    PUSH32(esp, eax); /* 0x1007DF2E: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1007DF2F: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007DF34u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007DF35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007DF35u);

L_1007DF35:
    PUSH32(esp, ebp); /* 0x1007DF35: push ebp */
    ebp = esp; /* 0x1007DF36: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007DF38: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007DF3E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007DF43: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007DF45: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007DF48: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007DF4B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007DF4C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007DF4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007DF68; /* 0x1007DF51: jne 0x1007df68 */
L_1007DF53:
    RECOMP_CALL(sub_1001177D); /* 0x1007DF53: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DF58: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007DF5E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DF63: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007DFB5; /* 0x1007DF66: jmp 0x1007dfb5 */
L_1007DF68:
    /* test eax, eax */ /* 0x1007DF68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007DF53; /* 0x1007DF6A: je 0x1007df53 */
L_1007DF6C:
    PUSH32(esp, ebx); /* 0x1007DF6C: push ebx */
    PUSH32(esp, edi); /* 0x1007DF6D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007DF6E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x254); /* 0x1007DF70: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x1007DF76: push ebx */
    PUSH32(esp, ebx); /* 0x1007DF77: push ebx */
    PUSH32(esp, ebx); /* 0x1007DF78: push ebx */
    PUSH32(esp, ecx); /* 0x1007DF79: push ecx */
    PUSH32(esp, ebx); /* 0x1007DF7A: push ebx */
    PUSH32(esp, eax); /* 0x1007DF7B: push eax */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007DF7C: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007DF82: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1007DF84: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007DFDA; /* 0x1007DF87: jne 0x1007dfda */
L_1007DF89:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007DF89: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007DF8F: push 2 */
    esi = POP32_VAL(esp); /* 0x1007DF91: pop esi */
    /* cmp eax, esi */ /* 0x1007DF92: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007DFA5; /* 0x1007DF94: jb 0x1007dfa5 */
L_1007DF96:
    /* cmp eax, 3 */ /* 0x1007DF96: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007DFD1; /* 0x1007DF99: jbe 0x1007dfd1 */
L_1007DF9B:
    /* cmp eax, 8 */ /* 0x1007DF9B: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DFC4; /* 0x1007DF9E: je 0x1007dfc4 */
L_1007DFA0:
    /* cmp eax, 0x12u */ /* 0x1007DFA0: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007DFD1; /* 0x1007DFA3: je 0x1007dfd1 */
L_1007DFA5:
    RECOMP_CALL(sub_1001177D); /* 0x1007DFA5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007DFAA: mov dword ptr [eax], 0x16 */
L_1007DFB0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007DFB0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007DFB3:
    edi = POP32_VAL(esp); /* 0x1007DFB3: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007DFB4: pop ebx */
L_1007DFB5:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007DFB5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007DFB8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007DFBA: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007DFBB: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007DFC0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007DFC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007DFC3: ret  */
L_1007DFC4:
    RECOMP_CALL(sub_1001177D); /* 0x1007DFC4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007DFC9: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007DFB0; /* 0x1007DFCF: jmp 0x1007dfb0 */
L_1007DFD1:
    RECOMP_CALL(sub_1001177D); /* 0x1007DFD1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007DFD6: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007DFB0; /* 0x1007DFD8: jmp 0x1007dfb0 */
L_1007DFDA:
    eax = MEM32(ebp + (-0x254)); /* 0x1007DFDA: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007DFE0: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007DFE3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007DFE5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007DFE7: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007DFED: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007DFEF: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007DFF5: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007DFF6: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1007DFFB: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x1007DFFE: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007E004: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007E005: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007E00A: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1007E00D: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007E013: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007E014: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1007E019: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(esi + 0xC) = eax; /* 0x1007E01F: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E022: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x1007E024: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x1007E02A: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x1007E02D: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1007E033: push eax */
    eax = esi + 0x18; /* 0x1007E034: lea eax, [esi + 0x18] */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007E037: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0x104u); /* 0x1007E039: push 0x104 */
    PUSH32(esp, eax); /* 0x1007E03E: push eax */
    MEM32(esi + 0x14) = ecx; /* 0x1007E03F: mov dword ptr [esi + 0x14], ecx */
    RECOMP_CALL(sub_10011693); /* 0x1007E042: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007E047: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007E04A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E055; /* 0x1007E04C: jne 0x1007e055 */
L_1007E04E:
    eax = edi; /* 0x1007E04E: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1007DFB3; /* 0x1007E050: jmp 0x1007dfb3 */
L_1007E055:
    PUSH32(esp, ebx); /* 0x1007E055: push ebx */
    PUSH32(esp, ebx); /* 0x1007E056: push ebx */
    PUSH32(esp, ebx); /* 0x1007E057: push ebx */
    PUSH32(esp, ebx); /* 0x1007E058: push ebx */
    PUSH32(esp, ebx); /* 0x1007E059: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007E05A: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007E05Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007E060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E060u);

L_1007E060:
    PUSH32(esp, ebp); /* 0x1007E060: push ebp */
    ebp = esp; /* 0x1007E061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1007E063: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007E069: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007E06E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E070: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1007E073: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007E076: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007E077: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007E07A: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1007E07B: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x1007E07E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E0A4; /* 0x1007E080: jne 0x1007e0a4 */
L_1007E082:
    RECOMP_CALL(sub_1001177D); /* 0x1007E082: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E087: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007E08D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007E092:
    eax = edi; /* 0x1007E092: mov eax, edi */
L_1007E094:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007E094: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007E097: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007E098: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007E09A: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007E09B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007E0A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E0A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E0A3: ret  */
L_1007E0A4:
    /* test esi, esi */ /* 0x1007E0A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E082; /* 0x1007E0A6: je 0x1007e082 */
L_1007E0A8:
    eax = ebp + (-0x254); /* 0x1007E0A8: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x1007E0AE: push eax */
    PUSH32(esp, ecx); /* 0x1007E0AF: push ecx */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007E0B0: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E0B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E0F9; /* 0x1007E0B8: jne 0x1007e0f9 */
L_1007E0BA:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E0BA: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007E0C0: push 2 */
    esi = POP32_VAL(esp); /* 0x1007E0C2: pop esi */
    /* cmp eax, esi */ /* 0x1007E0C3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007E0D6; /* 0x1007E0C5: jb 0x1007e0d6 */
L_1007E0C7:
    /* cmp eax, 3 */ /* 0x1007E0C7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007E0F0; /* 0x1007E0CA: jbe 0x1007e0f0 */
L_1007E0CC:
    /* cmp eax, 8 */ /* 0x1007E0CC: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E0E3; /* 0x1007E0CF: je 0x1007e0e3 */
L_1007E0D1:
    /* cmp eax, 0x12u */ /* 0x1007E0D1: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E0F0; /* 0x1007E0D4: je 0x1007e0f0 */
L_1007E0D6:
    RECOMP_CALL(sub_1001177D); /* 0x1007E0D6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E0DB: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1007E092; /* 0x1007E0E1: jmp 0x1007e092 */
L_1007E0E3:
    RECOMP_CALL(sub_1001177D); /* 0x1007E0E3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007E0E8: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1007E092; /* 0x1007E0EE: jmp 0x1007e092 */
L_1007E0F0:
    RECOMP_CALL(sub_1001177D); /* 0x1007E0F0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007E0F5: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007E092; /* 0x1007E0F7: jmp 0x1007e092 */
L_1007E0F9:
    eax = MEM32(ebp + (-0x254)); /* 0x1007E0F9: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1007E0FF: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007E102: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007E104: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    eax = eax & MEM32(ebp + (-0x254)); /* 0x1007E106: and eax, dword ptr [ebp - 0x254] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1007E10C: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x1007E10E: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x1007E114: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007E115: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1007E11A: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x1007E11D: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x1007E123: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007E124: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1007E129: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1007E12C: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1007E132: push eax */
    RECOMP_CALL(sub_1007D1A9); /* 0x1007E133: call 0x1007d1a9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1007E138: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(esi + 0xC) = eax; /* 0x1007E13E: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E141: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x1007E143: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1007E149: push 0 */
    edi = POP32_VAL(esp); /* 0x1007E14B: pop edi */
    MEM32(esi + 0x10) = eax; /* 0x1007E14C: mov dword ptr [esi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007E14F: adc ecx, edi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x1007E151: lea eax, [ebp - 0x228] */
    MEM32(esi + 0x14) = ecx; /* 0x1007E157: mov dword ptr [esi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x1007E15A: push eax */
    eax = esi + 0x18; /* 0x1007E15B: lea eax, [esi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x1007E15E: push 0x104 */
    PUSH32(esp, eax); /* 0x1007E163: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007E164: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007E169: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007E16C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E094; /* 0x1007E16E: je 0x1007e094 */
L_1007E174:
    PUSH32(esp, edi); /* 0x1007E174: push edi */
    PUSH32(esp, edi); /* 0x1007E175: push edi */
    PUSH32(esp, edi); /* 0x1007E176: push edi */
    PUSH32(esp, edi); /* 0x1007E177: push edi */
    PUSH32(esp, edi); /* 0x1007E178: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x1007E179: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007E17Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007E17F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E17Fu);

L_1007E17F:
    PUSH32(esp, ebp); /* 0x1007E17F: push ebp */
    ebp = esp; /* 0x1007E180: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007E182: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007E183: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007E186: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E19F; /* 0x1007E188: jne 0x1007e19f */
L_1007E18A:
    RECOMP_CALL(sub_1001177D); /* 0x1007E18A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E18F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007E195: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x57u); /* 0x1007E19A: push 0x57 */
    eax = POP32_VAL(esp); /* 0x1007E19C: pop eax */
    goto L_1007E21E; /* 0x1007E19D: jmp 0x1007e21e */
L_1007E19F:
    PUSH32(esp, ebx); /* 0x1007E19F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007E1A0: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x1Au */ /* 0x1007E1A3: cmp ebx, 0x1a */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007E1BD; /* 0x1007E1A6: jbe 0x1007e1bd */
L_1007E1A8:
    RECOMP_CALL(sub_1001177D); /* 0x1007E1A8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E1AD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007E1B3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x57u); /* 0x1007E1B8: push 0x57 */
    eax = POP32_VAL(esp); /* 0x1007E1BA: pop eax */
    goto L_1007E21D; /* 0x1007E1BB: jmp 0x1007e21d */
L_1007E1BD:
    PUSH32(esp, 0x10u); /* 0x1007E1BD: push 0x10 */
    PUSH32(esp, 0); /* 0x1007E1BF: push 0 */
    PUSH32(esp, esi); /* 0x1007E1C1: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1007E1C2: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E1C7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1007E1CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E1D2; /* 0x1007E1CC: jne 0x1007e1d2 */
L_1007E1CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007E1CE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E1E5; /* 0x1007E1D0: jmp 0x1007e1e5 */
L_1007E1D2:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x40u); /* 0x1007E1D2: add bl, 0x40 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(ebp + 0xD) = (uint16_t)(0x5C3Au); /* 0x1007E1D5: mov word ptr [ebp + 0xd], 0x5c3a */
    ecx = ebp + 0xC; /* 0x1007E1DB: lea ecx, [ebp + 0xc] */
    MEM8(ebp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x1007E1DE: mov byte ptr [ebp + 0xc], bl */
    MEM8(ebp + 0xF) = (uint8_t)(0); /* 0x1007E1E1: mov byte ptr [ebp + 0xf], 0 */
L_1007E1E5:
    PUSH32(esp, esi); /* 0x1007E1E5: push esi */
    eax = esi + 0x4; /* 0x1007E1E6: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1007E1E9: push eax */
    eax = esi + 0xC; /* 0x1007E1EA: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x1007E1ED: push eax */
    eax = esi + 0x8; /* 0x1007E1EE: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1007E1F1: push eax */
    PUSH32(esp, ecx); /* 0x1007E1F2: push ecx */
    RECOMP_ICALL(MEM32(0x100E5090)); /* 0x1007E1F3: call dword ptr [0x100e5090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E1F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E21B; /* 0x1007E1FB: jne 0x1007e21b */
L_1007E1FD:
    PUSH32(esp, edi); /* 0x1007E1FD: push edi */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E1FE: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007E204: mov edi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x1007E206: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1007E20B: push edi */
    esi = eax; /* 0x1007E20C: mov esi, eax */
    RECOMP_CALL(sub_1001E482); /* 0x1007E20E: call 0x1001e482 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E213: pop ecx */
    MEM32(esi) = eax; /* 0x1007E214: mov dword ptr [esi], eax */
    eax = edi; /* 0x1007E216: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1007E218: pop edi */
    goto L_1007E21D; /* 0x1007E219: jmp 0x1007e21d */
L_1007E21B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E21B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E21D:
    ebx = POP32_VAL(esp); /* 0x1007E21D: pop ebx */
L_1007E21E:
    esi = POP32_VAL(esp); /* 0x1007E21E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007E21F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E220: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E221(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E221u);

L_1007E221:
    { _itail_tgt = (uint32_t)(MEM32(0x100E5094)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007E227(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E227u);

L_1007E227:
    PUSH32(esp, ebp); /* 0x1007E227: push ebp */
    ebp = esp; /* 0x1007E228: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E22A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5098)); /* 0x1007E22D: call dword ptr [0x100e5098] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007E233: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E234: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E235(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E235u);

L_1007E235:
    PUSH32(esp, ebp); /* 0x1007E235: push ebp */
    ebp = esp; /* 0x1007E236: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E238: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E23B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E509C)); /* 0x1007E23E: call dword ptr [0x100e509c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007E244: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E245: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E246(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E246u);

L_1007E246:
    PUSH32(esp, ebp); /* 0x1007E246: push ebp */
    ebp = esp; /* 0x1007E247: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007E249: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007E24C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E251; /* 0x1007E24E: jne 0x1007e251 */
L_1007E250:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007E250: inc eax */
    _flag_k = FK_INC;
L_1007E251:
    PUSH32(esp, eax); /* 0x1007E251: push eax */
    RECOMP_ICALL(MEM32(0x100E50A0)); /* 0x1007E252: call dword ptr [0x100e50a0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007E258: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E259: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E25A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E25Au);

L_1007E25A:
    PUSH32(esp, ebp); /* 0x1007E25A: push ebp */
    ebp = esp; /* 0x1007E25B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E25D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E260: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007E270); /* 0x1007E263: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007E268: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1007E26A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E26B: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007E26C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x1007E26E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E26F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E270u);

L_1007E270:
    PUSH32(esp, ebp); /* 0x1007E270: push ebp */
    ebp = esp; /* 0x1007E271: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E273: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E274: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E276: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E279: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E29C; /* 0x1007E27C: je 0x1007e29c */
L_1007E27E:
    eax = ebp + (-0x4); /* 0x1007E27E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E281: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E282: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E285: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E28A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E28B: pop ecx */
    /* test eax, eax */ /* 0x1007E28C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E299; /* 0x1007E28E: jne 0x1007e299 */
L_1007E290:
    RECOMP_CALL(sub_1001177D); /* 0x1007E290: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1007E295: mov eax, dword ptr [eax] */
    goto L_1007E2B6; /* 0x1007E297: jmp 0x1007e2b6 */
L_1007E299:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E299: mov eax, dword ptr [ebp - 4] */
L_1007E29C:
    PUSH32(esp, esi); /* 0x1007E29C: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E29D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E2A0: push eax */
    RECOMP_CALL(sub_1001EE42); /* 0x1007E2A1: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E2A6: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E2A9: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E2AB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E2B0: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E2B3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E2B5: pop esi */
L_1007E2B6:
    esp = ebp; /* 0x1007E2B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E2B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E2B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E2BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E2BAu);

L_1007E2BA:
    PUSH32(esp, ebp); /* 0x1007E2BA: push ebp */
    ebp = esp; /* 0x1007E2BB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E2BD: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E2BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E2C0: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E2C3: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E2E2; /* 0x1007E2C6: je 0x1007e2e2 */
L_1007E2C8:
    eax = ebp + (-0x4); /* 0x1007E2C8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E2CB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E2CC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E2CF: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E2D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E2D5: pop ecx */
    /* test eax, eax */ /* 0x1007E2D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E2DF; /* 0x1007E2D8: jne 0x1007e2df */
L_1007E2DA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E2DA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E2FC; /* 0x1007E2DD: jmp 0x1007e2fc */
L_1007E2DF:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E2DF: mov eax, dword ptr [ebp - 4] */
L_1007E2E2:
    PUSH32(esp, esi); /* 0x1007E2E2: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E2E3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E2E6: push eax */
    RECOMP_CALL(sub_1007E631); /* 0x1007E2E7: call 0x1007e631 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E2EC: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E2EF: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E2F1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E2F6: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E2F9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E2FB: pop esi */
L_1007E2FC:
    esp = ebp; /* 0x1007E2FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E2FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E2FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E300u);

L_1007E300:
    PUSH32(esp, ebp); /* 0x1007E300: push ebp */
    ebp = esp; /* 0x1007E301: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007E303: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007E304: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1007E307: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E315; /* 0x1007E309: jne 0x1007e315 */
L_1007E30B:
    RECOMP_CALL(sub_100A4670); /* 0x1007E30B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007E310: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1007E312: pop eax */
    goto L_1007E320; /* 0x1007E313: jmp 0x1007e320 */
L_1007E315:
    RECOMP_CALL(sub_1001E471); /* 0x1007E315: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1007E31A: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x1007E31C: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E31E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E320:
    esi = POP32_VAL(esp); /* 0x1007E320: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007E321: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E322: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E323(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E323u);

L_1007E323:
    PUSH32(esp, ebp); /* 0x1007E323: push ebp */
    ebp = esp; /* 0x1007E324: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007E326: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007E327: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1007E32A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E338; /* 0x1007E32C: jne 0x1007e338 */
L_1007E32E:
    RECOMP_CALL(sub_100A4670); /* 0x1007E32E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007E333: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1007E335: pop eax */
    goto L_1007E343; /* 0x1007E336: jmp 0x1007e343 */
L_1007E338:
    RECOMP_CALL(sub_1001177D); /* 0x1007E338: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1007E33D: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x1007E33F: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E341: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E343:
    esi = POP32_VAL(esp); /* 0x1007E343: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007E344: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E345: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E346(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E346u);

L_1007E346:
    PUSH32(esp, ebp); /* 0x1007E346: push ebp */
    ebp = esp; /* 0x1007E347: mov ebp, esp */
    RECOMP_CALL(sub_1000F720); /* 0x1007E349: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E34E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E357; /* 0x1007E350: jne 0x1007e357 */
L_1007E352:
    PUSH32(esp, 0xCu); /* 0x1007E352: push 0xc */
    eax = POP32_VAL(esp); /* 0x1007E354: pop eax */
    ebp = POP32_VAL(esp); /* 0x1007E355: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E356: ret  */
L_1007E357:
    RECOMP_CALL(sub_1001E471); /* 0x1007E357: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1007E35C: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1007E35F: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E361: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E363: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E364: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E365(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E365u);

L_1007E365:
    PUSH32(esp, ebp); /* 0x1007E365: push ebp */
    ebp = esp; /* 0x1007E366: mov ebp, esp */
    RECOMP_CALL(sub_1000F720); /* 0x1007E368: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E36D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E376; /* 0x1007E36F: jne 0x1007e376 */
L_1007E371:
    PUSH32(esp, 0xCu); /* 0x1007E371: push 0xc */
    eax = POP32_VAL(esp); /* 0x1007E373: pop eax */
    ebp = POP32_VAL(esp); /* 0x1007E374: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E375: ret  */
L_1007E376:
    RECOMP_CALL(sub_1001177D); /* 0x1007E376: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1007E37B: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1007E37E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E380: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E382: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E383: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E384(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E384u);

L_1007E384:
    { _itail_tgt = (uint32_t)(MEM32(0x100E50A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007E38A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E38Au);

L_1007E38A:
    PUSH32(esp, ebp); /* 0x1007E38A: push ebp */
    ebp = esp; /* 0x1007E38B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E38D: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E38E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E390: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E393: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E3B2; /* 0x1007E396: je 0x1007e3b2 */
L_1007E398:
    eax = ebp + (-0x4); /* 0x1007E398: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E39B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E39C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E39F: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E3A4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E3A5: pop ecx */
    /* test eax, eax */ /* 0x1007E3A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E3AF; /* 0x1007E3A8: jne 0x1007e3af */
L_1007E3AA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E3AA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E3C8; /* 0x1007E3AD: jmp 0x1007e3c8 */
L_1007E3AF:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E3AF: mov eax, dword ptr [ebp - 4] */
L_1007E3B2:
    PUSH32(esp, esi); /* 0x1007E3B2: push esi */
    PUSH32(esp, eax); /* 0x1007E3B3: push eax */
    RECOMP_CALL(sub_1007E6B6); /* 0x1007E3B4: call 0x1007e6b6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E3B9: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E3BC: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E3BE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E3C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E3C4: pop ecx */
    eax = esi; /* 0x1007E3C5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E3C7: pop esi */
L_1007E3C8:
    esp = ebp; /* 0x1007E3C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E3CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E3CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E3CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E3CCu);

L_1007E3CC:
    PUSH32(esp, ebp); /* 0x1007E3CC: push ebp */
    ebp = esp; /* 0x1007E3CD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E3CF: push ecx */
    PUSH32(esp, ecx); /* 0x1007E3D0: push ecx */
    PUSH32(esp, ebx); /* 0x1007E3D1: push ebx */
    PUSH32(esp, esi); /* 0x1007E3D2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007E3D3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007E3D5: push edi */
    esi = ebx; /* 0x1007E3D6: mov esi, ebx */
    RECOMP_CALL(sub_10014BD1); /* 0x1007E3D8: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E3DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E3EC; /* 0x1007E3DF: jne 0x1007e3ec */
L_1007E3E1:
    RECOMP_ICALL(MEM32(0x100E5020)); /* 0x1007E3E1: call dword ptr [0x100e5020] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E3E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E3EC; /* 0x1007E3E9: jne 0x1007e3ec */
L_1007E3EB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007E3EB: inc esi */
    _flag_k = FK_INC;
L_1007E3EC:
    PUSH32(esp, ebx); /* 0x1007E3EC: push ebx */
    PUSH32(esp, ebx); /* 0x1007E3ED: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E3EE: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E3F0: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1007E3F3: push ebx */
    ebx = MEM32(0x100E5024); /* 0x1007E3F4: mov ebx, dword ptr [0x100e5024] */
    PUSH32(esp, esi); /* 0x1007E3FA: push esi */
    RECOMP_ICALL(ebx); /* 0x1007E3FB: call ebx */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007E3FD: mov edi, eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x1007E3FF: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x1007E402: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E478; /* 0x1007E404: je 0x1007e478 */
L_1007E406:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E406: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007E408: push eax */
    PUSH32(esp, eax); /* 0x1007E409: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E40A: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E40C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E40F: push eax */
    PUSH32(esp, esi); /* 0x1007E410: push esi */
    RECOMP_ICALL(ebx); /* 0x1007E411: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1007E413: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1007E416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E478; /* 0x1007E418: je 0x1007e478 */
L_1007E41A:
    ecx = eax + edi; /* 0x1007E41A: lea ecx, [eax + edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1007E41D: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1007E41F: push ecx */
    RECOMP_CALL(sub_10012226); /* 0x1007E420: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007E425: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007E427: pop ecx */
    /* test edi, edi */ /* 0x1007E428: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E485; /* 0x1007E42A: je 0x1007e485 */
L_1007E42C:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E42C: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E42F: push eax */
    PUSH32(esp, edi); /* 0x1007E430: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E431: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E433: push dword ptr [ebp + 8] */
    ecx = edi + eax * 2; /* 0x1007E436: lea ecx, [edi + eax*2] */
    PUSH32(esp, 0); /* 0x1007E439: push 0 */
    PUSH32(esp, esi); /* 0x1007E43B: push esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007E43C: mov dword ptr [ebp - 4], ecx */
    RECOMP_ICALL(ebx); /* 0x1007E43F: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E441: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E471; /* 0x1007E443: je 0x1007e471 */
L_1007E445:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1007E445: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E448: push dword ptr [ebp - 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E44B: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E44D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1007E450: push 0 */
    PUSH32(esp, esi); /* 0x1007E452: push esi */
    RECOMP_ICALL(ebx); /* 0x1007E453: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E455: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E471; /* 0x1007E457: je 0x1007e471 */
L_1007E459:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E459: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1007E45C: push edi */
    RECOMP_CALL(sub_1007E6E7); /* 0x1007E45D: call 0x1007e6e7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1007E462: push edi */
    esi = eax; /* 0x1007E463: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E465: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E46A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E46D: mov eax, esi */
    goto L_1007E488; /* 0x1007E46F: jmp 0x1007e488 */
L_1007E471:
    PUSH32(esp, edi); /* 0x1007E471: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E472: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E477: pop ecx */
L_1007E478:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E478: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007E47E: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007E47F: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E484: pop ecx */
L_1007E485:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E485: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E488:
    edi = POP32_VAL(esp); /* 0x1007E488: pop edi */
    esi = POP32_VAL(esp); /* 0x1007E489: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007E48A: pop ebx */
    esp = ebp; /* 0x1007E48B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E48D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E48E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E48F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E48Fu);

L_1007E48F:
    PUSH32(esp, ebp); /* 0x1007E48F: push ebp */
    ebp = esp; /* 0x1007E490: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E492: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E493: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E495: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E498: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E4B7; /* 0x1007E49B: je 0x1007e4b7 */
L_1007E49D:
    eax = ebp + (-0x4); /* 0x1007E49D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E4A0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E4A1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E4A4: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E4A9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E4AA: pop ecx */
    /* test eax, eax */ /* 0x1007E4AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E4B4; /* 0x1007E4AD: jne 0x1007e4b4 */
L_1007E4AF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E4AF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E4CD; /* 0x1007E4B2: jmp 0x1007e4cd */
L_1007E4B4:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E4B4: mov eax, dword ptr [ebp - 4] */
L_1007E4B7:
    PUSH32(esp, esi); /* 0x1007E4B7: push esi */
    PUSH32(esp, eax); /* 0x1007E4B8: push eax */
    RECOMP_CALL(sub_1007E71A); /* 0x1007E4B9: call 0x1007e71a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E4BE: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E4C1: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E4C3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E4C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E4C9: pop ecx */
    eax = esi; /* 0x1007E4CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E4CC: pop esi */
L_1007E4CD:
    esp = ebp; /* 0x1007E4CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E4CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E4D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E4D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E4D1u);

L_1007E4D1:
    PUSH32(esp, ebp); /* 0x1007E4D1: push ebp */
    ebp = esp; /* 0x1007E4D2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E4D4: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E4D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E4D7: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E4DA: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E4F9; /* 0x1007E4DD: je 0x1007e4f9 */
L_1007E4DF:
    eax = ebp + (-0x4); /* 0x1007E4DF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E4E2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E4E3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E4E6: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E4EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E4EC: pop ecx */
    /* test eax, eax */ /* 0x1007E4ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E4F6; /* 0x1007E4EF: jne 0x1007e4f6 */
L_1007E4F1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E4F1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E513; /* 0x1007E4F4: jmp 0x1007e513 */
L_1007E4F6:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E4F6: mov eax, dword ptr [ebp - 4] */
L_1007E4F9:
    PUSH32(esp, esi); /* 0x1007E4F9: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E4FA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E4FD: push eax */
    RECOMP_CALL(sub_1007E748); /* 0x1007E4FE: call 0x1007e748 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E503: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E506: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E508: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E50D: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E510: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E512: pop esi */
L_1007E513:
    esp = ebp; /* 0x1007E513: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E515: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E516: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E517(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E517u);

L_1007E517:
    PUSH32(esp, ebp); /* 0x1007E517: push ebp */
    ebp = esp; /* 0x1007E518: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E51A: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E51B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E51D: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E520: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E53F; /* 0x1007E523: je 0x1007e53f */
L_1007E525:
    eax = ebp + (-0x4); /* 0x1007E525: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E528: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E529: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E52C: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E531: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E532: pop ecx */
    /* test eax, eax */ /* 0x1007E533: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E53C; /* 0x1007E535: jne 0x1007e53c */
L_1007E537:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E537: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E559; /* 0x1007E53A: jmp 0x1007e559 */
L_1007E53C:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E53C: mov eax, dword ptr [ebp - 4] */
L_1007E53F:
    PUSH32(esp, esi); /* 0x1007E53F: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E540: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E543: push eax */
    RECOMP_CALL(sub_1007EB97); /* 0x1007E544: call 0x1007eb97 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E549: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E54C: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E54E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E553: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E556: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E558: pop esi */
L_1007E559:
    esp = ebp; /* 0x1007E559: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E55B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E55C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E55D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E55Du);

L_1007E55D:
    PUSH32(esp, ebp); /* 0x1007E55D: push ebp */
    ebp = esp; /* 0x1007E55E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E560: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E561: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E563: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E566: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E585; /* 0x1007E569: je 0x1007e585 */
L_1007E56B:
    eax = ebp + (-0x4); /* 0x1007E56B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E56E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E56F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E572: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E577: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E578: pop ecx */
    /* test eax, eax */ /* 0x1007E579: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E582; /* 0x1007E57B: jne 0x1007e582 */
L_1007E57D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E57D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E59F; /* 0x1007E580: jmp 0x1007e59f */
L_1007E582:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E582: mov eax, dword ptr [ebp - 4] */
L_1007E585:
    PUSH32(esp, esi); /* 0x1007E585: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E586: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E589: push eax */
    RECOMP_CALL(sub_10015C91); /* 0x1007E58A: call 0x10015c91 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E58F: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E592: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E594: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E599: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E59C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E59E: pop esi */
L_1007E59F:
    esp = ebp; /* 0x1007E59F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E5A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E5A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E5A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E5A3u);

L_1007E5A3:
    PUSH32(esp, ebp); /* 0x1007E5A3: push ebp */
    ebp = esp; /* 0x1007E5A4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E5A6: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E5A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E5A9: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E5AC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E5CB; /* 0x1007E5AF: je 0x1007e5cb */
L_1007E5B1:
    eax = ebp + (-0x4); /* 0x1007E5B1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E5B4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E5B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E5B8: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E5BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E5BE: pop ecx */
    /* test eax, eax */ /* 0x1007E5BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E5C8; /* 0x1007E5C1: jne 0x1007e5c8 */
L_1007E5C3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E5C3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E5E5; /* 0x1007E5C6: jmp 0x1007e5e5 */
L_1007E5C8:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E5C8: mov eax, dword ptr [ebp - 4] */
L_1007E5CB:
    PUSH32(esp, esi); /* 0x1007E5CB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E5CC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007E5CF: push eax */
    RECOMP_CALL(sub_1007F00C); /* 0x1007E5D0: call 0x1007f00c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E5D5: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E5D8: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E5DA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E5DF: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007E5E2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E5E4: pop esi */
L_1007E5E5:
    esp = ebp; /* 0x1007E5E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E5E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E5E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E5E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E5E9u);

L_1007E5E9:
    PUSH32(esp, ebp); /* 0x1007E5E9: push ebp */
    ebp = esp; /* 0x1007E5EA: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1007E5EC: pop ebp */
    goto L_1007E5EF; /* 0x1007E5ED: jmp 0x1007e5ef */
L_1007E5EF:
    PUSH32(esp, ebp); /* 0x1007E5EF: push ebp */
    ebp = esp; /* 0x1007E5F0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E5F2: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E5F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E5F5: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E5F8: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E617; /* 0x1007E5FB: je 0x1007e617 */
L_1007E5FD:
    eax = ebp + (-0x4); /* 0x1007E5FD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E600: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E601: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E604: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E609: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E60A: pop ecx */
    /* test eax, eax */ /* 0x1007E60B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E614; /* 0x1007E60D: jne 0x1007e614 */
L_1007E60F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E60F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E62D; /* 0x1007E612: jmp 0x1007e62d */
L_1007E614:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E614: mov eax, dword ptr [ebp - 4] */
L_1007E617:
    PUSH32(esp, esi); /* 0x1007E617: push esi */
    PUSH32(esp, eax); /* 0x1007E618: push eax */
    RECOMP_CALL(sub_10031C3E); /* 0x1007E619: call 0x10031c3e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E61E: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E621: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E623: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E628: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E629: pop ecx */
    eax = esi; /* 0x1007E62A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E62C: pop esi */
L_1007E62D:
    esp = ebp; /* 0x1007E62D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E62F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E630: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E5EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E5EFu);

L_1007E5EF:
    PUSH32(esp, ebp); /* 0x1007E5EF: push ebp */
    ebp = esp; /* 0x1007E5F0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007E5F2: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E5F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E5F5: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007E5F8: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E617; /* 0x1007E5FB: je 0x1007e617 */
L_1007E5FD:
    eax = ebp + (-0x4); /* 0x1007E5FD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007E600: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E601: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BA26); /* 0x1007E604: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E609: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E60A: pop ecx */
    /* test eax, eax */ /* 0x1007E60B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E614; /* 0x1007E60D: jne 0x1007e614 */
L_1007E60F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E60F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E62D; /* 0x1007E612: jmp 0x1007e62d */
L_1007E614:
    eax = MEM32(ebp + (-0x4)); /* 0x1007E614: mov eax, dword ptr [ebp - 4] */
L_1007E617:
    PUSH32(esp, esi); /* 0x1007E617: push esi */
    PUSH32(esp, eax); /* 0x1007E618: push eax */
    RECOMP_CALL(sub_10031C3E); /* 0x1007E619: call 0x10031c3e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007E61E: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1007E621: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E623: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E628: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E629: pop ecx */
    eax = esi; /* 0x1007E62A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007E62C: pop esi */
L_1007E62D:
    esp = ebp; /* 0x1007E62D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E62F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E630: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E631u);

L_1007E631:
    PUSH32(esp, ebp); /* 0x1007E631: push ebp */
    ebp = esp; /* 0x1007E632: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1007E634: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007E637: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007E63C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E63E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007E641: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007E642: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1007E645: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E665; /* 0x1007E647: jne 0x1007e665 */
L_1007E649:
    RECOMP_CALL(sub_1001E471); /* 0x1007E649: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    MEM32(eax) = MEM32(eax) & esi; /* 0x1007E64E: and dword ptr [eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1007E650: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E655: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007E65B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007E660:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E660: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E6A7; /* 0x1007E663: jmp 0x1007e6a7 */
L_1007E665:
    eax = ebp + (-0x28); /* 0x1007E665: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1007E668: push eax */
    PUSH32(esp, 0); /* 0x1007E669: push 0 */
    PUSH32(esp, esi); /* 0x1007E66B: push esi */
    RECOMP_ICALL(MEM32(0x100E50AC)); /* 0x1007E66C: call dword ptr [0x100e50ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E672: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E685; /* 0x1007E674: jne 0x1007e685 */
L_1007E676:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E676: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007E67C: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007E67D: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E682: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007E660; /* 0x1007E683: jmp 0x1007e660 */
L_1007E685:
    /* test MEM8(ebp + 0xC), 0x80u */ /* 0x1007E685: test byte ptr [ebp + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x28)); /* 0x1007E689: mov eax, dword ptr [ebp - 0x28] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E693; /* 0x1007E68C: je 0x1007e693 */
L_1007E68E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1007E68E: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E696; /* 0x1007E691: jmp 0x1007e696 */
L_1007E693:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1007E693: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E696:
    PUSH32(esp, eax); /* 0x1007E696: push eax */
    PUSH32(esp, esi); /* 0x1007E697: push esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1007E698: mov dword ptr [ebp - 0x28], eax */
    RECOMP_ICALL(MEM32(0x100E50B0)); /* 0x1007E69B: call dword ptr [0x100e50b0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E6A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E676; /* 0x1007E6A3: je 0x1007e676 */
L_1007E6A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E6A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E6A7:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007E6A7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007E6AA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007E6AC: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007E6AD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007E6B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007E6B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E6B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E6B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E6B6u);

L_1007E6B6:
    PUSH32(esp, ebp); /* 0x1007E6B6: push ebp */
    ebp = esp; /* 0x1007E6B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007E6B9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007E6BA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007E6BC: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E6BD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50B8)); /* 0x1007E6C0: call dword ptr [0x100e50b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E6C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E6D2; /* 0x1007E6C8: jne 0x1007e6d2 */
L_1007E6CA:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E6CA: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007E6D0: mov esi, eax */
L_1007E6D2:
    /* test esi, esi */ /* 0x1007E6D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E6E2; /* 0x1007E6D4: je 0x1007e6e2 */
L_1007E6D6:
    PUSH32(esp, esi); /* 0x1007E6D6: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007E6D7: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E6DC: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E6DD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007E6E4; /* 0x1007E6E0: jmp 0x1007e6e4 */
L_1007E6E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E6E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E6E4:
    esi = POP32_VAL(esp); /* 0x1007E6E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007E6E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E6E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E6E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E6E7u);

L_1007E6E7:
    PUSH32(esp, ebp); /* 0x1007E6E7: push ebp */
    ebp = esp; /* 0x1007E6E8: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1007E6EA: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007E6EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E6EF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50BC)); /* 0x1007E6F2: call dword ptr [0x100e50bc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E6F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E704; /* 0x1007E6FA: jne 0x1007e704 */
L_1007E6FC:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E6FC: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_1007E706; /* 0x1007E702: jmp 0x1007e706 */
L_1007E704:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E704: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E706:
    /* test eax, eax */ /* 0x1007E706: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E716; /* 0x1007E708: je 0x1007e716 */
L_1007E70A:
    PUSH32(esp, eax); /* 0x1007E70A: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007E70B: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E710: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E711: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E714: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E715: ret  */
L_1007E716:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E716: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E719: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E71A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E71Au);

L_1007E71A:
    PUSH32(esp, ebp); /* 0x1007E71A: push ebp */
    ebp = esp; /* 0x1007E71B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007E71D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50C0)); /* 0x1007E720: call dword ptr [0x100e50c0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E732; /* 0x1007E728: jne 0x1007e732 */
L_1007E72A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007E72A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_1007E734; /* 0x1007E730: jmp 0x1007e734 */
L_1007E732:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E732: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007E734:
    /* test eax, eax */ /* 0x1007E734: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E744; /* 0x1007E736: je 0x1007e744 */
L_1007E738:
    PUSH32(esp, eax); /* 0x1007E738: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007E739: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E73E: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007E73F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E742: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E743: ret  */
L_1007E744:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007E746: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007E747: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007E748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007E748u);

L_1007E748:
    PUSH32(esp, ebp); /* 0x1007E748: push ebp */
    ebp = esp; /* 0x1007E749: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x478u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x478u; /* 0x1007E74B: sub esp, 0x478 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007E751: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007E756: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007E758: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1007E75B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007E75C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007E75F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007E760: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007E762: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1007E763: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1007E766: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E786; /* 0x1007E768: jne 0x1007e786 */
L_1007E76A:
    RECOMP_CALL(sub_1001E471); /* 0x1007E76A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007E76F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x1007E771: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007E776: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007E77C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1007EB83; /* 0x1007E781: jmp 0x1007eb83 */
L_1007E786:
    /* test edi, edi */ /* 0x1007E786: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E76A; /* 0x1007E788: je 0x1007e76a */
L_1007E78A:
    PUSH32(esp, 0x10015F14u); /* 0x1007E78A: push 0x10015f14 */
    PUSH32(esp, ebx); /* 0x1007E78F: push ebx */
    RECOMP_CALL(sub_10011E8E); /* 0x1007E790: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E795: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E796: pop ecx */
    /* test eax, eax */ /* 0x1007E797: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E7B1; /* 0x1007E799: je 0x1007e7b1 */
L_1007E79B:
    RECOMP_CALL(sub_1001177D); /* 0x1007E79B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007E7A0: push 2 */
    esi = POP32_VAL(esp); /* 0x1007E7A2: pop esi */
    MEM32(eax) = esi; /* 0x1007E7A3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1007E7A5: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007E7AA: mov dword ptr [eax], esi */
    goto L_1007EB83; /* 0x1007E7AC: jmp 0x1007eb83 */
L_1007E7B1:
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x1007E7B1: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E7D5; /* 0x1007E7B6: jne 0x1007e7d5 */
L_1007E7B8:
    eax = (uint32_t)MEM16(ebx); /* 0x1007E7B8: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1007E7BB: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E7C6; /* 0x1007E7BE: je 0x1007e7c6 */
L_1007E7C0:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x1007E7C0: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E79B; /* 0x1007E7C4: je 0x1007e79b */
L_1007E7C6:
    PUSH32(esp, eax); /* 0x1007E7C6: push eax */
    RECOMP_CALL(sub_10011E57); /* 0x1007E7C7: call 0x10011e57 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007E7CC: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1007E7CF: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x1007E7D0: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_1007E7DA; /* 0x1007E7D3: jmp 0x1007e7da */
L_1007E7D5:
    RECOMP_CALL(sub_10014728); /* 0x1007E7D5: call 0x10014728 */
    RECOMP_FLAGS_IN();
L_1007E7DA:
    PUSH32(esp, esi); /* 0x1007E7DA: push esi */
    PUSH32(esp, esi); /* 0x1007E7DB: push esi */
    PUSH32(esp, esi); /* 0x1007E7DC: push esi */
    MEM32(ebp + (-0x478)) = eax; /* 0x1007E7DD: mov dword ptr [ebp - 0x478], eax */
    eax = ebp + (-0x46C); /* 0x1007E7E3: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x1007E7E9: push eax */
    PUSH32(esp, esi); /* 0x1007E7EA: push esi */
    PUSH32(esp, ebx); /* 0x1007E7EB: push ebx */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007E7EC: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x474)) = eax; /* 0x1007E7F2: mov dword ptr [ebp - 0x474], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007E7F8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E8E4; /* 0x1007E7FB: jne 0x1007e8e4 */
L_1007E801:
    PUSH32(esp, 0x1002F634u); /* 0x1007E801: push 0x1002f634 */
    PUSH32(esp, ebx); /* 0x1007E806: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x1007E807: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_10011E8E); /* 0x1007E80D: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E812: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007E813: pop ecx */
    /* test eax, eax */ /* 0x1007E814: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E79B; /* 0x1007E816: je 0x1007e79b */
L_1007E818:
    eax = ebp + (-0x470); /* 0x1007E818: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x1007E81E: push eax */
    PUSH32(esp, 0x104u); /* 0x1007E81F: push 0x104 */
    eax = ebp + (-0x20C); /* 0x1007E824: lea eax, [ebp - 0x20c] */
    PUSH32(esp, ebx); /* 0x1007E82A: push ebx */
    PUSH32(esp, eax); /* 0x1007E82B: push eax */
    RECOMP_CALL(sub_1002F5F8); /* 0x1007E82C: call 0x1002f5f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007E831: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = eax; /* 0x1007E834: mov dword ptr [ebp - 0x474], eax */
    /* test eax, eax */ /* 0x1007E83A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E8C7; /* 0x1007E83C: je 0x1007e8c7 */
L_1007E842:
    PUSH32(esp, eax); /* 0x1007E842: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007E843: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E848: pop ecx */
    /* cmp eax, 3 */ /* 0x1007E849: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E85E; /* 0x1007E84C: je 0x1007e85e */
L_1007E84E:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1007E84E: push dword ptr [ebp - 0x474] */
    RECOMP_CALL(sub_1002F63C); /* 0x1007E854: call 0x1002f63c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E859: pop ecx */
    /* test eax, eax */ /* 0x1007E85A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E8C7; /* 0x1007E85C: je 0x1007e8c7 */
L_1007E85E:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1007E85E: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E50C4)); /* 0x1007E864: call dword ptr [0x100e50c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007E86A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007E86C: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1007E86D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007E8C7; /* 0x1007E86F: jbe 0x1007e8c7 */
L_1007E871:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x1007E871: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E885; /* 0x1007E877: je 0x1007e885 */
L_1007E879:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007E879: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E87F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E884: pop ecx */
L_1007E885:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E885: push -1 */
    PUSH32(esp, esi); /* 0x1007E887: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007E888: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1007E88A: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x1007E894: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x1007E895: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007E89C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1007E89D: push esi */
    PUSH32(esp, eax); /* 0x1007E89E: push eax */
    PUSH32(esp, eax); /* 0x1007E89F: push eax */
    PUSH32(esp, 0x7BCu); /* 0x1007E8A0: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x1007E8A5: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x1007E8AB: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_10086D5C); /* 0x1007E8B1: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007E8B6: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x1007E8B9: mov dword ptr [edi + 0x1c], eax */
    MEM32(edi + 0x18) = eax; /* 0x1007E8BC: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x20) = eax; /* 0x1007E8BF: mov dword ptr [edi + 0x20], eax */
    goto L_1007EAF8; /* 0x1007E8C2: jmp 0x1007eaf8 */
L_1007E8C7:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x1007E8C7: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E79B; /* 0x1007E8CD: je 0x1007e79b */
L_1007E8D3:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007E8D3: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007E8D9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007E8DE: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007E79B; /* 0x1007E8DF: jmp 0x1007e79b */
L_1007E8E4:
    /* test MEM32(ebp + (-0x46C)), 0x400u */ /* 0x1007E8E4: test dword ptr [ebp - 0x46c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E95D; /* 0x1007E8EE: je 0x1007e95d */
L_1007E8F0:
    /* cmp MEM32(ebp + (-0x448)), 0xA000000Cu */ /* 0x1007E8F0: cmp dword ptr [ebp - 0x448], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x448))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E95D; /* 0x1007E8FA: jne 0x1007e95d */
L_1007E8FC:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) | 0xFFFFFFFFu; /* 0x1007E8FC: or dword ptr [ebp - 0x470], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1007E903: mov eax, esi */
    /* test MEM8(ebp + (-0x46C)), 0x10u */ /* 0x1007E905: test byte ptr [ebp - 0x46c], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x46C))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007E913; /* 0x1007E90C: je 0x1007e913 */
L_1007E90E:
    eax = 0x2000u; /* 0x1007E90E: mov eax, 0x2000 */
L_1007E913:
    PUSH32(esp, esi); /* 0x1007E913: push esi */
    PUSH32(esp, 0x40u); /* 0x1007E914: push 0x40 */
    PUSH32(esp, eax); /* 0x1007E916: push eax */
    eax = ebp + (-0x470); /* 0x1007E917: lea eax, [ebp - 0x470] */
    PUSH32(esp, ebx); /* 0x1007E91D: push ebx */
    PUSH32(esp, eax); /* 0x1007E91E: push eax */
    RECOMP_CALL(sub_10015474); /* 0x1007E91F: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007E924: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007E927: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007E79B; /* 0x1007E929: jne 0x1007e79b */
L_1007E92F:
    /* cmp MEM32(ebp + (-0x470)), 0xFFFFFFFFu */ /* 0x1007E92F: cmp dword ptr [ebp - 0x470], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007E79B; /* 0x1007E936: je 0x1007e79b */
L_1007E93C:
    PUSH32(esp, edi); /* 0x1007E93C: push edi */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007E93D: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_100A09CE); /* 0x1007E943: call 0x100a09ce */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007E948: push dword ptr [ebp - 0x470] */
    esi = eax; /* 0x1007E94E: mov esi, eax */
    RECOMP_CALL(sub_10014EA2); /* 0x1007E950: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007E955: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1007EB5A; /* 0x1007E958: jmp 0x1007eb5a */
L_1007E95D:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x1007E95D: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E972; /* 0x1007E963: jne 0x1007e972 */
L_1007E965:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x1007E965: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E972; /* 0x1007E96B: jne 0x1007e972 */
L_1007E96D:
    MEM32(edi + 0x1C) = esi; /* 0x1007E96D: mov dword ptr [edi + 0x1c], esi */
    goto L_1007E9E2; /* 0x1007E970: jmp 0x1007e9e2 */
L_1007E972:
    eax = ebp + (-0x21C); /* 0x1007E972: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007E978: push eax */
    eax = ebp + (-0x458); /* 0x1007E979: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x1007E97F: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007E980: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E986: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB6A; /* 0x1007E988: je 0x1007eb6a */
L_1007E98E:
    eax = ebp + (-0x21C); /* 0x1007E98E: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007E994: push eax */
    PUSH32(esp, eax); /* 0x1007E995: push eax */
    PUSH32(esp, esi); /* 0x1007E996: push esi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007E997: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007E99D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB6A; /* 0x1007E99F: je 0x1007eb6a */
L_1007E9A5:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007E9A5: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007E9AC: push -1 */
    PUSH32(esp, eax); /* 0x1007E9AE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007E9AF: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007E9B6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007E9B7: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007E9BE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007E9BF: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007E9C6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007E9C7: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007E9CE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007E9CF: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007E9D6: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007E9D7: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007E9DC: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x1007E9DF: mov dword ptr [edi + 0x1c], eax */
L_1007E9E2:
    /* cmp MEM32(ebp + (-0x460)), esi */ /* 0x1007E9E2: cmp dword ptr [ebp - 0x460], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E9F7; /* 0x1007E9E8: jne 0x1007e9f7 */
L_1007E9EA:
    /* cmp MEM32(ebp + (-0x45C)), esi */ /* 0x1007E9EA: cmp dword ptr [ebp - 0x45c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007E9F7; /* 0x1007E9F0: jne 0x1007e9f7 */
L_1007E9F2:
    eax = MEM32(edi + 0x1C); /* 0x1007E9F2: mov eax, dword ptr [edi + 0x1c] */
    goto L_1007EA64; /* 0x1007E9F5: jmp 0x1007ea64 */
L_1007E9F7:
    eax = ebp + (-0x21C); /* 0x1007E9F7: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007E9FD: push eax */
    eax = ebp + (-0x460); /* 0x1007E9FE: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x1007EA04: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007EA05: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EA0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB4A; /* 0x1007EA0D: je 0x1007eb4a */
L_1007EA13:
    eax = ebp + (-0x21C); /* 0x1007EA13: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EA19: push eax */
    PUSH32(esp, eax); /* 0x1007EA1A: push eax */
    PUSH32(esp, esi); /* 0x1007EA1B: push esi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007EA1C: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EA22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB4A; /* 0x1007EA24: je 0x1007eb4a */
L_1007EA2A:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007EA2A: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007EA31: push -1 */
    PUSH32(esp, eax); /* 0x1007EA33: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007EA34: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007EA3B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007EA3C: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007EA43: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007EA44: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007EA4B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007EA4C: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007EA53: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007EA54: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EA5B: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007EA5C: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007EA61: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1007EA64:
    MEM32(edi + 0x18) = eax; /* 0x1007EA64: mov dword ptr [edi + 0x18], eax */
    /* cmp MEM32(ebp + (-0x468)), esi */ /* 0x1007EA67: cmp dword ptr [ebp - 0x468], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EA7C; /* 0x1007EA6D: jne 0x1007ea7c */
L_1007EA6F:
    /* cmp MEM32(ebp + (-0x464)), esi */ /* 0x1007EA6F: cmp dword ptr [ebp - 0x464], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EA7C; /* 0x1007EA75: jne 0x1007ea7c */
L_1007EA77:
    eax = MEM32(edi + 0x1C); /* 0x1007EA77: mov eax, dword ptr [edi + 0x1c] */
    goto L_1007EAE9; /* 0x1007EA7A: jmp 0x1007eae9 */
L_1007EA7C:
    eax = ebp + (-0x21C); /* 0x1007EA7C: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EA82: push eax */
    eax = ebp + (-0x468); /* 0x1007EA83: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1007EA89: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007EA8A: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EA90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB4A; /* 0x1007EA92: je 0x1007eb4a */
L_1007EA98:
    eax = ebp + (-0x21C); /* 0x1007EA98: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EA9E: push eax */
    PUSH32(esp, eax); /* 0x1007EA9F: push eax */
    PUSH32(esp, esi); /* 0x1007EAA0: push esi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007EAA1: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EAA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EB4A; /* 0x1007EAA9: je 0x1007eb4a */
L_1007EAAF:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007EAAF: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007EAB6: push -1 */
    PUSH32(esp, eax); /* 0x1007EAB8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007EAB9: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007EAC0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007EAC1: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007EAC8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007EAC9: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007EAD0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007EAD1: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007EAD8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007EAD9: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EAE0: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007EAE1: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007EAE6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1007EAE9:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1007EAE9: push dword ptr [ebp - 0x474] */
    MEM32(edi + 0x20) = eax; /* 0x1007EAEF: mov dword ptr [edi + 0x20], eax */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EAF2: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_1007EAF8:
    PUSH32(esp, ebx); /* 0x1007EAF8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x1007EAF9: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_1001619F); /* 0x1007EAFF: call 0x1001619f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007EB04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007EB05: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007EB06: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1007EB08: mov word ptr [edi + 6], ax */
    eax = MEM32(ebp + (-0x44C)); /* 0x1007EB0C: mov eax, dword ptr [ebp - 0x44c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007EB12: inc ecx */
    _flag_k = FK_INC;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1007EB13: mov word ptr [edi + 8], cx */
    MEM32(edi + 0x14) = eax; /* 0x1007EB17: mov dword ptr [edi + 0x14], eax */
    /* cmp MEM32(ebp + (-0x450)), esi */ /* 0x1007EB1A: cmp dword ptr [ebp - 0x450], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x450))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007EB33; /* 0x1007EB20: je 0x1007eb33 */
L_1007EB22:
    RECOMP_CALL(sub_1001177D); /* 0x1007EB22: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x84u; /* 0x1007EB27: mov dword ptr [eax], 0x84 */
    MEM32(edi + 0x14) = esi; /* 0x1007EB2D: mov dword ptr [edi + 0x14], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007EB30: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007EB33:
    ecx = MEM32(ebp + (-0x478)); /* 0x1007EB33: mov ecx, dword ptr [ebp - 0x478] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007EB39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1007EB3B: dec ecx */
    _flag_k = FK_DEC;
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1007EB3C: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x1007EB40: mov dword ptr [edi + 0xa], eax */
    MEM32(edi) = ecx; /* 0x1007EB43: mov dword ptr [edi], ecx */
    MEM32(edi + 0x10) = ecx; /* 0x1007EB45: mov dword ptr [edi + 0x10], ecx */
    goto L_1007EB66; /* 0x1007EB48: jmp 0x1007eb66 */
L_1007EB4A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007EB4A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007EB50: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007EB51: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007EB56: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007EB59: pop ecx */
L_1007EB5A:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1007EB5A: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EB60: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_1007EB66:
    eax = esi; /* 0x1007EB66: mov eax, esi */
    goto L_1007EB86; /* 0x1007EB68: jmp 0x1007eb86 */
L_1007EB6A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007EB6A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007EB70: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007EB71: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007EB76: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1007EB77: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EB7D: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_1007EB83:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007EB83: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007EB86:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007EB86: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007EB89: pop edi */
    esi = POP32_VAL(esp); /* 0x1007EB8A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007EB8B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1007EB8D: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007EB8E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007EB93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007EB95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007EB96: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007EB97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007EB97u);

L_1007EB97:
    PUSH32(esp, ebp); /* 0x1007EB97: push ebp */
    ebp = esp; /* 0x1007EB98: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x474u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x474u; /* 0x1007EB9A: sub esp, 0x474 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007EBA0: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007EBA5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007EBA7: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007EBAA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007EBAB: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007EBAE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007EBAF: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1007EBB2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007EBD6; /* 0x1007EBB4: jne 0x1007ebd6 */
L_1007EBB6:
    RECOMP_CALL(sub_1001E471); /* 0x1007EBB6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007EBBB: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1007EBBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007EBC3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007EBC9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007EBCE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007EBCE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007EFFC; /* 0x1007EBD1: jmp 0x1007effc */
L_1007EBD6:
    /* test esi, esi */ /* 0x1007EBD6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EBB6; /* 0x1007EBD8: je 0x1007ebb6 */
L_1007EBDA:
    PUSH32(esp, 0x10015F14u); /* 0x1007EBDA: push 0x10015f14 */
    PUSH32(esp, edi); /* 0x1007EBDF: push edi */
    RECOMP_CALL(sub_10011E8E); /* 0x1007EBE0: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007EBE5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007EBE6: pop ecx */
    /* test eax, eax */ /* 0x1007EBE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EBFE; /* 0x1007EBE9: je 0x1007ebfe */
L_1007EBEB:
    RECOMP_CALL(sub_1001177D); /* 0x1007EBEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007EBF0: push 2 */
    esi = POP32_VAL(esp); /* 0x1007EBF2: pop esi */
    MEM32(eax) = esi; /* 0x1007EBF3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1007EBF5: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007EBFA: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007EBCE; /* 0x1007EBFC: jmp 0x1007ebce */
L_1007EBFE:
    PUSH32(esp, ebx); /* 0x1007EBFE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007EBFF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x1007EC01: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EC3B; /* 0x1007EC06: jne 0x1007ec3b */
L_1007EC08:
    eax = (uint32_t)MEM16(edi); /* 0x1007EC08: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1007EC0B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EC2C; /* 0x1007EC0E: je 0x1007ec2c */
L_1007EC10:
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1007EC10: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EC2C; /* 0x1007EC14: jne 0x1007ec2c */
L_1007EC16:
    RECOMP_CALL(sub_1001177D); /* 0x1007EC16: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007EC1B: push 2 */
    esi = POP32_VAL(esp); /* 0x1007EC1D: pop esi */
    MEM32(eax) = esi; /* 0x1007EC1E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1007EC20: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007EC25: mov dword ptr [eax], esi */
    goto L_1007EFF8; /* 0x1007EC27: jmp 0x1007eff8 */
L_1007EC2C:
    PUSH32(esp, eax); /* 0x1007EC2C: push eax */
    RECOMP_CALL(sub_10011E57); /* 0x1007EC2D: call 0x10011e57 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007EC32: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1007EC35: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x1007EC36: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_1007EC40; /* 0x1007EC39: jmp 0x1007ec40 */
L_1007EC3B:
    RECOMP_CALL(sub_10014728); /* 0x1007EC3B: call 0x10014728 */
    RECOMP_FLAGS_IN();
L_1007EC40:
    PUSH32(esp, ebx); /* 0x1007EC40: push ebx */
    PUSH32(esp, ebx); /* 0x1007EC41: push ebx */
    PUSH32(esp, ebx); /* 0x1007EC42: push ebx */
    MEM32(ebp + (-0x474)) = eax; /* 0x1007EC43: mov dword ptr [ebp - 0x474], eax */
    eax = ebp + (-0x46C); /* 0x1007EC49: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x1007EC4F: push eax */
    PUSH32(esp, ebx); /* 0x1007EC50: push ebx */
    PUSH32(esp, edi); /* 0x1007EC51: push edi */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007EC52: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007EC58: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1007EC5A: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007ED47; /* 0x1007EC5D: jne 0x1007ed47 */
L_1007EC63:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) & 0; /* 0x1007EC63: and dword ptr [ebp - 0x470], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1002F634u); /* 0x1007EC6A: push 0x1002f634 */
    PUSH32(esp, edi); /* 0x1007EC6F: push edi */
    RECOMP_CALL(sub_10011E8E); /* 0x1007EC70: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007EC75: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007EC76: pop ecx */
    /* test eax, eax */ /* 0x1007EC77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EC16; /* 0x1007EC79: je 0x1007ec16 */
L_1007EC7B:
    eax = ebp + (-0x470); /* 0x1007EC7B: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x1007EC81: push eax */
    PUSH32(esp, 0x104u); /* 0x1007EC82: push 0x104 */
    eax = ebp + (-0x20C); /* 0x1007EC87: lea eax, [ebp - 0x20c] */
    PUSH32(esp, edi); /* 0x1007EC8D: push edi */
    PUSH32(esp, eax); /* 0x1007EC8E: push eax */
    RECOMP_CALL(sub_1002F5F8); /* 0x1007EC8F: call 0x1002f5f8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007EC94: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007EC96: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1007EC99: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007ED29; /* 0x1007EC9B: je 0x1007ed29 */
L_1007ECA1:
    PUSH32(esp, ebx); /* 0x1007ECA1: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007ECA2: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007ECA7: pop ecx */
    /* cmp eax, 3 */ /* 0x1007ECA8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ECB8; /* 0x1007ECAB: je 0x1007ecb8 */
L_1007ECAD:
    PUSH32(esp, ebx); /* 0x1007ECAD: push ebx */
    RECOMP_CALL(sub_1002F63C); /* 0x1007ECAE: call 0x1002f63c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007ECB3: pop ecx */
    /* test eax, eax */ /* 0x1007ECB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007ED29; /* 0x1007ECB6: je 0x1007ed29 */
L_1007ECB8:
    PUSH32(esp, ebx); /* 0x1007ECB8: push ebx */
    RECOMP_ICALL(MEM32(0x100E50C4)); /* 0x1007ECB9: call dword ptr [0x100e50c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007ECBF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007ECC1: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x1007ECC2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007ED29; /* 0x1007ECC4: jbe 0x1007ed29 */
L_1007ECC6:
    /* cmp MEM32(ebp + (-0x470)), 0 */ /* 0x1007ECC6: cmp dword ptr [ebp - 0x470], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ECDB; /* 0x1007ECCD: je 0x1007ecdb */
L_1007ECCF:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007ECCF: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007ECD5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007ECDA: pop ecx */
L_1007ECDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007ECDB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1007ECDD: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007ECE7: push -1 */
    PUSH32(esp, ecx); /* 0x1007ECE9: push ecx */
    PUSH32(esp, ecx); /* 0x1007ECEA: push ecx */
    PUSH32(esp, ecx); /* 0x1007ECEB: push ecx */
    PUSH32(esp, ebx); /* 0x1007ECEC: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007ECED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x450)) = ecx; /* 0x1007ECEF: mov dword ptr [ebp - 0x450], ecx */
    PUSH32(esp, ebx); /* 0x1007ECF5: push ebx */
    PUSH32(esp, 0x7BCu); /* 0x1007ECF6: push 0x7bc */
    MEM32(ebp + (-0x44C)) = ecx; /* 0x1007ECFB: mov dword ptr [ebp - 0x44c], ecx */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x1007ED01: mov word ptr [ebp - 0x440], ax */
    RECOMP_CALL(sub_10015F93); /* 0x1007ED08: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    ecx = edx; /* 0x1007ED0D: mov ecx, edx */
    MEM32(esi + 0x28) = eax; /* 0x1007ED0F: mov dword ptr [esi + 0x28], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007ED12: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x2C) = edx; /* 0x1007ED15: mov dword ptr [esi + 0x2c], edx */
    MEM32(esi + 0x20) = eax; /* 0x1007ED18: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = ecx; /* 0x1007ED1B: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x30) = eax; /* 0x1007ED1E: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = ecx; /* 0x1007ED21: mov dword ptr [esi + 0x34], ecx */
    goto L_1007EF83; /* 0x1007ED24: jmp 0x1007ef83 */
L_1007ED29:
    /* cmp MEM32(ebp + (-0x470)), 0 */ /* 0x1007ED29: cmp dword ptr [ebp - 0x470], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007EC16; /* 0x1007ED30: je 0x1007ec16 */
L_1007ED36:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007ED36: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007ED3C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007ED41: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007EC16; /* 0x1007ED42: jmp 0x1007ec16 */
L_1007ED47:
    /* test MEM32(ebp + (-0x46C)), 0x400u */ /* 0x1007ED47: test dword ptr [ebp - 0x46c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EDC1; /* 0x1007ED51: je 0x1007edc1 */
L_1007ED53:
    /* cmp MEM32(ebp + (-0x448)), 0xA000000Cu */ /* 0x1007ED53: cmp dword ptr [ebp - 0x448], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x448))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EDC1; /* 0x1007ED5D: jne 0x1007edc1 */
L_1007ED5F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) | 0xFFFFFFFFu; /* 0x1007ED5F: or dword ptr [ebp - 0x470], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007ED66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x46C)), 0x10u */ /* 0x1007ED68: test byte ptr [ebp - 0x46c], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x46C))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007ED76; /* 0x1007ED6F: je 0x1007ed76 */
L_1007ED71:
    eax = 0x2000u; /* 0x1007ED71: mov eax, 0x2000 */
L_1007ED76:
    PUSH32(esp, 0); /* 0x1007ED76: push 0 */
    PUSH32(esp, 0x40u); /* 0x1007ED78: push 0x40 */
    PUSH32(esp, eax); /* 0x1007ED7A: push eax */
    eax = ebp + (-0x470); /* 0x1007ED7B: lea eax, [ebp - 0x470] */
    PUSH32(esp, edi); /* 0x1007ED81: push edi */
    PUSH32(esp, eax); /* 0x1007ED82: push eax */
    RECOMP_CALL(sub_10015474); /* 0x1007ED83: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007ED88: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007ED8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007EC16; /* 0x1007ED8D: jne 0x1007ec16 */
L_1007ED93:
    /* cmp MEM32(ebp + (-0x470)), 0xFFFFFFFFu */ /* 0x1007ED93: cmp dword ptr [ebp - 0x470], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007EC16; /* 0x1007ED9A: je 0x1007ec16 */
L_1007EDA0:
    PUSH32(esp, esi); /* 0x1007EDA0: push esi */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007EDA1: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_100A0E3F); /* 0x1007EDA7: call 0x100a0e3f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007EDAC: push dword ptr [ebp - 0x470] */
    esi = eax; /* 0x1007EDB2: mov esi, eax */
    RECOMP_CALL(sub_10014EA2); /* 0x1007EDB4: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007EDB9: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1007EFD9; /* 0x1007EDBC: jmp 0x1007efd9 */
L_1007EDC1:
    /* cmp MEM32(ebp + (-0x458)), 0 */ /* 0x1007EDC1: cmp dword ptr [ebp - 0x458], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EDDD; /* 0x1007EDC8: jne 0x1007eddd */
L_1007EDCA:
    /* cmp MEM32(ebp + (-0x454)), 0 */ /* 0x1007EDCA: cmp dword ptr [ebp - 0x454], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EDDD; /* 0x1007EDD1: jne 0x1007eddd */
L_1007EDD3:
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x1007EDD3: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0; /* 0x1007EDD7: and dword ptr [esi + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007EE51; /* 0x1007EDDB: jmp 0x1007ee51 */
L_1007EDDD:
    eax = ebp + (-0x21C); /* 0x1007EDDD: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EDE3: push eax */
    eax = ebp + (-0x458); /* 0x1007EDE4: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x1007EDEA: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007EDEB: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EDF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFE4; /* 0x1007EDF3: je 0x1007efe4 */
L_1007EDF9:
    eax = ebp + (-0x21C); /* 0x1007EDF9: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EDFF: push eax */
    PUSH32(esp, eax); /* 0x1007EE00: push eax */
    PUSH32(esp, 0); /* 0x1007EE01: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007EE03: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EE09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFE4; /* 0x1007EE0B: je 0x1007efe4 */
L_1007EE11:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007EE11: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007EE18: push -1 */
    PUSH32(esp, eax); /* 0x1007EE1A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007EE1B: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007EE22: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007EE23: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007EE2A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007EE2B: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007EE32: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007EE33: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007EE3A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007EE3B: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EE42: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x1007EE43: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007EE48: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x28) = eax; /* 0x1007EE4B: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = edx; /* 0x1007EE4E: mov dword ptr [esi + 0x2c], edx */
L_1007EE51:
    /* cmp MEM32(ebp + (-0x460)), 0 */ /* 0x1007EE51: cmp dword ptr [ebp - 0x460], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EE71; /* 0x1007EE58: jne 0x1007ee71 */
L_1007EE5A:
    /* cmp MEM32(ebp + (-0x45C)), 0 */ /* 0x1007EE5A: cmp dword ptr [ebp - 0x45c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EE71; /* 0x1007EE61: jne 0x1007ee71 */
L_1007EE63:
    eax = MEM32(esi + 0x28); /* 0x1007EE63: mov eax, dword ptr [esi + 0x28] */
    MEM32(esi + 0x20) = eax; /* 0x1007EE66: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esi + 0x2C); /* 0x1007EE69: mov eax, dword ptr [esi + 0x2c] */
    MEM32(esi + 0x24) = eax; /* 0x1007EE6C: mov dword ptr [esi + 0x24], eax */
    goto L_1007EEE5; /* 0x1007EE6F: jmp 0x1007eee5 */
L_1007EE71:
    eax = ebp + (-0x21C); /* 0x1007EE71: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EE77: push eax */
    eax = ebp + (-0x460); /* 0x1007EE78: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x1007EE7E: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007EE7F: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EE85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFC9; /* 0x1007EE87: je 0x1007efc9 */
L_1007EE8D:
    eax = ebp + (-0x21C); /* 0x1007EE8D: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EE93: push eax */
    PUSH32(esp, eax); /* 0x1007EE94: push eax */
    PUSH32(esp, 0); /* 0x1007EE95: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007EE97: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EE9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFC9; /* 0x1007EE9F: je 0x1007efc9 */
L_1007EEA5:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007EEA5: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007EEAC: push -1 */
    PUSH32(esp, eax); /* 0x1007EEAE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007EEAF: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007EEB6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007EEB7: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007EEBE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007EEBF: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007EEC6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007EEC7: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007EECE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007EECF: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EED6: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x1007EED7: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007EEDC: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = eax; /* 0x1007EEDF: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x1007EEE2: mov dword ptr [esi + 0x24], edx */
L_1007EEE5:
    /* cmp MEM32(ebp + (-0x468)), 0 */ /* 0x1007EEE5: cmp dword ptr [ebp - 0x468], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EF05; /* 0x1007EEEC: jne 0x1007ef05 */
L_1007EEEE:
    /* cmp MEM32(ebp + (-0x464)), 0 */ /* 0x1007EEEE: cmp dword ptr [ebp - 0x464], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007EF05; /* 0x1007EEF5: jne 0x1007ef05 */
L_1007EEF7:
    eax = MEM32(esi + 0x28); /* 0x1007EEF7: mov eax, dword ptr [esi + 0x28] */
    MEM32(esi + 0x30) = eax; /* 0x1007EEFA: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(esi + 0x2C); /* 0x1007EEFD: mov eax, dword ptr [esi + 0x2c] */
    MEM32(esi + 0x34) = eax; /* 0x1007EF00: mov dword ptr [esi + 0x34], eax */
    goto L_1007EF79; /* 0x1007EF03: jmp 0x1007ef79 */
L_1007EF05:
    eax = ebp + (-0x21C); /* 0x1007EF05: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EF0B: push eax */
    eax = ebp + (-0x468); /* 0x1007EF0C: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1007EF12: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007EF13: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EF19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFC9; /* 0x1007EF1B: je 0x1007efc9 */
L_1007EF21:
    eax = ebp + (-0x21C); /* 0x1007EF21: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EF27: push eax */
    PUSH32(esp, eax); /* 0x1007EF28: push eax */
    PUSH32(esp, 0); /* 0x1007EF29: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007EF2B: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007EF31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007EFC9; /* 0x1007EF33: je 0x1007efc9 */
L_1007EF39:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007EF39: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007EF40: push -1 */
    PUSH32(esp, eax); /* 0x1007EF42: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007EF43: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007EF4A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007EF4B: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007EF52: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007EF53: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007EF5A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007EF5B: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007EF62: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007EF63: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007EF6A: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x1007EF6B: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007EF70: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x30) = eax; /* 0x1007EF73: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = edx; /* 0x1007EF76: mov dword ptr [esi + 0x34], edx */
L_1007EF79:
    PUSH32(esp, ebx); /* 0x1007EF79: push ebx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EF7A: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007EF80: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007EF82: inc ebx */
    _flag_k = FK_INC;
L_1007EF83:
    PUSH32(esp, edi); /* 0x1007EF83: push edi */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x1007EF84: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_1001619F); /* 0x1007EF8A: call 0x1001619f */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1007EF8F: mov word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007EF93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x44C)); /* 0x1007EF95: add eax, dword ptr [ebp - 0x44c] */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1007EF9B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007EF9C: pop ecx */
    ecx = MEM32(ebp + (-0x450)); /* 0x1007EF9D: mov ecx, dword ptr [ebp - 0x450] */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007EFA3: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x18) = eax; /* 0x1007EFA6: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007EFA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ebx)); /* 0x1007EFAB: mov word ptr [esi + 8], bx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1007EFAF: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x1007EFB3: mov dword ptr [esi + 0xa], eax */
    eax = MEM32(ebp + (-0x474)); /* 0x1007EFB6: mov eax, dword ptr [ebp - 0x474] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007EFBC: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x1C) = ecx; /* 0x1007EFBD: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi) = eax; /* 0x1007EFC0: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x1007EFC2: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007EFC5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007EFFB; /* 0x1007EFC7: jmp 0x1007effb */
L_1007EFC9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007EFC9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007EFCF: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007EFD0: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007EFD5: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007EFD8: pop ecx */
L_1007EFD9:
    PUSH32(esp, ebx); /* 0x1007EFD9: push ebx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EFDA: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007EFE0: mov eax, esi */
    goto L_1007EFFB; /* 0x1007EFE2: jmp 0x1007effb */
L_1007EFE4:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007EFE4: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007EFEA: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007EFEB: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007EFF0: pop ecx */
    PUSH32(esp, ebx); /* 0x1007EFF1: push ebx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007EFF2: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_1007EFF8:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007EFF8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007EFFB:
    ebx = POP32_VAL(esp); /* 0x1007EFFB: pop ebx */
L_1007EFFC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007EFFC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007EFFF: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007F000: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007F002: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007F003: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007F008: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007F00A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007F00B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007F00C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F00Cu);

L_1007F00C:
    PUSH32(esp, ebp); /* 0x1007F00C: push ebp */
    ebp = esp; /* 0x1007F00D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x474u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x474u; /* 0x1007F00F: sub esp, 0x474 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007F015: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007F01A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007F01C: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007F01F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007F020: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007F023: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007F024: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1007F027: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F04B; /* 0x1007F029: jne 0x1007f04b */
L_1007F02B:
    RECOMP_CALL(sub_1001E471); /* 0x1007F02B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007F030: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1007F033: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007F038: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007F03E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007F043:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007F043: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F443; /* 0x1007F046: jmp 0x1007f443 */
L_1007F04B:
    /* test esi, esi */ /* 0x1007F04B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F02B; /* 0x1007F04D: je 0x1007f02b */
L_1007F04F:
    PUSH32(esp, 0x10015F14u); /* 0x1007F04F: push 0x10015f14 */
    PUSH32(esp, edi); /* 0x1007F054: push edi */
    RECOMP_CALL(sub_10011E8E); /* 0x1007F055: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F05A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F05B: pop ecx */
    /* test eax, eax */ /* 0x1007F05C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F073; /* 0x1007F05E: je 0x1007f073 */
L_1007F060:
    RECOMP_CALL(sub_1001177D); /* 0x1007F060: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007F065: push 2 */
    esi = POP32_VAL(esp); /* 0x1007F067: pop esi */
    MEM32(eax) = esi; /* 0x1007F068: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1007F06A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007F06F: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1007F043; /* 0x1007F071: jmp 0x1007f043 */
L_1007F073:
    PUSH32(esp, ebx); /* 0x1007F073: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F074: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x1007F076: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F0B0; /* 0x1007F07B: jne 0x1007f0b0 */
L_1007F07D:
    eax = (uint32_t)MEM16(edi); /* 0x1007F07D: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1007F080: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F0A1; /* 0x1007F083: je 0x1007f0a1 */
L_1007F085:
    /* cmp MEM16(edi + 0x4), LO16(ebx) */ /* 0x1007F085: cmp word ptr [edi + 4], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F0A1; /* 0x1007F089: jne 0x1007f0a1 */
L_1007F08B:
    RECOMP_CALL(sub_1001177D); /* 0x1007F08B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1007F090: push 2 */
    esi = POP32_VAL(esp); /* 0x1007F092: pop esi */
    MEM32(eax) = esi; /* 0x1007F093: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1007F095: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1007F09A: mov dword ptr [eax], esi */
    goto L_1007F43F; /* 0x1007F09C: jmp 0x1007f43f */
L_1007F0A1:
    PUSH32(esp, eax); /* 0x1007F0A1: push eax */
    RECOMP_CALL(sub_10011E57); /* 0x1007F0A2: call 0x10011e57 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007F0A7: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x1007F0AA: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x1007F0AB: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_1007F0B5; /* 0x1007F0AE: jmp 0x1007f0b5 */
L_1007F0B0:
    RECOMP_CALL(sub_10014728); /* 0x1007F0B0: call 0x10014728 */
    RECOMP_FLAGS_IN();
L_1007F0B5:
    PUSH32(esp, ebx); /* 0x1007F0B5: push ebx */
    PUSH32(esp, ebx); /* 0x1007F0B6: push ebx */
    PUSH32(esp, ebx); /* 0x1007F0B7: push ebx */
    MEM32(ebp + (-0x474)) = eax; /* 0x1007F0B8: mov dword ptr [ebp - 0x474], eax */
    eax = ebp + (-0x46C); /* 0x1007F0BE: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x1007F0C4: push eax */
    PUSH32(esp, ebx); /* 0x1007F0C5: push ebx */
    PUSH32(esp, edi); /* 0x1007F0C6: push edi */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007F0C7: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007F0CD: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1007F0CF: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F1AD; /* 0x1007F0D2: jne 0x1007f1ad */
L_1007F0D8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) & 0; /* 0x1007F0D8: and dword ptr [ebp - 0x470], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1002F634u); /* 0x1007F0DF: push 0x1002f634 */
    PUSH32(esp, edi); /* 0x1007F0E4: push edi */
    RECOMP_CALL(sub_10011E8E); /* 0x1007F0E5: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F0EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F0EB: pop ecx */
    /* test eax, eax */ /* 0x1007F0EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F08B; /* 0x1007F0EE: je 0x1007f08b */
L_1007F0F0:
    eax = ebp + (-0x470); /* 0x1007F0F0: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x1007F0F6: push eax */
    PUSH32(esp, 0x104u); /* 0x1007F0F7: push 0x104 */
    eax = ebp + (-0x20C); /* 0x1007F0FC: lea eax, [ebp - 0x20c] */
    PUSH32(esp, edi); /* 0x1007F102: push edi */
    PUSH32(esp, eax); /* 0x1007F103: push eax */
    RECOMP_CALL(sub_1002F5F8); /* 0x1007F104: call 0x1002f5f8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007F109: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007F10B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1007F10E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F18F; /* 0x1007F110: je 0x1007f18f */
L_1007F112:
    PUSH32(esp, ebx); /* 0x1007F112: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007F113: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F118: pop ecx */
    /* cmp eax, 3 */ /* 0x1007F119: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F129; /* 0x1007F11C: je 0x1007f129 */
L_1007F11E:
    PUSH32(esp, ebx); /* 0x1007F11E: push ebx */
    RECOMP_CALL(sub_1002F63C); /* 0x1007F11F: call 0x1002f63c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F124: pop ecx */
    /* test eax, eax */ /* 0x1007F125: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F18F; /* 0x1007F127: je 0x1007f18f */
L_1007F129:
    PUSH32(esp, ebx); /* 0x1007F129: push ebx */
    RECOMP_ICALL(MEM32(0x100E50C4)); /* 0x1007F12A: call dword ptr [0x100e50c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F130: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007F132: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x1007F133: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007F18F; /* 0x1007F135: jbe 0x1007f18f */
L_1007F137:
    /* cmp MEM32(ebp + (-0x470)), 0 */ /* 0x1007F137: cmp dword ptr [ebp - 0x470], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F14C; /* 0x1007F13E: je 0x1007f14c */
L_1007F140:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007F140: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F146: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F14B: pop ecx */
L_1007F14C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007F14C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1007F14E: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007F158: push -1 */
    PUSH32(esp, ecx); /* 0x1007F15A: push ecx */
    PUSH32(esp, ecx); /* 0x1007F15B: push ecx */
    PUSH32(esp, ecx); /* 0x1007F15C: push ecx */
    PUSH32(esp, ebx); /* 0x1007F15D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F15E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x450)) = ecx; /* 0x1007F160: mov dword ptr [ebp - 0x450], ecx */
    PUSH32(esp, ebx); /* 0x1007F166: push ebx */
    PUSH32(esp, 0x7BCu); /* 0x1007F167: push 0x7bc */
    MEM32(ebp + (-0x44C)) = ecx; /* 0x1007F16C: mov dword ptr [ebp - 0x44c], ecx */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x1007F172: mov word ptr [ebp - 0x440], ax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007F179: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007F17E: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = eax; /* 0x1007F181: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x20) = eax; /* 0x1007F184: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x28) = eax; /* 0x1007F187: mov dword ptr [esi + 0x28], eax */
    goto L_1007F3CA; /* 0x1007F18A: jmp 0x1007f3ca */
L_1007F18F:
    /* cmp MEM32(ebp + (-0x470)), 0 */ /* 0x1007F18F: cmp dword ptr [ebp - 0x470], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F08B; /* 0x1007F196: je 0x1007f08b */
L_1007F19C:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007F19C: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F1A2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F1A7: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007F08B; /* 0x1007F1A8: jmp 0x1007f08b */
L_1007F1AD:
    /* test MEM32(ebp + (-0x46C)), 0x400u */ /* 0x1007F1AD: test dword ptr [ebp - 0x46c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F227; /* 0x1007F1B7: je 0x1007f227 */
L_1007F1B9:
    /* cmp MEM32(ebp + (-0x448)), 0xA000000Cu */ /* 0x1007F1B9: cmp dword ptr [ebp - 0x448], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x448))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F227; /* 0x1007F1C3: jne 0x1007f227 */
L_1007F1C5:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) | 0xFFFFFFFFu; /* 0x1007F1C5: or dword ptr [ebp - 0x470], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F1CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x46C)), 0x10u */ /* 0x1007F1CE: test byte ptr [ebp - 0x46c], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x46C))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F1DC; /* 0x1007F1D5: je 0x1007f1dc */
L_1007F1D7:
    eax = 0x2000u; /* 0x1007F1D7: mov eax, 0x2000 */
L_1007F1DC:
    PUSH32(esp, 0); /* 0x1007F1DC: push 0 */
    PUSH32(esp, 0x40u); /* 0x1007F1DE: push 0x40 */
    PUSH32(esp, eax); /* 0x1007F1E0: push eax */
    eax = ebp + (-0x470); /* 0x1007F1E1: lea eax, [ebp - 0x470] */
    PUSH32(esp, edi); /* 0x1007F1E7: push edi */
    PUSH32(esp, eax); /* 0x1007F1E8: push eax */
    RECOMP_CALL(sub_10015474); /* 0x1007F1E9: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007F1EE: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F1F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F08B; /* 0x1007F1F3: jne 0x1007f08b */
L_1007F1F9:
    /* cmp MEM32(ebp + (-0x470)), 0xFFFFFFFFu */ /* 0x1007F1F9: cmp dword ptr [ebp - 0x470], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F08B; /* 0x1007F200: je 0x1007f08b */
L_1007F206:
    PUSH32(esp, esi); /* 0x1007F206: push esi */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007F207: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_100A157C); /* 0x1007F20D: call 0x100a157c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1007F212: push dword ptr [ebp - 0x470] */
    esi = eax; /* 0x1007F218: mov esi, eax */
    RECOMP_CALL(sub_10014EA2); /* 0x1007F21A: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F21F: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1007F420; /* 0x1007F222: jmp 0x1007f420 */
L_1007F227:
    /* cmp MEM32(ebp + (-0x458)), 0 */ /* 0x1007F227: cmp dword ptr [ebp - 0x458], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F23F; /* 0x1007F22E: jne 0x1007f23f */
L_1007F230:
    /* cmp MEM32(ebp + (-0x454)), 0 */ /* 0x1007F230: cmp dword ptr [ebp - 0x454], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F23F; /* 0x1007F237: jne 0x1007f23f */
L_1007F239:
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0; /* 0x1007F239: and dword ptr [esi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F2B0; /* 0x1007F23D: jmp 0x1007f2b0 */
L_1007F23F:
    eax = ebp + (-0x21C); /* 0x1007F23F: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F245: push eax */
    eax = ebp + (-0x458); /* 0x1007F246: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x1007F24C: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007F24D: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F42B; /* 0x1007F255: je 0x1007f42b */
L_1007F25B:
    eax = ebp + (-0x21C); /* 0x1007F25B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F261: push eax */
    PUSH32(esp, eax); /* 0x1007F262: push eax */
    PUSH32(esp, 0); /* 0x1007F263: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007F265: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F26B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F42B; /* 0x1007F26D: je 0x1007f42b */
L_1007F273:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007F273: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007F27A: push -1 */
    PUSH32(esp, eax); /* 0x1007F27C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007F27D: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007F284: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007F285: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007F28C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007F28D: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007F294: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007F295: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007F29C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007F29D: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F2A4: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007F2A5: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007F2AA: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = eax; /* 0x1007F2AD: mov dword ptr [esi + 0x24], eax */
L_1007F2B0:
    /* cmp MEM32(ebp + (-0x460)), 0 */ /* 0x1007F2B0: cmp dword ptr [ebp - 0x460], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F2C7; /* 0x1007F2B7: jne 0x1007f2c7 */
L_1007F2B9:
    /* cmp MEM32(ebp + (-0x45C)), 0 */ /* 0x1007F2B9: cmp dword ptr [ebp - 0x45c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F2C7; /* 0x1007F2C0: jne 0x1007f2c7 */
L_1007F2C2:
    eax = MEM32(esi + 0x24); /* 0x1007F2C2: mov eax, dword ptr [esi + 0x24] */
    goto L_1007F335; /* 0x1007F2C5: jmp 0x1007f335 */
L_1007F2C7:
    eax = ebp + (-0x21C); /* 0x1007F2C7: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F2CD: push eax */
    eax = ebp + (-0x460); /* 0x1007F2CE: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x1007F2D4: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007F2D5: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F2DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F410; /* 0x1007F2DD: je 0x1007f410 */
L_1007F2E3:
    eax = ebp + (-0x21C); /* 0x1007F2E3: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F2E9: push eax */
    PUSH32(esp, eax); /* 0x1007F2EA: push eax */
    PUSH32(esp, 0); /* 0x1007F2EB: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007F2ED: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F2F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F410; /* 0x1007F2F5: je 0x1007f410 */
L_1007F2FB:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007F2FB: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007F302: push -1 */
    PUSH32(esp, eax); /* 0x1007F304: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007F305: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007F30C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007F30D: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007F314: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007F315: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007F31C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007F31D: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007F324: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007F325: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F32C: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007F32D: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007F332: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1007F335:
    /* cmp MEM32(ebp + (-0x468)), 0 */ /* 0x1007F335: cmp dword ptr [ebp - 0x468], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = eax; /* 0x1007F33C: mov dword ptr [esi + 0x20], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F34F; /* 0x1007F33F: jne 0x1007f34f */
L_1007F341:
    /* cmp MEM32(ebp + (-0x464)), 0 */ /* 0x1007F341: cmp dword ptr [ebp - 0x464], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F34F; /* 0x1007F348: jne 0x1007f34f */
L_1007F34A:
    eax = MEM32(esi + 0x24); /* 0x1007F34A: mov eax, dword ptr [esi + 0x24] */
    goto L_1007F3BD; /* 0x1007F34D: jmp 0x1007f3bd */
L_1007F34F:
    eax = ebp + (-0x21C); /* 0x1007F34F: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F355: push eax */
    eax = ebp + (-0x468); /* 0x1007F356: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1007F35C: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x1007F35D: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F363: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F410; /* 0x1007F365: je 0x1007f410 */
L_1007F36B:
    eax = ebp + (-0x21C); /* 0x1007F36B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F371: push eax */
    PUSH32(esp, eax); /* 0x1007F372: push eax */
    PUSH32(esp, 0); /* 0x1007F373: push 0 */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x1007F375: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F37B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F410; /* 0x1007F37D: je 0x1007f410 */
L_1007F383:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1007F383: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007F38A: push -1 */
    PUSH32(esp, eax); /* 0x1007F38C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x1007F38D: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1007F394: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1007F395: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x1007F39C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x1007F39D: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1007F3A4: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1007F3A5: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x1007F3AC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x1007F3AD: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1007F3B4: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x1007F3B5: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007F3BA: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1007F3BD:
    PUSH32(esp, ebx); /* 0x1007F3BD: push ebx */
    MEM32(esi + 0x28) = eax; /* 0x1007F3BE: mov dword ptr [esi + 0x28], eax */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007F3C1: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F3C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007F3C9: inc ebx */
    _flag_k = FK_INC;
L_1007F3CA:
    PUSH32(esp, edi); /* 0x1007F3CA: push edi */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x1007F3CB: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_1001619F); /* 0x1007F3D1: call 0x1001619f */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1007F3D6: mov word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F3DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x44C)); /* 0x1007F3DC: add eax, dword ptr [ebp - 0x44c] */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1007F3E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F3E3: pop ecx */
    ecx = MEM32(ebp + (-0x450)); /* 0x1007F3E4: mov ecx, dword ptr [ebp - 0x450] */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007F3EA: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x18) = eax; /* 0x1007F3ED: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F3F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ebx)); /* 0x1007F3F2: mov word ptr [esi + 8], bx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1007F3F6: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x1007F3FA: mov dword ptr [esi + 0xa], eax */
    eax = MEM32(ebp + (-0x474)); /* 0x1007F3FD: mov eax, dword ptr [ebp - 0x474] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007F403: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x1C) = ecx; /* 0x1007F404: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi) = eax; /* 0x1007F407: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x1007F409: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F40C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F442; /* 0x1007F40E: jmp 0x1007f442 */
L_1007F410:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007F410: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007F416: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007F417: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007F41C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007F41F: pop ecx */
L_1007F420:
    PUSH32(esp, ebx); /* 0x1007F420: push ebx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007F421: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007F427: mov eax, esi */
    goto L_1007F442; /* 0x1007F429: jmp 0x1007f442 */
L_1007F42B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007F42B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007F431: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007F432: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F437: pop ecx */
    PUSH32(esp, ebx); /* 0x1007F438: push ebx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007F439: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_1007F43F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007F43F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007F442:
    ebx = POP32_VAL(esp); /* 0x1007F442: pop ebx */
L_1007F443:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007F443: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007F446: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007F447: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007F449: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007F44A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007F44F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007F451: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007F452: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007F453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F453u);

L_1007F453:
    PUSH32(esp, ebp); /* 0x1007F453: push ebp */
    ebp = esp; /* 0x1007F454: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x1007F456: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007F45C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007F461: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007F463: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007F466: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x114)) = MEM32(ebp + (-0x114)) & 0; /* 0x1007F469: and dword ptr [ebp - 0x114], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007F470: push esi */
    PUSH32(esp, edi); /* 0x1007F471: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1007F472: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x10C); /* 0x1007F475: lea esi, [ebp - 0x10c] */
    /* test eax, eax */ /* 0x1007F47B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F49C; /* 0x1007F47D: jne 0x1007f49c */
L_1007F47F:
    RECOMP_CALL(sub_1001E471); /* 0x1007F47F: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007F484: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1007F487: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007F48C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007F492: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1007F55D; /* 0x1007F497: jmp 0x1007f55d */
L_1007F49C:
    PUSH32(esp, ebx); /* 0x1007F49C: push ebx */
    PUSH32(esp, eax); /* 0x1007F49D: push eax */
    RECOMP_ICALL(MEM32(0x100E50D0)); /* 0x1007F49E: call dword ptr [0x100e50d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F4A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F53F; /* 0x1007F4A6: je 0x1007f53f */
L_1007F4AC:
    eax = ebp + (-0x10C); /* 0x1007F4AC: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x1007F4B2: push eax */
    PUSH32(esp, 0x105u); /* 0x1007F4B3: push 0x105 */
    RECOMP_ICALL(MEM32(0x100E50D4)); /* 0x1007F4B8: call dword ptr [0x100e50d4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007F4BE: mov ebx, eax */
    /* cmp ebx, 0x104u */ /* 0x1007F4C0: cmp ebx, 0x104 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F4F6; /* 0x1007F4C6: jle 0x1007f4f6 */
L_1007F4C8:
    eax = ebx + 0x1; /* 0x1007F4C8: lea eax, [ebx + 1] */
    PUSH32(esp, 1); /* 0x1007F4CB: push 1 */
    PUSH32(esp, eax); /* 0x1007F4CD: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007F4CE: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007F4D3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007F4D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F4D6: pop ecx */
    /* test esi, esi */ /* 0x1007F4D7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F53F; /* 0x1007F4D9: je 0x1007f53f */
L_1007F4DB:
    MEM32(ebp + (-0x114)) = 1; /* 0x1007F4DB: mov dword ptr [ebp - 0x114], 1 */
    /* test ebx, ebx */ /* 0x1007F4E5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F53F; /* 0x1007F4E7: je 0x1007f53f */
L_1007F4E9:
    PUSH32(esp, esi); /* 0x1007F4E9: push esi */
    eax = ebx + 0x1; /* 0x1007F4EA: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x1007F4ED: push eax */
    RECOMP_ICALL(MEM32(0x100E50D4)); /* 0x1007F4EE: call dword ptr [0x100e50d4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007F4F4: mov ebx, eax */
L_1007F4F6:
    /* test ebx, ebx */ /* 0x1007F4F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F53F; /* 0x1007F4F8: je 0x1007f53f */
L_1007F4FA:
    SET_LO8(eax, MEM8(esi)); /* 0x1007F4FA: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1007F4FC: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F504; /* 0x1007F4FE: je 0x1007f504 */
L_1007F500:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1007F500: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F50D; /* 0x1007F502: jne 0x1007f50d */
L_1007F504:
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x1007F504: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F50D; /* 0x1007F507: jne 0x1007f50d */
L_1007F509:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007F509: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F54C; /* 0x1007F50B: jmp 0x1007f54c */
L_1007F50D:
    MEM8(ebp + (-0x110)) = (uint8_t)(0x3Du); /* 0x1007F50D: mov byte ptr [ebp - 0x110], 0x3d */
    eax = (uint32_t)MEM8(esi); /* 0x1007F514: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1007F517: push eax */
    RECOMP_CALL(sub_1008EE96); /* 0x1007F518: call 0x1008ee96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F51D: pop ecx */
    MEM8(ebp + (-0x10F)) = (uint8_t)(LO8(eax)); /* 0x1007F51E: mov byte ptr [ebp - 0x10f], al */
    eax = ebp + (-0x110); /* 0x1007F524: lea eax, [ebp - 0x110] */
    PUSH32(esp, esi); /* 0x1007F52A: push esi */
    PUSH32(esp, eax); /* 0x1007F52B: push eax */
    MEM16(ebp + (-0x10E)) = (uint16_t)(0x3Au); /* 0x1007F52C: mov word ptr [ebp - 0x10e], 0x3a */
    RECOMP_ICALL(MEM32(0x100E50CC)); /* 0x1007F535: call dword ptr [0x100e50cc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F53B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F509; /* 0x1007F53D: jne 0x1007f509 */
L_1007F53F:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007F53F: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007F545: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007F546: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F54B: pop ecx */
L_1007F54C:
    /* cmp MEM32(ebp + (-0x114)), 0 */ /* 0x1007F54C: cmp dword ptr [ebp - 0x114], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1007F553: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F55D; /* 0x1007F554: je 0x1007f55d */
L_1007F556:
    PUSH32(esp, esi); /* 0x1007F556: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F557: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F55C: pop ecx */
L_1007F55D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007F55D: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1007F560: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1007F562: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007F563: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007F565: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007F566: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007F56B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007F56D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007F56E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007F56F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F56Fu);

L_1007F56F:
    PUSH32(esp, ebp); /* 0x1007F56F: push ebp */
    ebp = esp; /* 0x1007F570: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007F572: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007F575: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007F57A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007F57C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007F57F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x1Au */ /* 0x1007F582: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007F5A4; /* 0x1007F585: jbe 0x1007f5a4 */
L_1007F587:
    RECOMP_CALL(sub_1001E471); /* 0x1007F587: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x1007F58C: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_1001177D); /* 0x1007F592: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x1007F597: mov dword ptr [eax], 0xd */
    RECOMP_CALL(sub_100A4670); /* 0x1007F59D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1007F5DB; /* 0x1007F5A2: jmp 0x1007f5db */
L_1007F5A4:
    /* test eax, eax */ /* 0x1007F5A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F5AD; /* 0x1007F5A6: jne 0x1007f5ad */
L_1007F5A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F5A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007F5AA: inc eax */
    _flag_k = FK_INC;
    goto L_1007F5DD; /* 0x1007F5AB: jmp 0x1007f5dd */
L_1007F5AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1007F5AD: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Au); /* 0x1007F5B0: push 0x3a */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1007F5B2: mov word ptr [ebp - 0xc], ax */
    eax = POP32_VAL(esp); /* 0x1007F5B6: pop eax */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x1007F5B7: mov word ptr [ebp - 0xa], ax */
    PUSH32(esp, 0x5Cu); /* 0x1007F5BB: push 0x5c */
    eax = POP32_VAL(esp); /* 0x1007F5BD: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1007F5BE: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F5C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1007F5C4: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0xC); /* 0x1007F5C8: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1007F5CB: push eax */
    RECOMP_ICALL(MEM32(0x100E50C4)); /* 0x1007F5CC: call dword ptr [0x100e50c4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007F5D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F5DB; /* 0x1007F5D4: je 0x1007f5db */
L_1007F5D6:
    /* cmp eax, 1 */ /* 0x1007F5D6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F5A8; /* 0x1007F5D9: jne 0x1007f5a8 */
L_1007F5DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F5DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007F5DD:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007F5DD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007F5E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007F5E2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007F5E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007F5E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007F5EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007F5EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F5EBu);

L_1007F5EB:
    PUSH32(esp, ebp); /* 0x1007F5EB: push ebp */
    ebp = esp; /* 0x1007F5EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1007F5EE: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007F5F1: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007F5F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007F5F8: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1007F5FB: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007F5FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x1007F600: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1007F603: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1007F604: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007F607: push esi */
    PUSH32(esp, edi); /* 0x1007F608: push edi */
    esi = 0x1007F9B4u; /* 0x1007F609: mov esi, 0x1007f9b4 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1007F60E: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x14); /* 0x1007F611: mov eax, dword ptr [ebp + 0x14] */
    edi = ebp + (-0x10); /* 0x1007F614: lea edi, [ebp - 0x10] */
    PUSH32(esp, 2); /* 0x1007F617: push 2 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1007F619: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ecx); /* 0x1007F61C: mov eax, dword ptr [ecx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007F61E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1007F61F: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x40)) = ebx; /* 0x1007F622: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1007F625: mov dword ptr [ebp - 0x3c], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007F628: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1007F629: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x34)) = edx; /* 0x1007F62C: mov dword ptr [ebp - 0x34], edx */
    MEM32(ebp + (-0x30)) = edx; /* 0x1007F62F: mov dword ptr [ebp - 0x30], edx */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x1007F632: movsw word ptr es:[edi], word ptr [esi] */
    MEM32(ebp + (-0x28)) = edx; /* 0x1007F634: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x38)) = edx; /* 0x1007F637: mov dword ptr [ebp - 0x38], edx */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x1007F63A: movsb byte ptr es:[edi], byte ptr [esi] */
    edi = ecx; /* 0x1007F63B: mov edi, ecx */
    esi = POP32_VAL(esp); /* 0x1007F63D: pop esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1007F63E: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1007F641: mov dword ptr [ebp - 0x2c], esi */
    /* test eax, eax */ /* 0x1007F644: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F663; /* 0x1007F646: je 0x1007f663 */
L_1007F648:
    ebx = esi; /* 0x1007F648: mov ebx, esi */
L_1007F64A:
    PUSH32(esp, eax); /* 0x1007F64A: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007F64B: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007F650: inc eax */
    _flag_k = FK_INC;
    edi = edi + 0x4; /* 0x1007F651: lea edi, [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1007F654: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x1007F656: mov eax, dword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1007F658: pop ecx */
    /* test eax, eax */ /* 0x1007F659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F64A; /* 0x1007F65B: jne 0x1007f64a */
L_1007F65D:
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1007F65D: mov dword ptr [ebp - 0x2c], ebx */
    ebx = MEM32(ebp + (-0x40)); /* 0x1007F660: mov ebx, dword ptr [ebp - 0x40] */
L_1007F663:
    PUSH32(esp, 1); /* 0x1007F663: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1007F665: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_10011208); /* 0x1007F668: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F66D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F66E: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1007F66F: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = eax; /* 0x1007F672: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x1007F674: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F69C; /* 0x1007F676: jne 0x1007f69c */
L_1007F678:
    eax = MEM32(ebp + (-0x14)); /* 0x1007F678: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007F67B: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1007F67E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007F683: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x1007F689: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x1007F68E: mov dword ptr [eax], 8 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007F694: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F995; /* 0x1007F697: jmp 0x1007f995 */
L_1007F69C:
    eax = ebp + (-0x10); /* 0x1007F69C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007F69F: push eax */
    eax = ebp + (-0x28); /* 0x1007F6A0: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1007F6A3: push 0 */
    PUSH32(esp, eax); /* 0x1007F6A5: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x1007F6A6: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F6AB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F6AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F6BD; /* 0x1007F6B0: je 0x1007f6bd */
L_1007F6B2:
    /* cmp eax, 0x16u */ /* 0x1007F6B2: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F6B5: je 0x1007f9a6 */
L_1007F6BB:
    goto L_1007F71E; /* 0x1007F6BB: jmp 0x1007f71e */
L_1007F6BD:
    eax = ebp + (-0x10); /* 0x1007F6BD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007F6C0: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007F6C1: call 0x100129af */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1007F6C6: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1007F6CA: pop ecx */
    edi = esi + eax; /* 0x1007F6CB: lea edi, [esi + eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F6DB; /* 0x1007F6CE: je 0x1007f6db */
L_1007F6D0:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007F6D0: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_100129AF); /* 0x1007F6D3: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F6D8: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1007F6D9: add edi, eax */
    _flag_k = FK_ADD;
L_1007F6DB:
    /* test ebx, ebx */ /* 0x1007F6DB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F82E; /* 0x1007F6DD: je 0x1007f82e */
L_1007F6E3:
    eax = MEM32(ebx); /* 0x1007F6E3: mov eax, dword ptr [ebx] */
    esi = ebx; /* 0x1007F6E5: mov esi, ebx */
    /* test eax, eax */ /* 0x1007F6E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F707; /* 0x1007F6E9: je 0x1007f707 */
L_1007F6EB:
    PUSH32(esp, 2); /* 0x1007F6EB: push 2 */
    ebx = POP32_VAL(esp); /* 0x1007F6ED: pop ebx */
L_1007F6EE:
    PUSH32(esp, eax); /* 0x1007F6EE: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007F6EF: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007F6F4: inc eax */
    _flag_k = FK_INC;
    esi = esi + 0x4; /* 0x1007F6F5: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1007F6F8: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1007F6FA: mov eax, dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x1007F6FC: pop ecx */
    /* test eax, eax */ /* 0x1007F6FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F6EE; /* 0x1007F6FF: jne 0x1007f6ee */
L_1007F701:
    MEM32(ebp + (-0x24)) = ebx; /* 0x1007F701: mov dword ptr [ebp - 0x24], ebx */
    ebx = MEM32(ebp + (-0x40)); /* 0x1007F704: mov ebx, dword ptr [ebp - 0x40] */
L_1007F707:
    eax = MEM32(0x100E0D64); /* 0x1007F707: mov eax, dword ptr [0x100e0d64] */
    /* test eax, eax */ /* 0x1007F70C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F73D; /* 0x1007F70E: jne 0x1007f73d */
L_1007F710:
    RECOMP_CALL(sub_1002CABB); /* 0x1007F710: call 0x1002cabb */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0D64) = eax; /* 0x1007F715: mov dword ptr [0x100e0d64], eax */
    /* test eax, eax */ /* 0x1007F71A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F73D; /* 0x1007F71C: jne 0x1007f73d */
L_1007F71E:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1007F71E: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007F721: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1007F724: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1007F727: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F729: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1007F72E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1007F731: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007F734: pop ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007F735: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007F96B; /* 0x1007F738: jmp 0x1007f96b */
L_1007F73D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007F73D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax), 0 */ /* 0x1007F73F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x34)) = esi; /* 0x1007F742: mov dword ptr [ebp - 0x34], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F76B; /* 0x1007F745: je 0x1007f76b */
L_1007F747:
    SET_LO8(ecx, MEM8(eax)); /* 0x1007F747: mov cl, byte ptr [eax] */
    edx = eax; /* 0x1007F749: mov edx, eax */
L_1007F74B:
    /* cmp LO8(ecx), 0x3Du */ /* 0x1007F74B: cmp cl, 0x3d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F768; /* 0x1007F74E: je 0x1007f768 */
L_1007F750:
    PUSH32(esp, edx); /* 0x1007F750: push edx */
    RECOMP_CALL(sub_100129AF); /* 0x1007F751: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007F756: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1007F757: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x100E0D64); /* 0x1007F759: mov eax, dword ptr [0x100e0d64] */
    ecx = POP32_VAL(esp); /* 0x1007F75E: pop ecx */
    edx = eax + esi; /* 0x1007F75F: lea edx, [eax + esi] */
    SET_LO8(ecx, MEM8(edx)); /* 0x1007F762: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1007F764: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F74B; /* 0x1007F766: jne 0x1007f74b */
L_1007F768:
    MEM32(ebp + (-0x34)) = esi; /* 0x1007F768: mov dword ptr [ebp - 0x34], esi */
L_1007F76B:
    ecx = esi; /* 0x1007F76B: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1007F76D: add eax, esi */
    _flag_k = FK_ADD;
    goto L_1007F79C; /* 0x1007F76F: jmp 0x1007f79c */
L_1007F771:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x1007F771: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F7A4; /* 0x1007F775: je 0x1007f7a4 */
L_1007F777:
    /* cmp MEM8(eax + 0x2), 0x3Au */ /* 0x1007F777: cmp byte ptr [eax + 2], 0x3a */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F7A4; /* 0x1007F77B: jne 0x1007f7a4 */
L_1007F77D:
    /* cmp MEM8(eax + 0x3), 0x3Du */ /* 0x1007F77D: cmp byte ptr [eax + 3], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F7A4; /* 0x1007F781: jne 0x1007f7a4 */
L_1007F783:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007F783: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007F786: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007F787: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F78C: pop ecx */
    ecx = MEM32(ebp + (-0x30)); /* 0x1007F78D: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x1007F790: add ecx, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1007F793: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x100E0D64); /* 0x1007F795: mov eax, dword ptr [0x100e0d64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1007F79A: add eax, ecx */
    _flag_k = FK_ADD;
L_1007F79C:
    /* cmp MEM8(eax), 0x3Du */ /* 0x1007F79C: cmp byte ptr [eax], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x30)) = ecx; /* 0x1007F79F: mov dword ptr [ebp - 0x30], ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F771; /* 0x1007F7A2: je 0x1007f771 */
L_1007F7A4:
    eax = ecx; /* 0x1007F7A4: mov eax, ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1007F7A6: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1007F7A9: sub eax, esi */
    _flag_k = FK_CMP;
    esi = ebx; /* 0x1007F7AB: mov esi, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1007F7AD: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), 0 */ /* 0x1007F7AF: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1007F7B2: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1007F7B5: mov dword ptr [ebp - 0x3c], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F7E1; /* 0x1007F7B8: je 0x1007f7e1 */
L_1007F7BA:
    eax = ebp + (-0x10); /* 0x1007F7BA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007F7BD: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007F7BE: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007F7C3: push eax */
    eax = ebp + (-0x10); /* 0x1007F7C4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007F7C7: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1007F7C8: push dword ptr [esi] */
    RECOMP_CALL(sub_1008E0B4); /* 0x1007F7CA: call 0x1008e0b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007F7CF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F7D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F822; /* 0x1007F7D4: je 0x1007f822 */
L_1007F7D6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1007F7D6: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), 0 */ /* 0x1007F7D9: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F7BA; /* 0x1007F7DC: jne 0x1007f7ba */
L_1007F7DE:
    ecx = MEM32(ebp + (-0x24)); /* 0x1007F7DE: mov ecx, dword ptr [ebp - 0x24] */
L_1007F7E1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1007F7E1: add ecx, edi */
    _flag_k = FK_ADD;
L_1007F7E3:
    PUSH32(esp, 1); /* 0x1007F7E3: push 1 */
    PUSH32(esp, ecx); /* 0x1007F7E5: push ecx */
    RECOMP_CALL(sub_10011208); /* 0x1007F7E6: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F7EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007F7EC: pop ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1007F7ED: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ecx) = eax; /* 0x1007F7F0: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x1007F7F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F834; /* 0x1007F7F4: jne 0x1007f834 */
L_1007F7F6:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1007F7F6: mov ebx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebx)); /* 0x1007F7F9: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F7FB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1007F800: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007F803: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1007F804: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007F809: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x1007F80F: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1007F814: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 8; /* 0x1007F817: mov dword ptr [eax], 8 */
    goto L_1007F96E; /* 0x1007F81D: jmp 0x1007f96e */
L_1007F822:
    ecx = MEM32(ebp + (-0x24)); /* 0x1007F822: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x38)) = 1; /* 0x1007F825: mov dword ptr [ebp - 0x38], 1 */
    RECOMP_BACKEDGE();
    goto L_1007F7E3; /* 0x1007F82C: jmp 0x1007f7e3 */
L_1007F82E:
    eax = MEM32(ebp + (-0x14)); /* 0x1007F82E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007F831: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007F834:
    eax = MEM32(ebp + (-0x18)); /* 0x1007F834: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1007F837: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax), 0 */ /* 0x1007F83A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ecx); /* 0x1007F83D: mov esi, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F844; /* 0x1007F83F: jne 0x1007f844 */
L_1007F841:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007F841: inc esi */
    _flag_k = FK_INC;
    goto L_1007F8AB; /* 0x1007F842: jmp 0x1007f8ab */
L_1007F844:
    PUSH32(esp, MEM32(eax)); /* 0x1007F844: push dword ptr [eax] */
    eax = esi; /* 0x1007F846: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1007F848: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1007F84A: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007F84D: push eax */
    PUSH32(esp, esi); /* 0x1007F84E: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1007F84F: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F854: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F857: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F859: jne 0x1007f9a6 */
L_1007F85F:
    eax = MEM32(ebp + (-0x18)); /* 0x1007F85F: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(eax)); /* 0x1007F862: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1007F864: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007F869: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1007F86A: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1007F86C: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007F86F: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1007F8A4; /* 0x1007F872: jmp 0x1007f8a4 */
L_1007F874:
    PUSH32(esp, eax); /* 0x1007F874: push eax */
    eax = MEM32(ecx); /* 0x1007F875: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1007F877: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1007F879: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007F87C: push eax */
    PUSH32(esp, esi); /* 0x1007F87D: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1007F87E: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F883: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F886: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F888: jne 0x1007f9a6 */
L_1007F88E:
    eax = MEM32(ebp + (-0x18)); /* 0x1007F88E: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(eax)); /* 0x1007F891: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1007F893: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1007F898: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1007F89A: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007F89D: add eax, 4 */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1007F8A0: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007F8A3: inc esi */
    _flag_k = FK_INC;
L_1007F8A4:
    ecx = POP32_VAL(esp); /* 0x1007F8A4: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1007F8A5: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1007F8A8: mov dword ptr [ebp - 0x18], eax */
L_1007F8AB:
    eax = MEM32(eax); /* 0x1007F8AB: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1007F8AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F874; /* 0x1007F8AF: jne 0x1007f874 */
L_1007F8B1:
    MEM16(esi + (-0x1)) = (uint16_t)(LO16(eax)); /* 0x1007F8B1: mov word ptr [esi - 1], ax */
    eax = MEM32(ebp + (-0x14)); /* 0x1007F8B5: mov eax, dword ptr [ebp - 0x14] */
    esi = MEM32(eax); /* 0x1007F8B8: mov esi, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x1007F8BA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F95C; /* 0x1007F8BC: je 0x1007f95c */
L_1007F8C2:
    eax = MEM32(ebp + (-0x30)); /* 0x1007F8C2: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x34)); /* 0x1007F8C5: sub eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1007F8C8: push eax */
    eax = MEM32(0x100E0D64); /* 0x1007F8C9: mov eax, dword ptr [0x100e0d64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x1007F8CE: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007F8D1: push eax */
    PUSH32(esp, esi); /* 0x1007F8D2: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x1007F8D3: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1007F8D8: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F8DB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x34)); /* 0x1007F8DE: sub eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1007F8E1: add esi, eax */
    _flag_k = FK_ADD;
    goto L_1007F911; /* 0x1007F8E3: jmp 0x1007f911 */
L_1007F8E5:
    ecx = MEM32(ebp + (-0x14)); /* 0x1007F8E5: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x3C)); /* 0x1007F8E8: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebx)); /* 0x1007F8EB: push dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1007F8ED: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x1007F8EF: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007F8F1: push eax */
    PUSH32(esp, esi); /* 0x1007F8F2: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1007F8F3: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F8F8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F8FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F8FD: jne 0x1007f9a6 */
L_1007F903:
    PUSH32(esp, MEM32(ebx)); /* 0x1007F903: push dword ptr [ebx] */
    RECOMP_CALL(sub_100129AF); /* 0x1007F905: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007F90A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1007F90B: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1007F90D: add ebx, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1007F910: pop ecx */
L_1007F911:
    /* cmp MEM32(ebx), 0 */ /* 0x1007F911: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F8E5; /* 0x1007F914: jne 0x1007f8e5 */
L_1007F916:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1007F916: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F959; /* 0x1007F91A: jne 0x1007f959 */
L_1007F91C:
    eax = ebp + (-0x10); /* 0x1007F91C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007F91F: push eax */
    PUSH32(esp, edi); /* 0x1007F920: push edi */
    PUSH32(esp, esi); /* 0x1007F921: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1007F922: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F927: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F92A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F92C: jne 0x1007f9a6 */
L_1007F92E:
    PUSH32(esp, 0x1007F9C0u); /* 0x1007F92E: push 0x1007f9c0 */
    PUSH32(esp, edi); /* 0x1007F933: push edi */
    PUSH32(esp, esi); /* 0x1007F934: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x1007F935: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F93A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F93D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F93F: jne 0x1007f9a6 */
L_1007F941:
    eax = MEM32(ebp + (-0x28)); /* 0x1007F941: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1007F944: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F957; /* 0x1007F946: je 0x1007f957 */
L_1007F948:
    PUSH32(esp, eax); /* 0x1007F948: push eax */
    PUSH32(esp, edi); /* 0x1007F949: push edi */
    PUSH32(esp, esi); /* 0x1007F94A: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x1007F94B: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007F950: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007F953: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007F9A6; /* 0x1007F955: jne 0x1007f9a6 */
L_1007F957:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1007F957: add esi, edi */
    _flag_k = FK_ADD;
L_1007F959:
    eax = MEM32(ebp + (-0x14)); /* 0x1007F959: mov eax, dword ptr [ebp - 0x14] */
L_1007F95C:
    /* test esi, esi */ /* 0x1007F95C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F96B; /* 0x1007F95E: je 0x1007f96b */
L_1007F960:
    /* cmp esi, MEM32(eax) */ /* 0x1007F960: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F968; /* 0x1007F962: jne 0x1007f968 */
L_1007F964:
    MEM8(esi) = (uint8_t)(0); /* 0x1007F964: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007F967: inc esi */
    _flag_k = FK_INC;
L_1007F968:
    MEM8(esi) = (uint8_t)(0); /* 0x1007F968: mov byte ptr [esi], 0 */
L_1007F96B:
    ebx = MEM32(ebp + (-0x20)); /* 0x1007F96B: mov ebx, dword ptr [ebp - 0x20] */
L_1007F96E:
    eax = MEM32(0x100E0D64); /* 0x1007F96E: mov eax, dword ptr [0x100e0d64] */
    /* test eax, eax */ /* 0x1007F973: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F97E; /* 0x1007F975: je 0x1007f97e */
L_1007F977:
    PUSH32(esp, eax); /* 0x1007F977: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F978: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F97D: pop ecx */
L_1007F97E:
    _flag_a = (uint32_t)(MEM32(0x100E0D64)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0D64) = MEM32(0x100E0D64) & 0; /* 0x1007F97E: and dword ptr [0x100e0d64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x28)); /* 0x1007F985: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1007F988: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F993; /* 0x1007F98A: je 0x1007f993 */
L_1007F98C:
    PUSH32(esp, eax); /* 0x1007F98C: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007F98D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007F992: pop ecx */
L_1007F993:
    eax = ebx; /* 0x1007F993: mov eax, ebx */
L_1007F995:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007F995: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007F998: pop edi */
    esi = POP32_VAL(esp); /* 0x1007F999: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007F99A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1007F99C: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007F99D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007F9A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007F9A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007F9A5: ret  */
L_1007F9A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007F9A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007F9A8: push eax */
    PUSH32(esp, eax); /* 0x1007F9A9: push eax */
    PUSH32(esp, eax); /* 0x1007F9AA: push eax */
    PUSH32(esp, eax); /* 0x1007F9AB: push eax */
    PUSH32(esp, eax); /* 0x1007F9AC: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1007F9AD: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007F9B2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007F9B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F9B4u);

L_1007F9B4:
    PUSH32(esp, ebx); /* 0x1007F9B4: push ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_1007FA2A; /* 0x1007F9B5: jns 0x1007fa2a */
L_1007F9B7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1007FA1E; /* 0x1007F9B7: je 0x1007fa1e */
L_1007F9B9:
    void_lift_trap(0x1007F9B9u, "insd dword ptr es:[edi], dx");
    PUSH32(esp, edx); /* 0x1007F9BA: push edx */
    /* outsd: no port I/O under Win32 */ /* 0x1007F9BB: outsd dx, dword ptr [esi] */
    /* outsd: no port I/O under Win32 */ /* 0x1007F9BC: outsd dx, dword ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1007F9BF; /* 0x1007F9BD: je 0x1007f9bf */
L_1007F9BF:
    /* nop */ /* 0x1007F9BF: nop  */
    /* cmp eax, 0xEC8B5500u */ /* 0x1007F9C0: cmp eax, 0xec8b5500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEC8B5500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x1007F9C5: sub esp, 0x6c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007F9C8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F9C9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007F9CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007F9CC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007F9CF: mov dword ptr [ebp - 0xc], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1007F9D2: mov byte ptr [ebp - 1], bl */
    /* test edi, edi */ /* 0x1007F9D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9D7: je 0x1007f9ee */
L_1007F9D9:
    /* cmp edi, 1 */ /* 0x1007F9D9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9DC: je 0x1007f9ee */
L_1007F9DE:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9DE: jle 0x1007f9f6 */
L_1007F9E0:
    /* cmp edi, 3 */ /* 0x1007F9E0: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9E3: jle 0x1007f9ee */
L_1007F9E5:
    /* cmp edi, 4 */ /* 0x1007F9E5: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9E8: jne 0x1007f9f6 */
L_1007F9EA:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1007F9EA: mov byte ptr [ebp - 1], 1 */
L_1007F9EE:
    eax = MEM32(ebp + 0x10); /* 0x1007F9EE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1007F9F1: mov dword ptr [ebp - 0x14], eax */
    goto L_1007FA23; /* 0x1007F9F4: jmp 0x1007fa23 */
L_1007F9F6:
    RECOMP_CALL(sub_1001E471); /* 0x1007F9F6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007F9FB: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1007F9FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FA02: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FA08: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FA0D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FBCD; /* 0x1007FA10: jmp 0x1007fbcd */
L_1007FA15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA15: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA16: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA18: jne 0x1007fa15 */
L_1007FA1A:
    /* cmp MEM8(eax + 0x1), LO8(ebx) */ /* 0x1007FA1A: cmp byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FA23; /* 0x1007FA1D: je 0x1007fa23 */
    goto L_1007FA1F; /* falls through past a gap */
L_1007FA1E:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC6u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xC6u); /* 0x1007FA1E: add al, 0xc6 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1007FA20; /* falls through past a gap */
L_1007FA1F:
    MEM8(eax) = (uint8_t)(0x20u); /* 0x1007FA1F: mov byte ptr [eax], 0x20 */
    goto L_1007FA22; /* falls through past a gap */
L_1007FA20:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x1007FA20: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1007FA22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA22: inc eax */
    _flag_k = FK_INC;
L_1007FA23:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA23: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA25: jne 0x1007fa15 */
L_1007FA27:
    PUSH32(esp, esi); /* 0x1007FA27: push esi */
    PUSH32(esp, 0x44u); /* 0x1007FA28: push 0x44 */
L_1007FA2A:
    esi = POP32_VAL(esp); /* 0x1007FA2A: pop esi */
    PUSH32(esp, esi); /* 0x1007FA2B: push esi */
    eax = ebp + (-0x6C); /* 0x1007FA2C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x1007FA2F: push ebx */
    PUSH32(esp, eax); /* 0x1007FA30: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007FA31: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = esi; /* 0x1007FA36: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FA39: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x100DFDD8); /* 0x1007FA3C: mov esi, dword ptr [0x100dfdd8] */
    /* test esi, esi */ /* 0x1007FA42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FA69; /* 0x1007FA44: je 0x1007fa69 */
L_1007FA46:
    edx = esi + (-0x1); /* 0x1007FA46: lea edx, [esi - 1] */
L_1007FA49:
    eax = edx; /* 0x1007FA49: mov eax, edx */
    ecx = edx; /* 0x1007FA4B: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FA4D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FA50: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FA53: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FA53: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1007FA56: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x1007FA5D: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA67; /* 0x1007FA61: jne 0x1007fa67 */
L_1007FA63:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007FA63: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007FA64: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007FA49; /* 0x1007FA65: jne 0x1007fa49 */
L_1007FA67:
    /* test esi, esi */ /* 0x1007FA67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FA69:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1007FBBE; /* 0x1007FA69: js 0x1007fbbe */
L_1007FA6F:
    /* cmp esi, 0x3332u */ /* 0x1007FA6F: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA75: jae 0x1007fbbe */
L_1007FA7B:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x1007FA7B: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x1007FA7E: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FA80: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x3A)) = (uint16_t)(LO16(eax)); /* 0x1007FA83: mov word ptr [ebp - 0x3a], ax */
    eax = (uint32_t)LO16(eax); /* 0x1007FA87: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1007FA8A: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007FA8B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x1007FA90: mov dword ptr [ebp - 0x38], eax */
    ecx = POP32_VAL(esp); /* 0x1007FA93: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FA94: pop ecx */
    /* test eax, eax */ /* 0x1007FA95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA97: je 0x1007fbbe */
L_1007FA9D:
    MEM32(eax) = esi; /* 0x1007FA9D: mov dword ptr [eax], esi */
    edx = ebx; /* 0x1007FA9F: mov edx, ebx */
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAA1: mov eax, dword ptr [ebp - 0x38] */
    ecx = eax + 0x4; /* 0x1007FAA4: lea ecx, [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007FAA7: mov dword ptr [ebp - 0x10], ecx */
    ecx = eax + 0x4; /* 0x1007FAAA: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1007FAAD: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1007FAAF: mov dword ptr [ebp - 8], ecx */
    /* test esi, esi */ /* 0x1007FAB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007FAFB; /* 0x1007FAB4: jle 0x1007fafb */
L_1007FAB6:
    edi = MEM32(ebp + (-0x10)); /* 0x1007FAB6: mov edi, dword ptr [ebp - 0x10] */
L_1007FAB9:
    eax = edx; /* 0x1007FAB9: mov eax, edx */
    ecx = edx; /* 0x1007FABB: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FABD: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FAC0: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FAC3: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FAC3: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1007FAC6: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x1007FACD: mov al, byte ptr [ecx + 4] */
    /* test LO8(eax), 0x10u */ /* 0x1007FAD0: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FAE1; /* 0x1007FAD2: jne 0x1007fae1 */
L_1007FAD4:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1007FAD4: mov byte ptr [edi], al */
    eax = MEM32(ecx); /* 0x1007FAD6: mov eax, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007FAD8: mov ecx, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x1007FADB: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1007FADD: mov eax, ecx */
    goto L_1007FAE9; /* 0x1007FADF: jmp 0x1007fae9 */
L_1007FAE1:
    eax = MEM32(ebp + (-0x8)); /* 0x1007FAE1: mov eax, dword ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1007FAE4: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FAE6: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FAE9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FAE9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FAEA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007FAED: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1007FAEE: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x1007FAF1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FAB9; /* 0x1007FAF3: jl 0x1007fab9 */
L_1007FAF5:
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAF5: mov eax, dword ptr [ebp - 0x38] */
    edi = MEM32(ebp + 0x8); /* 0x1007FAF8: mov edi, dword ptr [ebp + 8] */
L_1007FAFB:
    /* cmp MEM8(ebp + (-0x1)), LO8(ebx) */ /* 0x1007FAFB: cmp byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FB31; /* 0x1007FAFE: je 0x1007fb31 */
L_1007FB00:
    edx = eax + 0x4; /* 0x1007FB00: lea edx, [eax + 4] */
    ecx = ebx; /* 0x1007FB03: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB05: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1007FB08: add eax, esi */
    _flag_k = FK_ADD;
L_1007FB0A:
    MEM32(ebp + 0x8) = esi; /* 0x1007FB0A: mov dword ptr [ebp + 8], esi */
    /* cmp esi, 3 */ /* 0x1007FB0D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FB19; /* 0x1007FB10: jl 0x1007fb19 */
L_1007FB12:
    MEM32(ebp + 0x8) = 3; /* 0x1007FB12: mov dword ptr [ebp + 8], 3 */
L_1007FB19:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1007FB19: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007FB2A; /* 0x1007FB1C: jge 0x1007fb2a */
L_1007FB1E:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1007FB1E: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FB20: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007FB23: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FB24: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB25: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1007FB0A; /* 0x1007FB28: jmp 0x1007fb0a */
L_1007FB2A:
    MEM32(ebp + (-0xC)) = 8; /* 0x1007FB2A: mov dword ptr [ebp - 0xc], 8 */
L_1007FB31:
    RECOMP_CALL(sub_1001E471); /* 0x1007FB31: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007FB36: mov dword ptr [eax], ebx */
    eax = ebp + (-0x28); /* 0x1007FB38: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1007FB3B: push eax */
    eax = ebp + (-0x6C); /* 0x1007FB3C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1007FB3F: push eax */
    PUSH32(esp, ebx); /* 0x1007FB40: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007FB41: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1007FB44: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x1007FB47: push 1 */
    PUSH32(esp, ebx); /* 0x1007FB49: push ebx */
    PUSH32(esp, ebx); /* 0x1007FB4A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1007FB4B: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FB4E: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x100E50EC)); /* 0x1007FB51: call dword ptr [0x100e50ec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007FB57: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007FB59: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1007FB5F: push dword ptr [ebp - 0x38] */
    MEM32(ebp + 0x8) = eax; /* 0x1007FB62: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FB65: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB6A: pop ecx */
    /* test esi, esi */ /* 0x1007FB6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FB7A; /* 0x1007FB6D: jne 0x1007fb7a */
L_1007FB6F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FB6F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007FB72: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB77: pop ecx */
    goto L_1007FBC9; /* 0x1007FB78: jmp 0x1007fbc9 */
L_1007FB7A:
    /* cmp edi, 2 */ /* 0x1007FB7A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FBD3; /* 0x1007FB7D: je 0x1007fbd3 */
L_1007FB7F:
    esi = MEM32(0x100E5074); /* 0x1007FB7F: mov esi, dword ptr [0x100e5074] */
    /* test edi, edi */ /* 0x1007FB85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FBA6; /* 0x1007FB87: jne 0x1007fba6 */
L_1007FB89:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007FB89: push -1 */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB8B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x1007FB8E: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1007FB94: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1007FB97: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB98: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x1007FB9B: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x18)); /* 0x1007FBA1: mov ebx, dword ptr [ebp - 0x18] */
    goto L_1007FBAB; /* 0x1007FBA4: jmp 0x1007fbab */
L_1007FBA6:
    /* cmp edi, 4 */ /* 0x1007FBA6: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FBB2; /* 0x1007FBA9: jne 0x1007fbb2 */
L_1007FBAB:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FBAB: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x1007FBAE: call esi */
    RECOMP_FLAGS_IN();
    goto L_1007FBB5; /* 0x1007FBB0: jmp 0x1007fbb5 */
L_1007FBB2:
    ebx = MEM32(ebp + (-0x28)); /* 0x1007FBB2: mov ebx, dword ptr [ebp - 0x28] */
L_1007FBB5:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1007FBB5: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(esi); /* 0x1007FBB8: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1007FBBA: mov eax, ebx */
    goto L_1007FBCC; /* 0x1007FBBC: jmp 0x1007fbcc */
L_1007FBBE:
    RECOMP_CALL(sub_1001177D); /* 0x1007FBBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007FBC3: mov dword ptr [eax], 0xc */
L_1007FBC9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FBC9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FBCC:
    esi = POP32_VAL(esp); /* 0x1007FBCC: pop esi */
L_1007FBCD:
    edi = POP32_VAL(esp); /* 0x1007FBCD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007FBCE: pop ebx */
    esp = ebp; /* 0x1007FBCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007FBD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FBD2: ret  */
L_1007FBD3:
    PUSH32(esp, ebx); /* 0x1007FBD3: push ebx */
    RECOMP_CALL(sub_1007BBB8); /* 0x1007FBD4: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007FBD9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007F9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F9C0u);

L_1007F9C0:
    /* cmp eax, 0xEC8B5500u */ /* 0x1007F9C0: cmp eax, 0xec8b5500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEC8B5500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x1007F9C5: sub esp, 0x6c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007F9C8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F9C9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007F9CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007F9CC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007F9CF: mov dword ptr [ebp - 0xc], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1007F9D2: mov byte ptr [ebp - 1], bl */
    /* test edi, edi */ /* 0x1007F9D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9D7: je 0x1007f9ee */
L_1007F9D9:
    /* cmp edi, 1 */ /* 0x1007F9D9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9DC: je 0x1007f9ee */
L_1007F9DE:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9DE: jle 0x1007f9f6 */
L_1007F9E0:
    /* cmp edi, 3 */ /* 0x1007F9E0: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9E3: jle 0x1007f9ee */
L_1007F9E5:
    /* cmp edi, 4 */ /* 0x1007F9E5: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9E8: jne 0x1007f9f6 */
L_1007F9EA:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1007F9EA: mov byte ptr [ebp - 1], 1 */
L_1007F9EE:
    eax = MEM32(ebp + 0x10); /* 0x1007F9EE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1007F9F1: mov dword ptr [ebp - 0x14], eax */
    goto L_1007FA23; /* 0x1007F9F4: jmp 0x1007fa23 */
L_1007F9F6:
    RECOMP_CALL(sub_1001E471); /* 0x1007F9F6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007F9FB: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1007F9FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FA02: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FA08: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FA0D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FBCD; /* 0x1007FA10: jmp 0x1007fbcd */
L_1007FA15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA15: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA16: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA18: jne 0x1007fa15 */
L_1007FA1A:
    /* cmp MEM8(eax + 0x1), LO8(ebx) */ /* 0x1007FA1A: cmp byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FA23; /* 0x1007FA1D: je 0x1007fa23 */
L_1007FA1F:
    MEM8(eax) = (uint8_t)(0x20u); /* 0x1007FA1F: mov byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA22: inc eax */
    _flag_k = FK_INC;
L_1007FA23:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA23: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA25: jne 0x1007fa15 */
L_1007FA27:
    PUSH32(esp, esi); /* 0x1007FA27: push esi */
    PUSH32(esp, 0x44u); /* 0x1007FA28: push 0x44 */
    esi = POP32_VAL(esp); /* 0x1007FA2A: pop esi */
    PUSH32(esp, esi); /* 0x1007FA2B: push esi */
    eax = ebp + (-0x6C); /* 0x1007FA2C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x1007FA2F: push ebx */
    PUSH32(esp, eax); /* 0x1007FA30: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007FA31: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = esi; /* 0x1007FA36: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FA39: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x100DFDD8); /* 0x1007FA3C: mov esi, dword ptr [0x100dfdd8] */
    /* test esi, esi */ /* 0x1007FA42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FA69; /* 0x1007FA44: je 0x1007fa69 */
L_1007FA46:
    edx = esi + (-0x1); /* 0x1007FA46: lea edx, [esi - 1] */
L_1007FA49:
    eax = edx; /* 0x1007FA49: mov eax, edx */
    ecx = edx; /* 0x1007FA4B: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FA4D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FA50: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FA53: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FA53: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1007FA56: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x1007FA5D: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA67; /* 0x1007FA61: jne 0x1007fa67 */
L_1007FA63:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007FA63: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007FA64: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007FA49; /* 0x1007FA65: jne 0x1007fa49 */
L_1007FA67:
    /* test esi, esi */ /* 0x1007FA67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FA69:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1007FBBE; /* 0x1007FA69: js 0x1007fbbe */
L_1007FA6F:
    /* cmp esi, 0x3332u */ /* 0x1007FA6F: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA75: jae 0x1007fbbe */
L_1007FA7B:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x1007FA7B: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x1007FA7E: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FA80: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x3A)) = (uint16_t)(LO16(eax)); /* 0x1007FA83: mov word ptr [ebp - 0x3a], ax */
    eax = (uint32_t)LO16(eax); /* 0x1007FA87: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1007FA8A: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007FA8B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x1007FA90: mov dword ptr [ebp - 0x38], eax */
    ecx = POP32_VAL(esp); /* 0x1007FA93: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FA94: pop ecx */
    /* test eax, eax */ /* 0x1007FA95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA97: je 0x1007fbbe */
L_1007FA9D:
    MEM32(eax) = esi; /* 0x1007FA9D: mov dword ptr [eax], esi */
    edx = ebx; /* 0x1007FA9F: mov edx, ebx */
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAA1: mov eax, dword ptr [ebp - 0x38] */
    ecx = eax + 0x4; /* 0x1007FAA4: lea ecx, [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007FAA7: mov dword ptr [ebp - 0x10], ecx */
    ecx = eax + 0x4; /* 0x1007FAAA: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1007FAAD: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1007FAAF: mov dword ptr [ebp - 8], ecx */
    /* test esi, esi */ /* 0x1007FAB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007FAFB; /* 0x1007FAB4: jle 0x1007fafb */
L_1007FAB6:
    edi = MEM32(ebp + (-0x10)); /* 0x1007FAB6: mov edi, dword ptr [ebp - 0x10] */
L_1007FAB9:
    eax = edx; /* 0x1007FAB9: mov eax, edx */
    ecx = edx; /* 0x1007FABB: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FABD: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FAC0: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FAC3: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FAC3: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1007FAC6: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x1007FACD: mov al, byte ptr [ecx + 4] */
    /* test LO8(eax), 0x10u */ /* 0x1007FAD0: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FAE1; /* 0x1007FAD2: jne 0x1007fae1 */
L_1007FAD4:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1007FAD4: mov byte ptr [edi], al */
    eax = MEM32(ecx); /* 0x1007FAD6: mov eax, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007FAD8: mov ecx, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x1007FADB: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1007FADD: mov eax, ecx */
    goto L_1007FAE9; /* 0x1007FADF: jmp 0x1007fae9 */
L_1007FAE1:
    eax = MEM32(ebp + (-0x8)); /* 0x1007FAE1: mov eax, dword ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1007FAE4: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FAE6: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FAE9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FAE9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FAEA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007FAED: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1007FAEE: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x1007FAF1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FAB9; /* 0x1007FAF3: jl 0x1007fab9 */
L_1007FAF5:
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAF5: mov eax, dword ptr [ebp - 0x38] */
    edi = MEM32(ebp + 0x8); /* 0x1007FAF8: mov edi, dword ptr [ebp + 8] */
L_1007FAFB:
    /* cmp MEM8(ebp + (-0x1)), LO8(ebx) */ /* 0x1007FAFB: cmp byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FB31; /* 0x1007FAFE: je 0x1007fb31 */
L_1007FB00:
    edx = eax + 0x4; /* 0x1007FB00: lea edx, [eax + 4] */
    ecx = ebx; /* 0x1007FB03: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB05: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1007FB08: add eax, esi */
    _flag_k = FK_ADD;
L_1007FB0A:
    MEM32(ebp + 0x8) = esi; /* 0x1007FB0A: mov dword ptr [ebp + 8], esi */
    /* cmp esi, 3 */ /* 0x1007FB0D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FB19; /* 0x1007FB10: jl 0x1007fb19 */
L_1007FB12:
    MEM32(ebp + 0x8) = 3; /* 0x1007FB12: mov dword ptr [ebp + 8], 3 */
L_1007FB19:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1007FB19: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007FB2A; /* 0x1007FB1C: jge 0x1007fb2a */
L_1007FB1E:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1007FB1E: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FB20: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007FB23: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FB24: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB25: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1007FB0A; /* 0x1007FB28: jmp 0x1007fb0a */
L_1007FB2A:
    MEM32(ebp + (-0xC)) = 8; /* 0x1007FB2A: mov dword ptr [ebp - 0xc], 8 */
L_1007FB31:
    RECOMP_CALL(sub_1001E471); /* 0x1007FB31: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007FB36: mov dword ptr [eax], ebx */
    eax = ebp + (-0x28); /* 0x1007FB38: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1007FB3B: push eax */
    eax = ebp + (-0x6C); /* 0x1007FB3C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1007FB3F: push eax */
    PUSH32(esp, ebx); /* 0x1007FB40: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007FB41: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1007FB44: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x1007FB47: push 1 */
    PUSH32(esp, ebx); /* 0x1007FB49: push ebx */
    PUSH32(esp, ebx); /* 0x1007FB4A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1007FB4B: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FB4E: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x100E50EC)); /* 0x1007FB51: call dword ptr [0x100e50ec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007FB57: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007FB59: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1007FB5F: push dword ptr [ebp - 0x38] */
    MEM32(ebp + 0x8) = eax; /* 0x1007FB62: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FB65: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB6A: pop ecx */
    /* test esi, esi */ /* 0x1007FB6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FB7A; /* 0x1007FB6D: jne 0x1007fb7a */
L_1007FB6F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FB6F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007FB72: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB77: pop ecx */
    goto L_1007FBC9; /* 0x1007FB78: jmp 0x1007fbc9 */
L_1007FB7A:
    /* cmp edi, 2 */ /* 0x1007FB7A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FBD3; /* 0x1007FB7D: je 0x1007fbd3 */
L_1007FB7F:
    esi = MEM32(0x100E5074); /* 0x1007FB7F: mov esi, dword ptr [0x100e5074] */
    /* test edi, edi */ /* 0x1007FB85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FBA6; /* 0x1007FB87: jne 0x1007fba6 */
L_1007FB89:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007FB89: push -1 */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB8B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x1007FB8E: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1007FB94: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1007FB97: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB98: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x1007FB9B: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x18)); /* 0x1007FBA1: mov ebx, dword ptr [ebp - 0x18] */
    goto L_1007FBAB; /* 0x1007FBA4: jmp 0x1007fbab */
L_1007FBA6:
    /* cmp edi, 4 */ /* 0x1007FBA6: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FBB2; /* 0x1007FBA9: jne 0x1007fbb2 */
L_1007FBAB:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FBAB: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x1007FBAE: call esi */
    RECOMP_FLAGS_IN();
    goto L_1007FBB5; /* 0x1007FBB0: jmp 0x1007fbb5 */
L_1007FBB2:
    ebx = MEM32(ebp + (-0x28)); /* 0x1007FBB2: mov ebx, dword ptr [ebp - 0x28] */
L_1007FBB5:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1007FBB5: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(esi); /* 0x1007FBB8: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1007FBBA: mov eax, ebx */
    goto L_1007FBCC; /* 0x1007FBBC: jmp 0x1007fbcc */
L_1007FBBE:
    RECOMP_CALL(sub_1001177D); /* 0x1007FBBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007FBC3: mov dword ptr [eax], 0xc */
L_1007FBC9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FBC9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FBCC:
    esi = POP32_VAL(esp); /* 0x1007FBCC: pop esi */
L_1007FBCD:
    edi = POP32_VAL(esp); /* 0x1007FBCD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007FBCE: pop ebx */
    esp = ebp; /* 0x1007FBCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007FBD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FBD2: ret  */
L_1007FBD3:
    PUSH32(esp, ebx); /* 0x1007FBD3: push ebx */
    RECOMP_CALL(sub_1007BBB8); /* 0x1007FBD4: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007FBD9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007F9C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007F9C2u);

L_1007F9C2:
    PUSH32(esp, ebp); /* 0x1007F9C2: push ebp */
    ebp = esp; /* 0x1007F9C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x1007F9C5: sub esp, 0x6c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007F9C8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007F9C9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007F9CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007F9CC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007F9CF: mov dword ptr [ebp - 0xc], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1007F9D2: mov byte ptr [ebp - 1], bl */
    /* test edi, edi */ /* 0x1007F9D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9D7: je 0x1007f9ee */
L_1007F9D9:
    /* cmp edi, 1 */ /* 0x1007F9D9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9DC: je 0x1007f9ee */
L_1007F9DE:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9DE: jle 0x1007f9f6 */
L_1007F9E0:
    /* cmp edi, 3 */ /* 0x1007F9E0: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007F9EE; /* 0x1007F9E3: jle 0x1007f9ee */
L_1007F9E5:
    /* cmp edi, 4 */ /* 0x1007F9E5: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007F9F6; /* 0x1007F9E8: jne 0x1007f9f6 */
L_1007F9EA:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1007F9EA: mov byte ptr [ebp - 1], 1 */
L_1007F9EE:
    eax = MEM32(ebp + 0x10); /* 0x1007F9EE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1007F9F1: mov dword ptr [ebp - 0x14], eax */
    goto L_1007FA23; /* 0x1007F9F4: jmp 0x1007fa23 */
L_1007F9F6:
    RECOMP_CALL(sub_1001E471); /* 0x1007F9F6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007F9FB: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1007F9FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FA02: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FA08: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FA0D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FBCD; /* 0x1007FA10: jmp 0x1007fbcd */
L_1007FA15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA15: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA16: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA18: jne 0x1007fa15 */
L_1007FA1A:
    /* cmp MEM8(eax + 0x1), LO8(ebx) */ /* 0x1007FA1A: cmp byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FA23; /* 0x1007FA1D: je 0x1007fa23 */
L_1007FA1F:
    MEM8(eax) = (uint8_t)(0x20u); /* 0x1007FA1F: mov byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007FA22: inc eax */
    _flag_k = FK_INC;
L_1007FA23:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1007FA23: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA15; /* 0x1007FA25: jne 0x1007fa15 */
L_1007FA27:
    PUSH32(esp, esi); /* 0x1007FA27: push esi */
    PUSH32(esp, 0x44u); /* 0x1007FA28: push 0x44 */
    esi = POP32_VAL(esp); /* 0x1007FA2A: pop esi */
    PUSH32(esp, esi); /* 0x1007FA2B: push esi */
    eax = ebp + (-0x6C); /* 0x1007FA2C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x1007FA2F: push ebx */
    PUSH32(esp, eax); /* 0x1007FA30: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007FA31: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = esi; /* 0x1007FA36: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FA39: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x100DFDD8); /* 0x1007FA3C: mov esi, dword ptr [0x100dfdd8] */
    /* test esi, esi */ /* 0x1007FA42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FA69; /* 0x1007FA44: je 0x1007fa69 */
L_1007FA46:
    edx = esi + (-0x1); /* 0x1007FA46: lea edx, [esi - 1] */
L_1007FA49:
    eax = edx; /* 0x1007FA49: mov eax, edx */
    ecx = edx; /* 0x1007FA4B: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FA4D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FA50: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FA53: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FA53: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1007FA56: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x1007FA5D: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FA67; /* 0x1007FA61: jne 0x1007fa67 */
L_1007FA63:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007FA63: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007FA64: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007FA49; /* 0x1007FA65: jne 0x1007fa49 */
L_1007FA67:
    /* test esi, esi */ /* 0x1007FA67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FA69:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1007FBBE; /* 0x1007FA69: js 0x1007fbbe */
L_1007FA6F:
    /* cmp esi, 0x3332u */ /* 0x1007FA6F: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA75: jae 0x1007fbbe */
L_1007FA7B:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x1007FA7B: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x1007FA7E: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FA80: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x3A)) = (uint16_t)(LO16(eax)); /* 0x1007FA83: mov word ptr [ebp - 0x3a], ax */
    eax = (uint32_t)LO16(eax); /* 0x1007FA87: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1007FA8A: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007FA8B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x1007FA90: mov dword ptr [ebp - 0x38], eax */
    ecx = POP32_VAL(esp); /* 0x1007FA93: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FA94: pop ecx */
    /* test eax, eax */ /* 0x1007FA95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FBBE; /* 0x1007FA97: je 0x1007fbbe */
L_1007FA9D:
    MEM32(eax) = esi; /* 0x1007FA9D: mov dword ptr [eax], esi */
    edx = ebx; /* 0x1007FA9F: mov edx, ebx */
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAA1: mov eax, dword ptr [ebp - 0x38] */
    ecx = eax + 0x4; /* 0x1007FAA4: lea ecx, [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007FAA7: mov dword ptr [ebp - 0x10], ecx */
    ecx = eax + 0x4; /* 0x1007FAAA: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1007FAAD: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1007FAAF: mov dword ptr [ebp - 8], ecx */
    /* test esi, esi */ /* 0x1007FAB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007FAFB; /* 0x1007FAB4: jle 0x1007fafb */
L_1007FAB6:
    edi = MEM32(ebp + (-0x10)); /* 0x1007FAB6: mov edi, dword ptr [ebp - 0x10] */
L_1007FAB9:
    eax = edx; /* 0x1007FAB9: mov eax, edx */
    ecx = edx; /* 0x1007FABB: mov ecx, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1007FABD: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007FAC0: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1007FAC3: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1007FAC3: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x1007FAC6: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x1007FACD: mov al, byte ptr [ecx + 4] */
    /* test LO8(eax), 0x10u */ /* 0x1007FAD0: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FAE1; /* 0x1007FAD2: jne 0x1007fae1 */
L_1007FAD4:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1007FAD4: mov byte ptr [edi], al */
    eax = MEM32(ecx); /* 0x1007FAD6: mov eax, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007FAD8: mov ecx, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x1007FADB: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x1007FADD: mov eax, ecx */
    goto L_1007FAE9; /* 0x1007FADF: jmp 0x1007fae9 */
L_1007FAE1:
    eax = MEM32(ebp + (-0x8)); /* 0x1007FAE1: mov eax, dword ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1007FAE4: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FAE6: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FAE9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FAE9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FAEA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007FAED: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1007FAEE: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x1007FAF1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FAB9; /* 0x1007FAF3: jl 0x1007fab9 */
L_1007FAF5:
    eax = MEM32(ebp + (-0x38)); /* 0x1007FAF5: mov eax, dword ptr [ebp - 0x38] */
    edi = MEM32(ebp + 0x8); /* 0x1007FAF8: mov edi, dword ptr [ebp + 8] */
L_1007FAFB:
    /* cmp MEM8(ebp + (-0x1)), LO8(ebx) */ /* 0x1007FAFB: cmp byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FB31; /* 0x1007FAFE: je 0x1007fb31 */
L_1007FB00:
    edx = eax + 0x4; /* 0x1007FB00: lea edx, [eax + 4] */
    ecx = ebx; /* 0x1007FB03: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB05: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1007FB08: add eax, esi */
    _flag_k = FK_ADD;
L_1007FB0A:
    MEM32(ebp + 0x8) = esi; /* 0x1007FB0A: mov dword ptr [ebp + 8], esi */
    /* cmp esi, 3 */ /* 0x1007FB0D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007FB19; /* 0x1007FB10: jl 0x1007fb19 */
L_1007FB12:
    MEM32(ebp + 0x8) = 3; /* 0x1007FB12: mov dword ptr [ebp + 8], 3 */
L_1007FB19:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1007FB19: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007FB2A; /* 0x1007FB1C: jge 0x1007fb2a */
L_1007FB1E:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1007FB1E: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1007FB20: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007FB23: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007FB24: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007FB25: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1007FB0A; /* 0x1007FB28: jmp 0x1007fb0a */
L_1007FB2A:
    MEM32(ebp + (-0xC)) = 8; /* 0x1007FB2A: mov dword ptr [ebp - 0xc], 8 */
L_1007FB31:
    RECOMP_CALL(sub_1001E471); /* 0x1007FB31: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1007FB36: mov dword ptr [eax], ebx */
    eax = ebp + (-0x28); /* 0x1007FB38: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1007FB3B: push eax */
    eax = ebp + (-0x6C); /* 0x1007FB3C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1007FB3F: push eax */
    PUSH32(esp, ebx); /* 0x1007FB40: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007FB41: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1007FB44: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x1007FB47: push 1 */
    PUSH32(esp, ebx); /* 0x1007FB49: push ebx */
    PUSH32(esp, ebx); /* 0x1007FB4A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1007FB4B: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FB4E: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x100E50EC)); /* 0x1007FB51: call dword ptr [0x100e50ec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007FB57: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007FB59: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1007FB5F: push dword ptr [ebp - 0x38] */
    MEM32(ebp + 0x8) = eax; /* 0x1007FB62: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FB65: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB6A: pop ecx */
    /* test esi, esi */ /* 0x1007FB6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FB7A; /* 0x1007FB6D: jne 0x1007fb7a */
L_1007FB6F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FB6F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007FB72: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FB77: pop ecx */
    goto L_1007FBC9; /* 0x1007FB78: jmp 0x1007fbc9 */
L_1007FB7A:
    /* cmp edi, 2 */ /* 0x1007FB7A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FBD3; /* 0x1007FB7D: je 0x1007fbd3 */
L_1007FB7F:
    esi = MEM32(0x100E5074); /* 0x1007FB7F: mov esi, dword ptr [0x100e5074] */
    /* test edi, edi */ /* 0x1007FB85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FBA6; /* 0x1007FB87: jne 0x1007fba6 */
L_1007FB89:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007FB89: push -1 */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB8B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x1007FB8E: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1007FB94: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1007FB97: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FB98: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x1007FB9B: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x18)); /* 0x1007FBA1: mov ebx, dword ptr [ebp - 0x18] */
    goto L_1007FBAB; /* 0x1007FBA4: jmp 0x1007fbab */
L_1007FBA6:
    /* cmp edi, 4 */ /* 0x1007FBA6: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007FBB2; /* 0x1007FBA9: jne 0x1007fbb2 */
L_1007FBAB:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1007FBAB: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x1007FBAE: call esi */
    RECOMP_FLAGS_IN();
    goto L_1007FBB5; /* 0x1007FBB0: jmp 0x1007fbb5 */
L_1007FBB2:
    ebx = MEM32(ebp + (-0x28)); /* 0x1007FBB2: mov ebx, dword ptr [ebp - 0x28] */
L_1007FBB5:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1007FBB5: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(esi); /* 0x1007FBB8: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1007FBBA: mov eax, ebx */
    goto L_1007FBCC; /* 0x1007FBBC: jmp 0x1007fbcc */
L_1007FBBE:
    RECOMP_CALL(sub_1001177D); /* 0x1007FBBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1007FBC3: mov dword ptr [eax], 0xc */
L_1007FBC9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FBC9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FBCC:
    esi = POP32_VAL(esp); /* 0x1007FBCC: pop esi */
L_1007FBCD:
    edi = POP32_VAL(esp); /* 0x1007FBCD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007FBCE: pop ebx */
    esp = ebp; /* 0x1007FBCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007FBD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FBD2: ret  */
L_1007FBD3:
    PUSH32(esp, ebx); /* 0x1007FBD3: push ebx */
    RECOMP_CALL(sub_1007BBB8); /* 0x1007FBD4: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007FBD9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007FBDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FBDAu);

L_1007FBDA:
    PUSH32(esp, ebp); /* 0x1007FBDA: push ebp */
    ebp = esp; /* 0x1007FBDB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007FBDD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007FBE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FBF9; /* 0x1007FBE2: jne 0x1007fbf9 */
L_1007FBE4:
    RECOMP_CALL(sub_1001177D); /* 0x1007FBE4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FBE9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FBEF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FBF4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007FBF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FBF8: ret  */
L_1007FBF9:
    /* cmp MEM8(eax), 0 */ /* 0x1007FBF9: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FBE4; /* 0x1007FBFC: je 0x1007fbe4 */
L_1007FBFE:
    ecx = MEM32(ebp + 0xC); /* 0x1007FBFE: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1007FC01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FBE4; /* 0x1007FC03: je 0x1007fbe4 */
L_1007FC05:
    /* cmp MEM8(ecx), 0 */ /* 0x1007FC05: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FBE4; /* 0x1007FC08: je 0x1007fbe4 */
L_1007FC0A:
    PUSH32(esp, 0); /* 0x1007FC0A: push 0 */
    ecx = ebp + 0xC; /* 0x1007FC0C: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007FC0F: push ecx */
    PUSH32(esp, eax); /* 0x1007FC10: push eax */
    RECOMP_CALL(sub_1007FD37); /* 0x1007FC11: call 0x1007fd37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FC16: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007FC19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FC1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FC1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FC1Bu);

L_1007FC1B:
    PUSH32(esp, ebp); /* 0x1007FC1B: push ebp */
    ebp = esp; /* 0x1007FC1C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1007FC1E: mov edx, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x1007FC21: lea ecx, [ebp + 0xc] */
    /* test edx, edx */ /* 0x1007FC24: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FC3D; /* 0x1007FC26: jne 0x1007fc3d */
L_1007FC28:
    RECOMP_CALL(sub_1001177D); /* 0x1007FC28: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FC2D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FC33: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FC38: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007FC3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FC3C: ret  */
L_1007FC3D:
    /* cmp MEM8(edx), 0 */ /* 0x1007FC3D: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FC28; /* 0x1007FC40: je 0x1007fc28 */
L_1007FC42:
    eax = MEM32(ebp + 0xC); /* 0x1007FC42: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1007FC45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FC28; /* 0x1007FC47: je 0x1007fc28 */
L_1007FC49:
    /* cmp MEM8(eax), 0 */ /* 0x1007FC49: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FC28; /* 0x1007FC4C: je 0x1007fc28 */
L_1007FC4E:
    eax = MEM32(ecx); /* 0x1007FC4E: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x1007FC50: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1007FC53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FC4E; /* 0x1007FC55: jne 0x1007fc4e */
L_1007FC57:
    PUSH32(esp, MEM32(ecx)); /* 0x1007FC57: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x1007FC59: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007FC5C: push eax */
    PUSH32(esp, edx); /* 0x1007FC5D: push edx */
    RECOMP_CALL(sub_1007FD37); /* 0x1007FC5E: call 0x1007fd37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FC63: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007FC66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FC67: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FC68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FC68u);

L_1007FC68:
    PUSH32(esp, ebp); /* 0x1007FC68: push ebp */
    ebp = esp; /* 0x1007FC69: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007FC6B: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007FC6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FC87; /* 0x1007FC70: jne 0x1007fc87 */
L_1007FC72:
    RECOMP_CALL(sub_1001177D); /* 0x1007FC72: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FC77: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FC7D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FC82: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007FC85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FC86: ret  */
L_1007FC87:
    /* cmp MEM8(eax), 0 */ /* 0x1007FC87: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FC72; /* 0x1007FC8A: je 0x1007fc72 */
L_1007FC8C:
    ecx = MEM32(ebp + 0xC); /* 0x1007FC8C: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1007FC8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FC72; /* 0x1007FC91: je 0x1007fc72 */
L_1007FC93:
    /* cmp MEM8(ecx), 0 */ /* 0x1007FC93: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FC72; /* 0x1007FC96: je 0x1007fc72 */
L_1007FC98:
    ecx = ebp + 0xC; /* 0x1007FC98: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1007FC9B: push ecx */
    PUSH32(esp, eax); /* 0x1007FC9C: push eax */
    RECOMP_CALL(sub_1007FF8F); /* 0x1007FC9D: call 0x1007ff8f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FCA2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FCA3: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1007FCA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FCA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FCA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FCA6u);

L_1007FCA6:
    PUSH32(esp, ebp); /* 0x1007FCA6: push ebp */
    ebp = esp; /* 0x1007FCA7: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1007FCA9: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1007FCAC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FCC5; /* 0x1007FCAE: jne 0x1007fcc5 */
L_1007FCB0:
    RECOMP_CALL(sub_1001177D); /* 0x1007FCB0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FCB5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FCBB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FCC0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007FCC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FCC4: ret  */
L_1007FCC5:
    /* cmp MEM8(edx), 0 */ /* 0x1007FCC5: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FCB0; /* 0x1007FCC8: je 0x1007fcb0 */
L_1007FCCA:
    eax = MEM32(ebp + 0xC); /* 0x1007FCCA: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1007FCCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FCB0; /* 0x1007FCCF: je 0x1007fcb0 */
L_1007FCD1:
    /* cmp MEM8(eax), 0 */ /* 0x1007FCD1: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FCB0; /* 0x1007FCD4: je 0x1007fcb0 */
L_1007FCD6:
    ecx = ebp + 0xC; /* 0x1007FCD6: lea ecx, [ebp + 0xc] */
L_1007FCD9:
    eax = MEM32(ecx); /* 0x1007FCD9: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x1007FCDB: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1007FCDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FCD9; /* 0x1007FCE0: jne 0x1007fcd9 */
L_1007FCE2:
    PUSH32(esp, MEM32(ecx)); /* 0x1007FCE2: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x1007FCE4: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007FCE7: push eax */
    PUSH32(esp, edx); /* 0x1007FCE8: push edx */
    RECOMP_CALL(sub_1007FFA4); /* 0x1007FCE9: call 0x1007ffa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FCEE: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007FCF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FCF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FCF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FCF3u);

L_1007FCF3:
    PUSH32(esp, ebp); /* 0x1007FCF3: push ebp */
    ebp = esp; /* 0x1007FCF4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007FCF6: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007FCF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FD12; /* 0x1007FCFB: jne 0x1007fd12 */
L_1007FCFD:
    RECOMP_CALL(sub_1001177D); /* 0x1007FCFD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FD02: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FD08: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FD0D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007FD10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FD11: ret  */
L_1007FD12:
    /* cmp MEM8(eax), 0 */ /* 0x1007FD12: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FCFD; /* 0x1007FD15: je 0x1007fcfd */
L_1007FD17:
    ecx = MEM32(ebp + 0xC); /* 0x1007FD17: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1007FD1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FCFD; /* 0x1007FD1C: je 0x1007fcfd */
L_1007FD1E:
    edx = MEM32(ecx); /* 0x1007FD1E: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x1007FD20: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FCFD; /* 0x1007FD22: je 0x1007fcfd */
L_1007FD24:
    /* cmp MEM8(edx), 0 */ /* 0x1007FD24: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FCFD; /* 0x1007FD27: je 0x1007fcfd */
L_1007FD29:
    PUSH32(esp, 0); /* 0x1007FD29: push 0 */
    PUSH32(esp, ecx); /* 0x1007FD2B: push ecx */
    PUSH32(esp, eax); /* 0x1007FD2C: push eax */
    RECOMP_CALL(sub_1007FD37); /* 0x1007FD2D: call 0x1007fd37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FD32: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007FD35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FD36: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FD37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FD37u);

L_1007FD37:
    PUSH32(esp, ebp); /* 0x1007FD37: push ebp */
    ebp = esp; /* 0x1007FD38: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007FD3A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007FD3D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007FD3E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007FD41: push edi */
    edi = ebx; /* 0x1007FD42: mov edi, ebx */
    /* test ebx, ebx */ /* 0x1007FD44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FD60; /* 0x1007FD46: jne 0x1007fd60 */
L_1007FD48:
    RECOMP_CALL(sub_1001177D); /* 0x1007FD48: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FD4D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FD53: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FD58: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FF0F; /* 0x1007FD5B: jmp 0x1007ff0f */
L_1007FD60:
    /* cmp MEM8(ebx), 0 */ /* 0x1007FD60: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FD48; /* 0x1007FD63: je 0x1007fd48 */
L_1007FD65:
    eax = MEM32(ebp + 0xC); /* 0x1007FD65: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1007FD68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FD48; /* 0x1007FD6A: je 0x1007fd48 */
L_1007FD6C:
    eax = MEM32(eax); /* 0x1007FD6C: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1007FD6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FD48; /* 0x1007FD70: je 0x1007fd48 */
L_1007FD72:
    /* cmp MEM8(eax), 0 */ /* 0x1007FD72: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FD48; /* 0x1007FD75: je 0x1007fd48 */
L_1007FD77:
    PUSH32(esp, esi); /* 0x1007FD77: push esi */
    PUSH32(esp, 0x5Cu); /* 0x1007FD78: push 0x5c */
    PUSH32(esp, ebx); /* 0x1007FD7A: push ebx */
    RECOMP_CALL(sub_1008E5B2); /* 0x1007FD7B: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x1007FD80: push 0x2f */
    PUSH32(esp, ebx); /* 0x1007FD82: push ebx */
    esi = eax; /* 0x1007FD83: mov esi, eax */
    RECOMP_CALL(sub_1008E5B2); /* 0x1007FD85: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007FD8A: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007FD8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FDF2; /* 0x1007FD8F: jne 0x1007fdf2 */
L_1007FD91:
    /* test esi, esi */ /* 0x1007FD91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FDFC; /* 0x1007FD93: jne 0x1007fdfc */
L_1007FD95:
    PUSH32(esp, 0x3Au); /* 0x1007FD95: push 0x3a */
    PUSH32(esp, ebx); /* 0x1007FD97: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x1007FD98: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007FD9D: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007FD9F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FDA0: pop ecx */
    /* test esi, esi */ /* 0x1007FDA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FDFC; /* 0x1007FDA3: jne 0x1007fdfc */
L_1007FDA5:
    PUSH32(esp, ebx); /* 0x1007FDA5: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x1007FDA6: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1007FDAB: push 1 */
    esi = eax + 0x3; /* 0x1007FDAD: lea esi, [eax + 3] */
    PUSH32(esp, esi); /* 0x1007FDB0: push esi */
    RECOMP_CALL(sub_10011208); /* 0x1007FDB1: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007FDB6: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FDB8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1007FDBB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FE52; /* 0x1007FDBD: je 0x1007fe52 */
L_1007FDC3:
    PUSH32(esp, 0x10062158u); /* 0x1007FDC3: push 0x10062158 */
    PUSH32(esp, esi); /* 0x1007FDC8: push esi */
    PUSH32(esp, edi); /* 0x1007FDC9: push edi */
    RECOMP_CALL(sub_100147CD); /* 0x1007FDCA: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FDCF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007FDD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FF15; /* 0x1007FDD4: jne 0x1007ff15 */
L_1007FDDA:
    PUSH32(esp, ebx); /* 0x1007FDDA: push ebx */
    PUSH32(esp, esi); /* 0x1007FDDB: push esi */
    PUSH32(esp, edi); /* 0x1007FDDC: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x1007FDDD: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FDE2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007FDE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FF15; /* 0x1007FDE7: jne 0x1007ff15 */
L_1007FDED:
    esi = edi + 0x2; /* 0x1007FDED: lea esi, [edi + 2] */
    goto L_1007FDFC; /* 0x1007FDF0: jmp 0x1007fdfc */
L_1007FDF2:
    /* test esi, esi */ /* 0x1007FDF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FDFA; /* 0x1007FDF4: je 0x1007fdfa */
L_1007FDF6:
    /* cmp eax, esi */ /* 0x1007FDF6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007FDFC; /* 0x1007FDF8: jbe 0x1007fdfc */
L_1007FDFA:
    esi = eax; /* 0x1007FDFA: mov esi, eax */
L_1007FDFC:
    PUSH32(esp, 0x2Eu); /* 0x1007FDFC: push 0x2e */
    PUSH32(esp, esi); /* 0x1007FDFE: push esi */
    RECOMP_CALL(sub_1008E5B2); /* 0x1007FDFF: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FE04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FE05: pop ecx */
    /* test eax, eax */ /* 0x1007FE06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FE32; /* 0x1007FE08: je 0x1007fe32 */
L_1007FE0A:
    PUSH32(esp, 0); /* 0x1007FE0A: push 0 */
    PUSH32(esp, edi); /* 0x1007FE0C: push edi */
    RECOMP_CALL(sub_1007E270); /* 0x1007FE0D: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FE12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FE13: pop ecx */
    /* test eax, eax */ /* 0x1007FE14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FEFE; /* 0x1007FE16: jne 0x1007fefe */
L_1007FE1C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007FE1C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FE1F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007FE22: push edi */
    RECOMP_CALL(sub_1007FF22); /* 0x1007FE23: call 0x1007ff22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FE28: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1007FE2B: mov esi, eax */
    goto L_1007FF01; /* 0x1007FE2D: jmp 0x1007ff01 */
L_1007FE32:
    PUSH32(esp, edi); /* 0x1007FE32: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x1007FE33: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x1007FE38: add eax, 5 */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x1007FE3B: push 1 */
    PUSH32(esp, eax); /* 0x1007FE3D: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007FE3E: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_10011208); /* 0x1007FE41: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007FE46: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FE48: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x1007FE4B: mov dword ptr [ebp + 8], esi */
    /* test esi, esi */ /* 0x1007FE4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FE5A; /* 0x1007FE50: jne 0x1007fe5a */
L_1007FE52:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FE52: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FF0E; /* 0x1007FE55: jmp 0x1007ff0e */
L_1007FE5A:
    PUSH32(esp, edi); /* 0x1007FE5A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007FE5B: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1007FE5E: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1007FE5F: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FE64: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007FE67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FF15; /* 0x1007FE69: jne 0x1007ff15 */
L_1007FE6F:
    PUSH32(esp, edi); /* 0x1007FE6F: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x1007FE70: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1007FE75: add eax, esi */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1007FE77: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1007FE78: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1001177D); /* 0x1007FE7B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1007FE80: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007FE83: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1007FE86: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1007FE88: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007FE8A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x1007FE8C: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1007FE8E: mov dword ptr [ebp - 0x10], eax */
    eax = 0x100E145Cu; /* 0x1007FE91: mov eax, 0x100e145c */
    MEM32(ebp + (-0xC)) = edx; /* 0x1007FE96: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007FE99: mov dword ptr [ebp - 4], eax */
L_1007FE9C:
    PUSH32(esp, MEM32(eax)); /* 0x1007FE9C: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1007FE9E: push edx */
    PUSH32(esp, ecx); /* 0x1007FE9F: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1007FEA0: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FEA5: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1007FEA8: push esi */
    /* test eax, eax */ /* 0x1007FEA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FF18; /* 0x1007FEAB: jne 0x1007ff18 */
L_1007FEAD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FEAD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007E270); /* 0x1007FEB0: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FEB5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007FEB6: pop ecx */
    /* test eax, eax */ /* 0x1007FEB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FED6; /* 0x1007FEB9: je 0x1007fed6 */
L_1007FEBB:
    eax = MEM32(ebp + (-0x4)); /* 0x1007FEBB: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007FEBE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1007FEC1: sub eax, 4 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xC)); /* 0x1007FEC4: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007FEC7: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0x100E1450u */ /* 0x1007FECA: cmp eax, 0x100e1450 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1450u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007FE9C; /* 0x1007FECF: jge 0x1007fe9c */
L_1007FED1:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007FED1: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FEF3; /* 0x1007FED4: jmp 0x1007fef3 */
L_1007FED6:
    RECOMP_CALL(sub_1001177D); /* 0x1007FED6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007FEDB: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1007FEDE: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FEE1: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1007FEE4: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FEE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007FF22); /* 0x1007FEE9: call 0x1007ff22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FEEE: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1007FEF1: mov esi, eax */
L_1007FEF3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FEF3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FEF6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FEFB: pop ecx */
    goto L_1007FF01; /* 0x1007FEFC: jmp 0x1007ff01 */
L_1007FEFE:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1007FEFE: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007FF01:
    /* cmp edi, ebx */ /* 0x1007FF01: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FF0C; /* 0x1007FF03: je 0x1007ff0c */
L_1007FF05:
    PUSH32(esp, edi); /* 0x1007FF05: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FF06: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007FF0B: pop ecx */
L_1007FF0C:
    eax = esi; /* 0x1007FF0C: mov eax, esi */
L_1007FF0E:
    esi = POP32_VAL(esp); /* 0x1007FF0E: pop esi */
L_1007FF0F:
    edi = POP32_VAL(esp); /* 0x1007FF0F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007FF10: pop ebx */
    esp = ebp; /* 0x1007FF11: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007FF13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FF14: ret  */
L_1007FF15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007FF15: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007FF17: push esi */
L_1007FF18:
    PUSH32(esp, esi); /* 0x1007FF18: push esi */
    PUSH32(esp, esi); /* 0x1007FF19: push esi */
    PUSH32(esp, esi); /* 0x1007FF1A: push esi */
    PUSH32(esp, esi); /* 0x1007FF1B: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1007FF1C: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007FF21u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007FF22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FF22u);

L_1007FF22:
    PUSH32(esp, ebp); /* 0x1007FF22: push ebp */
    ebp = esp; /* 0x1007FF23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007FF25: push ecx */
    PUSH32(esp, esi); /* 0x1007FF26: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007FF27: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1007FF2A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FF43; /* 0x1007FF2C: jne 0x1007ff43 */
L_1007FF2E:
    RECOMP_CALL(sub_1001177D); /* 0x1007FF2E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FF33: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FF39: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1007FF3E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007FF3E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007FF8A; /* 0x1007FF41: jmp 0x1007ff8a */
L_1007FF43:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1007FF43: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FF2E; /* 0x1007FF47: je 0x1007ff2e */
L_1007FF49:
    PUSH32(esp, esi); /* 0x1007FF49: push esi */
    eax = ebp + (-0x4); /* 0x1007FF4A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007FF4D: push eax */
    eax = ebp + 0x8; /* 0x1007FF4E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1007FF51: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007FF52: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FF55: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1007F5EB); /* 0x1007FF58: call 0x1007f5eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007FF5D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007FF60: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FF3E; /* 0x1007FF63: je 0x1007ff3e */
L_1007FF65:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007FF65: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FF68: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007FF6B: push esi */
    PUSH32(esp, 2); /* 0x1007FF6C: push 2 */
    RECOMP_CALL(sub_1007F9C2); /* 0x1007FF6E: call 0x1007f9c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FF73: push dword ptr [ebp + 8] */
    esi = eax; /* 0x1007FF76: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FF78: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007FF7D: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007FF80: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1007FF85: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1007FF88: mov eax, esi */
L_1007FF8A:
    esi = POP32_VAL(esp); /* 0x1007FF8A: pop esi */
    esp = ebp; /* 0x1007FF8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007FF8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FF8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FF8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FF8Fu);

L_1007FF8F:
    PUSH32(esp, ebp); /* 0x1007FF8F: push ebp */
    ebp = esp; /* 0x1007FF90: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1007FF92: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007FF94: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007FF97: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007FFA4); /* 0x1007FF9A: call 0x1007ffa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007FF9F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007FFA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007FFA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007FFA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007FFA4u);

L_1007FFA4:
    PUSH32(esp, ebp); /* 0x1007FFA4: push ebp */
    ebp = esp; /* 0x1007FFA5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007FFA7: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007FFAA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1007FFAE: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007FFAF: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1007FFB2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FFCB; /* 0x1007FFB4: jne 0x1007ffcb */
L_1007FFB6:
    RECOMP_CALL(sub_1001177D); /* 0x1007FFB6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FFBB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FFC1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100801EE; /* 0x1007FFC6: jmp 0x100801ee */
L_1007FFCB:
    /* cmp MEM8(ebx), 0 */ /* 0x1007FFCB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FFB6; /* 0x1007FFCE: je 0x1007ffb6 */
L_1007FFD0:
    PUSH32(esp, esi); /* 0x1007FFD0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007FFD1: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007FFD4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007FFED; /* 0x1007FFD6: jne 0x1007ffed */
L_1007FFD8:
    RECOMP_CALL(sub_1001177D); /* 0x1007FFD8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007FFDD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007FFE3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100801ED; /* 0x1007FFE8: jmp 0x100801ed */
L_1007FFED:
    eax = MEM32(esi); /* 0x1007FFED: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1007FFEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007FFD8; /* 0x1007FFF1: je 0x1007ffd8 */
L_1007FFF3:
    /* cmp MEM8(eax), 0 */ /* 0x1007FFF3: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007FFD8; /* 0x1007FFF6: je 0x1007ffd8 */
L_1007FFF8:
    RECOMP_CALL(sub_1001177D); /* 0x1007FFF8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007FFFD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10080000: push esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10080001: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10080004: push ebx */
    RECOMP_CALL(sub_1007FD37); /* 0x10080005: call 0x1007fd37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008000A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1001177D); /* 0x1008000D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10080012: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100801DE; /* 0x10080015: jne 0x100801de */
L_1008001B:
    PUSH32(esp, 0x5Cu); /* 0x1008001B: push 0x5c */
    PUSH32(esp, ebx); /* 0x1008001D: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x1008001E: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080023: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080024: pop ecx */
    /* test eax, eax */ /* 0x10080025: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100801DE; /* 0x10080027: jne 0x100801de */
L_1008002D:
    PUSH32(esp, 0x2Fu); /* 0x1008002D: push 0x2f */
    PUSH32(esp, ebx); /* 0x1008002F: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x10080030: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080035: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080036: pop ecx */
    /* test eax, eax */ /* 0x10080037: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100801DE; /* 0x10080039: jne 0x100801de */
L_1008003F:
    /* cmp MEM8(ebx), LO8(eax) */ /* 0x1008003F: cmp byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008004D; /* 0x10080041: je 0x1008004d */
L_10080043:
    /* cmp MEM8(ebx + 0x1), 0x3Au */ /* 0x10080043: cmp byte ptr [ebx + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801DE; /* 0x10080047: je 0x100801de */
L_1008004D:
    PUSH32(esp, 0x1006215Cu); /* 0x1008004D: push 0x1006215c */
    eax = ebp + (-0x4); /* 0x10080052: lea eax, [ebp - 4] */
    PUSH32(esp, 0); /* 0x10080055: push 0 */
    PUSH32(esp, eax); /* 0x10080057: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x10080058: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008005D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080072; /* 0x10080062: je 0x10080072 */
L_10080064:
    /* cmp eax, 0x16u */ /* 0x10080064: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801F6; /* 0x10080067: je 0x100801f6 */
L_1008006D:
    goto L_100801DE; /* 0x1008006D: jmp 0x100801de */
L_10080072:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x10080072: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801ED; /* 0x10080076: je 0x100801ed */
L_1008007C:
    PUSH32(esp, edi); /* 0x1008007C: push edi */
    PUSH32(esp, 1); /* 0x1008007D: push 1 */
    PUSH32(esp, 0x104u); /* 0x1008007F: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x10080084: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10080089: mov edi, eax */
    esi = edi; /* 0x1008008B: mov esi, edi */
    ecx = POP32_VAL(esp); /* 0x1008008D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008008E: pop ecx */
    /* test edi, edi */ /* 0x1008008F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100801DD; /* 0x10080091: je 0x100801dd */
L_10080097:
    ecx = MEM32(ebp + (-0x4)); /* 0x10080097: mov ecx, dword ptr [ebp - 4] */
L_1008009A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1008009A: mov al, byte ptr [ecx] */
    MEM32(ebp + 0x8) = ecx; /* 0x1008009C: mov dword ptr [ebp + 8], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1008009F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080101; /* 0x100800A1: je 0x10080101 */
L_100800A3:
    ecx = edi + 0x1; /* 0x100800A3: lea ecx, [edi + 1] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100800A6: mov dword ptr [ebp - 8], ecx */
L_100800A9:
    /* cmp LO8(eax), 0x3Bu */ /* 0x100800A9: cmp al, 0x3b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080101; /* 0x100800AB: je 0x10080101 */
L_100800AD:
    ecx = edi + 0x102; /* 0x100800AD: lea ecx, [edi + 0x102] */
    /* cmp esi, ecx */ /* 0x100800B3: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10080101; /* 0x100800B5: jae 0x10080101 */
L_100800B7:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100800B7: movsx eax, al */
    PUSH32(esp, eax); /* 0x100800BA: push eax */
    RECOMP_CALL(sub_1002DFC5); /* 0x100800BB: call 0x1002dfc5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100800C0: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100800C1: mov ecx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100800C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100800EB; /* 0x100800C6: je 0x100800eb */
L_100800C8:
    eax = ecx + 0x1; /* 0x100800C8: lea eax, [ecx + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x100800CB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = eax; /* 0x100800CE: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080101; /* 0x100800D1: je 0x10080101 */
L_100800D3:
    edx = MEM32(ebp + (-0x8)); /* 0x100800D3: mov edx, dword ptr [ebp - 8] */
    eax = edi + 0x102; /* 0x100800D6: lea eax, [edi + 0x102] */
    /* cmp edx, eax */ /* 0x100800DC: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10080101; /* 0x100800DE: jae 0x10080101 */
L_100800E0:
    SET_LO8(eax, MEM8(ecx)); /* 0x100800E0: mov al, byte ptr [ecx] */
    ecx = MEM32(ebp + (-0xC)); /* 0x100800E2: mov ecx, dword ptr [ebp - 0xc] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100800E5: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100800E7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100800E8: inc edx */
    _flag_k = FK_INC;
    goto L_100800EE; /* 0x100800E9: jmp 0x100800ee */
L_100800EB:
    edx = MEM32(ebp + (-0x8)); /* 0x100800EB: mov edx, dword ptr [ebp - 8] */
L_100800EE:
    SET_LO8(eax, MEM8(ecx)); /* 0x100800EE: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100800F0: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100800F2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100800F3: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100800F4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x100800F5: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + 0x8) = ecx; /* 0x100800F8: mov dword ptr [ebp + 8], ecx */
    SET_LO8(eax, MEM8(ecx)); /* 0x100800FB: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100800FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100800A9; /* 0x100800FF: jne 0x100800a9 */
L_10080101:
    MEM8(esi) = (uint8_t)(0); /* 0x10080101: mov byte ptr [esi], 0 */
    /* cmp esi, edi */ /* 0x10080104: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10080109; /* 0x10080106: jbe 0x10080109 */
L_10080108:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10080108: dec esi */
    _flag_k = FK_DEC;
L_10080109:
    SET_LO8(eax, MEM8(esi)); /* 0x10080109: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1008010B: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008011D; /* 0x1008010D: jne 0x1008011d */
L_1008010F:
    PUSH32(esp, 0x5Cu); /* 0x1008010F: push 0x5c */
    PUSH32(esp, edi); /* 0x10080111: push edi */
    RECOMP_CALL(sub_1008E5B2); /* 0x10080112: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080117: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080118: pop ecx */
    /* cmp esi, eax */ /* 0x10080119: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1008011F; /* 0x1008011B: jmp 0x1008011f */
L_1008011D:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1008011D: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1008011F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1008013C; /* 0x1008011F: je 0x1008013c */
L_10080121:
    PUSH32(esp, 0x10062164u); /* 0x10080121: push 0x10062164 */
    PUSH32(esp, 0x104u); /* 0x10080126: push 0x104 */
    PUSH32(esp, edi); /* 0x1008012B: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x1008012C: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080131: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080134: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100801F6; /* 0x10080136: jne 0x100801f6 */
L_1008013C:
    PUSH32(esp, edi); /* 0x1008013C: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x1008013D: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10080142: push ebx */
    esi = eax; /* 0x10080143: mov esi, eax */
    RECOMP_CALL(sub_100129AF); /* 0x10080145: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008014A: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x1008014C: mov eax, 0x104 */
    ecx = POP32_VAL(esp); /* 0x10080151: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080152: pop ecx */
    /* cmp esi, eax */ /* 0x10080153: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100801D6; /* 0x10080155: jae 0x100801d6 */
L_10080157:
    PUSH32(esp, ebx); /* 0x10080157: push ebx */
    PUSH32(esp, eax); /* 0x10080158: push eax */
    PUSH32(esp, edi); /* 0x10080159: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x1008015A: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008015F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080162: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100801F6; /* 0x10080164: jne 0x100801f6 */
L_1008016A:
    RECOMP_CALL(sub_1001177D); /* 0x1008016A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008016F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080172: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10080175: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10080178: push edi */
    RECOMP_CALL(sub_1007FD37); /* 0x10080179: call 0x1007fd37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008017E: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1001177D); /* 0x10080181: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10080186: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801C6; /* 0x10080189: je 0x100801c6 */
L_1008018B:
    PUSH32(esp, 0x5Cu); /* 0x1008018B: push 0x5c */
    PUSH32(esp, edi); /* 0x1008018D: push edi */
    RECOMP_CALL(sub_100312F9); /* 0x1008018E: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080193: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080194: pop ecx */
    /* cmp edi, eax */ /* 0x10080195: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801A7; /* 0x10080197: je 0x100801a7 */
L_10080199:
    PUSH32(esp, 0x2Fu); /* 0x10080199: push 0x2f */
    PUSH32(esp, edi); /* 0x1008019B: push edi */
    RECOMP_CALL(sub_100312F9); /* 0x1008019C: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100801A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100801A2: pop ecx */
    /* cmp edi, eax */ /* 0x100801A3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100801D6; /* 0x100801A5: jne 0x100801d6 */
L_100801A7:
    esi = edi + 0x1; /* 0x100801A7: lea esi, [edi + 1] */
    PUSH32(esp, 0x5Cu); /* 0x100801AA: push 0x5c */
    PUSH32(esp, esi); /* 0x100801AC: push esi */
    RECOMP_CALL(sub_100312F9); /* 0x100801AD: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100801B2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100801B3: pop ecx */
    /* cmp esi, eax */ /* 0x100801B4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801C6; /* 0x100801B6: je 0x100801c6 */
L_100801B8:
    PUSH32(esp, 0x2Fu); /* 0x100801B8: push 0x2f */
    PUSH32(esp, esi); /* 0x100801BA: push esi */
    RECOMP_CALL(sub_100312F9); /* 0x100801BB: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100801C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100801C1: pop ecx */
    /* cmp esi, eax */ /* 0x100801C2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100801D6; /* 0x100801C4: jne 0x100801d6 */
L_100801C6:
    ecx = MEM32(ebp + 0x8); /* 0x100801C6: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x100801C9: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801D6; /* 0x100801CC: je 0x100801d6 */
L_100801CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100801CE: inc ecx */
    _flag_k = FK_INC;
    esi = edi; /* 0x100801CF: mov esi, edi */
    RECOMP_BACKEDGE();
    goto L_1008009A; /* 0x100801D1: jmp 0x1008009a */
L_100801D6:
    PUSH32(esp, edi); /* 0x100801D6: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100801D7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100801DC: pop ecx */
L_100801DD:
    edi = POP32_VAL(esp); /* 0x100801DD: pop edi */
L_100801DE:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100801DE: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100801ED; /* 0x100801E2: je 0x100801ed */
L_100801E4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100801E4: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100801E7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100801EC: pop ecx */
L_100801ED:
    esi = POP32_VAL(esp); /* 0x100801ED: pop esi */
L_100801EE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100801EE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100801F1: pop ebx */
    esp = ebp; /* 0x100801F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100801F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100801F5: ret  */
L_100801F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100801F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100801F8: push eax */
    PUSH32(esp, eax); /* 0x100801F9: push eax */
    PUSH32(esp, eax); /* 0x100801FA: push eax */
    PUSH32(esp, eax); /* 0x100801FB: push eax */
    PUSH32(esp, eax); /* 0x100801FC: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100801FD: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10080202u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10080203(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080203u);

L_10080203:
    PUSH32(esp, ebp); /* 0x10080203: push ebp */
    ebp = esp; /* 0x10080204: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10080206: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080223; /* 0x1008020A: jne 0x10080223 */
L_1008020C:
    /* cmp MEM32(ebp + 0x10), 0xFFFFu */ /* 0x1008020C: cmp dword ptr [ebp + 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1008022E; /* 0x10080213: jg 0x1008022e */
L_10080215:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080215: push dword ptr [ebp + 0x10] */
L_10080218:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080218: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x1008021B: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10080221: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080222: ret  */
L_10080223:
    /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu */ /* 0x10080223: cmp dword ptr [ebp + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008022E; /* 0x10080227: jne 0x1008022e */
L_10080229:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080229: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_10080218; /* 0x1008022C: jmp 0x10080218 */
L_1008022E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008022E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080230: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080231: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080232(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080232u);

L_10080232:
    PUSH32(esp, ebp); /* 0x10080232: push ebp */
    ebp = esp; /* 0x10080233: mov ebp, esp */
    RECOMP_CALL(sub_10014BD1); /* 0x10080235: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008023A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080242; /* 0x1008023C: je 0x10080242 */
L_1008023E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008023E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080240: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080241: ret  */
L_10080242:
    PUSH32(esp, 0); /* 0x10080242: push 0 */
    PUSH32(esp, 0); /* 0x10080244: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080246: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50F4)); /* 0x10080249: call dword ptr [0x100e50f4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1008024F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080250: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080251u);

L_10080251:
    PUSH32(esp, ebp); /* 0x10080251: push ebp */
    ebp = esp; /* 0x10080252: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080254: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E50F0)); /* 0x10080257: call dword ptr [0x100e50f0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008025D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080268; /* 0x1008025F: jne 0x10080268 */
L_10080261:
    ebp = POP32_VAL(esp); /* 0x10080261: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x100E500C)); goto _ljump; }
L_10080268:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10080268: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008026A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008026B: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1008026C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008026Cu);

L_1008026C:
    PUSH32(esp, ebp); /* 0x1008026C: push ebp */
    ebp = esp; /* 0x1008026D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1008026F: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080272: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008028B; /* 0x10080274: jne 0x1008028b */
L_10080276:
    RECOMP_CALL(sub_1001177D); /* 0x10080276: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008027B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080281: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080286: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080289: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008028A: ret  */
L_1008028B:
    /* cmp MEM8(eax), 0 */ /* 0x1008028B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080276; /* 0x1008028E: je 0x10080276 */
L_10080290:
    ecx = MEM32(ebp + 0x10); /* 0x10080290: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x10080293: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080276; /* 0x10080295: je 0x10080276 */
L_10080297:
    /* cmp MEM8(ecx), 0 */ /* 0x10080297: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080276; /* 0x1008029A: je 0x10080276 */
L_1008029C:
    PUSH32(esp, 0); /* 0x1008029C: push 0 */
    ecx = ebp + 0x10; /* 0x1008029E: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x100802A1: push ecx */
    PUSH32(esp, eax); /* 0x100802A2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100802A3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100803D9); /* 0x100802A6: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100802AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100802AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100802AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100802B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100802B0u);

L_100802B0:
    PUSH32(esp, ebp); /* 0x100802B0: push ebp */
    ebp = esp; /* 0x100802B1: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100802B3: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100802B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100802CF; /* 0x100802B8: jne 0x100802cf */
L_100802BA:
    RECOMP_CALL(sub_1001177D); /* 0x100802BA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100802BF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100802C5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100802CA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100802CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100802CE: ret  */
L_100802CF:
    /* cmp MEM8(edx), 0 */ /* 0x100802CF: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100802BA; /* 0x100802D2: je 0x100802ba */
L_100802D4:
    eax = MEM32(ebp + 0x10); /* 0x100802D4: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x100802D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100802BA; /* 0x100802D9: je 0x100802ba */
L_100802DB:
    /* cmp MEM8(eax), 0 */ /* 0x100802DB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100802BA; /* 0x100802DE: je 0x100802ba */
L_100802E0:
    ecx = ebp + 0x10; /* 0x100802E0: lea ecx, [ebp + 0x10] */
L_100802E3:
    eax = MEM32(ecx); /* 0x100802E3: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x100802E5: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x100802E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100802E3; /* 0x100802EA: jne 0x100802e3 */
L_100802EC:
    PUSH32(esp, MEM32(ecx)); /* 0x100802EC: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x100802EE: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100802F1: push eax */
    PUSH32(esp, edx); /* 0x100802F2: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100802F3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100803D9); /* 0x100802F6: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100802FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100802FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100802FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080300u);

L_10080300:
    PUSH32(esp, ebp); /* 0x10080300: push ebp */
    ebp = esp; /* 0x10080301: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10080303: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008031F; /* 0x10080308: jne 0x1008031f */
L_1008030A:
    RECOMP_CALL(sub_1001177D); /* 0x1008030A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008030F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080315: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008031A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008031D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008031E: ret  */
L_1008031F:
    /* cmp MEM8(eax), 0 */ /* 0x1008031F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008030A; /* 0x10080322: je 0x1008030a */
L_10080324:
    ecx = MEM32(ebp + 0x10); /* 0x10080324: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x10080327: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008030A; /* 0x10080329: je 0x1008030a */
L_1008032B:
    /* cmp MEM8(ecx), 0 */ /* 0x1008032B: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008030A; /* 0x1008032E: je 0x1008030a */
L_10080330:
    ecx = ebp + 0x10; /* 0x10080330: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x10080333: push ecx */
    PUSH32(esp, eax); /* 0x10080334: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080335: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10080638); /* 0x10080338: call 0x10080638 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008033D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10080340: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080341: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080342(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080342u);

L_10080342:
    PUSH32(esp, ebp); /* 0x10080342: push ebp */
    ebp = esp; /* 0x10080343: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10080345: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10080348: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080361; /* 0x1008034A: jne 0x10080361 */
L_1008034C:
    RECOMP_CALL(sub_1001177D); /* 0x1008034C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080351: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080357: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008035C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008035F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080360: ret  */
L_10080361:
    /* cmp MEM8(edx), 0 */ /* 0x10080361: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008034C; /* 0x10080364: je 0x1008034c */
L_10080366:
    eax = MEM32(ebp + 0x10); /* 0x10080366: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10080369: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008034C; /* 0x1008036B: je 0x1008034c */
L_1008036D:
    /* cmp MEM8(eax), 0 */ /* 0x1008036D: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008034C; /* 0x10080370: je 0x1008034c */
L_10080372:
    ecx = ebp + 0x10; /* 0x10080372: lea ecx, [ebp + 0x10] */
L_10080375:
    eax = MEM32(ecx); /* 0x10080375: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x10080377: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1008037A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080375; /* 0x1008037C: jne 0x10080375 */
L_1008037E:
    PUSH32(esp, MEM32(ecx)); /* 0x1008037E: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x10080380: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10080383: push eax */
    PUSH32(esp, edx); /* 0x10080384: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080385: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10080650); /* 0x10080388: call 0x10080650 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008038D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10080390: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080391: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080392(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080392u);

L_10080392:
    PUSH32(esp, ebp); /* 0x10080392: push ebp */
    ebp = esp; /* 0x10080393: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10080395: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080398: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100803B1; /* 0x1008039A: jne 0x100803b1 */
L_1008039C:
    RECOMP_CALL(sub_1001177D); /* 0x1008039C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100803A1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100803A7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100803AC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100803AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100803B0: ret  */
L_100803B1:
    /* cmp MEM8(eax), 0 */ /* 0x100803B1: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008039C; /* 0x100803B4: je 0x1008039c */
L_100803B6:
    ecx = MEM32(ebp + 0x10); /* 0x100803B6: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x100803B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008039C; /* 0x100803BB: je 0x1008039c */
L_100803BD:
    edx = MEM32(ecx); /* 0x100803BD: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x100803BF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008039C; /* 0x100803C1: je 0x1008039c */
L_100803C3:
    /* cmp MEM8(edx), 0 */ /* 0x100803C3: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008039C; /* 0x100803C6: je 0x1008039c */
L_100803C8:
    PUSH32(esp, 0); /* 0x100803C8: push 0 */
    PUSH32(esp, ecx); /* 0x100803CA: push ecx */
    PUSH32(esp, eax); /* 0x100803CB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100803CC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100803D9); /* 0x100803CF: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100803D4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100803D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100803D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100803D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100803D9u);

L_100803D9:
    PUSH32(esp, ebp); /* 0x100803D9: push ebp */
    ebp = esp; /* 0x100803DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100803DC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100803DF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100803E0: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100803E3: push edi */
    edi = ebx; /* 0x100803E4: mov edi, ebx */
    /* test ebx, ebx */ /* 0x100803E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080402; /* 0x100803E8: jne 0x10080402 */
L_100803EA:
    RECOMP_CALL(sub_1001177D); /* 0x100803EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100803EF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100803F5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100803FA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100805B7; /* 0x100803FD: jmp 0x100805b7 */
L_10080402:
    /* cmp MEM8(ebx), 0 */ /* 0x10080402: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100803EA; /* 0x10080405: je 0x100803ea */
L_10080407:
    eax = MEM32(ebp + 0x10); /* 0x10080407: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1008040A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100803EA; /* 0x1008040C: je 0x100803ea */
L_1008040E:
    eax = MEM32(eax); /* 0x1008040E: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x10080410: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100803EA; /* 0x10080412: je 0x100803ea */
L_10080414:
    /* cmp MEM8(eax), 0 */ /* 0x10080414: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100803EA; /* 0x10080417: je 0x100803ea */
L_10080419:
    PUSH32(esp, esi); /* 0x10080419: push esi */
    PUSH32(esp, 0x5Cu); /* 0x1008041A: push 0x5c */
    PUSH32(esp, ebx); /* 0x1008041C: push ebx */
    RECOMP_CALL(sub_1008E5B2); /* 0x1008041D: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x10080422: push 0x2f */
    PUSH32(esp, ebx); /* 0x10080424: push ebx */
    esi = eax; /* 0x10080425: mov esi, eax */
    RECOMP_CALL(sub_1008E5B2); /* 0x10080427: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008042C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008042F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080494; /* 0x10080431: jne 0x10080494 */
L_10080433:
    /* test esi, esi */ /* 0x10080433: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008049E; /* 0x10080435: jne 0x1008049e */
L_10080437:
    PUSH32(esp, 0x3Au); /* 0x10080437: push 0x3a */
    PUSH32(esp, ebx); /* 0x10080439: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x1008043A: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008043F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10080441: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080442: pop ecx */
    /* test esi, esi */ /* 0x10080443: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008049E; /* 0x10080445: jne 0x1008049e */
L_10080447:
    PUSH32(esp, ebx); /* 0x10080447: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x10080448: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1008044D: push 1 */
    esi = eax + 0x3; /* 0x1008044F: lea esi, [eax + 3] */
    PUSH32(esp, esi); /* 0x10080452: push esi */
    RECOMP_CALL(sub_10011208); /* 0x10080453: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10080458: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008045A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1008045D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100804F7; /* 0x1008045F: je 0x100804f7 */
L_10080465:
    PUSH32(esp, 0x10062158u); /* 0x10080465: push 0x10062158 */
    PUSH32(esp, esi); /* 0x1008046A: push esi */
    PUSH32(esp, edi); /* 0x1008046B: push edi */
    RECOMP_CALL(sub_100147CD); /* 0x1008046C: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080471: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080474: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805BD; /* 0x10080476: jne 0x100805bd */
L_1008047C:
    PUSH32(esp, ebx); /* 0x1008047C: push ebx */
    PUSH32(esp, esi); /* 0x1008047D: push esi */
    PUSH32(esp, edi); /* 0x1008047E: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x1008047F: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080484: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080487: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805BD; /* 0x10080489: jne 0x100805bd */
L_1008048F:
    esi = edi + 0x2; /* 0x1008048F: lea esi, [edi + 2] */
    goto L_1008049E; /* 0x10080492: jmp 0x1008049e */
L_10080494:
    /* test esi, esi */ /* 0x10080494: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008049C; /* 0x10080496: je 0x1008049c */
L_10080498:
    /* cmp eax, esi */ /* 0x10080498: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008049E; /* 0x1008049A: jbe 0x1008049e */
L_1008049C:
    esi = eax; /* 0x1008049C: mov esi, eax */
L_1008049E:
    PUSH32(esp, 0x2Eu); /* 0x1008049E: push 0x2e */
    PUSH32(esp, esi); /* 0x100804A0: push esi */
    RECOMP_CALL(sub_1008E5B2); /* 0x100804A1: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100804A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100804A7: pop ecx */
    /* test eax, eax */ /* 0x100804A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100804D7; /* 0x100804AA: je 0x100804d7 */
L_100804AC:
    PUSH32(esp, 0); /* 0x100804AC: push 0 */
    PUSH32(esp, edi); /* 0x100804AE: push edi */
    RECOMP_CALL(sub_1007E270); /* 0x100804AF: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100804B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100804B5: pop ecx */
    /* test eax, eax */ /* 0x100804B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805A6; /* 0x100804B8: jne 0x100805a6 */
L_100804BE:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100804BE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100804C1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100804C4: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100804C5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100805CA); /* 0x100804C8: call 0x100805ca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100804CD: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100804D0: mov esi, eax */
    goto L_100805A9; /* 0x100804D2: jmp 0x100805a9 */
L_100804D7:
    PUSH32(esp, edi); /* 0x100804D7: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100804D8: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x100804DD: add eax, 5 */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x100804E0: push 1 */
    PUSH32(esp, eax); /* 0x100804E2: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x100804E3: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_10011208); /* 0x100804E6: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100804EB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100804ED: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x100804F0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100804F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100804FF; /* 0x100804F5: jne 0x100804ff */
L_100804F7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100804F7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100805B6; /* 0x100804FA: jmp 0x100805b6 */
L_100804FF:
    PUSH32(esp, edi); /* 0x100804FF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10080500: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x10080503: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x10080504: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080509: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008050C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805BD; /* 0x1008050E: jne 0x100805bd */
L_10080514:
    PUSH32(esp, edi); /* 0x10080514: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10080515: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1008051A: add eax, esi */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1008051C: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1008051D: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10080520: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x10080525: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x10080528: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1008052B: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1008052D: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008052F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x10080531: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10080533: mov dword ptr [ebp - 0x10], eax */
    eax = 0x100E146Cu; /* 0x10080536: mov eax, 0x100e146c */
    MEM32(ebp + (-0xC)) = edx; /* 0x1008053B: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008053E: mov dword ptr [ebp - 4], eax */
L_10080541:
    PUSH32(esp, MEM32(eax)); /* 0x10080541: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x10080543: push edx */
    PUSH32(esp, ecx); /* 0x10080544: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x10080545: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008054A: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1008054D: push esi */
    /* test eax, eax */ /* 0x1008054E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805C0; /* 0x10080550: jne 0x100805c0 */
L_10080552:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080552: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1007E270); /* 0x10080555: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008055A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008055B: pop ecx */
    /* test eax, eax */ /* 0x1008055C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008057B; /* 0x1008055E: je 0x1008057b */
L_10080560:
    eax = MEM32(ebp + (-0x4)); /* 0x10080560: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x10080563: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10080566: sub eax, 4 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xC)); /* 0x10080569: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008056C: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0x100E1460u */ /* 0x1008056F: cmp eax, 0x100e1460 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1460u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10080541; /* 0x10080574: jge 0x10080541 */
L_10080576:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10080576: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008059B; /* 0x10080579: jmp 0x1008059b */
L_1008057B:
    RECOMP_CALL(sub_1001177D); /* 0x1008057B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10080580: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x10)); /* 0x10080583: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080586: push dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x10080589: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008058B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008058E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100805CA); /* 0x10080591: call 0x100805ca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10080596: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10080599: mov esi, eax */
L_1008059B:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008059B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008059E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100805A3: pop ecx */
    goto L_100805A9; /* 0x100805A4: jmp 0x100805a9 */
L_100805A6:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100805A6: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100805A9:
    /* cmp edi, ebx */ /* 0x100805A9: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100805B4; /* 0x100805AB: je 0x100805b4 */
L_100805AD:
    PUSH32(esp, edi); /* 0x100805AD: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100805AE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100805B3: pop ecx */
L_100805B4:
    eax = esi; /* 0x100805B4: mov eax, esi */
L_100805B6:
    esi = POP32_VAL(esp); /* 0x100805B6: pop esi */
L_100805B7:
    edi = POP32_VAL(esp); /* 0x100805B7: pop edi */
    ebx = POP32_VAL(esp); /* 0x100805B8: pop ebx */
    esp = ebp; /* 0x100805B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100805BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100805BC: ret  */
L_100805BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100805BD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100805BF: push esi */
L_100805C0:
    PUSH32(esp, esi); /* 0x100805C0: push esi */
    PUSH32(esp, esi); /* 0x100805C1: push esi */
    PUSH32(esp, esi); /* 0x100805C2: push esi */
    PUSH32(esp, esi); /* 0x100805C3: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100805C4: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100805C9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100805CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100805CAu);

L_100805CA:
    PUSH32(esp, ebp); /* 0x100805CA: push ebp */
    ebp = esp; /* 0x100805CB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100805CD: push ecx */
    PUSH32(esp, esi); /* 0x100805CE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100805CF: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100805D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100805EB; /* 0x100805D4: jne 0x100805eb */
L_100805D6:
    RECOMP_CALL(sub_1001177D); /* 0x100805D6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100805DB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100805E1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100805E6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100805E6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080633; /* 0x100805E9: jmp 0x10080633 */
L_100805EB:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100805EB: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100805D6; /* 0x100805EF: je 0x100805d6 */
L_100805F1:
    PUSH32(esp, esi); /* 0x100805F1: push esi */
    eax = ebp + (-0x4); /* 0x100805F2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100805F5: push eax */
    eax = ebp + 0xC; /* 0x100805F6: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100805F9: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100805FA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100805FD: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1007F5EB); /* 0x10080600: call 0x1007f5eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10080605: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10080608: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100805E6; /* 0x1008060B: je 0x100805e6 */
L_1008060D:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1008060D: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080610: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10080613: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080614: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007F9C2); /* 0x10080617: call 0x1007f9c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008061C: push dword ptr [ebp + 0xc] */
    esi = eax; /* 0x1008061F: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080621: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10080626: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080629: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008062E: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10080631: mov eax, esi */
L_10080633:
    esi = POP32_VAL(esp); /* 0x10080633: pop esi */
    esp = ebp; /* 0x10080634: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10080636: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080637: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080638u);

L_10080638:
    PUSH32(esp, ebp); /* 0x10080638: push ebp */
    ebp = esp; /* 0x10080639: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008063B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008063D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080640: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080643: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10080650); /* 0x10080646: call 0x10080650 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008064B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008064E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008064F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080650u);

L_10080650:
    PUSH32(esp, ebp); /* 0x10080650: push ebp */
    ebp = esp; /* 0x10080651: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10080653: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10080656: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1008065A: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1008065B: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1008065E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008065F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x10080661: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008067D; /* 0x10080663: jne 0x1008067d */
L_10080665:
    RECOMP_CALL(sub_1001177D); /* 0x10080665: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008066A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080670: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080675: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100808AF; /* 0x10080678: jmp 0x100808af */
L_1008067D:
    /* cmp MEM8(ebx), 0 */ /* 0x1008067D: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080665; /* 0x10080680: je 0x10080665 */
L_10080682:
    PUSH32(esp, esi); /* 0x10080682: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10080683: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x10080686: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080695; /* 0x10080688: je 0x10080695 */
L_1008068A:
    eax = MEM32(esi); /* 0x1008068A: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1008068C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080695; /* 0x1008068E: je 0x10080695 */
L_10080690:
    /* cmp MEM8(eax), 0 */ /* 0x10080690: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100806AD; /* 0x10080693: jne 0x100806ad */
L_10080695:
    RECOMP_CALL(sub_1001177D); /* 0x10080695: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008069A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100806A0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100806A5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100808AE; /* 0x100806A8: jmp 0x100808ae */
L_100806AD:
    RECOMP_CALL(sub_1001177D); /* 0x100806AD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100806B2: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100806B4: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1001177D); /* 0x100806B7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100806BC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x100806BF: push esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    MEM32(eax) = MEM32(eax) & edi; /* 0x100806C0: and dword ptr [eax], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100806C2: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100806C3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100803D9); /* 0x100806C6: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100806CB: mov esi, eax */
    MEM32(ebp + 0xC) = eax; /* 0x100806CD: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100806D0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100806D3: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008087E; /* 0x100806D6: jne 0x1008087e */
L_100806DC:
    RECOMP_CALL(sub_1001177D); /* 0x100806DC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x100806E1: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008087E; /* 0x100806E4: jne 0x1008087e */
L_100806EA:
    PUSH32(esp, 0x2Fu); /* 0x100806EA: push 0x2f */
    PUSH32(esp, ebx); /* 0x100806EC: push ebx */
    RECOMP_CALL(sub_100312F9); /* 0x100806ED: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100806F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100806F3: pop ecx */
    /* test eax, eax */ /* 0x100806F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008087E; /* 0x100806F6: jne 0x1008087e */
L_100806FC:
    PUSH32(esp, 0x1006215Cu); /* 0x100806FC: push 0x1006215c */
    PUSH32(esp, eax); /* 0x10080701: push eax */
    eax = ebp + (-0x4); /* 0x10080702: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10080705: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x10080706: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008070B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008070E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080720; /* 0x10080710: je 0x10080720 */
L_10080712:
    /* cmp eax, 0x16u */ /* 0x10080712: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100808B5; /* 0x10080715: je 0x100808b5 */
L_1008071B:
    goto L_1008087E; /* 0x1008071B: jmp 0x1008087e */
L_10080720:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x10080720: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008087E; /* 0x10080723: je 0x1008087e */
L_10080729:
    PUSH32(esp, 1); /* 0x10080729: push 1 */
    PUSH32(esp, 0x104u); /* 0x1008072B: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x10080730: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10080735: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10080737: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080738: pop ecx */
    /* test edi, edi */ /* 0x10080739: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008087E; /* 0x1008073B: je 0x1008087e */
L_10080741:
    PUSH32(esp, 0x103u); /* 0x10080741: push 0x103 */
    PUSH32(esp, edi); /* 0x10080746: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10080747: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100A525C); /* 0x1008074A: call 0x100a525c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008074F: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x10080752: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x10080755: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008087E; /* 0x10080757: je 0x1008087e */
L_1008075D:
    /* cmp MEM8(edi), 0 */ /* 0x1008075D: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008087B; /* 0x10080760: je 0x1008087b */
L_10080766:
    PUSH32(esp, edi); /* 0x10080766: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10080767: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = edi + (-0x1); /* 0x1008076C: lea esi, [edi - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008076F: add esi, eax */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x10080771: pop ecx */
    SET_LO8(eax, MEM8(esi)); /* 0x10080772: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x10080774: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008079B; /* 0x10080776: jne 0x1008079b */
L_10080778:
    PUSH32(esp, 0x5Cu); /* 0x10080778: push 0x5c */
    PUSH32(esp, edi); /* 0x1008077A: push edi */
    RECOMP_CALL(sub_1008E5B2); /* 0x1008077B: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080780: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080781: pop ecx */
    /* cmp esi, eax */ /* 0x10080782: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100807BA; /* 0x10080784: je 0x100807ba */
L_10080786:
    PUSH32(esp, 0x10062164u); /* 0x10080786: push 0x10062164 */
    PUSH32(esp, 0x104u); /* 0x1008078B: push 0x104 */
    PUSH32(esp, edi); /* 0x10080790: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x10080791: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080796: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100807BA; /* 0x10080799: jmp 0x100807ba */
L_1008079B:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1008079B: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100807BA; /* 0x1008079D: je 0x100807ba */
L_1008079F:
    PUSH32(esp, 0x10062164u); /* 0x1008079F: push 0x10062164 */
    PUSH32(esp, 0x104u); /* 0x100807A4: push 0x104 */
    PUSH32(esp, edi); /* 0x100807A9: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x100807AA: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100807AF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100807B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100808B5; /* 0x100807B4: jne 0x100808b5 */
L_100807BA:
    PUSH32(esp, edi); /* 0x100807BA: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100807BB: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x100807C0: push ebx */
    esi = eax; /* 0x100807C1: mov esi, eax */
    RECOMP_CALL(sub_100129AF); /* 0x100807C3: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100807C8: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x100807CA: mov eax, 0x104 */
    ecx = POP32_VAL(esp); /* 0x100807CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100807D0: pop ecx */
    /* cmp esi, eax */ /* 0x100807D1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008087B; /* 0x100807D3: jae 0x1008087b */
L_100807D9:
    PUSH32(esp, ebx); /* 0x100807D9: push ebx */
    PUSH32(esp, eax); /* 0x100807DA: push eax */
    PUSH32(esp, edi); /* 0x100807DB: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x100807DC: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100807E1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100807E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100808B5; /* 0x100807E6: jne 0x100808b5 */
L_100807EC:
    RECOMP_CALL(sub_1001177D); /* 0x100807EC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100807F1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100807F4: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100807F7: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100807FA: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100807FB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100803D9); /* 0x100807FE: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10080803: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10080805: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x10080808: mov dword ptr [ebp + 0xc], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1008080B: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008087E; /* 0x1008080E: jne 0x1008087e */
L_10080810:
    RECOMP_CALL(sub_1001177D); /* 0x10080810: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10080815: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008085F; /* 0x10080818: je 0x1008085f */
L_1008081A:
    RECOMP_CALL(sub_1001E471); /* 0x1008081A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x15u */ /* 0x1008081F: cmp dword ptr [eax], 0x15 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008085F; /* 0x10080822: je 0x1008085f */
L_10080824:
    PUSH32(esp, 0x5Cu); /* 0x10080824: push 0x5c */
    PUSH32(esp, edi); /* 0x10080826: push edi */
    RECOMP_CALL(sub_100312F9); /* 0x10080827: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008082C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008082D: pop ecx */
    /* cmp edi, eax */ /* 0x1008082E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080840; /* 0x10080830: je 0x10080840 */
L_10080832:
    PUSH32(esp, 0x2Fu); /* 0x10080832: push 0x2f */
    PUSH32(esp, edi); /* 0x10080834: push edi */
    RECOMP_CALL(sub_100312F9); /* 0x10080835: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008083A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008083B: pop ecx */
    /* cmp edi, eax */ /* 0x1008083C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008087B; /* 0x1008083E: jne 0x1008087b */
L_10080840:
    esi = edi + 0x1; /* 0x10080840: lea esi, [edi + 1] */
    PUSH32(esp, 0x5Cu); /* 0x10080843: push 0x5c */
    PUSH32(esp, esi); /* 0x10080845: push esi */
    RECOMP_CALL(sub_100312F9); /* 0x10080846: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008084B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008084C: pop ecx */
    /* cmp esi, eax */ /* 0x1008084D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008085F; /* 0x1008084F: je 0x1008085f */
L_10080851:
    PUSH32(esp, 0x2Fu); /* 0x10080851: push 0x2f */
    PUSH32(esp, esi); /* 0x10080853: push esi */
    RECOMP_CALL(sub_100312F9); /* 0x10080854: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080859: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008085A: pop ecx */
    /* cmp esi, eax */ /* 0x1008085B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008087B; /* 0x1008085D: jne 0x1008087b */
L_1008085F:
    PUSH32(esp, 0x103u); /* 0x1008085F: push 0x103 */
    PUSH32(esp, edi); /* 0x10080864: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x10080865: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100A525C); /* 0x10080868: call 0x100a525c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008086D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x10080870: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x10080873: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008075D; /* 0x10080875: jne 0x1008075d */
L_1008087B:
    esi = MEM32(ebp + 0xC); /* 0x1008087B: mov esi, dword ptr [ebp + 0xc] */
L_1008087E:
    RECOMP_CALL(sub_1001177D); /* 0x1008087E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0 */ /* 0x10080883: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080892; /* 0x10080886: jne 0x10080892 */
L_10080888:
    RECOMP_CALL(sub_1001177D); /* 0x10080888: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008088D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x10080890: mov dword ptr [eax], ecx */
L_10080892:
    /* test edi, edi */ /* 0x10080892: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008089D; /* 0x10080894: je 0x1008089d */
L_10080896:
    PUSH32(esp, edi); /* 0x10080896: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080897: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008089C: pop ecx */
L_1008089D:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1008089D: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100808AC; /* 0x100808A1: je 0x100808ac */
L_100808A3:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100808A3: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100808A6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100808AB: pop ecx */
L_100808AC:
    eax = esi; /* 0x100808AC: mov eax, esi */
L_100808AE:
    esi = POP32_VAL(esp); /* 0x100808AE: pop esi */
L_100808AF:
    edi = POP32_VAL(esp); /* 0x100808AF: pop edi */
    ebx = POP32_VAL(esp); /* 0x100808B0: pop ebx */
    esp = ebp; /* 0x100808B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100808B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100808B4: ret  */
L_100808B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100808B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100808B7: push eax */
    PUSH32(esp, eax); /* 0x100808B8: push eax */
    PUSH32(esp, eax); /* 0x100808B9: push eax */
    PUSH32(esp, eax); /* 0x100808BA: push eax */
    PUSH32(esp, eax); /* 0x100808BB: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100808BC: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100808C1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100808C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100808C2u);

L_100808C2:
    PUSH32(esp, ebp); /* 0x100808C2: push ebp */
    ebp = esp; /* 0x100808C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100808C5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100808C8: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100808CD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100808CF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100808D2: push ebx */
    PUSH32(esp, esi); /* 0x100808D3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100808D4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x100808D6: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x10062168u); /* 0x100808D9: push 0x10062168 */
    PUSH32(esp, ebx); /* 0x100808DE: push ebx */
    PUSH32(esp, eax); /* 0x100808DF: push eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x100808E0: mov dword ptr [ebp - 0x18], ebx */
    esi = ebx; /* 0x100808E3: mov esi, ebx */
    RECOMP_CALL(sub_100A5072); /* 0x100808E5: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100808EA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100808ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100808FA; /* 0x100808EF: je 0x100808fa */
L_100808F1:
    /* cmp eax, 0x16u */ /* 0x100808F1: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100809AC; /* 0x100808F4: je 0x100809ac */
L_100808FA:
    ecx = MEM32(ebp + 0x8); /* 0x100808FA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x100808FD: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10080900: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x10080903: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008091F; /* 0x10080905: jne 0x1008091f */
L_10080907:
    /* test eax, eax */ /* 0x10080907: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080993; /* 0x10080909: je 0x10080993 */
L_1008090F:
    PUSH32(esp, ebx); /* 0x1008090F: push ebx */
    PUSH32(esp, eax); /* 0x10080910: push eax */
    RECOMP_CALL(sub_1007E270); /* 0x10080911: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10080916: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10080918: pop ecx */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10080919: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x1008091B: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008091C: inc esi */
    _flag_k = FK_INC;
    goto L_10080990; /* 0x1008091D: jmp 0x10080990 */
L_1008091F:
    MEM32(ebp + (-0x10)) = 0x100809B8u; /* 0x1008091F: mov dword ptr [ebp - 0x10], 0x100809b8 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10080926: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10080929: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x1008092C: push edi */
    /* test eax, eax */ /* 0x1008092D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080976; /* 0x1008092F: je 0x10080976 */
L_10080931:
    RECOMP_CALL(sub_1001177D); /* 0x10080931: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x10080936: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_1001177D); /* 0x10080938: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1008093D: push ebx */
    MEM32(eax) = ebx; /* 0x1008093E: mov dword ptr [eax], ebx */
    eax = ebp + (-0x14); /* 0x10080940: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10080943: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x10080944: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x10080947: push ebx */
    RECOMP_CALL(sub_100803D9); /* 0x10080948: call 0x100803d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008094D: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10080950: mov esi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x10080952: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10080957: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080960; /* 0x1008095A: je 0x10080960 */
L_1008095C:
    MEM32(eax) = edi; /* 0x1008095C: mov dword ptr [eax], edi */
    goto L_1008098F; /* 0x1008095E: jmp 0x1008098f */
L_10080960:
    /* cmp MEM32(eax), 2 */ /* 0x10080960: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008096F; /* 0x10080963: je 0x1008096f */
L_10080965:
    RECOMP_CALL(sub_1001177D); /* 0x10080965: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x1008096A: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008098F; /* 0x1008096D: jne 0x1008098f */
L_1008096F:
    RECOMP_CALL(sub_1001177D); /* 0x1008096F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x10080974: mov dword ptr [eax], edi */
L_10080976:
    PUSH32(esp, ebx); /* 0x10080976: push ebx */
    eax = ebp + (-0x14); /* 0x10080977: lea eax, [ebp - 0x14] */
    ecx = 0x10062170u; /* 0x1008097A: mov ecx, 0x10062170 */
    PUSH32(esp, eax); /* 0x1008097F: push eax */
    PUSH32(esp, ecx); /* 0x10080980: push ecx */
    PUSH32(esp, ebx); /* 0x10080981: push ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10080982: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10080650); /* 0x10080985: call 0x10080650 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008098A: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008098D: mov esi, eax */
L_1008098F:
    edi = POP32_VAL(esp); /* 0x1008098F: pop edi */
L_10080990:
    eax = MEM32(ebp + (-0x18)); /* 0x10080990: mov eax, dword ptr [ebp - 0x18] */
L_10080993:
    PUSH32(esp, eax); /* 0x10080993: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080994: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080999: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1008099A: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x1008099D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008099F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100809A0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100809A2: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100809A3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100809A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100809AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100809AB: ret  */
L_100809AC:
    PUSH32(esp, ebx); /* 0x100809AC: push ebx */
    PUSH32(esp, ebx); /* 0x100809AD: push ebx */
    PUSH32(esp, ebx); /* 0x100809AE: push ebx */
    PUSH32(esp, ebx); /* 0x100809AF: push ebx */
    PUSH32(esp, ebx); /* 0x100809B0: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100809B1: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100809B6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100809B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100809B8u);

L_100809B8:
    void_lift_trap(0x100809B8u, "das ");
    void_lift_trap(0x100809B9u, "arpl word ptr [eax], ax");
    PUSH32(esp, ebp); /* 0x100809BB: push ebp */
    ebp = esp; /* 0x100809BC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100809BE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100809BF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100809C2: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100809C3: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x100809C6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A36; /* 0x100809C8: je 0x10080a36 */
L_100809CA:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100809CA: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A36; /* 0x100809CD: je 0x10080a36 */
L_100809CF:
    PUSH32(esp, edi); /* 0x100809CF: push edi */
    PUSH32(esp, esi); /* 0x100809D0: push esi */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x100809D1: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100809D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100809EE; /* 0x100809D9: jne 0x100809ee */
L_100809DB:
    eax = ebp + 0xC; /* 0x100809DB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100809DE: push eax */
    PUSH32(esp, esi); /* 0x100809DF: push esi */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x100809E0: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100809E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100809EE; /* 0x100809E8: je 0x100809ee */
L_100809EA:
    edi = esi; /* 0x100809EA: mov edi, esi */
    goto L_10080A21; /* 0x100809EC: jmp 0x10080a21 */
L_100809EE:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100809EE: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 6 */ /* 0x100809F4: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080A11; /* 0x100809F7: jne 0x10080a11 */
L_100809F9:
    RECOMP_CALL(sub_1001177D); /* 0x100809F9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x100809FE: mov dword ptr [eax], 0xa */
    RECOMP_CALL(sub_1001E471); /* 0x10080A04: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 6; /* 0x10080A09: mov dword ptr [eax], 6 */
    goto L_10080A1E; /* 0x10080A0F: jmp 0x10080a1e */
L_10080A11:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10080A11: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10080A17: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10080A18: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080A1D: pop ecx */
L_10080A1E:
    MEM32(ebp + 0xC) = edi; /* 0x10080A1E: mov dword ptr [ebp + 0xc], edi */
L_10080A21:
    PUSH32(esp, esi); /* 0x10080A21: push esi */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10080A22: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10080A28: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10080A2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080A41; /* 0x10080A2D: je 0x10080a41 */
L_10080A2F:
    ecx = MEM32(ebp + 0xC); /* 0x10080A2F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x10080A32: mov dword ptr [eax], ecx */
    goto L_10080A41; /* 0x10080A34: jmp 0x10080a41 */
L_10080A36:
    RECOMP_CALL(sub_1001177D); /* 0x10080A36: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x10080A3B: mov dword ptr [eax], 0xa */
L_10080A41:
    eax = edi; /* 0x10080A41: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10080A43: pop edi */
    esi = POP32_VAL(esp); /* 0x10080A44: pop esi */
    ebp = POP32_VAL(esp); /* 0x10080A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080A46: ret  */
    RECOMP_REGS_OUT();
}

void sub_100809BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100809BBu);

L_100809BB:
    PUSH32(esp, ebp); /* 0x100809BB: push ebp */
    ebp = esp; /* 0x100809BC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100809BE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100809BF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100809C2: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100809C3: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x100809C6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A36; /* 0x100809C8: je 0x10080a36 */
L_100809CA:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x100809CA: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A36; /* 0x100809CD: je 0x10080a36 */
L_100809CF:
    PUSH32(esp, edi); /* 0x100809CF: push edi */
    PUSH32(esp, esi); /* 0x100809D0: push esi */
    RECOMP_ICALL(MEM32(0x100E50E4)); /* 0x100809D1: call dword ptr [0x100e50e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100809D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100809EE; /* 0x100809D9: jne 0x100809ee */
L_100809DB:
    eax = ebp + 0xC; /* 0x100809DB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100809DE: push eax */
    PUSH32(esp, esi); /* 0x100809DF: push esi */
    RECOMP_ICALL(MEM32(0x100E50E8)); /* 0x100809E0: call dword ptr [0x100e50e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100809E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100809EE; /* 0x100809E8: je 0x100809ee */
L_100809EA:
    edi = esi; /* 0x100809EA: mov edi, esi */
    goto L_10080A21; /* 0x100809EC: jmp 0x10080a21 */
L_100809EE:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100809EE: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 6 */ /* 0x100809F4: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080A11; /* 0x100809F7: jne 0x10080a11 */
L_100809F9:
    RECOMP_CALL(sub_1001177D); /* 0x100809F9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x100809FE: mov dword ptr [eax], 0xa */
    RECOMP_CALL(sub_1001E471); /* 0x10080A04: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 6; /* 0x10080A09: mov dword ptr [eax], 6 */
    goto L_10080A1E; /* 0x10080A0F: jmp 0x10080a1e */
L_10080A11:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10080A11: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10080A17: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10080A18: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080A1D: pop ecx */
L_10080A1E:
    MEM32(ebp + 0xC) = edi; /* 0x10080A1E: mov dword ptr [ebp + 0xc], edi */
L_10080A21:
    PUSH32(esp, esi); /* 0x10080A21: push esi */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10080A22: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10080A28: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10080A2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080A41; /* 0x10080A2D: je 0x10080a41 */
L_10080A2F:
    ecx = MEM32(ebp + 0xC); /* 0x10080A2F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x10080A32: mov dword ptr [eax], ecx */
    goto L_10080A41; /* 0x10080A34: jmp 0x10080a41 */
L_10080A36:
    RECOMP_CALL(sub_1001177D); /* 0x10080A36: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x10080A3B: mov dword ptr [eax], 0xa */
L_10080A41:
    eax = edi; /* 0x10080A41: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10080A43: pop edi */
    esi = POP32_VAL(esp); /* 0x10080A44: pop esi */
    ebp = POP32_VAL(esp); /* 0x10080A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080A46: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080A47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080A47u);

L_10080A47:
    PUSH32(esp, ebp); /* 0x10080A47: push ebp */
    ebp = esp; /* 0x10080A48: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10080A4A: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10080A4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080A66; /* 0x10080A4F: jne 0x10080a66 */
L_10080A51:
    RECOMP_CALL(sub_1001177D); /* 0x10080A51: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080A56: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080A5C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080A61: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080A64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080A65: ret  */
L_10080A66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10080A66: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x10080A68: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A51; /* 0x10080A6B: je 0x10080a51 */
L_10080A6D:
    ecx = MEM32(ebp + 0xC); /* 0x10080A6D: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10080A70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080A51; /* 0x10080A72: je 0x10080a51 */
L_10080A74:
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x10080A74: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080A51; /* 0x10080A77: je 0x10080a51 */
L_10080A79:
    PUSH32(esp, edx); /* 0x10080A79: push edx */
    ecx = ebp + 0xC; /* 0x10080A7A: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x10080A7D: push ecx */
    PUSH32(esp, eax); /* 0x10080A7E: push eax */
    RECOMP_CALL(sub_10080BDA); /* 0x10080A7F: call 0x10080bda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080A84: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10080A87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080A88: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080A89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080A89u);

L_10080A89:
    PUSH32(esp, ebp); /* 0x10080A89: push ebp */
    ebp = esp; /* 0x10080A8A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10080A8C: mov edx, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x10080A8F: lea ecx, [ebp + 0xc] */
    /* test edx, edx */ /* 0x10080A92: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080AAB; /* 0x10080A94: jne 0x10080aab */
L_10080A96:
    RECOMP_CALL(sub_1001177D); /* 0x10080A96: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080A9B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080AA1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080AA6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080AA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080AAA: ret  */
L_10080AAB:
    PUSH32(esp, esi); /* 0x10080AAB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10080AAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x10080AAE: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080ABF; /* 0x10080AB1: je 0x10080abf */
L_10080AB3:
    eax = MEM32(ebp + 0xC); /* 0x10080AB3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080AB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080ABF; /* 0x10080AB8: je 0x10080abf */
L_10080ABA:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x10080ABA: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080AD4; /* 0x10080ABD: jne 0x10080ad4 */
L_10080ABF:
    RECOMP_CALL(sub_1001177D); /* 0x10080ABF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080AC4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080ACA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080ACF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080AEC; /* 0x10080AD2: jmp 0x10080aec */
L_10080AD4:
    eax = MEM32(ecx); /* 0x10080AD4: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x10080AD6: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x10080AD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080AD4; /* 0x10080ADB: jne 0x10080ad4 */
L_10080ADD:
    PUSH32(esp, MEM32(ecx)); /* 0x10080ADD: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x10080ADF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10080AE2: push eax */
    PUSH32(esp, edx); /* 0x10080AE3: push edx */
    RECOMP_CALL(sub_10080BDA); /* 0x10080AE4: call 0x10080bda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080AE9: add esp, 0xc */
    _flag_k = FK_ADD;
L_10080AEC:
    esi = POP32_VAL(esp); /* 0x10080AEC: pop esi */
    ebp = POP32_VAL(esp); /* 0x10080AED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080AEE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080AEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080AEFu);

L_10080AEF:
    PUSH32(esp, ebp); /* 0x10080AEF: push ebp */
    ebp = esp; /* 0x10080AF0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10080AF2: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10080AF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080B0E; /* 0x10080AF7: jne 0x10080b0e */
L_10080AF9:
    RECOMP_CALL(sub_1001177D); /* 0x10080AF9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080AFE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080B04: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080B09: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080B0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080B0D: ret  */
L_10080B0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10080B0E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x10080B10: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080AF9; /* 0x10080B13: je 0x10080af9 */
L_10080B15:
    ecx = MEM32(ebp + 0xC); /* 0x10080B15: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10080B18: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080AF9; /* 0x10080B1A: je 0x10080af9 */
L_10080B1C:
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x10080B1C: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080AF9; /* 0x10080B1F: je 0x10080af9 */
L_10080B21:
    ecx = ebp + 0xC; /* 0x10080B21: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x10080B24: push ecx */
    PUSH32(esp, eax); /* 0x10080B25: push eax */
    RECOMP_CALL(sub_10080E33); /* 0x10080B26: call 0x10080e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080B2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080B2C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10080B2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080B2E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080B2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080B2Fu);

L_10080B2F:
    PUSH32(esp, ebp); /* 0x10080B2F: push ebp */
    ebp = esp; /* 0x10080B30: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10080B32: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x10080B35: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080B4E; /* 0x10080B37: jne 0x10080b4e */
L_10080B39:
    RECOMP_CALL(sub_1001177D); /* 0x10080B39: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080B3E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080B44: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080B49: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080B4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080B4D: ret  */
L_10080B4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10080B4E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(ecx) */ /* 0x10080B50: cmp word ptr [edx], cx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080B39; /* 0x10080B53: je 0x10080b39 */
L_10080B55:
    eax = MEM32(ebp + 0xC); /* 0x10080B55: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080B58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080B39; /* 0x10080B5A: je 0x10080b39 */
L_10080B5C:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10080B5C: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080B39; /* 0x10080B5F: je 0x10080b39 */
L_10080B61:
    ecx = ebp + 0xC; /* 0x10080B61: lea ecx, [ebp + 0xc] */
L_10080B64:
    eax = MEM32(ecx); /* 0x10080B64: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x10080B66: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x10080B69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080B64; /* 0x10080B6B: jne 0x10080b64 */
L_10080B6D:
    PUSH32(esp, MEM32(ecx)); /* 0x10080B6D: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x10080B6F: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10080B72: push eax */
    PUSH32(esp, edx); /* 0x10080B73: push edx */
    RECOMP_CALL(sub_10080E48); /* 0x10080B74: call 0x10080e48 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080B79: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10080B7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080B7D: ret  */
    RECOMP_REGS_OUT();
}
