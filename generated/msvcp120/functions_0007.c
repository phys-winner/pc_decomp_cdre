#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1100BC58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BC58u);

L_1100BC58:
    PUSH32(esp, ebp); /* 0x1100BC58: push ebp */
    ebp = esp; /* 0x1100BC59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1100BC5B: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100BC5E: push esi */
    PUSH32(esp, edi); /* 0x1100BC5F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100BC60: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100BC63: mov esi, ecx */
    /* test edi, edi */ /* 0x1100BC65: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BCD1; /* 0x1100BC67: je 0x1100bcd1 */
L_1100BC69:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100BC69: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100BC94; /* 0x1100BC6D: jne 0x1100bc94 */
L_1100BC6F:
    eax = ebp + (-0x4); /* 0x1100BC6F: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x1100BC72: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x1100BC79: push eax */
    ecx = ebp + (-0x1C); /* 0x1100BC7A: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BC7D: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x1100BC83: mov dword ptr [ebp - 0x1c], 0x11001470 */
    eax = ebp + (-0x1C); /* 0x1100BC8A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x1100BC8D: push 0x11045568 */
    goto L_1100BCF4; /* 0x1100BC92: jmp 0x1100bcf4 */
L_1100BC94:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x1100BC94: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100BC9F; /* 0x1100BC98: je 0x1100bc9f */
L_1100BC9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100BC9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100BC9C: inc eax */
    _flag_k = FK_INC;
    goto L_1100BCC9; /* 0x1100BC9D: jmp 0x1100bcc9 */
L_1100BC9F:
    eax = MEM32(esi + 0x54); /* 0x1100BC9F: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x1100BCA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BCBA; /* 0x1100BCA4: je 0x1100bcba */
L_1100BCA6:
    ecx = MEM32(eax + 0x10); /* 0x1100BCA6: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100BCA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BCFA; /* 0x1100BCAB: je 0x1100bcfa */
L_1100BCAD:
    edx = MEM32(ecx); /* 0x1100BCAD: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x1100BCAF: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1100BCB2: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100BCB3: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100BCB6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BC9A; /* 0x1100BCB8: je 0x1100bc9a */
L_1100BCBA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100BCBA: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0xE0); /* 0x1100BCBD: lea ecx, [esi - 0xe0] */
    eax = MEM32(ecx); /* 0x1100BCC3: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100BCC5: push edi */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x1100BCC6: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
L_1100BCC9:
    edi = POP32_VAL(esp); /* 0x1100BCC9: pop edi */
    esi = POP32_VAL(esp); /* 0x1100BCCA: pop esi */
    esp = ebp; /* 0x1100BCCB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100BCCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100BCCE: ret 8 */
L_1100BCD1:
    eax = ebp + 0x8; /* 0x1100BCD1: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x1100BCD4: mov dword ptr [ebp + 8], 0x110038cc */
    PUSH32(esp, eax); /* 0x1100BCDB: push eax */
    ecx = ebp + (-0x10); /* 0x1100BCDC: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BCDF: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x1100BCE5: mov dword ptr [ebp - 0x10], 0x11001470 */
    eax = ebp + (-0x10); /* 0x1100BCEC: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x11045568u); /* 0x1100BCEF: push 0x11045568 */
L_1100BCF4:
    PUSH32(esp, eax); /* 0x1100BCF4: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100BCF5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100BCFA:
    RECOMP_CALL(sub_11013989); /* 0x1100BCFA: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100BCFFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100BD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BD00u);

L_1100BD00:
    PUSH32(esp, ebp); /* 0x1100BD00: push ebp */
    ebp = esp; /* 0x1100BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1100BD03: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100BD06: push esi */
    PUSH32(esp, edi); /* 0x1100BD07: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100BD08: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100BD0B: mov esi, ecx */
    /* test edi, edi */ /* 0x1100BD0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BD79; /* 0x1100BD0F: je 0x1100bd79 */
L_1100BD11:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100BD11: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100BD3C; /* 0x1100BD15: jne 0x1100bd3c */
L_1100BD17:
    eax = ebp + (-0x4); /* 0x1100BD17: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x1100BD1A: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x1100BD21: push eax */
    ecx = ebp + (-0x1C); /* 0x1100BD22: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BD25: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x1100BD2B: mov dword ptr [ebp - 0x1c], 0x11001470 */
    eax = ebp + (-0x1C); /* 0x1100BD32: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x1100BD35: push 0x11045568 */
    goto L_1100BD9C; /* 0x1100BD3A: jmp 0x1100bd9c */
L_1100BD3C:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x1100BD3C: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100BD47; /* 0x1100BD40: je 0x1100bd47 */
L_1100BD42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100BD42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100BD44: inc eax */
    _flag_k = FK_INC;
    goto L_1100BD71; /* 0x1100BD45: jmp 0x1100bd71 */
L_1100BD47:
    eax = MEM32(esi + 0x54); /* 0x1100BD47: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x1100BD4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BD62; /* 0x1100BD4C: je 0x1100bd62 */
L_1100BD4E:
    ecx = MEM32(eax + 0x10); /* 0x1100BD4E: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100BD51: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BDA2; /* 0x1100BD53: je 0x1100bda2 */
L_1100BD55:
    edx = MEM32(ecx); /* 0x1100BD55: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x1100BD57: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1100BD5A: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100BD5B: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100BD5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BD42; /* 0x1100BD60: je 0x1100bd42 */
L_1100BD62:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100BD62: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0xE0); /* 0x1100BD65: lea ecx, [esi - 0xe0] */
    eax = MEM32(ecx); /* 0x1100BD6B: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100BD6D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x1100BD6E: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
L_1100BD71:
    edi = POP32_VAL(esp); /* 0x1100BD71: pop edi */
    esi = POP32_VAL(esp); /* 0x1100BD72: pop esi */
    esp = ebp; /* 0x1100BD73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100BD75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100BD76: ret 8 */
L_1100BD79:
    eax = ebp + 0x8; /* 0x1100BD79: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x1100BD7C: mov dword ptr [ebp + 8], 0x110038cc */
    PUSH32(esp, eax); /* 0x1100BD83: push eax */
    ecx = ebp + (-0x10); /* 0x1100BD84: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BD87: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x1100BD8D: mov dword ptr [ebp - 0x10], 0x11001470 */
    eax = ebp + (-0x10); /* 0x1100BD94: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x11045568u); /* 0x1100BD97: push 0x11045568 */
L_1100BD9C:
    PUSH32(esp, eax); /* 0x1100BD9C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100BD9D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100BDA2:
    RECOMP_CALL(sub_11013989); /* 0x1100BDA2: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100BDA7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100BDA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BDA8u);

L_1100BDA8:
    PUSH32(esp, ebp); /* 0x1100BDA8: push ebp */
    ebp = esp; /* 0x1100BDA9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100BDAB: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100BDAC: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100BDAF: mov esi, ecx */
    ecx = esi + 0x4; /* 0x1100BDB1: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B497); /* 0x1100BDB4: call 0x1100b497 */
    RECOMP_FLAGS_IN();
    eax = esi + (-0xE0); /* 0x1100BDB9: lea eax, [esi - 0xe0] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100BDBF: cdq  */
    PUSH32(esp, edx); /* 0x1100BDC0: push edx */
    PUSH32(esp, eax); /* 0x1100BDC1: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100BDC2: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100BDC5: cdq  */
    PUSH32(esp, edx); /* 0x1100BDC6: push edx */
    PUSH32(esp, eax); /* 0x1100BDC7: push eax */
    PUSH32(esp, 5); /* 0x1100BDC8: push 5 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100BDCA: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100BDD0: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1100BDD3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100BDD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BDD5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BDD8u);

L_1100BDD8:
    PUSH32(esp, ebp); /* 0x1100BDD8: push ebp */
    ebp = esp; /* 0x1100BDD9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100BDDB: push esi */
    esi = ecx; /* 0x1100BDDC: mov esi, ecx */
    eax = esi + (-0xE0); /* 0x1100BDDE: lea eax, [esi - 0xe0] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100BDE4: cdq  */
    PUSH32(esp, edx); /* 0x1100BDE5: push edx */
    PUSH32(esp, eax); /* 0x1100BDE6: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100BDE7: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100BDEA: cdq  */
    PUSH32(esp, edx); /* 0x1100BDEB: push edx */
    PUSH32(esp, eax); /* 0x1100BDEC: push eax */
    PUSH32(esp, 6); /* 0x1100BDED: push 6 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100BDEF: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100BDF5: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = esi + 0x4; /* 0x1100BDF8: lea ecx, [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100BDFB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100B4EB); /* 0x1100BDFE: call 0x1100b4eb */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100BE03: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100BE04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BE05: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BE08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BE08u);

L_1100BE08:
    PUSH32(esp, 0x1Cu); /* 0x1100BE08: push 0x1c */
    eax = 0x1103C094u; /* 0x1100BE0A: mov eax, 0x1103c094 */
    RECOMP_CALL(sub_1103B372); /* 0x1100BE0F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BE14: mov esi, ecx */
    eax = ebp + (-0x28); /* 0x1100BE16: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1100BE19: push eax */
    ecx = esi + 0x4; /* 0x1100BE1A: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B572); /* 0x1100BE1D: call 0x1100b572 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100BE22: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x1100BE26: mov eax, dword ptr [ebp - 0x14] */
L_1100BE29:
    ecx = ebp + (-0x10); /* 0x1100BE29: lea ecx, [ebp - 0x10] */
    edx = MEM32(ebp + (-0x24)); /* 0x1100BE2C: mov edx, dword ptr [ebp - 0x24] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100BE2F: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100BE37; /* 0x1100BE32: jae 0x1100be37 */
L_1100BE34:
    ecx = edx + eax * 4; /* 0x1100BE34: lea ecx, [edx + eax*4] */
L_1100BE37:
    /* cmp MEM32(ecx), 0 */ /* 0x1100BE37: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100BE64; /* 0x1100BE3A: je 0x1100be64 */
L_1100BE3C:
    ecx = ebp + (-0x10); /* 0x1100BE3C: lea ecx, [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100BE3F: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100BE47; /* 0x1100BE42: jae 0x1100be47 */
L_1100BE44:
    ecx = edx + eax * 4; /* 0x1100BE44: lea ecx, [edx + eax*4] */
L_1100BE47:
    ecx = MEM32(ecx); /* 0x1100BE47: mov ecx, dword ptr [ecx] */
    edx = esi + (-0xE0); /* 0x1100BE49: lea edx, [esi - 0xe0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1100BE4F: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100BE51: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(ecx); /* 0x1100BE53: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1100BE55: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1100BE57: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100BE58: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1100BE5B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100BE5E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x1100BE5F: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_1100BE29; /* 0x1100BE62: jmp 0x1100be29 */
L_1100BE64:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BE64: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100BE68: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1100B730); /* 0x1100BE6B: call 0x1100b730 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BE70: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100BE75: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100BE76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BE76u);

L_1100BE76:
    PUSH32(esp, 4); /* 0x1100BE76: push 4 */
    eax = 0x1103C69Fu; /* 0x1100BE78: mov eax, 0x1103c69f */
    RECOMP_CALL(sub_1103B372); /* 0x1100BE7D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BE82: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100BE84: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003DDCu; /* 0x1100BE87: mov dword ptr [esi], 0x11003ddc */
    PUSH32(esp, 3); /* 0x1100BE8D: push 3 */
    ecx = POP32_VAL(esp); /* 0x1100BE8F: pop ecx */
    eax = esi; /* 0x1100BE90: mov eax, esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1100BE92: mov dword ptr [ebp - 4], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100BE95: cdq  */
    PUSH32(esp, edx); /* 0x1100BE96: push edx */
    PUSH32(esp, eax); /* 0x1100BE97: push eax */
    PUSH32(esp, ecx); /* 0x1100BE98: push ecx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100BE99: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100BE9F: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100BEA2: mov byte ptr [ebp - 4], 2 */
    ecx = esi + 0xB0; /* 0x1100BEA6: lea ecx, [esi + 0xb0] */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100BEAC: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x18; /* 0x1100BEB2: lea ecx, [esi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100BEB5: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100A814); /* 0x1100BEB9: call 0x1100a814 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xC; /* 0x1100BEBE: lea ecx, [esi + 0xc] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100BEC1: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_11009207); /* 0x1100BEC5: call 0x11009207 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11004504u; /* 0x1100BECA: mov dword ptr [esi], 0x11004504 */
    RECOMP_CALL(sub_1103B340); /* 0x1100BED0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100BED5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100BED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BED6u);

L_1100BED6:
    PUSH32(esp, 0x28u); /* 0x1100BED6: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100BED8: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100BEDD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BEE2: mov esi, ecx */
    eax = esi + 0xB0; /* 0x1100BEE4: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100BEEA: push eax */
    ecx = ebp + (-0x34); /* 0x1100BEEB: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100BEEE: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100BEF4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1100BEF8: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1100BEFB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100BF28; /* 0x1100BEFD: jne 0x1100bf28 */
L_1100BEFF:
    eax = ebp + 0x8; /* 0x1100BEFF: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100BF02: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100BF09: push eax */
    ecx = ebp + (-0x18); /* 0x1100BF0A: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BF0D: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100BF13: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100BF18: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100BF1B: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100BF22: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100BF23: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100BF28:
    ecx = esi + 0xC; /* 0x1100BF28: lea ecx, [esi + 0xc] */
    eax = MEM32(ecx); /* 0x1100BF2B: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100BF2D: push edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100BF2E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1100BF30: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1100BF32: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1100BF34: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100BF35: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100BF38: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100BF3A: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100BF3C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1100BF3D: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BF40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100BF44: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100BF47: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BF4D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BF52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BF55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BF55u);

L_1100BF55:
    PUSH32(esp, 0x28u); /* 0x1100BF55: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100BF57: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100BF5C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100BF61: mov edi, ecx */
    eax = edi + 0xB0; /* 0x1100BF63: lea eax, [edi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100BF69: push eax */
    ecx = ebp + (-0x34); /* 0x1100BF6A: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100BF6D: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100BF73: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1100BF77: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1100BF7A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100BFA7; /* 0x1100BF7C: jne 0x1100bfa7 */
L_1100BF7E:
    eax = ebp + 0x8; /* 0x1100BF7E: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100BF81: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100BF88: push eax */
    ecx = ebp + (-0x18); /* 0x1100BF89: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100BF8C: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100BF92: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100BF97: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100BF9A: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100BFA1: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100BFA2: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100BFA7:
    ecx = edi + 0xC; /* 0x1100BFA7: lea ecx, [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1100BFAA: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100BFAC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100BFAD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100BFB0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BFBC; /* 0x1100BFB2: je 0x1100bfbc */
L_1100BFB4:
    eax = MEM32(esi); /* 0x1100BFB4: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100BFB6: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100BFB8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100BFB9: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100BFBC:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BFBC: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100BFC0: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100BFC3: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BFC9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BFCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BFD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BFD1u);

L_1100BFD1:
    PUSH32(esp, 0x28u); /* 0x1100BFD1: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100BFD3: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100BFD8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BFDD: mov esi, ecx */
    eax = esi + 0xB0; /* 0x1100BFDF: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100BFE5: push eax */
    ecx = ebp + (-0x34); /* 0x1100BFE6: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100BFE9: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100BFEF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0xC; /* 0x1100BFF3: lea ecx, [esi + 0xc] */
    eax = MEM32(ecx); /* 0x1100BFF6: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x1100BFF8: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1100BFFB: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100BFFC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100C026; /* 0x1100BFFF: jmp 0x1100c026 */
L_1100C001:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100C001: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100C004: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100C007: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C009: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1100C00C: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1100C00E: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100C010: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100C011: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100C014: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1100C017: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x14); /* 0x1100C01A: lea edx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1100C01D: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100C020: push edx */
    eax = MEM32(ecx); /* 0x1100C021: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100C023: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100C026:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100C026: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100C029: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100C02C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C02E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1100C031: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1100C034: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C001; /* 0x1100C036: jne 0x1100c001 */
L_1100C038:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C038: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100C03C: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C03F: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100C045: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C04A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C04B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C04Bu);

L_1100C04B:
    PUSH32(esp, 0x28u); /* 0x1100C04B: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100C04D: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100C052: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100C057: mov esi, ecx */
    eax = esi + 0xB0; /* 0x1100C059: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100C05F: push eax */
    ecx = ebp + (-0x34); /* 0x1100C060: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C063: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100C069: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1100C06D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1100C070: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C09D; /* 0x1100C072: jne 0x1100c09d */
L_1100C074:
    eax = ebp + 0xC; /* 0x1100C074: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100C077: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100C07E: push eax */
    ecx = ebp + (-0x18); /* 0x1100C07F: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100C082: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100C088: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100C08D: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100C090: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100C097: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100C098: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100C09D:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1100C09D: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C0B4; /* 0x1100C0A1: je 0x1100c0b4 */
L_1100C0A3:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C0A3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100C0A7: lea ecx, [ebp - 0x34] */
L_1100C0AA:
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C0AA: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1100C0B0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1100C0D8; /* 0x1100C0B2: jmp 0x1100c0d8 */
L_1100C0B4:
    eax = MEM32(esi); /* 0x1100C0B4: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100C0B6: mov ecx, esi */
    ebx = MEM32(ebp + 0x8); /* 0x1100C0B8: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1100C0BB: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1100C0BC: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C0BF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100C0C3: lea ecx, [ebp - 0x34] */
    /* test LO8(eax), LO8(eax) */ /* 0x1100C0C6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C0AA; /* 0x1100C0C8: je 0x1100c0aa */
L_1100C0CA:
    MEM32(esi + 0x4) = edi; /* 0x1100C0CA: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = ebx; /* 0x1100C0CD: mov dword ptr [esi + 8], ebx */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C0D0: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1100C0D6: mov al, 1 */
