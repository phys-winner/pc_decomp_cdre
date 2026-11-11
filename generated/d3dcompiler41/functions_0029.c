#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_161ADD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADD60u);

L_161ADD60:
    PUSH32(esp, ebx); /* 0x161ADD60: push ebx */
    PUSH32(esp, esi); /* 0x161ADD61: push esi */
    PUSH32(esp, edi); /* 0x161ADD62: push edi */
    edx = MEM32(esp + 0x10); /* 0x161ADD63: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x14); /* 0x161ADD67: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x161ADD6B: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebp); /* 0x161ADD6F: push ebp */
    PUSH32(esp, edx); /* 0x161ADD70: push edx */
    PUSH32(esp, eax); /* 0x161ADD71: push eax */
    PUSH32(esp, ecx); /* 0x161ADD72: push ecx */
    PUSH32(esp, ecx); /* 0x161ADD73: push ecx */
    PUSH32(esp, 0x161ADDF0u); /* 0x161ADD74: push 0x161addf0 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x161ADD79: push dword ptr fs:[0] */
    eax = MEM32(0x161B2070); /* 0x161ADD80: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x161ADD85: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x161ADD87: mov dword ptr [esp + 8], eax */
    MEM32(FS_BASE + (0)) = esp; /* 0x161ADD8B: mov dword ptr fs:[0], esp */
L_161ADD92:
    eax = MEM32(esp + 0x30); /* 0x161ADD92: mov eax, dword ptr [esp + 0x30] */
    ebx = MEM32(eax + 0x8); /* 0x161ADD96: mov ebx, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x161ADD99: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x161ADD9D: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0xC); /* 0x161ADD9F: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x161ADDA2: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADDE2; /* 0x161ADDA5: je 0x161adde2 */
L_161ADDA7:
    edx = MEM32(esp + 0x34); /* 0x161ADDA7: mov edx, dword ptr [esp + 0x34] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x161ADDAB: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADDB4; /* 0x161ADDAE: je 0x161addb4 */
L_161ADDB0:
    /* cmp esi, edx */ /* 0x161ADDB0: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161ADDE2; /* 0x161ADDB2: jbe 0x161adde2 */
L_161ADDB4:
    esi = esi + esi * 2; /* 0x161ADDB4: lea esi, [esi + esi*2] */
    ebx = ebx + esi * 4 + 0x10; /* 0x161ADDB7: lea ebx, [ebx + esi*4 + 0x10] */
    ecx = MEM32(ebx); /* 0x161ADDBB: mov ecx, dword ptr [ebx] */
    MEM32(eax + 0xC) = ecx; /* 0x161ADDBD: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x161ADDC0: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADD92; /* 0x161ADDC4: jne 0x161add92 */
L_161ADDC6:
    PUSH32(esp, 0x101u); /* 0x161ADDC6: push 0x101 */
    eax = MEM32(ebx + 0x8); /* 0x161ADDCB: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_161AE865); /* 0x161ADDCE: call 0x161ae865 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x161ADDD3: mov ecx, 1 */
    eax = MEM32(ebx + 0x8); /* 0x161ADDD8: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_161AE884); /* 0x161ADDDB: call 0x161ae884 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161ADD92; /* 0x161ADDE0: jmp 0x161add92 */
L_161ADDE2:
    POP32(esp, MEM32(FS_BASE + (0))); /* 0x161ADDE2: pop dword ptr fs:[0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161ADDE9: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x161ADDEC: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADDED: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ADDEE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADDEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADDF0u);

L_161ADDF0:
    ecx = MEM32(esp + 0x4); /* 0x161ADDF0: mov ecx, dword ptr [esp + 4] */
    /* test MEM32(ecx + 0x4), 6 */ /* 0x161ADDF4: test dword ptr [ecx + 4], 6 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x161ADDFB: mov eax, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ADE35; /* 0x161ADE00: je 0x161ade35 */
L_161ADE02:
    eax = MEM32(esp + 0x8); /* 0x161ADE02: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x8); /* 0x161ADE06: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x161ADE09: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_161ADCF5); /* 0x161ADE0B: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x161ADE10: push ebp */
    ebp = MEM32(eax + 0x18); /* 0x161ADE11: mov ebp, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x161ADE14: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x161ADE17: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x161ADE1A: push dword ptr [eax + 0x14] */
    RECOMP_CALL(sub_161ADD60); /* 0x161ADE1D: call 0x161add60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161ADE22: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x161ADE25: pop ebp */
    eax = MEM32(esp + 0x8); /* 0x161ADE26: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x161ADE2A: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x161ADE2E: mov dword ptr [edx], eax */
    eax = 3; /* 0x161ADE30: mov eax, 3 */
L_161ADE35:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADE35: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADE52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADE52u);

L_161ADE52:
    PUSH32(esp, ebp); /* 0x161ADE52: push ebp */
    PUSH32(esp, esi); /* 0x161ADE53: push esi */
    PUSH32(esp, edi); /* 0x161ADE54: push edi */
    PUSH32(esp, ebx); /* 0x161ADE55: push ebx */
    ebp = edx; /* 0x161ADE56: mov ebp, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ADE58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161ADE5A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161ADE5C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161ADE5E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161ADE60: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ecx); /* 0x161ADE62: call ecx */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x161ADE64: pop ebx */
    edi = POP32_VAL(esp); /* 0x161ADE65: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADE66: pop esi */
    ebp = POP32_VAL(esp); /* 0x161ADE67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADE68: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADE69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADE69u);

L_161ADE69:
    ebp = edx; /* 0x161ADE69: mov ebp, edx */
    esi = ecx; /* 0x161ADE6B: mov esi, ecx */
    eax = ecx; /* 0x161ADE6D: mov eax, ecx */
    PUSH32(esp, 1); /* 0x161ADE6F: push 1 */
    RECOMP_CALL(sub_161AE865); /* 0x161ADE71: call 0x161ae865 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ADE76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161ADE78: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161ADE7A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161ADE7C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161ADE7E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(esi); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161ADE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADE82u);

L_161ADE82:
    PUSH32(esp, ebp); /* 0x161ADE82: push ebp */
    ebp = esp; /* 0x161ADE83: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161ADE85: push ebx */
    PUSH32(esp, esi); /* 0x161ADE86: push esi */
    PUSH32(esp, edi); /* 0x161ADE87: push edi */
    PUSH32(esp, 0); /* 0x161ADE88: push 0 */
    PUSH32(esp, 0); /* 0x161ADE8A: push 0 */
    PUSH32(esp, 0x161ADE97u); /* 0x161ADE8C: push 0x161ade97 */
    PUSH32(esp, ecx); /* 0x161ADE91: push ecx */
    RECOMP_CALL(sub_161AE9DE); /* 0x161ADE92: call 0x161ae9de */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x161ADE97: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADE98: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ADE99: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161ADE9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADE9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADE97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADE97u);

L_161ADE97:
    edi = POP32_VAL(esp); /* 0x161ADE97: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADE98: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ADE99: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161ADE9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADE9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADE9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADE9Cu);

L_161ADE9C:
    PUSH32(esp, ebp); /* 0x161ADE9C: push ebp */
    ebp = MEM32(esp + 0x8); /* 0x161ADE9D: mov ebp, dword ptr [esp + 8] */
    PUSH32(esp, edx); /* 0x161ADEA1: push edx */
    PUSH32(esp, ecx); /* 0x161ADEA2: push ecx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x161ADEA3: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_161ADD60); /* 0x161ADEA7: call 0x161add60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161ADEAC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x161ADEAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161ADEB0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161ADEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADEC0u);

L_161ADEC0:
    edi = edi; /* 0x161ADEC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ADEC2: push ebp */
    ebp = esp; /* 0x161ADEC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x161ADEC5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x161ADEC8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x161ADECB: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x161ADECC: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x161ADECF: push esi */
    esi = MEM32(ebx + 0x8); /* 0x161ADED0: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)((esi ^ MEM32(eax))); _flag_b = (uint32_t)((esi ^ MEM32(eax)));
    esi = esi ^ MEM32(eax); /* 0x161ADED3: xor esi, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x161ADED5: push edi */
    eax = MEM32(esi); /* 0x161ADED6: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x161ADED8: mov byte ptr [ebp - 1], 0 */
    MEM32(ebp + (-0xC)) = 1; /* 0x161ADEDC: mov dword ptr [ebp - 0xc], 1 */
    edi = ebx + 0x10; /* 0x161ADEE3: lea edi, [ebx + 0x10] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x161ADEE6: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADEF6; /* 0x161ADEE9: je 0x161adef6 */
L_161ADEEB:
    ecx = MEM32(esi + 0x4); /* 0x161ADEEB: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ADEEE: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x161ADEF0: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161ADEF3: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
L_161ADEF6:
    ecx = MEM32(esi + 0xC); /* 0x161ADEF6: mov ecx, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x8); /* 0x161ADEF9: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ADEFC: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(edx + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(edx + edi)));
    ecx = ecx ^ MEM32(edx + edi); /* 0x161ADEFE: xor ecx, dword ptr [edx + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161ADF01: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x161ADF04: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax + 0x4), 0x66u */ /* 0x161ADF07: test byte ptr [eax + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE023; /* 0x161ADF0B: jne 0x161ae023 */
L_161ADF11:
    ecx = ebp + (-0x18); /* 0x161ADF11: lea ecx, [ebp - 0x18] */
    MEM32(ebx + (-0x4)) = ecx; /* 0x161ADF14: mov dword ptr [ebx - 4], ecx */
    ebx = MEM32(ebx + 0xC); /* 0x161ADF17: mov ebx, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x161ADF1A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x161ADF1D: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x161ADF20: mov dword ptr [ebp - 0x14], eax */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x161ADF23: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADF88; /* 0x161ADF26: je 0x161adf88 */
L_161ADF28:
    goto L_161ADF30; /* 0x161ADF28: jmp 0x161adf30 */
L_161ADF30:
    edx = ebx + ebx * 2; /* 0x161ADF30: lea edx, [ebx + ebx*2] */
    ecx = MEM32(esi + edx * 4 + 0x14); /* 0x161ADF33: mov ecx, dword ptr [esi + edx*4 + 0x14] */
    eax = esi + edx * 4 + 0x10; /* 0x161ADF37: lea eax, [esi + edx*4 + 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x161ADF3B: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(eax); /* 0x161ADF3E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x161ADF40: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x161ADF43: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ADF5B; /* 0x161ADF45: je 0x161adf5b */
L_161ADF47:
    edx = edi; /* 0x161ADF47: mov edx, edi */
    RECOMP_CALL(sub_161ADE52); /* 0x161ADF49: call 0x161ade52 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x161ADF4E: mov byte ptr [ebp - 1], 1 */
    /* test eax, eax */ /* 0x161ADF52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161ADF92; /* 0x161ADF54: jl 0x161adf92 */
L_161ADF56:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161ADF9B; /* 0x161ADF56: jg 0x161adf9b */
L_161ADF58:
    eax = MEM32(ebp + (-0x8)); /* 0x161ADF58: mov eax, dword ptr [ebp - 8] */
L_161ADF5B:
    ebx = eax; /* 0x161ADF5B: mov ebx, eax */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x161ADF5D: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADF30; /* 0x161ADF60: jne 0x161adf30 */
L_161ADF62:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x161ADF62: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADF88; /* 0x161ADF66: je 0x161adf88 */
L_161ADF68:
    eax = MEM32(esi); /* 0x161ADF68: mov eax, dword ptr [esi] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x161ADF6A: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADF7A; /* 0x161ADF6D: je 0x161adf7a */
L_161ADF6F:
    ecx = MEM32(esi + 0x4); /* 0x161ADF6F: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ADF72: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x161ADF74: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161ADF77: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
L_161ADF7A:
    ecx = MEM32(esi + 0xC); /* 0x161ADF7A: mov ecx, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x8); /* 0x161ADF7D: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ADF80: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(edx + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(edx + edi)));
    ecx = ecx ^ MEM32(edx + edi); /* 0x161ADF82: xor ecx, dword ptr [edx + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161ADF85: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
L_161ADF88:
    eax = MEM32(ebp + (-0xC)); /* 0x161ADF88: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x161ADF8B: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADF8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ADF8D: pop ebx */
    esp = ebp; /* 0x161ADF8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x161ADF90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADF91: ret  */
L_161ADF92:
    MEM32(ebp + (-0xC)) = 0; /* 0x161ADF92: mov dword ptr [ebp - 0xc], 0 */
    RECOMP_BACKEDGE();
    goto L_161ADF68; /* 0x161ADF99: jmp 0x161adf68 */
L_161ADF9B:
    eax = MEM32(ebp + 0x10); /* 0x161ADF9B: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x161ADF9E: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADFCF; /* 0x161ADFA4: jne 0x161adfcf */
L_161ADFA6:
    /* cmp MEM32(0x161BABE4), 0 */ /* 0x161ADFA6: cmp dword ptr [0x161babe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x161BABE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADFCF; /* 0x161ADFAD: je 0x161adfcf */
L_161ADFAF:
    PUSH32(esp, 0x161BABE4u); /* 0x161ADFAF: push 0x161babe4 */
    RECOMP_CALL(sub_161AE529); /* 0x161ADFB4: call 0x161ae529 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x161ADFB9: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x161ADFBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ADFCF; /* 0x161ADFBE: je 0x161adfcf */
L_161ADFC0:
    ecx = MEM32(ebp + 0x10); /* 0x161ADFC0: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x161ADFC3: push 1 */
    PUSH32(esp, ecx); /* 0x161ADFC5: push ecx */
    RECOMP_ICALL(MEM32(0x161BABE4)); /* 0x161ADFC6: call dword ptr [0x161babe4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x161ADFCC: add esp, 8 */
    _flag_k = FK_ADD;
L_161ADFCF:
    ecx = MEM32(ebp + 0x14); /* 0x161ADFCF: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_161ADE82); /* 0x161ADFD2: call 0x161ade82 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x161ADFD7: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x161ADFDA: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADFF0; /* 0x161ADFDD: je 0x161adff0 */
L_161ADFDF:
    edx = MEM32(ebp + 0x8); /* 0x161ADFDF: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x161ADFE2: push edx */
    PUSH32(esp, edi); /* 0x161ADFE3: push edi */
    edx = ebx; /* 0x161ADFE4: mov edx, ebx */
    ecx = eax; /* 0x161ADFE6: mov ecx, eax */
    RECOMP_CALL(sub_161ADE9C); /* 0x161ADFE8: call 0x161ade9c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x161ADFED: mov eax, dword ptr [ebp + 0x14] */
