#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10080B7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080B7Eu);

L_10080B7E:
    PUSH32(esp, ebp); /* 0x10080B7E: push ebp */
    ebp = esp; /* 0x10080B7F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10080B81: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10080B84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080B9D; /* 0x10080B86: jne 0x10080b9d */
L_10080B88:
    RECOMP_CALL(sub_1001177D); /* 0x10080B88: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080B8D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080B93: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080B98: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10080B9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080B9C: ret  */
L_10080B9D:
    PUSH32(esp, esi); /* 0x10080B9D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10080B9E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x10080BA0: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080BB7; /* 0x10080BA3: je 0x10080bb7 */
L_10080BA5:
    ecx = MEM32(ebp + 0xC); /* 0x10080BA5: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10080BA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080BB7; /* 0x10080BAA: je 0x10080bb7 */
L_10080BAC:
    edx = MEM32(ecx); /* 0x10080BAC: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x10080BAE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080BB7; /* 0x10080BB0: je 0x10080bb7 */
L_10080BB2:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x10080BB2: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10080BCC; /* 0x10080BB5: jne 0x10080bcc */
L_10080BB7:
    RECOMP_CALL(sub_1001177D); /* 0x10080BB7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080BBC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080BC2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080BC7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080BD7; /* 0x10080BCA: jmp 0x10080bd7 */
L_10080BCC:
    PUSH32(esp, esi); /* 0x10080BCC: push esi */
    PUSH32(esp, ecx); /* 0x10080BCD: push ecx */
    PUSH32(esp, eax); /* 0x10080BCE: push eax */
    RECOMP_CALL(sub_10080BDA); /* 0x10080BCF: call 0x10080bda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080BD4: add esp, 0xc */
    _flag_k = FK_ADD;
L_10080BD7:
    esi = POP32_VAL(esp); /* 0x10080BD7: pop esi */
    ebp = POP32_VAL(esp); /* 0x10080BD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080BD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080BDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080BDAu);

L_10080BDA:
    PUSH32(esp, ebp); /* 0x10080BDA: push ebp */
    ebp = esp; /* 0x10080BDB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10080BDD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10080BE0: push esi */
    PUSH32(esp, edi); /* 0x10080BE1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10080BE2: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x10080BE5: mov esi, edi */
    /* test edi, edi */ /* 0x10080BE7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080C03; /* 0x10080BE9: jne 0x10080c03 */
L_10080BEB:
    RECOMP_CALL(sub_1001177D); /* 0x10080BEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080BF0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080BF6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080BFB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080DB3; /* 0x10080BFE: jmp 0x10080db3 */
L_10080C03:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10080C03: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(ecx) */ /* 0x10080C05: cmp word ptr [edi], cx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080BEB; /* 0x10080C08: je 0x10080beb */
L_10080C0A:
    eax = MEM32(ebp + 0xC); /* 0x10080C0A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10080C0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080BEB; /* 0x10080C0F: je 0x10080beb */
L_10080C11:
    eax = MEM32(eax); /* 0x10080C11: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x10080C13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080BEB; /* 0x10080C15: je 0x10080beb */
L_10080C17:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10080C17: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080BEB; /* 0x10080C1A: je 0x10080beb */
L_10080C1C:
    PUSH32(esp, ebx); /* 0x10080C1C: push ebx */
    PUSH32(esp, 0x5Cu); /* 0x10080C1D: push 0x5c */
    PUSH32(esp, edi); /* 0x10080C1F: push edi */
    RECOMP_CALL(sub_10011E16); /* 0x10080C20: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x10080C25: push 0x2f */
    PUSH32(esp, edi); /* 0x10080C27: push edi */
    ebx = eax; /* 0x10080C28: mov ebx, eax */
    RECOMP_CALL(sub_10011E16); /* 0x10080C2A: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10080C2F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080C32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080C97; /* 0x10080C34: jne 0x10080c97 */
L_10080C36:
    /* test ebx, ebx */ /* 0x10080C36: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080CA1; /* 0x10080C38: jne 0x10080ca1 */
L_10080C3A:
    PUSH32(esp, 0x3Au); /* 0x10080C3A: push 0x3a */
    PUSH32(esp, edi); /* 0x10080C3C: push edi */
    RECOMP_CALL(sub_10011236); /* 0x10080C3D: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10080C42: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10080C44: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080C45: pop ecx */
    /* test ebx, ebx */ /* 0x10080C46: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080CA1; /* 0x10080C48: jne 0x10080ca1 */
L_10080C4A:
    PUSH32(esp, edi); /* 0x10080C4A: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10080C4B: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x10080C50: push 2 */
    ebx = eax + 0x3; /* 0x10080C52: lea ebx, [eax + 3] */
    PUSH32(esp, ebx); /* 0x10080C55: push ebx */
    RECOMP_CALL(sub_10011208); /* 0x10080C56: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10080C5B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080C5D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x10080C60: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080CF8; /* 0x10080C62: je 0x10080cf8 */
L_10080C68:
    PUSH32(esp, 0x10062178u); /* 0x10080C68: push 0x10062178 */
    PUSH32(esp, ebx); /* 0x10080C6D: push ebx */
    PUSH32(esp, esi); /* 0x10080C6E: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10080C6F: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080C74: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080C77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DB9; /* 0x10080C79: jne 0x10080db9 */
L_10080C7F:
    PUSH32(esp, edi); /* 0x10080C7F: push edi */
    PUSH32(esp, ebx); /* 0x10080C80: push ebx */
    PUSH32(esp, esi); /* 0x10080C81: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10080C82: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080C87: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080C8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DB9; /* 0x10080C8C: jne 0x10080db9 */
L_10080C92:
    ebx = esi + 0x4; /* 0x10080C92: lea ebx, [esi + 4] */
    goto L_10080CA1; /* 0x10080C95: jmp 0x10080ca1 */
L_10080C97:
    /* test ebx, ebx */ /* 0x10080C97: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080C9F; /* 0x10080C99: je 0x10080c9f */
L_10080C9B:
    /* cmp eax, ebx */ /* 0x10080C9B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10080CA1; /* 0x10080C9D: jbe 0x10080ca1 */
L_10080C9F:
    ebx = eax; /* 0x10080C9F: mov ebx, eax */
L_10080CA1:
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x10080CA1: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x10080CA5: push 0x2e */
    PUSH32(esp, ebx); /* 0x10080CA7: push ebx */
    RECOMP_CALL(sub_10011E16); /* 0x10080CA8: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080CAD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080CAE: pop ecx */
    /* test eax, eax */ /* 0x10080CAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080CDB; /* 0x10080CB1: je 0x10080cdb */
L_10080CB3:
    PUSH32(esp, 0); /* 0x10080CB3: push 0 */
    PUSH32(esp, esi); /* 0x10080CB5: push esi */
    RECOMP_CALL(sub_1001EE42); /* 0x10080CB6: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080CBB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080CBC: pop ecx */
    /* test eax, eax */ /* 0x10080CBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DA2; /* 0x10080CBF: jne 0x10080da2 */
L_10080CC5:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080CC5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080CC8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10080CCB: push esi */
    RECOMP_CALL(sub_10080DC6); /* 0x10080CCC: call 0x10080dc6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080CD1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10080CD4: mov ebx, eax */
    goto L_10080DA5; /* 0x10080CD6: jmp 0x10080da5 */
L_10080CDB:
    PUSH32(esp, esi); /* 0x10080CDB: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10080CDC: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x10080CE1: add eax, 5 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x10080CE4: push 2 */
    PUSH32(esp, eax); /* 0x10080CE6: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x10080CE7: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_10011208); /* 0x10080CEA: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10080CEF: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080CF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x10080CF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080D00; /* 0x10080CF6: jne 0x10080d00 */
L_10080CF8:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080CF8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080DB2; /* 0x10080CFB: jmp 0x10080db2 */
L_10080D00:
    PUSH32(esp, esi); /* 0x10080D00: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080D01: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10080D04: push ebx */
    RECOMP_CALL(sub_10011693); /* 0x10080D05: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080D0A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080D0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DB9; /* 0x10080D0F: jne 0x10080db9 */
L_10080D15:
    PUSH32(esp, esi); /* 0x10080D15: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10080D16: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080D1B: pop ecx */
    eax = ebx + eax * 2; /* 0x10080D1C: lea eax, [ebx + eax*2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10080D1F: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10080D22: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x10080D27: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x10080D2A: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x10080D2D: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10080D2F: mov dword ptr [ebp - 0x10], eax */
    eax = edx; /* 0x10080D32: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10080D34: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10080D36: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10080D38: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = 0x100E147Cu; /* 0x10080D3A: mov eax, 0x100e147c */
    MEM32(ebp + 0x8) = ecx; /* 0x10080D3F: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10080D42: mov dword ptr [ebp - 4], eax */
L_10080D45:
    PUSH32(esp, MEM32(eax)); /* 0x10080D45: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x10080D47: push ecx */
    PUSH32(esp, edx); /* 0x10080D48: push edx */
    RECOMP_CALL(sub_10011693); /* 0x10080D49: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080D4E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080D51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DB9; /* 0x10080D53: jne 0x10080db9 */
L_10080D55:
    PUSH32(esp, eax); /* 0x10080D55: push eax */
    PUSH32(esp, ebx); /* 0x10080D56: push ebx */
    RECOMP_CALL(sub_1001EE42); /* 0x10080D57: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080D5C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080D5D: pop ecx */
    /* test eax, eax */ /* 0x10080D5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080D7A; /* 0x10080D60: je 0x10080d7a */
L_10080D62:
    eax = MEM32(ebp + (-0x4)); /* 0x10080D62: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x10080D65: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x10080D68: sub eax, 4 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x8)); /* 0x10080D6B: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10080D6E: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0x100E1470u */ /* 0x10080D71: cmp eax, 0x100e1470 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1470u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10080D96; /* 0x10080D76: jl 0x10080d96 */
L_10080D78:
    RECOMP_BACKEDGE();
    goto L_10080D45; /* 0x10080D78: jmp 0x10080d45 */
L_10080D7A:
    RECOMP_CALL(sub_1001177D); /* 0x10080D7A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080D7F: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x10)); /* 0x10080D82: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080D85: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x10080D88: mov dword ptr [eax], ecx */
    PUSH32(esp, ebx); /* 0x10080D8A: push ebx */
    RECOMP_CALL(sub_10080DC6); /* 0x10080D8B: call 0x10080dc6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080D90: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x10080D93: mov dword ptr [ebp - 0xc], eax */
L_10080D96:
    PUSH32(esp, ebx); /* 0x10080D96: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080D97: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x10080D9C: mov ebx, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x10080D9F: pop ecx */
    goto L_10080DA5; /* 0x10080DA0: jmp 0x10080da5 */
L_10080DA2:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10080DA2: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10080DA5:
    /* cmp esi, edi */ /* 0x10080DA5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080DB0; /* 0x10080DA7: je 0x10080db0 */
L_10080DA9:
    PUSH32(esp, esi); /* 0x10080DA9: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080DAA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080DAF: pop ecx */
L_10080DB0:
    eax = ebx; /* 0x10080DB0: mov eax, ebx */
L_10080DB2:
    ebx = POP32_VAL(esp); /* 0x10080DB2: pop ebx */
L_10080DB3:
    edi = POP32_VAL(esp); /* 0x10080DB3: pop edi */
    esi = POP32_VAL(esp); /* 0x10080DB4: pop esi */
    esp = ebp; /* 0x10080DB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10080DB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080DB8: ret  */
L_10080DB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10080DB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10080DBB: push eax */
    PUSH32(esp, eax); /* 0x10080DBC: push eax */
    PUSH32(esp, eax); /* 0x10080DBD: push eax */
    PUSH32(esp, eax); /* 0x10080DBE: push eax */
    PUSH32(esp, eax); /* 0x10080DBF: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10080DC0: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10080DC5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10080DC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080DC6u);

L_10080DC6:
    PUSH32(esp, ebp); /* 0x10080DC6: push ebp */
    ebp = esp; /* 0x10080DC7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10080DC9: push ecx */
    PUSH32(esp, esi); /* 0x10080DCA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10080DCB: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10080DCE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080DE7; /* 0x10080DD0: jne 0x10080de7 */
L_10080DD2:
    RECOMP_CALL(sub_1001177D); /* 0x10080DD2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080DD7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080DDD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10080DE2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10080DE2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10080E2E; /* 0x10080DE5: jmp 0x10080e2e */
L_10080DE7:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10080DE7: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080DD2; /* 0x10080DEB: je 0x10080dd2 */
L_10080DED:
    PUSH32(esp, esi); /* 0x10080DED: push esi */
    eax = ebp + (-0x4); /* 0x10080DEE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10080DF1: push eax */
    eax = ebp + 0x8; /* 0x10080DF2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10080DF5: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080DF6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080DF9: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10031E4B); /* 0x10080DFC: call 0x10031e4b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10080E01: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10080E04: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080DE2; /* 0x10080E07: je 0x10080de2 */
L_10080E09:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10080E09: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080E0C: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10080E0F: push esi */
    PUSH32(esp, 2); /* 0x10080E10: push 2 */
    RECOMP_CALL(sub_100322AF); /* 0x10080E12: call 0x100322af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080E17: push dword ptr [ebp + 8] */
    esi = eax; /* 0x10080E1A: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080E1C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10080E21: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10080E24: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10080E29: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10080E2C: mov eax, esi */
L_10080E2E:
    esi = POP32_VAL(esp); /* 0x10080E2E: pop esi */
    esp = ebp; /* 0x10080E2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10080E31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080E32: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080E33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080E33u);

L_10080E33:
    PUSH32(esp, ebp); /* 0x10080E33: push ebp */
    ebp = esp; /* 0x10080E34: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10080E36: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080E38: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10080E3B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10080E48); /* 0x10080E3E: call 0x10080e48 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080E43: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10080E46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10080E47: ret  */
    RECOMP_REGS_OUT();
}

void sub_10080E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10080E48u);

L_10080E48:
    PUSH32(esp, ebp); /* 0x10080E48: push ebp */
    ebp = esp; /* 0x10080E49: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10080E4B: push ecx */
    PUSH32(esp, ecx); /* 0x10080E4C: push ecx */
    PUSH32(esp, esi); /* 0x10080E4D: push esi */
    PUSH32(esp, edi); /* 0x10080E4E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10080E4F: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10080E52: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x10080E54: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x10080E57: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080E70; /* 0x10080E59: jne 0x10080e70 */
L_10080E5B:
    RECOMP_CALL(sub_1001177D); /* 0x10080E5B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080E60: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080E66: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008104A; /* 0x10080E6B: jmp 0x1008104a */
L_10080E70:
    /* cmp MEM16(edi), LO16(esi) */ /* 0x10080E70: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080E5B; /* 0x10080E73: je 0x10080e5b */
L_10080E75:
    PUSH32(esp, ebx); /* 0x10080E75: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10080E76: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x10080E79: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080E92; /* 0x10080E7B: jne 0x10080e92 */
L_10080E7D:
    RECOMP_CALL(sub_1001177D); /* 0x10080E7D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10080E82: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10080E88: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10081049; /* 0x10080E8D: jmp 0x10081049 */
L_10080E92:
    eax = MEM32(ebx); /* 0x10080E92: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x10080E94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080E7D; /* 0x10080E96: je 0x10080e7d */
L_10080E98:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x10080E98: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080E7D; /* 0x10080E9B: je 0x10080e7d */
L_10080E9D:
    RECOMP_CALL(sub_1001177D); /* 0x10080E9D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080EA2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x10080EA5: push ebx */
    PUSH32(esp, edi); /* 0x10080EA6: push edi */
    MEM32(eax) = esi; /* 0x10080EA7: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_10080BDA); /* 0x10080EA9: call 0x10080bda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080EAE: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1001177D); /* 0x10080EB1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10080EB6: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008103A; /* 0x10080EB9: jne 0x1008103a */
L_10080EBF:
    PUSH32(esp, 0x5Cu); /* 0x10080EBF: push 0x5c */
    eax = POP32_VAL(esp); /* 0x10080EC1: pop eax */
    PUSH32(esp, eax); /* 0x10080EC2: push eax */
    PUSH32(esp, edi); /* 0x10080EC3: push edi */
    RECOMP_CALL(sub_10011236); /* 0x10080EC4: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080EC9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080ECA: pop ecx */
    /* test eax, eax */ /* 0x10080ECB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008103A; /* 0x10080ECD: jne 0x1008103a */
L_10080ED3:
    PUSH32(esp, 0x2Fu); /* 0x10080ED3: push 0x2f */
    eax = POP32_VAL(esp); /* 0x10080ED5: pop eax */
    PUSH32(esp, eax); /* 0x10080ED6: push eax */
    PUSH32(esp, edi); /* 0x10080ED7: push edi */
    RECOMP_CALL(sub_10011236); /* 0x10080ED8: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080EDD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080EDE: pop ecx */
    /* test eax, eax */ /* 0x10080EDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008103A; /* 0x10080EE1: jne 0x1008103a */
L_10080EE7:
    /* cmp MEM16(edi), LO16(esi) */ /* 0x10080EE7: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080EF7; /* 0x10080EEA: je 0x10080ef7 */
L_10080EEC:
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x10080EEC: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008103A; /* 0x10080EF1: je 0x1008103a */
L_10080EF7:
    PUSH32(esp, 0x10062180u); /* 0x10080EF7: push 0x10062180 */
    eax = ebp + (-0x4); /* 0x10080EFC: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10080EFF: push esi */
    PUSH32(esp, eax); /* 0x10080F00: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x10080F01: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080F06: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080F09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080F1B; /* 0x10080F0B: je 0x10080f1b */
L_10080F0D:
    /* cmp eax, 0x16u */ /* 0x10080F0D: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081053; /* 0x10080F10: je 0x10081053 */
L_10080F16:
    goto L_1008103A; /* 0x10080F16: jmp 0x1008103a */
L_10080F1B:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x10080F1B: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081049; /* 0x10080F1E: je 0x10081049 */
L_10080F24:
    PUSH32(esp, 2); /* 0x10080F24: push 2 */
    PUSH32(esp, 0x104u); /* 0x10080F26: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x10080F2B: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10080F30: pop ecx */
    ebx = eax; /* 0x10080F31: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10080F33: pop ecx */
    ecx = ebx; /* 0x10080F34: mov ecx, ebx */
    /* test ebx, ebx */ /* 0x10080F36: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008103A; /* 0x10080F38: je 0x1008103a */
L_10080F3E:
    esi = MEM32(ebp + (-0x4)); /* 0x10080F3E: mov esi, dword ptr [ebp - 4] */
