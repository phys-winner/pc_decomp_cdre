#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_150398A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150398A0u);

L_150398A0:
    edi = edi; /* 0x150398A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150398A2: push ebp */
    ebp = esp; /* 0x150398A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150398A5: push ecx */
    PUSH32(esp, esi); /* 0x150398A6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150398A7: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x150398AA: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x150398AC: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039990); /* 0x150398AF: call 0x15039990 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1500101Cu; /* 0x150398B4: mov dword ptr [esi], 0x1500101c */
    eax = esi; /* 0x150398BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150398BC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150398BD: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150398BE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150398D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150398D0u);

L_150398D0:
    edi = edi; /* 0x150398D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150398D2: push ebp */
    ebp = esp; /* 0x150398D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150398D5: push ecx */
    PUSH32(esp, esi); /* 0x150398D6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150398D7: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x150398DA: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x150398DC: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_150399C0); /* 0x150398DF: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001200u; /* 0x150398E4: mov dword ptr [esi], 0x15001200 */
    eax = esi; /* 0x150398EA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150398EC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150398ED: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150398EE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039900u);

L_15039900:
    edi = edi; /* 0x15039900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039902: push ebp */
    ebp = esp; /* 0x15039903: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039905: push ecx */
    PUSH32(esp, esi); /* 0x15039906: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15039907: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503990A: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503990C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039A60); /* 0x1503990F: call 0x15039a60 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001200u; /* 0x15039914: mov dword ptr [esi], 0x15001200 */
    eax = esi; /* 0x1503991A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503991C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503991D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503991E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039930u);

L_15039930:
    edi = edi; /* 0x15039930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039932: push ebp */
    ebp = esp; /* 0x15039933: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039935: push ecx */
    PUSH32(esp, esi); /* 0x15039936: push esi */
    eax = ebp + 0x8; /* 0x15039937: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1503993A: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1503993C: push eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503993D: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_150399C0); /* 0x15039940: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001200u; /* 0x15039945: mov dword ptr [esi], 0x15001200 */
    eax = esi; /* 0x1503994B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503994D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503994E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503994F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039960u);

L_15039960:
    edi = edi; /* 0x15039960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039962: push ebp */
    ebp = esp; /* 0x15039963: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039965: push ecx */
    PUSH32(esp, esi); /* 0x15039966: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15039967: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503996A: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503996C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039A60); /* 0x1503996F: call 0x15039a60 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001010u; /* 0x15039974: mov dword ptr [esi], 0x15001010 */
    eax = esi; /* 0x1503997A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503997C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503997D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503997E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039990u);

L_15039990:
    edi = edi; /* 0x15039990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039992: push ebp */
    ebp = esp; /* 0x15039993: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039995: push ecx */
    PUSH32(esp, esi); /* 0x15039996: push esi */
    eax = ebp + 0x8; /* 0x15039997: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1503999A: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1503999C: push eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503999D: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_150399C0); /* 0x150399A0: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001010u; /* 0x150399A5: mov dword ptr [esi], 0x15001010 */
    eax = esi; /* 0x150399AB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150399AD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150399AE: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150399AF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150399C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150399C0u);

L_150399C0:
    edi = edi; /* 0x150399C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150399C2: push ebp */
    ebp = esp; /* 0x150399C3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x150399C5: push ebx */
    PUSH32(esp, esi); /* 0x150399C6: push esi */
    esi = ecx; /* 0x150399C7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x150399C9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150399CA: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x150399CD: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x15001004u; /* 0x150399D1: mov dword ptr [esi], 0x15001004 */
    ecx = MEM32(edi); /* 0x150399D7: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x150399D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039A0F; /* 0x150399DB: je 0x15039a0f */
L_150399DD:
    edx = ecx + 0x1; /* 0x150399DD: lea edx, [ecx + 1] */
L_150399E0:
    SET_LO8(eax, MEM8(ecx)); /* 0x150399E0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150399E2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150399E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150399E0; /* 0x150399E5: jne 0x150399e0 */
L_150399E7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150399E7: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x150399E9: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x150399EC: push ebx */
    RECOMP_CALL(sub_15048A30); /* 0x150399ED: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x150399F2: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x150399F5: pop ecx */
    /* test eax, eax */ /* 0x150399F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039A13; /* 0x150399F8: je 0x15039a13 */
L_150399FA:
    PUSH32(esp, MEM32(edi)); /* 0x150399FA: push dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x150399FC: push ebx */
    PUSH32(esp, eax); /* 0x150399FD: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x150399FE: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15039A03: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 1; /* 0x15039A06: mov dword ptr [esi + 8], 1 */
    goto L_15039A13; /* 0x15039A0D: jmp 0x15039a13 */
L_15039A0F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x15039A0F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15039A13:
    edi = POP32_VAL(esp); /* 0x15039A13: pop edi */
    eax = esi; /* 0x15039A14: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039A16: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039A17: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15039A18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039A19: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039A30u);

L_15039A30:
    edi = edi; /* 0x15039A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039A32: push ebp */
    ebp = esp; /* 0x15039A33: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15039A35: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = 0x15001004u; /* 0x15039A38: mov dword ptr [ecx], 0x15001004 */
    eax = MEM32(eax); /* 0x15039A3E: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x15039A40: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x15039A44: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x15039A47: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15039A49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15039A4A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15039A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039A60u);

L_15039A60:
    edi = edi; /* 0x15039A60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039A62: push ebp */
    ebp = esp; /* 0x15039A63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15039A65: push ebx */
    PUSH32(esp, esi); /* 0x15039A66: push esi */
    esi = ecx; /* 0x15039A67: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15039A69: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15039A6B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15039A6C: mov edi, dword ptr [ebp + 8] */
    MEM32(esi) = 0x15001004u; /* 0x15039A6F: mov dword ptr [esi], 0x15001004 */
    MEM32(esi + 0x8) = eax; /* 0x15039A75: mov dword ptr [esi + 8], eax */
    /* cmp MEM32(edi + 0x8), eax */ /* 0x15039A78: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039AB7; /* 0x15039A7B: je 0x15039ab7 */
L_15039A7D:
    ecx = MEM32(edi + 0x4); /* 0x15039A7D: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x15039A80: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039ABA; /* 0x15039A82: je 0x15039aba */
L_15039A84:
    edx = ecx + 0x1; /* 0x15039A84: lea edx, [ecx + 1] */
L_15039A87:
    SET_LO8(eax, MEM8(ecx)); /* 0x15039A87: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15039A89: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15039A8A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039A87; /* 0x15039A8C: jne 0x15039a87 */
L_15039A8E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15039A8E: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x15039A90: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x15039A93: push ebx */
    RECOMP_CALL(sub_15048A30); /* 0x15039A94: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15039A99: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x15039A9C: pop ecx */
    /* test eax, eax */ /* 0x15039A9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039ABD; /* 0x15039A9F: je 0x15039abd */
L_15039AA1:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x15039AA1: push dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x15039AA4: push ebx */
    PUSH32(esp, eax); /* 0x15039AA5: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15039AA6: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15039AAB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 1; /* 0x15039AAE: mov dword ptr [esi + 8], 1 */
    goto L_15039ABD; /* 0x15039AB5: jmp 0x15039abd */
L_15039AB7:
    eax = MEM32(edi + 0x4); /* 0x15039AB7: mov eax, dword ptr [edi + 4] */
L_15039ABA:
    MEM32(esi + 0x4) = eax; /* 0x15039ABA: mov dword ptr [esi + 4], eax */
L_15039ABD:
    edi = POP32_VAL(esp); /* 0x15039ABD: pop edi */
    eax = esi; /* 0x15039ABE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039AC0: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039AC1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15039AC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039AC3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039AD0u);

L_15039AD0:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x15039AD0: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15039AD4: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x15039AD6: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x15001004u; /* 0x15039ADA: mov dword ptr [ecx], 0x15001004 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039AE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039AF0u);

L_15039AF0:
    MEM32(ecx) = 0x15001010u; /* 0x15039AF0: mov dword ptr [ecx], 0x15001010 */
    goto L_15039B30; /* 0x15039AF6: jmp 0x15039b30 */
L_15039B30:
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x15039B30: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x15001004u; /* 0x15039B34: mov dword ptr [ecx], 0x15001004 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039B45; /* 0x15039B3A: je 0x15039b45 */
L_15039B3C:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15039B3C: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_15048840); /* 0x15039B3F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039B44: pop ecx */
L_15039B45:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039B45: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039B10u);

L_15039B10:
    MEM32(ecx) = 0x15001200u; /* 0x15039B10: mov dword ptr [ecx], 0x15001200 */
    goto L_15039B30; /* 0x15039B16: jmp 0x15039b30 */
L_15039B30:
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x15039B30: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x15001004u; /* 0x15039B34: mov dword ptr [ecx], 0x15001004 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039B45; /* 0x15039B3A: je 0x15039b45 */
L_15039B3C:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15039B3C: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_15048840); /* 0x15039B3F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039B44: pop ecx */
L_15039B45:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039B45: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039B30u);

L_15039B30:
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x15039B30: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x15001004u; /* 0x15039B34: mov dword ptr [ecx], 0x15001004 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039B45; /* 0x15039B3A: je 0x15039b45 */
L_15039B3C:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15039B3C: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_15048840); /* 0x15039B3F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039B44: pop ecx */
L_15039B45:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039B45: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039B50u);

L_15039B50:
    edi = edi; /* 0x15039B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039B52: push ebp */
    ebp = esp; /* 0x15039B53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15039B55: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15039B56: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x15039B59: mov esi, ecx */
    RECOMP_CALL(sub_15039B70); /* 0x15039B5B: call 0x15039b70 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15039B60: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039B62: pop esi */
    ebp = POP32_VAL(esp); /* 0x15039B63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039B64: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039B70u);

L_15039B70:
    edi = edi; /* 0x15039B70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039B72: push ebp */
    ebp = esp; /* 0x15039B73: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15039B75: push ebx */
    PUSH32(esp, esi); /* 0x15039B76: push esi */
    PUSH32(esp, edi); /* 0x15039B77: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15039B78: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x15039B7B: mov esi, ecx */
    /* cmp esi, edi */ /* 0x15039B7D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039BCB; /* 0x15039B7F: je 0x15039bcb */
L_15039B81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15039B81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x15039B83: mov dword ptr [esi + 8], eax */
    /* cmp MEM32(edi + 0x8), eax */ /* 0x15039B86: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039BC5; /* 0x15039B89: je 0x15039bc5 */
L_15039B8B:
    ecx = MEM32(edi + 0x4); /* 0x15039B8B: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x15039B8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039BC8; /* 0x15039B90: je 0x15039bc8 */
L_15039B92:
    edx = ecx + 0x1; /* 0x15039B92: lea edx, [ecx + 1] */
L_15039B95:
    SET_LO8(eax, MEM8(ecx)); /* 0x15039B95: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15039B97: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15039B98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039B95; /* 0x15039B9A: jne 0x15039b95 */
L_15039B9C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15039B9C: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x15039B9E: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x15039BA1: push ebx */
    RECOMP_CALL(sub_15048A30); /* 0x15039BA2: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15039BA7: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x15039BAA: pop ecx */
    /* test eax, eax */ /* 0x15039BAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039BCB; /* 0x15039BAD: je 0x15039bcb */
L_15039BAF:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x15039BAF: push dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x15039BB2: push ebx */
    PUSH32(esp, eax); /* 0x15039BB3: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15039BB4: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15039BB9: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 1; /* 0x15039BBC: mov dword ptr [esi + 8], 1 */
    goto L_15039BCB; /* 0x15039BC3: jmp 0x15039bcb */
L_15039BC5:
    eax = MEM32(edi + 0x4); /* 0x15039BC5: mov eax, dword ptr [edi + 4] */
L_15039BC8:
    MEM32(esi + 0x4) = eax; /* 0x15039BC8: mov dword ptr [esi + 4], eax */
L_15039BCB:
    edi = POP32_VAL(esp); /* 0x15039BCB: pop edi */
    eax = esi; /* 0x15039BCC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039BCE: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039BCF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15039BD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039BD1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039BE0u);

L_15039BE0:
    edi = edi; /* 0x15039BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039BE2: push ebp */
    ebp = esp; /* 0x15039BE3: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039BE5: push -1 */
    PUSH32(esp, 0x150AF7BFu); /* 0x15039BE7: push 0x150af7bf */
    eax = MEM32(FS_BASE + (0)); /* 0x15039BEC: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x15039BF2: push eax */
    PUSH32(esp, ebx); /* 0x15039BF3: push ebx */
    PUSH32(esp, esi); /* 0x15039BF4: push esi */
    PUSH32(esp, edi); /* 0x15039BF5: push edi */
    eax = MEM32(0x150BD340); /* 0x15039BF6: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15039BFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15039BFD: push eax */
    eax = ebp + (-0xC); /* 0x15039BFE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15039C01: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15039C07: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x15039C09: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x15039C0C: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x8), 2 */ /* 0x15039C0F: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039C36; /* 0x15039C13: je 0x15039c36 */
L_15039C15:
    PUSH32(esp, 0x15039AF0u); /* 0x15039C15: push 0x15039af0 */
    edi = esi + (-0x4); /* 0x15039C1A: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x15039C1D: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x15039C1F: push 0xc */
    PUSH32(esp, esi); /* 0x15039C21: push esi */
    RECOMP_CALL(sub_15041D78); /* 0x15039C22: call 0x15041d78 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039C27: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039C32; /* 0x15039C29: je 0x15039c32 */
L_15039C2B:
    PUSH32(esp, edi); /* 0x15039C2B: push edi */
    RECOMP_CALL(sub_150460C0); /* 0x15039C2C: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039C31: pop ecx */
L_15039C32:
    eax = edi; /* 0x15039C32: mov eax, edi */
    goto L_15039C4E; /* 0x15039C34: jmp 0x15039c4e */
L_15039C36:
    MEM32(esi) = 0x15001010u; /* 0x15039C36: mov dword ptr [esi], 0x15001010 */
    RECOMP_CALL(sub_15039B30); /* 0x15039C3C: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039C41: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039C4C; /* 0x15039C43: je 0x15039c4c */
L_15039C45:
    PUSH32(esp, esi); /* 0x15039C45: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039C46: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039C4B: pop ecx */
L_15039C4C:
    eax = esi; /* 0x15039C4C: mov eax, esi */
L_15039C4E:
    ecx = MEM32(ebp + (-0xC)); /* 0x15039C4E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15039C51: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15039C58: pop ecx */
    edi = POP32_VAL(esp); /* 0x15039C59: pop edi */
    esi = POP32_VAL(esp); /* 0x15039C5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039C5B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039C5C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039C5D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039C70u);

L_15039C70:
    edi = edi; /* 0x15039C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039C72: push ebp */
    ebp = esp; /* 0x15039C73: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039C75: push -1 */
    PUSH32(esp, 0x150AF7BFu); /* 0x15039C77: push 0x150af7bf */
    eax = MEM32(FS_BASE + (0)); /* 0x15039C7C: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x15039C82: push eax */
    PUSH32(esp, ebx); /* 0x15039C83: push ebx */
    PUSH32(esp, esi); /* 0x15039C84: push esi */
    PUSH32(esp, edi); /* 0x15039C85: push edi */
    eax = MEM32(0x150BD340); /* 0x15039C86: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15039C8B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15039C8D: push eax */
    eax = ebp + (-0xC); /* 0x15039C8E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15039C91: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15039C97: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x15039C99: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x15039C9C: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x8), 2 */ /* 0x15039C9F: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039CC6; /* 0x15039CA3: je 0x15039cc6 */
L_15039CA5:
    PUSH32(esp, 0x15039B10u); /* 0x15039CA5: push 0x15039b10 */
    edi = esi + (-0x4); /* 0x15039CAA: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x15039CAD: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x15039CAF: push 0xc */
    PUSH32(esp, esi); /* 0x15039CB1: push esi */
    RECOMP_CALL(sub_15041D78); /* 0x15039CB2: call 0x15041d78 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039CB7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039CC2; /* 0x15039CB9: je 0x15039cc2 */
L_15039CBB:
    PUSH32(esp, edi); /* 0x15039CBB: push edi */
    RECOMP_CALL(sub_150460C0); /* 0x15039CBC: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039CC1: pop ecx */
L_15039CC2:
    eax = edi; /* 0x15039CC2: mov eax, edi */
    goto L_15039CDE; /* 0x15039CC4: jmp 0x15039cde */
L_15039CC6:
    MEM32(esi) = 0x15001200u; /* 0x15039CC6: mov dword ptr [esi], 0x15001200 */
    RECOMP_CALL(sub_15039B30); /* 0x15039CCC: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039CD1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039CDC; /* 0x15039CD3: je 0x15039cdc */
L_15039CD5:
    PUSH32(esp, esi); /* 0x15039CD5: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039CD6: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039CDB: pop ecx */
L_15039CDC:
    eax = esi; /* 0x15039CDC: mov eax, esi */
L_15039CDE:
    ecx = MEM32(ebp + (-0xC)); /* 0x15039CDE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15039CE1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15039CE8: pop ecx */
    edi = POP32_VAL(esp); /* 0x15039CE9: pop edi */
    esi = POP32_VAL(esp); /* 0x15039CEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039CEB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039CEC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039CED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039D00u);

L_15039D00:
    edi = edi; /* 0x15039D00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039D02: push ebp */
    ebp = esp; /* 0x15039D03: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039D05: push -1 */
    PUSH32(esp, 0x150AF7BFu); /* 0x15039D07: push 0x150af7bf */
    eax = MEM32(FS_BASE + (0)); /* 0x15039D0C: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x15039D12: push eax */
    PUSH32(esp, ebx); /* 0x15039D13: push ebx */
    PUSH32(esp, esi); /* 0x15039D14: push esi */
    PUSH32(esp, edi); /* 0x15039D15: push edi */
    eax = MEM32(0x150BD340); /* 0x15039D16: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15039D1B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15039D1D: push eax */
    eax = ebp + (-0xC); /* 0x15039D1E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15039D21: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15039D27: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x15039D29: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x15039D2C: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x8), 2 */ /* 0x15039D2F: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039D56; /* 0x15039D33: je 0x15039d56 */
L_15039D35:
    PUSH32(esp, 0x15039B30u); /* 0x15039D35: push 0x15039b30 */
    edi = esi + (-0x4); /* 0x15039D3A: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x15039D3D: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x15039D3F: push 0xc */
    PUSH32(esp, esi); /* 0x15039D41: push esi */
    RECOMP_CALL(sub_15041D78); /* 0x15039D42: call 0x15041d78 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039D47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039D52; /* 0x15039D49: je 0x15039d52 */
L_15039D4B:
    PUSH32(esp, edi); /* 0x15039D4B: push edi */
    RECOMP_CALL(sub_150460C0); /* 0x15039D4C: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039D51: pop ecx */
L_15039D52:
    eax = edi; /* 0x15039D52: mov eax, edi */
    goto L_15039D68; /* 0x15039D54: jmp 0x15039d68 */
L_15039D56:
    RECOMP_CALL(sub_15039B30); /* 0x15039D56: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x15039D5B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039D66; /* 0x15039D5D: je 0x15039d66 */
L_15039D5F:
    PUSH32(esp, esi); /* 0x15039D5F: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039D60: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039D65: pop ecx */
L_15039D66:
    eax = esi; /* 0x15039D66: mov eax, esi */
L_15039D68:
    ecx = MEM32(ebp + (-0xC)); /* 0x15039D68: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15039D6B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15039D72: pop ecx */
    edi = POP32_VAL(esp); /* 0x15039D73: pop edi */
    esi = POP32_VAL(esp); /* 0x15039D74: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039D75: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039D76: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039D77: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039D90u);

L_15039D90:
    edi = edi; /* 0x15039D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039D92: push ebp */
    ebp = esp; /* 0x15039D93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039D95: push ecx */
    PUSH32(esp, esi); /* 0x15039D96: push esi */
    eax = ebp + (-0x4); /* 0x15039D97: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x15003ED8u; /* 0x15039D9A: mov dword ptr [ebp - 4], 0x15003ed8 */
    PUSH32(esp, eax); /* 0x15039DA1: push eax */
    esi = ecx; /* 0x15039DA2: mov esi, ecx */
    RECOMP_CALL(sub_150399C0); /* 0x15039DA4: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001200u; /* 0x15039DA9: mov dword ptr [esi], 0x15001200 */
    esi = POP32_VAL(esp); /* 0x15039DAF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039DB0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039DB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039DC0u);

L_15039DC0:
    edi = edi; /* 0x15039DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039DC2: push ebp */
    ebp = esp; /* 0x15039DC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039DC5: push ecx */
    PUSH32(esp, esi); /* 0x15039DC6: push esi */
    eax = ebp + (-0x4); /* 0x15039DC7: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x15003EE4u; /* 0x15039DCA: mov dword ptr [ebp - 4], 0x15003ee4 */
    PUSH32(esp, eax); /* 0x15039DD1: push eax */
    esi = ecx; /* 0x15039DD2: mov esi, ecx */
    RECOMP_CALL(sub_150399C0); /* 0x15039DD4: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001010u; /* 0x15039DD9: mov dword ptr [esi], 0x15001010 */
    esi = POP32_VAL(esp); /* 0x15039DDF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039DE0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039DE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039DF0u);

L_15039DF0:
    edi = edi; /* 0x15039DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039DF2: push ebp */
    ebp = esp; /* 0x15039DF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15039DF5: push esi */
    esi = ecx; /* 0x15039DF6: mov esi, ecx */
    MEM32(esi) = 0x15001010u; /* 0x15039DF8: mov dword ptr [esi], 0x15001010 */
    RECOMP_CALL(sub_15039B30); /* 0x15039DFE: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x15039E03: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039E10; /* 0x15039E07: je 0x15039e10 */
L_15039E09:
    PUSH32(esp, esi); /* 0x15039E09: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039E0A: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039E0F: pop ecx */
L_15039E10:
    eax = esi; /* 0x15039E10: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039E12: pop esi */
    ebp = POP32_VAL(esp); /* 0x15039E13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039E14: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039E20u);

L_15039E20:
    edi = edi; /* 0x15039E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039E22: push ebp */
    ebp = esp; /* 0x15039E23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15039E25: push esi */
    esi = ecx; /* 0x15039E26: mov esi, ecx */
    MEM32(esi) = 0x15001200u; /* 0x15039E28: mov dword ptr [esi], 0x15001200 */
    RECOMP_CALL(sub_15039B30); /* 0x15039E2E: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x15039E33: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039E40; /* 0x15039E37: je 0x15039e40 */
L_15039E39:
    PUSH32(esp, esi); /* 0x15039E39: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039E3A: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039E3F: pop ecx */
L_15039E40:
    eax = esi; /* 0x15039E40: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039E42: pop esi */
    ebp = POP32_VAL(esp); /* 0x15039E43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039E44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039E50u);

L_15039E50:
    edi = edi; /* 0x15039E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039E52: push ebp */
    ebp = esp; /* 0x15039E53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15039E55: push esi */
    esi = ecx; /* 0x15039E56: mov esi, ecx */
    RECOMP_CALL(sub_15039B30); /* 0x15039E58: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x15039E5D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039E6A; /* 0x15039E61: je 0x15039e6a */
L_15039E63:
    PUSH32(esp, esi); /* 0x15039E63: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15039E64: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039E69: pop ecx */
L_15039E6A:
    eax = esi; /* 0x15039E6A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15039E6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x15039E6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15039E6E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15039E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039E80u);

L_15039E80:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x15039E80: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x15003EF0u; /* 0x15039E84: mov eax, 0x15003ef0 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ecx + 0x4); } /* 0x15039E89: cmovne eax, dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039E8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039EA0u);

L_15039EA0:
    PUSH32(esp, 8); /* 0x15039EA0: push 8 */
    PUSH32(esp, 0x150AFC18u); /* 0x15039EA2: push 0x150afc18 */
    RECOMP_CALL(sub_1505E988); /* 0x15039EA7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15039EAC: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15039EAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039EB1: je 0x15039f27 */
L_15039EB3:
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x15039EB3: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039EB9: jne 0x15039f27 */
L_15039EBB:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x15039EBB: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039EBF: jne 0x15039f27 */
L_15039EC1:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x15039EC1: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039EDC; /* 0x15039EC8: je 0x15039edc */
L_15039ECA:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x15039ECA: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039EDC; /* 0x15039ED1: je 0x15039edc */
L_15039ED3:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x15039ED3: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039EDA: jne 0x15039f27 */
L_15039EDC:
    ecx = MEM32(eax + 0x1C); /* 0x15039EDC: mov ecx, dword ptr [eax + 0x1c] */
    /* test ecx, ecx */ /* 0x15039EDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039EE1: je 0x15039f27 */
L_15039EE3:
    edx = MEM32(ecx + 0x4); /* 0x15039EE3: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x15039EE6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039F09; /* 0x15039EE8: je 0x15039f09 */
L_15039EEA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15039EEA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x15039EEE: push edx */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x15039EEF: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_15039F50); /* 0x15039EF2: call 0x15039f50 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15039EF7: mov dword ptr [ebp - 4], 0xfffffffe */
    goto L_15039F27; /* 0x15039EFE: jmp 0x15039f27 */
L_15039F09:
    /* test MEM8(ecx), 0x10u */ /* 0x15039F09: test byte ptr [ecx], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039F0C: je 0x15039f27 */
L_15039F0E:
    eax = MEM32(eax + 0x18); /* 0x15039F0E: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(eax); /* 0x15039F11: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x15039F13: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039F27; /* 0x15039F15: je 0x15039f27 */
L_15039F17:
    eax = MEM32(ecx); /* 0x15039F17: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x15039F19: push ecx */
    esi = MEM32(eax + 0x8); /* 0x15039F1A: mov esi, dword ptr [eax + 8] */
    ecx = esi; /* 0x15039F1D: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15039F1F: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15039F25: call esi */
    RECOMP_FLAGS_IN();
L_15039F27:
    ecx = MEM32(ebp + (-0x10)); /* 0x15039F27: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15039F2A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15039F31: pop ecx */
    edi = POP32_VAL(esp); /* 0x15039F32: pop edi */
    esi = POP32_VAL(esp); /* 0x15039F33: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039F34: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039F35: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039F36: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039F50u);

L_15039F50:
    edi = edi; /* 0x15039F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039F52: push ebp */
    ebp = esp; /* 0x15039F53: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15039F55: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x15039F58: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15039F5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15039F5C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15039F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039F70u);

L_15039F70:
    RECOMP_CALL(sub_15068820); /* 0x15039F70: call 0x15068820 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), 0 */ /* 0x15039F75: cmp dword ptr [eax + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15039F7C: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039F7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039F90u);

L_15039F90:
    edi = edi; /* 0x15039F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039F92: push ebp */
    ebp = esp; /* 0x15039F93: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15039F95: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15039F98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A030; /* 0x15039F9A: je 0x1503a030 */
L_15039FA0:
    eax = MEM32(eax); /* 0x15039FA0: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x15039FA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A030; /* 0x15039FA4: je 0x1503a030 */
L_15039FAA:
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x15039FAA: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A030; /* 0x15039FB0: jne 0x1503a030 */
L_15039FB2:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x15039FB2: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A030; /* 0x15039FB6: jne 0x1503a030 */
L_15039FB8:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x15039FB8: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039FD3; /* 0x15039FBF: je 0x15039fd3 */
L_15039FC1:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x15039FC1: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039FD3; /* 0x15039FC8: je 0x15039fd3 */
L_15039FCA:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x15039FCA: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A030; /* 0x15039FD1: jne 0x1503a030 */
L_15039FD3:
    eax = MEM32(eax + 0x1C); /* 0x15039FD3: mov eax, dword ptr [eax + 0x1c] */
    PUSH32(esp, ebx); /* 0x15039FD6: push ebx */
    PUSH32(esp, esi); /* 0x15039FD7: push esi */
    PUSH32(esp, edi); /* 0x15039FD8: push edi */
    eax = MEM32(eax + 0xC); /* 0x15039FD9: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax); /* 0x15039FDC: mov esi, dword ptr [eax] */
    ebx = eax + 0x4; /* 0x15039FDE: lea ebx, [eax + 4] */
    goto L_1503A020; /* 0x15039FE1: jmp 0x1503a020 */
L_15039FE3:
    eax = MEM32(ebx); /* 0x15039FE3: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + 0x8); /* 0x15039FE5: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(eax + 0x4); /* 0x15039FE8: mov edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x15039FEB: add edi, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15042110); /* 0x15039FEE: call 0x15042110 */
    RECOMP_FLAGS_IN();