L_161ADFF0:
    ecx = MEM32(ebp + (-0x8)); /* 0x161ADFF0: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0xC) = ecx; /* 0x161ADFF3: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi); /* 0x161ADFF6: mov eax, dword ptr [esi] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x161ADFF8: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AE008; /* 0x161ADFFB: je 0x161ae008 */
L_161ADFFD:
    ecx = MEM32(esi + 0x4); /* 0x161ADFFD: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AE000: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x161AE002: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161AE005: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
L_161AE008:
    ecx = MEM32(esi + 0xC); /* 0x161AE008: mov ecx, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x8); /* 0x161AE00B: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AE00E: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(edx + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(edx + edi)));
    ecx = ecx ^ MEM32(edx + edi); /* 0x161AE010: xor ecx, dword ptr [edx + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x161AE013: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x161AE016: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax + 0x8); /* 0x161AE019: mov ecx, dword ptr [eax + 8] */
    edx = edi; /* 0x161AE01C: mov edx, edi */
    RECOMP_CALL(sub_161ADE69); /* 0x161AE01E: call 0x161ade69 */
    RECOMP_FLAGS_IN();
L_161AE023:
    edx = 0xFFFFFFFEu; /* 0x161AE023: mov edx, 0xfffffffe */
    /* cmp MEM32(ebx + 0xC), edx */ /* 0x161AE028: cmp dword ptr [ebx + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADF88; /* 0x161AE02B: je 0x161adf88 */
L_161AE031:
    ecx = MEM32(ebp + 0x8); /* 0x161AE031: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x161AE034: push ecx */
    PUSH32(esp, edi); /* 0x161AE035: push edi */
    ecx = ebx; /* 0x161AE036: mov ecx, ebx */
    RECOMP_CALL(sub_161ADE9C); /* 0x161AE038: call 0x161ade9c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161ADF68; /* 0x161AE03D: jmp 0x161adf68 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AE05F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE05Fu);

L_161AE05F:
    PUSH32(esp, ebp); /* 0x161AE05F: push ebp */
    ebp = esp; /* 0x161AE060: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x161AE062: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x161AE065: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x161AE068: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE06A: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x161AE06E: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x161AE072: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x161AE076: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x161AE07A: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x161AE07E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE0BE; /* 0x161AE080: je 0x161ae0be */
L_161AE082:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x161AE082: fsubp st(1) */
    /* test edx, edx */ /* 0x161AE084: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AE0A6; /* 0x161AE086: jns 0x161ae0a6 */
L_161AE088:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x161AE088: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x161AE08B: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x161AE08E: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x161AE094: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE09A: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x161AE09D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0A1: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_161AE0D2; /* 0x161AE0A4: jmp 0x161ae0d2 */
L_161AE0A6:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x161AE0A6: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x161AE0A9: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x161AE0AC: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0B2: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x161AE0B5: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0B9: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_161AE0D2; /* 0x161AE0BC: jmp 0x161ae0d2 */
L_161AE0BE:
    edx = MEM32(esp + 0x14); /* 0x161AE0BE: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x161AE0C2: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE082; /* 0x161AE0C8: jne 0x161ae082 */
L_161AE0CA:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE0CA: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE0CE: fstp dword ptr [esp + 0x18] */
L_161AE0D2:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE0D2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE0D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE0D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE0D9u);

    goto L_161AE0D9;
L_161AE047:
    PUSH32(esp, ebp); /* 0x161AE047: push ebp */
    ebp = esp; /* 0x161AE048: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x161AE04A: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x161AE04D: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x161AE050: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x161AE053: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE058: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE059: ret  */
L_161AE05F:
    PUSH32(esp, ebp); /* 0x161AE05F: push ebp */
    ebp = esp; /* 0x161AE060: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x161AE062: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x161AE065: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x161AE068: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE06A: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x161AE06E: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x161AE072: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x161AE076: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x161AE07A: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x161AE07E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE0BE; /* 0x161AE080: je 0x161ae0be */
L_161AE082:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x161AE082: fsubp st(1) */
    /* test edx, edx */ /* 0x161AE084: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AE0A6; /* 0x161AE086: jns 0x161ae0a6 */
L_161AE088:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x161AE088: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x161AE08B: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x161AE08E: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x161AE094: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE09A: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x161AE09D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0A1: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_161AE0D2; /* 0x161AE0A4: jmp 0x161ae0d2 */
L_161AE0A6:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x161AE0A6: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x161AE0A9: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x161AE0AC: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0B2: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x161AE0B5: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE0B9: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_161AE0D2; /* 0x161AE0BC: jmp 0x161ae0d2 */
L_161AE0BE:
    edx = MEM32(esp + 0x14); /* 0x161AE0BE: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x161AE0C2: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE082; /* 0x161AE0C8: jne 0x161ae082 */
L_161AE0CA:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE0CA: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x161AE0CE: fstp dword ptr [esp + 0x18] */
L_161AE0D2:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE0D2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE0D3: ret  */
L_161AE0D9:
    /* cmp MEM32(0x161B20A0), 0 */ /* 0x161AE0D9: cmp dword ptr [0x161b20a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x161B20A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AE05F; /* 0x161AE0E0: je 0x161ae05f */
L_161AE0E6:
    RECOMP_BACKEDGE();
    goto L_161AE047; /* 0x161AE0E6: jmp 0x161ae047 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AE0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE0F0u);

L_161AE0F0:
    { _itail_tgt = (uint32_t)(MEM32(0x1600115C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE0FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE0FCu);

L_161AE0FC:
    { _itail_tgt = (uint32_t)(MEM32(0x16001158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE108u);

L_161AE108:
    { _itail_tgt = (uint32_t)(MEM32(0x16001154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE114(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE114u);

L_161AE114:
    { _itail_tgt = (uint32_t)(MEM32(0x16001150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE120u);

L_161AE120:
    { _itail_tgt = (uint32_t)(MEM32(0x1600114C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE12C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE12Cu);

L_161AE12C:
    { _itail_tgt = (uint32_t)(MEM32(0x16001148)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE138(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE138u);

L_161AE138:
    { _itail_tgt = (uint32_t)(MEM32(0x16001144)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE144(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE144u);

L_161AE144:
    { _itail_tgt = (uint32_t)(MEM32(0x16001140)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE150u);

L_161AE150:
    { _itail_tgt = (uint32_t)(MEM32(0x1600113C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE15C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE15Cu);

L_161AE15C:
    { _itail_tgt = (uint32_t)(MEM32(0x16001138)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE168u);

L_161AE168:
    { _itail_tgt = (uint32_t)(MEM32(0x16001134)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE174u);

L_161AE174:
    { _itail_tgt = (uint32_t)(MEM32(0x16001130)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE180u);

L_161AE180:
    { _itail_tgt = (uint32_t)(MEM32(0x1600112C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE18C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE18Cu);

L_161AE18C:
    { _itail_tgt = (uint32_t)(MEM32(0x16001128)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE198u);

L_161AE198:
    { _itail_tgt = (uint32_t)(MEM32(0x16001124)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE1A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE1A4u);

L_161AE1A4:
    { _itail_tgt = (uint32_t)(MEM32(0x16001120)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE1B0u);

L_161AE1B0:
    { _itail_tgt = (uint32_t)(MEM32(0x1600111C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE1BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE1BCu);

L_161AE1BC:
    { _itail_tgt = (uint32_t)(MEM32(0x16001118)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE1EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE1EEu);

L_161AE1EE:
    { _itail_tgt = (uint32_t)(MEM32(0x16001114)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE1FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE1FAu);

L_161AE1FA:
    { _itail_tgt = (uint32_t)(MEM32(0x16001110)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE206u);

L_161AE206:
    { _itail_tgt = (uint32_t)(MEM32(0x1600110C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE212(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE212u);

L_161AE212:
    { _itail_tgt = (uint32_t)(MEM32(0x16001108)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE21E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE21Eu);

L_161AE21E:
    { _itail_tgt = (uint32_t)(MEM32(0x16001104)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE22A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE22Au);

L_161AE22A:
    { _itail_tgt = (uint32_t)(MEM32(0x16001100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE236(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE236u);

L_161AE236:
    { _itail_tgt = (uint32_t)(MEM32(0x160010FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE242(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE242u);

L_161AE242:
    { _itail_tgt = (uint32_t)(MEM32(0x160010F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE24E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE24Eu);

L_161AE24E:
    { _itail_tgt = (uint32_t)(MEM32(0x160010F4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE25A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE25Au);

L_161AE25A:
    { _itail_tgt = (uint32_t)(MEM32(0x160010F0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE266(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE266u);

L_161AE266:
    { _itail_tgt = (uint32_t)(MEM32(0x160010EC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE272(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE272u);

L_161AE272:
    { _itail_tgt = (uint32_t)(MEM32(0x160010E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE27E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE27Eu);

L_161AE27E:
    { _itail_tgt = (uint32_t)(MEM32(0x160010E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE289(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE289u);

L_161AE289:
    PUSH32(esp, 0x14u); /* 0x161AE289: push 0x14 */
    PUSH32(esp, 0x161B0090u); /* 0x161AE28B: push 0x161b0090 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE290: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE295: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE299:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x161AE299: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_161AE2D9; /* 0x161AE29C: js 0x161ae2d9 */
L_161AE29E:
    ecx = MEM32(ebp + 0x8); /* 0x161AE29E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x161AE2A1: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x161AE2A4: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x161AE2A7: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161AE299; /* 0x161AE2AA: jmp 0x161ae299 */
L_161AE2D9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE2D9: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE2E0: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AE2E5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AE2ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE2EDu);

L_161AE2ED:
    PUSH32(esp, 0xCu); /* 0x161AE2ED: push 0xc */
    PUSH32(esp, 0x161B00B0u); /* 0x161AE2EF: push 0x161b00b0 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE2F4: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x161AE2F9: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x161AE2FD: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x161AE300: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x161AE302: imul eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x161AE306: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE309: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE30D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x161AE30D: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_161AE31D; /* 0x161AE310: js 0x161ae31d */
L_161AE312:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - esi; /* 0x161AE312: sub dword ptr [ebp + 8], esi */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x161AE315: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x161AE318: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161AE30D; /* 0x161AE31B: jmp 0x161ae30d */
L_161AE31D:
    MEM32(ebp + (-0x1C)) = 1; /* 0x161AE31D: mov dword ptr [ebp - 0x1c], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE324: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_161AE338); /* 0x161AE32B: call 0x161ae338 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE330: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AE335: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AE338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE338u);

L_161AE338:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x161AE338: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AE34F; /* 0x161AE33C: jne 0x161ae34f */
L_161AE33E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x161AE33E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161AE341: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AE344: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE347: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE289); /* 0x161AE34A: call 0x161ae289 */
    RECOMP_FLAGS_IN();
L_161AE34F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE34F: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE355u);

L_161AE355:
    PUSH32(esp, 0x10u); /* 0x161AE355: push 0x10 */
    PUSH32(esp, 0x161B00D0u); /* 0x161AE357: push 0x161b00d0 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE35C: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE361: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x161AE363: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x161AE366: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x161AE369: mov dword ptr [ebp - 0x1c], eax */
L_161AE36C:
    eax = MEM32(ebp + (-0x1C)); /* 0x161AE36C: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x161AE36F: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_161AE387; /* 0x161AE372: jge 0x161ae387 */
L_161AE374:
    esi = MEM32(ebp + 0x8); /* 0x161AE374: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x161AE377: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x161AE379: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x161AE37C: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x161AE37F: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x161AE382: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_161AE36C; /* 0x161AE385: jmp 0x161ae36c */
L_161AE387:
    MEM32(ebp + (-0x20)) = 1; /* 0x161AE387: mov dword ptr [ebp - 0x20], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE38E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_161AE3A2); /* 0x161AE395: call 0x161ae3a2 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE39A: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x161AE39F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_161AE3A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE3A2u);

L_161AE3A2:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x161AE3A2: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AE3B9; /* 0x161AE3A6: jne 0x161ae3b9 */
L_161AE3A8:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x161AE3A8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x161AE3AB: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AE3AE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE3B1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE289); /* 0x161AE3B4: call 0x161ae289 */
    RECOMP_FLAGS_IN();
L_161AE3B9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE3B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE3C0u);

L_161AE3C0:
    { _itail_tgt = (uint32_t)(MEM32(0x160010E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE3CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE3CCu);

L_161AE3CC:
    { _itail_tgt = (uint32_t)(MEM32(0x160010DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE3D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE3D7u);

L_161AE3D7:
    PUSH32(esp, 0x14u); /* 0x161AE3D7: push 0x14 */
    PUSH32(esp, 0x161B00F0u); /* 0x161AE3D9: push 0x161b00f0 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE3DE: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x161BABE0); /* 0x161AE3E3: mov eax, dword ptr [0x161babe0] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x161AE3E8: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AE3EB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AE3FC; /* 0x161AE3EE: jne 0x161ae3fc */
L_161AE3F0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE3F0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x160010BC)); /* 0x161AE3F3: call dword ptr [0x160010bc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AE3F9: pop ecx */
    goto L_161AE44D; /* 0x161AE3FA: jmp 0x161ae44d */
L_161AE3FC:
    PUSH32(esp, 8); /* 0x161AE3FC: push 8 */
    RECOMP_CALL(sub_161AE9D2); /* 0x161AE3FE: call 0x161ae9d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AE403: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE404: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x161BABE0); /* 0x161AE408: mov eax, dword ptr [0x161babe0] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x161AE40D: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(0x161BABDC); /* 0x161AE410: mov eax, dword ptr [0x161babdc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x161AE415: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x161AE418: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x161AE41B: push eax */
    eax = ebp + (-0x1C); /* 0x161AE41C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x161AE41F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE420: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE9C6); /* 0x161AE423: call 0x161ae9c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AE428: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x161AE42B: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x161AE42E: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(0x161BABE0) = eax; /* 0x161AE431: mov dword ptr [0x161babe0], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x161AE436: mov eax, dword ptr [ebp - 0x20] */
    MEM32(0x161BABDC) = eax; /* 0x161AE439: mov dword ptr [0x161babdc], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE43E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_161AE453); /* 0x161AE445: call 0x161ae453 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x161AE44A: mov eax, dword ptr [ebp - 0x24] */
L_161AE44D:
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE44D: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE452: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE453u);

L_161AE453:
    PUSH32(esp, 8); /* 0x161AE453: push 8 */
    RECOMP_CALL(sub_161AE9BA); /* 0x161AE455: call 0x161ae9ba */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AE45A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE45B: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE461u);