L_1100C0D8:
    RECOMP_CALL(sub_1103B340); /* 0x1100C0D8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100C0DD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100C0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C0E0u);

L_1100C0E0:
    PUSH32(esp, 0x28u); /* 0x1100C0E0: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100C0E2: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100C0E7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100C0EC: mov esi, ecx */
    eax = esi + 0xB0; /* 0x1100C0EE: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100C0F4: push eax */
    ecx = ebp + (-0x34); /* 0x1100C0F5: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C0F8: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100C0FE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1100C102: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1100C105: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C132; /* 0x1100C107: jne 0x1100c132 */
L_1100C109:
    eax = ebp + 0xC; /* 0x1100C109: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100C10C: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100C113: push eax */
    ecx = ebp + (-0x18); /* 0x1100C114: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100C117: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100C11D: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, 0x11045568u); /* 0x1100C124: push 0x11045568 */
L_1100C129:
    eax = ebp + (-0x18); /* 0x1100C129: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1100C12C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100C12D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100C132:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1100C132: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C16F; /* 0x1100C136: je 0x1100c16f */
L_1100C138:
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1100C138: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100C16F; /* 0x1100C13B: jne 0x1100c16f */
L_1100C13D:
    eax = MEM32(esi); /* 0x1100C13D: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100C13F: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100C141: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1100C144: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100C147: mov edi, eax */
    /* test edi, edi */ /* 0x1100C149: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C158; /* 0x1100C14B: je 0x1100c158 */
L_1100C14D:
    edx = MEM32(esi); /* 0x1100C14D: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1100C14F: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1100C151: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x40)); /* 0x1100C155: call dword ptr [edx + 0x40] */
    RECOMP_FLAGS_IN();
L_1100C158:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C158: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100C15C: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C15F: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100C165: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C167: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100C16C: ret 8 */
L_1100C16F:
    ecx = ebp + (-0x18); /* 0x1100C16F: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x1100C172: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x1100C178: push 0x110454b8 */
    RECOMP_BACKEDGE();
    goto L_1100C129; /* 0x1100C17D: jmp 0x1100c129 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100C17F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C17Fu);

L_1100C17F:
    PUSH32(esp, 0x28u); /* 0x1100C17F: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100C181: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100C186: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100C18B: mov esi, ecx */
    eax = esi + 0xB0; /* 0x1100C18D: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100C193: push eax */
    ecx = ebp + (-0x34); /* 0x1100C194: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C197: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100C19D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1100C1A1: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1100C1A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C1D1; /* 0x1100C1A6: jne 0x1100c1d1 */
L_1100C1A8:
    eax = ebp + 0xC; /* 0x1100C1A8: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100C1AB: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100C1B2: push eax */
    ecx = ebp + (-0x18); /* 0x1100C1B3: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100C1B6: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100C1BC: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, 0x11045568u); /* 0x1100C1C3: push 0x11045568 */
L_1100C1C8:
    eax = ebp + (-0x18); /* 0x1100C1C8: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1100C1CB: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100C1CC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100C1D1:
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1100C1D1: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C1E6; /* 0x1100C1D4: je 0x1100c1e6 */
L_1100C1D6:
    ecx = ebp + (-0x18); /* 0x1100C1D6: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x1100C1D9: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x1100C1DF: push 0x110454b8 */
    RECOMP_BACKEDGE();
    goto L_1100C1C8; /* 0x1100C1E4: jmp 0x1100c1c8 */
L_1100C1E6:
    eax = MEM32(esi); /* 0x1100C1E6: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100C1E8: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100C1EA: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1100C1ED: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100C1F0: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100C1F2: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1100C1F4: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1100C1F8: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C1FB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100C1FF: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C202: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100C208: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100C20D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100C210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C210u);

L_1100C210:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C210: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD8u; /* 0x1100C212: add ecx, 0xd8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100C218: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100C219: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C21D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C220u);

L_1100C220:
    PUSH32(esp, 0x1Cu); /* 0x1100C220: push 0x1c */
    eax = 0x1103C123u; /* 0x1100C222: mov eax, 0x1103c123 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C227: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C22C: mov edi, ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1100C22E: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100C231: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C261; /* 0x1100C235: je 0x1100c261 */
L_1100C237:
    eax = edi + 0xB0; /* 0x1100C237: lea eax, [edi + 0xb0] */
    PUSH32(esp, eax); /* 0x1100C23D: push eax */
    ecx = ebp + (-0x28); /* 0x1100C23E: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C241: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100C247: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1100C24B: mov ecx, edi */
    eax = MEM32(edi); /* 0x1100C24D: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100C24F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1100C252: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1100C255: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100C258: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C25B: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
L_1100C261:
    eax = edi + 0xD8; /* 0x1100C261: lea eax, [edi + 0xd8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x1100C267: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1100C26B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_1103B340); /* 0x1100C26C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C271: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C274u);

L_1100C274:
    PUSH32(esp, ebp); /* 0x1100C274: push ebp */
    ebp = esp; /* 0x1100C275: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x1100C277: add ecx, 0x18 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x1100C27A: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100C27C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100C280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C280u);

L_1100C280:
    PUSH32(esp, ebp); /* 0x1100C280: push ebp */
    ebp = esp; /* 0x1100C281: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x1100C283: add ecx, 0x18 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x1100C286: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100C288: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100C28B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C28Bu);

L_1100C28B:
    PUSH32(esp, ebp); /* 0x1100C28B: push ebp */
    ebp = esp; /* 0x1100C28C: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C28E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100C292: push esi */
    esi = ecx; /* 0x1100C293: mov esi, ecx */
    MEM32(esi) = 0x11003C90u; /* 0x1100C295: mov dword ptr [esi], 0x11003c90 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C2A5; /* 0x1100C29B: je 0x1100c2a5 */
L_1100C29D:
    PUSH32(esp, esi); /* 0x1100C29D: push esi */
    RECOMP_ICALL(MEM32(0x110690E0)); /* 0x1100C29E: call dword ptr [0x110690e0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C2A4: pop ecx */
L_1100C2A5:
    eax = esi; /* 0x1100C2A5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C2A7: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C2A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C2A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C2AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C2ACu);

L_1100C2AC:
    PUSH32(esp, ebp); /* 0x1100C2AC: push ebp */
    ebp = esp; /* 0x1100C2AD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C2AF: push esi */
    esi = ecx; /* 0x1100C2B0: mov esi, ecx */
    RECOMP_CALL(sub_1100B730); /* 0x1100C2B2: call 0x1100b730 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C2B7: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C2C5; /* 0x1100C2BB: je 0x1100c2c5 */
L_1100C2BD:
    PUSH32(esp, esi); /* 0x1100C2BD: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C2BE: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C2C4: pop ecx */
L_1100C2C5:
    eax = esi; /* 0x1100C2C5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C2C7: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C2C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C2C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C2CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C2CCu);

L_1100C2CC:
    PUSH32(esp, ebp); /* 0x1100C2CC: push ebp */
    ebp = esp; /* 0x1100C2CD: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C2CF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100C2D3: push esi */
    esi = ecx; /* 0x1100C2D4: mov esi, ecx */
    MEM32(esi) = 0x11004584u; /* 0x1100C2D6: mov dword ptr [esi], 0x11004584 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C2E6; /* 0x1100C2DC: je 0x1100c2e6 */
L_1100C2DE:
    PUSH32(esp, esi); /* 0x1100C2DE: push esi */
    RECOMP_ICALL(MEM32(0x110690E0)); /* 0x1100C2DF: call dword ptr [0x110690e0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C2E5: pop ecx */
L_1100C2E6:
    eax = esi; /* 0x1100C2E6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C2E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C2E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C2EA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C2ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C2EDu);

L_1100C2ED:
    PUSH32(esp, ebp); /* 0x1100C2ED: push ebp */
    ebp = esp; /* 0x1100C2EE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C2F0: push esi */
    esi = ecx; /* 0x1100C2F1: mov esi, ecx */
    RECOMP_CALL(sub_1100B790); /* 0x1100C2F3: call 0x1100b790 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C2F8: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C306; /* 0x1100C2FC: je 0x1100c306 */
L_1100C2FE:
    PUSH32(esp, esi); /* 0x1100C2FE: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C2FF: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C305: pop ecx */
L_1100C306:
    eax = esi; /* 0x1100C306: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C308: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C309: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C30A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C30D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C30Du);

L_1100C30D:
    PUSH32(esp, 4); /* 0x1100C30D: push 4 */
    eax = 0x1103C6DEu; /* 0x1100C30F: mov eax, 0x1103c6de */
    RECOMP_CALL(sub_1103B372); /* 0x1100C314: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C319: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C31B: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x11004494u; /* 0x1100C31E: mov dword ptr [edi], 0x11004494 */
    MEM32(edi + 0xE0) = 0x11003CECu; /* 0x1100C324: mov dword ptr [edi + 0xe0], 0x11003cec */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100C32E: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100C843); /* 0x1100C335: call 0x1100c843 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x150); /* 0x1100C33A: mov ecx, dword ptr [edi + 0x150] */
    /* cmp ecx, MEM32(edi + 0x140) */ /* 0x1100C340: cmp ecx, dword ptr [edi + 0x140] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x140));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C353; /* 0x1100C346: je 0x1100c353 */
L_1100C348:
    /* test ecx, ecx */ /* 0x1100C348: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C353; /* 0x1100C34A: je 0x1100c353 */
L_1100C34C:
    eax = MEM32(ecx); /* 0x1100C34C: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100C34E: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100C350: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100C353:
    ecx = edi + 0x174; /* 0x1100C353: lea ecx, [edi + 0x174] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C359: mov byte ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100C35D: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x154; /* 0x1100C363: lea ecx, [edi + 0x154] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100C369: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100C36D: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100C373: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1100C377: mov ecx, edi */
    RECOMP_CALL(sub_1100BB7C); /* 0x1100C379: call 0x1100bb7c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C37E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C38C; /* 0x1100C382: je 0x1100c38c */
L_1100C384:
    PUSH32(esp, edi); /* 0x1100C384: push edi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C385: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C38B: pop ecx */
L_1100C38C:
    eax = edi; /* 0x1100C38C: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C38E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C393: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C396(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C396u);

L_1100C396:
    PUSH32(esp, ebp); /* 0x1100C396: push ebp */
    ebp = esp; /* 0x1100C397: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C399: push esi */
    esi = ecx; /* 0x1100C39A: mov esi, ecx */
    RECOMP_CALL(sub_1100BB7C); /* 0x1100C39C: call 0x1100bb7c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C3A1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C3AF; /* 0x1100C3A5: je 0x1100c3af */
L_1100C3A7:
    PUSH32(esp, esi); /* 0x1100C3A7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C3A8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C3AE: pop ecx */
L_1100C3AF:
    eax = esi; /* 0x1100C3AF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C3B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C3B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C3B3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C3B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C3B6u);

L_1100C3B6:
    PUSH32(esp, ebp); /* 0x1100C3B6: push ebp */
    ebp = esp; /* 0x1100C3B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C3B9: push esi */
    esi = ecx; /* 0x1100C3BA: mov esi, ecx */
    RECOMP_CALL(sub_1100BBE8); /* 0x1100C3BC: call 0x1100bbe8 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C3C1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C3CF; /* 0x1100C3C5: je 0x1100c3cf */
L_1100C3C7:
    PUSH32(esp, esi); /* 0x1100C3C7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C3C8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C3CE: pop ecx */
L_1100C3CF:
    eax = esi; /* 0x1100C3CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C3D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C3D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C3D3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C3D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C3D6u);

L_1100C3D6:
    PUSH32(esp, ebp); /* 0x1100C3D6: push ebp */
    ebp = esp; /* 0x1100C3D7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C3D9: push esi */
    esi = ecx; /* 0x1100C3DA: mov esi, ecx */
    RECOMP_CALL(sub_1100BE76); /* 0x1100C3DC: call 0x1100be76 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C3E1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C3EF; /* 0x1100C3E5: je 0x1100c3ef */
L_1100C3E7:
    PUSH32(esp, esi); /* 0x1100C3E7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C3E8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C3EE: pop ecx */
L_1100C3EF:
    eax = esi; /* 0x1100C3EF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C3F1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C3F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C3F3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C3F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C3F6u);

L_1100C3F6:
    PUSH32(esp, ebp); /* 0x1100C3F6: push ebp */
    ebp = esp; /* 0x1100C3F7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100C3F9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100C3FC: push esi */
    esi = ecx; /* 0x1100C3FD: mov esi, ecx */
    ecx = MEM32(eax + 0x10); /* 0x1100C3FF: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100C402: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C40B; /* 0x1100C404: jne 0x1100c40b */
L_1100C406:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ecx);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & ecx; /* 0x1100C406: and dword ptr [esi + 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100C41B; /* 0x1100C409: jmp 0x1100c41b */
L_1100C40B:
    /* cmp ecx, eax */ /* 0x1100C40B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1100C40D: mov eax, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100C414; /* 0x1100C40F: jne 0x1100c414 */
L_1100C411:
    PUSH32(esp, esi); /* 0x1100C411: push esi */
    goto L_1100C416; /* 0x1100C412: jmp 0x1100c416 */
L_1100C414:
    PUSH32(esp, 0); /* 0x1100C414: push 0 */
L_1100C416:
    RECOMP_ICALL(MEM32(eax)); /* 0x1100C416: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1100C418: mov dword ptr [esi + 0x10], eax */
L_1100C41B:
    esi = POP32_VAL(esp); /* 0x1100C41B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C41C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C41D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C420u);

L_1100C420:
    PUSH32(esp, 8); /* 0x1100C420: push 8 */
    eax = 0x1103C730u; /* 0x1100C422: mov eax, 0x1103c730 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C427: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1100C42C: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100C42E: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C431: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100C433: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0xFFFFFFFFu));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0xFFFFFFFFu; /* 0x1100C436: or dword ptr [ebx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = 0x11004274u; /* 0x1100C43A: mov dword ptr [ebx], 0x11004274 */
    MEM32(ebx + 0x4) = eax; /* 0x1100C440: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)((MEM32(ebx + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x10) | 0xFFFFFFFFu));
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) | 0xFFFFFFFFu; /* 0x1100C443: or dword ptr [ebx + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xC) = 0x1100444Cu; /* 0x1100C447: mov dword ptr [ebx + 0xc], 0x1100444c */
    MEM32(ebx + 0x14) = eax; /* 0x1100C44E: mov dword ptr [ebx + 0x14], eax */
    MEM32(ebx + 0x18) = eax; /* 0x1100C451: mov dword ptr [ebx + 0x18], eax */
    MEM32(ebx + 0x1C) = eax; /* 0x1100C454: mov dword ptr [ebx + 0x1c], eax */
    edi = ebx + 0x20; /* 0x1100C457: lea edi, [ebx + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C45A: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 4); /* 0x1100C45E: push 4 */
    ecx = edi + 0x4; /* 0x1100C460: lea ecx, [edi + 4] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1100C463: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0x11004174u; /* 0x1100C466: mov dword ptr [edi], 0x11004174 */
    RECOMP_CALL(sub_1101146F); /* 0x1100C46C: call 0x1101146f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = 0x11004238u; /* 0x1100C471: mov dword ptr [edi + 4], 0x11004238 */
    ecx = edi + 0x18; /* 0x1100C478: lea ecx, [edi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100C47B: mov byte ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(0x11069228)); /* 0x1100C47F: call dword ptr [0x11069228] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100C485: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x38) = esi; /* 0x1100C487: mov dword ptr [edi + 0x38], esi */
    MEM32(edi + 0x3C) = esi; /* 0x1100C48A: mov dword ptr [edi + 0x3c], esi */
    MEM32(edi + 0x40) = esi; /* 0x1100C48D: mov dword ptr [edi + 0x40], esi */
    MEM32(edi + 0x44) = 1; /* 0x1100C490: mov dword ptr [edi + 0x44], 1 */
    MEM32(edi + 0x48) = esi; /* 0x1100C497: mov dword ptr [edi + 0x48], esi */
    MEM32(edi + 0x60) = esi; /* 0x1100C49A: mov dword ptr [edi + 0x60], esi */
    MEM32(edi + 0x78) = esi; /* 0x1100C49D: mov dword ptr [edi + 0x78], esi */
    MEM32(edi + 0x90) = esi; /* 0x1100C4A0: mov dword ptr [edi + 0x90], esi */
    ecx = ebx + 0xB8; /* 0x1100C4A6: lea ecx, [ebx + 0xb8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100C4AC: mov byte ptr [ebp - 4], 3 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100C4B0: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100C4B6: mov eax, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x1100C4B8: mov byte ptr [ebp - 4], 4 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100C4BC: cdq  */
    PUSH32(esp, edx); /* 0x1100C4BD: push edx */
    PUSH32(esp, eax); /* 0x1100C4BE: push eax */
    eax = ebx; /* 0x1100C4BF: mov eax, ebx */
    MEM32(ebx + 0xE0) = esi; /* 0x1100C4C1: mov dword ptr [ebx + 0xe0], esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100C4C7: cdq  */
    PUSH32(esp, edx); /* 0x1100C4C8: push edx */
    PUSH32(esp, eax); /* 0x1100C4C9: push eax */
    PUSH32(esp, esi); /* 0x1100C4CA: push esi */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100C4CB: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100C4D1: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1100C4D4: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1100C4D6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C4DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C4DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C4DCu);

L_1100C4DC:
    PUSH32(esp, ebp); /* 0x1100C4DC: push ebp */
    ebp = esp; /* 0x1100C4DD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1100C4DF: push ebx */
    PUSH32(esp, esi); /* 0x1100C4E0: push esi */
    PUSH32(esp, edi); /* 0x1100C4E1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100C4E2: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100C4E5: mov esi, ecx */
    /* test edi, edi */ /* 0x1100C4E7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100C512; /* 0x1100C4E9: jle 0x1100c512 */
