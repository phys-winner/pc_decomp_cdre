#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1102791A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102791Au);

L_1102791A:
    PUSH32(esp, ebp); /* 0x1102791A: push ebp */
    ebp = esp; /* 0x1102791B: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1102791D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11027920: push ebx */
    PUSH32(esp, esi); /* 0x11027921: push esi */
    esi = ecx; /* 0x11027922: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11027924: push edi */
    edi = MEM32(esi + 0x10); /* 0x11027925: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, edx */ /* 0x11027928: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11027993; /* 0x1102792A: jb 0x11027993 */
L_1102792C:
    ebx = MEM32(ebp + 0xC); /* 0x1102792C: mov ebx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x1102792F: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x11027931: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x11027933: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102794E; /* 0x11027935: ja 0x1102794e */
L_11027937:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11027937: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edx; /* 0x1102793B: mov dword ptr [esi + 0x10], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11027944; /* 0x1102793E: jb 0x11027944 */
L_11027940:
    eax = MEM32(esi); /* 0x11027940: mov eax, dword ptr [esi] */
    goto L_11027946; /* 0x11027942: jmp 0x11027946 */
L_11027944:
    eax = esi; /* 0x11027944: mov eax, esi */
L_11027946:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11027946: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edx * 2) = (uint16_t)(LO16(ecx)); /* 0x11027948: mov word ptr [eax + edx*2], cx */
    goto L_1102798A; /* 0x1102794C: jmp 0x1102798a */
L_1102794E:
    /* test ebx, ebx */ /* 0x1102794E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102798A; /* 0x11027950: je 0x1102798a */
L_11027952:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11027952: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102795C; /* 0x11027956: jb 0x1102795c */
L_11027958:
    eax = MEM32(esi); /* 0x11027958: mov eax, dword ptr [esi] */
    goto L_1102795E; /* 0x1102795A: jmp 0x1102795e */
L_1102795C:
    eax = esi; /* 0x1102795C: mov eax, esi */
L_1102795E:
    ecx = eax + edx * 2; /* 0x1102795E: lea ecx, [eax + edx*2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x11027961: sub edi, ebx */
    _flag_k = FK_CMP;
    eax = edi; /* 0x11027963: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x11027965: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11027967: push eax */
    eax = ecx + ebx * 2; /* 0x11027968: lea eax, [ecx + ebx*2] */
    PUSH32(esp, eax); /* 0x1102796B: push eax */
    PUSH32(esp, ecx); /* 0x1102796C: push ecx */
    RECOMP_CALL(sub_1102995D); /* 0x1102796D: call 0x1102995d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11027972: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edi; /* 0x11027975: mov dword ptr [esi + 0x10], edi */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11027978: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11027982; /* 0x1102797C: jb 0x11027982 */
L_1102797E:
    eax = MEM32(esi); /* 0x1102797E: mov eax, dword ptr [esi] */
    goto L_11027984; /* 0x11027980: jmp 0x11027984 */
L_11027982:
    eax = esi; /* 0x11027982: mov eax, esi */
L_11027984:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11027984: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x11027986: mov word ptr [eax + edi*2], cx */
L_1102798A:
    edi = POP32_VAL(esp); /* 0x1102798A: pop edi */
    eax = esi; /* 0x1102798B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102798D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102798E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102798F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11027990: ret 8 */
L_11027993:
    PUSH32(esp, 0x11004958u); /* 0x11027993: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x11027998: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102799Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102799E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102799Eu);

L_1102799E:
    PUSH32(esp, ebp); /* 0x1102799E: push ebp */
    ebp = esp; /* 0x1102799F: mov ebp, esp */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x110279A1: mov dl, byte ptr [ebp + 8] */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x110279A4: mov al, byte ptr [ecx + 0x40] */
    MEM8(ecx + 0x40) = (uint8_t)(LO8(edx)); /* 0x110279A7: mov byte ptr [ecx + 0x40], dl */
    ebp = POP32_VAL(esp); /* 0x110279AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110279AB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110279AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279AEu);

L_110279AE:
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x110279AE: mov al, byte ptr [ecx + 0x40] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110279B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110279B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279B2u);

L_110279B2:
    SET_LO16(eax, MEM16(ecx + 0x40)); /* 0x110279B2: mov ax, word ptr [ecx + 0x40] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110279B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110279B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279B7u);

L_110279B7:
    PUSH32(esp, ebp); /* 0x110279B7: push ebp */
    ebp = esp; /* 0x110279B8: mov ebp, esp */
    SET_LO16(edx, MEM16(ebp + 0x8)); /* 0x110279BA: mov dx, word ptr [ebp + 8] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x110279BE: movzx eax, word ptr [ecx + 0x40] */
    MEM16(ecx + 0x40) = (uint16_t)(LO16(edx)); /* 0x110279C2: mov word ptr [ecx + 0x40], dx */
    ebp = POP32_VAL(esp); /* 0x110279C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110279C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110279CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279CAu);

L_110279CA:
    PUSH32(esp, ebp); /* 0x110279CA: push ebp */
    ebp = esp; /* 0x110279CB: mov ebp, esp */
    eax = MEM32(ecx + 0x2C); /* 0x110279CD: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(ebp + 0x8); /* 0x110279D0: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x110279D3: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x1C); /* 0x110279D5: mov ecx, dword ptr [ecx + 0x1c] */
    eax = edx + edx; /* 0x110279D8: lea eax, [edx + edx] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x110279DB: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x110279DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110279DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110279E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279E1u);

L_110279E1:
    eax = MEM32(ecx + 0x8); /* 0x110279E1: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(ecx + 0xC); /* 0x110279E4: mov edx, dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110279E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110279E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110279E8u);

L_110279E8:
    PUSH32(esp, ebp); /* 0x110279E8: push ebp */
    ebp = esp; /* 0x110279E9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110279EB: push esi */
    esi = ecx; /* 0x110279EC: mov esi, ecx */
    RECOMP_CALL(sub_11027CCB); /* 0x110279EE: call 0x11027ccb */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110279F3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110279FD; /* 0x110279F6: je 0x110279fd */
L_110279F8:
    edx = MEM32(ebp + 0x8); /* 0x110279F8: mov edx, dword ptr [ebp + 8] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x110279FB: mov byte ptr [edx], al */
L_110279FD:
    eax = esi; /* 0x110279FD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110279FF: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027A00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11027A01: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11027A04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027A04u);

L_11027A04:
    PUSH32(esp, ebp); /* 0x11027A04: push ebp */
    ebp = esp; /* 0x11027A05: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027A07: push esi */
    esi = ecx; /* 0x11027A08: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11027A0A: push 0xa */
    eax = MEM32(esi); /* 0x11027A0C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027A0E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027A11: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11014868); /* 0x11027A13: call 0x11014868 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x11027A18: movzx eax, al */
    ecx = esi; /* 0x11027A1B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11027A1D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11027A1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11027A2B); /* 0x11027A21: call 0x11027a2b */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11027A26: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027A27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11027A28: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11027A2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027A2Bu);
    RECOMP_EH_ENTER();

L_11027A2B:
    PUSH32(esp, 0x14u); /* 0x11027A2B: push 0x14 */
    eax = 0x1103E77Bu; /* 0x11027A2D: mov eax, 0x1103e77b */
    RECOMP_CALL(sub_1103B3DB); /* 0x11027A32: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11027A37: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11027A39: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027A3C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x11027A3E: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & edi; /* 0x11027A41: and dword ptr [esi + 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & edi; /* 0x11027A44: and dword ptr [esi + 0xc], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11027A47: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x11027A49: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x11027A4C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027A4F: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027A53: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027A5C; /* 0x11027A55: je 0x11027a5c */
L_11027A57:
    eax = MEM32(ecx); /* 0x11027A57: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11027A59: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11027A5C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11027A5C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027A60: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027A62: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11027A63: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11027A65: push ebx */
    RECOMP_CALL(sub_11010675); /* 0x11027A66: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x11027A6B: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027A6E: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11027A71: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027AD7; /* 0x11027A73: je 0x11027ad7 */
L_11027A75:
    eax = MEM32(esi); /* 0x11027A75: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11027A77: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027A7B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027A7E: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11027A82: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_11027A87:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11027A87: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027A90; /* 0x11027A8A: jne 0x11027a90 */
L_11027A8C:
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x11027A8C: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11027AD4; /* 0x11027A8E: jmp 0x11027ad4 */
L_11027A90:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11027A90: mov byte ptr [ebp - 4], 3 */
    /* cmp LO8(eax), MEM8(ebp + 0xC) */ /* 0x11027A94: cmp al, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027AD4; /* 0x11027A97: je 0x11027ad4 */
L_11027A99:
    ecx = MEM32(ebp + 0x8); /* 0x11027A99: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11027A9C: push eax */
    RECOMP_CALL(sub_1102B39E); /* 0x11027A9D: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11027AA2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027AD4; /* 0x11027AA5: je 0x11027ad4 */
L_11027AA7:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ebx; /* 0x11027AA7: add dword ptr [esi + 8], ebx */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x11027AAA: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027AAC: adc dword ptr [esi + 0xc], 0 */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = 2; /* 0x11027AB0: mov dword ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027AB7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027ABA: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x11027ABE: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11027A87; /* 0x11027AC3: jmp 0x11027a87 */
L_11027ACB:
    esi = MEM32(ebp + (-0x14)); /* 0x11027ACB: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027ACE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x11027AD0: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027AD3: inc ebx */
    _flag_k = FK_INC;
L_11027AD4:
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027AD4: mov dword ptr [ebp - 4], ebx */
L_11027AD7:
    eax = MEM32(esi + 0x8); /* 0x11027AD7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ADA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027AE2; /* 0x11027ADD: jne 0x11027ae2 */
L_11027ADF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027ADF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027AE2:
    eax = MEM32(esi); /* 0x11027AE2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027AE4: push 0 */
    PUSH32(esp, edi); /* 0x11027AE6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027AE7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027AEA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027AEC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027AF1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027AF4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027AF8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027AFA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027AFD: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027B01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027B0A; /* 0x11027B03: je 0x11027b0a */
L_11027B05:
    eax = MEM32(ecx); /* 0x11027B05: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027B07: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027B0A:
    eax = esi; /* 0x11027B0A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027B0C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11027B11: ret 8 */
L_11027B3E:
    esi = MEM32(ebp + (-0x14)); /* 0x11027B3E: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11027B41: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027B44: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11027AD7; /* 0x11027B4B: jmp 0x11027ad7 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11027ACBu: goto L_11027ACB;
      case 0x11027B3Eu: goto L_11027B3E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11027AC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027AC5u);

L_11027AC5:
    eax = 0x11027ACBu; /* 0x11027AC5: mov eax, 0x11027acb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027ACA: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027ACB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027ACBu);

L_11027ACB:
    esi = MEM32(ebp + (-0x14)); /* 0x11027ACB: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027ACE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x11027AD0: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027AD3: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027AD4: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(esi + 0x8); /* 0x11027AD7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ADA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027AE2; /* 0x11027ADD: jne 0x11027ae2 */
L_11027ADF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027ADF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027AE2:
    eax = MEM32(esi); /* 0x11027AE2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027AE4: push 0 */
    PUSH32(esp, edi); /* 0x11027AE6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027AE7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027AEA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027AEC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027AF1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027AF4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027AF8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027AFA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027AFD: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027B01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027B0A; /* 0x11027B03: je 0x11027b0a */
L_11027B05:
    eax = MEM32(ecx); /* 0x11027B05: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027B07: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027B0A:
    eax = esi; /* 0x11027B0A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027B0C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11027B11: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11027B14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027B14u);

L_11027B14:
    ecx = MEM32(ebp + (-0x14)); /* 0x11027B14: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11027B17: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11027B19: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11027B1C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11027B1E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027B21: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11027B24: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027B2D; /* 0x11027B28: jne 0x11027b2d */
L_11027B2A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027B2A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027B2D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11027B2D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11027B30: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11027B33: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027B4D; /* 0x11027B36: jne 0x11027b4d */
L_11027B38:
    eax = 0x11027B3Eu; /* 0x11027B38: mov eax, 0x11027b3e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027B3D: ret  */
L_11027B4D:
    PUSH32(esp, 0); /* 0x11027B4D: push 0 */
    PUSH32(esp, 0); /* 0x11027B4F: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x11027B51: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11027B56u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027B3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027B3Eu);

    goto L_11027B3E;
L_11027AD7:
    eax = MEM32(esi + 0x8); /* 0x11027AD7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ADA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027AE2; /* 0x11027ADD: jne 0x11027ae2 */
L_11027ADF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027ADF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027AE2:
    eax = MEM32(esi); /* 0x11027AE2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027AE4: push 0 */
    PUSH32(esp, edi); /* 0x11027AE6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027AE7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027AEA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027AEC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027AF1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027AF4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027AF8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027AFA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027AFD: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027B01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027B0A; /* 0x11027B03: je 0x11027b0a */
L_11027B05:
    eax = MEM32(ecx); /* 0x11027B05: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027B07: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027B0A:
    eax = esi; /* 0x11027B0A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027B0C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11027B11: ret 8 */
L_11027B3E:
    esi = MEM32(ebp + (-0x14)); /* 0x11027B3E: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11027B41: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027B44: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11027AD7; /* 0x11027B4B: jmp 0x11027ad7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027B57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027B57u);

L_11027B57:
    PUSH32(esp, ebp); /* 0x11027B57: push ebp */
    ebp = esp; /* 0x11027B58: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027B5A: push esi */
    esi = ecx; /* 0x11027B5B: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11027B5D: push 0xa */
    eax = MEM32(esi); /* 0x11027B5F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027B61: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027B64: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11014868); /* 0x11027B66: call 0x11014868 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x11027B6B: movzx eax, al */
    ecx = esi; /* 0x11027B6E: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11027B70: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027B71: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027B74: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11027B77: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11027B84); /* 0x11027B7A: call 0x11027b84 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11027B7F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027B80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11027B81: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11027B84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027B84u);
    RECOMP_EH_ENTER();

L_11027B84:
    PUSH32(esp, 0x18u); /* 0x11027B84: push 0x18 */
    eax = 0x1103E7A6u; /* 0x11027B86: mov eax, 0x1103e7a6 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11027B8B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11027B90: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11027B92: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027B95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11027B97: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = ebx; /* 0x11027B9A: mov dword ptr [esi + 8], ebx */
    edi = ebx; /* 0x11027B9D: mov edi, ebx */
    MEM32(esi + 0xC) = ebx; /* 0x11027B9F: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(esi); /* 0x11027BA2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11027BA4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027BA7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027BAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027BB4; /* 0x11027BAD: je 0x11027bb4 */
L_11027BAF:
    eax = MEM32(ecx); /* 0x11027BAF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11027BB1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11027BB4:
    PUSH32(esp, 1); /* 0x11027BB4: push 1 */
    ecx = esi; /* 0x11027BB6: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027BB8: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_11010675); /* 0x11027BBB: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11027BC0: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027BC3: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11027BCA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027C1C; /* 0x11027BCC: je 0x11027c1c */
L_11027BCE:
    eax = MEM32(ebp + 0x10); /* 0x11027BCE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11027BD1: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, ebx */ /* 0x11027BD4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11027C1C; /* 0x11027BD6: jl 0x11027c1c */
L_11027BD8:
    eax = MEM32(ebp + 0xC); /* 0x11027BD8: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x11027BDB: mov dword ptr [ebp + 0x10], eax */
    if (CMP_G(_flag_a, _flag_b)) goto L_11027BE4; /* 0x11027BDE: jg 0x11027be4 */
L_11027BE0:
    /* cmp eax, ebx */ /* 0x11027BE0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11027C1C; /* 0x11027BE2: jbe 0x11027c1c */
L_11027BE4:
    eax = MEM32(esi); /* 0x11027BE4: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11027BE6: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027BEA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027BED: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11027BF1: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_11027BF6:
    ecx = eax; /* 0x11027BF6: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x11027BF8: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x11027BFB: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x11027BFE: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = MEM32(ebp + (-0x14)), _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027C01: adc dword ptr [ebp - 0x14], -1 */
      MEM32(ebp + (-0x14)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11027C15; /* 0x11027C05: js 0x11027c15 */
L_11027C07:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11027C0D; /* 0x11027C07: jg 0x11027c0d */
L_11027C09:
    /* cmp eax, ebx */ /* 0x11027C09: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11027C15; /* 0x11027C0B: jbe 0x11027c15 */
L_11027C0D:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x11027C0D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027C5D; /* 0x11027C10: jne 0x11027c5d */
L_11027C12:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x11027C12: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027C15:
    MEM32(ebp + (-0x4)) = 1; /* 0x11027C15: mov dword ptr [ebp - 4], 1 */
L_11027C1C:
    eax = MEM32(esi + 0x8); /* 0x11027C1C: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027C1F: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027C27; /* 0x11027C22: jne 0x11027c27 */
L_11027C24:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027C24: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027C27:
    eax = MEM32(esi); /* 0x11027C27: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x11027C29: push ebx */
    PUSH32(esp, edi); /* 0x11027C2A: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027C2B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027C2E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027C30: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11027C35: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x24)); /* 0x11027C38: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027C3B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11027C3F: mov byte ptr [eax], bl */
    eax = MEM32(ecx); /* 0x11027C41: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027C43: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027C46: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027C4A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027C53; /* 0x11027C4C: je 0x11027c53 */
L_11027C4E:
    eax = MEM32(ecx); /* 0x11027C4E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027C50: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027C53:
    eax = esi; /* 0x11027C53: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027C55: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11027C5A: ret 0x10 */
L_11027C5D:
    /* cmp LO8(ecx), MEM8(ebp + 0x14) */ /* 0x11027C5D: cmp cl, byte ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x14)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027C15; /* 0x11027C60: je 0x11027c15 */
L_11027C62:
    eax = MEM32(ebp + 0x8); /* 0x11027C62: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x11027C65: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11027C67: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11027C68: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x11027C6C: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x11027C6F: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027C71: adc dword ptr [esi + 0xc], ebx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x11027C74: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027C77: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x11027C7B: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11027BF6; /* 0x11027C80: jmp 0x11027bf6 */
L_11027CB0:
    esi = MEM32(ebp + (-0x18)); /* 0x11027CB0: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027CB3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11027CB5: mov dword ptr [ebp - 4], 1 */
    edi = ebx; /* 0x11027CBC: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_11027C1C; /* 0x11027CBE: jmp 0x11027c1c */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11027CB0u: goto L_11027CB0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11027C85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027C85u);

L_11027C85:
    ecx = MEM32(ebp + (-0x18)); /* 0x11027C85: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027C88: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027C8A: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11027C8C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11027C8F: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11027C91: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027C94: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x11027C97: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027C9F; /* 0x11027C9A: jne 0x11027c9f */
L_11027C9C:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027C9C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027C9F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11027C9F: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11027CA2: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11027CA5: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027CC3; /* 0x11027CA8: jne 0x11027cc3 */
L_11027CAA:
    eax = 0x11027CB0u; /* 0x11027CAA: mov eax, 0x11027cb0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027CAF: ret  */
L_11027CC3:
    PUSH32(esp, ebx); /* 0x11027CC3: push ebx */
    PUSH32(esp, ebx); /* 0x11027CC4: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x11027CC5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11027CCAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027CB0u);

    goto L_11027CB0;
L_11027C1C:
    eax = MEM32(esi + 0x8); /* 0x11027C1C: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027C1F: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027C27; /* 0x11027C22: jne 0x11027c27 */
L_11027C24:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027C24: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027C27:
    eax = MEM32(esi); /* 0x11027C27: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x11027C29: push ebx */
    PUSH32(esp, edi); /* 0x11027C2A: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027C2B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027C2E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027C30: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11027C35: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x24)); /* 0x11027C38: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027C3B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11027C3F: mov byte ptr [eax], bl */
    eax = MEM32(ecx); /* 0x11027C41: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027C43: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027C46: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027C4A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027C53; /* 0x11027C4C: je 0x11027c53 */
L_11027C4E:
    eax = MEM32(ecx); /* 0x11027C4E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027C50: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027C53:
    eax = esi; /* 0x11027C53: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027C55: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11027C5A: ret 0x10 */
L_11027CB0:
    esi = MEM32(ebp + (-0x18)); /* 0x11027CB0: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027CB3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11027CB5: mov dword ptr [ebp - 4], 1 */
    edi = ebx; /* 0x11027CBC: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_11027C1C; /* 0x11027CBE: jmp 0x11027c1c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027CCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027CCBu);
    RECOMP_EH_ENTER();

L_11027CCB:
    PUSH32(esp, 0x18u); /* 0x11027CCB: push 0x18 */
    eax = 0x1103E7D1u; /* 0x11027CCD: mov eax, 0x1103e7d1 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11027CD2: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11027CD7: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11027CD9: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027CDC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11027CDE: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11027CE1: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x11027CE4: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11027CE7: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x11027CE9: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x11027CEC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027CEF: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027CF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027CFC; /* 0x11027CF5: je 0x11027cfc */