L_161AE461:
    edi = edi; /* 0x161AE461: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE463: push ebp */
    ebp = esp; /* 0x161AE464: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE466: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE3D7); /* 0x161AE469: call 0x161ae3d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x161AE46E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AE470: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x161AE472: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x161AE474: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AE475: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x161AE476: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE477: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE47E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE47Eu);

L_161AE47E:
    { _itail_tgt = (uint32_t)(MEM32(0x160010D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE4A0u);

L_161AE4A0:
    edi = edi; /* 0x161AE4A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE4A2: push ebp */
    ebp = esp; /* 0x161AE4A3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x161AE4A5: mov ecx, dword ptr [ebp + 8] */
    eax = 0x5A4Du; /* 0x161AE4A8: mov eax, 0x5a4d */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x161AE4AD: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AE4B6; /* 0x161AE4B0: je 0x161ae4b6 */
L_161AE4B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE4B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x161AE4B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE4B5: ret  */
L_161AE4B6:
    eax = MEM32(ecx + 0x3C); /* 0x161AE4B6: mov eax, dword ptr [ecx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AE4B9: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0x4550u */ /* 0x161AE4BB: cmp dword ptr [eax], 0x4550 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AE4B2; /* 0x161AE4C1: jne 0x161ae4b2 */
L_161AE4C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AE4C3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x10Bu; /* 0x161AE4C5: mov ecx, 0x10b */
    /* cmp MEM16(eax + 0x18), LO16(ecx) */ /* 0x161AE4CA: cmp word ptr [eax + 0x18], cx */
    _flag_a = (uint32_t)(MEM16(eax + 0x18)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x161AE4CE: sete dl */
    eax = edx; /* 0x161AE4D1: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x161AE4D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE4D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE4E0u);

L_161AE4E0:
    edi = edi; /* 0x161AE4E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE4E2: push ebp */
    ebp = esp; /* 0x161AE4E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161AE4E5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x3C); /* 0x161AE4E8: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x161AE4EB: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x161AE4ED: movzx eax, word ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x161AE4F1: push ebx */
    PUSH32(esp, esi); /* 0x161AE4F2: push esi */
    esi = (uint32_t)MEM16(ecx + 0x6); /* 0x161AE4F3: movzx esi, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AE4F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x161AE4F9: push edi */
    eax = eax + ecx + 0x18; /* 0x161AE4FA: lea eax, [eax + ecx + 0x18] */
    /* test esi, esi */ /* 0x161AE4FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE51D; /* 0x161AE500: jbe 0x161ae51d */
L_161AE502:
    edi = MEM32(ebp + 0xC); /* 0x161AE502: mov edi, dword ptr [ebp + 0xc] */
L_161AE505:
    ecx = MEM32(eax + 0xC); /* 0x161AE505: mov ecx, dword ptr [eax + 0xc] */
    /* cmp edi, ecx */ /* 0x161AE508: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AE515; /* 0x161AE50A: jb 0x161ae515 */
L_161AE50C:
    ebx = MEM32(eax + 0x8); /* 0x161AE50C: mov ebx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x161AE50F: add ebx, ecx */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x161AE511: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AE51F; /* 0x161AE513: jb 0x161ae51f */
L_161AE515:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x161AE515: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x161AE516: add eax, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x161AE519: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AE505; /* 0x161AE51B: jb 0x161ae505 */
L_161AE51D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE51D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE51F:
    edi = POP32_VAL(esp); /* 0x161AE51F: pop edi */
    esi = POP32_VAL(esp); /* 0x161AE520: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AE521: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AE522: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE523: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE529(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE529u);

L_161AE529:
    PUSH32(esp, 8); /* 0x161AE529: push 8 */
    PUSH32(esp, 0x161B0110u); /* 0x161AE52B: push 0x161b0110 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE530: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE535: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x16000000u; /* 0x161AE539: mov esi, 0x16000000 */
    PUSH32(esp, esi); /* 0x161AE53E: push esi */
    RECOMP_CALL(sub_161AE4A0); /* 0x161AE53F: call 0x161ae4a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AE544: pop ecx */
    /* test eax, eax */ /* 0x161AE545: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE586; /* 0x161AE547: je 0x161ae586 */
L_161AE549:
    eax = MEM32(ebp + 0x8); /* 0x161AE549: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x161AE54C: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x161AE54E: push eax */
    PUSH32(esp, esi); /* 0x161AE54F: push esi */
    RECOMP_CALL(sub_161AE4E0); /* 0x161AE550: call 0x161ae4e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AE555: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AE556: pop ecx */
    /* test eax, eax */ /* 0x161AE557: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE586; /* 0x161AE559: je 0x161ae586 */
L_161AE55B:
    eax = MEM32(eax + 0x24); /* 0x161AE55B: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x161AE55E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x161AE55E: shr eax, 0x1f */
    eax = ~eax; /* 0x161AE561: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x161AE563: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE566: mov dword ptr [ebp - 4], 0xfffffffe */
    goto L_161AE58F; /* 0x161AE56D: jmp 0x161ae58f */
L_161AE586:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE586: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE58D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE58F:
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE58F: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE594: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE59A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE59Au);