L_10080F41:
    edx = (uint32_t)MEM16(esi); /* 0x10080F41: movzx edx, word ptr [esi] */
    MEM32(ebp + 0x8) = esi; /* 0x10080F44: mov dword ptr [ebp + 8], esi */
    /* test LO16(edx), LO16(edx) */ /* 0x10080F47: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10080F70; /* 0x10080F4A: je 0x10080f70 */
L_10080F4C:
    /* cmp LO16(edx), 0x3Bu */ /* 0x10080F4C: cmp dx, 0x3b */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x3Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080F6D; /* 0x10080F50: je 0x10080f6d */
L_10080F52:
    eax = ebx + 0x204; /* 0x10080F52: lea eax, [ebx + 0x204] */
    /* cmp ecx, eax */ /* 0x10080F58: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10080F6D; /* 0x10080F5A: jae 0x10080f6d */
L_10080F5C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10080F5C: add esi, 2 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x10080F5F: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10080F62: add ecx, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(esi); /* 0x10080F65: movzx edx, word ptr [esi] */
    /* test LO16(edx), LO16(edx) */ /* 0x10080F68: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10080F4C; /* 0x10080F6B: jne 0x10080f4c */
L_10080F6D:
    MEM32(ebp + 0x8) = esi; /* 0x10080F6D: mov dword ptr [ebp + 8], esi */
L_10080F70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10080F70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10080F72: mov word ptr [ecx], ax */
    /* cmp ecx, ebx */ /* 0x10080F75: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10080F7C; /* 0x10080F77: jbe 0x10080f7c */
L_10080F79:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x10080F79: add ecx, -2 */
    _flag_k = FK_ADD;
L_10080F7C:
    eax = (uint32_t)MEM16(ecx); /* 0x10080F7C: movzx eax, word ptr [ecx] */
    PUSH32(esp, 0x5Cu); /* 0x10080F7F: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x10080F81: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10080F82: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080FAA; /* 0x10080F85: je 0x10080faa */
L_10080F87:
    PUSH32(esp, 0x2Fu); /* 0x10080F87: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x10080F89: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10080F8A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10080FAA; /* 0x10080F8D: je 0x10080faa */
L_10080F8F:
    PUSH32(esp, 0x1006218Cu); /* 0x10080F8F: push 0x1006218c */
    PUSH32(esp, 0x104u); /* 0x10080F94: push 0x104 */
    PUSH32(esp, ebx); /* 0x10080F99: push ebx */
    RECOMP_CALL(sub_1001212A); /* 0x10080F9A: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080F9F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080FA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008102A; /* 0x10080FA4: jne 0x1008102a */
L_10080FAA:
    PUSH32(esp, ebx); /* 0x10080FAA: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x10080FAB: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10080FB0: push edi */
    esi = eax; /* 0x10080FB1: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10080FB3: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10080FB8: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x10080FBA: mov eax, 0x104 */
    ecx = POP32_VAL(esp); /* 0x10080FBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10080FC0: pop ecx */
    /* cmp esi, eax */ /* 0x10080FC1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10081033; /* 0x10080FC3: jae 0x10081033 */
L_10080FC5:
    PUSH32(esp, edi); /* 0x10080FC5: push edi */
    PUSH32(esp, eax); /* 0x10080FC6: push eax */
    PUSH32(esp, ebx); /* 0x10080FC7: push ebx */
    RECOMP_CALL(sub_1001212A); /* 0x10080FC8: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080FCD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10080FD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008102A; /* 0x10080FD2: jne 0x1008102a */
L_10080FD4:
    RECOMP_CALL(sub_1001177D); /* 0x10080FD4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10080FD9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10080FDC: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10080FDF: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10080FE2: push ebx */
    RECOMP_CALL(sub_10080BDA); /* 0x10080FE3: call 0x10080bda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10080FE8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1001177D); /* 0x10080FEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x10080FF0: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081016; /* 0x10080FF3: je 0x10081016 */
L_10080FF5:
    eax = (uint32_t)MEM16(ebx); /* 0x10080FF5: movzx eax, word ptr [ebx] */
    PUSH32(esp, 0x5Cu); /* 0x10080FF8: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x10080FFA: pop ecx */
    PUSH32(esp, 0x2Fu); /* 0x10080FFB: push 0x2f */
    edx = POP32_VAL(esp); /* 0x10080FFD: pop edx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10080FFE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081008; /* 0x10081001: je 0x10081008 */
L_10081003:
    /* cmp LO16(eax), LO16(edx) */ /* 0x10081003: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081033; /* 0x10081006: jne 0x10081033 */
L_10081008:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x10081008: movzx eax, word ptr [ebx + 2] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008100C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081016; /* 0x1008100F: je 0x10081016 */
L_10081011:
    /* cmp LO16(eax), LO16(edx) */ /* 0x10081011: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081033; /* 0x10081014: jne 0x10081033 */
L_10081016:
    esi = MEM32(ebp + 0x8); /* 0x10081016: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081019: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1008101B: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081033; /* 0x1008101E: je 0x10081033 */
L_10081020:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10081020: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x10081023: mov ecx, ebx */
    RECOMP_BACKEDGE();
    goto L_10080F41; /* 0x10081025: jmp 0x10080f41 */
L_1008102A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008102A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1008102C: push eax */
    PUSH32(esp, eax); /* 0x1008102D: push eax */
    PUSH32(esp, eax); /* 0x1008102E: push eax */
    PUSH32(esp, eax); /* 0x1008102F: push eax */
    PUSH32(esp, eax); /* 0x10081030: push eax */
    goto L_10081058; /* 0x10081031: jmp 0x10081058 */
L_10081033:
    PUSH32(esp, ebx); /* 0x10081033: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10081034: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081039: pop ecx */
L_1008103A:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1008103A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081049; /* 0x1008103E: je 0x10081049 */
L_10081040:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10081040: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10081043: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081048: pop ecx */
L_10081049:
    ebx = POP32_VAL(esp); /* 0x10081049: pop ebx */
L_1008104A:
    edi = POP32_VAL(esp); /* 0x1008104A: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008104B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1008104E: pop esi */
    esp = ebp; /* 0x1008104F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10081051: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081052: ret  */
L_10081053:
    PUSH32(esp, esi); /* 0x10081053: push esi */
    PUSH32(esp, esi); /* 0x10081054: push esi */
    PUSH32(esp, esi); /* 0x10081055: push esi */
    PUSH32(esp, esi); /* 0x10081056: push esi */
    PUSH32(esp, esi); /* 0x10081057: push esi */
L_10081058:
    RECOMP_CALL(sub_100A469B); /* 0x10081058: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1008105Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008105E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008105Eu);

L_1008105E:
    PUSH32(esp, ebp); /* 0x1008105E: push ebp */
    ebp = esp; /* 0x1008105F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10081061: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10081064: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008107D; /* 0x10081066: jne 0x1008107d */
L_10081068:
    RECOMP_CALL(sub_1001177D); /* 0x10081068: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008106D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081073: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10081078: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008107B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008107C: ret  */
L_1008107D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008107D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x1008107F: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081068; /* 0x10081082: je 0x10081068 */
L_10081084:
    ecx = MEM32(ebp + 0x10); /* 0x10081084: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x10081087: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081068; /* 0x10081089: je 0x10081068 */
L_1008108B:
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x1008108B: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081068; /* 0x1008108E: je 0x10081068 */
L_10081090:
    PUSH32(esp, edx); /* 0x10081090: push edx */
    ecx = ebp + 0x10; /* 0x10081091: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x10081094: push ecx */
    PUSH32(esp, eax); /* 0x10081095: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081096: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032085); /* 0x10081099: call 0x10032085 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008109E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100810A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100810A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100810A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100810A3u);

L_100810A3:
    PUSH32(esp, ebp); /* 0x100810A3: push ebp */
    ebp = esp; /* 0x100810A4: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100810A6: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100810A9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100810C2; /* 0x100810AB: jne 0x100810c2 */
L_100810AD:
    RECOMP_CALL(sub_1001177D); /* 0x100810AD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100810B2: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100810B8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100810BD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100810C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100810C1: ret  */
L_100810C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100810C2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(ecx) */ /* 0x100810C4: cmp word ptr [edx], cx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100810AD; /* 0x100810C7: je 0x100810ad */
L_100810C9:
    eax = MEM32(ebp + 0x10); /* 0x100810C9: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x100810CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100810AD; /* 0x100810CE: je 0x100810ad */
L_100810D0:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x100810D0: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100810AD; /* 0x100810D3: je 0x100810ad */
L_100810D5:
    ecx = ebp + 0x10; /* 0x100810D5: lea ecx, [ebp + 0x10] */
L_100810D8:
    eax = MEM32(ecx); /* 0x100810D8: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x100810DA: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x100810DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100810D8; /* 0x100810DF: jne 0x100810d8 */
L_100810E1:
    PUSH32(esp, MEM32(ecx)); /* 0x100810E1: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x100810E3: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100810E6: push eax */
    PUSH32(esp, edx); /* 0x100810E7: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100810E8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032085); /* 0x100810EB: call 0x10032085 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100810F0: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100810F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100810F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100810F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100810F5u);

L_100810F5:
    PUSH32(esp, ebp); /* 0x100810F5: push ebp */
    ebp = esp; /* 0x100810F6: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100810F8: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x100810FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081114; /* 0x100810FD: jne 0x10081114 */
L_100810FF:
    RECOMP_CALL(sub_1001177D); /* 0x100810FF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081104: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008110A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008110F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10081112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081113: ret  */
L_10081114:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10081114: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edx) */ /* 0x10081116: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100810FF; /* 0x10081119: je 0x100810ff */
L_1008111B:
    ecx = MEM32(ebp + 0x10); /* 0x1008111B: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1008111E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100810FF; /* 0x10081120: je 0x100810ff */
L_10081122:
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x10081122: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100810FF; /* 0x10081125: je 0x100810ff */
L_10081127:
    ecx = ebp + 0x10; /* 0x10081127: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1008112A: push ecx */
    PUSH32(esp, eax); /* 0x1008112B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008112C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100321D6); /* 0x1008112F: call 0x100321d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081134: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081138: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081139(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081139u);

L_10081139:
    PUSH32(esp, ebp); /* 0x10081139: push ebp */
    ebp = esp; /* 0x1008113A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1008113C: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008113F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081158; /* 0x10081141: jne 0x10081158 */
L_10081143:
    RECOMP_CALL(sub_1001177D); /* 0x10081143: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081148: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008114E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10081153: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10081156: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081157: ret  */
L_10081158:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10081158: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(ecx) */ /* 0x1008115A: cmp word ptr [edx], cx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081143; /* 0x1008115D: je 0x10081143 */
L_1008115F:
    eax = MEM32(ebp + 0x10); /* 0x1008115F: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10081162: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081143; /* 0x10081164: je 0x10081143 */
L_10081166:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10081166: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081143; /* 0x10081169: je 0x10081143 */
L_1008116B:
    ecx = ebp + 0x10; /* 0x1008116B: lea ecx, [ebp + 0x10] */
L_1008116E:
    eax = MEM32(ecx); /* 0x1008116E: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x10081170: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x10081173: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008116E; /* 0x10081175: jne 0x1008116e */
L_10081177:
    PUSH32(esp, MEM32(ecx)); /* 0x10081177: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x10081179: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1008117C: push eax */
    PUSH32(esp, edx); /* 0x1008117D: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008117E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032135); /* 0x10081181: call 0x10032135 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081186: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081189: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008118A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008118B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008118Bu);

L_1008118B:
    PUSH32(esp, ebp); /* 0x1008118B: push ebp */
    ebp = esp; /* 0x1008118C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1008118E: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10081191: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100811AA; /* 0x10081193: jne 0x100811aa */
L_10081195:
    RECOMP_CALL(sub_1001177D); /* 0x10081195: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008119A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100811A0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100811A5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100811A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100811A9: ret  */
L_100811AA:
    PUSH32(esp, esi); /* 0x100811AA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100811AB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x100811AD: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100811C4; /* 0x100811B0: je 0x100811c4 */
L_100811B2:
    ecx = MEM32(ebp + 0x10); /* 0x100811B2: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x100811B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100811C4; /* 0x100811B7: je 0x100811c4 */
L_100811B9:
    edx = MEM32(ecx); /* 0x100811B9: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x100811BB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100811C4; /* 0x100811BD: je 0x100811c4 */
L_100811BF:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x100811BF: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100811D9; /* 0x100811C2: jne 0x100811d9 */
L_100811C4:
    RECOMP_CALL(sub_1001177D); /* 0x100811C4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100811C9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100811CF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100811D4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100811E7; /* 0x100811D7: jmp 0x100811e7 */
L_100811D9:
    PUSH32(esp, esi); /* 0x100811D9: push esi */
    PUSH32(esp, ecx); /* 0x100811DA: push ecx */
    PUSH32(esp, eax); /* 0x100811DB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100811DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10032085); /* 0x100811DF: call 0x10032085 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100811E4: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100811E7:
    esi = POP32_VAL(esp); /* 0x100811E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100811E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100811E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100811EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100811EAu);

L_100811EA:
    PUSH32(esp, ebp); /* 0x100811EA: push ebp */
    ebp = esp; /* 0x100811EB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100811ED: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100811F0: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100811F5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100811F7: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100811FA: push ebx */
    PUSH32(esp, esi); /* 0x100811FB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100811FC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x100811FE: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x10062190u); /* 0x10081201: push 0x10062190 */
    PUSH32(esp, ebx); /* 0x10081206: push ebx */
    PUSH32(esp, eax); /* 0x10081207: push eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x10081208: mov dword ptr [ebp - 0x18], ebx */
    esi = ebx; /* 0x1008120B: mov esi, ebx */
    RECOMP_CALL(sub_1002E415); /* 0x1008120D: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081212: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081215: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081222; /* 0x10081217: je 0x10081222 */
L_10081219:
    /* cmp eax, 0x16u */ /* 0x10081219: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100812D4; /* 0x1008121C: je 0x100812d4 */
L_10081222:
    ecx = MEM32(ebp + 0x8); /* 0x10081222: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x10081225: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10081228: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x1008122B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081247; /* 0x1008122D: jne 0x10081247 */
L_1008122F:
    /* test eax, eax */ /* 0x1008122F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100812BB; /* 0x10081231: je 0x100812bb */
L_10081237:
    PUSH32(esp, ebx); /* 0x10081237: push ebx */
    PUSH32(esp, eax); /* 0x10081238: push eax */
    RECOMP_CALL(sub_1001EE42); /* 0x10081239: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008123E: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10081240: pop ecx */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10081241: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x10081243: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081244: inc esi */
    _flag_k = FK_INC;
    goto L_100812B8; /* 0x10081245: jmp 0x100812b8 */
L_10081247:
    MEM32(ebp + (-0x10)) = 0x100812E0u; /* 0x10081247: mov dword ptr [ebp - 0x10], 0x100812e0 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1008124E: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10081251: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x10081254: push edi */
    /* test eax, eax */ /* 0x10081255: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008129E; /* 0x10081257: je 0x1008129e */
L_10081259:
    RECOMP_CALL(sub_1001177D); /* 0x10081259: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1008125E: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_1001177D); /* 0x10081260: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10081265: push ebx */
    MEM32(eax) = ebx; /* 0x10081266: mov dword ptr [eax], ebx */
    eax = ebp + (-0x14); /* 0x10081268: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008126B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008126C: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1008126F: push ebx */
    RECOMP_CALL(sub_10032085); /* 0x10081270: call 0x10032085 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081275: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10081278: mov esi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x1008127A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1008127F: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081288; /* 0x10081282: je 0x10081288 */
L_10081284:
    MEM32(eax) = edi; /* 0x10081284: mov dword ptr [eax], edi */
    goto L_100812B7; /* 0x10081286: jmp 0x100812b7 */
L_10081288:
    /* cmp MEM32(eax), 2 */ /* 0x10081288: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081297; /* 0x1008128B: je 0x10081297 */
L_1008128D:
    RECOMP_CALL(sub_1001177D); /* 0x1008128D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x10081292: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100812B7; /* 0x10081295: jne 0x100812b7 */
L_10081297:
    RECOMP_CALL(sub_1001177D); /* 0x10081297: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1008129C: mov dword ptr [eax], edi */
L_1008129E:
    PUSH32(esp, ebx); /* 0x1008129E: push ebx */
    eax = ebp + (-0x14); /* 0x1008129F: lea eax, [ebp - 0x14] */
    ecx = 0x100621A0u; /* 0x100812A2: mov ecx, 0x100621a0 */
    PUSH32(esp, eax); /* 0x100812A7: push eax */
    PUSH32(esp, ecx); /* 0x100812A8: push ecx */
    PUSH32(esp, ebx); /* 0x100812A9: push ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x100812AA: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10032135); /* 0x100812AD: call 0x10032135 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100812B2: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100812B5: mov esi, eax */
L_100812B7:
    edi = POP32_VAL(esp); /* 0x100812B7: pop edi */
L_100812B8:
    eax = MEM32(ebp + (-0x18)); /* 0x100812B8: mov eax, dword ptr [ebp - 0x18] */
L_100812BB:
    PUSH32(esp, eax); /* 0x100812BB: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100812BC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100812C1: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x100812C2: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x100812C5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100812C7: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100812C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100812CA: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100812CB: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100812D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100812D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100812D3: ret  */
L_100812D4:
    PUSH32(esp, ebx); /* 0x100812D4: push ebx */
    PUSH32(esp, ebx); /* 0x100812D5: push ebx */
    PUSH32(esp, ebx); /* 0x100812D6: push ebx */
    PUSH32(esp, ebx); /* 0x100812D7: push ebx */
    PUSH32(esp, ebx); /* 0x100812D8: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100812D9: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100812DEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100812E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100812E0u);

L_100812E0:
    void_lift_trap(0x100812E0u, "das ");
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100812E1: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100812E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x100812E6: push ebp */
    ebp = esp; /* 0x100812E7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100812E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100812EA: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(esi); /* 0x100812ED: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x100812F0: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x100812F1: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100812F6: pop ecx */
    /* test eax, eax */ /* 0x100812F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081306; /* 0x100812F9: je 0x10081306 */
L_100812FB:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x100812FB: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081306; /* 0x100812FF: je 0x10081306 */
L_10081301:
    PUSH32(esp, 2); /* 0x10081301: push 2 */
    eax = POP32_VAL(esp); /* 0x10081303: pop eax */
    goto L_10081309; /* 0x10081304: jmp 0x10081309 */
L_10081306:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081306: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10081308: inc eax */
    _flag_k = FK_INC;
L_10081309:
    esi = POP32_VAL(esp); /* 0x10081309: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008130A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008130B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100812E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100812E6u);

L_100812E6:
    PUSH32(esp, ebp); /* 0x100812E6: push ebp */
    ebp = esp; /* 0x100812E7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100812E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100812EA: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(esi); /* 0x100812ED: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x100812F0: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x100812F1: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100812F6: pop ecx */
    /* test eax, eax */ /* 0x100812F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081306; /* 0x100812F9: je 0x10081306 */