L_11027CF7:
    eax = MEM32(ecx); /* 0x11027CF7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11027CF9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11027CFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027CFC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11027CFE: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027D01: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11027D02: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11027D04: push ebx */
    RECOMP_CALL(sub_11010675); /* 0x11027D05: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11027D0A: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027D0D: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11027D10: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027D19; /* 0x11027D12: jne 0x11027d19 */
L_11027D14:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x11027D14: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11027D94; /* 0x11027D17: jmp 0x11027d94 */
L_11027D19:
    eax = MEM32(esi); /* 0x11027D19: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11027D1B: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027D1F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027D22: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11027D26: call 0x11010336 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11027D2B: mov ebx, eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11027D2D: mov dword ptr [ebp - 0x18], ebx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x11027D30: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027D3A; /* 0x11027D33: jne 0x11027d3a */
L_11027D35:
    PUSH32(esp, 3); /* 0x11027D35: push 3 */
    eax = POP32_VAL(esp); /* 0x11027D37: pop eax */
    goto L_11027D51; /* 0x11027D38: jmp 0x11027d51 */
L_11027D3A:
    eax = MEM32(esi); /* 0x11027D3A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11027D3C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027D3F: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110107B0); /* 0x11027D43: call 0x110107b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11027D48: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x11027D4C: mov eax, edi */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027D4E: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_11027D51:
    MEM32(ebp + (-0x4)) = 1; /* 0x11027D51: mov dword ptr [ebp - 4], 1 */
    goto L_11027D96; /* 0x11027D58: jmp 0x11027d96 */
L_11027D85:
    esi = MEM32(ebp + (-0x14)); /* 0x11027D85: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027D88: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x11027D8A: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027D8D: mov dword ptr [ebp - 4], 1 */
L_11027D94:
    eax = edi; /* 0x11027D94: mov eax, edi */
L_11027D96:
    PUSH32(esp, edi); /* 0x11027D96: push edi */
    PUSH32(esp, eax); /* 0x11027D97: push eax */
    eax = MEM32(esi); /* 0x11027D98: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027D9A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027D9D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027D9F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11027DA4: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027DA6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11027DAA: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11027DAD: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027DB1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027DBA; /* 0x11027DB3: je 0x11027dba */
L_11027DB5:
    edx = MEM32(ecx); /* 0x11027DB5: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11027DB7: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11027DBA:
    eax = ebx; /* 0x11027DBA: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x11027DBC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11027DC1: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x11027D85u: goto L_11027D85;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11027D5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027D5Au);

L_11027D5A:
    ecx = MEM32(ebp + (-0x14)); /* 0x11027D5A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027D5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027D5F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11027D61: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11027D64: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11027D66: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027D69: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11027D6C: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027D74; /* 0x11027D6F: jne 0x11027d74 */
L_11027D71:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027D71: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027D74:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11027D74: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11027D77: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11027D7A: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027DC2; /* 0x11027D7D: jne 0x11027dc2 */
L_11027D7F:
    eax = 0x11027D85u; /* 0x11027D7F: mov eax, 0x11027d85 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027D84: ret  */
L_11027DC2:
    PUSH32(esp, edi); /* 0x11027DC2: push edi */
    PUSH32(esp, edi); /* 0x11027DC3: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11027DC4: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11027DC9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027D85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027D85u);

L_11027D85:
    esi = MEM32(ebp + (-0x14)); /* 0x11027D85: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027D88: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x11027D8A: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027D8D: mov dword ptr [ebp - 4], 1 */
    eax = edi; /* 0x11027D94: mov eax, edi */
    PUSH32(esp, edi); /* 0x11027D96: push edi */
    PUSH32(esp, eax); /* 0x11027D97: push eax */
    eax = MEM32(esi); /* 0x11027D98: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027D9A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027D9D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027D9F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11027DA4: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027DA6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11027DAA: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11027DAD: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027DB1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027DBA; /* 0x11027DB3: je 0x11027dba */
L_11027DB5:
    edx = MEM32(ecx); /* 0x11027DB5: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11027DB7: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11027DBA:
    eax = ebx; /* 0x11027DBA: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x11027DBC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027DC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027DCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027DCAu);

L_11027DCA:
    PUSH32(esp, ebp); /* 0x11027DCA: push ebp */
    ebp = esp; /* 0x11027DCB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027DCD: push esi */
    esi = ecx; /* 0x11027DCE: mov esi, ecx */
    RECOMP_CALL(sub_110280D6); /* 0x11027DD0: call 0x110280d6 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x11027DD5: movzx ecx, ax */
    eax = 0xFFFFu; /* 0x11027DD8: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11027DDD: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027DE8; /* 0x11027DE0: je 0x11027de8 */
L_11027DE2:
    eax = MEM32(ebp + 0x8); /* 0x11027DE2: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11027DE5: mov word ptr [eax], cx */
L_11027DE8:
    eax = esi; /* 0x11027DE8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11027DEA: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027DEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11027DEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11027DEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027DEFu);

L_11027DEF:
    PUSH32(esp, ebp); /* 0x11027DEF: push ebp */
    ebp = esp; /* 0x11027DF0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027DF2: push esi */
    esi = ecx; /* 0x11027DF3: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11027DF5: push 0xa */
    eax = MEM32(esi); /* 0x11027DF7: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027DF9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027DFC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF51); /* 0x11027DFE: call 0x1102bf51 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11027E03: movzx eax, ax */
    ecx = esi; /* 0x11027E06: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11027E08: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11027E09: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11027E16); /* 0x11027E0C: call 0x11027e16 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11027E11: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11027E13: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11027E16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027E16u);
    RECOMP_EH_ENTER();

L_11027E16:
    PUSH32(esp, 0x14u); /* 0x11027E16: push 0x14 */
    eax = 0x1103E7FCu; /* 0x11027E18: mov eax, 0x1103e7fc */
    RECOMP_CALL(sub_1103B3DB); /* 0x11027E1D: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11027E22: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11027E24: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027E27: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x11027E29: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & edi; /* 0x11027E2C: and dword ptr [esi + 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & edi; /* 0x11027E2F: and dword ptr [esi + 0xc], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11027E32: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x11027E34: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x11027E37: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027E3A: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027E3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027E47; /* 0x11027E40: je 0x11027e47 */
L_11027E42:
    eax = MEM32(ecx); /* 0x11027E42: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11027E44: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11027E47:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11027E47: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027E4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027E4D: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11027E4E: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11027E50: push ebx */
    RECOMP_CALL(sub_11010989); /* 0x11027E51: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x11027E56: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027E59: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11027E5C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027ED3; /* 0x11027E5E: je 0x11027ed3 */
L_11027E60:
    eax = MEM32(esi); /* 0x11027E60: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11027E62: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027E66: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027E69: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11027E6D: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11027E72:
    ecx = 0xFFFFu; /* 0x11027E72: mov ecx, 0xffff */
    eax = (uint32_t)LO16(eax); /* 0x11027E77: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11027E7A: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027E83; /* 0x11027E7D: jne 0x11027e83 */
L_11027E7F:
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x11027E7F: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11027ED0; /* 0x11027E81: jmp 0x11027ed0 */
L_11027E83:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11027E83: mov byte ptr [ebp - 4], 3 */
    /* cmp LO16(eax), MEM16(ebp + 0xC) */ /* 0x11027E87: cmp ax, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027ED0; /* 0x11027E8B: je 0x11027ed0 */
L_11027E8D:
    ecx = MEM32(ebp + 0x8); /* 0x11027E8D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11027E90: push eax */
    RECOMP_CALL(sub_1102B3DC); /* 0x11027E91: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11027E96: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x11027E99: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11027E9E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11027ED0; /* 0x11027EA1: je 0x11027ed0 */
L_11027EA3:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ebx; /* 0x11027EA3: add dword ptr [esi + 8], ebx */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x11027EA6: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027EA8: adc dword ptr [esi + 0xc], 0 */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = 2; /* 0x11027EAC: mov dword ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027EB3: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027EB6: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x11027EBA: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11027E72; /* 0x11027EBF: jmp 0x11027e72 */
L_11027EC7:
    esi = MEM32(ebp + (-0x14)); /* 0x11027EC7: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027ECA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x11027ECC: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027ECF: inc ebx */
    _flag_k = FK_INC;
L_11027ED0:
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027ED0: mov dword ptr [ebp - 4], ebx */
L_11027ED3:
    eax = MEM32(esi + 0x8); /* 0x11027ED3: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ED6: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027EDE; /* 0x11027ED9: jne 0x11027ede */
L_11027EDB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027EDB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027EDE:
    eax = MEM32(esi); /* 0x11027EDE: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027EE0: push 0 */
    PUSH32(esp, edi); /* 0x11027EE2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027EE3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027EE6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027EE8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027EED: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027EF0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027EF4: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027EF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027EF9: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027EFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027F06; /* 0x11027EFF: je 0x11027f06 */
L_11027F01:
    eax = MEM32(ecx); /* 0x11027F01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027F03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027F06:
    eax = esi; /* 0x11027F06: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027F08: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11027F0D: ret 8 */
L_11027F3A:
    esi = MEM32(ebp + (-0x14)); /* 0x11027F3A: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11027F3D: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027F40: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11027ED3; /* 0x11027F47: jmp 0x11027ed3 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11027EC7u: goto L_11027EC7;
      case 0x11027F3Au: goto L_11027F3A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11027EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027EC1u);

L_11027EC1:
    eax = 0x11027EC7u; /* 0x11027EC1: mov eax, 0x11027ec7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027EC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027EC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027EC7u);

L_11027EC7:
    esi = MEM32(ebp + (-0x14)); /* 0x11027EC7: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11027ECA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x11027ECC: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11027ECF: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x11027ED0: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(esi + 0x8); /* 0x11027ED3: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ED6: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027EDE; /* 0x11027ED9: jne 0x11027ede */
L_11027EDB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027EDB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027EDE:
    eax = MEM32(esi); /* 0x11027EDE: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027EE0: push 0 */
    PUSH32(esp, edi); /* 0x11027EE2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027EE3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027EE6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027EE8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027EED: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027EF0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027EF4: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027EF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027EF9: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027EFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027F06; /* 0x11027EFF: je 0x11027f06 */
L_11027F01:
    eax = MEM32(ecx); /* 0x11027F01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027F03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027F06:
    eax = esi; /* 0x11027F06: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027F08: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11027F0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11027F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027F10u);

L_11027F10:
    ecx = MEM32(ebp + (-0x14)); /* 0x11027F10: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11027F13: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11027F15: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11027F18: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11027F1A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027F1D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11027F20: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027F29; /* 0x11027F24: jne 0x11027f29 */
L_11027F26:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11027F26: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027F29:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11027F29: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11027F2C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11027F2F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027F49; /* 0x11027F32: jne 0x11027f49 */
L_11027F34:
    eax = 0x11027F3Au; /* 0x11027F34: mov eax, 0x11027f3a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027F39: ret  */
L_11027F49:
    PUSH32(esp, 0); /* 0x11027F49: push 0 */
    PUSH32(esp, 0); /* 0x11027F4B: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x11027F4D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11027F52u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027F3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027F3Au);

    goto L_11027F3A;
L_11027ED3:
    eax = MEM32(esi + 0x8); /* 0x11027ED3: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11027ED6: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027EDE; /* 0x11027ED9: jne 0x11027ede */
L_11027EDB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11027EDB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11027EDE:
    eax = MEM32(esi); /* 0x11027EDE: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11027EE0: push 0 */
    PUSH32(esp, edi); /* 0x11027EE2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11027EE3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027EE6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11027EE8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x11027EED: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11027EF0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11027EF4: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11027EF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11027EF9: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11027EFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027F06; /* 0x11027EFF: je 0x11027f06 */
L_11027F01:
    eax = MEM32(ecx); /* 0x11027F01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11027F03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11027F06:
    eax = esi; /* 0x11027F06: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11027F08: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11027F0D: ret 8 */
L_11027F3A:
    esi = MEM32(ebp + (-0x14)); /* 0x11027F3A: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11027F3D: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027F40: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11027ED3; /* 0x11027F47: jmp 0x11027ed3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027F53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027F53u);

L_11027F53:
    PUSH32(esp, ebp); /* 0x11027F53: push ebp */
    ebp = esp; /* 0x11027F54: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027F56: push esi */
    esi = ecx; /* 0x11027F57: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11027F59: push 0xa */
    eax = MEM32(esi); /* 0x11027F5B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11027F5D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11027F60: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF51); /* 0x11027F62: call 0x1102bf51 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11027F67: movzx eax, ax */
    ecx = esi; /* 0x11027F6A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11027F6C: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027F6D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027F70: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11027F73: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11027F80); /* 0x11027F76: call 0x11027f80 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11027F7B: pop esi */
    ebp = POP32_VAL(esp); /* 0x11027F7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11027F7D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11027F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027F80u);
    RECOMP_EH_ENTER();

L_11027F80:
    PUSH32(esp, 0x18u); /* 0x11027F80: push 0x18 */
    eax = 0x1103E827u; /* 0x11027F82: mov eax, 0x1103e827 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11027F87: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11027F8C: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11027F8E: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11027F91: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11027F93: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11027F96: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x11027F99: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x11027F9B: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11027F9E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11027FA0: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027FA3: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11027FA7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11027FB0; /* 0x11027FA9: je 0x11027fb0 */
L_11027FAB:
    eax = MEM32(ecx); /* 0x11027FAB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11027FAD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11027FB0:
    PUSH32(esp, 1); /* 0x11027FB0: push 1 */
    ecx = esi; /* 0x11027FB2: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11027FB4: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11027FB7: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11027FBC: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11027FBF: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11027FC6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028020; /* 0x11027FC8: je 0x11028020 */
L_11027FCA:
    eax = MEM32(ebp + 0x10); /* 0x11027FCA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11027FCD: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, edi */ /* 0x11027FD0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11028020; /* 0x11027FD2: jl 0x11028020 */
L_11027FD4:
    eax = MEM32(ebp + 0xC); /* 0x11027FD4: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x11027FD7: mov dword ptr [ebp + 0x10], eax */
    if (CMP_G(_flag_a, _flag_b)) goto L_11027FE0; /* 0x11027FDA: jg 0x11027fe0 */
L_11027FDC:
    /* cmp eax, edi */ /* 0x11027FDC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11028020; /* 0x11027FDE: jbe 0x11028020 */