L_161AE59A:
    { _itail_tgt = (uint32_t)(MEM32(0x160010D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE5A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE5A6u);

L_161AE5A6:
    { _itail_tgt = (uint32_t)(MEM32(0x160010CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE5B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE5B4u);

L_161AE5B4:
    PUSH32(esp, 0x161AE612u); /* 0x161AE5B4: push 0x161ae612 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x161AE5B9: push dword ptr fs:[0] */
    eax = MEM32(esp + 0x10); /* 0x161AE5C0: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = ebp; /* 0x161AE5C4: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x161AE5C8: lea ebp, [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - eax; /* 0x161AE5CC: sub esp, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AE5CE: push ebx */
    PUSH32(esp, esi); /* 0x161AE5CF: push esi */
    PUSH32(esp, edi); /* 0x161AE5D0: push edi */
    eax = MEM32(0x161B2070); /* 0x161AE5D1: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x161AE5D6: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x161AE5D9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161AE5DB: push eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x161AE5DC: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AE5DF: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x161AE5E2: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE5E5: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x8)) = eax; /* 0x161AE5EC: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x161AE5EF: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x161AE5F2: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE5F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE5F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE5F9u);

L_161AE5F9:
    ecx = MEM32(ebp + (-0x10)); /* 0x161AE5F9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x161AE5FC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x161AE603: pop ecx */
    edi = POP32_VAL(esp); /* 0x161AE604: pop edi */
    edi = POP32_VAL(esp); /* 0x161AE605: pop edi */
    esi = POP32_VAL(esp); /* 0x161AE606: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AE607: pop ebx */
    esp = ebp; /* 0x161AE608: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x161AE60A: pop ebp */
    PUSH32(esp, ecx); /* 0x161AE60B: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE60C: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE612u);

L_161AE612:
    edi = edi; /* 0x161AE612: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE614: push ebp */
    ebp = esp; /* 0x161AE615: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x161AE617: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161AE61A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AE61D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AE620: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x161ADCF5u); /* 0x161AE623: push 0x161adcf5 */
    PUSH32(esp, 0x161B2070u); /* 0x161AE628: push 0x161b2070 */
    RECOMP_CALL(sub_161ADEC0); /* 0x161AE62D: call 0x161adec0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161AE632: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x161AE635: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE636: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE63Cu);

L_161AE63C:
    edi = edi; /* 0x161AE63C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE63E: push ebp */
    ebp = esp; /* 0x161AE63F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x161AE641: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x161AE644: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x161AE649: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE64D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161AE651: push ebx */
    PUSH32(esp, edi); /* 0x161AE652: push edi */
    edi = 0xBB40E64Eu; /* 0x161AE653: mov edi, 0xbb40e64e */
    ebx = 0xFFFF0000u; /* 0x161AE658: mov ebx, 0xffff0000 */
    /* cmp eax, edi */ /* 0x161AE65D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AE66E; /* 0x161AE65F: je 0x161ae66e */
L_161AE661:
    /* test ebx, eax */ /* 0x161AE661: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE66E; /* 0x161AE663: je 0x161ae66e */
L_161AE665:
    eax = ~eax; /* 0x161AE665: not eax */
    MEM32(0x161B2074) = eax; /* 0x161AE667: mov dword ptr [0x161b2074], eax */
    goto L_161AE6C9; /* 0x161AE66C: jmp 0x161ae6c9 */
L_161AE66E:
    PUSH32(esp, esi); /* 0x161AE66E: push esi */
    eax = ebp + (-0x8); /* 0x161AE66F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AE672: push eax */
    RECOMP_ICALL(MEM32(0x16001010)); /* 0x161AE673: call dword ptr [0x16001010] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x161AE679: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((esi ^ MEM32(ebp + (-0x8)))); _flag_b = (uint32_t)((esi ^ MEM32(ebp + (-0x8))));
    esi = esi ^ MEM32(ebp + (-0x8)); /* 0x161AE67C: xor esi, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x16001014)); /* 0x161AE67F: call dword ptr [0x16001014] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AE685: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x16001018)); /* 0x161AE687: call dword ptr [0x16001018] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AE68D: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x1600101C)); /* 0x161AE68F: call dword ptr [0x1600101c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AE695: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x161AE697: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x161AE69A: push eax */
    RECOMP_ICALL(MEM32(0x16001020)); /* 0x161AE69B: call dword ptr [0x16001020] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x161AE6A1: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x10)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x10))));
    eax = eax ^ MEM32(ebp + (-0x10)); /* 0x161AE6A4: xor eax, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AE6A7: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x161AE6A9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AE6B5; /* 0x161AE6AB: je 0x161ae6b5 */
L_161AE6AD:
    /* test MEM32(0x161B2070), ebx */ /* 0x161AE6AD: test dword ptr [0x161b2070], ebx */
    _flag_a = (uint32_t)(MEM32(0x161B2070)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE6BA; /* 0x161AE6B3: jne 0x161ae6ba */
L_161AE6B5:
    esi = 0xBB40E64Fu; /* 0x161AE6B5: mov esi, 0xbb40e64f */
L_161AE6BA:
    MEM32(0x161B2070) = esi; /* 0x161AE6BA: mov dword ptr [0x161b2070], esi */
    esi = ~esi; /* 0x161AE6C0: not esi */
    MEM32(0x161B2074) = esi; /* 0x161AE6C2: mov dword ptr [0x161b2074], esi */
    esi = POP32_VAL(esp); /* 0x161AE6C8: pop esi */
L_161AE6C9:
    edi = POP32_VAL(esp); /* 0x161AE6C9: pop edi */
    ebx = POP32_VAL(esp); /* 0x161AE6CA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE6CB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE6CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE7C0u);

L_161AE7C0:
    PUSH32(esp, esi); /* 0x161AE7C0: push esi */
    eax = MEM32(esp + 0x14); /* 0x161AE7C1: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x161AE7C5: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE7F1; /* 0x161AE7C7: jne 0x161ae7f1 */
L_161AE7C9:
    ecx = MEM32(esp + 0x10); /* 0x161AE7C9: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x161AE7CD: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AE7D1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x161AE7D3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x161AE7D5: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x161AE7D7: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x161AE7DB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x161AE7DD: mov esi, eax */
    eax = ebx; /* 0x161AE7DF: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x161AE7E1: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x161AE7E5: mov ecx, eax */
    eax = esi; /* 0x161AE7E7: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x161AE7E9: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x161AE7ED: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_161AE838; /* 0x161AE7EF: jmp 0x161ae838 */
L_161AE7F1:
    ecx = eax; /* 0x161AE7F1: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x161AE7F3: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x161AE7F7: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x161AE7FB: mov eax, dword ptr [esp + 8] */
L_161AE7FF:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x161AE7FF: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x161AE7FF: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x161AE801: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x161AE803: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x161AE803: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AE805: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x161AE807: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE7FF; /* 0x161AE809: jne 0x161ae7ff */
L_161AE80B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x161AE80B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x161AE80D: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x161AE80F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x161AE813: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x161AE815: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x161AE819: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x161AE81B: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_161AE82D; /* 0x161AE81D: jb 0x161ae82d */
L_161AE81F:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x161AE81F: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AE82D; /* 0x161AE823: ja 0x161ae82d */
L_161AE825:
    if (CMP_B(_flag_a, _flag_b)) goto L_161AE836; /* 0x161AE825: jb 0x161ae836 */
L_161AE827:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x161AE827: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AE836; /* 0x161AE82B: jbe 0x161ae836 */
L_161AE82D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AE82D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x161AE82E: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE832: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_161AE836:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AE836: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE838:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x161AE838: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE83C: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x161AE840: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x161AE842: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AE844: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x161AE847: mov ecx, edx */
    edx = ebx; /* 0x161AE849: mov edx, ebx */
    ebx = ecx; /* 0x161AE84B: mov ebx, ecx */
    ecx = eax; /* 0x161AE84D: mov ecx, eax */
    eax = esi; /* 0x161AE84F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161AE851: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AE852: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AE865(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE865u);

L_161AE865:
    PUSH32(esp, ebx); /* 0x161AE865: push ebx */
    PUSH32(esp, ecx); /* 0x161AE866: push ecx */
    ebx = 0x161B2090u; /* 0x161AE867: mov ebx, 0x161b2090 */
    ecx = MEM32(esp + 0xC); /* 0x161AE86C: mov ecx, dword ptr [esp + 0xc] */
    MEM32(ebx + 0x8) = ecx; /* 0x161AE870: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x161AE873: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x161AE876: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x161AE879: push ebp */
    PUSH32(esp, ecx); /* 0x161AE87A: push ecx */
    PUSH32(esp, eax); /* 0x161AE87B: push eax */
    eax = POP32_VAL(esp); /* 0x161AE87C: pop eax */
    ecx = POP32_VAL(esp); /* 0x161AE87D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x161AE87E: pop ebp */
    ecx = POP32_VAL(esp); /* 0x161AE87F: pop ecx */
    ebx = POP32_VAL(esp); /* 0x161AE880: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AE881: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AE884(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE884u);

L_161AE884:
    RECOMP_ICALL(eax); /* 0x161AE884: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE886: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE88C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE88Cu);

L_161AE88C:
    PUSH32(esp, 0xCu); /* 0x161AE88C: push 0xc */
    PUSH32(esp, 0x161B0130u); /* 0x161AE88E: push 0x161b0130 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161AE893: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AE898: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0] = _xmm[1]; /* 0x161AE89C: movapd xmm0, xmm1 */
    MEM32(ebp + (-0x1C)) = 1; /* 0x161AE8A0: mov dword ptr [ebp - 0x1c], 1 */
    goto L_161AE8CC; /* 0x161AE8A7: jmp 0x161ae8cc */
L_161AE8CC:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161AE8CC: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = MEM32(ebp + (-0x1C)); /* 0x161AE8D3: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_161AE5F9); /* 0x161AE8D6: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE8DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE8E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE8E1u);

L_161AE8E1:
    edi = edi; /* 0x161AE8E1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE8E3: push ebp */
    ebp = esp; /* 0x161AE8E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x161AE8E6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE8E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161AE8EB: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x161AE8EC: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AE8EF: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x161AE8F2: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x161AE8F5: push ebx */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x161AE8F6: pushfd  */
    eax = POP32_VAL(esp); /* 0x161AE8F7: pop eax */
    ecx = eax; /* 0x161AE8F8: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x161AE8FA: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161AE8FF: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x161AE900: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x161AE901: pushfd  */
    edx = POP32_VAL(esp); /* 0x161AE902: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x161AE903: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AE926; /* 0x161AE905: je 0x161ae926 */
L_161AE907:
    PUSH32(esp, ecx); /* 0x161AE907: push ecx */
    { uint32_t _fl = POP32_VAL(esp); /* 0x161AE908: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE909: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x161AE90B: cpuid  */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AE90D: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x161AE910: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = edx; /* 0x161AE913: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x161AE916: mov dword ptr [ebp - 0x10], ecx */
    eax = 1; /* 0x161AE919: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x161AE91E: cpuid  */
    MEM32(ebp + (-0x4)) = edx; /* 0x161AE920: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x161AE923: mov dword ptr [ebp - 8], eax */
L_161AE926:
    ebx = POP32_VAL(esp); /* 0x161AE926: pop ebx */
    /* test MEM32(ebp + (-0x4)), 0x04000000u */ /* 0x161AE927: test dword ptr [ebp - 4], 0x4000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x04000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE94E; /* 0x161AE92E: je 0x161ae94e */
L_161AE930:
    RECOMP_CALL(sub_161AE88C); /* 0x161AE930: call 0x161ae88c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AE935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AE94E; /* 0x161AE937: je 0x161ae94e */
L_161AE939:
    RECOMP_ICALL(MEM32(0x16001084)); /* 0x161AE939: call dword ptr [0x16001084] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x161AE93F: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 6 */ /* 0x161AE944: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AE94E; /* 0x161AE947: jb 0x161ae94e */
L_161AE949:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE949: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AE94B: inc eax */
    _flag_k = FK_INC;
    goto L_161AE950; /* 0x161AE94C: jmp 0x161ae950 */
L_161AE94E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE94E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AE950:
    ebx = POP32_VAL(esp); /* 0x161AE950: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE951: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE952: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE958u);

L_161AE958:
    RECOMP_CALL(sub_161AE8E1); /* 0x161AE958: call 0x161ae8e1 */
    RECOMP_FLAGS_IN();
    MEM32(0x161B20A0) = eax; /* 0x161AE95D: mov dword ptr [0x161b20a0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AE962: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE964: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AE96A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE96Au);

L_161AE96A:
    { _itail_tgt = (uint32_t)(MEM32(0x160010C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE980u);

L_161AE980:
    eax = MEM32(esp + 0x8); /* 0x161AE980: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x161AE984: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x161AE988: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x161AE98A: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AE999; /* 0x161AE98E: jne 0x161ae999 */
L_161AE990:
    eax = MEM32(esp + 0x4); /* 0x161AE990: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x161AE994: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AE996: ret 0x10 */
L_161AE999:
    PUSH32(esp, ebx); /* 0x161AE999: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x161AE99A: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x161AE99C: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x161AE99E: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x161AE9A2: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x161AE9A6: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x161AE9A8: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x161AE9AC: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x161AE9AE: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x161AE9B0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AE9B1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AE9BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE9BAu);

L_161AE9BA:
    { _itail_tgt = (uint32_t)(MEM32(0x160010B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE9C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE9C6u);

L_161AE9C6:
    { _itail_tgt = (uint32_t)(MEM32(0x160010B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE9D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE9D2u);

L_161AE9D2:
    { _itail_tgt = (uint32_t)(MEM32(0x160010B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE9DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE9DEu);

L_161AE9DE:
    { _itail_tgt = (uint32_t)(MEM32(0x16001024)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AE9E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AE9E9u);

L_161AE9E9:
    eax = ecx; /* 0x161AE9E9: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AE9EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x161AE9ED: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x161AE9EF: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x161AE9F2: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x161AE9F5: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x161AE9F8: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x161AE9FB: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x161AE9FE: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x161AEA01: mov dword ptr [eax + 0xc], ecx */
    MEM16(eax + 0x20) = (uint16_t)(LO16(ecx)); /* 0x161AEA04: mov word ptr [eax + 0x20], cx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AEA08: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AEA0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEA0Eu);

L_161AEA0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEA0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AEA10: push esi */
    esi = ecx; /* 0x161AEA11: mov esi, ecx */
    PUSH32(esp, 0x64u); /* 0x161AEA13: push 0x64 */
    PUSH32(esp, eax); /* 0x161AEA15: push eax */
    MEM32(esi) = eax; /* 0x161AEA16: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x161AEA18: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x161AEA1B: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x70) = eax; /* 0x161AEA1E: mov dword ptr [esi + 0x70], eax */
    MEM32(esi + 0x74) = eax; /* 0x161AEA21: mov dword ptr [esi + 0x74], eax */
    MEM32(esi + 0x78) = eax; /* 0x161AEA24: mov dword ptr [esi + 0x78], eax */
    MEM32(esi + 0x84) = eax; /* 0x161AEA27: mov dword ptr [esi + 0x84], eax */
    eax = esi + 0xC; /* 0x161AEA2D: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x161AEA30: push eax */
    MEM32(esi + 0x80) = 1; /* 0x161AEA31: mov dword ptr [esi + 0x80], 1 */
    RECOMP_CALL(sub_161AE3CC); /* 0x161AEA3B: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AEA40: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x161AEA43: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161AEA45: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AEA46: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AEA4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEA4Cu);

L_161AEA4C:
    eax = ecx; /* 0x161AEA4C: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AEA4E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x161AEA50: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x161AEA52: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x161AEA55: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x161AEA58: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x161AEA5B: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = 1; /* 0x161AEA5E: mov dword ptr [eax + 0x14], 1 */
    MEM32(eax + 0x18) = ecx; /* 0x161AEA65: mov dword ptr [eax + 0x18], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AEA68: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AEA6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEA6Eu);

L_161AEA6E:
    edi = edi; /* 0x161AEA6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEA70: push ebp */
    ebp = esp; /* 0x161AEA71: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x161AEA73: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x161AEA76: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AEA79: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x161AEA7B: mov ecx, eax */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x161AEA7D: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AEA9B; /* 0x161AEA80: jae 0x161aea9b */
L_161AEA82:
    /* cmp MEM8(ecx), 0 */ /* 0x161AEA82: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEA8D; /* 0x161AEA85: je 0x161aea8d */
L_161AEA87:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x161AEA87: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x161AEA88: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEA82; /* 0x161AEA8B: jb 0x161aea82 */
L_161AEA8D:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x161AEA8D: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AEA9B; /* 0x161AEA90: jae 0x161aea9b */
L_161AEA92:
    ecx = MEM32(ebp + 0x14); /* 0x161AEA92: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x161AEA95: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEA97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AEAA0; /* 0x161AEA99: jmp 0x161aeaa0 */
L_161AEA9B:
    eax = 0x80004005u; /* 0x161AEA9B: mov eax, 0x80004005 */
L_161AEAA0:
    ebp = POP32_VAL(esp); /* 0x161AEAA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AEAA1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AEAA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEAA9u);

L_161AEAA9:
    edi = edi; /* 0x161AEAA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEAAB: push ebp */
    ebp = esp; /* 0x161AEAAC: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x161AEAAE: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x161AEAB1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AEABC; /* 0x161AEAB3: jne 0x161aeabc */
L_161AEAB5:
    eax = 0x80004005u; /* 0x161AEAB5: mov eax, 0x80004005 */
    goto L_161AEADB; /* 0x161AEABA: jmp 0x161aeadb */
L_161AEABC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEABC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AEABE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AEAC0: push esi */
L_161AEAC1:
    esi = MEM32(ecx + 0x16001F2C); /* 0x161AEAC1: mov esi, dword ptr [ecx + 0x16001f2c] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x161AEAC7: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEADF; /* 0x161AEACA: je 0x161aeadf */
L_161AEACC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x161AEACC: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AEACF: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, 0x18u */ /* 0x161AEAD0: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEAC1; /* 0x161AEAD3: jb 0x161aeac1 */
L_161AEAD5:
    eax = 0x80004005u; /* 0x161AEAD5: mov eax, 0x80004005 */
L_161AEADA:
    esi = POP32_VAL(esp); /* 0x161AEADA: pop esi */
L_161AEADB:
    ebp = POP32_VAL(esp); /* 0x161AEADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AEADC: ret 8 */
L_161AEADF:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x161AEADF: imul eax, eax, 0xc */
    eax = MEM32(eax + 0x16001F30); /* 0x161AEAE2: mov eax, dword ptr [eax + 0x16001f30] */
    MEM32(edx) = eax; /* 0x161AEAE8: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEAEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AEADA; /* 0x161AEAEC: jmp 0x161aeada */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AEAF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEAF3u);

L_161AEAF3:
    edi = edi; /* 0x161AEAF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEAF5: push ebp */
    ebp = esp; /* 0x161AEAF6: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x161AEAF8: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x161AEAFB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AEB06; /* 0x161AEAFD: jne 0x161aeb06 */
L_161AEAFF:
    eax = 0x80004005u; /* 0x161AEAFF: mov eax, 0x80004005 */
    goto L_161AEB25; /* 0x161AEB04: jmp 0x161aeb25 */
L_161AEB06:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEB06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AEB08: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AEB0A: push esi */
L_161AEB0B:
    esi = MEM32(ecx + 0x16001F30); /* 0x161AEB0B: mov esi, dword ptr [ecx + 0x16001f30] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x161AEB11: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEB29; /* 0x161AEB14: je 0x161aeb29 */
L_161AEB16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x161AEB16: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AEB19: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, 0x18u */ /* 0x161AEB1A: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEB0B; /* 0x161AEB1D: jb 0x161aeb0b */
L_161AEB1F:
    eax = 0x80004005u; /* 0x161AEB1F: mov eax, 0x80004005 */
L_161AEB24:
    esi = POP32_VAL(esp); /* 0x161AEB24: pop esi */
L_161AEB25:
    ebp = POP32_VAL(esp); /* 0x161AEB25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AEB26: ret 8 */
L_161AEB29:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x161AEB29: imul eax, eax, 0xc */
    eax = MEM32(eax + 0x16001F2C); /* 0x161AEB2C: mov eax, dword ptr [eax + 0x16001f2c] */
    MEM32(edx) = eax; /* 0x161AEB32: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEB34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AEB24; /* 0x161AEB36: jmp 0x161aeb24 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AEB3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEB3Du);

L_161AEB3D:
    edi = edi; /* 0x161AEB3D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEB3F: push ebp */
    ebp = esp; /* 0x161AEB40: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x161AEB42: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x161AEB45: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AEB50; /* 0x161AEB47: jne 0x161aeb50 */
L_161AEB49:
    eax = 0x80004005u; /* 0x161AEB49: mov eax, 0x80004005 */
    goto L_161AEB6F; /* 0x161AEB4E: jmp 0x161aeb6f */
L_161AEB50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEB50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AEB52: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AEB54: push esi */
L_161AEB55:
    esi = MEM32(ecx + 0x16001F2C); /* 0x161AEB55: mov esi, dword ptr [ecx + 0x16001f2c] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x161AEB5B: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEB73; /* 0x161AEB5E: je 0x161aeb73 */
L_161AEB60:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x161AEB60: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AEB63: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, 0x18u */ /* 0x161AEB64: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEB55; /* 0x161AEB67: jb 0x161aeb55 */
L_161AEB69:
    eax = 0x80004005u; /* 0x161AEB69: mov eax, 0x80004005 */
L_161AEB6E:
    esi = POP32_VAL(esp); /* 0x161AEB6E: pop esi */
L_161AEB6F:
    ebp = POP32_VAL(esp); /* 0x161AEB6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AEB70: ret 8 */
L_161AEB73:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x161AEB73: imul eax, eax, 0xc */
    eax = MEM32(eax + 0x16001F28); /* 0x161AEB76: mov eax, dword ptr [eax + 0x16001f28] */
    MEM32(edx) = eax; /* 0x161AEB7C: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEB7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AEB6E; /* 0x161AEB80: jmp 0x161aeb6e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AEB87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEB87u);

L_161AEB87:
    edi = edi; /* 0x161AEB87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEB89: push ebp */
    ebp = esp; /* 0x161AEB8A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AEB8C: push ebx */
    PUSH32(esp, esi); /* 0x161AEB8D: push esi */
    PUSH32(esp, edi); /* 0x161AEB8E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161AEB8F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x161AEB91: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEBBC; /* 0x161AEB94: je 0x161aebbc */
L_161AEB96:
    ebx = MEM32(ebp + 0x10); /* 0x161AEB96: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, edi */ /* 0x161AEB99: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEBBC; /* 0x161AEB9B: je 0x161aebbc */
L_161AEB9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161AEB9D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AEB9F:
    PUSH32(esp, MEM32(edi + 0x16001F40)); /* 0x161AEB9F: push dword ptr [edi + 0x16001f40] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AEBA5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE180); /* 0x161AEBA8: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AEBAD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AEBAE: pop ecx */
    /* test eax, eax */ /* 0x161AEBAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AEBC8; /* 0x161AEBB1: je 0x161aebc8 */
L_161AEBB3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x161AEBB3: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AEBB6: inc esi */
    _flag_k = FK_INC;
    /* cmp edi, 0x78u */ /* 0x161AEBB7: cmp edi, 0x78 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEB9F; /* 0x161AEBBA: jb 0x161aeb9f */
L_161AEBBC:
    eax = 0x80004005u; /* 0x161AEBBC: mov eax, 0x80004005 */
L_161AEBC1:
    edi = POP32_VAL(esp); /* 0x161AEBC1: pop edi */
    esi = POP32_VAL(esp); /* 0x161AEBC2: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AEBC3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AEBC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161AEBC5: ret 0xc */
L_161AEBC8:
    eax = MEM32(ebp + 0xC); /* 0x161AEBC8: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x161AEBCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AEBDC; /* 0x161AEBCD: je 0x161aebdc */
L_161AEBCF:
    ecx = esi; /* 0x161AEBCF: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x161AEBD1: imul ecx, ecx, 0xc */
    /* cmp eax, MEM32(ecx + 0x16001F48) */ /* 0x161AEBD4: cmp eax, dword ptr [ecx + 0x16001f48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x16001F48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AEBBC; /* 0x161AEBDA: jb 0x161aebbc */
L_161AEBDC:
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x161AEBDC: imul esi, esi, 0xc */
    eax = MEM32(esi + 0x16001F44); /* 0x161AEBDF: mov eax, dword ptr [esi + 0x16001f44] */
    MEM32(ebx) = eax; /* 0x161AEBE5: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEBE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AEBC1; /* 0x161AEBE9: jmp 0x161aebc1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AEBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEBF0u);

L_161AEBF0:
    edi = edi; /* 0x161AEBF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEBF2: push ebp */
    ebp = esp; /* 0x161AEBF3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AEBF5: push ebx */
    PUSH32(esp, esi); /* 0x161AEBF6: push esi */
    PUSH32(esp, edi); /* 0x161AEBF7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x161AEBF8: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x161AEBFB: mov eax, edi */
    ebx = ecx; /* 0x161AEBFD: mov ebx, ecx */
    edx = eax + 0x1; /* 0x161AEBFF: lea edx, [eax + 1] */
L_161AEC02:
    SET_LO8(ecx, MEM8(eax)); /* 0x161AEC02: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AEC04: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x161AEC05: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AEC02; /* 0x161AEC07: jne 0x161aec02 */
L_161AEC09:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161AEC09: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x161AEC0B: mov esi, eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AEC22; /* 0x161AEC0D: je 0x161aec22 */
L_161AEC0F:
    eax = (uint32_t)MEM8(edi + esi + (-0x1)); /* 0x161AEC0F: movzx eax, byte ptr [edi + esi - 1] */
    PUSH32(esp, eax); /* 0x161AEC14: push eax */
    RECOMP_CALL(sub_161AE138); /* 0x161AEC15: call 0x161ae138 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AEC1A: pop ecx */
    /* test eax, eax */ /* 0x161AEC1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AEC22; /* 0x161AEC1D: je 0x161aec22 */
L_161AEC1F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AEC1F: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AEC0F; /* 0x161AEC20: jne 0x161aec0f */
L_161AEC22:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x161AEC22: add esi, edi */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(esi); /* 0x161AEC24: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x161AEC27: push eax */
    RECOMP_CALL(sub_161AE138); /* 0x161AEC28: call 0x161ae138 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AEC2D: pop ecx */
    /* test eax, eax */ /* 0x161AEC2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AEC41; /* 0x161AEC30: je 0x161aec41 */
L_161AEC32:
    PUSH32(esp, esi); /* 0x161AEC32: push esi */
    RECOMP_CALL(sub_161AE144); /* 0x161AEC33: call 0x161ae144 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x14) = eax; /* 0x161AEC38: mov dword ptr [ebx + 0x14], eax */
    ecx = POP32_VAL(esp); /* 0x161AEC3B: pop ecx */
    MEM8(esi) = (uint8_t)(0); /* 0x161AEC3C: mov byte ptr [esi], 0 */
    goto L_161AEC45; /* 0x161AEC3F: jmp 0x161aec45 */
L_161AEC41:
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0; /* 0x161AEC41: and dword ptr [ebx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AEC45:
    edi = POP32_VAL(esp); /* 0x161AEC45: pop edi */
    esi = POP32_VAL(esp); /* 0x161AEC46: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AEC47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x161AEC49: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AEC4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AEC4B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AEC53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AEC53u);

L_161AEC53:
    edi = edi; /* 0x161AEC53: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AEC55: push ebp */
    ebp = esp; /* 0x161AEC56: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161AEC58: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x161AEC5B: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20500000u; /* 0x161AEC60: mov ecx, 0x20500000 */
    /* cmp eax, ecx */ /* 0x161AEC65: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AEEB8; /* 0x161AEC67: ja 0x161aeeb8 */
L_161AEC6D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEEAE; /* 0x161AEC6D: je 0x161aeeae */
L_161AEC73:
    ecx = 0x13000000u; /* 0x161AEC73: mov ecx, 0x13000000 */
    /* cmp eax, ecx */ /* 0x161AEC78: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AED9F; /* 0x161AEC7A: ja 0x161aed9f */
L_161AEC80:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED95; /* 0x161AEC80: je 0x161aed95 */
L_161AEC86:
    ecx = 0x10800000u; /* 0x161AEC86: mov ecx, 0x10800000 */
    /* cmp eax, ecx */ /* 0x161AEC8B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AED1A; /* 0x161AEC8D: ja 0x161aed1a */
L_161AEC93:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED10; /* 0x161AEC93: je 0x161aed10 */
L_161AEC95:
    /* cmp eax, 0x10000000u */ /* 0x161AEC95: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED06; /* 0x161AEC9A: je 0x161aed06 */
L_161AEC9C:
    /* cmp eax, 0x10100000u */ /* 0x161AEC9C: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AECFC; /* 0x161AECA1: je 0x161aecfc */
L_161AECA3:
    /* cmp eax, 0x10300000u */ /* 0x161AECA3: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AECF2; /* 0x161AECA8: je 0x161aecf2 */
L_161AECAA:
    /* cmp eax, 0x10400000u */ /* 0x161AECAA: cmp eax, 0x10400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AECE8; /* 0x161AECAF: je 0x161aece8 */
L_161AECB1:
    /* cmp eax, 0x10500000u */ /* 0x161AECB1: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AECDE; /* 0x161AECB6: je 0x161aecde */
L_161AECB8:
    /* cmp eax, 0x10600000u */ /* 0x161AECB8: cmp eax, 0x10600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AECD4; /* 0x161AECBD: je 0x161aecd4 */
L_161AECBF:
    /* cmp eax, 0x10700000u */ /* 0x161AECBF: cmp eax, 0x10700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AECC4: jne 0x161af088 */
L_161AECCA:
    eax = 0x1602D04Cu; /* 0x161AECCA: mov eax, 0x1602d04c */
    goto L_161AF0B7; /* 0x161AECCF: jmp 0x161af0b7 */
L_161AECD4:
    eax = 0x1602D02Cu; /* 0x161AECD4: mov eax, 0x1602d02c */
    goto L_161AF0B7; /* 0x161AECD9: jmp 0x161af0b7 */
L_161AECDE:
    eax = 0x1602D030u; /* 0x161AECDE: mov eax, 0x1602d030 */
    goto L_161AF0B7; /* 0x161AECE3: jmp 0x161af0b7 */
L_161AECE8:
    eax = 0x1602D01Cu; /* 0x161AECE8: mov eax, 0x1602d01c */
    goto L_161AF0B7; /* 0x161AECED: jmp 0x161af0b7 */
L_161AECF2:
    eax = 0x1602D050u; /* 0x161AECF2: mov eax, 0x1602d050 */
    goto L_161AF0B7; /* 0x161AECF7: jmp 0x161af0b7 */
L_161AECFC:
    eax = 0x1603E2E4u; /* 0x161AECFC: mov eax, 0x1603e2e4 */
    goto L_161AF0B7; /* 0x161AED01: jmp 0x161af0b7 */
L_161AED06:
    eax = 0x1602D064u; /* 0x161AED06: mov eax, 0x1602d064 */
    goto L_161AF0B7; /* 0x161AED0B: jmp 0x161af0b7 */
L_161AED10:
    eax = 0x1603B890u; /* 0x161AED10: mov eax, 0x1603b890 */
    goto L_161AF0B7; /* 0x161AED15: jmp 0x161af0b7 */
L_161AED1A:
    /* cmp eax, 0x10900000u */ /* 0x161AED1A: cmp eax, 0x10900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED8B; /* 0x161AED1F: je 0x161aed8b */
L_161AED21:
    /* cmp eax, 0x10A00000u */ /* 0x161AED21: cmp eax, 0x10a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED81; /* 0x161AED26: je 0x161aed81 */
L_161AED28:
    /* cmp eax, 0x10B00000u */ /* 0x161AED28: cmp eax, 0x10b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED77; /* 0x161AED2D: je 0x161aed77 */
L_161AED2F:
    /* cmp eax, 0x10C00000u */ /* 0x161AED2F: cmp eax, 0x10c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED6D; /* 0x161AED34: je 0x161aed6d */
L_161AED36:
    /* cmp eax, 0x11200000u */ /* 0x161AED36: cmp eax, 0x11200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED63; /* 0x161AED3B: je 0x161aed63 */
L_161AED3D:
    /* cmp eax, 0x12000000u */ /* 0x161AED3D: cmp eax, 0x12000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AED59; /* 0x161AED42: je 0x161aed59 */
L_161AED44:
    /* cmp eax, 0x12100000u */ /* 0x161AED44: cmp eax, 0x12100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AED49: jne 0x161af088 */
L_161AED4F:
    eax = 0x1603E2F0u; /* 0x161AED4F: mov eax, 0x1603e2f0 */
    goto L_161AF0B7; /* 0x161AED54: jmp 0x161af0b7 */
L_161AED59:
    eax = 0x1603E2E8u; /* 0x161AED59: mov eax, 0x1603e2e8 */
    goto L_161AF0B7; /* 0x161AED5E: jmp 0x161af0b7 */
L_161AED63:
    eax = 0x1603B874u; /* 0x161AED63: mov eax, 0x1603b874 */
    goto L_161AF0B7; /* 0x161AED68: jmp 0x161af0b7 */
L_161AED6D:
    eax = 0x1603BA4Cu; /* 0x161AED6D: mov eax, 0x1603ba4c */
    goto L_161AF0B7; /* 0x161AED72: jmp 0x161af0b7 */
L_161AED77:
    eax = 0x1603BA88u; /* 0x161AED77: mov eax, 0x1603ba88 */
    goto L_161AF0B7; /* 0x161AED7C: jmp 0x161af0b7 */
L_161AED81:
    eax = 0x1603BA64u; /* 0x161AED81: mov eax, 0x1603ba64 */
    goto L_161AF0B7; /* 0x161AED86: jmp 0x161af0b7 */
L_161AED8B:
    eax = 0x1603BA28u; /* 0x161AED8B: mov eax, 0x1603ba28 */
    goto L_161AF0B7; /* 0x161AED90: jmp 0x161af0b7 */
L_161AED95:
    eax = 0x1603E310u; /* 0x161AED95: mov eax, 0x1603e310 */
    goto L_161AF0B7; /* 0x161AED9A: jmp 0x161af0b7 */
L_161AED9F:
    ecx = 0x13800000u; /* 0x161AED9F: mov ecx, 0x13800000 */
    /* cmp eax, ecx */ /* 0x161AEDA4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AEE33; /* 0x161AEDA6: ja 0x161aee33 */
L_161AEDAC:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE29; /* 0x161AEDAC: je 0x161aee29 */
L_161AEDAE:
    /* cmp eax, 0x13100000u */ /* 0x161AEDAE: cmp eax, 0x13100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE1F; /* 0x161AEDB3: je 0x161aee1f */
L_161AEDB5:
    /* cmp eax, 0x13200000u */ /* 0x161AEDB5: cmp eax, 0x13200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE15; /* 0x161AEDBA: je 0x161aee15 */
L_161AEDBC:
    /* cmp eax, 0x13300000u */ /* 0x161AEDBC: cmp eax, 0x13300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE0B; /* 0x161AEDC1: je 0x161aee0b */
L_161AEDC3:
    /* cmp eax, 0x13400000u */ /* 0x161AEDC3: cmp eax, 0x13400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE01; /* 0x161AEDC8: je 0x161aee01 */
L_161AEDCA:
    /* cmp eax, 0x13500000u */ /* 0x161AEDCA: cmp eax, 0x13500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEDF7; /* 0x161AEDCF: je 0x161aedf7 */
L_161AEDD1:
    /* cmp eax, 0x13600000u */ /* 0x161AEDD1: cmp eax, 0x13600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEDED; /* 0x161AEDD6: je 0x161aeded */
L_161AEDD8:
    /* cmp eax, 0x13700000u */ /* 0x161AEDD8: cmp eax, 0x13700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AEDDD: jne 0x161af088 */
L_161AEDE3:
    eax = 0x1603E348u; /* 0x161AEDE3: mov eax, 0x1603e348 */
    goto L_161AF0B7; /* 0x161AEDE8: jmp 0x161af0b7 */
L_161AEDED:
    eax = 0x1603E340u; /* 0x161AEDED: mov eax, 0x1603e340 */
    goto L_161AF0B7; /* 0x161AEDF2: jmp 0x161af0b7 */
L_161AEDF7:
    eax = 0x1603E338u; /* 0x161AEDF7: mov eax, 0x1603e338 */
    goto L_161AF0B7; /* 0x161AEDFC: jmp 0x161af0b7 */
L_161AEE01:
    eax = 0x1603E330u; /* 0x161AEE01: mov eax, 0x1603e330 */
    goto L_161AF0B7; /* 0x161AEE06: jmp 0x161af0b7 */
L_161AEE0B:
    eax = 0x1603E328u; /* 0x161AEE0B: mov eax, 0x1603e328 */
    goto L_161AF0B7; /* 0x161AEE10: jmp 0x161af0b7 */
L_161AEE15:
    eax = 0x1603E320u; /* 0x161AEE15: mov eax, 0x1603e320 */
    goto L_161AF0B7; /* 0x161AEE1A: jmp 0x161af0b7 */
L_161AEE1F:
    eax = 0x1603E318u; /* 0x161AEE1F: mov eax, 0x1603e318 */
    goto L_161AF0B7; /* 0x161AEE24: jmp 0x161af0b7 */
L_161AEE29:
    eax = 0x1603B8B0u; /* 0x161AEE29: mov eax, 0x1603b8b0 */
    goto L_161AF0B7; /* 0x161AEE2E: jmp 0x161af0b7 */
L_161AEE33:
    /* cmp eax, 0x13900000u */ /* 0x161AEE33: cmp eax, 0x13900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEEA4; /* 0x161AEE38: je 0x161aeea4 */
L_161AEE3A:
    /* cmp eax, 0x13A00000u */ /* 0x161AEE3A: cmp eax, 0x13a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE9A; /* 0x161AEE3F: je 0x161aee9a */
L_161AEE41:
    /* cmp eax, 0x20000000u */ /* 0x161AEE41: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE90; /* 0x161AEE46: je 0x161aee90 */
L_161AEE48:
    /* cmp eax, 0x20100000u */ /* 0x161AEE48: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE86; /* 0x161AEE4D: je 0x161aee86 */
L_161AEE4F:
    /* cmp eax, 0x20200000u */ /* 0x161AEE4F: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE7C; /* 0x161AEE54: je 0x161aee7c */
L_161AEE56:
    /* cmp eax, 0x20300000u */ /* 0x161AEE56: cmp eax, 0x20300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEE72; /* 0x161AEE5B: je 0x161aee72 */
L_161AEE5D:
    /* cmp eax, 0x20400000u */ /* 0x161AEE5D: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AEE62: jne 0x161af088 */
L_161AEE68:
    eax = 0x1602D060u; /* 0x161AEE68: mov eax, 0x1602d060 */
    goto L_161AF0B7; /* 0x161AEE6D: jmp 0x161af0b7 */
L_161AEE72:
    eax = 0x1602D9ECu; /* 0x161AEE72: mov eax, 0x1602d9ec */
    goto L_161AF0B7; /* 0x161AEE77: jmp 0x161af0b7 */
L_161AEE7C:
    eax = 0x1602D9F0u; /* 0x161AEE7C: mov eax, 0x1602d9f0 */
    goto L_161AF0B7; /* 0x161AEE81: jmp 0x161af0b7 */
L_161AEE86:
    eax = 0x1602D03Cu; /* 0x161AEE86: mov eax, 0x1602d03c */
    goto L_161AF0B7; /* 0x161AEE8B: jmp 0x161af0b7 */
L_161AEE90:
    eax = 0x1602D040u; /* 0x161AEE90: mov eax, 0x1602d040 */
    goto L_161AF0B7; /* 0x161AEE95: jmp 0x161af0b7 */
L_161AEE9A:
    eax = 0x1603BA3Cu; /* 0x161AEE9A: mov eax, 0x1603ba3c */
    goto L_161AF0B7; /* 0x161AEE9F: jmp 0x161af0b7 */
L_161AEEA4:
    eax = 0x1603B96Cu; /* 0x161AEEA4: mov eax, 0x1603b96c */
    goto L_161AF0B7; /* 0x161AEEA9: jmp 0x161af0b7 */
L_161AEEAE:
    eax = 0x1602D054u; /* 0x161AEEAE: mov eax, 0x1602d054 */
    goto L_161AF0B7; /* 0x161AEEB3: jmp 0x161af0b7 */
L_161AEEB8:
    ecx = 0x21E00000u; /* 0x161AEEB8: mov ecx, 0x21e00000 */
    /* cmp eax, ecx */ /* 0x161AEEBD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AEFE4; /* 0x161AEEBF: ja 0x161aefe4 */
L_161AEEC5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFDA; /* 0x161AEEC5: je 0x161aefda */
L_161AEECB:
    ecx = 0x21500000u; /* 0x161AEECB: mov ecx, 0x21500000 */
    /* cmp eax, ecx */ /* 0x161AEED0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AEF5F; /* 0x161AEED2: ja 0x161aef5f */
L_161AEED8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF55; /* 0x161AEED8: je 0x161aef55 */
L_161AEEDA:
    /* cmp eax, 0x20600000u */ /* 0x161AEEDA: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF4B; /* 0x161AEEDF: je 0x161aef4b */
L_161AEEE1:
    /* cmp eax, 0x20800000u */ /* 0x161AEEE1: cmp eax, 0x20800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF41; /* 0x161AEEE6: je 0x161aef41 */
L_161AEEE8:
    /* cmp eax, 0x21000000u */ /* 0x161AEEE8: cmp eax, 0x21000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF37; /* 0x161AEEED: je 0x161aef37 */
L_161AEEEF:
    /* cmp eax, 0x21100000u */ /* 0x161AEEEF: cmp eax, 0x21100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF2D; /* 0x161AEEF4: je 0x161aef2d */
L_161AEEF6:
    /* cmp eax, 0x21200000u */ /* 0x161AEEF6: cmp eax, 0x21200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF23; /* 0x161AEEFB: je 0x161aef23 */
L_161AEEFD:
    /* cmp eax, 0x21300000u */ /* 0x161AEEFD: cmp eax, 0x21300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF19; /* 0x161AEF02: je 0x161aef19 */
L_161AEF04:
    /* cmp eax, 0x21400000u */ /* 0x161AEF04: cmp eax, 0x21400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AEF09: jne 0x161af088 */
L_161AEF0F:
    eax = 0x1603E3ECu; /* 0x161AEF0F: mov eax, 0x1603e3ec */
    goto L_161AF0B7; /* 0x161AEF14: jmp 0x161af0b7 */
L_161AEF19:
    eax = 0x1603E3FCu; /* 0x161AEF19: mov eax, 0x1603e3fc */
    goto L_161AF0B7; /* 0x161AEF1E: jmp 0x161af0b7 */
L_161AEF23:
    eax = 0x1603E3F4u; /* 0x161AEF23: mov eax, 0x1603e3f4 */
    goto L_161AF0B7; /* 0x161AEF28: jmp 0x161af0b7 */
L_161AEF2D:
    eax = 0x1603E3E4u; /* 0x161AEF2D: mov eax, 0x1603e3e4 */
    goto L_161AF0B7; /* 0x161AEF32: jmp 0x161af0b7 */
L_161AEF37:
    eax = 0x1603E3D4u; /* 0x161AEF37: mov eax, 0x1603e3d4 */
    goto L_161AF0B7; /* 0x161AEF3C: jmp 0x161af0b7 */
L_161AEF41:
    eax = 0x1603E388u; /* 0x161AEF41: mov eax, 0x1603e388 */
    goto L_161AF0B7; /* 0x161AEF46: jmp 0x161af0b7 */
L_161AEF4B:
    eax = 0x1603BA44u; /* 0x161AEF4B: mov eax, 0x1603ba44 */
    goto L_161AF0B7; /* 0x161AEF50: jmp 0x161af0b7 */
L_161AEF55:
    eax = 0x1603E3DCu; /* 0x161AEF55: mov eax, 0x1603e3dc */
    goto L_161AF0B7; /* 0x161AEF5A: jmp 0x161af0b7 */
L_161AEF5F:
    /* cmp eax, 0x21600000u */ /* 0x161AEF5F: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFD0; /* 0x161AEF64: je 0x161aefd0 */
L_161AEF66:
    /* cmp eax, 0x21700000u */ /* 0x161AEF66: cmp eax, 0x21700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFC6; /* 0x161AEF6B: je 0x161aefc6 */
L_161AEF6D:
    /* cmp eax, 0x21900000u */ /* 0x161AEF6D: cmp eax, 0x21900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFBC; /* 0x161AEF72: je 0x161aefbc */
L_161AEF74:
    /* cmp eax, 0x21A00000u */ /* 0x161AEF74: cmp eax, 0x21a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFB2; /* 0x161AEF79: je 0x161aefb2 */
L_161AEF7B:
    /* cmp eax, 0x21B00000u */ /* 0x161AEF7B: cmp eax, 0x21b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEFA8; /* 0x161AEF80: je 0x161aefa8 */
L_161AEF82:
    /* cmp eax, 0x21C00000u */ /* 0x161AEF82: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AEF9E; /* 0x161AEF87: je 0x161aef9e */
L_161AEF89:
    /* cmp eax, 0x21D00000u */ /* 0x161AEF89: cmp eax, 0x21d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AEF8E: jne 0x161af088 */
L_161AEF94:
    eax = 0x1603E3A4u; /* 0x161AEF94: mov eax, 0x1603e3a4 */
    goto L_161AF0B7; /* 0x161AEF99: jmp 0x161af0b7 */
L_161AEF9E:
    eax = 0x1603E380u; /* 0x161AEF9E: mov eax, 0x1603e380 */
    goto L_161AF0B7; /* 0x161AEFA3: jmp 0x161af0b7 */
L_161AEFA8:
    eax = 0x1603E39Cu; /* 0x161AEFA8: mov eax, 0x1603e39c */
    goto L_161AF0B7; /* 0x161AEFAD: jmp 0x161af0b7 */
L_161AEFB2:
    eax = 0x1603E394u; /* 0x161AEFB2: mov eax, 0x1603e394 */
    goto L_161AF0B7; /* 0x161AEFB7: jmp 0x161af0b7 */
L_161AEFBC:
    eax = 0x1603E370u; /* 0x161AEFBC: mov eax, 0x1603e370 */
    goto L_161AF0B7; /* 0x161AEFC1: jmp 0x161af0b7 */
L_161AEFC6:
    eax = 0x1603E38Cu; /* 0x161AEFC6: mov eax, 0x1603e38c */
    goto L_161AF0B7; /* 0x161AEFCB: jmp 0x161af0b7 */
L_161AEFD0:
    eax = 0x1603E360u; /* 0x161AEFD0: mov eax, 0x1603e360 */
    goto L_161AF0B7; /* 0x161AEFD5: jmp 0x161af0b7 */
L_161AEFDA:
    eax = 0x1603E3BCu; /* 0x161AEFDA: mov eax, 0x1603e3bc */
    goto L_161AF0B7; /* 0x161AEFDF: jmp 0x161af0b7 */
L_161AEFE4:
    ecx = 0x23600000u; /* 0x161AEFE4: mov ecx, 0x23600000 */
    /* cmp eax, ecx */ /* 0x161AEFE9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AF05E; /* 0x161AEFEB: ja 0x161af05e */
L_161AEFED:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF057; /* 0x161AEFED: je 0x161af057 */
L_161AEFEF:
    /* cmp eax, 0x21F00000u */ /* 0x161AEFEF: cmp eax, 0x21f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF050; /* 0x161AEFF4: je 0x161af050 */
L_161AEFF6:
    /* cmp eax, 0x22000000u */ /* 0x161AEFF6: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF049; /* 0x161AEFFB: je 0x161af049 */
L_161AEFFD:
    /* cmp eax, 0x23000000u */ /* 0x161AEFFD: cmp eax, 0x23000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF042; /* 0x161AF002: je 0x161af042 */
L_161AF004:
    /* cmp eax, 0x23100000u */ /* 0x161AF004: cmp eax, 0x23100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF03B; /* 0x161AF009: je 0x161af03b */
L_161AF00B:
    /* cmp eax, 0x23300000u */ /* 0x161AF00B: cmp eax, 0x23300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF034; /* 0x161AF010: je 0x161af034 */
L_161AF012:
    /* cmp eax, 0x23400000u */ /* 0x161AF012: cmp eax, 0x23400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF02A; /* 0x161AF017: je 0x161af02a */
L_161AF019:
    /* cmp eax, 0x23500000u */ /* 0x161AF019: cmp eax, 0x23500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF088; /* 0x161AF01E: jne 0x161af088 */
L_161AF020:
    eax = 0x1603E428u; /* 0x161AF020: mov eax, 0x1603e428 */
    goto L_161AF0B7; /* 0x161AF025: jmp 0x161af0b7 */
L_161AF02A:
    eax = 0x1603E420u; /* 0x161AF02A: mov eax, 0x1603e420 */
    goto L_161AF0B7; /* 0x161AF02F: jmp 0x161af0b7 */
L_161AF034:
    eax = 0x1603E41Cu; /* 0x161AF034: mov eax, 0x1603e41c */
    goto L_161AF0B7; /* 0x161AF039: jmp 0x161af0b7 */
L_161AF03B:
    eax = 0x1603E418u; /* 0x161AF03B: mov eax, 0x1603e418 */
    goto L_161AF0B7; /* 0x161AF040: jmp 0x161af0b7 */
L_161AF042:
    eax = 0x1603E414u; /* 0x161AF042: mov eax, 0x1603e414 */
    goto L_161AF0B7; /* 0x161AF047: jmp 0x161af0b7 */
L_161AF049:
    eax = 0x1603E3CCu; /* 0x161AF049: mov eax, 0x1603e3cc */
    goto L_161AF0B7; /* 0x161AF04E: jmp 0x161af0b7 */
L_161AF050:
    eax = 0x1603E3B4u; /* 0x161AF050: mov eax, 0x1603e3b4 */
    goto L_161AF0B7; /* 0x161AF055: jmp 0x161af0b7 */
L_161AF057:
    eax = 0x1603E430u; /* 0x161AF057: mov eax, 0x1603e430 */
    goto L_161AF0B7; /* 0x161AF05C: jmp 0x161af0b7 */
L_161AF05E:
    /* cmp eax, 0x30000000u */ /* 0x161AF05E: cmp eax, 0x30000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF0B2; /* 0x161AF063: je 0x161af0b2 */
L_161AF065:
    /* cmp eax, 0x30100000u */ /* 0x161AF065: cmp eax, 0x30100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF0AB; /* 0x161AF06A: je 0x161af0ab */
L_161AF06C:
    /* cmp eax, 0x50000000u */ /* 0x161AF06C: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF0A4; /* 0x161AF071: je 0x161af0a4 */
L_161AF073:
    /* cmp eax, 0x50200000u */ /* 0x161AF073: cmp eax, 0x50200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF09D; /* 0x161AF078: je 0x161af09d */
L_161AF07A:
    /* cmp eax, 0x70E00000u */ /* 0x161AF07A: cmp eax, 0x70e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF096; /* 0x161AF07F: je 0x161af096 */
L_161AF081:
    /* cmp eax, 0x71100000u */ /* 0x161AF081: cmp eax, 0x71100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x71100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF08F; /* 0x161AF086: je 0x161af08f */
L_161AF088:
    eax = 0x160313D0u; /* 0x161AF088: mov eax, 0x160313d0 */
    goto L_161AF0B7; /* 0x161AF08D: jmp 0x161af0b7 */
L_161AF08F:
    eax = 0x1603E4D0u; /* 0x161AF08F: mov eax, 0x1603e4d0 */
    goto L_161AF0B7; /* 0x161AF094: jmp 0x161af0b7 */
L_161AF096:
    eax = 0x1603E4C0u; /* 0x161AF096: mov eax, 0x1603e4c0 */
    goto L_161AF0B7; /* 0x161AF09B: jmp 0x161af0b7 */
L_161AF09D:
    eax = 0x1603B8F0u; /* 0x161AF09D: mov eax, 0x1603b8f0 */
    goto L_161AF0B7; /* 0x161AF0A2: jmp 0x161af0b7 */
L_161AF0A4:
    eax = 0x1603B9C8u; /* 0x161AF0A4: mov eax, 0x1603b9c8 */
    goto L_161AF0B7; /* 0x161AF0A9: jmp 0x161af0b7 */
L_161AF0AB:
    eax = 0x1603E440u; /* 0x161AF0AB: mov eax, 0x1603e440 */
    goto L_161AF0B7; /* 0x161AF0B0: jmp 0x161af0b7 */
L_161AF0B2:
    eax = 0x1602CE54u; /* 0x161AF0B2: mov eax, 0x1602ce54 */
L_161AF0B7:
    ebp = POP32_VAL(esp); /* 0x161AF0B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF0B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AF0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF0C0u);

L_161AF0C0:
    edi = edi; /* 0x161AF0C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF0C2: push ebp */
    ebp = esp; /* 0x161AF0C3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AF0C5: push ebx */
    PUSH32(esp, esi); /* 0x161AF0C6: push esi */
    esi = ecx; /* 0x161AF0C7: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x161AF0C9: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x161AF0CC: push edi */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x161AF0CD: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AF12B; /* 0x161AF0D0: jbe 0x161af12b */
L_161AF0D2:
    edi = eax + eax; /* 0x161AF0D2: lea edi, [eax + eax] */
    /* cmp edi, MEM32(ebp + 0x8) */ /* 0x161AF0D5: cmp edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AF0DD; /* 0x161AF0D8: ja 0x161af0dd */
L_161AF0DA:
    edi = MEM32(ebp + 0x8); /* 0x161AF0DA: mov edi, dword ptr [ebp + 8] */
L_161AF0DD:
    /* cmp edi, 0x10u */ /* 0x161AF0DD: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AF0E5; /* 0x161AF0E0: jae 0x161af0e5 */
L_161AF0E2:
    PUSH32(esp, 0x10u); /* 0x161AF0E2: push 0x10 */
    edi = POP32_VAL(esp); /* 0x161AF0E4: pop edi */
L_161AF0E5:
    /* cmp edi, eax */ /* 0x161AF0E5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AF134; /* 0x161AF0E7: jb 0x161af134 */
L_161AF0E9:
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x161AF0E9: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AF134; /* 0x161AF0EC: jb 0x161af134 */
L_161AF0EE:
    /* cmp edi, 0x15555555u */ /* 0x161AF0EE: cmp edi, 0x15555555 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x15555555u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AF134; /* 0x161AF0F4: jae 0x161af134 */
L_161AF0F6:
    eax = edi; /* 0x161AF0F6: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x161AF0F8: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x161AF0FB: push eax */
    RECOMP_CALL(sub_161AE0FC); /* 0x161AF0FC: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x161AF101: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x161AF103: pop ecx */
    /* test ebx, ebx */ /* 0x161AF104: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF134; /* 0x161AF106: je 0x161af134 */
L_161AF108:
    eax = MEM32(esi); /* 0x161AF108: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x161AF10A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF126; /* 0x161AF10C: je 0x161af126 */
L_161AF10E:
    ecx = MEM32(esi + 0x8); /* 0x161AF10E: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x161AF111: imul ecx, ecx, 0xc */
    PUSH32(esp, ecx); /* 0x161AF114: push ecx */
    PUSH32(esp, eax); /* 0x161AF115: push eax */
    PUSH32(esp, ebx); /* 0x161AF116: push ebx */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AF117: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x161AF11C: push dword ptr [esi] */
    RECOMP_CALL(sub_161AE0F0); /* 0x161AF11E: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x161AF123: add esp, 0x10 */
    _flag_k = FK_ADD;
L_161AF126:
    MEM32(esi) = ebx; /* 0x161AF126: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = edi; /* 0x161AF128: mov dword ptr [esi + 4], edi */
L_161AF12B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF12B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AF12D:
    edi = POP32_VAL(esp); /* 0x161AF12D: pop edi */
    esi = POP32_VAL(esp); /* 0x161AF12E: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AF12F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AF130: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF131: ret 4 */
L_161AF134:
    eax = 0x8007000Eu; /* 0x161AF134: mov eax, 0x8007000e */
    MEM32(esi + 0xC) = eax; /* 0x161AF139: mov dword ptr [esi + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_161AF12D; /* 0x161AF13C: jmp 0x161af12d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF143(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF143u);

L_161AF143:
    edi = edi; /* 0x161AF143: mov edi, edi */
    PUSH32(esp, esi); /* 0x161AF145: push esi */
    esi = ecx; /* 0x161AF146: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x161AF148: push dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161AF14A: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161AF14E: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_161AE0F0); /* 0x161AF152: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x161AF157: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x161AF15A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161AF15E: pop ecx */
    esi = POP32_VAL(esp); /* 0x161AF15F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF160: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AF166(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF166u);

L_161AF166:
    edi = edi; /* 0x161AF166: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF168: push ebp */
    ebp = esp; /* 0x161AF169: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AF16B: push ecx */
    PUSH32(esp, esi); /* 0x161AF16C: push esi */
    esi = ecx; /* 0x161AF16D: mov esi, ecx */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x161AF16F: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF179; /* 0x161AF173: jne 0x161af179 */
L_161AF175:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF175: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AF1B2; /* 0x161AF177: jmp 0x161af1b2 */
L_161AF179:
    PUSH32(esp, edi); /* 0x161AF179: push edi */
    eax = ebp + (-0x4); /* 0x161AF17A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AF17D: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x161AF17E: push 0x7fffffff */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AF183: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_160C9E00); /* 0x161AF186: call 0x160c9e00 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x4)); /* 0x161AF18B: mov edi, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x161AF18E: push dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AF191: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x161AF192: push edi */
    RECOMP_CALL(sub_161A8E99); /* 0x161AF193: call 0x161a8e99 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AF198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF1B1; /* 0x161AF19A: jl 0x161af1b1 */
L_161AF19C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AF19C: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1C); /* 0x161AF19F: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax); /* 0x161AF1A2: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x161AF1A4: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x161AF1A6: push edi */
    PUSH32(esp, eax); /* 0x161AF1A7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x161AF1A8: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x161AF1AB: push eax */
    RECOMP_CALL(sub_16078370); /* 0x161AF1AC: call 0x16078370 */
    RECOMP_FLAGS_IN();
L_161AF1B1:
    edi = POP32_VAL(esp); /* 0x161AF1B1: pop edi */
L_161AF1B2:
    esi = POP32_VAL(esp); /* 0x161AF1B2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AF1B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF1B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AF1BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF1BCu);

L_161AF1BC:
    edi = edi; /* 0x161AF1BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF1BE: push ebp */
    ebp = esp; /* 0x161AF1BF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AF1C1: push ebx */
    ebx = ecx; /* 0x161AF1C2: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x161AF1C4: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AF1C7: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x161AF1C8: push eax */
    RECOMP_CALL(sub_161AF0C0); /* 0x161AF1C9: call 0x161af0c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AF1CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AF1D7; /* 0x161AF1D0: jge 0x161af1d7 */
L_161AF1D2:
    eax = MEM32(ebx + 0xC); /* 0x161AF1D2: mov eax, dword ptr [ebx + 0xc] */
    goto L_161AF1EE; /* 0x161AF1D5: jmp 0x161af1ee */
L_161AF1D7:
    PUSH32(esp, esi); /* 0x161AF1D7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AF1D8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AF1DB: push edi */
    edi = MEM32(ebx + 0x8); /* 0x161AF1DC: mov edi, dword ptr [ebx + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xCu); /* 0x161AF1DF: imul edi, edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx); /* 0x161AF1E2: add edi, dword ptr [ebx] */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AF1E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AF1E5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AF1E6: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) + 1; /* 0x161AF1E7: inc dword ptr [ebx + 8] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x161AF1EA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF1EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161AF1ED: pop esi */
L_161AF1EE:
    ebx = POP32_VAL(esp); /* 0x161AF1EE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AF1EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF1F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AF1F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF1F8u);

L_161AF1F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AF1F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x161AF1FA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF1FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = edx; /* 0x161AF1FD: mov dword ptr [ecx + 0xc], edx */
    MEM32(ecx) = edx; /* 0x161AF200: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = edx; /* 0x161AF202: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x8) = edx; /* 0x161AF205: mov dword ptr [ecx + 8], edx */
    edi = ecx + 0x10; /* 0x161AF208: lea edi, [ecx + 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF20B: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF20C: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF20D: stosd dword ptr es:[edi], eax */
    MEM32(ecx + 0x1C) = edx; /* 0x161AF20E: mov dword ptr [ecx + 0x1c], edx */
    MEM32(ecx + 0x20) = edx; /* 0x161AF211: mov dword ptr [ecx + 0x20], edx */
    eax = ecx; /* 0x161AF214: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x161AF216: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF217: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AF21D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF21Du);

    goto L_161AF21D;
L_161AF143:
    edi = edi; /* 0x161AF143: mov edi, edi */
    PUSH32(esp, esi); /* 0x161AF145: push esi */
    esi = ecx; /* 0x161AF146: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x161AF148: push dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161AF14A: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161AF14E: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_161AE0F0); /* 0x161AF152: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x161AF157: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x161AF15A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161AF15E: pop ecx */
    esi = POP32_VAL(esp); /* 0x161AF15F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF160: ret  */
L_161AF21D:
    edi = edi; /* 0x161AF21D: mov edi, edi */
    PUSH32(esp, esi); /* 0x161AF21F: push esi */
    esi = ecx; /* 0x161AF220: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x161AF222: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_161AE0F0); /* 0x161AF225: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x161AF22A: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161AF22E: pop ecx */
    ecx = esi; /* 0x161AF22F: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x161AF231: pop esi */
    RECOMP_BACKEDGE();
    goto L_161AF143; /* 0x161AF232: jmp 0x161af143 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF23C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF23Cu);

L_161AF23C:
    edi = edi; /* 0x161AF23C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF23E: push ebp */
    ebp = esp; /* 0x161AF23F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AF241: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AF242: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161AF246: push ebx */
    PUSH32(esp, esi); /* 0x161AF247: push esi */
    PUSH32(esp, 0x2Eu); /* 0x161AF248: push 0x2e */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AF24A: push dword ptr [ebp + 8] */
    ebx = ecx; /* 0x161AF24D: mov ebx, ecx */
    RECOMP_CALL(sub_161ADD22); /* 0x161AF24F: call 0x161add22 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161AF254: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x161AF256: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF257: pop ecx */
    /* test esi, esi */ /* 0x161AF258: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF262; /* 0x161AF25A: jne 0x161af262 */
L_161AF25C:
    MEM8(ebx + 0x19) = (uint8_t)(4); /* 0x161AF25C: mov byte ptr [ebx + 0x19], 4 */
    goto L_161AF2B8; /* 0x161AF260: jmp 0x161af2b8 */
L_161AF262:
    MEM8(esi) = (uint8_t)(0); /* 0x161AF262: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AF265: inc esi */
    _flag_k = FK_INC;
    eax = esi; /* 0x161AF266: mov eax, esi */
    ecx = eax + 0x1; /* 0x161AF268: lea ecx, [eax + 1] */
L_161AF26B:
    SET_LO8(edx, MEM8(eax)); /* 0x161AF26B: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AF26D: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AF26E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF26B; /* 0x161AF270: jne 0x161af26b */
L_161AF272:
    PUSH32(esp, edi); /* 0x161AF272: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x161AF273: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161AF275: push esi */
    edi = 0x1602F56Cu; /* 0x161AF276: mov edi, 0x1602f56c */
    PUSH32(esp, edi); /* 0x161AF27B: push edi */
    MEM32(ebp + 0x8) = eax; /* 0x161AF27C: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_161AF504); /* 0x161AF27F: call 0x161af504 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF284: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF285: pop ecx */
    /* test eax, eax */ /* 0x161AF286: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF29C; /* 0x161AF288: jne 0x161af29c */
L_161AF28A:
    PUSH32(esp, esi); /* 0x161AF28A: push esi */
    edi = 0x16001FF4u; /* 0x161AF28B: mov edi, 0x16001ff4 */
    PUSH32(esp, edi); /* 0x161AF290: push edi */
    RECOMP_CALL(sub_161AF504); /* 0x161AF291: call 0x161af504 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF296: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF297: pop ecx */
    /* test eax, eax */ /* 0x161AF298: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF2BE; /* 0x161AF29A: je 0x161af2be */
L_161AF29C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x161AF29C: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x161AF29E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF2AB; /* 0x161AF2A2: jne 0x161af2ab */
L_161AF2A4:
    MEM32(ebp + 0x8) = 4; /* 0x161AF2A4: mov dword ptr [ebp + 8], 4 */
L_161AF2AB:
    MEM8(ebx + 0x18) = (uint8_t)(LO8(eax)); /* 0x161AF2AB: mov byte ptr [ebx + 0x18], al */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x161AF2AE: mov al, byte ptr [ebp + 8] */
    MEM8(ebx + 0x19) = (uint8_t)(LO8(eax)); /* 0x161AF2B1: mov byte ptr [ebx + 0x19], al */
L_161AF2B4:
    eax = MEM32(ebp + (-0x4)); /* 0x161AF2B4: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x161AF2B7: pop edi */
L_161AF2B8:
    esi = POP32_VAL(esp); /* 0x161AF2B8: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AF2B9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AF2BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF2BB: ret 4 */
L_161AF2BE:
    PUSH32(esp, esi); /* 0x161AF2BE: push esi */
    PUSH32(esp, 0x16001FB8u); /* 0x161AF2BF: push 0x16001fb8 */
    edi = ebx + 0x24; /* 0x161AF2C4: lea edi, [ebx + 0x24] */
    PUSH32(esp, 0xFEu); /* 0x161AF2C7: push 0xfe */
    PUSH32(esp, edi); /* 0x161AF2CC: push edi */
    RECOMP_CALL(sub_16065F10); /* 0x161AF2CD: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x161AF2D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x161AF2D5: push edi */
    ecx = ebx; /* 0x161AF2D6: mov ecx, ebx */
    RECOMP_CALL(sub_161AF166); /* 0x161AF2D8: call 0x161af166 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x161AF2DD: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_161AF2B4; /* 0x161AF2E4: jmp 0x161af2b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF2EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF2EBu);

L_161AF2EB:
    edi = edi; /* 0x161AF2EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF2ED: push ebp */
    ebp = esp; /* 0x161AF2EE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AF2F0: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AF2F1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161AF2F5: push ebx */
    PUSH32(esp, esi); /* 0x161AF2F6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AF2F7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AF2FA: push edi */
    PUSH32(esp, 0x3Au); /* 0x161AF2FB: push 0x3a */
    PUSH32(esp, MEM32(esi)); /* 0x161AF2FD: push dword ptr [esi] */
    ebx = ecx; /* 0x161AF2FF: mov ebx, ecx */
    RECOMP_CALL(sub_161ADD22); /* 0x161AF301: call 0x161add22 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161AF306: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x161AF308: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF309: pop ecx */
    /* test edi, edi */ /* 0x161AF30A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF36D; /* 0x161AF30C: je 0x161af36d */
L_161AF30E:
    /* cmp edi, MEM32(esi) */ /* 0x161AF30E: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF327; /* 0x161AF310: jne 0x161af327 */
L_161AF312:
    PUSH32(esp, 0x16002038u); /* 0x161AF312: push 0x16002038 */
L_161AF317:
    ecx = ebx; /* 0x161AF317: mov ecx, ebx */
    RECOMP_CALL(sub_161AF166); /* 0x161AF319: call 0x161af166 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x161AF31E: mov dword ptr [ebp - 4], 0x80004005 */
    goto L_161AF36A; /* 0x161AF325: jmp 0x161af36a */
L_161AF327:
    MEM8(edi) = (uint8_t)(0); /* 0x161AF327: mov byte ptr [edi], 0 */
    PUSH32(esp, MEM32(esi)); /* 0x161AF32A: push dword ptr [esi] */
    RECOMP_CALL(sub_161AE144); /* 0x161AF32C: call 0x161ae144 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF331: pop ecx */
    /* test eax, eax */ /* 0x161AF332: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF312; /* 0x161AF334: jl 0x161af312 */
L_161AF336:
    /* cmp eax, 0xFFu */ /* 0x161AF336: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_161AF312; /* 0x161AF33B: jg 0x161af312 */
L_161AF33D:
    MEM8(ebx + 0x1A) = (uint8_t)(LO8(eax)); /* 0x161AF33D: mov byte ptr [ebx + 0x1a], al */
    goto L_161AF354; /* 0x161AF340: jmp 0x161af354 */
L_161AF342:
    eax = MEM32(esi); /* 0x161AF342: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x161AF344: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x161AF347: push eax */
    RECOMP_CALL(sub_161AE138); /* 0x161AF348: call 0x161ae138 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF34D: pop ecx */
    /* test eax, eax */ /* 0x161AF34E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF374; /* 0x161AF350: je 0x161af374 */
L_161AF352:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x161AF352: inc dword ptr [esi] */
    _flag_k = FK_INC;
L_161AF354:
    /* cmp MEM32(esi), edi */ /* 0x161AF354: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AF342; /* 0x161AF356: jb 0x161af342 */
L_161AF358:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x161AF358: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x161AF35A: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x161AF35C: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x161AF35F: push eax */
    RECOMP_CALL(sub_161AE96A); /* 0x161AF360: call 0x161ae96a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF365: pop ecx */
    /* test eax, eax */ /* 0x161AF366: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF358; /* 0x161AF368: jne 0x161af358 */
L_161AF36A:
    eax = MEM32(ebp + (-0x4)); /* 0x161AF36A: mov eax, dword ptr [ebp - 4] */
L_161AF36D:
    edi = POP32_VAL(esp); /* 0x161AF36D: pop edi */
    esi = POP32_VAL(esp); /* 0x161AF36E: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AF36F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AF370: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF371: ret 4 */
L_161AF374:
    eax = MEM32(esi); /* 0x161AF374: mov eax, dword ptr [esi] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x161AF376: movsx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x161AF379: push eax */
    PUSH32(esp, 0x16001FFCu); /* 0x161AF37A: push 0x16001ffc */
    edi = ebx + 0x24; /* 0x161AF37F: lea edi, [ebx + 0x24] */
    PUSH32(esp, 0xFEu); /* 0x161AF382: push 0xfe */
    PUSH32(esp, edi); /* 0x161AF387: push edi */
    RECOMP_CALL(sub_16065F10); /* 0x161AF388: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x161AF38D: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x161AF390: push edi */
    RECOMP_BACKEDGE();
    goto L_161AF317; /* 0x161AF391: jmp 0x161af317 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF398u);

L_161AF398:
    edi = edi; /* 0x161AF398: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF39A: push ebp */
    ebp = esp; /* 0x161AF39B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AF39D: push ecx */
    PUSH32(esp, esi); /* 0x161AF39E: push esi */
    PUSH32(esp, edi); /* 0x161AF39F: push edi */
    esi = ecx; /* 0x161AF3A0: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF3A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x10; /* 0x161AF3A4: lea edi, [esi + 0x10] */
    MEM32(ebp + (-0x4)) = edi; /* 0x161AF3A7: mov dword ptr [ebp - 4], edi */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF3AA: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF3AB: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AF3AC: stosd dword ptr es:[edi], eax */
    eax = ebp + 0x8; /* 0x161AF3AD: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AF3B0: push eax */
    RECOMP_CALL(sub_161AF2EB); /* 0x161AF3B1: call 0x161af2eb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AF3B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF3EC; /* 0x161AF3B8: jl 0x161af3ec */
L_161AF3BA:
    PUSH32(esp, ebx); /* 0x161AF3BA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x161AF3BB: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x161AF3BE: push ebx */
    ecx = esi; /* 0x161AF3BF: mov ecx, esi */
    RECOMP_CALL(sub_161AF23C); /* 0x161AF3C1: call 0x161af23c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AF3C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF3EB; /* 0x161AF3C8: jl 0x161af3eb */
L_161AF3CA:
    PUSH32(esp, ebx); /* 0x161AF3CA: push ebx */
    ecx = esi; /* 0x161AF3CB: mov ecx, esi */
    RECOMP_CALL(sub_161AEBF0); /* 0x161AF3CD: call 0x161aebf0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AF3D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF3EB; /* 0x161AF3D4: jl 0x161af3eb */
L_161AF3D6:
    PUSH32(esp, 6); /* 0x161AF3D6: push 6 */
    edi = ebx; /* 0x161AF3D8: mov edi, ebx */
    esi = 0x16002068u; /* 0x161AF3DA: mov esi, 0x16002068 */
    ecx = POP32_VAL(esp); /* 0x161AF3DF: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AF3E0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x161AF3E2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_161AF3EB; /* 0x161AF3E4: je 0x161af3eb */
L_161AF3E6:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AF3E6: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx) = ebx; /* 0x161AF3E9: mov dword ptr [ecx], ebx */
L_161AF3EB:
    ebx = POP32_VAL(esp); /* 0x161AF3EB: pop ebx */
L_161AF3EC:
    edi = POP32_VAL(esp); /* 0x161AF3EC: pop edi */
    esi = POP32_VAL(esp); /* 0x161AF3ED: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AF3EE: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AF3EF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AF3F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF3F7u);

L_161AF3F7:
    edi = edi; /* 0x161AF3F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AF3F9: push ebp */
    ebp = esp; /* 0x161AF3FA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AF3FC: push ecx */
    PUSH32(esp, ebx); /* 0x161AF3FD: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AF3FE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AF400: push esi */
    esi = ecx; /* 0x161AF401: mov esi, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x161AF403: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x161AF406: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF40F; /* 0x161AF409: jne 0x161af40f */
L_161AF40B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF40B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AF44D; /* 0x161AF40D: jmp 0x161af44d */
L_161AF40F:
    eax = MEM32(ebp + 0x8); /* 0x161AF40F: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x161AF412: lea edx, [eax + 1] */
L_161AF415:
    SET_LO8(ecx, MEM8(eax)); /* 0x161AF415: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AF417: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x161AF418: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF415; /* 0x161AF41A: jne 0x161af415 */
L_161AF41C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161AF41C: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x161AF41E: push edi */
    edi = eax; /* 0x161AF41F: mov edi, eax */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_161AF427; /* 0x161AF421: jne 0x161af427 */
L_161AF423:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF423: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AF44C; /* 0x161AF425: jmp 0x161af44c */
L_161AF427:
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x161AF427: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_161AE0F0); /* 0x161AF42A: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AF42F: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x161AF430: push edi */
    MEM32(esi + 0x20) = ebx; /* 0x161AF431: mov dword ptr [esi + 0x20], ebx */
    RECOMP_CALL(sub_161AE0FC); /* 0x161AF434: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF439: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF43A: pop ecx */
    MEM32(esi + 0x20) = eax; /* 0x161AF43B: mov dword ptr [esi + 0x20], eax */
    /* cmp eax, ebx */ /* 0x161AF43E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AF453; /* 0x161AF440: jne 0x161af453 */