L_1100C4EB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1100C4EB: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x1100C4EF: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100C4F2: push eax */
    ecx = esi + 0x4; /* 0x1100C4F3: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1101157D); /* 0x1100C4F6: call 0x1101157d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x78), 0 */ /* 0x1100C4FB: cmp dword ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi + 0x50; /* 0x1100C4FF: lea ecx, [esi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100C502: push dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C50A; /* 0x1100C505: je 0x1100c50a */
L_1100C507:
    ecx = esi + 0x68; /* 0x1100C507: lea ecx, [esi + 0x68] */
L_1100C50A:
    RECOMP_CALL(sub_1100C8D4); /* 0x1100C50A: call 0x1100c8d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1100C50F: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1100C4EB; /* 0x1100C510: jne 0x1100c4eb */
L_1100C512:
    /* cmp MEM32(esi + 0x90), 0 */ /* 0x1100C512: cmp dword ptr [esi + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C52A; /* 0x1100C519: je 0x1100c52a */
L_1100C51B:
    ecx = MEM32(esi + 0x90); /* 0x1100C51B: mov ecx, dword ptr [esi + 0x90] */
    /* test ecx, ecx */ /* 0x1100C521: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C531; /* 0x1100C523: je 0x1100c531 */
L_1100C525:
    eax = MEM32(ecx); /* 0x1100C525: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100C527: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1100C52A:
    edi = POP32_VAL(esp); /* 0x1100C52A: pop edi */
    esi = POP32_VAL(esp); /* 0x1100C52B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100C52C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100C52D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C52E: ret 4 */
L_1100C531:
    RECOMP_CALL(sub_11013989); /* 0x1100C531: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100C536u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100C53C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C53Cu);

L_1100C53C:
    PUSH32(esp, ebp); /* 0x1100C53C: push ebp */
    ebp = esp; /* 0x1100C53D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100C53F: push esi */
    esi = ecx; /* 0x1100C540: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1100C542: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1100C545: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1100C595; /* 0x1100C548: jb 0x1100c595 */
L_1100C54A:
    PUSH32(esp, ebx); /* 0x1100C54A: push ebx */
    PUSH32(esp, edi); /* 0x1100C54B: push edi */
    ebx = eax * 2 + 0x2; /* 0x1100C54C: lea ebx, [eax*2 + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100C553: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1100C555: push 4 */
    edx = POP32_VAL(esp); /* 0x1100C557: pop edx */
    eax = ebx; /* 0x1100C558: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1100C55A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1100C55C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1100C55F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1100C561: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100C563: push ecx */
    RECOMP_CALL(sub_110306E8); /* 0x1100C564: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C569: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100C56A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x1100C56C: mov edi, eax */
    /* cmp MEM32(esi), ecx */ /* 0x1100C56E: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C58E; /* 0x1100C570: je 0x1100c58e */
L_1100C572:
    /* cmp MEM32(esi + 0x8), ecx */ /* 0x1100C572: cmp dword ptr [esi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100C585; /* 0x1100C575: jbe 0x1100c585 */
L_1100C577:
    eax = MEM32(esi); /* 0x1100C577: mov eax, dword ptr [esi] */
    eax = MEM32(eax + ecx * 4); /* 0x1100C579: mov eax, dword ptr [eax + ecx*4] */
    MEM32(edi + ecx * 4) = eax; /* 0x1100C57C: mov dword ptr [edi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100C57F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x1100C580: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100C577; /* 0x1100C583: jb 0x1100c577 */
L_1100C585:
    PUSH32(esp, MEM32(esi)); /* 0x1100C585: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100C587: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C58D: pop ecx */
L_1100C58E:
    MEM32(esi) = edi; /* 0x1100C58E: mov dword ptr [esi], edi */
    edi = POP32_VAL(esp); /* 0x1100C590: pop edi */
    MEM32(esi + 0x8) = ebx; /* 0x1100C591: mov dword ptr [esi + 8], ebx */
    ebx = POP32_VAL(esp); /* 0x1100C594: pop ebx */
L_1100C595:
    edx = MEM32(esi + 0x4); /* 0x1100C595: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x1100C598: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x1100C59A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1100C59D: mov eax, dword ptr [eax] */
    MEM32(ecx + edx * 4) = eax; /* 0x1100C59F: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x1100C5A2: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1100C5A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C5A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C5A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C5AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C5AAu);

L_1100C5AA:
    PUSH32(esp, esi); /* 0x1100C5AA: push esi */
    esi = ecx; /* 0x1100C5AB: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100C5AD: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C5B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x28) = eax; /* 0x1100C5B5: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x1100C5B8: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x30) = eax; /* 0x1100C5BB: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = eax; /* 0x1100C5BE: mov dword ptr [esi + 0x34], eax */
    _flag_a = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu));
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0xFFFFFFFFu; /* 0x1100C5C1: or dword ptr [esi + 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x38) = 0x11004530u; /* 0x1100C5C5: mov dword ptr [esi + 0x38], 0x11004530 */
    MEM32(esi + 0x40) = eax; /* 0x1100C5CC: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x1100C5CF: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x1100C5D2: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = eax; /* 0x1100C5D5: mov dword ptr [esi + 0x4c], eax */
    eax = esi; /* 0x1100C5D8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C5DA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C5DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C5DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C5DCu);

L_1100C5DC:
    PUSH32(esp, 0x30u); /* 0x1100C5DC: push 0x30 */
    eax = 0x1103C753u; /* 0x1100C5DE: mov eax, 0x1103c753 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C5E3: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C5E8: mov edi, ecx */
    eax = MEM32(edi + 0x4C); /* 0x1100C5EA: mov eax, dword ptr [edi + 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100C5ED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1100C5EF: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1100C5F2: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1100C5F5: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x1100C5F8: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, edi); /* 0x1100C5FB: push edi */
    ecx = ebp + (-0x3C); /* 0x1100C5FC: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100C5FF: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C602: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) - 1; /* 0x1100C608: dec dword ptr [edi + 0x28] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edi + 0x28), esi */ /* 0x1100C60B: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100C63F; /* 0x1100C60E: jne 0x1100c63f */
L_1100C610:
    /* cmp MEM32(edi + 0x30), esi */ /* 0x1100C610: cmp dword ptr [edi + 0x30], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100C63F; /* 0x1100C613: jbe 0x1100c63f */
L_1100C615:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2Cu; /* 0x1100C615: add edi, 0x2c */
    _flag_k = FK_ADD;
    eax = ebp + (-0x20); /* 0x1100C618: lea eax, [ebp - 0x20] */
    /* cmp edi, eax */ /* 0x1100C61B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100C63F; /* 0x1100C61D: je 0x1100c63f */
L_1100C61F:
    ecx = MEM32(edi); /* 0x1100C61F: mov ecx, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x1100C621: mov ebx, dword ptr [edi + 4] */
    eax = MEM32(edi + 0x8); /* 0x1100C624: mov eax, dword ptr [edi + 8] */
    MEM32(edi) = esi; /* 0x1100C627: mov dword ptr [edi], esi */
    MEM32(edi + 0x4) = esi; /* 0x1100C629: mov dword ptr [edi + 4], esi */
    MEM32(edi + 0x8) = esi; /* 0x1100C62C: mov dword ptr [edi + 8], esi */
    edi = ecx; /* 0x1100C62F: mov edi, ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1100C631: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1100C634: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1100C637: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100C63A: mov dword ptr [ebp - 0x18], eax */
    goto L_1100C645; /* 0x1100C63D: jmp 0x1100c645 */
L_1100C63F:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1100C63F: mov ebx, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x20)); /* 0x1100C642: mov edi, dword ptr [ebp - 0x20] */
L_1100C645:
    ecx = ebp + (-0x3C); /* 0x1100C645: lea ecx, [ebp - 0x3c] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C648: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1100C64E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C662; /* 0x1100C650: je 0x1100c662 */
L_1100C652:
    ecx = MEM32(edi + esi * 4); /* 0x1100C652: mov ecx, dword ptr [edi + esi*4] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100C655: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100C658: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1100C65A: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100C65D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1100C65E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100C652; /* 0x1100C660: jb 0x1100c652 */
L_1100C662:
    ecx = ebp + (-0x20); /* 0x1100C662: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1100B222); /* 0x1100C665: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100C66A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C66F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C670u);

L_1100C670:
    PUSH32(esp, 4); /* 0x1100C670: push 4 */
    eax = 0x1103C779u; /* 0x1100C672: mov eax, 0x1103c779 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C677: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C67C: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C67E: mov dword ptr [ebp - 0x10], edi */
    PUSH32(esp, 4); /* 0x1100C681: push 4 */
    ecx = edi + 0x4; /* 0x1100C683: lea ecx, [edi + 4] */
    MEM32(edi) = 0x11004040u; /* 0x1100C686: mov dword ptr [edi], 0x11004040 */
    RECOMP_CALL(sub_1101146F); /* 0x1100C68C: call 0x1101146f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = 0x1100407Cu; /* 0x1100C691: mov dword ptr [edi + 4], 0x1100407c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100C698: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x18; /* 0x1100C69A: lea ecx, [edi + 0x18] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100C69D: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(0x11069228)); /* 0x1100C6A0: call dword ptr [0x11069228] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x38) = esi; /* 0x1100C6A6: mov dword ptr [edi + 0x38], esi */
    eax = edi; /* 0x1100C6A9: mov eax, edi */
    MEM32(edi + 0x3C) = esi; /* 0x1100C6AB: mov dword ptr [edi + 0x3c], esi */
    MEM32(edi + 0x40) = esi; /* 0x1100C6AE: mov dword ptr [edi + 0x40], esi */
    MEM32(edi + 0x44) = 1; /* 0x1100C6B1: mov dword ptr [edi + 0x44], 1 */
    MEM32(edi + 0x48) = esi; /* 0x1100C6B8: mov dword ptr [edi + 0x48], esi */
    MEM32(edi + 0x60) = esi; /* 0x1100C6BB: mov dword ptr [edi + 0x60], esi */
    MEM32(edi + 0x78) = esi; /* 0x1100C6BE: mov dword ptr [edi + 0x78], esi */
    MEM32(edi + 0x90) = esi; /* 0x1100C6C1: mov dword ptr [edi + 0x90], esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C6C7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C6CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C6CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C6CDu);

L_1100C6CD:
    PUSH32(esp, esi); /* 0x1100C6CD: push esi */
    esi = ecx; /* 0x1100C6CE: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100C6D0: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C6D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x28) = eax; /* 0x1100C6D8: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x1100C6DB: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x30) = eax; /* 0x1100C6DE: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = eax; /* 0x1100C6E1: mov dword ptr [esi + 0x34], eax */
    _flag_a = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu));
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0xFFFFFFFFu; /* 0x1100C6E4: or dword ptr [esi + 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x38) = 0x11004098u; /* 0x1100C6E8: mov dword ptr [esi + 0x38], 0x11004098 */
    MEM32(esi + 0x40) = eax; /* 0x1100C6EF: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x1100C6F2: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x1100C6F5: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = eax; /* 0x1100C6F8: mov dword ptr [esi + 0x4c], eax */
    eax = esi; /* 0x1100C6FB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C6FD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C6FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C6FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C6FFu);

L_1100C6FF:
    PUSH32(esp, 0x2Cu); /* 0x1100C6FF: push 0x2c */
    eax = 0x1103C7A8u; /* 0x1100C701: mov eax, 0x1103c7a8 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C706: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C70B: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C70D: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C710: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x11004444u; /* 0x1100C712: mov dword ptr [edi], 0x11004444 */
    MEM32(edi + 0x4) = eax; /* 0x1100C718: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = eax; /* 0x1100C71B: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x1100C71E: mov dword ptr [edi + 0xc], eax */
    esi = MEM32(ebp + 0x8); /* 0x1100C721: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x38); /* 0x1100C724: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1100C727: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1100C72A: push esi */
    MEM32(edi + 0x10) = esi; /* 0x1100C72B: mov dword ptr [edi + 0x10], esi */
    MEM32(edi + 0x14) = eax; /* 0x1100C72E: mov dword ptr [edi + 0x14], eax */
    MEM32(edi + 0x18) = eax; /* 0x1100C731: mov dword ptr [edi + 0x18], eax */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C734: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C73A: mov byte ptr [ebp - 4], 1 */
    ecx = esi + 0x38; /* 0x1100C73E: lea ecx, [esi + 0x38] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1; /* 0x1100C741: inc dword ptr [esi + 0x28] */
    _flag_k = FK_INC;
    edx = ebp + (-0x1C); /* 0x1100C744: lea edx, [ebp - 0x1c] */
    eax = MEM32(ecx); /* 0x1100C747: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1100C749: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100C74A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100C778; /* 0x1100C74D: jmp 0x1100c778 */
L_1100C74F:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C74F: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1100C752: push dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1100C755: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C757: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1100C75A: mov dword ptr [ebp - 0x14], eax */
    ecx = edi + 0x4; /* 0x1100C75D: lea ecx, [edi + 4] */
    eax = ebp + (-0x14); /* 0x1100C760: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1100C763: push eax */
    RECOMP_CALL(sub_1100C53C); /* 0x1100C764: call 0x1100c53c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C769: mov ecx, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x18); /* 0x1100C76C: lea edx, [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1100C76F: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100C772: push edx */
    eax = MEM32(ecx); /* 0x1100C773: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100C775: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100C778:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C778: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1100C77B: push dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1100C77E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C780: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1100C783: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x1100C786: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C74F; /* 0x1100C788: jne 0x1100c74f */
L_1100C78A:
    ecx = ebp + (-0x38); /* 0x1100C78A: lea ecx, [ebp - 0x38] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100C78D: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C791: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100C797: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C799: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100C79E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100C7A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C7A1u);

L_1100C7A1:
    PUSH32(esp, 0x2Cu); /* 0x1100C7A1: push 0x2c */
    eax = 0x1103C7A8u; /* 0x1100C7A3: mov eax, 0x1103c7a8 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C7A8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C7AD: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C7AF: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100C7B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x110044FCu; /* 0x1100C7B4: mov dword ptr [edi], 0x110044fc */
    MEM32(edi + 0x4) = eax; /* 0x1100C7BA: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = eax; /* 0x1100C7BD: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x1100C7C0: mov dword ptr [edi + 0xc], eax */
    esi = MEM32(ebp + 0x8); /* 0x1100C7C3: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x38); /* 0x1100C7C6: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1100C7C9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1100C7CC: push esi */
    MEM32(edi + 0x10) = esi; /* 0x1100C7CD: mov dword ptr [edi + 0x10], esi */
    MEM32(edi + 0x14) = eax; /* 0x1100C7D0: mov dword ptr [edi + 0x14], eax */
    MEM32(edi + 0x18) = eax; /* 0x1100C7D3: mov dword ptr [edi + 0x18], eax */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100C7D6: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C7DC: mov byte ptr [ebp - 4], 1 */
    ecx = esi + 0x38; /* 0x1100C7E0: lea ecx, [esi + 0x38] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1; /* 0x1100C7E3: inc dword ptr [esi + 0x28] */
    _flag_k = FK_INC;
    edx = ebp + (-0x1C); /* 0x1100C7E6: lea edx, [ebp - 0x1c] */
    eax = MEM32(ecx); /* 0x1100C7E9: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1100C7EB: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100C7EC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100C81A; /* 0x1100C7EF: jmp 0x1100c81a */
L_1100C7F1:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C7F1: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1100C7F4: push dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1100C7F7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C7F9: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1100C7FC: mov dword ptr [ebp - 0x14], eax */
    ecx = edi + 0x4; /* 0x1100C7FF: lea ecx, [edi + 4] */
    eax = ebp + (-0x14); /* 0x1100C802: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1100C805: push eax */
    RECOMP_CALL(sub_1100C53C); /* 0x1100C806: call 0x1100c53c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C80B: mov ecx, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x18); /* 0x1100C80E: lea edx, [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1100C811: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100C814: push edx */
    eax = MEM32(ecx); /* 0x1100C815: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100C817: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100C81A:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100C81A: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1100C81D: push dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1100C820: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C822: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1100C825: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x1100C828: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C7F1; /* 0x1100C82A: jne 0x1100c7f1 */
L_1100C82C:
    ecx = ebp + (-0x38); /* 0x1100C82C: lea ecx, [ebp - 0x38] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100C82F: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100C833: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100C839: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C83B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100C840: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100C843(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C843u);

L_1100C843:
    PUSH32(esp, ebp); /* 0x1100C843: push ebp */
    ebp = esp; /* 0x1100C844: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100C846: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100C849: push esi */
    esi = ecx; /* 0x1100C84A: mov esi, ecx */
    ecx = esi + 0x18; /* 0x1100C84C: lea ecx, [esi + 0x18] */
    MEM8(esi + 0x138) = (uint8_t)(1); /* 0x1100C84F: mov byte ptr [esi + 0x138], 1 */
    eax = MEM32(ecx); /* 0x1100C856: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100C858: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100C85B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100C85D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100C85F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11069230); /* 0x1100C862: mov eax, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1100C867: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100C86B: mov dword ptr [ebp - 4], eax */
    goto L_1100C879; /* 0x1100C86E: jmp 0x1100c879 */
L_1100C870:
    ecx = ebp + (-0x10); /* 0x1100C870: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100C873: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100C879:
    /* cmp MEM32(esi + 0xD8), 0 */ /* 0x1100C879: cmp dword ptr [esi + 0xd8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100C870; /* 0x1100C880: jne 0x1100c870 */