L_15039FF3:
    SET_LO8(ecx, MEM8(eax)); /* 0x15039FF3: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edi) */ /* 0x15039FF5: cmp cl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A013; /* 0x15039FF7: jne 0x1503a013 */
L_15039FF9:
    /* test LO8(ecx), LO8(ecx) */ /* 0x15039FF9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A00F; /* 0x15039FFB: je 0x1503a00f */
L_15039FFD:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x15039FFD: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edi + 0x1) */ /* 0x1503A000: cmp cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A013; /* 0x1503A003: jne 0x1503a013 */
L_1503A005:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503A005: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1503A008: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503A00B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039FF3; /* 0x1503A00D: jne 0x15039ff3 */
L_1503A00F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A00F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503A018; /* 0x1503A011: jmp 0x1503a018 */
L_1503A013:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503A013: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503A015: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503A018:
    /* test eax, eax */ /* 0x1503A018: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A02B; /* 0x1503A01A: je 0x1503a02b */
L_1503A01C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503A01C: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1503A01D: add ebx, 4 */
    _flag_k = FK_ADD;
L_1503A020:
    /* test esi, esi */ /* 0x1503A020: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15039FE3; /* 0x1503A022: jg 0x15039fe3 */
L_1503A024:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A024: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503A026:
    edi = POP32_VAL(esp); /* 0x1503A026: pop edi */
    esi = POP32_VAL(esp); /* 0x1503A027: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503A028: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503A029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A02A: ret  */
L_1503A02B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A02B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503A02D: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1503A026; /* 0x1503A02E: jmp 0x1503a026 */
L_1503A030:
    RECOMP_CALL(sub_1503B080); /* 0x1503A030: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503A035u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503A03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A03Cu);

L_1503A03C:
    edi = edi; /* 0x1503A03C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A03E: push ebp */
    ebp = esp; /* 0x1503A03F: mov ebp, esp */
    RECOMP_CALL(sub_15068820); /* 0x1503A041: call 0x15068820 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x98); /* 0x1503A046: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x1503A04C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A05E; /* 0x1503A04E: je 0x1503a05e */
L_1503A050:
    ecx = MEM32(ebp + 0x8); /* 0x1503A050: mov ecx, dword ptr [ebp + 8] */
L_1503A053:
    /* cmp MEM32(eax), ecx */ /* 0x1503A053: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A063; /* 0x1503A055: je 0x1503a063 */
L_1503A057:
    eax = MEM32(eax + 0x4); /* 0x1503A057: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x1503A05A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A053; /* 0x1503A05C: jne 0x1503a053 */
L_1503A05E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A05E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503A060: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1503A061: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A062: ret  */
L_1503A063:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A063: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503A065: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A066: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A070u);

L_1503A070:
    edi = edi; /* 0x1503A070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A072: push ebp */
    ebp = esp; /* 0x1503A073: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1503A075: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1503A078: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503A07B: push esi */
    eax = MEM32(ecx); /* 0x1503A07C: mov eax, dword ptr [ecx] */
    esi = MEM32(ecx + 0x4); /* 0x1503A07E: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1503A081: add eax, edx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1503A083: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503A094; /* 0x1503A085: js 0x1503a094 */
L_1503A087:
    ecx = MEM32(ecx + 0x8); /* 0x1503A087: mov ecx, dword ptr [ecx + 8] */
    edx = MEM32(esi + edx); /* 0x1503A08A: mov edx, dword ptr [esi + edx] */
    ecx = MEM32(edx + ecx); /* 0x1503A08D: mov ecx, dword ptr [edx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1503A090: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1503A092: add eax, ecx */
    _flag_k = FK_ADD;
L_1503A094:
    esi = POP32_VAL(esp); /* 0x1503A094: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503A095: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A096: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A09D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A09Du);

L_1503A09D:
    edi = edi; /* 0x1503A09D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A09F: push ebp */
    ebp = esp; /* 0x1503A0A0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1503A0A2: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1503A0A5: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE0434352u */ /* 0x1503A0A7: cmp dword ptr [eax], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A0D0; /* 0x1503A0AD: je 0x1503a0d0 */
L_1503A0AF:
    /* cmp MEM32(eax), 0xE0434F4Du */ /* 0x1503A0AF: cmp dword ptr [eax], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A0D0; /* 0x1503A0B5: je 0x1503a0d0 */
L_1503A0B7:
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1503A0B7: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A0ED; /* 0x1503A0BD: jne 0x1503a0ed */
L_1503A0BF:
    RECOMP_CALL(sub_15068820); /* 0x1503A0BF: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) & 0; /* 0x1503A0C4: and dword ptr [eax + 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503B0D0; /* 0x1503A0CB: jmp 0x1503b0d0 */
L_1503A0D0:
    RECOMP_CALL(sub_15068820); /* 0x1503A0D0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), 0 */ /* 0x1503A0D5: cmp dword ptr [eax + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503A0ED; /* 0x1503A0DC: jle 0x1503a0ed */
L_1503A0DE:
    /* test eax, eax */ /* 0x1503A0DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A0E7; /* 0x1503A0E0: jne 0x1503a0e7 */
L_1503A0E2:
    RECOMP_CALL(sub_15068820); /* 0x1503A0E2: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503A0E7:
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) - 1; /* 0x1503A0E7: dec dword ptr [eax + 0x90] */
    _flag_k = FK_DEC;
L_1503A0ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A0ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503A0EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A0F0: ret  */
L_1503B0D0:
    PUSH32(esp, 8); /* 0x1503B0D0: push 8 */
    PUSH32(esp, 0x150AFD70u); /* 0x1503B0D2: push 0x150afd70 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B0D7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x1503B0DC: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x78); /* 0x1503B0E1: mov esi, dword ptr [eax + 0x78] */
    /* test esi, esi */ /* 0x1503B0E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B106; /* 0x1503B0E6: je 0x1503b106 */
L_1503B0E8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B0E8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1503B0EC: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B0EE: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503B0F4: call esi */
    RECOMP_FLAGS_IN();
    goto L_1503B0FF; /* 0x1503B0F6: jmp 0x1503b0ff */
L_1503B0FF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B0FF: mov dword ptr [ebp - 4], 0xfffffffe */
L_1503B106:
    RECOMP_CALL(sub_1505D3B0); /* 0x1503B106: call 0x1505d3b0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503B10Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503A100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A100u);

L_1503A100:
    edi = edi; /* 0x1503A100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A102: push ebp */
    ebp = esp; /* 0x1503A103: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503A105: push ecx */
    PUSH32(esp, esi); /* 0x1503A106: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503A107: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503A10A: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503A10C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039A60); /* 0x1503A10F: call 0x15039a60 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001028u; /* 0x1503A114: mov dword ptr [esi], 0x15001028 */
    eax = esi; /* 0x1503A11A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503A11C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503A11D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503A11E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503A127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A127u);

L_1503A127:
    edi = edi; /* 0x1503A127: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A129: push ebp */
    ebp = esp; /* 0x1503A12A: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503A12C: push -1 */
    PUSH32(esp, 0x150AF7E2u); /* 0x1503A12E: push 0x150af7e2 */
    eax = MEM32(FS_BASE + (0)); /* 0x1503A133: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1503A139: push eax */
    PUSH32(esp, esi); /* 0x1503A13A: push esi */
    eax = MEM32(0x150BD340); /* 0x1503A13B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503A140: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503A142: push eax */
    eax = ebp + (-0xC); /* 0x1503A143: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503A146: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1503A14C: mov esi, ecx */
    eax = ebp + 0x8; /* 0x1503A14E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503A151: push eax */
    RECOMP_CALL(sub_150399C0); /* 0x1503A152: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001028u; /* 0x1503A157: mov dword ptr [esi], 0x15001028 */
    eax = esi; /* 0x1503A15D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x1503A15F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503A162: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503A169: pop ecx */
    esi = POP32_VAL(esp); /* 0x1503A16A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503A16B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503A16C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503A1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A1A0u);

L_1503A1A0:
    edi = edi; /* 0x1503A1A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A1A2: push ebp */
    ebp = esp; /* 0x1503A1A3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503A1A5: push esi */
    esi = ecx; /* 0x1503A1A6: mov esi, ecx */
    MEM32(esi) = 0x15001028u; /* 0x1503A1A8: mov dword ptr [esi], 0x15001028 */
    RECOMP_CALL(sub_15039B30); /* 0x1503A1AE: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1503A1B3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A1C0; /* 0x1503A1B7: je 0x1503a1c0 */
L_1503A1B9:
    PUSH32(esp, esi); /* 0x1503A1B9: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x1503A1BA: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A1BF: pop ecx */
L_1503A1C0:
    eax = esi; /* 0x1503A1C0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503A1C2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503A1C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503A1C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503A1CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A1CDu);

L_1503A1CD:
    PUSH32(esp, 0x44u); /* 0x1503A1CD: push 0x44 */
    PUSH32(esp, 0x150AFC80u); /* 0x1503A1CF: push 0x150afc80 */
    RECOMP_CALL(sub_1505E988); /* 0x1503A1D4: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1503A1D9: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1503A1DC: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1503A1DF: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x1503A1E3: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + (-0x4)); /* 0x1503A1E6: mov eax, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1503A1E9: mov dword ptr [ebp - 0x38], eax */
    edi = MEM32(ebp + 0x8); /* 0x1503A1EC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1503A1EF: push dword ptr [edi + 0x18] */
    eax = ebp + (-0x54); /* 0x1503A1F2: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503A1F5: push eax */
    RECOMP_CALL(sub_1503BC60); /* 0x1503A1F6: call 0x1503bc60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A1FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A1FC: pop ecx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1503A1FD: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_CALL(sub_15068820); /* 0x1503A200: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A205: mov esi, eax */
    eax = MEM32(esi + 0x88); /* 0x1503A207: mov eax, dword ptr [esi + 0x88] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1503A20D: mov dword ptr [ebp - 0x40], eax */
    /* test esi, esi */ /* 0x1503A210: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A21B; /* 0x1503A212: jne 0x1503a21b */
L_1503A214:
    RECOMP_CALL(sub_15068820); /* 0x1503A214: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A219: mov esi, eax */
L_1503A21B:
    eax = MEM32(esi + 0x8C); /* 0x1503A21B: mov eax, dword ptr [esi + 0x8c] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1503A221: mov dword ptr [ebp - 0x44], eax */
    /* test esi, esi */ /* 0x1503A224: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A22F; /* 0x1503A226: jne 0x1503a22f */
L_1503A228:
    RECOMP_CALL(sub_15068820); /* 0x1503A228: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A22D: mov esi, eax */
L_1503A22F:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503A22F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(esi + 0x88) = edi; /* 0x1503A232: mov dword ptr [esi + 0x88], edi */
    /* test esi, esi */ /* 0x1503A238: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A246; /* 0x1503A23A: jne 0x1503a246 */
L_1503A23C:
    RECOMP_CALL(sub_15068820); /* 0x1503A23C: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A241: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503A243: mov dword ptr [ebp - 0x1c], esi */
L_1503A246:
    eax = MEM32(ebp + 0x10); /* 0x1503A246: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8C) = eax; /* 0x1503A249: mov dword ptr [esi + 0x8c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503A24F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A253: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503A255: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4C)) = eax; /* 0x1503A256: mov dword ptr [ebp - 0x4c], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503A259: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A25C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1503A25F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503A262: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A265: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503A268: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503B907); /* 0x1503A26B: call 0x1503b907 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503A270: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1503A273: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503A276: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503A338; /* 0x1503A27A: jmp 0x1503a338 */
L_1503A338:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503A338: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x4C)) = 0; /* 0x1503A33F: mov dword ptr [ebp - 0x4c], 0 */
    RECOMP_CALL(sub_1503A363); /* 0x1503A346: call 0x1503a363 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1503A34B: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503A34D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503A350: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503A357: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503A358: pop edi */
    esi = POP32_VAL(esp); /* 0x1503A359: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503A35A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503A35B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A35C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A363(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A363u);

L_1503A363:
    eax = MEM32(ebp + (-0x38)); /* 0x1503A363: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + 0xC); /* 0x1503A366: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + (-0x4)) = eax; /* 0x1503A369: mov dword ptr [ecx - 4], eax */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1503A36C: push dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1503BC9A); /* 0x1503A36F: call 0x1503bc9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A374: pop ecx */
    /* test esi, esi */ /* 0x1503A375: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A383; /* 0x1503A377: jne 0x1503a383 */
L_1503A379:
    RECOMP_CALL(sub_15068820); /* 0x1503A379: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A37E: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503A380: mov dword ptr [ebp - 0x1c], esi */
L_1503A383:
    eax = MEM32(ebp + (-0x40)); /* 0x1503A383: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi + 0x88) = eax; /* 0x1503A386: mov dword ptr [esi + 0x88], eax */
    /* test esi, esi */ /* 0x1503A38C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A39A; /* 0x1503A38E: jne 0x1503a39a */
L_1503A390:
    RECOMP_CALL(sub_15068820); /* 0x1503A390: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A395: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503A397: mov dword ptr [ebp - 0x1c], esi */
L_1503A39A:
    eax = MEM32(ebp + (-0x44)); /* 0x1503A39A: mov eax, dword ptr [ebp - 0x44] */
    MEM32(esi + 0x8C) = eax; /* 0x1503A39D: mov dword ptr [esi + 0x8c], eax */
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x1503A3A3: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A3FB; /* 0x1503A3A9: jne 0x1503a3fb */
L_1503A3AB:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1503A3AB: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A3FB; /* 0x1503A3AF: jne 0x1503a3fb */
L_1503A3B1:
    /* cmp MEM32(edi + 0x14), 0x19930520u */ /* 0x1503A3B1: cmp dword ptr [edi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A3CC; /* 0x1503A3B8: je 0x1503a3cc */
L_1503A3BA:
    /* cmp MEM32(edi + 0x14), 0x19930521u */ /* 0x1503A3BA: cmp dword ptr [edi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A3CC; /* 0x1503A3C1: je 0x1503a3cc */
L_1503A3C3:
    /* cmp MEM32(edi + 0x14), 0x19930522u */ /* 0x1503A3C3: cmp dword ptr [edi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A3FB; /* 0x1503A3CA: jne 0x1503a3fb */
L_1503A3CC:
    esi = MEM32(ebp + (-0x20)); /* 0x1503A3CC: mov esi, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x1503A3CF: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A3FE; /* 0x1503A3D3: jne 0x1503a3fe */
L_1503A3D5:
    /* test esi, esi */ /* 0x1503A3D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A3FE; /* 0x1503A3D7: je 0x1503a3fe */
L_1503A3D9:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1503A3D9: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_1503A03C); /* 0x1503A3DC: call 0x1503a03c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A3E1: pop ecx */
    /* test eax, eax */ /* 0x1503A3E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A3FE; /* 0x1503A3E4: je 0x1503a3fe */
L_1503A3E6:
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1503A3E6: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503A3EA: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1503A3ED: movzx eax, al */
    PUSH32(esp, eax); /* 0x1503A3F0: push eax */
    PUSH32(esp, edi); /* 0x1503A3F1: push edi */
    RECOMP_CALL(sub_15039EA0); /* 0x1503A3F2: call 0x15039ea0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A3F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A3F8: pop ecx */
    goto L_1503A3FE; /* 0x1503A3F9: jmp 0x1503a3fe */
L_1503A3FB:
    esi = MEM32(ebp + (-0x20)); /* 0x1503A3FB: mov esi, dword ptr [ebp - 0x20] */
L_1503A3FE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A3FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A405(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A405u);

L_1503A405:
    PUSH32(esp, 8); /* 0x1503A405: push 8 */
    eax = 0x150AF805u; /* 0x1503A407: mov eax, 0x150af805 */
    RECOMP_CALL(sub_15041ECF); /* 0x1503A40C: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x1503A411: call 0x15068820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1503A416: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(eax + 0x94), 0 */ /* 0x1503A419: cmp dword ptr [eax + 0x94], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x94)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A452; /* 0x1503A420: jne 0x1503a452 */
L_1503A422:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503A422: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1503B120); /* 0x1503A426: call 0x1503b120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1503A42B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1503B0D0); /* 0x1503A42F: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1503A434: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x1503A437: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A440; /* 0x1503A439: jne 0x1503a440 */
L_1503A43B:
    RECOMP_CALL(sub_15068820); /* 0x1503A43B: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503A440:
    ecx = MEM32(ebp + 0x8); /* 0x1503A440: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1503A443: push 0 */
    PUSH32(esp, 0); /* 0x1503A445: push 0 */
    MEM32(eax + 0x94) = ecx; /* 0x1503A447: mov dword ptr [eax + 0x94], ecx */
    RECOMP_CALL(sub_1503B2E0); /* 0x1503A44D: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
L_1503A452:
    RECOMP_CALL(sub_1503B080); /* 0x1503A452: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503A457u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503A463(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A463u);

L_1503A463:
    edi = edi; /* 0x1503A463: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A465: push ebp */
    ebp = esp; /* 0x1503A466: mov ebp, esp */
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1503A468: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503A46C: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x1503A46D: mov ebx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1503A470: push esi */
    PUSH32(esp, edi); /* 0x1503A471: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503A472: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A487; /* 0x1503A475: je 0x1503a487 */
L_1503A477:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A477: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1503A47A: push ebx */
    PUSH32(esp, edi); /* 0x1503A47B: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503A47C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AB90); /* 0x1503A47F: call 0x1503ab90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503A484: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1503A487:
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1503A487: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x1503A48B: mov eax, edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503A48D: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x2C); } /* 0x1503A490: cmovne eax, dword ptr [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x1503A494: push eax */
    RECOMP_CALL(sub_1503BB27); /* 0x1503A495: call 0x1503bb27 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x24); /* 0x1503A49A: mov esi, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(esi)); /* 0x1503A49D: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503A49F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A4A2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1503A4A5: push edi */
    RECOMP_CALL(sub_1503ADC5); /* 0x1503A4A6: call 0x1503adc5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x1503A4AB: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x100u); /* 0x1503A4AE: push 0x100 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1503A4B3: push dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503A4B6: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x8) = eax; /* 0x1503A4B7: mov dword ptr [edi + 8], eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1503A4BA: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503A4BD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503A4C0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1503A4C3: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503A4C4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503A1CD); /* 0x1503A4C7: call 0x1503a1cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1503A4CC: add esp, 0x2c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503A4CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A4DA; /* 0x1503A4D1: je 0x1503a4da */
L_1503A4D3:
    PUSH32(esp, edi); /* 0x1503A4D3: push edi */
    PUSH32(esp, eax); /* 0x1503A4D4: push eax */
    RECOMP_CALL(sub_1503BAEF); /* 0x1503A4D5: call 0x1503baef */
    RECOMP_FLAGS_IN();
L_1503A4DA:
    edi = POP32_VAL(esp); /* 0x1503A4DA: pop edi */
    esi = POP32_VAL(esp); /* 0x1503A4DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503A4DC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503A4DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A4DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A4E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A4E5u);

L_1503A4E5:
    edi = edi; /* 0x1503A4E5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A4E7: push ebp */
    ebp = esp; /* 0x1503A4E8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1503A4EA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1503A4ED: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1503A4EF: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A530; /* 0x1503A4F5: jne 0x1503a530 */
L_1503A4F7:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1503A4F7: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A530; /* 0x1503A4FB: jne 0x1503a530 */
L_1503A4FD:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x1503A4FD: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A518; /* 0x1503A504: je 0x1503a518 */
L_1503A506:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1503A506: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A518; /* 0x1503A50D: je 0x1503a518 */
L_1503A50F:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1503A50F: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A530; /* 0x1503A516: jne 0x1503a530 */
L_1503A518:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x1503A518: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A530; /* 0x1503A51C: jne 0x1503a530 */
L_1503A51E:
    RECOMP_CALL(sub_15068820); /* 0x1503A51E: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503A523: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503A525: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x20C) = ecx; /* 0x1503A526: mov dword ptr [eax + 0x20c], ecx */
    eax = ecx; /* 0x1503A52C: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1503A52E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A52F: ret  */
L_1503A530:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503A530: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503A532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A533: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503A53A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A53Au);

L_1503A53A:
    edi = edi; /* 0x1503A53A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A53C: push ebp */
    ebp = esp; /* 0x1503A53D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1503A53F: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x1503A542: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0xC); /* 0x1503A545: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1503A548: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503A549: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x4), 0x80u */ /* 0x1503A54B: cmp dword ptr [eax + 4], 0x80 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1503A552: push esi */
    esi = ebx; /* 0x1503A553: mov esi, ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x1503A555: mov byte ptr [ebp - 0x28], bl */
    PUSH32(esp, edi); /* 0x1503A558: push edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A559: mov dword ptr [ebp - 8], esi */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1503A55C: mov byte ptr [ebp - 1], bl */
    if (CMP_G(_flag_a, _flag_b)) goto L_1503A567; /* 0x1503A55F: jg 0x1503a567 */
L_1503A561:
    ecx = (int32_t)(int8_t)MEM8(ecx + 0x8); /* 0x1503A561: movsx ecx, byte ptr [ecx + 8] */
    goto L_1503A56A; /* 0x1503A565: jmp 0x1503a56a */
L_1503A567:
    ecx = MEM32(ecx + 0x8); /* 0x1503A567: mov ecx, dword ptr [ecx + 8] */
L_1503A56A:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1503A56A: mov dword ptr [ebp - 0xc], ecx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1503A56D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503A940; /* 0x1503A570: jl 0x1503a940 */
L_1503A576:
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x1503A576: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503A940; /* 0x1503A579: jge 0x1503a940 */
L_1503A57F:
    edi = MEM32(ebp + 0x8); /* 0x1503A57F: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x1503A582: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A6D6; /* 0x1503A588: jne 0x1503a6d6 */
L_1503A58E:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1503A58E: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A6D6; /* 0x1503A592: jne 0x1503a6d6 */
L_1503A598:
    /* cmp MEM32(edi + 0x14), 0x19930520u */ /* 0x1503A598: cmp dword ptr [edi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A5B7; /* 0x1503A59F: je 0x1503a5b7 */
L_1503A5A1:
    /* cmp MEM32(edi + 0x14), 0x19930521u */ /* 0x1503A5A1: cmp dword ptr [edi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A5B7; /* 0x1503A5A8: je 0x1503a5b7 */
L_1503A5AA:
    /* cmp MEM32(edi + 0x14), 0x19930522u */ /* 0x1503A5AA: cmp dword ptr [edi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A6D6; /* 0x1503A5B1: jne 0x1503a6d6 */
L_1503A5B7:
    /* cmp MEM32(edi + 0x1C), ebx */ /* 0x1503A5B7: cmp dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A6D6; /* 0x1503A5BA: jne 0x1503a6d6 */
L_1503A5C0:
    RECOMP_CALL(sub_15068820); /* 0x1503A5C0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A5C5: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A5C7: mov dword ptr [ebp - 8], esi */
    /* cmp MEM32(esi + 0x88), ebx */ /* 0x1503A5CA: cmp dword ptr [esi + 0x88], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A8A8; /* 0x1503A5D0: je 0x1503a8a8 */
L_1503A5D6:
    /* test esi, esi */ /* 0x1503A5D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A5E4; /* 0x1503A5D8: jne 0x1503a5e4 */
L_1503A5DA:
    RECOMP_CALL(sub_15068820); /* 0x1503A5DA: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A5DF: mov esi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1503A5E1: mov dword ptr [ebp - 8], eax */
L_1503A5E4:
    edi = MEM32(esi + 0x88); /* 0x1503A5E4: mov edi, dword ptr [esi + 0x88] */
    /* test esi, esi */ /* 0x1503A5EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A5F8; /* 0x1503A5EC: jne 0x1503a5f8 */
L_1503A5EE:
    RECOMP_CALL(sub_15068820); /* 0x1503A5EE: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A5F3: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A5F5: mov dword ptr [ebp - 8], esi */
L_1503A5F8:
    eax = MEM32(esi + 0x8C); /* 0x1503A5F8: mov eax, dword ptr [esi + 0x8c] */
    PUSH32(esp, 1); /* 0x1503A5FE: push 1 */
    PUSH32(esp, edi); /* 0x1503A600: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1503A601: mov dword ptr [ebp - 0x10], eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1503A604: mov byte ptr [ebp - 0x28], 1 */
    RECOMP_CALL(sub_15041E00); /* 0x1503A608: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A60D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A60E: pop ecx */
    /* test eax, eax */ /* 0x1503A60F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A940; /* 0x1503A611: je 0x1503a940 */
L_1503A617:
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x1503A617: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A649; /* 0x1503A61D: jne 0x1503a649 */
L_1503A61F:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1503A61F: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A649; /* 0x1503A623: jne 0x1503a649 */
L_1503A625:
    /* cmp MEM32(edi + 0x14), 0x19930520u */ /* 0x1503A625: cmp dword ptr [edi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A640; /* 0x1503A62C: je 0x1503a640 */
L_1503A62E:
    /* cmp MEM32(edi + 0x14), 0x19930521u */ /* 0x1503A62E: cmp dword ptr [edi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A640; /* 0x1503A635: je 0x1503a640 */
L_1503A637:
    /* cmp MEM32(edi + 0x14), 0x19930522u */ /* 0x1503A637: cmp dword ptr [edi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A649; /* 0x1503A63E: jne 0x1503a649 */
L_1503A640:
    /* cmp MEM32(edi + 0x1C), ebx */ /* 0x1503A640: cmp dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A940; /* 0x1503A643: je 0x1503a940 */
L_1503A649:
    /* test esi, esi */ /* 0x1503A649: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A657; /* 0x1503A64B: jne 0x1503a657 */
L_1503A64D:
    RECOMP_CALL(sub_15068820); /* 0x1503A64D: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A652: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A654: mov dword ptr [ebp - 8], esi */
L_1503A657:
    /* cmp MEM32(esi + 0x94), ebx */ /* 0x1503A657: cmp dword ptr [esi + 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x94)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A6DE; /* 0x1503A65D: je 0x1503a6de */
L_1503A65F:
    /* test esi, esi */ /* 0x1503A65F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A66D; /* 0x1503A661: jne 0x1503a66d */
L_1503A663:
    RECOMP_CALL(sub_15068820); /* 0x1503A663: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A668: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A66A: mov dword ptr [ebp - 8], esi */
L_1503A66D:
    eax = MEM32(esi + 0x94); /* 0x1503A66D: mov eax, dword ptr [esi + 0x94] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1503A673: mov dword ptr [ebp - 0x24], eax */
    /* test esi, esi */ /* 0x1503A676: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A687; /* 0x1503A678: jne 0x1503a687 */
L_1503A67A:
    RECOMP_CALL(sub_15068820); /* 0x1503A67A: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A67F: mov esi, eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1503A681: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503A684: mov dword ptr [ebp - 8], esi */
L_1503A687:
    PUSH32(esp, eax); /* 0x1503A687: push eax */
    PUSH32(esp, edi); /* 0x1503A688: push edi */
    MEM32(esi + 0x94) = ebx; /* 0x1503A689: mov dword ptr [esi + 0x94], ebx */
    RECOMP_CALL(sub_1503AA79); /* 0x1503A68F: call 0x1503aa79 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A694: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A695: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1503A696: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A6DE; /* 0x1503A698: jne 0x1503a6de */
L_1503A69A:
    esi = MEM32(ebp + (-0x24)); /* 0x1503A69A: mov esi, dword ptr [ebp - 0x24] */
    /* cmp MEM32(esi), ebx */ /* 0x1503A69D: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503A8D2; /* 0x1503A69F: jle 0x1503a8d2 */
L_1503A6A5:
    ecx = ebx; /* 0x1503A6A5: mov ecx, ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1503A6A7: mov dword ptr [ebp - 0x28], ebx */
L_1503A6AA:
    eax = MEM32(esi + 0x4); /* 0x1503A6AA: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x150BCCE4u); /* 0x1503A6AD: push 0x150bcce4 */
    ecx = MEM32(ecx + eax + 0x4); /* 0x1503A6B2: mov ecx, dword ptr [ecx + eax + 4] */
    RECOMP_CALL(sub_15041F20); /* 0x1503A6B6: call 0x15041f20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503A6BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A8AD; /* 0x1503A6BD: jne 0x1503a8ad */
L_1503A6C3:
    ecx = MEM32(ebp + (-0x28)); /* 0x1503A6C3: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503A6C6: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1503A6C7: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1503A6CA: mov dword ptr [ebp - 0x28], ecx */
    /* cmp ebx, MEM32(esi) */ /* 0x1503A6CD: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1503A6AA; /* 0x1503A6CF: jl 0x1503a6aa */