L_161AF442:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x161AF442: mov dword ptr [ebp - 4], 0x8007000e */
L_161AF449:
    eax = MEM32(ebp + (-0x4)); /* 0x161AF449: mov eax, dword ptr [ebp - 4] */
L_161AF44C:
    edi = POP32_VAL(esp); /* 0x161AF44C: pop edi */
L_161AF44D:
    esi = POP32_VAL(esp); /* 0x161AF44D: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AF44E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AF44F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AF450: ret 8 */
L_161AF453:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AF453: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AF456: push edi */
    PUSH32(esp, eax); /* 0x161AF457: push eax */
    RECOMP_CALL(sub_16078370); /* 0x161AF458: call 0x16078370 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x161AF45D: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(esi + 0x20); /* 0x161AF460: mov edi, dword ptr [esi + 0x20] */
    ecx = esi; /* 0x161AF463: mov ecx, esi */
    MEM32(esi + 0x1C) = eax; /* 0x161AF465: mov dword ptr [esi + 0x1c], eax */
    RECOMP_CALL(sub_161AF143); /* 0x161AF468: call 0x161af143 */
    RECOMP_FLAGS_IN();
L_161AF46D:
    PUSH32(esp, 0x3Bu); /* 0x161AF46D: push 0x3b */
    PUSH32(esp, edi); /* 0x161AF46F: push edi */
    RECOMP_CALL(sub_161ADD22); /* 0x161AF470: call 0x161add22 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF475: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AF476: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x161AF477: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x161AF47A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF486; /* 0x161AF47C: je 0x161af486 */