L_11027FE0:
    eax = MEM32(esi); /* 0x11027FE0: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11027FE2: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11027FE6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11027FE9: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11027FED: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11027FF2:
    eax = (uint32_t)LO16(eax); /* 0x11027FF2: movzx eax, ax */
    ecx = eax; /* 0x11027FF5: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x11027FF7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x11027FFA: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x11027FFD: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = MEM32(ebp + (-0x14)), _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028000: adc dword ptr [ebp - 0x14], -1 */
      MEM32(ebp + (-0x14)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11028019; /* 0x11028004: js 0x11028019 */
L_11028006:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1102800C; /* 0x11028006: jg 0x1102800c */
L_11028008:
    /* cmp eax, edi */ /* 0x11028008: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11028019; /* 0x1102800A: jbe 0x11028019 */
L_1102800C:
    eax = 0xFFFFu; /* 0x1102800C: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11028011: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028064; /* 0x11028014: jne 0x11028064 */
L_11028016:
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x11028016: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028019:
    MEM32(ebp + (-0x4)) = 1; /* 0x11028019: mov dword ptr [ebp - 4], 1 */
L_11028020:
    eax = MEM32(esi + 0x8); /* 0x11028020: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028023: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102802B; /* 0x11028026: jne 0x1102802b */
L_11028028:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028028: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102802B:
    eax = MEM32(esi); /* 0x1102802B: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102802D: push edi */
    PUSH32(esp, ebx); /* 0x1102802E: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102802F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028032: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11028034: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028039: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102803C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102803E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028042: mov word ptr [eax], cx */
    ecx = MEM32(ebp + (-0x24)); /* 0x11028045: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x11028048: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102804A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1102804D: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11028051: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102805A; /* 0x11028053: je 0x1102805a */
L_11028055:
    eax = MEM32(ecx); /* 0x11028055: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028057: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102805A:
    eax = esi; /* 0x1102805A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102805C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11028061: ret 0x10 */
L_11028064:
    /* cmp LO16(ecx), MEM16(ebp + 0x14) */ /* 0x11028064: cmp cx, word ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028019; /* 0x11028068: je 0x11028019 */
L_1102806A:
    eax = MEM32(ebp + 0x8); /* 0x1102806A: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1102806D: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x11028070: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11028073: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x11028077: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x1102807A: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102807C: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x1102807F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028082: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x11028086: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11027FF2; /* 0x1102808B: jmp 0x11027ff2 */
L_110280BB:
    esi = MEM32(ebp + (-0x18)); /* 0x110280BB: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110280BE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110280C0: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110280C7: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028020; /* 0x110280C9: jmp 0x11028020 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110280BBu: goto L_110280BB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11028090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028090u);

L_11028090:
    ecx = MEM32(ebp + (-0x18)); /* 0x11028090: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11028093: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028095: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11028097: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102809A: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102809C: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102809F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110280A2: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110280AA; /* 0x110280A5: jne 0x110280aa */
L_110280A7:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110280A7: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110280AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110280AA: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110280AD: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110280B0: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110280CE; /* 0x110280B3: jne 0x110280ce */
L_110280B5:
    eax = 0x110280BBu; /* 0x110280B5: mov eax, 0x110280bb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110280BA: ret  */
L_110280CE:
    PUSH32(esp, edi); /* 0x110280CE: push edi */
    PUSH32(esp, edi); /* 0x110280CF: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110280D0: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110280D5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110280BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110280BBu);

    goto L_110280BB;
L_11028020:
    eax = MEM32(esi + 0x8); /* 0x11028020: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028023: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102802B; /* 0x11028026: jne 0x1102802b */
L_11028028:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028028: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102802B:
    eax = MEM32(esi); /* 0x1102802B: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102802D: push edi */
    PUSH32(esp, ebx); /* 0x1102802E: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102802F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028032: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11028034: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028039: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102803C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102803E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028042: mov word ptr [eax], cx */
    ecx = MEM32(ebp + (-0x24)); /* 0x11028045: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x11028048: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102804A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1102804D: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11028051: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102805A; /* 0x11028053: je 0x1102805a */
L_11028055:
    eax = MEM32(ecx); /* 0x11028055: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028057: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102805A:
    eax = esi; /* 0x1102805A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102805C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11028061: ret 0x10 */
L_110280BB:
    esi = MEM32(ebp + (-0x18)); /* 0x110280BB: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110280BE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110280C0: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110280C7: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028020; /* 0x110280C9: jmp 0x11028020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110280D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110280D6u);
    RECOMP_EH_ENTER();

L_110280D6:
    PUSH32(esp, 0x18u); /* 0x110280D6: push 0x18 */
    eax = 0x1103E852u; /* 0x110280D8: mov eax, 0x1103e852 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110280DD: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110280E2: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110280E4: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110280E7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x110280E9: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x110280EC: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x110280EF: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x110280F2: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x110280F4: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x110280F7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110280FA: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110280FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028107; /* 0x11028100: je 0x11028107 */
L_11028102:
    eax = MEM32(ecx); /* 0x11028102: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11028104: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11028107:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028107: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11028109: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102810C: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1102810D: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x1102810F: push ebx */
    RECOMP_CALL(sub_11010989); /* 0x11028110: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11028115: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11028118: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x1102811B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028129; /* 0x1102811D: jne 0x11028129 */
L_1102811F:
    ebx = 0xFFFFu; /* 0x1102811F: mov ebx, 0xffff */
    goto L_110281AC; /* 0x11028124: jmp 0x110281ac */
L_11028129:
    eax = MEM32(esi); /* 0x11028129: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102812B: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102812F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028132: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11028136: call 0x11010398 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102813B: movzx eax, ax */
    ebx = eax; /* 0x1102813E: mov ebx, eax */
    eax = 0xFFFFu; /* 0x11028140: mov eax, 0xffff */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11028145: mov dword ptr [ebp - 0x18], ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x11028148: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028152; /* 0x1102814B: jne 0x11028152 */
L_1102814D:
    PUSH32(esp, 3); /* 0x1102814D: push 3 */
    eax = POP32_VAL(esp); /* 0x1102814F: pop eax */
    goto L_11028169; /* 0x11028150: jmp 0x11028169 */
L_11028152:
    eax = MEM32(esi); /* 0x11028152: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11028154: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028157: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x1102815B: call 0x1101093b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11028160: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x11028164: mov eax, edi */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028166: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_11028169:
    MEM32(ebp + (-0x4)) = 1; /* 0x11028169: mov dword ptr [ebp - 4], 1 */
    goto L_110281AE; /* 0x11028170: jmp 0x110281ae */
L_1102819D:
    esi = MEM32(ebp + (-0x14)); /* 0x1102819D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110281A0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x110281A2: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110281A5: mov dword ptr [ebp - 4], 1 */
L_110281AC:
    eax = edi; /* 0x110281AC: mov eax, edi */
L_110281AE:
    PUSH32(esp, edi); /* 0x110281AE: push edi */
    PUSH32(esp, eax); /* 0x110281AF: push eax */
    eax = MEM32(esi); /* 0x110281B0: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110281B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110281B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110281B7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110281BC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110281BE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x110281C2: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110281C5: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110281C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110281D2; /* 0x110281CB: je 0x110281d2 */
L_110281CD:
    edx = MEM32(ecx); /* 0x110281CD: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x110281CF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_110281D2:
    SET_LO16(eax, LO16(ebx)); /* 0x110281D2: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x110281D5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110281DA: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102819Du: goto L_1102819D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11028172(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028172u);

L_11028172:
    ecx = MEM32(ebp + (-0x14)); /* 0x11028172: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11028175: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028177: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11028179: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102817C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102817E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11028181: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11028184: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102818C; /* 0x11028187: jne 0x1102818c */
L_11028189:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11028189: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102818C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102818C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102818F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11028192: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110281DB; /* 0x11028195: jne 0x110281db */
L_11028197:
    eax = 0x1102819Du; /* 0x11028197: mov eax, 0x1102819d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102819C: ret  */
L_110281DB:
    PUSH32(esp, edi); /* 0x110281DB: push edi */
    PUSH32(esp, edi); /* 0x110281DC: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110281DD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110281E2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102819D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102819Du);

L_1102819D:
    esi = MEM32(ebp + (-0x14)); /* 0x1102819D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110281A0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x110281A2: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110281A5: mov dword ptr [ebp - 4], 1 */
    eax = edi; /* 0x110281AC: mov eax, edi */
    PUSH32(esp, edi); /* 0x110281AE: push edi */
    PUSH32(esp, eax); /* 0x110281AF: push eax */
    eax = MEM32(esi); /* 0x110281B0: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110281B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110281B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110281B7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110281BC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110281BE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x110281C2: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110281C5: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110281C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110281D2; /* 0x110281CB: je 0x110281d2 */
L_110281CD:
    edx = MEM32(ecx); /* 0x110281CD: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x110281CF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_110281D2:
    SET_LO16(eax, LO16(ebx)); /* 0x110281D2: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x110281D5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110281DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110281E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110281E3u);

L_110281E3:
    PUSH32(esp, ebp); /* 0x110281E3: push ebp */
    ebp = esp; /* 0x110281E4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110281E6: push esi */
    esi = ecx; /* 0x110281E7: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x110281E9: push 0xa */
    eax = MEM32(esi); /* 0x110281EB: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110281ED: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110281F0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF91); /* 0x110281F2: call 0x1102bf91 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110281F7: movzx eax, ax */
    ecx = esi; /* 0x110281FA: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110281FC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110281FD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102820A); /* 0x11028200: call 0x1102820a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11028205: pop esi */
    ebp = POP32_VAL(esp); /* 0x11028206: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11028207: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102820A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102820Au);
    RECOMP_EH_ENTER();

L_1102820A:
    PUSH32(esp, 0x14u); /* 0x1102820A: push 0x14 */
    eax = 0x1103E87Du; /* 0x1102820C: mov eax, 0x1103e87d */
    RECOMP_CALL(sub_1103B3DB); /* 0x11028211: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11028216: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11028218: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102821B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1102821D: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & edi; /* 0x11028220: and dword ptr [esi + 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & edi; /* 0x11028223: and dword ptr [esi + 0xc], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11028226: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x11028228: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x1102822B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102822E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11028232: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102823B; /* 0x11028234: je 0x1102823b */
L_11028236:
    eax = MEM32(ecx); /* 0x11028236: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11028238: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102823B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102823B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102823F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11028241: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11028242: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11028244: push ebx */
    RECOMP_CALL(sub_11010810); /* 0x11028245: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102824A: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102824D: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11028250: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110282C7; /* 0x11028252: je 0x110282c7 */
L_11028254:
    eax = MEM32(esi); /* 0x11028254: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11028256: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102825A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102825D: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11028261: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11028266:
    ecx = 0xFFFFu; /* 0x11028266: mov ecx, 0xffff */
    eax = (uint32_t)LO16(eax); /* 0x1102826B: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102826E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028277; /* 0x11028271: jne 0x11028277 */
L_11028273:
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x11028273: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110282C4; /* 0x11028275: jmp 0x110282c4 */
L_11028277:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11028277: mov byte ptr [ebp - 4], 3 */
    /* cmp LO16(eax), MEM16(ebp + 0xC) */ /* 0x1102827B: cmp ax, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110282C4; /* 0x1102827F: je 0x110282c4 */
L_11028281:
    ecx = MEM32(ebp + 0x8); /* 0x11028281: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11028284: push eax */
    RECOMP_CALL(sub_1102B3DC); /* 0x11028285: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102828A: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1102828D: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11028292: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110282C4; /* 0x11028295: je 0x110282c4 */
L_11028297:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ebx; /* 0x11028297: add dword ptr [esi + 8], ebx */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1102829A: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102829C: adc dword ptr [esi + 0xc], 0 */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = 2; /* 0x110282A0: mov dword ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x110282A7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110282AA: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x110282AE: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11028266; /* 0x110282B3: jmp 0x11028266 */
L_110282BB:
    esi = MEM32(ebp + (-0x14)); /* 0x110282BB: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110282BE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x110282C0: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110282C3: inc ebx */
    _flag_k = FK_INC;
L_110282C4:
    MEM32(ebp + (-0x4)) = ebx; /* 0x110282C4: mov dword ptr [ebp - 4], ebx */
L_110282C7:
    eax = MEM32(esi + 0x8); /* 0x110282C7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x110282CA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110282D2; /* 0x110282CD: jne 0x110282d2 */
L_110282CF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x110282CF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110282D2:
    eax = MEM32(esi); /* 0x110282D2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110282D4: push 0 */
    PUSH32(esp, edi); /* 0x110282D6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110282D7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110282DA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110282DC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x110282E1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110282E4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110282E8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110282EA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110282ED: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110282F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110282FA; /* 0x110282F3: je 0x110282fa */
L_110282F5:
    eax = MEM32(ecx); /* 0x110282F5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110282F7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110282FA:
    eax = esi; /* 0x110282FA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110282FC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11028301: ret 8 */
L_1102832E:
    esi = MEM32(ebp + (-0x14)); /* 0x1102832E: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11028331: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11028334: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110282C7; /* 0x1102833B: jmp 0x110282c7 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110282BBu: goto L_110282BB;
      case 0x1102832Eu: goto L_1102832E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110282B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110282B5u);

L_110282B5:
    eax = 0x110282BBu; /* 0x110282B5: mov eax, 0x110282bb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110282BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110282BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110282BBu);

L_110282BB:
    esi = MEM32(ebp + (-0x14)); /* 0x110282BB: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110282BE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x110282C0: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110282C3: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x110282C4: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(esi + 0x8); /* 0x110282C7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x110282CA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110282D2; /* 0x110282CD: jne 0x110282d2 */
L_110282CF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x110282CF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110282D2:
    eax = MEM32(esi); /* 0x110282D2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110282D4: push 0 */
    PUSH32(esp, edi); /* 0x110282D6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110282D7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110282DA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110282DC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x110282E1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110282E4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110282E8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110282EA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110282ED: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110282F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110282FA; /* 0x110282F3: je 0x110282fa */
L_110282F5:
    eax = MEM32(ecx); /* 0x110282F5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110282F7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110282FA:
    eax = esi; /* 0x110282FA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110282FC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11028301: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11028304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028304u);

L_11028304:
    ecx = MEM32(ebp + (-0x14)); /* 0x11028304: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11028307: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11028309: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102830C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102830E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11028311: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11028314: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102831D; /* 0x11028318: jne 0x1102831d */
L_1102831A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102831A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102831D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102831D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11028320: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11028323: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102833D; /* 0x11028326: jne 0x1102833d */
L_11028328:
    eax = 0x1102832Eu; /* 0x11028328: mov eax, 0x1102832e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102832D: ret  */
L_1102833D:
    PUSH32(esp, 0); /* 0x1102833D: push 0 */
    PUSH32(esp, 0); /* 0x1102833F: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x11028341: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11028346u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102832E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102832Eu);

    goto L_1102832E;
L_110282C7:
    eax = MEM32(esi + 0x8); /* 0x110282C7: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x110282CA: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110282D2; /* 0x110282CD: jne 0x110282d2 */
L_110282CF:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x110282CF: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110282D2:
    eax = MEM32(esi); /* 0x110282D2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110282D4: push 0 */
    PUSH32(esp, edi); /* 0x110282D6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110282D7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110282DA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110282DC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x110282E1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110282E4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110282E8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110282EA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110282ED: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110282F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110282FA; /* 0x110282F3: je 0x110282fa */
L_110282F5:
    eax = MEM32(ecx); /* 0x110282F5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110282F7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110282FA:
    eax = esi; /* 0x110282FA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110282FC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11028301: ret 8 */
L_1102832E:
    esi = MEM32(ebp + (-0x14)); /* 0x1102832E: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x11028331: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11028334: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110282C7; /* 0x1102833B: jmp 0x110282c7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11028347(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028347u);

L_11028347:
    PUSH32(esp, ebp); /* 0x11028347: push ebp */
    ebp = esp; /* 0x11028348: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102834A: push esi */
    esi = ecx; /* 0x1102834B: mov esi, ecx */
    RECOMP_CALL(sub_110284EF); /* 0x1102834D: call 0x110284ef */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x11028352: movzx ecx, ax */
    eax = 0xFFFFu; /* 0x11028355: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102835A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028365; /* 0x1102835D: je 0x11028365 */
L_1102835F:
    eax = MEM32(ebp + 0x8); /* 0x1102835F: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028362: mov word ptr [eax], cx */
L_11028365:
    eax = esi; /* 0x11028365: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11028367: pop esi */
    ebp = POP32_VAL(esp); /* 0x11028368: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11028369: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102836C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102836Cu);

L_1102836C:
    PUSH32(esp, ebp); /* 0x1102836C: push ebp */
    ebp = esp; /* 0x1102836D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102836F: push esi */
    esi = ecx; /* 0x11028370: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11028372: push 0xa */
    eax = MEM32(esi); /* 0x11028374: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11028376: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028379: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF91); /* 0x1102837B: call 0x1102bf91 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11028380: movzx eax, ax */
    ecx = esi; /* 0x11028383: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11028385: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028386: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028389: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102838C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11028399); /* 0x1102838F: call 0x11028399 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11028394: pop esi */
    ebp = POP32_VAL(esp); /* 0x11028395: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11028396: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11028399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028399u);
    RECOMP_EH_ENTER();

L_11028399:
    PUSH32(esp, 0x18u); /* 0x11028399: push 0x18 */
    eax = 0x1103E8A8u; /* 0x1102839B: mov eax, 0x1103e8a8 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110283A0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110283A5: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110283A7: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110283AA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x110283AC: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x110283AF: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x110283B2: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x110283B4: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x110283B7: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110283B9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110283BC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110283C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110283C9; /* 0x110283C2: je 0x110283c9 */
L_110283C4:
    eax = MEM32(ecx); /* 0x110283C4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110283C6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110283C9:
    PUSH32(esp, 1); /* 0x110283C9: push 1 */
    ecx = esi; /* 0x110283CB: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110283CD: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x110283D0: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110283D5: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110283D8: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110283DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028439; /* 0x110283E1: je 0x11028439 */
L_110283E3:
    eax = MEM32(ebp + 0x10); /* 0x110283E3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x110283E6: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, edi */ /* 0x110283E9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11028439; /* 0x110283EB: jl 0x11028439 */
L_110283ED:
    eax = MEM32(ebp + 0xC); /* 0x110283ED: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x110283F0: mov dword ptr [ebp + 0x10], eax */
    if (CMP_G(_flag_a, _flag_b)) goto L_110283F9; /* 0x110283F3: jg 0x110283f9 */
L_110283F5:
    /* cmp eax, edi */ /* 0x110283F5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11028439; /* 0x110283F7: jbe 0x11028439 */
L_110283F9:
    eax = MEM32(esi); /* 0x110283F9: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110283FB: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x110283FF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028402: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11028406: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1102840B:
    eax = (uint32_t)LO16(eax); /* 0x1102840B: movzx eax, ax */
    ecx = eax; /* 0x1102840E: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x11028410: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x11028413: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x11028416: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = MEM32(ebp + (-0x14)), _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028419: adc dword ptr [ebp - 0x14], -1 */
      MEM32(ebp + (-0x14)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11028432; /* 0x1102841D: js 0x11028432 */
L_1102841F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11028425; /* 0x1102841F: jg 0x11028425 */
L_11028421:
    /* cmp eax, edi */ /* 0x11028421: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11028432; /* 0x11028423: jbe 0x11028432 */
L_11028425:
    eax = 0xFFFFu; /* 0x11028425: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102842A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102847D; /* 0x1102842D: jne 0x1102847d */
L_1102842F:
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x1102842F: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028432:
    MEM32(ebp + (-0x4)) = 1; /* 0x11028432: mov dword ptr [ebp - 4], 1 */
L_11028439:
    eax = MEM32(esi + 0x8); /* 0x11028439: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x1102843C: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028444; /* 0x1102843F: jne 0x11028444 */
L_11028441:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028441: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028444:
    eax = MEM32(esi); /* 0x11028444: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11028446: push edi */
    PUSH32(esp, ebx); /* 0x11028447: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11028448: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102844B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102844D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028452: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11028455: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11028457: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1102845B: mov word ptr [eax], cx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1102845E: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x11028461: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11028463: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11028466: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x1102846A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028473; /* 0x1102846C: je 0x11028473 */
L_1102846E:
    eax = MEM32(ecx); /* 0x1102846E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028470: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11028473:
    eax = esi; /* 0x11028473: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11028475: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102847A: ret 0x10 */
L_1102847D:
    /* cmp LO16(ecx), MEM16(ebp + 0x14) */ /* 0x1102847D: cmp cx, word ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028432; /* 0x11028481: je 0x11028432 */
L_11028483:
    eax = MEM32(ebp + 0x8); /* 0x11028483: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028486: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x11028489: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x1102848C: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x11028490: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x11028493: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028495: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x11028498: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102849B: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x1102849F: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102840B; /* 0x110284A4: jmp 0x1102840b */
L_110284D4:
    esi = MEM32(ebp + (-0x18)); /* 0x110284D4: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110284D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110284D9: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110284E0: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028439; /* 0x110284E2: jmp 0x11028439 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110284D4u: goto L_110284D4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110284A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110284A9u);

L_110284A9:
    ecx = MEM32(ebp + (-0x18)); /* 0x110284A9: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110284AC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110284AE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110284B0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110284B3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110284B5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110284B8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110284BB: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110284C3; /* 0x110284BE: jne 0x110284c3 */
L_110284C0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110284C0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110284C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110284C3: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110284C6: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110284C9: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110284E7; /* 0x110284CC: jne 0x110284e7 */
L_110284CE:
    eax = 0x110284D4u; /* 0x110284CE: mov eax, 0x110284d4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110284D3: ret  */
L_110284E7:
    PUSH32(esp, edi); /* 0x110284E7: push edi */
    PUSH32(esp, edi); /* 0x110284E8: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110284E9: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110284EEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110284D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110284D4u);

    goto L_110284D4;
L_11028439:
    eax = MEM32(esi + 0x8); /* 0x11028439: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x1102843C: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028444; /* 0x1102843F: jne 0x11028444 */
L_11028441:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028441: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028444:
    eax = MEM32(esi); /* 0x11028444: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11028446: push edi */
    PUSH32(esp, ebx); /* 0x11028447: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11028448: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102844B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102844D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028452: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11028455: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11028457: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1102845B: mov word ptr [eax], cx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1102845E: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x11028461: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11028463: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11028466: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x1102846A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028473; /* 0x1102846C: je 0x11028473 */
L_1102846E:
    eax = MEM32(ecx); /* 0x1102846E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028470: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11028473:
    eax = esi; /* 0x11028473: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11028475: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1102847A: ret 0x10 */
L_110284D4:
    esi = MEM32(ebp + (-0x18)); /* 0x110284D4: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110284D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110284D9: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110284E0: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028439; /* 0x110284E2: jmp 0x11028439 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110284EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110284EFu);
    RECOMP_EH_ENTER();

L_110284EF:
    PUSH32(esp, 0x18u); /* 0x110284EF: push 0x18 */
    eax = 0x1103E8D3u; /* 0x110284F1: mov eax, 0x1103e8d3 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110284F6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110284FB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110284FD: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11028500: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11028502: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11028505: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x11028508: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x1102850B: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x1102850D: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x11028510: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028513: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11028517: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028520; /* 0x11028519: je 0x11028520 */
L_1102851B:
    eax = MEM32(ecx); /* 0x1102851B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102851D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11028520:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028520: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11028522: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11028525: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11028526: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11028528: push ebx */
    RECOMP_CALL(sub_11010810); /* 0x11028529: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102852E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11028531: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11028534: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028542; /* 0x11028536: jne 0x11028542 */
L_11028538:
    ebx = 0xFFFFu; /* 0x11028538: mov ebx, 0xffff */
    goto L_110285C5; /* 0x1102853D: jmp 0x110285c5 */
L_11028542:
    eax = MEM32(esi); /* 0x11028542: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11028544: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11028548: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102854B: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x1102854F: call 0x11010398 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11028554: movzx eax, ax */
    ebx = eax; /* 0x11028557: mov ebx, eax */
    eax = 0xFFFFu; /* 0x11028559: mov eax, 0xffff */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102855E: mov dword ptr [ebp - 0x18], ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x11028561: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102856B; /* 0x11028564: jne 0x1102856b */
L_11028566:
    PUSH32(esp, 3); /* 0x11028566: push 3 */
    eax = POP32_VAL(esp); /* 0x11028568: pop eax */
    goto L_11028582; /* 0x11028569: jmp 0x11028582 */
L_1102856B:
    eax = MEM32(esi); /* 0x1102856B: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102856D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028570: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x11028574: call 0x1101093b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11028579: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1102857D: mov eax, edi */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102857F: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_11028582:
    MEM32(ebp + (-0x4)) = 1; /* 0x11028582: mov dword ptr [ebp - 4], 1 */
    goto L_110285C7; /* 0x11028589: jmp 0x110285c7 */
L_110285B6:
    esi = MEM32(ebp + (-0x14)); /* 0x110285B6: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110285B9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x110285BB: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110285BE: mov dword ptr [ebp - 4], 1 */
L_110285C5:
    eax = edi; /* 0x110285C5: mov eax, edi */
L_110285C7:
    PUSH32(esp, edi); /* 0x110285C7: push edi */
    PUSH32(esp, eax); /* 0x110285C8: push eax */
    eax = MEM32(esi); /* 0x110285C9: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110285CB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110285CE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110285D0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110285D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110285D7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x110285DB: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110285DE: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110285E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110285EB; /* 0x110285E4: je 0x110285eb */
L_110285E6:
    edx = MEM32(ecx); /* 0x110285E6: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x110285E8: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_110285EB:
    SET_LO16(eax, LO16(ebx)); /* 0x110285EB: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x110285EE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110285F3: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x110285B6u: goto L_110285B6;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102858B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102858Bu);

L_1102858B:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102858B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102858E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028590: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11028592: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11028595: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11028597: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102859A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102859D: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110285A5; /* 0x110285A0: jne 0x110285a5 */
L_110285A2:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110285A2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110285A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110285A5: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110285A8: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110285AB: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110285F4; /* 0x110285AE: jne 0x110285f4 */
L_110285B0:
    eax = 0x110285B6u; /* 0x110285B0: mov eax, 0x110285b6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110285B5: ret  */
L_110285F4:
    PUSH32(esp, edi); /* 0x110285F4: push edi */
    PUSH32(esp, edi); /* 0x110285F5: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110285F6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110285FBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110285B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110285B6u);

L_110285B6:
    esi = MEM32(ebp + (-0x14)); /* 0x110285B6: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110285B9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x18)); /* 0x110285BB: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110285BE: mov dword ptr [ebp - 4], 1 */
    eax = edi; /* 0x110285C5: mov eax, edi */
    PUSH32(esp, edi); /* 0x110285C7: push edi */
    PUSH32(esp, eax); /* 0x110285C8: push eax */
    eax = MEM32(esi); /* 0x110285C9: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110285CB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110285CE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110285D0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110285D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110285D7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x110285DB: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110285DE: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110285E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110285EB; /* 0x110285E4: je 0x110285eb */
L_110285E6:
    edx = MEM32(ecx); /* 0x110285E6: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x110285E8: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_110285EB:
    SET_LO16(eax, LO16(ebx)); /* 0x110285EB: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x110285EE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110285F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110285FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110285FCu);

L_110285FC:
    PUSH32(esp, ebp); /* 0x110285FC: push ebp */
    ebp = esp; /* 0x110285FD: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110285FF: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028602: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028604: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028607: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102860A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102860D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028610: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028613: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028616: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11028619: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102861C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102861F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028620: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028623(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028623u);

L_11028623:
    PUSH32(esp, ebp); /* 0x11028623: push ebp */
    ebp = esp; /* 0x11028624: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028626: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028629: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102862B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102862E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028631: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028634: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028637: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102863A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102863D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11028640: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028643: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028646: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028647: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102864A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102864Au);

L_1102864A:
    PUSH32(esp, ebp); /* 0x1102864A: push ebp */
    ebp = esp; /* 0x1102864B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102864D: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028650: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028652: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028655: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028658: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102865B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102865E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028661: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028664: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11028667: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102866A: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102866D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102866E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028671(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028671u);

L_11028671:
    PUSH32(esp, ebp); /* 0x11028671: push ebp */
    ebp = esp; /* 0x11028672: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028674: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028677: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028679: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102867C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102867F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028682: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028685: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028688: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102868B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1102868E: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028691: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028694: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028695: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028698u);

L_11028698:
    PUSH32(esp, ebp); /* 0x11028698: push ebp */
    ebp = esp; /* 0x11028699: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102869B: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x1102869E: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110286A0: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110286A3: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110286A6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110286A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110286AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110286AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110286B2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x110286B5: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110286B8: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x110286BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110286BC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110286BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110286BFu);

L_110286BF:
    PUSH32(esp, ebp); /* 0x110286BF: push ebp */
    ebp = esp; /* 0x110286C0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110286C2: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x110286C5: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110286C7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110286CA: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110286CD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110286D0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110286D3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110286D6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110286D9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x110286DC: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110286DF: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x110286E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110286E3: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110286E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110286E6u);

L_110286E6:
    PUSH32(esp, ebp); /* 0x110286E6: push ebp */
    ebp = esp; /* 0x110286E7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110286E9: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x110286EC: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110286EE: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110286F1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110286F4: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110286F7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110286FA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110286FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028700: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11028703: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028706: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028709: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102870A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102870D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102870Du);

L_1102870D:
    PUSH32(esp, ebp); /* 0x1102870D: push ebp */
    ebp = esp; /* 0x1102870E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028710: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028713: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028715: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028718: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102871B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102871E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028721: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028724: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028727: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102872A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102872D: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028730: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028731: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028734u);

L_11028734:
    PUSH32(esp, ebp); /* 0x11028734: push ebp */
    ebp = esp; /* 0x11028735: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028737: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x1102873A: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102873C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102873F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028742: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028745: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028748: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102874B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102874E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11028751: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028754: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028757: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028758: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102875B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102875Bu);

L_1102875B:
    PUSH32(esp, ebp); /* 0x1102875B: push ebp */
    ebp = esp; /* 0x1102875C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1102875E: push dword ptr [ebp + 0x2c] */
    eax = MEM32(ecx); /* 0x11028761: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x11028763: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028766: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028769: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102876C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102876F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028772: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028775: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028778: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102877B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1102877E: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028781: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028784: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x11028785: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_11028788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028788u);

L_11028788:
    PUSH32(esp, 0x20u); /* 0x11028788: push 0x20 */
    eax = 0x1103E8F6u; /* 0x1102878A: mov eax, 0x1103e8f6 */
    RECOMP_CALL(sub_1103B372); /* 0x1102878F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = ecx; /* 0x11028794: mov dword ptr [ebp - 0x24], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11028797: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x14); /* 0x1102879A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102879D: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102879E: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110287A3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110287A7: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x110287A8: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110287AD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110287B1: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110287B3: pop ecx */
    ecx = ebp + (-0x14); /* 0x110287B4: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x110287B7: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1100E431); /* 0x110287BA: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x28); /* 0x110287BF: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + 0x20); /* 0x110287C2: mov edi, dword ptr [ebp + 0x20] */
    goto L_110288E0; /* 0x110287C5: jmp 0x110288e0 */
L_110287CA:
    SET_LO8(eax, MEM8(esi)); /* 0x110287CA: mov al, byte ptr [esi] */
    ecx = ebx; /* 0x110287CC: mov ecx, ebx */
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(eax)); /* 0x110287CE: mov byte ptr [ebp - 0x18], al */
    eax = MEM32(ebx); /* 0x110287D1: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x110287D3: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110287D5: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110287D8: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x110287DB: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102884F; /* 0x110287DD: je 0x1102884f */
L_110287DF:
    ecx = (uint32_t)MEM8(esi); /* 0x110287DF: movzx ecx, byte ptr [esi] */
    eax = MEM32(ebx + 0xC); /* 0x110287E2: mov eax, dword ptr [ebx + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x110287E5: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102883A; /* 0x110287E9: jne 0x1102883a */
L_110287EB:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110287EB: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110287F9; /* 0x110287EF: jne 0x110287f9 */
L_110287F1:
    ecx = ebp + 0xC; /* 0x110287F1: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110287F4: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110287F9:
    SET_LO8(eax, MEM8(ebp + 0x11)); /* 0x110287F9: mov al, byte ptr [ebp + 0x11] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x110287FC: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110288EB; /* 0x110287FE: jne 0x110288eb */
L_11028804:
    ecx = ebp + 0xC; /* 0x11028804: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11028807: call 0x11021816 */
    RECOMP_FLAGS_IN();
    goto L_110288DF; /* 0x1102880C: jmp 0x110288df */
L_11028811:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028811: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102881F; /* 0x11028815: jne 0x1102881f */
L_11028817:
    ecx = ebp + 0xC; /* 0x11028817: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x1102881A: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1102881F:
    eax = MEM32(ebp + 0x11); /* 0x1102881F: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x11028822: movzx ecx, al */
    eax = MEM32(ebx + 0xC); /* 0x11028825: mov eax, dword ptr [ebx + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x11028828: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110288DF; /* 0x1102882C: je 0x110288df */
L_11028832:
    ecx = ebp + 0xC; /* 0x11028832: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11028835: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1102883A:
    eax = ebp + 0x14; /* 0x1102883A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102883D: push eax */
    ecx = ebp + 0xC; /* 0x1102883E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11028841: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028846: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028811; /* 0x11028848: je 0x11028811 */
L_1102884A:
    goto L_110288DF; /* 0x1102884A: jmp 0x110288df */
L_1102884F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102884F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028850: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028939; /* 0x11028853: je 0x11028939 */
L_11028859:
    SET_LO8(eax, MEM8(esi)); /* 0x11028859: mov al, byte ptr [esi] */
    ecx = ebx; /* 0x1102885B: mov ecx, ebx */
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102885D: mov byte ptr [ebp - 0x1c], al */
    eax = MEM32(ebx); /* 0x11028860: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x11028862: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x11028864: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11028867: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    SET_HI8(ebx, MEM8(esi + (-0x1))); /* 0x1102886A: mov bh, byte ptr [esi - 1] */
    SET_LO8(ebx, LO8(eax)); /* 0x1102886D: mov bl, al */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(ebx)); /* 0x1102886F: mov byte ptr [ebp + 0x20], bl */
    MEM8(ebp + 0x28) = (uint8_t)(0); /* 0x11028872: mov byte ptr [ebp + 0x28], 0 */
    /* cmp LO8(ebx), 0x45u */ /* 0x11028876: cmp bl, 0x45 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102888A; /* 0x11028879: je 0x1102888a */