L_1503A6D1:
    goto L_1503A8D2; /* 0x1503A6D1: jmp 0x1503a8d2 */
L_1503A6D6:
    edx = MEM32(ebp + 0x10); /* 0x1503A6D6: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1503A6D9: mov dword ptr [ebp - 0x10], edx */
    goto L_1503A6E7; /* 0x1503A6DC: jmp 0x1503a6e7 */
L_1503A6DE:
    edx = MEM32(ebp + (-0x10)); /* 0x1503A6DE: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1503A6E1: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x18); /* 0x1503A6E4: mov eax, dword ptr [ebp + 0x18] */
L_1503A6E7:
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x1503A6E7: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A86F; /* 0x1503A6ED: jne 0x1503a86f */
L_1503A6F3:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1503A6F3: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A86F; /* 0x1503A6F7: jne 0x1503a86f */
L_1503A6FD:
    /* cmp MEM32(edi + 0x14), 0x19930520u */ /* 0x1503A6FD: cmp dword ptr [edi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A71C; /* 0x1503A704: je 0x1503a71c */
L_1503A706:
    /* cmp MEM32(edi + 0x14), 0x19930521u */ /* 0x1503A706: cmp dword ptr [edi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A71C; /* 0x1503A70D: je 0x1503a71c */
L_1503A70F:
    /* cmp MEM32(edi + 0x14), 0x19930522u */ /* 0x1503A70F: cmp dword ptr [edi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A86F; /* 0x1503A716: jne 0x1503a86f */
L_1503A71C:
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x1503A71C: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503A81A; /* 0x1503A71F: jbe 0x1503a81a */
L_1503A725:
    edx = ebp + (-0x20); /* 0x1503A725: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x1503A728: push edx */
    edx = ebp + (-0x18); /* 0x1503A729: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1503A72C: push edx */
    PUSH32(esp, ecx); /* 0x1503A72D: push ecx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A72E: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x1503A731: push eax */
    RECOMP_CALL(sub_1503BA71); /* 0x1503A732: call 0x1503ba71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1503A737: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503A73A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0x20)) */ /* 0x1503A73D: cmp ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503A81A; /* 0x1503A740: jae 0x1503a81a */
L_1503A746:
    edx = MEM32(ebp + (-0xC)); /* 0x1503A746: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1503A749: add eax, 0x10 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x20)); /* 0x1503A74C: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1503A74F: mov dword ptr [ebp - 0x24], eax */
L_1503A752:
    ebx = eax + (-0x10); /* 0x1503A752: lea ebx, [eax - 0x10] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1503A755: mov dword ptr [ebp - 0x38], ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1503A758: mov ebx, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax + (-0x10)), edx */ /* 0x1503A75B: cmp dword ptr [eax - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(eax + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503A803; /* 0x1503A75E: jg 0x1503a803 */
L_1503A764:
    /* cmp edx, MEM32(eax + (-0xC)) */ /* 0x1503A764: cmp edx, dword ptr [eax - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503A803; /* 0x1503A767: jg 0x1503a803 */
L_1503A76D:
    esi = MEM32(eax); /* 0x1503A76D: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1503A76F: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(eax + (-0x4)); /* 0x1503A772: mov esi, dword ptr [eax - 4] */
    /* test esi, esi */ /* 0x1503A775: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503A800; /* 0x1503A777: jle 0x1503a800 */
L_1503A77D:
    edx = MEM32(edi + 0x1C); /* 0x1503A77D: mov edx, dword ptr [edi + 0x1c] */
    eax = MEM32(edx + 0xC); /* 0x1503A780: mov eax, dword ptr [edx + 0xc] */
    ecx = MEM32(eax); /* 0x1503A783: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1503A785: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = ecx; /* 0x1503A788: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x34)) = eax; /* 0x1503A78B: mov dword ptr [ebp - 0x34], eax */
L_1503A78E:
    ecx = eax; /* 0x1503A78E: mov ecx, eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1503A790: mov eax, dword ptr [ebp - 0x30] */
    goto L_1503A7B4; /* 0x1503A793: jmp 0x1503a7b4 */
L_1503A795:
    PUSH32(esp, edx); /* 0x1503A795: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x1503A796: push dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1503A798: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1503AFE0); /* 0x1503A79B: call 0x1503afe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503A7A0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503A7A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A7CC; /* 0x1503A7A5: jne 0x1503a7cc */
L_1503A7A7:
    eax = MEM32(ebp + (-0x2C)); /* 0x1503A7A7: mov eax, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1503A7AA: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503A7AD: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edi + 0x1C); /* 0x1503A7AE: mov edx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1503A7B1: add ecx, 4 */
    _flag_k = FK_ADD;
L_1503A7B4:
    MEM32(ebp + (-0x2C)) = eax; /* 0x1503A7B4: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1503A7B7: mov dword ptr [ebp - 0x1c], ecx */
    /* test eax, eax */ /* 0x1503A7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1503A795; /* 0x1503A7BC: jg 0x1503a795 */
L_1503A7BE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 0x10u; /* 0x1503A7BE: add dword ptr [ebp - 0x14], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503A7C2: dec esi */
    _flag_k = FK_DEC;
    /* test esi, esi */ /* 0x1503A7C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503A7F7; /* 0x1503A7C5: jle 0x1503a7f7 */
L_1503A7C7:
    eax = MEM32(ebp + (-0x34)); /* 0x1503A7C7: mov eax, dword ptr [ebp - 0x34] */
    RECOMP_BACKEDGE();
    goto L_1503A78E; /* 0x1503A7CA: jmp 0x1503a78e */
L_1503A7CC:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1503A7CC: push dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1503A7CF: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1503A7D2: push dword ptr [ebp + 0x24] */
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1503A7D5: mov byte ptr [ebp - 1], 1 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A7D9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1503A7DC: push dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax)); /* 0x1503A7DF: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1503A7E1: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1503A7E4: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A7E5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1503A7E8: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503A7EB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503A7EE: push edi */
    RECOMP_CALL(sub_1503A463); /* 0x1503A7EF: call 0x1503a463 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1503A7F4: add esp, 0x2c */
    _flag_k = FK_ADD;
L_1503A7F7:
    edx = MEM32(ebp + (-0xC)); /* 0x1503A7F7: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1503A7FA: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x24)); /* 0x1503A7FD: mov eax, dword ptr [ebp - 0x24] */
L_1503A800:
    esi = MEM32(ebp + (-0x20)); /* 0x1503A800: mov esi, dword ptr [ebp - 0x20] */
L_1503A803:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503A803: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1503A804: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1503A807: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1503A80A: mov dword ptr [ebp - 0x24], eax */
    /* cmp ecx, esi */ /* 0x1503A80D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503A752; /* 0x1503A80F: jb 0x1503a752 */
L_1503A815:
    esi = MEM32(ebp + (-0x8)); /* 0x1503A815: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503A818: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503A81A:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x1503A81A: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A82A; /* 0x1503A81E: je 0x1503a82a */
L_1503A820:
    PUSH32(esp, 1); /* 0x1503A820: push 1 */
    PUSH32(esp, edi); /* 0x1503A822: push edi */
    RECOMP_CALL(sub_15039EA0); /* 0x1503A823: call 0x15039ea0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A828: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A829: pop ecx */
L_1503A82A:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503A82A: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A82E: jne 0x1503a891 */
L_1503A830:
    ecx = MEM32(ebp + 0x18); /* 0x1503A830: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x1503A833: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x1503A835: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x19930521u */ /* 0x1503A83A: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A83F: jb 0x1503a891 */
L_1503A841:
    eax = MEM32(ecx + 0x1C); /* 0x1503A841: mov eax, dword ptr [ecx + 0x1c] */
    /* test eax, eax */ /* 0x1503A844: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A85A; /* 0x1503A846: jne 0x1503a85a */
L_1503A848:
    /* test MEM8(ecx + 0x20), 4 */ /* 0x1503A848: test byte ptr [ecx + 0x20], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x20)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A84C: je 0x1503a891 */
L_1503A84E:
    /* cmp MEM8(ebp + (-0x28)), LO8(eax) */ /* 0x1503A84E: cmp byte ptr [ebp - 0x28], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A851: jne 0x1503a891 */
L_1503A853:
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1503A853: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A856: jne 0x1503a891 */
L_1503A858:
    goto L_1503A8D2; /* 0x1503A858: jmp 0x1503a8d2 */
L_1503A85A:
    /* test MEM8(ecx + 0x20), 4 */ /* 0x1503A85A: test byte ptr [ecx + 0x20], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x20)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A8D2; /* 0x1503A85E: jne 0x1503a8d2 */
L_1503A860:
    PUSH32(esp, eax); /* 0x1503A860: push eax */
    PUSH32(esp, edi); /* 0x1503A861: push edi */
    RECOMP_CALL(sub_1503AA79); /* 0x1503A862: call 0x1503aa79 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A867: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A868: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1503A869: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503A8D7; /* 0x1503A86B: je 0x1503a8d7 */
L_1503A86D:
    goto L_1503A891; /* 0x1503A86D: jmp 0x1503a891 */
L_1503A86F:
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x1503A86F: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503A891; /* 0x1503A872: jbe 0x1503a891 */
L_1503A874:
    /* cmp MEM8(ebp + 0x1C), LO8(ebx) */ /* 0x1503A874: cmp byte ptr [ebp + 0x1c], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A8D2; /* 0x1503A877: jne 0x1503a8d2 */
L_1503A879:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1503A879: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A87C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x1503A87F: push ecx */
    PUSH32(esp, eax); /* 0x1503A880: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A881: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1503A884: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503A885: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503A888: push edi */
    RECOMP_CALL(sub_1503A94C); /* 0x1503A889: call 0x1503a94c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503A88E: add esp, 0x20 */
    _flag_k = FK_ADD;
L_1503A891:
    /* test esi, esi */ /* 0x1503A891: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A89C; /* 0x1503A893: jne 0x1503a89c */
L_1503A895:
    RECOMP_CALL(sub_15068820); /* 0x1503A895: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A89A: mov esi, eax */
L_1503A89C:
    /* cmp MEM32(esi + 0x94), ebx */ /* 0x1503A89C: cmp dword ptr [esi + 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x94)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503A940; /* 0x1503A8A2: jne 0x1503a940 */
L_1503A8A8:
    edi = POP32_VAL(esp); /* 0x1503A8A8: pop edi */
    esi = POP32_VAL(esp); /* 0x1503A8A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503A8AA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503A8AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503A8AC: ret  */
L_1503A8AD:
    PUSH32(esp, 1); /* 0x1503A8AD: push 1 */
    PUSH32(esp, edi); /* 0x1503A8AF: push edi */
    RECOMP_CALL(sub_15039EA0); /* 0x1503A8B0: call 0x15039ea0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503A8B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503A8B6: pop ecx */
    PUSH32(esp, 0x15003F04u); /* 0x1503A8B7: push 0x15003f04 */
    ecx = ebp + (-0x44); /* 0x1503A8BC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1503A127); /* 0x1503A8BF: call 0x1503a127 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFD1Cu); /* 0x1503A8C4: push 0x150afd1c */
    eax = ebp + (-0x44); /* 0x1503A8C9: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1503A8CC: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1503A8CD: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
L_1503A8D2:
    RECOMP_CALL(sub_1503B0D0); /* 0x1503A8D2: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
L_1503A8D7:
    /* test esi, esi */ /* 0x1503A8D7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A8F8; /* 0x1503A8D9: jne 0x1503a8f8 */
L_1503A8DB:
    RECOMP_CALL(sub_15068820); /* 0x1503A8DB: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A8E0: mov esi, eax */
    /* test esi, esi */ /* 0x1503A8E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A8F8; /* 0x1503A8E4: jne 0x1503a8f8 */
L_1503A8E6:
    RECOMP_CALL(sub_15068820); /* 0x1503A8E6: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A8EB: mov esi, eax */
    /* test esi, esi */ /* 0x1503A8ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A8F8; /* 0x1503A8EF: jne 0x1503a8f8 */
L_1503A8F1:
    RECOMP_CALL(sub_15068820); /* 0x1503A8F1: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A8F6: mov esi, eax */
L_1503A8F8:
    MEM32(esi + 0x88) = edi; /* 0x1503A8F8: mov dword ptr [esi + 0x88], edi */
    /* test esi, esi */ /* 0x1503A8FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A909; /* 0x1503A900: jne 0x1503a909 */
L_1503A902:
    RECOMP_CALL(sub_15068820); /* 0x1503A902: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A907: mov esi, eax */
L_1503A909:
    eax = MEM32(ebp + (-0x10)); /* 0x1503A909: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x1503A90C: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x8C) = eax; /* 0x1503A910: mov dword ptr [esi + 0x8c], eax */
    esi = MEM32(ebp + 0xC); /* 0x1503A916: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x1503A919: mov eax, esi */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x24); } /* 0x1503A91B: cmovne eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x1503A91F: push edi */
    PUSH32(esp, eax); /* 0x1503A920: push eax */
    RECOMP_CALL(sub_1503BB27); /* 0x1503A921: call 0x1503bb27 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x1503A926: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503A929: push -1 */
    PUSH32(esp, ebx); /* 0x1503A92B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A92C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1503A92F: push esi */
    RECOMP_CALL(sub_1503ADC5); /* 0x1503A930: call 0x1503adc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503A935: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1503A938: push dword ptr [ebx + 0x1c] */
    RECOMP_CALL(sub_1503A405); /* 0x1503A93B: call 0x1503a405 */
    RECOMP_FLAGS_IN();
L_1503A940:
    RECOMP_CALL(sub_1503B080); /* 0x1503A940: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503A945u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503A94C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503A94Cu);

L_1503A94C:
    edi = edi; /* 0x1503A94C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503A94E: push ebp */
    ebp = esp; /* 0x1503A94F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503A951: push ecx */
    PUSH32(esp, ecx); /* 0x1503A952: push ecx */
    PUSH32(esp, edi); /* 0x1503A953: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503A954: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0x80000003u */ /* 0x1503A957: cmp dword ptr [edi], 0x80000003 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x80000003u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AA6A; /* 0x1503A95D: je 0x1503aa6a */
L_1503A963:
    PUSH32(esp, ebx); /* 0x1503A963: push ebx */
    PUSH32(esp, esi); /* 0x1503A964: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503A965: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x1503A96A: mov ebx, dword ptr [ebp + 0x18] */
    esi = eax; /* 0x1503A96D: mov esi, eax */
    /* cmp MEM32(esi + 0x80), 0 */ /* 0x1503A96F: cmp dword ptr [esi + 0x80], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x80)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A9C4; /* 0x1503A976: je 0x1503a9c4 */
L_1503A978:
    /* test esi, esi */ /* 0x1503A978: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503A983; /* 0x1503A97A: jne 0x1503a983 */
L_1503A97C:
    RECOMP_CALL(sub_15068820); /* 0x1503A97C: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503A981: mov esi, eax */
L_1503A983:
    PUSH32(esp, 0); /* 0x1503A983: push 0 */
    RECOMP_ICALL(MEM32(0x150C0298)); /* 0x1503A985: call dword ptr [0x150c0298] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x80), eax */ /* 0x1503A98B: cmp dword ptr [esi + 0x80], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x80)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A9C4; /* 0x1503A991: je 0x1503a9c4 */
L_1503A993:
    /* cmp MEM32(edi), 0xE0434F4Du */ /* 0x1503A993: cmp dword ptr [edi], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A9C4; /* 0x1503A999: je 0x1503a9c4 */
L_1503A99B:
    /* cmp MEM32(edi), 0xE0434352u */ /* 0x1503A99B: cmp dword ptr [edi], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503A9C4; /* 0x1503A9A1: je 0x1503a9c4 */
L_1503A9A3:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1503A9A3: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A9A6: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1503A9A9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503A9AA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503A9AD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503A9B0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503A9B3: push edi */
    RECOMP_CALL(sub_1503B96C); /* 0x1503A9B4: call 0x1503b96c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503A9B9: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503A9BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AA68; /* 0x1503A9BE: jne 0x1503aa68 */
L_1503A9C4:
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x1503A9C4: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AA6D; /* 0x1503A9C8: je 0x1503aa6d */
L_1503A9CE:
    eax = ebp + (-0x4); /* 0x1503A9CE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1503A9D1: push eax */
    eax = ebp + (-0x8); /* 0x1503A9D2: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503A9D5: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1503A9D6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503A9D9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1503A9DC: push ebx */
    RECOMP_CALL(sub_1503BA71); /* 0x1503A9DD: call 0x1503ba71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1503A9E2: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503A9E5: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1503A9E8: mov edx, dword ptr [ebp - 4] */
    /* cmp ecx, edx */ /* 0x1503A9EB: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503AA68; /* 0x1503A9ED: jae 0x1503aa68 */
L_1503A9EF:
    esi = eax + 0xC; /* 0x1503A9EF: lea esi, [eax + 0xc] */
    eax = MEM32(ebp + 0x1C); /* 0x1503A9F2: mov eax, dword ptr [ebp + 0x1c] */
L_1503A9F5:
    /* cmp eax, MEM32(esi + (-0xC)) */ /* 0x1503A9F5: cmp eax, dword ptr [esi - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503AA5D; /* 0x1503A9F8: jl 0x1503aa5d */
L_1503A9FA:
    /* cmp eax, MEM32(esi + (-0x8)) */ /* 0x1503A9FA: cmp eax, dword ptr [esi - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503AA5D; /* 0x1503A9FD: jg 0x1503aa5d */
L_1503A9FF:
    eax = MEM32(esi); /* 0x1503A9FF: mov eax, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x1503AA01: mov edi, dword ptr [esi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1503AA04: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1503AA04: shl eax, 4 */
    edi = MEM32(eax + edi + (-0xC)); /* 0x1503AA07: mov edi, dword ptr [eax + edi - 0xc] */
    /* test edi, edi */ /* 0x1503AA0B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AA22; /* 0x1503AA0D: je 0x1503aa22 */
L_1503AA0F:
    edx = MEM32(esi + 0x4); /* 0x1503AA0F: mov edx, dword ptr [esi + 4] */
    ebx = MEM32(eax + edx + (-0xC)); /* 0x1503AA12: mov ebx, dword ptr [eax + edx - 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x1503AA16: mov edx, dword ptr [ebp - 4] */
    /* cmp MEM8(ebx + 0x8), 0 */ /* 0x1503AA19: cmp byte ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + 0x18); /* 0x1503AA1D: mov ebx, dword ptr [ebp + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AA5A; /* 0x1503AA20: jne 0x1503aa5a */
L_1503AA22:
    edi = MEM32(esi + 0x4); /* 0x1503AA22: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF0u; /* 0x1503AA25: add edi, -0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1503AA28: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x1503AA2A: mov edi, dword ptr [ebp + 8] */
    /* test MEM8(eax), 0x40u */ /* 0x1503AA2D: test byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AA5A; /* 0x1503AA30: jne 0x1503aa5a */
L_1503AA32:
    PUSH32(esp, 1); /* 0x1503AA32: push 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1503AA34: push dword ptr [ebp + 0x24] */
    ecx = esi + (-0xC); /* 0x1503AA37: lea ecx, [esi - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503AA3A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x1503AA3D: push ecx */
    PUSH32(esp, 0); /* 0x1503AA3E: push 0 */
    PUSH32(esp, eax); /* 0x1503AA40: push eax */
    PUSH32(esp, ebx); /* 0x1503AA41: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503AA42: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AA45: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503AA48: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503AA4B: push edi */
    RECOMP_CALL(sub_1503A463); /* 0x1503AA4C: call 0x1503a463 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1503AA51: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1503AA54: add esp, 0x2c */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x1503AA57: mov ecx, dword ptr [ebp - 8] */
L_1503AA5A:
    eax = MEM32(ebp + 0x1C); /* 0x1503AA5A: mov eax, dword ptr [ebp + 0x1c] */
L_1503AA5D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503AA5D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1503AA5E: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1503AA61: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, edx */ /* 0x1503AA64: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503A9F5; /* 0x1503AA66: jb 0x1503a9f5 */
L_1503AA68:
    esi = POP32_VAL(esp); /* 0x1503AA68: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503AA69: pop ebx */
L_1503AA6A:
    edi = POP32_VAL(esp); /* 0x1503AA6A: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503AA6B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AA6C: ret  */
L_1503AA6D:
    RECOMP_CALL(sub_1503B080); /* 0x1503AA6D: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503AA72u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503AA79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AA79u);

L_1503AA79:
    edi = edi; /* 0x1503AA79: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AA7B: push ebp */
    ebp = esp; /* 0x1503AA7C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1503AA7E: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503AA81: push ebx */
    PUSH32(esp, esi); /* 0x1503AA82: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503AA83: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503AA86: push edi */
    /* test esi, esi */ /* 0x1503AA87: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AB0F; /* 0x1503AA89: je 0x1503ab0f */
L_1503AA8F:
    edi = MEM32(esi); /* 0x1503AA8F: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503AA91: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503AA93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503AB08; /* 0x1503AA95: jle 0x1503ab08 */
L_1503AA97:
    eax = MEM32(ebp + 0x8); /* 0x1503AA97: mov eax, dword ptr [ebp + 8] */
    edx = ebx; /* 0x1503AA9A: mov edx, ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503AA9C: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(eax + 0x1C); /* 0x1503AA9F: mov eax, dword ptr [eax + 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1503AAA2: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(eax + 0xC); /* 0x1503AAA5: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1503AAA8: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1503AAAA: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1503AAAD: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1503AAB0: mov dword ptr [ebp - 0x1c], eax */
L_1503AAB3:
    ecx = eax; /* 0x1503AAB3: mov ecx, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1503AAB5: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1503AAB8: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1503AABB: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1503AABE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503AAFA; /* 0x1503AAC0: jle 0x1503aafa */
L_1503AAC2:
    eax = MEM32(esi + 0x4); /* 0x1503AAC2: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1503AAC5: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x1503AAC7: mov dword ptr [ebp - 0x18], eax */
L_1503AACA:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1503AACA: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ecx)); /* 0x1503AACD: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1503AACF: push eax */
    RECOMP_CALL(sub_1503AFE0); /* 0x1503AAD0: call 0x1503afe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503AAD5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503AAD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AAF5; /* 0x1503AADA: jne 0x1503aaf5 */
L_1503AADC:
    eax = MEM32(ebp + (-0x8)); /* 0x1503AADC: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1503AADF: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503AAE2: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1503AAE3: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503AAE6: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1503AAE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1503AAEB: mov dword ptr [ebp - 0xc], ecx */
    eax = MEM32(ebp + (-0x18)); /* 0x1503AAEE: mov eax, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1503AACA; /* 0x1503AAF1: jg 0x1503aaca */
L_1503AAF3:
    goto L_1503AAF7; /* 0x1503AAF3: jmp 0x1503aaf7 */
L_1503AAF5:
    SET_LO8(ebx, 1); /* 0x1503AAF5: mov bl, 1 */
L_1503AAF7:
    edx = MEM32(ebp + (-0x4)); /* 0x1503AAF7: mov edx, dword ptr [ebp - 4] */
L_1503AAFA:
    eax = MEM32(ebp + (-0x1C)); /* 0x1503AAFA: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1503AAFD: add edx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x1503AB00: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1503AB03: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503AAB3; /* 0x1503AB06: jne 0x1503aab3 */
L_1503AB08:
    edi = POP32_VAL(esp); /* 0x1503AB08: pop edi */
    esi = POP32_VAL(esp); /* 0x1503AB09: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1503AB0A: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1503AB0C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503AB0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AB0E: ret  */
L_1503AB0F:
    RECOMP_CALL(sub_1503B080); /* 0x1503AB0F: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503AB14u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503AB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AB20u);

L_1503AB20:
    edi = edi; /* 0x1503AB20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AB22: push ebp */
    ebp = esp; /* 0x1503AB23: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AB25: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1503AB28: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x1503AB2B: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1503AB2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1503AB2F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1503AB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AB40u);

L_1503AB40:
    edi = edi; /* 0x1503AB40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AB42: push ebp */
    ebp = esp; /* 0x1503AB43: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503AB45: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1503AB48: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AB4B: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x1503AB4E: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1503AB51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1503AB52: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1503AB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AB60u);

L_1503AB60:
    edi = edi; /* 0x1503AB60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AB62: push ebp */
    ebp = esp; /* 0x1503AB63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1503AB65: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1503AB68: push ecx */
    ecx = ebp + (-0xC); /* 0x1503AB69: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503A100); /* 0x1503AB6C: call 0x1503a100 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFD1Cu); /* 0x1503AB71: push 0x150afd1c */
    eax = ebp + (-0xC); /* 0x1503AB76: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503AB79: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1503AB7A: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503AB7Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503AB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AB90u);

L_1503AB90:
    PUSH32(esp, 8); /* 0x1503AB90: push 8 */
    PUSH32(esp, 0x150AFC38u); /* 0x1503AB92: push 0x150afc38 */
    RECOMP_CALL(sub_1505E988); /* 0x1503AB97: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x1503AB9C: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1503AB9F: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edx), 0 */ /* 0x1503ABA2: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503ABAB; /* 0x1503ABA5: jge 0x1503abab */
L_1503ABA7:
    edi = ecx; /* 0x1503ABA7: mov edi, ecx */
    goto L_1503ABB1; /* 0x1503ABA9: jmp 0x1503abb1 */
L_1503ABAB:
    edi = ecx + 0xC; /* 0x1503ABAB: lea edi, [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(edx + 0x8); /* 0x1503ABAE: add edi, dword ptr [edx + 8] */
    _flag_k = FK_ADD;
L_1503ABB1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503ABB1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x1503ABB5: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1503ABB8: push esi */
    PUSH32(esp, edx); /* 0x1503ABB9: push edx */
    PUSH32(esp, ecx); /* 0x1503ABBA: push ecx */
    ebx = MEM32(ebp + 0x8); /* 0x1503ABBB: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1503ABBE: push ebx */
    RECOMP_CALL(sub_1503AC30); /* 0x1503ABBF: call 0x1503ac30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503ABC4: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503ABC7: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503ABED; /* 0x1503ABCA: je 0x1503abed */
L_1503ABCC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503ABCC: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503AC05; /* 0x1503ABCF: jne 0x1503ac05 */
L_1503ABD1:
    eax = esi + 0x8; /* 0x1503ABD1: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1503ABD4: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1503ABD5: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_1503A070); /* 0x1503ABD8: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503ABDD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503ABDE: pop ecx */
    PUSH32(esp, 1); /* 0x1503ABDF: push 1 */
    PUSH32(esp, eax); /* 0x1503ABE1: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1503ABE2: push dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x1503ABE5: push edi */
    RECOMP_CALL(sub_1503AB40); /* 0x1503ABE6: call 0x1503ab40 */
    RECOMP_FLAGS_IN();
    goto L_1503AC05; /* 0x1503ABEB: jmp 0x1503ac05 */
L_1503ABED:
    eax = esi + 0x8; /* 0x1503ABED: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1503ABF0: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1503ABF1: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_1503A070); /* 0x1503ABF4: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503ABF9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503ABFA: pop ecx */
    PUSH32(esp, eax); /* 0x1503ABFB: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1503ABFC: push dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x1503ABFF: push edi */
    RECOMP_CALL(sub_1503AB20); /* 0x1503AC00: call 0x1503ab20 */
    RECOMP_FLAGS_IN();
L_1503AC05:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503AC05: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503AC0C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503AC0F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503AC16: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503AC17: pop edi */
    esi = POP32_VAL(esp); /* 0x1503AC18: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503AC19: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503AC1A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AC1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503AC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AC30u);

L_1503AC30:
    PUSH32(esp, 0xCu); /* 0x1503AC30: push 0xc */
    PUSH32(esp, 0x150AFD00u); /* 0x1503AC32: push 0x150afd00 */
    RECOMP_CALL(sub_1505E988); /* 0x1503AC37: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503AC3C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x1503AC3E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x1503AC41: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x1503AC44: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AD9F; /* 0x1503AC46: je 0x1503ad9f */
L_1503AC4C:
    /* cmp MEM8(ecx + 0x8), LO8(ebx) */ /* 0x1503AC4C: cmp byte ptr [ecx + 8], bl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AD9F; /* 0x1503AC4F: je 0x1503ad9f */
L_1503AC55:
    ecx = MEM32(eax + 0x8); /* 0x1503AC55: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x1503AC58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AC64; /* 0x1503AC5A: jne 0x1503ac64 */
L_1503AC5C:
    /* cmp MEM32(eax), ebx */ /* 0x1503AC5C: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503AD9F; /* 0x1503AC5E: jge 0x1503ad9f */