L_161AF47E:
    MEM8(eax) = (uint8_t)(0); /* 0x161AF47E: mov byte ptr [eax], 0 */
    ebx = eax + (-0x1); /* 0x161AF481: lea ebx, [eax - 1] */
    goto L_161AF49A; /* 0x161AF484: jmp 0x161af49a */
L_161AF486:
    eax = edi; /* 0x161AF486: mov eax, edi */
    edx = eax + 0x1; /* 0x161AF488: lea edx, [eax + 1] */
L_161AF48B:
    SET_LO8(ecx, MEM8(eax)); /* 0x161AF48B: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AF48D: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x161AF48E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF48B; /* 0x161AF490: jne 0x161af48b */
L_161AF492:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161AF492: sub eax, edx */
    _flag_k = FK_CMP;
    ebx = eax + edi; /* 0x161AF494: lea ebx, [eax + edi] */
    goto L_161AF49A; /* 0x161AF497: jmp 0x161af49a */
L_161AF499:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AF499: inc edi */
    _flag_k = FK_INC;
L_161AF49A:
    eax = (uint32_t)MEM8(edi); /* 0x161AF49A: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x161AF49D: push eax */
    RECOMP_CALL(sub_161AE96A); /* 0x161AF49E: call 0x161ae96a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF4A3: pop ecx */
    /* test eax, eax */ /* 0x161AF4A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AF499; /* 0x161AF4A6: jne 0x161af499 */