L_1102887B:
    /* cmp LO8(ebx), 0x4Fu */ /* 0x1102887B: cmp bl, 0x4f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102888A; /* 0x1102887E: je 0x1102888a */
L_11028880:
    /* cmp LO8(ebx), 0x51u */ /* 0x11028880: cmp bl, 0x51 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102888A; /* 0x11028883: je 0x1102888a */
L_11028885:
    /* cmp LO8(ebx), 0x23u */ /* 0x11028885: cmp bl, 0x23 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110288AC; /* 0x11028888: jne 0x110288ac */
L_1102888A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102888A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x1102888B: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110288F0; /* 0x1102888E: je 0x110288f0 */
L_11028890:
    SET_LO8(eax, MEM8(esi)); /* 0x11028890: mov al, byte ptr [esi] */
    MEM8(ebp + 0x28) = (uint8_t)(LO8(ebx)); /* 0x11028892: mov byte ptr [ebp + 0x28], bl */
    ebx = MEM32(ebp + (-0x10)); /* 0x11028895: mov ebx, dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x11028898: mov ecx, ebx */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102889A: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, 0); /* 0x1102889D: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1102889F: push dword ptr [ebp - 0x20] */
    eax = MEM32(ebx); /* 0x110288A2: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110288A4: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0x20) = (uint8_t)(LO8(eax)); /* 0x110288A7: mov byte ptr [ebp + 0x20], al */
    goto L_110288AF; /* 0x110288AA: jmp 0x110288af */
L_110288AC:
    ebx = MEM32(ebp + (-0x10)); /* 0x110288AC: mov ebx, dword ptr [ebp - 0x10] */
L_110288AF:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x110288AF: push dword ptr [ebp + 0x28] */
    ecx = MEM32(ebp + (-0x24)); /* 0x110288B2: mov ecx, dword ptr [ebp - 0x24] */
    edx = ebp + (-0x2C); /* 0x110288B5: lea edx, [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110288B8: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110288BB: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x110288BE: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x110288C0: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110288C1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110288C4: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110288C7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110288CA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110288CD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x110288D0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x110288D1: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x110288D4: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x110288D6: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x110288D9: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x110288DC: mov dword ptr [ebp + 0x10], eax */
L_110288DF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110288DF: inc esi */
    _flag_k = FK_INC;
L_110288E0:
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x110288E0: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110287CA; /* 0x110288E3: jne 0x110287ca */
L_110288E9:
    goto L_11028957; /* 0x110288E9: jmp 0x11028957 */
L_110288EB:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110288EB: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11028957; /* 0x110288EE: jmp 0x11028957 */
L_110288F0:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110288F0: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110288FE; /* 0x110288F4: jne 0x110288fe */
L_110288F6:
    ecx = ebp + 0xC; /* 0x110288F6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110288F9: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110288FE:
    /* cmp MEM8(ebp + 0x11), HI8(ebx) */ /* 0x110288FE: cmp byte ptr [ebp + 0x11], bh */
    _flag_a = (uint32_t)(MEM8(ebp + 0x11)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110288EB; /* 0x11028901: jne 0x110288eb */
L_11028903:
    ecx = ebp + 0xC; /* 0x11028903: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11028906: call 0x11021816 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x1102890B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102890E: push eax */
    ecx = ebp + 0xC; /* 0x1102890F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11028912: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028917: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110288EB; /* 0x11028919: jne 0x110288eb */
L_1102891B:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1102891B: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028928; /* 0x1102891E: jne 0x11028928 */
L_11028920:
    ecx = ebp + 0xC; /* 0x11028920: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11028923: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11028928:
    ecx = MEM32(ebp + (-0x10)); /* 0x11028928: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1102892B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x1102892D: push dword ptr [ebp + 0x11] */
    eax = MEM32(ecx); /* 0x11028930: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11028932: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), LO8(ebx) */ /* 0x11028935: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_1102894D; /* 0x11028937: jmp 0x1102894d */
L_11028939:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028939: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028947; /* 0x1102893D: jne 0x11028947 */
L_1102893F:
    ecx = ebp + 0xC; /* 0x1102893F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11028942: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11028947:
    SET_LO8(eax, MEM8(ebp + 0x11)); /* 0x11028947: mov al, byte ptr [ebp + 0x11] */
    /* cmp LO8(eax), MEM8(esi + (-0x1)) */ /* 0x1102894A: cmp al, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1102894D:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_110288EB; /* 0x1102894D: jne 0x110288eb */
L_1102894F:
    ecx = ebp + 0xC; /* 0x1102894F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11028952: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11028957:
    eax = ebp + 0x14; /* 0x11028957: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102895A: push eax */
    ecx = ebp + 0xC; /* 0x1102895B: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102895E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028963: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102896A; /* 0x11028965: je 0x1102896a */
L_11028967:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11028967: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102896A:
    eax = MEM32(ebp + 0x8); /* 0x1102896A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102896D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11028970: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11028972: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11028975: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11028978: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x1102897D: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_11028980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028980u);

L_11028980:
    PUSH32(esp, 0x14u); /* 0x11028980: push 0x14 */
    eax = 0x1103E919u; /* 0x11028982: mov eax, 0x1103e919 */
    RECOMP_CALL(sub_1103B372); /* 0x11028987: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ecx; /* 0x1102898C: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1102898F: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11028992: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11028995: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11028996: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102899B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102899F: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110289A0: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110289A5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110289A9: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110289AB: pop ecx */
    ecx = ebp + (-0x10); /* 0x110289AC: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110289AF: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x28); /* 0x110289B4: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + 0x20); /* 0x110289B7: mov edi, dword ptr [ebp + 0x20] */
    goto L_11028ACC; /* 0x110289BA: jmp 0x11028acc */
L_110289BF:
    eax = (uint32_t)MEM16(esi); /* 0x110289BF: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x110289C2: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x110289C4: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x110289C6: push 0 */
    PUSH32(esp, eax); /* 0x110289C8: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x110289C9: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x110289CC: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028A47; /* 0x110289CE: je 0x11028a47 */
L_110289D0:
    eax = (uint32_t)MEM16(esi); /* 0x110289D0: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x110289D3: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x110289D5: mov edx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x110289D7: push eax */
    PUSH32(esp, 0x48u); /* 0x110289D8: push 0x48 */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x110289DA: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110289DD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028A32; /* 0x110289DF: jne 0x11028a32 */
L_110289E1:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x110289E1: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110289EE; /* 0x110289E4: jne 0x110289ee */
L_110289E6:
    ecx = ebp + 0xC; /* 0x110289E6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110289E9: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110289EE:
    SET_LO16(eax, MEM16(ebp + 0x12)); /* 0x110289EE: mov ax, word ptr [ebp + 0x12] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x110289F2: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028AD7; /* 0x110289F5: jne 0x11028ad7 */
L_110289FB:
    ecx = ebp + 0xC; /* 0x110289FB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x110289FE: call 0x11021838 */
    RECOMP_FLAGS_IN();
    goto L_11028AC9; /* 0x11028A03: jmp 0x11028ac9 */
L_11028A08:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028A08: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028A16; /* 0x11028A0C: jne 0x11028a16 */
L_11028A0E:
    ecx = ebp + 0xC; /* 0x11028A0E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028A11: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028A16:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11028A16: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11028A19: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11028A1B: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x11028A1D: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11028A1F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028A22: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028AC9; /* 0x11028A24: je 0x11028ac9 */
L_11028A2A:
    ecx = ebp + 0xC; /* 0x11028A2A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028A2D: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11028A32:
    eax = ebp + 0x14; /* 0x11028A32: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028A35: push eax */
    ecx = ebp + 0xC; /* 0x11028A36: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028A39: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028A3E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028A08; /* 0x11028A40: je 0x11028a08 */
L_11028A42:
    goto L_11028AC9; /* 0x11028A42: jmp 0x11028ac9 */
L_11028A47:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028A47: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028A4A: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028B29; /* 0x11028A4D: je 0x11028b29 */
L_11028A53:
    eax = (uint32_t)MEM16(esi); /* 0x11028A53: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x11028A56: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x11028A58: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x11028A5A: push 0 */
    PUSH32(esp, eax); /* 0x11028A5C: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11028A5D: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM16(esi + (-0x2)); /* 0x11028A60: movzx ecx, word ptr [esi - 2] */
    MEM8(ebp + 0x28) = (uint8_t)(LO8(eax)); /* 0x11028A64: mov byte ptr [ebp + 0x28], al */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x11028A67: mov byte ptr [ebp + 0x20], 0 */
    MEM32(ebp + (-0x18)) = ecx; /* 0x11028A6B: mov dword ptr [ebp - 0x18], ecx */
    /* cmp LO8(eax), 0x45u */ /* 0x11028A6E: cmp al, 0x45 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028A7E; /* 0x11028A70: je 0x11028a7e */
L_11028A72:
    /* cmp LO8(eax), 0x4Fu */ /* 0x11028A72: cmp al, 0x4f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028A7E; /* 0x11028A74: je 0x11028a7e */
L_11028A76:
    /* cmp LO8(eax), 0x51u */ /* 0x11028A76: cmp al, 0x51 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028A7E; /* 0x11028A78: je 0x11028a7e */
L_11028A7A:
    /* cmp LO8(eax), 0x23u */ /* 0x11028A7A: cmp al, 0x23 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028A99; /* 0x11028A7C: jne 0x11028a99 */
L_11028A7E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028A7E: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028A81: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028ADC; /* 0x11028A84: je 0x11028adc */
L_11028A86:
    edx = MEM32(ebx); /* 0x11028A86: mov edx, dword ptr [ebx] */
    ecx = ebx; /* 0x11028A88: mov ecx, ebx */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(eax)); /* 0x11028A8A: mov byte ptr [ebp + 0x20], al */
    eax = (uint32_t)MEM16(esi); /* 0x11028A8D: movzx eax, word ptr [esi] */
    PUSH32(esp, 0); /* 0x11028A90: push 0 */
    PUSH32(esp, eax); /* 0x11028A92: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11028A93: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0x28) = (uint8_t)(LO8(eax)); /* 0x11028A96: mov byte ptr [ebp + 0x28], al */
L_11028A99:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028A99: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11028A9C: mov ecx, dword ptr [ebp - 0x14] */
    edx = ebp + (-0x20); /* 0x11028A9F: lea edx, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x11028AA2: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028AA5: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028AA8: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x11028AAA: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028AAB: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028AAE: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028AB1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028AB4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028AB7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x11028ABA: push edx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11028ABB: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11028ABE: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11028AC0: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11028AC3: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11028AC6: mov dword ptr [ebp + 0x10], eax */
L_11028AC9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028AC9: add esi, 2 */
    _flag_k = FK_ADD;
L_11028ACC:
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028ACC: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110289BF; /* 0x11028ACF: jne 0x110289bf */
L_11028AD5:
    goto L_11028B49; /* 0x11028AD5: jmp 0x11028b49 */
L_11028AD7:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11028AD7: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11028B49; /* 0x11028ADA: jmp 0x11028b49 */
L_11028ADC:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028ADC: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028AED; /* 0x11028AE0: jne 0x11028aed */
L_11028AE2:
    ecx = ebp + 0xC; /* 0x11028AE2: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028AE5: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x11028AEA: mov ecx, dword ptr [ebp - 0x18] */
