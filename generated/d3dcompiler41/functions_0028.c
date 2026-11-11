#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_161A8E7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A8E7Cu);

L_161A8E7C:
    eax = ecx; /* 0x161A8E7C: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x161A8E7E: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x161A8E82: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16001330u; /* 0x161A8E86: mov dword ptr [eax], 0x16001330 */
    MEM32(eax + 0x4) = 1; /* 0x161A8E8C: mov dword ptr [eax + 4], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A8E93: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A8E99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A8E99u);

L_161A8E99:
    edi = edi; /* 0x161A8E99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A8E9B: push ebp */
    ebp = esp; /* 0x161A8E9C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161A8E9E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x161A8E9F: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x161A8EA2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A8EAD; /* 0x161A8EA4: jne 0x161a8ead */
L_161A8EA6:
    eax = 0x8876086Cu; /* 0x161A8EA6: mov eax, 0x8876086c */
    goto L_161A8EF6; /* 0x161A8EAB: jmp 0x161a8ef6 */
L_161A8EAD:
    PUSH32(esp, esi); /* 0x161A8EAD: push esi */
    PUSH32(esp, 0x10u); /* 0x161A8EAE: push 0x10 */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A8EB0: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A8EB5: pop ecx */
    /* test eax, eax */ /* 0x161A8EB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A8EC5; /* 0x161A8EB8: je 0x161a8ec5 */
L_161A8EBA:
    ecx = eax; /* 0x161A8EBA: mov ecx, eax */
    RECOMP_CALL(sub_161A8E7C); /* 0x161A8EBC: call 0x161a8e7c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161A8EC1: mov esi, eax */
    goto L_161A8EC7; /* 0x161A8EC3: jmp 0x161a8ec7 */
L_161A8EC5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161A8EC5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A8EC7:
    /* test esi, esi */ /* 0x161A8EC7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A8ED2; /* 0x161A8EC9: jne 0x161a8ed2 */
L_161A8ECB:
    eax = 0x8007000Eu; /* 0x161A8ECB: mov eax, 0x8007000e */
    goto L_161A8EF5; /* 0x161A8ED0: jmp 0x161a8ef5 */
L_161A8ED2:
    eax = MEM32(esi); /* 0x161A8ED2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x161A8ED4: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A8ED5: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x161A8ED8: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x161A8EDA: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161A8EDD: mov edi, eax */
    /* test edi, edi */ /* 0x161A8EDF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161A8EF0; /* 0x161A8EE1: jge 0x161a8ef0 */
L_161A8EE3:
    eax = MEM32(esi); /* 0x161A8EE3: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x161A8EE5: push 1 */
    ecx = esi; /* 0x161A8EE7: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x161A8EE9: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x161A8EEC: mov eax, edi */
    goto L_161A8EF4; /* 0x161A8EEE: jmp 0x161a8ef4 */
L_161A8EF0:
    MEM32(ebx) = esi; /* 0x161A8EF0: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A8EF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A8EF4:
    edi = POP32_VAL(esp); /* 0x161A8EF4: pop edi */
L_161A8EF5:
    esi = POP32_VAL(esp); /* 0x161A8EF5: pop esi */
L_161A8EF6:
    ebx = POP32_VAL(esp); /* 0x161A8EF6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161A8EF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A8EF8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A8F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A8F00u);

L_161A8F00:
    edi = edi; /* 0x161A8F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A8F02: push ebp */
    ebp = esp; /* 0x161A8F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x161A8F05: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161A8F08: push esi */
    eax = ebp + (-0x24); /* 0x161A8F09: lea eax, [ebp - 0x24] */
    esi = ecx; /* 0x161A8F0C: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x161A8F0E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161A8F11: push eax */
    RECOMP_ICALL(MEM32(0x16001088)); /* 0x161A8F12: call dword ptr [0x16001088] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x161A8F18: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + 0xC); /* 0x161A8F1B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161A8F1E: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161A8F22: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x161A8F26: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax + (-0x1); /* 0x161A8F2A: lea eax, [ecx + eax - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161A8F2E: dec ecx */
    _flag_k = FK_DEC;
    ecx = ~ecx; /* 0x161A8F2F: not ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x161A8F31: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x161A8F33: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x161A8F36: mov dword ptr [esi + 4], eax */
    /* test ecx, ecx */ /* 0x161A8F39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A8F42; /* 0x161A8F3B: jne 0x161a8f42 */
L_161A8F3D:
    ecx = 0x00100000u; /* 0x161A8F3D: mov ecx, 0x100000 */
L_161A8F42:
    ecx = eax + ecx + (-0x1); /* 0x161A8F42: lea ecx, [eax + ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161A8F46: dec eax */
    _flag_k = FK_DEC;
    eax = ~eax; /* 0x161A8F47: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161A8F49: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = ecx; /* 0x161A8F4B: mov dword ptr [esi + 0x14], ecx */
    eax = esi; /* 0x161A8F4E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161A8F50: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161A8F51: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A8F52: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A8F5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A8F5Au);

L_161A8F5A:
    edi = edi; /* 0x161A8F5A: mov edi, edi */
    PUSH32(esp, esi); /* 0x161A8F5C: push esi */
    esi = ecx; /* 0x161A8F5D: mov esi, ecx */
    goto L_161A8F75; /* 0x161A8F5F: jmp 0x161a8f75 */
L_161A8F61:
    eax = MEM32(esi); /* 0x161A8F61: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x161A8F63: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x8000u); /* 0x161A8F65: push 0x8000 */
    PUSH32(esp, 0); /* 0x161A8F6A: push 0 */
    PUSH32(esp, eax); /* 0x161A8F6C: push eax */
    MEM32(esi) = ecx; /* 0x161A8F6D: mov dword ptr [esi], ecx */
    RECOMP_ICALL(MEM32(0x1600103C)); /* 0x161A8F6F: call dword ptr [0x1600103c] */
    RECOMP_FLAGS_IN();
L_161A8F75:
    /* cmp MEM32(esi), 0 */ /* 0x161A8F75: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A8F61; /* 0x161A8F78: jne 0x161a8f61 */
L_161A8F7A:
    esi = POP32_VAL(esp); /* 0x161A8F7A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A8F7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A8F81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A8F81u);

L_161A8F81:
    edi = edi; /* 0x161A8F81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A8F83: push ebp */
    ebp = esp; /* 0x161A8F84: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161A8F86: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x161A8F87: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x161A8F8A: push ebx */
    PUSH32(esp, esi); /* 0x161A8F8B: push esi */
    esi = ecx; /* 0x161A8F8C: mov esi, ecx */
    edx = MEM32(esi + 0x8); /* 0x161A8F8E: mov edx, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x161A8F91: push edi */
    ecx = eax + (-0x1); /* 0x161A8F92: lea ecx, [eax - 1] */
    ecx = ~ecx; /* 0x161A8F95: not ecx */
    edi = eax + edx + (-0x1); /* 0x161A8F97: lea edi, [eax + edx - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    edi = edi & ecx; /* 0x161A8F9B: and edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x8); /* 0x161A8F9D: add edi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x10) */ /* 0x161A8FA0: cmp edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A902A; /* 0x161A8FA3: jbe 0x161a902a */
L_161A8FA9:
    edi = eax + 0x3; /* 0x161A8FA9: lea edi, [eax + 3] */
    eax = MEM32(esi + 0x14); /* 0x161A8FAC: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    edi = edi & ecx; /* 0x161A8FAF: and edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x8); /* 0x161A8FB1: add edi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x161A8FB4: mov dword ptr [ebp + 0xc], eax */
    /* cmp edi, eax */ /* 0x161A8FB7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A8FC7; /* 0x161A8FB9: jbe 0x161a8fc7 */
L_161A8FBB:
    eax = MEM32(ebp + 0xC); /* 0x161A8FBB: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x161A8FBE: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x161A8FC0: mov dword ptr [ebp + 0xc], eax */
    /* cmp edi, eax */ /* 0x161A8FC3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_161A8FBB; /* 0x161A8FC5: ja 0x161a8fbb */
L_161A8FC7:
    PUSH32(esp, 4); /* 0x161A8FC7: push 4 */
    PUSH32(esp, 0x2000u); /* 0x161A8FC9: push 0x2000 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A8FCE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x161A8FD1: push 0 */
    RECOMP_ICALL(MEM32(0x16001090)); /* 0x161A8FD3: call dword ptr [0x16001090] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x161A8FD9: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x161A8FDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A8FE7; /* 0x161A8FDE: jne 0x161a8fe7 */
L_161A8FE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A8FE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161A9067; /* 0x161A8FE2: jmp 0x161a9067 */
L_161A8FE7:
    eax = MEM32(esi + 0x4); /* 0x161A8FE7: mov eax, dword ptr [esi + 4] */
    ebx = eax + edi + (-0x1); /* 0x161A8FEA: lea ebx, [eax + edi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161A8FEE: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 4); /* 0x161A8FEF: push 4 */
    eax = ~eax; /* 0x161A8FF1: not eax */
    PUSH32(esp, 0x1000u); /* 0x161A8FF3: push 0x1000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x161A8FF8: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161A8FFA: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161A8FFB: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x16001090)); /* 0x161A8FFE: call dword ptr [0x16001090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161A9004: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A9019; /* 0x161A9006: jne 0x161a9019 */
L_161A9008:
    PUSH32(esp, 0x8000u); /* 0x161A9008: push 0x8000 */
    PUSH32(esp, eax); /* 0x161A900D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161A900E: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1600103C)); /* 0x161A9011: call dword ptr [0x1600103c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161A8FE0; /* 0x161A9017: jmp 0x161a8fe0 */
L_161A9019:
    eax = MEM32(ebp + (-0x4)); /* 0x161A9019: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(esi); /* 0x161A901C: mov ecx, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x161A901E: mov dword ptr [eax], ecx */
    MEM32(esi) = eax; /* 0x161A9020: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x161A9022: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x10) = eax; /* 0x161A9025: mov dword ptr [esi + 0x10], eax */
    goto L_161A905A; /* 0x161A9028: jmp 0x161a905a */
L_161A902A:
    ecx = MEM32(esi + 0xC); /* 0x161A902A: mov ecx, dword ptr [esi + 0xc] */
    /* cmp edi, ecx */ /* 0x161A902D: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A905D; /* 0x161A902F: jbe 0x161a905d */
L_161A9031:
    eax = MEM32(esi + 0x4); /* 0x161A9031: mov eax, dword ptr [esi + 4] */
    ebx = eax + edi + (-0x1); /* 0x161A9034: lea ebx, [eax + edi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161A9038: dec eax */
    _flag_k = FK_DEC;
    eax = ~eax; /* 0x161A9039: not eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x161A903B: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x161A903D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161A903F: add eax, ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_161A8FE0; /* 0x161A9041: je 0x161a8fe0 */
L_161A9043:
    PUSH32(esp, 4); /* 0x161A9043: push 4 */
    PUSH32(esp, 0x1000u); /* 0x161A9045: push 0x1000 */
    edx = ebx; /* 0x161A904A: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x161A904C: sub edx, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x161A904E: push edx */
    PUSH32(esp, eax); /* 0x161A904F: push eax */
    RECOMP_ICALL(MEM32(0x16001090)); /* 0x161A9050: call dword ptr [0x16001090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161A9056: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A8FE0; /* 0x161A9058: je 0x161a8fe0 */
L_161A905A:
    MEM32(esi + 0xC) = ebx; /* 0x161A905A: mov dword ptr [esi + 0xc], ebx */
L_161A905D:
    eax = MEM32(esi); /* 0x161A905D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x161A905F: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x8) = edi; /* 0x161A9062: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161A9065: add eax, edi */
    _flag_k = FK_ADD;
L_161A9067:
    edi = POP32_VAL(esp); /* 0x161A9067: pop edi */
    esi = POP32_VAL(esp); /* 0x161A9068: pop esi */
    ebx = POP32_VAL(esp); /* 0x161A9069: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161A906A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A906B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A9096(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9096u);

L_161A9096:
    edi = edi; /* 0x161A9096: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9098: push ebp */
    ebp = esp; /* 0x161A9099: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x161A909B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161A909F: push esi */
    PUSH32(esp, edi); /* 0x161A90A0: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A90BA; /* 0x161A90A1: jne 0x161a90ba */
L_161A90A3:
    PUSH32(esp, 1); /* 0x161A90A3: push 1 */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A90A5: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161A90AA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x161A90AC: pop ecx */
    /* test edi, edi */ /* 0x161A90AD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A90B5; /* 0x161A90AF: jne 0x161a90b5 */
L_161A90B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A90B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161A90E8; /* 0x161A90B3: jmp 0x161a90e8 */
L_161A90B5:
    MEM8(edi) = (uint8_t)(0); /* 0x161A90B5: mov byte ptr [edi], 0 */
    goto L_161A90E6; /* 0x161A90B8: jmp 0x161a90e6 */
L_161A90BA:
    eax = MEM32(ebp + 0x8); /* 0x161A90BA: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x161A90BD: lea edx, [eax + 1] */
L_161A90C0:
    SET_LO8(ecx, MEM8(eax)); /* 0x161A90C0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161A90C2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x161A90C3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A90C0; /* 0x161A90C5: jne 0x161a90c0 */
L_161A90C7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161A90C7: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x161A90C9: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x161A90CC: push esi */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A90CD: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161A90D2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x161A90D4: pop ecx */
    /* test edi, edi */ /* 0x161A90D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A90B1; /* 0x161A90D7: je 0x161a90b1 */
L_161A90D9:
    PUSH32(esp, esi); /* 0x161A90D9: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A90DA: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161A90DD: push edi */
    RECOMP_CALL(sub_161AE174); /* 0x161A90DE: call 0x161ae174 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161A90E3: add esp, 0xc */
    _flag_k = FK_ADD;
L_161A90E6:
    eax = edi; /* 0x161A90E6: mov eax, edi */
L_161A90E8:
    edi = POP32_VAL(esp); /* 0x161A90E8: pop edi */
    esi = POP32_VAL(esp); /* 0x161A90E9: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A90EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A90EB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A90F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A90F3u);

L_161A90F3:
    eax = ecx; /* 0x161A90F3: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161A90F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x161A90F7: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x161A90F9: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x161A90FC: mov dword ptr [eax + 8], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A90FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9105u);

L_161A9105:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A9105: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A910B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A910Bu);

L_161A910B:
    edi = edi; /* 0x161A910B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A910D: push ebp */
    ebp = esp; /* 0x161A910E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9110: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x161A9113: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x161A9117: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0xC); /* 0x161A9119: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x161A911C: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A911F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x161A9121: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A9122: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A912A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A912Au);

L_161A912A:
    edi = edi; /* 0x161A912A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A912C: push ebp */
    ebp = esp; /* 0x161A912D: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x161A912F: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(ebp + 0xC); /* 0x161A9132: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x161A9135: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x161A9137: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161A9152; /* 0x161A9139: jb 0x161a9152 */
L_161A913B:
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x161A913B: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161A9152; /* 0x161A913E: ja 0x161a9152 */
L_161A9140:
    PUSH32(esp, esi); /* 0x161A9140: push esi */
    esi = MEM32(ecx); /* 0x161A9141: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161A9143: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x161A9145: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = esi; /* 0x161A9148: mov dword ptr [edx], esi */
    MEM32(ecx + 0x8) = eax; /* 0x161A914A: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A914D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161A914F: pop esi */
    goto L_161A9157; /* 0x161A9150: jmp 0x161a9157 */
L_161A9152:
    eax = 0x80004005u; /* 0x161A9152: mov eax, 0x80004005 */
L_161A9157:
    ebp = POP32_VAL(esp); /* 0x161A9157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A9158: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A9160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9160u);

L_161A9160:
    edi = edi; /* 0x161A9160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9162: push ebp */
    ebp = esp; /* 0x161A9163: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161A9165: push ecx */
    PUSH32(esp, 4); /* 0x161A9166: push 4 */
    eax = ebp + (-0x4); /* 0x161A9168: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x161A916B: push eax */
    RECOMP_CALL(sub_161A912A); /* 0x161A916C: call 0x161a912a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161A9171: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161A917C; /* 0x161A9173: jge 0x161a917c */
L_161A9175:
    eax = 0x80004005u; /* 0x161A9175: mov eax, 0x80004005 */
    goto L_161A9188; /* 0x161A917A: jmp 0x161a9188 */
L_161A917C:
    eax = MEM32(ebp + (-0x4)); /* 0x161A917C: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x161A917F: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x161A9181: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x161A9184: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A9186: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A9188:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161A9188: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A9189: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A9191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9191u);

L_161A9191:
    edi = edi; /* 0x161A9191: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9193: push ebp */
    ebp = esp; /* 0x161A9194: mov ebp, esp */
    edx = MEM32(ecx); /* 0x161A9196: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x161A9198: push ebx */
    PUSH32(esp, esi); /* 0x161A9199: push esi */
    esi = MEM32(ecx + 0x8); /* 0x161A919A: mov esi, dword ptr [ecx + 8] */
    eax = esi; /* 0x161A919D: mov eax, esi */
    /* cmp MEM8(edx + eax), 0 */ /* 0x161A919F: cmp byte ptr [edx + eax], 0 */
    _flag_a = (uint32_t)(MEM8(edx + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x161A91A3: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A91B6; /* 0x161A91A4: je 0x161a91b6 */
L_161A91A6:
    edi = MEM32(ecx + 0x4); /* 0x161A91A6: mov edi, dword ptr [ecx + 4] */
L_161A91A9:
    /* cmp eax, edi */ /* 0x161A91A9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161A91C9; /* 0x161A91AB: ja 0x161a91c9 */
L_161A91AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161A91AD: inc eax */
    _flag_k = FK_INC;
    ebx = edx; /* 0x161A91AE: mov ebx, edx */
    /* cmp MEM8(eax + ebx), 0 */ /* 0x161A91B0: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A91A9; /* 0x161A91B4: jne 0x161a91a9 */
L_161A91B6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x161A91B6: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x161A91B8: mov esi, dword ptr [ebp + 8] */
    MEM32(esi) = edx; /* 0x161A91BB: mov dword ptr [esi], edx */
    MEM32(ecx + 0x8) = eax; /* 0x161A91BD: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A91C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A91C2:
    edi = POP32_VAL(esp); /* 0x161A91C2: pop edi */
    esi = POP32_VAL(esp); /* 0x161A91C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x161A91C4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161A91C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A91C6: ret 4 */
L_161A91C9:
    eax = 0x80004005u; /* 0x161A91C9: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_161A91C2; /* 0x161A91CE: jmp 0x161a91c2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161A91D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A91D5u);

L_161A91D5:
    edi = edi; /* 0x161A91D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A91D7: push ebp */
    ebp = esp; /* 0x161A91D8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A91DA: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x161A91DD: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A91E9; /* 0x161A91E0: jbe 0x161a91e9 */
L_161A91E2:
    eax = 0x80004005u; /* 0x161A91E2: mov eax, 0x80004005 */
    goto L_161A91EE; /* 0x161A91E7: jmp 0x161a91ee */
L_161A91E9:
    MEM32(ecx + 0x8) = eax; /* 0x161A91E9: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A91EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A91EE:
    ebp = POP32_VAL(esp); /* 0x161A91EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A91EF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A91F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A91F7u);

L_161A91F7:
    edi = edi; /* 0x161A91F7: mov edi, edi */
    PUSH32(esp, esi); /* 0x161A91F9: push esi */
    esi = ecx; /* 0x161A91FA: mov esi, ecx */
    PUSH32(esp, edi); /* 0x161A91FC: push edi */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161A91FD: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_161AE0F0); /* 0x161A9200: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0xC); /* 0x161A9205: mov edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161A9208: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161A920C: pop ecx */
    /* test edi, edi */ /* 0x161A920D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A921F; /* 0x161A920F: je 0x161a921f */
L_161A9211:
    ecx = edi; /* 0x161A9211: mov ecx, edi */
    RECOMP_CALL(sub_161A91F7); /* 0x161A9213: call 0x161a91f7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9218: push edi */
    RECOMP_CALL(sub_161AE0F0); /* 0x161A9219: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A921E: pop ecx */
L_161A921F:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161A921F: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x161A9223: pop edi */
    esi = POP32_VAL(esp); /* 0x161A9224: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A9225: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A922B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A922Bu);

L_161A922B:
    edi = edi; /* 0x161A922B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A922D: push ebp */
    ebp = esp; /* 0x161A922E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161A9230: push esi */
    esi = ecx; /* 0x161A9231: mov esi, ecx */
    RECOMP_CALL(sub_161A91F7); /* 0x161A9233: call 0x161a91f7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x161A9238: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A9245; /* 0x161A923C: je 0x161a9245 */
L_161A923E:
    PUSH32(esp, esi); /* 0x161A923E: push esi */
    RECOMP_CALL(sub_161AE0F0); /* 0x161A923F: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A9244: pop ecx */
L_161A9245:
    eax = esi; /* 0x161A9245: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161A9247: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A9248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A9249: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A9251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9251u);

L_161A9251:
    edi = edi; /* 0x161A9251: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9253: push ebp */
    ebp = esp; /* 0x161A9254: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161A9256: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161A9257: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161A925B: push esi */
    esi = ecx; /* 0x161A925C: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x161A925E: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A928E; /* 0x161A9262: jne 0x161a928e */
L_161A9264:
    eax = 0x2000u; /* 0x161A9264: mov eax, 0x2000 */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x161A9269: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161A9271; /* 0x161A926C: jb 0x161a9271 */
L_161A926E:
    eax = MEM32(ebp + 0xC); /* 0x161A926E: mov eax, dword ptr [ebp + 0xc] */
L_161A9271:
    PUSH32(esp, eax); /* 0x161A9271: push eax */
    MEM32(esi + 0x4) = eax; /* 0x161A9272: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A9275: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A927A: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x161A927B: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x161A927E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A928E; /* 0x161A9280: jne 0x161a928e */
L_161A9282:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x161A9282: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_161A9323; /* 0x161A9289: jmp 0x161a9323 */
L_161A928E:
    eax = MEM32(esi); /* 0x161A928E: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x161A9290: push edi */
    edi = MEM32(esi + 0x4); /* 0x161A9291: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x161A9294: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x161A9296: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161A929E; /* 0x161A9299: jb 0x161a929e */
L_161A929B:
    edi = MEM32(ebp + 0xC); /* 0x161A929B: mov edi, dword ptr [ebp + 0xc] */
L_161A929E:
    ecx = MEM32(esi + 0x8); /* 0x161A929E: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x161A92A1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x161A92A2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161A92A5: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x161A92A6: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x161A92A8: push ebx */
    PUSH32(esp, ecx); /* 0x161A92A9: push ecx */
    RECOMP_CALL(sub_161AE3C0); /* 0x161A92AA: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = edi + ebx; /* 0x161A92AF: lea eax, [edi + ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161A92B2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161A92B4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x161A92B7: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(esi + 0x10), ebx */ /* 0x161A92BA: cmp dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A92C9; /* 0x161A92BD: je 0x161a92c9 */
L_161A92BF:
    eax = edi + 0x3; /* 0x161A92BF: lea eax, [edi + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x161A92C2: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x161A92C5: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    goto L_161A92CB; /* 0x161A92C7: jmp 0x161a92cb */
L_161A92C9:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + edi; /* 0x161A92C9: add dword ptr [esi], edi */
    _flag_k = FK_ADD;
L_161A92CB:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edi; /* 0x161A92CB: sub dword ptr [ebp + 0xc], edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x161A92CE: mov edi, dword ptr [ebp + 0x10] */
    MEM32(edi) = esi; /* 0x161A92D1: mov dword ptr [edi], esi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161A9321; /* 0x161A92D3: je 0x161a9321 */
L_161A92D5:
    PUSH32(esp, 0x14u); /* 0x161A92D5: push 0x14 */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A92D7: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A92DC: pop ecx */
    /* cmp eax, ebx */ /* 0x161A92DD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A92F1; /* 0x161A92DF: je 0x161a92f1 */
L_161A92E1:
    MEM32(eax) = ebx; /* 0x161A92E1: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = ebx; /* 0x161A92E3: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x161A92E6: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x161A92E9: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x161A92EC: mov dword ptr [eax + 0x10], ebx */
    goto L_161A92F3; /* 0x161A92EF: jmp 0x161a92f3 */
L_161A92F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A92F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A92F3:
    MEM32(esi + 0xC) = eax; /* 0x161A92F3: mov dword ptr [esi + 0xc], eax */
    /* cmp eax, ebx */ /* 0x161A92F6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A9303; /* 0x161A92F8: jne 0x161a9303 */
L_161A92FA:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x161A92FA: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_161A9321; /* 0x161A9301: jmp 0x161a9321 */
L_161A9303:
    /* cmp MEM32(esi + 0x10), ebx */ /* 0x161A9303: cmp dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A930F; /* 0x161A9306: je 0x161a930f */
L_161A9308:
    MEM32(eax + 0x10) = 1; /* 0x161A9308: mov dword ptr [eax + 0x10], 1 */
L_161A930F:
    ecx = MEM32(esi + 0xC); /* 0x161A930F: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x161A9312: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A9313: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A9316: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161A9251); /* 0x161A9319: call 0x161a9251 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x161A931E: mov dword ptr [ebp - 4], eax */
L_161A9321:
    ebx = POP32_VAL(esp); /* 0x161A9321: pop ebx */
    edi = POP32_VAL(esp); /* 0x161A9322: pop edi */
L_161A9323:
    eax = MEM32(ebp + (-0x4)); /* 0x161A9323: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x161A9326: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161A9327: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A9328: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A9330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9330u);

L_161A9330:
    eax = ecx; /* 0x161A9330: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161A9332: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x161A9334: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x161A9336: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x161A9339: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x161A933C: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x161A933F: mov dword ptr [eax + 0x10], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A9342: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9348u);

L_161A9348:
    edi = edi; /* 0x161A9348: mov edi, edi */
    PUSH32(esp, esi); /* 0x161A934A: push esi */
    esi = MEM32(ecx); /* 0x161A934B: mov esi, dword ptr [ecx] */
    goto L_161A9360; /* 0x161A934D: jmp 0x161a9360 */
L_161A934F:
    eax = esi + 0xC; /* 0x161A934F: lea eax, [esi + 0xc] */
    ecx = esi; /* 0x161A9352: mov ecx, esi */
    esi = MEM32(eax); /* 0x161A9354: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x161A9356: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x161A9359: push 1 */
    RECOMP_CALL(sub_161A922B); /* 0x161A935B: call 0x161a922b */
    RECOMP_FLAGS_IN();
L_161A9360:
    /* test esi, esi */ /* 0x161A9360: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A934F; /* 0x161A9362: jne 0x161a934f */
L_161A9364:
    esi = POP32_VAL(esp); /* 0x161A9364: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A9365: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A936B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A936Bu);

L_161A936B:
    edi = edi; /* 0x161A936B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A936D: push ebp */
    ebp = esp; /* 0x161A936E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9370: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x161A9373: mov dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A9376: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x161A9378: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A9379: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A9381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9381u);

L_161A9381:
    edi = edi; /* 0x161A9381: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9383: push ebp */
    ebp = esp; /* 0x161A9384: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9386: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161A9389: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), edx */ /* 0x161A938B: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A93B4; /* 0x161A938E: jbe 0x161a93b4 */
L_161A9390:
    PUSH32(esp, esi); /* 0x161A9390: push esi */
    /* cmp MEM32(ecx), edx */ /* 0x161A9391: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A939B; /* 0x161A9393: jne 0x161a939b */
L_161A9395:
    esi = MEM32(eax); /* 0x161A9395: mov esi, dword ptr [eax] */
    MEM32(ecx) = esi; /* 0x161A9397: mov dword ptr [ecx], esi */
    goto L_161A93A5; /* 0x161A9399: jmp 0x161a93a5 */
L_161A939B:
    esi = MEM32(ecx + 0x4); /* 0x161A939B: mov esi, dword ptr [ecx + 4] */
    PUSH32(esp, edi); /* 0x161A939E: push edi */
    edi = MEM32(eax); /* 0x161A939F: mov edi, dword ptr [eax] */
    MEM32(esi + 0xC) = edi; /* 0x161A93A1: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x161A93A4: pop edi */
L_161A93A5:
    esi = MEM32(eax + 0x4); /* 0x161A93A5: mov esi, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = esi; /* 0x161A93A8: mov dword ptr [ecx + 4], esi */
    MEM32(eax) = edx; /* 0x161A93AB: mov dword ptr [eax], edx */
    eax = MEM32(eax + 0x8); /* 0x161A93AD: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x161A93B0: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x161A93B3: pop esi */
L_161A93B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A93B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x161A93B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A93B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A93BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A93BFu);

L_161A93BF:
    edi = edi; /* 0x161A93BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A93C1: push ebp */
    ebp = esp; /* 0x161A93C2: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161A93C4: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x161A93C5: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x161A93C8: push esi */
    PUSH32(esp, edi); /* 0x161A93C9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161A93CA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A93CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x161A93CE: mov esi, ecx */
    /* cmp ebx, edi */ /* 0x161A93D0: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A93DF; /* 0x161A93D2: jne 0x161a93df */
L_161A93D4:
    ecx = MEM32(ebp + 0x10); /* 0x161A93D4: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, edi */ /* 0x161A93D7: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A9444; /* 0x161A93D9: je 0x161a9444 */
L_161A93DB:
    MEM32(ecx) = edi; /* 0x161A93DB: mov dword ptr [ecx], edi */
    goto L_161A9444; /* 0x161A93DD: jmp 0x161a9444 */
L_161A93DF:
    /* cmp MEM32(esi), edi */ /* 0x161A93DF: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A941F; /* 0x161A93E1: jne 0x161a941f */
L_161A93E3:
    PUSH32(esp, 0x14u); /* 0x161A93E3: push 0x14 */
    RECOMP_CALL(sub_161AE0FC); /* 0x161A93E5: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161A93EA: pop ecx */
    /* cmp eax, edi */ /* 0x161A93EB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A93FF; /* 0x161A93ED: je 0x161a93ff */
L_161A93EF:
    MEM32(eax) = edi; /* 0x161A93EF: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x161A93F1: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = edi; /* 0x161A93F4: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x161A93F7: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x161A93FA: mov dword ptr [eax + 0x10], edi */
    goto L_161A9401; /* 0x161A93FD: jmp 0x161a9401 */
L_161A93FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A93FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A9401:
    MEM32(esi) = eax; /* 0x161A9401: mov dword ptr [esi], eax */
    /* cmp eax, edi */ /* 0x161A9403: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161A940E; /* 0x161A9405: jne 0x161a940e */
L_161A9407:
    eax = 0x8007000Eu; /* 0x161A9407: mov eax, 0x8007000e */
    goto L_161A9444; /* 0x161A940C: jmp 0x161a9444 */
L_161A940E:
    /* cmp MEM32(esi + 0x10), edi */ /* 0x161A940E: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A941A; /* 0x161A9411: je 0x161a941a */
L_161A9413:
    MEM32(eax + 0x10) = 1; /* 0x161A9413: mov dword ptr [eax + 0x10], 1 */
L_161A941A:
    eax = MEM32(esi); /* 0x161A941A: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = eax; /* 0x161A941C: mov dword ptr [esi + 4], eax */
L_161A941F:
    eax = MEM32(ebp + 0x10); /* 0x161A941F: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, edi */ /* 0x161A9422: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A942E; /* 0x161A9424: je 0x161a942e */
L_161A9426:
    ecx = MEM32(esi + 0xC); /* 0x161A9426: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x8); /* 0x161A9429: add ecx, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x161A942C: mov dword ptr [eax], ecx */
L_161A942E:
    eax = esi + 0x4; /* 0x161A942E: lea eax, [esi + 4] */
    ecx = MEM32(eax); /* 0x161A9431: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x161A9433: push eax */
    PUSH32(esp, ebx); /* 0x161A9434: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A9435: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161A9251); /* 0x161A9438: call 0x161a9251 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x161A943D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_161A9444; /* 0x161A943F: jl 0x161a9444 */
L_161A9441:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ebx; /* 0x161A9441: add dword ptr [esi + 8], ebx */
    _flag_k = FK_ADD;
L_161A9444:
    edi = POP32_VAL(esp); /* 0x161A9444: pop edi */
    esi = POP32_VAL(esp); /* 0x161A9445: pop esi */
    ebx = POP32_VAL(esp); /* 0x161A9446: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161A9447: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A9448: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A9450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9450u);

L_161A9450:
    edi = edi; /* 0x161A9450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9452: push ebp */
    ebp = esp; /* 0x161A9453: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161A9455: push ecx */
    PUSH32(esp, ecx); /* 0x161A9456: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161A9457: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x161A945B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x161A945D: push ebx */
    PUSH32(esp, esi); /* 0x161A945E: push esi */
    PUSH32(esp, edi); /* 0x161A945F: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x161A9460: mov dword ptr [ebp - 8], ecx */
    goto L_161A94A5; /* 0x161A9463: jmp 0x161a94a5 */
L_161A9465:
    ecx = MEM32(eax); /* 0x161A9465: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161A9467: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x161A9469: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161A949F; /* 0x161A946C: ja 0x161a949f */
L_161A946E:
    esi = MEM32(eax + 0x8); /* 0x161A946E: mov esi, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x161A9471: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x161A9474: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161A9477: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161A9479: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x161A947B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_161A94C1; /* 0x161A947D: je 0x161a94c1 */
L_161A947F:
    ecx = MEM32(eax); /* 0x161A947F: mov ecx, dword ptr [eax] */
    /* cmp ecx, 0x2000u */ /* 0x161A9481: cmp ecx, 0x2000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161A949F; /* 0x161A9487: ja 0x161a949f */
L_161A9489:
    esi = MEM32(eax + 0x10); /* 0x161A9489: mov esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x161A948C: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161A948E: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    esi = esi & 3; /* 0x161A9490: and esi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161A9493: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x161A9494: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0xC); /* 0x161A9496: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161A9499: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x161A949B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_161A946E; /* 0x161A949D: jbe 0x161a946e */
L_161A949F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + ecx; /* 0x161A949F: add dword ptr [ebp - 4], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0xC); /* 0x161A94A2: mov eax, dword ptr [eax + 0xc] */
L_161A94A5:
    /* test eax, eax */ /* 0x161A94A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A9465; /* 0x161A94A7: jne 0x161a9465 */
L_161A94A9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161A94A9: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x161A94AC: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A94AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A94B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161A93BF); /* 0x161A94B5: call 0x161a93bf */
    RECOMP_FLAGS_IN();
L_161A94BA:
    edi = POP32_VAL(esp); /* 0x161A94BA: pop edi */
    esi = POP32_VAL(esp); /* 0x161A94BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x161A94BC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161A94BD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A94BE: ret 0xc */
L_161A94C1:
    eax = MEM32(ebp + (-0x4)); /* 0x161A94C1: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161A94C4: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x161A94C6: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edx; /* 0x161A94C9: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A94CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161A94BA; /* 0x161A94CD: jmp 0x161a94ba */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161A94D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A94D4u);

L_161A94D4:
    edi = edi; /* 0x161A94D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A94D6: push ebp */
    ebp = esp; /* 0x161A94D7: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x161A94D9: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x161A94DC: push ebx */
    PUSH32(esp, esi); /* 0x161A94DD: push esi */
    esi = MEM32(ecx); /* 0x161A94DE: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x161A94E0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161A94E1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161A94E3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x161A94E5: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161A9509; /* 0x161A94E8: jae 0x161a9509 */
L_161A94EA:
    ebx = 0x80004005u; /* 0x161A94EA: mov ebx, 0x80004005 */
    goto L_161A950D; /* 0x161A94EF: jmp 0x161a950d */
L_161A94F1:
    PUSH32(esp, MEM32(esi)); /* 0x161A94F1: push dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x161A94F3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161A94F6: push dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161A94F9: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161A94FB: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161A94FC: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161A9501: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x161A9504: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x161A9506: mov esi, dword ptr [esi + 0xc] */
L_161A9509:
    /* test esi, esi */ /* 0x161A9509: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A94F1; /* 0x161A950B: jne 0x161a94f1 */
L_161A950D:
    edi = POP32_VAL(esp); /* 0x161A950D: pop edi */
    esi = POP32_VAL(esp); /* 0x161A950E: pop esi */
    eax = ebx; /* 0x161A950F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x161A9511: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161A9512: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A9513: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A951B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A951Bu);

L_161A951B:
    eax = MEM32(ecx + 0x8); /* 0x161A951B: mov eax, dword ptr [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A951E: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9524u);

L_161A9524:
    edi = edi; /* 0x161A9524: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9526: push ebp */
    ebp = esp; /* 0x161A9527: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9529: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x161A952C: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161A9538; /* 0x161A952F: jb 0x161a9538 */
L_161A9531:
    eax = 0x80004005u; /* 0x161A9531: mov eax, 0x80004005 */
    goto L_161A9546; /* 0x161A9536: jmp 0x161a9546 */
L_161A9538:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A9538: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x161A953B: mov dword ptr [ecx + 8], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161A953E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_161A912A); /* 0x161A9541: call 0x161a912a */
    RECOMP_FLAGS_IN();
L_161A9546:
    ebp = POP32_VAL(esp); /* 0x161A9546: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A9547: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A954F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A954Fu);

L_161A954F:
    edi = edi; /* 0x161A954F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9551: push ebp */
    ebp = esp; /* 0x161A9552: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9554: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x161A9557: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161A9563; /* 0x161A955A: jb 0x161a9563 */
L_161A955C:
    eax = 0x80004005u; /* 0x161A955C: mov eax, 0x80004005 */
    goto L_161A956E; /* 0x161A9561: jmp 0x161a956e */
L_161A9563:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A9563: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x161A9566: mov dword ptr [ecx + 8], eax */
    RECOMP_CALL(sub_161A9191); /* 0x161A9569: call 0x161a9191 */
    RECOMP_FLAGS_IN();
L_161A956E:
    ebp = POP32_VAL(esp); /* 0x161A956E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A956F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A9577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9577u);

L_161A9577:
    edi = edi; /* 0x161A9577: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9579: push ebp */
    ebp = esp; /* 0x161A957A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A957C: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x161A957F: lea edx, [eax + 1] */
    PUSH32(esp, ebx); /* 0x161A9582: push ebx */
L_161A9583:
    SET_LO8(ebx, MEM8(eax)); /* 0x161A9583: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161A9585: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x161A9586: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161A9583; /* 0x161A9588: jne 0x161a9583 */
L_161A958A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A958A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161A958D: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161A958F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x161A9590: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A9591: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161A93BF); /* 0x161A9594: call 0x161a93bf */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x161A9599: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161A959A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A959B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A95A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A95A3u);

L_161A95A3:
    edi = edi; /* 0x161A95A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A95A5: push ebp */
    ebp = esp; /* 0x161A95A6: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A95A8: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x8; /* 0x161A95AB: lea eax, [ebp + 8] */
    PUSH32(esp, 4); /* 0x161A95AE: push 4 */
    PUSH32(esp, eax); /* 0x161A95B0: push eax */
    RECOMP_CALL(sub_161A93BF); /* 0x161A95B1: call 0x161a93bf */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x161A95B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161A95B7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161A95BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A95BFu);

L_161A95BF:
    edi = edi; /* 0x161A95BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A95C1: push ebp */
    ebp = esp; /* 0x161A95C2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161A95C4: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161A95C5: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x161A95C8: lea eax, [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x161A95CB: push 4 */
    PUSH32(esp, eax); /* 0x161A95CD: push eax */
    esi = ecx; /* 0x161A95CE: mov esi, ecx */
    RECOMP_CALL(sub_161A93BF); /* 0x161A95D0: call 0x161a93bf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161A95D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161A95E8; /* 0x161A95D7: jl 0x161a95e8 */
L_161A95D9:
    PUSH32(esp, 0); /* 0x161A95D9: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A95DB: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x161A95DE: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161A95E0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161A93BF); /* 0x161A95E3: call 0x161a93bf */
    RECOMP_FLAGS_IN();
L_161A95E8:
    esi = POP32_VAL(esp); /* 0x161A95E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A95E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A95EA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A95F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A95F2u);

L_161A95F2:
    eax = ecx; /* 0x161A95F2: mov eax, ecx */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x161A95F4: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 0xFFFFFFFFu; /* 0x161A95F7: or dword ptr [eax + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x161A95FB: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x161A95FF: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A9603: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9651(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9651u);

    goto L_161A9651;
L_161A9609:
    edi = edi; /* 0x161A9609: mov edi, edi */
    PUSH32(esp, esi); /* 0x161A960B: push esi */
    esi = ecx; /* 0x161A960C: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x161A960E: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x161A9611: push edi */
    /* test eax, eax */ /* 0x161A9612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A9625; /* 0x161A9614: je 0x161a9625 */
L_161A9616:
    PUSH32(esp, eax); /* 0x161A9616: push eax */
    RECOMP_ICALL(MEM32(0x16001028)); /* 0x161A9617: call dword ptr [0x16001028] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161A961D: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161A9621: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A9625:
    eax = MEM32(esi + 0x4); /* 0x161A9625: mov eax, dword ptr [esi + 4] */
    edi = MEM32(0x1600102C); /* 0x161A9628: mov edi, dword ptr [0x1600102c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161A962E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A963A; /* 0x161A9631: je 0x161a963a */
L_161A9633:
    PUSH32(esp, eax); /* 0x161A9633: push eax */
    RECOMP_ICALL(edi); /* 0x161A9634: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x161A9636: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A963A:
    eax = MEM32(esi); /* 0x161A963A: mov eax, dword ptr [esi] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161A963C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A9647; /* 0x161A963F: je 0x161a9647 */
L_161A9641:
    PUSH32(esp, eax); /* 0x161A9641: push eax */
    RECOMP_ICALL(edi); /* 0x161A9642: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x161A9644: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_161A9647:
    edi = POP32_VAL(esp); /* 0x161A9647: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161A9648: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161A964A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A964B: ret  */
L_161A9651:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x161A9651: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161A965B; /* 0x161A9654: je 0x161a965b */
L_161A9656:
    RECOMP_BACKEDGE();
    goto L_161A9609; /* 0x161A9656: jmp 0x161a9609 */
L_161A965B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A965B: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9661u);

L_161A9661:
    eax = MEM32(ecx); /* 0x161A9661: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x161A9663: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161A966E; /* 0x161A9665: je 0x161a966e */
L_161A9667:
    PUSH32(esp, eax); /* 0x161A9667: push eax */
    RECOMP_ICALL(MEM32(0x16001000)); /* 0x161A9668: call dword ptr [0x16001000] */
    RECOMP_FLAGS_IN();
L_161A966E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A966E: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A9674(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9674u);

L_161A9674:
    edi = edi; /* 0x161A9674: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9676: push ebp */
    ebp = esp; /* 0x161A9677: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A9679: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xCFu */ /* 0x161A967C: cmp eax, 0xcf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_161A9691; /* 0x161A9681: jge 0x161a9691 */
L_161A9683:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x48u); /* 0x161A9683: imul eax, eax, 0x48 */
    eax = (uint32_t)MEM8(eax + 0x161B6E60); /* 0x161A9686: movzx eax, byte ptr [eax + 0x161b6e60] */
    ebp = POP32_VAL(esp); /* 0x161A968D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A968E: ret 4 */
L_161A9691:
    PUSH32(esp, 0x161B0170u); /* 0x161A9691: push 0x161b0170 */
    eax = ebp + 0x8; /* 0x161A9696: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x161A9699: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x161A969A: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_161AE47E); /* 0x161A96A1: call 0x161ae47e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x161A96A6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161A96AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A96ACu);

L_161A96AC:
    edi = edi; /* 0x161A96AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A96AE: push ebp */
    ebp = esp; /* 0x161A96AF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161A96B1: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x161A96B4: mov dword ptr [ecx + 4], eax */
    edx = MEM32(eax + 0x4); /* 0x161A96B7: mov edx, dword ptr [eax + 4] */
    edx = eax + edx * 4; /* 0x161A96BA: lea edx, [eax + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x161A96BD: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = edx; /* 0x161A96C0: mov dword ptr [ecx + 8], edx */
    MEM32(ecx) = eax; /* 0x161A96C3: mov dword ptr [ecx], eax */
    ebp = POP32_VAL(esp); /* 0x161A96C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161A96C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161A96CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A96CEu);

L_161A96CE:
    eax = MEM32(ecx + 0x4); /* 0x161A96CE: mov eax, dword ptr [ecx + 4] */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x161A96D1: movzx eax, word ptr [eax + 2] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A96D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A96DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A96DBu);

L_161A96DB:
    eax = MEM32(ecx + 0x4); /* 0x161A96DB: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x161A96DE: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x161A96E0: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A96E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A96E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A96E9u);

L_161A96E9:
    eax = MEM32(ecx + 0x4); /* 0x161A96E9: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x161A96EC: mov eax, dword ptr [eax] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x161A96EE: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x161A96EE: shr eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x161A96F1: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161A96F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_161A96FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A96FAu);

L_161A96FA:
    edi = edi; /* 0x161A96FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A96FC: push ebp */
    ebp = esp; /* 0x161A96FD: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x161A96FF: mov al, byte ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161A9702: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161A9703: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x161A9706: mov esi, ecx */
    PUSH32(esp, 0x40u); /* 0x161A9708: push 0x40 */
    PUSH32(esp, esi); /* 0x161A970A: push esi */
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x161A970B: mov byte ptr [esi + 0x40], al */
    RECOMP_CALL(sub_16078370); /* 0x161A970E: call 0x16078370 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x161A9713: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x44) = eax; /* 0x161A9716: mov dword ptr [esi + 0x44], eax */
    esi = POP32_VAL(esp); /* 0x161A9719: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A971A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A971B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A9723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9723u);

L_161A9723:
    edi = edi; /* 0x161A9723: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A9725: push ebp */
    ebp = esp; /* 0x161A9726: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161A9728: push esi */
    PUSH32(esp, 0xC0u); /* 0x161A9729: push 0xc0 */
    esi = ecx; /* 0x161A972E: mov esi, ecx */
    PUSH32(esp, 0); /* 0x161A9730: push 0 */
    PUSH32(esp, esi); /* 0x161A9732: push esi */
    RECOMP_CALL(sub_161AE3CC); /* 0x161A9733: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x161A9738: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0; /* 0x161A973B: and dword ptr [esi + 0x8c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0; /* 0x161A9742: and dword ptr [esi + 0x88], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161A9749: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0; /* 0x161A974C: and dword ptr [esi + 0xb0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x161A9753: push 2 */
    eax = POP32_VAL(esp); /* 0x161A9755: pop eax */
    MEM32(esi + 0x84) = eax; /* 0x161A9756: mov dword ptr [esi + 0x84], eax */
    MEM32(esi + 0x80) = eax; /* 0x161A975C: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(ebp + 0xC); /* 0x161A9762: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x98) = ecx; /* 0x161A9765: mov dword ptr [esi + 0x98], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x161A976B: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = eax; /* 0x161A976E: mov dword ptr [esi + 8], eax */
    MEM32(esi) = ecx; /* 0x161A9771: mov dword ptr [esi], ecx */
    MEM32(esi + 0xBC) = 1; /* 0x161A9773: mov dword ptr [esi + 0xbc], 1 */
    eax = esi; /* 0x161A977D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161A977F: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A9780: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161A9781: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161A9789(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A9789u);

L_161A9789:
    edi = edi; /* 0x161A9789: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161A978B: push ebp */
    ebp = esp; /* 0x161A978C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161A978E: push esi */
    PUSH32(esp, edi); /* 0x161A978F: push edi */
    PUSH32(esp, 0xC0u); /* 0x161A9790: push 0xc0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161A9795: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x161A9797: mov esi, ecx */
    PUSH32(esp, edi); /* 0x161A9799: push edi */
    PUSH32(esp, esi); /* 0x161A979A: push esi */
    RECOMP_CALL(sub_161AE3CC); /* 0x161A979B: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x161A97A0: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161A97A3: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x161A97A6: push 2 */
    eax = POP32_VAL(esp); /* 0x161A97A8: pop eax */
    MEM32(esi + 0x84) = eax; /* 0x161A97A9: mov dword ptr [esi + 0x84], eax */
    MEM32(esi + 0x80) = eax; /* 0x161A97AF: mov dword ptr [esi + 0x80], eax */
    MEM32(esi + 0xBC) = eax; /* 0x161A97B5: mov dword ptr [esi + 0xbc], eax */
    eax = MEM32(ebp + 0xC); /* 0x161A97BB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x161A97BE: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x161A97C1: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x98) = ecx; /* 0x161A97C4: mov dword ptr [esi + 0x98], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x161A97CA: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x8C) = edi; /* 0x161A97CD: mov dword ptr [esi + 0x8c], edi */
    MEM32(esi + 0x88) = edi; /* 0x161A97D3: mov dword ptr [esi + 0x88], edi */
    MEM32(esi + 0xB0) = edi; /* 0x161A97D9: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0xB4) = edi; /* 0x161A97DF: mov dword ptr [esi + 0xb4], edi */
    MEM32(esi + 0x30) = eax; /* 0x161A97E5: mov dword ptr [esi + 0x30], eax */
    edi = POP32_VAL(esp); /* 0x161A97E8: pop edi */
    MEM32(esi) = ecx; /* 0x161A97E9: mov dword ptr [esi], ecx */
    eax = esi; /* 0x161A97EB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161A97ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x161A97EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161A97EF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161A97F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161A97F7u);

L_161A97F7:
    edi = edi; /* 0x161A97F7: mov edi, edi */
    PUSH32(esp, ebx); /* 0x161A97F9: push ebx */
    PUSH32(esp, esi); /* 0x161A97FA: push esi */
    PUSH32(esp, edi); /* 0x161A97FB: push edi */
    PUSH32(esp, 3); /* 0x161A97FC: push 3 */
    ebx = POP32_VAL(esp); /* 0x161A97FE: pop ebx */
    PUSH32(esp, 0x1602D060u); /* 0x161A97FF: push 0x1602d060 */
    PUSH32(esp, 0x40u); /* 0x161A9804: push 0x40 */
    PUSH32(esp, 0x161B6E20u); /* 0x161A9806: push 0x161b6e20 */
    MEM8(0x161B6E60) = (uint8_t)(LO8(ebx)); /* 0x161A980B: mov byte ptr [0x161b6e60], bl */
    RECOMP_CALL(sub_16078370); /* 0x161A9811: call 0x16078370 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161A9816: push ebx */
    PUSH32(esp, 0x1603E414u); /* 0x161A9817: push 0x1603e414 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161A981C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161A981E: push ebx */
    ecx = 0x161B6E68u; /* 0x161A981F: mov ecx, 0x161b6e68 */
    MEM32(0x161B6E64) = esi; /* 0x161A9824: mov dword ptr [0x161b6e64], esi */
    RECOMP_CALL(sub_161A96FA); /* 0x161A982A: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x161A982F: push 4 */
    edi = POP32_VAL(esp); /* 0x161A9831: pop edi */
    PUSH32(esp, edi); /* 0x161A9832: push edi */
    PUSH32(esp, 0x1602CF80u); /* 0x161A9833: push 0x1602cf80 */
    PUSH32(esp, esi); /* 0x161A9838: push esi */
    ecx = 0x161B6EB0u; /* 0x161A9839: mov ecx, 0x161b6eb0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A983E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9843: push edi */
    PUSH32(esp, 0x160018D0u); /* 0x161A9844: push 0x160018d0 */
    PUSH32(esp, 1); /* 0x161A9849: push 1 */
    ecx = 0x161B6EF8u; /* 0x161A984B: mov ecx, 0x161b6ef8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9850: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9855: push edi */
    PUSH32(esp, 0x1602CFECu); /* 0x161A9856: push 0x1602cfec */
    PUSH32(esp, 1); /* 0x161A985B: push 1 */
    ecx = 0x161B6F40u; /* 0x161A985D: mov ecx, 0x161b6f40 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9862: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9867: push edi */
    PUSH32(esp, 0x160018C8u); /* 0x161A9868: push 0x160018c8 */
    PUSH32(esp, 2); /* 0x161A986D: push 2 */
    ecx = 0x161B6F88u; /* 0x161A986F: mov ecx, 0x161b6f88 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9874: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9879: push edi */
    PUSH32(esp, 0x16038484u); /* 0x161A987A: push 0x16038484 */
    PUSH32(esp, esi); /* 0x161A987F: push esi */
    ecx = 0x161B7018u; /* 0x161A9880: mov ecx, 0x161b7018 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9885: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A988A: push edi */
    PUSH32(esp, 0x160018BCu); /* 0x161A988B: push 0x160018bc */
    PUSH32(esp, 1); /* 0x161A9890: push 1 */
    ecx = 0x161B7060u; /* 0x161A9892: mov ecx, 0x161b7060 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9897: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A989C: push edi */
    PUSH32(esp, 0x1603842Cu); /* 0x161A989D: push 0x1603842c */
    PUSH32(esp, 1); /* 0x161A98A2: push 1 */
    ecx = 0x161B6FD0u; /* 0x161A98A4: mov ecx, 0x161b6fd0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98A9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A98AE: push edi */
    PUSH32(esp, 0x1603E4BCu); /* 0x161A98AF: push 0x1603e4bc */
    PUSH32(esp, esi); /* 0x161A98B4: push esi */
    ecx = 0x161B70A8u; /* 0x161A98B5: mov ecx, 0x161b70a8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98BA: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A98BF: push edi */
    PUSH32(esp, 0x160384D4u); /* 0x161A98C0: push 0x160384d4 */
    PUSH32(esp, esi); /* 0x161A98C5: push esi */
    ecx = 0x161B70F0u; /* 0x161A98C6: mov ecx, 0x161b70f0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98CB: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A98D0: push edi */
    PUSH32(esp, 0x160384E4u); /* 0x161A98D1: push 0x160384e4 */
    PUSH32(esp, 1); /* 0x161A98D6: push 1 */
    ecx = 0x161B71C8u; /* 0x161A98D8: mov ecx, 0x161b71c8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98DD: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A98E2: push esi */
    PUSH32(esp, 0x1603E388u); /* 0x161A98E3: push 0x1603e388 */
    PUSH32(esp, ebx); /* 0x161A98E8: push ebx */
    ecx = 0x161B7210u; /* 0x161A98E9: mov ecx, 0x161b7210 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98EE: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A98F3: push esi */
    PUSH32(esp, 0x160018B8u); /* 0x161A98F4: push 0x160018b8 */
    PUSH32(esp, ebx); /* 0x161A98F9: push ebx */
    ecx = 0x161B7258u; /* 0x161A98FA: mov ecx, 0x161b7258 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A98FF: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9904: push esi */
    PUSH32(esp, 0x1602D048u); /* 0x161A9905: push 0x1602d048 */
    PUSH32(esp, ebx); /* 0x161A990A: push ebx */
    ecx = 0x161B72A0u; /* 0x161A990B: mov ecx, 0x161b72a0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9910: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9915: push esi */
    PUSH32(esp, 0x1602D044u); /* 0x161A9916: push 0x1602d044 */
    PUSH32(esp, ebx); /* 0x161A991B: push ebx */
    ecx = 0x161B72E8u; /* 0x161A991C: mov ecx, 0x161b72e8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9921: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9926: push edi */
    PUSH32(esp, 0x1602CF90u); /* 0x161A9927: push 0x1602cf90 */
    PUSH32(esp, esi); /* 0x161A992C: push esi */
    ecx = 0x161B7330u; /* 0x161A992D: mov ecx, 0x161b7330 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9932: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9937: push edi */
    PUSH32(esp, 0x1603E4B4u); /* 0x161A9938: push 0x1603e4b4 */
    PUSH32(esp, esi); /* 0x161A993D: push esi */
    ecx = 0x161B7378u; /* 0x161A993E: mov ecx, 0x161b7378 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9943: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9948: push edi */
    PUSH32(esp, 0x160018A8u); /* 0x161A9949: push 0x160018a8 */
    PUSH32(esp, esi); /* 0x161A994E: push esi */
    ecx = 0x161B73C0u; /* 0x161A994F: mov ecx, 0x161b73c0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9954: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9959: push edi */
    PUSH32(esp, 0x1602CF88u); /* 0x161A995A: push 0x1602cf88 */
    PUSH32(esp, esi); /* 0x161A995F: push esi */
    ecx = 0x161B7408u; /* 0x161A9960: mov ecx, 0x161b7408 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9965: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A996A: push edi */
    PUSH32(esp, 0x1602CFD0u); /* 0x161A996B: push 0x1602cfd0 */
    PUSH32(esp, esi); /* 0x161A9970: push esi */
    ecx = 0x161B7450u; /* 0x161A9971: mov ecx, 0x161b7450 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9976: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A997B: push edi */
    PUSH32(esp, 0x1600189Cu); /* 0x161A997C: push 0x1600189c */
    PUSH32(esp, esi); /* 0x161A9981: push esi */
    ecx = 0x161B7498u; /* 0x161A9982: mov ecx, 0x161b7498 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9987: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A998C: push esi */
    PUSH32(esp, 0x1602D9E8u); /* 0x161A998D: push 0x1602d9e8 */
    PUSH32(esp, ebx); /* 0x161A9992: push ebx */
    ecx = 0x161B74E0u; /* 0x161A9993: mov ecx, 0x161b74e0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9998: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A999D: push esi */
    PUSH32(esp, 0x1602D030u); /* 0x161A999E: push 0x1602d030 */
    PUSH32(esp, 2); /* 0x161A99A3: push 2 */
    ecx = 0x161B7528u; /* 0x161A99A5: mov ecx, 0x161b7528 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A99AA: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A99AF: push esi */
    PUSH32(esp, 0x1602D01Cu); /* 0x161A99B0: push 0x1602d01c */
    PUSH32(esp, 2); /* 0x161A99B5: push 2 */
    ecx = 0x161B7570u; /* 0x161A99B7: mov ecx, 0x161b7570 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A99BC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A99C1: push esi */
    PUSH32(esp, 0x1603E320u); /* 0x161A99C2: push 0x1603e320 */
    PUSH32(esp, 2); /* 0x161A99C7: push 2 */
    ecx = 0x161B75B8u; /* 0x161A99C9: mov ecx, 0x161b75b8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A99CE: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A99D3: push esi */
    PUSH32(esp, 0x1603E328u); /* 0x161A99D4: push 0x1603e328 */
    PUSH32(esp, 2); /* 0x161A99D9: push 2 */
    ecx = 0x161B7600u; /* 0x161A99DB: mov ecx, 0x161b7600 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A99E0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A99E5: push esi */
    PUSH32(esp, 0x1602D9ECu); /* 0x161A99E6: push 0x1602d9ec */
    PUSH32(esp, ebx); /* 0x161A99EB: push ebx */
    ecx = 0x161B7648u; /* 0x161A99EC: mov ecx, 0x161b7648 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A99F1: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A99F6: push esi */
    PUSH32(esp, 0x16001890u); /* 0x161A99F7: push 0x16001890 */
    PUSH32(esp, 2); /* 0x161A99FC: push 2 */
    ecx = 0x161B7138u; /* 0x161A99FE: mov ecx, 0x161b7138 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A03: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9A08: push esi */
    PUSH32(esp, 0x16001884u); /* 0x161A9A09: push 0x16001884 */
    PUSH32(esp, 2); /* 0x161A9A0E: push 2 */
    ecx = 0x161B7180u; /* 0x161A9A10: mov ecx, 0x161b7180 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A15: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A1A: push 1 */
    PUSH32(esp, 0x1603E360u); /* 0x161A9A1C: push 0x1603e360 */
    PUSH32(esp, ebx); /* 0x161A9A21: push ebx */
    ecx = 0x161B7690u; /* 0x161A9A22: mov ecx, 0x161b7690 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A27: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9A2C: push edi */
    PUSH32(esp, 0x1602CF98u); /* 0x161A9A2D: push 0x1602cf98 */
    PUSH32(esp, 1); /* 0x161A9A32: push 1 */
    ecx = 0x161B76D8u; /* 0x161A9A34: mov ecx, 0x161b76d8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A39: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A3E: push 1 */
    PUSH32(esp, 0x16001880u); /* 0x161A9A40: push 0x16001880 */
    PUSH32(esp, ebx); /* 0x161A9A45: push ebx */
    ecx = 0x161B7720u; /* 0x161A9A46: mov ecx, 0x161b7720 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A4B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A50: push 1 */
    PUSH32(esp, 0x1600187Cu); /* 0x161A9A52: push 0x1600187c */
    PUSH32(esp, ebx); /* 0x161A9A57: push ebx */
    ecx = 0x161B7768u; /* 0x161A9A58: mov ecx, 0x161b7768 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A5D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A62: push 1 */
    PUSH32(esp, 0x16001878u); /* 0x161A9A64: push 0x16001878 */
    PUSH32(esp, ebx); /* 0x161A9A69: push ebx */
    ecx = 0x161B77B0u; /* 0x161A9A6A: mov ecx, 0x161b77b0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A6F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A74: push 1 */
    PUSH32(esp, 0x1603E460u); /* 0x161A9A76: push 0x1603e460 */
    PUSH32(esp, edi); /* 0x161A9A7B: push edi */
    ecx = 0x161B77F8u; /* 0x161A9A7C: mov ecx, 0x161b77f8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A81: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A86: push 1 */
    PUSH32(esp, 0x1603E3BCu); /* 0x161A9A88: push 0x1603e3bc */
    PUSH32(esp, ebx); /* 0x161A9A8D: push ebx */
    ecx = 0x161B7840u; /* 0x161A9A8E: mov ecx, 0x161b7840 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9A93: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9A98: push 1 */
    PUSH32(esp, 0x1603E3A4u); /* 0x161A9A9A: push 0x1603e3a4 */
    PUSH32(esp, ebx); /* 0x161A9A9F: push ebx */
    ecx = 0x161B7888u; /* 0x161A9AA0: mov ecx, 0x161b7888 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9AA5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9AAA: push 1 */
    PUSH32(esp, 0x1603E370u); /* 0x161A9AAC: push 0x1603e370 */
    PUSH32(esp, edi); /* 0x161A9AB1: push edi */
    ecx = 0x161B78D0u; /* 0x161A9AB2: mov ecx, 0x161b78d0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9AB7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9ABC: push 1 */
    PUSH32(esp, 0x16001874u); /* 0x161A9ABE: push 0x16001874 */
    PUSH32(esp, ebx); /* 0x161A9AC3: push ebx */
    ecx = 0x161B7918u; /* 0x161A9AC4: mov ecx, 0x161b7918 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9AC9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9ACE: push 1 */
    PUSH32(esp, 0x1603E2E8u); /* 0x161A9AD0: push 0x1603e2e8 */
    PUSH32(esp, 2); /* 0x161A9AD5: push 2 */
    ecx = 0x161B7960u; /* 0x161A9AD7: mov ecx, 0x161b7960 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9ADC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9AE1: push 1 */
    PUSH32(esp, 0x1603E420u); /* 0x161A9AE3: push 0x1603e420 */
    PUSH32(esp, ebx); /* 0x161A9AE8: push ebx */
    ecx = 0x161B79A8u; /* 0x161A9AE9: mov ecx, 0x161b79a8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9AEE: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9AF3: push 1 */
    PUSH32(esp, 0x1603E428u); /* 0x161A9AF5: push 0x1603e428 */
    PUSH32(esp, ebx); /* 0x161A9AFA: push ebx */
    ecx = 0x161B79F0u; /* 0x161A9AFB: mov ecx, 0x161b79f0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B00: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x161A9B05: push 1 */
    PUSH32(esp, 0x1603E310u); /* 0x161A9B07: push 0x1603e310 */
    PUSH32(esp, 2); /* 0x161A9B0C: push 2 */
    ecx = 0x161B7A38u; /* 0x161A9B0E: mov ecx, 0x161b7a38 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B13: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9B18: push edi */
    PUSH32(esp, 0x1602CFC8u); /* 0x161A9B19: push 0x1602cfc8 */
    PUSH32(esp, 1); /* 0x161A9B1E: push 1 */
    ecx = 0x161B7A80u; /* 0x161A9B20: mov ecx, 0x161b7a80 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B25: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9B2A: push 5 */
    PUSH32(esp, 0x16001870u); /* 0x161A9B2C: push 0x16001870 */
    PUSH32(esp, ebx); /* 0x161A9B31: push ebx */
    ecx = 0x161B7AC8u; /* 0x161A9B32: mov ecx, 0x161b7ac8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B37: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9B3C: push 5 */
    PUSH32(esp, 0x16001868u); /* 0x161A9B3E: push 0x16001868 */
    PUSH32(esp, edi); /* 0x161A9B43: push edi */
    ecx = 0x161B7B10u; /* 0x161A9B44: mov ecx, 0x161b7b10 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B49: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9B4E: push esi */
    PUSH32(esp, 0x1602D02Cu); /* 0x161A9B4F: push 0x1602d02c */
    PUSH32(esp, 2); /* 0x161A9B54: push 2 */
    ecx = 0x161B7B58u; /* 0x161A9B56: mov ecx, 0x161b7b58 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B5B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9B60: push edi */
    PUSH32(esp, 0x1602CFDCu); /* 0x161A9B61: push 0x1602cfdc */
    PUSH32(esp, esi); /* 0x161A9B66: push esi */
    ecx = 0x161B7BA0u; /* 0x161A9B67: mov ecx, 0x161b7ba0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B6C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9B71: push esi */
    PUSH32(esp, 0x1602D9F0u); /* 0x161A9B72: push 0x1602d9f0 */
    PUSH32(esp, ebx); /* 0x161A9B77: push ebx */
    ecx = 0x161B7BE8u; /* 0x161A9B78: mov ecx, 0x161b7be8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B7D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9B82: push esi */
    PUSH32(esp, 0x1602D058u); /* 0x161A9B83: push 0x1602d058 */
    PUSH32(esp, edi); /* 0x161A9B88: push edi */
    ecx = 0x161B7C30u; /* 0x161A9B89: mov ecx, 0x161b7c30 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B8E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9B93: push esi */
    PUSH32(esp, 0x1602D03Cu); /* 0x161A9B94: push 0x1602d03c */
    PUSH32(esp, ebx); /* 0x161A9B99: push ebx */
    ecx = 0x161B7CC0u; /* 0x161A9B9A: mov ecx, 0x161b7cc0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9B9F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9BA4: push esi */
    PUSH32(esp, 0x1602D040u); /* 0x161A9BA5: push 0x1602d040 */
    PUSH32(esp, ebx); /* 0x161A9BAA: push ebx */
    ecx = 0x161B7C78u; /* 0x161A9BAB: mov ecx, 0x161b7c78 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9BB0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9BB5: push esi */
    PUSH32(esp, 0x1602D064u); /* 0x161A9BB6: push 0x1602d064 */
    PUSH32(esp, 2); /* 0x161A9BBB: push 2 */
    ecx = 0x161B7D50u; /* 0x161A9BBD: mov ecx, 0x161b7d50 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9BC2: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9BC7: push esi */
    PUSH32(esp, 0x1603E440u); /* 0x161A9BC8: push 0x1603e440 */
    PUSH32(esp, edi); /* 0x161A9BCD: push edi */
    ecx = 0x161B7D98u; /* 0x161A9BCE: mov ecx, 0x161b7d98 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9BD3: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9BD8: push esi */
    PUSH32(esp, 0x1602D054u); /* 0x161A9BD9: push 0x1602d054 */
    PUSH32(esp, ebx); /* 0x161A9BDE: push ebx */
    ecx = 0x161B7DE0u; /* 0x161A9BDF: mov ecx, 0x161b7de0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9BE4: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9BE9: push esi */
    PUSH32(esp, 0x1602D9F4u); /* 0x161A9BEA: push 0x1602d9f4 */
    PUSH32(esp, ebx); /* 0x161A9BEF: push ebx */
    ecx = 0x161B7E28u; /* 0x161A9BF0: mov ecx, 0x161b7e28 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9BF5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9BFA: push edi */
    PUSH32(esp, 0x1602D068u); /* 0x161A9BFB: push 0x1602d068 */
    PUSH32(esp, esi); /* 0x161A9C00: push esi */
    ecx = 0x161B7E70u; /* 0x161A9C01: mov ecx, 0x161b7e70 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C06: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161A9C0B: push ebx */
    PUSH32(esp, 0x1603E2F0u); /* 0x161A9C0C: push 0x1603e2f0 */
    PUSH32(esp, 2); /* 0x161A9C11: push 2 */
    ecx = 0x161B7EB8u; /* 0x161A9C13: mov ecx, 0x161b7eb8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C18: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161A9C1D: push ebx */
    PUSH32(esp, 0x1603E418u); /* 0x161A9C1E: push 0x1603e418 */
    PUSH32(esp, ebx); /* 0x161A9C23: push ebx */
    ecx = 0x161B7F00u; /* 0x161A9C24: mov ecx, 0x161b7f00 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C29: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9C2E: push edi */
    PUSH32(esp, 0x1603E48Cu); /* 0x161A9C2F: push 0x1603e48c */
    PUSH32(esp, ebx); /* 0x161A9C34: push ebx */
    ecx = 0x161B7F48u; /* 0x161A9C35: mov ecx, 0x161b7f48 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C3A: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9C3F: push edi */
    PUSH32(esp, 0x1602CFD8u); /* 0x161A9C40: push 0x1602cfd8 */
    PUSH32(esp, esi); /* 0x161A9C45: push esi */
    ecx = 0x161B7F90u; /* 0x161A9C46: mov ecx, 0x161b7f90 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C4B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9C50: push edi */
    PUSH32(esp, 0x16001860u); /* 0x161A9C51: push 0x16001860 */
    PUSH32(esp, 1); /* 0x161A9C56: push 1 */
    ecx = 0x161B7FD8u; /* 0x161A9C58: mov ecx, 0x161b7fd8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C5D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9C62: push esi */
    PUSH32(esp, 0x16001854u); /* 0x161A9C63: push 0x16001854 */
    PUSH32(esp, 2); /* 0x161A9C68: push 2 */
    ecx = 0x161B8020u; /* 0x161A9C6A: mov ecx, 0x161b8020 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C6F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9C74: push esi */
    PUSH32(esp, 0x16001848u); /* 0x161A9C75: push 0x16001848 */
    PUSH32(esp, 2); /* 0x161A9C7A: push 2 */
    ecx = 0x161B8068u; /* 0x161A9C7C: mov ecx, 0x161b8068 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C81: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9C86: push esi */
    PUSH32(esp, 0x1600183Cu); /* 0x161A9C87: push 0x1600183c */
    PUSH32(esp, 2); /* 0x161A9C8C: push 2 */
    ecx = 0x161B80B0u; /* 0x161A9C8E: mov ecx, 0x161b80b0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9C93: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9C98: push esi */
    PUSH32(esp, 0x16001834u); /* 0x161A9C99: push 0x16001834 */
    PUSH32(esp, 2); /* 0x161A9C9E: push 2 */
    ecx = 0x161B80F8u; /* 0x161A9CA0: mov ecx, 0x161b80f8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9CA5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9CAA: push esi */
    PUSH32(esp, 0x1602D04Cu); /* 0x161A9CAB: push 0x1602d04c */
    PUSH32(esp, 2); /* 0x161A9CB0: push 2 */
    ecx = 0x161B8140u; /* 0x161A9CB2: mov ecx, 0x161b8140 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9CB7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9CBC: push 5 */
    PUSH32(esp, 0x1602D9DCu); /* 0x161A9CBE: push 0x1602d9dc */
    PUSH32(esp, edi); /* 0x161A9CC3: push edi */
    ecx = 0x161B8188u; /* 0x161A9CC4: mov ecx, 0x161b8188 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9CC9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9CCE: push 5 */
    PUSH32(esp, 0x16001828u); /* 0x161A9CD0: push 0x16001828 */
    PUSH32(esp, 5); /* 0x161A9CD5: push 5 */
    ecx = 0x161B82F0u; /* 0x161A9CD7: mov ecx, 0x161b82f0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9CDC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9CE1: push 5 */
    PUSH32(esp, 0x1600181Cu); /* 0x161A9CE3: push 0x1600181c */
    PUSH32(esp, 5); /* 0x161A9CE8: push 5 */
    ecx = 0x161B8260u; /* 0x161A9CEA: mov ecx, 0x161b8260 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9CEF: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9CF4: push 5 */
    PUSH32(esp, 0x16001810u); /* 0x161A9CF6: push 0x16001810 */
    PUSH32(esp, 6); /* 0x161A9CFB: push 6 */
    ecx = 0x161B82A8u; /* 0x161A9CFD: mov ecx, 0x161b82a8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D02: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9D07: push 5 */
    PUSH32(esp, 0x16001804u); /* 0x161A9D09: push 0x16001804 */
    PUSH32(esp, 5); /* 0x161A9D0E: push 5 */
    ecx = 0x161B81D0u; /* 0x161A9D10: mov ecx, 0x161b81d0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D15: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9D1A: push 5 */
    PUSH32(esp, 0x160017F8u); /* 0x161A9D1C: push 0x160017f8 */
    PUSH32(esp, 5); /* 0x161A9D21: push 5 */
    ecx = 0x161B8218u; /* 0x161A9D23: mov ecx, 0x161b8218 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D28: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9D2D: push esi */
    PUSH32(esp, 0x1603B874u); /* 0x161A9D2E: push 0x1603b874 */
    PUSH32(esp, 2); /* 0x161A9D33: push 2 */
    ecx = 0x161B8338u; /* 0x161A9D35: mov ecx, 0x161b8338 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D3A: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9D3F: push edi */
    PUSH32(esp, 0x16038764u); /* 0x161A9D40: push 0x16038764 */
    PUSH32(esp, 1); /* 0x161A9D45: push 1 */
    ecx = 0x161B8380u; /* 0x161A9D47: mov ecx, 0x161b8380 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D4C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161A9D51: push esi */
    PUSH32(esp, 0x1602CFA8u); /* 0x161A9D52: push 0x1602cfa8 */
    PUSH32(esp, ebx); /* 0x161A9D57: push ebx */
    ecx = 0x161B83C8u; /* 0x161A9D58: mov ecx, 0x161b83c8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D5D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9D62: push 2 */
    PUSH32(esp, 0x1603E394u); /* 0x161A9D64: push 0x1603e394 */
    PUSH32(esp, edi); /* 0x161A9D69: push edi */
    ecx = 0x161B8410u; /* 0x161A9D6A: mov ecx, 0x161b8410 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D6F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9D74: push 2 */
    PUSH32(esp, 0x160017F4u); /* 0x161A9D76: push 0x160017f4 */
    PUSH32(esp, ebx); /* 0x161A9D7B: push ebx */
    ecx = 0x161B8458u; /* 0x161A9D7C: mov ecx, 0x161b8458 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D81: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9D86: push 2 */
    PUSH32(esp, 0x160017F0u); /* 0x161A9D88: push 0x160017f0 */
    PUSH32(esp, ebx); /* 0x161A9D8D: push ebx */
    ecx = 0x161B84A0u; /* 0x161A9D8E: mov ecx, 0x161b84a0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9D93: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9D98: push 2 */
    PUSH32(esp, 0x1603E3CCu); /* 0x161A9D9A: push 0x1603e3cc */
    PUSH32(esp, ebx); /* 0x161A9D9F: push ebx */
    ecx = 0x161B8578u; /* 0x161A9DA0: mov ecx, 0x161b8578 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9DA5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9DAA: push 2 */
    PUSH32(esp, 0x1603E3B4u); /* 0x161A9DAC: push 0x1603e3b4 */
    PUSH32(esp, ebx); /* 0x161A9DB1: push ebx */
    ecx = 0x161B85C0u; /* 0x161A9DB2: mov ecx, 0x161b85c0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9DB7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9DBC: push 2 */
    PUSH32(esp, 0x1603E380u); /* 0x161A9DBE: push 0x1603e380 */
    PUSH32(esp, edi); /* 0x161A9DC3: push edi */
    ecx = 0x161B84E8u; /* 0x161A9DC4: mov ecx, 0x161b84e8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9DC9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9DCE: push 2 */
    PUSH32(esp, 0x160017E8u); /* 0x161A9DD0: push 0x160017e8 */
    PUSH32(esp, edi); /* 0x161A9DD5: push edi */
    ecx = 0x161B8530u; /* 0x161A9DD6: mov ecx, 0x161b8530 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9DDB: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9DE0: push 2 */
    PUSH32(esp, 0x1603E430u); /* 0x161A9DE2: push 0x1603e430 */
    PUSH32(esp, ebx); /* 0x161A9DE7: push ebx */
    ecx = 0x161B8608u; /* 0x161A9DE8: mov ecx, 0x161b8608 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9DED: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161A9DF2: push 2 */
    PUSH32(esp, 0x1603E318u); /* 0x161A9DF4: push 0x1603e318 */
    PUSH32(esp, 2); /* 0x161A9DF9: push 2 */
    ecx = 0x161B8650u; /* 0x161A9DFB: mov ecx, 0x161b8650 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E00: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161A9E05: push ebx */
    PUSH32(esp, 0x1603E41Cu); /* 0x161A9E06: push 0x1603e41c */
    PUSH32(esp, ebx); /* 0x161A9E0B: push ebx */
    ecx = 0x161B8698u; /* 0x161A9E0C: mov ecx, 0x161b8698 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E11: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9E16: push edi */
    PUSH32(esp, 0x160017E4u); /* 0x161A9E17: push 0x160017e4 */
    PUSH32(esp, esi); /* 0x161A9E1C: push esi */
    ecx = 0x161B8C38u; /* 0x161A9E1D: mov ecx, 0x161b8c38 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E22: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E27: push 6 */
    PUSH32(esp, 0x160017D8u); /* 0x161A9E29: push 0x160017d8 */
    PUSH32(esp, 1); /* 0x161A9E2E: push 1 */
    ecx = 0x161B88D8u; /* 0x161A9E30: mov ecx, 0x161b88d8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E35: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E3A: push 6 */
    PUSH32(esp, 0x160017CCu); /* 0x161A9E3C: push 0x160017cc */
    PUSH32(esp, 1); /* 0x161A9E41: push 1 */
    ecx = 0x161B8A88u; /* 0x161A9E43: mov ecx, 0x161b8a88 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E48: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E4D: push 6 */
    PUSH32(esp, 0x160017BCu); /* 0x161A9E4F: push 0x160017bc */
    PUSH32(esp, 1); /* 0x161A9E54: push 1 */
    ecx = 0x161B8920u; /* 0x161A9E56: mov ecx, 0x161b8920 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E5B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E60: push 6 */
    PUSH32(esp, 0x160017A8u); /* 0x161A9E62: push 0x160017a8 */
    PUSH32(esp, 1); /* 0x161A9E67: push 1 */
    ecx = 0x161B89F8u; /* 0x161A9E69: mov ecx, 0x161b89f8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E6E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E73: push 6 */
    PUSH32(esp, 0x16001794u); /* 0x161A9E75: push 0x16001794 */
    PUSH32(esp, esi); /* 0x161A9E7A: push esi */
    ecx = 0x161B8848u; /* 0x161A9E7B: mov ecx, 0x161b8848 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E80: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E85: push 6 */
    PUSH32(esp, 0x16001780u); /* 0x161A9E87: push 0x16001780 */
    PUSH32(esp, esi); /* 0x161A9E8C: push esi */
    ecx = 0x161B8800u; /* 0x161A9E8D: mov ecx, 0x161b8800 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9E92: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9E97: push 6 */
    PUSH32(esp, 0x16001774u); /* 0x161A9E99: push 0x16001774 */
    PUSH32(esp, esi); /* 0x161A9E9E: push esi */
    ecx = 0x161B8890u; /* 0x161A9E9F: mov ecx, 0x161b8890 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9EA4: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9EA9: push 6 */
    PUSH32(esp, 0x16001764u); /* 0x161A9EAB: push 0x16001764 */
    PUSH32(esp, 1); /* 0x161A9EB0: push 1 */
    ecx = 0x161B89B0u; /* 0x161A9EB2: mov ecx, 0x161b89b0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9EB7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9EBC: push 6 */
    PUSH32(esp, 0x16001750u); /* 0x161A9EBE: push 0x16001750 */
    PUSH32(esp, 1); /* 0x161A9EC3: push 1 */
    ecx = 0x161B8728u; /* 0x161A9EC5: mov ecx, 0x161b8728 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9ECA: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9ECF: push 6 */
    PUSH32(esp, 0x16001744u); /* 0x161A9ED1: push 0x16001744 */
    PUSH32(esp, 1); /* 0x161A9ED6: push 1 */
    ecx = 0x161B8770u; /* 0x161A9ED8: mov ecx, 0x161b8770 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9EDD: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9EE2: push 6 */
    PUSH32(esp, 0x16001734u); /* 0x161A9EE4: push 0x16001734 */
    PUSH32(esp, 1); /* 0x161A9EE9: push 1 */
    ecx = 0x161B86E0u; /* 0x161A9EEB: mov ecx, 0x161b86e0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9EF0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9EF5: push 6 */
    PUSH32(esp, 0x16001724u); /* 0x161A9EF7: push 0x16001724 */
    PUSH32(esp, 1); /* 0x161A9EFC: push 1 */
    ecx = 0x161B8968u; /* 0x161A9EFE: mov ecx, 0x161b8968 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F03: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F08: push 6 */
    PUSH32(esp, 0x16001710u); /* 0x161A9F0A: push 0x16001710 */
    PUSH32(esp, 1); /* 0x161A9F0F: push 1 */
    ecx = 0x161B8A40u; /* 0x161A9F11: mov ecx, 0x161b8a40 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F16: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F1B: push 6 */
    PUSH32(esp, 0x16001700u); /* 0x161A9F1D: push 0x16001700 */
    PUSH32(esp, 1); /* 0x161A9F22: push 1 */
    ecx = 0x161B8B18u; /* 0x161A9F24: mov ecx, 0x161b8b18 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F29: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F2E: push 6 */
    PUSH32(esp, 0x160016F0u); /* 0x161A9F30: push 0x160016f0 */
    PUSH32(esp, 1); /* 0x161A9F35: push 1 */
    ecx = 0x161B8AD0u; /* 0x161A9F37: mov ecx, 0x161b8ad0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F3C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F41: push 6 */
    PUSH32(esp, 0x160016E4u); /* 0x161A9F43: push 0x160016e4 */
    PUSH32(esp, esi); /* 0x161A9F48: push esi */
    ecx = 0x161B8B60u; /* 0x161A9F49: mov ecx, 0x161b8b60 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F4E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F53: push 6 */
    PUSH32(esp, 0x160016D0u); /* 0x161A9F55: push 0x160016d0 */
    PUSH32(esp, esi); /* 0x161A9F5A: push esi */
    ecx = 0x161B8BA8u; /* 0x161A9F5B: mov ecx, 0x161b8ba8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F60: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F65: push 6 */
    PUSH32(esp, 0x160016C0u); /* 0x161A9F67: push 0x160016c0 */
    PUSH32(esp, 1); /* 0x161A9F6C: push 1 */
    ecx = 0x161B87B8u; /* 0x161A9F6E: mov ecx, 0x161b87b8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F73: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161A9F78: push 6 */
    PUSH32(esp, 0x160016B0u); /* 0x161A9F7A: push 0x160016b0 */
    PUSH32(esp, esi); /* 0x161A9F7F: push esi */
    ecx = 0x161B8BF0u; /* 0x161A9F80: mov ecx, 0x161b8bf0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F85: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9F8A: push 5 */
    PUSH32(esp, 0x1603E49Cu); /* 0x161A9F8C: push 0x1603e49c */
    PUSH32(esp, 2); /* 0x161A9F91: push 2 */
    ecx = 0x161B8D58u; /* 0x161A9F93: mov ecx, 0x161b8d58 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9F98: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9F9D: push 5 */
    PUSH32(esp, 0x1603E4A8u); /* 0x161A9F9F: push 0x1603e4a8 */
    PUSH32(esp, ebx); /* 0x161A9FA4: push ebx */
    ecx = 0x161B8D10u; /* 0x161A9FA5: mov ecx, 0x161b8d10 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9FAA: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9FAF: push 5 */
    PUSH32(esp, 0x1605198Cu); /* 0x161A9FB1: push 0x1605198c */
    PUSH32(esp, edi); /* 0x161A9FB6: push edi */
    ecx = 0x161B8CC8u; /* 0x161A9FB7: mov ecx, 0x161b8cc8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9FBC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161A9FC1: push 5 */
    PUSH32(esp, 0x160016ACu); /* 0x161A9FC3: push 0x160016ac */
    PUSH32(esp, edi); /* 0x161A9FC8: push edi */
    ecx = 0x161B8C80u; /* 0x161A9FC9: mov ecx, 0x161b8c80 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9FCE: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9FD3: push edi */
    PUSH32(esp, 0x160016A0u); /* 0x161A9FD4: push 0x160016a0 */
    PUSH32(esp, 1); /* 0x161A9FD9: push 1 */
    ecx = 0x161B8F08u; /* 0x161A9FDB: mov ecx, 0x161b8f08 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9FE0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9FE5: push edi */
    PUSH32(esp, 0x16001694u); /* 0x161A9FE6: push 0x16001694 */
    PUSH32(esp, 1); /* 0x161A9FEB: push 1 */
    ecx = 0x161B8F50u; /* 0x161A9FED: mov ecx, 0x161b8f50 */
    RECOMP_CALL(sub_161A96FA); /* 0x161A9FF2: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161A9FF7: push edi */
    PUSH32(esp, 0x1600167Cu); /* 0x161A9FF8: push 0x1600167c */
    PUSH32(esp, 1); /* 0x161A9FFD: push 1 */
    ecx = 0x161B8F98u; /* 0x161A9FFF: mov ecx, 0x161b8f98 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA004: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161AA009: push edi */
    PUSH32(esp, 0x1603E438u); /* 0x161AA00A: push 0x1603e438 */
    PUSH32(esp, 1); /* 0x161AA00F: push 1 */
    ecx = 0x161B8FE0u; /* 0x161AA011: mov ecx, 0x161b8fe0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA016: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA01B: push 6 */
    PUSH32(esp, 0x16001670u); /* 0x161AA01D: push 0x16001670 */
    PUSH32(esp, 1); /* 0x161AA022: push 1 */
    ecx = 0x161B9658u; /* 0x161AA024: mov ecx, 0x161b9658 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA029: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA02E: push 6 */
    PUSH32(esp, 0x1600165Cu); /* 0x161AA030: push 0x1600165c */
    PUSH32(esp, esi); /* 0x161AA035: push esi */
    ecx = 0x161B96A0u; /* 0x161AA036: mov ecx, 0x161b96a0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA03B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA040: push 6 */
    PUSH32(esp, 0x16001648u); /* 0x161AA042: push 0x16001648 */
    PUSH32(esp, esi); /* 0x161AA047: push esi */
    ecx = 0x161B96E8u; /* 0x161AA048: mov ecx, 0x161b96e8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA04D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA052: push 6 */
    PUSH32(esp, 0x16001638u); /* 0x161AA054: push 0x16001638 */
    PUSH32(esp, esi); /* 0x161AA059: push esi */
    ecx = 0x161B9730u; /* 0x161AA05A: mov ecx, 0x161b9730 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA05F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161AA064: push edi */
    PUSH32(esp, 0x1603E494u); /* 0x161AA065: push 0x1603e494 */
    PUSH32(esp, 2); /* 0x161AA06A: push 2 */
    ecx = 0x161B9028u; /* 0x161AA06C: mov ecx, 0x161b9028 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA071: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA076: push esi */
    PUSH32(esp, 0x16001624u); /* 0x161AA077: push 0x16001624 */
    PUSH32(esp, 2); /* 0x161AA07C: push 2 */
    ecx = 0x161B9070u; /* 0x161AA07E: mov ecx, 0x161b9070 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA083: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA088: push esi */
    PUSH32(esp, 0x16001614u); /* 0x161AA089: push 0x16001614 */
    PUSH32(esp, 2); /* 0x161AA08E: push 2 */
    ecx = 0x161B90B8u; /* 0x161AA090: mov ecx, 0x161b90b8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA095: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA09A: push esi */
    PUSH32(esp, 0x16001600u); /* 0x161AA09B: push 0x16001600 */
    PUSH32(esp, 2); /* 0x161AA0A0: push 2 */
    ecx = 0x161B9100u; /* 0x161AA0A2: mov ecx, 0x161b9100 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA0A7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA0AC: push esi */
    PUSH32(esp, 0x160015F0u); /* 0x161AA0AD: push 0x160015f0 */
    PUSH32(esp, 2); /* 0x161AA0B2: push 2 */
    ecx = 0x161B9148u; /* 0x161AA0B4: mov ecx, 0x161b9148 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA0B9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161AA0BE: push 5 */
    PUSH32(esp, 0x16051994u); /* 0x161AA0C0: push 0x16051994 */
    PUSH32(esp, 5); /* 0x161AA0C5: push 5 */
    ecx = 0x161B9190u; /* 0x161AA0C7: mov ecx, 0x161b9190 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA0CC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161AA0D1: push 5 */
    PUSH32(esp, 0x160519ACu); /* 0x161AA0D3: push 0x160519ac */
    PUSH32(esp, 5); /* 0x161AA0D8: push 5 */
    ecx = 0x161B91D8u; /* 0x161AA0DA: mov ecx, 0x161b91d8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA0DF: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x161AA0E4: push 5 */
    PUSH32(esp, 0x160519B8u); /* 0x161AA0E6: push 0x160519b8 */
    PUSH32(esp, 6); /* 0x161AA0EB: push 6 */
    ecx = 0x161B9220u; /* 0x161AA0ED: mov ecx, 0x161b9220 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA0F2: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA0F7: push esi */
    PUSH32(esp, 0x1602D050u); /* 0x161AA0F8: push 0x1602d050 */
    PUSH32(esp, 2); /* 0x161AA0FD: push 2 */
    ecx = 0x161B9268u; /* 0x161AA0FF: mov ecx, 0x161b9268 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA104: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA109: push esi */
    PUSH32(esp, 0x1603B9A8u); /* 0x161AA10A: push 0x1603b9a8 */
    PUSH32(esp, 2); /* 0x161AA10F: push 2 */
    ecx = 0x161B92B0u; /* 0x161AA111: mov ecx, 0x161b92b0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA116: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA11B: push esi */
    PUSH32(esp, 0x1603B9B4u); /* 0x161AA11C: push 0x1603b9b4 */
    PUSH32(esp, 2); /* 0x161AA121: push 2 */
    ecx = 0x161B92F8u; /* 0x161AA123: mov ecx, 0x161b92f8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA128: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161AA12D: push 2 */
    PUSH32(esp, 0x1603E404u); /* 0x161AA12F: push 0x1603e404 */
    PUSH32(esp, edi); /* 0x161AA134: push edi */
    ecx = 0x161B9340u; /* 0x161AA135: mov ecx, 0x161b9340 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA13A: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x161AA13F: push 2 */
    PUSH32(esp, 0x1603E40Cu); /* 0x161AA141: push 0x1603e40c */
    PUSH32(esp, edi); /* 0x161AA146: push edi */
    ecx = 0x161B9388u; /* 0x161AA147: mov ecx, 0x161b9388 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA14C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA151: push ebx */
    PUSH32(esp, 0x1603BA14u); /* 0x161AA152: push 0x1603ba14 */
    PUSH32(esp, 2); /* 0x161AA157: push 2 */
    ecx = 0x161B93D0u; /* 0x161AA159: mov ecx, 0x161b93d0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA15E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA163: push ebx */
    PUSH32(esp, 0x1603E304u); /* 0x161AA164: push 0x1603e304 */
    PUSH32(esp, 2); /* 0x161AA169: push 2 */
    ecx = 0x161B9418u; /* 0x161AA16B: mov ecx, 0x161b9418 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA170: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA175: push ebx */
    PUSH32(esp, 0x160015E4u); /* 0x161AA176: push 0x160015e4 */
    PUSH32(esp, 2); /* 0x161AA17B: push 2 */
    ecx = 0x161B9460u; /* 0x161AA17D: mov ecx, 0x161b9460 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA182: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA187: push ebx */
    PUSH32(esp, 0x1603E2F4u); /* 0x161AA188: push 0x1603e2f4 */
    PUSH32(esp, 2); /* 0x161AA18D: push 2 */
    ecx = 0x161B94A8u; /* 0x161AA18F: mov ecx, 0x161b94a8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA194: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA199: push ebx */
    PUSH32(esp, 0x1603E450u); /* 0x161AA19A: push 0x1603e450 */
    PUSH32(esp, edi); /* 0x161AA19F: push edi */
    ecx = 0x161B94F0u; /* 0x161AA1A0: mov ecx, 0x161b94f0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1A5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA1AA: push ebx */
    PUSH32(esp, 0x1603E458u); /* 0x161AA1AB: push 0x1603e458 */
    PUSH32(esp, edi); /* 0x161AA1B0: push edi */
    ecx = 0x161B9538u; /* 0x161AA1B1: mov ecx, 0x161b9538 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1B6: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA1BB: push ebx */
    PUSH32(esp, 0x1603E468u); /* 0x161AA1BC: push 0x1603e468 */
    PUSH32(esp, 5); /* 0x161AA1C1: push 5 */
    ecx = 0x161B9580u; /* 0x161AA1C3: mov ecx, 0x161b9580 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1C8: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AA1CD: push ebx */
    PUSH32(esp, 0x160015DCu); /* 0x161AA1CE: push 0x160015dc */
    PUSH32(esp, 2); /* 0x161AA1D3: push 2 */
    ecx = 0x161B95C8u; /* 0x161AA1D5: mov ecx, 0x161b95c8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1DA: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA1DF: push esi */
    PUSH32(esp, 0x160015D4u); /* 0x161AA1E0: push 0x160015d4 */
    PUSH32(esp, 5); /* 0x161AA1E5: push 5 */
    ecx = 0x161B9610u; /* 0x161AA1E7: mov ecx, 0x161b9610 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1EC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA1F1: push 6 */
    PUSH32(esp, 0x160015C8u); /* 0x161AA1F3: push 0x160015c8 */
    PUSH32(esp, esi); /* 0x161AA1F8: push esi */
    ecx = 0x161B8DE8u; /* 0x161AA1F9: mov ecx, 0x161b8de8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA1FE: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA203: push 6 */
    PUSH32(esp, 0x160015B0u); /* 0x161AA205: push 0x160015b0 */
    PUSH32(esp, esi); /* 0x161AA20A: push esi */
    ecx = 0x161B8E30u; /* 0x161AA20B: mov ecx, 0x161b8e30 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA210: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA215: push 6 */
    PUSH32(esp, 0x160015A0u); /* 0x161AA217: push 0x160015a0 */
    PUSH32(esp, esi); /* 0x161AA21C: push esi */
    ecx = 0x161B8E78u; /* 0x161AA21D: mov ecx, 0x161b8e78 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA222: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA227: push 6 */
    PUSH32(esp, 0x16001590u); /* 0x161AA229: push 0x16001590 */
    PUSH32(esp, esi); /* 0x161AA22E: push esi */
    ecx = 0x161B8EC0u; /* 0x161AA22F: mov ecx, 0x161b8ec0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA234: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA239: push 6 */
    PUSH32(esp, 0x16001570u); /* 0x161AA23B: push 0x16001570 */
    PUSH32(esp, esi); /* 0x161AA240: push esi */
    ecx = 0x161B9778u; /* 0x161AA241: mov ecx, 0x161b9778 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA246: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA24B: push 6 */
    PUSH32(esp, 0x16001550u); /* 0x161AA24D: push 0x16001550 */
    PUSH32(esp, esi); /* 0x161AA252: push esi */
    ecx = 0x161B97C0u; /* 0x161AA253: mov ecx, 0x161b97c0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA258: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA25D: push 6 */
    PUSH32(esp, 0x16001538u); /* 0x161AA25F: push 0x16001538 */
    PUSH32(esp, esi); /* 0x161AA264: push esi */
    ecx = 0x161B9808u; /* 0x161AA265: mov ecx, 0x161b9808 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA26A: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA26F: push 6 */
    PUSH32(esp, 0x16001518u); /* 0x161AA271: push 0x16001518 */
    PUSH32(esp, esi); /* 0x161AA276: push esi */
    ecx = 0x161B9850u; /* 0x161AA277: mov ecx, 0x161b9850 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA27C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA281: push 6 */
    PUSH32(esp, 0x160014F4u); /* 0x161AA283: push 0x160014f4 */
    PUSH32(esp, esi); /* 0x161AA288: push esi */
    ecx = 0x161B9898u; /* 0x161AA289: mov ecx, 0x161b9898 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA28E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA293: push 6 */
    PUSH32(esp, 0x160014DCu); /* 0x161AA295: push 0x160014dc */
    PUSH32(esp, esi); /* 0x161AA29A: push esi */
    ecx = 0x161B98E0u; /* 0x161AA29B: mov ecx, 0x161b98e0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2A0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA2A5: push 6 */
    PUSH32(esp, 0x160014B8u); /* 0x161AA2A7: push 0x160014b8 */
    PUSH32(esp, esi); /* 0x161AA2AC: push esi */
    ecx = 0x161B9928u; /* 0x161AA2AD: mov ecx, 0x161b9928 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2B2: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA2B7: push 6 */
    PUSH32(esp, 0x16001494u); /* 0x161AA2B9: push 0x16001494 */
    PUSH32(esp, esi); /* 0x161AA2BE: push esi */
    ecx = 0x161B9970u; /* 0x161AA2BF: mov ecx, 0x161b9970 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2C4: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA2C9: push 6 */
    PUSH32(esp, 0x16001480u); /* 0x161AA2CB: push 0x16001480 */
    PUSH32(esp, esi); /* 0x161AA2D0: push esi */
    ecx = 0x161B99B8u; /* 0x161AA2D1: mov ecx, 0x161b99b8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2D6: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA2DB: push 6 */
    PUSH32(esp, 0x16001470u); /* 0x161AA2DD: push 0x16001470 */
    PUSH32(esp, 1); /* 0x161AA2E2: push 1 */
    ecx = 0x161B9A00u; /* 0x161AA2E4: mov ecx, 0x161b9a00 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2E9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA2EE: push 6 */
    PUSH32(esp, 0x16001464u); /* 0x161AA2F0: push 0x16001464 */
    PUSH32(esp, 1); /* 0x161AA2F5: push 1 */
    ecx = 0x161B9A48u; /* 0x161AA2F7: mov ecx, 0x161b9a48 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA2FC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA301: push 6 */
    PUSH32(esp, 0x16001450u); /* 0x161AA303: push 0x16001450 */
    PUSH32(esp, 1); /* 0x161AA308: push 1 */
    ecx = 0x161B9A90u; /* 0x161AA30A: mov ecx, 0x161b9a90 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA30F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA314: push 6 */
    PUSH32(esp, 0x16001440u); /* 0x161AA316: push 0x16001440 */
    PUSH32(esp, 1); /* 0x161AA31B: push 1 */
    ecx = 0x161B9AD8u; /* 0x161AA31D: mov ecx, 0x161b9ad8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA322: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA327: push 6 */
    PUSH32(esp, 0x1600142Cu); /* 0x161AA329: push 0x1600142c */
    PUSH32(esp, 1); /* 0x161AA32E: push 1 */
    ecx = 0x161B9B20u; /* 0x161AA330: mov ecx, 0x161b9b20 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA335: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA33A: push 6 */
    PUSH32(esp, 0x16001418u); /* 0x161AA33C: push 0x16001418 */
    PUSH32(esp, 1); /* 0x161AA341: push 1 */
    ecx = 0x161B9B68u; /* 0x161AA343: mov ecx, 0x161b9b68 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA348: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA34D: push 6 */
    PUSH32(esp, 0x16001400u); /* 0x161AA34F: push 0x16001400 */
    PUSH32(esp, 1); /* 0x161AA354: push 1 */
    ecx = 0x161B9BB0u; /* 0x161AA356: mov ecx, 0x161b9bb0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA35B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA360: push 8 */
    PUSH32(esp, 0x160013F0u); /* 0x161AA362: push 0x160013f0 */
    PUSH32(esp, ebx); /* 0x161AA367: push ebx */
    ecx = 0x161B9BF8u; /* 0x161AA368: mov ecx, 0x161b9bf8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA36D: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA372: push 8 */
    PUSH32(esp, 0x160013E0u); /* 0x161AA374: push 0x160013e0 */
    PUSH32(esp, ebx); /* 0x161AA379: push ebx */
    ecx = 0x161B9C40u; /* 0x161AA37A: mov ecx, 0x161b9c40 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA37F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA384: push 8 */
    PUSH32(esp, 0x160013D8u); /* 0x161AA386: push 0x160013d8 */
    PUSH32(esp, ebx); /* 0x161AA38B: push ebx */
    ecx = 0x161B9C88u; /* 0x161AA38C: mov ecx, 0x161b9c88 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA391: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA396: push 8 */
    PUSH32(esp, 0x160013CCu); /* 0x161AA398: push 0x160013cc */
    PUSH32(esp, ebx); /* 0x161AA39D: push ebx */
    ecx = 0x161B9CD0u; /* 0x161AA39E: mov ecx, 0x161b9cd0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3A3: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA3A8: push 8 */
    PUSH32(esp, 0x160013BCu); /* 0x161AA3AA: push 0x160013bc */
    PUSH32(esp, edi); /* 0x161AA3AF: push edi */
    ecx = 0x161B9D18u; /* 0x161AA3B0: mov ecx, 0x161b9d18 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3B5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x161AA3BA: push 8 */
    PUSH32(esp, 0x160013A8u); /* 0x161AA3BC: push 0x160013a8 */
    PUSH32(esp, edi); /* 0x161AA3C1: push edi */
    ecx = 0x161B9D60u; /* 0x161AA3C2: mov ecx, 0x161b9d60 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3C7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA3CC: push 7 */
    PUSH32(esp, 0x1603E4E0u); /* 0x161AA3CE: push 0x1603e4e0 */
    PUSH32(esp, ebx); /* 0x161AA3D3: push ebx */
    ecx = 0x161B9DA8u; /* 0x161AA3D4: mov ecx, 0x161b9da8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3D9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA3DE: push 7 */
    PUSH32(esp, 0x1603E4ECu); /* 0x161AA3E0: push 0x1603e4ec */
    PUSH32(esp, ebx); /* 0x161AA3E5: push ebx */
    ecx = 0x161B9DF0u; /* 0x161AA3E6: mov ecx, 0x161b9df0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3EB: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA3F0: push 7 */
    PUSH32(esp, 0x1603E4F8u); /* 0x161AA3F2: push 0x1603e4f8 */
    PUSH32(esp, ebx); /* 0x161AA3F7: push ebx */
    ecx = 0x161B9E38u; /* 0x161AA3F8: mov ecx, 0x161b9e38 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA3FD: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA402: push 7 */
    PUSH32(esp, 0x1603E540u); /* 0x161AA404: push 0x1603e540 */
    PUSH32(esp, edi); /* 0x161AA409: push edi */
    ecx = 0x161B9E80u; /* 0x161AA40A: mov ecx, 0x161b9e80 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA40F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA414: push 7 */
    PUSH32(esp, 0x1603E504u); /* 0x161AA416: push 0x1603e504 */
    PUSH32(esp, ebx); /* 0x161AA41B: push ebx */
    ecx = 0x161B9EC8u; /* 0x161AA41C: mov ecx, 0x161b9ec8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA421: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA426: push 7 */
    PUSH32(esp, 0x1603E510u); /* 0x161AA428: push 0x1603e510 */
    PUSH32(esp, ebx); /* 0x161AA42D: push ebx */
    ecx = 0x161B9F10u; /* 0x161AA42E: mov ecx, 0x161b9f10 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA433: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA438: push 7 */
    PUSH32(esp, 0x1603E51Cu); /* 0x161AA43A: push 0x1603e51c */
    PUSH32(esp, ebx); /* 0x161AA43F: push ebx */
    ecx = 0x161B9F58u; /* 0x161AA440: mov ecx, 0x161b9f58 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA445: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA44A: push 7 */
    PUSH32(esp, 0x1603E528u); /* 0x161AA44C: push 0x1603e528 */
    PUSH32(esp, ebx); /* 0x161AA451: push ebx */
    ecx = 0x161B9FA0u; /* 0x161AA452: mov ecx, 0x161b9fa0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA457: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA45C: push 7 */
    PUSH32(esp, 0x1603E534u); /* 0x161AA45E: push 0x1603e534 */
    PUSH32(esp, ebx); /* 0x161AA463: push ebx */
    ecx = 0x161B9FE8u; /* 0x161AA464: mov ecx, 0x161b9fe8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA469: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA46E: push 7 */
    PUSH32(esp, 0x1603E5E8u); /* 0x161AA470: push 0x1603e5e8 */
    PUSH32(esp, 2); /* 0x161AA475: push 2 */
    ecx = 0x161BA030u; /* 0x161AA477: mov ecx, 0x161ba030 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA47C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA481: push 7 */
    PUSH32(esp, 0x1603E5FCu); /* 0x161AA483: push 0x1603e5fc */
    PUSH32(esp, 2); /* 0x161AA488: push 2 */
    ecx = 0x161BA078u; /* 0x161AA48A: mov ecx, 0x161ba078 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA48F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA494: push 7 */
    PUSH32(esp, 0x1603E574u); /* 0x161AA496: push 0x1603e574 */
    PUSH32(esp, edi); /* 0x161AA49B: push edi */
    ecx = 0x161BA0C0u; /* 0x161AA49C: mov ecx, 0x161ba0c0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4A1: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA4A6: push 7 */
    PUSH32(esp, 0x1603E554u); /* 0x161AA4A8: push 0x1603e554 */
    PUSH32(esp, edi); /* 0x161AA4AD: push edi */
    ecx = 0x161BA108u; /* 0x161AA4AE: mov ecx, 0x161ba108 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4B3: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA4B8: push 7 */
    PUSH32(esp, 0x1603E564u); /* 0x161AA4BA: push 0x1603e564 */
    PUSH32(esp, edi); /* 0x161AA4BF: push edi */
    ecx = 0x161BA150u; /* 0x161AA4C0: mov ecx, 0x161ba150 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4C5: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA4CA: push 7 */
    PUSH32(esp, 0x1603E574u); /* 0x161AA4CC: push 0x1603e574 */
    PUSH32(esp, edi); /* 0x161AA4D1: push edi */
    ecx = 0x161BA198u; /* 0x161AA4D2: mov ecx, 0x161ba198 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4D7: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA4DC: push 7 */
    PUSH32(esp, 0x1603E5C4u); /* 0x161AA4DE: push 0x1603e5c4 */
    PUSH32(esp, edi); /* 0x161AA4E3: push edi */
    ecx = 0x161BA1E0u; /* 0x161AA4E4: mov ecx, 0x161ba1e0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4E9: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA4EE: push 7 */
    PUSH32(esp, 0x1603E5D4u); /* 0x161AA4F0: push 0x1603e5d4 */
    PUSH32(esp, 5); /* 0x161AA4F5: push 5 */
    ecx = 0x161BA228u; /* 0x161AA4F7: mov ecx, 0x161ba228 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA4FC: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA501: push 7 */
    PUSH32(esp, 0x1603E584u); /* 0x161AA503: push 0x1603e584 */
    PUSH32(esp, edi); /* 0x161AA508: push edi */
    ecx = 0x161BA270u; /* 0x161AA509: mov ecx, 0x161ba270 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA50E: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA513: push 7 */
    PUSH32(esp, 0x1603E594u); /* 0x161AA515: push 0x1603e594 */
    PUSH32(esp, edi); /* 0x161AA51A: push edi */
    ecx = 0x161BA2B8u; /* 0x161AA51B: mov ecx, 0x161ba2b8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA520: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA525: push 7 */
    PUSH32(esp, 0x1603E5A4u); /* 0x161AA527: push 0x1603e5a4 */
    PUSH32(esp, edi); /* 0x161AA52C: push edi */
    ecx = 0x161BA300u; /* 0x161AA52D: mov ecx, 0x161ba300 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA532: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x161AA537: push 7 */
    PUSH32(esp, 0x1603E5B4u); /* 0x161AA539: push 0x1603e5b4 */
    PUSH32(esp, edi); /* 0x161AA53E: push edi */
    ecx = 0x161BA348u; /* 0x161AA53F: mov ecx, 0x161ba348 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA544: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161AA549: push edi */
    PUSH32(esp, 0x160013A0u); /* 0x161AA54A: push 0x160013a0 */
    PUSH32(esp, esi); /* 0x161AA54F: push esi */
    ecx = 0x161BA390u; /* 0x161AA550: mov ecx, 0x161ba390 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA555: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA55A: push esi */
    PUSH32(esp, 0x1603E47Cu); /* 0x161AA55B: push 0x1603e47c */
    PUSH32(esp, ebx); /* 0x161AA560: push ebx */
    ecx = 0x161BA738u; /* 0x161AA561: mov ecx, 0x161ba738 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA566: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA56B: push esi */
    PUSH32(esp, 0x1600138Cu); /* 0x161AA56C: push 0x1600138c */
    PUSH32(esp, ebx); /* 0x161AA571: push ebx */
    ecx = 0x161BA780u; /* 0x161AA572: mov ecx, 0x161ba780 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA577: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA57C: push esi */
    PUSH32(esp, 0x1603E46Cu); /* 0x161AA57D: push 0x1603e46c */
    PUSH32(esp, 2); /* 0x161AA582: push 2 */
    ecx = 0x161BA7C8u; /* 0x161AA584: mov ecx, 0x161ba7c8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA589: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x161AA58E: push 6 */
    PUSH32(esp, 0x1600137Cu); /* 0x161AA590: push 0x1600137c */
    PUSH32(esp, esi); /* 0x161AA595: push esi */
    ecx = 0x161BA810u; /* 0x161AA596: mov ecx, 0x161ba810 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA59B: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x161AA5A0: push 9 */
    esi = POP32_VAL(esp); /* 0x161AA5A2: pop esi */
    PUSH32(esp, esi); /* 0x161AA5A3: push esi */
    PUSH32(esp, 0x1603E368u); /* 0x161AA5A4: push 0x1603e368 */
    PUSH32(esp, ebx); /* 0x161AA5A9: push ebx */
    ecx = 0x161BA3D8u; /* 0x161AA5AA: mov ecx, 0x161ba3d8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA5AF: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA5B4: push esi */
    PUSH32(esp, 0x1603E3C4u); /* 0x161AA5B5: push 0x1603e3c4 */
    PUSH32(esp, ebx); /* 0x161AA5BA: push ebx */
    ecx = 0x161BA420u; /* 0x161AA5BB: mov ecx, 0x161ba420 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA5C0: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA5C5: push esi */
    PUSH32(esp, 0x1603E3ACu); /* 0x161AA5C6: push 0x1603e3ac */
    PUSH32(esp, ebx); /* 0x161AA5CB: push ebx */
    ecx = 0x161BA468u; /* 0x161AA5CC: mov ecx, 0x161ba468 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA5D1: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA5D6: push esi */
    PUSH32(esp, 0x1603E378u); /* 0x161AA5D7: push 0x1603e378 */
    PUSH32(esp, ebx); /* 0x161AA5DC: push ebx */
    ecx = 0x161BA4B0u; /* 0x161AA5DD: mov ecx, 0x161ba4b0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA5E2: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA5E7: push esi */
    PUSH32(esp, 0x16001378u); /* 0x161AA5E8: push 0x16001378 */
    PUSH32(esp, ebx); /* 0x161AA5ED: push ebx */
    ecx = 0x161BA4F8u; /* 0x161AA5EE: mov ecx, 0x161ba4f8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA5F3: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA5F8: push esi */
    PUSH32(esp, 0x16001374u); /* 0x161AA5F9: push 0x16001374 */
    PUSH32(esp, ebx); /* 0x161AA5FE: push ebx */
    ecx = 0x161BA540u; /* 0x161AA5FF: mov ecx, 0x161ba540 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA604: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA609: push esi */
    PUSH32(esp, 0x16001370u); /* 0x161AA60A: push 0x16001370 */
    PUSH32(esp, ebx); /* 0x161AA60F: push ebx */
    ecx = 0x161BA588u; /* 0x161AA610: mov ecx, 0x161ba588 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA615: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA61A: push esi */
    PUSH32(esp, 0x1600136Cu); /* 0x161AA61B: push 0x1600136c */
    PUSH32(esp, ebx); /* 0x161AA620: push ebx */
    ecx = 0x161BA5D0u; /* 0x161AA621: mov ecx, 0x161ba5d0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA626: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA62B: push esi */
    PUSH32(esp, 0x1603E2DCu); /* 0x161AA62C: push 0x1603e2dc */
    PUSH32(esp, 2); /* 0x161AA631: push 2 */
    ecx = 0x161BA618u; /* 0x161AA633: mov ecx, 0x161ba618 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA638: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161AA63D: push esi */
    PUSH32(esp, 0x1603E448u); /* 0x161AA63E: push 0x1603e448 */
    PUSH32(esp, edi); /* 0x161AA643: push edi */
    ecx = 0x161BA660u; /* 0x161AA644: mov ecx, 0x161ba660 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA649: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x161AA64E: push 0xb */
    PUSH32(esp, 0x1603E358u); /* 0x161AA650: push 0x1603e358 */
    PUSH32(esp, 2); /* 0x161AA655: push 2 */
    ecx = 0x161BA6A8u; /* 0x161AA657: mov ecx, 0x161ba6a8 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA65C: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x161AA661: push 0xa */
    PUSH32(esp, 0x1603E350u); /* 0x161AA663: push 0x1603e350 */
    PUSH32(esp, 2); /* 0x161AA668: push 2 */
    ecx = 0x161BA6F0u; /* 0x161AA66A: mov ecx, 0x161ba6f0 */
    RECOMP_CALL(sub_161A96FA); /* 0x161AA66F: call 0x161a96fa */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x161AA674: pop edi */
    esi = POP32_VAL(esp); /* 0x161AA675: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AA676: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AA677: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AA67D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AA67Du);

L_161AA67D:
    edi = edi; /* 0x161AA67D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AA67F: push ebp */
    ebp = esp; /* 0x161AA680: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x161AA682: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x161AA685: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AA68B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161AA68D: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161AA68F: push esi */
    esi = ecx; /* 0x161AA690: mov esi, ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA785; /* 0x161AA692: je 0x161aa785 */
L_161AA698:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AA698: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA766; /* 0x161AA699: je 0x161aa766 */
L_161AA69F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AA69F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA717; /* 0x161AA6A0: je 0x161aa717 */
L_161AA6A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AA6A2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA6BA; /* 0x161AA6A3: je 0x161aa6ba */
L_161AA6A5:
    PUSH32(esp, 0x161B0170u); /* 0x161AA6A5: push 0x161b0170 */
    eax = ebp + 0xC; /* 0x161AA6AA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x161AA6AD: push eax */
    MEM32(ebp + 0xC) = 0x80004005u; /* 0x161AA6AE: mov dword ptr [ebp + 0xc], 0x80004005 */
    RECOMP_CALL(sub_161AE47E); /* 0x161AA6B5: call 0x161ae47e */
    RECOMP_FLAGS_IN();
L_161AA6BA:
    eax = MEM32(esi); /* 0x161AA6BA: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x161AA6BC: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x161AA6BE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x161AA6BF: mov edi, dword ptr [ebp + 8] */
    MEM32(edi) = eax; /* 0x161AA6C2: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x161AA6C4: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xC0u); /* 0x161AA6C7: push 0xc0 */
    PUSH32(esp, edx); /* 0x161AA6CC: push edx */
    eax = ebp + (-0xC0); /* 0x161AA6CD: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x161AA6D3: push eax */
    RECOMP_CALL(sub_161AE3CC); /* 0x161AA6D4: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AA6D9: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0xC0); /* 0x161AA6DC: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x161AA6E2: push eax */
    ecx = esi; /* 0x161AA6E3: mov ecx, esi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AA6E5: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xB8)); /* 0x161AA6EA: mov eax, dword ptr [ebp - 0xb8] */
    MEM32(edi + 0x18) = eax; /* 0x161AA6F0: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(ebp + (-0x90)); /* 0x161AA6F3: mov eax, dword ptr [ebp - 0x90] */
    MEM32(edi + 0x20) = eax; /* 0x161AA6F9: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + (-0xC0)); /* 0x161AA6FC: mov eax, dword ptr [ebp - 0xc0] */
    MEM32(edi + 0x8) = eax; /* 0x161AA702: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x161AA705: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x10) = eax; /* 0x161AA708: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x161AA70B: mov eax, dword ptr [ebp - 0x28] */
    MEM32(edi + 0xC) = eax; /* 0x161AA70E: mov dword ptr [edi + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x161AA711: pop edi */
    goto L_161AA79B; /* 0x161AA712: jmp 0x161aa79b */
L_161AA717:
    PUSH32(esp, 0xC0u); /* 0x161AA717: push 0xc0 */
    PUSH32(esp, edx); /* 0x161AA71C: push edx */
    eax = ebp + (-0xC0); /* 0x161AA71D: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x161AA723: push eax */
    RECOMP_CALL(sub_161AE3CC); /* 0x161AA724: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AA729: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0xC0); /* 0x161AA72C: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x161AA732: push eax */
    ecx = esi; /* 0x161AA733: mov ecx, esi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AA735: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x161AA73A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xB8)); /* 0x161AA73D: mov ecx, dword ptr [ebp - 0xb8] */
    MEM32(eax + 0x18) = ecx; /* 0x161AA743: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + (-0x90)); /* 0x161AA746: mov ecx, dword ptr [ebp - 0x90] */
    MEM32(eax + 0x20) = ecx; /* 0x161AA74C: mov dword ptr [eax + 0x20], ecx */
    ecx = MEM32(ebp + (-0xC0)); /* 0x161AA74F: mov ecx, dword ptr [ebp - 0xc0] */
    MEM32(eax + 0x8) = ecx; /* 0x161AA755: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AA758: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x10) = ecx; /* 0x161AA75B: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebp + (-0x28)); /* 0x161AA75E: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax + 0xC) = ecx; /* 0x161AA761: mov dword ptr [eax + 0xc], ecx */
    goto L_161AA79B; /* 0x161AA764: jmp 0x161aa79b */
L_161AA766:
    eax = MEM32(esi); /* 0x161AA766: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x161AA768: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x161AA76A: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x161AA76D: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x161AA76F: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x161AA772: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x161AA774: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = ecx; /* 0x161AA776: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x161AA779: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 5; /* 0x161AA77C: mov dword ptr [eax + 8], 5 */
    goto L_161AA798; /* 0x161AA783: jmp 0x161aa798 */
L_161AA785:
    eax = MEM32(esi); /* 0x161AA785: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x161AA787: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x161AA789: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x161AA78C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x161AA78E: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x8) = 4; /* 0x161AA791: mov dword ptr [eax + 8], 4 */
L_161AA798:
    MEM32(eax + 0xC) = edx; /* 0x161AA798: mov dword ptr [eax + 0xc], edx */
L_161AA79B:
    esi = POP32_VAL(esp); /* 0x161AA79B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AA79C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AA79D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AA7A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AA7A5u);

L_161AA7A5:
    edi = edi; /* 0x161AA7A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AA7A7: push ebp */
    ebp = esp; /* 0x161AA7A8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x161AA7AA: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x161AA7AD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x161AA7B1: push ebx */
    PUSH32(esp, esi); /* 0x161AA7B2: push esi */
    esi = ecx; /* 0x161AA7B3: mov esi, ecx */
    eax = MEM32(esi); /* 0x161AA7B5: mov eax, dword ptr [esi] */
    edx = MEM32(eax); /* 0x161AA7B7: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x161AA7B9: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x161AA7BC: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0x8); /* 0x161AA7BE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AA7C1: push edi */
    ebx = edx; /* 0x161AA7C2: mov ebx, edx */
    if (31u) _cf = (((ebx) >> 30) & 1u); /* 0x161AA7C4: shr ebx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ebx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 31u; /* 0x161AA7C4: shr ebx, 0x1f */
    edi = edx; /* 0x161AA7C7: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x161AA7C9: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x161AA7CC: mov ecx, edx */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x161AA7CE: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x161AA7CE: shr ecx, 0xc */
    MEM32(eax + 0x88) = ebx; /* 0x161AA7D1: mov dword ptr [eax + 0x88], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x161AA7D7: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x161AA7DD: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x161AA7DF: dec ebx */
    _flag_k = FK_DEC;
    MEM32(eax) = ecx; /* 0x161AA7E0: mov dword ptr [eax], ecx */
    MEM32(eax + 0x80) = edi; /* 0x161AA7E2: mov dword ptr [eax + 0x80], edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA7F6; /* 0x161AA7E8: je 0x161aa7f6 */
L_161AA7EA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x161AA7EA: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AA7FD; /* 0x161AA7EB: jne 0x161aa7fd */
L_161AA7ED:
    MEM32(ebp + (-0x8)) = 4; /* 0x161AA7ED: mov dword ptr [ebp - 8], 4 */
    goto L_161AA7FD; /* 0x161AA7F4: jmp 0x161aa7fd */
L_161AA7F6:
    MEM32(ebp + (-0x8)) = 1; /* 0x161AA7F6: mov dword ptr [ebp - 8], 1 */
L_161AA7FD:
    /* cmp ecx, 4 */ /* 0x161AA7FD: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_161AA80B; /* 0x161AA800: jl 0x161aa80b */
L_161AA802:
    /* cmp ecx, 5 */ /* 0x161AA802: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_161AA8F9; /* 0x161AA805: jle 0x161aa8f9 */
L_161AA80B:
    /* cmp edi, 2 */ /* 0x161AA80B: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AA8AF; /* 0x161AA80E: jne 0x161aa8af */
L_161AA814:
    ecx = edx; /* 0x161AA814: mov ecx, edx */
    PUSH32(esp, 3); /* 0x161AA816: push 3 */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x161AA818: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x161AA818: shr ecx, 2 */
    ebx = POP32_VAL(esp); /* 0x161AA81B: pop ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x161AA81C: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x84) = ecx; /* 0x161AA81E: mov dword ptr [eax + 0x84], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x161AA824: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA8A1; /* 0x161AA827: je 0x161aa8a1 */
L_161AA829:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AA829: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA86B; /* 0x161AA82A: je 0x161aa86b */
L_161AA82C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AA82C: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AA844; /* 0x161AA82D: je 0x161aa844 */
L_161AA82F:
    PUSH32(esp, 0x161B0170u); /* 0x161AA82F: push 0x161b0170 */
    eax = ebp + 0x8; /* 0x161AA834: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AA837: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x161AA838: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_161AE47E); /* 0x161AA83F: call 0x161ae47e */
    RECOMP_FLAGS_IN();
L_161AA844:
    ecx = edx; /* 0x161AA844: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x161AA846: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x161AA846: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x161AA849: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x94) = (uint8_t)(LO8(ecx)); /* 0x161AA84B: mov byte ptr [eax + 0x94], cl */
    MEM8(eax + 0x95) = (uint8_t)(LO8(ecx)); /* 0x161AA851: mov byte ptr [eax + 0x95], cl */
    MEM8(eax + 0x96) = (uint8_t)(LO8(ecx)); /* 0x161AA857: mov byte ptr [eax + 0x96], cl */
    MEM8(eax + 0x97) = (uint8_t)(LO8(ecx)); /* 0x161AA85D: mov byte ptr [eax + 0x97], cl */
    MEM32(eax + 0x98) = ecx; /* 0x161AA863: mov dword ptr [eax + 0x98], ecx */
    goto L_161AA8AF; /* 0x161AA869: jmp 0x161aa8af */
L_161AA86B:
    ecx = edx; /* 0x161AA86B: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x161AA86D: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x161AA86D: shr ecx, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx)); /* 0x161AA870: and cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + 0x94) = (uint8_t)(LO8(ecx)); /* 0x161AA872: mov byte ptr [eax + 0x94], cl */
    ecx = edx; /* 0x161AA878: mov ecx, edx */
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x161AA87A: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x161AA87A: shr ecx, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx)); /* 0x161AA87D: and cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + 0x95) = (uint8_t)(LO8(ecx)); /* 0x161AA87F: mov byte ptr [eax + 0x95], cl */
    ecx = edx; /* 0x161AA885: mov ecx, edx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x161AA887: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x161AA887: shr ecx, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx)); /* 0x161AA88A: and cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + 0x96) = (uint8_t)(LO8(ecx)); /* 0x161AA88C: mov byte ptr [eax + 0x96], cl */
    ecx = edx; /* 0x161AA892: mov ecx, edx */
    if (10u) _cf = (((ecx) >> 9) & 1u); /* 0x161AA894: shr ecx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ecx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 10u; /* 0x161AA894: shr ecx, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(ecx, LO8(ecx) & LO8(ebx)); /* 0x161AA897: and cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + 0x97) = (uint8_t)(LO8(ecx)); /* 0x161AA899: mov byte ptr [eax + 0x97], cl */
    goto L_161AA8AF; /* 0x161AA89F: jmp 0x161aa8af */
L_161AA8A1:
    ecx = edx; /* 0x161AA8A1: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF0u);
    ecx = ecx & 0xF0u; /* 0x161AA8A3: and ecx, 0xf0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x94) = ecx; /* 0x161AA8A9: mov dword ptr [eax + 0x94], ecx */
L_161AA8AF:
    edi = edx; /* 0x161AA8AF: mov edi, edx */
    if (20u) _cf = (((edi) >> 19) & 1u); /* 0x161AA8B1: shr edi, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((edi >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 20u; /* 0x161AA8B1: shr edi, 0x14 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x161AA8B4: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xBC) = edi; /* 0x161AA8B7: mov dword ptr [eax + 0xbc], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AA8F9; /* 0x161AA8BD: je 0x161aa8f9 */
L_161AA8BF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x161AA8BF: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x161AA8C3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AA8F9; /* 0x161AA8C5: jbe 0x161aa8f9 */
L_161AA8C7:
    ecx = eax + 0xB0; /* 0x161AA8C7: lea ecx, [eax + 0xb0] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x161AA8CD: mov dword ptr [ebp - 4], ecx */
L_161AA8D0:
    ecx = MEM32(ebp + 0x8); /* 0x161AA8D0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x161AA8D3: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x161AA8D6: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x161AA8D9: add ecx, 0x16 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x161AA8DC: push 3 */
    ebx = POP32_VAL(esp); /* 0x161AA8DE: pop ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AA8DF: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x161AA8DF: shl ebx, cl */
    MEM32(ebp + (-0xC)) = ecx; /* 0x161AA8E1: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x161AA8E4: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x161AA8E6: shr ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> ((LO8(ecx)) & 31); /* 0x161AA8E6: shr ebx, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AA8E8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x161AA8EB: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x161AA8EE: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    MEM32(ecx) = ebx; /* 0x161AA8F2: mov dword ptr [ecx], ebx */
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x161AA8F4: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AA8D0; /* 0x161AA8F7: jb 0x161aa8d0 */
L_161AA8F9:
    /* cmp MEM32(eax + 0x88), 0 */ /* 0x161AA8F9: cmp dword ptr [eax + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AA92A; /* 0x161AA900: je 0x161aa92a */
L_161AA902:
    ecx = MEM32(esi); /* 0x161AA902: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx); /* 0x161AA904: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x161AA906: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x161AA909: mov dword ptr [esi], ecx */
    ecx = edx; /* 0x161AA90B: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    ecx = ecx & 0x3Fu; /* 0x161AA90D: and ecx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x90) = ecx; /* 0x161AA910: mov dword ptr [eax + 0x90], ecx */
    /* cmp ecx, 1 */ /* 0x161AA916: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AA92A; /* 0x161AA919: jne 0x161aa92a */
L_161AA91B:
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x161AA91B: shr edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 6u; /* 0x161AA91B: shr edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x161AA91E: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8C) = edx; /* 0x161AA924: mov dword ptr [eax + 0x8c], edx */
L_161AA92A:
    ecx = MEM32(eax); /* 0x161AA92A: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFCu; /* 0x161AA92C: add ecx, -4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x161AA92F: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AA950; /* 0x161AA932: ja 0x161aa950 */
L_161AA934:
    edx = MEM32(ebp + (-0x8)); /* 0x161AA934: mov edx, dword ptr [ebp - 8] */
    /* test edx, edx */ /* 0x161AA937: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AA950; /* 0x161AA939: jbe 0x161aa950 */
L_161AA93B:
    ecx = eax + 0xA0; /* 0x161AA93B: lea ecx, [eax + 0xa0] */
L_161AA941:
    edi = MEM32(esi); /* 0x161AA941: mov edi, dword ptr [esi] */
    edi = MEM32(edi); /* 0x161AA943: mov edi, dword ptr [edi] */
    MEM32(ecx) = edi; /* 0x161AA945: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x161AA947: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x161AA94A: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x161AA94D: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AA941; /* 0x161AA94E: jne 0x161aa941 */
L_161AA950:
    ecx = MEM32(eax + 0xBC); /* 0x161AA950: mov ecx, dword ptr [eax + 0xbc] */
    /* test ecx, ecx */ /* 0x161AA956: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AA97B; /* 0x161AA958: jbe 0x161aa97b */
L_161AA95A:
    ebx = eax + 0x8; /* 0x161AA95A: lea ebx, [eax + 8] */
    edi = eax + 0xB0; /* 0x161AA95D: lea edi, [eax + 0xb0] */
    MEM32(ebp + 0x8) = ecx; /* 0x161AA963: mov dword ptr [ebp + 8], ecx */
L_161AA966:
    PUSH32(esp, MEM32(edi)); /* 0x161AA966: push dword ptr [edi] */
    ecx = esi; /* 0x161AA968: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x161AA96A: push ebx */
    RECOMP_CALL(sub_161AA67D); /* 0x161AA96B: call 0x161aa67d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x161AA970: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x28u; /* 0x161AA973: add ebx, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x161AA976: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AA966; /* 0x161AA979: jne 0x161aa966 */
L_161AA97B:
    edi = POP32_VAL(esp); /* 0x161AA97B: pop edi */
    esi = POP32_VAL(esp); /* 0x161AA97C: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AA97D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AA97E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AA97F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AA987(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AA987u);

L_161AA987:
    edi = edi; /* 0x161AA987: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AA989: push ebp */
    ebp = esp; /* 0x161AA98A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x161AA98C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AA98F: push ebx */
    PUSH32(esp, esi); /* 0x161AA990: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AA991: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AA994: push edi */
    edi = ecx; /* 0x161AA995: mov edi, ecx */
    PUSH32(esp, 1); /* 0x161AA997: push 1 */
    ecx = esi; /* 0x161AA999: mov ecx, esi */
    RECOMP_CALL(sub_16065ED0); /* 0x161AA99B: call 0x16065ed0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x161AA9A0: mov eax, dword ptr [edi] */
    ebx = MEM32(eax); /* 0x161AA9A2: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0x18)) = eax; /* 0x161AA9A4: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x161AA9A7: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x161AA9AA: mov dword ptr [edi], eax */
    ecx = ebx; /* 0x161AA9AC: mov ecx, ebx */
    if (19u) _cf = (((ecx) >> 18) & 1u); /* 0x161AA9AE: shr ecx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((ecx >> 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 19u; /* 0x161AA9AE: shr ecx, 0x13 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x161AA9B1: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x490) = ecx; /* 0x161AA9B4: mov dword ptr [esi + 0x490], ecx */
    ecx = ebx; /* 0x161AA9BA: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    ecx = ecx & 0x2000u; /* 0x161AA9BC: and ecx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C0) = ecx; /* 0x161AA9C2: mov dword ptr [esi + 0x4c0], ecx */
    ecx = ebx; /* 0x161AA9C8: mov ecx, ebx */
    eax = ebx; /* 0x161AA9CA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x161AA9CC: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x161AA9D1: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x161AA9D1: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x161AA9D4: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161AA9D7: push eax */
    MEM32(esi) = eax; /* 0x161AA9D8: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x161AA9DA: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_161A9674); /* 0x161AA9DD: call 0x161a9674 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x488) = eax; /* 0x161AA9E2: mov dword ptr [esi + 0x488], eax */
    eax = ebx; /* 0x161AA9E8: mov eax, ebx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x161AA9EA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x161AA9EA: shr eax, 0x1f */
    /* test eax, eax */ /* 0x161AA9ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AAA1E; /* 0x161AA9EF: je 0x161aaa1e */
L_161AA9F1:
    ecx = MEM32(esi); /* 0x161AA9F1: mov ecx, dword ptr [esi] */
    /* cmp ecx, 0x92u */ /* 0x161AA9F3: cmp ecx, 0x92 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x92u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAA03; /* 0x161AA9F9: je 0x161aaa03 */
L_161AA9FB:
    /* cmp ecx, 0x91u */ /* 0x161AA9FB: cmp ecx, 0x91 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x91u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AAA1E; /* 0x161AAA01: jne 0x161aaa1e */
L_161AAA03:
    MEM32(esi + 0x48C) = 1; /* 0x161AAA03: mov dword ptr [esi + 0x48c], 1 */
    eax = MEM32(edi); /* 0x161AAA0D: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x161AAA0F: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x161AAA11: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x161AAA14: mov dword ptr [edi], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x161AAA16: mov dword ptr [ebp - 4], ecx */
    goto L_161AAAF9; /* 0x161AAA19: jmp 0x161aaaf9 */
L_161AAA1E:
    _flag_a = (uint32_t)(MEM32(esi + 0x48C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x48C) = MEM32(esi + 0x48C) & 0; /* 0x161AAA1E: and dword ptr [esi + 0x48c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x161AAA25: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x161AAA29: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AAA2B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, 3 */ /* 0x161AAA2D: test eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AAAF9; /* 0x161AAA32: jle 0x161aaaf9 */
L_161AAA38:
    eax = esi + 0x494; /* 0x161AAA38: lea eax, [esi + 0x494] */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AAA3E: mov dword ptr [ebp - 0xc], eax */
L_161AAA41:
    _flag_a = (uint32_t)(MEM32(esi + 0x48C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x48C) = MEM32(esi + 0x48C) + 1; /* 0x161AAA41: inc dword ptr [esi + 0x48c] */
    _flag_k = FK_INC;
    ecx = MEM32(edi); /* 0x161AAA47: mov ecx, dword ptr [edi] */
    eax = MEM32(ecx); /* 0x161AAA49: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + (-0xC)); /* 0x161AAA4B: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x161AAA4E: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x161AAA51: mov dword ptr [edi], ecx */
    ecx = eax; /* 0x161AAA53: mov ecx, eax */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x161AAA55: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x161AAA55: shr ecx, 0x1f */
    MEM32(ebp + (-0x14)) = ecx; /* 0x161AAA58: mov dword ptr [ebp - 0x14], ecx */
    ecx = eax; /* 0x161AAA5B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    ecx = ecx & 0x3Fu; /* 0x161AAA5D: and ecx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = ecx; /* 0x161AAA60: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AAA62: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAAA8; /* 0x161AAA63: je 0x161aaaa8 */
L_161AAA65:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AAA65: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAA9A; /* 0x161AAA66: je 0x161aaa9a */
L_161AAA68:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AAA68: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AAAE2; /* 0x161AAA69: jne 0x161aaae2 */
L_161AAA6B:
    ecx = esi + 0x4A8; /* 0x161AAA6B: lea ecx, [esi + 0x4a8] */
    MEM32(ebp + 0x8) = 6; /* 0x161AAA71: mov dword ptr [ebp + 8], 6 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x161AAA78: mov dword ptr [ebp - 8], ecx */
L_161AAA7B:
    ecx = MEM32(ebp + 0x8); /* 0x161AAA7B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x161AAA7E: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    edx = eax; /* 0x161AAA82: mov edx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x161AAA84: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x161AAA84: shr edx, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x161AAA86: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x161AAA89: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x161AAA8D: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0x16u */ /* 0x161AAA90: cmp dword ptr [ebp + 8], 0x16 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = edx; /* 0x161AAA94: mov dword ptr [ecx], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AAA7B; /* 0x161AAA96: jb 0x161aaa7b */
L_161AAA98:
    goto L_161AAAE2; /* 0x161AAA98: jmp 0x161aaae2 */
L_161AAA9A:
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x161AAA9A: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x161AAA9A: shr eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x161AAA9D: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4A4) = eax; /* 0x161AAAA0: mov dword ptr [esi + 0x4a4], eax */
    goto L_161AAAE2; /* 0x161AAAA6: jmp 0x161aaae2 */
L_161AAAA8:
    edx = eax; /* 0x161AAAA8: mov edx, eax */
    if (9u) _cf = (((edx) >> 8) & 1u); /* 0x161AAAAA: shr edx, 9 */
    if (9u) { _flag_a = recomp_flags_pack((edx >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 9u; /* 0x161AAAAA: shr edx, 9 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x161AAAAD: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi + 0x4A0; /* 0x161AAAB0: lea ecx, [esi + 0x4a0] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x161AAAB6: mov byte ptr [ecx], dl */
    edx = eax; /* 0x161AAAB8: mov edx, eax */
    if (13u) _cf = (((edx) >> 12) & 1u); /* 0x161AAABA: shr edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 13u; /* 0x161AAABA: shr edx, 0xd */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x161AAABD: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (17u) _cf = (((eax) >> 16) & 1u); /* 0x161AAAC0: shr eax, 0x11 */
    if (17u) { _flag_a = recomp_flags_pack((eax >> 17u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 17u; /* 0x161AAAC0: shr eax, 0x11 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x161AAAC3: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 3); /* 0x161AAAC5: push 3 */
    MEM8(esi + 0x4A1) = (uint8_t)(LO8(edx)); /* 0x161AAAC7: mov byte ptr [esi + 0x4a1], dl */
    MEM8(esi + 0x4A2) = (uint8_t)(LO8(eax)); /* 0x161AAACD: mov byte ptr [esi + 0x4a2], al */
    edx = POP32_VAL(esp); /* 0x161AAAD3: pop edx */
L_161AAAD4:
    SET_LO8(eax, MEM8(ecx)); /* 0x161AAAD4: mov al, byte ptr [ecx] */
    /* test LO8(eax), 8 */ /* 0x161AAAD6: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AAADE; /* 0x161AAAD8: je 0x161aaade */
L_161AAADA:
    _flag_a = (uint32_t)((LO8(eax) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF0u); /* 0x161AAADA: or al, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x161AAADC: mov byte ptr [ecx], al */
L_161AAADE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x161AAADE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x161AAADF: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AAAD4; /* 0x161AAAE0: jne 0x161aaad4 */
L_161AAAE2:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x161AAAE2: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAAF9; /* 0x161AAAE6: je 0x161aaaf9 */
L_161AAAE8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x161AAAE8: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x161AAAEB: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), 3 */ /* 0x161AAAEF: cmp dword ptr [ebp - 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_161AAA41; /* 0x161AAAF3: jl 0x161aaa41 */
L_161AAAF9:
    eax = MEM32(esi); /* 0x161AAAF9: mov eax, dword ptr [esi] */
    /* cmp eax, 0x69u */ /* 0x161AAAFB: cmp eax, 0x69 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AADAA; /* 0x161AAAFE: jg 0x161aadaa */
L_161AAB04:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAD35; /* 0x161AAB04: je 0x161aad35 */
L_161AAB0A:
    /* cmp eax, 0x5Cu */ /* 0x161AAB0A: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AACFB; /* 0x161AAB0D: jg 0x161aacfb */
L_161AAB13:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AACEA; /* 0x161AAB13: je 0x161aacea */
L_161AAB19:
    /* cmp eax, 0x3Du */ /* 0x161AAB19: cmp eax, 0x3d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AAC1D; /* 0x161AAB1C: jg 0x161aac1d */
L_161AAB22:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AABF0; /* 0x161AAB22: je 0x161aabf0 */
L_161AAB28:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x161AAB28: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACE5; /* 0x161AAB2B: je 0x161aace5 */
L_161AAB31:
    PUSH32(esp, 2); /* 0x161AAB31: push 2 */
    edx = POP32_VAL(esp); /* 0x161AAB33: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x161AAB34: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AABE5; /* 0x161AAB36: je 0x161aabe5 */
L_161AAB3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x161AAB3C: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACE5; /* 0x161AAB3F: je 0x161aace5 */
L_161AAB45:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x161AAB45: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACE5; /* 0x161AAB48: je 0x161aace5 */
L_161AAB4E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x12u; /* 0x161AAB4E: sub eax, 0x12 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACE5; /* 0x161AAB51: je 0x161aace5 */
L_161AAB57:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x16u; /* 0x161AAB57: sub eax, 0x16 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AAB5A: jne 0x161ab0b6 */
L_161AAB60:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAB60: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAB60: shr ebx, 0xb */
    MEM32(esi + 0x4C4) = ebx; /* 0x161AAB63: mov dword ptr [esi + 0x4c4], ebx */
    eax = MEM32(edi); /* 0x161AAB69: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x161AAB6B: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x161AAB6D: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, edx */ /* 0x161AAB70: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AAB8A; /* 0x161AAB72: jae 0x161aab8a */
L_161AAB74:
    _flag_a = (uint32_t)(MEM32(esi + 0x4CC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4CC) = MEM32(esi + 0x4CC) & 0; /* 0x161AAB74: and dword ptr [esi + 0x4cc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4C8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4C8) = MEM32(esi + 0x4C8) & 0; /* 0x161AAB7B: and dword ptr [esi + 0x4c8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x161AAB82: mov dword ptr [ebp - 4], edx */
    goto L_161AAC50; /* 0x161AAB85: jmp 0x161aac50 */
L_161AAB8A:
    eax = ecx; /* 0x161AAB8A: mov eax, ecx */
    eax = eax * 4 + (-0x8); /* 0x161AAB8C: lea eax, [eax*4 - 8] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAB93: mov dword ptr [esi + 0x4c8], eax */
    eax = MEM32(edi); /* 0x161AAB99: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAB9B: mov eax, dword ptr [eax] */
    eax = eax * 4 + (-0x8); /* 0x161AAB9D: lea eax, [eax*4 - 8] */
    PUSH32(esp, eax); /* 0x161AABA4: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AABA5: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AABAA: pop ecx */
    MEM32(esi + 0x4CC) = eax; /* 0x161AABAB: mov dword ptr [esi + 0x4cc], eax */
    /* test eax, eax */ /* 0x161AABB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AABCA; /* 0x161AABB3: jne 0x161aabca */
L_161AABB5:
    MEM32(ebp + (-0x14)) = 0x8007000Eu; /* 0x161AABB5: mov dword ptr [ebp - 0x14], 0x8007000e */
    PUSH32(esp, 0x161B0170u); /* 0x161AABBC: push 0x161b0170 */
    eax = ebp + (-0x14); /* 0x161AABC1: lea eax, [ebp - 0x14] */
L_161AABC4:
    PUSH32(esp, eax); /* 0x161AABC4: push eax */
    RECOMP_CALL(sub_161AE47E); /* 0x161AABC5: call 0x161ae47e */
    RECOMP_FLAGS_IN();
L_161AABCA:
    ecx = MEM32(edi); /* 0x161AABCA: mov ecx, dword ptr [edi] */
    edx = MEM32(ecx); /* 0x161AABCC: mov edx, dword ptr [ecx] */
    edx = edx * 4 + (-0x8); /* 0x161AABCE: lea edx, [edx*4 - 8] */
    PUSH32(esp, edx); /* 0x161AABD5: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x161AABD6: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x161AABD9: push ecx */
    PUSH32(esp, eax); /* 0x161AABDA: push eax */
L_161AABDB:
    RECOMP_CALL(sub_161AE3C0); /* 0x161AABDB: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AABE0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_161AAC50; /* 0x161AABE3: jmp 0x161aac50 */
L_161AABE5:
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x161AABE5: shr ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ebx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 18u; /* 0x161AABE5: shr ebx, 0x12 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x161AABE8: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AAE7F; /* 0x161AABEB: jmp 0x161aae7f */
L_161AABF0:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AABF0: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AABF0: shr ebx, 0xb */
    eax = esi + 0x8; /* 0x161AABF3: lea eax, [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x161AABF6: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161AABF9: push eax */
    ecx = edi; /* 0x161AABFA: mov ecx, edi */
    MEM32(esi + 0x4C4) = ebx; /* 0x161AABFC: mov dword ptr [esi + 0x4c4], ebx */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAC02: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = esi + 0xC8; /* 0x161AAC07: lea eax, [esi + 0xc8] */
    PUSH32(esp, eax); /* 0x161AAC0D: push eax */
    ecx = edi; /* 0x161AAC0E: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAC10: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x188u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x188u; /* 0x161AAC15: add esi, 0x188 */
    _flag_k = FK_ADD;
    goto L_161AAC71; /* 0x161AAC1B: jmp 0x161aac71 */
L_161AAC1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3Fu; /* 0x161AAC1D: sub eax, 0x3f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACE5; /* 0x161AAC20: je 0x161aace5 */
L_161AAC26:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x19u; /* 0x161AAC26: sub eax, 0x19 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAC7F; /* 0x161AAC29: je 0x161aac7f */
L_161AAC2B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAC2B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAC77; /* 0x161AAC2C: je 0x161aac77 */
L_161AAC2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAC2E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAC62; /* 0x161AAC2F: je 0x161aac62 */
L_161AAC31:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAC31: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AAC32: jne 0x161ab0b6 */
L_161AAC38:
    eax = esi + 0x8; /* 0x161AAC38: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x161AAC3B: push eax */
    ecx = edi; /* 0x161AAC3C: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAC3E: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
L_161AAC43:
    eax = MEM32(edi); /* 0x161AAC43: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAC45: mov eax, dword ptr [eax] */
L_161AAC47:
    MEM32(esi + 0x4C4) = eax; /* 0x161AAC47: mov dword ptr [esi + 0x4c4], eax */
L_161AAC4D:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAC4D: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
L_161AAC50:
    eax = MEM32(ebp + (-0x18)); /* 0x161AAC50: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AAC53: mov ecx, dword ptr [ebp - 4] */
    eax = eax + ecx * 4; /* 0x161AAC56: lea eax, [eax + ecx*4] */
    MEM32(edi) = eax; /* 0x161AAC59: mov dword ptr [edi], eax */
    edi = POP32_VAL(esp); /* 0x161AAC5B: pop edi */
    esi = POP32_VAL(esp); /* 0x161AAC5C: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AAC5D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AAC5E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AAC5F: ret 4 */
L_161AAC62:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAC62: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAC62: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x161AAC65: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AAC68:
    MEM32(esi + 0x4C4) = ebx; /* 0x161AAC68: mov dword ptr [esi + 0x4c4], ebx */
L_161AAC6E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x161AAC6E: add esi, 8 */
    _flag_k = FK_ADD;
L_161AAC71:
    PUSH32(esp, esi); /* 0x161AAC71: push esi */
    goto L_161AAE6D; /* 0x161AAC72: jmp 0x161aae6d */
L_161AAC77:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAC77: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAC77: shr ebx, 0xb */
L_161AAC7A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x161AAC7A: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AAC68; /* 0x161AAC7D: jmp 0x161aac68 */
L_161AAC7F:
    eax = ebx; /* 0x161AAC7F: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x161AAC81: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x161AAC81: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x161AAC84: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C4) = eax; /* 0x161AAC87: mov dword ptr [esi + 0x4c4], eax */
    eax = esi + 0x8; /* 0x161AAC8D: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x161AAC90: push eax */
    ecx = edi; /* 0x161AAC91: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAC93: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x161AAC98: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x161AAC9A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xFu); /* 0x161AAC9C: push 0xf */
    eax = POP32_VAL(esp); /* 0x161AAC9E: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AAC9F: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C8) = ecx; /* 0x161AACA1: mov dword ptr [esi + 0x4c8], ecx */
    ecx = MEM32(edi); /* 0x161AACA7: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AACA9: mov ecx, dword ptr [ecx] */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x161AACAB: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x161AACAB: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AACAE: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4CC) = ecx; /* 0x161AACB0: mov dword ptr [esi + 0x4cc], ecx */
    ecx = MEM32(edi); /* 0x161AACB6: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AACB8: mov ecx, dword ptr [ecx] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x161AACBA: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x161AACBA: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AACBD: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4D0) = ecx; /* 0x161AACBF: mov dword ptr [esi + 0x4d0], ecx */
    ecx = MEM32(edi); /* 0x161AACC5: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AACC7: mov ecx, dword ptr [ecx] */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x161AACC9: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x161AACC9: shr ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AACCC: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x161AACCE: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x161AACCE: shr ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Fu);
    ebx = ebx & 0x7Fu; /* 0x161AACD1: and ebx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4D4) = ecx; /* 0x161AACD4: mov dword ptr [esi + 0x4d4], ecx */
    MEM32(esi + 0x4D8) = ebx; /* 0x161AACDA: mov dword ptr [esi + 0x4d8], ebx */
    RECOMP_BACKEDGE();
    goto L_161AAC4D; /* 0x161AACE0: jmp 0x161aac4d */
L_161AACE5:
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x161AACE5: shr ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ebx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 18u; /* 0x161AACE5: shr ebx, 0x12 */
    RECOMP_BACKEDGE();
    goto L_161AAC7A; /* 0x161AACE8: jmp 0x161aac7a */
L_161AACEA:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AACEA: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AACEA: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x161AACED: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AACF0:
    MEM32(esi + 0x4C4) = ebx; /* 0x161AACF0: mov dword ptr [esi + 0x4c4], ebx */
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AACF6: jmp 0x161aac50 */
L_161AACFB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x5Du; /* 0x161AACFB: sub eax, 0x5d */
    _flag_k = FK_CMP;
    /* cmp eax, 0xBu */ /* 0x161AACFE: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AAD01: ja 0x161ab0b6 */
L_161AAD07:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x161AB0EB)); goto _ljump; }
L_161AAD0E:
    eax = esi + 0x8; /* 0x161AAD0E: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x161AAD11: push eax */
    ecx = edi; /* 0x161AAD12: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAD14: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x161AAD19: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAD1B: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x161AAD1D: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AAC47; /* 0x161AAD22: jmp 0x161aac47 */
L_161AAD27:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAD27: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAD27: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x161AAD2A: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C8) = ebx; /* 0x161AAD2D: mov dword ptr [esi + 0x4c8], ebx */
    RECOMP_BACKEDGE();
    goto L_161AAD0E; /* 0x161AAD33: jmp 0x161aad0e */
L_161AAD35:
    eax = MEM32(edi); /* 0x161AAD35: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAD37: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C4) = eax; /* 0x161AAD39: mov dword ptr [esi + 0x4c4], eax */
    PUSH32(esp, 4); /* 0x161AAD3F: push 4 */
    ecx = POP32_VAL(esp); /* 0x161AAD41: pop ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ecx; /* 0x161AAD42: add dword ptr [edi], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAD44: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAD46: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAD48: mov dword ptr [esi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ecx; /* 0x161AAD4E: add dword ptr [edi], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAD50: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAD52: mov eax, dword ptr [eax] */
    /* cmp eax, 1 */ /* 0x161AAD54: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AAD66; /* 0x161AAD57: jb 0x161aad66 */
L_161AAD59:
    /* cmp eax, ecx */ /* 0x161AAD59: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AAD61; /* 0x161AAD5B: jbe 0x161aad61 */
L_161AAD5D:
    eax = ecx; /* 0x161AAD5D: mov eax, ecx */
    goto L_161AAD69; /* 0x161AAD5F: jmp 0x161aad69 */
L_161AAD61:
    /* cmp eax, 1 */ /* 0x161AAD61: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AAD69; /* 0x161AAD64: jae 0x161aad69 */
L_161AAD66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AAD66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AAD68: inc eax */
    _flag_k = FK_INC;
L_161AAD69:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAD69: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAD99; /* 0x161AAD6A: je 0x161aad99 */
L_161AAD6C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAD6C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAD8D; /* 0x161AAD6D: je 0x161aad8d */
L_161AAD6F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAD6F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAD81; /* 0x161AAD70: je 0x161aad81 */
L_161AAD72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAD72: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AADA3; /* 0x161AAD73: jne 0x161aada3 */
L_161AAD75:
    MEM32(esi + 0x4CC) = 0xF0u; /* 0x161AAD75: mov dword ptr [esi + 0x4cc], 0xf0 */
    goto L_161AADA3; /* 0x161AAD7F: jmp 0x161aada3 */
L_161AAD81:
    MEM32(esi + 0x4CC) = 0x70u; /* 0x161AAD81: mov dword ptr [esi + 0x4cc], 0x70 */
    goto L_161AADA3; /* 0x161AAD8B: jmp 0x161aada3 */
L_161AAD8D:
    MEM32(esi + 0x4CC) = 0x30u; /* 0x161AAD8D: mov dword ptr [esi + 0x4cc], 0x30 */
    goto L_161AADA3; /* 0x161AAD97: jmp 0x161aada3 */
L_161AAD99:
    MEM32(esi + 0x4CC) = 0x10u; /* 0x161AAD99: mov dword ptr [esi + 0x4cc], 0x10 */
L_161AADA3:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ecx; /* 0x161AADA3: add dword ptr [edi], ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AADA5: jmp 0x161aac50 */
L_161AADAA:
    ecx = 0x98u; /* 0x161AADAA: mov ecx, 0x98 */
    /* cmp eax, ecx */ /* 0x161AADAF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AAF73; /* 0x161AADB1: jg 0x161aaf73 */
L_161AADB7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAF64; /* 0x161AADB7: je 0x161aaf64 */
L_161AADBD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFAu; /* 0x161AADBD: add ecx, -6 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x161AADC0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AAF2F; /* 0x161AADC2: jg 0x161aaf2f */
L_161AADC8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAEA6; /* 0x161AADC8: je 0x161aaea6 */
L_161AADCE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x6Au; /* 0x161AADCE: sub eax, 0x6a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAE9B; /* 0x161AADD1: je 0x161aae9b */
L_161AADD7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x161AADD7: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAE79; /* 0x161AADDA: je 0x161aae79 */
L_161AADE0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x161AADE0: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAE56; /* 0x161AADE3: je 0x161aae56 */
L_161AADE5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x17u; /* 0x161AADE5: sub eax, 0x17 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAC6E; /* 0x161AADE8: je 0x161aac6e */
L_161AADEE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AADEE: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAC43; /* 0x161AADEF: je 0x161aac43 */
L_161AADF5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AADF5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AADF6: jne 0x161ab0b6 */
L_161AADFC:
    eax = MEM32(edi); /* 0x161AADFC: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AADFE: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C4) = eax; /* 0x161AAE00: mov dword ptr [esi + 0x4c4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAE06: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAE09: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAE0B: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAE0D: mov dword ptr [esi + 0x4c8], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AAE13: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AAE13: shl eax, 2 */
    PUSH32(esp, eax); /* 0x161AAE16: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AAE17: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AAE1C: pop ecx */
    MEM32(esi + 0x4CC) = eax; /* 0x161AAE1D: mov dword ptr [esi + 0x4cc], eax */
    /* test eax, eax */ /* 0x161AAE23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AAE3B; /* 0x161AAE25: jne 0x161aae3b */
L_161AAE27:
    MEM32(ebp + (-0x10)) = 0x8007000Eu; /* 0x161AAE27: mov dword ptr [ebp - 0x10], 0x8007000e */
    PUSH32(esp, 0x161B0170u); /* 0x161AAE2E: push 0x161b0170 */
    eax = ebp + (-0x10); /* 0x161AAE33: lea eax, [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_161AABC4; /* 0x161AAE36: jmp 0x161aabc4 */
L_161AAE3B:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAE3B: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x4C8); /* 0x161AAE3E: mov ecx, dword ptr [esi + 0x4c8] */
    eax = MEM32(edi); /* 0x161AAE44: mov eax, dword ptr [edi] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x161AAE46: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x161AAE46: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x161AAE49: push ecx */
    PUSH32(esp, eax); /* 0x161AAE4A: push eax */
    PUSH32(esp, MEM32(esi + 0x4CC)); /* 0x161AAE4B: push dword ptr [esi + 0x4cc] */
    RECOMP_BACKEDGE();
    goto L_161AABDB; /* 0x161AAE51: jmp 0x161aabdb */
L_161AAE56:
    eax = MEM32(edi); /* 0x161AAE56: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAE58: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C4) = eax; /* 0x161AAE5A: mov dword ptr [esi + 0x4c4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAE60: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = esi + 0x8; /* 0x161AAE63: lea eax, [esi + 8] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAE66: mov dword ptr [esi + 0x4c8], eax */
    PUSH32(esp, eax); /* 0x161AAE6C: push eax */
L_161AAE6D:
    ecx = edi; /* 0x161AAE6D: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAE6F: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AAE74: jmp 0x161aac50 */
L_161AAE79:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAE79: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAE79: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x161AAE7C: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AAE7F:
    eax = esi + 0x8; /* 0x161AAE7F: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x161AAE82: push eax */
    ecx = edi; /* 0x161AAE83: mov ecx, edi */
    MEM32(esi + 0x4C4) = ebx; /* 0x161AAE85: mov dword ptr [esi + 0x4c4], ebx */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAE8B: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xC8u; /* 0x161AAE90: add esi, 0xc8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_161AAC71; /* 0x161AAE96: jmp 0x161aac71 */
L_161AAE9B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00FFF800u);
    ebx = ebx & 0x00FFF800u; /* 0x161AAE9B: and ebx, 0xfff800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AACF0; /* 0x161AAEA1: jmp 0x161aacf0 */
L_161AAEA6:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAEA6: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAEA6: shr ebx, 0xb */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x161AAEA9: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x4D4) = (uint8_t)(LO8(ebx)); /* 0x161AAEAC: mov byte ptr [esi + 0x4d4], bl */
    eax = MEM32(edi); /* 0x161AAEB2: mov eax, dword ptr [edi] */
    SET_LO16(eax, MEM16(eax)); /* 0x161AAEB4: mov ax, word ptr [eax] */
    MEM16(esi + 0x4C4) = (uint16_t)(LO16(eax)); /* 0x161AAEB7: mov word ptr [esi + 0x4c4], ax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAEBE: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAEC1: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAEC3: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAEC5: mov dword ptr [esi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAECB: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAECE: mov eax, dword ptr [edi] */
    eax = (uint32_t)MEM16(eax); /* 0x161AAED0: movzx eax, word ptr [eax] */
    MEM32(esi + 0x4CC) = eax; /* 0x161AAED3: mov dword ptr [esi + 0x4cc], eax */
    eax = MEM32(edi); /* 0x161AAED9: mov eax, dword ptr [edi] */
    SET_LO16(eax, MEM16(eax + 0x2)); /* 0x161AAEDB: mov ax, word ptr [eax + 2] */
    MEM16(esi + 0x4C6) = (uint16_t)(LO16(eax)); /* 0x161AAEDF: mov word ptr [esi + 0x4c6], ax */
    eax = MEM32(esi + 0x4CC); /* 0x161AAEE6: mov eax, dword ptr [esi + 0x4cc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AAEEC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AAEEC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x161AAEEF: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AAEF0: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AAEF5: pop ecx */
    MEM32(esi + 0x4D0) = eax; /* 0x161AAEF6: mov dword ptr [esi + 0x4d0], eax */
    /* test eax, eax */ /* 0x161AAEFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AAF14; /* 0x161AAEFE: jne 0x161aaf14 */
L_161AAF00:
    MEM32(ebp + (-0xC)) = 0x8007000Eu; /* 0x161AAF00: mov dword ptr [ebp - 0xc], 0x8007000e */
    PUSH32(esp, 0x161B0170u); /* 0x161AAF07: push 0x161b0170 */
    eax = ebp + (-0xC); /* 0x161AAF0C: lea eax, [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_161AABC4; /* 0x161AAF0F: jmp 0x161aabc4 */
L_161AAF14:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAF14: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x4CC); /* 0x161AAF17: mov ecx, dword ptr [esi + 0x4cc] */
    eax = MEM32(edi); /* 0x161AAF1D: mov eax, dword ptr [edi] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x161AAF1F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x161AAF1F: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x161AAF22: push ecx */
    PUSH32(esp, eax); /* 0x161AAF23: push eax */
    PUSH32(esp, MEM32(esi + 0x4D0)); /* 0x161AAF24: push dword ptr [esi + 0x4d0] */
    RECOMP_BACKEDGE();
    goto L_161AABDB; /* 0x161AAF2A: jmp 0x161aabdb */
L_161AAF2F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x93u; /* 0x161AAF2F: sub eax, 0x93 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACEA; /* 0x161AAF34: je 0x161aacea */
L_161AAF3A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAF3A: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AACEA; /* 0x161AAF3B: je 0x161aacea */
L_161AAF41:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAF41: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAF59; /* 0x161AAF42: je 0x161aaf59 */
L_161AAF44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAF44: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AAF4E; /* 0x161AAF45: je 0x161aaf4e */
L_161AAF47:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AAF47: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AAF48: jne 0x161ab0b6 */
L_161AAF4E:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAF4E: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAF4E: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    ebx = ebx & 7; /* 0x161AAF51: and ebx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AACF0; /* 0x161AAF54: jmp 0x161aacf0 */
L_161AAF59:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x161AAF59: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x161AAF59: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x161AAF5C: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AACF0; /* 0x161AAF5F: jmp 0x161aacf0 */
L_161AAF64:
    eax = MEM32(edi); /* 0x161AAF64: mov eax, dword ptr [edi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x161AAF66: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4C4) = _v; } /* 0x161AAF68: fstp dword ptr [esi + 0x4c4] */
    RECOMP_BACKEDGE();
    goto L_161AAC4D; /* 0x161AAF6E: jmp 0x161aac4d */
L_161AAF73:
    ecx = 0xBEu; /* 0x161AAF73: mov ecx, 0xbe */
    /* cmp eax, ecx */ /* 0x161AAF78: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_161AB0AB; /* 0x161AAF7A: jg 0x161ab0ab */
L_161AAF80:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB06D; /* 0x161AAF80: je 0x161ab06d */
L_161AAF86:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x99u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x99u; /* 0x161AAF86: sub eax, 0x99 */
    _flag_k = FK_CMP;
    /* cmp eax, 9 */ /* 0x161AAF8B: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AB0B6; /* 0x161AAF8E: ja 0x161ab0b6 */
L_161AAF94:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x161AB11B)); goto _ljump; }
L_161AAF9B:
    eax = MEM32(edi); /* 0x161AAF9B: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAF9D: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C4) = eax; /* 0x161AAF9F: mov dword ptr [esi + 0x4c4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAFA5: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAFA8: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAFAA: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AAFAC: mov dword ptr [esi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AAFB2: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AAFB5: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AAFB7: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4CC) = eax; /* 0x161AAFB9: mov dword ptr [esi + 0x4cc], eax */
    RECOMP_BACKEDGE();
    goto L_161AAC4D; /* 0x161AAFBF: jmp 0x161aac4d */
L_161AAFC4:
    eax = ebx; /* 0x161AAFC4: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x161AAFC6: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x161AAFC6: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x161AAFC9: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C4) = eax; /* 0x161AAFCC: mov dword ptr [esi + 0x4c4], eax */
    eax = esi + 0x8; /* 0x161AAFD2: lea eax, [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x161AAFD5: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x161AAFDB: push eax */
    ecx = edi; /* 0x161AAFDC: mov ecx, edi */
    MEM32(esi + 0x4D8) = ebx; /* 0x161AAFDE: mov dword ptr [esi + 0x4d8], ebx */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AAFE4: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x161AAFE9: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x161AAFEB: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xFu); /* 0x161AAFED: push 0xf */
    eax = POP32_VAL(esp); /* 0x161AAFEF: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AAFF0: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C8) = ecx; /* 0x161AAFF2: mov dword ptr [esi + 0x4c8], ecx */
    ecx = MEM32(edi); /* 0x161AAFF8: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AAFFA: mov ecx, dword ptr [ecx] */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x161AAFFC: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x161AAFFC: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AAFFF: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4CC) = ecx; /* 0x161AB001: mov dword ptr [esi + 0x4cc], ecx */
    ecx = MEM32(edi); /* 0x161AB007: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AB009: mov ecx, dword ptr [ecx] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x161AB00B: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x161AB00B: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AB00E: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4D0) = ecx; /* 0x161AB010: mov dword ptr [esi + 0x4d0], ecx */
    ecx = MEM32(edi); /* 0x161AB016: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x161AB018: mov ecx, dword ptr [ecx] */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x161AB01A: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x161AB01A: shr ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x161AB01D: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4D4) = ecx; /* 0x161AB01F: mov dword ptr [esi + 0x4d4], ecx */
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AB025: jmp 0x161aac50 */
L_161AB02A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x161AB02A: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AAC68; /* 0x161AB030: jmp 0x161aac68 */
L_161AB035:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x161AB035: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C8) = ebx; /* 0x161AB03B: mov dword ptr [esi + 0x4c8], ebx */
    RECOMP_BACKEDGE();
    goto L_161AAC38; /* 0x161AB041: jmp 0x161aac38 */
L_161AB046:
    eax = esi + 0x8; /* 0x161AB046: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x161AB049: push eax */
    ecx = edi; /* 0x161AB04A: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AB04C: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x161AB051: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AB053: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C4) = eax; /* 0x161AB055: mov dword ptr [esi + 0x4c4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x161AB05B: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x161AB05E: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x161AB060: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4C8) = eax; /* 0x161AB062: mov dword ptr [esi + 0x4c8], eax */
    RECOMP_BACKEDGE();
    goto L_161AAC4D; /* 0x161AB068: jmp 0x161aac4d */
L_161AB06D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7800u);
    ebx = ebx & 0x7800u; /* 0x161AB06D: and ebx, 0x7800 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x161AB073: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x161AB075: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x161AB075: shr eax, 0xb */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x161AB078: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x4C4) = (uint8_t)(LO8(eax)); /* 0x161AB07A: mov byte ptr [esi + 0x4c4], al */
    eax = ebx; /* 0x161AB080: mov eax, ebx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x161AB082: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x161AB082: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x161AB085: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x4C5) = (uint8_t)(LO8(eax)); /* 0x161AB087: mov byte ptr [esi + 0x4c5], al */
    eax = ebx; /* 0x161AB08D: mov eax, ebx */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x161AB08F: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x161AB08F: shr eax, 0xd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x161AB092: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (14u) _cf = (((ebx) >> 13) & 1u); /* 0x161AB094: shr ebx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((ebx >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 14u; /* 0x161AB094: shr ebx, 0xe */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x161AB097: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x4C7) = (uint8_t)(LO8(eax)); /* 0x161AB09A: mov byte ptr [esi + 0x4c7], al */
    MEM8(esi + 0x4C6) = (uint8_t)(LO8(ebx)); /* 0x161AB0A0: mov byte ptr [esi + 0x4c6], bl */
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AB0A6: jmp 0x161aac50 */
L_161AB0AB:
    /* cmp eax, 0xCEu */ /* 0x161AB0AB: cmp eax, 0xce */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AAC43; /* 0x161AB0B0: je 0x161aac43 */
L_161AB0B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AB0B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x488), ebx */ /* 0x161AB0B8: cmp dword ptr [esi + 0x488], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x488)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AAC50; /* 0x161AB0BE: jbe 0x161aac50 */
L_161AB0C4:
    eax = esi + 0x8; /* 0x161AB0C4: lea eax, [esi + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x161AB0C7: mov dword ptr [ebp + 8], eax */
L_161AB0CA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AB0CA: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x161AB0CD: mov ecx, edi */
    RECOMP_CALL(sub_161AA7A5); /* 0x161AB0CF: call 0x161aa7a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0xC0u; /* 0x161AB0D4: add dword ptr [ebp + 8], 0xc0 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x161AB0DB: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x488) */ /* 0x161AB0DC: cmp ebx, dword ptr [esi + 0x488] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x488));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB0CA; /* 0x161AB0E2: jb 0x161ab0ca */
L_161AB0E4:
    RECOMP_BACKEDGE();
    goto L_161AAC50; /* 0x161AB0E4: jmp 0x161aac50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x161AAC38u: goto L_161AAC38;
      case 0x161AAC43u: goto L_161AAC43;
      case 0x161AAC62u: goto L_161AAC62;
      case 0x161AAC6Eu: goto L_161AAC6E;
      case 0x161AACEAu: goto L_161AACEA;
      case 0x161AAD0Eu: goto L_161AAD0E;
      case 0x161AAD27u: goto L_161AAD27;
      case 0x161AAF9Bu: goto L_161AAF9B;
      case 0x161AAFC4u: goto L_161AAFC4;
      case 0x161AB02Au: goto L_161AB02A;
      case 0x161AB035u: goto L_161AB035;
      case 0x161AB046u: goto L_161AB046;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161AB148(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB148u);

L_161AB148:
    edi = edi; /* 0x161AB148: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB14A: push ebp */
    ebp = esp; /* 0x161AB14B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x188u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x188u; /* 0x161AB14D: sub esp, 0x188 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AB153: push ebx */
    PUSH32(esp, esi); /* 0x161AB154: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AB155: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x161AB158: mov eax, dword ptr [esi] */
    edx = MEM32(esi + 0x88); /* 0x161AB15A: mov edx, dword ptr [esi + 0x88] */
    PUSH32(esp, edi); /* 0x161AB160: push edi */
    edi = (uint32_t)LO8(eax); /* 0x161AB161: movzx edi, al */
    if (12u) _cf = (((edi) >> 20) & 1u); /* 0x161AB164: shl edi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((edi << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 12u; /* 0x161AB164: shl edi, 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x161AB167: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB169: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x161AB16B: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    edx = edx & 0x80000000u; /* 0x161AB16F: and edx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x161AB175: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(esi + 0x80); /* 0x161AB178: mov ecx, dword ptr [esi + 0x80] */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x161AB17E: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x161AB180: push 3 */
    ebx = ecx; /* 0x161AB182: mov ebx, ecx */
    edx = POP32_VAL(esp); /* 0x161AB184: pop edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x161AB185: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x161AB187: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x161AB189: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB273; /* 0x161AB18C: je 0x161ab273 */
L_161AB192:
    /* cmp eax, 5 */ /* 0x161AB192: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB273; /* 0x161AB195: je 0x161ab273 */
L_161AB19B:
    ebx = MEM32(esi + 0xBC); /* 0x161AB19B: mov ebx, dword ptr [esi + 0xbc] */
    eax = ebx; /* 0x161AB1A1: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x161AB1A3: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (20u) _cf = (((eax) >> 12) & 1u); /* 0x161AB1A5: shl eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax << 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 20u; /* 0x161AB1A5: shl eax, 0x14 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161AB1A8: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 2 */ /* 0x161AB1AA: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB22D; /* 0x161AB1AD: jne 0x161ab22d */
L_161AB1AF:
    eax = MEM32(esi + 0x84); /* 0x161AB1AF: mov eax, dword ptr [esi + 0x84] */
    ecx = eax; /* 0x161AB1B5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB1B7: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x161AB1B9: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x161AB1B9: shl ecx, 2 */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x161AB1BC: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x161AB1BE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB220; /* 0x161AB1C1: je 0x161ab220 */
L_161AB1C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AB1C3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB1EB; /* 0x161AB1C4: je 0x161ab1eb */
L_161AB1C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AB1C6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB1DE; /* 0x161AB1C7: je 0x161ab1de */
L_161AB1C9:
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x161AB1C9: mov dword ptr [ebp + 8], 0x80004005 */
    PUSH32(esp, 0x161B0170u); /* 0x161AB1D0: push 0x161b0170 */
    eax = ebp + 0x8; /* 0x161AB1D5: lea eax, [ebp + 8] */
L_161AB1D8:
    PUSH32(esp, eax); /* 0x161AB1D8: push eax */
    RECOMP_CALL(sub_161AE47E); /* 0x161AB1D9: call 0x161ae47e */
    RECOMP_FLAGS_IN();
L_161AB1DE:
    eax = MEM32(esi + 0x98); /* 0x161AB1DE: mov eax, dword ptr [esi + 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x161AB1E4: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB1E6:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x161AB1E6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x161AB1E6: shl eax, 4 */
    goto L_161AB22B; /* 0x161AB1E9: jmp 0x161ab22b */
L_161AB1EB:
    eax = (uint32_t)MEM8(esi + 0x97); /* 0x161AB1EB: movzx eax, byte ptr [esi + 0x97] */
    ecx = (uint32_t)MEM8(esi + 0x96); /* 0x161AB1F2: movzx ecx, byte ptr [esi + 0x96] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x161AB1F9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB1FB: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AB1FD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AB1FD: shl eax, 2 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AB200: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(esi + 0x95); /* 0x161AB202: movzx ecx, byte ptr [esi + 0x95] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB209: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AB20B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AB20B: shl eax, 2 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AB20E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(esi + 0x94); /* 0x161AB210: movzx ecx, byte ptr [esi + 0x94] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AB217: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AB217: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB21A: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AB21C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AB1E6; /* 0x161AB21E: jmp 0x161ab1e6 */
L_161AB220:
    eax = MEM32(esi + 0x94); /* 0x161AB220: mov eax, dword ptr [esi + 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    eax = eax & 0xF0u; /* 0x161AB226: and eax, 0xf0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB22B:
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161AB22B: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB22D:
    /* test ebx, ebx */ /* 0x161AB22D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB26A; /* 0x161AB22F: jbe 0x161ab26a */
L_161AB231:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x161AB231: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = 1; /* 0x161AB235: mov dword ptr [ebp - 8], 1 */
    /* test ebx, ebx */ /* 0x161AB23C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB26A; /* 0x161AB23E: jbe 0x161ab26a */
L_161AB240:
    eax = esi + 0xB0; /* 0x161AB240: lea eax, [esi + 0xb0] */
L_161AB246:
    ecx = MEM32(ebp + 0x8); /* 0x161AB246: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(eax); /* 0x161AB249: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB24B: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x161AB24D: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x161AB250: add ecx, 0x16 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x161AB253: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AB255: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x161AB255: shl ebx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x161AB257: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x161AB25A: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x161AB25C: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x161AB25F: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(esi + 0xBC) */ /* 0x161AB262: cmp ecx, dword ptr [esi + 0xbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB246; /* 0x161AB268: jb 0x161ab246 */
L_161AB26A:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB26A: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x161AB26D: push edi */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB26E: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
L_161AB273:
    /* cmp MEM32(esi + 0x88), 0 */ /* 0x161AB273: cmp dword ptr [esi + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB2A4; /* 0x161AB27A: je 0x161ab2a4 */
L_161AB27C:
    eax = MEM32(esi + 0x90); /* 0x161AB27C: mov eax, dword ptr [esi + 0x90] */
    edi = eax; /* 0x161AB282: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Fu);
    edi = edi & 0x3Fu; /* 0x161AB284: and edi, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x161AB287: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB29B; /* 0x161AB28A: jne 0x161ab29b */
L_161AB28C:
    eax = (uint32_t)MEM8(esi + 0x8C); /* 0x161AB28C: movzx eax, byte ptr [esi + 0x8c] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x161AB293: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x161AB293: shl eax, 6 */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x161AB296: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161AB299: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB29B:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB29B: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x161AB29E: push edi */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB29F: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
L_161AB2A4:
    eax = MEM32(esi); /* 0x161AB2A4: mov eax, dword ptr [esi] */
    /* cmp eax, 4 */ /* 0x161AB2A6: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB2B0; /* 0x161AB2A9: je 0x161ab2b0 */
L_161AB2AB:
    /* cmp eax, 5 */ /* 0x161AB2AB: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB2EE; /* 0x161AB2AE: jne 0x161ab2ee */
L_161AB2B0:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB2B0: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x161AB2B3: push edi */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB2B4: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x80); /* 0x161AB2B9: mov eax, dword ptr [esi + 0x80] */
    /* cmp eax, 2 */ /* 0x161AB2BF: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB2C9; /* 0x161AB2C2: jne 0x161ab2c9 */
L_161AB2C4:
    PUSH32(esp, 4); /* 0x161AB2C4: push 4 */
    eax = POP32_VAL(esp); /* 0x161AB2C6: pop eax */
    goto L_161AB2D2; /* 0x161AB2C7: jmp 0x161ab2d2 */
L_161AB2C9:
    /* cmp eax, 1 */ /* 0x161AB2C9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB1C9; /* 0x161AB2CC: jne 0x161ab1c9 */
L_161AB2D2:
    /* test eax, eax */ /* 0x161AB2D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB2EE; /* 0x161AB2D4: jbe 0x161ab2ee */
L_161AB2D6:
    edi = esi + 0xA0; /* 0x161AB2D6: lea edi, [esi + 0xa0] */
    ebx = eax; /* 0x161AB2DC: mov ebx, eax */
L_161AB2DE:
    PUSH32(esp, MEM32(edi)); /* 0x161AB2DE: push dword ptr [edi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB2E0: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB2E3: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x161AB2E8: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x161AB2EB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB2DE; /* 0x161AB2EC: jne 0x161ab2de */
L_161AB2EE:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x161AB2EE: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB390; /* 0x161AB2F2: je 0x161ab390 */
L_161AB2F8:
    ebx = MEM32(esi + 0xBC); /* 0x161AB2F8: mov ebx, dword ptr [esi + 0xbc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x161AB2FE: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x161AB302: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB390; /* 0x161AB304: jbe 0x161ab390 */
L_161AB30A:
    edi = esi + 0x18; /* 0x161AB30A: lea edi, [esi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xB0u; /* 0x161AB30D: add esi, 0xb0 */
    _flag_k = FK_ADD;
L_161AB313:
    eax = MEM32(esi); /* 0x161AB313: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x161AB315: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB377; /* 0x161AB318: je 0x161ab377 */
L_161AB31A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AB31A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB367; /* 0x161AB31B: je 0x161ab367 */
L_161AB31D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AB31D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB32E; /* 0x161AB31E: je 0x161ab32e */
L_161AB320:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161AB320: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB397; /* 0x161AB321: jne 0x161ab397 */
L_161AB323:
    PUSH32(esp, MEM32(edi + (-0x10))); /* 0x161AB323: push dword ptr [edi - 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB326: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB329: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
L_161AB32E:
    /* cmp MEM32(edi), 2 */ /* 0x161AB32E: cmp dword ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi + (-0x8)); /* 0x161AB331: mov eax, dword ptr [edi - 8] */
    PUSH32(esp, MEM32(edi + (-0x4))); /* 0x161AB334: push dword ptr [edi - 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB34D; /* 0x161AB337: jne 0x161ab34d */
L_161AB339:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x161AB339: push dword ptr [edi + 0x10] */
    ecx = ebp + (-0xC8); /* 0x161AB33C: lea ecx, [ebp - 0xc8] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x161AB342: push dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x161AB345: push eax */
    RECOMP_CALL(sub_161A9789); /* 0x161AB346: call 0x161a9789 */
    RECOMP_FLAGS_IN();
    goto L_161AB35C; /* 0x161AB34B: jmp 0x161ab35c */
L_161AB34D:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x161AB34D: push dword ptr [edi + 8] */
    ecx = ebp + (-0x188); /* 0x161AB350: lea ecx, [ebp - 0x188] */
    PUSH32(esp, eax); /* 0x161AB356: push eax */
    RECOMP_CALL(sub_161A9723); /* 0x161AB357: call 0x161a9723 */
    RECOMP_FLAGS_IN();
L_161AB35C:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB35C: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AB35F: push eax */
    RECOMP_CALL(sub_161AB148); /* 0x161AB360: call 0x161ab148 */
    RECOMP_FLAGS_IN();
    goto L_161AB382; /* 0x161AB365: jmp 0x161ab382 */
L_161AB367:
    PUSH32(esp, MEM32(edi + (-0x10))); /* 0x161AB367: push dword ptr [edi - 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB36A: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB36D: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + (-0xC))); /* 0x161AB372: push dword ptr [edi - 0xc] */
    goto L_161AB37A; /* 0x161AB375: jmp 0x161ab37a */
L_161AB377:
    PUSH32(esp, MEM32(edi + (-0x10))); /* 0x161AB377: push dword ptr [edi - 0x10] */
L_161AB37A:
    ecx = MEM32(ebp + (-0x4)); /* 0x161AB37A: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB37D: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
L_161AB382:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x161AB382: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x161AB385: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x28u; /* 0x161AB388: add edi, 0x28 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x161AB38B: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB313; /* 0x161AB38E: jb 0x161ab313 */
L_161AB390:
    edi = POP32_VAL(esp); /* 0x161AB390: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB391: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AB392: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AB393: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AB394: ret 4 */
L_161AB397:
    MEM32(ebp + (-0x8)) = 0x80004005u; /* 0x161AB397: mov dword ptr [ebp - 8], 0x80004005 */
    PUSH32(esp, 0x161B0170u); /* 0x161AB39E: push 0x161b0170 */
    eax = ebp + (-0x8); /* 0x161AB3A3: lea eax, [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_161AB1D8; /* 0x161AB3A6: jmp 0x161ab1d8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AB3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB3B0u);

L_161AB3B0:
    edi = edi; /* 0x161AB3B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB3B2: push ebp */
    ebp = esp; /* 0x161AB3B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AB3B5: push ecx */
    PUSH32(esp, ecx); /* 0x161AB3B6: push ecx */
    PUSH32(esp, ebx); /* 0x161AB3B7: push ebx */
    PUSH32(esp, esi); /* 0x161AB3B8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AB3B9: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x161AB3BC: mov ebx, ecx */
    ecx = MEM32(esi); /* 0x161AB3BE: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x161AB3C0: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x161AB3C1: mov dword ptr [ebp - 8], ebx */
    /* cmp ecx, 0x35u */ /* 0x161AB3C4: cmp ecx, 0x35 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB417; /* 0x161AB3C7: jne 0x161ab417 */
L_161AB3C9:
    PUSH32(esp, ecx); /* 0x161AB3C9: push ecx */
    ecx = ebx; /* 0x161AB3CA: mov ecx, ebx */
    RECOMP_CALL(sub_160B5D90); /* 0x161AB3CC: call 0x160b5d90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4C8); /* 0x161AB3D1: mov eax, dword ptr [esi + 0x4c8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x161AB3D7: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x161AB3D7: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB3DA: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB3DB: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x161AB3DC: push eax */
    ecx = ebx; /* 0x161AB3DD: mov ecx, ebx */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB3DF: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161AB3E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(esi + 0x4C8), 0xFFFFFFFCu */ /* 0x161AB3E6: test dword ptr [esi + 0x4c8], 0xfffffffc */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB410; /* 0x161AB3F0: jbe 0x161ab410 */
L_161AB3F2:
    eax = MEM32(esi + 0x4CC); /* 0x161AB3F2: mov eax, dword ptr [esi + 0x4cc] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x161AB3F8: push dword ptr [eax + edi*4] */
    ecx = ebx; /* 0x161AB3FB: mov ecx, ebx */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB3FD: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4C8); /* 0x161AB402: mov eax, dword ptr [esi + 0x4c8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AB408: inc edi */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x161AB409: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x161AB409: shr eax, 2 */
    /* cmp edi, eax */ /* 0x161AB40C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB3F2; /* 0x161AB40E: jb 0x161ab3f2 */
L_161AB410:
    ecx = ebx; /* 0x161AB410: mov ecx, ebx */
    goto L_161AB5D2; /* 0x161AB412: jmp 0x161ab5d2 */
L_161AB417:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AB417: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(esi + 0x48C) */ /* 0x161AB419: cmp eax, dword ptr [esi + 0x48c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x161AB41F: mov edx, ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB421: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFu);
    edx = edx & 0x7FFu; /* 0x161AB423: and edx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x161AB429: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x161AB42E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x1Fu */ /* 0x161AB430: cmp ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = 0x2000u; /* 0x161AB433: mov edx, 0x2000 */
    if (CMP_G(_flag_a, _flag_b)) goto L_161AB45D; /* 0x161AB438: jg 0x161ab45d */
L_161AB43A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB44F; /* 0x161AB43A: je 0x161ab44f */
L_161AB43C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x161AB43C: sub ecx, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB44F; /* 0x161AB43F: je 0x161ab44f */
L_161AB441:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB441: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB442: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB44F; /* 0x161AB443: je 0x161ab44f */
L_161AB445:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x161AB445: sub ecx, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB44F; /* 0x161AB448: je 0x161ab44f */
L_161AB44A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x161AB44A: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB4CC; /* 0x161AB44D: jne 0x161ab4cc */
L_161AB44F:
    ecx = MEM32(esi + 0x4C4); /* 0x161AB44F: mov ecx, dword ptr [esi + 0x4c4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x161AB455: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (18u) _cf = (((ecx) >> 14) & 1u); /* 0x161AB458: shl ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ecx << 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 18u; /* 0x161AB458: shl ecx, 0x12 */
    goto L_161AB4CA; /* 0x161AB45B: jmp 0x161ab4ca */
L_161AB45D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3Du; /* 0x161AB45D: sub ecx, 0x3d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB4BE; /* 0x161AB460: je 0x161ab4be */
L_161AB462:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB462: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB463: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB44F; /* 0x161AB464: je 0x161ab44f */
L_161AB466:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x161AB466: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB4BE; /* 0x161AB469: je 0x161ab4be */
L_161AB46B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x4Fu; /* 0x161AB46B: sub ecx, 0x4f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB4CC; /* 0x161AB46E: jne 0x161ab4cc */
L_161AB470:
    ecx = (uint32_t)MEM8(esi + 0x4C6); /* 0x161AB470: movzx ecx, byte ptr [esi + 0x4c6] */
    edi = (uint32_t)MEM8(esi + 0x4C7); /* 0x161AB477: movzx edi, byte ptr [esi + 0x4c7] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x161AB47E: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB480: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    ecx = ecx & 0x4000u; /* 0x161AB482: and ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x161AB488: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB48A: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x161AB48C: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x161AB48E: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (uint32_t)MEM8(esi + 0x4C5); /* 0x161AB490: movzx edi, byte ptr [esi + 0x4c5] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x161AB497: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB499: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1000u);
    edi = edi & 0x1000u; /* 0x161AB49B: and edi, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x161AB4A1: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (uint32_t)MEM8(esi + 0x4C4); /* 0x161AB4A3: movzx edi, byte ptr [esi + 0x4c4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x161AB4AA: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB4AC: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    edi = edi & 0x800u; /* 0x161AB4AE: and edi, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x161AB4B4: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7800u);
    ecx = ecx & 0x7800u; /* 0x161AB4B6: and ecx, 0x7800 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AB4CA; /* 0x161AB4BC: jmp 0x161ab4ca */
L_161AB4BE:
    ecx = MEM32(esi + 0x4C4); /* 0x161AB4BE: mov ecx, dword ptr [esi + 0x4c4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x161AB4C4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (11u) _cf = (((ecx) >> 21) & 1u); /* 0x161AB4C7: shl ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 11u; /* 0x161AB4C7: shl ecx, 0xb */
L_161AB4CA:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AB4CA: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB4CC:
    ecx = MEM32(esi + 0x4C0); /* 0x161AB4CC: mov ecx, dword ptr [esi + 0x4c0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x161AB4D2: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB4D4: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x161AB4D6: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi + 0x490); /* 0x161AB4D8: mov edx, dword ptr [esi + 0x490] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x161AB4DE: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (19u) _cf = (((edx) >> 13) & 1u); /* 0x161AB4E1: shl edx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((edx << 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 19u; /* 0x161AB4E1: shl edx, 0x13 */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x161AB4E4: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x161AB4E6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x161AB4E8: push ecx */
    ecx = ebx; /* 0x161AB4E9: mov ecx, ebx */
    RECOMP_CALL(sub_160B5D90); /* 0x161AB4EB: call 0x160b5d90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AB4F0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x494; /* 0x161AB4F4: lea ebx, [esi + 0x494] */
L_161AB4FA:
    eax = MEM32(esi + 0x48C); /* 0x161AB4FA: mov eax, dword ptr [esi + 0x48c] */
    /* cmp eax, 3 */ /* 0x161AB500: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB508; /* 0x161AB503: jb 0x161ab508 */
L_161AB505:
    PUSH32(esp, 3); /* 0x161AB505: push 3 */
    eax = POP32_VAL(esp); /* 0x161AB507: pop eax */
L_161AB508:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x161AB508: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB5AC; /* 0x161AB50B: jae 0x161ab5ac */
L_161AB511:
    ecx = MEM32(ebx); /* 0x161AB511: mov ecx, dword ptr [ebx] */
    eax = ecx; /* 0x161AB513: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x161AB515: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB518: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB557; /* 0x161AB519: je 0x161ab557 */
L_161AB51B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB51B: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_161AB549; /* 0x161AB51C: je 0x161ab549 */
L_161AB51E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AB51E: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB584; /* 0x161AB51F: jne 0x161ab584 */
L_161AB521:
    MEM32(ebp + 0x8) = 6; /* 0x161AB521: mov dword ptr [ebp + 8], 6 */
    edx = esi + 0x4A8; /* 0x161AB528: lea edx, [esi + 0x4a8] */
L_161AB52E:
    edi = MEM32(edx); /* 0x161AB52E: mov edi, dword ptr [edx] */
    ecx = MEM32(ebp + 0x8); /* 0x161AB530: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x161AB533: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x161AB537: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x161AB53A: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x161AB53A: shl edi, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x161AB53C: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x161AB53F: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0x16u */ /* 0x161AB541: cmp dword ptr [ebp + 8], 0x16 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB52E; /* 0x161AB545: jb 0x161ab52e */
L_161AB547:
    goto L_161AB584; /* 0x161AB547: jmp 0x161ab584 */
L_161AB549:
    ecx = MEM32(esi + 0x4A4); /* 0x161AB549: mov ecx, dword ptr [esi + 0x4a4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x161AB54F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x161AB552: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x161AB552: shl ecx, 6 */
    goto L_161AB582; /* 0x161AB555: jmp 0x161ab582 */
L_161AB557:
    ecx = (int32_t)(int8_t)MEM8(esi + 0x4A2); /* 0x161AB557: movsx ecx, byte ptr [esi + 0x4a2] */
    edx = (int32_t)(int8_t)MEM8(esi + 0x4A1); /* 0x161AB55E: movsx edx, byte ptr [esi + 0x4a1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x161AB565: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x161AB568: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x161AB568: shl ecx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x161AB56B: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x161AB56E: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (int32_t)(int8_t)MEM8(esi + 0x4A0); /* 0x161AB570: movsx edx, byte ptr [esi + 0x4a0] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x161AB577: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x161AB577: shl ecx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x161AB57A: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x161AB57D: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (9u) _cf = (((ecx) >> 23) & 1u); /* 0x161AB57F: shl ecx, 9 */
    if (9u) { _flag_a = recomp_flags_pack((ecx << 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 9u; /* 0x161AB57F: shl ecx, 9 */
L_161AB582:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x161AB582: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB584:
    edi = MEM32(ebp + (-0x4)); /* 0x161AB584: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AB587: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x48C) */ /* 0x161AB588: cmp edi, dword ptr [esi + 0x48c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x48C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161AB58E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    ecx = ecx & 0x80000000u; /* 0x161AB590: and ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x161AB596: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x161AB598: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x161AB599: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_160B5A30); /* 0x161AB59C: call 0x160b5a30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x161AB5A1: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x161AB5A4: add ebx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_161AB4FA; /* 0x161AB5A7: jmp 0x161ab4fa */
L_161AB5AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AB5AC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x488; /* 0x161AB5AE: lea edi, [esi + 0x488] */
    /* cmp MEM32(edi), ebx */ /* 0x161AB5B4: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AB5CF; /* 0x161AB5B6: jbe 0x161ab5cf */
L_161AB5B8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x161AB5B8: add esi, 8 */
    _flag_k = FK_ADD;
L_161AB5BB:
    ecx = MEM32(ebp + (-0x8)); /* 0x161AB5BB: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x161AB5BE: push esi */
    RECOMP_CALL(sub_161AB148); /* 0x161AB5BF: call 0x161ab148 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x161AB5C4: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xC0u; /* 0x161AB5C5: add esi, 0xc0 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi) */ /* 0x161AB5CB: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB5BB; /* 0x161AB5CD: jb 0x161ab5bb */
L_161AB5CF:
    ecx = MEM32(ebp + (-0x8)); /* 0x161AB5CF: mov ecx, dword ptr [ebp - 8] */
L_161AB5D2:
    RECOMP_CALL(sub_160B5CC0); /* 0x161AB5D2: call 0x160b5cc0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x161AB5D7: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB5D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AB5D9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AB5DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AB5DB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AB5E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB5E3u);

L_161AB5E3:
    edi = edi; /* 0x161AB5E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB5E5: push ebp */
    ebp = esp; /* 0x161AB5E6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161AB5E8: push esi */
    PUSH32(esp, edi); /* 0x161AB5E9: push edi */
    esi = 0x16001AD0u; /* 0x161AB5EA: mov esi, 0x16001ad0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161AB5EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AB5F1:
    eax = MEM32(esi + 0x8); /* 0x161AB5F1: mov eax, dword ptr [esi + 8] */
    ecx = eax; /* 0x161AB5F4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    ecx = ecx & MEM32(ebp + 0xC); /* 0x161AB5F6: and ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x161AB5F9: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB62F; /* 0x161AB5FC: jne 0x161ab62f */
L_161AB5FE:
    /* test MEM32(ebp + 0x10), eax */ /* 0x161AB5FE: test dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB62F; /* 0x161AB601: jne 0x161ab62f */
L_161AB603:
    eax = MEM32(esi); /* 0x161AB603: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x161AB605: mov ecx, dword ptr [ebp + 8] */
L_161AB608:
    SET_LO8(edx, MEM8(ecx)); /* 0x161AB608: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x161AB60A: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB626; /* 0x161AB60C: jne 0x161ab626 */
L_161AB60E:
    /* test LO8(edx), LO8(edx) */ /* 0x161AB60E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB622; /* 0x161AB610: je 0x161ab622 */
L_161AB612:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x161AB612: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x161AB615: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB626; /* 0x161AB618: jne 0x161ab626 */
L_161AB61A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x161AB61A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x161AB61B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB61C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB61D: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AB61E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB608; /* 0x161AB620: jne 0x161ab608 */
L_161AB622:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AB622: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AB62B; /* 0x161AB624: jmp 0x161ab62b */
L_161AB626:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AB626: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161AB628: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_161AB62B:
    /* test eax, eax */ /* 0x161AB62B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB648; /* 0x161AB62D: je 0x161ab648 */
L_161AB62F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x161AB62F: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x161AB632: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 0x33Cu */ /* 0x161AB635: cmp edi, 0x33c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x33Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB5F1; /* 0x161AB63B: jb 0x161ab5f1 */
L_161AB63D:
    eax = 0x80070057u; /* 0x161AB63D: mov eax, 0x80070057 */
L_161AB642:
    edi = POP32_VAL(esp); /* 0x161AB642: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB643: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AB644: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AB645: ret 0x10 */
L_161AB648:
    edi = MEM32(ebp + 0x14); /* 0x161AB648: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x161AB64B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB652; /* 0x161AB64D: je 0x161ab652 */
L_161AB64F:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB64F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB650: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB651: movsd dword ptr es:[edi], dword ptr [esi] */
L_161AB652:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AB652: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AB642; /* 0x161AB654: jmp 0x161ab642 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AB65B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB65Bu);

L_161AB65B:
    edi = edi; /* 0x161AB65B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB65D: push ebp */
    ebp = esp; /* 0x161AB65E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161AB660: push esi */
    eax = 0x16001E08u; /* 0x161AB661: mov eax, 0x16001e08 */
    edx = 0x16001E0Cu; /* 0x161AB666: mov edx, 0x16001e0c */
    PUSH32(esp, edi); /* 0x161AB66B: push edi */
L_161AB66C:
    ecx = MEM32(eax); /* 0x161AB66C: mov ecx, dword ptr [eax] */
    edi = ecx; /* 0x161AB66E: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    edi = edi & MEM32(ebp + 0x10); /* 0x161AB670: and edi, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax + (-0x8); /* 0x161AB673: lea esi, [eax - 8] */
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x161AB676: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB68B; /* 0x161AB679: jne 0x161ab68b */
L_161AB67B:
    /* test MEM32(ebp + 0x14), ecx */ /* 0x161AB67B: test dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB68B; /* 0x161AB67E: jne 0x161ab68b */
L_161AB680:
    ecx = MEM32(eax + (-0x4)); /* 0x161AB680: mov ecx, dword ptr [eax - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    ecx = ecx & MEM32(ebp + 0xC); /* 0x161AB683: and ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x161AB686: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB6A4; /* 0x161AB689: je 0x161ab6a4 */
L_161AB68B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xCu; /* 0x161AB68B: sub edx, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xCu; /* 0x161AB68E: sub eax, 0xc */
    _flag_k = FK_CMP;
    /* cmp edx, 0x16001AD0u */ /* 0x161AB691: cmp edx, 0x16001ad0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x16001AD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_161AB66C; /* 0x161AB697: ja 0x161ab66c */
L_161AB699:
    eax = 0x80070057u; /* 0x161AB699: mov eax, 0x80070057 */
L_161AB69E:
    edi = POP32_VAL(esp); /* 0x161AB69E: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB69F: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AB6A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x161AB6A1: ret 0x14 */
L_161AB6A4:
    edi = MEM32(ebp + 0x18); /* 0x161AB6A4: mov edi, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x161AB6A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB6AE; /* 0x161AB6A9: je 0x161ab6ae */
L_161AB6AB:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB6AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB6AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AB6AD: movsd dword ptr es:[edi], dword ptr [esi] */
L_161AB6AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AB6AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_161AB69E; /* 0x161AB6B0: jmp 0x161ab69e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161AB6B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB6B7u);

L_161AB6B7:
    eax = ecx; /* 0x161AB6B7: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AB6B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x161AB6BB: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x161AB6BD: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x161AB6C0: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x161AB6C3: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x161AB6C6: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x161AB6C9: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x161AB6CC: mov dword ptr [eax + 0x18], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AB6CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AB6D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB6D5u);

L_161AB6D5:
    edi = edi; /* 0x161AB6D5: mov edi, edi */
    PUSH32(esp, esi); /* 0x161AB6D7: push esi */
    esi = ecx; /* 0x161AB6D8: mov esi, ecx */
    eax = MEM32(esi + 0xC); /* 0x161AB6DA: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x161AB6DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB6F4; /* 0x161AB6DF: je 0x161ab6f4 */
L_161AB6E1:
    PUSH32(esp, eax); /* 0x161AB6E1: push eax */
    PUSH32(esp, 4); /* 0x161AB6E2: push 4 */
    RECOMP_CALL(sub_161AE266); /* 0x161AB6E4: call 0x161ae266 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x161AB6E9: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_161AE114); /* 0x161AB6EC: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB6F1: add esp, 0xc */
    _flag_k = FK_ADD;
L_161AB6F4:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161AB6F4: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_161AE114); /* 0x161AB6F7: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AB6FC: pop ecx */
    esi = POP32_VAL(esp); /* 0x161AB6FD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AB6FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AB704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB704u);

L_161AB704:
    edi = edi; /* 0x161AB704: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB706: push ebp */
    ebp = esp; /* 0x161AB707: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AB709: push ebx */
    PUSH32(esp, esi); /* 0x161AB70A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AB70B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x161AB70E: push edi */
    eax = esi; /* 0x161AB70F: mov eax, esi */
    edi = ecx; /* 0x161AB711: mov edi, ecx */
    ecx = eax + 0x1; /* 0x161AB713: lea ecx, [eax + 1] */
L_161AB716:
    SET_LO8(edx, MEM8(eax)); /* 0x161AB716: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB718: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AB719: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB716; /* 0x161AB71B: jne 0x161ab716 */
L_161AB71D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x161AB71D: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x161AB71F: mov ecx, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x161AB722: mov ebx, eax */
    /* cmp MEM8(ebp + 0x10), LO8(edx) */ /* 0x161AB724: cmp byte ptr [ebp + 0x10], dl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB736; /* 0x161AB727: jne 0x161ab736 */
L_161AB729:
    eax = ebx + ecx; /* 0x161AB729: lea eax, [ebx + ecx] */
    /* cmp eax, ebx */ /* 0x161AB72C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB7EE; /* 0x161AB72E: jb 0x161ab7ee */
L_161AB734:
    ebx = eax; /* 0x161AB734: mov ebx, eax */
L_161AB736:
    SET_LO8(eax, MEM8(esi)); /* 0x161AB736: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x161AB738: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB756; /* 0x161AB73A: je 0x161ab756 */
L_161AB73C:
    edx = ebx + ecx; /* 0x161AB73C: lea edx, [ebx + ecx] */
L_161AB73F:
    /* cmp LO8(eax), 0xAu */ /* 0x161AB73F: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB74F; /* 0x161AB741: jne 0x161ab74f */
L_161AB743:
    /* cmp edx, ebx */ /* 0x161AB743: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB7EE; /* 0x161AB745: jb 0x161ab7ee */
L_161AB74B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x161AB74B: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x161AB74D: add edx, ecx */
    _flag_k = FK_ADD;
L_161AB74F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AB74F: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x161AB750: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x161AB752: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB73F; /* 0x161AB754: jne 0x161ab73f */
L_161AB756:
    eax = MEM32(edi); /* 0x161AB756: mov eax, dword ptr [edi] */
    ecx = eax + ebx; /* 0x161AB758: lea ecx, [eax + ebx] */
    /* cmp ecx, eax */ /* 0x161AB75B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB7EE; /* 0x161AB75D: jb 0x161ab7ee */
L_161AB763:
    eax = MEM32(edi + 0x4); /* 0x161AB763: mov eax, dword ptr [edi + 4] */
    /* cmp eax, ecx */ /* 0x161AB766: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB7A0; /* 0x161AB768: jae 0x161ab7a0 */
L_161AB76A:
    eax = eax + ebx + 0x800; /* 0x161AB76A: lea eax, [eax + ebx + 0x800] */
    PUSH32(esp, eax); /* 0x161AB771: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AB772: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161AB777: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x161AB779: pop ecx */
    /* test esi, esi */ /* 0x161AB77A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB7EE; /* 0x161AB77C: je 0x161ab7ee */
L_161AB77E:
    PUSH32(esp, MEM32(edi)); /* 0x161AB77E: push dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x161AB780: push dword ptr [edi + 8] */
    PUSH32(esp, esi); /* 0x161AB783: push esi */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AB784: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x161AB789: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_161AE114); /* 0x161AB78C: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x800; /* 0x161AB791: lea eax, [ebx + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x161AB797: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + eax; /* 0x161AB79A: add dword ptr [edi + 4], eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = esi; /* 0x161AB79D: mov dword ptr [edi + 8], esi */
L_161AB7A0:
    esi = MEM32(edi + 0x8); /* 0x161AB7A0: mov esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi); /* 0x161AB7A3: add esi, dword ptr [edi] */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x161AB7A5: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB7BC; /* 0x161AB7A9: jne 0x161ab7bc */
L_161AB7AB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AB7AB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x20u); /* 0x161AB7AE: push 0x20 */
    PUSH32(esp, esi); /* 0x161AB7B0: push esi */
    RECOMP_CALL(sub_161AE3CC); /* 0x161AB7B1: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB7B6: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x161AB7B9: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
L_161AB7BC:
    eax = MEM32(ebp + 0x8); /* 0x161AB7BC: mov eax, dword ptr [ebp + 8] */
    goto L_161AB7E7; /* 0x161AB7BF: jmp 0x161ab7e7 */
L_161AB7C1:
    SET_LO8(ecx, MEM8(eax)); /* 0x161AB7C1: mov cl, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x161AB7C3: mov byte ptr [esi], cl */
    /* cmp MEM8(eax), 0xAu */ /* 0x161AB7C5: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB7E5; /* 0x161AB7C8: jne 0x161ab7e5 */
L_161AB7CA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AB7CA: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AB7CD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB7CE: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x20u); /* 0x161AB7CF: push 0x20 */
    PUSH32(esp, esi); /* 0x161AB7D1: push esi */
    MEM32(ebp + 0x10) = eax; /* 0x161AB7D2: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_161AE3CC); /* 0x161AB7D5: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x161AB7DA: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB7DD: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x161AB7E0: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    goto L_161AB7E7; /* 0x161AB7E3: jmp 0x161ab7e7 */
L_161AB7E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB7E5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AB7E6: inc esi */
    _flag_k = FK_INC;
L_161AB7E7:
    /* cmp MEM8(eax), 0 */ /* 0x161AB7E7: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB7C1; /* 0x161AB7EA: jne 0x161ab7c1 */
L_161AB7EC:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ebx; /* 0x161AB7EC: add dword ptr [edi], ebx */
    _flag_k = FK_ADD;
L_161AB7EE:
    edi = POP32_VAL(esp); /* 0x161AB7EE: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB7EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AB7F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AB7F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161AB7F2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161AB7FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB7FAu);

L_161AB7FA:
    edi = edi; /* 0x161AB7FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB7FC: push ebp */
    ebp = esp; /* 0x161AB7FD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161AB7FF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161AB802: push esi */
    esi = ecx; /* 0x161AB803: mov esi, ecx */
    PUSH32(esp, edi); /* 0x161AB805: push edi */
    ecx = eax + 0x1; /* 0x161AB806: lea ecx, [eax + 1] */
L_161AB809:
    SET_LO8(edx, MEM8(eax)); /* 0x161AB809: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AB80B: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AB80C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB809; /* 0x161AB80E: jne 0x161ab809 */
L_161AB810:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x161AB810: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = eax; /* 0x161AB812: mov edi, eax */
    eax = MEM32(esi); /* 0x161AB814: mov eax, dword ptr [esi] */
    ecx = eax + edi; /* 0x161AB816: lea ecx, [eax + edi] */
    /* cmp ecx, eax */ /* 0x161AB819: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB870; /* 0x161AB81B: jb 0x161ab870 */
L_161AB81D:
    eax = MEM32(esi + 0x4); /* 0x161AB81D: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x161AB820: push ebx */
    /* cmp eax, ecx */ /* 0x161AB821: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB85B; /* 0x161AB823: jae 0x161ab85b */
L_161AB825:
    eax = eax + edi + 0x800; /* 0x161AB825: lea eax, [eax + edi + 0x800] */
    PUSH32(esp, eax); /* 0x161AB82C: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AB82D: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x161AB832: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x161AB834: pop ecx */
    /* test ebx, ebx */ /* 0x161AB835: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB86F; /* 0x161AB837: je 0x161ab86f */
L_161AB839:
    PUSH32(esp, MEM32(esi)); /* 0x161AB839: push dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161AB83B: push dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x161AB83E: push ebx */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AB83F: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161AB844: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_161AE114); /* 0x161AB847: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x800; /* 0x161AB84C: lea eax, [edi + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x161AB852: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x161AB855: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = ebx; /* 0x161AB858: mov dword ptr [esi + 8], ebx */
L_161AB85B:
    eax = MEM32(esi + 0x8); /* 0x161AB85B: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x161AB85E: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x161AB860: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AB861: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AB864: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AB865: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB86A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + edi; /* 0x161AB86D: add dword ptr [esi], edi */
    _flag_k = FK_ADD;
L_161AB86F:
    ebx = POP32_VAL(esp); /* 0x161AB86F: pop ebx */
L_161AB870:
    edi = POP32_VAL(esp); /* 0x161AB870: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB871: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AB872: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AB873: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AB87B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB87Bu);

L_161AB87B:
    edi = edi; /* 0x161AB87B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB87D: push ebp */
    ebp = esp; /* 0x161AB87E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AB880: push ebx */
    PUSH32(esp, esi); /* 0x161AB881: push esi */
    esi = ecx; /* 0x161AB882: mov esi, ecx */
    eax = MEM32(esi); /* 0x161AB884: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x161AB886: push edi */
    edi = eax + (-0x1); /* 0x161AB887: lea edi, [eax - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AB88A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x161AB88C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB89D; /* 0x161AB88E: jbe 0x161ab89d */
L_161AB890:
    ecx = MEM32(esi + 0x8); /* 0x161AB890: mov ecx, dword ptr [esi + 8] */
L_161AB893:
    /* cmp MEM8(ecx + edi), 0xAu */ /* 0x161AB893: cmp byte ptr [ecx + edi], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx + edi)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB89D; /* 0x161AB897: je 0x161ab89d */
L_161AB899:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x161AB899: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x161AB89A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB893; /* 0x161AB89B: jne 0x161ab893 */
L_161AB89D:
    /* cmp edi, eax */ /* 0x161AB89D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB910; /* 0x161AB89F: jae 0x161ab910 */
L_161AB8A1:
    eax = MEM32(esi + 0x8); /* 0x161AB8A1: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 0x10u); /* 0x161AB8A4: push 0x10 */
    PUSH32(esp, MEM32(0x161B2048)); /* 0x161AB8A6: push dword ptr [0x161b2048] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161AB8AC: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AB8AE: push eax */
    RECOMP_CALL(sub_161AE1A4); /* 0x161AB8AF: call 0x161ae1a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB8B4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x161AB8B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB8EF; /* 0x161AB8B9: je 0x161ab8ef */
L_161AB8BB:
    eax = MEM32(esi + 0x8); /* 0x161AB8BB: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 7); /* 0x161AB8BE: push 7 */
    PUSH32(esp, MEM32(0x161B204C)); /* 0x161AB8C0: push dword ptr [0x161b204c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161AB8C6: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AB8C8: push eax */
    RECOMP_CALL(sub_161AE1A4); /* 0x161AB8C9: call 0x161ae1a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB8CE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x161AB8D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AB8EF; /* 0x161AB8D3: je 0x161ab8ef */
L_161AB8D5:
    eax = MEM32(esi + 0x8); /* 0x161AB8D5: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 4); /* 0x161AB8D8: push 4 */
    PUSH32(esp, MEM32(0x161B2050)); /* 0x161AB8DA: push dword ptr [0x161b2050] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161AB8E0: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AB8E2: push eax */
    RECOMP_CALL(sub_161AE1A4); /* 0x161AB8E3: call 0x161ae1a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AB8E8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x161AB8EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB90B; /* 0x161AB8ED: jne 0x161ab90b */
L_161AB8EF:
    ecx = MEM32(esi); /* 0x161AB8EF: mov ecx, dword ptr [esi] */
    eax = edi; /* 0x161AB8F1: mov eax, edi */
    /* cmp edi, ecx */ /* 0x161AB8F3: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB905; /* 0x161AB8F5: jae 0x161ab905 */
L_161AB8F7:
    edx = MEM32(esi + 0x8); /* 0x161AB8F7: mov edx, dword ptr [esi + 8] */
L_161AB8FA:
    /* cmp MEM8(edx + edi), 0x3Eu */ /* 0x161AB8FA: cmp byte ptr [edx + edi], 0x3e */
    _flag_a = (uint32_t)(MEM8(edx + edi)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AB905; /* 0x161AB8FE: je 0x161ab905 */
L_161AB900:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AB900: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ecx */ /* 0x161AB901: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB8FA; /* 0x161AB903: jb 0x161ab8fa */
L_161AB905:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x161AB905: sub eax, edi */
    _flag_k = FK_CMP;
    ebx = ebx + eax + (-0x1); /* 0x161AB907: lea ebx, [ebx + eax - 1] */
L_161AB90B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AB90B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x161AB90C: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AB8A1; /* 0x161AB90E: jb 0x161ab8a1 */
L_161AB910:
    eax = MEM32(ebp + 0x8); /* 0x161AB910: mov eax, dword ptr [ebp + 8] */
    /* cmp ebx, eax */ /* 0x161AB913: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AB92A; /* 0x161AB915: jae 0x161ab92a */
L_161AB917:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x161AB917: sub eax, ebx */
    _flag_k = FK_CMP;
    edi = eax; /* 0x161AB919: mov edi, eax */
L_161AB91B:
    PUSH32(esp, 0x1602ED70u); /* 0x161AB91B: push 0x1602ed70 */
    ecx = esi; /* 0x161AB920: mov ecx, esi */
    RECOMP_CALL(sub_161AB7FA); /* 0x161AB922: call 0x161ab7fa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x161AB927: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AB91B; /* 0x161AB928: jne 0x161ab91b */
L_161AB92A:
    edi = POP32_VAL(esp); /* 0x161AB92A: pop edi */
    esi = POP32_VAL(esp); /* 0x161AB92B: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AB92C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161AB92D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AB92E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AB936(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB936u);

L_161AB936:
    edi = edi; /* 0x161AB936: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB938: push ebp */
    ebp = esp; /* 0x161AB939: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AB93B: push ecx */
    PUSH32(esp, ebx); /* 0x161AB93C: push ebx */
    PUSH32(esp, edi); /* 0x161AB93D: push edi */
    PUSH32(esp, 0); /* 0x161AB93E: push 0 */
    PUSH32(esp, 4); /* 0x161AB940: push 4 */
    ebx = ecx; /* 0x161AB942: mov ebx, ecx */
    RECOMP_CALL(sub_161AE266); /* 0x161AB944: call 0x161ae266 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161AB949: mov edi, eax */
    /* cmp MEM8(edi), 0x43u */ /* 0x161AB94B: cmp byte ptr [edi], 0x43 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x161AB94E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AB94F: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB95C; /* 0x161AB950: jne 0x161ab95c */
L_161AB952:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x161AB952: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AB95C; /* 0x161AB956: jne 0x161ab95c */
L_161AB958:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AB958: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AB9B8; /* 0x161AB95A: jmp 0x161ab9b8 */
L_161AB95C:
    PUSH32(esp, esi); /* 0x161AB95C: push esi */
    eax = ebp + (-0x4); /* 0x161AB95D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AB960: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x161AB961: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x161AB966: push edi */
    RECOMP_CALL(sub_160C9E00); /* 0x161AB967: call 0x160c9e00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161AB96C: mov esi, eax */
    /* test esi, esi */ /* 0x161AB96E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AB999; /* 0x161AB970: jl 0x161ab999 */
L_161AB972:
    esi = MEM32(ebp + (-0x4)); /* 0x161AB972: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x161AB975: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x161AB976: push esi */
    RECOMP_CALL(sub_161AE108); /* 0x161AB977: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AB97C: pop ecx */
    MEM32(ebx + 0xC) = eax; /* 0x161AB97D: mov dword ptr [ebx + 0xc], eax */
    /* test eax, eax */ /* 0x161AB980: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AB98B; /* 0x161AB982: jne 0x161ab98b */
L_161AB984:
    esi = 0x8007000Eu; /* 0x161AB984: mov esi, 0x8007000e */
    goto L_161AB999; /* 0x161AB989: jmp 0x161ab999 */
L_161AB98B:
    PUSH32(esp, edi); /* 0x161AB98B: push edi */
    PUSH32(esp, esi); /* 0x161AB98C: push esi */
    PUSH32(esp, eax); /* 0x161AB98D: push eax */
    RECOMP_CALL(sub_16078370); /* 0x161AB98E: call 0x16078370 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161AB993: mov esi, eax */
    /* test esi, esi */ /* 0x161AB995: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AB9A7; /* 0x161AB997: jge 0x161ab9a7 */
L_161AB999:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x161AB999: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_161AE114); /* 0x161AB99C: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0; /* 0x161AB9A1: and dword ptr [ebx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AB9B4; /* 0x161AB9A5: jmp 0x161ab9b4 */
L_161AB9A7:
    PUSH32(esp, 0x16047FC0u); /* 0x161AB9A7: push 0x16047fc0 */
    PUSH32(esp, 4); /* 0x161AB9AC: push 4 */
    RECOMP_CALL(sub_161AE266); /* 0x161AB9AE: call 0x161ae266 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AB9B3: pop ecx */
L_161AB9B4:
    ecx = POP32_VAL(esp); /* 0x161AB9B4: pop ecx */
    eax = esi; /* 0x161AB9B5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x161AB9B7: pop esi */
L_161AB9B8:
    edi = POP32_VAL(esp); /* 0x161AB9B8: pop edi */
    ebx = POP32_VAL(esp); /* 0x161AB9B9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AB9BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AB9BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AB9C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AB9C1u);

L_161AB9C1:
    edi = edi; /* 0x161AB9C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AB9C3: push ebp */
    ebp = esp; /* 0x161AB9C4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x204u; /* 0x161AB9C6: sub esp, 0x204 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x161AB9CC: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x161AB9D1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x161AB9D3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x161AB9D6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AB9D7: mov esi, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x161AB9DA: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x161AB9DD: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AB9DE: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x204); /* 0x161AB9E1: lea eax, [ebp - 0x204] */
    PUSH32(esp, 0x200u); /* 0x161AB9E7: push 0x200 */
    PUSH32(esp, eax); /* 0x161AB9EC: push eax */
    RECOMP_CALL(sub_160712A0); /* 0x161AB9ED: call 0x160712a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AB9F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161ABA04; /* 0x161AB9F4: jl 0x161aba04 */
L_161AB9F6:
    eax = ebp + (-0x204); /* 0x161AB9F6: lea eax, [ebp - 0x204] */
    PUSH32(esp, eax); /* 0x161AB9FC: push eax */
    ecx = esi; /* 0x161AB9FD: mov ecx, esi */
    RECOMP_CALL(sub_161AB7FA); /* 0x161AB9FF: call 0x161ab7fa */
    RECOMP_FLAGS_IN();
L_161ABA04:
    ecx = MEM32(ebp + (-0x4)); /* 0x161ABA04: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x161ABA07: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161ABA09: pop esi */
    RECOMP_CALL(sub_161ADCF5); /* 0x161ABA0A: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161ABA0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABA10: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABA16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABA16u);

L_161ABA16:
    edi = edi; /* 0x161ABA16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABA18: push ebp */
    ebp = esp; /* 0x161ABA19: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161ABA1B: push esi */
    esi = ecx; /* 0x161ABA1C: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x161ABA1E: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABA3F; /* 0x161ABA22: je 0x161aba3f */
L_161ABA24:
    eax = MEM32(ebp + 0x8); /* 0x161ABA24: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x161B2054)); /* 0x161ABA27: push dword ptr [eax*4 + 0x161b2054] */
    PUSH32(esp, 0x16001E50u); /* 0x161ABA2E: push 0x16001e50 */
    PUSH32(esp, esi); /* 0x161ABA33: push esi */
    RECOMP_CALL(sub_161AB9C1); /* 0x161ABA34: call 0x161ab9c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161ABA39: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x161ABA3C: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
L_161ABA3F:
    esi = POP32_VAL(esp); /* 0x161ABA3F: pop esi */
    ebp = POP32_VAL(esp); /* 0x161ABA40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161ABA41: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161ABA49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABA49u);

L_161ABA49:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x161ABA49: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABA5F; /* 0x161ABA4D: je 0x161aba5f */
L_161ABA4F:
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x161ABA4F: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x16001E34u); /* 0x161ABA52: push 0x16001e34 */
    PUSH32(esp, ecx); /* 0x161ABA57: push ecx */
    RECOMP_CALL(sub_161AB9C1); /* 0x161ABA58: call 0x161ab9c1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161ABA5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161ABA5E: pop ecx */
L_161ABA5F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABA5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABA65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABA65u);

L_161ABA65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABA65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = 0x20u; /* 0x161ABA67: mov dword ptr [ecx + 4], 0x20 */
    MEM32(ecx + 0xC) = eax; /* 0x161ABA6E: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x161ABA71: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x8) = eax; /* 0x161ABA74: mov dword ptr [ecx + 8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABA77: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABA7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABA7Du);

L_161ABA7D:
    edi = edi; /* 0x161ABA7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABA7F: push ebp */
    ebp = esp; /* 0x161ABA80: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161ABA82: push ecx */
    PUSH32(esp, ebx); /* 0x161ABA83: push ebx */
    PUSH32(esp, esi); /* 0x161ABA84: push esi */
    esi = ecx; /* 0x161ABA85: mov esi, ecx */
    PUSH32(esp, edi); /* 0x161ABA87: push edi */
    edi = MEM32(esi + 0xC); /* 0x161ABA88: mov edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161ABA8B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161ABAAD; /* 0x161ABA8D: jmp 0x161abaad */
L_161ABA8F:
    eax = edi; /* 0x161ABA8F: mov eax, edi */
    edi = MEM32(edi + 0xC); /* 0x161ABA91: mov edi, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x161ABA94: mov dword ptr [ebp - 4], eax */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x161ABA97: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABAA4; /* 0x161ABA99: je 0x161abaa4 */
L_161ABA9B:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x161ABA9B: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_161AE114); /* 0x161ABA9E: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161ABAA3: pop ecx */
L_161ABAA4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ABAA4: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_161AE114); /* 0x161ABAA7: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161ABAAC: pop ecx */
L_161ABAAD:
    /* cmp edi, ebx */ /* 0x161ABAAD: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABA8F; /* 0x161ABAAF: jne 0x161aba8f */
L_161ABAB1:
    edi = POP32_VAL(esp); /* 0x161ABAB1: pop edi */
    MEM32(esi + 0xC) = ebx; /* 0x161ABAB2: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x161ABAB5: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x161ABAB8: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x161ABABB: mov dword ptr [esi + 8], ebx */
    esi = POP32_VAL(esp); /* 0x161ABABE: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ABABF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161ABAC0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABAC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABAC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABAC7u);

L_161ABAC7:
    edi = edi; /* 0x161ABAC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABAC9: push ebp */
    ebp = esp; /* 0x161ABACA: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161ABACC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x161ABACD: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x161ABAD0: push esi */
    esi = ecx; /* 0x161ABAD1: mov esi, ecx */
    /* test ebx, ebx */ /* 0x161ABAD3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABAE7; /* 0x161ABAD5: jbe 0x161abae7 */
L_161ABAD7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x161ABAD7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABAE7; /* 0x161ABADB: jne 0x161abae7 */
L_161ABADD:
    eax = 0x80004005u; /* 0x161ABADD: mov eax, 0x80004005 */
    goto L_161ABB90; /* 0x161ABAE2: jmp 0x161abb90 */
L_161ABAE7:
    PUSH32(esp, edi); /* 0x161ABAE7: push edi */
    PUSH32(esp, 0x10u); /* 0x161ABAE8: push 0x10 */
    RECOMP_CALL(sub_161AE108); /* 0x161ABAEA: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161ABAEF: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x161ABAF1: pop ecx */
    /* test edi, edi */ /* 0x161ABAF2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABB00; /* 0x161ABAF4: jne 0x161abb00 */
L_161ABAF6:
    eax = 0x8007000Eu; /* 0x161ABAF6: mov eax, 0x8007000e */
    goto L_161ABB8F; /* 0x161ABAFB: jmp 0x161abb8f */
L_161ABB00:
    eax = MEM32(esi + 0x4); /* 0x161ABB00: mov eax, dword ptr [esi + 4] */
    ecx = eax + ebx + 0xC; /* 0x161ABB03: lea ecx, [eax + ebx + 0xc] */
    MEM32(ebp + 0xC) = ecx; /* 0x161ABB07: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ecx, 0x80000000u */ /* 0x161ABB0A: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161ABB83; /* 0x161ABB10: ja 0x161abb83 */
L_161ABB12:
    /* cmp ecx, eax */ /* 0x161ABB12: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABB83; /* 0x161ABB14: jb 0x161abb83 */
L_161ABB16:
    eax = MEM32(ebp + 0x8); /* 0x161ABB16: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0; /* 0x161ABB19: and dword ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x161ABB1D: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x161ABB1F: mov dword ptr [edi + 4], ebx */
    /* test ebx, ebx */ /* 0x161ABB22: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABB2B; /* 0x161ABB24: jne 0x161abb2b */
L_161ABB26:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & ebx; /* 0x161ABB26: and dword ptr [edi + 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161ABB63; /* 0x161ABB29: jmp 0x161abb63 */
L_161ABB2B:
    /* cmp MEM8(esi), 0 */ /* 0x161ABB2B: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABB5D; /* 0x161ABB2E: je 0x161abb5d */
L_161ABB30:
    PUSH32(esp, ebx); /* 0x161ABB30: push ebx */
    RECOMP_CALL(sub_161AE108); /* 0x161ABB31: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161ABB36: pop ecx */
    MEM32(edi + 0x8) = eax; /* 0x161ABB37: mov dword ptr [edi + 8], eax */
    /* test eax, eax */ /* 0x161ABB3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABB4B; /* 0x161ABB3C: jne 0x161abb4b */
L_161ABB3E:
    PUSH32(esp, edi); /* 0x161ABB3E: push edi */
    RECOMP_CALL(sub_161AE114); /* 0x161ABB3F: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x161ABB44: mov eax, 0x8007000e */
    goto L_161ABB8E; /* 0x161ABB49: jmp 0x161abb8e */
L_161ABB4B:
    PUSH32(esp, ebx); /* 0x161ABB4B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ABB4C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x161ABB4F: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161ABB50: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x161ABB55: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161ABB58: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_161ABB63; /* 0x161ABB5B: jmp 0x161abb63 */
L_161ABB5D:
    eax = MEM32(ebp + 0x10); /* 0x161ABB5D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x8) = eax; /* 0x161ABB60: mov dword ptr [edi + 8], eax */
L_161ABB63:
    eax = MEM32(esi + 0x10); /* 0x161ABB63: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x161ABB66: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
    MEM32(esi + 0x4) = ecx; /* 0x161ABB69: mov dword ptr [esi + 4], ecx */
    /* test eax, eax */ /* 0x161ABB6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABB73; /* 0x161ABB6E: je 0x161abb73 */
L_161ABB70:
    MEM32(eax + 0xC) = edi; /* 0x161ABB70: mov dword ptr [eax + 0xc], edi */
L_161ABB73:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x161ABB73: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABB7C; /* 0x161ABB77: jne 0x161abb7c */
L_161ABB79:
    MEM32(esi + 0xC) = edi; /* 0x161ABB79: mov dword ptr [esi + 0xc], edi */
L_161ABB7C:
    MEM32(esi + 0x10) = edi; /* 0x161ABB7C: mov dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABB7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161ABB8F; /* 0x161ABB81: jmp 0x161abb8f */
L_161ABB83:
    PUSH32(esp, edi); /* 0x161ABB83: push edi */
    RECOMP_CALL(sub_161AE114); /* 0x161ABB84: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x161ABB89: mov eax, 0x80004005 */
L_161ABB8E:
    ecx = POP32_VAL(esp); /* 0x161ABB8E: pop ecx */
L_161ABB8F:
    edi = POP32_VAL(esp); /* 0x161ABB8F: pop edi */
L_161ABB90:
    esi = POP32_VAL(esp); /* 0x161ABB90: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ABB91: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161ABB92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161ABB93: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161ABB9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABB9Bu);

L_161ABB9B:
    edi = edi; /* 0x161ABB9B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABB9D: push ebp */
    ebp = esp; /* 0x161ABB9E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x161ABBA0: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x161ABBA3: push ebx */
    PUSH32(esp, edi); /* 0x161ABBA4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x161ABBA5: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x161ABBA8: mov ebx, ecx */
    /* test edi, edi */ /* 0x161ABBAA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABBBC; /* 0x161ABBAC: jne 0x161abbbc */
L_161ABBAE:
    /* test eax, eax */ /* 0x161ABBAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABBCA; /* 0x161ABBB0: je 0x161abbca */
L_161ABBB2:
    ecx = MEM32(ebx + 0x4); /* 0x161ABBB2: mov ecx, dword ptr [ebx + 4] */
    MEM32(eax) = ecx; /* 0x161ABBB5: mov dword ptr [eax], ecx */
    goto L_161ABC5E; /* 0x161ABBB7: jmp 0x161abc5e */
L_161ABBBC:
    /* test eax, eax */ /* 0x161ABBBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABBCA; /* 0x161ABBBE: je 0x161abbca */
L_161ABBC0:
    ecx = MEM32(eax); /* 0x161ABBC0: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(ebx + 0x4) */ /* 0x161ABBC2: cmp ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161ABBD4; /* 0x161ABBC5: jae 0x161abbd4 */
L_161ABBC7:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x161ABBC7: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABBCA:
    eax = 0x80004005u; /* 0x161ABBCA: mov eax, 0x80004005 */
    goto L_161ABC60; /* 0x161ABBCF: jmp 0x161abc60 */
L_161ABBD4:
    ecx = MEM32(ebx + 0x8); /* 0x161ABBD4: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x161ABBD7: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + ecx * 4 + 0x20; /* 0x161ABBDB: lea eax, [edi + ecx*4 + 0x20] */
    edx = eax + 0x8; /* 0x161ABBDF: lea edx, [eax + 8] */
    PUSH32(esp, esi); /* 0x161ABBE2: push esi */
    esi = MEM32(ebx + 0xC); /* 0x161ABBE3: mov esi, dword ptr [ebx + 0xc] */
    MEM32(ebp + 0x8) = edx; /* 0x161ABBE6: mov dword ptr [ebp + 8], edx */
    /* test ecx, ecx */ /* 0x161ABBE9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABC2D; /* 0x161ABBEB: jbe 0x161abc2d */
L_161ABBED:
    edx = MEM32(ebp + 0xC); /* 0x161ABBED: mov edx, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x161ABBF0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x161ABBF2: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(edi + edx * 4 + 0x20) = ecx; /* 0x161ABBF4: mov dword ptr [edi + edx*4 + 0x20], ecx */
    ecx = MEM32(esi); /* 0x161ABBF8: mov ecx, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x161ABBFA: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x4); /* 0x161ABBFC: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x161ABBFF: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x161ABC02: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x161ABC05: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ABC08: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AE3C0); /* 0x161ABC0B: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x161ABC10: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x161ABC13: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x161ABC16: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161ABC19: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x161ABC1C: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    ecx = eax + 0x8; /* 0x161ABC1F: lea ecx, [eax + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x161ABC22: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x161ABC25: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(ebx + 0x8) */ /* 0x161ABC28: cmp ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABBED; /* 0x161ABC2B: jb 0x161abbed */
L_161ABC2D:
    eax = MEM32(ebx + 0x8); /* 0x161ABC2D: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161ABC30: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = eax; /* 0x161ABC32: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebx + 0x4); /* 0x161ABC35: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x161ABC38: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = eax; /* 0x161ABC39: mov dword ptr [edi + 0x18], eax */
    eax = edi + 0x14; /* 0x161ABC3C: lea eax, [edi + 0x14] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x161ABC3F: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161ABC42: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x16) = (uint16_t)(LO16(ecx)); /* 0x161ABC44: mov word ptr [edi + 0x16], cx */
    ecx = edi + 0x4; /* 0x161ABC48: lea ecx, [edi + 4] */
    PUSH32(esp, ecx); /* 0x161ABC4B: push ecx */
    ecx = MEM32(edi + 0x18); /* 0x161ABC4C: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x14u; /* 0x161ABC4F: sub ecx, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x161ABC52: push ecx */
    PUSH32(esp, eax); /* 0x161ABC53: push eax */
    MEM32(edi) = 0x43425844u; /* 0x161ABC54: mov dword ptr [edi], 0x43425844 */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x161ABC5A: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x161ABC5D: pop esi */
L_161ABC5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABC5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABC60:
    edi = POP32_VAL(esp); /* 0x161ABC60: pop edi */
    ebx = POP32_VAL(esp); /* 0x161ABC61: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161ABC62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161ABC63: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161ABC6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABC6Bu);

L_161ABC6B:
    eax = ecx; /* 0x161ABC6B: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x161ABC6D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x161ABC70: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABC74: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABC7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABC7Au);

L_161ABC7A:
    edi = edi; /* 0x161ABC7A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABC7C: push ebp */
    ebp = esp; /* 0x161ABC7D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x161ABC7F: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x161ABC82: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x161ABC87: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x161ABC89: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x161ABC8C: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x161ABC8F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x161ABC90: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161ABC93: push esi */
    PUSH32(esp, edi); /* 0x161ABC94: push edi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x161ABC95: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x161ABC98: mov dword ptr [ebp - 0x20], eax */
    /* test ebx, ebx */ /* 0x161ABC9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABC9D: je 0x161abdd6 */
L_161ABCA3:
    /* cmp MEM32(ebp + 0xC), 0x20u */ /* 0x161ABCA3: cmp dword ptr [ebp + 0xc], 0x20 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCA7: jb 0x161abdd6 */
L_161ABCAD:
    eax = MEM32(ebx + 0x18); /* 0x161ABCAD: mov eax, dword ptr [ebx + 0x18] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x161ABCB0: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCB3: jne 0x161abdd6 */
L_161ABCB9:
    /* cmp MEM32(ebx), 0x43425844u */ /* 0x161ABCB9: cmp dword ptr [ebx], 0x43425844 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x43425844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCBF: jne 0x161abdd6 */
L_161ABCC5:
    /* cmp MEM16(ebx + 0x14), 1 */ /* 0x161ABCC5: cmp word ptr [ebx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM16(ebx + 0x14)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCCA: jne 0x161abdd6 */
L_161ABCD0:
    /* cmp MEM16(ebx + 0x16), 0 */ /* 0x161ABCD0: cmp word ptr [ebx + 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebx + 0x16)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCD5: jne 0x161abdd6 */
L_161ABCDB:
    ecx = MEM32(ebx + 0x1C); /* 0x161ABCDB: mov ecx, dword ptr [ebx + 0x1c] */
    eax = ecx; /* 0x161ABCDE: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161ABCE0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161ABCE0: shl eax, 2 */
    esi = eax + ebx; /* 0x161ABCE3: lea esi, [eax + ebx] */
    edx = ebx + 0x20; /* 0x161ABCE6: lea edx, [ebx + 0x20] */
    MEM32(ebp + (-0x28)) = edx; /* 0x161ABCE9: mov dword ptr [ebp - 0x28], edx */
    /* cmp esi, ebx */ /* 0x161ABCEC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCEE: jb 0x161abdd6 */
L_161ABCF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x161ABCF4: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = eax + edx + (-0x1); /* 0x161ABCF6: lea eax, [eax + edx - 1] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x161ABCFA: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABCFD: ja 0x161abdd6 */
L_161ABD03:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x161ABD03: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ABD07: mov dword ptr [ebp - 0x1c], eax */
    /* test ecx, ecx */ /* 0x161ABD0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABD66; /* 0x161ABD0C: jbe 0x161abd66 */
L_161ABD0E:
    eax = MEM32(ebp + (-0x18)); /* 0x161ABD0E: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(edx + eax * 4); /* 0x161ABD11: mov eax, dword ptr [edx + eax*4] */
    ecx = eax + ebx; /* 0x161ABD14: lea ecx, [eax + ebx] */
    /* cmp ecx, ebx */ /* 0x161ABD17: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD19: jb 0x161abdd6 */
L_161ABD1F:
    esi = MEM32(ebp + (-0x18)); /* 0x161ABD1F: mov esi, dword ptr [ebp - 0x18] */
    esi = MEM32(edx + esi * 4); /* 0x161ABD22: mov esi, dword ptr [edx + esi*4] */
    edi = esi + 0x8; /* 0x161ABD25: lea edi, [esi + 8] */
    /* cmp edi, esi */ /* 0x161ABD28: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD2A: jb 0x161abdd6 */
L_161ABD30:
    esi = MEM32(ebp + (-0x18)); /* 0x161ABD30: mov esi, dword ptr [ebp - 0x18] */
    esi = MEM32(edx + esi * 4); /* 0x161ABD33: mov esi, dword ptr [edx + esi*4] */
    ecx = MEM32(ecx + 0x4); /* 0x161ABD36: mov ecx, dword ptr [ecx + 4] */
    edi = ecx + esi + 0x8; /* 0x161ABD39: lea edi, [ecx + esi + 8] */
    /* cmp edi, esi */ /* 0x161ABD3D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD3F: jb 0x161abdd6 */
L_161ABD45:
    ecx = ecx + eax + 0x7; /* 0x161ABD45: lea ecx, [ecx + eax + 7] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x161ABD49: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD4C: ja 0x161abdd6 */
L_161ABD52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x161ABD52: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x1C)), eax */ /* 0x161ABD53: cmp dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD56: jne 0x161abdd6 */
L_161ABD58:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x161ABD58: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x18)); /* 0x161ABD5B: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x161ABD5E: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x161ABD61: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABD0E; /* 0x161ABD64: jb 0x161abd0e */
L_161ABD66:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x161ABD66: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABDCA; /* 0x161ABD6A: je 0x161abdca */
L_161ABD6C:
    eax = MEM32(ebx + 0x18); /* 0x161ABD6C: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x161ABD6F: add eax, -0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x14); /* 0x161ABD72: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x161ABD75: push ecx */
    PUSH32(esp, eax); /* 0x161ABD76: push eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ABD77: mov dword ptr [ebp - 0x1c], eax */
    eax = ebx + 0x14; /* 0x161ABD7A: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x161ABD7D: push eax */
    RECOMP_CALL(sub_161AC851); /* 0x161ABD7E: call 0x161ac851 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x161ABD83: push 0x10 */
    esi = ebx + 0x4; /* 0x161ABD85: lea esi, [ebx + 4] */
    ecx = POP32_VAL(esp); /* 0x161ABD88: pop ecx */
    edi = ebp + (-0x14); /* 0x161ABD89: lea edi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABD8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x161ABD8E: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_161ABD97; /* 0x161ABD90: je 0x161abd97 */
L_161ABD92:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161ABD92: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161ABD94: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_161ABD97:
    /* test eax, eax */ /* 0x161ABD97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABDC7; /* 0x161ABD99: je 0x161abdc7 */
L_161ABD9B:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x161ABD9B: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABD9F: je 0x161abdd6 */
L_161ABDA1:
    eax = ebp + (-0x14); /* 0x161ABDA1: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x161ABDA4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x161ABDA5: push dword ptr [ebp - 0x1c] */
    eax = ebx + 0x14; /* 0x161ABDA8: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x161ABDAB: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x20))); /* 0x161ABDAC: call dword ptr [ebp - 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x161ABDAF: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x161ABDB1: pop ecx */
    edi = ebp + (-0x14); /* 0x161ABDB2: lea edi, [ebp - 0x14] */
    esi = ebx + 0x4; /* 0x161ABDB5: lea esi, [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABDB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x161ABDBA: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_161ABDC3; /* 0x161ABDBC: je 0x161abdc3 */
L_161ABDBE:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161ABDBE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x161ABDC0: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_161ABDC3:
    /* test eax, eax */ /* 0x161ABDC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABDD6; /* 0x161ABDC5: jne 0x161abdd6 */
L_161ABDC7:
    edx = MEM32(ebp + (-0x28)); /* 0x161ABDC7: mov edx, dword ptr [ebp - 0x28] */
L_161ABDCA:
    eax = MEM32(ebp + (-0x24)); /* 0x161ABDCA: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax) = ebx; /* 0x161ABDCD: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = edx; /* 0x161ABDCF: mov dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABDD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161ABDDB; /* 0x161ABDD4: jmp 0x161abddb */
L_161ABDD6:
    eax = 0x80004005u; /* 0x161ABDD6: mov eax, 0x80004005 */
L_161ABDDB:
    ecx = MEM32(ebp + (-0x4)); /* 0x161ABDDB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x161ABDDE: pop edi */
    esi = POP32_VAL(esp); /* 0x161ABDDF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x161ABDE0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x161ABDE2: pop ebx */
    RECOMP_CALL(sub_161ADCF5); /* 0x161ABDE3: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161ABDE8: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161ABDE9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161ABDF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABDF1u);

L_161ABDF1:
    edi = edi; /* 0x161ABDF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABDF3: push ebp */
    ebp = esp; /* 0x161ABDF4: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x161ABDF6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161ABDFA: push esi */
    esi = ecx; /* 0x161ABDFB: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABE06; /* 0x161ABDFD: jne 0x161abe06 */
L_161ABDFF:
    eax = 0x80004005u; /* 0x161ABDFF: mov eax, 0x80004005 */
    goto L_161ABE1F; /* 0x161ABE04: jmp 0x161abe1f */
L_161ABE06:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ABE06: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ABE09: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ABE0C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AC091); /* 0x161ABE0F: call 0x161ac091 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x161ABE14: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ABE15: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x161ABE18: mov ecx, esi */
    RECOMP_CALL(sub_161ABC7A); /* 0x161ABE1A: call 0x161abc7a */
    RECOMP_FLAGS_IN();
L_161ABE1F:
    esi = POP32_VAL(esp); /* 0x161ABE1F: pop esi */
    ebp = POP32_VAL(esp); /* 0x161ABE20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161ABE21: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161ABE29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABE29u);

L_161ABE29:
    edi = edi; /* 0x161ABE29: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABE2B: push ebp */
    ebp = esp; /* 0x161ABE2C: mov ebp, esp */
    edx = MEM32(ecx); /* 0x161ABE2E: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x161ABE30: push esi */
    PUSH32(esp, edi); /* 0x161ABE31: push edi */
    /* test edx, edx */ /* 0x161ABE32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABE5C; /* 0x161ABE34: je 0x161abe5c */
L_161ABE36:
    ecx = MEM32(ecx + 0x4); /* 0x161ABE36: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x161ABE39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABE5C; /* 0x161ABE3B: je 0x161abe5c */
L_161ABE3D:
    eax = MEM32(ebp + 0xC); /* 0x161ABE3D: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(edx + 0x1C); /* 0x161ABE40: mov esi, dword ptr [edx + 0x1c] */
    /* cmp eax, esi */ /* 0x161ABE43: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161ABE5C; /* 0x161ABE45: jae 0x161abe5c */
L_161ABE47:
    ecx = ecx + eax * 4; /* 0x161ABE47: lea ecx, [ecx + eax*4] */
L_161ABE4A:
    edi = MEM32(ecx); /* 0x161ABE4A: mov edi, dword ptr [ecx] */
    edi = MEM32(edx + edi); /* 0x161ABE4C: mov edi, dword ptr [edx + edi] */
    /* cmp edi, MEM32(ebp + 0x8) */ /* 0x161ABE4F: cmp edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ABE5F; /* 0x161ABE52: je 0x161abe5f */
L_161ABE54:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161ABE54: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x161ABE55: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x161ABE58: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161ABE4A; /* 0x161ABE5A: jb 0x161abe4a */
L_161ABE5C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x161ABE5C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABE5F:
    edi = POP32_VAL(esp); /* 0x161ABE5F: pop edi */
    esi = POP32_VAL(esp); /* 0x161ABE60: pop esi */
    ebp = POP32_VAL(esp); /* 0x161ABE61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161ABE62: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161ABE6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABE6Au);

L_161ABE6A:
    eax = MEM32(ecx); /* 0x161ABE6A: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x161ABE6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABE74; /* 0x161ABE6E: je 0x161abe74 */
L_161ABE70:
    eax = MEM32(eax + 0x1C); /* 0x161ABE70: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABE73: ret  */
L_161ABE74:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABE74: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ABE76: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ABE7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABE7Cu);

L_161ABE7C:
    edi = edi; /* 0x161ABE7C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABE7E: push ebp */
    ebp = esp; /* 0x161ABE7F: mov ebp, esp */
    eax = MEM32(ecx); /* 0x161ABE81: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x161ABE83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABE9F; /* 0x161ABE85: je 0x161abe9f */
L_161ABE87:
    ecx = MEM32(ecx + 0x4); /* 0x161ABE87: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x161ABE8A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABE9F; /* 0x161ABE8C: je 0x161abe9f */
L_161ABE8E:
    edx = MEM32(ebp + 0x8); /* 0x161ABE8E: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x1C), edx */ /* 0x161ABE91: cmp dword ptr [eax + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161ABE9F; /* 0x161ABE94: jbe 0x161abe9f */
L_161ABE96:
    ecx = MEM32(ecx + edx * 4); /* 0x161ABE96: mov ecx, dword ptr [ecx + edx*4] */
    eax = ecx + eax + 0x8; /* 0x161ABE99: lea eax, [ecx + eax + 8] */
    goto L_161ABEA1; /* 0x161ABE9D: jmp 0x161abea1 */
L_161ABE9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABE9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABEA1:
    ebp = POP32_VAL(esp); /* 0x161ABEA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161ABEA2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161ABEAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABEAAu);

L_161ABEAA:
    edi = edi; /* 0x161ABEAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABEAC: push ebp */
    ebp = esp; /* 0x161ABEAD: mov ebp, esp */
    eax = MEM32(ecx); /* 0x161ABEAF: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x161ABEB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABECD; /* 0x161ABEB3: je 0x161abecd */
L_161ABEB5:
    ecx = MEM32(ecx + 0x4); /* 0x161ABEB5: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x161ABEB8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABECD; /* 0x161ABEBA: je 0x161abecd */
L_161ABEBC:
    edx = MEM32(ebp + 0x8); /* 0x161ABEBC: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x1C), edx */ /* 0x161ABEBF: cmp dword ptr [eax + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161ABECD; /* 0x161ABEC2: jbe 0x161abecd */
L_161ABEC4:
    ecx = MEM32(ecx + edx * 4); /* 0x161ABEC4: mov ecx, dword ptr [ecx + edx*4] */
    eax = MEM32(ecx + eax + 0x4); /* 0x161ABEC7: mov eax, dword ptr [ecx + eax + 4] */
    goto L_161ABECF; /* 0x161ABECB: jmp 0x161abecf */
L_161ABECD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABECD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABECF:
    ebp = POP32_VAL(esp); /* 0x161ABECF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161ABED0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161ABED8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABED8u);

L_161ABED8:
    edi = edi; /* 0x161ABED8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABEDA: push ebp */
    ebp = esp; /* 0x161ABEDB: mov ebp, esp */
    eax = MEM32(ecx); /* 0x161ABEDD: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x161ABEDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABEFA; /* 0x161ABEE1: je 0x161abefa */
L_161ABEE3:
    ecx = MEM32(ecx + 0x4); /* 0x161ABEE3: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x161ABEE6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ABEFA; /* 0x161ABEE8: je 0x161abefa */
L_161ABEEA:
    edx = MEM32(ebp + 0x8); /* 0x161ABEEA: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x1C), edx */ /* 0x161ABEED: cmp dword ptr [eax + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161ABEFA; /* 0x161ABEF0: jbe 0x161abefa */
L_161ABEF2:
    ecx = MEM32(ecx + edx * 4); /* 0x161ABEF2: mov ecx, dword ptr [ecx + edx*4] */
    eax = MEM32(eax + ecx); /* 0x161ABEF5: mov eax, dword ptr [eax + ecx] */
    goto L_161ABEFC; /* 0x161ABEF8: jmp 0x161abefc */
L_161ABEFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABEFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161ABEFC:
    ebp = POP32_VAL(esp); /* 0x161ABEFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161ABEFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161ABF05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABF05u);

L_161ABF05:
    edi = edi; /* 0x161ABF05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABF07: push ebp */
    ebp = esp; /* 0x161ABF08: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161ABF0A: push ecx */
    PUSH32(esp, edi); /* 0x161ABF0B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x161ABF0C: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x161ABF0F: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x161ABF12: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABF1D; /* 0x161ABF14: jne 0x161abf1d */
L_161ABF16:
    eax = 0x80004005u; /* 0x161ABF16: mov eax, 0x80004005 */
    goto L_161ABF63; /* 0x161ABF1B: jmp 0x161abf63 */
L_161ABF1D:
    PUSH32(esp, esi); /* 0x161ABF1D: push esi */
    PUSH32(esp, 0); /* 0x161ABF1E: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ABF20: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x161ABF23: mov ecx, edi */
    RECOMP_CALL(sub_161ABE29); /* 0x161ABF25: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x161ABF2A: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x161ABF2C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABF36; /* 0x161ABF2F: jne 0x161abf36 */
L_161ABF31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ABF31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161ABF33: inc eax */
    _flag_k = FK_INC;
    goto L_161ABF62; /* 0x161ABF34: jmp 0x161abf62 */
L_161ABF36:
    PUSH32(esp, ebx); /* 0x161ABF36: push ebx */
    PUSH32(esp, esi); /* 0x161ABF37: push esi */
    ecx = edi; /* 0x161ABF38: mov ecx, edi */
    RECOMP_CALL(sub_161ABE7C); /* 0x161ABF3A: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x161ABF3F: push esi */
    ecx = edi; /* 0x161ABF40: mov ecx, edi */
    ebx = eax; /* 0x161ABF42: mov ebx, eax */
    RECOMP_CALL(sub_161ABEAA); /* 0x161ABF44: call 0x161abeaa */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x161ABF49: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161ABF54; /* 0x161ABF4B: jne 0x161abf54 */
L_161ABF4D:
    eax = 0x80004005u; /* 0x161ABF4D: mov eax, 0x80004005 */
    goto L_161ABF61; /* 0x161ABF52: jmp 0x161abf61 */
L_161ABF54:
    ecx = MEM32(ebp + (-0x4)); /* 0x161ABF54: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x161ABF57: push ebx */
    PUSH32(esp, eax); /* 0x161ABF58: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ABF59: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_161ABAC7); /* 0x161ABF5C: call 0x161abac7 */
    RECOMP_FLAGS_IN();
L_161ABF61:
    ebx = POP32_VAL(esp); /* 0x161ABF61: pop ebx */
L_161ABF62:
    esi = POP32_VAL(esp); /* 0x161ABF62: pop esi */
L_161ABF63:
    edi = POP32_VAL(esp); /* 0x161ABF63: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161ABF64: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161ABF65: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161ABF6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABF6Du);

L_161ABF6D:
    edi = edi; /* 0x161ABF6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABF6F: push ebp */
    ebp = esp; /* 0x161ABF70: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161ABF72: push ecx */
    PUSH32(esp, ecx); /* 0x161ABF73: push ecx */
    ecx = ebp + (-0x8); /* 0x161ABF74: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161ABF77: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ABF7C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x161ABF7F: lea ecx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x161ABF82: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ABF84: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161ABF87: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161ABF8C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161ABF8D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161ABF95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ABF95u);

L_161ABF95:
    edi = edi; /* 0x161ABF95: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ABF97: push ebp */
    ebp = esp; /* 0x161ABF98: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161ABF9A: push ecx */
    PUSH32(esp, ecx); /* 0x161ABF9B: push ecx */
    PUSH32(esp, esi); /* 0x161ABF9C: push esi */
    ecx = ebp + (-0x8); /* 0x161ABF9D: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161ABFA0: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161ABFA5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161ABFA7: push esi */
    PUSH32(esp, esi); /* 0x161ABFA8: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ABFA9: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161ABFAC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161ABFAF: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x161ABFB4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_161ABFBF; /* 0x161ABFB6: jge 0x161abfbf */
L_161ABFB8:
    ecx = MEM32(ebp + 0xC); /* 0x161ABFB8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = esi; /* 0x161ABFBB: mov dword ptr [ecx], esi */
    goto L_161AC008; /* 0x161ABFBD: jmp 0x161ac008 */
L_161ABFBF:
    PUSH32(esp, esi); /* 0x161ABFBF: push esi */
    PUSH32(esp, 0x58454853u); /* 0x161ABFC0: push 0x58454853 */
    ecx = ebp + (-0x8); /* 0x161ABFC5: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161ABFC8: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161ABFCD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABFEC; /* 0x161ABFD0: jne 0x161abfec */
L_161ABFD2:
    PUSH32(esp, esi); /* 0x161ABFD2: push esi */
    PUSH32(esp, 0x52444853u); /* 0x161ABFD3: push 0x52444853 */
    ecx = ebp + (-0x8); /* 0x161ABFD8: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161ABFDB: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161ABFE0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ABFEC; /* 0x161ABFE3: jne 0x161abfec */
L_161ABFE5:
    eax = 0x80004005u; /* 0x161ABFE5: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_161ABFB8; /* 0x161ABFEA: jmp 0x161abfb8 */
L_161ABFEC:
    PUSH32(esp, eax); /* 0x161ABFEC: push eax */
    ecx = ebp + (-0x8); /* 0x161ABFED: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161ABFF0: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x161ABFF5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x161ABFF8: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x161ABFFA: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x161ABFFC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFBFFBu);
    eax = eax & 0x7FFFBFFBu; /* 0x161ABFFE: and eax, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80004005u; /* 0x161AC003: add eax, 0x80004005 */
    _flag_k = FK_ADD;
L_161AC008:
    esi = POP32_VAL(esp); /* 0x161AC008: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC009: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AC00A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AC012(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC012u);

L_161AC012:
    edi = edi; /* 0x161AC012: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC014: push ebp */
    ebp = esp; /* 0x161AC015: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC017: push ecx */
    PUSH32(esp, ecx); /* 0x161AC018: push ecx */
    PUSH32(esp, edi); /* 0x161AC019: push edi */
    ecx = ebp + (-0x8); /* 0x161AC01A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161AC01D: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AC022: push 0 */
    PUSH32(esp, 0); /* 0x161AC024: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC026: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161AC029: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161AC02C: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC031: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AC03D; /* 0x161AC033: jge 0x161ac03d */
L_161AC035:
    ecx = MEM32(ebp + 0x10); /* 0x161AC035: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x161AC038: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AC087; /* 0x161AC03B: jmp 0x161ac087 */
L_161AC03D:
    PUSH32(esp, 0); /* 0x161AC03D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161AC03F: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x161AC042: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC045: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x161AC04A: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x161AC04C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC058; /* 0x161AC04F: jne 0x161ac058 */
L_161AC051:
    eax = 0x80004005u; /* 0x161AC051: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_161AC035; /* 0x161AC056: jmp 0x161ac035 */
L_161AC058:
    PUSH32(esp, edi); /* 0x161AC058: push edi */
    ecx = ebp + (-0x8); /* 0x161AC059: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC05C: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x161AC061: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x161AC064: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x161AC066: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC071; /* 0x161AC068: jne 0x161ac071 */
L_161AC06A:
    eax = 0x80004005u; /* 0x161AC06A: mov eax, 0x80004005 */
    goto L_161AC087; /* 0x161AC06F: jmp 0x161ac087 */
L_161AC071:
    PUSH32(esp, esi); /* 0x161AC071: push esi */
    esi = MEM32(ebp + 0x14); /* 0x161AC072: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x161AC075: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC084; /* 0x161AC077: je 0x161ac084 */
L_161AC079:
    PUSH32(esp, edi); /* 0x161AC079: push edi */
    ecx = ebp + (-0x8); /* 0x161AC07A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABEAA); /* 0x161AC07D: call 0x161abeaa */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x161AC082: mov dword ptr [esi], eax */
L_161AC084:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC084: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161AC086: pop esi */
L_161AC087:
    edi = POP32_VAL(esp); /* 0x161AC087: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC088: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x161AC089: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_161AC091(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC091u);

L_161AC091:
    edi = edi; /* 0x161AC091: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC093: push ebp */
    ebp = esp; /* 0x161AC094: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161AC096: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x161AC099: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC0A0; /* 0x161AC09B: je 0x161ac0a0 */
L_161AC09D:
    eax = MEM32(eax + 0x18); /* 0x161AC09D: mov eax, dword ptr [eax + 0x18] */
L_161AC0A0:
    ebp = POP32_VAL(esp); /* 0x161AC0A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AC0A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AC0A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC0A9u);

L_161AC0A9:
    edi = edi; /* 0x161AC0A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC0AB: push ebp */
    ebp = esp; /* 0x161AC0AC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC0AE: push ecx */
    PUSH32(esp, ecx); /* 0x161AC0AF: push ecx */
    ecx = ebp + (-0x8); /* 0x161AC0B0: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161AC0B3: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AC0B8: push 0 */
    PUSH32(esp, 0); /* 0x161AC0BA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC0BC: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161AC0BF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161AC0C2: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC0C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AC102; /* 0x161AC0C9: jl 0x161ac102 */
L_161AC0CB:
    PUSH32(esp, 0); /* 0x161AC0CB: push 0 */
    PUSH32(esp, 0x30494653u); /* 0x161AC0CD: push 0x30494653 */
    ecx = ebp + (-0x8); /* 0x161AC0D2: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC0D5: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AC0DA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC0E6; /* 0x161AC0DD: jne 0x161ac0e6 */
L_161AC0DF:
    eax = 0x80004005u; /* 0x161AC0DF: mov eax, 0x80004005 */
    goto L_161AC102; /* 0x161AC0E4: jmp 0x161ac102 */
L_161AC0E6:
    PUSH32(esp, eax); /* 0x161AC0E6: push eax */
    ecx = ebp + (-0x8); /* 0x161AC0E7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC0EA: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC0EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC0DF; /* 0x161AC0F1: je 0x161ac0df */
L_161AC0F3:
    edx = MEM32(eax); /* 0x161AC0F3: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + 0xC); /* 0x161AC0F5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = edx; /* 0x161AC0F8: mov dword ptr [ecx], edx */
    eax = MEM32(eax + 0x4); /* 0x161AC0FA: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x161AC0FD: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC100: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC102:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC102: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AC103: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AC10B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC10Bu);

L_161AC10B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC10B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x161AC10D: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x161AC10F: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x161AC112: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = 1; /* 0x161AC115: mov dword ptr [ecx + 0xc], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AC11C: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AC122(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC122u);

L_161AC122:
    edi = edi; /* 0x161AC122: mov edi, edi */
    PUSH32(esp, esi); /* 0x161AC124: push esi */
    esi = ecx; /* 0x161AC125: mov esi, ecx */
    eax = MEM32(esi); /* 0x161AC127: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x161AC129: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC13D; /* 0x161AC12B: je 0x161ac13d */
L_161AC12D:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x161AC12D: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC13A; /* 0x161AC131: je 0x161ac13a */
L_161AC133:
    PUSH32(esp, eax); /* 0x161AC133: push eax */
    RECOMP_CALL(sub_161AE114); /* 0x161AC134: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC139: pop ecx */
L_161AC13A:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x161AC13A: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC13D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x161AC13D: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x161AC141: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = 1; /* 0x161AC145: mov dword ptr [esi + 0xc], 1 */
    esi = POP32_VAL(esp); /* 0x161AC14C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AC14D: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AC153(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC153u);

L_161AC153:
    edi = edi; /* 0x161AC153: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC155: push ebp */
    ebp = esp; /* 0x161AC156: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161AC158: push esi */
    esi = ecx; /* 0x161AC159: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x161AC15B: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC166; /* 0x161AC15F: je 0x161ac166 */
L_161AC161:
    RECOMP_CALL(sub_161AC122); /* 0x161AC161: call 0x161ac122 */
    RECOMP_FLAGS_IN();
L_161AC166:
    eax = MEM32(ebp + 0x8); /* 0x161AC166: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x161AC169: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC17F; /* 0x161AC16B: je 0x161ac17f */
L_161AC16D:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x161AC16D: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x161AC171: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x161AC173: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x161AC176: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x161AC179: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x161AC17C: mov dword ptr [esi + 8], eax */
L_161AC17F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC17F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x161AC181: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AC182: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161AC183: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161AC18B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC18Bu);

L_161AC18B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AC18B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x161AC18D: push 4 */
    MEM32(ecx + 0x4C) = edx; /* 0x161AC18F: mov dword ptr [ecx + 0x4c], edx */
    MEM32(ecx + 0x8) = edx; /* 0x161AC192: mov dword ptr [ecx + 8], edx */
    MEM32(ecx) = edx; /* 0x161AC195: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x50) = edx; /* 0x161AC197: mov dword ptr [ecx + 0x50], edx */
    eax = ecx + 0x14; /* 0x161AC19A: lea eax, [ecx + 0x14] */
    ecx = POP32_VAL(esp); /* 0x161AC19D: pop ecx */
L_161AC19E:
    MEM32(eax + (-0x8)) = edx; /* 0x161AC19E: mov dword ptr [eax - 8], edx */
    MEM32(eax + (-0x4)) = edx; /* 0x161AC1A1: mov dword ptr [eax - 4], edx */
    MEM32(eax) = edx; /* 0x161AC1A4: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = 1; /* 0x161AC1A6: mov dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x161AC1AD: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x161AC1B0: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AC19E; /* 0x161AC1B1: jne 0x161ac19e */
L_161AC1B3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AC1B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AC1B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC1B9u);

L_161AC1B9:
    edi = edi; /* 0x161AC1B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC1BB: push ebp */
    ebp = esp; /* 0x161AC1BC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC1BE: push ecx */
    PUSH32(esp, ebx); /* 0x161AC1BF: push ebx */
    PUSH32(esp, esi); /* 0x161AC1C0: push esi */
    esi = ecx; /* 0x161AC1C1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x161AC1C3: push edi */
    edi = esi + 0xC; /* 0x161AC1C4: lea edi, [esi + 0xc] */
    MEM32(ebp + (-0x4)) = 4; /* 0x161AC1C7: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AC1CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC1D0:
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x161AC1D0: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC1DC; /* 0x161AC1D3: je 0x161ac1dc */
L_161AC1D5:
    ecx = edi; /* 0x161AC1D5: mov ecx, edi */
    RECOMP_CALL(sub_161AC122); /* 0x161AC1D7: call 0x161ac122 */
    RECOMP_FLAGS_IN();
L_161AC1DC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x161AC1DC: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x161AC1DF: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AC1D0; /* 0x161AC1E2: jne 0x161ac1d0 */
L_161AC1E4:
    eax = MEM32(esi); /* 0x161AC1E4: mov eax, dword ptr [esi] */
    /* cmp eax, ebx */ /* 0x161AC1E6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC1F3; /* 0x161AC1E8: je 0x161ac1f3 */
L_161AC1EA:
    PUSH32(esp, eax); /* 0x161AC1EA: push eax */
    RECOMP_CALL(sub_161AE114); /* 0x161AC1EB: call 0x161ae114 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC1F0: pop ecx */
    MEM32(esi) = ebx; /* 0x161AC1F1: mov dword ptr [esi], ebx */
L_161AC1F3:
    edi = POP32_VAL(esp); /* 0x161AC1F3: pop edi */
    MEM32(esi + 0x4C) = ebx; /* 0x161AC1F4: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x161AC1F7: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x161AC1FA: mov dword ptr [esi + 8], ebx */
    esi = POP32_VAL(esp); /* 0x161AC1FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AC1FE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC1FF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AC200: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AC206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC206u);

L_161AC206:
    edi = edi; /* 0x161AC206: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC208: push ebp */
    ebp = esp; /* 0x161AC209: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x161AC20B: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x161AC20E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC216; /* 0x161AC210: je 0x161ac216 */
L_161AC212:
    edx = MEM32(ecx); /* 0x161AC212: mov edx, dword ptr [ecx] */
    MEM32(eax) = edx; /* 0x161AC214: mov dword ptr [eax], edx */
L_161AC216:
    eax = MEM32(ecx + 0x8); /* 0x161AC216: mov eax, dword ptr [ecx + 8] */
    ebp = POP32_VAL(esp); /* 0x161AC219: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AC21A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AC222(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC222u);

L_161AC222:
    edi = edi; /* 0x161AC222: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC224: push ebp */
    ebp = esp; /* 0x161AC225: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x161AC227: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AC22A: push ebx */
    PUSH32(esp, esi); /* 0x161AC22B: push esi */
    esi = ecx; /* 0x161AC22C: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x161AC22E: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC239; /* 0x161AC232: je 0x161ac239 */
L_161AC234:
    RECOMP_CALL(sub_161AC122); /* 0x161AC234: call 0x161ac122 */
    RECOMP_FLAGS_IN();
L_161AC239:
    ebx = MEM32(ebp + 0x8); /* 0x161AC239: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x161AC23C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC24A; /* 0x161AC23E: jne 0x161ac24a */
L_161AC240:
    eax = 0x80004005u; /* 0x161AC240: mov eax, 0x80004005 */
    goto L_161AC3FA; /* 0x161AC245: jmp 0x161ac3fa */
L_161AC24A:
    PUSH32(esp, edi); /* 0x161AC24A: push edi */
    edi = MEM32(ebx); /* 0x161AC24B: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161AC24D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x161AC24F: mov dword ptr [ebp - 0x18], edi */
    /* cmp edi, edx */ /* 0x161AC252: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC25E; /* 0x161AC254: jne 0x161ac25e */
L_161AC256:
    MEM32(esi + 0x8) = edx; /* 0x161AC256: mov dword ptr [esi + 8], edx */
    goto L_161AC3F7; /* 0x161AC259: jmp 0x161ac3f7 */
L_161AC25E:
    eax = MEM32(ebx + 0x4); /* 0x161AC25E: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x161AC261: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x161AC263: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x161AC266: mov dword ptr [ebp - 8], edx */
    /* cmp edi, edx */ /* 0x161AC269: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AC2AB; /* 0x161AC26B: jbe 0x161ac2ab */
L_161AC26D:
    ecx = eax + 0x10; /* 0x161AC26D: lea ecx, [eax + 0x10] */
    goto L_161AC275; /* 0x161AC270: jmp 0x161ac275 */
L_161AC272:
    ebx = MEM32(ebp + 0x8); /* 0x161AC272: mov ebx, dword ptr [ebp + 8] */
L_161AC275:
    eax = MEM32(ecx + (-0x10)); /* 0x161AC275: mov eax, dword ptr [ecx - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x161AC278: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = eax + 0x1; /* 0x161AC27A: lea ebx, [eax + 1] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x161AC27D: mov dword ptr [ebp - 0x14], ebx */
L_161AC280:
    SET_LO8(ebx, MEM8(eax)); /* 0x161AC280: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC282: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x161AC283: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC280; /* 0x161AC285: jne 0x161ac280 */
L_161AC287:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x161AC287: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x161AC28A: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = edx + eax + 0x1; /* 0x161AC28E: lea edx, [edx + eax + 1] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AC29B; /* 0x161AC292: jbe 0x161ac29b */
L_161AC294:
    eax = MEM32(ebp + (-0x10)); /* 0x161AC294: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ecx) */ /* 0x161AC297: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AC2CC; /* 0x161AC299: ja 0x161ac2cc */
L_161AC29B:
    eax = MEM32(ecx); /* 0x161AC29B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x161AC29D: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x161AC2A0: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x161AC2A3: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x161AC2A6: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC272; /* 0x161AC2A9: jb 0x161ac272 */
L_161AC2AB:
    ebx = edi; /* 0x161AC2AB: mov ebx, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1Cu); /* 0x161AC2AD: imul ebx, ebx, 0x1c */
    eax = ebx + edi * 4; /* 0x161AC2B0: lea eax, [ebx + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x161AC2B3: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AC2B5: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AC2B6: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC2BB: pop ecx */
    MEM32(esi) = eax; /* 0x161AC2BC: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x161AC2BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC2D6; /* 0x161AC2C0: jne 0x161ac2d6 */
L_161AC2C2:
    eax = 0x8007000Eu; /* 0x161AC2C2: mov eax, 0x8007000e */
    goto L_161AC3F9; /* 0x161AC2C7: jmp 0x161ac3f9 */
L_161AC2CC:
    eax = 0x80004005u; /* 0x161AC2CC: mov eax, 0x80004005 */
    goto L_161AC3F9; /* 0x161AC2D1: jmp 0x161ac3f9 */
L_161AC2D6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x161AC2D6: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x161AC2DA: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x161AC2DC: mov dword ptr [esi + 4], eax */
    eax = eax + edi * 4; /* 0x161AC2DF: lea eax, [eax + edi*4] */
    MEM32(esi + 0xC) = 1; /* 0x161AC2E2: mov dword ptr [esi + 0xc], 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x161AC2E9: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x161AC2EC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC3F4; /* 0x161AC2EE: jbe 0x161ac3f4 */
L_161AC2F4:
    edi = MEM32(ebp + (-0xC)); /* 0x161AC2F4: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AC2F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x161AC2F9: add edi, 0x14 */
    _flag_k = FK_ADD;
L_161AC2FC:
    eax = MEM32(esi); /* 0x161AC2FC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + eax)); _flag_b = (uint32_t)(0);
    MEM32(ebx + eax) = MEM32(ebx + eax) & 0; /* 0x161AC2FE: and dword ptr [ebx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edi + (-0x8))); /* 0x161AC302: push dword ptr [edi - 8] */
    RECOMP_CALL(sub_16094060); /* 0x161AC305: call 0x16094060 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x161AC30A: mov ecx, dword ptr [esi] */
    MEM32(ebx + ecx + 0x10) = eax; /* 0x161AC30C: mov dword ptr [ebx + ecx + 0x10], eax */
    eax = MEM32(esi); /* 0x161AC310: mov eax, dword ptr [esi] */
    SET_LO8(ecx, MEM8(edi)); /* 0x161AC312: mov cl, byte ptr [edi] */
    MEM8(ebx + eax + 0x18) = (uint8_t)(LO8(ecx)); /* 0x161AC314: mov byte ptr [ebx + eax + 0x18], cl */
    eax = MEM32(esi); /* 0x161AC318: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + (-0x4)); /* 0x161AC31A: mov ecx, dword ptr [edi - 4] */
    MEM32(ebx + eax + 0x14) = ecx; /* 0x161AC31D: mov dword ptr [ebx + eax + 0x14], ecx */
    eax = MEM32(esi); /* 0x161AC321: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + (-0x10)); /* 0x161AC323: mov ecx, dword ptr [edi - 0x10] */
    MEM32(ebx + eax + 0x8) = ecx; /* 0x161AC326: mov dword ptr [ebx + eax + 8], ecx */
    PUSH32(esp, MEM32(edi + (-0x10))); /* 0x161AC32A: push dword ptr [edi - 0x10] */
    PUSH32(esp, MEM32(edi + (-0xC))); /* 0x161AC32D: push dword ptr [edi - 0xc] */
    RECOMP_CALL(sub_160940B0); /* 0x161AC330: call 0x160940b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x161AC335: mov ecx, dword ptr [esi] */
    MEM32(ebx + ecx + 0xC) = eax; /* 0x161AC337: mov dword ptr [ebx + ecx + 0xc], eax */
    eax = MEM32(esi); /* 0x161AC33B: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AC33D: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebx + eax + 0x4) = ecx; /* 0x161AC340: mov dword ptr [ebx + eax + 4], ecx */
    ecx = MEM32(edi + (-0x10)); /* 0x161AC344: mov ecx, dword ptr [edi - 0x10] */
    eax = MEM32(esi); /* 0x161AC347: mov eax, dword ptr [esi] */
    MEM32(ebx + eax + 0x8) = ecx; /* 0x161AC349: mov dword ptr [ebx + eax + 8], ecx */
    eax = MEM32(esi); /* 0x161AC34D: mov eax, dword ptr [esi] */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x161AC34F: mov cl, byte ptr [edi + 1] */
    MEM8(ebx + eax + 0x19) = (uint8_t)(LO8(ecx)); /* 0x161AC352: mov byte ptr [ebx + eax + 0x19], cl */
    ecx = MEM32(edi + (-0x14)); /* 0x161AC356: mov ecx, dword ptr [edi - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x161AC359: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x161AC35C: mov eax, ecx */
    edx = eax + 0x1; /* 0x161AC35E: lea edx, [eax + 1] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x161AC361: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x161AC364: mov dword ptr [ebp - 0x14], edx */
L_161AC367:
    SET_LO8(edx, MEM8(eax)); /* 0x161AC367: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC369: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AC36A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC367; /* 0x161AC36C: jne 0x161ac367 */
L_161AC36E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x161AC36E: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC371: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x161AC372: push eax */
    PUSH32(esp, ecx); /* 0x161AC373: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AC374: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x161AC377: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC37A: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x161AC37F: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x161AC382: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x161AC385: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AC389: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x161AC38C: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AC3D6; /* 0x161AC390: jbe 0x161ac3d6 */
L_161AC392:
    eax = MEM32(ebp + (-0xC)); /* 0x161AC392: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AC395: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x10)); /* 0x161AC398: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x161AC39B: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x161AC39D: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x161AC3A0: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x161AC3A3: mov dword ptr [ebp - 0x14], edx */
    goto L_161AC3AE; /* 0x161AC3A6: jmp 0x161ac3ae */
L_161AC3A8:
    eax = MEM32(ebp + (-0xC)); /* 0x161AC3A8: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x161AC3AB: mov ecx, dword ptr [ebp - 0x1c] */
L_161AC3AE:
    SET_LO8(edx, MEM8(eax)); /* 0x161AC3AE: mov dl, byte ptr [eax] */
    MEM8(ecx + eax) = (uint8_t)(LO8(edx)); /* 0x161AC3B0: mov byte ptr [ecx + eax], dl */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x161AC3B3: movsx eax, byte ptr [eax] */
    ecx = MEM32(esi + 0x4); /* 0x161AC3B6: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x161AC3B9: mov edx, dword ptr [ebp - 8] */
    ecx = ecx + edx * 4; /* 0x161AC3BC: lea ecx, [ecx + edx*4] */
    PUSH32(esp, eax); /* 0x161AC3BF: push eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x161AC3C0: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_CALL(sub_161AE12C); /* 0x161AC3C3: call 0x161ae12c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC3C8: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x161AC3C9: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x161AC3CC: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x161AC3CE: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x161AC3D1: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AC3A8; /* 0x161AC3D4: jne 0x161ac3a8 */
L_161AC3D6:
    eax = MEM32(ebp + (-0x10)); /* 0x161AC3D6: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x161AC3D9: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x161AC3DC: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x161AC3DF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x1Cu; /* 0x161AC3E2: add ebx, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x161AC3E5: add edi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x161AC3E8: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC2FC; /* 0x161AC3EB: jb 0x161ac2fc */
L_161AC3F1:
    edi = MEM32(ebp + (-0x18)); /* 0x161AC3F1: mov edi, dword ptr [ebp - 0x18] */
L_161AC3F4:
    MEM32(esi + 0x8) = edi; /* 0x161AC3F4: mov dword ptr [esi + 8], edi */
L_161AC3F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC3F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC3F9:
    edi = POP32_VAL(esp); /* 0x161AC3F9: pop edi */
L_161AC3FA:
    esi = POP32_VAL(esp); /* 0x161AC3FA: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AC3FB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC3FC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AC3FD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AC405(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC405u);

L_161AC405:
    edi = edi; /* 0x161AC405: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC407: push ebp */
    ebp = esp; /* 0x161AC408: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x161AC40A: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x161AC40D: push esi */
    esi = ecx; /* 0x161AC40E: mov esi, ecx */
    RECOMP_CALL(sub_161AC1B9); /* 0x161AC410: call 0x161ac1b9 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x161AC415: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AC418: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x161AC41A: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC428; /* 0x161AC41C: jne 0x161ac428 */
L_161AC41E:
    eax = 0x80004005u; /* 0x161AC41E: mov eax, 0x80004005 */
    goto L_161AC643; /* 0x161AC423: jmp 0x161ac643 */
L_161AC428:
    eax = MEM32(edx); /* 0x161AC428: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x161AC42A: mov dword ptr [ebp - 8], eax */
    /* cmp eax, ecx */ /* 0x161AC42D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC43B; /* 0x161AC42F: jne 0x161ac43b */
L_161AC431:
    MEM32(esi + 0x8) = ecx; /* 0x161AC431: mov dword ptr [esi + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC434: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AC643; /* 0x161AC436: jmp 0x161ac643 */
L_161AC43B:
    PUSH32(esp, ebx); /* 0x161AC43B: push ebx */
    ebx = MEM32(edx + 0x4); /* 0x161AC43C: mov ebx, dword ptr [edx + 4] */
    PUSH32(esp, edi); /* 0x161AC43F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC440: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ecx; /* 0x161AC442: mov dword ptr [ebp - 0x30], ecx */
    edi = ebp + (-0x2C); /* 0x161AC445: lea edi, [ebp - 0x2c] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AC448: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AC449: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x161AC44A: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x161AC44B: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC44D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x161AC44F: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x161AC452: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x161AC455: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161AC458: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AC45F; /* 0x161AC45A: jmp 0x161ac45f */
L_161AC45C:
    eax = MEM32(ebp + (-0x4)); /* 0x161AC45C: mov eax, dword ptr [ebp - 4] */
L_161AC45F:
    MEM32(ebp + (-0x14)) = eax; /* 0x161AC45F: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x161AC462: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_161AC4BF; /* 0x161AC465: jae 0x161ac4bf */
L_161AC467:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x161AC467: imul eax, eax, 0x1c */
    ecx = eax + ebx + 0x14; /* 0x161AC46A: lea ecx, [eax + ebx + 0x14] */
L_161AC46E:
    /* cmp MEM32(ecx + (-0x14)), edi */ /* 0x161AC46E: cmp dword ptr [ecx - 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x14))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC4BF; /* 0x161AC471: jne 0x161ac4bf */
L_161AC473:
    eax = MEM32(ecx + (-0x10)); /* 0x161AC473: mov eax, dword ptr [ecx - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + edi * 4 + (-0x30)) = MEM32(ebp + edi * 4 + (-0x30)) + 1; /* 0x161AC476: inc dword ptr [ebp + edi*4 - 0x30] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x161AC47A: add eax, edx */
    _flag_k = FK_ADD;
    ebx = eax + 0x1; /* 0x161AC47C: lea ebx, [eax + 1] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x161AC47F: mov dword ptr [ebp - 0x18], ebx */
L_161AC482:
    SET_LO8(ebx, MEM8(eax)); /* 0x161AC482: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC484: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x161AC485: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC482; /* 0x161AC487: jne 0x161ac482 */
L_161AC489:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x161AC489: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x161AC48C: mov ebx, dword ptr [ebp - 0xc] */
    eax = ebx + eax + 0x1; /* 0x161AC48F: lea eax, [ebx + eax + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AC493: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x161AC496: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x161AC499: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AC4A5; /* 0x161AC49C: jbe 0x161ac4a5 */
L_161AC49E:
    ebx = MEM32(ebp + (-0x1C)); /* 0x161AC49E: mov ebx, dword ptr [ebp - 0x1c] */
    /* cmp ebx, MEM32(ecx) */ /* 0x161AC4A1: cmp ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_161AC4EA; /* 0x161AC4A3: ja 0x161ac4ea */
L_161AC4A5:
    ebx = MEM32(ecx); /* 0x161AC4A5: mov ebx, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x161AC4A7: mov dword ptr [ebp - 0x1c], ebx */
    ebx = edi + 0x1; /* 0x161AC4AA: lea ebx, [edi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC4AD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x161AC4AE: add ecx, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4C) = ebx; /* 0x161AC4B1: mov dword ptr [esi + 0x4c], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x161AC4B4: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x161AC4B7: mov dword ptr [ebp - 4], eax */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x161AC4BA: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC46E; /* 0x161AC4BD: jb 0x161ac46e */
L_161AC4BF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AC4BF: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 4 */ /* 0x161AC4C0: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC45C; /* 0x161AC4C3: jb 0x161ac45c */
L_161AC4C5:
    edi = MEM32(edx); /* 0x161AC4C5: mov edi, dword ptr [edx] */
    eax = MEM32(ebp + (-0x8)); /* 0x161AC4C7: mov eax, dword ptr [ebp - 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1Cu); /* 0x161AC4CA: imul edi, edi, 0x1c */
    eax = edi + eax * 4; /* 0x161AC4CD: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x161AC4D0: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AC4D3: push eax */
    RECOMP_CALL(sub_161AE108); /* 0x161AC4D4: call 0x161ae108 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC4D9: pop ecx */
    MEM32(esi) = eax; /* 0x161AC4DA: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x161AC4DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC4F4; /* 0x161AC4DE: jne 0x161ac4f4 */
L_161AC4E0:
    eax = 0x8007000Eu; /* 0x161AC4E0: mov eax, 0x8007000e */
    goto L_161AC641; /* 0x161AC4E5: jmp 0x161ac641 */
L_161AC4EA:
    eax = 0x80004005u; /* 0x161AC4EA: mov eax, 0x80004005 */
    goto L_161AC641; /* 0x161AC4EF: jmp 0x161ac641 */
L_161AC4F4:
    ecx = MEM32(ebp + (-0x8)); /* 0x161AC4F4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x161AC4F7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161AC4FB: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x161AC4FD: mov dword ptr [esi + 4], eax */
    eax = eax + ecx * 4; /* 0x161AC500: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AC503: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x161AC506: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC604; /* 0x161AC508: jbe 0x161ac604 */
L_161AC50E:
    MEM32(ebp + (-0x10)) = 0xFFFFFFE8u; /* 0x161AC50E: mov dword ptr [ebp - 0x10], 0xffffffe8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - ebx; /* 0x161AC515: sub dword ptr [ebp - 0x10], ebx */
    _flag_k = FK_CMP;
    edi = ebx + 0x18; /* 0x161AC518: lea edi, [ebx + 0x18] */
L_161AC51B:
    eax = MEM32(ebp + (-0x10)); /* 0x161AC51B: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(edi + (-0x18)); /* 0x161AC51E: mov ecx, dword ptr [edi - 0x18] */
    ebx = eax + edi; /* 0x161AC521: lea ebx, [eax + edi] */
    eax = MEM32(esi); /* 0x161AC524: mov eax, dword ptr [esi] */
    MEM32(ebx + eax) = ecx; /* 0x161AC526: mov dword ptr [ebx + eax], ecx */
    PUSH32(esp, MEM32(edi + (-0x8))); /* 0x161AC529: push dword ptr [edi - 8] */
    RECOMP_CALL(sub_16094060); /* 0x161AC52C: call 0x16094060 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x161AC531: mov ecx, dword ptr [esi] */
    MEM32(ebx + ecx + 0x10) = eax; /* 0x161AC533: mov dword ptr [ebx + ecx + 0x10], eax */
    eax = MEM32(esi); /* 0x161AC537: mov eax, dword ptr [esi] */
    SET_LO8(ecx, MEM8(edi)); /* 0x161AC539: mov cl, byte ptr [edi] */
    MEM8(ebx + eax + 0x18) = (uint8_t)(LO8(ecx)); /* 0x161AC53B: mov byte ptr [ebx + eax + 0x18], cl */
    eax = MEM32(esi); /* 0x161AC53F: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + (-0x4)); /* 0x161AC541: mov ecx, dword ptr [edi - 4] */
    MEM32(ebx + eax + 0x14) = ecx; /* 0x161AC544: mov dword ptr [ebx + eax + 0x14], ecx */
    eax = MEM32(esi); /* 0x161AC548: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + (-0x10)); /* 0x161AC54A: mov ecx, dword ptr [edi - 0x10] */
    MEM32(ebx + eax + 0x8) = ecx; /* 0x161AC54D: mov dword ptr [ebx + eax + 8], ecx */
    PUSH32(esp, MEM32(edi + (-0x10))); /* 0x161AC551: push dword ptr [edi - 0x10] */
    PUSH32(esp, MEM32(edi + (-0xC))); /* 0x161AC554: push dword ptr [edi - 0xc] */
    RECOMP_CALL(sub_160940B0); /* 0x161AC557: call 0x160940b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x161AC55C: mov ecx, dword ptr [esi] */
    MEM32(ebx + ecx + 0xC) = eax; /* 0x161AC55E: mov dword ptr [ebx + ecx + 0xc], eax */
    eax = MEM32(esi); /* 0x161AC562: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xC)); /* 0x161AC564: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebx + eax + 0x4) = ecx; /* 0x161AC567: mov dword ptr [ebx + eax + 4], ecx */
    ecx = MEM32(edi + (-0x10)); /* 0x161AC56B: mov ecx, dword ptr [edi - 0x10] */
    eax = MEM32(esi); /* 0x161AC56E: mov eax, dword ptr [esi] */
    MEM32(ebx + eax + 0x8) = ecx; /* 0x161AC570: mov dword ptr [ebx + eax + 8], ecx */
    eax = MEM32(esi); /* 0x161AC574: mov eax, dword ptr [esi] */
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x161AC576: mov cl, byte ptr [edi + 1] */
    MEM8(ebx + eax + 0x19) = (uint8_t)(LO8(ecx)); /* 0x161AC579: mov byte ptr [ebx + eax + 0x19], cl */
    ebx = MEM32(edi + (-0x14)); /* 0x161AC57D: mov ebx, dword ptr [edi - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x8); /* 0x161AC580: add ebx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x161AC583: mov eax, ebx */
    ecx = eax + 0x1; /* 0x161AC585: lea ecx, [eax + 1] */
L_161AC588:
    SET_LO8(edx, MEM8(eax)); /* 0x161AC588: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC58A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x161AC58B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AC588; /* 0x161AC58D: jne 0x161ac588 */
L_161AC58F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x161AC58F: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AC591: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x161AC592: push eax */
    PUSH32(esp, ebx); /* 0x161AC593: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AC594: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x161AC597: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC59A: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x161AC59F: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x4); /* 0x161AC5A2: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x161AC5A5: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x18)); /* 0x161AC5A9: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x161AC5AC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x161AC5AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC5EC; /* 0x161AC5B1: jbe 0x161ac5ec */
L_161AC5B3:
    eax = MEM32(ebp + (-0xC)); /* 0x161AC5B3: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x161AC5B6: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x161AC5B8: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x161AC5BB: mov dword ptr [ebp - 0x14], ecx */
    goto L_161AC5C3; /* 0x161AC5BE: jmp 0x161ac5c3 */
L_161AC5C0:
    eax = MEM32(ebp + (-0x1C)); /* 0x161AC5C0: mov eax, dword ptr [ebp - 0x1c] */
L_161AC5C3:
    SET_LO8(ecx, MEM8(ebx)); /* 0x161AC5C3: mov cl, byte ptr [ebx] */
    MEM8(eax + ebx) = (uint8_t)(LO8(ecx)); /* 0x161AC5C5: mov byte ptr [eax + ebx], cl */
    eax = MEM32(esi + 0x4); /* 0x161AC5C8: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x161AC5CB: mov ecx, dword ptr [ebp - 4] */
    eax = eax + ecx * 4; /* 0x161AC5CE: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0x20)) = eax; /* 0x161AC5D1: mov dword ptr [ebp - 0x20], eax */
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x161AC5D4: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x161AC5D7: push eax */
    RECOMP_CALL(sub_161AE12C); /* 0x161AC5D8: call 0x161ae12c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AC5DD: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x161AC5DE: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x161AC5E1: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x161AC5E3: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x161AC5E4: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_161AC5C0; /* 0x161AC5E7: jne 0x161ac5c0 */
L_161AC5E9:
    ecx = MEM32(ebp + (-0x18)); /* 0x161AC5E9: mov ecx, dword ptr [ebp - 0x18] */
L_161AC5EC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + ecx; /* 0x161AC5EC: add dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x161AC5EF: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x161AC5F2: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1Cu; /* 0x161AC5F5: add edi, 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x161AC5F8: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC51B; /* 0x161AC5FB: jb 0x161ac51b */
L_161AC601:
    ecx = MEM32(ebp + (-0x8)); /* 0x161AC601: mov ecx, dword ptr [ebp - 8] */
L_161AC604:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x161AC604: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AC606: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = ecx; /* 0x161AC608: mov dword ptr [esi + 8], ecx */
    /* cmp MEM32(esi + 0x4C), edi */ /* 0x161AC60B: cmp dword ptr [esi + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AC63F; /* 0x161AC60E: jbe 0x161ac63f */
L_161AC610:
    eax = esi + 0xC; /* 0x161AC610: lea eax, [esi + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x161AC613: mov dword ptr [ebp + 8], eax */
L_161AC616:
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x30))); /* 0x161AC616: push dword ptr [ebp + edi*4 - 0x30] */
    eax = MEM32(esi + 0x4); /* 0x161AC61A: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x161AC61D: mov ecx, dword ptr [ebp + 8] */
    eax = eax + ebx * 4; /* 0x161AC620: lea eax, [eax + ebx*4] */
    PUSH32(esp, eax); /* 0x161AC623: push eax */
    eax = ebx; /* 0x161AC624: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x161AC626: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x161AC629: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x161AC62B: push eax */
    RECOMP_CALL(sub_161AC153); /* 0x161AC62C: call 0x161ac153 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + edi * 4 + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + edi * 4 + (-0x30)); /* 0x161AC631: add ebx, dword ptr [ebp + edi*4 - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x10u; /* 0x161AC635: add dword ptr [ebp + 8], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x161AC639: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4C) */ /* 0x161AC63A: cmp edi, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC616; /* 0x161AC63D: jb 0x161ac616 */
L_161AC63F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC63F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC641:
    edi = POP32_VAL(esp); /* 0x161AC641: pop edi */
    ebx = POP32_VAL(esp); /* 0x161AC642: pop ebx */
L_161AC643:
    esi = POP32_VAL(esp); /* 0x161AC643: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC644: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AC645: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AC64D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC64Du);

L_161AC64D:
    edi = edi; /* 0x161AC64D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC64F: push ebp */
    ebp = esp; /* 0x161AC650: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161AC652: push esi */
    esi = ecx; /* 0x161AC653: mov esi, ecx */
    RECOMP_CALL(sub_161AC1B9); /* 0x161AC655: call 0x161ac1b9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x161AC65A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC667; /* 0x161AC65E: jne 0x161ac667 */
L_161AC660:
    eax = 0x80004005u; /* 0x161AC660: mov eax, 0x80004005 */
    goto L_161AC6A2; /* 0x161AC665: jmp 0x161ac6a2 */
L_161AC667:
    PUSH32(esp, edi); /* 0x161AC667: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC668: push dword ptr [ebp + 8] */
    edi = esi + 0xC; /* 0x161AC66B: lea edi, [esi + 0xc] */
    ecx = edi; /* 0x161AC66E: mov ecx, edi */
    RECOMP_CALL(sub_161AC222); /* 0x161AC670: call 0x161ac222 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_161AC680; /* 0x161AC677: jge 0x161ac680 */
L_161AC679:
    eax = 0x80004005u; /* 0x161AC679: mov eax, 0x80004005 */
    goto L_161AC6A1; /* 0x161AC67E: jmp 0x161ac6a1 */
L_161AC680:
    eax = MEM32(edi); /* 0x161AC680: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x161AC682: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0; /* 0x161AC686: and dword ptr [esi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x161AC68A: mov dword ptr [esi], eax */
    eax = MEM32(esi + 0x10); /* 0x161AC68C: mov eax, dword ptr [esi + 0x10] */
    MEM32(esi + 0x4) = eax; /* 0x161AC68F: mov dword ptr [esi + 4], eax */
    eax = MEM32(esi + 0x14); /* 0x161AC692: mov eax, dword ptr [esi + 0x14] */
    MEM32(esi + 0x8) = eax; /* 0x161AC695: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x4C) = 1; /* 0x161AC698: mov dword ptr [esi + 0x4c], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AC69F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC6A1:
    edi = POP32_VAL(esp); /* 0x161AC6A1: pop edi */
L_161AC6A2:
    esi = POP32_VAL(esp); /* 0x161AC6A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AC6A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x161AC6A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_161AC6AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC6ACu);

L_161AC6AC:
    edi = edi; /* 0x161AC6AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC6AE: push ebp */
    ebp = esp; /* 0x161AC6AF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC6B1: push ecx */
    PUSH32(esp, ecx); /* 0x161AC6B2: push ecx */
    ecx = ebp + (-0x8); /* 0x161AC6B3: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161AC6B6: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AC6BB: push 0 */
    PUSH32(esp, 0); /* 0x161AC6BD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC6BF: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161AC6C2: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161AC6C5: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC6CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AC6FF; /* 0x161AC6CC: jl 0x161ac6ff */
L_161AC6CE:
    PUSH32(esp, 0); /* 0x161AC6CE: push 0 */
    PUSH32(esp, 0x4E475349u); /* 0x161AC6D0: push 0x4e475349 */
    ecx = ebp + (-0x8); /* 0x161AC6D5: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC6D8: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AC6DD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC6E9; /* 0x161AC6E0: jne 0x161ac6e9 */
L_161AC6E2:
    eax = 0x80004005u; /* 0x161AC6E2: mov eax, 0x80004005 */
    goto L_161AC6FF; /* 0x161AC6E7: jmp 0x161ac6ff */
L_161AC6E9:
    PUSH32(esp, eax); /* 0x161AC6E9: push eax */
    ecx = ebp + (-0x8); /* 0x161AC6EA: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC6ED: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC6F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC6E2; /* 0x161AC6F4: je 0x161ac6e2 */
L_161AC6F6:
    ecx = MEM32(ebp + 0xC); /* 0x161AC6F6: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x161AC6F9: push eax */
    RECOMP_CALL(sub_161AC222); /* 0x161AC6FA: call 0x161ac222 */
    RECOMP_FLAGS_IN();
L_161AC6FF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC6FF: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AC700: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AC708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC708u);

L_161AC708:
    edi = edi; /* 0x161AC708: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC70A: push ebp */
    ebp = esp; /* 0x161AC70B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC70D: push ecx */
    PUSH32(esp, ecx); /* 0x161AC70E: push ecx */
    ecx = ebp + (-0x8); /* 0x161AC70F: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161AC712: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AC717: push 0 */
    PUSH32(esp, 0); /* 0x161AC719: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC71B: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161AC71E: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161AC721: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AC784; /* 0x161AC728: jl 0x161ac784 */
L_161AC72A:
    PUSH32(esp, 0); /* 0x161AC72A: push 0 */
    PUSH32(esp, 0x4E47534Fu); /* 0x161AC72C: push 0x4e47534f */
    ecx = ebp + (-0x8); /* 0x161AC731: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC734: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x161AC739: lea ecx, [ebp - 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AC73C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC756; /* 0x161AC73F: je 0x161ac756 */
L_161AC741:
    PUSH32(esp, eax); /* 0x161AC741: push eax */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC742: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC747: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC77F; /* 0x161AC749: je 0x161ac77f */
L_161AC74B:
    ecx = MEM32(ebp + 0xC); /* 0x161AC74B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x161AC74E: push eax */
    RECOMP_CALL(sub_161AC64D); /* 0x161AC74F: call 0x161ac64d */
    RECOMP_FLAGS_IN();
    goto L_161AC784; /* 0x161AC754: jmp 0x161ac784 */
L_161AC756:
    PUSH32(esp, 0); /* 0x161AC756: push 0 */
    PUSH32(esp, 0x3547534Fu); /* 0x161AC758: push 0x3547534f */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC75D: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AC762: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AC77F; /* 0x161AC765: je 0x161ac77f */
L_161AC767:
    PUSH32(esp, eax); /* 0x161AC767: push eax */
    ecx = ebp + (-0x8); /* 0x161AC768: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC76B: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC770: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC77F; /* 0x161AC772: je 0x161ac77f */
L_161AC774:
    ecx = MEM32(ebp + 0xC); /* 0x161AC774: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x161AC777: push eax */
    RECOMP_CALL(sub_161AC405); /* 0x161AC778: call 0x161ac405 */
    RECOMP_FLAGS_IN();
    goto L_161AC784; /* 0x161AC77D: jmp 0x161ac784 */
L_161AC77F:
    eax = 0x80004005u; /* 0x161AC77F: mov eax, 0x80004005 */
L_161AC784:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC784: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AC785: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AC78D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC78Du);

L_161AC78D:
    edi = edi; /* 0x161AC78D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC78F: push ebp */
    ebp = esp; /* 0x161AC790: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x161AC792: push ecx */
    PUSH32(esp, ecx); /* 0x161AC793: push ecx */
    ecx = ebp + (-0x8); /* 0x161AC794: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABC6B); /* 0x161AC797: call 0x161abc6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AC79C: push 0 */
    PUSH32(esp, 0); /* 0x161AC79E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AC7A0: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x161AC7A3: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABDF1); /* 0x161AC7A6: call 0x161abdf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC7AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_161AC7E0; /* 0x161AC7AD: jl 0x161ac7e0 */
L_161AC7AF:
    PUSH32(esp, 0); /* 0x161AC7AF: push 0 */
    PUSH32(esp, 0x47534350u); /* 0x161AC7B1: push 0x47534350 */
    ecx = ebp + (-0x8); /* 0x161AC7B6: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE29); /* 0x161AC7B9: call 0x161abe29 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x161AC7BE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC7CA; /* 0x161AC7C1: jne 0x161ac7ca */
L_161AC7C3:
    eax = 0x80004005u; /* 0x161AC7C3: mov eax, 0x80004005 */
    goto L_161AC7E0; /* 0x161AC7C8: jmp 0x161ac7e0 */
L_161AC7CA:
    PUSH32(esp, eax); /* 0x161AC7CA: push eax */
    ecx = ebp + (-0x8); /* 0x161AC7CB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_161ABE7C); /* 0x161AC7CE: call 0x161abe7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AC7D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AC7C3; /* 0x161AC7D5: je 0x161ac7c3 */
L_161AC7D7:
    ecx = MEM32(ebp + 0xC); /* 0x161AC7D7: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x161AC7DA: push eax */
    RECOMP_CALL(sub_161AC222); /* 0x161AC7DB: call 0x161ac222 */
    RECOMP_FLAGS_IN();
L_161AC7E0:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AC7E0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x161AC7E1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_161AC7E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC7E9u);

L_161AC7E9:
    edi = edi; /* 0x161AC7E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC7EB: push ebp */
    ebp = esp; /* 0x161AC7EC: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x161AC7EE: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x161AC7F1: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x161AC7F4: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(ebp + 0x1C); /* 0x161AC7F7: movzx ecx, byte ptr [ebp + 0x1c] */
    edx = ~edx; /* 0x161AC7FB: not edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    edx = edx & MEM32(ebp + 0x14); /* 0x161AC7FD: and edx, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x161AC800: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x161AC802: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x161AC805: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x18); /* 0x161AC807: add edx, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x20); /* 0x161AC80A: add edx, dword ptr [ebp + 0x20] */
    _flag_k = FK_ADD;
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AC80D: rol edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x161AC80F: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    MEM32(eax) = edx; /* 0x161AC812: mov dword ptr [eax], edx */
    ebp = POP32_VAL(esp); /* 0x161AC814: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x161AC815: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_161AC81D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC81Du);

L_161AC81D:
    edi = edi; /* 0x161AC81D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC81F: push ebp */
    ebp = esp; /* 0x161AC820: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x161AC822: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x161AC825: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    eax = eax & MEM32(ebp + 0x14); /* 0x161AC828: and eax, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(ebp + 0x1C); /* 0x161AC82B: movzx ecx, byte ptr [ebp + 0x1c] */
    edx = ~edx; /* 0x161AC82F: not edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    edx = edx & MEM32(ebp + 0x10); /* 0x161AC831: and edx, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x161AC834: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x161AC836: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x161AC839: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x18); /* 0x161AC83B: add edx, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x20); /* 0x161AC83E: add edx, dword ptr [ebp + 0x20] */
    _flag_k = FK_ADD;
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AC841: rol edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x161AC843: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    MEM32(eax) = edx; /* 0x161AC846: mov dword ptr [eax], edx */
    ebp = POP32_VAL(esp); /* 0x161AC848: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x161AC849: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_161AC851(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AC851u);

L_161AC851:
    edi = edi; /* 0x161AC851: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AC853: push ebp */
    ebp = esp; /* 0x161AC854: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x161AC856: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AC85C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x161AC85D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x161AC860: push esi */
    PUSH32(esp, edi); /* 0x161AC861: push edi */
    eax = ebx; /* 0x161AC862: mov eax, ebx */
    PUSH32(esp, 0x38u); /* 0x161AC864: push 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x161AC866: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AC869: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x161AC86B: pop edi */
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(ecx)); /* 0x161AC86C: mov byte ptr [ebp - 0xd], cl */
    /* cmp eax, edi */ /* 0x161AC86F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC87A; /* 0x161AC871: jb 0x161ac87a */
L_161AC873:
    PUSH32(esp, 0x78u); /* 0x161AC873: push 0x78 */
    edi = POP32_VAL(esp); /* 0x161AC875: pop edi */
    MEM8(ebp + (-0xD)) = (uint8_t)(1); /* 0x161AC876: mov byte ptr [ebp - 0xd], 1 */
L_161AC87A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x161AC87A: sub edi, eax */
    _flag_k = FK_CMP;
    esi = edi + ebx + 0x8; /* 0x161AC87C: lea esi, [edi + ebx + 8] */
    if (6u) _cf = (((esi) >> 5) & 1u); /* 0x161AC880: shr esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 6u; /* 0x161AC880: shr esi, 6 */
    MEM32(ebp + (-0x68)) = edi; /* 0x161AC883: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x2C)) = 0x67452301u; /* 0x161AC886: mov dword ptr [ebp - 0x2c], 0x67452301 */
    MEM32(ebp + (-0x28)) = 0xEFCDAB89u; /* 0x161AC88D: mov dword ptr [ebp - 0x28], 0xefcdab89 */
    MEM32(ebp + (-0x24)) = 0x98BADCFEu; /* 0x161AC894: mov dword ptr [ebp - 0x24], 0x98badcfe */
    MEM32(ebp + (-0x20)) = 0x10325476u; /* 0x161AC89B: mov dword ptr [ebp - 0x20], 0x10325476 */
    MEM32(ebp + (-0x70)) = esi; /* 0x161AC8A2: mov dword ptr [ebp - 0x70], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x161AC8A5: mov dword ptr [ebp - 0x1c], ecx */
    eax = esi + (-0x2); /* 0x161AC8A8: lea eax, [esi - 2] */
    /* cmp MEM8(ebp + (-0xD)), LO8(ecx) */ /* 0x161AC8AB: cmp byte ptr [ebp - 0xd], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC8B3; /* 0x161AC8AE: jne 0x161ac8b3 */
L_161AC8B0:
    eax = esi + (-0x1); /* 0x161AC8B0: lea eax, [esi - 1] */
L_161AC8B3:
    MEM32(ebp + (-0x48)) = eax; /* 0x161AC8B3: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x8); /* 0x161AC8B6: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x161AC8B9: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x161AC8BC: mov dword ptr [ebp - 0x14], ecx */
    /* cmp esi, ecx */ /* 0x161AC8BF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AD044; /* 0x161AC8C1: jbe 0x161ad044 */
L_161AC8C7:
    goto L_161AC8D1; /* 0x161AC8C7: jmp 0x161ac8d1 */
L_161AC8C9:
    ebx = MEM32(ebp + 0xC); /* 0x161AC8C9: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x68)); /* 0x161AC8CC: mov edi, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AC8CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AC8D1:
    eax = MEM32(ebp + (-0x48)); /* 0x161AC8D1: mov eax, dword ptr [ebp - 0x48] */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x161AC8D4: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC991; /* 0x161AC8D7: jne 0x161ac991 */
L_161AC8DD:
    /* cmp MEM8(ebp + (-0xD)), LO8(ecx) */ /* 0x161AC8DD: cmp byte ptr [ebp - 0xd], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC924; /* 0x161AC8E0: jne 0x161ac924 */
L_161AC8E2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AC8E2: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AC8E3: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC989; /* 0x161AC8E6: jne 0x161ac989 */
L_161AC8EC:
    esi = ebx; /* 0x161AC8EC: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x1C)); /* 0x161AC8EE: sub esi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x161AC8F1: mov eax, ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x161AC8F3: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x161AC8F3: shl eax, 3 */
    PUSH32(esp, esi); /* 0x161AC8F6: push esi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x161AC8F7: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xB8)) = eax; /* 0x161AC8FA: mov dword ptr [ebp - 0xb8], eax */
    eax = ebp + (-0xB4); /* 0x161AC900: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x161AC906: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC907: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x161AC90C: push edi */
    eax = ebp + esi + (-0xB4); /* 0x161AC90D: lea eax, [ebp + esi - 0xb4] */
    PUSH32(esp, 0x16001E68u); /* 0x161AC914: push 0x16001e68 */
    PUSH32(esp, eax); /* 0x161AC919: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC91A: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161AC91F: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_161AC980; /* 0x161AC922: jmp 0x161ac980 */
L_161AC924:
    eax = esi + (-0x2); /* 0x161AC924: lea eax, [esi - 2] */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x161AC927: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC95E; /* 0x161AC92A: jne 0x161ac95e */
L_161AC92C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x1C)); /* 0x161AC92C: sub ebx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    eax = ebp + (-0xB8); /* 0x161AC92F: lea eax, [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x161AC935: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x161AC936: push dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x161AC939: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC93A: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFC8u; /* 0x161AC93F: add edi, -0x38 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x161AC942: push edi */
    eax = ebp + ebx + (-0xB8); /* 0x161AC943: lea eax, [ebp + ebx - 0xb8] */
    PUSH32(esp, 0x16001E68u); /* 0x161AC94A: push 0x16001e68 */
    PUSH32(esp, eax); /* 0x161AC94F: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AC950: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161AC955: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AC958: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x48)) = esi; /* 0x161AC959: mov dword ptr [ebp - 0x48], esi */
    goto L_161AC989; /* 0x161AC95C: jmp 0x161ac989 */
L_161AC95E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AC95E: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AC95F: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AC989; /* 0x161AC962: jne 0x161ac989 */
L_161AC964:
    eax = ebx; /* 0x161AC964: mov eax, ebx */
    esi = edi + 0x16001E30; /* 0x161AC966: lea esi, [edi + 0x16001e30] */
    PUSH32(esp, 0xEu); /* 0x161AC96C: push 0xe */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x161AC96E: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x161AC96E: shl eax, 3 */
    ecx = POP32_VAL(esp); /* 0x161AC971: pop ecx */
    edi = ebp + (-0xB4); /* 0x161AC972: lea edi, [ebp - 0xb4] */
    MEM32(ebp + (-0xB8)) = eax; /* 0x161AC978: mov dword ptr [ebp - 0xb8], eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x161AC97E: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_161AC980:
    eax = ebx + ebx; /* 0x161AC980: lea eax, [ebx + ebx] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x161AC983: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x161AC986: mov dword ptr [ebp - 0x7c], eax */
L_161AC989:
    esi = ebp + (-0xB8); /* 0x161AC989: lea esi, [ebp - 0xb8] */
    goto L_161AC994; /* 0x161AC98F: jmp 0x161ac994 */
L_161AC991:
    esi = MEM32(ebp + (-0x18)); /* 0x161AC991: mov esi, dword ptr [ebp - 0x18] */
L_161AC994:
    eax = MEM32(ebp + (-0x2C)); /* 0x161AC994: mov eax, dword ptr [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x20)); /* 0x161AC997: mov edi, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x24)); /* 0x161AC99A: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x28)); /* 0x161AC99D: mov ecx, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0xD76AA478u); /* 0x161AC9A0: push 0xd76aa478 */
    PUSH32(esp, 7); /* 0x161AC9A5: push 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AC9A7: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x161AC9AA: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x161AC9AC: push eax */
    PUSH32(esp, edi); /* 0x161AC9AD: push edi */
    PUSH32(esp, edx); /* 0x161AC9AE: push edx */
    MEM32(ebp + (-0x50)) = eax; /* 0x161AC9AF: mov dword ptr [ebp - 0x50], eax */
    PUSH32(esp, ecx); /* 0x161AC9B2: push ecx */
    eax = ebp + (-0xC); /* 0x161AC9B3: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AC9B6: push eax */
    MEM32(ebp + 0x8) = ecx; /* 0x161AC9B7: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x161AC9BA: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x161AC9BD: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AC9C0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x161AC9C5: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0xE8C7B756u); /* 0x161AC9C8: push 0xe8c7b756 */
    PUSH32(esp, 0xCu); /* 0x161AC9CD: push 0xc */
    PUSH32(esp, eax); /* 0x161AC9CF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x161AC9D0: push dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x161AC9D3: mov dword ptr [ebp - 0x5c], eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x161AC9D6: push dword ptr [ebp - 0x28] */
    eax = ebp + (-0x4); /* 0x161AC9D9: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AC9DC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AC9DF: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AC9E0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x161AC9E5: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 0x242070DBu); /* 0x161AC9E8: push 0x242070db */
    PUSH32(esp, 0x11u); /* 0x161AC9ED: push 0x11 */
    PUSH32(esp, eax); /* 0x161AC9EF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x161AC9F0: push dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x161AC9F3: mov dword ptr [ebp - 0x3c], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AC9F6: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161AC9F9: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AC9FC: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AC9FF: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACA00: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x161ACA05: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 0xC1BDCEEEu); /* 0x161ACA08: push 0xc1bdceee */
    PUSH32(esp, 0x16u); /* 0x161ACA0D: push 0x16 */
    PUSH32(esp, eax); /* 0x161ACA0F: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACA10: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x54)) = eax; /* 0x161ACA13: mov dword ptr [ebp - 0x54], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACA16: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161ACA19: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACA1C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACA1F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACA20: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x161ACA25: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, 0xF57C0FAFu); /* 0x161ACA28: push 0xf57c0faf */
    PUSH32(esp, 7); /* 0x161ACA2D: push 7 */
    PUSH32(esp, eax); /* 0x161ACA2F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACA30: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x58)) = eax; /* 0x161ACA33: mov dword ptr [ebp - 0x58], eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACA36: push dword ptr [ebp - 8] */
    eax = ebp + (-0xC); /* 0x161ACA39: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACA3C: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACA3F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACA40: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x14); /* 0x161ACA45: mov edi, dword ptr [esi + 0x14] */
    PUSH32(esp, 0x4787C62Au); /* 0x161ACA48: push 0x4787c62a */
    PUSH32(esp, 0xCu); /* 0x161ACA4D: push 0xc */
    PUSH32(esp, edi); /* 0x161ACA4F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACA50: push dword ptr [ebp - 8] */
    eax = ebp + (-0x4); /* 0x161ACA53: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACA56: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x78)) = edi; /* 0x161ACA59: mov dword ptr [ebp - 0x78], edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACA5C: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACA5F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACA60: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x161ACA65: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 0xA8304613u); /* 0x161ACA68: push 0xa8304613 */
    PUSH32(esp, 0x11u); /* 0x161ACA6D: push 0x11 */
    PUSH32(esp, eax); /* 0x161ACA6F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACA70: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x161ACA73: mov dword ptr [ebp - 0x64], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACA76: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACA79: push dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x161ACA7C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACA7F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACA80: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x161ACA85: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 0xFD469501u); /* 0x161ACA88: push 0xfd469501 */
    PUSH32(esp, 0x16u); /* 0x161ACA8D: push 0x16 */
    PUSH32(esp, eax); /* 0x161ACA8F: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACA90: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x161ACA93: mov dword ptr [ebp - 0x38], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACA96: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161ACA99: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACA9C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACA9F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACAA0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x20); /* 0x161ACAA5: mov ebx, dword ptr [esi + 0x20] */
    PUSH32(esp, 0x698098D8u); /* 0x161ACAA8: push 0x698098d8 */
    PUSH32(esp, 7); /* 0x161ACAAD: push 7 */
    PUSH32(esp, ebx); /* 0x161ACAAF: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACAB0: push dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x161ACAB3: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACAB6: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x74)) = ebx; /* 0x161ACAB9: mov dword ptr [ebp - 0x74], ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACABC: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACABF: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACAC0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x24); /* 0x161ACAC5: mov eax, dword ptr [esi + 0x24] */
    PUSH32(esp, 0x8B44F7AFu); /* 0x161ACAC8: push 0x8b44f7af */
    PUSH32(esp, 0xCu); /* 0x161ACACD: push 0xc */
    PUSH32(esp, eax); /* 0x161ACACF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACAD0: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x44)) = eax; /* 0x161ACAD3: mov dword ptr [ebp - 0x44], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACAD6: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x161ACAD9: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACADC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACADF: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACAE0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x28); /* 0x161ACAE5: mov eax, dword ptr [esi + 0x28] */
    PUSH32(esp, 0xFFFF5BB1u); /* 0x161ACAE8: push 0xffff5bb1 */
    PUSH32(esp, 0x11u); /* 0x161ACAED: push 0x11 */
    PUSH32(esp, eax); /* 0x161ACAEF: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACAF0: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x161ACAF3: mov dword ptr [ebp - 0x30], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACAF6: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161ACAF9: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACAFC: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161ACAFF: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACB00: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x2C); /* 0x161ACB05: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, 0x895CD7BEu); /* 0x161ACB08: push 0x895cd7be */
    PUSH32(esp, 0x16u); /* 0x161ACB0D: push 0x16 */
    PUSH32(esp, eax); /* 0x161ACB0F: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACB10: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x34)) = eax; /* 0x161ACB13: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACB16: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161ACB19: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACB1C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACB1F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACB20: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x30); /* 0x161ACB25: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, 0x6B901122u); /* 0x161ACB28: push 0x6b901122 */
    PUSH32(esp, 7); /* 0x161ACB2D: push 7 */
    PUSH32(esp, eax); /* 0x161ACB2F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACB30: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x40)) = eax; /* 0x161ACB33: mov dword ptr [ebp - 0x40], eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACB36: push dword ptr [ebp - 8] */
    eax = ebp + (-0xC); /* 0x161ACB39: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACB3C: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACB3F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACB40: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x34); /* 0x161ACB45: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, 0xFD987193u); /* 0x161ACB48: push 0xfd987193 */
    PUSH32(esp, 0xCu); /* 0x161ACB4D: push 0xc */
    PUSH32(esp, eax); /* 0x161ACB4F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACB50: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x60)) = eax; /* 0x161ACB53: mov dword ptr [ebp - 0x60], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACB56: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x161ACB59: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACB5C: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACB5F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACB60: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x161ACB65: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0xA679438Eu); /* 0x161ACB68: push 0xa679438e */
    PUSH32(esp, 0x11u); /* 0x161ACB6D: push 0x11 */
    PUSH32(esp, eax); /* 0x161ACB6F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACB70: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x161ACB73: mov dword ptr [ebp - 0x4c], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACB76: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161ACB79: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACB7C: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161ACB7F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACB80: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x3C); /* 0x161ACB85: mov esi, dword ptr [esi + 0x3c] */
    PUSH32(esp, 0x49B40821u); /* 0x161ACB88: push 0x49b40821 */
    PUSH32(esp, 0x16u); /* 0x161ACB8D: push 0x16 */
    PUSH32(esp, esi); /* 0x161ACB8F: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACB90: push dword ptr [ebp - 0xc] */
    eax = ebp + 0x8; /* 0x161ACB93: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACB96: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x6C)) = esi; /* 0x161ACB99: mov dword ptr [ebp - 0x6c], esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACB9C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACB9F: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161ACBA0: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xF61E2562u); /* 0x161ACBA5: push 0xf61e2562 */
    PUSH32(esp, 5); /* 0x161ACBAA: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x161ACBAC: push dword ptr [ebp - 0x5c] */
    eax = ebp + (-0xC); /* 0x161ACBAF: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACBB2: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACBB5: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACBB8: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACBBB: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACBBC: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC040B340u); /* 0x161ACBC1: push 0xc040b340 */
    PUSH32(esp, 9); /* 0x161ACBC6: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x161ACBC8: push dword ptr [ebp - 0x64] */
    eax = ebp + (-0x4); /* 0x161ACBCB: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACBCE: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACBD1: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACBD4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACBD7: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACBD8: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x265E5A51u); /* 0x161ACBDD: push 0x265e5a51 */
    PUSH32(esp, 0xEu); /* 0x161ACBE2: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x161ACBE4: push dword ptr [ebp - 0x34] */
    eax = ebp + (-0x8); /* 0x161ACBE7: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACBEA: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACBED: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACBF0: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161ACBF3: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACBF4: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xE9B6C7AAu); /* 0x161ACBF9: push 0xe9b6c7aa */
    PUSH32(esp, 0x14u); /* 0x161ACBFE: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x161ACC00: push dword ptr [ebp - 0x50] */
    eax = ebp + 0x8; /* 0x161ACC03: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACC06: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACC09: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACC0C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACC0F: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC10: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xD62F105Du); /* 0x161ACC15: push 0xd62f105d */
    PUSH32(esp, 5); /* 0x161ACC1A: push 5 */
    PUSH32(esp, edi); /* 0x161ACC1C: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACC1D: push dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x161ACC20: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACC23: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACC26: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACC29: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC2A: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x02441453u); /* 0x161ACC2F: push 0x2441453 */
    PUSH32(esp, 9); /* 0x161ACC34: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x161ACC36: push dword ptr [ebp - 0x30] */
    eax = ebp + (-0x4); /* 0x161ACC39: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACC3C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACC3F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACC42: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACC45: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC46: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xD8A1E681u); /* 0x161ACC4B: push 0xd8a1e681 */
    PUSH32(esp, 0xEu); /* 0x161ACC50: push 0xe */
    PUSH32(esp, esi); /* 0x161ACC52: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACC53: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACC56: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACC59: push dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x161ACC5C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACC5F: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC60: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xE7D3FBC8u); /* 0x161ACC65: push 0xe7d3fbc8 */
    PUSH32(esp, 0x14u); /* 0x161ACC6A: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x161ACC6C: push dword ptr [ebp - 0x58] */
    eax = ebp + 0x8; /* 0x161ACC6F: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACC72: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACC75: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACC78: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACC7B: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC7C: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21E1CDE6u); /* 0x161ACC81: push 0x21e1cde6 */
    PUSH32(esp, 5); /* 0x161ACC86: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x161ACC88: push dword ptr [ebp - 0x44] */
    eax = ebp + (-0xC); /* 0x161ACC8B: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACC8E: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACC91: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACC94: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACC97: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACC98: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC33707D6u); /* 0x161ACC9D: push 0xc33707d6 */
    PUSH32(esp, 9); /* 0x161ACCA2: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x161ACCA4: push dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x4); /* 0x161ACCA7: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACCAA: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACCAD: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACCB0: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161ACCB3: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACCB4: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xF4D50D87u); /* 0x161ACCB9: push 0xf4d50d87 */
    PUSH32(esp, 0xEu); /* 0x161ACCBE: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x161ACCC0: push dword ptr [ebp - 0x54] */
    eax = ebp + (-0x8); /* 0x161ACCC3: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACCC6: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACCC9: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACCCC: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161ACCCF: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACCD0: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x455A14EDu); /* 0x161ACCD5: push 0x455a14ed */
    PUSH32(esp, 0x14u); /* 0x161ACCDA: push 0x14 */
    PUSH32(esp, ebx); /* 0x161ACCDC: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161ACCDD: push dword ptr [ebp - 0xc] */
    eax = ebp + 0x8; /* 0x161ACCE0: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACCE3: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACCE6: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACCE9: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACCEA: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xA9E3E905u); /* 0x161ACCEF: push 0xa9e3e905 */
    PUSH32(esp, 5); /* 0x161ACCF4: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x161ACCF6: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xC); /* 0x161ACCF9: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACCFC: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACCFF: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACD02: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161ACD05: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACD06: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x161ACD0B: mov esi, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0xFCEFA3F8u); /* 0x161ACD0E: push 0xfcefa3f8 */
    PUSH32(esp, 9); /* 0x161ACD13: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x161ACD15: push dword ptr [ebp - 0x3c] */
    eax = ebp + (-0x4); /* 0x161ACD18: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACD1B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACD1E: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161ACD21: push esi */
    PUSH32(esp, eax); /* 0x161ACD22: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACD23: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x676F02D9u); /* 0x161ACD28: push 0x676f02d9 */
    PUSH32(esp, 0xEu); /* 0x161ACD2D: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x161ACD2F: push dword ptr [ebp - 0x38] */
    eax = ebp + (-0x8); /* 0x161ACD32: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ACD35: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161ACD38: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACD39: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161ACD3C: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACD3D: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8D2A4C8Au); /* 0x161ACD42: push 0x8d2a4c8a */
    PUSH32(esp, 0x14u); /* 0x161ACD47: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x161ACD49: push dword ptr [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x161ACD4C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161ACD4D: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161ACD50: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161ACD53: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161ACD56: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161ACD57: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x161ACD5C: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x161ACD5F: mov ecx, dword ptr [ebp - 8] */
    eax = edx; /* 0x161ACD62: mov eax, edx */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x161ACD64: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x8)));
    eax = eax ^ MEM32(ebp + 0x8); /* 0x161ACD66: xor eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161ACD69: add eax, edi */
    _flag_k = FK_ADD;
    eax = eax + esi + (-0x5C6BE); /* 0x161ACD6B: lea eax, [eax + esi - 0x5c6be] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACD72: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x161ACD75: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161ACD78: mov esi, ecx */
    _flag_a = (uint32_t)((esi ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((esi ^ MEM32(ebp + 0x8)));
    esi = esi ^ MEM32(ebp + 0x8); /* 0x161ACD7A: xor esi, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACD7D: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x161ACD7F: add esi, ebx */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x788E097F); /* 0x161ACD81: lea edx, [esi + edx - 0x788e097f] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACD88: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACD8B: add edx, eax */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x161ACD8D: mov ebx, dword ptr [ebp + 8] */
    esi = edx; /* 0x161ACD90: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((esi ^ MEM32(ebp + 0x8)));
    esi = esi ^ MEM32(ebp + 0x8); /* 0x161ACD92: xor esi, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACD95: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x34)); /* 0x161ACD97: add esi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    edi = esi + ecx + 0x6D9D6122; /* 0x161ACD9A: lea edi, [esi + ecx + 0x6d9d6122] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161ACDA1: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161ACDA4: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACDA6: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161ACDA8: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x161ACDAA: mov ecx, esi */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x161ACDAC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4C)); /* 0x161ACDAE: add ecx, dword ptr [ebp - 0x4c] */
    _flag_k = FK_ADD;
    ecx = ecx + ebx + (-0x21AC7F4); /* 0x161ACDB1: lea ecx, [ecx + ebx - 0x21ac7f4] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACDB8: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ACDBB: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACDBD: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x5C)); /* 0x161ACDBF: add esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_ADD;
    eax = esi + eax + (-0x5B4115BC); /* 0x161ACDC2: lea eax, [esi + eax - 0x5b4115bc] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACDC9: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACDCC: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161ACDCE: mov esi, edi */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACDD0: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACDD2: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x58)); /* 0x161ACDD4: add esi, dword ptr [ebp - 0x58] */
    _flag_k = FK_ADD;
    edx = esi + edx + 0x4BDECFA9; /* 0x161ACDD7: lea edx, [esi + edx + 0x4bdecfa9] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACDDE: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACDE1: add edx, eax */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACDE3: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACDE5: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACDE7: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x161ACDE9: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edi = esi + edi + (-0x944B4A0); /* 0x161ACDEC: lea edi, [esi + edi - 0x944b4a0] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161ACDF3: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161ACDF6: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACDF8: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161ACDFA: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x161ACDFC: mov ebx, esi */
    _flag_a = (uint32_t)((ebx ^ eax)); _flag_b = (uint32_t)((ebx ^ eax));
    ebx = ebx ^ eax; /* 0x161ACDFE: xor ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x30)); /* 0x161ACE00: add ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    ecx = ebx + ecx + (-0x41404390); /* 0x161ACE03: lea ecx, [ebx + ecx - 0x41404390] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACE0A: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ACE0D: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACE0F: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x60)); /* 0x161ACE11: add esi, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    eax = esi + eax + 0x289B7EC6; /* 0x161ACE14: lea eax, [esi + eax + 0x289b7ec6] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACE1B: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACE1E: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161ACE20: mov esi, edi */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACE22: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACE24: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x50)); /* 0x161ACE26: add esi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x155ED806); /* 0x161ACE29: lea edx, [esi + edx - 0x155ed806] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACE30: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACE33: add edx, eax */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACE35: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACE37: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACE39: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x161ACE3B: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    esi = esi + edi + (-0x2B10CF7B); /* 0x161ACE3E: lea esi, [esi + edi - 0x2b10cf7b] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161ACE45: rol esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161ACE48: add esi, edx */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161ACE4A: mov edi, edx */
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161ACE4C: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x161ACE4E: mov ebx, edi */
    _flag_a = (uint32_t)((ebx ^ eax)); _flag_b = (uint32_t)((ebx ^ eax));
    ebx = ebx ^ eax; /* 0x161ACE50: xor ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x64)); /* 0x161ACE52: add ebx, dword ptr [ebp - 0x64] */
    _flag_k = FK_ADD;
    ecx = ebx + ecx + 0x4881D05; /* 0x161ACE55: lea ecx, [ebx + ecx + 0x4881d05] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACE5C: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161ACE5F: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161ACE61: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x44)); /* 0x161ACE63: add edi, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    eax = edi + eax + (-0x262B2FC7); /* 0x161ACE66: lea eax, [edi + eax - 0x262b2fc7] */
    edi = esi; /* 0x161ACE6D: mov edi, esi */
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161ACE6F: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACE71: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACE74: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161ACE76: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x40)); /* 0x161ACE78: add edi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x1924661B); /* 0x161ACE7B: lea edx, [edi + edx - 0x1924661b] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACE82: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACE85: add edx, eax */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161ACE87: mov edi, edx */
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161ACE89: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161ACE8B: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x6C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x6C)); /* 0x161ACE8D: add edi, dword ptr [ebp - 0x6c] */
    _flag_k = FK_ADD;
    edi = edi + esi + 0x1FA27CF8; /* 0x161ACE90: lea edi, [edi + esi + 0x1fa27cf8] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161ACE97: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161ACE9A: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACE9C: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161ACE9E: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACEA0: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x3C)); /* 0x161ACEA2: add esi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + (-0x3B53A99B); /* 0x161ACEA5: lea ecx, [esi + ecx - 0x3b53a99b] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACEAC: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ACEAF: add ecx, edi */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACEB1: mov esi, edx */
    esi = ~esi; /* 0x161ACEB3: not esi */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x161ACEB5: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161ACEB7: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x50)); /* 0x161ACEB9: add esi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    eax = esi + eax + (-0xBD6DDBC); /* 0x161ACEBC: lea eax, [esi + eax - 0xbd6ddbc] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACEC3: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACEC6: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161ACEC8: mov esi, edi */
    esi = ~esi; /* 0x161ACECA: not esi */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x161ACECC: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACECE: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x161ACED0: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edx = esi + edx + 0x432AFF97; /* 0x161ACED3: lea edx, [esi + edx + 0x432aff97] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACEDA: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACEDD: add edx, eax */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161ACEDF: mov esi, ecx */
    esi = ~esi; /* 0x161ACEE1: not esi */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x161ACEE3: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACEE5: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4C)); /* 0x161ACEE7: add esi, dword ptr [ebp - 0x4c] */
    _flag_k = FK_ADD;
    edi = esi + edi + (-0x546BDC59); /* 0x161ACEEA: lea edi, [esi + edi - 0x546bdc59] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161ACEF1: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161ACEF4: add edi, edx */
    _flag_k = FK_ADD;
    esi = eax; /* 0x161ACEF6: mov esi, eax */
    esi = ~esi; /* 0x161ACEF8: not esi */
    _flag_a = (uint32_t)((esi | edi)); _flag_b = (uint32_t)((esi | edi));
    esi = esi | edi; /* 0x161ACEFA: or esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edx)); _flag_b = (uint32_t)((esi ^ edx));
    esi = esi ^ edx; /* 0x161ACEFC: xor esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x78)); /* 0x161ACEFE: add esi, dword ptr [ebp - 0x78] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + (-0x36C5FC7); /* 0x161ACF01: lea ecx, [esi + ecx - 0x36c5fc7] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACF08: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161ACF0B: add ecx, edi */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161ACF0D: mov esi, edx */
    esi = ~esi; /* 0x161ACF0F: not esi */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x161ACF11: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161ACF13: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x40)); /* 0x161ACF15: add esi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    eax = esi + eax + 0x655B59C3; /* 0x161ACF18: lea eax, [esi + eax + 0x655b59c3] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACF1F: rol eax, 6 */
    esi = edi; /* 0x161ACF22: mov esi, edi */
    esi = ~esi; /* 0x161ACF24: not esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACF26: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x161ACF28: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161ACF2A: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x161ACF2C: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x70F3336E); /* 0x161ACF2F: lea edx, [esi + edx - 0x70f3336e] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACF36: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACF39: add edx, eax */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161ACF3B: mov esi, ecx */
    esi = ~esi; /* 0x161ACF3D: not esi */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x161ACF3F: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161ACF41: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x30)); /* 0x161ACF43: add esi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    esi = esi + edi + (-0x100B83); /* 0x161ACF46: lea esi, [esi + edi - 0x100b83] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161ACF4D: rol esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161ACF50: add esi, edx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x161ACF52: mov edi, eax */
    edi = ~edi; /* 0x161ACF54: not edi */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161ACF56: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161ACF58: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x5C)); /* 0x161ACF5A: add edi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + (-0x7A7BA22F); /* 0x161ACF5D: lea ecx, [edi + ecx - 0x7a7ba22f] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACF64: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161ACF67: add ecx, esi */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161ACF69: mov edi, edx */
    edi = ~edi; /* 0x161ACF6B: not edi */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x161ACF6D: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161ACF6F: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x74)); /* 0x161ACF71: add edi, dword ptr [ebp - 0x74] */
    _flag_k = FK_ADD;
    eax = edi + eax + 0x6FA87E4F; /* 0x161ACF74: lea eax, [edi + eax + 0x6fa87e4f] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACF7B: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACF7E: add eax, ecx */
    _flag_k = FK_ADD;
    edi = esi; /* 0x161ACF80: mov edi, esi */
    edi = ~edi; /* 0x161ACF82: not edi */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161ACF84: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161ACF86: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x6C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x6C)); /* 0x161ACF88: add edi, dword ptr [ebp - 0x6c] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x1D31920); /* 0x161ACF8B: lea edx, [edi + edx - 0x1d31920] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACF92: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACF95: add edx, eax */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x161ACF97: mov edi, ecx */
    edi = ~edi; /* 0x161ACF99: not edi */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x161ACF9B: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161ACF9D: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x64)); /* 0x161ACF9F: add edi, dword ptr [ebp - 0x64] */
    _flag_k = FK_ADD;
    esi = edi + esi + (-0x5CFEBCEC); /* 0x161ACFA2: lea esi, [edi + esi - 0x5cfebcec] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161ACFA9: rol esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161ACFAC: add esi, edx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x161ACFAE: mov edi, eax */
    edi = ~edi; /* 0x161ACFB0: not edi */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161ACFB2: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161ACFB4: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x60)); /* 0x161ACFB6: add edi, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + 0x4E0811A1; /* 0x161ACFB9: lea ecx, [edi + ecx + 0x4e0811a1] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161ACFC0: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161ACFC3: add ecx, esi */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161ACFC5: mov edi, edx */
    edi = ~edi; /* 0x161ACFC7: not edi */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x161ACFC9: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161ACFCB: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x58)); /* 0x161ACFCD: add edi, dword ptr [ebp - 0x58] */
    _flag_k = FK_ADD;
    eax = edi + eax + (-0x8AC817E); /* 0x161ACFD0: lea eax, [edi + eax - 0x8ac817e] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161ACFD7: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161ACFDA: add eax, ecx */
    _flag_k = FK_ADD;
    edi = esi; /* 0x161ACFDC: mov edi, esi */
    edi = ~edi; /* 0x161ACFDE: not edi */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161ACFE0: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161ACFE2: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x34)); /* 0x161ACFE4: add edi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x42C50DCB); /* 0x161ACFE7: lea edx, [edi + edx - 0x42c50dcb] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161ACFEE: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161ACFF1: add edx, eax */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x161ACFF3: mov edi, ecx */
    edi = ~edi; /* 0x161ACFF5: not edi */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x161ACFF7: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161ACFF9: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x3C)); /* 0x161ACFFB: add edi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    esi = edi + esi + 0x2AD7D2BB; /* 0x161ACFFE: lea esi, [edi + esi + 0x2ad7d2bb] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161AD005: rol esi, 0xf */
    edi = eax; /* 0x161AD008: mov edi, eax */
    edi = ~edi; /* 0x161AD00A: not edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161AD00C: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161AD00E: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161AD010: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x44)); /* 0x161AD012: add edi, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + (-0x14792C6F); /* 0x161AD015: lea ecx, [edi + ecx - 0x14792c6f] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + esi; /* 0x161AD01C: add dword ptr [ebp - 0x24], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x161AD01F: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + edx; /* 0x161AD022: add dword ptr [ebp - 0x20], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 0x40u; /* 0x161AD025: add dword ptr [ebp - 0x1c], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0x40u; /* 0x161AD029: add dword ptr [ebp - 0x18], 0x40 */
    _flag_k = FK_ADD;
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD02D: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161AD030: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + ecx; /* 0x161AD032: add dword ptr [ebp - 0x28], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x161AD035: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x70)); /* 0x161AD038: mov esi, dword ptr [ebp - 0x70] */
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AD03B: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AC8C9; /* 0x161AD03E: jb 0x161ac8c9 */
L_161AD044:
    edi = MEM32(ebp + 0x10); /* 0x161AD044: mov edi, dword ptr [ebp + 0x10] */
    esi = ebp + (-0x2C); /* 0x161AD047: lea esi, [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD04A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD04B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD04C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD04D: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x161AD04E: pop edi */
    esi = POP32_VAL(esp); /* 0x161AD04F: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AD050: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AD051: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161AD052: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161AD05A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AD05Au);

L_161AD05A:
    edi = edi; /* 0x161AD05A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AD05C: push ebp */
    ebp = esp; /* 0x161AD05D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x161AD05F: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x161AD065: push ebx */
    PUSH32(esp, esi); /* 0x161AD066: push esi */
    PUSH32(esp, edi); /* 0x161AD067: push edi */
    edi = MEM32(ebp + 0xC); /* 0x161AD068: mov edi, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x161AD06B: mov eax, edi */
    PUSH32(esp, 0x38u); /* 0x161AD06D: push 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x161AD06F: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AD072: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x161AD074: pop ebx */
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(ecx)); /* 0x161AD075: mov byte ptr [ebp - 0xd], cl */
    /* cmp eax, ebx */ /* 0x161AD078: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_161AD083; /* 0x161AD07A: jb 0x161ad083 */
L_161AD07C:
    PUSH32(esp, 0x78u); /* 0x161AD07C: push 0x78 */
    ebx = POP32_VAL(esp); /* 0x161AD07E: pop ebx */
    MEM8(ebp + (-0xD)) = (uint8_t)(1); /* 0x161AD07F: mov byte ptr [ebp - 0xd], 1 */
L_161AD083:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x161AD083: sub ebx, eax */
    _flag_k = FK_CMP;
    esi = ebx + edi + 0x8; /* 0x161AD085: lea esi, [ebx + edi + 8] */
    if (6u) _cf = (((esi) >> 5) & 1u); /* 0x161AD089: shr esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 6u; /* 0x161AD089: shr esi, 6 */
    MEM32(ebp + (-0x68)) = ebx; /* 0x161AD08C: mov dword ptr [ebp - 0x68], ebx */
    MEM32(ebp + (-0x2C)) = 0x67452301u; /* 0x161AD08F: mov dword ptr [ebp - 0x2c], 0x67452301 */
    MEM32(ebp + (-0x28)) = 0xEFCDAB89u; /* 0x161AD096: mov dword ptr [ebp - 0x28], 0xefcdab89 */
    MEM32(ebp + (-0x24)) = 0x98BADCFEu; /* 0x161AD09D: mov dword ptr [ebp - 0x24], 0x98badcfe */
    MEM32(ebp + (-0x20)) = 0x10325476u; /* 0x161AD0A4: mov dword ptr [ebp - 0x20], 0x10325476 */
    MEM32(ebp + (-0x70)) = esi; /* 0x161AD0AB: mov dword ptr [ebp - 0x70], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x161AD0AE: mov dword ptr [ebp - 0x1c], ecx */
    eax = esi + (-0x2); /* 0x161AD0B1: lea eax, [esi - 2] */
    /* cmp MEM8(ebp + (-0xD)), LO8(ecx) */ /* 0x161AD0B4: cmp byte ptr [ebp - 0xd], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD0BC; /* 0x161AD0B7: jne 0x161ad0bc */
L_161AD0B9:
    eax = esi + (-0x1); /* 0x161AD0B9: lea eax, [esi - 1] */
L_161AD0BC:
    MEM32(ebp + (-0x48)) = eax; /* 0x161AD0BC: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x8); /* 0x161AD0BF: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x161AD0C2: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x161AD0C5: mov dword ptr [ebp - 0x14], ecx */
    /* cmp esi, ecx */ /* 0x161AD0C8: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_161AD862; /* 0x161AD0CA: jbe 0x161ad862 */
L_161AD0D0:
    goto L_161AD0DA; /* 0x161AD0D0: jmp 0x161ad0da */
L_161AD0D2:
    ebx = MEM32(ebp + (-0x68)); /* 0x161AD0D2: mov ebx, dword ptr [ebp - 0x68] */
    edi = MEM32(ebp + 0xC); /* 0x161AD0D5: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x161AD0D8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_161AD0DA:
    eax = MEM32(ebp + (-0x48)); /* 0x161AD0DA: mov eax, dword ptr [ebp - 0x48] */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x161AD0DD: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD1AF; /* 0x161AD0E0: jne 0x161ad1af */
L_161AD0E6:
    /* cmp MEM8(ebp + (-0xD)), LO8(ecx) */ /* 0x161AD0E6: cmp byte ptr [ebp - 0xd], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD13C; /* 0x161AD0E9: jne 0x161ad13c */
L_161AD0EB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AD0EB: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AD0EC: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD1A7; /* 0x161AD0EF: jne 0x161ad1a7 */
L_161AD0F5:
    esi = edi; /* 0x161AD0F5: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x1C)); /* 0x161AD0F7: sub esi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x161AD0FA: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x161AD0FC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x161AD0FC: shl eax, 4 */
    _flag_a = (uint32_t)((eax | 0xFu)); _flag_b = (uint32_t)((eax | 0xFu));
    eax = eax | 0xFu; /* 0x161AD0FF: or eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AD102: push esi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x161AD103: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xB8)) = eax; /* 0x161AD106: mov dword ptr [ebp - 0xb8], eax */
    eax = ebp + (-0xB4); /* 0x161AD10C: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x161AD112: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AD113: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x161AD118: push ebx */
    eax = ebp + esi + (-0xB4); /* 0x161AD119: lea eax, [ebp + esi - 0xb4] */
    PUSH32(esp, 0x16001E68u); /* 0x161AD120: push 0x16001e68 */
    PUSH32(esp, eax); /* 0x161AD125: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AD126: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0x04000000u)); _flag_b = (uint32_t)((edi | 0x04000000u));
    edi = edi | 0x04000000u; /* 0x161AD12B: or edi, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161AD131: add esp, 0x18 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x161AD134: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x161AD134: shl edi, 2 */
    MEM32(ebp + (-0x7C)) = edi; /* 0x161AD137: mov dword ptr [ebp - 0x7c], edi */
    goto L_161AD1A7; /* 0x161AD13A: jmp 0x161ad1a7 */
L_161AD13C:
    eax = esi + (-0x2); /* 0x161AD13C: lea eax, [esi - 2] */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x161AD13F: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD176; /* 0x161AD142: jne 0x161ad176 */
L_161AD144:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x1C)); /* 0x161AD144: sub edi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    eax = ebp + (-0xB8); /* 0x161AD147: lea eax, [ebp - 0xb8] */
    PUSH32(esp, edi); /* 0x161AD14D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x161AD14E: push dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x161AD151: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AD152: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFC8u; /* 0x161AD157: add ebx, -0x38 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x161AD15A: push ebx */
    eax = ebp + edi + (-0xB8); /* 0x161AD15B: lea eax, [ebp + edi - 0xb8] */
    PUSH32(esp, 0x16001E68u); /* 0x161AD162: push 0x16001e68 */
    PUSH32(esp, eax); /* 0x161AD167: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x161AD168: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x161AD16D: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AD170: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x48)) = esi; /* 0x161AD171: mov dword ptr [ebp - 0x48], esi */
    goto L_161AD1A7; /* 0x161AD174: jmp 0x161ad1a7 */
L_161AD176:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x161AD176: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AD177: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD1A7; /* 0x161AD17A: jne 0x161ad1a7 */
L_161AD17C:
    eax = MEM32(ebp + 0xC); /* 0x161AD17C: mov eax, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x161AD17F: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x161AD17F: shl edi, 4 */
    _flag_a = (uint32_t)((edi | 0xFu)); _flag_b = (uint32_t)((edi | 0xFu));
    edi = edi | 0xFu; /* 0x161AD182: or edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB8)) = edi; /* 0x161AD185: mov dword ptr [ebp - 0xb8], edi */
    PUSH32(esp, 0xEu); /* 0x161AD18B: push 0xe */
    _flag_a = (uint32_t)((eax | 0x04000000u)); _flag_b = (uint32_t)((eax | 0x04000000u));
    eax = eax | 0x04000000u; /* 0x161AD18D: or eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x16001E30; /* 0x161AD192: lea esi, [ebx + 0x16001e30] */
    ecx = POP32_VAL(esp); /* 0x161AD198: pop ecx */
    edi = ebp + (-0xB4); /* 0x161AD199: lea edi, [ebp - 0xb4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x161AD19F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x161AD19F: shl eax, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x161AD1A2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x161AD1A4: mov dword ptr [ebp - 0x7c], eax */
L_161AD1A7:
    esi = ebp + (-0xB8); /* 0x161AD1A7: lea esi, [ebp - 0xb8] */
    goto L_161AD1B2; /* 0x161AD1AD: jmp 0x161ad1b2 */
L_161AD1AF:
    esi = MEM32(ebp + (-0x18)); /* 0x161AD1AF: mov esi, dword ptr [ebp - 0x18] */
L_161AD1B2:
    eax = MEM32(ebp + (-0x2C)); /* 0x161AD1B2: mov eax, dword ptr [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x20)); /* 0x161AD1B5: mov edi, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x24)); /* 0x161AD1B8: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x28)); /* 0x161AD1BB: mov ecx, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0xD76AA478u); /* 0x161AD1BE: push 0xd76aa478 */
    PUSH32(esp, 7); /* 0x161AD1C3: push 7 */
    MEM32(ebp + (-0xC)) = eax; /* 0x161AD1C5: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x161AD1C8: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x161AD1CA: push eax */
    PUSH32(esp, edi); /* 0x161AD1CB: push edi */
    PUSH32(esp, edx); /* 0x161AD1CC: push edx */
    MEM32(ebp + (-0x50)) = eax; /* 0x161AD1CD: mov dword ptr [ebp - 0x50], eax */
    PUSH32(esp, ecx); /* 0x161AD1D0: push ecx */
    eax = ebp + (-0xC); /* 0x161AD1D1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD1D4: push eax */
    MEM32(ebp + 0x8) = ecx; /* 0x161AD1D5: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x161AD1D8: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x161AD1DB: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD1DE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x161AD1E3: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0xE8C7B756u); /* 0x161AD1E6: push 0xe8c7b756 */
    PUSH32(esp, 0xCu); /* 0x161AD1EB: push 0xc */
    PUSH32(esp, eax); /* 0x161AD1ED: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x161AD1EE: push dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x161AD1F1: mov dword ptr [ebp - 0x5c], eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x161AD1F4: push dword ptr [ebp - 0x28] */
    eax = ebp + (-0x4); /* 0x161AD1F7: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD1FA: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD1FD: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD1FE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x161AD203: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, 0x242070DBu); /* 0x161AD206: push 0x242070db */
    PUSH32(esp, 0x11u); /* 0x161AD20B: push 0x11 */
    PUSH32(esp, eax); /* 0x161AD20D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x161AD20E: push dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x161AD211: mov dword ptr [ebp - 0x3c], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD214: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161AD217: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD21A: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD21D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD21E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x161AD223: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 0xC1BDCEEEu); /* 0x161AD226: push 0xc1bdceee */
    PUSH32(esp, 0x16u); /* 0x161AD22B: push 0x16 */
    PUSH32(esp, eax); /* 0x161AD22D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD22E: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x54)) = eax; /* 0x161AD231: mov dword ptr [ebp - 0x54], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD234: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161AD237: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD23A: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD23D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD23E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x161AD243: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, 0xF57C0FAFu); /* 0x161AD246: push 0xf57c0faf */
    PUSH32(esp, 7); /* 0x161AD24B: push 7 */
    PUSH32(esp, eax); /* 0x161AD24D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD24E: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x58)) = eax; /* 0x161AD251: mov dword ptr [ebp - 0x58], eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD254: push dword ptr [ebp - 8] */
    eax = ebp + (-0xC); /* 0x161AD257: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD25A: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD25D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD25E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x14); /* 0x161AD263: mov edi, dword ptr [esi + 0x14] */
    PUSH32(esp, 0x4787C62Au); /* 0x161AD266: push 0x4787c62a */
    PUSH32(esp, 0xCu); /* 0x161AD26B: push 0xc */
    PUSH32(esp, edi); /* 0x161AD26D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD26E: push dword ptr [ebp - 8] */
    eax = ebp + (-0x4); /* 0x161AD271: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD274: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x78)) = edi; /* 0x161AD277: mov dword ptr [ebp - 0x78], edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD27A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD27D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD27E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x161AD283: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 0xA8304613u); /* 0x161AD286: push 0xa8304613 */
    PUSH32(esp, 0x11u); /* 0x161AD28B: push 0x11 */
    PUSH32(esp, eax); /* 0x161AD28D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD28E: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x161AD291: mov dword ptr [ebp - 0x64], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD294: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD297: push dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x161AD29A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD29D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD29E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x161AD2A3: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 0xFD469501u); /* 0x161AD2A6: push 0xfd469501 */
    PUSH32(esp, 0x16u); /* 0x161AD2AB: push 0x16 */
    PUSH32(esp, eax); /* 0x161AD2AD: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD2AE: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x161AD2B1: mov dword ptr [ebp - 0x38], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD2B4: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161AD2B7: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD2BA: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD2BD: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD2BE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x20); /* 0x161AD2C3: mov ebx, dword ptr [esi + 0x20] */
    PUSH32(esp, 0x698098D8u); /* 0x161AD2C6: push 0x698098d8 */
    PUSH32(esp, 7); /* 0x161AD2CB: push 7 */
    PUSH32(esp, ebx); /* 0x161AD2CD: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD2CE: push dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x161AD2D1: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD2D4: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x74)) = ebx; /* 0x161AD2D7: mov dword ptr [ebp - 0x74], ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD2DA: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD2DD: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD2DE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x24); /* 0x161AD2E3: mov eax, dword ptr [esi + 0x24] */
    PUSH32(esp, 0x8B44F7AFu); /* 0x161AD2E6: push 0x8b44f7af */
    PUSH32(esp, 0xCu); /* 0x161AD2EB: push 0xc */
    PUSH32(esp, eax); /* 0x161AD2ED: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD2EE: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x44)) = eax; /* 0x161AD2F1: mov dword ptr [ebp - 0x44], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD2F4: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x161AD2F7: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD2FA: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD2FD: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD2FE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x28); /* 0x161AD303: mov eax, dword ptr [esi + 0x28] */
    PUSH32(esp, 0xFFFF5BB1u); /* 0x161AD306: push 0xffff5bb1 */
    PUSH32(esp, 0x11u); /* 0x161AD30B: push 0x11 */
    PUSH32(esp, eax); /* 0x161AD30D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD30E: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x161AD311: mov dword ptr [ebp - 0x30], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD314: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161AD317: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD31A: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD31D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD31E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x2C); /* 0x161AD323: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, 0x895CD7BEu); /* 0x161AD326: push 0x895cd7be */
    PUSH32(esp, 0x16u); /* 0x161AD32B: push 0x16 */
    PUSH32(esp, eax); /* 0x161AD32D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD32E: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x34)) = eax; /* 0x161AD331: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD334: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161AD337: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD33A: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD33D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD33E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x30); /* 0x161AD343: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, 0x6B901122u); /* 0x161AD346: push 0x6b901122 */
    PUSH32(esp, 7); /* 0x161AD34B: push 7 */
    PUSH32(esp, eax); /* 0x161AD34D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD34E: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x40)) = eax; /* 0x161AD351: mov dword ptr [ebp - 0x40], eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD354: push dword ptr [ebp - 8] */
    eax = ebp + (-0xC); /* 0x161AD357: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD35A: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD35D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD35E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x34); /* 0x161AD363: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, 0xFD987193u); /* 0x161AD366: push 0xfd987193 */
    PUSH32(esp, 0xCu); /* 0x161AD36B: push 0xc */
    PUSH32(esp, eax); /* 0x161AD36D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD36E: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x60)) = eax; /* 0x161AD371: mov dword ptr [ebp - 0x60], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD374: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x161AD377: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD37A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD37D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD37E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x161AD383: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0xA679438Eu); /* 0x161AD386: push 0xa679438e */
    PUSH32(esp, 0x11u); /* 0x161AD38B: push 0x11 */
    PUSH32(esp, eax); /* 0x161AD38D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD38E: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x161AD391: mov dword ptr [ebp - 0x4c], eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD394: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x8); /* 0x161AD397: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD39A: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD39D: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD39E: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x3C); /* 0x161AD3A3: mov esi, dword ptr [esi + 0x3c] */
    PUSH32(esp, 0x49B40821u); /* 0x161AD3A6: push 0x49b40821 */
    PUSH32(esp, 0x16u); /* 0x161AD3AB: push 0x16 */
    PUSH32(esp, esi); /* 0x161AD3AD: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD3AE: push dword ptr [ebp - 0xc] */
    eax = ebp + 0x8; /* 0x161AD3B1: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD3B4: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x6C)) = esi; /* 0x161AD3B7: mov dword ptr [ebp - 0x6c], esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD3BA: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD3BD: push eax */
    RECOMP_CALL(sub_161AC7E9); /* 0x161AD3BE: call 0x161ac7e9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xF61E2562u); /* 0x161AD3C3: push 0xf61e2562 */
    PUSH32(esp, 5); /* 0x161AD3C8: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x161AD3CA: push dword ptr [ebp - 0x5c] */
    eax = ebp + (-0xC); /* 0x161AD3CD: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD3D0: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD3D3: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD3D6: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD3D9: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD3DA: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC040B340u); /* 0x161AD3DF: push 0xc040b340 */
    PUSH32(esp, 9); /* 0x161AD3E4: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x161AD3E6: push dword ptr [ebp - 0x64] */
    eax = ebp + (-0x4); /* 0x161AD3E9: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD3EC: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD3EF: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD3F2: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD3F5: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD3F6: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x265E5A51u); /* 0x161AD3FB: push 0x265e5a51 */
    PUSH32(esp, 0xEu); /* 0x161AD400: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x161AD402: push dword ptr [ebp - 0x34] */
    eax = ebp + (-0x8); /* 0x161AD405: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD408: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD40B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD40E: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD411: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD412: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xE9B6C7AAu); /* 0x161AD417: push 0xe9b6c7aa */
    PUSH32(esp, 0x14u); /* 0x161AD41C: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x161AD41E: push dword ptr [ebp - 0x50] */
    eax = ebp + 0x8; /* 0x161AD421: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD424: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD427: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD42A: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD42D: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD42E: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xD62F105Du); /* 0x161AD433: push 0xd62f105d */
    PUSH32(esp, 5); /* 0x161AD438: push 5 */
    PUSH32(esp, edi); /* 0x161AD43A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD43B: push dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x161AD43E: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD441: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD444: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD447: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD448: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x02441453u); /* 0x161AD44D: push 0x2441453 */
    PUSH32(esp, 9); /* 0x161AD452: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x161AD454: push dword ptr [ebp - 0x30] */
    eax = ebp + (-0x4); /* 0x161AD457: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD45A: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD45D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD460: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD463: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD464: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xD8A1E681u); /* 0x161AD469: push 0xd8a1e681 */
    PUSH32(esp, 0xEu); /* 0x161AD46E: push 0xe */
    PUSH32(esp, esi); /* 0x161AD470: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD471: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD474: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD477: push dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x161AD47A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD47D: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD47E: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xE7D3FBC8u); /* 0x161AD483: push 0xe7d3fbc8 */
    PUSH32(esp, 0x14u); /* 0x161AD488: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x161AD48A: push dword ptr [ebp - 0x58] */
    eax = ebp + 0x8; /* 0x161AD48D: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD490: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD493: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD496: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD499: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD49A: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21E1CDE6u); /* 0x161AD49F: push 0x21e1cde6 */
    PUSH32(esp, 5); /* 0x161AD4A4: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x161AD4A6: push dword ptr [ebp - 0x44] */
    eax = ebp + (-0xC); /* 0x161AD4A9: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD4AC: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD4AF: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD4B2: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD4B5: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD4B6: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC33707D6u); /* 0x161AD4BB: push 0xc33707d6 */
    PUSH32(esp, 9); /* 0x161AD4C0: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x161AD4C2: push dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x4); /* 0x161AD4C5: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD4C8: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD4CB: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD4CE: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x161AD4D1: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD4D2: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xF4D50D87u); /* 0x161AD4D7: push 0xf4d50d87 */
    PUSH32(esp, 0xEu); /* 0x161AD4DC: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x161AD4DE: push dword ptr [ebp - 0x54] */
    eax = ebp + (-0x8); /* 0x161AD4E1: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD4E4: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD4E7: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD4EA: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD4ED: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD4EE: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x455A14EDu); /* 0x161AD4F3: push 0x455a14ed */
    PUSH32(esp, 0x14u); /* 0x161AD4F8: push 0x14 */
    PUSH32(esp, ebx); /* 0x161AD4FA: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x161AD4FB: push dword ptr [ebp - 0xc] */
    eax = ebp + 0x8; /* 0x161AD4FE: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD501: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD504: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD507: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD508: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xA9E3E905u); /* 0x161AD50D: push 0xa9e3e905 */
    PUSH32(esp, 5); /* 0x161AD512: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x161AD514: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xC); /* 0x161AD517: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD51A: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD51D: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD520: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x161AD523: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD524: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x161AD529: mov esi, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0xFCEFA3F8u); /* 0x161AD52C: push 0xfcefa3f8 */
    PUSH32(esp, 9); /* 0x161AD531: push 9 */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x161AD533: push dword ptr [ebp - 0x3c] */
    eax = ebp + (-0x4); /* 0x161AD536: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD539: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD53C: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161AD53F: push esi */
    PUSH32(esp, eax); /* 0x161AD540: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD541: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x676F02D9u); /* 0x161AD546: push 0x676f02d9 */
    PUSH32(esp, 0xEu); /* 0x161AD54B: push 0xe */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x161AD54D: push dword ptr [ebp - 0x38] */
    eax = ebp + (-0x8); /* 0x161AD550: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD553: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x161AD556: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD557: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x161AD55A: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD55B: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8D2A4C8Au); /* 0x161AD560: push 0x8d2a4c8a */
    PUSH32(esp, 0x14u); /* 0x161AD565: push 0x14 */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x161AD567: push dword ptr [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x161AD56A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x161AD56B: push dword ptr [ebp - 4] */
    eax = ebp + 0x8; /* 0x161AD56E: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x161AD571: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x161AD574: push eax */
    RECOMP_CALL(sub_161AC81D); /* 0x161AD575: call 0x161ac81d */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x161AD57A: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x161AD57D: mov ecx, dword ptr [ebp - 8] */
    eax = edx; /* 0x161AD580: mov eax, edx */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x161AD582: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x8)));
    eax = eax ^ MEM32(ebp + 0x8); /* 0x161AD584: xor eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x161AD587: add eax, edi */
    _flag_k = FK_ADD;
    eax = eax + esi + (-0x5C6BE); /* 0x161AD589: lea eax, [eax + esi - 0x5c6be] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD590: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x161AD593: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161AD596: mov esi, ecx */
    _flag_a = (uint32_t)((esi ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((esi ^ MEM32(ebp + 0x8)));
    esi = esi ^ MEM32(ebp + 0x8); /* 0x161AD598: xor esi, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD59B: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x161AD59D: add esi, ebx */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x788E097F); /* 0x161AD59F: lea edx, [esi + edx - 0x788e097f] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD5A6: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD5A9: add edx, eax */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x161AD5AB: mov ebx, dword ptr [ebp + 8] */
    esi = edx; /* 0x161AD5AE: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((esi ^ MEM32(ebp + 0x8)));
    esi = esi ^ MEM32(ebp + 0x8); /* 0x161AD5B0: xor esi, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD5B3: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x34)); /* 0x161AD5B5: add esi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    edi = esi + ecx + 0x6D9D6122; /* 0x161AD5B8: lea edi, [esi + ecx + 0x6d9d6122] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161AD5BF: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161AD5C2: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD5C4: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161AD5C6: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x161AD5C8: mov ecx, esi */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x161AD5CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4C)); /* 0x161AD5CC: add ecx, dword ptr [ebp - 0x4c] */
    _flag_k = FK_ADD;
    ecx = ecx + ebx + (-0x21AC7F4); /* 0x161AD5CF: lea ecx, [ecx + ebx - 0x21ac7f4] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD5D6: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AD5D9: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD5DB: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x5C)); /* 0x161AD5DD: add esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_ADD;
    eax = esi + eax + (-0x5B4115BC); /* 0x161AD5E0: lea eax, [esi + eax - 0x5b4115bc] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD5E7: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD5EA: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161AD5EC: mov esi, edi */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD5EE: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD5F0: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x58)); /* 0x161AD5F2: add esi, dword ptr [ebp - 0x58] */
    _flag_k = FK_ADD;
    edx = esi + edx + 0x4BDECFA9; /* 0x161AD5F5: lea edx, [esi + edx + 0x4bdecfa9] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD5FC: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD5FF: add edx, eax */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD601: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD603: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD605: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x161AD607: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edi = esi + edi + (-0x944B4A0); /* 0x161AD60A: lea edi, [esi + edi - 0x944b4a0] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161AD611: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161AD614: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD616: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161AD618: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x161AD61A: mov ebx, esi */
    _flag_a = (uint32_t)((ebx ^ eax)); _flag_b = (uint32_t)((ebx ^ eax));
    ebx = ebx ^ eax; /* 0x161AD61C: xor ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x30)); /* 0x161AD61E: add ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    ecx = ebx + ecx + (-0x41404390); /* 0x161AD621: lea ecx, [ebx + ecx - 0x41404390] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD628: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AD62B: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD62D: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x60)); /* 0x161AD62F: add esi, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    eax = esi + eax + 0x289B7EC6; /* 0x161AD632: lea eax, [esi + eax + 0x289b7ec6] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD639: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD63C: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161AD63E: mov esi, edi */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD640: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD642: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x50)); /* 0x161AD644: add esi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x155ED806); /* 0x161AD647: lea edx, [esi + edx - 0x155ed806] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD64E: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD651: add edx, eax */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD653: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD655: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD657: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x161AD659: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    esi = esi + edi + (-0x2B10CF7B); /* 0x161AD65C: lea esi, [esi + edi - 0x2b10cf7b] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161AD663: rol esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161AD666: add esi, edx */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161AD668: mov edi, edx */
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161AD66A: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x161AD66C: mov ebx, edi */
    _flag_a = (uint32_t)((ebx ^ eax)); _flag_b = (uint32_t)((ebx ^ eax));
    ebx = ebx ^ eax; /* 0x161AD66E: xor ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x64)); /* 0x161AD670: add ebx, dword ptr [ebp - 0x64] */
    _flag_k = FK_ADD;
    ecx = ebx + ecx + 0x4881D05; /* 0x161AD673: lea ecx, [ebx + ecx + 0x4881d05] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD67A: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161AD67D: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161AD67F: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x44)); /* 0x161AD681: add edi, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    eax = edi + eax + (-0x262B2FC7); /* 0x161AD684: lea eax, [edi + eax - 0x262b2fc7] */
    edi = esi; /* 0x161AD68B: mov edi, esi */
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161AD68D: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD68F: rol eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD692: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161AD694: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x40)); /* 0x161AD696: add edi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x1924661B); /* 0x161AD699: lea edx, [edi + edx - 0x1924661b] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD6A0: rol edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD6A3: add edx, eax */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161AD6A5: mov edi, edx */
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161AD6A7: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161AD6A9: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x6C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x6C)); /* 0x161AD6AB: add edi, dword ptr [ebp - 0x6c] */
    _flag_k = FK_ADD;
    edi = edi + esi + 0x1FA27CF8; /* 0x161AD6AE: lea edi, [edi + esi + 0x1fa27cf8] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161AD6B5: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161AD6B8: add edi, edx */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD6BA: mov esi, edx */
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161AD6BC: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD6BE: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x3C)); /* 0x161AD6C0: add esi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + (-0x3B53A99B); /* 0x161AD6C3: lea ecx, [esi + ecx - 0x3b53a99b] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD6CA: ror ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AD6CD: add ecx, edi */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD6CF: mov esi, edx */
    esi = ~esi; /* 0x161AD6D1: not esi */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x161AD6D3: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161AD6D5: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x50)); /* 0x161AD6D7: add esi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    eax = esi + eax + (-0xBD6DDBC); /* 0x161AD6DA: lea eax, [esi + eax - 0xbd6ddbc] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD6E1: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD6E4: add eax, ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x161AD6E6: mov esi, edi */
    esi = ~esi; /* 0x161AD6E8: not esi */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x161AD6EA: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD6EC: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x161AD6EE: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edx = esi + edx + 0x432AFF97; /* 0x161AD6F1: lea edx, [esi + edx + 0x432aff97] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD6F8: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD6FB: add edx, eax */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161AD6FD: mov esi, ecx */
    esi = ~esi; /* 0x161AD6FF: not esi */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x161AD701: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD703: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4C)); /* 0x161AD705: add esi, dword ptr [ebp - 0x4c] */
    _flag_k = FK_ADD;
    edi = esi + edi + (-0x546BDC59); /* 0x161AD708: lea edi, [esi + edi - 0x546bdc59] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x161AD70F: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x161AD712: add edi, edx */
    _flag_k = FK_ADD;
    esi = eax; /* 0x161AD714: mov esi, eax */
    esi = ~esi; /* 0x161AD716: not esi */
    _flag_a = (uint32_t)((esi | edi)); _flag_b = (uint32_t)((esi | edi));
    esi = esi | edi; /* 0x161AD718: or esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edx)); _flag_b = (uint32_t)((esi ^ edx));
    esi = esi ^ edx; /* 0x161AD71A: xor esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x78)); /* 0x161AD71C: add esi, dword ptr [ebp - 0x78] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + (-0x36C5FC7); /* 0x161AD71F: lea ecx, [esi + ecx - 0x36c5fc7] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD726: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x161AD729: add ecx, edi */
    _flag_k = FK_ADD;
    esi = edx; /* 0x161AD72B: mov esi, edx */
    esi = ~esi; /* 0x161AD72D: not esi */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x161AD72F: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edi)); _flag_b = (uint32_t)((esi ^ edi));
    esi = esi ^ edi; /* 0x161AD731: xor esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x40)); /* 0x161AD733: add esi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    eax = esi + eax + 0x655B59C3; /* 0x161AD736: lea eax, [esi + eax + 0x655b59c3] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD73D: rol eax, 6 */
    esi = edi; /* 0x161AD740: mov esi, edi */
    esi = ~esi; /* 0x161AD742: not esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD744: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x161AD746: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x161AD748: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x161AD74A: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    edx = esi + edx + (-0x70F3336E); /* 0x161AD74D: lea edx, [esi + edx - 0x70f3336e] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD754: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD757: add edx, eax */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x161AD759: mov esi, ecx */
    esi = ~esi; /* 0x161AD75B: not esi */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x161AD75D: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x161AD75F: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x30)); /* 0x161AD761: add esi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    esi = esi + edi + (-0x100B83); /* 0x161AD764: lea esi, [esi + edi - 0x100b83] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161AD76B: rol esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161AD76E: add esi, edx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x161AD770: mov edi, eax */
    edi = ~edi; /* 0x161AD772: not edi */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161AD774: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161AD776: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x5C)); /* 0x161AD778: add edi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + (-0x7A7BA22F); /* 0x161AD77B: lea ecx, [edi + ecx - 0x7a7ba22f] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD782: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161AD785: add ecx, esi */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161AD787: mov edi, edx */
    edi = ~edi; /* 0x161AD789: not edi */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x161AD78B: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161AD78D: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x74)); /* 0x161AD78F: add edi, dword ptr [ebp - 0x74] */
    _flag_k = FK_ADD;
    eax = edi + eax + 0x6FA87E4F; /* 0x161AD792: lea eax, [edi + eax + 0x6fa87e4f] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD799: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD79C: add eax, ecx */
    _flag_k = FK_ADD;
    edi = esi; /* 0x161AD79E: mov edi, esi */
    edi = ~edi; /* 0x161AD7A0: not edi */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161AD7A2: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161AD7A4: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x6C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x6C)); /* 0x161AD7A6: add edi, dword ptr [ebp - 0x6c] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x1D31920); /* 0x161AD7A9: lea edx, [edi + edx - 0x1d31920] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD7B0: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD7B3: add edx, eax */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x161AD7B5: mov edi, ecx */
    edi = ~edi; /* 0x161AD7B7: not edi */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x161AD7B9: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161AD7BB: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x64)); /* 0x161AD7BD: add edi, dword ptr [ebp - 0x64] */
    _flag_k = FK_ADD;
    esi = edi + esi + (-0x5CFEBCEC); /* 0x161AD7C0: lea esi, [edi + esi - 0x5cfebcec] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161AD7C7: rol esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161AD7CA: add esi, edx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x161AD7CC: mov edi, eax */
    edi = ~edi; /* 0x161AD7CE: not edi */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161AD7D0: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161AD7D2: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x60)); /* 0x161AD7D4: add edi, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + 0x4E0811A1; /* 0x161AD7D7: lea ecx, [edi + ecx + 0x4e0811a1] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD7DE: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161AD7E1: add ecx, esi */
    _flag_k = FK_ADD;
    edi = edx; /* 0x161AD7E3: mov edi, edx */
    edi = ~edi; /* 0x161AD7E5: not edi */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x161AD7E7: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x161AD7E9: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x58)); /* 0x161AD7EB: add edi, dword ptr [ebp - 0x58] */
    _flag_k = FK_ADD;
    eax = edi + eax + (-0x8AC817E); /* 0x161AD7EE: lea eax, [edi + eax - 0x8ac817e] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x161AD7F5: rol eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x161AD7F8: add eax, ecx */
    _flag_k = FK_ADD;
    edi = esi; /* 0x161AD7FA: mov edi, esi */
    edi = ~edi; /* 0x161AD7FC: not edi */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x161AD7FE: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ ecx)); _flag_b = (uint32_t)((edi ^ ecx));
    edi = edi ^ ecx; /* 0x161AD800: xor edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x34)); /* 0x161AD802: add edi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    edx = edi + edx + (-0x42C50DCB); /* 0x161AD805: lea edx, [edi + edx - 0x42c50dcb] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x161AD80C: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x161AD80F: add edx, eax */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x161AD811: mov edi, ecx */
    edi = ~edi; /* 0x161AD813: not edi */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x161AD815: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ eax)); _flag_b = (uint32_t)((edi ^ eax));
    edi = edi ^ eax; /* 0x161AD817: xor edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x3C)); /* 0x161AD819: add edi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    esi = edi + esi + 0x2AD7D2BB; /* 0x161AD81C: lea esi, [edi + esi + 0x2ad7d2bb] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x161AD823: rol esi, 0xf */
    edi = eax; /* 0x161AD826: mov edi, eax */
    edi = ~edi; /* 0x161AD828: not edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x161AD82A: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x161AD82C: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x161AD82E: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x44)); /* 0x161AD830: add edi, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    ecx = edi + ecx + (-0x14792C6F); /* 0x161AD833: lea ecx, [edi + ecx - 0x14792c6f] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + esi; /* 0x161AD83A: add dword ptr [ebp - 0x24], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x161AD83D: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + edx; /* 0x161AD840: add dword ptr [ebp - 0x20], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 0x40u; /* 0x161AD843: add dword ptr [ebp - 0x1c], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0x40u; /* 0x161AD847: add dword ptr [ebp - 0x18], 0x40 */
    _flag_k = FK_ADD;
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x161AD84B: ror ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x161AD84E: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + ecx; /* 0x161AD850: add dword ptr [ebp - 0x28], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x161AD853: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x70)); /* 0x161AD856: mov esi, dword ptr [ebp - 0x70] */
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x161AD859: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AD0D2; /* 0x161AD85C: jb 0x161ad0d2 */
L_161AD862:
    edi = MEM32(ebp + 0x10); /* 0x161AD862: mov edi, dword ptr [ebp + 0x10] */
    esi = ebp + (-0x2C); /* 0x161AD865: lea esi, [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD868: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD869: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD86A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x161AD86B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x161AD86C: pop edi */
    esi = POP32_VAL(esp); /* 0x161AD86D: pop esi */
    ebx = POP32_VAL(esp); /* 0x161AD86E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AD86F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161AD870: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161AD89D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AD89Du);

L_161AD89D:
    edi = edi; /* 0x161AD89D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AD89F: push ebp */
    ebp = esp; /* 0x161AD8A0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x161AD8A2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x161AD8A3: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AD8A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161AD8B9; /* 0x161AD8A8: jmp 0x161ad8b9 */
L_161AD8AA:
    /* test eax, eax */ /* 0x161AD8AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AD8BE; /* 0x161AD8AC: jne 0x161ad8be */
L_161AD8AE:
    ecx = MEM32(esi); /* 0x161AD8AE: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x161AD8B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AD8B6; /* 0x161AD8B2: je 0x161ad8b6 */
L_161AD8B4:
    RECOMP_ICALL(ecx); /* 0x161AD8B4: call ecx */
    RECOMP_FLAGS_IN();
L_161AD8B6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x161AD8B6: add esi, 4 */
    _flag_k = FK_ADD;
L_161AD8B9:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x161AD8B9: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_161AD8AA; /* 0x161AD8BC: jb 0x161ad8aa */
L_161AD8BE:
    esi = POP32_VAL(esp); /* 0x161AD8BE: pop esi */
    ebp = POP32_VAL(esp); /* 0x161AD8BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AD8C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AD8C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AD8C6u);

L_161AD8C6:
    PUSH32(esp, 0x80u); /* 0x161AD8C6: push 0x80 */
    RECOMP_ICALL(MEM32(0x16001154)); /* 0x161AD8CB: call dword ptr [0x16001154] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AD8D1: pop ecx */
    MEM32(0x161BABE0) = eax; /* 0x161AD8D2: mov dword ptr [0x161babe0], eax */
    MEM32(0x161BABDC) = eax; /* 0x161AD8D7: mov dword ptr [0x161babdc], eax */
    /* test eax, eax */ /* 0x161AD8DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AD8E2; /* 0x161AD8DE: jne 0x161ad8e2 */
L_161AD8E0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161AD8E0: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AD8E1: ret  */
L_161AD8E2:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x161AD8E2: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AD8E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AD8E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_161AD8ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161AD8EDu);

L_161AD8ED:
    edi = edi; /* 0x161AD8ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AD8EF: push ebp */
    ebp = esp; /* 0x161AD8F0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x161AD8F2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AD8F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x161AD8F5: push esi */
    PUSH32(esp, edi); /* 0x161AD8F6: push edi */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x161AD8F7: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD922; /* 0x161AD8FA: jne 0x161ad922 */
L_161AD8FC:
    /* cmp MEM32(0x161BA868), eax */ /* 0x161AD8FC: cmp dword ptr [0x161ba868], eax */
    _flag_a = (uint32_t)(MEM32(0x161BA868)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_161AD91B; /* 0x161AD902: jle 0x161ad91b */
L_161AD904:
    _flag_a = (uint32_t)(MEM32(0x161BA868)); _flag_b = (uint32_t)(1);
    MEM32(0x161BA868) = MEM32(0x161BA868) - 1; /* 0x161AD904: dec dword ptr [0x161ba868] */
    _flag_k = FK_DEC;
    edi = MEM32(0x16001080); /* 0x161AD90A: mov edi, dword ptr [0x16001080] */
    PUSH32(esp, eax); /* 0x161AD910: push eax */
    esi = 0x161BABD8u; /* 0x161AD911: mov esi, 0x161babd8 */
    goto L_161ADA00; /* 0x161AD916: jmp 0x161ada00 */
L_161AD91B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161AD91B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_161ADA6D; /* 0x161AD91D: jmp 0x161ada6d */
L_161AD922:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x161AD922: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADA6A; /* 0x161AD926: jne 0x161ada6a */
L_161AD92C:
    ecx = MEM32(FS_BASE + (0x18)); /* 0x161AD92C: mov ecx, dword ptr fs:[0x18] */
    ebx = MEM32(ecx + 0x4); /* 0x161AD933: mov ebx, dword ptr [ecx + 4] */
    edi = MEM32(0x16001080); /* 0x161AD936: mov edi, dword ptr [0x16001080] */
    MEM32(ebp + 0xC) = eax; /* 0x161AD93C: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, eax); /* 0x161AD93F: push eax */
    esi = 0x161BABD8u; /* 0x161AD940: mov esi, 0x161babd8 */
    goto L_161AD958; /* 0x161AD945: jmp 0x161ad958 */
L_161AD947:
    /* cmp eax, ebx */ /* 0x161AD947: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AD962; /* 0x161AD949: je 0x161ad962 */
L_161AD94B:
    PUSH32(esp, 0x3E8u); /* 0x161AD94B: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x1600107C)); /* 0x161AD950: call dword ptr [0x1600107c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AD956: push 0 */
L_161AD958:
    PUSH32(esp, ebx); /* 0x161AD958: push ebx */
    PUSH32(esp, esi); /* 0x161AD959: push esi */
    RECOMP_ICALL(edi); /* 0x161AD95A: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161AD95C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AD947; /* 0x161AD95E: jne 0x161ad947 */
L_161AD960:
    goto L_161AD969; /* 0x161AD960: jmp 0x161ad969 */
L_161AD962:
    MEM32(ebp + 0xC) = 1; /* 0x161AD962: mov dword ptr [ebp + 0xc], 1 */
L_161AD969:
    eax = MEM32(0x161BABD4); /* 0x161AD969: mov eax, dword ptr [0x161babd4] */
    PUSH32(esp, 2); /* 0x161AD96E: push 2 */
    edi = POP32_VAL(esp); /* 0x161AD970: pop edi */
    /* test eax, eax */ /* 0x161AD971: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AD97E; /* 0x161AD973: je 0x161ad97e */
L_161AD975:
    PUSH32(esp, 0x1Fu); /* 0x161AD975: push 0x1f */
    RECOMP_CALL(sub_161AE5A6); /* 0x161AD977: call 0x161ae5a6 */
    RECOMP_FLAGS_IN();
    goto L_161AD9B7; /* 0x161AD97C: jmp 0x161ad9b7 */
L_161AD97E:
    PUSH32(esp, 0x160011CCu); /* 0x161AD97E: push 0x160011cc */
    PUSH32(esp, 0x160011C0u); /* 0x161AD983: push 0x160011c0 */
    MEM32(0x161BABD4) = 1; /* 0x161AD988: mov dword ptr [0x161babd4], 1 */
    RECOMP_CALL(sub_161AD89D); /* 0x161AD992: call 0x161ad89d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AD997: pop ecx */
    ecx = POP32_VAL(esp); /* 0x161AD998: pop ecx */
    /* test eax, eax */ /* 0x161AD999: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AD91B; /* 0x161AD99B: jne 0x161ad91b */
L_161AD9A1:
    PUSH32(esp, 0x160011BCu); /* 0x161AD9A1: push 0x160011bc */
    PUSH32(esp, 0x160011B4u); /* 0x161AD9A6: push 0x160011b4 */
    RECOMP_CALL(sub_161AE59A); /* 0x161AD9AB: call 0x161ae59a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AD9B0: pop ecx */
    MEM32(0x161BABD4) = edi; /* 0x161AD9B1: mov dword ptr [0x161babd4], edi */
L_161AD9B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x161AD9B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161AD9B9: pop ecx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x161AD9BA: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161AD9C7; /* 0x161AD9BD: jne 0x161ad9c7 */
L_161AD9BF:
    PUSH32(esp, ebx); /* 0x161AD9BF: push ebx */
    PUSH32(esp, esi); /* 0x161AD9C0: push esi */
    RECOMP_ICALL(MEM32(0x16001074)); /* 0x161AD9C1: call dword ptr [0x16001074] */
    RECOMP_FLAGS_IN();
L_161AD9C7:
    /* cmp MEM32(0x161BABEC), ebx */ /* 0x161AD9C7: cmp dword ptr [0x161babec], ebx */
    _flag_a = (uint32_t)(MEM32(0x161BABEC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161AD9EB; /* 0x161AD9CD: je 0x161ad9eb */
L_161AD9CF:
    PUSH32(esp, 0x161BABECu); /* 0x161AD9CF: push 0x161babec */
    RECOMP_CALL(sub_161AE529); /* 0x161AD9D4: call 0x161ae529 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161AD9D9: pop ecx */
    /* test eax, eax */ /* 0x161AD9DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161AD9EB; /* 0x161AD9DC: je 0x161ad9eb */
L_161AD9DE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161AD9DE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x161AD9E1: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161AD9E2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x161BABEC)); /* 0x161AD9E5: call dword ptr [0x161babec] */
    RECOMP_FLAGS_IN();
L_161AD9EB:
    _flag_a = (uint32_t)(MEM32(0x161BA868)); _flag_b = (uint32_t)(1);
    MEM32(0x161BA868) = MEM32(0x161BA868) + 1; /* 0x161AD9EB: inc dword ptr [0x161ba868] */
    _flag_k = FK_INC;
    goto L_161ADA6A; /* 0x161AD9F1: jmp 0x161ada6a */
L_161AD9F3:
    PUSH32(esp, 0x3E8u); /* 0x161AD9F3: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x1600107C)); /* 0x161AD9F8: call dword ptr [0x1600107c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x161AD9FE: push 0 */
L_161ADA00:
    PUSH32(esp, 1); /* 0x161ADA00: push 1 */
    PUSH32(esp, esi); /* 0x161ADA02: push esi */
    RECOMP_ICALL(edi); /* 0x161ADA03: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x161ADA05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_161AD9F3; /* 0x161ADA07: jne 0x161ad9f3 */
L_161ADA09:
    eax = MEM32(0x161BABD4); /* 0x161ADA09: mov eax, dword ptr [0x161babd4] */
    /* cmp eax, 2 */ /* 0x161ADA0E: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADA1D; /* 0x161ADA11: je 0x161ada1d */
L_161ADA13:
    PUSH32(esp, 0x1Fu); /* 0x161ADA13: push 0x1f */
    RECOMP_CALL(sub_161AE5A6); /* 0x161ADA15: call 0x161ae5a6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x161ADA1A: pop ecx */
    goto L_161ADA6A; /* 0x161ADA1B: jmp 0x161ada6a */
L_161ADA1D:
    ebx = MEM32(0x161BABE0); /* 0x161ADA1D: mov ebx, dword ptr [0x161babe0] */
    /* test ebx, ebx */ /* 0x161ADA23: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ADA57; /* 0x161ADA25: je 0x161ada57 */
L_161ADA27:
    edi = MEM32(0x161BABDC); /* 0x161ADA27: mov edi, dword ptr [0x161babdc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x161ADA2D: add edi, -4 */
    _flag_k = FK_ADD;
    goto L_161ADA3D; /* 0x161ADA30: jmp 0x161ada3d */
L_161ADA32:
    eax = MEM32(edi); /* 0x161ADA32: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x161ADA34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_161ADA3A; /* 0x161ADA36: je 0x161ada3a */
L_161ADA38:
    RECOMP_ICALL(eax); /* 0x161ADA38: call eax */
    RECOMP_FLAGS_IN();
L_161ADA3A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x161ADA3A: sub edi, 4 */
    _flag_k = FK_CMP;
L_161ADA3D:
    /* cmp edi, ebx */ /* 0x161ADA3D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_161ADA32; /* 0x161ADA3F: jae 0x161ada32 */
L_161ADA41:
    PUSH32(esp, ebx); /* 0x161ADA41: push ebx */
    RECOMP_ICALL(MEM32(0x16001150)); /* 0x161ADA42: call dword ptr [0x16001150] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x161BABDC)); _flag_b = (uint32_t)(0);
    MEM32(0x161BABDC) = MEM32(0x161BABDC) & 0; /* 0x161ADA48: and dword ptr [0x161babdc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x161BABE0)); _flag_b = (uint32_t)(0);
    MEM32(0x161BABE0) = MEM32(0x161BABE0) & 0; /* 0x161ADA4F: and dword ptr [0x161babe0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x161ADA56: pop ecx */
L_161ADA57:
    PUSH32(esp, 0); /* 0x161ADA57: push 0 */
    PUSH32(esp, esi); /* 0x161ADA59: push esi */
    MEM32(0x161BABD4) = 0; /* 0x161ADA5A: mov dword ptr [0x161babd4], 0 */
    RECOMP_ICALL(MEM32(0x16001074)); /* 0x161ADA64: call dword ptr [0x16001074] */
    RECOMP_FLAGS_IN();
L_161ADA6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x161ADA6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x161ADA6C: inc eax */
    _flag_k = FK_INC;
L_161ADA6D:
    edi = POP32_VAL(esp); /* 0x161ADA6D: pop edi */
    esi = POP32_VAL(esp); /* 0x161ADA6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x161ADA6F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x161ADA70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161ADA71: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_161ADCCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADCCAu);

L_161ADCCA:
    MEM32(0x161B2080) = 0xFFFFFFFFu; /* 0x161ADCCA: mov dword ptr [0x161b2080], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADCD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADCDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADCDAu);

    goto L_161ADCDA;
L_161ADA79:
    PUSH32(esp, 0x2Cu); /* 0x161ADA79: push 0x2c */
    PUSH32(esp, 0x161B0010u); /* 0x161ADA7B: push 0x161b0010 */
    RECOMP_CALL(sub_161AE5B4); /* 0x161ADA80: call 0x161ae5b4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x161ADA85: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x161ADA88: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x161ADA8A: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edx; /* 0x161ADA8B: mov dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x161ADA8E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADA90: mov dword ptr [ebp - 4], esi */
    MEM32(0x161B2080) = ecx; /* 0x161ADA93: mov dword ptr [0x161b2080], ecx */
    /* cmp ecx, esi */ /* 0x161ADA99: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADAAD; /* 0x161ADA9B: jne 0x161adaad */
L_161ADA9D:
    /* cmp MEM32(0x161BA868), esi */ /* 0x161ADA9D: cmp dword ptr [0x161ba868], esi */
    _flag_a = (uint32_t)(MEM32(0x161BA868)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADAAD; /* 0x161ADAA3: jne 0x161adaad */
L_161ADAA5:
    MEM32(ebp + (-0x1C)) = esi; /* 0x161ADAA5: mov dword ptr [ebp - 0x1c], esi */
    goto L_161ADCB3; /* 0x161ADAA8: jmp 0x161adcb3 */
L_161ADAAD:
    /* cmp ecx, edx */ /* 0x161ADAAD: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADABA; /* 0x161ADAAF: je 0x161adaba */
L_161ADAB1:
    /* cmp ecx, 2 */ /* 0x161ADAB1: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADB47; /* 0x161ADAB4: jne 0x161adb47 */
L_161ADABA:
    eax = MEM32(0x161BABE8); /* 0x161ADABA: mov eax, dword ptr [0x161babe8] */
    /* cmp eax, esi */ /* 0x161ADABF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADAF9; /* 0x161ADAC1: je 0x161adaf9 */
L_161ADAC3:
    MEM32(ebp + (-0x4)) = edx; /* 0x161ADAC3: mov dword ptr [ebp - 4], edx */
    MEM32(0x161BA86C) = edx; /* 0x161ADAC6: mov dword ptr [0x161ba86c], edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ADACC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x161ADACF: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADAD0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x161ADAD3: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ADAD5: mov dword ptr [ebp - 0x1c], eax */
    goto L_161ADAF6; /* 0x161ADAD8: jmp 0x161adaf6 */
L_161ADAF6:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADAF6: mov dword ptr [ebp - 4], esi */
L_161ADAF9:
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x161ADAF9: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADCB3; /* 0x161ADAFC: je 0x161adcb3 */
L_161ADB02:
    MEM32(ebp + (-0x4)) = 2; /* 0x161ADB02: mov dword ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ADB09: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ADB0C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADB0F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AD8ED); /* 0x161ADB12: call 0x161ad8ed */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ADB17: mov dword ptr [ebp - 0x1c], eax */
    goto L_161ADB38; /* 0x161ADB1A: jmp 0x161adb38 */
L_161ADB38:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADB38: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x161ADB3B: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADCB3; /* 0x161ADB3E: je 0x161adcb3 */
L_161ADB44:
    ecx = MEM32(ebp + 0xC); /* 0x161ADB44: mov ecx, dword ptr [ebp + 0xc] */
L_161ADB47:
    MEM32(ebp + (-0x4)) = 3; /* 0x161ADB47: mov dword ptr [ebp - 4], 3 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ADB4E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x161ADB51: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADB52: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_16055C50); /* 0x161ADB55: call 0x16055c50 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ADB5A: mov dword ptr [ebp - 0x1c], eax */
    goto L_161ADB7B; /* 0x161ADB5D: jmp 0x161adb7b */
L_161ADB7B:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADB7B: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x161ADB7E: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADC24; /* 0x161ADB82: jne 0x161adc24 */
L_161ADB88:
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x161ADB88: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADC24; /* 0x161ADB8B: jne 0x161adc24 */
L_161ADB91:
    MEM32(ebp + (-0x4)) = 4; /* 0x161ADB91: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, esi); /* 0x161ADB98: push esi */
    PUSH32(esp, esi); /* 0x161ADB99: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADB9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_16055C50); /* 0x161ADB9D: call 0x16055c50 */
    RECOMP_FLAGS_IN();
    goto L_161ADBBD; /* 0x161ADBA2: jmp 0x161adbbd */
L_161ADBBD:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADBBD: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x4)) = 5; /* 0x161ADBC0: mov dword ptr [ebp - 4], 5 */
    PUSH32(esp, esi); /* 0x161ADBC7: push esi */
    PUSH32(esp, esi); /* 0x161ADBC8: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADBC9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AD8ED); /* 0x161ADBCC: call 0x161ad8ed */
    RECOMP_FLAGS_IN();
    goto L_161ADBEC; /* 0x161ADBD1: jmp 0x161adbec */
L_161ADBEC:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADBEC: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x161BABE8); /* 0x161ADBEF: mov eax, dword ptr [0x161babe8] */
    /* cmp eax, esi */ /* 0x161ADBF4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADC24; /* 0x161ADBF6: je 0x161adc24 */
L_161ADBF8:
    MEM32(ebp + (-0x4)) = 6; /* 0x161ADBF8: mov dword ptr [ebp - 4], 6 */
    PUSH32(esp, esi); /* 0x161ADBFF: push esi */
    PUSH32(esp, esi); /* 0x161ADC00: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADC01: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x161ADC04: call eax */
    RECOMP_FLAGS_IN();
    goto L_161ADC21; /* 0x161ADC06: jmp 0x161adc21 */
L_161ADC21:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADC21: mov dword ptr [ebp - 4], esi */
L_161ADC24:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x161ADC24: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADC33; /* 0x161ADC27: je 0x161adc33 */
L_161ADC29:
    /* cmp MEM32(ebp + 0xC), 3 */ /* 0x161ADC29: cmp dword ptr [ebp + 0xc], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADCB3; /* 0x161ADC2D: jne 0x161adcb3 */
L_161ADC33:
    MEM32(ebp + (-0x4)) = 7; /* 0x161ADC33: mov dword ptr [ebp - 4], 7 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ADC3A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ADC3D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADC40: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_161AD8ED); /* 0x161ADC43: call 0x161ad8ed */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ADC48: mov dword ptr [ebp - 0x1c], eax */
    goto L_161ADC69; /* 0x161ADC4B: jmp 0x161adc69 */
L_161ADC69:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADC69: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x161BABE8); /* 0x161ADC6C: mov eax, dword ptr [0x161babe8] */
    /* cmp eax, esi */ /* 0x161ADC71: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADCB3; /* 0x161ADC73: je 0x161adcb3 */
L_161ADC75:
    /* cmp MEM32(0x161BA86C), esi */ /* 0x161ADC75: cmp dword ptr [0x161ba86c], esi */
    _flag_a = (uint32_t)(MEM32(0x161BA86C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_161ADCB3; /* 0x161ADC7B: je 0x161adcb3 */
L_161ADC7D:
    MEM32(ebp + (-0x4)) = 8; /* 0x161ADC7D: mov dword ptr [ebp - 4], 8 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x161ADC84: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x161ADC87: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x161ADC8A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x161ADC8D: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x161ADC8F: mov dword ptr [ebp - 0x1c], eax */
    goto L_161ADCB0; /* 0x161ADC92: jmp 0x161adcb0 */
L_161ADCB0:
    MEM32(ebp + (-0x4)) = esi; /* 0x161ADCB0: mov dword ptr [ebp - 4], esi */
L_161ADCB3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x161ADCB3: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_161ADCCA); /* 0x161ADCBA: call 0x161adcca */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x161ADCBF: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_161AE5F9); /* 0x161ADCC2: call 0x161ae5f9 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x161ADCC7: ret 0xc */
L_161ADCDA:
    edi = edi; /* 0x161ADCDA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161ADCDC: push ebp */
    ebp = esp; /* 0x161ADCDD: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x161ADCDF: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADCEA; /* 0x161ADCE3: jne 0x161adcea */
L_161ADCE5:
    RECOMP_CALL(sub_161AE63C); /* 0x161ADCE5: call 0x161ae63c */
    RECOMP_FLAGS_IN();
L_161ADCEA:
    ebp = POP32_VAL(esp); /* 0x161ADCEA: pop ebp */
    RECOMP_BACKEDGE();
    goto L_161ADA79; /* 0x161ADCEB: jmp 0x161ada79 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_161ADCF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADCF5u);

L_161ADCF5:
    /* cmp ecx, MEM32(0x161B2070) */ /* 0x161ADCF5: cmp ecx, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x161B2070));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_161ADCFF; /* 0x161ADCFB: jne 0x161adcff */
L_161ADCFD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161ADCFD: repz ret  */
L_161ADCFF:
    goto L_161AE6D2; /* 0x161ADCFF: jmp 0x161ae6d2 */
L_161AE6D2:
    edi = edi; /* 0x161AE6D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x161AE6D4: push ebp */
    ebp = esp; /* 0x161AE6D5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x161AE6D7: sub esp, 0x328 */
    _flag_k = FK_CMP;
    MEM32(0x161BA970) = eax; /* 0x161AE6DD: mov dword ptr [0x161ba970], eax */
    MEM32(0x161BA96C) = ecx; /* 0x161AE6E2: mov dword ptr [0x161ba96c], ecx */
    MEM32(0x161BA968) = edx; /* 0x161AE6E8: mov dword ptr [0x161ba968], edx */
    MEM32(0x161BA964) = ebx; /* 0x161AE6EE: mov dword ptr [0x161ba964], ebx */
    MEM32(0x161BA960) = esi; /* 0x161AE6F4: mov dword ptr [0x161ba960], esi */
    MEM32(0x161BA95C) = edi; /* 0x161AE6FA: mov dword ptr [0x161ba95c], edi */
    MEM16(0x161BA988) = (uint16_t)(_seg_ss); /* 0x161AE700: mov word ptr [0x161ba988], ss */
    MEM16(0x161BA97C) = (uint16_t)(_seg_cs); /* 0x161AE707: mov word ptr [0x161ba97c], cs */
    MEM16(0x161BA958) = (uint16_t)(_seg_ds); /* 0x161AE70E: mov word ptr [0x161ba958], ds */
    MEM16(0x161BA954) = (uint16_t)(_seg_es); /* 0x161AE715: mov word ptr [0x161ba954], es */
    MEM16(0x161BA950) = (uint16_t)(_seg_fs); /* 0x161AE71C: mov word ptr [0x161ba950], fs */
    MEM16(0x161BA94C) = (uint16_t)(_seg_gs); /* 0x161AE723: mov word ptr [0x161ba94c], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x161AE72A: pushfd  */
    POP32(esp, MEM32(0x161BA980)); /* 0x161AE72B: pop dword ptr [0x161ba980] */
    eax = MEM32(ebp); /* 0x161AE731: mov eax, dword ptr [ebp] */
    MEM32(0x161BA974) = eax; /* 0x161AE734: mov dword ptr [0x161ba974], eax */
    eax = MEM32(ebp + 0x4); /* 0x161AE739: mov eax, dword ptr [ebp + 4] */
    MEM32(0x161BA978) = eax; /* 0x161AE73C: mov dword ptr [0x161ba978], eax */
    eax = ebp + 0x8; /* 0x161AE741: lea eax, [ebp + 8] */
    MEM32(0x161BA984) = eax; /* 0x161AE744: mov dword ptr [0x161ba984], eax */
    eax = MEM32(ebp + (-0x320)); /* 0x161AE749: mov eax, dword ptr [ebp - 0x320] */
    MEM32(0x161BA8C0) = 0x00010001u; /* 0x161AE74F: mov dword ptr [0x161ba8c0], 0x10001 */
    eax = MEM32(0x161BA978); /* 0x161AE759: mov eax, dword ptr [0x161ba978] */
    MEM32(0x161BA87C) = eax; /* 0x161AE75E: mov dword ptr [0x161ba87c], eax */
    MEM32(0x161BA870) = 0xC0000409u; /* 0x161AE763: mov dword ptr [0x161ba870], 0xc0000409 */
    MEM32(0x161BA874) = 1; /* 0x161AE76D: mov dword ptr [0x161ba874], 1 */
    eax = MEM32(0x161B2070); /* 0x161AE777: mov eax, dword ptr [0x161b2070] */
    MEM32(ebp + (-0x328)) = eax; /* 0x161AE77C: mov dword ptr [ebp - 0x328], eax */
    eax = MEM32(0x161B2074); /* 0x161AE782: mov eax, dword ptr [0x161b2074] */
    MEM32(ebp + (-0x324)) = eax; /* 0x161AE787: mov dword ptr [ebp - 0x324], eax */
    PUSH32(esp, 0); /* 0x161AE78D: push 0 */
    RECOMP_ICALL(MEM32(0x160010A8)); /* 0x161AE78F: call dword ptr [0x160010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16001EB0u); /* 0x161AE795: push 0x16001eb0 */
    RECOMP_ICALL(MEM32(0x16001040)); /* 0x161AE79A: call dword ptr [0x16001040] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC0000409u); /* 0x161AE7A0: push 0xc0000409 */
    RECOMP_ICALL(MEM32(0x16001008)); /* 0x161AE7A5: call dword ptr [0x16001008] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x161AE7AB: push eax */
    RECOMP_ICALL(MEM32(0x1600100C)); /* 0x161AE7AC: call dword ptr [0x1600100c] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x161AE7B2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x161AE7B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_161ADD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADD16u);

L_161ADD16:
    { _itail_tgt = (uint32_t)(MEM32(0x16001164)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161ADD22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADD22u);

L_161ADD22:
    { _itail_tgt = (uint32_t)(MEM32(0x16001160)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_161ADD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x161ADD30u);

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
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