L_100812FB:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x100812FB: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081306; /* 0x100812FF: je 0x10081306 */
L_10081301:
    PUSH32(esp, 2); /* 0x10081301: push 2 */
    eax = POP32_VAL(esp); /* 0x10081303: pop eax */
    goto L_10081309; /* 0x10081304: jmp 0x10081309 */
L_10081306:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081306: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10081308: inc eax */
    _flag_k = FK_INC;
L_10081309:
    esi = POP32_VAL(esp); /* 0x10081309: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008130A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008130B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008130C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008130Cu);

L_1008130C:
    PUSH32(esp, ebp); /* 0x1008130C: push ebp */
    ebp = esp; /* 0x1008130D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1008130F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10081310: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081313: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi); /* 0x10081316: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x10081319: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008131A: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008131F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081320: pop ecx */
    /* test eax, eax */ /* 0x10081321: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081330; /* 0x10081323: je 0x10081330 */
L_10081325:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x10081325: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081330; /* 0x10081329: je 0x10081330 */
L_1008132B:
    PUSH32(esp, 2); /* 0x1008132B: push 2 */
    eax = POP32_VAL(esp); /* 0x1008132D: pop eax */
    goto L_10081333; /* 0x1008132E: jmp 0x10081333 */
L_10081330:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081330: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10081332: inc eax */
    _flag_k = FK_INC;
L_10081333:
    esi = POP32_VAL(esp); /* 0x10081333: pop esi */
    ebp = POP32_VAL(esp); /* 0x10081334: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081335: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081336(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081336u);

L_10081336:
    PUSH32(esp, ebp); /* 0x10081336: push ebp */
    ebp = esp; /* 0x10081337: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10081339: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008133A: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008133D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081355; /* 0x1008133F: jne 0x10081355 */
L_10081341:
    RECOMP_CALL(sub_1001177D); /* 0x10081341: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081346: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008134C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081351: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008136C; /* 0x10081353: jmp 0x1008136c */
L_10081355:
    eax = (uint32_t)MEM8(esi); /* 0x10081355: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x10081358: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x10081359: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008135E: inc esi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1008135F: pop ecx */
    /* test eax, eax */ /* 0x10081360: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008136A; /* 0x10081362: je 0x1008136a */
L_10081364:
    /* cmp MEM8(esi), 0 */ /* 0x10081364: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008136A; /* 0x10081367: je 0x1008136a */
L_10081369:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081369: inc esi */
    _flag_k = FK_INC;
L_1008136A:
    eax = esi; /* 0x1008136A: mov eax, esi */
L_1008136C:
    esi = POP32_VAL(esp); /* 0x1008136C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008136D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008136E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008136F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008136Fu);

L_1008136F:
    PUSH32(esp, ebp); /* 0x1008136F: push ebp */
    ebp = esp; /* 0x10081370: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10081372: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10081373: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081376: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi); /* 0x10081379: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008137C: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008137D: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081382: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081383: inc esi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x10081384: pop ecx */
    /* test eax, eax */ /* 0x10081385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008138F; /* 0x10081387: je 0x1008138f */
L_10081389:
    /* cmp MEM8(esi), 0 */ /* 0x10081389: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008138F; /* 0x1008138C: je 0x1008138f */
L_1008138E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008138E: inc esi */
    _flag_k = FK_INC;
L_1008138F:
    eax = esi; /* 0x1008138F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10081391: pop esi */
    ebp = POP32_VAL(esp); /* 0x10081392: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081393: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081394u);

L_10081394:
    PUSH32(esp, ebp); /* 0x10081394: push ebp */
    ebp = esp; /* 0x10081395: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10081397: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081399: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008139C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100813A9); /* 0x1008139F: call 0x100813a9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100813A4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100813A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100813A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100813A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100813A9u);

L_100813A9:
    PUSH32(esp, ebp); /* 0x100813A9: push ebp */
    ebp = esp; /* 0x100813AA: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100813AC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100813B6; /* 0x100813B0: jne 0x100813b6 */
L_100813B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100813B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100813B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100813B5: ret  */
L_100813B6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100813B6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100813B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100813BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D66F); /* 0x100813BF: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100813C4: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x100813C7: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100813CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100813CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100813CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100813CCu);

L_100813CC:
    PUSH32(esp, ebp); /* 0x100813CC: push ebp */
    ebp = esp; /* 0x100813CD: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100813CF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100813D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100813DD); /* 0x100813D4: call 0x100813dd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100813D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100813DA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100813DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100813DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100813DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100813DDu);

L_100813DD:
    PUSH32(esp, ebp); /* 0x100813DD: push ebp */
    ebp = esp; /* 0x100813DE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100813E0: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100813E1: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x100813E4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100813E7: push esi */
    RECOMP_CALL(sub_1008B2AE); /* 0x100813E8: call 0x1008b2ae */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100813ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100813EE: pop ecx */
    /* test eax, eax */ /* 0x100813EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081411; /* 0x100813F1: je 0x10081411 */
L_100813F3:
    /* cmp esi, 0x8393u */ /* 0x100813F3: cmp esi, 0x8393 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8393u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10081411; /* 0x100813F9: ja 0x10081411 */
L_100813FB:
    /* cmp esi, 0x837Fu */ /* 0x100813FB: cmp esi, 0x837f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008140B; /* 0x10081401: jae 0x1008140b */
L_10081403:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xA1u; /* 0x10081403: sub esi, 0xa1 */
    _flag_k = FK_CMP;
    goto L_10081411; /* 0x10081409: jmp 0x10081411 */
L_1008140B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xA2u; /* 0x1008140B: sub esi, 0xa2 */
    _flag_k = FK_CMP;
L_10081411:
    eax = esi; /* 0x10081411: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10081413: pop esi */
    ebp = POP32_VAL(esp); /* 0x10081414: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081415: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081416(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081416u);

L_10081416:
    PUSH32(esp, ebp); /* 0x10081416: push ebp */
    ebp = esp; /* 0x10081417: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10081419: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008141B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10081427); /* 0x1008141E: call 0x10081427 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081423: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081424: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10081425: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081426: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081427u);

L_10081427:
    PUSH32(esp, ebp); /* 0x10081427: push ebp */
    ebp = esp; /* 0x10081428: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1008142A: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008142B: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1008142E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10081431: push esi */
    RECOMP_CALL(sub_1008B25B); /* 0x10081432: call 0x1008b25b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081437: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081438: pop ecx */
    /* test eax, eax */ /* 0x10081439: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008144C; /* 0x1008143B: je 0x1008144c */
L_1008143D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xA1u; /* 0x1008143D: add esi, 0xa1 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x837Fu */ /* 0x10081443: cmp esi, 0x837f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008144C; /* 0x10081449: jb 0x1008144c */
L_1008144B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008144B: inc esi */
    _flag_k = FK_INC;
L_1008144C:
    eax = esi; /* 0x1008144C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008144E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008144F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081450: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081451(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081451u);

L_10081451:
    PUSH32(esp, ebp); /* 0x10081451: push ebp */
    ebp = esp; /* 0x10081452: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10081454: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10081457: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008146F; /* 0x10081459: jne 0x1008146f */
L_1008145B:
    RECOMP_CALL(sub_1001177D); /* 0x1008145B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081460: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008146B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008146D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008146E: ret  */
L_1008146F:
    eax = MEM32(eax + 0xC); /* 0x1008146F: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x10081472: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10081475: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081476: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081477(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081477u);

L_10081477:
    PUSH32(esp, ebp); /* 0x10081477: push ebp */
    ebp = esp; /* 0x10081478: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008147A: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008147D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081495; /* 0x1008147F: jne 0x10081495 */
L_10081481:
    RECOMP_CALL(sub_1001177D); /* 0x10081481: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081486: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008148C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081491: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10081493: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081494: ret  */
L_10081495:
    eax = MEM32(eax + 0xC); /* 0x10081495: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x10081498: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008149B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008149C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008149D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008149Du);

L_1008149D:
    PUSH32(esp, 0xCu); /* 0x1008149D: push 0xc */
    PUSH32(esp, 0x10081598u); /* 0x1008149F: push 0x10081598 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100814A4: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100814A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100814AB: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100814AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x100814B0: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100814B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100814B5: setne al */
    /* test eax, eax */ /* 0x100814B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100814D4; /* 0x100814BA: jne 0x100814d4 */
L_100814BC:
    RECOMP_CALL(sub_1001177D); /* 0x100814BC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100814C1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100814C7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100814CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081582; /* 0x100814CF: jmp 0x10081582 */
L_100814D4:
    PUSH32(esp, esi); /* 0x100814D4: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x100814D5: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100814DA: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x100814DB: mov dword ptr [ebp - 4], edi */
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x100814DE: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081555; /* 0x100814E2: jne 0x10081555 */
L_100814E4:
    PUSH32(esp, esi); /* 0x100814E4: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x100814E5: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100814EA: pop ecx */
    edx = eax; /* 0x100814EB: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x100814ED: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008150B; /* 0x100814F0: je 0x1008150b */
L_100814F2:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x100814F2: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008150B; /* 0x100814F5: je 0x1008150b */
L_100814F7:
    ecx = edx; /* 0x100814F7: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x100814F9: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x100814FC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x100814FF: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x100814FF: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x10081502: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081510; /* 0x10081509: jmp 0x10081510 */
L_1008150B:
    eax = 0x100DF520u; /* 0x1008150B: mov eax, 0x100df520 */
L_10081510:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x10081510: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008153F; /* 0x10081514: jne 0x1008153f */
L_10081516:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10081516: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081534; /* 0x10081519: je 0x10081534 */
L_1008151B:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1008151B: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081534; /* 0x1008151E: je 0x10081534 */
L_10081520:
    eax = edx; /* 0x10081520: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10081522: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10081525: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10081528: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10081528: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x1008152B: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081539; /* 0x10081532: jmp 0x10081539 */
L_10081534:
    edx = 0x100DF520u; /* 0x10081534: mov edx, 0x100df520 */
L_10081539:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x10081539: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081555; /* 0x1008153D: je 0x10081555 */
L_1008153F:
    RECOMP_CALL(sub_1001177D); /* 0x1008153F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081544: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008154A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1008154F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10081552: mov dword ptr [ebp - 0x1c], edi */
L_10081555:
    /* test edi, edi */ /* 0x10081555: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081574; /* 0x10081557: jne 0x10081574 */
L_10081559:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x10081559: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10081568; /* 0x1008155C: js 0x10081568 */
L_1008155E:
    eax = MEM32(esi); /* 0x1008155E: mov eax, dword ptr [esi] */
    edi = (uint32_t)MEM8(eax); /* 0x10081560: movzx edi, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10081563: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x10081564: mov dword ptr [esi], eax */
    goto L_10081571; /* 0x10081566: jmp 0x10081571 */
L_10081568:
    PUSH32(esp, esi); /* 0x10081568: push esi */
    RECOMP_CALL(sub_10014C47); /* 0x10081569: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008156E: pop ecx */
    edi = eax; /* 0x1008156F: mov edi, eax */
L_10081571:
    MEM32(ebp + (-0x1C)) = edi; /* 0x10081571: mov dword ptr [ebp - 0x1c], edi */
L_10081574:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081574: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008158E); /* 0x1008157B: call 0x1008158e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10081580: mov eax, edi */
L_10081582:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081582: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081587: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008158E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008158Eu);

L_1008158E:
    PUSH32(esp, esi); /* 0x1008158E: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1008158F: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081594: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081595: ret  */
    RECOMP_REGS_OUT();
}

void sub_100815B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100815B4u);

L_100815B4:
    RECOMP_CALL(sub_100142B5); /* 0x100815B4: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100815B9: push eax */
    RECOMP_CALL(sub_1008149D); /* 0x100815BA: call 0x1008149d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100815BF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100815C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100815C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100815C1u);

    goto L_100815C1;
L_100815B4:
    RECOMP_CALL(sub_100142B5); /* 0x100815B4: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100815B9: push eax */
    RECOMP_CALL(sub_1008149D); /* 0x100815BA: call 0x1008149d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100815BF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100815C0: ret  */
L_100815C1:
    RECOMP_BACKEDGE();
    goto L_100815B4; /* 0x100815C1: jmp 0x100815b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100815C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100815C3u);

L_100815C3:
    PUSH32(esp, 0x18u); /* 0x100815C3: push 0x18 */
    PUSH32(esp, 0x10081708u); /* 0x100815C5: push 0x10081708 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100815CA: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100815CF: mov eax, dword ptr [ebp + 8] */
    ebx = eax; /* 0x100815D2: mov ebx, eax */
    edi = eax; /* 0x100815D4: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100815D6: mov dword ptr [ebp - 0x1c], edi */
    /* test eax, eax */ /* 0x100815D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100815F9; /* 0x100815DB: jne 0x100815f9 */
L_100815DD:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x100815DD: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100815F9; /* 0x100815E0: je 0x100815f9 */
L_100815E2:
    RECOMP_CALL(sub_1001177D); /* 0x100815E2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100815E7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100815ED: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100815F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100815F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100816EE; /* 0x100815F4: jmp 0x100816ee */
L_100815F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100815F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x100815FB: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100815FE: setge al */
    /* test eax, eax */ /* 0x10081601: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100815E2; /* 0x10081603: je 0x100815e2 */
L_10081605:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081605: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x10); /* 0x10081607: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008160A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1008160C: setne al */
    /* test eax, eax */ /* 0x1008160F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100815E2; /* 0x10081611: je 0x100815e2 */
L_10081613:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10081613: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100815F2; /* 0x10081617: je 0x100815f2 */
L_10081619:
    MEM32(ebp + (-0x20)) = esi; /* 0x10081619: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, esi); /* 0x1008161C: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1008161D: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081622: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081623: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x10081627: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008169D; /* 0x1008162B: jne 0x1008169d */
L_1008162D:
    PUSH32(esp, esi); /* 0x1008162D: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x1008162E: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081633: pop ecx */
    edx = eax; /* 0x10081634: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10081636: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081654; /* 0x10081639: je 0x10081654 */
L_1008163B:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1008163B: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081654; /* 0x1008163E: je 0x10081654 */
L_10081640:
    ecx = edx; /* 0x10081640: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10081642: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x10081645: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x10081648: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x10081648: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x1008164B: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081659; /* 0x10081652: jmp 0x10081659 */
L_10081654:
    eax = 0x100DF520u; /* 0x10081654: mov eax, 0x100df520 */
L_10081659:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x10081659: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081688; /* 0x1008165D: jne 0x10081688 */
L_1008165F:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008165F: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008167D; /* 0x10081662: je 0x1008167d */
L_10081664:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10081664: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008167D; /* 0x10081667: je 0x1008167d */
L_10081669:
    eax = edx; /* 0x10081669: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1008166B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1008166E: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10081671: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10081671: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10081674: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081682; /* 0x1008167B: jmp 0x10081682 */
L_1008167D:
    edx = 0x100DF520u; /* 0x1008167D: mov edx, 0x100df520 */
L_10081682:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x10081682: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008169D; /* 0x10081686: je 0x1008169d */
L_10081688:
    RECOMP_CALL(sub_1001177D); /* 0x10081688: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008168D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081693: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10081698: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008169A: mov dword ptr [ebp - 0x1c], edi */
L_1008169D:
    /* test edi, edi */ /* 0x1008169D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100816E0; /* 0x1008169F: je 0x100816e0 */
L_100816A1:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x100816A1: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100816DD; /* 0x100816A4: je 0x100816dd */
L_100816A6:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x100816A6: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100816B5; /* 0x100816A9: js 0x100816b5 */
L_100816AB:
    eax = MEM32(esi); /* 0x100816AB: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM8(eax); /* 0x100816AD: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100816B0: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x100816B1: mov dword ptr [esi], eax */
    goto L_100816BE; /* 0x100816B3: jmp 0x100816be */
L_100816B5:
    PUSH32(esp, esi); /* 0x100816B5: push esi */
    RECOMP_CALL(sub_10014C47); /* 0x100816B6: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100816BB: pop ecx */
    ecx = eax; /* 0x100816BC: mov ecx, eax */
L_100816BE:
    MEM32(ebp + (-0x24)) = ecx; /* 0x100816BE: mov dword ptr [ebp - 0x24], ecx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100816C1: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100816D2; /* 0x100816C4: jne 0x100816d2 */
L_100816C6:
    /* cmp ebx, MEM32(ebp + 0x8) */ /* 0x100816C6: cmp ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100816DD; /* 0x100816C9: jne 0x100816dd */
L_100816CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100816CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100816CD: mov dword ptr [ebp - 0x1c], edi */
    goto L_100816E0; /* 0x100816D0: jmp 0x100816e0 */
L_100816D2:
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x100816D2: mov byte ptr [ebx], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100816D4: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = ebx; /* 0x100816D5: mov dword ptr [ebp - 0x28], ebx */
    /* cmp LO8(ecx), 0xAu */ /* 0x100816D8: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100816A1; /* 0x100816DB: jne 0x100816a1 */
L_100816DD:
    MEM8(ebx) = (uint8_t)(0); /* 0x100816DD: mov byte ptr [ebx], 0 */
L_100816E0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100816E0: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100816FA); /* 0x100816E7: call 0x100816fa */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100816EC: mov eax, edi */
L_100816EE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100816EE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100816F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100816FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100816FAu);

L_100816FA:
    PUSH32(esp, esi); /* 0x100816FA: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100816FB: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081700: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081701: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081724(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081724u);

L_10081724:
    PUSH32(esp, 0xCu); /* 0x10081724: push 0xc */
    PUSH32(esp, 0x10081798u); /* 0x10081726: push 0x10081798 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008172B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10081730: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081734: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10081736: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10081739: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1008173B: setne al */
    /* test eax, eax */ /* 0x1008173E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081759; /* 0x10081740: jne 0x10081759 */
L_10081742:
    RECOMP_CALL(sub_1001177D); /* 0x10081742: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081747: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008174D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0xFFFFu; /* 0x10081752: mov eax, 0xffff */
    goto L_10081780; /* 0x10081757: jmp 0x10081780 */
L_10081759:
    PUSH32(esp, esi); /* 0x10081759: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1008175A: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008175F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081760: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10081764: push esi */
    RECOMP_CALL(sub_1001C722); /* 0x10081765: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008176A: pop ecx */
    edi = (uint32_t)LO16(eax); /* 0x1008176B: movzx edi, ax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008176E: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081771: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008178C); /* 0x10081778: call 0x1008178c */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1008177D: mov ax, di */
L_10081780:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081780: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081785: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008178C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008178Cu);

L_1008178C:
    PUSH32(esp, esi); /* 0x1008178C: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1008178D: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081792: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081793: ret  */
    RECOMP_REGS_OUT();
}