L_1100C882:
    ecx = esi + 0xE0; /* 0x1100C882: lea ecx, [esi + 0xe0] */
    eax = MEM32(ecx); /* 0x1100C888: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100C88A: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100C88D: pop esi */
    esp = ebp; /* 0x1100C88E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100C890: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C891: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C892(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C892u);

L_1100C892:
    PUSH32(esp, ebp); /* 0x1100C892: push ebp */
    ebp = esp; /* 0x1100C893: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C895: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100C899: push esi */
    esi = ecx; /* 0x1100C89A: mov esi, ecx */
    MEM32(esi) = 0x1100405Cu; /* 0x1100C89C: mov dword ptr [esi], 0x1100405c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C8AC; /* 0x1100C8A2: je 0x1100c8ac */
L_1100C8A4:
    PUSH32(esp, esi); /* 0x1100C8A4: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C8A5: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C8AB: pop ecx */
L_1100C8AC:
    eax = esi; /* 0x1100C8AC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C8AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C8AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C8B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C8B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C8B3u);

L_1100C8B3:
    PUSH32(esp, ebp); /* 0x1100C8B3: push ebp */
    ebp = esp; /* 0x1100C8B4: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100C8B6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100C8BA: push esi */
    esi = ecx; /* 0x1100C8BB: mov esi, ecx */
    MEM32(esi) = 0x11004338u; /* 0x1100C8BD: mov dword ptr [esi], 0x11004338 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C8CD; /* 0x1100C8C3: je 0x1100c8cd */
L_1100C8C5:
    PUSH32(esp, esi); /* 0x1100C8C5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100C8C6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100C8CC: pop ecx */
L_1100C8CD:
    eax = esi; /* 0x1100C8CD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100C8CF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100C8D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C8D1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C8D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C8D4u);

L_1100C8D4:
    PUSH32(esp, ebp); /* 0x1100C8D4: push ebp */
    ebp = esp; /* 0x1100C8D5: mov ebp, esp */
    ecx = MEM32(ecx + 0x10); /* 0x1100C8D7: mov ecx, dword ptr [ecx + 0x10] */
    /* test ecx, ecx */ /* 0x1100C8DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100C8EB; /* 0x1100C8DC: je 0x1100c8eb */
L_1100C8DE:
    eax = MEM32(ecx); /* 0x1100C8DE: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x1100C8E0: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1100C8E3: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100C8E4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100C8E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C8E8: ret 4 */
L_1100C8EB:
    RECOMP_CALL(sub_11013989); /* 0x1100C8EB: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100C8F0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100C8F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C8F1u);

L_1100C8F1:
    PUSH32(esp, 4); /* 0x1100C8F1: push 4 */
    eax = 0x1103C7CBu; /* 0x1100C8F3: mov eax, 0x1103c7cb */
    RECOMP_CALL(sub_1103B372); /* 0x1100C8F8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100C8FD: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100C8FF: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100C902: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = edx; /* 0x1100C904: mov dword ptr [esi + 0x10], edx */
    eax = MEM32(ebp + 0x8); /* 0x1100C907: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1100C90A: mov dword ptr [ebp - 4], edx */
    ecx = MEM32(eax + 0x10); /* 0x1100C90D: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100C910: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100C919; /* 0x1100C912: jne 0x1100c919 */
L_1100C914:
    MEM32(esi + 0x10) = edx; /* 0x1100C914: mov dword ptr [esi + 0x10], edx */
    goto L_1100C928; /* 0x1100C917: jmp 0x1100c928 */
L_1100C919:
    /* cmp ecx, eax */ /* 0x1100C919: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1100C91B: mov eax, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100C922; /* 0x1100C91D: jne 0x1100c922 */
L_1100C91F:
    PUSH32(esp, esi); /* 0x1100C91F: push esi */
    goto L_1100C923; /* 0x1100C920: jmp 0x1100c923 */
L_1100C922:
    PUSH32(esp, edx); /* 0x1100C922: push edx */
L_1100C923:
    RECOMP_ICALL(MEM32(eax)); /* 0x1100C923: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1100C925: mov dword ptr [esi + 0x10], eax */
L_1100C928:
    eax = esi; /* 0x1100C928: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100C92A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100C92F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100C932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C932u);

L_1100C932:
    PUSH32(esp, 4); /* 0x1100C932: push 4 */
    eax = 0x1103C828u; /* 0x1100C934: mov eax, 0x1103c828 */
    RECOMP_CALL(sub_1103B372); /* 0x1100C939: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100C93E: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100C940: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100C943: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100C945: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 0xFFFFFFFFu));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 0xFFFFFFFFu; /* 0x1100C948: or dword ptr [edi + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x11003DDCu; /* 0x1100C94C: mov dword ptr [edi], 0x11003ddc */
    MEM32(edi + 0x4) = ebx; /* 0x1100C952: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0xC) = 0x110041F4u; /* 0x1100C955: mov dword ptr [edi + 0xc], 0x110041f4 */
    MEM32(edi + 0x10) = ebx; /* 0x1100C95C: mov dword ptr [edi + 0x10], ebx */
    ecx = edi + 0x18; /* 0x1100C95F: lea ecx, [edi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100C962: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100C670); /* 0x1100C966: call 0x1100c670 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0xB0; /* 0x1100C96B: lea ecx, [edi + 0xb0] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100C971: mov byte ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100C975: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    eax = edi + 0x18; /* 0x1100C97B: lea eax, [edi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100C97E: mov byte ptr [ebp - 4], 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100C982: cdq  */
    PUSH32(esp, edx); /* 0x1100C983: push edx */
    PUSH32(esp, eax); /* 0x1100C984: push eax */
    eax = edi; /* 0x1100C985: mov eax, edi */
    MEM32(edi + 0xD8) = ebx; /* 0x1100C987: mov dword ptr [edi + 0xd8], ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100C98D: cdq  */
    PUSH32(esp, edx); /* 0x1100C98E: push edx */
    PUSH32(esp, eax); /* 0x1100C98F: push eax */
    PUSH32(esp, ebx); /* 0x1100C990: push ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100C991: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100C997: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 4; /* 0x1100C99A: mov dword ptr [ebp - 4], 4 */
    MEM32(edi + 0xE0) = 0x11004218u; /* 0x1100C9A1: mov dword ptr [edi + 0xe0], 0x11004218 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1100C9AB: mov byte ptr [ebp - 4], 5 */
    ecx = edi + 0xE4; /* 0x1100C9AF: lea ecx, [edi + 0xe4] */
    MEM32(edi) = 0x11003F38u; /* 0x1100C9B5: mov dword ptr [edi], 0x11003f38 */
    MEM32(edi + 0xE0) = 0x11004424u; /* 0x1100C9BB: mov dword ptr [edi + 0xe0], 0x11004424 */
    RECOMP_CALL(sub_1100C5AA); /* 0x1100C9C5: call 0x1100c5aa */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x134) = ebx; /* 0x1100C9CA: mov dword ptr [edi + 0x134], ebx */
    eax = edi; /* 0x1100C9D0: mov eax, edi */
    MEM8(edi + 0x138) = (uint8_t)(LO8(ebx)); /* 0x1100C9D2: mov byte ptr [edi + 0x138], bl */
    RECOMP_CALL(sub_1103B340); /* 0x1100C9D8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100C9DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100C9DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100C9DEu);

L_1100C9DE:
    PUSH32(esp, 0x1Cu); /* 0x1100C9DE: push 0x1c */
    eax = 0x1103C853u; /* 0x1100C9E0: mov eax, 0x1103c853 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100C9E5: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100C9EA: mov esi, ecx */
    eax = ebp + (-0x28); /* 0x1100C9EC: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = 0x11004358u; /* 0x1100C9EF: mov dword ptr [ebp - 0x28], 0x11004358 */
    MEM32(ebp + (-0x24)) = esi; /* 0x1100C9F6: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100C9F9: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100C9FC: mov dword ptr [ebp - 4], 1 */
    ecx = esi + 0x68; /* 0x1100CA03: lea ecx, [esi + 0x68] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100CA06: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100CA08: push eax */
    MEM32(esi + 0x54) = edi; /* 0x1100CA09: mov dword ptr [esi + 0x54], edi */
    MEM32(esi + 0x58) = edi; /* 0x1100CA0C: mov dword ptr [esi + 0x58], edi */
    RECOMP_CALL(sub_1100B3B0); /* 0x1100CA0F: call 0x1100b3b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = edi; /* 0x1100CA14: mov dword ptr [esi + 0x5c], edi */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100CA17: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x18)); /* 0x1100CA1B: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1100CA1E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CA36; /* 0x1100CA20: je 0x1100ca36 */
L_1100CA22:
    edx = MEM32(ecx); /* 0x1100CA22: mov edx, dword ptr [ecx] */
    eax = ebp + (-0x28); /* 0x1100CA24: lea eax, [ebp - 0x28] */
    /* cmp ecx, eax */ /* 0x1100CA27: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100CA29: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100CA2C: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100CA2F: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100CA30: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = edi; /* 0x1100CA33: mov dword ptr [ebp - 0x18], edi */
L_1100CA36:
    /* test esi, esi */ /* 0x1100CA36: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CA40; /* 0x1100CA38: je 0x1100ca40 */
L_1100CA3A:
    edi = esi + 0xE0; /* 0x1100CA3A: lea edi, [esi + 0xe0] */
L_1100CA40:
    MEM32(esi + 0x130) = edi; /* 0x1100CA40: mov dword ptr [esi + 0x130], edi */
    RECOMP_CALL(sub_1103B354); /* 0x1100CA46: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100CA4B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100CA4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CA4Eu);

L_1100CA4E:
    PUSH32(esp, ebp); /* 0x1100CA4E: push ebp */
    ebp = esp; /* 0x1100CA4F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100CA51: push esi */
    esi = ecx; /* 0x1100CA52: mov esi, ecx */
    RECOMP_CALL(sub_1100CB19); /* 0x1100CA54: call 0x1100cb19 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100CA59: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CA67; /* 0x1100CA5D: je 0x1100ca67 */
L_1100CA5F:
    PUSH32(esp, esi); /* 0x1100CA5F: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100CA60: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CA66: pop ecx */
L_1100CA67:
    eax = esi; /* 0x1100CA67: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100CA69: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100CA6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CA6B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CA6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CA6Eu);

L_1100CA6E:
    PUSH32(esp, ebp); /* 0x1100CA6E: push ebp */
    ebp = esp; /* 0x1100CA6F: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100CA71: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100CA75: push esi */
    esi = ecx; /* 0x1100CA76: mov esi, ecx */
    MEM32(esi) = 0x11004378u; /* 0x1100CA78: mov dword ptr [esi], 0x11004378 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CA88; /* 0x1100CA7E: je 0x1100ca88 */
L_1100CA80:
    PUSH32(esp, esi); /* 0x1100CA80: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100CA81: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CA87: pop ecx */
L_1100CA88:
    eax = esi; /* 0x1100CA88: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100CA8A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100CA8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CA8C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CA8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CA8Fu);

L_1100CA8F:
    PUSH32(esp, ebp); /* 0x1100CA8F: push ebp */
    ebp = esp; /* 0x1100CA90: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100CA92: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100CA96: push esi */
    esi = ecx; /* 0x1100CA97: mov esi, ecx */
    MEM32(esi) = 0x11003FD4u; /* 0x1100CA99: mov dword ptr [esi], 0x11003fd4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CAA9; /* 0x1100CA9F: je 0x1100caa9 */
L_1100CAA1:
    PUSH32(esp, esi); /* 0x1100CAA1: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100CAA2: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CAA8: pop ecx */
L_1100CAA9:
    eax = esi; /* 0x1100CAA9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100CAAB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100CAAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CAAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CAB0u);

L_1100CAB0:
    PUSH32(esp, ebp); /* 0x1100CAB0: push ebp */
    ebp = esp; /* 0x1100CAB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100CAB3: push esi */
    esi = ecx; /* 0x1100CAB4: mov esi, ecx */
    RECOMP_CALL(sub_1100CAD0); /* 0x1100CAB6: call 0x1100cad0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100CABB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CAC9; /* 0x1100CABF: je 0x1100cac9 */
L_1100CAC1:
    PUSH32(esp, esi); /* 0x1100CAC1: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100CAC2: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CAC8: pop ecx */
L_1100CAC9:
    eax = esi; /* 0x1100CAC9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100CACB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100CACC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CACD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CAD0u);

L_1100CAD0:
    PUSH32(esp, 4); /* 0x1100CAD0: push 4 */
    eax = 0x1103C880u; /* 0x1100CAD2: mov eax, 0x1103c880 */
    RECOMP_CALL(sub_1103B372); /* 0x1100CAD7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CADC: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100CADE: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004238u; /* 0x1100CAE1: mov dword ptr [esi], 0x11004238 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100CAE7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100CAFA; /* 0x1100CAEB: jmp 0x1100cafa */
L_1100CAED:
    PUSH32(esp, 0); /* 0x1100CAED: push 0 */
    ecx = esi; /* 0x1100CAEF: mov ecx, esi */
    RECOMP_CALL(sub_1101157D); /* 0x1100CAF1: call 0x1101157d */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100CAF6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CB05; /* 0x1100CAF8: je 0x1100cb05 */
L_1100CAFA:
    ecx = esi; /* 0x1100CAFA: mov ecx, esi */
    RECOMP_CALL(sub_110115D9); /* 0x1100CAFC: call 0x110115d9 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100CB01: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CAED; /* 0x1100CB03: je 0x1100caed */
L_1100CB05:
    ecx = esi; /* 0x1100CB05: mov ecx, esi */
    RECOMP_CALL(sub_110115FC); /* 0x1100CB07: call 0x110115fc */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1100CB0C: mov ecx, esi */
    RECOMP_CALL(sub_110114DC); /* 0x1100CB0E: call 0x110114dc */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100CB13: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CB18: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CB19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CB19u);

L_1100CB19:
    PUSH32(esp, 4); /* 0x1100CB19: push 4 */
    eax = 0x1103C880u; /* 0x1100CB1B: mov eax, 0x1103c880 */
    RECOMP_CALL(sub_1103B372); /* 0x1100CB20: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CB25: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100CB27: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x1100407Cu; /* 0x1100CB2A: mov dword ptr [esi], 0x1100407c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100CB30: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100CB43; /* 0x1100CB34: jmp 0x1100cb43 */
L_1100CB36:
    PUSH32(esp, 0); /* 0x1100CB36: push 0 */
    ecx = esi; /* 0x1100CB38: mov ecx, esi */
    RECOMP_CALL(sub_1101157D); /* 0x1100CB3A: call 0x1101157d */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100CB3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CB4E; /* 0x1100CB41: je 0x1100cb4e */
L_1100CB43:
    ecx = esi; /* 0x1100CB43: mov ecx, esi */
    RECOMP_CALL(sub_110115D9); /* 0x1100CB45: call 0x110115d9 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100CB4A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CB36; /* 0x1100CB4C: je 0x1100cb36 */
L_1100CB4E:
    ecx = esi; /* 0x1100CB4E: mov ecx, esi */
    RECOMP_CALL(sub_110115FC); /* 0x1100CB50: call 0x110115fc */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1100CB55: mov ecx, esi */
    RECOMP_CALL(sub_110114DC); /* 0x1100CB57: call 0x110114dc */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100CB5C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CB61: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CB62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CB62u);

L_1100CB62:
    PUSH32(esp, ebp); /* 0x1100CB62: push ebp */
    ebp = esp; /* 0x1100CB63: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100CB65: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100CB68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1100CB6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CB86; /* 0x1100CB6C: je 0x1100cb86 */
L_1100CB6E:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1100CB6E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1100CB81; /* 0x1100CB71: ja 0x1100cb81 */
L_1100CB73:
    PUSH32(esp, eax); /* 0x1100CB73: push eax */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100CB74: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CB7A: pop ecx */
    ecx = eax; /* 0x1100CB7B: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1100CB7D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100CB86; /* 0x1100CB7F: jne 0x1100cb86 */
L_1100CB81:
    goto L_1101163C; /* 0x1100CB81: jmp 0x1101163c */
L_1100CB86:
    eax = ecx; /* 0x1100CB86: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1100CB88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CB89: ret  */
L_1101163C:
    PUSH32(esp, ebp); /* 0x1101163C: push ebp */
    ebp = esp; /* 0x1101163D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1101163F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x11011642: push 1 */
    eax = ebp + (-0x4); /* 0x11011644: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110049A0u; /* 0x11011647: mov dword ptr [ebp - 4], 0x110049a0 */
    PUSH32(esp, eax); /* 0x1101164E: push eax */
    ecx = ebp + (-0x10); /* 0x1101164F: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11011652: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011658: push 0x11045724 */
    eax = ebp + (-0x10); /* 0x1101165D: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x11001458u; /* 0x11011660: mov dword ptr [ebp - 0x10], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011667: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011668: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101166Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100CB8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CB8Au);

L_1100CB8A:
    PUSH32(esp, ebp); /* 0x1100CB8A: push ebp */
    ebp = esp; /* 0x1100CB8B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100CB8D: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100CB90: push -1 */
    PUSH32(esp, 0x1103C8AEu); /* 0x1100CB92: push 0x1103c8ae */
    eax = MEM32(FS_BASE + (0)); /* 0x1100CB97: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100CB9D: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x1100CB9E: sub esp, 0x88 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100CBA4: push esi */
    eax = MEM32(0x110631D0); /* 0x1100CBA5: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100CBAA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100CBAC: push eax */
    eax = esp + 0x90; /* 0x1100CBAD: lea eax, [esp + 0x90] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100CBB4: mov dword ptr fs:[0], eax */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100CBBA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1100CBBE: push edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100CBE5; /* 0x1100CBBF: je 0x1100cbe5 */