L_11028AED:
    /* cmp MEM16(ebp + 0x12), LO16(ecx) */ /* 0x11028AED: cmp word ptr [ebp + 0x12], cx */
    _flag_a = (uint32_t)(MEM16(ebp + 0x12)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028AD7; /* 0x11028AF1: jne 0x11028ad7 */
L_11028AF3:
    ecx = ebp + 0xC; /* 0x11028AF3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028AF6: call 0x11021838 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11028AFB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028AFE: push eax */
    ecx = ebp + 0xC; /* 0x11028AFF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028B02: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028B07: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028AD7; /* 0x11028B09: jne 0x11028ad7 */
L_11028B0B:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x11028B0B: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028B18; /* 0x11028B0E: jne 0x11028b18 */
L_11028B10:
    ecx = ebp + 0xC; /* 0x11028B10: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028B13: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028B18:
    eax = MEM32(ebx); /* 0x11028B18: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11028B1A: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x11028B1C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11028B1E: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11028B21: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(ebp + 0x28) */ /* 0x11028B24: cmp al, byte ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x28)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_11028B3F; /* 0x11028B27: jmp 0x11028b3f */
L_11028B29:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028B29: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028B37; /* 0x11028B2D: jne 0x11028b37 */
L_11028B2F:
    ecx = ebp + 0xC; /* 0x11028B2F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028B32: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028B37:
    SET_LO16(eax, MEM16(ebp + 0x12)); /* 0x11028B37: mov ax, word ptr [ebp + 0x12] */
    /* cmp LO16(eax), MEM16(esi + (-0x2)) */ /* 0x11028B3B: cmp ax, word ptr [esi - 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + (-0x2))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_11028B3F:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_11028AD7; /* 0x11028B3F: jne 0x11028ad7 */
L_11028B41:
    ecx = ebp + 0xC; /* 0x11028B41: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028B44: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11028B49:
    eax = ebp + 0x14; /* 0x11028B49: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028B4C: push eax */
    ecx = ebp + 0xC; /* 0x11028B4D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028B50: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028B55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028B5C; /* 0x11028B57: je 0x11028b5c */
L_11028B59:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11028B59: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028B5C:
    eax = MEM32(ebp + 0x8); /* 0x11028B5C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11028B5F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11028B62: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11028B64: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11028B67: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11028B6A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x11028B6F: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_11028B72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028B72u);

L_11028B72:
    PUSH32(esp, 0x14u); /* 0x11028B72: push 0x14 */
    eax = 0x1103E919u; /* 0x11028B74: mov eax, 0x1103e919 */
    RECOMP_CALL(sub_1103B372); /* 0x11028B79: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ecx; /* 0x11028B7E: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11028B81: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11028B84: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11028B87: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11028B88: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11028B8D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11028B91: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11028B92: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11028B97: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11028B9B: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x11028B9D: pop ecx */
    ecx = ebp + (-0x10); /* 0x11028B9E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11028BA1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x28); /* 0x11028BA6: mov esi, dword ptr [ebp + 0x28] */
    edi = MEM32(ebp + 0x20); /* 0x11028BA9: mov edi, dword ptr [ebp + 0x20] */
    goto L_11028CBE; /* 0x11028BAC: jmp 0x11028cbe */
L_11028BB1:
    eax = (uint32_t)MEM16(esi); /* 0x11028BB1: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x11028BB4: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x11028BB6: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x11028BB8: push 0 */
    PUSH32(esp, eax); /* 0x11028BBA: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11028BBB: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x11028BBE: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028C39; /* 0x11028BC0: je 0x11028c39 */
L_11028BC2:
    eax = (uint32_t)MEM16(esi); /* 0x11028BC2: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x11028BC5: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x11028BC7: mov edx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x11028BC9: push eax */
    PUSH32(esp, 0x48u); /* 0x11028BCA: push 0x48 */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x11028BCC: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028BCF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028C24; /* 0x11028BD1: jne 0x11028c24 */
L_11028BD3:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x11028BD3: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028BE0; /* 0x11028BD6: jne 0x11028be0 */
L_11028BD8:
    ecx = ebp + 0xC; /* 0x11028BD8: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028BDB: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028BE0:
    SET_LO16(eax, MEM16(ebp + 0x12)); /* 0x11028BE0: mov ax, word ptr [ebp + 0x12] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x11028BE4: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028CC9; /* 0x11028BE7: jne 0x11028cc9 */
L_11028BED:
    ecx = ebp + 0xC; /* 0x11028BED: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028BF0: call 0x11021838 */
    RECOMP_FLAGS_IN();
    goto L_11028CBB; /* 0x11028BF5: jmp 0x11028cbb */
L_11028BFA:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028BFA: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028C08; /* 0x11028BFE: jne 0x11028c08 */
L_11028C00:
    ecx = ebp + 0xC; /* 0x11028C00: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028C03: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028C08:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11028C08: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11028C0B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11028C0D: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x11028C0F: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11028C11: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028C14: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028CBB; /* 0x11028C16: je 0x11028cbb */
L_11028C1C:
    ecx = ebp + 0xC; /* 0x11028C1C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028C1F: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11028C24:
    eax = ebp + 0x14; /* 0x11028C24: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028C27: push eax */
    ecx = ebp + 0xC; /* 0x11028C28: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028C2B: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028C30: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028BFA; /* 0x11028C32: je 0x11028bfa */
L_11028C34:
    goto L_11028CBB; /* 0x11028C34: jmp 0x11028cbb */
L_11028C39:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028C39: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028C3C: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028D1B; /* 0x11028C3F: je 0x11028d1b */
L_11028C45:
    eax = (uint32_t)MEM16(esi); /* 0x11028C45: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x11028C48: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x11028C4A: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x11028C4C: push 0 */
    PUSH32(esp, eax); /* 0x11028C4E: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11028C4F: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM16(esi + (-0x2)); /* 0x11028C52: movzx ecx, word ptr [esi - 2] */
    MEM8(ebp + 0x28) = (uint8_t)(LO8(eax)); /* 0x11028C56: mov byte ptr [ebp + 0x28], al */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x11028C59: mov byte ptr [ebp + 0x20], 0 */
    MEM32(ebp + (-0x18)) = ecx; /* 0x11028C5D: mov dword ptr [ebp - 0x18], ecx */
    /* cmp LO8(eax), 0x45u */ /* 0x11028C60: cmp al, 0x45 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028C70; /* 0x11028C62: je 0x11028c70 */
L_11028C64:
    /* cmp LO8(eax), 0x4Fu */ /* 0x11028C64: cmp al, 0x4f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028C70; /* 0x11028C66: je 0x11028c70 */
L_11028C68:
    /* cmp LO8(eax), 0x51u */ /* 0x11028C68: cmp al, 0x51 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028C70; /* 0x11028C6A: je 0x11028c70 */
L_11028C6C:
    /* cmp LO8(eax), 0x23u */ /* 0x11028C6C: cmp al, 0x23 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028C8B; /* 0x11028C6E: jne 0x11028c8b */
L_11028C70:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028C70: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028C73: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11028CCE; /* 0x11028C76: je 0x11028cce */
L_11028C78:
    edx = MEM32(ebx); /* 0x11028C78: mov edx, dword ptr [ebx] */
    ecx = ebx; /* 0x11028C7A: mov ecx, ebx */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(eax)); /* 0x11028C7C: mov byte ptr [ebp + 0x20], al */
    eax = (uint32_t)MEM16(esi); /* 0x11028C7F: movzx eax, word ptr [esi] */
    PUSH32(esp, 0); /* 0x11028C82: push 0 */
    PUSH32(esp, eax); /* 0x11028C84: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11028C85: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0x28) = (uint8_t)(LO8(eax)); /* 0x11028C88: mov byte ptr [ebp + 0x28], al */
L_11028C8B:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028C8B: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11028C8E: mov ecx, dword ptr [ebp - 0x14] */
    edx = ebp + (-0x20); /* 0x11028C91: lea edx, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x11028C94: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028C97: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028C9A: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x11028C9C: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028C9D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028CA0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028CA3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028CA6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028CA9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x11028CAC: push edx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11028CAD: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11028CB0: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11028CB2: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11028CB5: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11028CB8: mov dword ptr [ebp + 0x10], eax */
L_11028CBB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11028CBB: add esi, 2 */
    _flag_k = FK_ADD;
L_11028CBE:
    /* cmp esi, MEM32(ebp + 0x2C) */ /* 0x11028CBE: cmp esi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028BB1; /* 0x11028CC1: jne 0x11028bb1 */
L_11028CC7:
    goto L_11028D3B; /* 0x11028CC7: jmp 0x11028d3b */
L_11028CC9:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11028CC9: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11028D3B; /* 0x11028CCC: jmp 0x11028d3b */
L_11028CCE:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028CCE: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028CDF; /* 0x11028CD2: jne 0x11028cdf */
L_11028CD4:
    ecx = ebp + 0xC; /* 0x11028CD4: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028CD7: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x11028CDC: mov ecx, dword ptr [ebp - 0x18] */
L_11028CDF:
    /* cmp MEM16(ebp + 0x12), LO16(ecx) */ /* 0x11028CDF: cmp word ptr [ebp + 0x12], cx */
    _flag_a = (uint32_t)(MEM16(ebp + 0x12)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028CC9; /* 0x11028CE3: jne 0x11028cc9 */
L_11028CE5:
    ecx = ebp + 0xC; /* 0x11028CE5: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028CE8: call 0x11021838 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11028CED: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028CF0: push eax */
    ecx = ebp + 0xC; /* 0x11028CF1: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028CF4: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028CF9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028CC9; /* 0x11028CFB: jne 0x11028cc9 */
L_11028CFD:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x11028CFD: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028D0A; /* 0x11028D00: jne 0x11028d0a */
L_11028D02:
    ecx = ebp + 0xC; /* 0x11028D02: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028D05: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028D0A:
    eax = MEM32(ebx); /* 0x11028D0A: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11028D0C: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x11028D0E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11028D10: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11028D13: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(ebp + 0x28) */ /* 0x11028D16: cmp al, byte ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x28)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_11028D31; /* 0x11028D19: jmp 0x11028d31 */
L_11028D1B:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11028D1B: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028D29; /* 0x11028D1F: jne 0x11028d29 */
L_11028D21:
    ecx = ebp + 0xC; /* 0x11028D21: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11028D24: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11028D29:
    SET_LO16(eax, MEM16(ebp + 0x12)); /* 0x11028D29: mov ax, word ptr [ebp + 0x12] */
    /* cmp LO16(eax), MEM16(esi + (-0x2)) */ /* 0x11028D2D: cmp ax, word ptr [esi - 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + (-0x2))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_11028D31:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_11028CC9; /* 0x11028D31: jne 0x11028cc9 */
L_11028D33:
    ecx = ebp + 0xC; /* 0x11028D33: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11028D36: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11028D3B:
    eax = ebp + 0x14; /* 0x11028D3B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11028D3E: push eax */
    ecx = ebp + 0xC; /* 0x11028D3F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11028D42: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11028D47: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028D4E; /* 0x11028D49: je 0x11028d4e */
L_11028D4B:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11028D4B: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028D4E:
    eax = MEM32(ebp + 0x8); /* 0x11028D4E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11028D51: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11028D54: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11028D56: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11028D59: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11028D5C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x11028D61: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_11028D64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028D64u);

L_11028D64:
    PUSH32(esp, ebp); /* 0x11028D64: push ebp */
    ebp = esp; /* 0x11028D65: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028D67: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028D6A: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028D6C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028D6F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028D72: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028D75: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028D78: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028D7B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028D7E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11028D81: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028D84: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028D87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028D88: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028D8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028D8Bu);

L_11028D8B:
    PUSH32(esp, ebp); /* 0x11028D8B: push ebp */
    ebp = esp; /* 0x11028D8C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11028D8E: push dword ptr [ebp + 0x24] */
    eax = MEM32(ecx); /* 0x11028D91: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11028D93: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11028D96: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11028D99: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11028D9C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028D9F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028DA2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028DA5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11028DA8: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11028DAB: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11028DAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11028DAF: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11028DB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028DB2u);

L_11028DB2:
    PUSH32(esp, ebp); /* 0x11028DB2: push ebp */
    ebp = esp; /* 0x11028DB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11028DB5: push esi */
    esi = ecx; /* 0x11028DB6: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11028DB8: push 0xa */
    eax = MEM32(esi); /* 0x11028DBA: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11028DBC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028DBF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11014868); /* 0x11028DC1: call 0x11014868 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x11028DC6: movzx eax, al */
    ecx = esi; /* 0x11028DC9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11028DCB: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028DCC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028DCF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028DD2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11028DDF); /* 0x11028DD5: call 0x11028ddf */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11028DDA: pop esi */
    ebp = POP32_VAL(esp); /* 0x11028DDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11028DDC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11028DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028DDFu);
    RECOMP_EH_ENTER();

L_11028DDF:
    PUSH32(esp, 0x18u); /* 0x11028DDF: push 0x18 */
    eax = 0x1103E944u; /* 0x11028DE1: mov eax, 0x1103e944 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11028DE6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11028DEB: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11028DED: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028DF0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11028DF2: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = ebx; /* 0x11028DF5: mov dword ptr [esi + 8], ebx */
    edi = ebx; /* 0x11028DF8: mov edi, ebx */
    MEM32(esi + 0xC) = ebx; /* 0x11028DFA: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(esi); /* 0x11028DFD: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11028DFF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028E02: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11028E06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028E0F; /* 0x11028E08: je 0x11028e0f */
L_11028E0A:
    eax = MEM32(ecx); /* 0x11028E0A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11028E0C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11028E0F:
    PUSH32(esp, 1); /* 0x11028E0F: push 1 */
    ecx = esi; /* 0x11028E11: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11028E13: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_11010675); /* 0x11028E16: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11028E1B: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11028E1E: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11028E25: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028E3F; /* 0x11028E27: je 0x11028e3f */
L_11028E29:
    eax = MEM32(ebp + 0x10); /* 0x11028E29: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11028E2C: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, ebx */ /* 0x11028E2F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11028E3F; /* 0x11028E31: jl 0x11028e3f */
L_11028E33:
    if (CMP_G(_flag_a, _flag_b)) goto L_11028E80; /* 0x11028E33: jg 0x11028e80 */
L_11028E35:
    ecx = MEM32(ebp + 0xC); /* 0x11028E35: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x11028E38: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, ebx */ /* 0x11028E3B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11028E86; /* 0x11028E3D: ja 0x11028e86 */
L_11028E3F:
    eax = MEM32(ebp + 0x8); /* 0x11028E3F: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11028E42: mov byte ptr [eax], bl */
    eax = MEM32(esi + 0x8); /* 0x11028E44: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028E47: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028E4F; /* 0x11028E4A: jne 0x11028e4f */
L_11028E4C:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11028E4C: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028E4F:
    eax = MEM32(esi); /* 0x11028E4F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x11028E51: push ebx */
    PUSH32(esp, edi); /* 0x11028E52: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11028E53: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028E56: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11028E58: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11028E5D: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11028E60: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028E64: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11028E66: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11028E69: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11028E6D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028E76; /* 0x11028E6F: je 0x11028e76 */
L_11028E71:
    eax = MEM32(ecx); /* 0x11028E71: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028E73: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11028E76:
    eax = esi; /* 0x11028E76: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11028E78: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11028E7D: ret 0x10 */
L_11028E80:
    eax = MEM32(ebp + 0xC); /* 0x11028E80: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x11028E83: mov dword ptr [ebp + 0x10], eax */
L_11028E86:
    eax = MEM32(ebp + 0x14); /* 0x11028E86: mov eax, dword ptr [ebp + 0x14] */
    eax = (uint32_t)LO8(eax); /* 0x11028E89: movzx eax, al */
    MEM32(ebp + 0x14) = eax; /* 0x11028E8C: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(esi); /* 0x11028E8F: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11028E91: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11028E95: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028E98: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11028E9C: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_11028EA1:
    edx = eax; /* 0x11028EA1: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x11028EA3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028EAD; /* 0x11028EA6: jne 0x11028ead */
L_11028EA8:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x11028EA8: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11028EE8; /* 0x11028EAB: jmp 0x11028ee8 */
L_11028EAD:
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x11028EAD: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028EC9; /* 0x11028EB0: jne 0x11028ec9 */
L_11028EB2:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11028EB2: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x11028EB6: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028EB8: adc dword ptr [esi + 0xc], ebx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x11028EBB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028EBE: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110107B0); /* 0x11028EC2: call 0x110107b0 */
    RECOMP_FLAGS_IN();
    goto L_11028EE8; /* 0x11028EC7: jmp 0x11028ee8 */
L_11028EC9:
    eax = MEM32(ebp + 0x10); /* 0x11028EC9: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11028ECC: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x11028ECF: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x11028ED2: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = ecx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028ED5: adc ecx, -1 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = ecx; /* 0x11028ED8: mov dword ptr [ebp - 0x14], ecx */
    /* cmp ecx, ebx */ /* 0x11028EDB: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_11028EF4; /* 0x11028EDD: jg 0x11028ef4 */
L_11028EDF:
    if (CMP_L(_flag_a, _flag_b)) goto L_11028EE5; /* 0x11028EDF: jl 0x11028ee5 */
L_11028EE1:
    /* cmp eax, ebx */ /* 0x11028EE1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11028EF4; /* 0x11028EE3: ja 0x11028ef4 */
L_11028EE5:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11028EE5: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028EE8:
    MEM32(ebp + (-0x4)) = 1; /* 0x11028EE8: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11028E3F; /* 0x11028EEF: jmp 0x11028e3f */
L_11028EF4:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11028EF4: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x11028EF8: mov eax, dword ptr [ebp + 8] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11028EFB: adc dword ptr [esi + 0xc], ebx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x11028EFE: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11028F00: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x11028F01: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x11028F04: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11028F06: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028F09: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x11028F0D: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11028EA1; /* 0x11028F12: jmp 0x11028ea1 */
L_11028F3F:
    esi = MEM32(ebp + (-0x18)); /* 0x11028F3F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028F42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11028F44: mov dword ptr [ebp - 4], 1 */
    edi = ebx; /* 0x11028F4B: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_11028E3F; /* 0x11028F4D: jmp 0x11028e3f */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11028F3Fu: goto L_11028F3F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11028F14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028F14u);

L_11028F14:
    ecx = MEM32(ebp + (-0x18)); /* 0x11028F14: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028F17: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028F19: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11028F1B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11028F1E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11028F20: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11028F23: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x11028F26: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11028F2E; /* 0x11028F29: jne 0x11028f2e */
L_11028F2B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11028F2B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028F2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11028F2E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11028F31: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11028F34: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028F52; /* 0x11028F37: jne 0x11028f52 */
L_11028F39:
    eax = 0x11028F3Fu; /* 0x11028F39: mov eax, 0x11028f3f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11028F3E: ret  */
L_11028F52:
    PUSH32(esp, ebx); /* 0x11028F52: push ebx */
    PUSH32(esp, ebx); /* 0x11028F53: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x11028F54: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11028F59u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11028F3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028F3Fu);

    goto L_11028F3F;
L_11028E3F:
    eax = MEM32(ebp + 0x8); /* 0x11028E3F: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11028E42: mov byte ptr [eax], bl */
    eax = MEM32(esi + 0x8); /* 0x11028E44: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028E47: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028E4F; /* 0x11028E4A: jne 0x11028e4f */
L_11028E4C:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11028E4C: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028E4F:
    eax = MEM32(esi); /* 0x11028E4F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x11028E51: push ebx */
    PUSH32(esp, edi); /* 0x11028E52: push edi */
    ecx = MEM32(eax + 0x4); /* 0x11028E53: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028E56: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11028E58: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11028E5D: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11028E60: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11028E64: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11028E66: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11028E69: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11028E6D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028E76; /* 0x11028E6F: je 0x11028e76 */
L_11028E71:
    eax = MEM32(ecx); /* 0x11028E71: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11028E73: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11028E76:
    eax = esi; /* 0x11028E76: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11028E78: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11028E7D: ret 0x10 */
L_11028F3F:
    esi = MEM32(ebp + (-0x18)); /* 0x11028F3F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11028F42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11028F44: mov dword ptr [ebp - 4], 1 */
    edi = ebx; /* 0x11028F4B: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_11028E3F; /* 0x11028F4D: jmp 0x11028e3f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11028F5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028F5Au);

L_11028F5A:
    PUSH32(esp, ebp); /* 0x11028F5A: push ebp */
    ebp = esp; /* 0x11028F5B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11028F5D: push esi */
    esi = ecx; /* 0x11028F5E: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11028F60: push 0xa */
    eax = MEM32(esi); /* 0x11028F62: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11028F64: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11028F67: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF51); /* 0x11028F69: call 0x1102bf51 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11028F6E: movzx eax, ax */
    ecx = esi; /* 0x11028F71: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11028F73: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11028F74: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11028F77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11028F7A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11028F87); /* 0x11028F7D: call 0x11028f87 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11028F82: pop esi */
    ebp = POP32_VAL(esp); /* 0x11028F83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11028F84: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11028F87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11028F87u);
    RECOMP_EH_ENTER();

L_11028F87:
    PUSH32(esp, 0x18u); /* 0x11028F87: push 0x18 */
    eax = 0x1103E96Fu; /* 0x11028F89: mov eax, 0x1103e96f */
    RECOMP_CALL(sub_1103B3DB); /* 0x11028F8E: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11028F93: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11028F95: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11028F98: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11028F9A: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11028F9D: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x11028FA0: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x11028FA2: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11028FA5: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11028FA7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11028FAA: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11028FAE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028FB7; /* 0x11028FB0: je 0x11028fb7 */
L_11028FB2:
    eax = MEM32(ecx); /* 0x11028FB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11028FB4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11028FB7:
    PUSH32(esp, 1); /* 0x11028FB7: push 1 */
    ecx = esi; /* 0x11028FB9: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11028FBB: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11028FBE: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11028FC3: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11028FC6: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11028FCD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11028FE7; /* 0x11028FCF: je 0x11028fe7 */
L_11028FD1:
    eax = MEM32(ebp + 0x10); /* 0x11028FD1: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11028FD4: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, edi */ /* 0x11028FD7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11028FE7; /* 0x11028FD9: jl 0x11028fe7 */