void sub_100817B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100817B4u);

    goto L_100817B4;
L_10081724:
    PUSH32(esp, 0xCu); /* 0x10081724: push 0xc */
    PUSH32(esp, 0x10081798u); /* 0x10081726: push 0x10081798 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008172B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10081730: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081734: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10081736: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10081739: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1008173B: setne al */
    /* test eax, eax */ /* 0x1008173E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081759; /* 0x10081740: jne 0x10081759 */
L_10081742:
    RECOMP_CALL(sub_1001177D); /* 0x10081742: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081747: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008174D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0xFFFFu; /* 0x10081752: mov eax, 0xffff */
    goto L_10081780; /* 0x10081757: jmp 0x10081780 */
L_10081759:
    PUSH32(esp, esi); /* 0x10081759: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x1008175A: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008175F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081760: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10081764: push esi */
    RECOMP_CALL(sub_1001C722); /* 0x10081765: call 0x1001c722 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008176A: pop ecx */
    edi = (uint32_t)LO16(eax); /* 0x1008176B: movzx edi, ax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008176E: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081771: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008178C); /* 0x10081778: call 0x1008178c */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1008177D: mov ax, di */
L_10081780:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081780: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081785: ret  */
L_100817B4:
    PUSH32(esp, ebp); /* 0x100817B4: push ebp */
    ebp = esp; /* 0x100817B5: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x100817B7: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10081724; /* 0x100817B8: jmp 0x10081724 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100817BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100817BDu);

L_100817BD:
    RECOMP_CALL(sub_100142B5); /* 0x100817BD: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100817C2: push eax */
    RECOMP_CALL(sub_10081724); /* 0x100817C3: call 0x10081724 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100817C8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100817C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100817CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100817CAu);

    goto L_100817CA;
L_100817BD:
    RECOMP_CALL(sub_100142B5); /* 0x100817BD: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100817C2: push eax */
    RECOMP_CALL(sub_10081724); /* 0x100817C3: call 0x10081724 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100817C8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100817C9: ret  */
L_100817CA:
    RECOMP_BACKEDGE();
    goto L_100817BD; /* 0x100817CA: jmp 0x100817bd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100817CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100817CCu);

L_100817CC:
    PUSH32(esp, 0xCu); /* 0x100817CC: push 0xc */
    PUSH32(esp, 0x100818D0u); /* 0x100817CE: push 0x100818d0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100817D3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100817D8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100817DA: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100817DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x100817DF: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100817E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100817E4: setne al */
    /* test eax, eax */ /* 0x100817E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081803; /* 0x100817E9: jne 0x10081803 */
L_100817EB:
    RECOMP_CALL(sub_1001177D); /* 0x100817EB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100817F0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100817F6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100817FB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100818B9; /* 0x100817FE: jmp 0x100818b9 */
L_10081803:
    PUSH32(esp, esi); /* 0x10081803: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10081804: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081809: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1008180A: mov dword ptr [ebp - 4], edi */
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x1008180D: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081884; /* 0x10081811: jne 0x10081884 */
L_10081813:
    PUSH32(esp, esi); /* 0x10081813: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10081814: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081819: pop ecx */
    edx = eax; /* 0x1008181A: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008181C: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008183A; /* 0x1008181F: je 0x1008183a */
L_10081821:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10081821: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008183A; /* 0x10081824: je 0x1008183a */
L_10081826:
    ecx = edx; /* 0x10081826: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10081828: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1008182B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1008182E: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1008182E: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x10081831: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_1008183F; /* 0x10081838: jmp 0x1008183f */
L_1008183A:
    eax = 0x100DF520u; /* 0x1008183A: mov eax, 0x100df520 */
L_1008183F:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x1008183F: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008186E; /* 0x10081843: jne 0x1008186e */
L_10081845:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10081845: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081863; /* 0x10081848: je 0x10081863 */
L_1008184A:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1008184A: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081863; /* 0x1008184D: je 0x10081863 */
L_1008184F:
    eax = edx; /* 0x1008184F: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10081851: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10081854: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10081857: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10081857: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x1008185A: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081868; /* 0x10081861: jmp 0x10081868 */
L_10081863:
    edx = 0x100DF520u; /* 0x10081863: mov edx, 0x100df520 */
L_10081868:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x10081868: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081884; /* 0x1008186C: je 0x10081884 */
L_1008186E:
    RECOMP_CALL(sub_1001177D); /* 0x1008186E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081873: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081879: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1008187E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10081881: mov dword ptr [ebp - 0x1c], edi */
L_10081884:
    /* test edi, edi */ /* 0x10081884: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100818AB; /* 0x10081886: jne 0x100818ab */
L_10081888:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x10081888: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1008189B; /* 0x1008188B: js 0x1008189b */
L_1008188D:
    eax = MEM32(esi); /* 0x1008188D: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1008188F: mov ecx, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x10081892: mov byte ptr [eax], cl */
    edi = (uint32_t)LO8(ecx); /* 0x10081894: movzx edi, cl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x10081897: inc dword ptr [esi] */
    _flag_k = FK_INC;
    goto L_100818A8; /* 0x10081899: jmp 0x100818a8 */
L_1008189B:
    PUSH32(esp, esi); /* 0x1008189B: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008189C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002C35B); /* 0x1008189F: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100818A4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100818A5: pop ecx */
    edi = eax; /* 0x100818A6: mov edi, eax */
L_100818A8:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100818A8: mov dword ptr [ebp - 0x1c], edi */
L_100818AB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100818AB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100818C5); /* 0x100818B2: call 0x100818c5 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100818B7: mov eax, edi */
L_100818B9:
    RECOMP_CALL(sub_1000EDC3); /* 0x100818B9: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100818BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100818C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100818C5u);

L_100818C5:
    PUSH32(esp, esi); /* 0x100818C5: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100818C6: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100818CB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100818CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100818EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100818ECu);

L_100818EC:
    PUSH32(esp, ebp); /* 0x100818EC: push ebp */
    ebp = esp; /* 0x100818ED: mov ebp, esp */
    RECOMP_CALL(sub_100142B5); /* 0x100818EF: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100818F4: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100818F7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100818F8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100817CC); /* 0x100818FB: call 0x100817cc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081900: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081901: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10081902: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081903: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081904u);

    goto L_10081904;
L_100818EC:
    PUSH32(esp, ebp); /* 0x100818EC: push ebp */
    ebp = esp; /* 0x100818ED: mov ebp, esp */
    RECOMP_CALL(sub_100142B5); /* 0x100818EF: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100818F4: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100818F7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100818F8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100817CC); /* 0x100818FB: call 0x100817cc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081900: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081901: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10081902: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081903: ret  */
L_10081904:
    PUSH32(esp, ebp); /* 0x10081904: push ebp */
    ebp = esp; /* 0x10081905: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10081907: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100818EC; /* 0x10081908: jmp 0x100818ec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008190A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008190Au);

    goto L_1008190A;
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
L_1008190A:
    PUSH32(esp, ebp); /* 0x1008190A: push ebp */
    ebp = esp; /* 0x1008190B: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008190D: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1002F28E; /* 0x1008190E: jmp 0x1002f28e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10081913(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081913u);

L_10081913:
    PUSH32(esp, ebp); /* 0x10081913: push ebp */
    ebp = esp; /* 0x10081914: mov ebp, esp */
    RECOMP_CALL(sub_100142B5); /* 0x10081916: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008191B: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1008191E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008191F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F28E); /* 0x10081922: call 0x1002f28e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081927: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081928: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10081929: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008192A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008192B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008192Bu);

    goto L_1008192B;
L_10081913:
    PUSH32(esp, ebp); /* 0x10081913: push ebp */
    ebp = esp; /* 0x10081914: mov ebp, esp */
    RECOMP_CALL(sub_100142B5); /* 0x10081916: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008191B: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1008191E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008191F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002F28E); /* 0x10081922: call 0x1002f28e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081927: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081928: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10081929: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008192A: ret  */
L_1008192B:
    PUSH32(esp, ebp); /* 0x1008192B: push ebp */
    ebp = esp; /* 0x1008192C: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008192E: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10081913; /* 0x1008192F: jmp 0x10081913 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10081931(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081931u);

L_10081931:
    PUSH32(esp, ebp); /* 0x10081931: push ebp */
    ebp = esp; /* 0x10081932: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10081934: push ecx */
    PUSH32(esp, ecx); /* 0x10081935: push ecx */
    PUSH32(esp, ebx); /* 0x10081936: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10081937: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x10081939: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008193C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008193E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1008193F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10081942: push edi */
    edi = MEM32(0x100DF638); /* 0x10081943: mov edi, dword ptr [0x100df638] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10081949: mov dword ptr [ebp - 8], eax */
    goto L_1008194F; /* 0x1008194C: jmp 0x1008194f */
L_1008194E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008194E: inc esi */
    _flag_k = FK_INC;
L_1008194F:
    /* cmp MEM8(esi), 0x20u */ /* 0x1008194F: cmp byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008194E; /* 0x10081952: je 0x1008194e */
L_10081954:
    SET_LO8(eax, MEM8(esi)); /* 0x10081954: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x61u */ /* 0x10081956: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081987; /* 0x10081958: je 0x10081987 */
L_1008195A:
    /* cmp LO8(eax), 0x72u */ /* 0x1008195A: cmp al, 0x72 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x72u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081980; /* 0x1008195C: je 0x10081980 */
L_1008195E:
    /* cmp LO8(eax), 0x77u */ /* 0x1008195E: cmp al, 0x77 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081979; /* 0x10081960: je 0x10081979 */
L_10081962:
    RECOMP_CALL(sub_1001177D); /* 0x10081962: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081967: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008196D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10081972:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081972: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081B9D; /* 0x10081974: jmp 0x10081b9d */
L_10081979:
    ebx = 0x301u; /* 0x10081979: mov ebx, 0x301 */
    goto L_1008198C; /* 0x1008197E: jmp 0x1008198c */
L_10081980:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10081980: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x10081982: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008198F; /* 0x10081985: jmp 0x1008198f */
L_10081987:
    ebx = 0x109u; /* 0x10081987: mov ebx, 0x109 */
L_1008198C:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1008198C: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008198F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008198F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10081991: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081992: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x10081993: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x10081995: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081B56; /* 0x10081997: je 0x10081b56 */
L_1008199D:
    MEM32(ebp + 0xC) = 0x1000u; /* 0x1008199D: mov dword ptr [ebp + 0xc], 0x1000 */
L_100819A4:
    /* test ecx, ecx */ /* 0x100819A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081AAF; /* 0x100819A6: je 0x10081aaf */
L_100819AC:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100819AC: movsx eax, al */
    /* cmp eax, 0x53u */ /* 0x100819AF: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10081A42; /* 0x100819B2: jg 0x10081a42 */
L_100819B8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081A30; /* 0x100819B8: je 0x10081a30 */
L_100819BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100819BA: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081AA4; /* 0x100819BD: je 0x10081aa4 */
L_100819C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100819C3: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A1A; /* 0x100819C6: je 0x10081a1a */
L_100819C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100819C8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A0E; /* 0x100819C9: je 0x10081a0e */
L_100819CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x100819CB: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100819FD; /* 0x100819CE: je 0x100819fd */
L_100819D0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x100819D0: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100819F2; /* 0x100819D3: je 0x100819f2 */
L_100819D5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x100819D5: sub eax, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10081962; /* 0x100819D8: jne 0x10081962 */
L_100819DA:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x100819DA: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081A9E; /* 0x100819DD: jne 0x10081a9e */
L_100819E3:
    MEM32(ebp + (-0x4)) = 1; /* 0x100819E3: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)((ebx | 0x10u)); _flag_b = (uint32_t)((ebx | 0x10u));
    ebx = ebx | 0x10u; /* 0x100819EA: or ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x100819ED: jmp 0x10081aa4 */
L_100819F2:
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100819F2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x100819F8: jmp 0x10081aa4 */
L_100819FD:
    /* test LO8(ebx), 0x40u */ /* 0x100819FD: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A00: jne 0x10081a9e */
L_10081A06:
    _flag_a = (uint32_t)((ebx | 0x40u)); _flag_b = (uint32_t)((ebx | 0x40u));
    ebx = ebx | 0x40u; /* 0x10081A06: or ebx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A09: jmp 0x10081aa4 */
L_10081A0E:
    MEM32(ebp + (-0x8)) = 1; /* 0x10081A0E: mov dword ptr [ebp - 8], 1 */
    goto L_10081A9E; /* 0x10081A15: jmp 0x10081a9e */
L_10081A1A:
    /* test LO8(ebx), 2 */ /* 0x10081A1A: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A1D: jne 0x10081a9e */
L_10081A1F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x10081A1F: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x10081A22: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x10081A25: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0x80u)); _flag_b = (uint32_t)((edi | 0x80u));
    edi = edi | 0x80u; /* 0x10081A28: or edi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A2E: jmp 0x10081aa4 */
L_10081A30:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x10081A30: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A34: jne 0x10081a9e */
L_10081A36:
    MEM32(ebp + (-0x4)) = 1; /* 0x10081A36: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x10081A3D: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A40: jmp 0x10081aa4 */
L_10081A42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x54u; /* 0x10081A42: sub eax, 0x54 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A97; /* 0x10081A45: je 0x10081a97 */
L_10081A47:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEu; /* 0x10081A47: sub eax, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A87; /* 0x10081A4A: je 0x10081a87 */
L_10081A4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10081A4C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A7A; /* 0x10081A4D: je 0x10081a7a */
L_10081A4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x10081A4F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10081A6D; /* 0x10081A52: je 0x10081a6d */
L_10081A54:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10081A54: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10081962; /* 0x10081A57: jne 0x10081962 */
L_10081A5D:
    /* test ebx, 0xC000u */ /* 0x10081A5D: test ebx, 0xc000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xC000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A63: jne 0x10081a9e */
L_10081A65:
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x10081A65: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A6B: jmp 0x10081aa4 */
L_10081A6D:
    /* test edx, edx */ /* 0x10081A6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A6F: jne 0x10081a9e */
L_10081A71:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10081A71: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFBFFFu);
    edi = edi & 0xFFFFBFFFu; /* 0x10081A72: and edi, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A78: jmp 0x10081aa4 */
L_10081A7A:
    /* test edx, edx */ /* 0x10081A7A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A7C: jne 0x10081a9e */
L_10081A7E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10081A7E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((edi | 0x4000u)); _flag_b = (uint32_t)((edi | 0x4000u));
    edi = edi | 0x4000u; /* 0x10081A7F: or edi, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A85: jmp 0x10081aa4 */
L_10081A87:
    /* test ebx, 0xC000u */ /* 0x10081A87: test ebx, 0xc000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xC000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081A9E; /* 0x10081A8D: jne 0x10081a9e */
L_10081A8F:
    _flag_a = (uint32_t)((ebx | 0x8000u)); _flag_b = (uint32_t)((ebx | 0x8000u));
    ebx = ebx | 0x8000u; /* 0x10081A8F: or ebx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081A95: jmp 0x10081aa4 */
L_10081A97:
    eax = MEM32(ebp + 0xC); /* 0x10081A97: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, ebx */ /* 0x10081A9A: test eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081AA2; /* 0x10081A9C: je 0x10081aa2 */
L_10081A9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10081A9E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081AA4; /* 0x10081AA0: jmp 0x10081aa4 */
L_10081AA2:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x10081AA2: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081AA4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081AA4: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x10081AA5: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x10081AA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100819A4; /* 0x10081AA9: jne 0x100819a4 */
L_10081AAF:
    eax = MEM32(ebp + (-0x8)); /* 0x10081AAF: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x10081AB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081ABC; /* 0x10081AB4: jne 0x10081abc */
L_10081AB6:
    goto L_10081B56; /* 0x10081AB6: jmp 0x10081b56 */
L_10081ABB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081ABB: inc esi */
    _flag_k = FK_INC;
L_10081ABC:
    /* cmp MEM8(esi), 0x20u */ /* 0x10081ABC: cmp byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081ABB; /* 0x10081ABF: je 0x10081abb */
L_10081AC1:
    PUSH32(esp, 3); /* 0x10081AC1: push 3 */
    PUSH32(esp, esi); /* 0x10081AC3: push esi */
    PUSH32(esp, 0x10081BA4u); /* 0x10081AC4: push 0x10081ba4 */
    RECOMP_CALL(sub_1008D52C); /* 0x10081AC9: call 0x1008d52c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081ACE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081AD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081962; /* 0x10081AD3: jne 0x10081962 */
L_10081AD9:
    PUSH32(esp, 0x20u); /* 0x10081AD9: push 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x10081ADB: add esi, 3 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x10081ADE: pop eax */
    goto L_10081AE2; /* 0x10081ADF: jmp 0x10081ae2 */
L_10081AE1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081AE1: inc esi */
    _flag_k = FK_INC;
L_10081AE2:
    /* cmp MEM8(esi), LO8(eax) */ /* 0x10081AE2: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081AE1; /* 0x10081AE4: je 0x10081ae1 */
L_10081AE6:
    /* cmp MEM8(esi), 0x3Du */ /* 0x10081AE6: cmp byte ptr [esi], 0x3d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081962; /* 0x10081AE9: jne 0x10081962 */
L_10081AEF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081AEF: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), LO8(eax) */ /* 0x10081AF0: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081AEF; /* 0x10081AF2: je 0x10081aef */
L_10081AF4:
    PUSH32(esp, 5); /* 0x10081AF4: push 5 */
    PUSH32(esp, 0x10081BA8u); /* 0x10081AF6: push 0x10081ba8 */
    PUSH32(esp, esi); /* 0x10081AFB: push esi */
    RECOMP_CALL(sub_1008D8BF); /* 0x10081AFC: call 0x1008d8bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081B01: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081B04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081B13; /* 0x10081B06: jne 0x10081b13 */
L_10081B08:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 5; /* 0x10081B08: add esi, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00040000u)); _flag_b = (uint32_t)((ebx | 0x00040000u));
    ebx = ebx | 0x00040000u; /* 0x10081B0B: or ebx, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081B56; /* 0x10081B11: jmp 0x10081b56 */
L_10081B13:
    PUSH32(esp, 8); /* 0x10081B13: push 8 */
    PUSH32(esp, 0x10081BB0u); /* 0x10081B15: push 0x10081bb0 */
    PUSH32(esp, esi); /* 0x10081B1A: push esi */
    RECOMP_CALL(sub_1008D8BF); /* 0x10081B1B: call 0x1008d8bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081B20: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081B23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081B32; /* 0x10081B25: jne 0x10081b32 */
L_10081B27:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x10081B27: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00020000u)); _flag_b = (uint32_t)((ebx | 0x00020000u));
    ebx = ebx | 0x00020000u; /* 0x10081B2A: or ebx, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081B56; /* 0x10081B30: jmp 0x10081b56 */