L_1100CBC1:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100CBC1: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1100CBC4: push ecx */
    ecx = esp + 0x18; /* 0x1100CBC5: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_1100CCEE); /* 0x1100CBC9: call 0x1100ccee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x98)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x98) = MEM32(esp + 0x98) & 0; /* 0x1100CBCE: and dword ptr [esp + 0x98], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0xC; /* 0x1100CBD6: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_1100CDE3); /* 0x1100CBDA: call 0x1100cde3 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0xC; /* 0x1100CBDF: lea ecx, [esp + 0xc] */
    goto L_1100CC07; /* 0x1100CBE3: jmp 0x1100cc07 */
L_1100CBE5:
    PUSH32(esp, ecx); /* 0x1100CBE5: push ecx */
    ecx = esp + 0x54; /* 0x1100CBE6: lea ecx, [esp + 0x54] */
    RECOMP_CALL(sub_1100CC95); /* 0x1100CBEA: call 0x1100cc95 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x4C; /* 0x1100CBEF: lea ecx, [esp + 0x4c] */
    MEM32(esp + 0x98) = 1; /* 0x1100CBF3: mov dword ptr [esp + 0x98], 1 */
    RECOMP_CALL(sub_1100CDE3); /* 0x1100CBFE: call 0x1100cde3 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x4C; /* 0x1100CC03: lea ecx, [esp + 0x4c] */
L_1100CC07:
    _flag_a = (uint32_t)((MEM32(esp + 0x98) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x98) | 0xFFFFFFFFu));
    MEM32(esp + 0x98) = MEM32(esp + 0x98) | 0xFFFFFFFFu; /* 0x1100CC07: or dword ptr [esp + 0x98], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1100CC0F: mov esi, eax */
    RECOMP_CALL(sub_1100CD74); /* 0x1100CC11: call 0x1100cd74 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100CC16: mov eax, esi */
    ecx = MEM32(esp + 0x90); /* 0x1100CC18: mov ecx, dword ptr [esp + 0x90] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100CC1F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100CC26: pop ecx */
    esi = POP32_VAL(esp); /* 0x1100CC27: pop esi */
    esp = ebp; /* 0x1100CC28: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100CC2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CC2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CC2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CC2Cu);

L_1100CC2C:
    PUSH32(esp, ebp); /* 0x1100CC2C: push ebp */
    ebp = esp; /* 0x1100CC2D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100CC2F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100CC32: push -1 */
    PUSH32(esp, 0x1103C8D7u); /* 0x1100CC34: push 0x1103c8d7 */
    eax = MEM32(FS_BASE + (0)); /* 0x1100CC39: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100CC3F: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x1100CC40: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100CC43: push esi */
    eax = MEM32(0x110631D0); /* 0x1100CC44: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100CC49: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100CC4B: push eax */
    eax = esp + 0x50; /* 0x1100CC4C: lea eax, [esp + 0x50] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100CC50: mov dword ptr fs:[0], eax */
    PUSH32(esp, edx); /* 0x1100CC56: push edx */
    PUSH32(esp, ecx); /* 0x1100CC57: push ecx */
    ecx = esp + 0x14; /* 0x1100CC58: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1100CFE7); /* 0x1100CC5C: call 0x1100cfe7 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0xC; /* 0x1100CC61: lea ecx, [esp + 0xc] */
    MEM32(esp + 0x58) = 1; /* 0x1100CC65: mov dword ptr [esp + 0x58], 1 */
    RECOMP_CALL(sub_1100CDE3); /* 0x1100CC6D: call 0x1100cde3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x58) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x58) | 0xFFFFFFFFu));
    MEM32(esp + 0x58) = MEM32(esp + 0x58) | 0xFFFFFFFFu; /* 0x1100CC72: or dword ptr [esp + 0x58], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0xC; /* 0x1100CC77: lea ecx, [esp + 0xc] */
    esi = eax; /* 0x1100CC7B: mov esi, eax */
    RECOMP_CALL(sub_1100D040); /* 0x1100CC7D: call 0x1100d040 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100CC82: mov eax, esi */
    ecx = MEM32(esp + 0x50); /* 0x1100CC84: mov ecx, dword ptr [esp + 0x50] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100CC88: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100CC8F: pop ecx */
    esi = POP32_VAL(esp); /* 0x1100CC90: pop esi */
    esp = ebp; /* 0x1100CC91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100CC93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CC94: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CC95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CC95u);

L_1100CC95:
    PUSH32(esp, 4); /* 0x1100CC95: push 4 */
    eax = 0x1103C906u; /* 0x1100CC97: mov eax, 0x1103c906 */
    RECOMP_CALL(sub_1103B372); /* 0x1100CC9C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CCA1: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100CCA3: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x1100CCA6: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi + 0x14; /* 0x1100CCA9: lea ecx, [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100CCAC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1100CCAE: mov dword ptr [ebp - 4], edi */
    MEM32(esi) = 0x11003E38u; /* 0x1100CCB1: mov dword ptr [esi], 0x11003e38 */
    MEM32(esi + 0x4) = edi; /* 0x1100CCB7: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edi; /* 0x1100CCBA: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1100CCBD: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = eax; /* 0x1100CCC0: mov dword ptr [esi + 0x10], eax */
    RECOMP_ICALL(MEM32(0x110690F4)); /* 0x1100CCC3: call dword ptr [0x110690f4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100CCC9: mov ecx, dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100CCCC: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x3C) = edi; /* 0x1100CCD0: mov dword ptr [esi + 0x3c], edi */
    /* test ecx, ecx */ /* 0x1100CCD3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100CCDE; /* 0x1100CCD5: jne 0x1100ccde */
L_1100CCD7:
    RECOMP_CALL(sub_1100CFB7); /* 0x1100CCD7: call 0x1100cfb7 */
    RECOMP_FLAGS_IN();
    goto L_1100CCE4; /* 0x1100CCDC: jmp 0x1100cce4 */
L_1100CCDE:
    eax = MEM32(ecx); /* 0x1100CCDE: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100CCE0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100CCE1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100CCE4:
    eax = esi; /* 0x1100CCE4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100CCE6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100CCEB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100CCEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CCEEu);

L_1100CCEE:
    PUSH32(esp, 4); /* 0x1100CCEE: push 4 */
    eax = 0x1103C940u; /* 0x1100CCF0: mov eax, 0x1103c940 */
    RECOMP_CALL(sub_1103B372); /* 0x1100CCF5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CCFA: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100CCFC: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100CCFF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x1100CD01: lea ecx, [esi + 0x14] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1100CD04: mov dword ptr [ebp - 4], edi */
    eax = MEM32(ebp + 0x10); /* 0x1100CD07: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = 0x11003E38u; /* 0x1100CD0A: mov dword ptr [esi], 0x11003e38 */
    MEM32(esi + 0x4) = edi; /* 0x1100CD10: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edi; /* 0x1100CD13: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1100CD16: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = eax; /* 0x1100CD19: mov dword ptr [esi + 0x10], eax */
    RECOMP_ICALL(MEM32(0x110690F4)); /* 0x1100CD1C: call dword ptr [0x110690f4] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1100CD22: mov ebx, dword ptr [ebp + 0xc] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100CD25: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x3C) = edi; /* 0x1100CD29: mov dword ptr [esi + 0x3c], edi */
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x1100CD2C: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100CD56; /* 0x1100CD2F: je 0x1100cd56 */
L_1100CD31:
    PUSH32(esp, 0x18u); /* 0x1100CD31: push 0x18 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100CD33: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CD39: pop ecx */
    MEM32(ebp + 0x10) = eax; /* 0x1100CD3A: mov dword ptr [ebp + 0x10], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100CD3D: mov byte ptr [ebp - 4], 2 */
    /* test eax, eax */ /* 0x1100CD41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CD4F; /* 0x1100CD43: je 0x1100cd4f */
L_1100CD45:
    PUSH32(esp, ebx); /* 0x1100CD45: push ebx */
    ecx = eax; /* 0x1100CD46: mov ecx, eax */
    RECOMP_CALL(sub_1100C8F1); /* 0x1100CD48: call 0x1100c8f1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100CD4D: mov edi, eax */
L_1100CD4F:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100CD4F: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x3C) = edi; /* 0x1100CD53: mov dword ptr [esi + 0x3c], edi */
L_1100CD56:
    ecx = MEM32(ebp + 0x8); /* 0x1100CD56: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1100CD59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100CD64; /* 0x1100CD5B: jne 0x1100cd64 */
L_1100CD5D:
    RECOMP_CALL(sub_1100CFB7); /* 0x1100CD5D: call 0x1100cfb7 */
    RECOMP_FLAGS_IN();
    goto L_1100CD6A; /* 0x1100CD62: jmp 0x1100cd6a */
L_1100CD64:
    eax = MEM32(ecx); /* 0x1100CD64: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100CD66: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100CD67: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100CD6A:
    eax = esi; /* 0x1100CD6A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100CD6C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100CD71: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100CD74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CD74u);

L_1100CD74:
    PUSH32(esp, 8); /* 0x1100CD74: push 8 */
    eax = 0x1103C96Fu; /* 0x1100CD76: mov eax, 0x1103c96f */
    RECOMP_CALL(sub_1103B372); /* 0x1100CD7B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CD80: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1100CD82: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0x11003E38u; /* 0x1100CD85: mov dword ptr [esi], 0x11003e38 */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100CD8B: mov dword ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x11003E50)); /* 0x1100CD92: call dword ptr [0x11003e50] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x3C); /* 0x1100CD98: mov edi, dword ptr [esi + 0x3c] */
    /* test edi, edi */ /* 0x1100CD9B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CDAE; /* 0x1100CD9D: je 0x1100cdae */
L_1100CD9F:
    ecx = edi; /* 0x1100CD9F: mov ecx, edi */
    RECOMP_CALL(sub_1100A32D); /* 0x1100CDA1: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100CDA6: push edi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100CDA7: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100CDAD: pop ecx */
L_1100CDAE:
    eax = MEM32(esi + 0xC); /* 0x1100CDAE: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100CDB1: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1100CDB4: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100CDB7: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1100CDBA: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100CDCA; /* 0x1100CDBE: je 0x1100cdca */
L_1100CDC0:
    ecx = MEM32(ebp + (-0x10)); /* 0x1100CDC0: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 1); /* 0x1100CDC3: push 1 */
    eax = MEM32(ecx); /* 0x1100CDC5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100CDC7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100CDCA:
    ecx = esi + 0x14; /* 0x1100CDCA: lea ecx, [esi + 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100CDCD: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F8)); /* 0x1100CDD1: call dword ptr [0x110690f8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11004218u; /* 0x1100CDD7: mov dword ptr [esi], 0x11004218 */
    RECOMP_CALL(sub_1103B340); /* 0x1100CDDD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CDE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CDE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CDE3u);

L_1100CDE3:
    PUSH32(esp, ebp); /* 0x1100CDE3: push ebp */
    ebp = esp; /* 0x1100CDE4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100CDE6: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100CDE9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100CDEB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100CDEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100CDEE: push esi */
    esi = ecx; /* 0x1100CDEF: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100CDF1: push edi */
    edi = esi + 0x4; /* 0x1100CDF2: lea edi, [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = edx; } else { eax = _d; } } /* 0x1100CDF5: lock cmpxchg dword ptr [edi], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1100CDF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100CE09; /* 0x1100CDFB: jne 0x1100ce09 */
L_1100CDFD:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1100CDFD: push dword ptr [esi + 0x10] */
    ecx = esi + 0x14; /* 0x1100CE00: lea ecx, [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x110690FC)); /* 0x1100CE03: call dword ptr [0x110690fc] */
    RECOMP_FLAGS_IN();
L_1100CE09:
    eax = MEM32(esi); /* 0x1100CE09: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100CE0B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100CE0D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), 2 */ /* 0x1100CE10: cmp dword ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100CE21; /* 0x1100CE13: jne 0x1100ce21 */
L_1100CE15:
    eax = MEM32(esi + 0xC); /* 0x1100CE15: mov eax, dword ptr [esi + 0xc] */
    edi = POP32_VAL(esp); /* 0x1100CE18: pop edi */
    esi = POP32_VAL(esp); /* 0x1100CE19: pop esi */
    eax = MEM32(eax + 0x8); /* 0x1100CE1A: mov eax, dword ptr [eax + 8] */
    esp = ebp; /* 0x1100CE1D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100CE1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CE20: ret  */
L_1100CE21:
    ecx = ebp + (-0xC); /* 0x1100CE21: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110691FC)); /* 0x1100CE24: call dword ptr [0x110691fc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104553Cu); /* 0x1100CE2A: push 0x1104553c */
    eax = ebp + (-0xC); /* 0x1100CE2F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100CE32: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100CE33: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100CE38u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100CE39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CE39u);

L_1100CE39:
    PUSH32(esp, ebp); /* 0x1100CE39: push ebp */
    ebp = esp; /* 0x1100CE3A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1100CE3C: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100CE3F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1100CE40: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100CE43: push esi */
    esi = ecx; /* 0x1100CE44: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100CE46: push edi */
    /* test ebx, ebx */ /* 0x1100CE47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CEDE; /* 0x1100CE49: je 0x1100cede */
L_1100CE4F:
    ecx = MEM32(ebp + 0xC); /* 0x1100CE4F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1100CE52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100CE7E; /* 0x1100CE54: jne 0x1100ce7e */
L_1100CE56:
    eax = ebp + (-0x4); /* 0x1100CE56: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x1100CE59: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x1100CE60: push eax */
    ecx = ebp + (-0x1C); /* 0x1100CE61: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100CE64: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x1100CE6A: mov dword ptr [ebp - 0x1c], 0x11001470 */
    eax = ebp + (-0x1C); /* 0x1100CE71: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x1100CE74: push 0x11045568 */
    goto L_1100CF01; /* 0x1100CE79: jmp 0x1100cf01 */
L_1100CE7E:
    PUSH32(esp, 2); /* 0x1100CE7E: push 2 */
    edi = POP32_VAL(esp); /* 0x1100CE80: pop edi */
    /* cmp MEM32(esi + 0x4), edi */ /* 0x1100CE81: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100CE8B; /* 0x1100CE84: jne 0x1100ce8b */
L_1100CE86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100CE86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100CE88: inc eax */
    _flag_k = FK_INC;
    goto L_1100CED5; /* 0x1100CE89: jmp 0x1100ced5 */
L_1100CE8B:
    eax = MEM32(esi + 0x3C); /* 0x1100CE8B: mov eax, dword ptr [esi + 0x3c] */
    /* test eax, eax */ /* 0x1100CE8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CEA9; /* 0x1100CE90: je 0x1100cea9 */
L_1100CE92:
    ecx = MEM32(eax + 0x10); /* 0x1100CE92: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100CE95: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CF07; /* 0x1100CE97: je 0x1100cf07 */
L_1100CE99:
    edx = MEM32(ecx); /* 0x1100CE99: mov edx, dword ptr [ecx] */
    eax = ebx + 0x8; /* 0x1100CE9B: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1100CE9E: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100CE9F: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100CEA2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CE86; /* 0x1100CEA4: je 0x1100ce86 */
L_1100CEA6:
    ecx = MEM32(ebp + 0xC); /* 0x1100CEA6: mov ecx, dword ptr [ebp + 0xc] */
L_1100CEA9:
    eax = MEM32(ecx); /* 0x1100CEA9: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100CEAB: push esi */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1100CEAC: push dword ptr [ebx + 4] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100CEAF: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1100CEB2: mov dword ptr [esi + 0xc], eax */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x1100CEB5: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100CED2; /* 0x1100CEB9: je 0x1100ced2 */
L_1100CEBB:
    eax = esi + 0x4; /* 0x1100CEBB: lea eax, [esi + 4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1100CEBE: xchg dword ptr [eax], edi */
      MEM32(eax) = edi;
      edi = _tmp; }
    /* cmp edi, 1 */ /* 0x1100CEC0: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100CECE; /* 0x1100CEC3: jne 0x1100cece */
L_1100CEC5:
    ecx = esi + 0x14; /* 0x1100CEC5: lea ecx, [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x11069100)); /* 0x1100CEC8: call dword ptr [0x11069100] */
    RECOMP_FLAGS_IN();
L_1100CECE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100CECE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100CED5; /* 0x1100CED0: jmp 0x1100ced5 */
L_1100CED2:
    PUSH32(esp, 3); /* 0x1100CED2: push 3 */
    eax = POP32_VAL(esp); /* 0x1100CED4: pop eax */
L_1100CED5:
    edi = POP32_VAL(esp); /* 0x1100CED5: pop edi */
    esi = POP32_VAL(esp); /* 0x1100CED6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100CED7: pop ebx */
    esp = ebp; /* 0x1100CED8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100CEDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100CEDB: ret 8 */
L_1100CEDE:
    eax = ebp + 0x8; /* 0x1100CEDE: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x1100CEE1: mov dword ptr [ebp + 8], 0x110038cc */
    PUSH32(esp, eax); /* 0x1100CEE8: push eax */
    ecx = ebp + (-0x10); /* 0x1100CEE9: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100CEEC: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x1100CEF2: mov dword ptr [ebp - 0x10], 0x11001470 */
    eax = ebp + (-0x10); /* 0x1100CEF9: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x11045568u); /* 0x1100CEFC: push 0x11045568 */
L_1100CF01:
    PUSH32(esp, eax); /* 0x1100CF01: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100CF02: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100CF07:
    RECOMP_CALL(sub_11013989); /* 0x1100CF07: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100CF0Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100CF0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CF0Du);

L_1100CF0D:
    PUSH32(esp, ebp); /* 0x1100CF0D: push ebp */
    ebp = esp; /* 0x1100CF0E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100CF10: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100CF13: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100CF31; /* 0x1100CF17: je 0x1100cf31 */