L_1503AC64:
    edx = MEM32(eax); /* 0x1503AC64: mov edx, dword ptr [eax] */
    esi = MEM32(ebp + 0xC); /* 0x1503AC66: mov esi, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1503AC69: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503AC72; /* 0x1503AC6B: js 0x1503ac72 */
L_1503AC6D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1503AC6D: add esi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1503AC70: add esi, ecx */
    _flag_k = FK_ADD;
L_1503AC72:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503AC72: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, 1); /* 0x1503AC75: push 1 */
    /* test LO8(edx), 8 */ /* 0x1503AC77: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ACB2; /* 0x1503AC7A: je 0x1503acb2 */
L_1503AC7C:
    edi = MEM32(ebp + 0x8); /* 0x1503AC7C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1503AC7F: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_15041E00); /* 0x1503AC82: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AC87: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AC88: pop ecx */
    /* test eax, eax */ /* 0x1503AC89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AC8B: je 0x1503adb1 */
L_1503AC91:
    PUSH32(esp, 1); /* 0x1503AC91: push 1 */
    PUSH32(esp, esi); /* 0x1503AC93: push esi */
    RECOMP_CALL(sub_15041E00); /* 0x1503AC94: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AC99: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AC9A: pop ecx */
    /* test eax, eax */ /* 0x1503AC9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AC9D: je 0x1503adb1 */
L_1503ACA3:
    ecx = MEM32(edi + 0x18); /* 0x1503ACA3: mov ecx, dword ptr [edi + 0x18] */
    MEM32(esi) = ecx; /* 0x1503ACA6: mov dword ptr [esi], ecx */
    eax = MEM32(ebp + 0x14); /* 0x1503ACA8: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503ACAB: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503ACAE: push eax */
    PUSH32(esp, ecx); /* 0x1503ACAF: push ecx */
    goto L_1503AD0C; /* 0x1503ACB0: jmp 0x1503ad0c */
L_1503ACB2:
    edi = MEM32(ebp + 0x14); /* 0x1503ACB2: mov edi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1503ACB5: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(edi), 1 */ /* 0x1503ACB8: test byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AD17; /* 0x1503ACBB: je 0x1503ad17 */
L_1503ACBD:
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503ACBD: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_15041E00); /* 0x1503ACC0: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503ACC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503ACC6: pop ecx */
    /* test eax, eax */ /* 0x1503ACC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503ACC9: je 0x1503adb1 */
L_1503ACCF:
    PUSH32(esp, 1); /* 0x1503ACCF: push 1 */
    PUSH32(esp, esi); /* 0x1503ACD1: push esi */
    RECOMP_CALL(sub_15041E00); /* 0x1503ACD2: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503ACD7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503ACD8: pop ecx */
    /* test eax, eax */ /* 0x1503ACD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503ACDB: je 0x1503adb1 */
L_1503ACE1:
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1503ACE1: push dword ptr [edi + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1503ACE4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503ACE7: push dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x1503ACEA: push esi */
    RECOMP_CALL(sub_1508E000); /* 0x1503ACEB: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503ACF0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x14), 4 */ /* 0x1503ACF3: cmp dword ptr [edi + 0x14], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AD90; /* 0x1503ACF7: jne 0x1503ad90 */
L_1503ACFD:
    /* cmp MEM32(esi), 0 */ /* 0x1503ACFD: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AD90; /* 0x1503AD00: je 0x1503ad90 */
L_1503AD06:
    eax = edi + 0x8; /* 0x1503AD06: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1503AD09: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1503AD0A: push dword ptr [esi] */
L_1503AD0C:
    RECOMP_CALL(sub_1503A070); /* 0x1503AD0C: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD11: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD12: pop ecx */
    MEM32(esi) = eax; /* 0x1503AD13: mov dword ptr [esi], eax */
    goto L_1503AD90; /* 0x1503AD15: jmp 0x1503ad90 */
L_1503AD17:
    eax = MEM32(eax + 0x18); /* 0x1503AD17: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x1503AD1A: push eax */
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x1503AD1B: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AD5D; /* 0x1503AD1E: jne 0x1503ad5d */
L_1503AD20:
    RECOMP_CALL(sub_15041E00); /* 0x1503AD20: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD25: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD26: pop ecx */
    /* test eax, eax */ /* 0x1503AD27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AD29: je 0x1503adb1 */
L_1503AD2F:
    PUSH32(esp, 1); /* 0x1503AD2F: push 1 */
    PUSH32(esp, esi); /* 0x1503AD31: push esi */
    RECOMP_CALL(sub_15041E00); /* 0x1503AD32: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD37: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD38: pop ecx */
    /* test eax, eax */ /* 0x1503AD39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AD3B: je 0x1503adb1 */
L_1503AD3D:
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1503AD3D: push dword ptr [edi + 0x14] */
    eax = edi + 0x8; /* 0x1503AD40: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1503AD43: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1503AD44: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503AD47: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_1503A070); /* 0x1503AD4A: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD50: pop ecx */
    PUSH32(esp, eax); /* 0x1503AD51: push eax */
    PUSH32(esp, esi); /* 0x1503AD52: push esi */
    RECOMP_CALL(sub_1508E000); /* 0x1503AD53: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503AD58: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503AD90; /* 0x1503AD5B: jmp 0x1503ad90 */
L_1503AD5D:
    RECOMP_CALL(sub_15041E00); /* 0x1503AD5D: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD62: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD63: pop ecx */
    /* test eax, eax */ /* 0x1503AD64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AD66: je 0x1503adb1 */
L_1503AD68:
    PUSH32(esp, 1); /* 0x1503AD68: push 1 */
    PUSH32(esp, esi); /* 0x1503AD6A: push esi */
    RECOMP_CALL(sub_15041E00); /* 0x1503AD6B: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD70: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503AD71: pop ecx */
    /* test eax, eax */ /* 0x1503AD72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AD74: je 0x1503adb1 */
L_1503AD76:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1503AD76: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_15041E00); /* 0x1503AD79: call 0x15041e00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AD7E: pop ecx */
    /* test eax, eax */ /* 0x1503AD7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ADB1; /* 0x1503AD81: je 0x1503adb1 */
L_1503AD83:
    /* test MEM8(edi), 4 */ /* 0x1503AD83: test byte ptr [edi], 4 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1503AD86: push 0 */
    ebx = POP32_VAL(esp); /* 0x1503AD88: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503AD89: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503AD8C: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1503AD8D: mov dword ptr [ebp - 0x1c], ebx */
L_1503AD90:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503AD90: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = ebx; /* 0x1503AD97: mov eax, ebx */
    goto L_1503ADA1; /* 0x1503AD99: jmp 0x1503ada1 */
L_1503AD9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503AD9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503ADA1:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503ADA1: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503ADA4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503ADAB: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503ADAC: pop edi */
    esi = POP32_VAL(esp); /* 0x1503ADAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503ADAE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503ADAF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503ADB0: ret  */
L_1503ADB1:
    RECOMP_CALL(sub_1503B080); /* 0x1503ADB1: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    esp = MEM32(ebp + (-0x18)); /* 0x1503ADB6: mov esp, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1503B0D0); /* 0x1503ADB9: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503ADBEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503ADC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503ADC5u);

L_1503ADC5:
    PUSH32(esp, 0x1Cu); /* 0x1503ADC5: push 0x1c */
    PUSH32(esp, 0x150AFC58u); /* 0x1503ADC7: push 0x150afc58 */
    RECOMP_CALL(sub_1505E988); /* 0x1503ADCC: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1503ADD1: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1503ADD4: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1503ADD7: mov dword ptr [ebp - 0x28], ecx */
    esi = MEM32(ebp + 0x8); /* 0x1503ADDA: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1503ADDD: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = esi; /* 0x1503ADE0: mov dword ptr [ebp - 0x24], esi */
    /* cmp MEM32(ecx), 0x80u */ /* 0x1503ADE3: cmp dword ptr [ecx], 0x80 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503ADF0; /* 0x1503ADE9: jg 0x1503adf0 */
L_1503ADEB:
    esi = (int32_t)(int8_t)MEM8(esi); /* 0x1503ADEB: movsx esi, byte ptr [esi] */
    goto L_1503ADF2; /* 0x1503ADEE: jmp 0x1503adf2 */
L_1503ADF0:
    esi = MEM32(esi); /* 0x1503ADF0: mov esi, dword ptr [esi] */
L_1503ADF2:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503ADF2: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_15068820); /* 0x1503ADF5: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503ADFA: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1503ADFC: mov dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x90) = MEM32(edi + 0x90) + 1; /* 0x1503ADFF: inc dword ptr [edi + 0x90] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503AE05: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503AE09:
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1503AE09: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AE77; /* 0x1503AE0C: je 0x1503ae77 */
L_1503AE0E:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1503AE0E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503AEC9; /* 0x1503AE11: jle 0x1503aec9 */
L_1503AE17:
    eax = MEM32(ebp + (-0x28)); /* 0x1503AE17: mov eax, dword ptr [ebp - 0x28] */
    /* cmp esi, MEM32(eax) */ /* 0x1503AE1A: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503AEC9; /* 0x1503AE1C: jge 0x1503aec9 */
L_1503AE22:
    ecx = MEM32(ebp + 0x10); /* 0x1503AE22: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x8); /* 0x1503AE25: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(eax + esi * 8); /* 0x1503AE28: mov edx, dword ptr [eax + esi*8] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1503AE2B: mov dword ptr [ebp - 0x2c], edx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1503AE2E: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(eax + esi * 8 + 0x4), 0 */ /* 0x1503AE35: cmp dword ptr [eax + esi*8 + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AE55; /* 0x1503AE3A: je 0x1503ae55 */
L_1503AE3C:
    eax = MEM32(ebp + (-0x24)); /* 0x1503AE3C: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax) = edx; /* 0x1503AE3F: mov dword ptr [eax], edx */
    PUSH32(esp, 0x103u); /* 0x1503AE41: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503AE46: push dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x8); /* 0x1503AE49: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + esi * 8 + 0x4)); /* 0x1503AE4C: push dword ptr [eax + esi*8 + 4] */
    RECOMP_CALL(sub_15041E20); /* 0x1503AE50: call 0x15041e20 */
    RECOMP_FLAGS_IN();
L_1503AE55:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503AE55: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503AE6F; /* 0x1503AE59: jmp 0x1503ae6f */
L_1503AE6F:
    esi = MEM32(ebp + (-0x2C)); /* 0x1503AE6F: mov esi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503AE72: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_1503AE09; /* 0x1503AE75: jmp 0x1503ae09 */
L_1503AE77:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503AE77: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1503AEA3); /* 0x1503AE7E: call 0x1503aea3 */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1503AE83: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AEC9; /* 0x1503AE86: jne 0x1503aec9 */
L_1503AE88:
    eax = MEM32(ebp + (-0x24)); /* 0x1503AE88: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax) = esi; /* 0x1503AE8B: mov dword ptr [eax], esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503AE8D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503AE90: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503AE97: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503AE98: pop edi */
    esi = POP32_VAL(esp); /* 0x1503AE99: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503AE9A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503AE9B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AE9C: ret  */
L_1503AEC9:
    RECOMP_CALL(sub_1503B080); /* 0x1503AEC9: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503AECEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503AEA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AEA3u);

L_1503AEA3:
    /* test edi, edi */ /* 0x1503AEA3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AEAE; /* 0x1503AEA5: jne 0x1503aeae */
L_1503AEA7:
    RECOMP_CALL(sub_15068820); /* 0x1503AEA7: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503AEAC: mov edi, eax */
L_1503AEAE:
    /* cmp MEM32(edi + 0x90), 0 */ /* 0x1503AEAE: cmp dword ptr [edi + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503AEC8; /* 0x1503AEB5: jle 0x1503aec8 */
L_1503AEB7:
    /* test edi, edi */ /* 0x1503AEB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AEC2; /* 0x1503AEB9: jne 0x1503aec2 */
L_1503AEBB:
    RECOMP_CALL(sub_15068820); /* 0x1503AEBB: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503AEC0: mov edi, eax */
L_1503AEC2:
    _flag_a = (uint32_t)(MEM32(edi + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x90) = MEM32(edi + 0x90) - 1; /* 0x1503AEC2: dec dword ptr [edi + 0x90] */
    _flag_k = FK_DEC;
L_1503AEC8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AEC8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503AED5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AED5u);

L_1503AED5:
    edi = edi; /* 0x1503AED5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AED7: push ebp */
    ebp = esp; /* 0x1503AED8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503AEDA: push ebx */
    PUSH32(esp, esi); /* 0x1503AEDB: push esi */
    PUSH32(esp, edi); /* 0x1503AEDC: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AEDD: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1505EA7B); /* 0x1503AEE0: call 0x1505ea7b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503AEE5: pop ecx */
    RECOMP_CALL(sub_15068820); /* 0x1503AEE6: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x1503AEEB: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503AEEE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1503AEF0: mov edx, dword ptr [ebp + 8] */
    ebx = 0x1FFFFFFFu; /* 0x1503AEF3: mov ebx, 0x1fffffff */
    edi = 0x19930522u; /* 0x1503AEF8: mov edi, 0x19930522 */
    /* cmp MEM32(eax + 0x20C), esi */ /* 0x1503AEFD: cmp dword ptr [eax + 0x20c], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x20C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AF27; /* 0x1503AF03: jne 0x1503af27 */
L_1503AF05:
    /* cmp MEM32(edx), 0xE06D7363u */ /* 0x1503AF05: cmp dword ptr [edx], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AF27; /* 0x1503AF0B: je 0x1503af27 */
L_1503AF0D:
    /* cmp MEM32(edx), 0x80000026u */ /* 0x1503AF0D: cmp dword ptr [edx], 0x80000026 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x80000026u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AF27; /* 0x1503AF13: je 0x1503af27 */
L_1503AF15:
    eax = MEM32(ecx); /* 0x1503AF15: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1503AF17: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1503AF19: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503AF27; /* 0x1503AF1B: jb 0x1503af27 */
L_1503AF1D:
    /* test MEM8(ecx + 0x20), 1 */ /* 0x1503AF1D: test byte ptr [ecx + 0x20], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x20)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503AFCF; /* 0x1503AF21: jne 0x1503afcf */
L_1503AF27:
    /* test MEM8(edx + 0x4), 0x66u */ /* 0x1503AF27: test byte ptr [edx + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AF52; /* 0x1503AF2B: je 0x1503af52 */
L_1503AF2D:
    /* cmp MEM32(ecx + 0x4), esi */ /* 0x1503AF2D: cmp dword ptr [ecx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503AFCF; /* 0x1503AF30: je 0x1503afcf */
L_1503AF36:
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x1503AF36: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AFCF; /* 0x1503AF39: jne 0x1503afcf */
L_1503AF3F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503AF3F: push -1 */
    PUSH32(esp, ecx); /* 0x1503AF41: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503AF42: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503AF45: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503ADC5); /* 0x1503AF48: call 0x1503adc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503AF4D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1503AFCF; /* 0x1503AF50: jmp 0x1503afcf */
L_1503AF52:
    /* cmp MEM32(ecx + 0xC), esi */ /* 0x1503AF52: cmp dword ptr [ecx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AF71; /* 0x1503AF55: jne 0x1503af71 */
L_1503AF57:
    eax = MEM32(ecx); /* 0x1503AF57: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1503AF59: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x19930521u */ /* 0x1503AF5B: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503AF67; /* 0x1503AF60: jb 0x1503af67 */
L_1503AF62:
    /* cmp MEM32(ecx + 0x1C), esi */ /* 0x1503AF62: cmp dword ptr [ecx + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AF71; /* 0x1503AF65: jne 0x1503af71 */
L_1503AF67:
    /* cmp eax, edi */ /* 0x1503AF67: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503AFCF; /* 0x1503AF69: jb 0x1503afcf */
L_1503AF6B:
    /* test MEM8(ecx + 0x20), 4 */ /* 0x1503AF6B: test byte ptr [ecx + 0x20], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x20)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AFCF; /* 0x1503AF6F: je 0x1503afcf */
L_1503AF71:
    /* cmp MEM32(edx), 0xE06D7363u */ /* 0x1503AF71: cmp dword ptr [edx], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503AFB3; /* 0x1503AF77: jne 0x1503afb3 */
L_1503AF79:
    /* cmp MEM32(edx + 0x10), 3 */ /* 0x1503AF79: cmp dword ptr [edx + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503AFB3; /* 0x1503AF7D: jb 0x1503afb3 */
L_1503AF7F:
    /* cmp MEM32(edx + 0x14), edi */ /* 0x1503AF7F: cmp dword ptr [edx + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503AFB3; /* 0x1503AF82: jbe 0x1503afb3 */
L_1503AF84:
    eax = MEM32(edx + 0x1C); /* 0x1503AF84: mov eax, dword ptr [edx + 0x1c] */
    esi = MEM32(eax + 0x8); /* 0x1503AF87: mov esi, dword ptr [eax + 8] */
    /* test esi, esi */ /* 0x1503AF8A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503AFB3; /* 0x1503AF8C: je 0x1503afb3 */
L_1503AF8E:
    eax = (uint32_t)MEM8(ebp + 0x24); /* 0x1503AF8E: movzx eax, byte ptr [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x1503AF92: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503AF93: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1503AF96: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1503AF99: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503AF9A: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1503AF9D: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AF9F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503AFA2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1503AFA5: push edx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503AFA6: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503AFAC: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503AFAE: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_1503AFD2; /* 0x1503AFB1: jmp 0x1503afd2 */
L_1503AFB3:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1503AFB3: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1503AFB6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1503AFB9: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ecx); /* 0x1503AFBC: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503AFBD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503AFC0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503AFC3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1503AFC6: push edx */
    RECOMP_CALL(sub_1503A53A); /* 0x1503AFC7: call 0x1503a53a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503AFCC: add esp, 0x20 */
    _flag_k = FK_ADD;
L_1503AFCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503AFCF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503AFD1: inc eax */
    _flag_k = FK_INC;
L_1503AFD2:
    edi = POP32_VAL(esp); /* 0x1503AFD2: pop edi */
    esi = POP32_VAL(esp); /* 0x1503AFD3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503AFD4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503AFD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503AFD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503AFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503AFE0u);

L_1503AFE0:
    edi = edi; /* 0x1503AFE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503AFE2: push ebp */
    ebp = esp; /* 0x1503AFE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503AFE5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1503AFE6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1503AFE9: push ebx */
    PUSH32(esp, esi); /* 0x1503AFEA: push esi */
    PUSH32(esp, edi); /* 0x1503AFEB: push edi */
    eax = MEM32(ecx + 0x4); /* 0x1503AFEC: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x1503AFEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B06F; /* 0x1503AFF1: je 0x1503b06f */
L_1503AFF3:
    edx = eax + 0x8; /* 0x1503AFF3: lea edx, [eax + 8] */
    /* cmp MEM8(edx), 0 */ /* 0x1503AFF6: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B06F; /* 0x1503AFF9: je 0x1503b06f */
L_1503AFFB:
    ebx = MEM32(ebp + 0xC); /* 0x1503AFFB: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503AFFE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebx + 0x4); /* 0x1503B000: mov edi, dword ptr [ebx + 4] */
    /* cmp eax, edi */ /* 0x1503B003: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B047; /* 0x1503B005: je 0x1503b047 */
L_1503B007:
    eax = edi + 0x8; /* 0x1503B007: lea eax, [edi + 8] */
L_1503B00A:
    SET_LO8(ecx, MEM8(edx)); /* 0x1503B00A: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1503B00C: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1503B00E: mov byte ptr [ebp - 1], cl */
    ecx = MEM32(ebp + 0x8); /* 0x1503B011: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B03A; /* 0x1503B014: jne 0x1503b03a */
L_1503B016:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503B016: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B036; /* 0x1503B01A: je 0x1503b036 */
L_1503B01C:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x1503B01C: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x1503B01F: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1503B022: mov byte ptr [ebp - 1], bl */
    ebx = MEM32(ebp + 0xC); /* 0x1503B025: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B03A; /* 0x1503B028: jne 0x1503b03a */
L_1503B02A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1503B02A: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503B02D: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503B030: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B00A; /* 0x1503B034: jne 0x1503b00a */
L_1503B036:
    eax = esi; /* 0x1503B036: mov eax, esi */
    goto L_1503B03F; /* 0x1503B038: jmp 0x1503b03f */
L_1503B03A:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503B03A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503B03C: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503B03F:
    /* test eax, eax */ /* 0x1503B03F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B047; /* 0x1503B041: je 0x1503b047 */
L_1503B043:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B043: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503B072; /* 0x1503B045: jmp 0x1503b072 */
L_1503B047:
    /* test MEM8(ebx), 2 */ /* 0x1503B047: test byte ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B051; /* 0x1503B04A: je 0x1503b051 */
L_1503B04C:
    /* test MEM8(ecx), 8 */ /* 0x1503B04C: test byte ptr [ecx], 8 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B06B; /* 0x1503B04F: je 0x1503b06b */
L_1503B051:
    eax = MEM32(ebp + 0x10); /* 0x1503B051: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax), 1 */ /* 0x1503B054: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B05E; /* 0x1503B057: je 0x1503b05e */
L_1503B059:
    /* test MEM8(ecx), 1 */ /* 0x1503B059: test byte ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B06B; /* 0x1503B05C: je 0x1503b06b */
L_1503B05E:
    /* test MEM8(eax), 2 */ /* 0x1503B05E: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B068; /* 0x1503B061: je 0x1503b068 */
L_1503B063:
    /* test MEM8(ecx), 2 */ /* 0x1503B063: test byte ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B06B; /* 0x1503B066: je 0x1503b06b */
L_1503B068:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503B068: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503B06A: inc esi */
    _flag_k = FK_INC;
L_1503B06B:
    eax = esi; /* 0x1503B06B: mov eax, esi */
    goto L_1503B072; /* 0x1503B06D: jmp 0x1503b072 */
L_1503B06F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B06F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B071: inc eax */
    _flag_k = FK_INC;
L_1503B072:
    edi = POP32_VAL(esp); /* 0x1503B072: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B073: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B074: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B075: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B076: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B080u);

L_1503B080:
    PUSH32(esp, 8); /* 0x1503B080: push 8 */
    PUSH32(esp, 0x150AFD90u); /* 0x1503B082: push 0x150afd90 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B087: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BDB18)); /* 0x1503B08C: push dword ptr [0x150bdb18] */
    RECOMP_CALL(sub_1506863C); /* 0x1503B092: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B097: pop ecx */
    esi = eax; /* 0x1503B098: mov esi, eax */
    /* test esi, esi */ /* 0x1503B09A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B0BC; /* 0x1503B09C: je 0x1503b0bc */
L_1503B09E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B09E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1503B0A2: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B0A4: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503B0AA: call esi */
    RECOMP_FLAGS_IN();
    goto L_1503B0B5; /* 0x1503B0AC: jmp 0x1503b0b5 */
L_1503B0B5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B0B5: mov dword ptr [ebp - 4], 0xfffffffe */
L_1503B0BC:
    RECOMP_CALL(sub_1503B0D0); /* 0x1503B0BC: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503B0C1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503B0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B0D0u);

L_1503B0D0:
    PUSH32(esp, 8); /* 0x1503B0D0: push 8 */
    PUSH32(esp, 0x150AFD70u); /* 0x1503B0D2: push 0x150afd70 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B0D7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x1503B0DC: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x78); /* 0x1503B0E1: mov esi, dword ptr [eax + 0x78] */
    /* test esi, esi */ /* 0x1503B0E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B106; /* 0x1503B0E6: je 0x1503b106 */
L_1503B0E8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B0E8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1503B0EC: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B0EE: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503B0F4: call esi */
    RECOMP_FLAGS_IN();
    goto L_1503B0FF; /* 0x1503B0F6: jmp 0x1503b0ff */
L_1503B0FF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B0FF: mov dword ptr [ebp - 4], 0xfffffffe */
L_1503B106:
    RECOMP_CALL(sub_1505D3B0); /* 0x1503B106: call 0x1505d3b0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503B10Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503B120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B120u);

L_1503B120:
    edi = edi; /* 0x1503B120: mov edi, edi */
    PUSH32(esp, esi); /* 0x1503B122: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503B123: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x7C); /* 0x1503B128: mov esi, dword ptr [eax + 0x7c] */
    /* test esi, esi */ /* 0x1503B12B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B139; /* 0x1503B12D: je 0x1503b139 */
L_1503B12F:
    ecx = esi; /* 0x1503B12F: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B131: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503B137: call esi */
    RECOMP_FLAGS_IN();
L_1503B139:
    RECOMP_CALL(sub_1503B0D0); /* 0x1503B139: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503B13Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503B145(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B145u);

L_1503B145:
    PUSH32(esp, 0x1503B0D0u); /* 0x1503B145: push 0x1503b0d0 */
    RECOMP_CALL(sub_15068652); /* 0x1503B14A: call 0x15068652 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B14F: pop ecx */
    MEM32(0x150BDB18) = eax; /* 0x1503B150: mov dword ptr [0x150bdb18], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B155: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B160u);

L_1503B160:
    edi = edi; /* 0x1503B160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B162: push ebp */
    ebp = esp; /* 0x1503B163: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503B165: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503B166: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x80); /* 0x1503B16B: mov esi, dword ptr [eax + 0x80] */
    /* test eax, eax */ /* 0x1503B171: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B17A; /* 0x1503B173: jne 0x1503b17a */
L_1503B175:
    RECOMP_CALL(sub_15068820); /* 0x1503B175: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503B17A:
    ecx = MEM32(ebp + 0x8); /* 0x1503B17A: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x80) = ecx; /* 0x1503B17D: mov dword ptr [eax + 0x80], ecx */
    eax = esi; /* 0x1503B183: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503B185: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503B186: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B187: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B190u);

L_1503B190:
    edi = edi; /* 0x1503B190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B192: push ebp */
    ebp = esp; /* 0x1503B193: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503B195: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503B196: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x78); /* 0x1503B19B: mov esi, dword ptr [eax + 0x78] */
    /* test eax, eax */ /* 0x1503B19E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B1A7; /* 0x1503B1A0: jne 0x1503b1a7 */
L_1503B1A2:
    RECOMP_CALL(sub_15068820); /* 0x1503B1A2: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503B1A7:
    ecx = MEM32(ebp + 0x8); /* 0x1503B1A7: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x78) = ecx; /* 0x1503B1AA: mov dword ptr [eax + 0x78], ecx */
    eax = esi; /* 0x1503B1AD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503B1AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503B1B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B1B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B1C0u);

L_1503B1C0:
    edi = edi; /* 0x1503B1C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B1C2: push ebp */
    ebp = esp; /* 0x1503B1C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503B1C5: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503B1C6: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x7C); /* 0x1503B1CB: mov esi, dword ptr [eax + 0x7c] */
    /* test eax, eax */ /* 0x1503B1CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B1D7; /* 0x1503B1D0: jne 0x1503b1d7 */
L_1503B1D2:
    RECOMP_CALL(sub_15068820); /* 0x1503B1D2: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503B1D7:
    ecx = MEM32(ebp + 0x8); /* 0x1503B1D7: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x7C) = ecx; /* 0x1503B1DA: mov dword ptr [eax + 0x7c], ecx */
    eax = esi; /* 0x1503B1DD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503B1DF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503B1E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B1E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B1F0u);

L_1503B1F0:
    RECOMP_CALL(sub_15068820); /* 0x1503B1F0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x78); /* 0x1503B1F5: mov eax, dword ptr [eax + 0x78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B1F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B200u);

L_1503B200:
    RECOMP_CALL(sub_15068820); /* 0x1503B200: call 0x15068820 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x7C); /* 0x1503B205: mov eax, dword ptr [eax + 0x7c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B208: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B210u);

L_1503B210:
    PUSH32(esp, 0xCu); /* 0x1503B210: push 0xc */
    PUSH32(esp, 0x150AFDB0u); /* 0x1503B212: push 0x150afdb0 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B217: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = ecx + 0x4; /* 0x1503B21C: lea edi, [ecx + 4] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1503B21F: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503B222: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ebx */ /* 0x1503B224: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B2B3; /* 0x1503B226: jne 0x1503b2b3 */