L_10081B32:
    PUSH32(esp, 7); /* 0x10081B32: push 7 */
    PUSH32(esp, 0x10081BBCu); /* 0x10081B34: push 0x10081bbc */
    PUSH32(esp, esi); /* 0x10081B39: push esi */
    RECOMP_CALL(sub_1008D8BF); /* 0x10081B3A: call 0x1008d8bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081B3F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081B42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081962; /* 0x10081B44: jne 0x10081962 */
L_10081B4A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 7; /* 0x10081B4A: add esi, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x00010000u)); _flag_b = (uint32_t)((ebx | 0x00010000u));
    ebx = ebx | 0x00010000u; /* 0x10081B4D: or ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081B56; /* 0x10081B53: jmp 0x10081b56 */
L_10081B55:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081B55: inc esi */
    _flag_k = FK_INC;
L_10081B56:
    /* cmp MEM8(esi), 0x20u */ /* 0x10081B56: cmp byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081B55; /* 0x10081B59: je 0x10081b55 */
L_10081B5B:
    /* cmp MEM8(esi), 0 */ /* 0x10081B5B: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081962; /* 0x10081B5E: jne 0x10081962 */
L_10081B64:
    PUSH32(esp, 0x180u); /* 0x10081B64: push 0x180 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081B69: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x10081B6C: lea eax, [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10081B6F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081B70: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10081B73: push eax */
    RECOMP_CALL(sub_100A1C4A); /* 0x10081B74: call 0x100a1c4a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10081B79: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10081B7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081972; /* 0x10081B7E: jne 0x10081972 */
L_10081B84:
    eax = MEM32(ebp + 0x14); /* 0x10081B84: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10081B87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x10081B89: mov dword ptr [eax + 4], ecx */
    MEM32(eax) = ecx; /* 0x10081B8C: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x10081B8E: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x10081B91: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10081B94: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0xC) = edi; /* 0x10081B97: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = ecx; /* 0x10081B9A: mov dword ptr [eax + 0x10], ecx */
L_10081B9D:
    edi = POP32_VAL(esp); /* 0x10081B9D: pop edi */
    esi = POP32_VAL(esp); /* 0x10081B9E: pop esi */
    ebx = POP32_VAL(esp); /* 0x10081B9F: pop ebx */
    esp = ebp; /* 0x10081BA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10081BA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081BA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BA4u);

L_10081BA4:
    void_lift_trap(0x10081BA4u, "arpl word ptr [ebx + 0x73], sp");
    _flag_a = (uint32_t)(MEM8(ebp + 0x54)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x54) = (uint8_t)(MEM8(ebp + 0x54) + LO8(edx)); /* 0x10081BA7: add byte ptr [ebp + 0x54], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081BAA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x38u; /* 0x10081BAB: sub eax, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebp); /* 0x10081BB0: push ebp */
    PUSH32(esp, esp); /* 0x10081BB1: push esp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081BB2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x454C3631u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x454C3631u; /* 0x10081BB3: sub eax, 0x454c3631 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x10081BBC: push ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10081BBD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10081BBE: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10081BBF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10081BC0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10081BC1: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10081BC2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx)); /* 0x10081BC3: add bl, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x8) = (uint8_t)(MEM8(edx + 0x8) + HI8(ecx)); /* 0x10081BC5: add byte ptr [edx + 8], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BA8u);

L_10081BA8:
    PUSH32(esp, ebp); /* 0x10081BA8: push ebp */
    PUSH32(esp, esp); /* 0x10081BA9: push esp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081BAA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x38u; /* 0x10081BAB: sub eax, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebp); /* 0x10081BB0: push ebp */
    PUSH32(esp, esp); /* 0x10081BB1: push esp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081BB2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x454C3631u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x454C3631u; /* 0x10081BB3: sub eax, 0x454c3631 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x10081BBC: push ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10081BBD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10081BBE: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10081BBF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10081BC0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10081BC1: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10081BC2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx)); /* 0x10081BC3: add bl, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x8) = (uint8_t)(MEM8(edx + 0x8) + HI8(ecx)); /* 0x10081BC5: add byte ptr [edx + 8], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BB0u);

L_10081BB0:
    PUSH32(esp, ebp); /* 0x10081BB0: push ebp */
    PUSH32(esp, esp); /* 0x10081BB1: push esp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10081BB2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x454C3631u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x454C3631u; /* 0x10081BB3: sub eax, 0x454c3631 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10081BBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x10081BBC: push ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10081BBD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10081BBE: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10081BBF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10081BC0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10081BC1: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10081BC2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx)); /* 0x10081BC3: add bl, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x8) = (uint8_t)(MEM8(edx + 0x8) + HI8(ecx)); /* 0x10081BC5: add byte ptr [edx + 8], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BBCu);

L_10081BBC:
    PUSH32(esp, ebp); /* 0x10081BBC: push ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10081BBD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10081BBE: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10081BBF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10081BC0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10081BC1: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10081BC2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx)); /* 0x10081BC3: add bl, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x8) = (uint8_t)(MEM8(edx + 0x8) + HI8(ecx)); /* 0x10081BC5: add byte ptr [edx + 8], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BC4u);

L_10081BC4:
    goto L_10081BC6; /* 0x10081BC4: jmp 0x10081bc6 */
L_10081BC6:
    PUSH32(esp, 8); /* 0x10081BC6: push 8 */
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081BC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081BC6u);

L_10081BC6:
    PUSH32(esp, 8); /* 0x10081BC6: push 8 */
    PUSH32(esp, 0x10081C70u); /* 0x10081BC8: push 0x10081c70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081BCD: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081BD4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081BD9: setne al */
    /* test eax, eax */ /* 0x10081BDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081BF3; /* 0x10081BDE: jne 0x10081bf3 */
L_10081BE0:
    RECOMP_CALL(sub_1001177D); /* 0x10081BE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081BE5: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081BE7: pop esi */
    MEM32(eax) = esi; /* 0x10081BE8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081BEA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081BEF: mov eax, esi */
    goto L_10081C5A; /* 0x10081BF1: jmp 0x10081c5a */
L_10081BF3:
    PUSH32(esp, edi); /* 0x10081BF3: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10081BF4: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081BF9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081BFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x10081BFE: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10081C02: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C03: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C08: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081C09: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C0C: je 0x10081c3e */
L_10081C0E:
    PUSH32(esp, edi); /* 0x10081C0E: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C0F: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C14: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10081C15: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081C3E; /* 0x10081C18: je 0x10081c3e */
L_10081C1A:
    PUSH32(esp, edi); /* 0x10081C1A: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C1B: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081C20: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10081C22: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x10081C25: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10081C26: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10081C2C: pop ecx */
    ecx = eax; /* 0x10081C2D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10081C2F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10081C32: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10081C32: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi * 4 + 0x100DF640); /* 0x10081C35: add ecx, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10081C43; /* 0x10081C3C: jmp 0x10081c43 */
L_10081C3E:
    ecx = 0x100DF520u; /* 0x10081C3E: mov ecx, 0x100df520 */
L_10081C43:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x10081C43: movsx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x10081C47: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10081C49: mov byte ptr [ecx + 4], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081C4C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081C63); /* 0x10081C53: call 0x10081c63 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081C5A:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081C5A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081C63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081C63u);

L_10081C63:
    PUSH32(esp, edi); /* 0x10081C63: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x10081C64: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081C69: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081C6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081C8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081C8Cu);

L_10081C8C:
    PUSH32(esp, ebp); /* 0x10081C8C: push ebp */
    ebp = esp; /* 0x10081C8D: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10081C8F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081CAA; /* 0x10081C93: jne 0x10081caa */
L_10081C95:
    RECOMP_CALL(sub_1001177D); /* 0x10081C95: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081C9A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081CA0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10081CA5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10081CA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081CA9: ret  */
L_10081CAA:
    PUSH32(esp, esi); /* 0x10081CAA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10081CAB: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x10081CAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081CC8; /* 0x10081CB0: jne 0x10081cc8 */
L_10081CB2:
    RECOMP_CALL(sub_1001177D); /* 0x10081CB2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081CB7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081CBD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10081CC2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10081CC2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10081CC5:
    esi = POP32_VAL(esp); /* 0x10081CC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x10081CC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081CC7: ret  */
L_10081CC8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081CC8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008234E); /* 0x10081CCB: call 0x1008234e */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x10081CD0: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x10081CD2: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x10081CD4: mov dword ptr [esi + 4], edx */
    ecx = POP32_VAL(esp); /* 0x10081CD7: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10081CD8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081CC2; /* 0x10081CDB: je 0x10081cc2 */
L_10081CDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081CDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10081CC5; /* 0x10081CDF: jmp 0x10081cc5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10081CE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081CE1u);

L_10081CE1:
    PUSH32(esp, 0xCu); /* 0x10081CE1: push 0xc */
    PUSH32(esp, 0x10081DA8u); /* 0x10081CE3: push 0x10081da8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081CE8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10081CED: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081CF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10081CF3: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10081CF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081CF8: setne al */
    /* test eax, eax */ /* 0x10081CFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081D13; /* 0x10081CFD: jne 0x10081d13 */
L_10081CFF:
    RECOMP_CALL(sub_1001177D); /* 0x10081CFF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081D04: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10081D0A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10081D0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081D0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081D91; /* 0x10081D11: jmp 0x10081d91 */
L_10081D13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081D13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x10081D15: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x10081D18: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081D1A: setne al */
    /* test eax, eax */ /* 0x10081D1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081CFF; /* 0x10081D1F: je 0x10081cff */
L_10081D21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081D21: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx), LO8(eax) */ /* 0x10081D23: cmp byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081D25: setne al */
    /* test eax, eax */ /* 0x10081D28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081CFF; /* 0x10081D2A: je 0x10081cff */
L_10081D2C:
    RECOMP_CALL(sub_10015857); /* 0x10081D2C: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10081D31: mov esi, eax */
    MEM32(ebp + 0x8) = esi; /* 0x10081D33: mov dword ptr [ebp + 8], esi */
    /* test esi, esi */ /* 0x10081D36: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081D47; /* 0x10081D38: jne 0x10081d47 */
L_10081D3A:
    RECOMP_CALL(sub_1001177D); /* 0x10081D3A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x10081D3F: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_10081D0F; /* 0x10081D45: jmp 0x10081d0f */
L_10081D47:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081D47: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi), 0 */ /* 0x10081D4B: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081D70; /* 0x10081D4E: jne 0x10081d70 */
L_10081D50:
    RECOMP_CALL(sub_1001177D); /* 0x10081D50: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081D55: mov dword ptr [eax], 0x16 */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10081D5B: push -2 */
    eax = ebp + (-0x10); /* 0x10081D5D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10081D60: push eax */
    PUSH32(esp, 0x100DF7B8u); /* 0x10081D61: push 0x100df7b8 */
    RECOMP_CALL(sub_100321EE); /* 0x10081D66: call 0x100321ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081D6B: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10081D0F; /* 0x10081D6E: jmp 0x10081d0f */
L_10081D70:
    PUSH32(esp, esi); /* 0x10081D70: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081D71: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x10081D74: push ebx */
    PUSH32(esp, edi); /* 0x10081D75: push edi */
    RECOMP_CALL(sub_10081931); /* 0x10081D76: call 0x10081931 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081D7B: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10081D7E: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10081D80: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081D83: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081D9D); /* 0x10081D8A: call 0x10081d9d */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10081D8F: mov eax, edi */
L_10081D91:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081D91: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081D96: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081D9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081D9Du);

L_10081D9D:
    PUSH32(esp, esi); /* 0x10081D9D: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10081D9E: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081DA3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081DA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081DC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081DC4u);

L_10081DC4:
    PUSH32(esp, ebp); /* 0x10081DC4: push ebp */
    ebp = esp; /* 0x10081DC5: mov ebp, esp */
    PUSH32(esp, 0x40u); /* 0x10081DC7: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081DC9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081DCC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10081CE1); /* 0x10081DCF: call 0x10081ce1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081DD4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081DD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081DD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081DD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081DD9u);

L_10081DD9:
    PUSH32(esp, ebp); /* 0x10081DD9: push ebp */
    ebp = esp; /* 0x10081DDA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10081DDC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10081DDD: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10081DE0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081DF7; /* 0x10081DE2: jne 0x10081df7 */
L_10081DE4:
    RECOMP_CALL(sub_1001177D); /* 0x10081DE4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081DE9: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081DEB: pop esi */
    MEM32(eax) = esi; /* 0x10081DEC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081DEE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081DF3: mov eax, esi */
    goto L_10081E1B; /* 0x10081DF5: jmp 0x10081e1b */
L_10081DF7:
    PUSH32(esp, 0x80u); /* 0x10081DF7: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081DFC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081DFF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10081CE1); /* 0x10081E02: call 0x10081ce1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10081E07: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x10081E0A: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x10081E0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081E14; /* 0x10081E0E: je 0x10081e14 */
L_10081E10:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081E10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10081E1B; /* 0x10081E12: jmp 0x10081e1b */
L_10081E14:
    RECOMP_CALL(sub_1001177D); /* 0x10081E14: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10081E19: mov eax, dword ptr [eax] */
L_10081E1B:
    esi = POP32_VAL(esp); /* 0x10081E1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x10081E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E1Eu);

L_10081E1E:
    PUSH32(esp, ebp); /* 0x10081E1E: push ebp */
    ebp = esp; /* 0x10081E1F: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10081E21: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10081E24: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081E25: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081E28: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081E2B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008469B); /* 0x10081E2E: call 0x1008469b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081E33: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081E36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E37: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E38u);

L_10081E38:
    PUSH32(esp, ebp); /* 0x10081E38: push ebp */
    ebp = esp; /* 0x10081E39: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10081E3B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10081E3E: push eax */
    PUSH32(esp, 0); /* 0x10081E3F: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081E41: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081E44: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100846D6); /* 0x10081E47: call 0x100846d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081E4C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081E4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E50: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E51u);

L_10081E51:
    PUSH32(esp, ebp); /* 0x10081E51: push ebp */
    ebp = esp; /* 0x10081E52: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10081E54: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10081E57: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081E58: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081E5B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081E5E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100846D6); /* 0x10081E61: call 0x100846d6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081E66: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081E69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E6Bu);

L_10081E6B:
    PUSH32(esp, ebp); /* 0x10081E6B: push ebp */
    ebp = esp; /* 0x10081E6C: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10081E6E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10081E71: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081E72: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081E75: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081E78: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100846F4); /* 0x10081E7B: call 0x100846f4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081E80: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081E83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E84: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E85u);

L_10081E85:
    PUSH32(esp, ebp); /* 0x10081E85: push ebp */
    ebp = esp; /* 0x10081E86: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10081E88: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10081E8B: push eax */
    PUSH32(esp, 0); /* 0x10081E8C: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081E8E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081E91: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100846F4); /* 0x10081E94: call 0x100846f4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081E99: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081E9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081E9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081E9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081E9Eu);

L_10081E9E:
    PUSH32(esp, ebp); /* 0x10081E9E: push ebp */
    ebp = esp; /* 0x10081E9F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10081EA1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081EA4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081EA7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10081EAA: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081EAC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015938); /* 0x10081EAF: call 0x10015938 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10081EB4: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081EB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081EB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081EB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081EB9u);

L_10081EB9:
    PUSH32(esp, 0xCu); /* 0x10081EB9: push 0xc */
    PUSH32(esp, 0x10081F90u); /* 0x10081EBB: push 0x10081f90 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10081EC0: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081EC5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x10081EC7: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10081ECA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081ECC: setne al */
    /* test eax, eax */ /* 0x10081ECF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10081EE6; /* 0x10081ED1: jne 0x10081ee6 */
L_10081ED3:
    RECOMP_CALL(sub_1001177D); /* 0x10081ED3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10081ED8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10081EDA: pop esi */
    MEM32(eax) = esi; /* 0x10081EDB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10081EDD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10081EE2: mov eax, esi */
    goto L_10081F29; /* 0x10081EE4: jmp 0x10081f29 */
L_10081EE6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10081EE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edi; /* 0x10081EE8: mov dword ptr [ebx], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081EEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x10081EEC: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10081EEF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081EF1: setne al */
    /* test eax, eax */ /* 0x10081EF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081ED3; /* 0x10081EF6: je 0x10081ed3 */
L_10081EF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081EF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10081EFA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081EFD: setne al */
    /* test eax, eax */ /* 0x10081F00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081ED3; /* 0x10081F02: je 0x10081ed3 */
L_10081F04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081F04: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x10081F06: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x10081F09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10081F0B: setne al */
    /* test eax, eax */ /* 0x10081F0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081ED3; /* 0x10081F10: je 0x10081ed3 */
L_10081F12:
    /* cmp MEM8(ecx), 0 */ /* 0x10081F12: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10081F2F; /* 0x10081F15: jne 0x10081f2f */
L_10081F17:
    RECOMP_CALL(sub_1001177D); /* 0x10081F17: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10081F1C: mov dword ptr [eax], 0x16 */
L_10081F22:
    RECOMP_CALL(sub_1001177D); /* 0x10081F22: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10081F27: mov eax, dword ptr [eax] */
L_10081F29:
    RECOMP_CALL(sub_1000EDC3); /* 0x10081F29: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081F2E: ret  */
L_10081F2F:
    MEM32(ebp + (-0x1C)) = esi; /* 0x10081F2F: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, esi); /* 0x10081F32: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10081F33: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081F38: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x10081F39: mov dword ptr [ebp - 4], edi */
    /* test MEM8(esi + 0xC), 0x83u */ /* 0x10081F3C: test byte ptr [esi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10081F49; /* 0x10081F40: je 0x10081f49 */
L_10081F42:
    PUSH32(esp, esi); /* 0x10081F42: push esi */
    RECOMP_CALL(sub_10014F4C); /* 0x10081F43: call 0x10014f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081F48: pop ecx */
L_10081F49:
    MEM32(esi + 0x8) = edi; /* 0x10081F49: mov dword ptr [esi + 8], edi */
    MEM32(esi) = edi; /* 0x10081F4C: mov dword ptr [esi], edi */
    MEM32(esi + 0xC) = edi; /* 0x10081F4E: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x4) = edi; /* 0x10081F51: mov dword ptr [esi + 4], edi */
    PUSH32(esp, esi); /* 0x10081F54: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10081F55: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081F58: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081F5B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10081931); /* 0x10081F5E: call 0x10081931 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10081F63: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x10081F66: mov dword ptr [ebx], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10081F68: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10081F84); /* 0x10081F6F: call 0x10081f84 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), edi */ /* 0x10081F74: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10081F22; /* 0x10081F76: je 0x10081f22 */