L_1100CF19:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100CF19: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100CF28; /* 0x1100CF1D: jne 0x1100cf28 */
L_1100CF1F:
    MEM32(ebp + 0x8) = 0x110038D8u; /* 0x1100CF1F: mov dword ptr [ebp + 8], 0x110038d8 */
    goto L_1100CF38; /* 0x1100CF26: jmp 0x1100cf38 */
L_1100CF28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100CF28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100CF2A: inc eax */
    _flag_k = FK_INC;
    esp = ebp; /* 0x1100CF2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100CF2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100CF2E: ret 8 */
L_1100CF31:
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x1100CF31: mov dword ptr [ebp + 8], 0x110038cc */
L_1100CF38:
    eax = ebp + 0x8; /* 0x1100CF38: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100CF3B: push eax */
    ecx = ebp + (-0xC); /* 0x1100CF3C: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100CF3F: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100CF45: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x1100CF4A: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100CF4D: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100CF54: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100CF55: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100CF5Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100CF5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CF5Bu);

L_1100CF5B:
    PUSH32(esp, ebp); /* 0x1100CF5B: push ebp */
    ebp = esp; /* 0x1100CF5C: mov ebp, esp */
    edx = ecx; /* 0x1100CF5E: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1100CF60: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1100CF63: push edx */
    MEM32(edx + 0x8) = ecx; /* 0x1100CF64: mov dword ptr [edx + 8], ecx */
    eax = MEM32(ecx); /* 0x1100CF67: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1100CF69: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100CF6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CF6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CF70u);

L_1100CF70:
    PUSH32(esp, ebp); /* 0x1100CF70: push ebp */
    ebp = esp; /* 0x1100CF71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100CF73: push esi */
    PUSH32(esp, edi); /* 0x1100CF74: push edi */
    edi = ecx; /* 0x1100CF75: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100CF77: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1100CF79: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1100CF7C: mov eax, ecx */
    edx = edi + 0x8; /* 0x1100CF7E: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1100CF81: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1100CF85: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100CF8F; /* 0x1100CF87: jne 0x1100cf8f */
L_1100CF89:
    eax = MEM32(ecx); /* 0x1100CF89: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100CF8B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1100CF8C: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_1100CF8F:
    edi = POP32_VAL(esp); /* 0x1100CF8F: pop edi */
    esi = POP32_VAL(esp); /* 0x1100CF90: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100CF91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100CF92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100CF95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CF95u);

L_1100CF95:
    PUSH32(esp, esi); /* 0x1100CF95: push esi */
    PUSH32(esp, edi); /* 0x1100CF96: push edi */
    edi = ecx; /* 0x1100CF97: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100CF99: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x8; /* 0x1100CF9B: lea eax, [edi + 8] */
    { uint32_t _tmp = MEM32(eax); /* 0x1100CF9E: xchg dword ptr [eax], esi */
      MEM32(eax) = esi;
      esi = _tmp; }
    /* test esi, esi */ /* 0x1100CFA0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100CFB4; /* 0x1100CFA2: je 0x1100cfb4 */
L_1100CFA4:
    eax = MEM32(esi); /* 0x1100CFA4: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100CFA6: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100CFA8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100CFA9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100CFAC: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100CFAE: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100CFB0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1100CFB1: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_1100CFB4:
    edi = POP32_VAL(esp); /* 0x1100CFB4: pop edi */
    esi = POP32_VAL(esp); /* 0x1100CFB5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100CFB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100CFB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CFB7u);

L_1100CFB7:
    PUSH32(esp, ebp); /* 0x1100CFB7: push ebp */
    ebp = esp; /* 0x1100CFB8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100CFBA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x1100CFBD: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x1100CFC0: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x1100CFC7: push eax */
    ecx = ebp + (-0x10); /* 0x1100CFC8: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100CFCB: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100CFD1: push 0x11045568 */
    eax = ebp + (-0x10); /* 0x1100CFD6: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x1100CFD9: mov dword ptr [ebp - 0x10], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100CFE0: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100CFE1: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100CFE6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100CFE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100CFE7u);

L_1100CFE7:
    PUSH32(esp, 4); /* 0x1100CFE7: push 4 */
    eax = 0x1103C99Eu; /* 0x1100CFE9: mov eax, 0x1103c99e */
    RECOMP_CALL(sub_1103B372); /* 0x1100CFEE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100CFF3: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100CFF5: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x1100CFF8: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi + 0x14; /* 0x1100CFFB: lea ecx, [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100CFFE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1100D000: mov dword ptr [ebp - 4], edi */
    MEM32(esi) = 0x110043B8u; /* 0x1100D003: mov dword ptr [esi], 0x110043b8 */
    MEM32(esi + 0x4) = edi; /* 0x1100D009: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edi; /* 0x1100D00C: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1100D00F: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = eax; /* 0x1100D012: mov dword ptr [esi + 0x10], eax */
    RECOMP_ICALL(MEM32(0x110690F4)); /* 0x1100D015: call dword ptr [0x110690f4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100D01B: mov ecx, dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100D01E: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x3C) = edi; /* 0x1100D022: mov dword ptr [esi + 0x3c], edi */
    /* test ecx, ecx */ /* 0x1100D025: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D030; /* 0x1100D027: jne 0x1100d030 */
L_1100D029:
    RECOMP_CALL(sub_1100CFB7); /* 0x1100D029: call 0x1100cfb7 */
    RECOMP_FLAGS_IN();
    goto L_1100D036; /* 0x1100D02E: jmp 0x1100d036 */
L_1100D030:
    eax = MEM32(ecx); /* 0x1100D030: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100D032: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D033: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D036:
    eax = esi; /* 0x1100D036: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100D038: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D03D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100D040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D040u);

L_1100D040:
    PUSH32(esp, 8); /* 0x1100D040: push 8 */
    eax = 0x1103C9CDu; /* 0x1100D042: mov eax, 0x1103c9cd */
    RECOMP_CALL(sub_1103B372); /* 0x1100D047: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D04C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1100D04E: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0x110043B8u; /* 0x1100D051: mov dword ptr [esi], 0x110043b8 */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100D057: mov dword ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x110043D0)); /* 0x1100D05E: call dword ptr [0x110043d0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x3C); /* 0x1100D064: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x1100D067: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D071; /* 0x1100D069: je 0x1100d071 */
L_1100D06B:
    PUSH32(esp, ecx); /* 0x1100D06B: push ecx */
    RECOMP_CALL(sub_1100B054); /* 0x1100D06C: call 0x1100b054 */
    RECOMP_FLAGS_IN();
L_1100D071:
    eax = MEM32(esi + 0xC); /* 0x1100D071: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100D074: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1100D077: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1100D07A: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1100D07D: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100D08D; /* 0x1100D081: je 0x1100d08d */
L_1100D083:
    ecx = MEM32(ebp + (-0x10)); /* 0x1100D083: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 1); /* 0x1100D086: push 1 */
    eax = MEM32(ecx); /* 0x1100D088: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D08A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D08D:
    ecx = esi + 0x14; /* 0x1100D08D: lea ecx, [esi + 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100D090: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F8)); /* 0x1100D094: call dword ptr [0x110690f8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003E58u; /* 0x1100D09A: mov dword ptr [esi], 0x11003e58 */
    RECOMP_CALL(sub_1103B340); /* 0x1100D0A0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D0A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D0A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D0A6u);

L_1100D0A6:
    PUSH32(esp, ebp); /* 0x1100D0A6: push ebp */
    ebp = esp; /* 0x1100D0A7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100D0A9: push esi */
    esi = ecx; /* 0x1100D0AA: mov esi, ecx */
    RECOMP_CALL(sub_1100CD74); /* 0x1100D0AC: call 0x1100cd74 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100D0B1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D0BF; /* 0x1100D0B5: je 0x1100d0bf */
L_1100D0B7:
    PUSH32(esp, esi); /* 0x1100D0B7: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100D0B8: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100D0BE: pop ecx */
L_1100D0BF:
    eax = esi; /* 0x1100D0BF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100D0C1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100D0C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D0C3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100D0E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D0E2u);

L_1100D0E2:
    PUSH32(esp, ebp); /* 0x1100D0E2: push ebp */
    ebp = esp; /* 0x1100D0E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100D0E5: push esi */
    esi = ecx; /* 0x1100D0E6: mov esi, ecx */
    RECOMP_CALL(sub_1100D040); /* 0x1100D0E8: call 0x1100d040 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100D0ED: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D0FB; /* 0x1100D0F1: je 0x1100d0fb */
L_1100D0F3:
    PUSH32(esp, esi); /* 0x1100D0F3: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100D0F4: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100D0FA: pop ecx */
L_1100D0FB:
    eax = esi; /* 0x1100D0FB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100D0FD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100D0FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D0FF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100D102(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D102u);

L_1100D102:
    PUSH32(esp, ebp); /* 0x1100D102: push ebp */
    ebp = esp; /* 0x1100D103: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100D105: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100D108: push -1 */
    PUSH32(esp, 0x1103CA0Cu); /* 0x1100D10A: push 0x1103ca0c */
    eax = MEM32(FS_BASE + (0)); /* 0x1100D10F: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100D115: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x1100D116: sub esp, 0x78 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100D119: push ebx */
    PUSH32(esp, esi); /* 0x1100D11A: push esi */
    PUSH32(esp, edi); /* 0x1100D11B: push edi */
    eax = MEM32(0x110631D0); /* 0x1100D11C: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100D121: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100D123: push eax */
    eax = esp + 0x88; /* 0x1100D124: lea eax, [esp + 0x88] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100D12B: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x1100D131: mov ebx, edx */
    edi = ecx; /* 0x1100D133: mov edi, ecx */
    /* test edi, edi */ /* 0x1100D135: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D19D; /* 0x1100D137: je 0x1100d19d */
L_1100D139:
    eax = MEM32(edi); /* 0x1100D139: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100D13B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D13E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D19D; /* 0x1100D140: je 0x1100d19d */
L_1100D142:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100D142: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = 0x110043D8u; /* 0x1100D144: mov dword ptr [esp + 0x10], 0x110043d8 */
    MEM32(esp + 0x14) = esi; /* 0x1100D14C: mov dword ptr [esp + 0x14], esi */
    MEM32(esp + 0x90) = esi; /* 0x1100D150: mov dword ptr [esp + 0x90], esi */
    PUSH32(esp, 0x14u); /* 0x1100D157: push 0x14 */
    MEM32(esp + 0x1C) = edi; /* 0x1100D159: mov dword ptr [esp + 0x1c], edi */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100D15D: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100D163: pop ecx */
    /* test eax, eax */ /* 0x1100D164: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D172; /* 0x1100D166: je 0x1100d172 */
L_1100D168:
    PUSH32(esp, ebx); /* 0x1100D168: push ebx */
    ecx = eax; /* 0x1100D169: mov ecx, eax */
    RECOMP_CALL(sub_1100B705); /* 0x1100D16B: call 0x1100b705 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100D170: mov esi, eax */
L_1100D172:
    ecx = MEM32(esp + 0x18); /* 0x1100D172: mov ecx, dword ptr [esp + 0x18] */
    edx = esp + 0x10; /* 0x1100D176: lea edx, [esp + 0x10] */
    MEM32(esp + 0x14) = esi; /* 0x1100D17A: mov dword ptr [esp + 0x14], esi */
    PUSH32(esp, edx); /* 0x1100D17E: push edx */
    PUSH32(esp, esi); /* 0x1100D17F: push esi */
    eax = MEM32(ecx); /* 0x1100D180: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D182: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100D185: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x10; /* 0x1100D187: lea ecx, [esp + 0x10] */
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100D18B: sete bl */
    _flag_a = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu));
    MEM32(esp + 0x90) = MEM32(esp + 0x90) | 0xFFFFFFFFu; /* 0x1100D18E: or dword ptr [esp + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100D35A); /* 0x1100D196: call 0x1100d35a */
    RECOMP_FLAGS_IN();
    goto L_1100D216; /* 0x1100D19B: jmp 0x1100d216 */
L_1100D19D:
    MEM32(esp + 0x90) = 1; /* 0x1100D19D: mov dword ptr [esp + 0x90], 1 */
    ecx = esp + 0x24; /* 0x1100D1A8: lea ecx, [esp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100D1AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0x1100430Cu; /* 0x1100D1AE: mov dword ptr [esp + 0x1c], 0x1100430c */
    MEM32(esp + 0x20) = esi; /* 0x1100D1B6: mov dword ptr [esp + 0x20], esi */
    RECOMP_ICALL(MEM32(0x110690F4)); /* 0x1100D1BA: call dword ptr [0x110690f4] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(2); /* 0x1100D1C0: mov byte ptr [esp + 0x90], 2 */
    ecx = esp + 0x50; /* 0x1100D1C8: lea ecx, [esp + 0x50] */
    MEM32(esp + 0x4C) = 2; /* 0x1100D1CC: mov dword ptr [esp + 0x4c], 2 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100D1D4: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x78) = 0x110040C0u; /* 0x1100D1DA: mov dword ptr [esp + 0x78], 0x110040c0 */
    MEM32(esp + 0x7C) = esi; /* 0x1100D1E2: mov dword ptr [esp + 0x7c], esi */
    MEM32(esp + 0x80) = esi; /* 0x1100D1E6: mov dword ptr [esp + 0x80], esi */
    PUSH32(esp, ebx); /* 0x1100D1ED: push ebx */
    PUSH32(esp, edi); /* 0x1100D1EE: push edi */
    ecx = esp + 0x24; /* 0x1100D1EF: lea ecx, [esp + 0x24] */
    MEM32(esp + 0x98) = 3; /* 0x1100D1F3: mov dword ptr [esp + 0x98], 3 */
    RECOMP_CALL(sub_1100D832); /* 0x1100D1FE: call 0x1100d832 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu));
    MEM32(esp + 0x90) = MEM32(esp + 0x90) | 0xFFFFFFFFu; /* 0x1100D203: or dword ptr [esp + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x1C; /* 0x1100D20B: lea ecx, [esp + 0x1c] */
    SET_LO8(ebx, LO8(eax)); /* 0x1100D20F: mov bl, al */
    RECOMP_CALL(sub_1100D4CF); /* 0x1100D211: call 0x1100d4cf */
    RECOMP_FLAGS_IN();
L_1100D216:
    SET_LO8(eax, LO8(ebx)); /* 0x1100D216: mov al, bl */
    ecx = MEM32(esp + 0x88); /* 0x1100D218: mov ecx, dword ptr [esp + 0x88] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100D21F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100D226: pop ecx */
    edi = POP32_VAL(esp); /* 0x1100D227: pop edi */
    esi = POP32_VAL(esp); /* 0x1100D228: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100D229: pop ebx */
    esp = ebp; /* 0x1100D22A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D22C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D22D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D22E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D22Eu);

L_1100D22E:
    PUSH32(esp, ebp); /* 0x1100D22E: push ebp */
    ebp = esp; /* 0x1100D22F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100D231: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100D234: push -1 */
    PUSH32(esp, 0x1103CA51u); /* 0x1100D236: push 0x1103ca51 */
    eax = MEM32(FS_BASE + (0)); /* 0x1100D23B: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100D241: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x1100D242: sub esp, 0x78 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100D245: push ebx */
    PUSH32(esp, esi); /* 0x1100D246: push esi */
    PUSH32(esp, edi); /* 0x1100D247: push edi */
    eax = MEM32(0x110631D0); /* 0x1100D248: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100D24D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100D24F: push eax */
    eax = esp + 0x88; /* 0x1100D250: lea eax, [esp + 0x88] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100D257: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x1100D25D: mov ebx, edx */
    edi = ecx; /* 0x1100D25F: mov edi, ecx */
    /* test edi, edi */ /* 0x1100D261: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D2C9; /* 0x1100D263: je 0x1100d2c9 */
L_1100D265:
    eax = MEM32(edi); /* 0x1100D265: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100D267: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D26A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D2C9; /* 0x1100D26C: je 0x1100d2c9 */
L_1100D26E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100D26E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = 0x11004558u; /* 0x1100D270: mov dword ptr [esp + 0x10], 0x11004558 */
    MEM32(esp + 0x14) = esi; /* 0x1100D278: mov dword ptr [esp + 0x14], esi */
    MEM32(esp + 0x90) = esi; /* 0x1100D27C: mov dword ptr [esp + 0x90], esi */
    PUSH32(esp, 0x14u); /* 0x1100D283: push 0x14 */
    MEM32(esp + 0x1C) = edi; /* 0x1100D285: mov dword ptr [esp + 0x1c], edi */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100D289: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100D28F: pop ecx */
    /* test eax, eax */ /* 0x1100D290: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D29E; /* 0x1100D292: je 0x1100d29e */
L_1100D294:
    PUSH32(esp, ebx); /* 0x1100D294: push ebx */
    ecx = eax; /* 0x1100D295: mov ecx, eax */
    RECOMP_CALL(sub_1100B765); /* 0x1100D297: call 0x1100b765 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100D29C: mov esi, eax */
L_1100D29E:
    ecx = MEM32(esp + 0x18); /* 0x1100D29E: mov ecx, dword ptr [esp + 0x18] */
    edx = esp + 0x10; /* 0x1100D2A2: lea edx, [esp + 0x10] */
    MEM32(esp + 0x14) = esi; /* 0x1100D2A6: mov dword ptr [esp + 0x14], esi */
    PUSH32(esp, edx); /* 0x1100D2AA: push edx */
    PUSH32(esp, esi); /* 0x1100D2AB: push esi */
    eax = MEM32(ecx); /* 0x1100D2AC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D2AE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100D2B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x10; /* 0x1100D2B3: lea ecx, [esp + 0x10] */
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100D2B7: sete bl */
    _flag_a = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu));
    MEM32(esp + 0x90) = MEM32(esp + 0x90) | 0xFFFFFFFFu; /* 0x1100D2BA: or dword ptr [esp + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100D969); /* 0x1100D2C2: call 0x1100d969 */
    RECOMP_FLAGS_IN();
    goto L_1100D342; /* 0x1100D2C7: jmp 0x1100d342 */