L_1503B22C:
    PUSH32(esp, 0x2800u); /* 0x1503B22C: push 0x2800 */
    PUSH32(esp, 0x15048840u); /* 0x1503B231: push 0x15048840 */
    PUSH32(esp, 0x15048A30u); /* 0x1503B236: push 0x15048a30 */
    PUSH32(esp, ebx); /* 0x1503B23B: push ebx */
    eax = ecx + 0x9; /* 0x1503B23C: lea eax, [ecx + 9] */
    PUSH32(esp, eax); /* 0x1503B23F: push eax */
    PUSH32(esp, ebx); /* 0x1503B240: push ebx */
    RECOMP_CALL(sub_15041B70); /* 0x1503B241: call 0x15041b70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503B246: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1503B249: mov esi, eax */
    /* test esi, esi */ /* 0x1503B24B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B2B5; /* 0x1503B24D: je 0x1503b2b5 */
L_1503B24F:
    ecx = esi; /* 0x1503B24F: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1503B251: lea edx, [ecx + 1] */
L_1503B254:
    SET_LO8(eax, MEM8(ecx)); /* 0x1503B254: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503B256: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1503B257: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B254; /* 0x1503B259: jne 0x1503b254 */
L_1503B25B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1503B25B: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = esi + (-0x1); /* 0x1503B25D: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1503B260: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1503B267; /* 0x1503B262: jmp 0x1503b267 */
L_1503B264:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1503B264: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503B266: dec eax */
    _flag_k = FK_DEC;
L_1503B267:
    /* cmp MEM8(eax), 0x20u */ /* 0x1503B267: cmp byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B264; /* 0x1503B26A: je 0x1503b264 */
L_1503B26C:
    PUSH32(esp, 0xEu); /* 0x1503B26C: push 0xe */
    RECOMP_CALL(sub_15068D80); /* 0x1503B26E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B273: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503B274: mov dword ptr [ebp - 4], ebx */
    ecx = esi; /* 0x1503B277: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1503B279: lea edx, [ecx + 1] */
L_1503B27C:
    SET_LO8(eax, MEM8(ecx)); /* 0x1503B27C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503B27E: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1503B27F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B27C; /* 0x1503B281: jne 0x1503b27c */
L_1503B283:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1503B283: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x1503B285: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x1503B288: push ebx */
    RECOMP_CALL(sub_15048A30); /* 0x1503B289: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B28E: pop ecx */
    MEM32(edi) = eax; /* 0x1503B28F: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x1503B291: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B2A0; /* 0x1503B293: je 0x1503b2a0 */
L_1503B295:
    PUSH32(esp, esi); /* 0x1503B295: push esi */
    PUSH32(esp, ebx); /* 0x1503B296: push ebx */
    PUSH32(esp, eax); /* 0x1503B297: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1503B298: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503B29D: add esp, 0xc */
    _flag_k = FK_ADD;
L_1503B2A0:
    PUSH32(esp, esi); /* 0x1503B2A0: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1503B2A1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B2A6: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B2A7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1503B2C8); /* 0x1503B2AE: call 0x1503b2c8 */
    RECOMP_FLAGS_IN();
L_1503B2B3:
    eax = MEM32(edi); /* 0x1503B2B3: mov eax, dword ptr [edi] */
L_1503B2B5:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503B2B5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503B2B8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503B2BF: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503B2C0: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B2C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B2C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B2C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B2C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B2C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B2C8u);

L_1503B2C8:
    PUSH32(esp, 0xEu); /* 0x1503B2C8: push 0xe */
    RECOMP_CALL(sub_15068F50); /* 0x1503B2CA: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B2CF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B2D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B2E0u);

L_1503B2E0:
    edi = edi; /* 0x1503B2E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B2E2: push ebp */
    ebp = esp; /* 0x1503B2E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1503B2E5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503B2E8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503B2E9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503B2EC: push esi */
    PUSH32(esp, edi); /* 0x1503B2ED: push edi */
    PUSH32(esp, 8); /* 0x1503B2EE: push 8 */
    ecx = POP32_VAL(esp); /* 0x1503B2F0: pop ecx */
    esi = 0x15003F14u; /* 0x1503B2F1: mov esi, 0x15003f14 */
    edi = ebp + (-0x20); /* 0x1503B2F6: lea edi, [ebp - 0x20] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1503B2F9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0xC); /* 0x1503B2FB: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1503B2FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B31F; /* 0x1503B300: je 0x1503b31f */
L_1503B302:
    /* test MEM8(edi), 0x10u */ /* 0x1503B302: test byte ptr [edi], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B31F; /* 0x1503B305: je 0x1503b31f */
L_1503B307:
    ecx = MEM32(ebx); /* 0x1503B307: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1503B309: sub ecx, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1503B30C: push ecx */
    eax = MEM32(ecx); /* 0x1503B30D: mov eax, dword ptr [ecx] */
    esi = MEM32(eax + 0x20); /* 0x1503B30F: mov esi, dword ptr [eax + 0x20] */
    ecx = esi; /* 0x1503B312: mov ecx, esi */
    edi = MEM32(eax + 0x18); /* 0x1503B314: mov edi, dword ptr [eax + 0x18] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B317: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503B31D: call esi */
    RECOMP_FLAGS_IN();
L_1503B31F:
    MEM32(ebp + (-0x8)) = ebx; /* 0x1503B31F: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1503B322: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x1503B325: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B33A; /* 0x1503B327: je 0x1503b33a */
L_1503B329:
    /* test MEM8(edi), 8 */ /* 0x1503B329: test byte ptr [edi], 8 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = 0x01994000u; /* 0x1503B32C: mov ecx, 0x1994000 */
    eax = MEM32(ebp + (-0xC)); /* 0x1503B331: mov eax, dword ptr [ebp - 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503B334: cmovne eax, ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503B337: mov dword ptr [ebp - 0xc], eax */
L_1503B33A:
    eax = ebp + (-0xC); /* 0x1503B33A: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503B33D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1503B33E: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1503B341: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1503B344: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x150C005C)); /* 0x1503B347: call dword ptr [0x150c005c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1503B34D: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B34E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B34F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B350: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503B351: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503B360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B360u);

L_1503B360:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503B360: push -1 */
    PUSH32(esp, eax); /* 0x1503B362: push eax */
    eax = MEM32(FS_BASE + (0)); /* 0x1503B363: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1503B369: push eax */
    eax = MEM32(esp + 0xC); /* 0x1503B36A: mov eax, dword ptr [esp + 0xc] */
    MEM32(FS_BASE + (0)) = esp; /* 0x1503B36E: mov dword ptr fs:[0], esp */
    MEM32(esp + 0xC) = ebp; /* 0x1503B375: mov dword ptr [esp + 0xc], ebp */
    ebp = esp + 0xC; /* 0x1503B379: lea ebp, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x1503B37D: push eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B37E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B390u);

L_1503B390:
    PUSH32(esp, 8); /* 0x1503B390: push 8 */
    PUSH32(esp, 0x150AFDF0u); /* 0x1503B392: push 0x150afdf0 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B397: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B39C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503B3A0: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1503B3A3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B3A6: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1503B3AC: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B3AF: pop ecx */
    goto L_1503B3BF; /* 0x1503B3B0: jmp 0x1503b3bf */
L_1503B3BF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B3BF: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503B3C6: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503B3C9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503B3D0: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503B3D1: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B3D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B3D3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B3D4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B3D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B3E0u);

L_1503B3E0:
    PUSH32(esp, 8); /* 0x1503B3E0: push 8 */
    PUSH32(esp, 0x150AFDD0u); /* 0x1503B3E2: push 0x150afdd0 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B3E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B3EC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1503B3F0: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B3F3: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1503B3F9: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1503B3FC: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    goto L_1503B40E; /* 0x1503B3FF: jmp 0x1503b40e */
L_1503B40E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B40E: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503B415: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503B418: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503B41F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503B420: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B421: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B422: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B423: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B424: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B430u);

L_1503B430:
    PUSH32(esp, 8); /* 0x1503B430: push 8 */
    PUSH32(esp, 0x150AFE10u); /* 0x1503B432: push 0x150afe10 */
    RECOMP_CALL(sub_1505E988); /* 0x1503B437: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B43C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503B440: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503B443: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503B446: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503B449: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1503B44C: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503B44F: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1503B455: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    goto L_1503B467; /* 0x1503B458: jmp 0x1503b467 */
L_1503B467:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503B467: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503B46E: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503B471: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503B478: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503B479: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B47A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B47B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B47C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B47D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B490u);

L_1503B490:
    edi = edi; /* 0x1503B490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B492: push ebp */
    ebp = esp; /* 0x1503B493: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1503B495: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1503B498: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B4DD; /* 0x1503B49A: je 0x1503b4dd */
L_1503B49C:
    eax = MEM32(eax); /* 0x1503B49C: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1503B49E: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B4DD; /* 0x1503B4A4: jne 0x1503b4dd */
L_1503B4A6:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1503B4A6: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B4DD; /* 0x1503B4AA: jne 0x1503b4dd */
L_1503B4AC:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x1503B4AC: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B4C7; /* 0x1503B4B3: je 0x1503b4c7 */
L_1503B4B5:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1503B4B5: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B4C7; /* 0x1503B4BC: je 0x1503b4c7 */
L_1503B4BE:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1503B4BE: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B4DD; /* 0x1503B4C5: jne 0x1503b4dd */
L_1503B4C7:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x1503B4C7: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B4DD; /* 0x1503B4CB: jne 0x1503b4dd */
L_1503B4CD:
    RECOMP_CALL(sub_15068820); /* 0x1503B4CD: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) + 1; /* 0x1503B4D2: inc dword ptr [eax + 0x90] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B4D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B4DA: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1503B4DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B4DC: ret  */
L_1503B4DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B4DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503B4DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B4E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B4F0u);

L_1503B4F0:
    edi = edi; /* 0x1503B4F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B4F2: push ebp */
    ebp = esp; /* 0x1503B4F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503B4F5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503B4F8: push ebx */
    PUSH32(esp, esi); /* 0x1503B4F9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503B4FA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1503B4FD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503B4FE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1503B500: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B502: je 0x1503b5cf */
L_1503B508:
    ebx = MEM32(ebp + 0xC); /* 0x1503B508: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(esi); /* 0x1503B50B: mov esi, dword ptr [esi] */
    /* test ebx, ebx */ /* 0x1503B50D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B517; /* 0x1503B50F: je 0x1503b517 */
L_1503B511:
    /* cmp MEM8(ebx + 0x8), 0 */ /* 0x1503B511: cmp byte ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B539; /* 0x1503B515: jne 0x1503b539 */
L_1503B517:
    /* cmp MEM32(esi), 0xE0434F4Du */ /* 0x1503B517: cmp dword ptr [esi], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B51D: je 0x1503b641 */
L_1503B523:
    /* cmp MEM32(esi), 0xE0434352u */ /* 0x1503B523: cmp dword ptr [esi], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B529: je 0x1503b641 */
L_1503B52F:
    /* test MEM8(ebp + 0x10), 0x40u */ /* 0x1503B52F: test byte ptr [ebp + 0x10], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B602; /* 0x1503B533: je 0x1503b602 */
L_1503B539:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x1503B539: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B53F: jne 0x1503b5cf */
L_1503B545:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1503B545: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B549: jne 0x1503b5cf */
L_1503B54F:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x1503B54F: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B56A; /* 0x1503B556: je 0x1503b56a */
L_1503B558:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1503B558: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B56A; /* 0x1503B55F: je 0x1503b56a */
L_1503B561:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1503B561: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B568: jne 0x1503b5cf */
L_1503B56A:
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x1503B56A: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B58D; /* 0x1503B56D: jne 0x1503b58d */
L_1503B56F:
    RECOMP_CALL(sub_15068820); /* 0x1503B56F: call 0x15068820 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x88), edi */ /* 0x1503B574: cmp dword ptr [eax + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B57A: je 0x1503b5cf */
L_1503B57C:
    /* test eax, eax */ /* 0x1503B57C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B585; /* 0x1503B57E: jne 0x1503b585 */
L_1503B580:
    RECOMP_CALL(sub_15068820); /* 0x1503B580: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503B585:
    edi = eax; /* 0x1503B585: mov edi, eax */
    esi = MEM32(edi + 0x88); /* 0x1503B587: mov esi, dword ptr [edi + 0x88] */
L_1503B58D:
    eax = MEM32(ebp + 0x10); /* 0x1503B58D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0x80000000u)); _flag_b = (uint32_t)((eax | 0x80000000u));
    eax = eax | 0x80000000u; /* 0x1503B590: or eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1503B595: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503B598: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + 0x1C); /* 0x1503B59B: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1503B59E: mov eax, dword ptr [eax + 0xc] */
    ebx = MEM32(eax); /* 0x1503B5A1: mov ebx, dword ptr [eax] */
    ecx = eax + 0x4; /* 0x1503B5A3: lea ecx, [eax + 4] */
    goto L_1503B5C8; /* 0x1503B5A6: jmp 0x1503b5c8 */
L_1503B5A8:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1503B5A8: push dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x1503B5AB: mov eax, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1503B5AD: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1503B5AE: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x1503B5B1: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503B5B4: push eax */
    RECOMP_CALL(sub_1503AFE0); /* 0x1503B5B5: call 0x1503afe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503B5BA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503B5BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B5D6; /* 0x1503B5BF: jne 0x1503b5d6 */
L_1503B5C1:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503B5C1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1503B5C4: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1503B5C5: add ecx, 4 */
    _flag_k = FK_ADD;
L_1503B5C8:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503B5C8: mov dword ptr [ebp - 4], ecx */
    /* test ebx, ebx */ /* 0x1503B5CB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1503B5A8; /* 0x1503B5CD: jg 0x1503b5a8 */
L_1503B5CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B5CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503B5D1:
    edi = POP32_VAL(esp); /* 0x1503B5D1: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B5D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503B5D3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B5D4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B5D5: ret  */
L_1503B5D6:
    /* test edi, edi */ /* 0x1503B5D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B5E1; /* 0x1503B5D8: jne 0x1503b5e1 */
L_1503B5DA:
    RECOMP_CALL(sub_15068820); /* 0x1503B5DA: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503B5DF: mov edi, eax */
L_1503B5E1:
    _flag_a = (uint32_t)(MEM32(edi + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x90) = MEM32(edi + 0x90) + 1; /* 0x1503B5E1: inc dword ptr [edi + 0x90] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1503B5E7: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B64C; /* 0x1503B5EB: je 0x1503b64c */
L_1503B5ED:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1503B5ED: push dword ptr [ebp - 8] */
    eax = ebp + (-0x18); /* 0x1503B5F0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503B5F3: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503B5F4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1503B5F7: push esi */
    RECOMP_CALL(sub_1503AB90); /* 0x1503B5F8: call 0x1503ab90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503B5FD: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1503B64C; /* 0x1503B600: jmp 0x1503b64c */
L_1503B602:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x1503B602: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B608: jne 0x1503b641 */
L_1503B60A:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1503B60A: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B60E: jne 0x1503b641 */
L_1503B610:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x1503B610: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B62B; /* 0x1503B617: je 0x1503b62b */
L_1503B619:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1503B619: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B62B; /* 0x1503B620: je 0x1503b62b */
L_1503B622:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1503B622: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B629: jne 0x1503b641 */
L_1503B62B:
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x1503B62B: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B641; /* 0x1503B62E: jne 0x1503b641 */
L_1503B630:
    RECOMP_CALL(sub_15068820); /* 0x1503B630: call 0x15068820 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x88), edi */ /* 0x1503B635: cmp dword ptr [eax + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B5CF; /* 0x1503B63B: je 0x1503b5cf */
L_1503B63D:
    /* test eax, eax */ /* 0x1503B63D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B646; /* 0x1503B63F: jne 0x1503b646 */
L_1503B641:
    RECOMP_CALL(sub_15068820); /* 0x1503B641: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503B646:
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) + 1; /* 0x1503B646: inc dword ptr [eax + 0x90] */
    _flag_k = FK_INC;
L_1503B64C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B64C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B64E: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1503B5D1; /* 0x1503B64F: jmp 0x1503b5d1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503B660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B660u);

L_1503B660:
    PUSH32(esp, 0x10u); /* 0x1503B660: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1503B662: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B663: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B670u);

L_1503B670:
    edi = edi; /* 0x1503B670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B672: push ebp */
    ebp = esp; /* 0x1503B673: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503B675: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1503B676: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1503B679: push esi */
    PUSH32(esp, edi); /* 0x1503B67A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503B67B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503B67E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503B680: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B717; /* 0x1503B682: je 0x1503b717 */
L_1503B688:
    edi = MEM32(edi); /* 0x1503B688: mov edi, dword ptr [edi] */
    /* test edi, edi */ /* 0x1503B68A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B717; /* 0x1503B68C: je 0x1503b717 */
L_1503B692:
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x1503B692: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B6CD; /* 0x1503B698: jne 0x1503b6cd */
L_1503B69A:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1503B69A: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B6CD; /* 0x1503B69E: jne 0x1503b6cd */
L_1503B6A0:
    /* cmp MEM32(edi + 0x14), 0x19930520u */ /* 0x1503B6A0: cmp dword ptr [edi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B6BB; /* 0x1503B6A7: je 0x1503b6bb */
L_1503B6A9:
    /* cmp MEM32(edi + 0x14), 0x19930521u */ /* 0x1503B6A9: cmp dword ptr [edi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B6BB; /* 0x1503B6B0: je 0x1503b6bb */
L_1503B6B2:
    /* cmp MEM32(edi + 0x14), 0x19930522u */ /* 0x1503B6B2: cmp dword ptr [edi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B6CD; /* 0x1503B6B9: jne 0x1503b6cd */
L_1503B6BB:
    /* cmp MEM32(edi + 0x1C), esi */ /* 0x1503B6BB: cmp dword ptr [edi + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B6CD; /* 0x1503B6BE: jne 0x1503b6cd */
L_1503B6C0:
    RECOMP_CALL(sub_15068820); /* 0x1503B6C0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B6C5: mov esi, eax */
    edi = MEM32(esi + 0x88); /* 0x1503B6C7: mov edi, dword ptr [esi + 0x88] */
L_1503B6CD:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1503B6CD: push dword ptr [edi + 0x18] */
    PUSH32(esp, ebx); /* 0x1503B6D0: push ebx */
    RECOMP_CALL(sub_1503BC60); /* 0x1503B6D1: call 0x1503bc60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B6D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503B6D7: pop ecx */
    /* test esi, esi */ /* 0x1503B6D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B6E3; /* 0x1503B6DA: jne 0x1503b6e3 */
L_1503B6DC:
    RECOMP_CALL(sub_15068820); /* 0x1503B6DC: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B6E1: mov esi, eax */
L_1503B6E3:
    eax = MEM32(esi + 0x88); /* 0x1503B6E3: mov eax, dword ptr [esi + 0x88] */
    MEM32(ebx + 0x8) = eax; /* 0x1503B6E9: mov dword ptr [ebx + 8], eax */
    /* test esi, esi */ /* 0x1503B6EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B6F7; /* 0x1503B6EE: jne 0x1503b6f7 */
L_1503B6F0:
    RECOMP_CALL(sub_15068820); /* 0x1503B6F0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B6F5: mov esi, eax */
L_1503B6F7:
    eax = MEM32(esi + 0x8C); /* 0x1503B6F7: mov eax, dword ptr [esi + 0x8c] */
    MEM32(ebx + 0xC) = eax; /* 0x1503B6FD: mov dword ptr [ebx + 0xc], eax */
    /* test esi, esi */ /* 0x1503B700: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B70B; /* 0x1503B702: jne 0x1503b70b */
L_1503B704:
    RECOMP_CALL(sub_15068820); /* 0x1503B704: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B709: mov esi, eax */
L_1503B70B:
    MEM32(esi + 0x88) = edi; /* 0x1503B70B: mov dword ptr [esi + 0x88], edi */
    /* test esi, esi */ /* 0x1503B711: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B71F; /* 0x1503B713: je 0x1503b71f */
L_1503B715:
    goto L_1503B726; /* 0x1503B715: jmp 0x1503b726 */
L_1503B717:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0xFFFFFFFFu));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0xFFFFFFFFu; /* 0x1503B717: or dword ptr [ebx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0xC) | 0xFFFFFFFFu));
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0xFFFFFFFFu; /* 0x1503B71B: or dword ptr [ebx + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503B71F:
    RECOMP_CALL(sub_15068820); /* 0x1503B71F: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B724: mov esi, eax */
L_1503B726:
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x90) = MEM32(esi + 0x90) - 1; /* 0x1503B726: dec dword ptr [esi + 0x90] */
    _flag_k = FK_DEC;
    /* test esi, esi */ /* 0x1503B72C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B737; /* 0x1503B72E: jne 0x1503b737 */
L_1503B730:
    RECOMP_CALL(sub_15068820); /* 0x1503B730: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B735: mov esi, eax */
L_1503B737:
    /* cmp MEM32(esi + 0x90), 0 */ /* 0x1503B737: cmp dword ptr [esi + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503B752; /* 0x1503B73E: jge 0x1503b752 */
L_1503B740:
    /* test esi, esi */ /* 0x1503B740: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B74B; /* 0x1503B742: jne 0x1503b74b */
L_1503B744:
    RECOMP_CALL(sub_15068820); /* 0x1503B744: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B749: mov esi, eax */
L_1503B74B:
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x90) = MEM32(esi + 0x90) & 0; /* 0x1503B74B: and dword ptr [esi + 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503B752:
    edi = POP32_VAL(esp); /* 0x1503B752: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B753: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503B755: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B756: inc eax */
    _flag_k = FK_INC;
    ebx = POP32_VAL(esp); /* 0x1503B757: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503B758: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B759: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B760u);

L_1503B760:
    edi = edi; /* 0x1503B760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B762: push ebp */
    ebp = esp; /* 0x1503B763: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503B765: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503B766: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0x8), 0xFFFFFFFFu */ /* 0x1503B769: cmp dword ptr [ebx + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B8FE; /* 0x1503B76D: je 0x1503b8fe */
L_1503B773:
    PUSH32(esp, esi); /* 0x1503B773: push esi */
    PUSH32(esp, edi); /* 0x1503B774: push edi */
    PUSH32(esp, ebx); /* 0x1503B775: push ebx */
    RECOMP_CALL(sub_1503BC9A); /* 0x1503B776: call 0x1503bc9a */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1503B77B: mov edi, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1503B77E: pop ecx */
    /* test edi, edi */ /* 0x1503B77F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B845; /* 0x1503B781: jne 0x1503b845 */
L_1503B787:
    RECOMP_CALL(sub_15068820); /* 0x1503B787: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B78C: mov esi, eax */
    eax = MEM32(esi + 0x88); /* 0x1503B78E: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1503B794: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B841; /* 0x1503B79A: jne 0x1503b841 */
L_1503B7A0:
    /* test esi, esi */ /* 0x1503B7A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B7AB; /* 0x1503B7A2: jne 0x1503b7ab */
L_1503B7A4:
    RECOMP_CALL(sub_15068820); /* 0x1503B7A4: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B7A9: mov esi, eax */
L_1503B7AB:
    eax = MEM32(esi + 0x88); /* 0x1503B7AB: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1503B7B1: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B841; /* 0x1503B7B5: jne 0x1503b841 */
L_1503B7BB:
    /* test esi, esi */ /* 0x1503B7BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B7C6; /* 0x1503B7BD: jne 0x1503b7c6 */
L_1503B7BF:
    RECOMP_CALL(sub_15068820); /* 0x1503B7BF: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B7C4: mov esi, eax */
L_1503B7C6:
    ecx = MEM32(esi + 0x88); /* 0x1503B7C6: mov ecx, dword ptr [esi + 0x88] */
    /* cmp MEM32(ecx + 0x14), 0x19930520u */ /* 0x1503B7CC: cmp dword ptr [ecx + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B809; /* 0x1503B7D3: je 0x1503b809 */
L_1503B7D5:
    /* test esi, esi */ /* 0x1503B7D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B7E0; /* 0x1503B7D7: jne 0x1503b7e0 */
L_1503B7D9:
    RECOMP_CALL(sub_15068820); /* 0x1503B7D9: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B7DE: mov esi, eax */
L_1503B7E0:
    eax = MEM32(esi + 0x88); /* 0x1503B7E0: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1503B7E6: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B809; /* 0x1503B7ED: je 0x1503b809 */
L_1503B7EF:
    /* test esi, esi */ /* 0x1503B7EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B7FA; /* 0x1503B7F1: jne 0x1503b7fa */
L_1503B7F3:
    RECOMP_CALL(sub_15068820); /* 0x1503B7F3: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B7F8: mov esi, eax */
L_1503B7FA:
    eax = MEM32(esi + 0x88); /* 0x1503B7FA: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1503B800: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B841; /* 0x1503B807: jne 0x1503b841 */
L_1503B809:
    /* test esi, esi */ /* 0x1503B809: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B814; /* 0x1503B80B: jne 0x1503b814 */
L_1503B80D:
    RECOMP_CALL(sub_15068820); /* 0x1503B80D: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B812: mov esi, eax */
L_1503B814:
    eax = MEM32(esi + 0x88); /* 0x1503B814: mov eax, dword ptr [esi + 0x88] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503B81A: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_1503A03C); /* 0x1503B81D: call 0x1503a03c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B822: pop ecx */
    /* test eax, eax */ /* 0x1503B823: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B841; /* 0x1503B825: je 0x1503b841 */
L_1503B827:
    /* test esi, esi */ /* 0x1503B827: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B832; /* 0x1503B829: jne 0x1503b832 */
L_1503B82B:
    RECOMP_CALL(sub_15068820); /* 0x1503B82B: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B830: mov esi, eax */
L_1503B832:
    PUSH32(esp, 1); /* 0x1503B832: push 1 */
    PUSH32(esp, MEM32(esi + 0x88)); /* 0x1503B834: push dword ptr [esi + 0x88] */
    RECOMP_CALL(sub_15039EA0); /* 0x1503B83A: call 0x15039ea0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503B83F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503B840: pop ecx */
L_1503B841:
    /* test esi, esi */ /* 0x1503B841: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B84C; /* 0x1503B843: jne 0x1503b84c */
L_1503B845:
    RECOMP_CALL(sub_15068820); /* 0x1503B845: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B84A: mov esi, eax */
L_1503B84C:
    eax = MEM32(esi + 0x88); /* 0x1503B84C: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1503B852: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B8D4; /* 0x1503B858: jne 0x1503b8d4 */
L_1503B85A:
    /* test esi, esi */ /* 0x1503B85A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B865; /* 0x1503B85C: jne 0x1503b865 */
L_1503B85E:
    RECOMP_CALL(sub_15068820); /* 0x1503B85E: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B863: mov esi, eax */
L_1503B865:
    eax = MEM32(esi + 0x88); /* 0x1503B865: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1503B86B: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B8D4; /* 0x1503B86F: jne 0x1503b8d4 */
L_1503B871:
    /* test esi, esi */ /* 0x1503B871: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B87C; /* 0x1503B873: jne 0x1503b87c */
L_1503B875:
    RECOMP_CALL(sub_15068820); /* 0x1503B875: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B87A: mov esi, eax */
L_1503B87C:
    eax = MEM32(esi + 0x88); /* 0x1503B87C: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x1503B882: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B8BF; /* 0x1503B889: je 0x1503b8bf */
L_1503B88B:
    /* test esi, esi */ /* 0x1503B88B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B896; /* 0x1503B88D: jne 0x1503b896 */
L_1503B88F:
    RECOMP_CALL(sub_15068820); /* 0x1503B88F: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B894: mov esi, eax */
L_1503B896:
    eax = MEM32(esi + 0x88); /* 0x1503B896: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1503B89C: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503B8BF; /* 0x1503B8A3: je 0x1503b8bf */
L_1503B8A5:
    /* test esi, esi */ /* 0x1503B8A5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B8B0; /* 0x1503B8A7: jne 0x1503b8b0 */
L_1503B8A9:
    RECOMP_CALL(sub_15068820); /* 0x1503B8A9: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B8AE: mov esi, eax */
L_1503B8B0:
    eax = MEM32(esi + 0x88); /* 0x1503B8B0: mov eax, dword ptr [esi + 0x88] */
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1503B8B6: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B8D4; /* 0x1503B8BD: jne 0x1503b8d4 */
L_1503B8BF:
    /* test edi, edi */ /* 0x1503B8BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503B8D4; /* 0x1503B8C1: je 0x1503b8d4 */
L_1503B8C3:
    /* test esi, esi */ /* 0x1503B8C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B8CE; /* 0x1503B8C5: jne 0x1503b8ce */
L_1503B8C7:
    RECOMP_CALL(sub_15068820); /* 0x1503B8C7: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B8CC: mov esi, eax */
L_1503B8CE:
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x90) = MEM32(esi + 0x90) - 1; /* 0x1503B8CE: dec dword ptr [esi + 0x90] */
    _flag_k = FK_DEC;