L_10081F78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10081F78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10081F29; /* 0x10081F7A: jmp 0x10081f29 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10081F84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081F84u);

L_10081F84:
    PUSH32(esp, esi); /* 0x10081F84: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10081F85: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10081F8A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081F8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081FACu);

L_10081FAC:
    PUSH32(esp, ebp); /* 0x10081FAC: push ebp */
    ebp = esp; /* 0x10081FAD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10081FAF: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10081FB0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10081FB4: lea eax, [ebp - 4] */
    PUSH32(esp, 0x40u); /* 0x10081FB7: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081FB9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081FBC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081FBF: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10081FC2: push eax */
    RECOMP_CALL(sub_10081EB9); /* 0x10081FC3: call 0x10081eb9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10081FC8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10081FCB: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x10081FCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10081FD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081FD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081FD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081FD2u);

L_10081FD2:
    PUSH32(esp, ebp); /* 0x10081FD2: push ebp */
    ebp = esp; /* 0x10081FD3: mov ebp, esp */
    PUSH32(esp, 0x80u); /* 0x10081FD5: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10081FDA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081FDD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081FE0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081FE3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10081EB9); /* 0x10081FE6: call 0x10081eb9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10081FEB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10081FEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10081FEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10081FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10081FF0u);

L_10081FF0:
    PUSH32(esp, ebp); /* 0x10081FF0: push ebp */
    ebp = esp; /* 0x10081FF1: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10081FF3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10081FF6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10081FF7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10081FFA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10081FFD: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x10082000: push 0x1001b879 */
    RECOMP_CALL(sub_10082087); /* 0x10082005: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008200A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008200D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008200E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008200F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008200Fu);

L_1008200F:
    PUSH32(esp, ebp); /* 0x1008200F: push ebp */
    ebp = esp; /* 0x10082010: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10082012: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10082015: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082016: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082019: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008201C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x1008201F: push 0x1002ea80 */
    RECOMP_CALL(sub_10082087); /* 0x10082024: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082029: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008202C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008202D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008202E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008202Eu);

L_1008202E:
    PUSH32(esp, ebp); /* 0x1008202E: push ebp */
    ebp = esp; /* 0x1008202F: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082031: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082034: push eax */
    PUSH32(esp, 0); /* 0x10082035: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082037: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008203A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x1008203D: push 0x1001b879 */
    RECOMP_CALL(sub_10082087); /* 0x10082042: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082047: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008204A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008204B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008204C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008204Cu);

L_1008204C:
    PUSH32(esp, ebp); /* 0x1008204C: push ebp */
    ebp = esp; /* 0x1008204D: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1008204F: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082052: push eax */
    PUSH32(esp, 0); /* 0x10082053: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082055: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082058: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x1008205B: push 0x1002ea80 */
    RECOMP_CALL(sub_10082087); /* 0x10082060: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082065: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082068: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082069: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008206A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008206Au);

L_1008206A:
    PUSH32(esp, ebp); /* 0x1008206A: push ebp */
    ebp = esp; /* 0x1008206B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008206D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10082070: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082072: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082075: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001B879u); /* 0x10082078: push 0x1001b879 */
    RECOMP_CALL(sub_10082087); /* 0x1008207D: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082082: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082085: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082086: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082087(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082087u);

L_10082087:
    PUSH32(esp, 0xCu); /* 0x10082087: push 0xc */
    PUSH32(esp, 0x10082188u); /* 0x10082089: push 0x10082188 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008208E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10082093: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x10082095: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082098: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1008209A: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008209D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1008209F: setne al */
    /* test eax, eax */ /* 0x100820A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100820BE; /* 0x100820A4: jne 0x100820be */
L_100820A6:
    RECOMP_CALL(sub_1001177D); /* 0x100820A6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100820AB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100820B1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100820B6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10082172; /* 0x100820B9: jmp 0x10082172 */
L_100820BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100820BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100820C0: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100820C3: setne al */
    /* test eax, eax */ /* 0x100820C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100820A6; /* 0x100820C8: je 0x100820a6 */
L_100820CA:
    PUSH32(esp, edi); /* 0x100820CA: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x100820CB: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100820D0: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100820D1: mov dword ptr [ebp - 4], esi */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x100820D4: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008214B; /* 0x100820D8: jne 0x1008214b */
L_100820DA:
    PUSH32(esp, edi); /* 0x100820DA: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x100820DB: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100820E0: pop ecx */
    edx = eax; /* 0x100820E1: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x100820E3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082101; /* 0x100820E6: je 0x10082101 */
L_100820E8:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x100820E8: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082101; /* 0x100820EB: je 0x10082101 */
L_100820ED:
    ecx = edx; /* 0x100820ED: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x100820EF: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x100820F2: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x100820F5: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x100820F5: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x100820F8: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10082106; /* 0x100820FF: jmp 0x10082106 */
L_10082101:
    eax = 0x100DF520u; /* 0x10082101: mov eax, 0x100df520 */
L_10082106:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x10082106: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082135; /* 0x1008210A: jne 0x10082135 */
L_1008210C:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008210C: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008212A; /* 0x1008210F: je 0x1008212a */
L_10082111:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10082111: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008212A; /* 0x10082114: je 0x1008212a */
L_10082116:
    eax = edx; /* 0x10082116: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10082118: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1008211B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x1008211E: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x1008211E: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10082121: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_1008212F; /* 0x10082128: jmp 0x1008212f */
L_1008212A:
    edx = 0x100DF520u; /* 0x1008212A: mov edx, 0x100df520 */
L_1008212F:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x1008212F: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008214B; /* 0x10082133: je 0x1008214b */
L_10082135:
    RECOMP_CALL(sub_1001177D); /* 0x10082135: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008213A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082140: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10082145: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x10082148: mov dword ptr [ebp - 0x1c], esi */
L_1008214B:
    /* test esi, esi */ /* 0x1008214B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082164; /* 0x1008214D: jne 0x10082164 */
L_1008214F:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008214F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10082152: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082155: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10082158: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10082159: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008215C: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008215F: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10082161: mov dword ptr [ebp - 0x1c], esi */
L_10082164:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10082164: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008217E); /* 0x1008216B: call 0x1008217e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10082170: mov eax, esi */
L_10082172:
    RECOMP_CALL(sub_1000EDC3); /* 0x10082172: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082177: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008217E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008217Eu);

L_1008217E:
    PUSH32(esp, edi); /* 0x1008217E: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x1008217F: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082184: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082185: ret  */
    RECOMP_REGS_OUT();
}

void sub_100821A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100821A4u);

L_100821A4:
    PUSH32(esp, ebp); /* 0x100821A4: push ebp */
    ebp = esp; /* 0x100821A5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100821A7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100821AA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100821AC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100821AF: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002EA80u); /* 0x100821B2: push 0x1002ea80 */
    RECOMP_CALL(sub_10082087); /* 0x100821B7: call 0x10082087 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100821BC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100821BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100821C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100821C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100821C1u);

L_100821C1:
    PUSH32(esp, 0xCu); /* 0x100821C1: push 0xc */
    PUSH32(esp, 0x10082248u); /* 0x100821C3: push 0x10082248 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100821C8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100821CD: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100821D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x100821D3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100821D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100821D8: setne al */
    /* test eax, eax */ /* 0x100821DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100821F4; /* 0x100821DD: jne 0x100821f4 */
L_100821DF:
    RECOMP_CALL(sub_1001177D); /* 0x100821DF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100821E4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100821EA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100821EF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10082233; /* 0x100821F2: jmp 0x10082233 */
L_100821F4:
    edi = MEM32(ebp + 0x14); /* 0x100821F4: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x100821F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082205; /* 0x100821F9: je 0x10082205 */
L_100821FB:
    /* cmp edi, 1 */ /* 0x100821FB: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082205; /* 0x100821FE: je 0x10082205 */
L_10082200:
    /* cmp edi, 2 */ /* 0x10082200: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100821DF; /* 0x10082203: jne 0x100821df */
L_10082205:
    PUSH32(esp, esi); /* 0x10082205: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10082206: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008220B: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1008220C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10082210: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082211: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082214: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10082217: push esi */
    RECOMP_CALL(sub_10082264); /* 0x10082218: call 0x10082264 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008221D: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10082220: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082222: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10082225: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008223F); /* 0x1008222C: call 0x1008223f */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10082231: mov eax, edi */
L_10082233:
    RECOMP_CALL(sub_1000EDC3); /* 0x10082233: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082238: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008223F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008223Fu);

L_1008223F:
    PUSH32(esp, esi); /* 0x1008223F: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10082240: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082245: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082246: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082264(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082264u);

L_10082264:
    PUSH32(esp, ebp); /* 0x10082264: push ebp */
    ebp = esp; /* 0x10082265: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10082267: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10082268: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008226B: push edi */
    eax = MEM32(esi + 0xC); /* 0x1008226C: mov eax, dword ptr [esi + 0xc] */
    /* test LO8(eax), 0x83u */ /* 0x1008226F: test al, 0x83 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082303; /* 0x10082271: je 0x10082303 */
L_10082277:
    edi = MEM32(ebp + 0x14); /* 0x10082277: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1008227A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082288; /* 0x1008227C: je 0x10082288 */
L_1008227E:
    /* cmp edi, 1 */ /* 0x1008227E: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082288; /* 0x10082281: je 0x10082288 */
L_10082283:
    /* cmp edi, 2 */ /* 0x10082283: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082303; /* 0x10082286: jne 0x10082303 */
L_10082288:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x10082288: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1008228B: mov dword ptr [esi + 0xc], eax */
    PUSH32(esp, ebx); /* 0x1008228E: push ebx */
    /* cmp edi, 1 */ /* 0x1008228F: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100822A9; /* 0x10082292: jne 0x100822a9 */
L_10082294:
    PUSH32(esp, esi); /* 0x10082294: push esi */
    RECOMP_CALL(sub_100823EC); /* 0x10082295: call 0x100823ec */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1008229A: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1008229D: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1008229F: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100822A2: pop ecx */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100822A3: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100822A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100822AF; /* 0x100822A7: jmp 0x100822af */
L_100822A9:
    eax = MEM32(ebp + 0x10); /* 0x100822A9: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x100822AC: mov ebx, dword ptr [ebp + 0xc] */
L_100822AF:
    PUSH32(esp, esi); /* 0x100822AF: push esi */
    MEM32(ebp + 0x8) = eax; /* 0x100822B0: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1001428F); /* 0x100822B3: call 0x1001428f */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x100822B8: mov eax, dword ptr [esi + 0xc] */
    ecx = POP32_VAL(esp); /* 0x100822BB: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x100822BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100822C8; /* 0x100822BE: jns 0x100822c8 */
L_100822C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x100822C0: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x100822C3: mov dword ptr [esi + 0xc], eax */
    goto L_100822DE; /* 0x100822C6: jmp 0x100822de */
L_100822C8:
    /* test LO8(eax), 1 */ /* 0x100822C8: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100822DE; /* 0x100822CA: je 0x100822de */
L_100822CC:
    /* test LO8(eax), 8 */ /* 0x100822CC: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100822DE; /* 0x100822CE: je 0x100822de */
L_100822D0:
    /* test eax, 0x400u */ /* 0x100822D0: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100822DE; /* 0x100822D5: jne 0x100822de */
L_100822D7:
    MEM32(esi + 0x18) = 0x200u; /* 0x100822D7: mov dword ptr [esi + 0x18], 0x200 */
L_100822DE:
    PUSH32(esp, edi); /* 0x100822DE: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100822DF: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100822E2: push ebx */
    PUSH32(esp, esi); /* 0x100822E3: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x100822E4: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100822E9: pop ecx */
    PUSH32(esp, eax); /* 0x100822EA: push eax */
    RECOMP_CALL(sub_100A18FC); /* 0x100822EB: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100822F0: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100822F3: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x100822F5: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100822F8: pop ebx */
    /* cmp eax, ecx */ /* 0x100822F9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100822FF; /* 0x100822FB: je 0x100822ff */
L_100822FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100822FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100822FF:
    eax = ecx; /* 0x100822FF: mov eax, ecx */
    goto L_10082311; /* 0x10082301: jmp 0x10082311 */
L_10082303:
    RECOMP_CALL(sub_1001177D); /* 0x10082303: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082308: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008230E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10082311:
    edi = POP32_VAL(esp); /* 0x10082311: pop edi */
    esi = POP32_VAL(esp); /* 0x10082312: pop esi */
    ebp = POP32_VAL(esp); /* 0x10082313: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082314: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082315(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082315u);

L_10082315:
    PUSH32(esp, ebp); /* 0x10082315: push ebp */
    ebp = esp; /* 0x10082316: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10082318: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082333; /* 0x1008231C: jne 0x10082333 */
L_1008231E:
    RECOMP_CALL(sub_1001177D); /* 0x1008231E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082323: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082329: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008232E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10082331: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082332: ret  */
L_10082333:
    eax = MEM32(ebp + 0xC); /* 0x10082333: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10082336: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008231E; /* 0x10082338: je 0x1008231e */
L_1008233A:
    PUSH32(esp, 0); /* 0x1008233A: push 0 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008233C: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x1008233F: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082341: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100821C1); /* 0x10082344: call 0x100821c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10082349: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008234C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008234D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008234E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008234Eu);

L_1008234E:
    PUSH32(esp, 0x10u); /* 0x1008234E: push 0x10 */
    PUSH32(esp, 0x100823D0u); /* 0x10082350: push 0x100823d0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082355: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008235A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = edi; /* 0x1008235C: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008235F: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082362: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10082364: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10082367: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082369: setne al */
    /* test eax, eax */ /* 0x1008236C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082387; /* 0x1008236E: jne 0x10082387 */
L_10082370:
    RECOMP_CALL(sub_1001177D); /* 0x10082370: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082375: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008237B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x10082380: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x10082383: mov eax, edx */
    goto L_100823B2; /* 0x10082385: jmp 0x100823b2 */
L_10082387:
    PUSH32(esp, esi); /* 0x10082387: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10082388: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008238D: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1008238E: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, esi); /* 0x10082391: push esi */
    RECOMP_CALL(sub_100823EC); /* 0x10082392: call 0x100823ec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082397: pop ecx */
    edi = eax; /* 0x10082398: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1008239A: mov dword ptr [ebp - 0x20], edi */
    ebx = edx; /* 0x1008239D: mov ebx, edx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1008239F: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100823A2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100823C1); /* 0x100823A9: call 0x100823c1 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100823AE: mov eax, edi */
    edx = ebx; /* 0x100823B0: mov edx, ebx */
L_100823B2:
    RECOMP_CALL(sub_1000EDC3); /* 0x100823B2: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100823B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100823C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100823C1u);

L_100823C1:
    PUSH32(esp, esi); /* 0x100823C1: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100823C2: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100823C7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100823C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100823EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100823ECu);

L_100823EC:
    PUSH32(esp, ebp); /* 0x100823EC: push ebp */
    ebp = esp; /* 0x100823ED: mov ebp, esp */
    eax = 0x1024u; /* 0x100823EF: mov eax, 0x1024 */
    RECOMP_CALL(sub_10011E68); /* 0x100823F4: call 0x10011e68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100DF7B8); /* 0x100823F9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100823FE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10082400: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10082403: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10082404: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10082407: push esi */
    PUSH32(esp, edi); /* 0x10082408: push edi */
    PUSH32(esp, ebx); /* 0x10082409: push ebx */
    RECOMP_CALL(sub_1001427C); /* 0x1008240A: call 0x1001427c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008240F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x10082411: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10082413: pop ecx */
    MEM32(ebp + (-0x1018)) = esi; /* 0x10082414: mov dword ptr [ebp - 0x1018], esi */
    /* cmp MEM32(ebx + 0x4), edi */ /* 0x1008241A: cmp dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10082422; /* 0x1008241D: jge 0x10082422 */
L_1008241F:
    MEM32(ebx + 0x4) = edi; /* 0x1008241F: mov dword ptr [ebx + 4], edi */
L_10082422:
    PUSH32(esp, 1); /* 0x10082422: push 1 */
    PUSH32(esp, edi); /* 0x10082424: push edi */
    PUSH32(esp, edi); /* 0x10082425: push edi */
    PUSH32(esp, esi); /* 0x10082426: push esi */
    RECOMP_CALL(sub_100A18FC); /* 0x10082427: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008242C: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1010)) = eax; /* 0x1008242F: mov dword ptr [ebp - 0x1010], eax */
    MEM32(ebp + (-0x100C)) = edx; /* 0x10082435: mov dword ptr [ebp - 0x100c], edx */
    /* cmp edx, edi */ /* 0x1008243B: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1008244F; /* 0x1008243D: jg 0x1008244f */
L_1008243F:
    if (CMP_L(_flag_a, _flag_b)) goto L_10082445; /* 0x1008243F: jl 0x10082445 */
L_10082441:
    /* cmp eax, edi */ /* 0x10082441: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008244F; /* 0x10082443: jae 0x1008244f */
L_10082445:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10082445: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x10082448: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100827B0; /* 0x1008244A: jmp 0x100827b0 */
L_1008244F:
    eax = esi; /* 0x1008244F: mov eax, esi */
    ecx = esi; /* 0x10082451: mov ecx, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10082453: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10082456: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10082459: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10082459: shl ecx, 6 */
    MEM32(ebp + (-0x1014)) = eax; /* 0x1008245C: mov dword ptr [ebp - 0x1014], eax */
    MEM32(ebp + (-0x1024)) = ecx; /* 0x10082462: mov dword ptr [ebp - 0x1024], ecx */
    esi = MEM32(eax * 4 + 0x100DF640); /* 0x10082468: mov esi, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi + ecx + 0x24)); /* 0x1008246F: mov al, byte ptr [esi + ecx + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x10082473: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (1u) _cf = (((LO8(eax)) >> 0) & 1u); /* 0x10082475: sar al, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(LO8(eax)) >> 1u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, (uint32_t)((int32_t)(int32_t)(int8_t)(LO8(eax)) >> 1u));
    /* test MEM32(ebx + 0xC), 0x108u */ /* 0x10082477: test dword ptr [ebx + 0xc], 0x108 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1005)) = (uint8_t)(LO8(eax)); /* 0x1008247E: mov byte ptr [ebp - 0x1005], al */
    eax = MEM32(ebp + (-0x1010)); /* 0x10082484: mov eax, dword ptr [ebp - 0x1010] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100824A9; /* 0x1008248A: jne 0x100824a9 */
L_1008248C:
    eax = MEM32(ebx + 0x4); /* 0x1008248C: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x1010)); /* 0x1008248F: mov ecx, dword ptr [ebp - 0x1010] */
    edi = MEM32(ebp + (-0x100C)); /* 0x10082495: mov edi, dword ptr [ebp - 0x100c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008249B: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1008249C: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1008249E: mov eax, ecx */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100824A0: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = edi; /* 0x100824A2: mov edx, edi */
    goto L_100827B0; /* 0x100824A4: jmp 0x100827b0 */