L_11028FDB:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102902B; /* 0x11028FDB: jg 0x1102902b */
L_11028FDD:
    ecx = MEM32(ebp + 0xC); /* 0x11028FDD: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x11028FE0: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, edi */ /* 0x11028FE3: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11029031; /* 0x11028FE5: ja 0x11029031 */
L_11028FE7:
    eax = MEM32(ebp + 0x8); /* 0x11028FE7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11028FEA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028FEC: mov word ptr [eax], cx */
    eax = MEM32(esi + 0x8); /* 0x11028FEF: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028FF2: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028FFA; /* 0x11028FF5: jne 0x11028ffa */
L_11028FF7:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028FF7: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028FFA:
    eax = MEM32(esi); /* 0x11028FFA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11028FFC: push edi */
    PUSH32(esp, ebx); /* 0x11028FFD: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11028FFE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029001: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029003: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029008: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102900B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102900F: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029011: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029014: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029018: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029021; /* 0x1102901A: je 0x11029021 */
L_1102901C:
    eax = MEM32(ecx); /* 0x1102901C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102901E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029021:
    eax = esi; /* 0x11029021: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11029023: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029028: ret 0x10 */
L_1102902B:
    eax = MEM32(ebp + 0xC); /* 0x1102902B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x1102902E: mov dword ptr [ebp + 0x10], eax */
L_11029031:
    eax = MEM32(ebp + 0x14); /* 0x11029031: mov eax, dword ptr [ebp + 0x14] */
    eax = (uint32_t)LO16(eax); /* 0x11029034: movzx eax, ax */
    MEM32(ebp + 0x14) = eax; /* 0x11029037: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(esi); /* 0x1102903A: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102903C: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11029040: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029043: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11029047: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1102904C:
    eax = (uint32_t)LO16(eax); /* 0x1102904C: movzx eax, ax */
    edx = eax; /* 0x1102904F: mov edx, eax */
    eax = 0xFFFFu; /* 0x11029051: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(edx) */ /* 0x11029056: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029060; /* 0x11029059: jne 0x11029060 */
L_1102905B:
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x1102905B: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102909C; /* 0x1102905E: jmp 0x1102909c */
L_11029060:
    /* cmp LO16(edx), MEM16(ebp + 0x14) */ /* 0x11029060: cmp dx, word ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102907D; /* 0x11029064: jne 0x1102907d */
L_11029066:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x11029066: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1102906A: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102906C: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x1102906F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029072: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x11029076: call 0x1101093b */
    RECOMP_FLAGS_IN();
    goto L_1102909C; /* 0x1102907B: jmp 0x1102909c */
L_1102907D:
    eax = MEM32(ebp + 0x10); /* 0x1102907D: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11029080: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x11029083: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x11029086: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = ecx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11029089: adc ecx, -1 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = ecx; /* 0x1102908C: mov dword ptr [ebp - 0x14], ecx */
    /* cmp ecx, edi */ /* 0x1102908F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_110290A8; /* 0x11029091: jg 0x110290a8 */
L_11029093:
    if (CMP_L(_flag_a, _flag_b)) goto L_11029099; /* 0x11029093: jl 0x11029099 */
L_11029095:
    /* cmp eax, edi */ /* 0x11029095: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110290A8; /* 0x11029097: ja 0x110290a8 */
L_11029099:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11029099: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102909C:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102909C: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11028FE7; /* 0x110290A3: jmp 0x11028fe7 */
L_110290A8:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x110290A8: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x110290AC: mov eax, dword ptr [ebp + 8] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110290AF: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x110290B2: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x110290B5: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x110290B8: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x110290BB: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110290BD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110290C0: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x110290C4: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102904C; /* 0x110290C9: jmp 0x1102904c */
L_110290F6:
    esi = MEM32(ebp + (-0x18)); /* 0x110290F6: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110290F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110290FB: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x11029102: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028FE7; /* 0x11029104: jmp 0x11028fe7 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110290F6u: goto L_110290F6;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110290CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110290CBu);

L_110290CB:
    ecx = MEM32(ebp + (-0x18)); /* 0x110290CB: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110290CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110290D0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110290D2: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110290D5: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110290D7: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110290DA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110290DD: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110290E5; /* 0x110290E0: jne 0x110290e5 */
L_110290E2:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110290E2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110290E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110290E5: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110290E8: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110290EB: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029109; /* 0x110290EE: jne 0x11029109 */
L_110290F0:
    eax = 0x110290F6u; /* 0x110290F0: mov eax, 0x110290f6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110290F5: ret  */
L_11029109:
    PUSH32(esp, edi); /* 0x11029109: push edi */
    PUSH32(esp, edi); /* 0x1102910A: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102910B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029110u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110290F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110290F6u);

    goto L_110290F6;
L_11028FE7:
    eax = MEM32(ebp + 0x8); /* 0x11028FE7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11028FEA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11028FEC: mov word ptr [eax], cx */
    eax = MEM32(esi + 0x8); /* 0x11028FEF: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x11028FF2: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11028FFA; /* 0x11028FF5: jne 0x11028ffa */
L_11028FF7:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11028FF7: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11028FFA:
    eax = MEM32(esi); /* 0x11028FFA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11028FFC: push edi */
    PUSH32(esp, ebx); /* 0x11028FFD: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11028FFE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029001: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029003: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029008: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102900B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102900F: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029011: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029014: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029018: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029021; /* 0x1102901A: je 0x11029021 */
L_1102901C:
    eax = MEM32(ecx); /* 0x1102901C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102901E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029021:
    eax = esi; /* 0x11029021: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11029023: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11029028: ret 0x10 */
L_110290F6:
    esi = MEM32(ebp + (-0x18)); /* 0x110290F6: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110290F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110290FB: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x11029102: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_11028FE7; /* 0x11029104: jmp 0x11028fe7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029111(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029111u);

L_11029111:
    PUSH32(esp, ebp); /* 0x11029111: push ebp */
    ebp = esp; /* 0x11029112: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11029114: push esi */
    esi = ecx; /* 0x11029115: mov esi, ecx */
    PUSH32(esp, 0xAu); /* 0x11029117: push 0xa */
    eax = MEM32(esi); /* 0x11029119: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102911B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102911E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102BF91); /* 0x11029120: call 0x1102bf91 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11029125: movzx eax, ax */
    ecx = esi; /* 0x11029128: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1102912A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102912B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102912E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029131: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102913E); /* 0x11029134: call 0x1102913e */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11029139: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102913A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102913B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102913E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102913Eu);
    RECOMP_EH_ENTER();

L_1102913E:
    PUSH32(esp, 0x18u); /* 0x1102913E: push 0x18 */
    eax = 0x1103E99Au; /* 0x11029140: mov eax, 0x1103e99a */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029145: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102914A: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1102914C: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102914F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11029151: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11029154: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x11029157: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x11029159: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x1102915C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102915E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029161: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029165: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102916E; /* 0x11029167: je 0x1102916e */
L_11029169:
    eax = MEM32(ecx); /* 0x11029169: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102916B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102916E:
    PUSH32(esp, 1); /* 0x1102916E: push 1 */
    ecx = esi; /* 0x11029170: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11029172: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11029175: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102917A: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102917D: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11029184: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102919E; /* 0x11029186: je 0x1102919e */
L_11029188:
    eax = MEM32(ebp + 0x10); /* 0x11029188: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1102918B: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, edi */ /* 0x1102918E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102919E; /* 0x11029190: jl 0x1102919e */
L_11029192:
    if (CMP_G(_flag_a, _flag_b)) goto L_110291E2; /* 0x11029192: jg 0x110291e2 */
L_11029194:
    ecx = MEM32(ebp + 0xC); /* 0x11029194: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x11029197: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, edi */ /* 0x1102919A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110291E8; /* 0x1102919C: ja 0x110291e8 */
L_1102919E:
    eax = MEM32(ebp + 0x8); /* 0x1102919E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110291A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110291A3: mov word ptr [eax], cx */
    eax = MEM32(esi + 0x8); /* 0x110291A6: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x110291A9: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110291B1; /* 0x110291AC: jne 0x110291b1 */
L_110291AE:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x110291AE: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110291B1:
    eax = MEM32(esi); /* 0x110291B1: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110291B3: push edi */
    PUSH32(esp, ebx); /* 0x110291B4: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x110291B5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110291B8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110291BA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x110291BF: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110291C2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110291C6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110291C8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110291CB: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110291CF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110291D8; /* 0x110291D1: je 0x110291d8 */
L_110291D3:
    eax = MEM32(ecx); /* 0x110291D3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110291D5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110291D8:
    eax = esi; /* 0x110291D8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110291DA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110291DF: ret 0x10 */
L_110291E2:
    eax = MEM32(ebp + 0xC); /* 0x110291E2: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x110291E5: mov dword ptr [ebp + 0x10], eax */
L_110291E8:
    eax = MEM32(ebp + 0x14); /* 0x110291E8: mov eax, dword ptr [ebp + 0x14] */
    eax = (uint32_t)LO16(eax); /* 0x110291EB: movzx eax, ax */
    MEM32(ebp + 0x14) = eax; /* 0x110291EE: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(esi); /* 0x110291F1: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110291F3: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x110291F7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110291FA: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x110291FE: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11029203:
    eax = (uint32_t)LO16(eax); /* 0x11029203: movzx eax, ax */
    edx = eax; /* 0x11029206: mov edx, eax */
    eax = 0xFFFFu; /* 0x11029208: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1102920D: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029217; /* 0x11029210: jne 0x11029217 */
L_11029212:
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x11029212: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11029253; /* 0x11029215: jmp 0x11029253 */
L_11029217:
    /* cmp LO16(edx), MEM16(ebp + 0x14) */ /* 0x11029217: cmp dx, word ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029234; /* 0x1102921B: jne 0x11029234 */
L_1102921D:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x1102921D: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x11029221: mov eax, dword ptr [esi] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11029223: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x11029226: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029229: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x1102922D: call 0x1101093b */
    RECOMP_FLAGS_IN();
    goto L_11029253; /* 0x11029232: jmp 0x11029253 */
L_11029234:
    eax = MEM32(ebp + 0x10); /* 0x11029234: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11029237: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x1102923A: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1102923D: mov dword ptr [ebp + 0x10], eax */
    { uint32_t _aa = ecx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11029240: adc ecx, -1 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = ecx; /* 0x11029243: mov dword ptr [ebp - 0x14], ecx */
    /* cmp ecx, edi */ /* 0x11029246: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102925F; /* 0x11029248: jg 0x1102925f */
L_1102924A:
    if (CMP_L(_flag_a, _flag_b)) goto L_11029250; /* 0x1102924A: jl 0x11029250 */
L_1102924C:
    /* cmp eax, edi */ /* 0x1102924C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102925F; /* 0x1102924E: ja 0x1102925f */
L_11029250:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11029250: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029253:
    MEM32(ebp + (-0x4)) = 1; /* 0x11029253: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102919E; /* 0x1102925A: jmp 0x1102919e */
L_1102925F:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x1102925F: add dword ptr [esi + 8], 1 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x11029263: mov eax, dword ptr [ebp + 8] */
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11029266: adc dword ptr [esi + 0xc], edi */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x11029269: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1102926C: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1102926F: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x11029272: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11029274: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029277: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x1102927B: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11029203; /* 0x11029280: jmp 0x11029203 */
L_110292AD:
    esi = MEM32(ebp + (-0x18)); /* 0x110292AD: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110292B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110292B2: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110292B9: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102919E; /* 0x110292BB: jmp 0x1102919e */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110292ADu: goto L_110292AD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029282(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029282u);

L_11029282:
    ecx = MEM32(ebp + (-0x18)); /* 0x11029282: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029285: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029287: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029289: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102928C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102928E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029291: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11029294: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102929C; /* 0x11029297: jne 0x1102929c */
L_11029299:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029299: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102929C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102929C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102929F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110292A2: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110292C0; /* 0x110292A5: jne 0x110292c0 */
L_110292A7:
    eax = 0x110292ADu; /* 0x110292A7: mov eax, 0x110292ad */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110292AC: ret  */
L_110292C0:
    PUSH32(esp, edi); /* 0x110292C0: push edi */
    PUSH32(esp, edi); /* 0x110292C1: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110292C2: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110292C7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110292AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110292ADu);

    goto L_110292AD;
L_1102919E:
    eax = MEM32(ebp + 0x8); /* 0x1102919E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110291A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110291A3: mov word ptr [eax], cx */
    eax = MEM32(esi + 0x8); /* 0x110291A6: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x110291A9: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110291B1; /* 0x110291AC: jne 0x110291b1 */
L_110291AE:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x110291AE: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110291B1:
    eax = MEM32(esi); /* 0x110291B1: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110291B3: push edi */
    PUSH32(esp, ebx); /* 0x110291B4: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x110291B5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110291B8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110291BA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x110291BF: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110291C2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110291C6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110291C8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110291CB: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110291CF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110291D8; /* 0x110291D1: je 0x110291d8 */
L_110291D3:
    eax = MEM32(ecx); /* 0x110291D3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110291D5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110291D8:
    eax = esi; /* 0x110291D8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110291DA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x110291DF: ret 0x10 */
L_110292AD:
    esi = MEM32(ebp + (-0x18)); /* 0x110292AD: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110292B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110292B2: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x110292B9: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102919E; /* 0x110292BB: jmp 0x1102919e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110292C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110292C8u);

L_110292C8:
    PUSH32(esp, ebp); /* 0x110292C8: push ebp */
    ebp = esp; /* 0x110292C9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110292CB: push ecx */
    eax = MEM32(ecx + 0x34); /* 0x110292CC: mov eax, dword ptr [ecx + 0x34] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110292CF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x110292D3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110292D4: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x110292D7: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x110292D9: mov dword ptr [esi], ecx */
    edx = MEM32(ecx); /* 0x110292DB: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x110292DD: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110292E0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110292E2: pop esi */
    esp = ebp; /* 0x110292E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110292E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110292E6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110292E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110292E9u);

L_110292E9:
    PUSH32(esp, ebp); /* 0x110292E9: push ebp */
    ebp = esp; /* 0x110292EA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110292EC: push ecx */
    edx = MEM32(ecx); /* 0x110292ED: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110292EF: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110292F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x110292F6: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110292F9: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x110292FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110292FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110292FF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029302(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029302u);
    RECOMP_EH_ENTER();

L_11029302:
    PUSH32(esp, 0x18u); /* 0x11029302: push 0x18 */
    eax = 0x1103E9C5u; /* 0x11029304: mov eax, 0x1103e9c5 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029309: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102930E: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x11029310: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029313: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = edi; /* 0x11029315: mov dword ptr [ebp - 0x24], edi */
    MEM32(edi + 0x8) = esi; /* 0x11029318: mov dword ptr [edi + 8], esi */
    ebx = esi; /* 0x1102931B: mov ebx, esi */
    MEM32(edi + 0xC) = esi; /* 0x1102931D: mov dword ptr [edi + 0xc], esi */
    eax = MEM32(edi); /* 0x11029320: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x11029322: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x11029325: mov ecx, dword ptr [eax + edi + 0x38] */
    /* test ecx, ecx */ /* 0x11029329: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029332; /* 0x1102932B: je 0x11029332 */
L_1102932D:
    eax = MEM32(ecx); /* 0x1102932D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102932F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11029332:
    PUSH32(esp, 1); /* 0x11029332: push 1 */
    ecx = edi; /* 0x11029334: mov ecx, edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x11029336: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_11010675); /* 0x11029339: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102933E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029341: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11029348: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110293F9; /* 0x1102934A: je 0x110293f9 */
L_11029350:
    eax = MEM32(ebp + 0xC); /* 0x11029350: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11029353: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x11029356: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_110293F9; /* 0x11029358: jl 0x110293f9 */
L_1102935E:
    ebx = MEM32(ebp + 0x8); /* 0x1102935E: mov ebx, dword ptr [ebp + 8] */
    if (CMP_G(_flag_a, _flag_b)) goto L_1102936B; /* 0x11029361: jg 0x1102936b */
L_11029363:
    /* cmp ebx, esi */ /* 0x11029363: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110293F7; /* 0x11029365: jbe 0x110293f7 */
L_1102936B:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102936B: mov byte ptr [ebp - 4], 2 */
L_1102936F:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x1102936F: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102937B; /* 0x11029375: jne 0x1102937b */
L_11029377:
    /* cmp eax, esi */ /* 0x11029377: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102938C; /* 0x11029379: je 0x1102938c */
L_1102937B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x1102937B: add ebx, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102937E: adc eax, -1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = eax; /* 0x11029381: mov dword ptr [ebp - 0x14], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_110293B5; /* 0x11029384: js 0x110293b5 */
L_11029386:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1102938C; /* 0x11029386: jg 0x1102938c */
L_11029388:
    /* cmp ebx, esi */ /* 0x11029388: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110293B5; /* 0x1102938A: jb 0x110293b5 */
L_1102938C:
    eax = MEM32(edi); /* 0x1102938C: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x1102938E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x11029391: mov ecx, dword ptr [eax + edi + 0x38] */
    RECOMP_CALL(sub_110107B0); /* 0x11029395: call 0x110107b0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102939A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110293A6; /* 0x1102939D: jne 0x110293a6 */
L_1102939F:
    ebx = esi; /* 0x1102939F: mov ebx, esi */
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x110293A1: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110293B7; /* 0x110293A4: jmp 0x110293b7 */
L_110293A6:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x110293A6: add dword ptr [edi + 8], 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(edi + 0xC), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110293AA: adc dword ptr [edi + 0xc], esi */
      MEM32(edi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x110293AD: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x14)); /* 0x110293B0: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102936F; /* 0x110293B3: jne 0x1102936f */
L_110293B5:
    ebx = esi; /* 0x110293B5: mov ebx, esi */
L_110293B7:
    MEM32(ebp + (-0x4)) = 1; /* 0x110293B7: mov dword ptr [ebp - 4], 1 */
    goto L_110293F9; /* 0x110293BE: jmp 0x110293f9 */
L_110293EB:
    edi = MEM32(ebp + (-0x18)); /* 0x110293EB: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110293EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110293F0: mov dword ptr [ebp - 4], 1 */
L_110293F7:
    ebx = esi; /* 0x110293F7: mov ebx, esi */
L_110293F9:
    eax = MEM32(edi); /* 0x110293F9: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x110293FB: push esi */
    PUSH32(esp, ebx); /* 0x110293FC: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x110293FD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029400: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029402: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029407: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102940A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102940E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029410: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029413: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029417: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029420; /* 0x11029419: je 0x11029420 */
L_1102941B:
    eax = MEM32(ecx); /* 0x1102941B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102941D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029420:
    eax = edi; /* 0x11029420: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029422: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029427: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x110293EBu: goto L_110293EB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110293C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110293C0u);

L_110293C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x110293C0: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110293C3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110293C5: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110293C7: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110293CA: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110293CC: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110293CF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), esi */ /* 0x110293D2: cmp dword ptr [edx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110293DA; /* 0x110293D5: jne 0x110293da */
L_110293D7:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110293D7: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110293DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110293DA: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110293DD: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110293E0: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102942A; /* 0x110293E3: jne 0x1102942a */
L_110293E5:
    eax = 0x110293EBu; /* 0x110293E5: mov eax, 0x110293eb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110293EA: ret  */
L_1102942A:
    PUSH32(esp, esi); /* 0x1102942A: push esi */
    PUSH32(esp, esi); /* 0x1102942B: push esi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102942C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029431u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110293EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110293EBu);

L_110293EB:
    edi = MEM32(ebp + (-0x18)); /* 0x110293EB: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110293EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110293F0: mov dword ptr [ebp - 4], 1 */
    ebx = esi; /* 0x110293F7: mov ebx, esi */
    eax = MEM32(edi); /* 0x110293F9: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x110293FB: push esi */
    PUSH32(esp, ebx); /* 0x110293FC: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x110293FD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029400: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029402: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029407: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102940A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102940E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029410: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029413: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029417: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029420; /* 0x11029419: je 0x11029420 */
L_1102941B:
    eax = MEM32(ecx); /* 0x1102941B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102941D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029420:
    eax = edi; /* 0x11029420: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029422: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11029427: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11029432(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029432u);
    RECOMP_EH_ENTER();

L_11029432:
    PUSH32(esp, 0x18u); /* 0x11029432: push 0x18 */
    eax = 0x1103E9F0u; /* 0x11029434: mov eax, 0x1103e9f0 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029439: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102943E: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x11029440: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029443: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = edi; /* 0x11029445: mov dword ptr [ebp - 0x24], edi */
    MEM32(edi + 0x8) = esi; /* 0x11029448: mov dword ptr [edi + 8], esi */
    ebx = esi; /* 0x1102944B: mov ebx, esi */
    MEM32(edi + 0xC) = esi; /* 0x1102944D: mov dword ptr [edi + 0xc], esi */
    eax = MEM32(edi); /* 0x11029450: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x11029452: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x11029455: mov ecx, dword ptr [eax + edi + 0x38] */
    /* test ecx, ecx */ /* 0x11029459: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029462; /* 0x1102945B: je 0x11029462 */