L_1503B8D4:
    edi = MEM32(ebx + 0x8); /* 0x1503B8D4: mov edi, dword ptr [ebx + 8] */
    /* test esi, esi */ /* 0x1503B8D7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B8E2; /* 0x1503B8D9: jne 0x1503b8e2 */
L_1503B8DB:
    RECOMP_CALL(sub_15068820); /* 0x1503B8DB: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B8E0: mov esi, eax */
L_1503B8E2:
    MEM32(esi + 0x88) = edi; /* 0x1503B8E2: mov dword ptr [esi + 0x88], edi */
    edi = MEM32(ebx + 0xC); /* 0x1503B8E8: mov edi, dword ptr [ebx + 0xc] */
    /* test esi, esi */ /* 0x1503B8EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503B8F6; /* 0x1503B8ED: jne 0x1503b8f6 */
L_1503B8EF:
    RECOMP_CALL(sub_15068820); /* 0x1503B8EF: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503B8F4: mov esi, eax */
L_1503B8F6:
    MEM32(esi + 0x8C) = edi; /* 0x1503B8F6: mov dword ptr [esi + 0x8c], edi */
    edi = POP32_VAL(esp); /* 0x1503B8FC: pop edi */
    esi = POP32_VAL(esp); /* 0x1503B8FD: pop esi */
L_1503B8FE:
    ebx = POP32_VAL(esp); /* 0x1503B8FE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503B8FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B900: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B907(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B907u);

L_1503B907:
    edi = edi; /* 0x1503B907: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B909: push ebp */
    ebp = esp; /* 0x1503B90A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503B90C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1503B90F: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x1503B913: lea eax, [ebp - 0x18] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x150BD340))); _flag_b = (uint32_t)((eax ^ MEM32(0x150BD340)));
    eax = eax ^ MEM32(0x150BD340); /* 0x1503B916: xor eax, dword ptr [0x150bd340] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1503B91C: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1503B91F: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1503B922: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503B925: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x1503B928: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B92B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = 0x15041E6Cu; /* 0x1503B92C: mov dword ptr [ebp - 0x14], 0x15041e6c */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1503B933: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503B936: mov dword ptr [ebp - 4], eax */
    eax = MEM32(FS_BASE + (0)); /* 0x1503B939: mov eax, dword ptr fs:[0] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503B93F: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x18); /* 0x1503B942: lea eax, [ebp - 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503B945: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503B94B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x1503B94E: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503B94F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15041E20); /* 0x1503B952: call 0x15041e20 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503B957: mov ecx, eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1503B959: mov eax, dword ptr [ebp - 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503B95C: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x1503B962: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503B964: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503B965: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503B96C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503B96Cu);

L_1503B96C:
    edi = edi; /* 0x1503B96C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503B96E: push ebp */
    ebp = esp; /* 0x1503B96F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1503B971: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503B974: push ebx */
    /* cmp MEM32(ebp + 0x8), 0x123u */ /* 0x1503B975: cmp dword ptr [ebp + 8], 0x123 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x123u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503B990; /* 0x1503B97C: jne 0x1503b990 */
L_1503B97E:
    eax = 0x1503BA3Fu; /* 0x1503B97E: mov eax, 0x1503ba3f */
    ecx = MEM32(ebp + 0xC); /* 0x1503B983: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x1503B986: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503B988: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503B98A: inc eax */
    _flag_k = FK_INC;
    goto L_1503BA68; /* 0x1503B98B: jmp 0x1503ba68 */
L_1503B990:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x1503B990: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = 0x15041E71u; /* 0x1503B994: mov dword ptr [ebp - 0x40], 0x15041e71 */
    eax = MEM32(0x150BD340); /* 0x1503B99B: mov eax, dword ptr [0x150bd340] */
    ecx = ebp + (-0x44); /* 0x1503B9A0: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503B9A3: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1503B9A5: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1503B9A8: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1503B9AB: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x1503B9AE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1503B9B1: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1503B9B4: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1503B9B7: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x20); /* 0x1503B9BA: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1503B9BD: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1503B9C0: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1503B9C4: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1503B9C8: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esp; /* 0x1503B9CC: mov dword ptr [ebp - 0x28], esp */
    MEM32(ebp + (-0x24)) = ebp; /* 0x1503B9CF: mov dword ptr [ebp - 0x24], ebp */
    eax = MEM32(FS_BASE + (0)); /* 0x1503B9D2: mov eax, dword ptr fs:[0] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1503B9D8: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x44); /* 0x1503B9DB: lea eax, [ebp - 0x44] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503B9DE: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 1; /* 0x1503B9E4: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x1503B9EB: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1503B9EE: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1503B9F1: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503B9F4: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503B9F7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BA05; /* 0x1503B9FB: je 0x1503ba05 */
L_1503B9FD:
    eax = MEM32(ebp + (-0x4)); /* 0x1503B9FD: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BA00: mov dword ptr [ebp - 8], eax */
    goto L_1503BA13; /* 0x1503BA03: jmp 0x1503ba13 */
L_1503BA05:
    RECOMP_CALL(sub_15068820); /* 0x1503BA05: call 0x15068820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BA0A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1503BA0D: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BA10: mov dword ptr [ebp - 8], eax */
L_1503BA13:
    eax = MEM32(ebp + (-0x8)); /* 0x1503BA13: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x80); /* 0x1503BA16: mov eax, dword ptr [eax + 0x80] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503BA1C: mov dword ptr [ebp - 0xc], eax */
    ecx = MEM32(ebp + (-0xC)); /* 0x1503BA1F: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1505EB74); /* 0x1503BA22: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1503BA27: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1503BA2A: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x1C); /* 0x1503BA2D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503BA30: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1503BA31: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x1503BA34: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(ebp + (-0x14))); /* 0x1503BA36: call dword ptr [ebp - 0x14] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503BA39: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503BA3A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1503BA3B: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1503BA3F: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BA5C; /* 0x1503BA43: je 0x1503ba5c */
L_1503BA45:
    ebx = MEM32(FS_BASE + (0)); /* 0x1503BA45: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x1503BA4C: mov eax, dword ptr [ebx] */
    ebx = MEM32(ebp + (-0x44)); /* 0x1503BA4E: mov ebx, dword ptr [ebp - 0x44] */
    MEM32(ebx) = eax; /* 0x1503BA51: mov dword ptr [ebx], eax */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1503BA53: mov dword ptr fs:[0], ebx */
    goto L_1503BA65; /* 0x1503BA5A: jmp 0x1503ba65 */
L_1503BA5C:
    eax = MEM32(ebp + (-0x44)); /* 0x1503BA5C: mov eax, dword ptr [ebp - 0x44] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503BA5F: mov dword ptr fs:[0], eax */
L_1503BA65:
    eax = MEM32(ebp + (-0x10)); /* 0x1503BA65: mov eax, dword ptr [ebp - 0x10] */
L_1503BA68:
    ebx = POP32_VAL(esp); /* 0x1503BA68: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BA69: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BA6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BA3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BA3Fu);

L_1503BA3F:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1503BA3F: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BA5C; /* 0x1503BA43: je 0x1503ba5c */
L_1503BA45:
    ebx = MEM32(FS_BASE + (0)); /* 0x1503BA45: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x1503BA4C: mov eax, dword ptr [ebx] */
    ebx = MEM32(ebp + (-0x44)); /* 0x1503BA4E: mov ebx, dword ptr [ebp - 0x44] */
    MEM32(ebx) = eax; /* 0x1503BA51: mov dword ptr [ebx], eax */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1503BA53: mov dword ptr fs:[0], ebx */
    goto L_1503BA65; /* 0x1503BA5A: jmp 0x1503ba65 */
L_1503BA5C:
    eax = MEM32(ebp + (-0x44)); /* 0x1503BA5C: mov eax, dword ptr [ebp - 0x44] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503BA5F: mov dword ptr fs:[0], eax */
L_1503BA65:
    eax = MEM32(ebp + (-0x10)); /* 0x1503BA65: mov eax, dword ptr [ebp - 0x10] */
    ebx = POP32_VAL(esp); /* 0x1503BA68: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BA69: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BA6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BA71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BA71u);

L_1503BA71:
    edi = edi; /* 0x1503BA71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BA73: push ebp */
    ebp = esp; /* 0x1503BA74: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BA76: push ecx */
    PUSH32(esp, ebx); /* 0x1503BA77: push ebx */
    PUSH32(esp, esi); /* 0x1503BA78: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503BA79: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503BA7C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503BA7D: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0xC); /* 0x1503BA80: mov ecx, dword ptr [edi + 0xc] */
    edx = ecx; /* 0x1503BA83: mov edx, ecx */
    ebx = MEM32(edi + 0x10); /* 0x1503BA85: mov ebx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503BA88: mov dword ptr [ebp - 4], ecx */
    /* test esi, esi */ /* 0x1503BA8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503BAC5; /* 0x1503BA8D: js 0x1503bac5 */
L_1503BA8F:
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1503BA8F: imul eax, ecx, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503BA92: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1503BA95: add eax, ebx */
    _flag_k = FK_ADD;
L_1503BA97:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1503BA97: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BAE3; /* 0x1503BA9A: je 0x1503bae3 */
L_1503BA9C:
    edi = MEM32(ebp + 0x10); /* 0x1503BA9C: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14u; /* 0x1503BA9F: sub eax, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1503BAA2: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM32(eax + (-0x4)), edi */ /* 0x1503BAA3: cmp dword ptr [eax - 4], edi */
    _flag_a = (uint32_t)(MEM32(eax + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x1503BAA6: mov edi, dword ptr [ebp + 8] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503BAB5; /* 0x1503BAA9: jge 0x1503bab5 */
L_1503BAAB:
    edi = MEM32(ebp + 0x10); /* 0x1503BAAB: mov edi, dword ptr [ebp + 0x10] */
    /* cmp edi, MEM32(eax) */ /* 0x1503BAAE: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x1503BAB0: mov edi, dword ptr [ebp + 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503BABA; /* 0x1503BAB3: jle 0x1503baba */
L_1503BAB5:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1503BAB5: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BAC1; /* 0x1503BAB8: jne 0x1503bac1 */
L_1503BABA:
    edx = MEM32(ebp + (-0x4)); /* 0x1503BABA: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503BABD: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503BABE: mov dword ptr [ebp - 4], ecx */
L_1503BAC1:
    /* test esi, esi */ /* 0x1503BAC1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1503BA97; /* 0x1503BAC3: jns 0x1503ba97 */
L_1503BAC5:
    eax = MEM32(ebp + 0x14); /* 0x1503BAC5: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503BAC8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x1503BAC9: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x18); /* 0x1503BACB: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = edx; /* 0x1503BACE: mov dword ptr [eax], edx */
    /* cmp edx, MEM32(edi + 0xC) */ /* 0x1503BAD0: cmp edx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503BAE3; /* 0x1503BAD3: ja 0x1503bae3 */
L_1503BAD5:
    /* cmp ecx, edx */ /* 0x1503BAD5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503BAE3; /* 0x1503BAD7: ja 0x1503bae3 */
L_1503BAD9:
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1503BAD9: imul eax, ecx, 0x14 */
    edi = POP32_VAL(esp); /* 0x1503BADC: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BADD: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1503BADE: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1503BAE0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BAE1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BAE2: ret  */
L_1503BAE3:
    RECOMP_CALL(sub_1503B080); /* 0x1503BAE3: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503BAE8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503BAEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BAEFu);

L_1503BAEF:
    edi = edi; /* 0x1503BAEF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BAF1: push ebp */
    ebp = esp; /* 0x1503BAF2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BAF4: push ecx */
    PUSH32(esp, ebx); /* 0x1503BAF5: push ebx */
    eax = MEM32(ebp + 0xC); /* 0x1503BAF6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1503BAF9: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BAFC: mov dword ptr [ebp - 4], eax */
    ebx = MEM32(FS_BASE + (0)); /* 0x1503BAFF: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x1503BB06: mov eax, dword ptr [ebx] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1503BB08: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503BB0E: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0xC); /* 0x1503BB11: mov ebx, dword ptr [ebp + 0xc] */
    ebp = MEM32(ebp + (-0x4)); /* 0x1503BB14: mov ebp, dword ptr [ebp - 4] */
    esp = MEM32(ebx + (-0x4)); /* 0x1503BB17: mov esp, dword ptr [ebx - 4] */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1503BB27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BB27u);

L_1503BB27:
    edi = edi; /* 0x1503BB27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BB29: push ebp */
    ebp = esp; /* 0x1503BB2A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BB2C: push ecx */
    PUSH32(esp, ecx); /* 0x1503BB2D: push ecx */
    PUSH32(esp, ebx); /* 0x1503BB2E: push ebx */
    PUSH32(esp, esi); /* 0x1503BB2F: push esi */
    PUSH32(esp, edi); /* 0x1503BB30: push edi */
    esi = MEM32(FS_BASE + (0)); /* 0x1503BB31: mov esi, dword ptr fs:[0] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1503BB38: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = 0x1503BB53u; /* 0x1503BB3B: mov dword ptr [ebp - 4], 0x1503bb53 */
    PUSH32(esp, 0); /* 0x1503BB42: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BB44: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BB47: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BB4A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02A8)); /* 0x1503BB4D: call dword ptr [0x150c02a8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1503BB53: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1503BB56: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x1503BB59: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x1503BB5C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x1503BB5F: mov dword ptr [ecx + 4], eax */
    edi = MEM32(FS_BASE + (0)); /* 0x1503BB62: mov edi, dword ptr fs:[0] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1503BB69: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebx) = edi; /* 0x1503BB6C: mov dword ptr [ebx], edi */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1503BB6E: mov dword ptr fs:[0], ebx */
    edi = POP32_VAL(esp); /* 0x1503BB75: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BB76: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BB77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BB78: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503BB79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503BB53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BB53u);

L_1503BB53:
    eax = MEM32(ebp + 0xC); /* 0x1503BB53: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1503BB56: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x1503BB59: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x1503BB5C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x1503BB5F: mov dword ptr [ecx + 4], eax */
    edi = MEM32(FS_BASE + (0)); /* 0x1503BB62: mov edi, dword ptr fs:[0] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1503BB69: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebx) = edi; /* 0x1503BB6C: mov dword ptr [ebx], edi */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1503BB6E: mov dword ptr fs:[0], ebx */
    edi = POP32_VAL(esp); /* 0x1503BB75: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BB76: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BB77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BB78: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503BB79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503BB82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BB82u);

L_1503BB82:
    edi = edi; /* 0x1503BB82: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BB84: push ebp */
    ebp = esp; /* 0x1503BB85: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503BB87: push esi */
    _df = 1; /* 0x1503BB88: cld  */
    esi = MEM32(ebp + 0xC); /* 0x1503BB89: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1503BB8C: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x1503BB8F: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1503BB91: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1503BB96: push 0 */
    PUSH32(esp, esi); /* 0x1503BB98: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1503BB99: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1503BB9C: push dword ptr [esi + 0xc] */
    PUSH32(esp, 0); /* 0x1503BB9F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BBA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1503BBA4: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BBA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BBAA: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BBAF: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1503BBB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503BBB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BBB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BBBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BBBBu);

L_1503BBBB:
    edi = edi; /* 0x1503BBBB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BBBD: push ebp */
    ebp = esp; /* 0x1503BBBE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BBC0: push ecx */
    PUSH32(esp, ebx); /* 0x1503BBC1: push ebx */
    _df = 1; /* 0x1503BBC2: cld  */
    eax = MEM32(ebp + 0xC); /* 0x1503BBC3: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x8); /* 0x1503BBC6: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + 0xC)));
    ecx = ecx ^ MEM32(ebp + 0xC); /* 0x1503BBC9: xor ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1503BBCC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503BBD1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1503BBD4: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    eax = eax & 0x66u; /* 0x1503BBD7: and eax, 0x66 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BBED; /* 0x1503BBDA: je 0x1503bbed */
L_1503BBDC:
    eax = MEM32(ebp + 0xC); /* 0x1503BBDC: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x24) = 1; /* 0x1503BBDF: mov dword ptr [eax + 0x24], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BBE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503BBE8: inc eax */
    _flag_k = FK_INC;
    goto L_1503BC57; /* 0x1503BBE9: jmp 0x1503bc57 */
L_1503BBED:
    PUSH32(esp, 1); /* 0x1503BBED: push 1 */
    eax = MEM32(ebp + 0xC); /* 0x1503BBEF: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503BBF2: push dword ptr [eax + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1503BBF5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1503BBF8: push dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1503BBFB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1503BBFE: push dword ptr [eax + 0xc] */
    PUSH32(esp, 0); /* 0x1503BC01: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BC03: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1503BC06: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1503BC09: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BC0C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BC0F: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BC14: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1503BC17: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x24), 0 */ /* 0x1503BC1A: cmp dword ptr [eax + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BC2B; /* 0x1503BC1E: jne 0x1503bc2b */
L_1503BC20:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BC20: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BC23: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503BB27); /* 0x1503BC26: call 0x1503bb27 */
    RECOMP_FLAGS_IN();
L_1503BC2B:
    PUSH32(esp, 0); /* 0x1503BC2B: push 0 */
    PUSH32(esp, 0); /* 0x1503BC2D: push 0 */
    PUSH32(esp, 0); /* 0x1503BC2F: push 0 */
    PUSH32(esp, 0); /* 0x1503BC31: push 0 */
    PUSH32(esp, 0); /* 0x1503BC33: push 0 */
    eax = ebp + (-0x4); /* 0x1503BC35: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1503BC38: push eax */
    PUSH32(esp, 0x123u); /* 0x1503BC39: push 0x123 */
    RECOMP_CALL(sub_1503B96C); /* 0x1503BC3E: call 0x1503b96c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503BC43: add esp, 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1503BC46: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x1503BC49: mov ebx, dword ptr [ebp + 0xc] */
    esp = MEM32(ebx + 0x1C); /* 0x1503BC4C: mov esp, dword ptr [ebx + 0x1c] */
    ebp = MEM32(ebx + 0x20); /* 0x1503BC4F: mov ebp, dword ptr [ebx + 0x20] */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1503BC57:
    ebx = POP32_VAL(esp); /* 0x1503BC57: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BC58: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BC59: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1503BC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BC60u);

L_1503BC60:
    edi = edi; /* 0x1503BC60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BC62: push ebp */
    ebp = esp; /* 0x1503BC63: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1503BC65: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1503BC68: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503BC69: mov esi, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x1503BC6C: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_15068820); /* 0x1503BC6E: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503BC73: mov ecx, eax */
    eax = MEM32(ecx + 0x98); /* 0x1503BC75: mov eax, dword ptr [ecx + 0x98] */
    MEM32(esi + 0x4) = eax; /* 0x1503BC7B: mov dword ptr [esi + 4], eax */
    /* test ecx, ecx */ /* 0x1503BC7E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BC89; /* 0x1503BC80: jne 0x1503bc89 */
L_1503BC82:
    RECOMP_CALL(sub_15068820); /* 0x1503BC82: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503BC87: mov ecx, eax */
L_1503BC89:
    MEM32(ecx + 0x98) = esi; /* 0x1503BC89: mov dword ptr [ecx + 0x98], esi */
    eax = esi; /* 0x1503BC8F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503BC91: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503BC92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BC93: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BC9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BC9Au);

L_1503BC9A:
    edi = edi; /* 0x1503BC9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BC9C: push ebp */
    ebp = esp; /* 0x1503BC9D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503BC9F: push esi */
    RECOMP_CALL(sub_15068820); /* 0x1503BCA0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1503BCA5: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(eax + 0x98) */ /* 0x1503BCA8: cmp esi, dword ptr [eax + 0x98] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BCC5; /* 0x1503BCAE: jne 0x1503bcc5 */
L_1503BCB0:
    esi = MEM32(esi + 0x4); /* 0x1503BCB0: mov esi, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1503BCB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BCBC; /* 0x1503BCB5: jne 0x1503bcbc */
L_1503BCB7:
    RECOMP_CALL(sub_15068820); /* 0x1503BCB7: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503BCBC:
    MEM32(eax + 0x98) = esi; /* 0x1503BCBC: mov dword ptr [eax + 0x98], esi */
L_1503BCC2:
    esi = POP32_VAL(esp); /* 0x1503BCC2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503BCC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BCC4: ret  */
L_1503BCC5:
    /* test eax, eax */ /* 0x1503BCC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BCCE; /* 0x1503BCC7: jne 0x1503bcce */
L_1503BCC9:
    RECOMP_CALL(sub_15068820); /* 0x1503BCC9: call 0x15068820 */
    RECOMP_FLAGS_IN();
L_1503BCCE:
    ecx = MEM32(eax + 0x98); /* 0x1503BCCE: mov ecx, dword ptr [eax + 0x98] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1503BCD4: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_1503BCE0; /* 0x1503BCD7: jmp 0x1503bce0 */
L_1503BCD9:
    /* cmp esi, eax */ /* 0x1503BCD9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BCE8; /* 0x1503BCDB: je 0x1503bce8 */
L_1503BCDD:
    ecx = eax + 0x4; /* 0x1503BCDD: lea ecx, [eax + 4] */
L_1503BCE0:
    eax = MEM32(ecx); /* 0x1503BCE0: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x1503BCE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BCEF; /* 0x1503BCE4: je 0x1503bcef */
L_1503BCE6:
    RECOMP_BACKEDGE();
    goto L_1503BCD9; /* 0x1503BCE6: jmp 0x1503bcd9 */
L_1503BCE8:
    eax = MEM32(esi + 0x4); /* 0x1503BCE8: mov eax, dword ptr [esi + 4] */
    MEM32(ecx) = eax; /* 0x1503BCEB: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_1503BCC2; /* 0x1503BCED: jmp 0x1503bcc2 */
L_1503BCEF:
    RECOMP_CALL(sub_1503B080); /* 0x1503BCEF: call 0x1503b080 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503BCF4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503BD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BD00u);

L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BD40u);

L_1503BD40:
    edi = edi; /* 0x1503BD40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BD42: push ebp */
    ebp = esp; /* 0x1503BD43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503BD45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503BD46: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503BD49: push esi */
    RECOMP_CALL(sub_1505EAB3); /* 0x1503BD4A: call 0x1505eab3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1503BD4F: push dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x1503BD52: push dword ptr [esi + 0x28] */
    PUSH32(esp, 0); /* 0x1503BD55: push 0 */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1503BD57: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1503ADC5); /* 0x1503BD5A: call 0x1503adc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503BD5F: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1503BD62: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503BD63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503BD64: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503BD6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BD6Du);

L_1503BD6D:
    edi = edi; /* 0x1503BD6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BD6F: push ebp */
    ebp = esp; /* 0x1503BD70: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1503BD72: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1503BD75: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + (-0x4)); /* 0x1503BD77: mov ecx, dword ptr [eax - 4] */
    eax = edx; /* 0x1503BD7A: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x4); /* 0x1503BD7C: sub eax, dword ptr [ecx + 4] */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x1503BD7F: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BD8A; /* 0x1503BD83: je 0x1503bd8a */
L_1503BD85:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x8); /* 0x1503BD85: sub edx, dword ptr [ecx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x1503BD88: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
L_1503BD8A:
    ebp = POP32_VAL(esp); /* 0x1503BD8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BDA0u);

L_1503BDA0:
    edi = edi; /* 0x1503BDA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BDA2: push ebp */
    ebp = esp; /* 0x1503BDA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1503BDA5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1503BDA8: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503BDAB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1503BDAD: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1503BDB0: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503BDB3: push ebx */
    PUSH32(esp, esi); /* 0x1503BDB4: push esi */
    eax = MEM32(eax + 0x10); /* 0x1503BDB5: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503BDB8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503BDBA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503BDBB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1503BDBD: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1503BDC0: mov dword ptr [ebp - 8], ecx */
    esi = MEM32(eax + 0xC); /* 0x1503BDC3: mov esi, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1503BDC6: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1503BDC9: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1503BDCC: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1503BDCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BEDC; /* 0x1503BDD1: je 0x1503bedc */
L_1503BDD7:
    esi = MEM32(esi + edi * 4); /* 0x1503BDD7: mov esi, dword ptr [esi + edi*4] */
    eax = edi; /* 0x1503BDDA: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1503BDDC: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1503BDDE: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503BE2D; /* 0x1503BDE1: jbe 0x1503be2d */
L_1503BDE3:
    eax = MEM32(esi); /* 0x1503BDE3: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x18); /* 0x1503BDE5: mov ecx, dword ptr [ebp + 0x18] */
    /* cmp eax, ecx */ /* 0x1503BDE8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BE1E; /* 0x1503BDEA: je 0x1503be1e */
L_1503BDEC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503BDEC: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503BDEF: add eax, 8 */
    _flag_k = FK_ADD;
L_1503BDF2:
    SET_LO8(edx, MEM8(eax)); /* 0x1503BDF2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503BDF4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BE12; /* 0x1503BDF6: jne 0x1503be12 */
L_1503BDF8:
    /* test LO8(edx), LO8(edx) */ /* 0x1503BDF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BE0E; /* 0x1503BDFA: je 0x1503be0e */
L_1503BDFC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503BDFC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503BDFF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BE12; /* 0x1503BE02: jne 0x1503be12 */
L_1503BE04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503BE04: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503BE07: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503BE0A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BDF2; /* 0x1503BE0C: jne 0x1503bdf2 */
L_1503BE0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BE0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503BE17; /* 0x1503BE10: jmp 0x1503be17 */
L_1503BE12:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503BE12: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503BE14: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BE17:
    /* test eax, eax */ /* 0x1503BE17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BE2D; /* 0x1503BE19: jne 0x1503be2d */
L_1503BE1B:
    edx = MEM32(ebp + (-0x4)); /* 0x1503BE1B: mov edx, dword ptr [ebp - 4] */
L_1503BE1E:
    /* test edx, edx */ /* 0x1503BE1E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BE97; /* 0x1503BE20: jne 0x1503be97 */
L_1503BE22:
    eax = MEM32(esi + 0x4); /* 0x1503BE22: mov eax, dword ptr [esi + 4] */
    ebx = esi; /* 0x1503BE25: mov ebx, esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1503BE27: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503BE2A: mov dword ptr [ebp - 0xc], eax */
L_1503BE2D:
    eax = MEM32(esi); /* 0x1503BE2D: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x1503BE2F: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x1503BE32: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BE65; /* 0x1503BE34: je 0x1503be65 */
L_1503BE36:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503BE36: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503BE39: add eax, 8 */
    _flag_k = FK_ADD;
L_1503BE3C:
    SET_LO8(edx, MEM8(eax)); /* 0x1503BE3C: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503BE3E: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BE5C; /* 0x1503BE40: jne 0x1503be5c */
L_1503BE42:
    /* test LO8(edx), LO8(edx) */ /* 0x1503BE42: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BE58; /* 0x1503BE44: je 0x1503be58 */
L_1503BE46:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503BE46: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503BE49: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BE5C; /* 0x1503BE4C: jne 0x1503be5c */
L_1503BE4E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503BE4E: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503BE51: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503BE54: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BE3C; /* 0x1503BE56: jne 0x1503be3c */
L_1503BE58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BE58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503BE61; /* 0x1503BE5A: jmp 0x1503be61 */
L_1503BE5C:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503BE5C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503BE5E: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BE61:
    /* test eax, eax */ /* 0x1503BE61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BE83; /* 0x1503BE63: jne 0x1503be83 */
L_1503BE65:
    eax = esi + 0x8; /* 0x1503BE65: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1503BE68: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BE69: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503BE6C: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503BE71: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503BE72: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1503BE73: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BE83; /* 0x1503BE76: jne 0x1503be83 */
L_1503BE78:
    /* test ebx, ebx */ /* 0x1503BE78: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BEA7; /* 0x1503BE7A: jne 0x1503bea7 */
L_1503BE7C:
    edx = esi; /* 0x1503BE7C: mov edx, esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1503BE7E: mov dword ptr [ebp - 4], edx */
    goto L_1503BE86; /* 0x1503BE81: jmp 0x1503be86 */
L_1503BE83:
    edx = MEM32(ebp + (-0x4)); /* 0x1503BE83: mov edx, dword ptr [ebp - 4] */
L_1503BE86:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503BE86: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x10)) */ /* 0x1503BE87: cmp edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503BEDC; /* 0x1503BE8A: jae 0x1503bedc */
L_1503BE8C:
    ecx = MEM32(ebp + (-0x8)); /* 0x1503BE8C: mov ecx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x14)); /* 0x1503BE8F: mov esi, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1503BDD7; /* 0x1503BE92: jmp 0x1503bdd7 */