L_100824A9:
    edi = MEM32(ebx); /* 0x100824A9: mov edi, dword ptr [ebx] */
    esi = edi; /* 0x100824AB: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx + 0x8); /* 0x100824AD: sub esi, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    /* test MEM8(ebx + 0xC), 3 */ /* 0x100824B0: test byte ptr [ebx + 0xc], 3 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008264A; /* 0x100824B4: je 0x1008264a */
L_100824BA:
    /* cmp MEM8(ebp + (-0x1005)), 1 */ /* 0x100824BA: cmp byte ptr [ebp - 0x1005], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1005))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008260B; /* 0x100824C1: jne 0x1008260b */
L_100824C7:
    eax = MEM32(ebp + (-0x1014)); /* 0x100824C7: mov eax, dword ptr [ebp - 0x1014] */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x100824CD: mov edx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x1010)); /* 0x100824D4: mov eax, dword ptr [ebp - 0x1010] */
    /* cmp MEM32(edx + ecx + 0x30), 0 */ /* 0x100824DA: cmp dword ptr [edx + ecx + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edx + ecx + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x100C)); /* 0x100824DF: mov edx, dword ptr [ebp - 0x100c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008260B; /* 0x100824E5: je 0x1008260b */
L_100824EB:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x100824EB: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x100824EB: shr esi, 1 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x100824ED: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100827B0; /* 0x100824F1: je 0x100827b0 */
L_100824F7:
    edx = MEM32(ebp + (-0x1014)); /* 0x100824F7: mov edx, dword ptr [ebp - 0x1014] */
    ebx = MEM32(ebp + (-0x1018)); /* 0x100824FD: mov ebx, dword ptr [ebp - 0x1018] */
    PUSH32(esp, 0); /* 0x10082503: push 0 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x10082505: mov eax, dword ptr [edx*4 + 0x100df640] */
    PUSH32(esp, MEM32(ecx + eax + 0x2C)); /* 0x1008250C: push dword ptr [ecx + eax + 0x2c] */
    PUSH32(esp, MEM32(ecx + eax + 0x28)); /* 0x10082510: push dword ptr [ecx + eax + 0x28] */
    PUSH32(esp, ebx); /* 0x10082514: push ebx */
    RECOMP_CALL(sub_100A18FC); /* 0x10082515: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1008251A: mov edi, eax */
    MEM32(ebp + (-0x101C)) = edx; /* 0x1008251C: mov dword ptr [ebp - 0x101c], edx */
    eax = MEM32(ebp + (-0x1014)); /* 0x10082522: mov eax, dword ptr [ebp - 0x1014] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10082528: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1020)) = edi; /* 0x1008252B: mov dword ptr [ebp - 0x1020], edi */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x10082531: mov ecx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x1024)); /* 0x10082538: mov eax, dword ptr [ebp - 0x1024] */
    /* cmp edi, MEM32(ecx + eax + 0x28) */ /* 0x1008253E: cmp edi, dword ptr [ecx + eax + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082445; /* 0x10082542: jne 0x10082445 */
L_10082548:
    /* cmp edx, MEM32(ecx + eax + 0x2C) */ /* 0x10082548: cmp edx, dword ptr [ecx + eax + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082445; /* 0x1008254C: jne 0x10082445 */
L_10082552:
    PUSH32(esp, 0); /* 0x10082552: push 0 */
    edx = ebp + (-0x1018); /* 0x10082554: lea edx, [ebp - 0x1018] */
    PUSH32(esp, edx); /* 0x1008255A: push edx */
    PUSH32(esp, 0x1000u); /* 0x1008255B: push 0x1000 */
    edx = ebp + (-0x1004); /* 0x10082560: lea edx, [ebp - 0x1004] */
    PUSH32(esp, edx); /* 0x10082566: push edx */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x10082567: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E50FC)); /* 0x1008256A: call dword ptr [0x100e50fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10082570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082445; /* 0x10082572: je 0x10082445 */
L_10082578:
    edi = MEM32(ebp + (-0x100C)); /* 0x10082578: mov edi, dword ptr [ebp - 0x100c] */
    ecx = MEM32(ebp + (-0x1010)); /* 0x1008257E: mov ecx, dword ptr [ebp - 0x1010] */
    PUSH32(esp, 0); /* 0x10082584: push 0 */
    PUSH32(esp, edi); /* 0x10082586: push edi */
    PUSH32(esp, ecx); /* 0x10082587: push ecx */
    PUSH32(esp, ebx); /* 0x10082588: push ebx */
    RECOMP_CALL(sub_100A18FC); /* 0x10082589: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008258E: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x10082591: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100825A3; /* 0x10082593: jg 0x100825a3 */
L_10082595:
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10082445; /* 0x10082595: jl 0x10082445 */
L_1008259B:
    /* test eax, eax */ /* 0x1008259B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_10082445; /* 0x1008259D: jb 0x10082445 */
L_100825A3:
    eax = MEM32(ebp + (-0x1018)); /* 0x100825A3: mov eax, dword ptr [ebp - 0x1018] */
    /* cmp esi, eax */ /* 0x100825A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10082445; /* 0x100825AB: ja 0x10082445 */
L_100825B1:
    ecx = ebp + (-0x1004); /* 0x100825B1: lea ecx, [ebp - 0x1004] */
    /* test esi, esi */ /* 0x100825B7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100825EE; /* 0x100825B9: je 0x100825ee */
L_100825BB:
    edx = ecx; /* 0x100825BB: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100825BD: add edx, eax */
    _flag_k = FK_ADD;
L_100825BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100825BF: dec esi */
    _flag_k = FK_DEC;
    /* cmp ecx, edx */ /* 0x100825C0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100825EE; /* 0x100825C2: jae 0x100825ee */
L_100825C4:
    SET_LO8(eax, MEM8(ecx)); /* 0x100825C4: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0xDu */ /* 0x100825C6: cmp al, 0xd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100825DD; /* 0x100825C8: jne 0x100825dd */
L_100825CA:
    eax = edx + (-0x1); /* 0x100825CA: lea eax, [edx - 1] */
    /* cmp ecx, eax */ /* 0x100825CD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100825E9; /* 0x100825CF: jae 0x100825e9 */
L_100825D1:
    eax = ecx + 0x1; /* 0x100825D1: lea eax, [ecx + 1] */
    /* cmp MEM8(eax), 0xAu */ /* 0x100825D4: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100825E9; /* 0x100825D7: jne 0x100825e9 */
L_100825D9:
    ecx = eax; /* 0x100825D9: mov ecx, eax */
    goto L_100825E9; /* 0x100825DB: jmp 0x100825e9 */
L_100825DD:
    eax = (uint32_t)LO8(eax); /* 0x100825DD: movzx eax, al */
    eax = (int32_t)(int8_t)MEM8(eax + 0x100E1768); /* 0x100825E0: movsx eax, byte ptr [eax + 0x100e1768] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100825E7: add ecx, eax */
    _flag_k = FK_ADD;
L_100825E9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100825E9: inc ecx */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x100825EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100825BF; /* 0x100825EC: jne 0x100825bf */
L_100825EE:
    eax = ebp + (-0x1004); /* 0x100825EE: lea eax, [ebp - 0x1004] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100825F4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100825F6: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1020)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x1020)); /* 0x100825F8: add ecx, dword ptr [ebp - 0x1020] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x100825FE: mov eax, ecx */
    { uint32_t _aa = edx, _ab = MEM32(ebp + (-0x101C)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10082600: adc edx, dword ptr [ebp - 0x101c] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100827B0; /* 0x10082606: jmp 0x100827b0 */
L_1008260B:
    edx = MEM32(ebp + (-0x1014)); /* 0x1008260B: mov edx, dword ptr [ebp - 0x1014] */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x10082611: mov eax, dword ptr [edx*4 + 0x100df640] */
    edx = MEM32(ebp + (-0x100C)); /* 0x10082618: mov edx, dword ptr [ebp - 0x100c] */
    /* test MEM8(ecx + eax + 0x4), 0x80u */ /* 0x1008261E: test byte ptr [ecx + eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x1010)); /* 0x10082623: mov eax, dword ptr [ebp - 0x1010] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008263B; /* 0x10082629: je 0x1008263b */
L_1008262B:
    ecx = MEM32(ebx + 0x8); /* 0x1008262B: mov ecx, dword ptr [ebx + 8] */
    goto L_10082637; /* 0x1008262E: jmp 0x10082637 */
L_10082630:
    /* cmp MEM8(ecx), 0xAu */ /* 0x10082630: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082636; /* 0x10082633: jne 0x10082636 */
L_10082635:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10082635: inc esi */
    _flag_k = FK_INC;
L_10082636:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10082636: inc ecx */
    _flag_k = FK_INC;
L_10082637:
    /* cmp ecx, edi */ /* 0x10082637: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10082630; /* 0x10082639: jb 0x10082630 */
L_1008263B:
    ecx = eax; /* 0x1008263B: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1008263D: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082660; /* 0x1008263F: jne 0x10082660 */
L_10082641:
    eax = esi; /* 0x10082641: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10082643: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100827B0; /* 0x10082645: jmp 0x100827b0 */
L_1008264A:
    /* test MEM8(ebx + 0xC), 0x80u */ /* 0x1008264A: test byte ptr [ebx + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008263B; /* 0x1008264E: jne 0x1008263b */
L_10082650:
    RECOMP_CALL(sub_1001177D); /* 0x10082650: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082655: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10082445; /* 0x1008265B: jmp 0x10082445 */
L_10082660:
    /* test MEM8(ebx + 0xC), 1 */ /* 0x10082660: test byte ptr [ebx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008279B; /* 0x10082664: je 0x1008279b */
L_1008266A:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x1008266A: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082677; /* 0x1008266E: jne 0x10082677 */
L_10082670:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10082670: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008279B; /* 0x10082672: jmp 0x1008279b */
L_10082677:
    edx = MEM32(ebp + (-0x1014)); /* 0x10082677: mov edx, dword ptr [ebp - 0x1014] */
    ecx = MEM32(ebp + (-0x1024)); /* 0x1008267D: mov ecx, dword ptr [ebp - 0x1024] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx + 0x8); /* 0x10082683: sub edi, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x4); /* 0x10082686: add edi, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x10082689: mov eax, dword ptr [edx*4 + 0x100df640] */
    edx = MEM32(ebp + (-0x100C)); /* 0x10082690: mov edx, dword ptr [ebp - 0x100c] */
    /* test MEM8(ecx + eax + 0x4), 0x80u */ /* 0x10082696: test byte ptr [ecx + eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x1010)); /* 0x1008269B: mov eax, dword ptr [ebp - 0x1010] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082785; /* 0x100826A1: je 0x10082785 */
L_100826A7:
    PUSH32(esp, 2); /* 0x100826A7: push 2 */
    PUSH32(esp, 0); /* 0x100826A9: push 0 */
    PUSH32(esp, 0); /* 0x100826AB: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x100826AD: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_100A18FC); /* 0x100826B3: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1010)); /* 0x100826B8: mov ecx, dword ptr [ebp - 0x1010] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100826BE: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x101C)) = edx; /* 0x100826C1: mov dword ptr [ebp - 0x101c], edx */
    edx = MEM32(ebp + (-0x100C)); /* 0x100826C7: mov edx, dword ptr [ebp - 0x100c] */
    /* cmp eax, ecx */ /* 0x100826CD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008271D; /* 0x100826CF: jne 0x1008271d */
L_100826D1:
    /* cmp MEM32(ebp + (-0x101C)), edx */ /* 0x100826D1: cmp dword ptr [ebp - 0x101c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x101C))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008271D; /* 0x100826D7: jne 0x1008271d */
L_100826D9:
    eax = MEM32(ebx + 0x8); /* 0x100826D9: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x101C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x101C)) = MEM32(ebp + (-0x101C)) & 0; /* 0x100826DC: and dword ptr [ebp - 0x101c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100826E3: add eax, edi */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x100826E5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x8); /* 0x100826E7: sub ecx, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x100826EA: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100826ED: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100826EF: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100826F1: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1020)) = eax; /* 0x100826F3: mov dword ptr [ebp - 0x1020], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082714; /* 0x100826F9: jbe 0x10082714 */
L_100826FB:
    eax = MEM32(ebx + 0x8); /* 0x100826FB: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebp + (-0x101C)); /* 0x100826FE: mov ecx, dword ptr [ebp - 0x101c] */
L_10082704:
    /* cmp MEM8(eax), 0xAu */ /* 0x10082704: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008270A; /* 0x10082707: jne 0x1008270a */
L_10082709:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10082709: inc edi */
    _flag_k = FK_INC;
L_1008270A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008270A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008270B: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + (-0x1020)) */ /* 0x1008270C: cmp ecx, dword ptr [ebp - 0x1020] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1020)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10082704; /* 0x10082712: jb 0x10082704 */
L_10082714:
    /* test MEM32(ebx + 0xC), 0x2000u */ /* 0x10082714: test dword ptr [ebx + 0xc], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008277C; /* 0x1008271B: jmp 0x1008277c */
L_1008271D:
    PUSH32(esp, 0); /* 0x1008271D: push 0 */
    PUSH32(esp, edx); /* 0x1008271F: push edx */
    PUSH32(esp, ecx); /* 0x10082720: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x1018))); /* 0x10082721: push dword ptr [ebp - 0x1018] */
    RECOMP_CALL(sub_100A18FC); /* 0x10082727: call 0x100a18fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008272C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1008272F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10082741; /* 0x10082731: jg 0x10082741 */
L_10082733:
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10082445; /* 0x10082733: jl 0x10082445 */
L_10082739:
    /* test eax, eax */ /* 0x10082739: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_10082445; /* 0x1008273B: jb 0x10082445 */
L_10082741:
    eax = 0x200u; /* 0x10082741: mov eax, 0x200 */
    /* cmp edi, eax */ /* 0x10082746: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008275B; /* 0x10082748: ja 0x1008275b */
L_1008274A:
    /* test MEM8(ebx + 0xC), 8 */ /* 0x1008274A: test byte ptr [ebx + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008275B; /* 0x1008274E: je 0x1008275b */
L_10082750:
    /* test MEM32(ebx + 0xC), 0x400u */ /* 0x10082750: test dword ptr [ebx + 0xc], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x10082757: mov edi, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008275E; /* 0x10082759: je 0x1008275e */
L_1008275B:
    edi = MEM32(ebx + 0x18); /* 0x1008275B: mov edi, dword ptr [ebx + 0x18] */
L_1008275E:
    eax = MEM32(ebp + (-0x1014)); /* 0x1008275E: mov eax, dword ptr [ebp - 0x1014] */
    ecx = MEM32(ebp + (-0x1024)); /* 0x10082764: mov ecx, dword ptr [ebp - 0x1024] */
    edx = MEM32(ebp + (-0x100C)); /* 0x1008276A: mov edx, dword ptr [ebp - 0x100c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10082770: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(ecx + eax + 0x4), 4 */ /* 0x10082777: test byte ptr [ecx + eax + 4], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1008277C:
    eax = MEM32(ebp + (-0x1010)); /* 0x1008277C: mov eax, dword ptr [ebp - 0x1010] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10082785; /* 0x10082782: je 0x10082785 */
L_10082784:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10082784: inc edi */
    _flag_k = FK_INC;
L_10082785:
    /* cmp MEM8(ebp + (-0x1005)), 1 */ /* 0x10082785: cmp byte ptr [ebp - 0x1005], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1005))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082790; /* 0x1008278C: jne 0x10082790 */
L_1008278E:
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1008278E: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1008278E: shr edi, 1 */
L_10082790:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10082790: sub eax, edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10082792: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x100C)) = edx; /* 0x10082795: mov dword ptr [ebp - 0x100c], edx */
L_1008279B:
    /* cmp MEM8(ebp + (-0x1005)), 1 */ /* 0x1008279B: cmp byte ptr [ebp - 0x1005], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1005))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100827A6; /* 0x100827A2: jne 0x100827a6 */