L_1100D2C9:
    MEM32(esp + 0x90) = 1; /* 0x1100D2C9: mov dword ptr [esp + 0x90], 1 */
    ecx = esp + 0x24; /* 0x1100D2D4: lea ecx, [esp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100D2D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0x11003D14u; /* 0x1100D2DA: mov dword ptr [esp + 0x1c], 0x11003d14 */
    MEM32(esp + 0x20) = esi; /* 0x1100D2E2: mov dword ptr [esp + 0x20], esi */
    RECOMP_ICALL(MEM32(0x110690F4)); /* 0x1100D2E6: call dword ptr [0x110690f4] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(2); /* 0x1100D2EC: mov byte ptr [esp + 0x90], 2 */
    ecx = esp + 0x50; /* 0x1100D2F4: lea ecx, [esp + 0x50] */
    MEM32(esp + 0x4C) = 2; /* 0x1100D2F8: mov dword ptr [esp + 0x4c], 2 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100D300: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x78) = 0x110041F4u; /* 0x1100D306: mov dword ptr [esp + 0x78], 0x110041f4 */
    MEM32(esp + 0x7C) = esi; /* 0x1100D30E: mov dword ptr [esp + 0x7c], esi */
    MEM32(esp + 0x80) = esi; /* 0x1100D312: mov dword ptr [esp + 0x80], esi */
    PUSH32(esp, ebx); /* 0x1100D319: push ebx */
    PUSH32(esp, edi); /* 0x1100D31A: push edi */
    ecx = esp + 0x24; /* 0x1100D31B: lea ecx, [esp + 0x24] */
    MEM32(esp + 0x98) = 3; /* 0x1100D31F: mov dword ptr [esp + 0x98], 3 */
    RECOMP_CALL(sub_1100DA1D); /* 0x1100D32A: call 0x1100da1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x90) | 0xFFFFFFFFu));
    MEM32(esp + 0x90) = MEM32(esp + 0x90) | 0xFFFFFFFFu; /* 0x1100D32F: or dword ptr [esp + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x1C; /* 0x1100D337: lea ecx, [esp + 0x1c] */
    SET_LO8(ebx, LO8(eax)); /* 0x1100D33B: mov bl, al */
    RECOMP_CALL(sub_1100D99E); /* 0x1100D33D: call 0x1100d99e */
    RECOMP_FLAGS_IN();
L_1100D342:
    SET_LO8(eax, LO8(ebx)); /* 0x1100D342: mov al, bl */
    ecx = MEM32(esp + 0x88); /* 0x1100D344: mov ecx, dword ptr [esp + 0x88] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100D34B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100D352: pop ecx */
    edi = POP32_VAL(esp); /* 0x1100D353: pop edi */
    esi = POP32_VAL(esp); /* 0x1100D354: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100D355: pop ebx */
    esp = ebp; /* 0x1100D356: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D358: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D359: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D35A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D35Au);

L_1100D35A:
    PUSH32(esp, 4); /* 0x1100D35A: push 4 */
    eax = 0x1103CA7Au; /* 0x1100D35C: mov eax, 0x1103ca7a */
    RECOMP_CALL(sub_1103B372); /* 0x1100D361: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D366: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100D368: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x110043D8u; /* 0x1100D36B: mov dword ptr [esi], 0x110043d8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100D371: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x1100D375: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1100D378: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D383; /* 0x1100D37A: je 0x1100d383 */
L_1100D37C:
    eax = MEM32(ecx); /* 0x1100D37C: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100D37E: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D380: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D383:
    MEM32(esi) = 0x11003FA8u; /* 0x1100D383: mov dword ptr [esi], 0x11003fa8 */
    RECOMP_CALL(sub_1103B340); /* 0x1100D389: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D38E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D38F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D38Fu);

L_1100D38F:
    PUSH32(esp, ebp); /* 0x1100D38F: push ebp */
    ebp = esp; /* 0x1100D390: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D392: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D395: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003A78u); /* 0x1100D398: push 0x11003a78 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D39D: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D3A3: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D3A8: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D3AB: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D3AC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D3B1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D3B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D3B2u);

L_1100D3B2:
    PUSH32(esp, ebp); /* 0x1100D3B2: push ebp */
    ebp = esp; /* 0x1100D3B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D3B5: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D3B8: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003AB0u); /* 0x1100D3BB: push 0x11003ab0 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D3C0: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D3C6: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D3CB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D3CE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D3CF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D3D4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D3D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D3D5u);

L_1100D3D5:
    PUSH32(esp, ebp); /* 0x1100D3D5: push ebp */
    ebp = esp; /* 0x1100D3D6: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100D3D8: mov eax, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1100D3DB: mov edx, ecx */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1100D3DD: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D3F7; /* 0x1100D3E0: jne 0x1100d3f7 */
L_1100D3E2:
    eax = MEM32(edx + 0x4); /* 0x1100D3E2: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x1100D3E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D3F7; /* 0x1100D3E7: je 0x1100d3f7 */
L_1100D3E9:
    ecx = MEM32(eax + 0x4); /* 0x1100D3E9: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1100D3EC: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D3F7; /* 0x1100D3EF: jne 0x1100d3f7 */
L_1100D3F1:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x1100D3F1: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100D3F9; /* 0x1100D3F5: jmp 0x1100d3f9 */
L_1100D3F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100D3F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100D3F9:
    ebp = POP32_VAL(esp); /* 0x1100D3F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D3FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100D3FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D3FDu);

L_1100D3FD:
    PUSH32(esp, ebp); /* 0x1100D3FD: push ebp */
    ebp = esp; /* 0x1100D3FE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D400: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D403: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003AE8u); /* 0x1100D406: push 0x11003ae8 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D40B: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D411: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D416: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D419: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D41A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D41Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D420u);

L_1100D420:
    PUSH32(esp, ebp); /* 0x1100D420: push ebp */
    ebp = esp; /* 0x1100D421: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D423: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D426: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003B1Cu); /* 0x1100D429: push 0x11003b1c */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D42E: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D434: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D439: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D43C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D43D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D442u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D443(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D443u);

L_1100D443:
    PUSH32(esp, ebp); /* 0x1100D443: push ebp */
    ebp = esp; /* 0x1100D444: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D446: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D449: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003B50u); /* 0x1100D44C: push 0x11003b50 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D451: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D457: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D45C: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D45F: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D460: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D465u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D466(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D466u);

L_1100D466:
    PUSH32(esp, ebp); /* 0x1100D466: push ebp */
    ebp = esp; /* 0x1100D467: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D469: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D46C: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003B84u); /* 0x1100D46F: push 0x11003b84 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D474: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D47A: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D47F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D482: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D483: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D488u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D489(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D489u);

L_1100D489:
    PUSH32(esp, ebp); /* 0x1100D489: push ebp */
    ebp = esp; /* 0x1100D48A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D48C: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D48F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003BBCu); /* 0x1100D492: push 0x11003bbc */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D497: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D49D: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D4A2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D4A5: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D4A6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D4ABu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D4ACu);

L_1100D4AC:
    PUSH32(esp, ebp); /* 0x1100D4AC: push ebp */
    ebp = esp; /* 0x1100D4AD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D4AF: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1100D4B2: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003BF4u); /* 0x1100D4B5: push 0x11003bf4 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D4BA: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D4C0: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D4C5: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D4C8: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D4C9: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D4CEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D4CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D4CFu);

L_1100D4CF:
    PUSH32(esp, 0x14u); /* 0x1100D4CF: push 0x14 */
    eax = 0x1103CABFu; /* 0x1100D4D1: mov eax, 0x1103cabf */
    RECOMP_CALL(sub_1103B372); /* 0x1100D4D6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D4DB: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100D4DD: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x1100430Cu; /* 0x1100D4E0: mov dword ptr [esi], 0x1100430c */
    MEM32(ebp + (-0x4)) = 3; /* 0x1100D4E6: mov dword ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100D5D7); /* 0x1100D4ED: call 0x1100d5d7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11069230); /* 0x1100D4F2: mov eax, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100D4F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1100D4F9: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1100D4FC: mov dword ptr [ebp - 0x14], eax */
    goto L_1100D50A; /* 0x1100D4FF: jmp 0x1100d50a */
L_1100D501:
    ecx = ebp + (-0x20); /* 0x1100D501: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100D504: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100D50A:
    /* cmp MEM32(esi + 0x64), ebx */ /* 0x1100D50A: cmp dword ptr [esi + 0x64], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D501; /* 0x1100D50D: jne 0x1100d501 */
L_1100D50F:
    ecx = MEM32(esi + 0x4); /* 0x1100D50F: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1100D512: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D51D; /* 0x1100D514: je 0x1100d51d */
L_1100D516:
    eax = MEM32(ecx); /* 0x1100D516: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100D518: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D51A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D51D:
    ecx = esi + 0x5C; /* 0x1100D51D: lea ecx, [esi + 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100D520: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100D936); /* 0x1100D524: call 0x1100d936 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x34; /* 0x1100D529: lea ecx, [esi + 0x34] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100D52C: mov byte ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100D530: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x8; /* 0x1100D536: lea ecx, [esi + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1100D539: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(MEM32(0x110690F8)); /* 0x1100D53C: call dword ptr [0x110690f8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003FA8u; /* 0x1100D542: mov dword ptr [esi], 0x11003fa8 */
    RECOMP_CALL(sub_1103B340); /* 0x1100D548: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D54D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D54E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D54Eu);

L_1100D54E:
    PUSH32(esp, 0x28u); /* 0x1100D54E: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100D550: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100D555: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D55A: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x1100D55C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1100D55F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D58C; /* 0x1100D561: jne 0x1100d58c */
L_1100D563:
    eax = ebp + 0x8; /* 0x1100D563: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100D566: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D56D: push eax */
    ecx = ebp + (-0x18); /* 0x1100D56E: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D571: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100D577: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100D57C: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100D57F: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100D586: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D587: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100D58C:
    eax = esi + 0x34; /* 0x1100D58C: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1100D58F: push eax */
    ecx = ebp + (-0x34); /* 0x1100D590: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100D593: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100D599: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x5C; /* 0x1100D59D: lea ecx, [esi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D5A0: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100D5A2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D5A3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D5A6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D5C2; /* 0x1100D5A8: je 0x1100d5c2 */
L_1100D5AA:
    eax = MEM32(edi); /* 0x1100D5AA: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1100D5AC: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1100D5AE: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100D5AF: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x8; /* 0x1100D5B2: lea ecx, [esi + 8] */
    MEM32(esi + 0x30) = 1; /* 0x1100D5B5: mov dword ptr [esi + 0x30], 1 */
    RECOMP_ICALL(MEM32(0x11069100)); /* 0x1100D5BC: call dword ptr [0x11069100] */
    RECOMP_FLAGS_IN();
L_1100D5C2:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100D5C2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100D5C6: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100D5C9: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100D5CF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D5D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100D5D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D5D7u);

L_1100D5D7:
    PUSH32(esp, 0x28u); /* 0x1100D5D7: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100D5D9: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100D5DE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D5E3: mov esi, ecx */
    eax = esi + 0x34; /* 0x1100D5E5: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1100D5E8: push eax */
    ecx = ebp + (-0x34); /* 0x1100D5E9: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100D5EC: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100D5F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x5C; /* 0x1100D5F6: lea ebx, [esi + 0x5c] */
    eax = MEM32(ebx); /* 0x1100D5F9: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x18); /* 0x1100D5FB: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1100D5FE: push ecx */
    ecx = ebx; /* 0x1100D5FF: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100D601: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100D639; /* 0x1100D604: jmp 0x1100d639 */
L_1100D606:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100D606: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100D609: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100D60C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100D60E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100D611: mov edi, eax */
    ecx = ebx; /* 0x1100D613: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x1100D615: mov eax, dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x1100D617: push edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100D618: mov dword ptr [ebp - 0x10], edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D61B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D61E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D62A; /* 0x1100D620: je 0x1100d62a */
L_1100D622:
    eax = MEM32(edi); /* 0x1100D622: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1100D624: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1100D626: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100D627: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100D62A:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100D62A: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x14); /* 0x1100D62D: lea edx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1100D630: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100D633: push edx */
    eax = MEM32(ecx); /* 0x1100D634: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100D636: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100D639:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100D639: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100D63C: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100D63F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100D641: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1100D644: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1100D647: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D606; /* 0x1100D649: jne 0x1100d606 */
L_1100D64B:
    ecx = esi + 0x8; /* 0x1100D64B: lea ecx, [esi + 8] */
    MEM32(esi + 0x30) = 1; /* 0x1100D64E: mov dword ptr [esi + 0x30], 1 */
    RECOMP_ICALL(MEM32(0x11069100)); /* 0x1100D655: call dword ptr [0x11069100] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100D65B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100D65F: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100D662: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100D668: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D66D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D66E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D66Eu);

L_1100D66E:
    PUSH32(esp, ebp); /* 0x1100D66E: push ebp */
    ebp = esp; /* 0x1100D66F: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100D671: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100D675: push esi */
    esi = ecx; /* 0x1100D676: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D67E; /* 0x1100D678: jne 0x1100d67e */
L_1100D67A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100D67A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100D6B8; /* 0x1100D67C: jmp 0x1100d6b8 */
L_1100D67E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D67E: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x5C; /* 0x1100D681: lea ecx, [esi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D684: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D686: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D689: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D67A; /* 0x1100D68B: je 0x1100d67a */
L_1100D68D:
    PUSH32(esp, edi); /* 0x1100D68D: push edi */
    edi = MEM32(esi + 0x4); /* 0x1100D68E: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x1100D691: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D6B5; /* 0x1100D693: je 0x1100d6b5 */
L_1100D695:
    eax = MEM32(edi + 0x4); /* 0x1100D695: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100D698: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D6B5; /* 0x1100D69B: jne 0x1100d6b5 */
L_1100D69D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1100D69D: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x8; /* 0x1100D6A1: lea ecx, [esi + 8] */
    MEM32(esi + 0x30) = 0; /* 0x1100D6A4: mov dword ptr [esi + 0x30], 0 */
    RECOMP_ICALL(MEM32(0x11069100)); /* 0x1100D6AB: call dword ptr [0x11069100] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100D6B1: mov eax, edi */
    goto L_1100D6B7; /* 0x1100D6B3: jmp 0x1100d6b7 */
L_1100D6B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100D6B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100D6B7:
    edi = POP32_VAL(esp); /* 0x1100D6B7: pop edi */
L_1100D6B8:
    esi = POP32_VAL(esp); /* 0x1100D6B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100D6B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D6BA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100D6BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D6BDu);

L_1100D6BD:
    PUSH32(esp, ebp); /* 0x1100D6BD: push ebp */
    ebp = esp; /* 0x1100D6BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D6C0: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100D6C3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100D6C7: push esi */
    esi = ecx; /* 0x1100D6C8: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100D6EE; /* 0x1100D6CA: je 0x1100d6ee */
L_1100D6CC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D6CC: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x5C; /* 0x1100D6CF: lea ecx, [esi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D6D2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D6D4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D6D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D6E7; /* 0x1100D6D9: je 0x1100d6e7 */
L_1100D6DB:
    eax = MEM32(esi + 0x4); /* 0x1100D6DB: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x1100D6DE: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100D6E1: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100D6E4: sete al */
L_1100D6E7:
    esi = POP32_VAL(esp); /* 0x1100D6E7: pop esi */
    esp = ebp; /* 0x1100D6E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D6EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D6EB: ret 8 */
L_1100D6EE:
    eax = ebp + 0xC; /* 0x1100D6EE: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100D6F1: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D6F8: push eax */
    ecx = ebp + (-0xC); /* 0x1100D6F9: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D6FC: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100D702: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x1100D707: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100D70A: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100D711: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D712: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D717u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D718u);

L_1100D718:
    PUSH32(esp, ebp); /* 0x1100D718: push ebp */
    ebp = esp; /* 0x1100D719: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D71B: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100D71E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100D722: push edi */
    edi = ecx; /* 0x1100D723: mov edi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100D75A; /* 0x1100D725: je 0x1100d75a */
L_1100D727:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D727: push dword ptr [ebp + 0xc] */
    ecx = edi + 0x5C; /* 0x1100D72A: lea ecx, [edi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D72D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D72F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D732: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D746; /* 0x1100D734: jne 0x1100d746 */
L_1100D736:
    ecx = ebp + (-0xC); /* 0x1100D736: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x1100D739: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x1100D73F: push 0x110454b8 */
    goto L_1100D77A; /* 0x1100D744: jmp 0x1100d77a */
L_1100D746:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D746: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x1100D749: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1100D74B: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100D74D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100D750: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1100D753: pop edi */
    esp = ebp; /* 0x1100D754: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D756: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D757: ret 8 */
L_1100D75A:
    eax = ebp + 0xC; /* 0x1100D75A: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100D75D: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D764: push eax */
    ecx = ebp + (-0xC); /* 0x1100D765: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D768: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100D76E: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, 0x11045568u); /* 0x1100D775: push 0x11045568 */
L_1100D77A:
    eax = ebp + (-0xC); /* 0x1100D77A: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D77D: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D77E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D783u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D784(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D784u);

L_1100D784:
    PUSH32(esp, ebp); /* 0x1100D784: push ebp */
    ebp = esp; /* 0x1100D785: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1100D787: sub esp, 0x24 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100D78A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100D78E: push esi */
    esi = ecx; /* 0x1100D78F: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100D7EE; /* 0x1100D791: je 0x1100d7ee */