L_161AF4A8:
    goto L_161AF4BC; /* 0x161AF4A8: jmp 0x161af4bc */
L_161AF4AA:
    eax = (uint32_t)MEM8(ebx); /* 0x161AF4AA: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x161AF4AD: push eax */
    RECOMP_CALL(sub_161AE96A); /* 0x161AF4AE: call 0x161ae96a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AF4B3: pop ecx */
    /* test eax, eax */ /* 0x161AF4B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF4C0; /* 0x161AF4B6: je 0x161af4c0 */
L_161AF4B8:
    MEM8(ebx) = (uint8_t)(0); /* 0x161AF4B8: mov byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x161AF4BB: dec ebx */
    _flag_k = FK_DEC;
L_161AF4BC:
    /* cmp ebx, edi */ /* 0x161AF4BC: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_161AF4AA; /* 0x161AF4BE: ja 0x161af4aa */
L_161AF4C0:
    /* cmp MEM8(edi), 0 */ /* 0x161AF4C0: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AF4EE; /* 0x161AF4C3: je 0x161af4ee */
L_161AF4C5:
    PUSH32(esp, edi); /* 0x161AF4C5: push edi */
    ecx = esi; /* 0x161AF4C6: mov ecx, esi */
    RECOMP_CALL(sub_161AF398); /* 0x161AF4C8: call 0x161af398 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x161AF4CD: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x161AF4D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF449; /* 0x161AF4D2: jl 0x161af449 */