L_100827A4:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x100827A4: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x100827A4: shr esi, 1 */
L_100827A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100827A6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100827A8: add eax, esi */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = MEM32(ebp + (-0x100C)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100827AA: adc edx, dword ptr [ebp - 0x100c] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100827B0:
    ecx = MEM32(ebp + (-0x4)); /* 0x100827B0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100827B3: pop edi */
    esi = POP32_VAL(esp); /* 0x100827B4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100827B5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100827B7: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100827B8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100827BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100827BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100827C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100827C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100827C1u);

L_100827C1:
    PUSH32(esp, ebp); /* 0x100827C1: push ebp */
    ebp = esp; /* 0x100827C2: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100827C4: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100827C7: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100827C8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100827CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100827CE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084879); /* 0x100827D1: call 0x10084879 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100827D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100827D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100827DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100827DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100827DBu);

L_100827DB:
    PUSH32(esp, ebp); /* 0x100827DB: push ebp */
    ebp = esp; /* 0x100827DC: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100827DE: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100827E1: push eax */
    PUSH32(esp, 0); /* 0x100827E2: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100827E4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100827E7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100848B4); /* 0x100827EA: call 0x100848b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100827EF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100827F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100827F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100827F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100827F4u);

L_100827F4:
    PUSH32(esp, ebp); /* 0x100827F4: push ebp */
    ebp = esp; /* 0x100827F5: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100827F7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100827FA: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100827FB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100827FE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082801: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100848B4); /* 0x10082804: call 0x100848b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10082809: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008280C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008280D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008280E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008280Eu);

L_1008280E:
    PUSH32(esp, ebp); /* 0x1008280E: push ebp */
    ebp = esp; /* 0x1008280F: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10082811: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10082814: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082815: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082818: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008281B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100848D2); /* 0x1008281E: call 0x100848d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10082823: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082826: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082827: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082828u);

L_10082828:
    PUSH32(esp, 0xCu); /* 0x10082828: push 0xc */
    PUSH32(esp, 0x100828C0u); /* 0x1008282A: push 0x100828c0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008282F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10082834: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10082836: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082839: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1008283B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1008283E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082840: setne al */
    /* test eax, eax */ /* 0x10082843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008285C; /* 0x10082845: jne 0x1008285c */
L_10082847:
    RECOMP_CALL(sub_1001177D); /* 0x10082847: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008284C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082852: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10082857: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100828A8; /* 0x1008285A: jmp 0x100828a8 */
L_1008285C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008285C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1008285E: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082861: setne al */
    /* test eax, eax */ /* 0x10082864: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082847; /* 0x10082866: je 0x10082847 */
L_10082868:
    MEM32(ebp + 0x8) = edi; /* 0x10082868: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, edi); /* 0x1008286B: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x1008286C: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082871: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10082872: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x10082875: push edi */
    RECOMP_CALL(sub_10020477); /* 0x10082876: call 0x10020477 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008287B: mov esi, eax */
    eax = ebp + 0x10; /* 0x1008287D: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082880: push eax */
    PUSH32(esp, ebx); /* 0x10082881: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082882: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10082885: push edi */
    RECOMP_CALL(sub_1001D315); /* 0x10082886: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1008288B: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1008288D: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, edi); /* 0x10082890: push edi */
    PUSH32(esp, esi); /* 0x10082891: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x10082892: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10082897: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008289A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100828B4); /* 0x100828A1: call 0x100828b4 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x100828A6: mov eax, ebx */
L_100828A8:
    RECOMP_CALL(sub_1000EDC3); /* 0x100828A8: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100828AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100828B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100828B4u);

L_100828B4:
    PUSH32(esp, edi); /* 0x100828B4: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x100828B5: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100828BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100828BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100828DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100828DCu);

L_100828DC:
    PUSH32(esp, ebp); /* 0x100828DC: push ebp */
    ebp = esp; /* 0x100828DD: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100828DF: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100828E2: push eax */
    PUSH32(esp, 0); /* 0x100828E3: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100828E5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100828E8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100848D2); /* 0x100828EB: call 0x100848d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100828F0: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100828F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100828F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100828F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100828F5u);

L_100828F5:
    PUSH32(esp, ebp); /* 0x100828F5: push ebp */
    ebp = esp; /* 0x100828F6: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100828F8: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100828FB: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100828FC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100828FF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082902: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10082905: push 0x1003320e */
    RECOMP_CALL(sub_1008298C); /* 0x1008290A: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008290F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082913: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082914(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082914u);

L_10082914:
    PUSH32(esp, ebp); /* 0x10082914: push ebp */
    ebp = esp; /* 0x10082915: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10082917: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1008291A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008291B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008291E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082921: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x10082924: push 0x1001e5dd */
    RECOMP_CALL(sub_1008298C); /* 0x10082929: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008292E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082931: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082932: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082933(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082933u);

L_10082933:
    PUSH32(esp, ebp); /* 0x10082933: push ebp */
    ebp = esp; /* 0x10082934: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082936: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082939: push eax */
    PUSH32(esp, 0); /* 0x1008293A: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008293C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008293F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10082942: push 0x1003320e */
    RECOMP_CALL(sub_1008298C); /* 0x10082947: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008294C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008294F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082950: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082951(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082951u);

L_10082951:
    PUSH32(esp, ebp); /* 0x10082951: push ebp */
    ebp = esp; /* 0x10082952: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10082954: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10082957: push eax */
    PUSH32(esp, 0); /* 0x10082958: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008295A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008295D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x10082960: push 0x1001e5dd */
    RECOMP_CALL(sub_1008298C); /* 0x10082965: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008296A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008296D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008296E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008296F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008296Fu);

L_1008296F:
    PUSH32(esp, ebp); /* 0x1008296F: push ebp */
    ebp = esp; /* 0x10082970: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082972: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10082975: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082977: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008297A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x1008297D: push 0x1003320e */
    RECOMP_CALL(sub_1008298C); /* 0x10082982: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082987: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008298A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008298B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008298C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008298Cu);

L_1008298C:
    PUSH32(esp, 0xCu); /* 0x1008298C: push 0xc */
    PUSH32(esp, 0x10082A10u); /* 0x1008298E: push 0x10082a10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082993: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10082998: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008299C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x1008299E: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100829A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100829A3: setne al */
    /* test eax, eax */ /* 0x100829A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100829BF; /* 0x100829A8: jne 0x100829bf */
L_100829AA:
    RECOMP_CALL(sub_1001177D); /* 0x100829AA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100829AF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100829B5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100829BA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100829F9; /* 0x100829BD: jmp 0x100829f9 */
L_100829BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100829BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100829C1: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100829C4: setne al */
    /* test eax, eax */ /* 0x100829C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100829AA; /* 0x100829C9: je 0x100829aa */
L_100829CB:
    PUSH32(esp, esi); /* 0x100829CB: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x100829CC: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100829D1: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100829D2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100829D6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100829D9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100829DC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100829DF: push esi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x100829E0: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100829E3: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100829E6: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100829E8: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100829EB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10082A05); /* 0x100829F2: call 0x10082a05 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100829F7: mov eax, edi */
L_100829F9:
    RECOMP_CALL(sub_1000EDC3); /* 0x100829F9: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100829FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082A05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082A05u);

L_10082A05:
    PUSH32(esp, esi); /* 0x10082A05: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10082A06: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082A0B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082A0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082A2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082A2Cu);

L_10082A2C:
    PUSH32(esp, ebp); /* 0x10082A2C: push ebp */
    ebp = esp; /* 0x10082A2D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10082A2F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10082A32: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082A34: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082A37: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x10082A3A: push 0x1001e5dd */
    RECOMP_CALL(sub_1008298C); /* 0x10082A3F: call 0x1008298c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10082A44: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082A47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082A48: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082A49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082A49u);

L_10082A49:
    PUSH32(esp, 0x18u); /* 0x10082A49: push 0x18 */
    PUSH32(esp, 0x10082C58u); /* 0x10082A4B: push 0x10082c58 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082A50: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10082A55: mov ecx, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10082A58: mov esi, ecx */
    edi = ecx; /* 0x10082A5A: mov edi, ecx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082A5C: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082A5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x10082A61: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082A63: setne al */
    /* test eax, eax */ /* 0x10082A66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082A81; /* 0x10082A68: jne 0x10082a81 */
L_10082A6A:
    RECOMP_CALL(sub_1001177D); /* 0x10082A6A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082A6F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082A75: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10082A7A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082A7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10082C39; /* 0x10082A7C: jmp 0x10082c39 */
L_10082A81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082A81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x10082A83: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10082A86: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10082A88: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10082A6A; /* 0x10082A8A: je 0x10082a6a */
L_10082A8C:
    RECOMP_CALL(sub_100142B5); /* 0x10082A8C: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082A91: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10082A92: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10082A94: push ebx */
    RECOMP_CALL(sub_100142FC); /* 0x10082A95: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082A9A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10082A9B: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10082A9C: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_100142B5); /* 0x10082A9F: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x10082AA4: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082B1A; /* 0x10082AA8: jne 0x10082b1a */
L_10082AAA:
    PUSH32(esp, eax); /* 0x10082AAA: push eax */
    RECOMP_CALL(sub_1001427C); /* 0x10082AAB: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082AB0: pop ecx */
    edx = eax; /* 0x10082AB1: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10082AB3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082AD1; /* 0x10082AB6: je 0x10082ad1 */
L_10082AB8:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10082AB8: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082AD1; /* 0x10082ABB: je 0x10082ad1 */
L_10082ABD:
    ecx = edx; /* 0x10082ABD: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10082ABF: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x10082AC2: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x10082AC5: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x10082AC5: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x10082AC8: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10082AD6; /* 0x10082ACF: jmp 0x10082ad6 */
L_10082AD1:
    eax = 0x100DF520u; /* 0x10082AD1: mov eax, 0x100df520 */
L_10082AD6:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x10082AD6: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082B05; /* 0x10082ADA: jne 0x10082b05 */
L_10082ADC:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10082ADC: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082AFA; /* 0x10082ADF: je 0x10082afa */
L_10082AE1:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10082AE1: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082AFA; /* 0x10082AE4: je 0x10082afa */
L_10082AE6:
    eax = edx; /* 0x10082AE6: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10082AE8: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10082AEB: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10082AEE: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10082AEE: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10082AF1: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_10082AFF; /* 0x10082AF8: jmp 0x10082aff */
L_10082AFA:
    edx = 0x100DF520u; /* 0x10082AFA: mov edx, 0x100df520 */
L_10082AFF:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x10082AFF: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082B1A; /* 0x10082B03: je 0x10082b1a */
L_10082B05:
    RECOMP_CALL(sub_1001177D); /* 0x10082B05: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082B0A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082B10: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x10082B15: mov edi, ebx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082B17: mov dword ptr [ebp - 0x1c], edi */
L_10082B1A:
    /* test edi, edi */ /* 0x10082B1A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082C2B; /* 0x10082B1C: je 0x10082c2b */
L_10082B22:
    RECOMP_CALL(sub_100142B5); /* 0x10082B22: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x10082B27: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10082B3B; /* 0x10082B2A: js 0x10082b3b */
L_10082B2C:
    RECOMP_CALL(sub_100142B5); /* 0x10082B2C: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x10082B31: mov ecx, dword ptr [eax] */
    edx = (uint32_t)MEM8(ecx); /* 0x10082B33: movzx edx, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10082B36: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x10082B37: mov dword ptr [eax], ecx */
    goto L_10082B49; /* 0x10082B39: jmp 0x10082b49 */
L_10082B3B:
    RECOMP_CALL(sub_100142B5); /* 0x10082B3B: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082B40: push eax */
    RECOMP_CALL(sub_10014C47); /* 0x10082B41: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082B46: pop ecx */
    edx = eax; /* 0x10082B47: mov edx, eax */
L_10082B49:
    MEM32(ebp + (-0x20)) = edx; /* 0x10082B49: mov dword ptr [ebp - 0x20], edx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10082B4C: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082B5F; /* 0x10082B4F: jne 0x10082b5f */
L_10082B51:
    edi = ebx; /* 0x10082B51: mov edi, ebx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082B53: mov dword ptr [ebp - 0x1c], edi */
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x10082B56: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082C2B; /* 0x10082B59: jne 0x10082c2b */
L_10082B5F:
    eax = MEM32(ebp + 0xC); /* 0x10082B5F: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10082B62: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10082BAB; /* 0x10082B65: jne 0x10082bab */
L_10082B67:
    /* cmp edx, 0xAu */ /* 0x10082B67: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082C29; /* 0x10082B6A: je 0x10082c29 */
L_10082B70:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10082B70: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082C29; /* 0x10082B73: je 0x10082c29 */
L_10082B79:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x10082B79: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10082B7B: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = esi; /* 0x10082B7C: mov dword ptr [ebp - 0x28], esi */
    RECOMP_CALL(sub_100142B5); /* 0x10082B7F: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x10082B84: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10082B98; /* 0x10082B87: js 0x10082b98 */
L_10082B89:
    RECOMP_CALL(sub_100142B5); /* 0x10082B89: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x10082B8E: mov ecx, dword ptr [eax] */
    edx = (uint32_t)MEM8(ecx); /* 0x10082B90: movzx edx, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10082B93: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x10082B94: mov dword ptr [eax], ecx */
    goto L_10082BA6; /* 0x10082B96: jmp 0x10082ba6 */
L_10082B98:
    RECOMP_CALL(sub_100142B5); /* 0x10082B98: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082B9D: push eax */
    RECOMP_CALL(sub_10014C47); /* 0x10082B9E: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082BA3: pop ecx */
    edx = eax; /* 0x10082BA4: mov edx, eax */
L_10082BA6:
    MEM32(ebp + (-0x20)) = edx; /* 0x10082BA6: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    goto L_10082B67; /* 0x10082BA9: jmp 0x10082b67 */
L_10082BAB:
    MEM32(ebp + (-0x24)) = eax; /* 0x10082BAB: mov dword ptr [ebp - 0x24], eax */
L_10082BAE:
    /* cmp edx, 0xAu */ /* 0x10082BAE: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082BF8; /* 0x10082BB1: je 0x10082bf8 */
L_10082BB3:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10082BB3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10082BF8; /* 0x10082BB6: je 0x10082bf8 */
L_10082BB8:
    /* test eax, eax */ /* 0x10082BB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082BC9; /* 0x10082BBA: je 0x10082bc9 */
L_10082BBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10082BBC: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x10082BBD: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x10082BC0: mov dword ptr [ebp - 0x24], eax */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x10082BC3: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10082BC5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = esi; /* 0x10082BC6: mov dword ptr [ebp - 0x28], esi */
L_10082BC9:
    RECOMP_CALL(sub_100142B5); /* 0x10082BC9: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x10082BCE: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10082BE2; /* 0x10082BD1: js 0x10082be2 */
L_10082BD3:
    RECOMP_CALL(sub_100142B5); /* 0x10082BD3: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x10082BD8: mov ecx, dword ptr [eax] */
    edx = (uint32_t)MEM8(ecx); /* 0x10082BDA: movzx edx, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10082BDD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x10082BDE: mov dword ptr [eax], ecx */
    goto L_10082BF0; /* 0x10082BE0: jmp 0x10082bf0 */
L_10082BE2:
    RECOMP_CALL(sub_100142B5); /* 0x10082BE2: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082BE7: push eax */
    RECOMP_CALL(sub_10014C47); /* 0x10082BE8: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082BED: pop ecx */
    edx = eax; /* 0x10082BEE: mov edx, eax */
L_10082BF0:
    MEM32(ebp + (-0x20)) = edx; /* 0x10082BF0: mov dword ptr [ebp - 0x20], edx */
    eax = MEM32(ebp + 0xC); /* 0x10082BF3: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_10082BAE; /* 0x10082BF6: jmp 0x10082bae */
L_10082BF8:
    /* test eax, eax */ /* 0x10082BF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082C29; /* 0x10082BFA: jne 0x10082c29 */
L_10082BFC:
    eax = MEM32(ebp + 0x8); /* 0x10082BFC: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10082BFF: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_1001177D); /* 0x10082C01: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10082C06: mov dword ptr [eax], 0x22 */
    RECOMP_CALL(sub_100A4670); /* 0x10082C0C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10082C11: push -2 */
    eax = ebp + (-0x10); /* 0x10082C13: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10082C16: push eax */
    PUSH32(esp, 0x100DF7B8u); /* 0x10082C17: push 0x100df7b8 */
    RECOMP_CALL(sub_100321EE); /* 0x10082C1C: call 0x100321ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082C21: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10082A7A; /* 0x10082C24: jmp 0x10082a7a */
L_10082C29:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x10082C29: mov byte ptr [esi], bl */
L_10082C2B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10082C2B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10082C44); /* 0x10082C32: call 0x10082c44 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10082C37: mov eax, edi */
L_10082C39:
    RECOMP_CALL(sub_1000EDC3); /* 0x10082C39: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082C3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082C44u);

L_10082C44:
    RECOMP_CALL(sub_100142B5); /* 0x10082C44: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10082C49: push eax */
    PUSH32(esp, ebx); /* 0x10082C4A: push ebx */
    RECOMP_CALL(sub_10020611); /* 0x10082C4B: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082C50: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10082C51: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082C52: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082C74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082C74u);

L_10082C74:
    PUSH32(esp, ebp); /* 0x10082C74: push ebp */
    ebp = esp; /* 0x10082C75: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10082C77: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10082C79: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082C7B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10082A49); /* 0x10082C7E: call 0x10082a49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082C83: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082C86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082C87: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082C88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082C88u);

L_10082C88:
    PUSH32(esp, ebp); /* 0x10082C88: push ebp */
    ebp = esp; /* 0x10082C89: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10082C8B: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10082C8D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10082C90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10082A49); /* 0x10082C93: call 0x10082a49 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10082C98: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10082C9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082C9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10082C9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10082C9Du);

L_10082C9D:
    PUSH32(esp, 0x18u); /* 0x10082C9D: push 0x18 */
    PUSH32(esp, 0x10082D58u); /* 0x10082C9F: push 0x10082d58 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10082CA4: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x10082CA9: push 4 */
    edi = POP32_VAL(esp); /* 0x10082CAB: pop edi */
    ebx = ebp + (-0x20); /* 0x10082CAC: lea ebx, [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10082CAF: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10082CB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10082CB5: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10082CB8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10082CBA: setne al */
    /* test eax, eax */ /* 0x10082CBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082CD6; /* 0x10082CBF: jne 0x10082cd6 */
L_10082CC1:
    RECOMP_CALL(sub_1001177D); /* 0x10082CC1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10082CC6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10082CCC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10082CD1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10082D3D; /* 0x10082CD4: jmp 0x10082d3d */
L_10082CD6:
    MEM32(ebp + 0x8) = esi; /* 0x10082CD6: mov dword ptr [ebp + 8], esi */
    PUSH32(esp, esi); /* 0x10082CD9: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10082CDA: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082CDF: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10082CE0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10082CE4:
    eax = edi; /* 0x10082CE4: mov eax, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10082CE6: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = edi; /* 0x10082CE7: mov dword ptr [ebp - 0x24], edi */
    /* test eax, eax */ /* 0x10082CEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10082D0E; /* 0x10082CEC: je 0x10082d0e */
L_10082CEE:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x10082CEE: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10082CFD; /* 0x10082CF1: js 0x10082cfd */
L_10082CF3:
    eax = MEM32(esi); /* 0x10082CF3: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM8(eax); /* 0x10082CF5: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10082CF8: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x10082CF9: mov dword ptr [esi], eax */
    goto L_10082D06; /* 0x10082CFB: jmp 0x10082d06 */
L_10082CFD:
    PUSH32(esp, esi); /* 0x10082CFD: push esi */
    RECOMP_CALL(sub_10014C47); /* 0x10082CFE: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082D03: pop ecx */
    ecx = eax; /* 0x10082D04: mov ecx, eax */
L_10082D06:
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x10082D06: mov byte ptr [ebx], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10082D08: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = ebx; /* 0x10082D09: mov dword ptr [ebp - 0x28], ebx */
    RECOMP_BACKEDGE();
    goto L_10082CE4; /* 0x10082D0C: jmp 0x10082ce4 */
L_10082D0E:
    PUSH32(esp, esi); /* 0x10082D0E: push esi */
    RECOMP_CALL(sub_10081451); /* 0x10082D0F: call 0x10081451 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082D14: pop ecx */
    /* test eax, eax */ /* 0x10082D15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082D29; /* 0x10082D17: jne 0x10082d29 */
L_10082D19:
    PUSH32(esp, esi); /* 0x10082D19: push esi */
    RECOMP_CALL(sub_10081477); /* 0x10082D1A: call 0x10081477 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10082D1F: pop ecx */
    /* test eax, eax */ /* 0x10082D20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10082D29; /* 0x10082D22: jne 0x10082d29 */
L_10082D24:
    edi = MEM32(ebp + (-0x20)); /* 0x10082D24: mov edi, dword ptr [ebp - 0x20] */
    goto L_10082D2C; /* 0x10082D27: jmp 0x10082d2c */
L_10082D29:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10082D29: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10082D2C:
    MEM32(ebp + (-0x1C)) = edi; /* 0x10082D2C: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10082D2F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10082D49); /* 0x10082D36: call 0x10082d49 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10082D3B: mov eax, edi */
L_10082D3D:
    RECOMP_CALL(sub_1000EDC3); /* 0x10082D3D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10082D42: ret  */
    RECOMP_REGS_OUT();
}