L_1503BE97:
    /* test MEM8(esi + 0x14), 3 */ /* 0x1503BE97: test byte ptr [esi + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BEDC; /* 0x1503BE9B: jne 0x1503bedc */
L_1503BE9D:
    /* test MEM8(edx + 0x14), 1 */ /* 0x1503BE9D: test byte ptr [edx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BEDC; /* 0x1503BEA1: jne 0x1503bedc */
L_1503BEA3:
    eax = esi; /* 0x1503BEA3: mov eax, esi */
    goto L_1503BEDE; /* 0x1503BEA5: jmp 0x1503bede */
L_1503BEA7:
    eax = MEM32(ebp + (-0x8)); /* 0x1503BEA7: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1503BEAA: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp edi, MEM32(ebp + (-0xC)) */ /* 0x1503BEAC: cmp edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503BECC; /* 0x1503BEAF: ja 0x1503becc */
L_1503BEB1:
    /* test MEM8(ebx + 0x14), 0x40u */ /* 0x1503BEB1: test byte ptr [ebx + 0x14], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x14)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BEBD; /* 0x1503BEB5: jne 0x1503bebd */
L_1503BEB7:
    /* test eax, eax */ /* 0x1503BEB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BED8; /* 0x1503BEB9: jne 0x1503bed8 */
L_1503BEBB:
    goto L_1503BED2; /* 0x1503BEBB: jmp 0x1503bed2 */
L_1503BEBD:
    eax = MEM32(ebx + 0x18); /* 0x1503BEBD: mov eax, dword ptr [ebx + 0x18] */
    eax = MEM32(eax + 0xC); /* 0x1503BEC0: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x1503BEC3: mov eax, dword ptr [eax + edi*4] */
    /* test MEM8(eax + 0x14), 1 */ /* 0x1503BEC6: test byte ptr [eax + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1503BED6; /* 0x1503BECA: jmp 0x1503bed6 */
L_1503BECC:
    /* test MEM8(ebx + 0x14), 3 */ /* 0x1503BECC: test byte ptr [ebx + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BEDC; /* 0x1503BED0: jne 0x1503bedc */
L_1503BED2:
    /* test MEM8(esi + 0x14), 1 */ /* 0x1503BED2: test byte ptr [esi + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1503BED6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1503BEDC; /* 0x1503BED6: jne 0x1503bedc */
L_1503BED8:
    eax = ebx; /* 0x1503BED8: mov eax, ebx */
    goto L_1503BEDE; /* 0x1503BEDA: jmp 0x1503bede */
L_1503BEDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BEDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BEDE:
    edi = POP32_VAL(esp); /* 0x1503BEDE: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BEDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BEE0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BEE1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BEE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503BEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BEF0u);

L_1503BEF0:
    edi = edi; /* 0x1503BEF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BEF2: push ebp */
    ebp = esp; /* 0x1503BEF3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BEF5: push ecx */
    PUSH32(esp, ecx); /* 0x1503BEF6: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1503BEF7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1503BEFA: push ebx */
    PUSH32(esp, esi); /* 0x1503BEFB: push esi */
    PUSH32(esp, edi); /* 0x1503BEFC: push edi */
    eax = MEM32(eax + 0x10); /* 0x1503BEFD: mov eax, dword ptr [eax + 0x10] */
    edx = MEM32(eax + 0xC); /* 0x1503BF00: mov edx, dword ptr [eax + 0xc] */
    esi = MEM32(eax + 0x8); /* 0x1503BF03: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BF06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1503BF08: mov dword ptr [ebp - 4], edx */
    /* test esi, esi */ /* 0x1503BF0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BF55; /* 0x1503BF0D: je 0x1503bf55 */
L_1503BF0F:
    edi = MEM32(ebp + 0x10); /* 0x1503BF0F: mov edi, dword ptr [ebp + 0x10] */
L_1503BF12:
    ecx = MEM32(edx + eax * 4); /* 0x1503BF12: mov ecx, dword ptr [edx + eax*4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1503BF15: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ecx); /* 0x1503BF18: mov ecx, dword ptr [ecx] */
    /* cmp ecx, edi */ /* 0x1503BF1A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BF5C; /* 0x1503BF1C: je 0x1503bf5c */
L_1503BF1E:
    edx = edi + 0x8; /* 0x1503BF1E: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503BF21: add ecx, 8 */
    _flag_k = FK_ADD;
L_1503BF24:
    SET_LO8(ebx, MEM8(ecx)); /* 0x1503BF24: mov bl, byte ptr [ecx] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x1503BF26: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BF44; /* 0x1503BF28: jne 0x1503bf44 */
L_1503BF2A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503BF2A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BF40; /* 0x1503BF2C: je 0x1503bf40 */
L_1503BF2E:
    SET_LO8(ebx, MEM8(ecx + 0x1)); /* 0x1503BF2E: mov bl, byte ptr [ecx + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x1503BF31: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BF44; /* 0x1503BF34: jne 0x1503bf44 */
L_1503BF36:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503BF36: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1503BF39: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503BF3C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BF24; /* 0x1503BF3E: jne 0x1503bf24 */
L_1503BF40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503BF40: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503BF49; /* 0x1503BF42: jmp 0x1503bf49 */
L_1503BF44:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503BF44: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x1503BF46: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BF49:
    edx = MEM32(ebp + (-0x4)); /* 0x1503BF49: mov edx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1503BF4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BF5C; /* 0x1503BF4E: je 0x1503bf5c */
L_1503BF50:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503BF50: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1503BF51: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503BF12; /* 0x1503BF53: jb 0x1503bf12 */
L_1503BF55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BF55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BF57:
    edi = POP32_VAL(esp); /* 0x1503BF57: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BF58: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BF59: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BF5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BF5B: ret  */
L_1503BF5C:
    ecx = eax + 0x1; /* 0x1503BF5C: lea ecx, [eax + 1] */
    /* cmp ecx, esi */ /* 0x1503BF5F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503BF55; /* 0x1503BF61: jae 0x1503bf55 */
L_1503BF63:
    edi = MEM32(ebp + 0xC); /* 0x1503BF63: mov edi, dword ptr [ebp + 0xc] */
L_1503BF66:
    eax = MEM32(edx + ecx * 4); /* 0x1503BF66: mov eax, dword ptr [edx + ecx*4] */
    /* test MEM8(eax + 0x14), 4 */ /* 0x1503BF69: test byte ptr [eax + 0x14], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BF55; /* 0x1503BF6D: jne 0x1503bf55 */
L_1503BF6F:
    eax = MEM32(eax); /* 0x1503BF6F: mov eax, dword ptr [eax] */
    /* cmp eax, edi */ /* 0x1503BF71: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503BFAE; /* 0x1503BF73: je 0x1503bfae */
L_1503BF75:
    edx = edi + 0x8; /* 0x1503BF75: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503BF78: add eax, 8 */
    _flag_k = FK_ADD;
L_1503BF7B:
    SET_LO8(ebx, MEM8(eax)); /* 0x1503BF7B: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x1503BF7D: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BF9B; /* 0x1503BF7F: jne 0x1503bf9b */
L_1503BF81:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503BF81: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BF97; /* 0x1503BF83: je 0x1503bf97 */
L_1503BF85:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x1503BF85: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x1503BF88: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BF9B; /* 0x1503BF8B: jne 0x1503bf9b */
L_1503BF8D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503BF8D: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1503BF90: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503BF93: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503BF7B; /* 0x1503BF95: jne 0x1503bf7b */
L_1503BF97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BF97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503BFA0; /* 0x1503BF99: jmp 0x1503bfa0 */
L_1503BF9B:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503BF9B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503BF9D: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503BFA0:
    /* test eax, eax */ /* 0x1503BFA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BFAE; /* 0x1503BFA2: je 0x1503bfae */
L_1503BFA4:
    edx = MEM32(ebp + (-0x4)); /* 0x1503BFA4: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503BFA7: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1503BFA8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503BF66; /* 0x1503BFAA: jb 0x1503bf66 */
L_1503BFAC:
    RECOMP_BACKEDGE();
    goto L_1503BF55; /* 0x1503BFAC: jmp 0x1503bf55 */
L_1503BFAE:
    eax = MEM32(ebp + (-0x8)); /* 0x1503BFAE: mov eax, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1503BF57; /* 0x1503BFB1: jmp 0x1503bf57 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503BFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503BFC0u);

L_1503BFC0:
    edi = edi; /* 0x1503BFC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BFC2: push ebp */
    ebp = esp; /* 0x1503BFC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1503BFC5: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BFC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503BFCA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1503BFCC: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1503BFCF: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1503BFD2: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1503BFD5: push ebx */
    PUSH32(esp, esi); /* 0x1503BFD6: push esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503BFD7: mov dword ptr [ebp - 4], ecx */
    SET_LO8(ebx, 1); /* 0x1503BFDA: mov bl, 1 */
    eax = MEM32(eax + 0x10); /* 0x1503BFDC: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1503BFDF: mov dword ptr [ebp - 0xc], ecx */
    PUSH32(esp, edi); /* 0x1503BFE2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503BFE3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x1503BFE5: mov dword ptr [ebp - 8], edx */
    ecx = MEM32(eax + 0xC); /* 0x1503BFE8: mov ecx, dword ptr [eax + 0xc] */
    esi = MEM32(eax + 0x8); /* 0x1503BFEB: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BFEE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1503BFF0: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503BFF3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1503BFF5: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1503BFF8: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1503BFFB: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1503BFFE: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x1503C001: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C00F; /* 0x1503C003: jne 0x1503c00f */
L_1503C005:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C005: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C007:
    edi = POP32_VAL(esp); /* 0x1503C007: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C008: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C009: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C00A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C00B: ret  */
L_1503C00C:
    ecx = MEM32(ebp + (-0x14)); /* 0x1503C00C: mov ecx, dword ptr [ebp - 0x14] */
L_1503C00F:
    esi = MEM32(ebp + (-0x20)); /* 0x1503C00F: mov esi, dword ptr [ebp - 0x20] */
    esi = MEM32(esi + eax * 4); /* 0x1503C012: mov esi, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1503C015: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1503C017: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503C069; /* 0x1503C019: jbe 0x1503c069 */
L_1503C01B:
    eax = MEM32(esi); /* 0x1503C01B: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x18); /* 0x1503C01D: mov ecx, dword ptr [ebp + 0x18] */
    /* cmp eax, ecx */ /* 0x1503C020: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C053; /* 0x1503C022: je 0x1503c053 */
L_1503C024:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503C024: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C027: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C02A:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C02A: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C02C: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C04A; /* 0x1503C02E: jne 0x1503c04a */
L_1503C030:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C030: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C046; /* 0x1503C032: je 0x1503c046 */
L_1503C034:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C034: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C037: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C04A; /* 0x1503C03A: jne 0x1503c04a */
L_1503C03C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C03C: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C03F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C042: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C02A; /* 0x1503C044: jne 0x1503c02a */
L_1503C046:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C046: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C04F; /* 0x1503C048: jmp 0x1503c04f */
L_1503C04A:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C04A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C04C: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C04F:
    /* test eax, eax */ /* 0x1503C04F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C069; /* 0x1503C051: jne 0x1503c069 */
L_1503C053:
    eax = MEM32(ebp + (-0x10)); /* 0x1503C053: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(esi + 0x14), 3 */ /* 0x1503C056: test byte ptr [esi + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = eax; /* 0x1503C05A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x4); /* 0x1503C05D: mov eax, dword ptr [esi + 4] */
    if (TEST_Z(_flag_a, _flag_b)) { edi = esi; } /* 0x1503C060: cmove edi, esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1503C063: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x1503C066: mov dword ptr [ebp - 0x14], eax */
L_1503C069:
    eax = MEM32(esi); /* 0x1503C069: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x1503C06B: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x1503C06E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C0A5; /* 0x1503C070: je 0x1503c0a5 */
L_1503C072:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503C072: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C075: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C078:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C078: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C07A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C098; /* 0x1503C07C: jne 0x1503c098 */
L_1503C07E:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C07E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C094; /* 0x1503C080: je 0x1503c094 */
L_1503C082:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C082: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C085: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C098; /* 0x1503C088: jne 0x1503c098 */
L_1503C08A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C08A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C08D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C090: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C078; /* 0x1503C092: jne 0x1503c078 */
L_1503C094:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C094: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C09D; /* 0x1503C096: jmp 0x1503c09d */
L_1503C098:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C098: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C09A: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C09D:
    /* test eax, eax */ /* 0x1503C09D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C14F; /* 0x1503C09F: jne 0x1503c14f */
L_1503C0A5:
    eax = esi + 0x8; /* 0x1503C0A5: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1503C0A8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C0A9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C0AC: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1503C0B1: mov edx, dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x1503C0B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503C0B5: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1503C0B6: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C14A; /* 0x1503C0B9: jne 0x1503c14a */
L_1503C0BF:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503C0BF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1503C0C2: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x1503C0C4: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503C13D; /* 0x1503C0C7: ja 0x1503c13d */
L_1503C0C9:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C0C9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C14A; /* 0x1503C0CB: je 0x1503c14a */
L_1503C0CD:
    eax = MEM32(ebp + (-0xC)); /* 0x1503C0CD: mov eax, dword ptr [ebp - 0xc] */
    /* test MEM8(eax + 0x14), 0x40u */ /* 0x1503C0D0: test byte ptr [eax + 0x14], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C0EA; /* 0x1503C0D4: jne 0x1503c0ea */
L_1503C0D6:
    /* test edx, edx */ /* 0x1503C0D6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C0E6; /* 0x1503C0D8: jne 0x1503c0e6 */
L_1503C0DA:
    /* test MEM8(esi + 0x14), 1 */ /* 0x1503C0DA: test byte ptr [esi + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x1503C0DE: push edx */
    ebx = (uint32_t)LO8(ebx); /* 0x1503C0DF: movzx ebx, bl */
    ecx = POP32_VAL(esp); /* 0x1503C0E2: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = ecx; } /* 0x1503C0E3: cmovne ebx, ecx */
L_1503C0E6:
    SET_LO8(ecx, 1); /* 0x1503C0E6: mov cl, 1 */
    goto L_1503C10D; /* 0x1503C0E8: jmp 0x1503c10d */
L_1503C0EA:
    eax = MEM32(eax + 0x18); /* 0x1503C0EA: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, 0); /* 0x1503C0ED: push 0 */
    ebx = (uint32_t)LO8(ebx); /* 0x1503C0EF: movzx ebx, bl */
    esi = POP32_VAL(esp); /* 0x1503C0F2: pop esi */
    eax = MEM32(eax + 0xC); /* 0x1503C0F3: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1503C0F6: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax + 0x14); /* 0x1503C0F9: mov ecx, dword ptr [eax + 0x14] */
    /* test LO8(ecx), 1 */ /* 0x1503C0FC: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0xC)); /* 0x1503C0FF: mov eax, dword ptr [ebp - 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = esi; } /* 0x1503C102: cmovne ebx, esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1503C105: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1503C105: shr ecx, 2 */
    SET_LO8(ecx, ~LO8(ecx)); /* 0x1503C108: not cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) & 1); /* 0x1503C10A: and cl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1503C10D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C10D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C14A; /* 0x1503C10F: je 0x1503c14a */
L_1503C111:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503C111: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C14A; /* 0x1503C113: je 0x1503c14a */
L_1503C115:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C115: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503C118: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C119: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C11C: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1503C121: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1503C125: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503C126: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C132; /* 0x1503C127: je 0x1503c132 */
L_1503C129:
    /* cmp MEM32(ebp + (-0x1C)), eax */ /* 0x1503C129: cmp dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C005; /* 0x1503C12C: jne 0x1503c005 */
L_1503C132:
    ecx = MEM32(ebp + (-0xC)); /* 0x1503C132: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503C135: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1503C138: mov dword ptr [ebp - 0x1c], eax */
    goto L_1503C152; /* 0x1503C13B: jmp 0x1503c152 */
L_1503C13D:
    /* test MEM8(esi + 0x14), 5 */ /* 0x1503C13D: test byte ptr [esi + 0x14], 5 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x18)); /* 0x1503C141: mov eax, dword ptr [ebp - 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x1503C144: cmove eax, esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503C147: mov dword ptr [ebp - 0x18], eax */
L_1503C14A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C14A: mov ecx, dword ptr [ebp - 4] */
    goto L_1503C155; /* 0x1503C14D: jmp 0x1503c155 */
L_1503C14F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C14F: mov ecx, dword ptr [ebp - 4] */
L_1503C152:
    edx = MEM32(ebp + (-0x8)); /* 0x1503C152: mov edx, dword ptr [ebp - 8] */
L_1503C155:
    eax = MEM32(ebp + (-0x10)); /* 0x1503C155: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503C158: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1503C159: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1503C15C: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C00C; /* 0x1503C15F: jb 0x1503c00c */
L_1503C165:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C165: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C174; /* 0x1503C167: je 0x1503c174 */
L_1503C169:
    /* test ecx, ecx */ /* 0x1503C169: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C174; /* 0x1503C16B: je 0x1503c174 */
L_1503C16D:
    eax = ecx; /* 0x1503C16D: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1503C007; /* 0x1503C16F: jmp 0x1503c007 */
L_1503C174:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1503C174: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C005; /* 0x1503C178: je 0x1503c005 */
L_1503C17E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C17E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503C180: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = edi; } /* 0x1503C182: cmovne eax, edi */
    RECOMP_BACKEDGE();
    goto L_1503C007; /* 0x1503C185: jmp 0x1503c007 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C190u);

L_1503C190:
    edi = edi; /* 0x1503C190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C192: push ebp */
    ebp = esp; /* 0x1503C193: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1503C195: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1503C198: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503C19B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503C19D: push ebx */
    PUSH32(esp, esi); /* 0x1503C19E: push esi */
    PUSH32(esp, edi); /* 0x1503C19F: push edi */
    eax = MEM32(eax + 0x10); /* 0x1503C1A0: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503C1A3: mov dword ptr [ebp - 4], ecx */
    edx = MEM32(eax + 0x8); /* 0x1503C1A6: mov edx, dword ptr [eax + 8] */
    edi = MEM32(eax + 0xC); /* 0x1503C1A9: mov edi, dword ptr [eax + 0xc] */
    esi = edi; /* 0x1503C1AC: mov esi, edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x1503C1AE: mov dword ptr [ebp - 8], edx */
    /* test edx, edx */ /* 0x1503C1B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C2D5; /* 0x1503C1B3: je 0x1503c2d5 */
L_1503C1B9:
    ebx = MEM32(ebp + 0x18); /* 0x1503C1B9: mov ebx, dword ptr [ebp + 0x18] */
L_1503C1BC:
    eax = MEM32(esi); /* 0x1503C1BC: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1503C1BE: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(eax); /* 0x1503C1C1: mov eax, dword ptr [eax] */
    /* cmp eax, ebx */ /* 0x1503C1C3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C1FC; /* 0x1503C1C5: je 0x1503c1fc */
L_1503C1C7:
    ecx = ebx + 0x8; /* 0x1503C1C7: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C1CA: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C1CD:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C1CD: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C1CF: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C1ED; /* 0x1503C1D1: jne 0x1503c1ed */
L_1503C1D3:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C1D3: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C1E9; /* 0x1503C1D5: je 0x1503c1e9 */
L_1503C1D7:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C1D7: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C1DA: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C1ED; /* 0x1503C1DD: jne 0x1503c1ed */
L_1503C1DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C1DF: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C1E2: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C1E5: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C1CD; /* 0x1503C1E7: jne 0x1503c1cd */
L_1503C1E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C1E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C1F2; /* 0x1503C1EB: jmp 0x1503c1f2 */
L_1503C1ED:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C1ED: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C1EF: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C1F2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C1F2: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1503C1F5: mov edx, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1503C1F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C276; /* 0x1503C1FA: jne 0x1503c276 */
L_1503C1FC:
    eax = MEM32(esi); /* 0x1503C1FC: mov eax, dword ptr [esi] */
    ebx = esi + 0x4; /* 0x1503C1FE: lea ebx, [esi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1503C201: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1503C205: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1503C208: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1503C20B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C273; /* 0x1503C20D: je 0x1503c273 */
L_1503C20F:
    eax = MEM32(ebx); /* 0x1503C20F: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + 0x10); /* 0x1503C211: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1503C214: mov eax, dword ptr [eax] */
    /* cmp eax, ecx */ /* 0x1503C216: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C249; /* 0x1503C218: je 0x1503c249 */
L_1503C21A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503C21A: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C21D: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C220:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C220: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C222: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C240; /* 0x1503C224: jne 0x1503c240 */
L_1503C226:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C226: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C23C; /* 0x1503C228: je 0x1503c23c */
L_1503C22A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C22A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C22D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C240; /* 0x1503C230: jne 0x1503c240 */
L_1503C232:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C232: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C235: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C238: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C220; /* 0x1503C23A: jne 0x1503c220 */
L_1503C23C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C23C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C245; /* 0x1503C23E: jmp 0x1503c245 */
L_1503C240:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C240: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C242: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C245:
    /* test eax, eax */ /* 0x1503C245: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C25E; /* 0x1503C247: jne 0x1503c25e */
L_1503C249:
    eax = MEM32(ebx); /* 0x1503C249: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C24B: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503C24E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C24F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C252: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503C257: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503C258: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1503C259: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C2B5; /* 0x1503C25C: je 0x1503c2b5 */
L_1503C25E:
    ecx = MEM32(ebp + (-0xC)); /* 0x1503C25E: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1503C261: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503C264: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1503C265: mov dword ptr [ebp - 0xc], ecx */
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x1503C268: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C20F; /* 0x1503C26B: jb 0x1503c20f */
L_1503C26D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C26D: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1503C270: mov edx, dword ptr [ebp - 8] */
L_1503C273:
    ebx = MEM32(ebp + 0x18); /* 0x1503C273: mov ebx, dword ptr [ebp + 0x18] */
L_1503C276:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503C276: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1503C277: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503C27A: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, edx */ /* 0x1503C27D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C1BC; /* 0x1503C27F: jb 0x1503c1bc */
L_1503C285:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503C285: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C287:
    edx = MEM32(edi); /* 0x1503C287: mov edx, dword ptr [edi] */
    eax = MEM32(edx); /* 0x1503C289: mov eax, dword ptr [edx] */
    /* cmp eax, ebx */ /* 0x1503C28B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C2C3; /* 0x1503C28D: je 0x1503c2c3 */
L_1503C28F:
    ecx = ebx + 0x8; /* 0x1503C28F: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C292: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C295:
    SET_LO8(ebx, MEM8(eax)); /* 0x1503C295: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x1503C297: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C2BA; /* 0x1503C299: jne 0x1503c2ba */
L_1503C29B:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C29B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C2B1; /* 0x1503C29D: je 0x1503c2b1 */
L_1503C29F:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x1503C29F: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x1503C2A2: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C2BA; /* 0x1503C2A5: jne 0x1503c2ba */
L_1503C2A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C2A7: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C2AA: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C2AD: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C295; /* 0x1503C2AF: jne 0x1503c295 */
L_1503C2B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C2B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C2BF; /* 0x1503C2B3: jmp 0x1503c2bf */
L_1503C2B5:
    eax = MEM32(ebp + (-0x14)); /* 0x1503C2B5: mov eax, dword ptr [ebp - 0x14] */
    goto L_1503C2D7; /* 0x1503C2B8: jmp 0x1503c2d7 */
L_1503C2BA:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C2BA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C2BC: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C2BF:
    /* test eax, eax */ /* 0x1503C2BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C2C9; /* 0x1503C2C1: jne 0x1503c2c9 */
L_1503C2C3:
    /* test MEM8(edx + 0x14), 3 */ /* 0x1503C2C3: test byte ptr [edx + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C2DC; /* 0x1503C2C7: je 0x1503c2dc */
L_1503C2C9:
    ebx = MEM32(ebp + 0x18); /* 0x1503C2C9: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503C2CC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1503C2CD: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x1503C2D0: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C287; /* 0x1503C2D3: jb 0x1503c287 */
L_1503C2D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C2D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C2D7:
    edi = POP32_VAL(esp); /* 0x1503C2D7: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C2D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C2D9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C2DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C2DB: ret  */
L_1503C2DC:
    eax = edx; /* 0x1503C2DC: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1503C2D7; /* 0x1503C2DE: jmp 0x1503c2d7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C2F0u);

L_1503C2F0:
    edi = edi; /* 0x1503C2F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C2F2: push ebp */
    ebp = esp; /* 0x1503C2F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503C2F5: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1503C2F6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503C2F9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503C2FB: push ebx */
    PUSH32(esp, esi); /* 0x1503C2FC: push esi */
    PUSH32(esp, edi); /* 0x1503C2FD: push edi */
    eax = MEM32(eax + 0x10); /* 0x1503C2FE: mov eax, dword ptr [eax + 0x10] */
    ebx = MEM32(eax + 0x8); /* 0x1503C301: mov ebx, dword ptr [eax + 8] */
    esi = MEM32(eax + 0xC); /* 0x1503C304: mov esi, dword ptr [eax + 0xc] */
    /* test ebx, ebx */ /* 0x1503C307: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C361; /* 0x1503C309: je 0x1503c361 */
L_1503C30B:
    ecx = MEM32(esi); /* 0x1503C30B: mov ecx, dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x1503C30D: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1503C310: mov eax, dword ptr [ecx] */
    /* cmp eax, edi */ /* 0x1503C312: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C353; /* 0x1503C314: je 0x1503c353 */
L_1503C316:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1503C316: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C319: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C31C:
    SET_LO8(ecx, MEM8(eax)); /* 0x1503C31C: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edi) */ /* 0x1503C31E: cmp cl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1503C320: mov byte ptr [ebp - 1], cl */
    ecx = MEM32(esi); /* 0x1503C323: mov ecx, dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C34A; /* 0x1503C325: jne 0x1503c34a */
L_1503C327:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503C327: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C346; /* 0x1503C32B: je 0x1503c346 */
L_1503C32D:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x1503C32D: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edi + 0x1) */ /* 0x1503C330: cmp cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1503C333: mov byte ptr [ebp - 1], cl */
    ecx = MEM32(esi); /* 0x1503C336: mov ecx, dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C34A; /* 0x1503C338: jne 0x1503c34a */
L_1503C33A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C33A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1503C33D: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503C340: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C31C; /* 0x1503C344: jne 0x1503c31c */
L_1503C346:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C346: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C34F; /* 0x1503C348: jmp 0x1503c34f */
L_1503C34A:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C34A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C34C: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C34F:
    /* test eax, eax */ /* 0x1503C34F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C359; /* 0x1503C351: jne 0x1503c359 */
L_1503C353:
    /* test MEM8(ecx + 0x14), 1 */ /* 0x1503C353: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C368; /* 0x1503C357: je 0x1503c368 */
L_1503C359:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503C359: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1503C35A: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x1503C35D: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C30B; /* 0x1503C35F: jb 0x1503c30b */
L_1503C361:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C361: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C363:
    edi = POP32_VAL(esp); /* 0x1503C363: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C364: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C365: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C366: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C367: ret  */
L_1503C368:
    eax = ecx; /* 0x1503C368: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1503C363; /* 0x1503C36A: jmp 0x1503c363 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C380u);

L_1503C380:
    edi = edi; /* 0x1503C380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C382: push ebp */
    ebp = esp; /* 0x1503C383: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503C385: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1503C388: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503C38B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503C38D: push ebx */
    PUSH32(esp, esi); /* 0x1503C38E: push esi */
    PUSH32(esp, edi); /* 0x1503C38F: push edi */
    eax = MEM32(eax + 0x10); /* 0x1503C390: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503C393: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x1503C395: mov dword ptr [ebp - 8], edx */
    ecx = MEM32(eax + 0x8); /* 0x1503C398: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1503C39B: mov eax, dword ptr [eax + 0xc] */
    ebx = eax; /* 0x1503C39E: mov ebx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503C3A0: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503C3A3: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x1503C3A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C4C4; /* 0x1503C3A8: je 0x1503c4c4 */
L_1503C3AE:
    esi = MEM32(ebp + 0x18); /* 0x1503C3AE: mov esi, dword ptr [ebp + 0x18] */
L_1503C3B1:
    eax = MEM32(ebx); /* 0x1503C3B1: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1503C3B3: mov eax, dword ptr [eax] */
    /* cmp eax, esi */ /* 0x1503C3B5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C3F2; /* 0x1503C3B7: je 0x1503c3f2 */
L_1503C3B9:
    ecx = esi + 0x8; /* 0x1503C3B9: lea ecx, [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C3BC: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C3BF:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C3BF: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C3C1: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C3DF; /* 0x1503C3C3: jne 0x1503c3df */