L_1102945D:
    eax = MEM32(ecx); /* 0x1102945D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102945F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11029462:
    PUSH32(esp, 1); /* 0x11029462: push 1 */
    ecx = edi; /* 0x11029464: mov ecx, edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x11029466: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_11010989); /* 0x11029469: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102946E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029471: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11029478: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029532; /* 0x1102947A: je 0x11029532 */
L_11029480:
    eax = MEM32(ebp + 0xC); /* 0x11029480: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x11029483: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x11029486: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11029532; /* 0x11029488: jl 0x11029532 */
L_1102948E:
    ebx = MEM32(ebp + 0x8); /* 0x1102948E: mov ebx, dword ptr [ebp + 8] */
    if (CMP_G(_flag_a, _flag_b)) goto L_1102949B; /* 0x11029491: jg 0x1102949b */
L_11029493:
    /* cmp ebx, esi */ /* 0x11029493: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11029530; /* 0x11029495: jbe 0x11029530 */
L_1102949B:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102949B: mov byte ptr [ebp - 4], 2 */
L_1102949F:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x1102949F: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110294AB; /* 0x110294A5: jne 0x110294ab */
L_110294A7:
    /* cmp eax, esi */ /* 0x110294A7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110294BC; /* 0x110294A9: je 0x110294bc */
L_110294AB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x110294AB: add ebx, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110294AE: adc eax, -1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = eax; /* 0x110294B1: mov dword ptr [ebp - 0x14], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_110294EE; /* 0x110294B4: js 0x110294ee */
L_110294B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_110294BC; /* 0x110294B6: jg 0x110294bc */
L_110294B8:
    /* cmp ebx, esi */ /* 0x110294B8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110294EE; /* 0x110294BA: jb 0x110294ee */
L_110294BC:
    eax = MEM32(edi); /* 0x110294BC: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x110294BE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x110294C1: mov ecx, dword ptr [eax + edi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x110294C5: call 0x1101093b */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110294CA: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x110294CD: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110294D2: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110294DE; /* 0x110294D5: jne 0x110294de */
L_110294D7:
    ebx = esi; /* 0x110294D7: mov ebx, esi */
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x110294D9: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110294F0; /* 0x110294DC: jmp 0x110294f0 */
L_110294DE:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x110294DE: add dword ptr [edi + 8], 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(edi + 0xC), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110294E2: adc dword ptr [edi + 0xc], esi */
      MEM32(edi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x110294E5: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(ebp + (-0x14)); /* 0x110294E9: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102949F; /* 0x110294EC: jne 0x1102949f */
L_110294EE:
    ebx = esi; /* 0x110294EE: mov ebx, esi */
L_110294F0:
    MEM32(ebp + (-0x4)) = 1; /* 0x110294F0: mov dword ptr [ebp - 4], 1 */
    goto L_11029532; /* 0x110294F7: jmp 0x11029532 */
L_11029524:
    edi = MEM32(ebp + (-0x18)); /* 0x11029524: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029527: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11029529: mov dword ptr [ebp - 4], 1 */
L_11029530:
    ebx = esi; /* 0x11029530: mov ebx, esi */
L_11029532:
    eax = MEM32(edi); /* 0x11029532: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x11029534: push esi */
    PUSH32(esp, ebx); /* 0x11029535: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029536: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029539: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102953B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029540: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029543: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029547: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029549: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1102954C: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029550: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029559; /* 0x11029552: je 0x11029559 */
L_11029554:
    eax = MEM32(ecx); /* 0x11029554: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11029556: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029559:
    eax = edi; /* 0x11029559: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102955B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029560: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029524u: goto L_11029524;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110294F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110294F9u);

L_110294F9:
    ecx = MEM32(ebp + (-0x18)); /* 0x110294F9: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110294FC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110294FE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029500: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029503: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029505: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029508: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), esi */ /* 0x1102950B: cmp dword ptr [edx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029513; /* 0x1102950E: jne 0x11029513 */
L_11029510:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029510: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029513:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029513: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029516: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029519: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029563; /* 0x1102951C: jne 0x11029563 */
L_1102951E:
    eax = 0x11029524u; /* 0x1102951E: mov eax, 0x11029524 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029523: ret  */
L_11029563:
    PUSH32(esp, esi); /* 0x11029563: push esi */
    PUSH32(esp, esi); /* 0x11029564: push esi */
    RECOMP_CALL(sub_1103B33A); /* 0x11029565: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102956Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029524u);

L_11029524:
    edi = MEM32(ebp + (-0x18)); /* 0x11029524: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029527: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11029529: mov dword ptr [ebp - 4], 1 */
    ebx = esi; /* 0x11029530: mov ebx, esi */
    eax = MEM32(edi); /* 0x11029532: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x11029534: push esi */
    PUSH32(esp, ebx); /* 0x11029535: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029536: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029539: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102953B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029540: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029543: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029547: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029549: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1102954C: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029550: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029559; /* 0x11029552: je 0x11029559 */
L_11029554:
    eax = MEM32(ecx); /* 0x11029554: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11029556: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029559:
    eax = edi; /* 0x11029559: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102955B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11029560: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102956B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102956Bu);
    RECOMP_EH_ENTER();

L_1102956B:
    PUSH32(esp, 0x18u); /* 0x1102956B: push 0x18 */
    eax = 0x1103EA1Bu; /* 0x1102956D: mov eax, 0x1103ea1b */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029572: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11029577: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x11029579: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102957C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = edi; /* 0x1102957E: mov dword ptr [ebp - 0x24], edi */
    MEM32(edi + 0x8) = esi; /* 0x11029581: mov dword ptr [edi + 8], esi */
    ebx = esi; /* 0x11029584: mov ebx, esi */
    MEM32(edi + 0xC) = esi; /* 0x11029586: mov dword ptr [edi + 0xc], esi */
    eax = MEM32(edi); /* 0x11029589: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x1102958B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x1102958E: mov ecx, dword ptr [eax + edi + 0x38] */
    /* test ecx, ecx */ /* 0x11029592: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102959B; /* 0x11029594: je 0x1102959b */
L_11029596:
    eax = MEM32(ecx); /* 0x11029596: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11029598: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102959B:
    PUSH32(esp, 1); /* 0x1102959B: push 1 */
    ecx = edi; /* 0x1102959D: mov ecx, edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102959F: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_11010810); /* 0x110295A2: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110295A7: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110295AA: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110295B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102966B; /* 0x110295B3: je 0x1102966b */
L_110295B9:
    eax = MEM32(ebp + 0xC); /* 0x110295B9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x110295BC: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x110295BF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102966B; /* 0x110295C1: jl 0x1102966b */
L_110295C7:
    ebx = MEM32(ebp + 0x8); /* 0x110295C7: mov ebx, dword ptr [ebp + 8] */
    if (CMP_G(_flag_a, _flag_b)) goto L_110295D4; /* 0x110295CA: jg 0x110295d4 */
L_110295CC:
    /* cmp ebx, esi */ /* 0x110295CC: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11029669; /* 0x110295CE: jbe 0x11029669 */
L_110295D4:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110295D4: mov byte ptr [ebp - 4], 2 */
L_110295D8:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x110295D8: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110295E4; /* 0x110295DE: jne 0x110295e4 */
L_110295E0:
    /* cmp eax, esi */ /* 0x110295E0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110295F5; /* 0x110295E2: je 0x110295f5 */
L_110295E4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x110295E4: add ebx, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110295E7: adc eax, -1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = eax; /* 0x110295EA: mov dword ptr [ebp - 0x14], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11029627; /* 0x110295ED: js 0x11029627 */
L_110295EF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_110295F5; /* 0x110295EF: jg 0x110295f5 */
L_110295F1:
    /* cmp ebx, esi */ /* 0x110295F1: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11029627; /* 0x110295F3: jb 0x11029627 */
L_110295F5:
    eax = MEM32(edi); /* 0x110295F5: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x110295F7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x110295FA: mov ecx, dword ptr [eax + edi + 0x38] */
    RECOMP_CALL(sub_1101093B); /* 0x110295FE: call 0x1101093b */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11029603: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x11029606: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102960B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029617; /* 0x1102960E: jne 0x11029617 */
L_11029610:
    ebx = esi; /* 0x11029610: mov ebx, esi */
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x11029612: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11029629; /* 0x11029615: jmp 0x11029629 */
L_11029617:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x11029617: add dword ptr [edi + 8], 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(edi + 0xC), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102961B: adc dword ptr [edi + 0xc], esi */
      MEM32(edi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x1102961E: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(ebp + (-0x14)); /* 0x11029622: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110295D8; /* 0x11029625: jne 0x110295d8 */
L_11029627:
    ebx = esi; /* 0x11029627: mov ebx, esi */
L_11029629:
    MEM32(ebp + (-0x4)) = 1; /* 0x11029629: mov dword ptr [ebp - 4], 1 */
    goto L_1102966B; /* 0x11029630: jmp 0x1102966b */
L_1102965D:
    edi = MEM32(ebp + (-0x18)); /* 0x1102965D: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029660: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11029662: mov dword ptr [ebp - 4], 1 */
L_11029669:
    ebx = esi; /* 0x11029669: mov ebx, esi */
L_1102966B:
    eax = MEM32(edi); /* 0x1102966B: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1102966D: push esi */
    PUSH32(esp, ebx); /* 0x1102966E: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102966F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029672: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029674: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029679: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102967C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029680: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029682: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029685: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029689: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029692; /* 0x1102968B: je 0x11029692 */
L_1102968D:
    eax = MEM32(ecx); /* 0x1102968D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102968F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029692:
    eax = edi; /* 0x11029692: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029694: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029699: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102965Du: goto L_1102965D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029632(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029632u);

L_11029632:
    ecx = MEM32(ebp + (-0x18)); /* 0x11029632: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029635: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029637: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029639: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102963C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102963E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029641: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), esi */ /* 0x11029644: cmp dword ptr [edx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102964C; /* 0x11029647: jne 0x1102964c */
L_11029649:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029649: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102964C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102964C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102964F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029652: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102969C; /* 0x11029655: jne 0x1102969c */
L_11029657:
    eax = 0x1102965Du; /* 0x11029657: mov eax, 0x1102965d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102965C: ret  */
L_1102969C:
    PUSH32(esp, esi); /* 0x1102969C: push esi */
    PUSH32(esp, esi); /* 0x1102969D: push esi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102969E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110296A3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102965D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102965Du);

L_1102965D:
    edi = MEM32(ebp + (-0x18)); /* 0x1102965D: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11029660: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11029662: mov dword ptr [ebp - 4], 1 */
    ebx = esi; /* 0x11029669: mov ebx, esi */
    eax = MEM32(edi); /* 0x1102966B: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1102966D: push esi */
    PUSH32(esp, ebx); /* 0x1102966E: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102966F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029672: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029674: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11029679: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102967C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029680: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11029682: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11029685: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11029689: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029692; /* 0x1102968B: je 0x11029692 */
L_1102968D:
    eax = MEM32(ecx); /* 0x1102968D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102968F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11029692:
    eax = edi; /* 0x11029692: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029694: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11029699: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_110296A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110296A4u);

L_110296A4:
    PUSH32(esp, 4); /* 0x110296A4: push 4 */
    eax = 0x1103EA4Fu; /* 0x110296A6: mov eax, 0x1103ea4f */
    RECOMP_CALL(sub_1103B372); /* 0x110296AB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110296B0: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110296B2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x110296B6: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110296BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110296BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F964); /* 0x110296C0: call 0x1100f964 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110296C5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x38); /* 0x110296C9: mov ecx, dword ptr [esi + 0x38] */
    MEM32(ebp + (-0x10)) = 1; /* 0x110296CC: mov dword ptr [ebp - 0x10], 1 */
    /* test ecx, ecx */ /* 0x110296D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110296EB; /* 0x110296D5: je 0x110296eb */
L_110296D7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110296D7: push dword ptr [ebp + 0xc] */
    eax = ebp + 0xC; /* 0x110296DA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110296DD: push eax */
    RECOMP_CALL(sub_11029D6B); /* 0x110296DE: call 0x11029d6b */
    RECOMP_FLAGS_IN();
    ecx = ebp + 0xC; /* 0x110296E3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1100E431); /* 0x110296E6: call 0x1100e431 */
    RECOMP_FLAGS_IN();
L_110296EB:
    eax = MEM32(ebp + 0x8); /* 0x110296EB: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B340); /* 0x110296EE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110296F3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110296F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110296F6u);

L_110296F6:
    eax = MEM32(ecx + 0x1C); /* 0x110296F6: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp MEM32(eax), 0 */ /* 0x110296F9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11029705; /* 0x110296FC: je 0x11029705 */
L_110296FE:
    eax = MEM32(ecx + 0x2C); /* 0x110296FE: mov eax, dword ptr [ecx + 0x2c] */
    eax = MEM32(eax); /* 0x11029701: mov eax, dword ptr [eax] */
    goto L_11029707; /* 0x11029703: jmp 0x11029707 */
L_11029705:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11029705: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029707:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11029707: cdq  */
    /* test edx, edx */ /* 0x11029708: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11029712; /* 0x1102970A: jl 0x11029712 */
L_1102970C:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11029717; /* 0x1102970C: jg 0x11029717 */
L_1102970E:
    /* test eax, eax */ /* 0x1102970E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029717; /* 0x11029710: jne 0x11029717 */
L_11029712:
    eax = MEM32(ecx); /* 0x11029712: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x14)); goto _ljump; }
L_11029717:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029717: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11029718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029718u);

L_11029718:
    PUSH32(esp, ebp); /* 0x11029718: push ebp */
    ebp = esp; /* 0x11029719: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102971B: push esi */
    esi = ecx; /* 0x1102971C: mov esi, ecx */
    RECOMP_CALL(sub_1100FBB6); /* 0x1102971E: call 0x1100fbb6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029723: mov eax, dword ptr [ebp + 8] */
    ecx = esi; /* 0x11029726: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0; /* 0x11029728: and dword ptr [esi + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x20u); /* 0x1102972C: push 0x20 */
    MEM32(esi + 0x38) = eax; /* 0x1102972E: mov dword ptr [esi + 0x38], eax */
    RECOMP_CALL(sub_1102BF51); /* 0x11029731: call 0x1102bf51 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x11029736: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(esi + 0x40) = (uint16_t)(LO16(eax)); /* 0x1102973A: mov word ptr [esi + 0x40], ax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029750; /* 0x1102973E: jne 0x11029750 */
L_11029740:
    eax = MEM32(esi + 0xC); /* 0x11029740: mov eax, dword ptr [esi + 0xc] */
    ecx = esi; /* 0x11029743: mov ecx, esi */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029745: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11029748: push 0 */
    PUSH32(esp, eax); /* 0x1102974A: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102974B: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_11029750:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11029750: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102975D; /* 0x11029754: je 0x1102975d */
L_11029756:
    PUSH32(esp, esi); /* 0x11029756: push esi */
    RECOMP_CALL(sub_1103065A); /* 0x11029757: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102975C: pop ecx */
L_1102975D:
    esi = POP32_VAL(esp); /* 0x1102975D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102975E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1102975F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11029762(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029762u);

L_11029762:
    PUSH32(esp, ebp); /* 0x11029762: push ebp */
    ebp = esp; /* 0x11029763: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11029765: push esi */
    esi = ecx; /* 0x11029766: mov esi, ecx */
    RECOMP_CALL(sub_1100FBB6); /* 0x11029768: call 0x1100fbb6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102976D: mov eax, dword ptr [ebp + 8] */
    ecx = esi; /* 0x11029770: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0; /* 0x11029772: and dword ptr [esi + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x20u); /* 0x11029776: push 0x20 */
    MEM32(esi + 0x38) = eax; /* 0x11029778: mov dword ptr [esi + 0x38], eax */
    RECOMP_CALL(sub_1102BF91); /* 0x1102977B: call 0x1102bf91 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x11029780: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(esi + 0x40) = (uint16_t)(LO16(eax)); /* 0x11029784: mov word ptr [esi + 0x40], ax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102979A; /* 0x11029788: jne 0x1102979a */
L_1102978A:
    eax = MEM32(esi + 0xC); /* 0x1102978A: mov eax, dword ptr [esi + 0xc] */
    ecx = esi; /* 0x1102978D: mov ecx, esi */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102978F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11029792: push 0 */
    PUSH32(esp, eax); /* 0x11029794: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11029795: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102979A:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1102979A: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110297A7; /* 0x1102979E: je 0x110297a7 */
L_110297A0:
    PUSH32(esp, esi); /* 0x110297A0: push esi */
    RECOMP_CALL(sub_1103065A); /* 0x110297A1: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110297A6: pop ecx */
L_110297A7:
    esi = POP32_VAL(esp); /* 0x110297A7: pop esi */
    ebp = POP32_VAL(esp); /* 0x110297A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110297A9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110297AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110297ACu);

L_110297AC:
    PUSH32(esp, ebp); /* 0x110297AC: push ebp */
    ebp = esp; /* 0x110297AD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x110297AF: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110297B0: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110297B3: push esi */
    esi = ecx; /* 0x110297B4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x110297B6: push edi */
    ecx = MEM32(esi + 0x10); /* 0x110297B7: mov ecx, dword ptr [esi + 0x10] */
    /* cmp ecx, ebx */ /* 0x110297BA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11029848; /* 0x110297BC: jb 0x11029848 */
L_110297C2:
    edi = MEM32(ebp + 0xC); /* 0x110297C2: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x110297C5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x110297C8: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x110297CA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11029852; /* 0x110297CC: jbe 0x11029852 */
L_110297D2:
    /* test edi, edi */ /* 0x110297D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102983F; /* 0x110297D4: je 0x1102983f */
L_110297D6:
    eax = ecx + edi; /* 0x110297D6: lea eax, [ecx + edi] */
    ecx = esi; /* 0x110297D9: mov ecx, esi */
    PUSH32(esp, 0); /* 0x110297DB: push 0 */
    PUSH32(esp, eax); /* 0x110297DD: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x110297DE: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_11010BDF); /* 0x110297E1: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110297E6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102983F; /* 0x110297E8: je 0x1102983f */
L_110297EA:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x110297EA: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110297F4; /* 0x110297EE: jb 0x110297f4 */
L_110297F0:
    edx = MEM32(esi); /* 0x110297F0: mov edx, dword ptr [esi] */
    goto L_110297F6; /* 0x110297F2: jmp 0x110297f6 */
L_110297F4:
    edx = esi; /* 0x110297F4: mov edx, esi */
L_110297F6:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x110297F6: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11029800; /* 0x110297FA: jb 0x11029800 */
L_110297FC:
    ecx = MEM32(esi); /* 0x110297FC: mov ecx, dword ptr [esi] */
    goto L_11029802; /* 0x110297FE: jmp 0x11029802 */
L_11029800:
    ecx = esi; /* 0x11029800: mov ecx, esi */
L_11029802:
    eax = MEM32(esi + 0x10); /* 0x11029802: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x11029805: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102981D; /* 0x11029807: je 0x1102981d */
L_11029809:
    PUSH32(esp, eax); /* 0x11029809: push eax */
    eax = edx + ebx; /* 0x1102980A: lea eax, [edx + ebx] */
    PUSH32(esp, eax); /* 0x1102980D: push eax */
    eax = ecx + ebx; /* 0x1102980E: lea eax, [ecx + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x11029811: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11029813: push eax */
    RECOMP_ICALL(MEM32(0x110692F4)); /* 0x11029814: call dword ptr [0x110692f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102981A: add esp, 0xc */
    _flag_k = FK_ADD;
L_1102981D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102981D: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x11029820: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11029822: push edi */
    PUSH32(esp, ebx); /* 0x11029823: push ebx */
    RECOMP_CALL(sub_11013D58); /* 0x11029824: call 0x11013d58 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11029829: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1102982D: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = ecx; /* 0x11029830: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11029839; /* 0x11029833: jb 0x11029839 */
L_11029835:
    eax = MEM32(esi); /* 0x11029835: mov eax, dword ptr [esi] */
    goto L_1102983B; /* 0x11029837: jmp 0x1102983b */
L_11029839:
    eax = esi; /* 0x11029839: mov eax, esi */
L_1102983B:
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x1102983B: mov byte ptr [eax + ecx], 0 */
L_1102983F:
    edi = POP32_VAL(esp); /* 0x1102983F: pop edi */
    eax = esi; /* 0x11029840: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11029842: pop esi */
    ebx = POP32_VAL(esp); /* 0x11029843: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11029844: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11029845: ret 0xc */
L_11029848:
    PUSH32(esp, 0x11004958u); /* 0x11029848: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x1102984D: call 0x11013a0c */
    RECOMP_FLAGS_IN();
L_11029852:
    PUSH32(esp, 0x11004948u); /* 0x11029852: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11029857: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102985Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102985D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102985Du);

L_1102985D:
    PUSH32(esp, ebp); /* 0x1102985D: push ebp */
    ebp = esp; /* 0x1102985E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11029860: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11029861: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11029864: push esi */
    esi = ecx; /* 0x11029865: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11029867: push edi */
    ecx = MEM32(esi + 0x10); /* 0x11029868: mov ecx, dword ptr [esi + 0x10] */
    /* cmp ecx, ebx */ /* 0x1102986B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110298F9; /* 0x1102986D: jb 0x110298f9 */
L_11029873:
    edi = MEM32(ebp + 0xC); /* 0x11029873: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11029876: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11029879: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1102987B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11029903; /* 0x1102987D: jbe 0x11029903 */
L_11029883:
    /* test edi, edi */ /* 0x11029883: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110298F0; /* 0x11029885: je 0x110298f0 */
L_11029887:
    eax = ecx + edi; /* 0x11029887: lea eax, [ecx + edi] */
    ecx = esi; /* 0x1102988A: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1102988C: push 0 */
    PUSH32(esp, eax); /* 0x1102988E: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1102988F: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_11021737); /* 0x11029892: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11029897: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110298F0; /* 0x11029899: je 0x110298f0 */
L_1102989B:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1102989B: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110298A5; /* 0x1102989F: jb 0x110298a5 */
L_110298A1:
    edx = MEM32(esi); /* 0x110298A1: mov edx, dword ptr [esi] */
    goto L_110298A7; /* 0x110298A3: jmp 0x110298a7 */
L_110298A5:
    edx = esi; /* 0x110298A5: mov edx, esi */
L_110298A7:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110298A7: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110298B1; /* 0x110298AB: jb 0x110298b1 */
L_110298AD:
    ecx = MEM32(esi); /* 0x110298AD: mov ecx, dword ptr [esi] */
    goto L_110298B3; /* 0x110298AF: jmp 0x110298b3 */
L_110298B1:
    ecx = esi; /* 0x110298B1: mov ecx, esi */
L_110298B3:
    eax = MEM32(esi + 0x10); /* 0x110298B3: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x110298B6: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x110298B8: push eax */
    eax = edx + ebx * 2; /* 0x110298B9: lea eax, [edx + ebx*2] */
    PUSH32(esp, eax); /* 0x110298BC: push eax */
    eax = ebx + edi; /* 0x110298BD: lea eax, [ebx + edi] */
    eax = ecx + eax * 2; /* 0x110298C0: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x110298C3: push eax */
    RECOMP_CALL(sub_1102995D); /* 0x110298C4: call 0x1102995d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110298C9: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x110298CC: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110298CE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x110298D1: push edi */
    PUSH32(esp, ebx); /* 0x110298D2: push ebx */
    RECOMP_CALL(sub_1101CF95); /* 0x110298D3: call 0x1101cf95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110298D8: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x110298DC: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = ecx; /* 0x110298DF: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_110298E8; /* 0x110298E2: jb 0x110298e8 */
L_110298E4:
    eax = MEM32(esi); /* 0x110298E4: mov eax, dword ptr [esi] */
    goto L_110298EA; /* 0x110298E6: jmp 0x110298ea */
L_110298E8:
    eax = esi; /* 0x110298E8: mov eax, esi */
L_110298EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110298EA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x110298EC: mov word ptr [eax + ecx*2], dx */
L_110298F0:
    edi = POP32_VAL(esp); /* 0x110298F0: pop edi */
    eax = esi; /* 0x110298F1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110298F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x110298F4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110298F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x110298F6: ret 0xc */
L_110298F9:
    PUSH32(esp, 0x11004958u); /* 0x110298F9: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x110298FE: call 0x11013a0c */
    RECOMP_FLAGS_IN();
L_11029903:
    PUSH32(esp, 0x11004948u); /* 0x11029903: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11029908: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102990Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102990E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102990Eu);
    RECOMP_EH_ENTER();

    goto L_1102990E;
L_11010675:
    PUSH32(esp, 8); /* 0x11010675: push 8 */
    eax = 0x1103CDCBu; /* 0x11010677: mov eax, 0x1103cdcb */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101067C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010681: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11010683: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x11010686: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010688: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101068B: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x1101068D: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010773; /* 0x11010691: jne 0x11010773 */
L_11010697:
    ecx = MEM32(ecx + 0x3C); /* 0x11010697: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x1101069A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110106A3; /* 0x1101069C: je 0x110106a3 */
L_1101069E:
    RECOMP_CALL(sub_11010C82); /* 0x1101069E: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_110106A3:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x110106A3: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010762; /* 0x110106A7: jne 0x11010762 */
L_110106AD:
    eax = MEM32(esi); /* 0x110106AD: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110106AF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110106B2: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x110106B4: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010762; /* 0x110106B8: je 0x11010762 */
L_110106BE:
    eax = ebp + 0x8; /* 0x110106BE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110106C1: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110106C2: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110106C7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110106CB: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x110106CC: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110106D1: pop ecx */
    ecx = ebp + 0x8; /* 0x110106D2: lea ecx, [ebp + 8] */
    edi = eax; /* 0x110106D5: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110106D7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110106DC: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x110106E3: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x110106E5: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110106E8: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x110106EC: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_110106F1:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110106F1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010716; /* 0x110106F4: jne 0x11010716 */
L_110106F6:
    eax = MEM32(esi); /* 0x110106F6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110106F8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110106FB: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x110106FD: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x11010700: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010703: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101070C; /* 0x11010707: jne 0x1101070c */
L_11010709:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010709: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101070C:
    PUSH32(esp, 0); /* 0x1101070C: push 0 */
    PUSH32(esp, eax); /* 0x1101070E: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1101070F: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_1101075E; /* 0x11010714: jmp 0x1101075e */
L_11010716:
    ecx = (uint32_t)LO8(eax); /* 0x11010716: movzx ecx, al */
    eax = MEM32(edi + 0xC); /* 0x11010719: mov eax, dword ptr [edi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x1101071C: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101075E; /* 0x11010720: je 0x1101075e */
L_11010722:
    eax = MEM32(esi); /* 0x11010722: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010724: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010727: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x1101072B: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_110106F1; /* 0x11010730: jmp 0x110106f1 */
L_1101075B:
    esi = MEM32(ebp + (-0x14)); /* 0x1101075B: mov esi, dword ptr [ebp - 0x14] */
L_1101075E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101075E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010762:
    ecx = MEM32(esi); /* 0x11010762: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010764: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010767: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010769: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010773; /* 0x1101076D: jne 0x11010773 */
L_1101076F:
    SET_LO8(eax, 1); /* 0x1101076F: mov al, 1 */
    goto L_1101078C; /* 0x11010771: jmp 0x1101078c */
L_11010773:
    eax = MEM32(ecx + 0xC); /* 0x11010773: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010776: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010779: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010782; /* 0x1101077D: jne 0x11010782 */
L_1101077F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101077F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010782:
    PUSH32(esp, 0); /* 0x11010782: push 0 */
    PUSH32(esp, eax); /* 0x11010784: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010785: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1101078A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1101078C:
    RECOMP_CALL(sub_1103B340); /* 0x1101078C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010791: ret 4 */
L_1102990E:
    PUSH32(esp, ebp); /* 0x1102990E: push ebp */
    ebp = esp; /* 0x1102990F: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x11029911: pop ebp */
    RECOMP_BACKEDGE();
    goto L_11010675; /* 0x11029912: jmp 0x11010675 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101075Bu: goto L_1101075B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029917(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029917u);
    RECOMP_EH_ENTER();

    goto L_11029917;
L_11010989:
    PUSH32(esp, 8); /* 0x11010989: push 8 */
    eax = 0x1103CE11u; /* 0x1101098B: mov eax, 0x1103ce11 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010990: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010995: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11010997: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1101099A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101099C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101099F: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x110109A1: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A93; /* 0x110109A5: jne 0x11010a93 */
L_110109AB:
    ecx = MEM32(ecx + 0x3C); /* 0x110109AB: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x110109AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110109B7; /* 0x110109B0: je 0x110109b7 */
L_110109B2:
    RECOMP_CALL(sub_11010C82); /* 0x110109B2: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_110109B7:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x110109B7: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A82; /* 0x110109BB: jne 0x11010a82 */
L_110109C1:
    eax = MEM32(esi); /* 0x110109C1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110109C3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110109C6: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x110109C8: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010A82; /* 0x110109CC: je 0x11010a82 */
L_110109D2:
    eax = ebp + 0x8; /* 0x110109D2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110109D5: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110109D6: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110109DB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110109DF: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110109E0: call 0x1101103e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110109E5: pop ecx */
    ecx = ebp + 0x8; /* 0x110109E6: lea ecx, [ebp + 8] */
    edi = eax; /* 0x110109E9: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110109EB: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110109F0: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x110109F7: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x110109F9: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110109FC: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11010A00: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11010A05:
    eax = (uint32_t)LO16(eax); /* 0x11010A05: movzx eax, ax */
    ecx = eax; /* 0x11010A08: mov ecx, eax */
    eax = 0xFFFFu; /* 0x11010A0A: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11010A0F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A34; /* 0x11010A12: jne 0x11010a34 */
L_11010A14:
    eax = MEM32(esi); /* 0x11010A14: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010A16: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010A19: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x11010A1B: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x11010A1E: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010A21: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A2A; /* 0x11010A25: jne 0x11010a2a */
L_11010A27:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A27: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010A2A:
    PUSH32(esp, 0); /* 0x11010A2A: push 0 */
    PUSH32(esp, eax); /* 0x11010A2C: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010A2D: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_11010A7E; /* 0x11010A32: jmp 0x11010a7e */
L_11010A34:
    eax = MEM32(edi); /* 0x11010A34: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x11010A36: push ecx */
    PUSH32(esp, 0x48u); /* 0x11010A37: push 0x48 */
    ecx = edi; /* 0x11010A39: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11010A3B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010A3E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010A7E; /* 0x11010A40: je 0x11010a7e */
L_11010A42:
    eax = MEM32(esi); /* 0x11010A42: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010A44: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010A47: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x11010A4B: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11010A05; /* 0x11010A50: jmp 0x11010a05 */
L_11010A7B:
    esi = MEM32(ebp + (-0x14)); /* 0x11010A7B: mov esi, dword ptr [ebp - 0x14] */
L_11010A7E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010A7E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010A82:
    ecx = MEM32(esi); /* 0x11010A82: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010A84: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010A87: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010A89: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A93; /* 0x11010A8D: jne 0x11010a93 */
L_11010A8F:
    SET_LO8(eax, 1); /* 0x11010A8F: mov al, 1 */
    goto L_11010AAC; /* 0x11010A91: jmp 0x11010aac */
L_11010A93:
    eax = MEM32(ecx + 0xC); /* 0x11010A93: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010A96: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010A99: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010AA2; /* 0x11010A9D: jne 0x11010aa2 */
L_11010A9F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A9F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010AA2:
    PUSH32(esp, 0); /* 0x11010AA2: push 0 */
    PUSH32(esp, eax); /* 0x11010AA4: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010AA5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010AAA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010AAC:
    RECOMP_CALL(sub_1103B340); /* 0x11010AAC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010AB1: ret 4 */
L_11029917:
    PUSH32(esp, ebp); /* 0x11029917: push ebp */
    ebp = esp; /* 0x11029918: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102991A: pop ebp */
    RECOMP_BACKEDGE();
    goto L_11010989; /* 0x1102991B: jmp 0x11010989 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010A7Bu: goto L_11010A7B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029920u);
    RECOMP_EH_ENTER();

    goto L_11029920;
L_11010810:
    PUSH32(esp, 8); /* 0x11010810: push 8 */
    eax = 0x1103CDEEu; /* 0x11010812: mov eax, 0x1103cdee */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010817: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101081C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101081E: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x11010821: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010823: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010826: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010828: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101091A; /* 0x1101082C: jne 0x1101091a */
L_11010832:
    ecx = MEM32(ecx + 0x3C); /* 0x11010832: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x11010835: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101083E; /* 0x11010837: je 0x1101083e */
L_11010839:
    RECOMP_CALL(sub_11010C82); /* 0x11010839: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1101083E:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1101083E: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010909; /* 0x11010842: jne 0x11010909 */
L_11010848:
    eax = MEM32(esi); /* 0x11010848: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101084A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101084D: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x1101084F: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010909; /* 0x11010853: je 0x11010909 */
L_11010859:
    eax = ebp + 0x8; /* 0x11010859: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101085C: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101085D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010862: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11010866: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11010867: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101086C: pop ecx */
    ecx = ebp + 0x8; /* 0x1101086D: lea ecx, [ebp + 8] */
    edi = eax; /* 0x11010870: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11010872: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11010877: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x1101087E: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010880: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11010883: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11010887: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1101088C:
    eax = (uint32_t)LO16(eax); /* 0x1101088C: movzx eax, ax */
    ecx = eax; /* 0x1101088F: mov ecx, eax */
    eax = 0xFFFFu; /* 0x11010891: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11010896: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110108BB; /* 0x11010899: jne 0x110108bb */
L_1101089B:
    eax = MEM32(esi); /* 0x1101089B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101089D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110108A0: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x110108A2: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x110108A5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110108A8: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110108B1; /* 0x110108AC: jne 0x110108b1 */
L_110108AE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110108AE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110108B1:
    PUSH32(esp, 0); /* 0x110108B1: push 0 */
    PUSH32(esp, eax); /* 0x110108B3: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x110108B4: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_11010905; /* 0x110108B9: jmp 0x11010905 */
L_110108BB:
    eax = MEM32(edi); /* 0x110108BB: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x110108BD: push ecx */
    PUSH32(esp, 0x48u); /* 0x110108BE: push 0x48 */
    ecx = edi; /* 0x110108C0: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110108C2: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110108C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010905; /* 0x110108C7: je 0x11010905 */
L_110108C9:
    eax = MEM32(esi); /* 0x110108C9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110108CB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110108CE: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x110108D2: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101088C; /* 0x110108D7: jmp 0x1101088c */
L_11010902:
    esi = MEM32(ebp + (-0x14)); /* 0x11010902: mov esi, dword ptr [ebp - 0x14] */
L_11010905:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010905: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010909:
    ecx = MEM32(esi); /* 0x11010909: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x1101090B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101090E: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010910: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101091A; /* 0x11010914: jne 0x1101091a */
L_11010916:
    SET_LO8(eax, 1); /* 0x11010916: mov al, 1 */
    goto L_11010933; /* 0x11010918: jmp 0x11010933 */
L_1101091A:
    eax = MEM32(ecx + 0xC); /* 0x1101091A: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101091D: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010920: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010929; /* 0x11010924: jne 0x11010929 */
L_11010926:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010926: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010929:
    PUSH32(esp, 0); /* 0x11010929: push 0 */
    PUSH32(esp, eax); /* 0x1101092B: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1101092C: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010931: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010933:
    RECOMP_CALL(sub_1103B340); /* 0x11010933: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010938: ret 4 */
L_11029920:
    PUSH32(esp, ebp); /* 0x11029920: push ebp */
    ebp = esp; /* 0x11029921: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x11029923: pop ebp */
    RECOMP_BACKEDGE();
    goto L_11010810; /* 0x11029924: jmp 0x11010810 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010902u: goto L_11010902;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029929(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029929u);

L_11029929:
    PUSH32(esp, ebp); /* 0x11029929: push ebp */
    ebp = esp; /* 0x1102992A: mov ebp, esp */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1102992C: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102993F; /* 0x1102992F: je 0x1102993f */
L_11029931:
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) & 0; /* 0x11029931: and dword ptr [ecx + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) & 0; /* 0x11029935: and dword ptr [ecx + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x11029939: pop ebp */
    goto L_1102B4CB; /* 0x1102993A: jmp 0x1102b4cb */
L_1102993F:
    ebp = POP32_VAL(esp); /* 0x1102993F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11029940: ret 4 */
L_1102B4CB:
    PUSH32(esp, ebp); /* 0x1102B4CB: push ebp */
    ebp = esp; /* 0x1102B4CC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B4CE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B4CF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B4D2: push edi */
    PUSH32(esp, esi); /* 0x1102B4D3: push esi */
    edi = ecx; /* 0x1102B4D4: mov edi, ecx */
    RECOMP_CALL(sub_1100FB13); /* 0x1102B4D6: call 0x1100fb13 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esi + 0x40)); /* 0x1102B4DB: mov al, byte ptr [esi + 0x40] */
    SET_LO8(ecx, MEM8(edi + 0x40)); /* 0x1102B4DE: mov cl, byte ptr [edi + 0x40] */
    MEM8(edi + 0x40) = (uint8_t)(LO8(eax)); /* 0x1102B4E1: mov byte ptr [edi + 0x40], al */
    MEM8(esi + 0x40) = (uint8_t)(LO8(ecx)); /* 0x1102B4E4: mov byte ptr [esi + 0x40], cl */
    ecx = MEM32(edi + 0x3C); /* 0x1102B4E7: mov ecx, dword ptr [edi + 0x3c] */
    eax = MEM32(esi + 0x3C); /* 0x1102B4EA: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0x3C) = eax; /* 0x1102B4ED: mov dword ptr [edi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x1102B4F0: pop edi */
    MEM32(esi + 0x3C) = ecx; /* 0x1102B4F1: mov dword ptr [esi + 0x3c], ecx */
    esi = POP32_VAL(esp); /* 0x1102B4F4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B4F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B4F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029943(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029943u);

L_11029943:
    PUSH32(esp, ebp); /* 0x11029943: push ebp */
    ebp = esp; /* 0x11029944: mov ebp, esp */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x11029946: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11029959; /* 0x11029949: je 0x11029959 */
L_1102994B:
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) & 0; /* 0x1102994B: and dword ptr [ecx + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) & 0; /* 0x1102994F: and dword ptr [ecx + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x11029953: pop ebp */
    goto L_1102B4F9; /* 0x11029954: jmp 0x1102b4f9 */