L_161AF4D8:
    eax = esi + 0x10; /* 0x161AF4D8: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x161AF4DB: push eax */
    ecx = esi; /* 0x161AF4DC: mov ecx, esi */
    RECOMP_CALL(sub_161AF1BC); /* 0x161AF4DE: call 0x161af1bc */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x161AF4E3: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x161AF4E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AF449; /* 0x161AF4E8: jl 0x161af449 */
L_161AF4EE:
    edi = MEM32(ebp + 0x8); /* 0x161AF4EE: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x161AF4F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AF449; /* 0x161AF4F3: je 0x161af449 */
L_161AF4F9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AF4F9: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_161AF46D; /* 0x161AF4FA: jmp 0x161af46d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF504(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF504u);

L_161AF504:
    { _itail_tgt = (uint32_t)(MEM32(0x1600116C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AF510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF510u);

    goto L_161AF510;
L_161ADD30:
    PUSH32(esp, ecx); /* 0x161ADD30: push ecx */
    ecx = esp + 0x4; /* 0x161ADD31: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x161ADD35: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161ADD37: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x161ADD39: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161ADD3B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x161ADD3D: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x161ADD3F: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ADD44:
    /* cmp ecx, eax */ /* 0x161ADD44: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ADD52; /* 0x161ADD46: jb 0x161add52 */
L_161ADD48:
    eax = ecx; /* 0x161ADD48: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x161ADD4A: pop ecx */
    { uint32_t _tmp = esp; /* 0x161ADD4B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x161ADD4C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x161ADD4E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADD51: ret  */
L_161ADD52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x161ADD52: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x161ADD57: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161ADD44; /* 0x161ADD59: jmp 0x161add44 */
L_161AF510:
    PUSH32(esp, ecx); /* 0x161AF510: push ecx */
    ecx = esp + 0x8; /* 0x161AF511: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x161AF515: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x161AF517: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AF51A: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AF51C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AF51E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161AF520: pop ecx */
    RECOMP_BACKEDGE();
    goto L_161ADD30; /* 0x161AF521: jmp 0x161add30 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AF542(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF542u);

L_161AF542:
    { _itail_tgt = (uint32_t)(MEM32(0x16001170)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AF550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF550u);

L_161AF550:
    /* cmp LO8(ecx), 0x40u */ /* 0x161AF550: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AF56A; /* 0x161AF553: jae 0x161af56a */
L_161AF555:
    /* cmp LO8(ecx), 0x20u */ /* 0x161AF555: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AF560; /* 0x161AF558: jae 0x161af560 */
L_161AF55A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AF55A: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AF55D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x161AF55D: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF55F: ret  */
L_161AF560:
    edx = eax; /* 0x161AF560: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF562: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x161AF564: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AF567: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x161AF567: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF569: ret  */
L_161AF56A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AF56A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AF56C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AF56E: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AF574(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF574u);

L_161AF574:
    { _itail_tgt = (uint32_t)(MEM32(0x16001174)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AF580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF580u);

L_161AF580:
    { _itail_tgt = (uint32_t)(MEM32(0x16001178)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AF58C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AF58Cu);

L_161AF58C:
    { _itail_tgt = (uint32_t)(MEM32(0x1600117C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