L_1100D793:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D793: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x5C; /* 0x1100D796: lea ecx, [esi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D799: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D79B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100D79E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D7B5; /* 0x1100D7A0: jne 0x1100d7b5 */
L_1100D7A2:
    ecx = ebp + (-0x18); /* 0x1100D7A2: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x1100D7A5: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x1100D7AB: push 0x110454b8 */
    eax = ebp + (-0x18); /* 0x1100D7B0: lea eax, [ebp - 0x18] */
    goto L_1100D811; /* 0x1100D7B3: jmp 0x1100d811 */
L_1100D7B5:
    eax = MEM32(esi + 0x4); /* 0x1100D7B5: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1100D7B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D7DB; /* 0x1100D7BA: je 0x1100d7db */
L_1100D7BC:
    eax = MEM32(eax + 0x4); /* 0x1100D7BC: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100D7BF: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D7DB; /* 0x1100D7C2: jne 0x1100d7db */
L_1100D7C4:
    ecx = esi + 0x8; /* 0x1100D7C4: lea ecx, [esi + 8] */
    MEM32(esi + 0x30) = 1; /* 0x1100D7C7: mov dword ptr [esi + 0x30], 1 */
    RECOMP_ICALL(MEM32(0x11069100)); /* 0x1100D7CE: call dword ptr [0x11069100] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100D7D4: pop esi */
    esp = ebp; /* 0x1100D7D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D7D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D7D8: ret 8 */
L_1100D7DB:
    ecx = ebp + (-0x24); /* 0x1100D7DB: lea ecx, [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x11069208)); /* 0x1100D7DE: call dword ptr [0x11069208] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104551Cu); /* 0x1100D7E4: push 0x1104551c */
    eax = ebp + (-0x24); /* 0x1100D7E9: lea eax, [ebp - 0x24] */
    goto L_1100D811; /* 0x1100D7EC: jmp 0x1100d811 */
L_1100D7EE:
    eax = ebp + 0xC; /* 0x1100D7EE: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x1100D7F1: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D7F8: push eax */
    ecx = ebp + (-0xC); /* 0x1100D7F9: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D7FC: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100D802: mov dword ptr [ebp - 0xc], 0x11001470 */
    eax = ebp + (-0xC); /* 0x1100D809: lea eax, [ebp - 0xc] */
    PUSH32(esp, 0x11045568u); /* 0x1100D80C: push 0x11045568 */
L_1100D811:
    PUSH32(esp, eax); /* 0x1100D811: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D812: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D817u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D818u);

L_1100D818:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100D818: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x1100D81A: add ecx, 0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100D81D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100D81E: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D822: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100D825(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D825u);

L_1100D825:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x1100D825: add ecx, 0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1100D828: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100D82B: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D82F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100D832(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D832u);

L_1100D832:
    PUSH32(esp, 0x28u); /* 0x1100D832: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100D834: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100D839: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D83E: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x1100D840: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1100D843: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100D870; /* 0x1100D845: jne 0x1100d870 */
L_1100D847:
    eax = ebp + 0x8; /* 0x1100D847: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100D84A: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D851: push eax */
    ecx = ebp + (-0x18); /* 0x1100D852: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D855: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100D85B: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100D860: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100D863: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100D86A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D86B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100D870:
    PUSH32(esp, 0x14u); /* 0x1100D870: push 0x14 */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100D872: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100D878: pop ecx */
    /* test eax, eax */ /* 0x1100D879: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D88B; /* 0x1100D87B: je 0x1100d88b */
L_1100D87D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100D87D: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1100D880: mov ecx, eax */
    RECOMP_CALL(sub_1100B705); /* 0x1100D882: call 0x1100b705 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1100D887: mov ebx, eax */
    goto L_1100D88D; /* 0x1100D889: jmp 0x1100d88d */
L_1100D88B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100D88B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100D88D:
    eax = esi + 0x34; /* 0x1100D88D: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1100D890: push eax */
    ecx = ebp + (-0x34); /* 0x1100D891: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100D894: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100D89A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100D89E: mov ecx, esi */
    eax = MEM32(esi); /* 0x1100D8A0: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1100D8A2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D8A3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = ebx; /* 0x1100D8A6: mov dword ptr [esi + 4], ebx */
    ecx = edi; /* 0x1100D8A9: mov ecx, edi */
    eax = MEM32(edi); /* 0x1100D8AB: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1100D8AD: push esi */
    PUSH32(esp, ebx); /* 0x1100D8AE: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100D8AF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100D8B2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100D8B6: lea ecx, [ebp - 0x34] */
    edi = eax; /* 0x1100D8B9: mov edi, eax */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100D8BB: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    /* cmp edi, 2 */ /* 0x1100D8C1: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D8D4; /* 0x1100D8C4: jne 0x1100d8d4 */
L_1100D8C6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100D8C6: push -1 */
    ecx = esi + 0x8; /* 0x1100D8C8: lea ecx, [esi + 8] */
    RECOMP_ICALL(MEM32(0x110690FC)); /* 0x1100D8CB: call dword ptr [0x110690fc] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x30); /* 0x1100D8D1: mov edi, dword ptr [esi + 0x30] */
L_1100D8D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100D8D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1100D8D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100D8D8: sete al */
    RECOMP_CALL(sub_1103B340); /* 0x1100D8DB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100D8E0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100D8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D8E3u);

L_1100D8E3:
    PUSH32(esp, ebp); /* 0x1100D8E3: push ebp */
    ebp = esp; /* 0x1100D8E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D8E6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100D8E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100D8EA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1100D8ED: push edi */
    edi = ecx; /* 0x1100D8EE: mov edi, ecx */
    /* test esi, esi */ /* 0x1100D8F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D90C; /* 0x1100D8F2: je 0x1100d90c */
L_1100D8F4:
    ecx = edi + 0x5C; /* 0x1100D8F4: lea ecx, [edi + 0x5c] */
    eax = MEM32(ecx); /* 0x1100D8F7: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100D8F9: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100D8FA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100D8FC: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100D8FE: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100D900: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100D901: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1100D904: pop edi */
    esi = POP32_VAL(esp); /* 0x1100D905: pop esi */
    esp = ebp; /* 0x1100D906: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D908: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100D909: ret 4 */
L_1100D90C:
    eax = ebp + 0x8; /* 0x1100D90C: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100D90F: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100D916: push eax */
    ecx = ebp + (-0xC); /* 0x1100D917: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100D91A: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100D920: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x1100D925: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100D928: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100D92F: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D930: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D935u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D936(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D936u);

L_1100D936:
    PUSH32(esp, ebp); /* 0x1100D936: push ebp */
    ebp = esp; /* 0x1100D937: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100D939: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x110040C0u; /* 0x1100D93C: mov dword ptr [ecx], 0x110040c0 */
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x1100D942: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D94C; /* 0x1100D946: jne 0x1100d94c */
L_1100D948:
    esp = ebp; /* 0x1100D948: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100D94A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D94B: ret  */
L_1100D94C:
    PUSH32(esp, 0x1100388Cu); /* 0x1100D94C: push 0x1100388c */
    ecx = ebp + (-0xC); /* 0x1100D951: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100D954: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100D95A: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100D95F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100D962: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100D963: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100D968u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100D969(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D969u);

L_1100D969:
    PUSH32(esp, 4); /* 0x1100D969: push 4 */
    eax = 0x1103CAE2u; /* 0x1100D96B: mov eax, 0x1103cae2 */
    RECOMP_CALL(sub_1103B372); /* 0x1100D970: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D975: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100D977: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004558u; /* 0x1100D97A: mov dword ptr [esi], 0x11004558 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100D980: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x1100D984: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1100D987: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D992; /* 0x1100D989: je 0x1100d992 */
L_1100D98B:
    eax = MEM32(ecx); /* 0x1100D98B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100D98D: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D98F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D992:
    MEM32(esi) = 0x11004504u; /* 0x1100D992: mov dword ptr [esi], 0x11004504 */
    RECOMP_CALL(sub_1103B340); /* 0x1100D998: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100D99D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100D99E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100D99Eu);

L_1100D99E:
    PUSH32(esp, 0x14u); /* 0x1100D99E: push 0x14 */
    eax = 0x1103CB27u; /* 0x1100D9A0: mov eax, 0x1103cb27 */
    RECOMP_CALL(sub_1103B372); /* 0x1100D9A5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100D9AA: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100D9AC: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003D14u; /* 0x1100D9AF: mov dword ptr [esi], 0x11003d14 */
    MEM32(ebp + (-0x4)) = 3; /* 0x1100D9B5: mov dword ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100D5D7); /* 0x1100D9BC: call 0x1100d5d7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11069230); /* 0x1100D9C1: mov eax, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100D9C6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1100D9C8: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1100D9CB: mov dword ptr [ebp - 0x14], eax */
    goto L_1100D9D9; /* 0x1100D9CE: jmp 0x1100d9d9 */
L_1100D9D0:
    ecx = ebp + (-0x20); /* 0x1100D9D0: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100D9D3: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100D9D9:
    /* cmp MEM32(esi + 0x64), ebx */ /* 0x1100D9D9: cmp dword ptr [esi + 0x64], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100D9D0; /* 0x1100D9DC: jne 0x1100d9d0 */
L_1100D9DE:
    ecx = MEM32(esi + 0x4); /* 0x1100D9DE: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1100D9E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100D9EC; /* 0x1100D9E3: je 0x1100d9ec */
L_1100D9E5:
    eax = MEM32(ecx); /* 0x1100D9E5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100D9E7: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100D9E9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100D9EC:
    ecx = esi + 0x5C; /* 0x1100D9EC: lea ecx, [esi + 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100D9EF: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11009207); /* 0x1100D9F3: call 0x11009207 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x34; /* 0x1100D9F8: lea ecx, [esi + 0x34] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100D9FB: mov byte ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100D9FF: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x8; /* 0x1100DA05: lea ecx, [esi + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1100DA08: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(MEM32(0x110690F8)); /* 0x1100DA0B: call dword ptr [0x110690f8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11004504u; /* 0x1100DA11: mov dword ptr [esi], 0x11004504 */
    RECOMP_CALL(sub_1103B340); /* 0x1100DA17: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DA1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DA1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DA1Du);

L_1100DA1D:
    PUSH32(esp, 0x28u); /* 0x1100DA1D: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100DA1F: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100DA24: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100DA29: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x1100DA2B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1100DA2E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DA5B; /* 0x1100DA30: jne 0x1100da5b */
L_1100DA32:
    eax = ebp + 0x8; /* 0x1100DA32: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x1100DA35: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x1100DA3C: push eax */
    ecx = ebp + (-0x18); /* 0x1100DA3D: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100DA40: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100DA46: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x1100DA4B: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x1100DA4E: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100DA55: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100DA56: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100DA5B:
    PUSH32(esp, 0x14u); /* 0x1100DA5B: push 0x14 */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100DA5D: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DA63: pop ecx */
    /* test eax, eax */ /* 0x1100DA64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DA76; /* 0x1100DA66: je 0x1100da76 */
L_1100DA68:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100DA68: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1100DA6B: mov ecx, eax */
    RECOMP_CALL(sub_1100B765); /* 0x1100DA6D: call 0x1100b765 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1100DA72: mov ebx, eax */
    goto L_1100DA78; /* 0x1100DA74: jmp 0x1100da78 */
L_1100DA76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100DA76: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100DA78:
    eax = esi + 0x34; /* 0x1100DA78: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1100DA7B: push eax */
    ecx = ebp + (-0x34); /* 0x1100DA7C: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100DA7F: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100DA85: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100DA89: mov ecx, esi */
    eax = MEM32(esi); /* 0x1100DA8B: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1100DA8D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100DA8E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = ebx; /* 0x1100DA91: mov dword ptr [esi + 4], ebx */
    ecx = edi; /* 0x1100DA94: mov ecx, edi */
    eax = MEM32(edi); /* 0x1100DA96: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1100DA98: push esi */
    PUSH32(esp, ebx); /* 0x1100DA99: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100DA9A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100DA9D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100DAA1: lea ecx, [ebp - 0x34] */
    edi = eax; /* 0x1100DAA4: mov edi, eax */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100DAA6: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    /* cmp edi, 2 */ /* 0x1100DAAC: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100DABF; /* 0x1100DAAF: jne 0x1100dabf */
L_1100DAB1:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100DAB1: push -1 */
    ecx = esi + 0x8; /* 0x1100DAB3: lea ecx, [esi + 8] */
    RECOMP_ICALL(MEM32(0x110690FC)); /* 0x1100DAB6: call dword ptr [0x110690fc] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x30); /* 0x1100DABC: mov edi, dword ptr [esi + 0x30] */
L_1100DABF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100DABF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1100DAC1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100DAC3: sete al */
    RECOMP_CALL(sub_1103B340); /* 0x1100DAC6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100DACB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100DACE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DACEu);

L_1100DACE:
    PUSH32(esp, ebp); /* 0x1100DACE: push ebp */
    ebp = esp; /* 0x1100DACF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DAD1: push esi */
    esi = ecx; /* 0x1100DAD2: mov esi, ecx */
    RECOMP_CALL(sub_1100D35A); /* 0x1100DAD4: call 0x1100d35a */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100DAD9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DAE7; /* 0x1100DADD: je 0x1100dae7 */
L_1100DADF:
    PUSH32(esp, esi); /* 0x1100DADF: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DAE0: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DAE6: pop ecx */
L_1100DAE7:
    eax = esi; /* 0x1100DAE7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DAE9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DAEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DAEB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DAEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DAEEu);

L_1100DAEE:
    PUSH32(esp, ebp); /* 0x1100DAEE: push ebp */
    ebp = esp; /* 0x1100DAEF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DAF1: push esi */
    esi = ecx; /* 0x1100DAF2: mov esi, ecx */
    RECOMP_CALL(sub_1100D4CF); /* 0x1100DAF4: call 0x1100d4cf */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100DAF9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DB07; /* 0x1100DAFD: je 0x1100db07 */
L_1100DAFF:
    PUSH32(esp, esi); /* 0x1100DAFF: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DB00: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DB06: pop ecx */
L_1100DB07:
    eax = esi; /* 0x1100DB07: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DB09: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DB0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DB0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DB0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DB0Eu);

L_1100DB0E:
    PUSH32(esp, ebp); /* 0x1100DB0E: push ebp */
    ebp = esp; /* 0x1100DB0F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DB11: push esi */
    esi = ecx; /* 0x1100DB12: mov esi, ecx */
    RECOMP_CALL(sub_1100D936); /* 0x1100DB14: call 0x1100d936 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100DB19: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DB27; /* 0x1100DB1D: je 0x1100db27 */
L_1100DB1F:
    PUSH32(esp, esi); /* 0x1100DB1F: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DB20: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DB26: pop ecx */
L_1100DB27:
    eax = esi; /* 0x1100DB27: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DB29: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DB2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DB2B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DB2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DB2Eu);

L_1100DB2E:
    PUSH32(esp, ebp); /* 0x1100DB2E: push ebp */
    ebp = esp; /* 0x1100DB2F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DB31: push esi */
    esi = ecx; /* 0x1100DB32: mov esi, ecx */
    RECOMP_CALL(sub_1100D969); /* 0x1100DB34: call 0x1100d969 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100DB39: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DB47; /* 0x1100DB3D: je 0x1100db47 */
L_1100DB3F:
    PUSH32(esp, esi); /* 0x1100DB3F: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DB40: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DB46: pop ecx */
L_1100DB47:
    eax = esi; /* 0x1100DB47: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DB49: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DB4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DB4B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DB4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DB4Eu);

L_1100DB4E:
    PUSH32(esp, ebp); /* 0x1100DB4E: push ebp */
    ebp = esp; /* 0x1100DB4F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100DB51: push esi */
    esi = ecx; /* 0x1100DB52: mov esi, ecx */
    RECOMP_CALL(sub_1100D99E); /* 0x1100DB54: call 0x1100d99e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100DB59: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DB67; /* 0x1100DB5D: je 0x1100db67 */
L_1100DB5F:
    PUSH32(esp, esi); /* 0x1100DB5F: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100DB60: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DB66: pop ecx */
L_1100DB67:
    eax = esi; /* 0x1100DB67: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100DB69: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DB6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DB6B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DB6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DB6Eu);

L_1100DB6E:
    PUSH32(esp, ebp); /* 0x1100DB6E: push ebp */
    ebp = esp; /* 0x1100DB6F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100DB71: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100DB74: push esi */
    esi = ecx; /* 0x1100DB75: mov esi, ecx */
    /* test eax, eax */ /* 0x1100DB77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100DB88; /* 0x1100DB79: jne 0x1100db88 */
L_1100DB7B:
    PUSH32(esp, 0xCu); /* 0x1100DB7B: push 0xc */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100DB7D: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DB83: pop ecx */
    /* test eax, eax */ /* 0x1100DB84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100DB99; /* 0x1100DB86: je 0x1100db99 */
L_1100DB88:
    MEM32(eax) = 0x11004254u; /* 0x1100DB88: mov dword ptr [eax], 0x11004254 */
    ecx = MEM32(esi + 0x4); /* 0x1100DB8E: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1100DB91: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1100DB94: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100DB95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DB96: ret 4 */
L_1100DB99:
    RECOMP_CALL(sub_1101163C); /* 0x1100DB99: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100DB9Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100DB9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DB9Fu);

L_1100DB9F:
    PUSH32(esp, ebp); /* 0x1100DB9F: push ebp */
    ebp = esp; /* 0x1100DBA0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100DBA2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1100DBA5: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100DBA8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100DBA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100DBAA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100DBAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DBADu);

L_1100DBAD:
    eax = 0x11065640u; /* 0x1100DBAD: mov eax, 0x11065640 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DBB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100DBB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100DBB3u);

L_1100DBB3:
    eax = ecx + 0x4; /* 0x1100DBB3: lea eax, [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100DBB6: ret  */
    RECOMP_REGS_OUT();
}