L_1503C3C5:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C3C5: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C3DB; /* 0x1503C3C7: je 0x1503c3db */
L_1503C3C9:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C3C9: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C3CC: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C3DF; /* 0x1503C3CF: jne 0x1503c3df */
L_1503C3D1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C3D1: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C3D4: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C3D7: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C3BF; /* 0x1503C3D9: jne 0x1503c3bf */
L_1503C3DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C3DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C3E4; /* 0x1503C3DD: jmp 0x1503c3e4 */
L_1503C3DF:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C3DF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C3E1: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C3E4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C3E4: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1503C3E7: mov edx, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1503C3EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C4AA; /* 0x1503C3EC: jne 0x1503c4aa */
L_1503C3F2:
    eax = MEM32(ebx); /* 0x1503C3F2: mov eax, dword ptr [ebx] */
    esi = ebx + 0x4; /* 0x1503C3F4: lea esi, [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1503C3F7: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x1503C3FB: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1503C3FE: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1503C401: mov dword ptr [ebp - 0x18], eax */
    /* test eax, eax */ /* 0x1503C404: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C4A7; /* 0x1503C406: je 0x1503c4a7 */
L_1503C40C:
    eax = MEM32(esi); /* 0x1503C40C: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x1503C40E: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1503C411: mov eax, dword ptr [eax] */
    /* cmp eax, ecx */ /* 0x1503C413: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C446; /* 0x1503C415: je 0x1503c446 */
L_1503C417:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1503C417: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C41A: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C41D:
    SET_LO8(edx, MEM8(eax)); /* 0x1503C41D: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x1503C41F: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C43D; /* 0x1503C421: jne 0x1503c43d */
L_1503C423:
    /* test LO8(edx), LO8(edx) */ /* 0x1503C423: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C439; /* 0x1503C425: je 0x1503c439 */
L_1503C427:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1503C427: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1503C42A: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C43D; /* 0x1503C42D: jne 0x1503c43d */
L_1503C42F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C42F: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C432: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1503C435: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C41D; /* 0x1503C437: jne 0x1503c41d */
L_1503C439:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C439: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C442; /* 0x1503C43B: jmp 0x1503c442 */
L_1503C43D:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C43D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C43F: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C442:
    /* test eax, eax */ /* 0x1503C442: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C48B; /* 0x1503C444: jne 0x1503c48b */
L_1503C446:
    eax = MEM32(esi); /* 0x1503C446: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C448: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503C44B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C44C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C44F: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503C454: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503C455: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1503C456: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C48B; /* 0x1503C459: jne 0x1503c48b */
L_1503C45B:
    /* test edi, edi */ /* 0x1503C45B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C489; /* 0x1503C45D: je 0x1503c489 */
L_1503C45F:
    eax = MEM32(ebx); /* 0x1503C45F: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C461: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503C464: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C465: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C468: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503C46D: mov esi, eax */
    eax = edi + 0x8; /* 0x1503C46F: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1503C472: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C473: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C476: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503C47B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1503C47E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C51B; /* 0x1503C480: jne 0x1503c51b */
L_1503C486:
    esi = MEM32(ebp + (-0x14)); /* 0x1503C486: mov esi, dword ptr [ebp - 0x14] */
L_1503C489:
    edi = MEM32(ebx); /* 0x1503C489: mov edi, dword ptr [ebx] */
L_1503C48B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503C48B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1503C48E: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503C491: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = esi; /* 0x1503C492: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1503C495: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x1503C498: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C40C; /* 0x1503C49B: jb 0x1503c40c */
L_1503C4A1:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C4A1: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1503C4A4: mov edx, dword ptr [ebp - 8] */
L_1503C4A7:
    esi = MEM32(ebp + 0x18); /* 0x1503C4A7: mov esi, dword ptr [ebp + 0x18] */
L_1503C4AA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503C4AA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1503C4AB: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x1503C4AE: mov dword ptr [ebp - 8], edx */
    /* cmp edx, ecx */ /* 0x1503C4B1: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C3B1; /* 0x1503C4B3: jb 0x1503c3b1 */
L_1503C4B9:
    /* test edi, edi */ /* 0x1503C4B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C4C1; /* 0x1503C4BB: je 0x1503c4c1 */
L_1503C4BD:
    eax = edi; /* 0x1503C4BD: mov eax, edi */
    goto L_1503C51D; /* 0x1503C4BF: jmp 0x1503c51d */
L_1503C4C1:
    eax = MEM32(ebp + (-0xC)); /* 0x1503C4C1: mov eax, dword ptr [ebp - 0xc] */
L_1503C4C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503C4C4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1503C4C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C51B; /* 0x1503C4C8: je 0x1503c51b */
L_1503C4CA:
    edx = MEM32(eax); /* 0x1503C4CA: mov edx, dword ptr [eax] */
    ebx = MEM32(ebp + 0x18); /* 0x1503C4CC: mov ebx, dword ptr [ebp + 0x18] */
    eax = MEM32(edx); /* 0x1503C4CF: mov eax, dword ptr [edx] */
    /* cmp eax, ebx */ /* 0x1503C4D1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C507; /* 0x1503C4D3: je 0x1503c507 */
L_1503C4D5:
    ecx = ebx + 0x8; /* 0x1503C4D5: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C4D8: add eax, 8 */
    _flag_k = FK_ADD;
L_1503C4DB:
    SET_LO8(ebx, MEM8(eax)); /* 0x1503C4DB: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x1503C4DD: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C4FB; /* 0x1503C4DF: jne 0x1503c4fb */
L_1503C4E1:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C4E1: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C4F7; /* 0x1503C4E3: je 0x1503c4f7 */
L_1503C4E5:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x1503C4E5: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x1503C4E8: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C4FB; /* 0x1503C4EB: jne 0x1503c4fb */
L_1503C4ED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503C4ED: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503C4F0: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503C4F3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C4DB; /* 0x1503C4F5: jne 0x1503c4db */
L_1503C4F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C4F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C500; /* 0x1503C4F9: jmp 0x1503c500 */
L_1503C4FB:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503C4FB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C4FD: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C500:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503C500: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1503C503: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C50D; /* 0x1503C505: jne 0x1503c50d */
L_1503C507:
    /* test MEM8(edx + 0x14), 3 */ /* 0x1503C507: test byte ptr [edx + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C522; /* 0x1503C50B: je 0x1503c522 */
L_1503C50D:
    eax = MEM32(ebp + (-0xC)); /* 0x1503C50D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503C510: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1503C511: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1503C514: mov dword ptr [ebp - 0xc], eax */
    /* cmp esi, ecx */ /* 0x1503C517: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C4CA; /* 0x1503C519: jb 0x1503c4ca */
L_1503C51B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C51B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C51D:
    edi = POP32_VAL(esp); /* 0x1503C51D: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C51E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C51F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C520: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C521: ret  */
L_1503C522:
    eax = edx; /* 0x1503C522: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1503C51D; /* 0x1503C524: jmp 0x1503c51d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C52C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C52Cu);

L_1503C52C:
    edi = edi; /* 0x1503C52C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C52E: push ebp */
    ebp = esp; /* 0x1503C52F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503C531: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503C532: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503C535: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edx */ /* 0x1503C537: cmp dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503C54B; /* 0x1503C53A: jl 0x1503c54b */
L_1503C53C:
    edx = MEM32(esi + 0x4); /* 0x1503C53C: mov edx, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1503C53F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx + eax); /* 0x1503C542: mov ecx, dword ptr [edx + eax] */
    eax = MEM32(esi + 0x8); /* 0x1503C545: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + eax); /* 0x1503C548: add edx, dword ptr [ecx + eax] */
    _flag_k = FK_ADD;
L_1503C54B:
    eax = MEM32(esi); /* 0x1503C54B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1503C54D: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1503C54F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503C550: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C551: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503C560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C560u);

L_1503C560:
    PUSH32(esp, 0x14u); /* 0x1503C560: push 0x14 */
    PUSH32(esp, 0x150AFE70u); /* 0x1503C562: push 0x150afe70 */
    RECOMP_CALL(sub_1505E988); /* 0x1503C567: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1503C56C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C584; /* 0x1503C570: jne 0x1503c584 */
L_1503C572:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C572: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C574:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503C574: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503C577: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503C57E: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503C57F: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C580: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C581: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C582: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C583: ret  */
L_1503C584:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503C584: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C588: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503BD6D); /* 0x1503C58B: call 0x1503bd6d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503C590: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503C591: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_BACKEDGE();
    goto L_1503C574; /* 0x1503C598: jmp 0x1503c574 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C5E0u);

L_1503C5E0:
    PUSH32(esp, 0x24u); /* 0x1503C5E0: push 0x24 */
    PUSH32(esp, 0x150AFE30u); /* 0x1503C5E2: push 0x150afe30 */
    RECOMP_CALL(sub_1505E988); /* 0x1503C5E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1503C5EC: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1503C5EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C605; /* 0x1503C5F1: jne 0x1503c605 */
L_1503C5F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C5F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C5F5:
    ecx = MEM32(ebp + (-0x10)); /* 0x1503C5F5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503C5F8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503C5FF: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503C600: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C601: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C602: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C603: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C604: ret  */
L_1503C605:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503C605: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1503C607: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edi); /* 0x1503C60A: push edi */
    RECOMP_CALL(sub_1503BD6D); /* 0x1503C60B: call 0x1503bd6d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503C610: pop ecx */
    ebx = eax; /* 0x1503C611: mov ebx, eax */
    ecx = MEM32(edi); /* 0x1503C613: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx + (-0x4)); /* 0x1503C615: mov ecx, dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0xC); /* 0x1503C618: sub edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1503C61B: sub edi, ebx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x10); /* 0x1503C61D: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(eax + 0xC); /* 0x1503C620: mov edx, dword ptr [eax + 0xc] */
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1503C623: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C635; /* 0x1503C626: je 0x1503c635 */
L_1503C628:
    eax = MEM32(edx); /* 0x1503C628: mov eax, dword ptr [edx] */
    /* test MEM8(eax + 0x14), 0x40u */ /* 0x1503C62A: test byte ptr [eax + 0x14], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C635; /* 0x1503C62E: jne 0x1503c635 */
L_1503C630:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C630: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503C632: inc eax */
    _flag_k = FK_INC;
    goto L_1503C637; /* 0x1503C633: jmp 0x1503c637 */
L_1503C635:
    eax = esi; /* 0x1503C635: mov eax, esi */
L_1503C637:
    edx = 0x1503C380u; /* 0x1503C637: mov edx, 0x1503c380 */
    MEM32(ebp + (-0x20)) = 0x1503BFC0u; /* 0x1503C63C: mov dword ptr [ebp - 0x20], 0x1503bfc0 */
    /* test eax, eax */ /* 0x1503C643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x20)); } /* 0x1503C645: cmove edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x28)) = edx; /* 0x1503C649: mov dword ptr [ebp - 0x28], edx */
    edx = 0x1503C190u; /* 0x1503C64C: mov edx, 0x1503c190 */
    MEM32(ebp + (-0x20)) = 0x1503BDA0u; /* 0x1503C651: mov dword ptr [ebp - 0x20], 0x1503bda0 */
    if (TEST_Z(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x20)); } /* 0x1503C658: cmove edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1503C65C: mov dword ptr [ebp - 0x24], edx */
    edx = 0x1503C2F0u; /* 0x1503C65F: mov edx, 0x1503c2f0 */
    MEM32(ebp + (-0x20)) = 0x1503BEF0u; /* 0x1503C664: mov dword ptr [ebp - 0x20], 0x1503bef0 */
    if (TEST_Z(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x20)); } /* 0x1503C66B: cmove edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1503C66F: mov dword ptr [ebp - 0x20], edx */
    eax = MEM32(ecx + 0x10); /* 0x1503C672: mov eax, dword ptr [ecx + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x1503C675: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503C678: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), 1 */ /* 0x1503C67B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C693; /* 0x1503C67D: jne 0x1503c693 */
L_1503C67F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503C67F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1503C682: push ecx */
    ecx = edx; /* 0x1503C683: mov ecx, edx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503C685: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + (-0x20))); /* 0x1503C68B: call dword ptr [ebp - 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503C68E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503C6B0; /* 0x1503C691: jmp 0x1503c6b0 */
L_1503C693:
    PUSH32(esp, edi); /* 0x1503C693: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503C694: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1503C697: push ecx */
    PUSH32(esp, ebx); /* 0x1503C698: push ebx */
    /* test LO8(eax), 2 */ /* 0x1503C699: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + (-0x24)); /* 0x1503C69B: mov edi, dword ptr [ebp - 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C6A3; /* 0x1503C69E: je 0x1503c6a3 */
L_1503C6A0:
    edi = MEM32(ebp + (-0x28)); /* 0x1503C6A0: mov edi, dword ptr [ebp - 0x28] */
L_1503C6A3:
    ecx = edi; /* 0x1503C6A3: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503C6A5: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x1503C6AB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503C6AD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503C6B0:
    /* test eax, eax */ /* 0x1503C6B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C6D4; /* 0x1503C6B2: je 0x1503c6d4 */
L_1503C6B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1503C6B4: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1503C6B7: push eax */
    PUSH32(esp, ebx); /* 0x1503C6B8: push ebx */
    RECOMP_CALL(sub_1503C52C); /* 0x1503C6B9: call 0x1503c52c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503C6BE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503C6BF: pop ecx */
    esi = ebx + eax; /* 0x1503C6C0: lea esi, [ebx + eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503C6C3: mov dword ptr [ebp - 0x1c], esi */
L_1503C6C6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503C6C6: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = esi; /* 0x1503C6CD: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1503C5F5; /* 0x1503C6CF: jmp 0x1503c5f5 */
L_1503C6D4:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1503C6D4: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1503C6D7: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503C70D; /* 0x1503C6DB: jne 0x1503c70d */
L_1503C6DD:
    RECOMP_BACKEDGE();
    goto L_1503C6C6; /* 0x1503C6DD: jmp 0x1503c6c6 */
L_1503C70D:
    PUSH32(esp, 0x15003FA0u); /* 0x1503C70D: push 0x15003fa0 */
    ecx = ebp + (-0x34); /* 0x1503C712: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_15039930); /* 0x1503C715: call 0x15039930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFF00u); /* 0x1503C71A: push 0x150aff00 */
    eax = ebp + (-0x34); /* 0x1503C71F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1503C722: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1503C723: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503C728u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C730u);

L_1503C730:
    PUSH32(esp, 0x14u); /* 0x1503C730: push 0x14 */
    PUSH32(esp, 0x150AFE50u); /* 0x1503C732: push 0x150afe50 */
    RECOMP_CALL(sub_1505E988); /* 0x1503C737: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503C73C: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1503C73F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C79B; /* 0x1503C741: je 0x1503c79b */
L_1503C743:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1503C743: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x1503C747: mov eax, dword ptr [eax] */
    eax = MEM32(eax + (-0x4)); /* 0x1503C749: mov eax, dword ptr [eax - 4] */
    eax = MEM32(eax + 0xC); /* 0x1503C74C: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x1503C74F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C76A; /* 0x1503C751: je 0x1503c76a */
L_1503C753:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1503C753: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x1503C75A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503C75D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1503C764: pop ecx */
    edi = POP32_VAL(esp); /* 0x1503C765: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C766: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C767: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503C768: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503C769: ret  */
L_1503C76A:
    PUSH32(esp, 0x15003F7Cu); /* 0x1503C76A: push 0x15003f7c */
    ecx = ebp + (-0x24); /* 0x1503C76F: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_150398A0); /* 0x1503C772: call 0x150398a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFE8Cu); /* 0x1503C777: push 0x150afe8c */
    goto L_1503C7AD; /* 0x1503C77C: jmp 0x1503c7ad */
L_1503C79B:
    PUSH32(esp, 0x15003F58u); /* 0x1503C79B: push 0x15003f58 */
    ecx = ebp + (-0x24); /* 0x1503C7A0: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_15039990); /* 0x1503C7A3: call 0x15039990 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFEE4u); /* 0x1503C7A8: push 0x150afee4 */
L_1503C7AD:
    eax = ebp + (-0x24); /* 0x1503C7AD: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1503C7B0: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1503C7B1: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1503C7B6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503C7BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C7BDu);

L_1503C7BD:
    edi = edi; /* 0x1503C7BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C7BF: push ebp */
    ebp = esp; /* 0x1503C7C0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503C7C2: push ebx */
    PUSH32(esp, esi); /* 0x1503C7C3: push esi */
    esi = ecx; /* 0x1503C7C4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1503C7C6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503C7C7: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x4); /* 0x1503C7CA: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503C7CD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF000u);
    ecx = ecx & 0xFFFFF000u; /* 0x1503C7D0: and ecx, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x1503C7D6: mov dword ptr [esi + 4], ecx */
    edx = MEM32(edi); /* 0x1503C7D9: mov edx, dword ptr [edi] */
    /* test edx, edx */ /* 0x1503C7DB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C890; /* 0x1503C7DD: je 0x1503c890 */
L_1503C7E3:
    SET_LO8(eax, MEM8(edx)); /* 0x1503C7E3: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503C7E5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C88B; /* 0x1503C7E7: je 0x1503c88b */
L_1503C7ED:
    SET_HI8(eax, MEM8(ebp + 0xC)); /* 0x1503C7ED: mov ah, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503C7F0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1503C7F2: mov ecx, edx */
L_1503C7F4:
    /* cmp LO8(eax), HI8(eax) */ /* 0x1503C7F4: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C842; /* 0x1503C7F6: je 0x1503c842 */
L_1503C7F8:
    /* cmp LO8(eax), 0x5Fu */ /* 0x1503C7F8: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C7FA: je 0x1503c838 */
L_1503C7FC:
    /* cmp LO8(eax), 0x24u */ /* 0x1503C7FC: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C7FE: je 0x1503c838 */
L_1503C800:
    /* cmp LO8(eax), 0x3Cu */ /* 0x1503C800: cmp al, 0x3c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C802: je 0x1503c838 */
L_1503C804:
    /* cmp LO8(eax), 0x3Eu */ /* 0x1503C804: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C806: je 0x1503c838 */
L_1503C808:
    /* cmp LO8(eax), 0x2Du */ /* 0x1503C808: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C80A: je 0x1503c838 */
L_1503C80C:
    /* cmp LO8(eax), 0x61u */ /* 0x1503C80C: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503C814; /* 0x1503C80E: jl 0x1503c814 */
L_1503C810:
    /* cmp LO8(eax), 0x7Au */ /* 0x1503C810: cmp al, 0x7a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C812: jle 0x1503c838 */
L_1503C814:
    /* cmp LO8(eax), 0x41u */ /* 0x1503C814: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503C81C; /* 0x1503C816: jl 0x1503c81c */
L_1503C818:
    /* cmp LO8(eax), 0x5Au */ /* 0x1503C818: cmp al, 0x5a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C81A: jle 0x1503c838 */
L_1503C81C:
    /* cmp LO8(eax), 0x30u */ /* 0x1503C81C: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503C824; /* 0x1503C81E: jl 0x1503c824 */
L_1503C820:
    /* cmp LO8(eax), 0x39u */ /* 0x1503C820: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C822: jle 0x1503c838 */
L_1503C824:
    /* cmp LO8(eax), 0x80u */ /* 0x1503C824: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1503C82C; /* 0x1503C826: jb 0x1503c82c */
L_1503C828:
    /* cmp LO8(eax), 0xFEu */ /* 0x1503C828: cmp al, 0xfe */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503C838; /* 0x1503C82A: jbe 0x1503c838 */
L_1503C82C:
    /* test MEM32(0x150BDB4C), 0x00010000u */ /* 0x1503C82C: test dword ptr [0x150bdb4c], 0x10000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C869; /* 0x1503C836: je 0x1503c869 */
L_1503C838:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503C838: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503C839: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = ecx; /* 0x1503C83A: mov dword ptr [edi], ecx */
    SET_LO8(eax, MEM8(ecx)); /* 0x1503C83C: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503C83E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C7F4; /* 0x1503C840: jne 0x1503c7f4 */
L_1503C842:
    PUSH32(esp, ebx); /* 0x1503C842: push ebx */
    PUSH32(esp, edx); /* 0x1503C843: push edx */
    ecx = esi; /* 0x1503C844: mov ecx, esi */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503C846: call 0x1503df5b */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1503C84B: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503C84D: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503C84F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C87C; /* 0x1503C851: je 0x1503c87c */
L_1503C853:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503C853: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1503C854: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x1503C856: mov eax, dword ptr [esi + 4] */
    /* cmp LO8(ecx), MEM8(ebp + 0xC) */ /* 0x1503C859: cmp cl, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C877; /* 0x1503C85C: je 0x1503c877 */
L_1503C85E:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503C85E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503C861: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503C864: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C872; /* 0x1503C867: jmp 0x1503c872 */
L_1503C869:
    eax = MEM32(esi + 0x4); /* 0x1503C869: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF1u);
    eax = eax & 0xFFFFFFF1u; /* 0x1503C86C: and eax, 0xfffffff1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503C86F: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C872:
    MEM32(esi + 0x4) = eax; /* 0x1503C872: mov dword ptr [esi + 4], eax */
    goto L_1503C896; /* 0x1503C875: jmp 0x1503c896 */
L_1503C877:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503C877: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503C872; /* 0x1503C87A: jmp 0x1503c872 */
L_1503C87C:
    eax = MEM32(esi + 0x4); /* 0x1503C87C: mov eax, dword ptr [esi + 4] */
    /* test LO8(eax), 0xFu */ /* 0x1503C87F: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503C896; /* 0x1503C881: jne 0x1503c896 */
L_1503C883:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF2u);
    eax = eax & 0xFFFFFFF2u; /* 0x1503C883: and eax, 0xfffffff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1503C886: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503C872; /* 0x1503C889: jmp 0x1503c872 */
L_1503C88B:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1503C88B: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C893; /* 0x1503C88E: jmp 0x1503c893 */
L_1503C890:
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x1503C890: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C893:
    MEM32(esi + 0x4) = ecx; /* 0x1503C893: mov dword ptr [esi + 4], ecx */
L_1503C896:
    edi = POP32_VAL(esp); /* 0x1503C896: pop edi */
    eax = esi; /* 0x1503C897: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503C899: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503C89A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503C89B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503C89C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503C8A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C8A5u);

L_1503C8A5:
    edi = edi; /* 0x1503C8A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C8A7: push ebp */
    ebp = esp; /* 0x1503C8A8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503C8AA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503C8AB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1503C8AE: push edi */
    edi = ecx; /* 0x1503C8AF: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x1503C8B1: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x4)));
    eax = eax ^ MEM32(esi + 0x4); /* 0x1503C8B4: xor eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503C8B7: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x4)));
    eax = eax ^ MEM32(esi + 0x4); /* 0x1503C8BA: xor eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503C8BD: mov dword ptr [edi + 4], eax */
    ecx = MEM32(esi + 0x4); /* 0x1503C8C0: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503C8C3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x1503C8C5: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503C8C8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x1503C8CA: mov dword ptr [edi + 4], ecx */
    eax = MEM32(esi + 0x4); /* 0x1503C8CD: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503C8D0: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x1503C8D2: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503C8D5: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503C8D7: mov dword ptr [edi + 4], eax */
    ecx = MEM32(esi + 0x4); /* 0x1503C8DA: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503C8DD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x1503C8DF: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503C8E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x1503C8E4: mov dword ptr [edi + 4], ecx */
    edx = MEM32(esi + 0x4); /* 0x1503C8E7: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((edx ^ ecx)); _flag_b = (uint32_t)((edx ^ ecx));
    edx = edx ^ ecx; /* 0x1503C8EA: xor edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    edx = edx & 0x80u; /* 0x1503C8EC: and edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ ecx)); _flag_b = (uint32_t)((edx ^ ecx));
    edx = edx ^ ecx; /* 0x1503C8F2: xor edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = edx; /* 0x1503C8F4: mov dword ptr [edi + 4], edx */
    eax = MEM32(esi); /* 0x1503C8F7: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1503C8F9: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x1503C8FB: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1503C8FE: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x1503C900: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1503C905: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503C907: mov dword ptr [edi + 4], eax */
    edx = MEM32(esi + 0x4); /* 0x1503C90A: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1503C90D: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x200u);
    edx = edx & 0x200u; /* 0x1503C90F: and edx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1503C915: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = edx; /* 0x1503C917: mov dword ptr [edi + 4], edx */
    ecx = MEM32(esi + 0x4); /* 0x1503C91A: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1503C91D: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    ecx = ecx & 0x400u; /* 0x1503C91F: and ecx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1503C925: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x1503C927: mov dword ptr [edi + 4], ecx */
    eax = MEM32(esi + 0x4); /* 0x1503C92A: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503C92D: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x1503C92F: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503C934: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503C936: mov dword ptr [edi + 4], eax */
    eax = edi; /* 0x1503C939: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1503C93B: pop edi */
    esi = POP32_VAL(esp); /* 0x1503C93C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503C93D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503C93E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503C947(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C947u);

L_1503C947:
    edi = edi; /* 0x1503C947: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C949: push ebp */
    ebp = esp; /* 0x1503C94A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503C94C: push esi */
    esi = ecx; /* 0x1503C94D: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503C94F: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x1503C952: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1503C959: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C96A; /* 0x1503C95D: je 0x1503c96a */
L_1503C95F:
    PUSH32(esp, 1); /* 0x1503C95F: push 1 */
    eax = ebp + 0x8; /* 0x1503C961: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503C964: push eax */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503C965: call 0x1503df5b */
    RECOMP_FLAGS_IN();
L_1503C96A:
    eax = esi; /* 0x1503C96A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503C96C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503C96D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503C96E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503C977(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C977u);

L_1503C977:
    edi = edi; /* 0x1503C977: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503C979: push ebp */
    ebp = esp; /* 0x1503C97A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1503C97C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1503C980: push esi */
    PUSH32(esp, edi); /* 0x1503C981: push edi */
    esi = ecx; /* 0x1503C982: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503C9B9; /* 0x1503C984: je 0x1503c9b9 */
L_1503C986:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503C986: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x150BDB20u; /* 0x1503C988: mov ecx, 0x150bdb20 */
    PUSH32(esp, edi); /* 0x1503C98D: push edi */
    PUSH32(esp, 0xCu); /* 0x1503C98E: push 0xc */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503C990: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503C995: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503C9A5; /* 0x1503C997: je 0x1503c9a5 */
L_1503C999:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503C999: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503C99C: mov ecx, eax */
    RECOMP_CALL(sub_1503CC56); /* 0x1503C99E: call 0x1503cc56 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503C9A3: mov edi, eax */
L_1503C9A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503C9A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503C9A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1503C9A9: push 3 */
    ecx = POP32_VAL(esp); /* 0x1503C9AB: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = eax; } /* 0x1503C9AC: cmovne ecx, eax */
    eax = MEM32(esi + 0x4); /* 0x1503C9AF: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503C9B2: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1503C9B5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503C9C1; /* 0x1503C9B7: jmp 0x1503c9c1 */
L_1503C9B9:
    ecx = MEM32(esi + 0x4); /* 0x1503C9B9: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ecx = ecx & 0xFFFFFFF0u; /* 0x1503C9BC: and ecx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503C9BF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503C9C1:
    MEM32(esi + 0x4) = ecx; /* 0x1503C9C1: mov dword ptr [esi + 4], ecx */
    eax = esi; /* 0x1503C9C4: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFEFu);
    ecx = ecx & 0xFFFFFFEFu; /* 0x1503C9C6: and ecx, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFDFu);
    ecx = ecx & 0xFFFFFFDFu; /* 0x1503C9C9: and ecx, 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    ecx = ecx & 0xFFFFFFBFu; /* 0x1503C9CC: and ecx, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    ecx = ecx & 0xFFFFFF7Fu; /* 0x1503C9CF: and ecx, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edi; /* 0x1503C9D5: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFEFFu);
    ecx = ecx & 0xFFFFFEFFu; /* 0x1503C9D7: and ecx, 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFDFFu);
    ecx = ecx & 0xFFFFFDFFu; /* 0x1503C9DD: and ecx, 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFBFFu);
    ecx = ecx & 0xFFFFFBFFu; /* 0x1503C9E3: and ecx, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF7FFu);
    ecx = ecx & 0xFFFFF7FFu; /* 0x1503C9E9: and ecx, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1503C9EF: pop edi */
    MEM32(esi + 0x4) = ecx; /* 0x1503C9F0: mov dword ptr [esi + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1503C9F3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503C9F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503C9F5: ret 4 */
    RECOMP_REGS_OUT();
}