L_11029959:
    ebp = POP32_VAL(esp); /* 0x11029959: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102995A: ret 4 */
L_1102B4F9:
    PUSH32(esp, ebp); /* 0x1102B4F9: push ebp */
    ebp = esp; /* 0x1102B4FA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B4FC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B4FD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B500: push edi */
    PUSH32(esp, esi); /* 0x1102B501: push esi */
    edi = ecx; /* 0x1102B502: mov edi, ecx */
    RECOMP_CALL(sub_1100FB13); /* 0x1102B504: call 0x1100fb13 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(esi + 0x40)); /* 0x1102B509: mov ax, word ptr [esi + 0x40] */
    ecx = (uint32_t)MEM16(edi + 0x40); /* 0x1102B50D: movzx ecx, word ptr [edi + 0x40] */
    MEM16(edi + 0x40) = (uint16_t)(LO16(eax)); /* 0x1102B511: mov word ptr [edi + 0x40], ax */
    MEM16(esi + 0x40) = (uint16_t)(LO16(ecx)); /* 0x1102B515: mov word ptr [esi + 0x40], cx */
    ecx = MEM32(edi + 0x3C); /* 0x1102B519: mov ecx, dword ptr [edi + 0x3c] */
    eax = MEM32(esi + 0x3C); /* 0x1102B51C: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0x3C) = eax; /* 0x1102B51F: mov dword ptr [edi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x1102B522: pop edi */
    MEM32(esi + 0x3C) = ecx; /* 0x1102B523: mov dword ptr [esi + 0x3c], ecx */
    esi = POP32_VAL(esp); /* 0x1102B526: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B528: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102995D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102995Du);

L_1102995D:
    PUSH32(esp, ebp); /* 0x1102995D: push ebp */
    ebp = esp; /* 0x1102995E: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x11029960: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x11029963: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102996C; /* 0x11029965: jne 0x1102996c */
L_11029967:
    eax = MEM32(ebp + 0x8); /* 0x11029967: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102996A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102996B: ret  */
L_1102996C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1102996C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102996E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102996F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029972: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x110692F4)); /* 0x11029975: call dword ptr [0x110692f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102997B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102997E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102997F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029980u);

L_11029980:
    PUSH32(esp, 4); /* 0x11029980: push 4 */
    eax = 0x1103D313u; /* 0x11029982: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11029987: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1102998C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102998F: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11029990: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029995: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11029999: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1102999A: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102999F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x110299A3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110299A5: pop ecx */
    ecx = ebp + (-0x10); /* 0x110299A6: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110299A9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110299AE: push dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x110299B1: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x110299B3: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110299B5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x110299B8: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x110299BB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110299C0: ret 8 */
    RECOMP_REGS_OUT();
}
