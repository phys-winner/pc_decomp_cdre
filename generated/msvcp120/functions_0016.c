#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1101C634(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C634u);

    goto L_1101C634;
L_1101C5E9:
    eax = MEM32(esi); /* 0x1101C5E9: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C5EB: push ebx */
    PUSH32(esp, edi); /* 0x1101C5EC: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C5ED: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C5F0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C5F2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C5F7: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C5FA: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C5FF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C601: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101C606: ret 8 */
L_1101C634:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C634: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C637: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C639: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C63C: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C5E9; /* 0x1101C63E: jmp 0x1101c5e9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C648u);
    RECOMP_EH_ENTER();

L_1101C648:
    PUSH32(esp, 0x24u); /* 0x1101C648: push 0x24 */
    eax = 0x1103E12Au; /* 0x1101C64A: mov eax, 0x1103e12a */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C64F: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C654: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C656: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C659: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C65B: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C65E: push esi */
    edi = ebx; /* 0x1101C65F: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C661: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C666: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C669: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C6CB; /* 0x1101C66C: je 0x1101c6cb */
L_1101C66E:
    eax = ebp + (-0x1C); /* 0x1101C66E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C671: push eax */
    eax = MEM32(esi); /* 0x1101C672: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C674: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C677: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C679: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C67E: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C67F: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C683: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C688: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C689: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C68C: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C68F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C694: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101C696: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C699: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C69C: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101C6A0: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C6A3: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101C6A5: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C6A7: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101C6AB: push eax */
    PUSH32(esp, ecx); /* 0x1101C6AC: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C6AD: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101C6B0: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C6B3: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C6B6: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C6B9: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C6BC: push eax */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x1101C6BD: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101C6C0: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C6C8; /* 0x1101C6C3: je 0x1101c6c8 */
L_1101C6C5:
    PUSH32(esp, 4); /* 0x1101C6C5: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C6C7: pop edi */
L_1101C6C8:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C6C8: mov dword ptr [ebp - 4], ebx */
L_1101C6CB:
    eax = MEM32(esi); /* 0x1101C6CB: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C6CD: push ebx */
    PUSH32(esp, edi); /* 0x1101C6CE: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C6CF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C6D2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C6D4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C6D9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C6DC: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C6E1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C6E3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C6E8: ret 4 */
L_1101C716:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C716: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C719: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C71B: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C71E: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C6CB; /* 0x1101C720: jmp 0x1101c6cb */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C716u: goto L_1101C716;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C6EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C6EBu);

L_1101C6EB:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C6EB: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C6EE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C6F0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C6F2: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C6F5: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C6F7: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C6FA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C6FD: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C705; /* 0x1101C700: jne 0x1101c705 */
L_1101C702:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C702: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C705:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C705: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C708: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C70B: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C722; /* 0x1101C70E: jne 0x1101c722 */
L_1101C710:
    eax = 0x1101C716u; /* 0x1101C710: mov eax, 0x1101c716 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C715: ret  */
L_1101C722:
    PUSH32(esp, ebx); /* 0x1101C722: push ebx */
    PUSH32(esp, ebx); /* 0x1101C723: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C724: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C729u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C716u);

    goto L_1101C716;
L_1101C6CB:
    eax = MEM32(esi); /* 0x1101C6CB: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C6CD: push ebx */
    PUSH32(esp, edi); /* 0x1101C6CE: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C6CF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C6D2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C6D4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C6D9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C6DC: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C6E1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C6E3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C6E8: ret 4 */
L_1101C716:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C716: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C719: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C71B: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C71E: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C6CB; /* 0x1101C720: jmp 0x1101c6cb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C72A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C72Au);

L_1101C72A:
    PUSH32(esp, esi); /* 0x1101C72A: push esi */
    esi = ecx + 0x20; /* 0x1101C72B: lea esi, [ecx + 0x20] */
    ecx = esi; /* 0x1101C72E: mov ecx, esi */
    RECOMP_CALL(sub_11017397); /* 0x1101C730: call 0x11017397 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101C735: push esi */
    MEM32(esi) = 0x110016C4u; /* 0x1101C736: mov dword ptr [esi], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C73C: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C741: pop ecx */
    esi = POP32_VAL(esp); /* 0x1101C742: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C743: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C744(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C744u);

L_1101C744:
    PUSH32(esp, esi); /* 0x1101C744: push esi */
    esi = ecx + 0x20; /* 0x1101C745: lea esi, [ecx + 0x20] */
    ecx = esi; /* 0x1101C748: mov ecx, esi */
    RECOMP_CALL(sub_110173ED); /* 0x1101C74A: call 0x110173ed */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101C74F: push esi */
    MEM32(esi) = 0x110016C4u; /* 0x1101C750: mov dword ptr [esi], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C756: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C75B: pop ecx */
    esi = POP32_VAL(esp); /* 0x1101C75C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C75D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C75E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C75Eu);

L_1101C75E:
    PUSH32(esp, esi); /* 0x1101C75E: push esi */
    esi = ecx + 0x20; /* 0x1101C75F: lea esi, [ecx + 0x20] */
    ecx = esi; /* 0x1101C762: mov ecx, esi */
    RECOMP_CALL(sub_11017443); /* 0x1101C764: call 0x11017443 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101C769: push esi */
    MEM32(esi) = 0x110016C4u; /* 0x1101C76A: mov dword ptr [esi], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C770: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C775: pop ecx */
    esi = POP32_VAL(esp); /* 0x1101C776: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C777: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C778(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C778u);

L_1101C778:
    edx = ecx + 0x18; /* 0x1101C778: lea edx, [ecx + 0x18] */
    eax = MEM32(edx + (-0x18)); /* 0x1101C77B: mov eax, dword ptr [edx - 0x18] */
    PUSH32(esp, edx); /* 0x1101C77E: push edx */
    eax = MEM32(eax + 0x4); /* 0x1101C77F: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x18)) = 0x11002170u; /* 0x1101C782: mov dword ptr [eax + edx - 0x18], 0x11002170 */
    eax = MEM32(edx + (-0x18)); /* 0x1101C78A: mov eax, dword ptr [edx - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101C78D: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101C790: lea eax, [ecx - 0x18] */
    MEM32(ecx + edx + (-0x1C)) = eax; /* 0x1101C793: mov dword ptr [ecx + edx - 0x1c], eax */
    MEM32(edx) = 0x110016C4u; /* 0x1101C797: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C79D: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C7A2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C7A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C7A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C7A4u);

L_1101C7A4:
    edx = ecx + 0x18; /* 0x1101C7A4: lea edx, [ecx + 0x18] */
    eax = MEM32(edx + (-0x18)); /* 0x1101C7A7: mov eax, dword ptr [edx - 0x18] */
    PUSH32(esp, edx); /* 0x1101C7AA: push edx */
    eax = MEM32(eax + 0x4); /* 0x1101C7AB: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x18)) = 0x11002160u; /* 0x1101C7AE: mov dword ptr [eax + edx - 0x18], 0x11002160 */
    eax = MEM32(edx + (-0x18)); /* 0x1101C7B6: mov eax, dword ptr [edx - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101C7B9: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101C7BC: lea eax, [ecx - 0x18] */
    MEM32(ecx + edx + (-0x1C)) = eax; /* 0x1101C7BF: mov dword ptr [ecx + edx - 0x1c], eax */
    MEM32(edx) = 0x110016C4u; /* 0x1101C7C3: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C7C9: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C7CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C7CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C7D0u);

L_1101C7D0:
    edx = ecx + 0x8; /* 0x1101C7D0: lea edx, [ecx + 8] */
    eax = MEM32(edx + (-0x8)); /* 0x1101C7D3: mov eax, dword ptr [edx - 8] */
    PUSH32(esp, edx); /* 0x1101C7D6: push edx */
    eax = MEM32(eax + 0x4); /* 0x1101C7D7: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x8)) = 0x11002150u; /* 0x1101C7DA: mov dword ptr [eax + edx - 8], 0x11002150 */
    eax = MEM32(edx + (-0x8)); /* 0x1101C7E2: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(eax + 0x4); /* 0x1101C7E5: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101C7E8: lea eax, [ecx - 8] */
    MEM32(ecx + edx + (-0xC)) = eax; /* 0x1101C7EB: mov dword ptr [ecx + edx - 0xc], eax */
    MEM32(edx) = 0x110016C4u; /* 0x1101C7EF: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C7F5: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C7FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C7FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C7FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C7FCu);

L_1101C7FC:
    edx = ecx + 0x8; /* 0x1101C7FC: lea edx, [ecx + 8] */
    eax = MEM32(edx + (-0x8)); /* 0x1101C7FF: mov eax, dword ptr [edx - 8] */
    PUSH32(esp, edx); /* 0x1101C802: push edx */
    eax = MEM32(eax + 0x4); /* 0x1101C803: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x8)) = 0x11002140u; /* 0x1101C806: mov dword ptr [eax + edx - 8], 0x11002140 */
    eax = MEM32(edx + (-0x8)); /* 0x1101C80E: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(eax + 0x4); /* 0x1101C811: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101C814: lea eax, [ecx - 8] */
    MEM32(ecx + edx + (-0xC)) = eax; /* 0x1101C817: mov dword ptr [ecx + edx - 0xc], eax */
    MEM32(edx) = 0x110016C4u; /* 0x1101C81B: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C821: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C826: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C827: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101C828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C828u);

L_1101C828:
    PUSH32(esp, ebp); /* 0x1101C828: push ebp */
    ebp = esp; /* 0x1101C829: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C82B: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C82F: push esi */
    esi = ecx; /* 0x1101C830: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C859; /* 0x1101C832: je 0x1101c859 */
L_1101C834:
    PUSH32(esp, edi); /* 0x1101C834: push edi */
    PUSH32(esp, 0x1100FB9Fu); /* 0x1101C835: push 0x1100fb9f */
    edi = esi + (-0x4); /* 0x1101C83A: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101C83D: push dword ptr [edi] */
    PUSH32(esp, 0x48u); /* 0x1101C83F: push 0x48 */
    PUSH32(esp, esi); /* 0x1101C841: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101C842: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C847: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C854; /* 0x1101C84B: je 0x1101c854 */
L_1101C84D:
    PUSH32(esp, edi); /* 0x1101C84D: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C84E: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C853: pop ecx */
L_1101C854:
    eax = edi; /* 0x1101C854: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101C856: pop edi */
    goto L_1101C875; /* 0x1101C857: jmp 0x1101c875 */
L_1101C859:
    PUSH32(esp, esi); /* 0x1101C859: push esi */
    MEM32(esi) = 0x110016C4u; /* 0x1101C85A: mov dword ptr [esi], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1101C860: call 0x110306ab */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C865: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x1101C869: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C873; /* 0x1101C86A: je 0x1101c873 */
L_1101C86C:
    PUSH32(esp, esi); /* 0x1101C86C: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101C86D: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C872: pop ecx */
L_1101C873:
    eax = esi; /* 0x1101C873: mov eax, esi */
L_1101C875:
    esi = POP32_VAL(esp); /* 0x1101C875: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101C876: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C877: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101C87A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C87Au);

L_1101C87A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101C87A: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101C882; /* 0x1101C87D: jmp 0x1101c882 */
L_1101C882:
    PUSH32(esp, ebp); /* 0x1101C882: push ebp */
    ebp = esp; /* 0x1101C883: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C885: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C889: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C8AF; /* 0x1101C88A: je 0x1101c8af */
L_1101C88C:
    PUSH32(esp, 0x1101C72Au); /* 0x1101C88C: push 0x1101c72a */
    esi = ecx + (-0x24); /* 0x1101C891: lea esi, [ecx - 0x24] */
    PUSH32(esp, MEM32(esi)); /* 0x1101C894: push dword ptr [esi] */
    eax = ecx + (-0x20); /* 0x1101C896: lea eax, [ecx - 0x20] */
    PUSH32(esp, 0x68u); /* 0x1101C899: push 0x68 */
    PUSH32(esp, eax); /* 0x1101C89B: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101C89C: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C8A1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C8C6; /* 0x1101C8A5: je 0x1101c8c6 */
L_1101C8A7:
    PUSH32(esp, esi); /* 0x1101C8A7: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C8A8: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101C8C5; /* 0x1101C8AD: jmp 0x1101c8c5 */
L_1101C8AF:
    esi = ecx + (-0x20); /* 0x1101C8AF: lea esi, [ecx - 0x20] */
    ecx = esi; /* 0x1101C8B2: mov ecx, esi */
    RECOMP_CALL(sub_1101C72A); /* 0x1101C8B4: call 0x1101c72a */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C8B9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C8C6; /* 0x1101C8BD: je 0x1101c8c6 */
L_1101C8BF:
    PUSH32(esp, esi); /* 0x1101C8BF: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101C8C0: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101C8C5:
    ecx = POP32_VAL(esp); /* 0x1101C8C5: pop ecx */
L_1101C8C6:
    eax = esi; /* 0x1101C8C6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101C8C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101C8C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C8CA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101C8CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C8CDu);

L_1101C8CD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101C8CD: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101C8D5; /* 0x1101C8D0: jmp 0x1101c8d5 */
L_1101C8D5:
    PUSH32(esp, ebp); /* 0x1101C8D5: push ebp */
    ebp = esp; /* 0x1101C8D6: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C8D8: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C8DC: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C902; /* 0x1101C8DD: je 0x1101c902 */
L_1101C8DF:
    PUSH32(esp, 0x1101C744u); /* 0x1101C8DF: push 0x1101c744 */
    esi = ecx + (-0x24); /* 0x1101C8E4: lea esi, [ecx - 0x24] */
    PUSH32(esp, MEM32(esi)); /* 0x1101C8E7: push dword ptr [esi] */
    eax = ecx + (-0x20); /* 0x1101C8E9: lea eax, [ecx - 0x20] */
    PUSH32(esp, 0x68u); /* 0x1101C8EC: push 0x68 */
    PUSH32(esp, eax); /* 0x1101C8EE: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101C8EF: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C8F4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C919; /* 0x1101C8F8: je 0x1101c919 */
L_1101C8FA:
    PUSH32(esp, esi); /* 0x1101C8FA: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C8FB: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101C918; /* 0x1101C900: jmp 0x1101c918 */
L_1101C902:
    esi = ecx + (-0x20); /* 0x1101C902: lea esi, [ecx - 0x20] */
    ecx = esi; /* 0x1101C905: mov ecx, esi */
    RECOMP_CALL(sub_1101C744); /* 0x1101C907: call 0x1101c744 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C90C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C919; /* 0x1101C910: je 0x1101c919 */
L_1101C912:
    PUSH32(esp, esi); /* 0x1101C912: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101C913: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101C918:
    ecx = POP32_VAL(esp); /* 0x1101C918: pop ecx */
L_1101C919:
    eax = esi; /* 0x1101C919: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101C91B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101C91C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C91D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101C920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C920u);

L_1101C920:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101C920: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101C928; /* 0x1101C923: jmp 0x1101c928 */
L_1101C928:
    PUSH32(esp, ebp); /* 0x1101C928: push ebp */
    ebp = esp; /* 0x1101C929: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C92B: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C92F: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C955; /* 0x1101C930: je 0x1101c955 */
L_1101C932:
    PUSH32(esp, 0x1101C75Eu); /* 0x1101C932: push 0x1101c75e */
    esi = ecx + (-0x24); /* 0x1101C937: lea esi, [ecx - 0x24] */
    PUSH32(esp, MEM32(esi)); /* 0x1101C93A: push dword ptr [esi] */
    eax = ecx + (-0x20); /* 0x1101C93C: lea eax, [ecx - 0x20] */
    PUSH32(esp, 0x68u); /* 0x1101C93F: push 0x68 */
    PUSH32(esp, eax); /* 0x1101C941: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101C942: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C947: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C96C; /* 0x1101C94B: je 0x1101c96c */
L_1101C94D:
    PUSH32(esp, esi); /* 0x1101C94D: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C94E: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101C96B; /* 0x1101C953: jmp 0x1101c96b */
L_1101C955:
    esi = ecx + (-0x20); /* 0x1101C955: lea esi, [ecx - 0x20] */
    ecx = esi; /* 0x1101C958: mov ecx, esi */
    RECOMP_CALL(sub_1101C75E); /* 0x1101C95A: call 0x1101c75e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C95F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C96C; /* 0x1101C963: je 0x1101c96c */
L_1101C965:
    PUSH32(esp, esi); /* 0x1101C965: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101C966: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101C96B:
    ecx = POP32_VAL(esp); /* 0x1101C96B: pop ecx */
L_1101C96C:
    eax = esi; /* 0x1101C96C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101C96E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101C96F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C970: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101C9BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C9BEu);

L_1101C9BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101C9BE: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101C9C6; /* 0x1101C9C1: jmp 0x1101c9c6 */
L_1101C9C6:
    PUSH32(esp, ebp); /* 0x1101C9C6: push ebp */
    ebp = esp; /* 0x1101C9C7: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C9C9: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C9CD: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C9F3; /* 0x1101C9CE: je 0x1101c9f3 */
L_1101C9D0:
    PUSH32(esp, 0x1101C778u); /* 0x1101C9D0: push 0x1101c778 */
    esi = ecx + (-0x1C); /* 0x1101C9D5: lea esi, [ecx - 0x1c] */
    PUSH32(esp, MEM32(esi)); /* 0x1101C9D8: push dword ptr [esi] */
    eax = ecx + (-0x18); /* 0x1101C9DA: lea eax, [ecx - 0x18] */
    PUSH32(esp, 0x60u); /* 0x1101C9DD: push 0x60 */
    PUSH32(esp, eax); /* 0x1101C9DF: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101C9E0: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C9E5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA0A; /* 0x1101C9E9: je 0x1101ca0a */
L_1101C9EB:
    PUSH32(esp, esi); /* 0x1101C9EB: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C9EC: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101CA09; /* 0x1101C9F1: jmp 0x1101ca09 */
L_1101C9F3:
    esi = ecx + (-0x18); /* 0x1101C9F3: lea esi, [ecx - 0x18] */
    ecx = esi; /* 0x1101C9F6: mov ecx, esi */
    RECOMP_CALL(sub_1101C778); /* 0x1101C9F8: call 0x1101c778 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C9FD: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA0A; /* 0x1101CA01: je 0x1101ca0a */
L_1101CA03:
    PUSH32(esp, esi); /* 0x1101CA03: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CA04: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101CA09:
    ecx = POP32_VAL(esp); /* 0x1101CA09: pop ecx */
L_1101CA0A:
    eax = esi; /* 0x1101CA0A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CA0C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CA0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CA0E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CA11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CA11u);

L_1101CA11:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101CA11: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101CA19; /* 0x1101CA14: jmp 0x1101ca19 */
L_1101CA19:
    PUSH32(esp, ebp); /* 0x1101CA19: push ebp */
    ebp = esp; /* 0x1101CA1A: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CA1C: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CA20: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA46; /* 0x1101CA21: je 0x1101ca46 */
L_1101CA23:
    PUSH32(esp, 0x1101C7A4u); /* 0x1101CA23: push 0x1101c7a4 */
    esi = ecx + (-0x1C); /* 0x1101CA28: lea esi, [ecx - 0x1c] */
    PUSH32(esp, MEM32(esi)); /* 0x1101CA2B: push dword ptr [esi] */
    eax = ecx + (-0x18); /* 0x1101CA2D: lea eax, [ecx - 0x18] */
    PUSH32(esp, 0x60u); /* 0x1101CA30: push 0x60 */
    PUSH32(esp, eax); /* 0x1101CA32: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101CA33: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CA38: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA5D; /* 0x1101CA3C: je 0x1101ca5d */
L_1101CA3E:
    PUSH32(esp, esi); /* 0x1101CA3E: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CA3F: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101CA5C; /* 0x1101CA44: jmp 0x1101ca5c */
L_1101CA46:
    esi = ecx + (-0x18); /* 0x1101CA46: lea esi, [ecx - 0x18] */
    ecx = esi; /* 0x1101CA49: mov ecx, esi */
    RECOMP_CALL(sub_1101C7A4); /* 0x1101CA4B: call 0x1101c7a4 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CA50: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA5D; /* 0x1101CA54: je 0x1101ca5d */
L_1101CA56:
    PUSH32(esp, esi); /* 0x1101CA56: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CA57: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101CA5C:
    ecx = POP32_VAL(esp); /* 0x1101CA5C: pop ecx */
L_1101CA5D:
    eax = esi; /* 0x1101CA5D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CA5F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CA60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CA61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CAAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CAAFu);

L_1101CAAF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101CAAF: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101CAB7; /* 0x1101CAB2: jmp 0x1101cab7 */
L_1101CAB7:
    PUSH32(esp, ebp); /* 0x1101CAB7: push ebp */
    ebp = esp; /* 0x1101CAB8: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CABA: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CABE: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CAE4; /* 0x1101CABF: je 0x1101cae4 */
L_1101CAC1:
    PUSH32(esp, 0x1101C7D0u); /* 0x1101CAC1: push 0x1101c7d0 */
    esi = ecx + (-0xC); /* 0x1101CAC6: lea esi, [ecx - 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x1101CAC9: push dword ptr [esi] */
    eax = ecx + (-0x8); /* 0x1101CACB: lea eax, [ecx - 8] */
    PUSH32(esp, 0x50u); /* 0x1101CACE: push 0x50 */
    PUSH32(esp, eax); /* 0x1101CAD0: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101CAD1: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CAD6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CAFB; /* 0x1101CADA: je 0x1101cafb */
L_1101CADC:
    PUSH32(esp, esi); /* 0x1101CADC: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CADD: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101CAFA; /* 0x1101CAE2: jmp 0x1101cafa */
L_1101CAE4:
    esi = ecx + (-0x8); /* 0x1101CAE4: lea esi, [ecx - 8] */
    ecx = esi; /* 0x1101CAE7: mov ecx, esi */
    RECOMP_CALL(sub_1101C7D0); /* 0x1101CAE9: call 0x1101c7d0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CAEE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CAFB; /* 0x1101CAF2: je 0x1101cafb */
L_1101CAF4:
    PUSH32(esp, esi); /* 0x1101CAF4: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CAF5: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101CAFA:
    ecx = POP32_VAL(esp); /* 0x1101CAFA: pop ecx */
L_1101CAFB:
    eax = esi; /* 0x1101CAFB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CAFD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CAFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CAFF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CB02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CB02u);

L_1101CB02:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x1101CB02: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101CB0A; /* 0x1101CB05: jmp 0x1101cb0a */
L_1101CB0A:
    PUSH32(esp, ebp); /* 0x1101CB0A: push ebp */
    ebp = esp; /* 0x1101CB0B: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CB0D: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CB11: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB37; /* 0x1101CB12: je 0x1101cb37 */
L_1101CB14:
    PUSH32(esp, 0x1101C7FCu); /* 0x1101CB14: push 0x1101c7fc */
    esi = ecx + (-0xC); /* 0x1101CB19: lea esi, [ecx - 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x1101CB1C: push dword ptr [esi] */
    eax = ecx + (-0x8); /* 0x1101CB1E: lea eax, [ecx - 8] */
    PUSH32(esp, 0x50u); /* 0x1101CB21: push 0x50 */
    PUSH32(esp, eax); /* 0x1101CB23: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101CB24: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CB29: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB4E; /* 0x1101CB2D: je 0x1101cb4e */
L_1101CB2F:
    PUSH32(esp, esi); /* 0x1101CB2F: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CB30: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101CB4D; /* 0x1101CB35: jmp 0x1101cb4d */
L_1101CB37:
    esi = ecx + (-0x8); /* 0x1101CB37: lea esi, [ecx - 8] */
    ecx = esi; /* 0x1101CB3A: mov ecx, esi */
    RECOMP_CALL(sub_1101C7FC); /* 0x1101CB3C: call 0x1101c7fc */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CB41: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB4E; /* 0x1101CB45: je 0x1101cb4e */
L_1101CB47:
    PUSH32(esp, esi); /* 0x1101CB47: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CB48: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101CB4D:
    ecx = POP32_VAL(esp); /* 0x1101CB4D: pop ecx */
L_1101CB4E:
    eax = esi; /* 0x1101CB4E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CB50: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CB51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CB52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CB55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CB55u);

L_1101CB55:
    PUSH32(esp, ebp); /* 0x1101CB55: push ebp */
    ebp = esp; /* 0x1101CB56: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CB58: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CB5C: push esi */
    esi = ecx; /* 0x1101CB5D: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB86; /* 0x1101CB5F: je 0x1101cb86 */
L_1101CB61:
    PUSH32(esp, edi); /* 0x1101CB61: push edi */
    PUSH32(esp, 0x11013CE7u); /* 0x1101CB62: push 0x11013ce7 */
    edi = esi + (-0x4); /* 0x1101CB67: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CB6A: push dword ptr [edi] */
    PUSH32(esp, 0x38u); /* 0x1101CB6C: push 0x38 */
    PUSH32(esp, esi); /* 0x1101CB6E: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CB6F: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CB74: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB81; /* 0x1101CB78: je 0x1101cb81 */
L_1101CB7A:
    PUSH32(esp, edi); /* 0x1101CB7A: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CB7B: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CB80: pop ecx */
L_1101CB81:
    eax = edi; /* 0x1101CB81: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CB83: pop edi */
    goto L_1101CB9A; /* 0x1101CB84: jmp 0x1101cb9a */
L_1101CB86:
    RECOMP_CALL(sub_11013CE7); /* 0x1101CB86: call 0x11013ce7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CB8B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CB98; /* 0x1101CB8F: je 0x1101cb98 */
L_1101CB91:
    PUSH32(esp, esi); /* 0x1101CB91: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CB92: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CB97: pop ecx */
L_1101CB98:
    eax = esi; /* 0x1101CB98: mov eax, esi */
L_1101CB9A:
    esi = POP32_VAL(esp); /* 0x1101CB9A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CB9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CB9C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CB9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CB9Fu);

L_1101CB9F:
    PUSH32(esp, ebp); /* 0x1101CB9F: push ebp */
    ebp = esp; /* 0x1101CBA0: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CBA2: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CBA6: push esi */
    esi = ecx; /* 0x1101CBA7: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CBD0; /* 0x1101CBA9: je 0x1101cbd0 */
L_1101CBAB:
    PUSH32(esp, edi); /* 0x1101CBAB: push edi */
    PUSH32(esp, 0x11017509u); /* 0x1101CBAC: push 0x11017509 */
    edi = esi + (-0x4); /* 0x1101CBB1: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CBB4: push dword ptr [edi] */
    PUSH32(esp, 0x38u); /* 0x1101CBB6: push 0x38 */
    PUSH32(esp, esi); /* 0x1101CBB8: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CBB9: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CBBE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CBCB; /* 0x1101CBC2: je 0x1101cbcb */
L_1101CBC4:
    PUSH32(esp, edi); /* 0x1101CBC4: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CBC5: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CBCA: pop ecx */
L_1101CBCB:
    eax = edi; /* 0x1101CBCB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CBCD: pop edi */
    goto L_1101CBE4; /* 0x1101CBCE: jmp 0x1101cbe4 */
L_1101CBD0:
    RECOMP_CALL(sub_11017509); /* 0x1101CBD0: call 0x11017509 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CBD5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CBE2; /* 0x1101CBD9: je 0x1101cbe2 */
L_1101CBDB:
    PUSH32(esp, esi); /* 0x1101CBDB: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CBDC: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CBE1: pop ecx */
L_1101CBE2:
    eax = esi; /* 0x1101CBE2: mov eax, esi */
L_1101CBE4:
    esi = POP32_VAL(esp); /* 0x1101CBE4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CBE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CBE6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CBE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CBE9u);

L_1101CBE9:
    PUSH32(esp, ebp); /* 0x1101CBE9: push ebp */
    ebp = esp; /* 0x1101CBEA: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CBEC: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CBF0: push esi */
    esi = ecx; /* 0x1101CBF1: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC1A; /* 0x1101CBF3: je 0x1101cc1a */
L_1101CBF5:
    PUSH32(esp, edi); /* 0x1101CBF5: push edi */
    PUSH32(esp, 0x11017527u); /* 0x1101CBF6: push 0x11017527 */
    edi = esi + (-0x4); /* 0x1101CBFB: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CBFE: push dword ptr [edi] */
    PUSH32(esp, 0x38u); /* 0x1101CC00: push 0x38 */
    PUSH32(esp, esi); /* 0x1101CC02: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CC03: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CC08: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC15; /* 0x1101CC0C: je 0x1101cc15 */
L_1101CC0E:
    PUSH32(esp, edi); /* 0x1101CC0E: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CC0F: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CC14: pop ecx */
L_1101CC15:
    eax = edi; /* 0x1101CC15: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CC17: pop edi */
    goto L_1101CC2E; /* 0x1101CC18: jmp 0x1101cc2e */
L_1101CC1A:
    RECOMP_CALL(sub_11017527); /* 0x1101CC1A: call 0x11017527 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CC1F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC2C; /* 0x1101CC23: je 0x1101cc2c */
L_1101CC25:
    PUSH32(esp, esi); /* 0x1101CC25: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CC26: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CC2B: pop ecx */
L_1101CC2C:
    eax = esi; /* 0x1101CC2C: mov eax, esi */
L_1101CC2E:
    esi = POP32_VAL(esp); /* 0x1101CC2E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CC2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CC30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CC33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CC33u);

L_1101CC33:
    PUSH32(esp, ebp); /* 0x1101CC33: push ebp */
    ebp = esp; /* 0x1101CC34: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CC36: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CC3A: push esi */
    esi = ecx; /* 0x1101CC3B: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC64; /* 0x1101CC3D: je 0x1101cc64 */
L_1101CC3F:
    PUSH32(esp, edi); /* 0x1101CC3F: push edi */
    PUSH32(esp, 0x1100E271u); /* 0x1101CC40: push 0x1100e271 */
    edi = esi + (-0x4); /* 0x1101CC45: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CC48: push dword ptr [edi] */
    PUSH32(esp, 8); /* 0x1101CC4A: push 8 */
    PUSH32(esp, esi); /* 0x1101CC4C: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CC4D: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CC52: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC5F; /* 0x1101CC56: je 0x1101cc5f */
L_1101CC58:
    PUSH32(esp, edi); /* 0x1101CC58: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CC59: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CC5E: pop ecx */
L_1101CC5F:
    eax = edi; /* 0x1101CC5F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CC61: pop edi */
    goto L_1101CC79; /* 0x1101CC62: jmp 0x1101cc79 */
L_1101CC64:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CC64: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CC68: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CC77; /* 0x1101CC6E: je 0x1101cc77 */
L_1101CC70:
    PUSH32(esp, esi); /* 0x1101CC70: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CC71: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CC76: pop ecx */
L_1101CC77:
    eax = esi; /* 0x1101CC77: mov eax, esi */
L_1101CC79:
    esi = POP32_VAL(esp); /* 0x1101CC79: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CC7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CC7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CC7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CC7Eu);

L_1101CC7E:
    PUSH32(esp, ebp); /* 0x1101CC7E: push ebp */
    ebp = esp; /* 0x1101CC7F: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CC81: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CC85: push esi */
    esi = ecx; /* 0x1101CC86: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CCAF; /* 0x1101CC88: je 0x1101ccaf */
L_1101CC8A:
    PUSH32(esp, edi); /* 0x1101CC8A: push edi */
    PUSH32(esp, 0x1101754Fu); /* 0x1101CC8B: push 0x1101754f */
    edi = esi + (-0x4); /* 0x1101CC90: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CC93: push dword ptr [edi] */
    PUSH32(esp, 0x44u); /* 0x1101CC95: push 0x44 */
    PUSH32(esp, esi); /* 0x1101CC97: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CC98: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CC9D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CCAA; /* 0x1101CCA1: je 0x1101ccaa */
L_1101CCA3:
    PUSH32(esp, edi); /* 0x1101CCA3: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CCA4: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CCA9: pop ecx */
L_1101CCAA:
    eax = edi; /* 0x1101CCAA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CCAC: pop edi */
    goto L_1101CCCF; /* 0x1101CCAD: jmp 0x1101cccf */
L_1101CCAF:
    MEM32(esi) = 0x110021C8u; /* 0x1101CCAF: mov dword ptr [esi], 0x110021c8 */
    RECOMP_CALL(sub_11022683); /* 0x1101CCB5: call 0x11022683 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CCBA: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CCBE: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CCCD; /* 0x1101CCC4: je 0x1101cccd */
L_1101CCC6:
    PUSH32(esp, esi); /* 0x1101CCC6: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CCC7: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CCCC: pop ecx */
L_1101CCCD:
    eax = esi; /* 0x1101CCCD: mov eax, esi */
L_1101CCCF:
    esi = POP32_VAL(esp); /* 0x1101CCCF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CCD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CCD1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CCD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CCD4u);

L_1101CCD4:
    PUSH32(esp, ebp); /* 0x1101CCD4: push ebp */
    ebp = esp; /* 0x1101CCD5: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CCD7: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CCDB: push esi */
    esi = ecx; /* 0x1101CCDC: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD05; /* 0x1101CCDE: je 0x1101cd05 */
L_1101CCE0:
    PUSH32(esp, edi); /* 0x1101CCE0: push edi */
    PUSH32(esp, 0x11017565u); /* 0x1101CCE1: push 0x11017565 */
    edi = esi + (-0x4); /* 0x1101CCE6: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CCE9: push dword ptr [edi] */
    PUSH32(esp, 0x44u); /* 0x1101CCEB: push 0x44 */
    PUSH32(esp, esi); /* 0x1101CCED: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CCEE: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CCF3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD00; /* 0x1101CCF7: je 0x1101cd00 */
L_1101CCF9:
    PUSH32(esp, edi); /* 0x1101CCF9: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CCFA: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CCFF: pop ecx */
L_1101CD00:
    eax = edi; /* 0x1101CD00: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CD02: pop edi */
    goto L_1101CD25; /* 0x1101CD03: jmp 0x1101cd25 */
L_1101CD05:
    MEM32(esi) = 0x11002248u; /* 0x1101CD05: mov dword ptr [esi], 0x11002248 */
    RECOMP_CALL(sub_11022683); /* 0x1101CD0B: call 0x11022683 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CD10: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CD14: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD23; /* 0x1101CD1A: je 0x1101cd23 */
L_1101CD1C:
    PUSH32(esp, esi); /* 0x1101CD1C: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CD1D: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CD22: pop ecx */
L_1101CD23:
    eax = esi; /* 0x1101CD23: mov eax, esi */
L_1101CD25:
    esi = POP32_VAL(esp); /* 0x1101CD25: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CD26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CD27: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CD2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CD2Au);

L_1101CD2A:
    PUSH32(esp, ebp); /* 0x1101CD2A: push ebp */
    ebp = esp; /* 0x1101CD2B: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CD2D: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CD31: push esi */
    esi = ecx; /* 0x1101CD32: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD5B; /* 0x1101CD34: je 0x1101cd5b */
L_1101CD36:
    PUSH32(esp, edi); /* 0x1101CD36: push edi */
    PUSH32(esp, 0x1101757Bu); /* 0x1101CD37: push 0x1101757b */
    edi = esi + (-0x4); /* 0x1101CD3C: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CD3F: push dword ptr [edi] */
    PUSH32(esp, 0x44u); /* 0x1101CD41: push 0x44 */
    PUSH32(esp, esi); /* 0x1101CD43: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CD44: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CD49: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD56; /* 0x1101CD4D: je 0x1101cd56 */
L_1101CD4F:
    PUSH32(esp, edi); /* 0x1101CD4F: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CD50: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CD55: pop ecx */
L_1101CD56:
    eax = edi; /* 0x1101CD56: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CD58: pop edi */
    goto L_1101CD7B; /* 0x1101CD59: jmp 0x1101cd7b */
L_1101CD5B:
    MEM32(esi) = 0x11002208u; /* 0x1101CD5B: mov dword ptr [esi], 0x11002208 */
    RECOMP_CALL(sub_11022683); /* 0x1101CD61: call 0x11022683 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CD66: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CD6A: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CD79; /* 0x1101CD70: je 0x1101cd79 */
L_1101CD72:
    PUSH32(esp, esi); /* 0x1101CD72: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CD73: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CD78: pop ecx */
L_1101CD79:
    eax = esi; /* 0x1101CD79: mov eax, esi */
L_1101CD7B:
    esi = POP32_VAL(esp); /* 0x1101CD7B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CD7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CD7D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CD80u);

L_1101CD80:
    PUSH32(esp, ebp); /* 0x1101CD80: push ebp */
    ebp = esp; /* 0x1101CD81: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CD83: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CD87: push esi */
    esi = ecx; /* 0x1101CD88: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CDB1; /* 0x1101CD8A: je 0x1101cdb1 */
L_1101CD8C:
    PUSH32(esp, edi); /* 0x1101CD8C: push edi */
    PUSH32(esp, 0x11017591u); /* 0x1101CD8D: push 0x11017591 */
    edi = esi + (-0x4); /* 0x1101CD92: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CD95: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x1101CD97: push 0xc */
    PUSH32(esp, esi); /* 0x1101CD99: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CD9A: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CD9F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CDAC; /* 0x1101CDA3: je 0x1101cdac */
L_1101CDA5:
    PUSH32(esp, edi); /* 0x1101CDA5: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CDA6: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CDAB: pop ecx */
L_1101CDAC:
    eax = edi; /* 0x1101CDAC: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CDAE: pop edi */
    goto L_1101CDC5; /* 0x1101CDAF: jmp 0x1101cdc5 */
L_1101CDB1:
    RECOMP_CALL(sub_11017591); /* 0x1101CDB1: call 0x11017591 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CDB6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CDC3; /* 0x1101CDBA: je 0x1101cdc3 */
L_1101CDBC:
    PUSH32(esp, esi); /* 0x1101CDBC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CDBD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CDC2: pop ecx */
L_1101CDC3:
    eax = esi; /* 0x1101CDC3: mov eax, esi */
L_1101CDC5:
    esi = POP32_VAL(esp); /* 0x1101CDC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CDC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CDC7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CDCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CDCAu);

L_1101CDCA:
    PUSH32(esp, ebp); /* 0x1101CDCA: push ebp */
    ebp = esp; /* 0x1101CDCB: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CDCD: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CDD1: push esi */
    esi = ecx; /* 0x1101CDD2: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CDFB; /* 0x1101CDD4: je 0x1101cdfb */
L_1101CDD6:
    PUSH32(esp, edi); /* 0x1101CDD6: push edi */
    PUSH32(esp, 0x110175ACu); /* 0x1101CDD7: push 0x110175ac */
    edi = esi + (-0x4); /* 0x1101CDDC: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CDDF: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x1101CDE1: push 0xc */
    PUSH32(esp, esi); /* 0x1101CDE3: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CDE4: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CDE9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CDF6; /* 0x1101CDED: je 0x1101cdf6 */
L_1101CDEF:
    PUSH32(esp, edi); /* 0x1101CDEF: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CDF0: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CDF5: pop ecx */
L_1101CDF6:
    eax = edi; /* 0x1101CDF6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CDF8: pop edi */
    goto L_1101CE0F; /* 0x1101CDF9: jmp 0x1101ce0f */
L_1101CDFB:
    RECOMP_CALL(sub_110175AC); /* 0x1101CDFB: call 0x110175ac */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CE00: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CE0D; /* 0x1101CE04: je 0x1101ce0d */
L_1101CE06:
    PUSH32(esp, esi); /* 0x1101CE06: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CE07: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CE0C: pop ecx */
L_1101CE0D:
    eax = esi; /* 0x1101CE0D: mov eax, esi */
L_1101CE0F:
    esi = POP32_VAL(esp); /* 0x1101CE0F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CE10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CE11: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CE14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE14u);

L_1101CE14:
    PUSH32(esp, ebp); /* 0x1101CE14: push ebp */
    ebp = esp; /* 0x1101CE15: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CE17: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CE1B: push esi */
    esi = ecx; /* 0x1101CE1C: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CE45; /* 0x1101CE1E: je 0x1101ce45 */
L_1101CE20:
    PUSH32(esp, edi); /* 0x1101CE20: push edi */
    PUSH32(esp, 0x110175C7u); /* 0x1101CE21: push 0x110175c7 */
    edi = esi + (-0x4); /* 0x1101CE26: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1101CE29: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x1101CE2B: push 0xc */
    PUSH32(esp, esi); /* 0x1101CE2D: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1101CE2E: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CE33: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CE40; /* 0x1101CE37: je 0x1101ce40 */
L_1101CE39:
    PUSH32(esp, edi); /* 0x1101CE39: push edi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CE3A: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CE3F: pop ecx */
L_1101CE40:
    eax = edi; /* 0x1101CE40: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1101CE42: pop edi */
    goto L_1101CE59; /* 0x1101CE43: jmp 0x1101ce59 */
L_1101CE45:
    RECOMP_CALL(sub_110175C7); /* 0x1101CE45: call 0x110175c7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CE4A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CE57; /* 0x1101CE4E: je 0x1101ce57 */
L_1101CE50:
    PUSH32(esp, esi); /* 0x1101CE50: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CE51: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CE56: pop ecx */
L_1101CE57:
    eax = esi; /* 0x1101CE57: mov eax, esi */
L_1101CE59:
    esi = POP32_VAL(esp); /* 0x1101CE59: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CE5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CE5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CE5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE5Eu);

L_1101CE5E:
    PUSH32(esp, 0); /* 0x1101CE5E: push 0 */
    RECOMP_CALL(sub_11016CE2); /* 0x1101CE60: call 0x11016ce2 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE65: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE66u);

L_1101CE66:
    PUSH32(esp, 0); /* 0x1101CE66: push 0 */
    RECOMP_CALL(sub_11016D37); /* 0x1101CE68: call 0x11016d37 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE6Eu);

L_1101CE6E:
    PUSH32(esp, 0); /* 0x1101CE6E: push 0 */
    RECOMP_CALL(sub_11016D8C); /* 0x1101CE70: call 0x11016d8c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE75: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE76u);

L_1101CE76:
    PUSH32(esp, 0); /* 0x1101CE76: push 0 */
    RECOMP_CALL(sub_11016DE1); /* 0x1101CE78: call 0x11016de1 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE7Eu);

L_1101CE7E:
    PUSH32(esp, 0); /* 0x1101CE7E: push 0 */
    RECOMP_CALL(sub_11016E36); /* 0x1101CE80: call 0x11016e36 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE85: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE86u);

L_1101CE86:
    PUSH32(esp, 0); /* 0x1101CE86: push 0 */
    RECOMP_CALL(sub_11016E8B); /* 0x1101CE88: call 0x11016e8b */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE8Eu);

L_1101CE8E:
    PUSH32(esp, 0); /* 0x1101CE8E: push 0 */
    RECOMP_CALL(sub_11016EE0); /* 0x1101CE90: call 0x11016ee0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE95: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE96u);

L_1101CE96:
    PUSH32(esp, 0); /* 0x1101CE96: push 0 */
    RECOMP_CALL(sub_11016FA0); /* 0x1101CE98: call 0x11016fa0 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CE9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CE9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CE9Eu);

L_1101CE9E:
    PUSH32(esp, 0); /* 0x1101CE9E: push 0 */
    RECOMP_CALL(sub_1101706F); /* 0x1101CEA0: call 0x1101706f */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CEA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CEA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEA6u);

L_1101CEA6:
    PUSH32(esp, 0); /* 0x1101CEA6: push 0 */
    RECOMP_CALL(sub_1101713E); /* 0x1101CEA8: call 0x1101713e */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CEAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CEAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEAEu);

L_1101CEAE:
    PUSH32(esp, 0); /* 0x1101CEAE: push 0 */
    RECOMP_CALL(sub_110171B2); /* 0x1101CEB0: call 0x110171b2 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CEB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CEB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEB6u);

L_1101CEB6:
    PUSH32(esp, 0); /* 0x1101CEB6: push 0 */
    RECOMP_CALL(sub_1101727B); /* 0x1101CEB8: call 0x1101727b */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CEBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CEBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEBEu);

L_1101CEBE:
    PUSH32(esp, 0); /* 0x1101CEBE: push 0 */
    RECOMP_CALL(sub_11017344); /* 0x1101CEC0: call 0x11017344 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101CEC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101CEC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEC6u);

L_1101CEC6:
    PUSH32(esp, ebp); /* 0x1101CEC6: push ebp */
    ebp = esp; /* 0x1101CEC7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101CEC9: push esi */
    esi = ecx; /* 0x1101CECA: mov esi, ecx */
    MEM32(esi) = 0x11001F80u; /* 0x1101CECC: mov dword ptr [esi], 0x11001f80 */
    RECOMP_CALL(sub_11022663); /* 0x1101CED2: call 0x11022663 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CED7: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CEDB: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CEEA; /* 0x1101CEE1: je 0x1101ceea */
L_1101CEE3:
    PUSH32(esp, esi); /* 0x1101CEE3: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CEE4: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CEE9: pop ecx */
L_1101CEEA:
    eax = esi; /* 0x1101CEEA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CEEC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CEED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CEEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CEF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CEF1u);

L_1101CEF1:
    PUSH32(esp, ebp); /* 0x1101CEF1: push ebp */
    ebp = esp; /* 0x1101CEF2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101CEF4: push esi */
    esi = ecx; /* 0x1101CEF5: mov esi, ecx */
    MEM32(esi) = 0x110020A0u; /* 0x1101CEF7: mov dword ptr [esi], 0x110020a0 */
    RECOMP_CALL(sub_11022663); /* 0x1101CEFD: call 0x11022663 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CF02: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CF06: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CF15; /* 0x1101CF0C: je 0x1101cf15 */
L_1101CF0E:
    PUSH32(esp, esi); /* 0x1101CF0E: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CF0F: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CF14: pop ecx */
L_1101CF15:
    eax = esi; /* 0x1101CF15: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CF17: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CF18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CF19: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CF1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CF1Cu);

L_1101CF1C:
    PUSH32(esp, ebp); /* 0x1101CF1C: push ebp */
    ebp = esp; /* 0x1101CF1D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101CF1F: push esi */
    esi = ecx; /* 0x1101CF20: mov esi, ecx */
    MEM32(esi) = 0x11002010u; /* 0x1101CF22: mov dword ptr [esi], 0x11002010 */
    RECOMP_CALL(sub_11022663); /* 0x1101CF28: call 0x11022663 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CF2D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1101CF31: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CF40; /* 0x1101CF37: je 0x1101cf40 */
L_1101CF39:
    PUSH32(esp, esi); /* 0x1101CF39: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CF3A: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101CF3F: pop ecx */
L_1101CF40:
    eax = esi; /* 0x1101CF40: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CF42: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CF43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CF44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CF47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CF47u);

L_1101CF47:
    PUSH32(esp, ebp); /* 0x1101CF47: push ebp */
    ebp = esp; /* 0x1101CF48: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101CF4A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1101CF4B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101CF4E: push edi */
    edi = ecx; /* 0x1101CF4F: mov edi, ecx */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1101CF51: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101CF68; /* 0x1101CF55: jae 0x1101cf68 */
L_1101CF57:
    eax = MEM32(esi + 0x10); /* 0x1101CF57: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101CF5A: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1101CF5B: push eax */
    PUSH32(esp, esi); /* 0x1101CF5C: push esi */
    PUSH32(esp, edi); /* 0x1101CF5D: push edi */
    RECOMP_CALL(sub_1102995D); /* 0x1101CF5E: call 0x1102995d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101CF63: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1101CF73; /* 0x1101CF66: jmp 0x1101cf73 */
L_1101CF68:
    /* test edi, edi */ /* 0x1101CF68: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CF70; /* 0x1101CF6A: je 0x1101cf70 */
L_1101CF6C:
    eax = MEM32(esi); /* 0x1101CF6C: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1101CF6E: mov dword ptr [edi], eax */
L_1101CF70:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1101CF70: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101CF73:
    eax = MEM32(esi + 0x10); /* 0x1101CF73: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x10) = eax; /* 0x1101CF76: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x14); /* 0x1101CF79: mov eax, dword ptr [esi + 0x14] */
    MEM32(edi + 0x14) = eax; /* 0x1101CF7C: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1101CF7F: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101CF83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x1101CF85: mov dword ptr [esi + 0x14], 7 */
    edi = POP32_VAL(esp); /* 0x1101CF8C: pop edi */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1101CF8D: mov word ptr [esi], ax */
    esi = POP32_VAL(esp); /* 0x1101CF90: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CF91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CF92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101CF95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CF95u);

L_1101CF95:
    PUSH32(esp, ebp); /* 0x1101CF95: push ebp */
    ebp = esp; /* 0x1101CF96: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1101CF98: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1101CF9C: mov edx, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101CFB5; /* 0x1101CF9E: jne 0x1101cfb5 */
L_1101CFA0:
    /* cmp MEM32(edx + 0x14), 8 */ /* 0x1101CFA0: cmp dword ptr [edx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101CFA8; /* 0x1101CFA4: jb 0x1101cfa8 */
L_1101CFA6:
    edx = MEM32(edx); /* 0x1101CFA6: mov edx, dword ptr [edx] */
L_1101CFA8:
    ecx = MEM32(ebp + 0x8); /* 0x1101CFA8: mov ecx, dword ptr [ebp + 8] */
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1101CFAB: mov ax, word ptr [ebp + 0x10] */
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1101CFAF: mov word ptr [edx + ecx*2], ax */
    goto L_1101CFD2; /* 0x1101CFB3: jmp 0x1101cfd2 */
L_1101CFB5:
    /* cmp MEM32(edx + 0x14), 8 */ /* 0x1101CFB5: cmp dword ptr [edx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101CFBD; /* 0x1101CFB9: jb 0x1101cfbd */
L_1101CFBB:
    edx = MEM32(edx); /* 0x1101CFBB: mov edx, dword ptr [edx] */
L_1101CFBD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101CFBD: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1101CFC0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101CFC3: push dword ptr [ebp + 0x10] */
    eax = edx + eax * 2; /* 0x1101CFC6: lea eax, [edx + eax*2] */
    PUSH32(esp, eax); /* 0x1101CFC9: push eax */
    RECOMP_CALL(sub_1102C280); /* 0x1101CFCA: call 0x1102c280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101CFCF: add esp, 0xc */
    _flag_k = FK_ADD;
L_1101CFD2:
    ebp = POP32_VAL(esp); /* 0x1101CFD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1101CFD3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1101CFD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101CFD6u);

L_1101CFD6:
    PUSH32(esp, 0xCu); /* 0x1101CFD6: push 0xc */
    eax = 0x1103E145u; /* 0x1101CFD8: mov eax, 0x1103e145 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101CFDD: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101CFE2: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101CFE4: mov dword ptr [ebp - 0x18], esi */
    edi = MEM32(ebp + 0x8); /* 0x1101CFE7: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi | 7)); _flag_b = (uint32_t)((edi | 7));
    edi = edi | 7; /* 0x1101CFEA: or edi, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x7FFFFFFEu */ /* 0x1101CFED: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101CFFA; /* 0x1101CFF3: jbe 0x1101cffa */
L_1101CFF5:
    edi = MEM32(ebp + 0x8); /* 0x1101CFF5: mov edi, dword ptr [ebp + 8] */
    goto L_1101D023; /* 0x1101CFF8: jmp 0x1101d023 */
L_1101CFFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101CFFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 3; /* 0x1101CFFC: mov dword ptr [ebp - 0x14], 3 */
    eax = edi; /* 0x1101D003: mov eax, edi */
    ebx = MEM32(esi + 0x14); /* 0x1101D005: mov ebx, dword ptr [esi + 0x14] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x14)); /* 0x1101D008: div dword ptr [ebp - 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = ebx; /* 0x1101D00B: mov ecx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1101D00D: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1101D00D: shr ecx, 1 */
    /* cmp ecx, eax */ /* 0x1101D00F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101D023; /* 0x1101D011: jbe 0x1101d023 */
L_1101D013:
    edi = 0x7FFFFFFEu; /* 0x1101D013: mov edi, 0x7ffffffe */
    eax = edi; /* 0x1101D018: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1101D01A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x1101D01C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1101D023; /* 0x1101D01E: ja 0x1101d023 */
L_1101D020:
    edi = ecx + ebx; /* 0x1101D020: lea edi, [ecx + ebx] */
L_1101D023:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101D023: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x1; /* 0x1101D027: lea eax, [edi + 1] */
    PUSH32(esp, 0); /* 0x1101D02A: push 0 */
    PUSH32(esp, eax); /* 0x1101D02C: push eax */
    RECOMP_CALL(sub_11014F27); /* 0x1101D02D: call 0x11014f27 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101D032: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101D033: pop ecx */
    goto L_1101D060; /* 0x1101D034: jmp 0x1101d060 */
L_1101D060:
    ebx = MEM32(ebp + 0xC); /* 0x1101D060: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101D063: mov dword ptr [ebp - 0x14], eax */
    /* test ebx, ebx */ /* 0x1101D066: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D081; /* 0x1101D068: je 0x1101d081 */
L_1101D06A:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1101D06A: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101D074; /* 0x1101D06E: jb 0x1101d074 */
L_1101D070:
    ecx = MEM32(esi); /* 0x1101D070: mov ecx, dword ptr [esi] */
    goto L_1101D076; /* 0x1101D072: jmp 0x1101d076 */
L_1101D074:
    ecx = esi; /* 0x1101D074: mov ecx, esi */
L_1101D076:
    PUSH32(esp, ebx); /* 0x1101D076: push ebx */
    PUSH32(esp, ecx); /* 0x1101D077: push ecx */
    PUSH32(esp, eax); /* 0x1101D078: push eax */
    RECOMP_CALL(sub_1102294B); /* 0x1101D079: call 0x1102294b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101D07E: add esp, 0xc */
    _flag_k = FK_ADD;
L_1101D081:
    PUSH32(esp, 0); /* 0x1101D081: push 0 */
    PUSH32(esp, 1); /* 0x1101D083: push 1 */
    ecx = esi; /* 0x1101D085: mov ecx, esi */
    RECOMP_CALL(sub_1102261D); /* 0x1101D087: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1101D08C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D095; /* 0x1101D08E: je 0x1101d095 */
L_1101D090:
    eax = MEM32(ebp + (-0x14)); /* 0x1101D090: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x1101D093: mov dword ptr [esi], eax */
L_1101D095:
    MEM32(esi + 0x14) = edi; /* 0x1101D095: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = ebx; /* 0x1101D098: mov dword ptr [esi + 0x10], ebx */
    /* cmp edi, 8 */ /* 0x1101D09B: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101D0A2; /* 0x1101D09E: jb 0x1101d0a2 */
L_1101D0A0:
    esi = MEM32(esi); /* 0x1101D0A0: mov esi, dword ptr [esi] */
L_1101D0A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101D0A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x1101D0A4: mov word ptr [esi + ebx*2], ax */
    RECOMP_CALL(sub_1103B340); /* 0x1101D0A8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101D0AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101D0C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101D0C6u);

L_1101D0C6:
    PUSH32(esp, ebp); /* 0x1101D0C6: push ebp */
    ebp = esp; /* 0x1101D0C7: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1101D0C9: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1101D0CC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1101D0CD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1101D0D0: push edi */
    MEM8(esi) = (uint8_t)(0x25u); /* 0x1101D0D1: mov byte ptr [esi], 0x25 */
    eax = esi + 0x1; /* 0x1101D0D4: lea eax, [esi + 1] */
    /* test LO8(edx), 0x20u */ /* 0x1101D0D7: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D0E0; /* 0x1101D0DA: je 0x1101d0e0 */
L_1101D0DC:
    MEM8(eax) = (uint8_t)(0x2Bu); /* 0x1101D0DC: mov byte ptr [eax], 0x2b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101D0DF: inc eax */
    _flag_k = FK_INC;
L_1101D0E0:
    /* test LO8(edx), 0x10u */ /* 0x1101D0E0: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D0E9; /* 0x1101D0E3: je 0x1101d0e9 */
L_1101D0E5:
    MEM8(eax) = (uint8_t)(0x23u); /* 0x1101D0E5: mov byte ptr [eax], 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101D0E8: inc eax */
    _flag_k = FK_INC;
L_1101D0E9:
    SET_LO8(ecx, MEM8(ebp + 0x10)); /* 0x1101D0E9: mov cl, byte ptr [ebp + 0x10] */
    MEM16(eax) = (uint16_t)(0x2A2Eu); /* 0x1101D0EC: mov word ptr [eax], 0x2a2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1101D0F1: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1101D0F4: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D0FB; /* 0x1101D0F6: je 0x1101d0fb */
L_1101D0F8:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1101D0F8: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101D0FA: inc eax */
    _flag_k = FK_INC;
L_1101D0FB:
    ecx = edx; /* 0x1101D0FB: mov ecx, edx */
    edi = 0x3000u; /* 0x1101D0FD: mov edi, 0x3000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1101D102: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(edx), 4 */ /* 0x1101D104: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D12B; /* 0x1101D107: je 0x1101d12b */
L_1101D109:
    /* cmp ecx, 0x2000u */ /* 0x1101D109: cmp ecx, 0x2000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D133; /* 0x1101D10F: je 0x1101d133 */
L_1101D111:
    /* cmp ecx, edi */ /* 0x1101D111: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D119; /* 0x1101D113: jne 0x1101d119 */
L_1101D115:
    SET_LO8(ecx, 0x41u); /* 0x1101D115: mov cl, 0x41 */
    goto L_1101D14F; /* 0x1101D117: jmp 0x1101d14f */
L_1101D119:
    /* cmp ecx, 0x1000u */ /* 0x1101D119: cmp ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101D11F: setne cl */
    ecx = ecx * 2 + 0x45; /* 0x1101D122: lea ecx, [ecx*2 + 0x45] */
    goto L_1101D14F; /* 0x1101D129: jmp 0x1101d14f */
L_1101D12B:
    /* cmp ecx, 0x2000u */ /* 0x1101D12B: cmp ecx, 0x2000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D137; /* 0x1101D131: jne 0x1101d137 */
L_1101D133:
    SET_LO8(ecx, 0x66u); /* 0x1101D133: mov cl, 0x66 */
    goto L_1101D14F; /* 0x1101D135: jmp 0x1101d14f */
L_1101D137:
    /* cmp ecx, edi */ /* 0x1101D137: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D13F; /* 0x1101D139: jne 0x1101d13f */
L_1101D13B:
    SET_LO8(ecx, 0x61u); /* 0x1101D13B: mov cl, 0x61 */
    goto L_1101D14F; /* 0x1101D13D: jmp 0x1101d14f */
L_1101D13F:
    /* cmp ecx, 0x1000u */ /* 0x1101D13F: cmp ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101D145: setne cl */
    ecx = ecx * 2 + 0x65; /* 0x1101D148: lea ecx, [ecx*2 + 0x65] */
L_1101D14F:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1101D14F: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101D151: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x1101D152: pop edi */
    MEM8(eax) = (uint8_t)(0); /* 0x1101D153: mov byte ptr [eax], 0 */
    eax = esi; /* 0x1101D156: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101D158: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101D159: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101D15A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101D15B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101D15Bu);

L_1101D15B:
    PUSH32(esp, 0x64u); /* 0x1101D15B: push 0x64 */
    eax = 0x1103E180u; /* 0x1101D15D: mov eax, 0x1103e180 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101D162: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x30); /* 0x1101D167: mov edx, dword ptr [ebp + 0x30] */
    eax = MEM32(ebp + 0xC); /* 0x1101D16A: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x1101D16D: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x20); /* 0x1101D170: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x70)) = eax; /* 0x1101D173: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x1101D176: mov dword ptr [ebp - 0x6c], ebx */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1101D179: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x60)) = edx; /* 0x1101D17C: mov dword ptr [ebp - 0x60], edx */
    /* test edx, edx */ /* 0x1101D17F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D192; /* 0x1101D181: je 0x1101d192 */
L_1101D183:
    SET_LO8(eax, MEM8(ecx)); /* 0x1101D183: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x1101D185: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D18D; /* 0x1101D187: je 0x1101d18d */
L_1101D189:
    /* cmp LO8(eax), 0x2Du */ /* 0x1101D189: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D192; /* 0x1101D18B: jne 0x1101d192 */
L_1101D18D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D18D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1101D18F: inc edi */
    _flag_k = FK_INC;
    goto L_1101D194; /* 0x1101D190: jmp 0x1101d194 */
L_1101D192:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D192: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101D194:
    eax = MEM32(ebx + 0x14); /* 0x1101D194: mov eax, dword ptr [ebx + 0x14] */
    esi = 0x3000u; /* 0x1101D197: mov esi, 0x3000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1101D19C: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1101D19E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D1A9; /* 0x1101D1A0: je 0x1101d1a9 */
L_1101D1A2:
    esi = 0x110022E4u; /* 0x1101D1A2: mov esi, 0x110022e4 */
    goto L_1101D1CB; /* 0x1101D1A7: jmp 0x1101d1cb */
L_1101D1A9:
    eax = edi + 0x2; /* 0x1101D1A9: lea eax, [edi + 2] */
    esi = 0x110022E8u; /* 0x1101D1AC: mov esi, 0x110022e8 */
    /* cmp eax, edx */ /* 0x1101D1B1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1101D1CB; /* 0x1101D1B3: ja 0x1101d1cb */
L_1101D1B5:
    /* cmp MEM8(ecx + edi), 0x30u */ /* 0x1101D1B5: cmp byte ptr [ecx + edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(ecx + edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D1CB; /* 0x1101D1B9: jne 0x1101d1cb */
L_1101D1BB:
    SET_LO8(edx, MEM8(ecx + edi + 0x1)); /* 0x1101D1BB: mov dl, byte ptr [ecx + edi + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x1101D1BF: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D1C9; /* 0x1101D1C2: je 0x1101d1c9 */
L_1101D1C4:
    /* cmp LO8(edx), 0x58u */ /* 0x1101D1C4: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D1CB; /* 0x1101D1C7: jne 0x1101d1cb */
L_1101D1C9:
    edi = eax; /* 0x1101D1C9: mov edi, eax */
L_1101D1CB:
    PUSH32(esp, esi); /* 0x1101D1CB: push esi */
    esi = MEM32(0x1106910C); /* 0x1101D1CC: mov esi, dword ptr [0x1106910c] */
    PUSH32(esp, ecx); /* 0x1101D1D2: push ecx */
    RECOMP_ICALL(esi); /* 0x1101D1D3: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1101D1D5: mov dword ptr [ebp - 0x48], eax */
    PUSH32(esp, 0x2Eu); /* 0x1101D1D8: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1101D1DA: pop eax */
    MEM16(ebp + (-0x4C)) = (uint16_t)(LO16(eax)); /* 0x1101D1DB: mov word ptr [ebp - 0x4c], ax */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1101D1DF: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1101D1E5: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1101D1E7: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(eax)); /* 0x1101D1E9: mov byte ptr [ebp - 0x4c], al */
    eax = ebp + (-0x4C); /* 0x1101D1EC: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1101D1EF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1101D1F0: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x1101D1F3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1101D1F5: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = eax; /* 0x1101D1F8: mov dword ptr [ebp - 0x50], eax */
    eax = ebp + (-0x58); /* 0x1101D1FB: lea eax, [ebp - 0x58] */
    ecx = ebx; /* 0x1101D1FE: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D200: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D201: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101D206: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D20A: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1101D20B: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101D210: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1101D214: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101D216: pop ecx */
    ecx = ebp + (-0x58); /* 0x1101D217: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x68)) = esi; /* 0x1101D21A: mov dword ptr [ebp - 0x68], esi */
    RECOMP_CALL(sub_1100E431); /* 0x1101D21D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101D222: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1101D224: mov ecx, esi */
    PUSH32(esp, 0x30u); /* 0x1101D226: push 0x30 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1101D228: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x60)); /* 0x1101D22B: mov esi, dword ptr [ebp - 0x60] */
    ecx = ebp + (-0x28); /* 0x1101D22E: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x54)) = (uint8_t)(LO8(eax)); /* 0x1101D231: mov byte ptr [ebp - 0x54], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101D234: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D236: push eax */
    PUSH32(esp, esi); /* 0x1101D237: push esi */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1101D238: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = eax; /* 0x1101D23F: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x1101D242: mov byte ptr [ebp - 0x28], al */
    RECOMP_CALL(sub_11014076); /* 0x1101D245: call 0x11014076 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D24A: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D24E: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101D251: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D25D; /* 0x1101D258: jae 0x1101d25d */
L_1101D25A:
    eax = ebp + (-0x28); /* 0x1101D25A: lea eax, [ebp - 0x28] */
L_1101D25D:
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D25D: mov ecx, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x68)); /* 0x1101D260: mov edx, dword ptr [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1101D263: push eax */
    eax = esi + ecx; /* 0x1101D264: lea eax, [esi + ecx] */
    edx = MEM32(edx); /* 0x1101D267: mov edx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1101D269: push eax */
    PUSH32(esp, ecx); /* 0x1101D26A: push ecx */
    ecx = MEM32(ebp + (-0x68)); /* 0x1101D26B: mov ecx, dword ptr [ebp - 0x68] */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1101D26E: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x1101D271: lea eax, [ebp - 0x60] */
    ecx = ebx; /* 0x1101D274: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D276: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D277: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101D27C: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101D27D: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015B71); /* 0x1101D281: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101D286: pop ecx */
    ecx = ebp + (-0x60); /* 0x1101D287: lea ecx, [ebp - 0x60] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1101D28A: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101D28D: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100E431); /* 0x1101D291: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D296: mov ecx, dword ptr [ebp - 0x44] */
    eax = ebp + (-0x40); /* 0x1101D299: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1101D29C: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1101D29D: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D2A2: mov ecx, dword ptr [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101D2A5: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ecx); /* 0x1101D2A9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101D2AB: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x48)); /* 0x1101D2AE: mov edx, dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D2B1: push dword ptr [ebp - 0x54] */
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x1101D2B4: mov byte ptr [ebp - 0x58], al */
    /* cmp MEM32(ebp + (-0x50)), esi */ /* 0x1101D2B7: cmp dword ptr [ebp - 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D2C9; /* 0x1101D2BA: jne 0x1101d2c9 */
L_1101D2BC:
    eax = MEM32(ebp + 0x24); /* 0x1101D2BC: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x1101D2BF: push eax */
    PUSH32(esp, edx); /* 0x1101D2C0: push edx */
    ecx = edx + eax; /* 0x1101D2C1: lea ecx, [edx + eax] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D2C4: mov dword ptr [ebp - 0x50], ecx */
    goto L_1101D312; /* 0x1101D2C7: jmp 0x1101d312 */
L_1101D2C9:
    esi = MEM32(ebp + (-0x50)); /* 0x1101D2C9: mov esi, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + 0x24); /* 0x1101D2CC: mov ecx, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1101D2CF: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101D2D2: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D2D4: mov dword ptr [ebp - 0x50], ecx */
    ecx = ebp + (-0x28); /* 0x1101D2D7: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1101D2DA: push edx */
    RECOMP_CALL(sub_110297AC); /* 0x1101D2DB: call 0x110297ac */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D2E0: push dword ptr [ebp - 0x54] */
    eax = esi + 0x1; /* 0x1101D2E3: lea eax, [esi + 1] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1101D2E6: push dword ptr [ebp + 0x28] */
    ecx = ebp + (-0x28); /* 0x1101D2E9: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1101D2EC: push eax */
    RECOMP_CALL(sub_110297AC); /* 0x1101D2ED: call 0x110297ac */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D2F2: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x1101D2F5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101D2F7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D2FA: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, LO8(eax)); /* 0x1101D2FE: mov cl, al */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D300: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D308; /* 0x1101D303: jae 0x1101d308 */
L_1101D305:
    eax = ebp + (-0x28); /* 0x1101D305: lea eax, [ebp - 0x28] */
L_1101D308:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D308: push dword ptr [ebp - 0x54] */
    MEM8(eax + esi) = (uint8_t)(LO8(ecx)); /* 0x1101D30B: mov byte ptr [eax + esi], cl */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1101D30E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1101D311: push esi */
L_1101D312:
    ecx = ebp + (-0x28); /* 0x1101D312: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_110297AC); /* 0x1101D315: call 0x110297ac */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x1101D31A: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x40)); /* 0x1101D31E: mov esi, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D326; /* 0x1101D321: jae 0x1101d326 */
L_1101D323:
    esi = ebp + (-0x40); /* 0x1101D323: lea esi, [ebp - 0x40] */
L_1101D326:
    SET_LO8(eax, MEM8(esi)); /* 0x1101D326: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101D328: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D361; /* 0x1101D32A: je 0x1101d361 */
L_1101D32C:
    ebx = MEM32(ebp + (-0x50)); /* 0x1101D32C: mov ebx, dword ptr [ebp - 0x50] */
L_1101D32F:
    /* test LO8(eax), LO8(eax) */ /* 0x1101D32F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101D35E; /* 0x1101D331: jle 0x1101d35e */
L_1101D333:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x1101D333: movsx ecx, al */
    eax = ebx; /* 0x1101D336: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101D338: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1101D33A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D35E; /* 0x1101D33C: jae 0x1101d35e */
L_1101D33E:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101D33E: push dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1101D341: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x1101D343: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1101D346: push 1 */
    PUSH32(esp, ebx); /* 0x1101D348: push ebx */
    RECOMP_CALL(sub_110297AC); /* 0x1101D349: call 0x110297ac */
    RECOMP_FLAGS_IN();
    eax = esi + 0x1; /* 0x1101D34E: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x1101D351: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101D358; /* 0x1101D354: jle 0x1101d358 */
L_1101D356:
    esi = eax; /* 0x1101D356: mov esi, eax */
L_1101D358:
    SET_LO8(eax, MEM8(esi)); /* 0x1101D358: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101D35A: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D32F; /* 0x1101D35C: jne 0x1101d32f */
L_1101D35E:
    ebx = MEM32(ebp + (-0x6C)); /* 0x1101D35E: mov ebx, dword ptr [ebp - 0x6c] */
L_1101D361:
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x1101D361: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x1101D365: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x60)) = eax; /* 0x1101D368: mov dword ptr [ebp - 0x60], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1101D380; /* 0x1101D36B: jl 0x1101d380 */
L_1101D36D:
    if (CMP_G(_flag_a, _flag_b)) goto L_1101D375; /* 0x1101D36D: jg 0x1101d375 */
L_1101D36F:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x1101D36F: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101D380; /* 0x1101D373: jbe 0x1101d380 */
L_1101D375:
    esi = MEM32(ebx + 0x20); /* 0x1101D375: mov esi, dword ptr [ebx + 0x20] */
    /* cmp esi, eax */ /* 0x1101D378: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101D380; /* 0x1101D37A: jbe 0x1101d380 */
L_1101D37C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1101D37C: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_1101D382; /* 0x1101D37E: jmp 0x1101d382 */
L_1101D380:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D380: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101D382:
    eax = MEM32(ebx + 0x14); /* 0x1101D382: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x1101D385: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x1101D38A: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D420; /* 0x1101D38D: je 0x1101d420 */
L_1101D393:
    /* cmp eax, 0x100u */ /* 0x1101D393: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D3D8; /* 0x1101D398: je 0x1101d3d8 */
L_1101D39A:
    ebx = MEM32(ebp + 0x8); /* 0x1101D39A: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x5C); /* 0x1101D39D: lea eax, [ebp - 0x5c] */
    PUSH32(esp, esi); /* 0x1101D3A0: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D3A1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D3A4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D3A7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101D3AA: push eax */
    PUSH32(esp, ebx); /* 0x1101D3AB: push ebx */
    RECOMP_CALL(sub_110225C9); /* 0x1101D3AC: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101D3B1: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101D3B3: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D3B6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D3B8: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1101D3BC: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101D3BE: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101D3C1: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101D3C4: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D3C7: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D3CF; /* 0x1101D3CA: jae 0x1101d3cf */
L_1101D3CC:
    eax = ebp + (-0x28); /* 0x1101D3CC: lea eax, [ebp - 0x28] */
L_1101D3CF:
    PUSH32(esp, edi); /* 0x1101D3CF: push edi */
    PUSH32(esp, eax); /* 0x1101D3D0: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101D3D1: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101D3D4: push dword ptr [ecx] */
    goto L_1101D437; /* 0x1101D3D6: jmp 0x1101d437 */
L_1101D3D8:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D3D8: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D3DC: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D3E4; /* 0x1101D3DF: jae 0x1101d3e4 */
L_1101D3E1:
    eax = ebp + (-0x28); /* 0x1101D3E1: lea eax, [ebp - 0x28] */
L_1101D3E4:
    ebx = MEM32(ebp + 0x8); /* 0x1101D3E4: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101D3E7: push edi */
    PUSH32(esp, eax); /* 0x1101D3E8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D3E9: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x5C); /* 0x1101D3EC: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D3EF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101D3F2: push eax */
    PUSH32(esp, ebx); /* 0x1101D3F3: push ebx */
    RECOMP_CALL(sub_11022565); /* 0x1101D3F4: call 0x11022565 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101D3F9: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1101D3FB: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D3FC: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1101D3FF: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101D401: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101D404: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101D407: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x5C); /* 0x1101D40A: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101D40D: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101D410: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1101D412: push eax */
    PUSH32(esp, ebx); /* 0x1101D413: push ebx */
    RECOMP_CALL(sub_110225C9); /* 0x1101D414: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101D419: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D41C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101D444; /* 0x1101D41E: jmp 0x1101d444 */
L_1101D420:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D420: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D424: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D42C; /* 0x1101D427: jae 0x1101d42c */
L_1101D429:
    eax = ebp + (-0x28); /* 0x1101D429: lea eax, [ebp - 0x28] */
L_1101D42C:
    ebx = MEM32(ebp + 0x8); /* 0x1101D42C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101D42F: push edi */
    PUSH32(esp, eax); /* 0x1101D430: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D431: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D434: push dword ptr [ebp + 0x10] */
L_1101D437:
    eax = ebp + (-0x5C); /* 0x1101D437: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1101D43A: push eax */
    PUSH32(esp, ebx); /* 0x1101D43B: push ebx */
    RECOMP_CALL(sub_11022565); /* 0x1101D43C: call 0x11022565 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101D441: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1101D444:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101D444: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x1101D448: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101D44A: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x1101D44D: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D450: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x1101D453: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D45B; /* 0x1101D456: jae 0x1101d45b */
L_1101D458:
    eax = ebp + (-0x28); /* 0x1101D458: lea eax, [ebp - 0x28] */
L_1101D45B:
    MEM32(ebp + (-0x48)) = eax; /* 0x1101D45B: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x1101D45E: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101D461: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1101D463: push eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1101D464: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1101D467: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1101D469: push eax */
    PUSH32(esp, edx); /* 0x1101D46A: push edx */
    PUSH32(esp, ecx); /* 0x1101D46B: push ecx */
    eax = ebp + (-0x64); /* 0x1101D46C: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1101D46F: push eax */
    PUSH32(esp, ebx); /* 0x1101D470: push ebx */
    RECOMP_CALL(sub_11022565); /* 0x1101D471: call 0x11022565 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x6C)); /* 0x1101D476: mov edx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D479: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1101D47B: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D47C: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1101D47F: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x70)); /* 0x1101D481: mov esi, dword ptr [ebp - 0x70] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101D484: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x1101D487: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x1101D48A: push eax */
    PUSH32(esp, ecx); /* 0x1101D48B: push ecx */
    PUSH32(esp, esi); /* 0x1101D48C: push esi */
    PUSH32(esp, ebx); /* 0x1101D48D: push ebx */
    MEM32(ebp + 0x14) = eax; /* 0x1101D48E: mov dword ptr [ebp + 0x14], eax */
    MEM32(edx + 0x20) = edi; /* 0x1101D491: mov dword ptr [edx + 0x20], edi */
    MEM32(edx + 0x24) = edi; /* 0x1101D494: mov dword ptr [edx + 0x24], edi */
    RECOMP_CALL(sub_110225C9); /* 0x1101D497: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101D49C: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x1101D49F: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1101D4A2: push edi */
    PUSH32(esp, 1); /* 0x1101D4A3: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101D4A5: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1101D4AA: push edi */
    PUSH32(esp, 1); /* 0x1101D4AB: push 1 */
    ecx = ebp + (-0x28); /* 0x1101D4AD: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1101D4B0: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101D4B5: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1101D4B7: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101D4BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101D4BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101D4BDu);

L_1101D4BD:
    PUSH32(esp, 0x64u); /* 0x1101D4BD: push 0x64 */
    eax = 0x1103E1C5u; /* 0x1101D4BF: mov eax, 0x1103e1c5 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101D4C4: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x30); /* 0x1101D4C9: mov edx, dword ptr [ebp + 0x30] */
    eax = MEM32(ebp + 0xC); /* 0x1101D4CC: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x1101D4CF: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x20); /* 0x1101D4D2: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x70)) = eax; /* 0x1101D4D5: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x1101D4D8: mov dword ptr [ebp - 0x6c], ebx */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1101D4DB: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x60)) = edx; /* 0x1101D4DE: mov dword ptr [ebp - 0x60], edx */
    /* test edx, edx */ /* 0x1101D4E1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D4F4; /* 0x1101D4E3: je 0x1101d4f4 */
L_1101D4E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x1101D4E5: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x1101D4E7: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D4EF; /* 0x1101D4E9: je 0x1101d4ef */
L_1101D4EB:
    /* cmp LO8(eax), 0x2Du */ /* 0x1101D4EB: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D4F4; /* 0x1101D4ED: jne 0x1101d4f4 */
L_1101D4EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D4EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1101D4F1: inc edi */
    _flag_k = FK_INC;
    goto L_1101D4F6; /* 0x1101D4F2: jmp 0x1101d4f6 */
L_1101D4F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D4F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101D4F6:
    eax = MEM32(ebx + 0x14); /* 0x1101D4F6: mov eax, dword ptr [ebx + 0x14] */
    esi = 0x3000u; /* 0x1101D4F9: mov esi, 0x3000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1101D4FE: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1101D500: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D50B; /* 0x1101D502: je 0x1101d50b */
L_1101D504:
    esi = 0x110022E4u; /* 0x1101D504: mov esi, 0x110022e4 */
    goto L_1101D52D; /* 0x1101D509: jmp 0x1101d52d */
L_1101D50B:
    eax = edi + 0x2; /* 0x1101D50B: lea eax, [edi + 2] */
    esi = 0x110022E8u; /* 0x1101D50E: mov esi, 0x110022e8 */
    /* cmp eax, edx */ /* 0x1101D513: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1101D52D; /* 0x1101D515: ja 0x1101d52d */
L_1101D517:
    /* cmp MEM8(ecx + edi), 0x30u */ /* 0x1101D517: cmp byte ptr [ecx + edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(ecx + edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D52D; /* 0x1101D51B: jne 0x1101d52d */
L_1101D51D:
    SET_LO8(edx, MEM8(ecx + edi + 0x1)); /* 0x1101D51D: mov dl, byte ptr [ecx + edi + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x1101D521: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D52B; /* 0x1101D524: je 0x1101d52b */
L_1101D526:
    /* cmp LO8(edx), 0x58u */ /* 0x1101D526: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D52D; /* 0x1101D529: jne 0x1101d52d */
L_1101D52B:
    edi = eax; /* 0x1101D52B: mov edi, eax */
L_1101D52D:
    PUSH32(esp, esi); /* 0x1101D52D: push esi */
    esi = MEM32(0x1106910C); /* 0x1101D52E: mov esi, dword ptr [0x1106910c] */
    PUSH32(esp, ecx); /* 0x1101D534: push ecx */
    RECOMP_ICALL(esi); /* 0x1101D535: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1101D537: mov dword ptr [ebp - 0x48], eax */
    PUSH32(esp, 0x2Eu); /* 0x1101D53A: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1101D53C: pop eax */
    MEM16(ebp + (-0x4C)) = (uint16_t)(LO16(eax)); /* 0x1101D53D: mov word ptr [ebp - 0x4c], ax */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1101D541: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1101D547: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1101D549: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(eax)); /* 0x1101D54B: mov byte ptr [ebp - 0x4c], al */
    eax = ebp + (-0x4C); /* 0x1101D54E: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1101D551: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1101D552: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x1101D555: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1101D557: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = eax; /* 0x1101D55A: mov dword ptr [ebp - 0x50], eax */
    eax = ebp + (-0x58); /* 0x1101D55D: lea eax, [ebp - 0x58] */
    ecx = ebx; /* 0x1101D560: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D562: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D563: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101D568: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D56C: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x1101D56D: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101D572: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1101D576: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101D578: pop ecx */
    ecx = ebp + (-0x58); /* 0x1101D579: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x68)) = esi; /* 0x1101D57C: mov dword ptr [ebp - 0x68], esi */
    RECOMP_CALL(sub_1100E431); /* 0x1101D57F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101D584: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1101D586: mov ecx, esi */
    PUSH32(esp, 0x30u); /* 0x1101D588: push 0x30 */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1101D58A: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x60)); /* 0x1101D58D: mov esi, dword ptr [ebp - 0x60] */
    ecx = ebp + (-0x28); /* 0x1101D590: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1101D593: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x1101D597: movzx eax, ax */
    MEM32(ebp + (-0x54)) = eax; /* 0x1101D59A: mov dword ptr [ebp - 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101D59D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D59F: push eax */
    PUSH32(esp, esi); /* 0x1101D5A0: push esi */
    MEM32(ebp + (-0x14)) = 7; /* 0x1101D5A1: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x1101D5A8: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_1102283F); /* 0x1101D5AC: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D5B1: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D5B5: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101D5B8: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D5C4; /* 0x1101D5BF: jae 0x1101d5c4 */
L_1101D5C1:
    eax = ebp + (-0x28); /* 0x1101D5C1: lea eax, [ebp - 0x28] */
L_1101D5C4:
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D5C4: mov ecx, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x68)); /* 0x1101D5C7: mov edx, dword ptr [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1101D5CA: push eax */
    eax = esi + ecx; /* 0x1101D5CB: lea eax, [esi + ecx] */
    edx = MEM32(edx); /* 0x1101D5CE: mov edx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1101D5D0: push eax */
    PUSH32(esp, ecx); /* 0x1101D5D1: push ecx */
    ecx = MEM32(ebp + (-0x68)); /* 0x1101D5D2: mov ecx, dword ptr [ebp - 0x68] */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1101D5D5: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x1101D5D8: lea eax, [ebp - 0x60] */
    ecx = ebx; /* 0x1101D5DB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D5DD: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D5DE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101D5E3: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101D5E4: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015C0B); /* 0x1101D5E8: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101D5ED: pop ecx */
    ecx = ebp + (-0x60); /* 0x1101D5EE: lea ecx, [ebp - 0x60] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1101D5F1: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101D5F4: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100E431); /* 0x1101D5F8: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D5FD: mov ecx, dword ptr [ebp - 0x44] */
    eax = ebp + (-0x40); /* 0x1101D600: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1101D603: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1101D604: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D609: mov ecx, dword ptr [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101D60C: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ecx); /* 0x1101D610: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101D612: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x48)); /* 0x1101D615: mov edx, dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D618: push dword ptr [ebp - 0x54] */
    eax = (uint32_t)LO16(eax); /* 0x1101D61B: movzx eax, ax */
    MEM32(ebp + (-0x58)) = eax; /* 0x1101D61E: mov dword ptr [ebp - 0x58], eax */
    /* cmp MEM32(ebp + (-0x50)), esi */ /* 0x1101D621: cmp dword ptr [ebp - 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D633; /* 0x1101D624: jne 0x1101d633 */
L_1101D626:
    eax = MEM32(ebp + 0x24); /* 0x1101D626: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x1101D629: push eax */
    PUSH32(esp, edx); /* 0x1101D62A: push edx */
    ecx = edx + eax; /* 0x1101D62B: lea ecx, [edx + eax] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D62E: mov dword ptr [ebp - 0x50], ecx */
    goto L_1101D67E; /* 0x1101D631: jmp 0x1101d67e */
L_1101D633:
    esi = MEM32(ebp + (-0x50)); /* 0x1101D633: mov esi, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + 0x24); /* 0x1101D636: mov ecx, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1101D639: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101D63C: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D63E: mov dword ptr [ebp - 0x50], ecx */
    ecx = ebp + (-0x28); /* 0x1101D641: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1101D644: push edx */
    RECOMP_CALL(sub_1102985D); /* 0x1101D645: call 0x1102985d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D64A: push dword ptr [ebp - 0x54] */
    eax = esi + 0x1; /* 0x1101D64D: lea eax, [esi + 1] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1101D650: push dword ptr [ebp + 0x28] */
    ecx = ebp + (-0x28); /* 0x1101D653: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1101D656: push eax */
    RECOMP_CALL(sub_1102985D); /* 0x1101D657: call 0x1102985d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D65C: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x1101D65F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101D661: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D664: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x1101D668: movzx ecx, ax */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D66B: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D673; /* 0x1101D66E: jae 0x1101d673 */
L_1101D670:
    eax = ebp + (-0x28); /* 0x1101D670: lea eax, [ebp - 0x28] */
L_1101D673:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D673: push dword ptr [ebp - 0x54] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(ecx)); /* 0x1101D676: mov word ptr [eax + esi*2], cx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1101D67A: push dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1101D67D: push esi */
L_1101D67E:
    ecx = ebp + (-0x28); /* 0x1101D67E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102985D); /* 0x1101D681: call 0x1102985d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x1101D686: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x40)); /* 0x1101D68A: mov esi, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D692; /* 0x1101D68D: jae 0x1101d692 */
L_1101D68F:
    esi = ebp + (-0x40); /* 0x1101D68F: lea esi, [ebp - 0x40] */
L_1101D692:
    SET_LO8(eax, MEM8(esi)); /* 0x1101D692: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101D694: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D6CD; /* 0x1101D696: je 0x1101d6cd */
L_1101D698:
    ebx = MEM32(ebp + (-0x50)); /* 0x1101D698: mov ebx, dword ptr [ebp - 0x50] */
L_1101D69B:
    /* test LO8(eax), LO8(eax) */ /* 0x1101D69B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101D6CA; /* 0x1101D69D: jle 0x1101d6ca */
L_1101D69F:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x1101D69F: movsx ecx, al */
    eax = ebx; /* 0x1101D6A2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101D6A4: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1101D6A6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D6CA; /* 0x1101D6A8: jae 0x1101d6ca */
L_1101D6AA:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101D6AA: push dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1101D6AD: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x1101D6AF: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1101D6B2: push 1 */
    PUSH32(esp, ebx); /* 0x1101D6B4: push ebx */
    RECOMP_CALL(sub_1102985D); /* 0x1101D6B5: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = esi + 0x1; /* 0x1101D6BA: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x1101D6BD: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101D6C4; /* 0x1101D6C0: jle 0x1101d6c4 */
L_1101D6C2:
    esi = eax; /* 0x1101D6C2: mov esi, eax */
L_1101D6C4:
    SET_LO8(eax, MEM8(esi)); /* 0x1101D6C4: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101D6C6: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D69B; /* 0x1101D6C8: jne 0x1101d69b */
L_1101D6CA:
    ebx = MEM32(ebp + (-0x6C)); /* 0x1101D6CA: mov ebx, dword ptr [ebp - 0x6c] */
L_1101D6CD:
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x1101D6CD: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x1101D6D1: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x60)) = eax; /* 0x1101D6D4: mov dword ptr [ebp - 0x60], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1101D6EC; /* 0x1101D6D7: jl 0x1101d6ec */
L_1101D6D9:
    if (CMP_G(_flag_a, _flag_b)) goto L_1101D6E1; /* 0x1101D6D9: jg 0x1101d6e1 */
L_1101D6DB:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x1101D6DB: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101D6EC; /* 0x1101D6DF: jbe 0x1101d6ec */
L_1101D6E1:
    esi = MEM32(ebx + 0x20); /* 0x1101D6E1: mov esi, dword ptr [ebx + 0x20] */
    /* cmp esi, eax */ /* 0x1101D6E4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101D6EC; /* 0x1101D6E6: jbe 0x1101d6ec */
L_1101D6E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1101D6E8: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_1101D6EE; /* 0x1101D6EA: jmp 0x1101d6ee */
L_1101D6EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D6EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101D6EE:
    eax = MEM32(ebx + 0x14); /* 0x1101D6EE: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x1101D6F1: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x1101D6F6: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D78C; /* 0x1101D6F9: je 0x1101d78c */
L_1101D6FF:
    /* cmp eax, 0x100u */ /* 0x1101D6FF: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D744; /* 0x1101D704: je 0x1101d744 */
L_1101D706:
    ebx = MEM32(ebp + 0x8); /* 0x1101D706: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x5C); /* 0x1101D709: lea eax, [ebp - 0x5c] */
    PUSH32(esp, esi); /* 0x1101D70C: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D70D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D710: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D713: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101D716: push eax */
    PUSH32(esp, ebx); /* 0x1101D717: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x1101D718: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101D71D: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101D71F: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D722: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D724: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1101D728: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101D72A: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101D72D: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101D730: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D733: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D73B; /* 0x1101D736: jae 0x1101d73b */
L_1101D738:
    eax = ebp + (-0x28); /* 0x1101D738: lea eax, [ebp - 0x28] */
L_1101D73B:
    PUSH32(esp, edi); /* 0x1101D73B: push edi */
    PUSH32(esp, eax); /* 0x1101D73C: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101D73D: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101D740: push dword ptr [ecx] */
    goto L_1101D7A3; /* 0x1101D742: jmp 0x1101d7a3 */
L_1101D744:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D744: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D748: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D750; /* 0x1101D74B: jae 0x1101d750 */
L_1101D74D:
    eax = ebp + (-0x28); /* 0x1101D74D: lea eax, [ebp - 0x28] */
L_1101D750:
    ebx = MEM32(ebp + 0x8); /* 0x1101D750: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101D753: push edi */
    PUSH32(esp, eax); /* 0x1101D754: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D755: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x5C); /* 0x1101D758: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D75B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101D75E: push eax */
    PUSH32(esp, ebx); /* 0x1101D75F: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101D760: call 0x11022596 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101D765: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1101D767: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D768: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1101D76B: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101D76D: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101D770: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101D773: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x5C); /* 0x1101D776: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101D779: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101D77C: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1101D77E: push eax */
    PUSH32(esp, ebx); /* 0x1101D77F: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x1101D780: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101D785: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101D788: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101D7B0; /* 0x1101D78A: jmp 0x1101d7b0 */
L_1101D78C:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D78C: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D790: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D798; /* 0x1101D793: jae 0x1101d798 */
L_1101D795:
    eax = ebp + (-0x28); /* 0x1101D795: lea eax, [ebp - 0x28] */
L_1101D798:
    ebx = MEM32(ebp + 0x8); /* 0x1101D798: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101D79B: push edi */
    PUSH32(esp, eax); /* 0x1101D79C: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101D79D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101D7A0: push dword ptr [ebp + 0x10] */
L_1101D7A3:
    eax = ebp + (-0x5C); /* 0x1101D7A3: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1101D7A6: push eax */
    PUSH32(esp, ebx); /* 0x1101D7A7: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101D7A8: call 0x11022596 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101D7AD: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1101D7B0:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D7B0: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x1101D7B4: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101D7B6: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x1101D7B9: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D7BC: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x1101D7BF: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D7C7; /* 0x1101D7C2: jae 0x1101d7c7 */
L_1101D7C4:
    eax = ebp + (-0x28); /* 0x1101D7C4: lea eax, [ebp - 0x28] */
L_1101D7C7:
    MEM32(ebp + (-0x48)) = eax; /* 0x1101D7C7: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x1101D7CA: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101D7CD: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1101D7CF: push eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1101D7D0: mov eax, dword ptr [ebp - 0x48] */
    eax = eax + edi * 2; /* 0x1101D7D3: lea eax, [eax + edi*2] */
    PUSH32(esp, eax); /* 0x1101D7D6: push eax */
    PUSH32(esp, edx); /* 0x1101D7D7: push edx */
    PUSH32(esp, ecx); /* 0x1101D7D8: push ecx */
    eax = ebp + (-0x64); /* 0x1101D7D9: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1101D7DC: push eax */
    PUSH32(esp, ebx); /* 0x1101D7DD: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101D7DE: call 0x11022596 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x6C)); /* 0x1101D7E3: mov edx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D7E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1101D7E8: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101D7E9: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1101D7EC: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x70)); /* 0x1101D7EE: mov esi, dword ptr [ebp - 0x70] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101D7F1: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x1101D7F4: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x1101D7F7: push eax */
    PUSH32(esp, ecx); /* 0x1101D7F8: push ecx */
    PUSH32(esp, esi); /* 0x1101D7F9: push esi */
    PUSH32(esp, ebx); /* 0x1101D7FA: push ebx */
    MEM32(ebp + 0x14) = eax; /* 0x1101D7FB: mov dword ptr [ebp + 0x14], eax */
    MEM32(edx + 0x20) = edi; /* 0x1101D7FE: mov dword ptr [edx + 0x20], edi */
    MEM32(edx + 0x24) = edi; /* 0x1101D801: mov dword ptr [edx + 0x24], edi */
    RECOMP_CALL(sub_110225F3); /* 0x1101D804: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101D809: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x1101D80C: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1101D80F: push edi */
    PUSH32(esp, 1); /* 0x1101D810: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101D812: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1101D817: push edi */
    PUSH32(esp, 1); /* 0x1101D818: push 1 */
    ecx = ebp + (-0x28); /* 0x1101D81A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x1101D81D: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101D822: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1101D824: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101D829: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101D82A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101D82Au);

L_1101D82A:
    PUSH32(esp, 0x64u); /* 0x1101D82A: push 0x64 */
    eax = 0x1103E1C5u; /* 0x1101D82C: mov eax, 0x1103e1c5 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101D831: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x30); /* 0x1101D836: mov edx, dword ptr [ebp + 0x30] */
    eax = MEM32(ebp + 0xC); /* 0x1101D839: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x1101D83C: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x20); /* 0x1101D83F: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x70)) = eax; /* 0x1101D842: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x1101D845: mov dword ptr [ebp - 0x6c], ebx */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1101D848: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x60)) = edx; /* 0x1101D84B: mov dword ptr [ebp - 0x60], edx */
    /* test edx, edx */ /* 0x1101D84E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101D861; /* 0x1101D850: je 0x1101d861 */
L_1101D852:
    SET_LO8(eax, MEM8(ecx)); /* 0x1101D852: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x1101D854: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D85C; /* 0x1101D856: je 0x1101d85c */
L_1101D858:
    /* cmp LO8(eax), 0x2Du */ /* 0x1101D858: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D861; /* 0x1101D85A: jne 0x1101d861 */
L_1101D85C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D85C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1101D85E: inc edi */
    _flag_k = FK_INC;
    goto L_1101D863; /* 0x1101D85F: jmp 0x1101d863 */
L_1101D861:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101D861: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101D863:
    eax = MEM32(ebx + 0x14); /* 0x1101D863: mov eax, dword ptr [ebx + 0x14] */
    esi = 0x3000u; /* 0x1101D866: mov esi, 0x3000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1101D86B: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1101D86D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D878; /* 0x1101D86F: je 0x1101d878 */
L_1101D871:
    esi = 0x110022E4u; /* 0x1101D871: mov esi, 0x110022e4 */
    goto L_1101D89A; /* 0x1101D876: jmp 0x1101d89a */
L_1101D878:
    eax = edi + 0x2; /* 0x1101D878: lea eax, [edi + 2] */
    esi = 0x110022E8u; /* 0x1101D87B: mov esi, 0x110022e8 */
    /* cmp eax, edx */ /* 0x1101D880: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1101D89A; /* 0x1101D882: ja 0x1101d89a */
L_1101D884:
    /* cmp MEM8(ecx + edi), 0x30u */ /* 0x1101D884: cmp byte ptr [ecx + edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(ecx + edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D89A; /* 0x1101D888: jne 0x1101d89a */
L_1101D88A:
    SET_LO8(edx, MEM8(ecx + edi + 0x1)); /* 0x1101D88A: mov dl, byte ptr [ecx + edi + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x1101D88E: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101D898; /* 0x1101D891: je 0x1101d898 */
L_1101D893:
    /* cmp LO8(edx), 0x58u */ /* 0x1101D893: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D89A; /* 0x1101D896: jne 0x1101d89a */
L_1101D898:
    edi = eax; /* 0x1101D898: mov edi, eax */
L_1101D89A:
    PUSH32(esp, esi); /* 0x1101D89A: push esi */
    esi = MEM32(0x1106910C); /* 0x1101D89B: mov esi, dword ptr [0x1106910c] */
    PUSH32(esp, ecx); /* 0x1101D8A1: push ecx */
    RECOMP_ICALL(esi); /* 0x1101D8A2: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1101D8A4: mov dword ptr [ebp - 0x48], eax */
    PUSH32(esp, 0x2Eu); /* 0x1101D8A7: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1101D8A9: pop eax */
    MEM16(ebp + (-0x4C)) = (uint16_t)(LO16(eax)); /* 0x1101D8AA: mov word ptr [ebp - 0x4c], ax */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1101D8AE: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1101D8B4: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1101D8B6: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(eax)); /* 0x1101D8B8: mov byte ptr [ebp - 0x4c], al */
    eax = ebp + (-0x4C); /* 0x1101D8BB: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1101D8BE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1101D8BF: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x1101D8C2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1101D8C4: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = eax; /* 0x1101D8C7: mov dword ptr [ebp - 0x50], eax */
    eax = ebp + (-0x58); /* 0x1101D8CA: lea eax, [ebp - 0x58] */
    ecx = ebx; /* 0x1101D8CD: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D8CF: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D8D0: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101D8D5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D8D9: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x1101D8DA: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101D8DF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1101D8E3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101D8E5: pop ecx */
    ecx = ebp + (-0x58); /* 0x1101D8E6: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x68)) = esi; /* 0x1101D8E9: mov dword ptr [ebp - 0x68], esi */
    RECOMP_CALL(sub_1100E431); /* 0x1101D8EC: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101D8F1: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1101D8F3: mov ecx, esi */
    PUSH32(esp, 0x30u); /* 0x1101D8F5: push 0x30 */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1101D8F7: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x60)); /* 0x1101D8FA: mov esi, dword ptr [ebp - 0x60] */
    ecx = ebp + (-0x28); /* 0x1101D8FD: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1101D900: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x1101D904: movzx eax, ax */
    MEM32(ebp + (-0x54)) = eax; /* 0x1101D907: mov dword ptr [ebp - 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101D90A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101D90C: push eax */
    PUSH32(esp, esi); /* 0x1101D90D: push esi */
    MEM32(ebp + (-0x14)) = 7; /* 0x1101D90E: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x1101D915: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_1102283F); /* 0x1101D919: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D91E: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101D922: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101D925: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D931; /* 0x1101D92C: jae 0x1101d931 */
L_1101D92E:
    eax = ebp + (-0x28); /* 0x1101D92E: lea eax, [ebp - 0x28] */
L_1101D931:
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D931: mov ecx, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x68)); /* 0x1101D934: mov edx, dword ptr [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1101D937: push eax */
    eax = esi + ecx; /* 0x1101D938: lea eax, [esi + ecx] */
    edx = MEM32(edx); /* 0x1101D93B: mov edx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1101D93D: push eax */
    PUSH32(esp, ecx); /* 0x1101D93E: push ecx */
    ecx = MEM32(ebp + (-0x68)); /* 0x1101D93F: mov ecx, dword ptr [ebp - 0x68] */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1101D942: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x1101D945: lea eax, [ebp - 0x60] */
    ecx = ebx; /* 0x1101D948: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1101D94A: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101D94B: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101D950: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101D951: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015CA5); /* 0x1101D955: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101D95A: pop ecx */
    ecx = ebp + (-0x60); /* 0x1101D95B: lea ecx, [ebp - 0x60] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1101D95E: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101D961: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100E431); /* 0x1101D965: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D96A: mov ecx, dword ptr [ebp - 0x44] */
    eax = ebp + (-0x40); /* 0x1101D96D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1101D970: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1101D971: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D976: mov ecx, dword ptr [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101D979: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ecx); /* 0x1101D97D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101D97F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x48)); /* 0x1101D982: mov edx, dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D985: push dword ptr [ebp - 0x54] */
    eax = (uint32_t)LO16(eax); /* 0x1101D988: movzx eax, ax */
    MEM32(ebp + (-0x58)) = eax; /* 0x1101D98B: mov dword ptr [ebp - 0x58], eax */
    /* cmp MEM32(ebp + (-0x50)), esi */ /* 0x1101D98E: cmp dword ptr [ebp - 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101D9A0; /* 0x1101D991: jne 0x1101d9a0 */
L_1101D993:
    eax = MEM32(ebp + 0x24); /* 0x1101D993: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x1101D996: push eax */
    PUSH32(esp, edx); /* 0x1101D997: push edx */
    ecx = edx + eax; /* 0x1101D998: lea ecx, [edx + eax] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D99B: mov dword ptr [ebp - 0x50], ecx */
    goto L_1101D9EB; /* 0x1101D99E: jmp 0x1101d9eb */
L_1101D9A0:
    esi = MEM32(ebp + (-0x50)); /* 0x1101D9A0: mov esi, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + 0x24); /* 0x1101D9A3: mov ecx, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1101D9A6: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101D9A9: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1101D9AB: mov dword ptr [ebp - 0x50], ecx */
    ecx = ebp + (-0x28); /* 0x1101D9AE: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1101D9B1: push edx */
    RECOMP_CALL(sub_1102985D); /* 0x1101D9B2: call 0x1102985d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D9B7: push dword ptr [ebp - 0x54] */
    eax = esi + 0x1; /* 0x1101D9BA: lea eax, [esi + 1] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1101D9BD: push dword ptr [ebp + 0x28] */
    ecx = ebp + (-0x28); /* 0x1101D9C0: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1101D9C3: push eax */
    RECOMP_CALL(sub_1102985D); /* 0x1101D9C4: call 0x1102985d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1101D9C9: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x1101D9CC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101D9CE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101D9D1: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x1101D9D5: movzx ecx, ax */
    eax = MEM32(ebp + (-0x28)); /* 0x1101D9D8: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D9E0; /* 0x1101D9DB: jae 0x1101d9e0 */
L_1101D9DD:
    eax = ebp + (-0x28); /* 0x1101D9DD: lea eax, [ebp - 0x28] */
L_1101D9E0:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1101D9E0: push dword ptr [ebp - 0x54] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(ecx)); /* 0x1101D9E3: mov word ptr [eax + esi*2], cx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1101D9E7: push dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1101D9EA: push esi */
L_1101D9EB:
    ecx = ebp + (-0x28); /* 0x1101D9EB: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102985D); /* 0x1101D9EE: call 0x1102985d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x1101D9F3: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x40)); /* 0x1101D9F7: mov esi, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101D9FF; /* 0x1101D9FA: jae 0x1101d9ff */
L_1101D9FC:
    esi = ebp + (-0x40); /* 0x1101D9FC: lea esi, [ebp - 0x40] */
L_1101D9FF:
    SET_LO8(eax, MEM8(esi)); /* 0x1101D9FF: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101DA01: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101DA3A; /* 0x1101DA03: je 0x1101da3a */
L_1101DA05:
    ebx = MEM32(ebp + (-0x50)); /* 0x1101DA05: mov ebx, dword ptr [ebp - 0x50] */
L_1101DA08:
    /* test LO8(eax), LO8(eax) */ /* 0x1101DA08: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101DA37; /* 0x1101DA0A: jle 0x1101da37 */
L_1101DA0C:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x1101DA0C: movsx ecx, al */
    eax = ebx; /* 0x1101DA0F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101DA11: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1101DA13: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101DA37; /* 0x1101DA15: jae 0x1101da37 */
L_1101DA17:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101DA17: push dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1101DA1A: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x1101DA1C: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1101DA1F: push 1 */
    PUSH32(esp, ebx); /* 0x1101DA21: push ebx */
    RECOMP_CALL(sub_1102985D); /* 0x1101DA22: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = esi + 0x1; /* 0x1101DA27: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x1101DA2A: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101DA31; /* 0x1101DA2D: jle 0x1101da31 */
L_1101DA2F:
    esi = eax; /* 0x1101DA2F: mov esi, eax */
L_1101DA31:
    SET_LO8(eax, MEM8(esi)); /* 0x1101DA31: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101DA33: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DA08; /* 0x1101DA35: jne 0x1101da08 */
L_1101DA37:
    ebx = MEM32(ebp + (-0x6C)); /* 0x1101DA37: mov ebx, dword ptr [ebp - 0x6c] */
L_1101DA3A:
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x1101DA3A: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x1101DA3E: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x60)) = eax; /* 0x1101DA41: mov dword ptr [ebp - 0x60], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1101DA59; /* 0x1101DA44: jl 0x1101da59 */
L_1101DA46:
    if (CMP_G(_flag_a, _flag_b)) goto L_1101DA4E; /* 0x1101DA46: jg 0x1101da4e */
L_1101DA48:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x1101DA48: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101DA59; /* 0x1101DA4C: jbe 0x1101da59 */
L_1101DA4E:
    esi = MEM32(ebx + 0x20); /* 0x1101DA4E: mov esi, dword ptr [ebx + 0x20] */
    /* cmp esi, eax */ /* 0x1101DA51: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101DA59; /* 0x1101DA53: jbe 0x1101da59 */
L_1101DA55:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1101DA55: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_1101DA5B; /* 0x1101DA57: jmp 0x1101da5b */
L_1101DA59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DA59: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DA5B:
    eax = MEM32(ebx + 0x14); /* 0x1101DA5B: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x1101DA5E: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x1101DA63: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101DAF9; /* 0x1101DA66: je 0x1101daf9 */
L_1101DA6C:
    /* cmp eax, 0x100u */ /* 0x1101DA6C: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101DAB1; /* 0x1101DA71: je 0x1101dab1 */
L_1101DA73:
    ebx = MEM32(ebp + 0x8); /* 0x1101DA73: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x5C); /* 0x1101DA76: lea eax, [ebp - 0x5c] */
    PUSH32(esp, esi); /* 0x1101DA79: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101DA7A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101DA7D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101DA80: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101DA83: push eax */
    PUSH32(esp, ebx); /* 0x1101DA84: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x1101DA85: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101DA8A: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101DA8C: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DA8F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101DA91: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1101DA95: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101DA97: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101DA9A: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101DA9D: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1101DAA0: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101DAA8; /* 0x1101DAA3: jae 0x1101daa8 */
L_1101DAA5:
    eax = ebp + (-0x28); /* 0x1101DAA5: lea eax, [ebp - 0x28] */
L_1101DAA8:
    PUSH32(esp, edi); /* 0x1101DAA8: push edi */
    PUSH32(esp, eax); /* 0x1101DAA9: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101DAAA: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101DAAD: push dword ptr [ecx] */
    goto L_1101DB10; /* 0x1101DAAF: jmp 0x1101db10 */
L_1101DAB1:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101DAB1: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101DAB5: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101DABD; /* 0x1101DAB8: jae 0x1101dabd */
L_1101DABA:
    eax = ebp + (-0x28); /* 0x1101DABA: lea eax, [ebp - 0x28] */
L_1101DABD:
    ebx = MEM32(ebp + 0x8); /* 0x1101DABD: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101DAC0: push edi */
    PUSH32(esp, eax); /* 0x1101DAC1: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101DAC2: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x5C); /* 0x1101DAC5: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101DAC8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1101DACB: push eax */
    PUSH32(esp, ebx); /* 0x1101DACC: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101DACD: call 0x11022596 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101DAD2: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1101DAD4: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101DAD5: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1101DAD8: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x1101DADA: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x1101DADD: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x1101DAE0: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x5C); /* 0x1101DAE3: lea eax, [ebp - 0x5c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1101DAE6: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1101DAE9: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1101DAEB: push eax */
    PUSH32(esp, ebx); /* 0x1101DAEC: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x1101DAED: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101DAF2: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DAF5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DB1D; /* 0x1101DAF7: jmp 0x1101db1d */
L_1101DAF9:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101DAF9: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101DAFD: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101DB05; /* 0x1101DB00: jae 0x1101db05 */
L_1101DB02:
    eax = ebp + (-0x28); /* 0x1101DB02: lea eax, [ebp - 0x28] */
L_1101DB05:
    ebx = MEM32(ebp + 0x8); /* 0x1101DB05: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101DB08: push edi */
    PUSH32(esp, eax); /* 0x1101DB09: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1101DB0A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1101DB0D: push dword ptr [ebp + 0x10] */
L_1101DB10:
    eax = ebp + (-0x5C); /* 0x1101DB10: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1101DB13: push eax */
    PUSH32(esp, ebx); /* 0x1101DB14: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101DB15: call 0x11022596 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101DB1A: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1101DB1D:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1101DB1D: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x1101DB21: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101DB23: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x1101DB26: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x1101DB29: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x1101DB2C: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101DB34; /* 0x1101DB2F: jae 0x1101db34 */
L_1101DB31:
    eax = ebp + (-0x28); /* 0x1101DB31: lea eax, [ebp - 0x28] */
L_1101DB34:
    MEM32(ebp + (-0x48)) = eax; /* 0x1101DB34: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x1101DB37: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101DB3A: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1101DB3C: push eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1101DB3D: mov eax, dword ptr [ebp - 0x48] */
    eax = eax + edi * 2; /* 0x1101DB40: lea eax, [eax + edi*2] */
    PUSH32(esp, eax); /* 0x1101DB43: push eax */
    PUSH32(esp, edx); /* 0x1101DB44: push edx */
    PUSH32(esp, ecx); /* 0x1101DB45: push ecx */
    eax = ebp + (-0x64); /* 0x1101DB46: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1101DB49: push eax */
    PUSH32(esp, ebx); /* 0x1101DB4A: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x1101DB4B: call 0x11022596 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x6C)); /* 0x1101DB50: mov edx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101DB53: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1101DB55: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1101DB56: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1101DB59: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x70)); /* 0x1101DB5B: mov esi, dword ptr [ebp - 0x70] */
    MEM32(ebp + 0x10) = ecx; /* 0x1101DB5E: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x1101DB61: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x1101DB64: push eax */
    PUSH32(esp, ecx); /* 0x1101DB65: push ecx */
    PUSH32(esp, esi); /* 0x1101DB66: push esi */
    PUSH32(esp, ebx); /* 0x1101DB67: push ebx */
    MEM32(ebp + 0x14) = eax; /* 0x1101DB68: mov dword ptr [ebp + 0x14], eax */
    MEM32(edx + 0x20) = edi; /* 0x1101DB6B: mov dword ptr [edx + 0x20], edi */
    MEM32(edx + 0x24) = edi; /* 0x1101DB6E: mov dword ptr [edx + 0x24], edi */
    RECOMP_CALL(sub_110225F3); /* 0x1101DB71: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1101DB76: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x1101DB79: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1101DB7C: push edi */
    PUSH32(esp, 1); /* 0x1101DB7D: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101DB7F: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1101DB84: push edi */
    PUSH32(esp, 1); /* 0x1101DB85: push 1 */
    ecx = ebp + (-0x28); /* 0x1101DB87: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x1101DB8A: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101DB8F: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1101DB91: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DB96: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DB97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DB97u);

L_1101DB97:
    PUSH32(esp, 0x38u); /* 0x1101DB97: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DB99: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DB9E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DBA3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DBA6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DBA8: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DBAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DBF6; /* 0x1101DBAD: je 0x1101dbf6 */
L_1101DBAF:
    /* cmp MEM32(edi), ebx */ /* 0x1101DBAF: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DBF6; /* 0x1101DBB1: jne 0x1101dbf6 */
L_1101DBB3:
    PUSH32(esp, 8); /* 0x1101DBB3: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DBB5: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DBBA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DBBC: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DBBD: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DBC0: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DBC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DBE5; /* 0x1101DBC5: je 0x1101dbe5 */
L_1101DBC7:
    ecx = MEM32(ebp + 0xC); /* 0x1101DBC7: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DBCA: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DBCF: push eax */
    ecx = ebp + (-0x44); /* 0x1101DBD0: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DBD3: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DBD8: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11001FA4u; /* 0x1101DBD9: mov dword ptr [esi], 0x11001fa4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DBDF: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DBE7; /* 0x1101DBE3: jmp 0x1101dbe7 */
L_1101DBE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DBE5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DBE7:
    MEM32(edi) = esi; /* 0x1101DBE7: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DBE9: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DBF6; /* 0x1101DBEC: je 0x1101dbf6 */
L_1101DBEE:
    ecx = ebp + (-0x44); /* 0x1101DBEE: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DBF1: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DBF6:
    PUSH32(esp, 4); /* 0x1101DBF6: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DBF8: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DBF9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DBFE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DBFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DBFFu);

L_1101DBFF:
    PUSH32(esp, 0x38u); /* 0x1101DBFF: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DC01: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DC06: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DC0B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DC0E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DC10: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DC13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DC5E; /* 0x1101DC15: je 0x1101dc5e */
L_1101DC17:
    /* cmp MEM32(edi), ebx */ /* 0x1101DC17: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DC5E; /* 0x1101DC19: jne 0x1101dc5e */
L_1101DC1B:
    PUSH32(esp, 8); /* 0x1101DC1B: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DC1D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DC22: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DC24: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DC25: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DC28: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DC2B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DC4D; /* 0x1101DC2D: je 0x1101dc4d */
L_1101DC2F:
    ecx = MEM32(ebp + 0xC); /* 0x1101DC2F: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DC32: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DC37: push eax */
    ecx = ebp + (-0x44); /* 0x1101DC38: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DC3B: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DC40: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110020C4u; /* 0x1101DC41: mov dword ptr [esi], 0x110020c4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DC47: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DC4F; /* 0x1101DC4B: jmp 0x1101dc4f */
L_1101DC4D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DC4D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DC4F:
    MEM32(edi) = esi; /* 0x1101DC4F: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DC51: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DC5E; /* 0x1101DC54: je 0x1101dc5e */
L_1101DC56:
    ecx = ebp + (-0x44); /* 0x1101DC56: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DC59: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DC5E:
    PUSH32(esp, 4); /* 0x1101DC5E: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DC60: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DC61: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DC66: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DC67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DC67u);

L_1101DC67:
    PUSH32(esp, 0x38u); /* 0x1101DC67: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DC69: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DC6E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DC73: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DC76: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DC78: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DC7B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DCC6; /* 0x1101DC7D: je 0x1101dcc6 */
L_1101DC7F:
    /* cmp MEM32(edi), ebx */ /* 0x1101DC7F: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DCC6; /* 0x1101DC81: jne 0x1101dcc6 */
L_1101DC83:
    PUSH32(esp, 8); /* 0x1101DC83: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DC85: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DC8A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DC8C: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DC8D: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DC90: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DC93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DCB5; /* 0x1101DC95: je 0x1101dcb5 */
L_1101DC97:
    ecx = MEM32(ebp + 0xC); /* 0x1101DC97: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DC9A: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DC9F: push eax */
    ecx = ebp + (-0x44); /* 0x1101DCA0: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DCA3: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DCA8: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11002034u; /* 0x1101DCA9: mov dword ptr [esi], 0x11002034 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DCAF: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DCB7; /* 0x1101DCB3: jmp 0x1101dcb7 */
L_1101DCB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DCB5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DCB7:
    MEM32(edi) = esi; /* 0x1101DCB7: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DCB9: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DCC6; /* 0x1101DCBC: je 0x1101dcc6 */
L_1101DCBE:
    ecx = ebp + (-0x44); /* 0x1101DCBE: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DCC1: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DCC6:
    PUSH32(esp, 4); /* 0x1101DCC6: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DCC8: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DCC9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DCCE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DCCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DCCFu);

L_1101DCCF:
    PUSH32(esp, 0x38u); /* 0x1101DCCF: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DCD1: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DCD6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DCDB: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DCDE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DCE0: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DCE3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD2E; /* 0x1101DCE5: je 0x1101dd2e */
L_1101DCE7:
    /* cmp MEM32(edi), ebx */ /* 0x1101DCE7: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DD2E; /* 0x1101DCE9: jne 0x1101dd2e */
L_1101DCEB:
    PUSH32(esp, 8); /* 0x1101DCEB: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DCED: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DCF2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DCF4: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DCF5: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DCF8: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DCFB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD1D; /* 0x1101DCFD: je 0x1101dd1d */
L_1101DCFF:
    ecx = MEM32(ebp + 0xC); /* 0x1101DCFF: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DD02: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DD07: push eax */
    ecx = ebp + (-0x44); /* 0x1101DD08: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DD0B: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DD10: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11001FE0u; /* 0x1101DD11: mov dword ptr [esi], 0x11001fe0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DD17: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DD1F; /* 0x1101DD1B: jmp 0x1101dd1f */
L_1101DD1D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DD1D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DD1F:
    MEM32(edi) = esi; /* 0x1101DD1F: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DD21: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD2E; /* 0x1101DD24: je 0x1101dd2e */
L_1101DD26:
    ecx = ebp + (-0x44); /* 0x1101DD26: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DD29: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DD2E:
    PUSH32(esp, 4); /* 0x1101DD2E: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DD30: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DD31: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DD36: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DD37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DD37u);

L_1101DD37:
    PUSH32(esp, 0x38u); /* 0x1101DD37: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DD39: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DD3E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DD43: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DD46: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DD48: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DD4B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD96; /* 0x1101DD4D: je 0x1101dd96 */
L_1101DD4F:
    /* cmp MEM32(edi), ebx */ /* 0x1101DD4F: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DD96; /* 0x1101DD51: jne 0x1101dd96 */
L_1101DD53:
    PUSH32(esp, 8); /* 0x1101DD53: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DD55: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DD5A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DD5C: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DD5D: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DD60: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DD63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD85; /* 0x1101DD65: je 0x1101dd85 */
L_1101DD67:
    ecx = MEM32(ebp + 0xC); /* 0x1101DD67: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DD6A: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DD6F: push eax */
    ecx = ebp + (-0x44); /* 0x1101DD70: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DD73: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DD78: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11002100u; /* 0x1101DD79: mov dword ptr [esi], 0x11002100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DD7F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DD87; /* 0x1101DD83: jmp 0x1101dd87 */
L_1101DD85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DD85: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DD87:
    MEM32(edi) = esi; /* 0x1101DD87: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DD89: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DD96; /* 0x1101DD8C: je 0x1101dd96 */
L_1101DD8E:
    ecx = ebp + (-0x44); /* 0x1101DD8E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DD91: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DD96:
    PUSH32(esp, 4); /* 0x1101DD96: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DD98: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DD99: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DD9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DD9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DD9Fu);

L_1101DD9F:
    PUSH32(esp, 0x38u); /* 0x1101DD9F: push 0x38 */
    eax = 0x1103F019u; /* 0x1101DDA1: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DDA6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101DDAB: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DDAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DDB0: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101DDB3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DDFE; /* 0x1101DDB5: je 0x1101ddfe */
L_1101DDB7:
    /* cmp MEM32(edi), ebx */ /* 0x1101DDB7: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DDFE; /* 0x1101DDB9: jne 0x1101ddfe */
L_1101DDBB:
    PUSH32(esp, 8); /* 0x1101DDBB: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DDBD: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DDC2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DDC4: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DDC5: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DDC8: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DDCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DDED; /* 0x1101DDCD: je 0x1101dded */
L_1101DDCF:
    ecx = MEM32(ebp + 0xC); /* 0x1101DDCF: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DDD2: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DDD7: push eax */
    ecx = ebp + (-0x44); /* 0x1101DDD8: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DDDB: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DDE0: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11002070u; /* 0x1101DDE1: mov dword ptr [esi], 0x11002070 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DDE7: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101DDEF; /* 0x1101DDEB: jmp 0x1101ddef */
L_1101DDED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DDED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DDEF:
    MEM32(edi) = esi; /* 0x1101DDEF: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DDF1: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DDFE; /* 0x1101DDF4: je 0x1101ddfe */
L_1101DDF6:
    ecx = ebp + (-0x44); /* 0x1101DDF6: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DDF9: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DDFE:
    PUSH32(esp, 4); /* 0x1101DDFE: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DE00: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DE01: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DE06: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DE07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DE07u);

L_1101DE07:
    PUSH32(esp, 0x38u); /* 0x1101DE07: push 0x38 */
    eax = 0x1103E215u; /* 0x1101DE09: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DE0E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DE13: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DE15: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101DE18: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101DE1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DE79; /* 0x1101DE1D: je 0x1101de79 */
L_1101DE1F:
    /* cmp MEM32(edi), ebx */ /* 0x1101DE1F: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DE79; /* 0x1101DE21: jne 0x1101de79 */
L_1101DE23:
    PUSH32(esp, 0x18u); /* 0x1101DE23: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DE25: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DE2A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DE2C: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DE2D: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DE30: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DE33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DE68; /* 0x1101DE35: je 0x1101de68 */
L_1101DE37:
    ecx = MEM32(ebp + 0xC); /* 0x1101DE37: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DE3A: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DE3F: push eax */
    ecx = ebp + (-0x44); /* 0x1101DE40: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DE43: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DE48: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DE4C: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DE4D: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x1101DE50: push ebx */
    PUSH32(esp, eax); /* 0x1101DE51: push eax */
    ecx = esi; /* 0x1101DE52: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x1101DE54: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x11001F80u; /* 0x1101DE5B: mov dword ptr [esi], 0x11001f80 */
    RECOMP_CALL(sub_110218A3); /* 0x1101DE61: call 0x110218a3 */
    RECOMP_FLAGS_IN();
    goto L_1101DE6A; /* 0x1101DE66: jmp 0x1101de6a */
L_1101DE68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DE68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DE6A:
    MEM32(edi) = esi; /* 0x1101DE6A: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DE6C: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DE79; /* 0x1101DE6F: je 0x1101de79 */
L_1101DE71:
    ecx = ebp + (-0x44); /* 0x1101DE71: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DE74: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DE79:
    PUSH32(esp, 4); /* 0x1101DE79: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DE7B: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DE7C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DE81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DE82u);

L_1101DE82:
    PUSH32(esp, 0x38u); /* 0x1101DE82: push 0x38 */
    eax = 0x1103E215u; /* 0x1101DE84: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DE89: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DE8E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DE90: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101DE93: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101DE96: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DEF4; /* 0x1101DE98: je 0x1101def4 */
L_1101DE9A:
    /* cmp MEM32(edi), ebx */ /* 0x1101DE9A: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DEF4; /* 0x1101DE9C: jne 0x1101def4 */
L_1101DE9E:
    PUSH32(esp, 0x18u); /* 0x1101DE9E: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DEA0: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DEA5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DEA7: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DEA8: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DEAB: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DEAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DEE3; /* 0x1101DEB0: je 0x1101dee3 */
L_1101DEB2:
    ecx = MEM32(ebp + 0xC); /* 0x1101DEB2: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DEB5: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DEBA: push eax */
    ecx = ebp + (-0x44); /* 0x1101DEBB: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DEBE: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DEC3: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DEC7: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DEC8: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x1101DECB: push ebx */
    PUSH32(esp, eax); /* 0x1101DECC: push eax */
    ecx = esi; /* 0x1101DECD: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x1101DECF: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110020A0u; /* 0x1101DED6: mov dword ptr [esi], 0x110020a0 */
    RECOMP_CALL(sub_11021966); /* 0x1101DEDC: call 0x11021966 */
    RECOMP_FLAGS_IN();
    goto L_1101DEE5; /* 0x1101DEE1: jmp 0x1101dee5 */
L_1101DEE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DEE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DEE5:
    MEM32(edi) = esi; /* 0x1101DEE5: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DEE7: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DEF4; /* 0x1101DEEA: je 0x1101def4 */
L_1101DEEC:
    ecx = ebp + (-0x44); /* 0x1101DEEC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DEEF: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DEF4:
    PUSH32(esp, 4); /* 0x1101DEF4: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DEF6: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DEF7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DEFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DEFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DEFDu);

L_1101DEFD:
    PUSH32(esp, 0x38u); /* 0x1101DEFD: push 0x38 */
    eax = 0x1103E215u; /* 0x1101DEFF: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DF04: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101DF09: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DF0B: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101DF0E: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101DF11: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DF6F; /* 0x1101DF13: je 0x1101df6f */
L_1101DF15:
    /* cmp MEM32(edi), ebx */ /* 0x1101DF15: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DF6F; /* 0x1101DF17: jne 0x1101df6f */
L_1101DF19:
    PUSH32(esp, 0x18u); /* 0x1101DF19: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DF1B: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DF20: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101DF22: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101DF23: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101DF26: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101DF29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DF5E; /* 0x1101DF2B: je 0x1101df5e */
L_1101DF2D:
    ecx = MEM32(ebp + 0xC); /* 0x1101DF2D: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DF30: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DF35: push eax */
    ecx = ebp + (-0x44); /* 0x1101DF36: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DF39: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101DF3E: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DF42: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DF43: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x1101DF46: push ebx */
    PUSH32(esp, eax); /* 0x1101DF47: push eax */
    ecx = esi; /* 0x1101DF48: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x1101DF4A: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x11002010u; /* 0x1101DF51: mov dword ptr [esi], 0x11002010 */
    RECOMP_CALL(sub_11021A60); /* 0x1101DF57: call 0x11021a60 */
    RECOMP_FLAGS_IN();
    goto L_1101DF60; /* 0x1101DF5C: jmp 0x1101df60 */
L_1101DF5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DF5E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101DF60:
    MEM32(edi) = esi; /* 0x1101DF60: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DF62: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DF6F; /* 0x1101DF65: je 0x1101df6f */
L_1101DF67:
    ecx = ebp + (-0x44); /* 0x1101DF67: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DF6A: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DF6F:
    PUSH32(esp, 4); /* 0x1101DF6F: push 4 */
    eax = POP32_VAL(esp); /* 0x1101DF71: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DF72: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DF77: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DF78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DF78u);

L_1101DF78:
    PUSH32(esp, 0x38u); /* 0x1101DF78: push 0x38 */
    eax = 0x1103E253u; /* 0x1101DF7A: mov eax, 0x1103e253 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DF7F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DF84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1101DF86: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DF88: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101DF8B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101DF8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DFDB; /* 0x1101DF90: je 0x1101dfdb */
L_1101DF92:
    /* cmp MEM32(edi), esi */ /* 0x1101DF92: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101DFDB; /* 0x1101DF94: jne 0x1101dfdb */
L_1101DF96:
    PUSH32(esp, 0x44u); /* 0x1101DF96: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x1101DF98: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101DF9D: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1101DF9E: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1101DFA1: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1101DFA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DFCC; /* 0x1101DFA6: je 0x1101dfcc */
L_1101DFA8:
    ecx = MEM32(ebp + 0xC); /* 0x1101DFA8: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101DFAB: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101DFB0: push eax */
    ecx = ebp + (-0x44); /* 0x1101DFB1: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101DFB4: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101DFB9: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101DFBC: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1101DFBD: push esi */
    PUSH32(esp, eax); /* 0x1101DFBE: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101DFBF: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DFC2: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_11016F6D); /* 0x1101DFC5: call 0x11016f6d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101DFCA: mov esi, eax */
L_1101DFCC:
    MEM32(edi) = esi; /* 0x1101DFCC: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101DFCE: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101DFDB; /* 0x1101DFD1: je 0x1101dfdb */
L_1101DFD3:
    ecx = ebp + (-0x44); /* 0x1101DFD3: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101DFD6: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101DFDB:
    PUSH32(esp, 5); /* 0x1101DFDB: push 5 */
    eax = POP32_VAL(esp); /* 0x1101DFDD: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101DFDE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101DFE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101DFE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101DFE4u);

L_1101DFE4:
    PUSH32(esp, 0x38u); /* 0x1101DFE4: push 0x38 */
    eax = 0x1103E253u; /* 0x1101DFE6: mov eax, 0x1103e253 */
    RECOMP_CALL(sub_1103B372); /* 0x1101DFEB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101DFF0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1101DFF2: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101DFF4: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101DFF7: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101DFFA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E047; /* 0x1101DFFC: je 0x1101e047 */
L_1101DFFE:
    /* cmp MEM32(edi), esi */ /* 0x1101DFFE: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E047; /* 0x1101E000: jne 0x1101e047 */
L_1101E002:
    PUSH32(esp, 0x44u); /* 0x1101E002: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x1101E004: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E009: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1101E00A: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1101E00D: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1101E010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E038; /* 0x1101E012: je 0x1101e038 */
L_1101E014:
    ecx = MEM32(ebp + 0xC); /* 0x1101E014: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101E017: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E01C: push eax */
    ecx = ebp + (-0x44); /* 0x1101E01D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101E020: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101E025: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E028: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1101E029: push esi */
    PUSH32(esp, eax); /* 0x1101E02A: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101E02B: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E02E: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1101703C); /* 0x1101E031: call 0x1101703c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101E036: mov esi, eax */
L_1101E038:
    MEM32(edi) = esi; /* 0x1101E038: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101E03A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E047; /* 0x1101E03D: je 0x1101e047 */
L_1101E03F:
    ecx = ebp + (-0x44); /* 0x1101E03F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101E042: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101E047:
    PUSH32(esp, 5); /* 0x1101E047: push 5 */
    eax = POP32_VAL(esp); /* 0x1101E049: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101E04A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E04F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101E050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101E050u);

L_1101E050:
    PUSH32(esp, 0x38u); /* 0x1101E050: push 0x38 */
    eax = 0x1103E253u; /* 0x1101E052: mov eax, 0x1103e253 */
    RECOMP_CALL(sub_1103B372); /* 0x1101E057: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101E05C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1101E05E: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E060: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1101E063: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1101E066: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E0B3; /* 0x1101E068: je 0x1101e0b3 */
L_1101E06A:
    /* cmp MEM32(edi), esi */ /* 0x1101E06A: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E0B3; /* 0x1101E06C: jne 0x1101e0b3 */
L_1101E06E:
    PUSH32(esp, 0x44u); /* 0x1101E06E: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x1101E070: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E075: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1101E076: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1101E079: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1101E07C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E0A4; /* 0x1101E07E: je 0x1101e0a4 */
L_1101E080:
    ecx = MEM32(ebp + 0xC); /* 0x1101E080: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101E083: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E088: push eax */
    ecx = ebp + (-0x44); /* 0x1101E089: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101E08C: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101E091: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E094: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1101E095: push esi */
    PUSH32(esp, eax); /* 0x1101E096: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101E097: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E09A: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1101710B); /* 0x1101E09D: call 0x1101710b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101E0A2: mov esi, eax */
L_1101E0A4:
    MEM32(edi) = esi; /* 0x1101E0A4: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101E0A6: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E0B3; /* 0x1101E0A9: je 0x1101e0b3 */
L_1101E0AB:
    ecx = ebp + (-0x44); /* 0x1101E0AB: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101E0AE: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101E0B3:
    PUSH32(esp, 5); /* 0x1101E0B3: push 5 */
    eax = POP32_VAL(esp); /* 0x1101E0B5: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101E0B6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E0BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101E0BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101E0BCu);

L_1101E0BC:
    PUSH32(esp, 0x38u); /* 0x1101E0BC: push 0x38 */
    eax = 0x1103F019u; /* 0x1101E0BE: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101E0C3: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101E0C8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101E0CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E0CD: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101E0D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E127; /* 0x1101E0D2: je 0x1101e127 */
L_1101E0D4:
    /* cmp MEM32(edi), ebx */ /* 0x1101E0D4: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E127; /* 0x1101E0D6: jne 0x1101e127 */
L_1101E0D8:
    PUSH32(esp, 0xCu); /* 0x1101E0D8: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x1101E0DA: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101E0DF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101E0E1: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101E0E2: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101E0E5: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101E0E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E116; /* 0x1101E0EA: je 0x1101e116 */
L_1101E0EC:
    ecx = MEM32(ebp + 0xC); /* 0x1101E0EC: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101E0EF: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E0F4: push eax */
    ecx = ebp + (-0x44); /* 0x1101E0F5: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101E0F8: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101E0FD: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101E101: mov ecx, esi */
    MEM32(esi) = 0x110021F4u; /* 0x1101E103: mov dword ptr [esi], 0x110021f4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E109: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1101E10A: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101E10E: push eax */
    RECOMP_CALL(sub_11021C33); /* 0x1101E10F: call 0x11021c33 */
    RECOMP_FLAGS_IN();
    goto L_1101E118; /* 0x1101E114: jmp 0x1101e118 */
L_1101E116:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101E116: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101E118:
    MEM32(edi) = esi; /* 0x1101E118: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101E11A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E127; /* 0x1101E11D: je 0x1101e127 */
L_1101E11F:
    ecx = ebp + (-0x44); /* 0x1101E11F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101E122: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101E127:
    PUSH32(esp, 5); /* 0x1101E127: push 5 */
    eax = POP32_VAL(esp); /* 0x1101E129: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101E12A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E12F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101E130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101E130u);

L_1101E130:
    PUSH32(esp, 0x38u); /* 0x1101E130: push 0x38 */
    eax = 0x1103F019u; /* 0x1101E132: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101E137: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101E13C: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101E13F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E141: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101E144: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E19B; /* 0x1101E146: je 0x1101e19b */
L_1101E148:
    /* cmp MEM32(edi), ebx */ /* 0x1101E148: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E19B; /* 0x1101E14A: jne 0x1101e19b */
L_1101E14C:
    PUSH32(esp, 0xCu); /* 0x1101E14C: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x1101E14E: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101E153: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101E155: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101E156: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101E159: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101E15C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E18A; /* 0x1101E15E: je 0x1101e18a */
L_1101E160:
    ecx = MEM32(ebp + 0xC); /* 0x1101E160: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101E163: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E168: push eax */
    ecx = ebp + (-0x44); /* 0x1101E169: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101E16C: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101E171: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101E175: mov ecx, esi */
    MEM32(esi) = 0x11002274u; /* 0x1101E177: mov dword ptr [esi], 0x11002274 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E17D: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1101E17E: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101E182: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x1101E183: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    goto L_1101E18C; /* 0x1101E188: jmp 0x1101e18c */
L_1101E18A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101E18A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101E18C:
    MEM32(edi) = esi; /* 0x1101E18C: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101E18E: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E19B; /* 0x1101E191: je 0x1101e19b */
L_1101E193:
    ecx = ebp + (-0x44); /* 0x1101E193: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101E196: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101E19B:
    PUSH32(esp, 5); /* 0x1101E19B: push 5 */
    eax = POP32_VAL(esp); /* 0x1101E19D: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101E19E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E1A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101E1A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101E1A4u);

L_1101E1A4:
    PUSH32(esp, 0x38u); /* 0x1101E1A4: push 0x38 */
    eax = 0x1103F019u; /* 0x1101E1A6: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x1101E1AB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1101E1B0: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101E1B3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101E1B5: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1101E1B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E20F; /* 0x1101E1BA: je 0x1101e20f */
L_1101E1BC:
    /* cmp MEM32(edi), ebx */ /* 0x1101E1BC: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E20F; /* 0x1101E1BE: jne 0x1101e20f */
L_1101E1C0:
    PUSH32(esp, 0xCu); /* 0x1101E1C0: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x1101E1C2: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101E1C7: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101E1C9: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1101E1CA: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1101E1CD: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1101E1D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E1FE; /* 0x1101E1D2: je 0x1101e1fe */
L_1101E1D4:
    ecx = MEM32(ebp + 0xC); /* 0x1101E1D4: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1101E1D7: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E1DC: push eax */
    ecx = ebp + (-0x44); /* 0x1101E1DD: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1101E1E0: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1101E1E5: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101E1E9: mov ecx, esi */
    MEM32(esi) = 0x11002234u; /* 0x1101E1EB: mov dword ptr [esi], 0x11002234 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E1F1: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1101E1F2: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101E1F6: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x1101E1F7: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    goto L_1101E200; /* 0x1101E1FC: jmp 0x1101e200 */
L_1101E1FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101E1FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101E200:
    MEM32(edi) = esi; /* 0x1101E200: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1101E202: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E20F; /* 0x1101E205: je 0x1101e20f */
L_1101E207:
    ecx = ebp + (-0x44); /* 0x1101E207: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101E20A: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1101E20F:
    PUSH32(esp, 5); /* 0x1101E20F: push 5 */
    eax = POP32_VAL(esp); /* 0x1101E211: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1101E212: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E217: ret  */
    RECOMP_REGS_OUT();
}

void sub_110206B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110206B7u);

L_110206B7:
    PUSH32(esp, 0x10u); /* 0x110206B7: push 0x10 */
    eax = 0x1103E39Fu; /* 0x110206B9: mov eax, 0x1103e39f */
    RECOMP_CALL(sub_1103B372); /* 0x110206BE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ecx; /* 0x110206C3: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x110206C6: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x110206C9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110206CC: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110206CD: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110206D2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110206D6: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x110206D7: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110206DC: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110206E0: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110206E2: pop ecx */
    ecx = ebp + (-0x10); /* 0x110206E3: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110206E6: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x28); /* 0x110206EB: mov edi, dword ptr [ebp + 0x28] */
    esi = MEM32(ebp + 0x20); /* 0x110206EE: mov esi, dword ptr [ebp + 0x20] */
    goto L_11020757; /* 0x110206F1: jmp 0x11020757 */
L_110206F3:
    /* cmp LO8(ecx), 0x25u */ /* 0x110206F3: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102072B; /* 0x110206F6: jne 0x1102072b */
L_110206F8:
    ecx = MEM32(ebp + (-0x14)); /* 0x110206F8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110206FB: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x110206FC: push 0 */
    eax = (uint32_t)MEM8(edi); /* 0x110206FE: movzx eax, byte ptr [edi] */
    edx = MEM32(ecx); /* 0x11020701: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11020703: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11020704: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x1C); /* 0x11020707: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1102070A: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102070B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102070E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11020711: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11020714: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11020717: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102071A: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1102071B: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1102071E: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11020720: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11020723: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11020726: mov dword ptr [ebp + 0x10], eax */
    goto L_11020756; /* 0x11020729: jmp 0x11020756 */
L_1102072B:
    /* cmp LO8(ecx), 0x20u */ /* 0x1102072B: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020784; /* 0x1102072E: je 0x11020784 */
L_11020730:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11020730: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102073E; /* 0x11020734: jne 0x1102073e */
L_11020736:
    ecx = ebp + 0xC; /* 0x11020736: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11020739: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1102073E:
    eax = MEM32(ebx); /* 0x1102073E: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11020740: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x11020742: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x11020744: push dword ptr [ebp + 0x11] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11020747: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(edi) */ /* 0x1102074A: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020796; /* 0x1102074C: jne 0x11020796 */
L_1102074E:
    ecx = ebp + 0xC; /* 0x1102074E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11020751: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11020756:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11020756: inc edi */
    _flag_k = FK_INC;
L_11020757:
    SET_LO8(ecx, MEM8(edi)); /* 0x11020757: mov cl, byte ptr [edi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11020759: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110206F3; /* 0x1102075B: jne 0x110206f3 */
L_1102075D:
    goto L_11020799; /* 0x1102075D: jmp 0x11020799 */
L_1102075F:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1102075F: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102076D; /* 0x11020763: jne 0x1102076d */
L_11020765:
    ecx = ebp + 0xC; /* 0x11020765: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11020768: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1102076D:
    eax = MEM32(ebp + 0x11); /* 0x1102076D: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x11020770: movzx ecx, al */
    eax = MEM32(ebx + 0xC); /* 0x11020773: mov eax, dword ptr [ebx + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x11020776: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020756; /* 0x1102077A: je 0x11020756 */
L_1102077C:
    ecx = ebp + 0xC; /* 0x1102077C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x1102077F: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11020784:
    eax = ebp + 0x14; /* 0x11020784: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11020787: push eax */
    ecx = ebp + 0xC; /* 0x11020788: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102078B: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020790: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102075F; /* 0x11020792: je 0x1102075f */
L_11020794:
    RECOMP_BACKEDGE();
    goto L_11020756; /* 0x11020794: jmp 0x11020756 */
L_11020796:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11020796: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11020799:
    eax = ebp + 0x14; /* 0x11020799: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102079C: push eax */
    ecx = ebp + 0xC; /* 0x1102079D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110207A0: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110207A5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110207AC; /* 0x110207A7: je 0x110207ac */
L_110207A9:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110207A9: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110207AC:
    eax = MEM32(ebp + 0x8); /* 0x110207AC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110207AF: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110207B2: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110207B4: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110207B7: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110207BA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x110207BF: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_110207C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110207C2u);

L_110207C2:
    PUSH32(esp, 0x10u); /* 0x110207C2: push 0x10 */
    eax = 0x1103E39Fu; /* 0x110207C4: mov eax, 0x1103e39f */
    RECOMP_CALL(sub_1103B372); /* 0x110207C9: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ecx; /* 0x110207CE: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x110207D1: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x110207D4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110207D7: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110207D8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110207DD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110207E1: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110207E2: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110207E7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110207EB: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110207ED: pop ecx */
    ecx = ebp + (-0x10); /* 0x110207EE: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110207F1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x28); /* 0x110207F6: mov edi, dword ptr [ebp + 0x28] */
    esi = MEM32(ebp + 0x20); /* 0x110207F9: mov esi, dword ptr [ebp + 0x20] */
    goto L_11020862; /* 0x110207FC: jmp 0x11020862 */
L_110207FE:
    /* cmp LO8(ecx), 0x25u */ /* 0x110207FE: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020836; /* 0x11020801: jne 0x11020836 */
L_11020803:
    ecx = MEM32(ebp + (-0x14)); /* 0x11020803: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11020806: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x11020807: push 0 */
    eax = (uint32_t)MEM8(edi); /* 0x11020809: movzx eax, byte ptr [edi] */
    edx = MEM32(ecx); /* 0x1102080C: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1102080E: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102080F: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x1C); /* 0x11020812: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11020815: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11020816: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11020819: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102081C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102081F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11020822: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11020825: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x11020826: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11020829: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102082B: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x1102082E: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11020831: mov dword ptr [ebp + 0x10], eax */
    goto L_11020861; /* 0x11020834: jmp 0x11020861 */
L_11020836:
    /* cmp LO8(ecx), 0x20u */ /* 0x11020836: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020890; /* 0x11020839: je 0x11020890 */
L_1102083B:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1102083B: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020849; /* 0x1102083F: jne 0x11020849 */
L_11020841:
    ecx = ebp + 0xC; /* 0x11020841: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11020844: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020849:
    eax = MEM32(ebx); /* 0x11020849: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102084B: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102084D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x1102084F: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11020852: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(edi) */ /* 0x11020855: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110208A2; /* 0x11020857: jne 0x110208a2 */
L_11020859:
    ecx = ebp + 0xC; /* 0x11020859: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x1102085C: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11020861:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11020861: inc edi */
    _flag_k = FK_INC;
L_11020862:
    SET_LO8(ecx, MEM8(edi)); /* 0x11020862: mov cl, byte ptr [edi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11020864: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110207FE; /* 0x11020866: jne 0x110207fe */
L_11020868:
    goto L_110208A5; /* 0x11020868: jmp 0x110208a5 */
L_1102086A:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1102086A: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020878; /* 0x1102086E: jne 0x11020878 */
L_11020870:
    ecx = ebp + 0xC; /* 0x11020870: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11020873: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020878:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11020878: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x1102087B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102087D: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x1102087F: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11020881: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020884: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020861; /* 0x11020886: je 0x11020861 */
L_11020888:
    ecx = ebp + 0xC; /* 0x11020888: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x1102088B: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11020890:
    eax = ebp + 0x14; /* 0x11020890: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11020893: push eax */
    ecx = ebp + 0xC; /* 0x11020894: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11020897: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102089C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102086A; /* 0x1102089E: je 0x1102086a */
L_110208A0:
    RECOMP_BACKEDGE();
    goto L_11020861; /* 0x110208A0: jmp 0x11020861 */
L_110208A2:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x110208A2: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110208A5:
    eax = ebp + 0x14; /* 0x110208A5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110208A8: push eax */
    ecx = ebp + 0xC; /* 0x110208A9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110208AC: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110208B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110208B8; /* 0x110208B3: je 0x110208b8 */
L_110208B5:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110208B5: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110208B8:
    eax = MEM32(ebp + 0x8); /* 0x110208B8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110208BB: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110208BE: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110208C0: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110208C3: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110208C6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x110208CB: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_110208CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110208CEu);

L_110208CE:
    PUSH32(esp, 0x10u); /* 0x110208CE: push 0x10 */
    eax = 0x1103E39Fu; /* 0x110208D0: mov eax, 0x1103e39f */
    RECOMP_CALL(sub_1103B372); /* 0x110208D5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ecx; /* 0x110208DA: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x110208DD: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x110208E0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110208E3: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110208E4: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110208E9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110208ED: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x110208EE: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110208F3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110208F7: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110208F9: pop ecx */
    ecx = ebp + (-0x10); /* 0x110208FA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110208FD: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x28); /* 0x11020902: mov edi, dword ptr [ebp + 0x28] */
    esi = MEM32(ebp + 0x20); /* 0x11020905: mov esi, dword ptr [ebp + 0x20] */
    goto L_1102096E; /* 0x11020908: jmp 0x1102096e */
L_1102090A:
    /* cmp LO8(ecx), 0x25u */ /* 0x1102090A: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020942; /* 0x1102090D: jne 0x11020942 */
L_1102090F:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102090F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11020912: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x11020913: push 0 */
    eax = (uint32_t)MEM8(edi); /* 0x11020915: movzx eax, byte ptr [edi] */
    edx = MEM32(ecx); /* 0x11020918: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1102091A: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102091B: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x1C); /* 0x1102091E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11020921: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11020922: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11020925: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11020928: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102092B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102092E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11020931: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x11020932: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11020935: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11020937: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x1102093A: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1102093D: mov dword ptr [ebp + 0x10], eax */
    goto L_1102096D; /* 0x11020940: jmp 0x1102096d */
L_11020942:
    /* cmp LO8(ecx), 0x20u */ /* 0x11020942: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102099C; /* 0x11020945: je 0x1102099c */
L_11020947:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11020947: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020955; /* 0x1102094B: jne 0x11020955 */
L_1102094D:
    ecx = ebp + 0xC; /* 0x1102094D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11020950: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020955:
    eax = MEM32(ebx); /* 0x11020955: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11020957: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x11020959: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x1102095B: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1102095E: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(edi) */ /* 0x11020961: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110209AE; /* 0x11020963: jne 0x110209ae */
L_11020965:
    ecx = ebp + 0xC; /* 0x11020965: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11020968: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1102096D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102096D: inc edi */
    _flag_k = FK_INC;
L_1102096E:
    SET_LO8(ecx, MEM8(edi)); /* 0x1102096E: mov cl, byte ptr [edi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11020970: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102090A; /* 0x11020972: jne 0x1102090a */
L_11020974:
    goto L_110209B1; /* 0x11020974: jmp 0x110209b1 */
L_11020976:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11020976: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020984; /* 0x1102097A: jne 0x11020984 */
L_1102097C:
    ecx = ebp + 0xC; /* 0x1102097C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x1102097F: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020984:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11020984: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11020987: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11020989: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x1102098B: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102098D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020990: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102096D; /* 0x11020992: je 0x1102096d */
L_11020994:
    ecx = ebp + 0xC; /* 0x11020994: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11020997: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1102099C:
    eax = ebp + 0x14; /* 0x1102099C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102099F: push eax */
    ecx = ebp + 0xC; /* 0x110209A0: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110209A3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110209A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020976; /* 0x110209AA: je 0x11020976 */
L_110209AC:
    RECOMP_BACKEDGE();
    goto L_1102096D; /* 0x110209AC: jmp 0x1102096d */
L_110209AE:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x110209AE: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110209B1:
    eax = ebp + 0x14; /* 0x110209B1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110209B4: push eax */
    ecx = ebp + 0xC; /* 0x110209B5: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110209B8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110209BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110209C4; /* 0x110209BF: je 0x110209c4 */
L_110209C1:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110209C1: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110209C4:
    eax = MEM32(ebp + 0x8); /* 0x110209C4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110209C7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110209CA: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110209CC: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110209CF: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110209D2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x110209D7: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_110209DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110209DAu);

L_110209DA:
    PUSH32(esp, 0x68u); /* 0x110209DA: push 0x68 */
    eax = 0x1103E3CAu; /* 0x110209DC: mov eax, 0x1103e3ca */
    RECOMP_CALL(sub_1103B3A5); /* 0x110209E1: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110209E6: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x1C); /* 0x110209E9: mov ebx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x10); /* 0x110209EC: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x70)) = eax; /* 0x110209EF: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ebp + 0x14); /* 0x110209F2: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x110209F5: push ebx */
    MEM32(ebp + (-0x6C)) = eax; /* 0x110209F6: mov dword ptr [ebp - 0x6c], eax */
    RECOMP_CALL(sub_11015B71); /* 0x110209F9: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x110209FE: mov edi, eax */
    eax = ebp + (-0x5C); /* 0x11020A00: lea eax, [ebp - 0x5c] */
    ecx = POP32_VAL(esp); /* 0x11020A03: pop ecx */
    PUSH32(esp, eax); /* 0x11020A04: push eax */
    ecx = edi; /* 0x11020A05: mov ecx, edi */
    RECOMP_CALL(sub_110292E9); /* 0x11020A07: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11020A0C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x11020A10: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020A1C; /* 0x11020A14: jne 0x11020a1c */
L_11020A16:
    MEM8(ebp + (-0x5F)) = (uint8_t)(0); /* 0x11020A16: mov byte ptr [ebp - 0x5f], 0 */
    goto L_11020A26; /* 0x11020A1A: jmp 0x11020a26 */
L_11020A1C:
    eax = MEM32(edi); /* 0x11020A1C: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11020A1E: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11020A20: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x5F)) = (uint8_t)(LO8(eax)); /* 0x11020A23: mov byte ptr [ebp - 0x5f], al */
L_11020A26:
    PUSH32(esp, ebx); /* 0x11020A26: push ebx */
    RECOMP_CALL(sub_11010F0A); /* 0x11020A27: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11020A2C: pop ecx */
    ecx = ebp + (-0x2C); /* 0x11020A2D: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x11020A30: push ecx */
    edx = MEM32(eax); /* 0x11020A31: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x11020A33: mov ecx, eax */
    PUSH32(esp, 0x1100229Eu); /* 0x11020A35: push 0x1100229e */
    PUSH32(esp, 0x11002284u); /* 0x11020A3A: push 0x11002284 */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x11020A3F: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x70)); /* 0x11020A42: mov ebx, dword ptr [ebp - 0x70] */
    ecx = esi; /* 0x11020A45: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x11020A47: push dword ptr [ebp - 0x6c] */
    eax = ebx; /* 0x11020A4A: mov eax, ebx */
    MEM32(ebp + (-0x64)) = eax; /* 0x11020A4C: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_11027871); /* 0x11020A4F: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020A54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020A96; /* 0x11020A56: jne 0x11020a96 */
L_11020A58:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020A58: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020A64; /* 0x11020A5B: jne 0x11020a64 */
L_11020A5D:
    ecx = esi; /* 0x11020A5D: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020A5F: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020A64:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11020A64: mov al, byte ptr [esi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x15)) */ /* 0x11020A67: cmp al, byte ptr [ebp - 0x15] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x15))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020A71; /* 0x11020A6A: jne 0x11020a71 */
L_11020A6C:
    MEM8(ebx) = (uint8_t)(0x2Bu); /* 0x11020A6C: mov byte ptr [ebx], 0x2b */
    goto L_11020A89; /* 0x11020A6F: jmp 0x11020a89 */
L_11020A71:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020A71: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020A7E; /* 0x11020A75: jne 0x11020a7e */
L_11020A77:
    ecx = esi; /* 0x11020A77: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020A79: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020A7E:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11020A7E: mov al, byte ptr [esi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x16)) */ /* 0x11020A81: cmp al, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x16))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020A96; /* 0x11020A84: jne 0x11020a96 */
L_11020A86:
    MEM8(ebx) = (uint8_t)(0x2Du); /* 0x11020A86: mov byte ptr [ebx], 0x2d */
L_11020A89:
    eax = ebx + 0x1; /* 0x11020A89: lea eax, [ebx + 1] */
    ecx = esi; /* 0x11020A8C: mov ecx, esi */
    MEM32(ebp + (-0x64)) = eax; /* 0x11020A8E: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_11021816); /* 0x11020A91: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11020A96:
    edi = MEM32(ebp + 0x18); /* 0x11020A96: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0xAu); /* 0x11020A99: push 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xE00u);
    edi = edi & 0xE00u; /* 0x11020A9B: and edi, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11020AA1: pop ebx */
    MEM32(ebp + (-0x74)) = ebx; /* 0x11020AA2: mov dword ptr [ebp - 0x74], ebx */
    /* cmp edi, 0x400u */ /* 0x11020AA5: cmp edi, 0x400 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020AB1; /* 0x11020AAB: jne 0x11020ab1 */
L_11020AAD:
    PUSH32(esp, 8); /* 0x11020AAD: push 8 */
    goto L_11020ABB; /* 0x11020AAF: jmp 0x11020abb */
L_11020AB1:
    /* cmp edi, 0x800u */ /* 0x11020AB1: cmp edi, 0x800 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020ABE; /* 0x11020AB7: jne 0x11020abe */
L_11020AB9:
    PUSH32(esp, 0x10u); /* 0x11020AB9: push 0x10 */
L_11020ABB:
    edi = POP32_VAL(esp); /* 0x11020ABB: pop edi */
    goto L_11020AC4; /* 0x11020ABC: jmp 0x11020ac4 */
L_11020ABE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x11020ABE: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11020AC0: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x11020AC2: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11020AC4:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x11020AC4: push dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11020AC7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x11020AC9: mov ecx, esi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(LO8(eax)); /* 0x11020ACB: mov byte ptr [ebp - 0x5d], al */
    MEM8(ebp + (-0x68)) = (uint8_t)(LO8(eax)); /* 0x11020ACE: mov byte ptr [ebp - 0x68], al */
    MEM8(ebp + (-0x5E)) = (uint8_t)(LO8(eax)); /* 0x11020AD1: mov byte ptr [ebp - 0x5e], al */
    RECOMP_CALL(sub_11027871); /* 0x11020AD4: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020AD9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020B5B; /* 0x11020ADB: jne 0x11020b5b */
L_11020ADD:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020ADD: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020AE9; /* 0x11020AE0: jne 0x11020ae9 */
L_11020AE2:
    ecx = esi; /* 0x11020AE2: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020AE4: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020AE9:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11020AE9: mov al, byte ptr [esi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x2C)) */ /* 0x11020AEC: cmp al, byte ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x2C))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020B5B; /* 0x11020AEF: jne 0x11020b5b */
L_11020AF1:
    SET_LO8(eax, 1); /* 0x11020AF1: mov al, 1 */
    ecx = esi; /* 0x11020AF3: mov ecx, esi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(LO8(eax)); /* 0x11020AF5: mov byte ptr [ebp - 0x5d], al */
    MEM8(ebp + (-0x68)) = (uint8_t)(LO8(eax)); /* 0x11020AF8: mov byte ptr [ebp - 0x68], al */
    RECOMP_CALL(sub_11021816); /* 0x11020AFB: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x11020B00: push dword ptr [ebp - 0x6c] */
    ecx = esi; /* 0x11020B03: mov ecx, esi */
    RECOMP_CALL(sub_11027871); /* 0x11020B05: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020B0A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020B54; /* 0x11020B0C: jne 0x11020b54 */
L_11020B0E:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020B0E: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020B1A; /* 0x11020B11: jne 0x11020b1a */
L_11020B13:
    ecx = esi; /* 0x11020B13: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020B15: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020B1A:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11020B1A: mov al, byte ptr [esi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x13)) */ /* 0x11020B1D: cmp al, byte ptr [ebp - 0x13] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x13))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020B37; /* 0x11020B20: je 0x11020b37 */
L_11020B22:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020B22: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020B2F; /* 0x11020B26: jne 0x11020b2f */
L_11020B28:
    ecx = esi; /* 0x11020B28: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020B2A: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020B2F:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11020B2F: mov al, byte ptr [esi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x14)) */ /* 0x11020B32: cmp al, byte ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x14))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020B54; /* 0x11020B35: jne 0x11020b54 */
L_11020B37:
    /* test edi, edi */ /* 0x11020B37: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020B40; /* 0x11020B39: je 0x11020b40 */
L_11020B3B:
    /* cmp edi, 0x10u */ /* 0x11020B3B: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020B54; /* 0x11020B3E: jne 0x11020b54 */
L_11020B40:
    PUSH32(esp, 0x10u); /* 0x11020B40: push 0x10 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11020B42: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x11020B44: mov ecx, esi */
    edi = POP32_VAL(esp); /* 0x11020B46: pop edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(LO8(eax)); /* 0x11020B47: mov byte ptr [ebp - 0x5d], al */
    MEM8(ebp + (-0x68)) = (uint8_t)(LO8(eax)); /* 0x11020B4A: mov byte ptr [ebp - 0x68], al */
    RECOMP_CALL(sub_11021816); /* 0x11020B4D: call 0x11021816 */
    RECOMP_FLAGS_IN();
    goto L_11020B63; /* 0x11020B52: jmp 0x11020b63 */
L_11020B54:
    /* test edi, edi */ /* 0x11020B54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020B5F; /* 0x11020B56: jne 0x11020b5f */
L_11020B58:
    PUSH32(esp, 8); /* 0x11020B58: push 8 */
    edi = POP32_VAL(esp); /* 0x11020B5A: pop edi */
L_11020B5B:
    /* test edi, edi */ /* 0x11020B5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020B75; /* 0x11020B5D: je 0x11020b75 */
L_11020B5F:
    /* cmp edi, ebx */ /* 0x11020B5F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020B75; /* 0x11020B61: je 0x11020b75 */
L_11020B63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11020B63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 8 */ /* 0x11020B65: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x11020B68: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11020B6B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF2u);
    eax = eax & 0xFFFFFFF2u; /* 0x11020B6C: and eax, 0xfffffff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x16u; /* 0x11020B6F: add eax, 0x16 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x74)) = eax; /* 0x11020B72: mov dword ptr [ebp - 0x74], eax */
L_11020B75:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x11020B75: push dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11020B78: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11020B7C: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 1); /* 0x11020B7F: push 1 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x11020B81: mov dword ptr [ebp - 0x30], 0xf */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x11020B88: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_11014076); /* 0x11020B8C: call 0x11014076 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x70)); /* 0x11020B91: mov eax, dword ptr [ebp - 0x70] */
    ecx = esi; /* 0x11020B94: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x11020B96: push dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x11020B99: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11020B9C: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11020BA0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x11020BA2: mov dword ptr [ebp - 0x68], eax */
    RECOMP_CALL(sub_11027871); /* 0x11020BA5: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020BAA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020C90; /* 0x11020BAC: jne 0x11020c90 */
L_11020BB2:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020BB2: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020BBF; /* 0x11020BB6: jne 0x11020bbf */
L_11020BB8:
    ecx = esi; /* 0x11020BB8: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020BBA: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11020BBF:
    eax = (uint32_t)MEM8(esi + 0x5); /* 0x11020BBF: movzx eax, byte ptr [esi + 5] */
    PUSH32(esp, eax); /* 0x11020BC3: push eax */
    eax = ebp + (-0x2C); /* 0x11020BC4: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x11020BC7: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x11020BC8: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11020BCD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11020BCE: pop ecx */
    /* cmp eax, MEM32(ebp + (-0x74)) */ /* 0x11020BCF: cmp eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020C1D; /* 0x11020BD2: jae 0x11020c1d */
L_11020BD4:
    /* cmp MEM8(ebp + (-0x5E)), 0 */ /* 0x11020BD4: cmp byte ptr [ebp - 0x5e], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5E))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, MEM8(eax + 0x11002284)); /* 0x11020BD8: mov cl, byte ptr [eax + 0x11002284] */
    eax = MEM32(ebp + (-0x64)); /* 0x11020BDE: mov eax, dword ptr [ebp - 0x64] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x11020BE1: mov byte ptr [eax], cl */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020BEA; /* 0x11020BE3: jne 0x11020bea */
L_11020BE5:
    /* cmp LO8(ecx), 0x30u */ /* 0x11020BE5: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020BF7; /* 0x11020BE8: je 0x11020bf7 */
L_11020BEA:
    /* cmp eax, MEM32(ebp + (-0x68)) */ /* 0x11020BEA: cmp eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x68)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020BF7; /* 0x11020BED: jae 0x11020bf7 */
L_11020BEF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11020BEF: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x5E)) = (uint8_t)(1); /* 0x11020BF0: mov byte ptr [ebp - 0x5e], 1 */
    MEM32(ebp + (-0x64)) = eax; /* 0x11020BF4: mov dword ptr [ebp - 0x64], eax */
L_11020BF7:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x11020BF7: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x44)); /* 0x11020BFB: mov eax, dword ptr [ebp - 0x44] */
    ecx = eax; /* 0x11020BFE: mov ecx, eax */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x11020C00: mov byte ptr [ebp - 0x5d], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020C09; /* 0x11020C04: jae 0x11020c09 */
L_11020C06:
    ecx = ebp + (-0x44); /* 0x11020C06: lea ecx, [ebp - 0x44] */
L_11020C09:
    /* cmp MEM8(ecx + ebx), 0x7Fu */ /* 0x11020C09: cmp byte ptr [ecx + ebx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + ebx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020C58; /* 0x11020C0D: je 0x11020c58 */
L_11020C0F:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x11020C0F: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020C18; /* 0x11020C13: jae 0x11020c18 */
L_11020C15:
    eax = ebp + (-0x44); /* 0x11020C15: lea eax, [ebp - 0x44] */
L_11020C18:
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + ebx) = (uint8_t)(MEM8(eax + ebx) + 1); /* 0x11020C18: inc byte ptr [eax + ebx] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_11020C58; /* 0x11020C1B: jmp 0x11020c58 */
L_11020C1D:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x11020C1D: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x44)); /* 0x11020C21: mov eax, dword ptr [ebp - 0x44] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020C29; /* 0x11020C24: jae 0x11020c29 */
L_11020C26:
    eax = ebp + (-0x44); /* 0x11020C26: lea eax, [ebp - 0x44] */
L_11020C29:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x11020C29: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020C71; /* 0x11020C2D: je 0x11020c71 */
L_11020C2F:
    SET_LO8(eax, MEM8(ebp + (-0x5F))); /* 0x11020C2F: mov al, byte ptr [ebp - 0x5f] */
    /* test LO8(eax), LO8(eax) */ /* 0x11020C32: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020C71; /* 0x11020C34: je 0x11020c71 */
L_11020C36:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020C36: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020C46; /* 0x11020C3A: jne 0x11020c46 */
L_11020C3C:
    ecx = esi; /* 0x11020C3C: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11020C3E: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0x5F))); /* 0x11020C43: mov al, byte ptr [ebp - 0x5f] */
L_11020C46:
    /* cmp MEM8(esi + 0x5), LO8(eax) */ /* 0x11020C46: cmp byte ptr [esi + 5], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x5)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020C71; /* 0x11020C49: jne 0x11020c71 */
L_11020C4B:
    PUSH32(esp, 0); /* 0x11020C4B: push 0 */
    PUSH32(esp, 1); /* 0x11020C4D: push 1 */
    ecx = ebp + (-0x44); /* 0x11020C4F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_11014015); /* 0x11020C52: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11020C57: inc ebx */
    _flag_k = FK_INC;
L_11020C58:
    ecx = esi; /* 0x11020C58: mov ecx, esi */
    RECOMP_CALL(sub_11021816); /* 0x11020C5A: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x11020C5F: push dword ptr [ebp - 0x6c] */
    ecx = esi; /* 0x11020C62: mov ecx, esi */
    RECOMP_CALL(sub_11027871); /* 0x11020C64: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020C69: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020BB2; /* 0x11020C6B: je 0x11020bb2 */
L_11020C71:
    esi = MEM32(ebp + (-0x30)); /* 0x11020C71: mov esi, dword ptr [ebp - 0x30] */
    /* test ebx, ebx */ /* 0x11020C74: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020C93; /* 0x11020C76: je 0x11020c93 */
L_11020C78:
    eax = MEM32(ebp + (-0x44)); /* 0x11020C78: mov eax, dword ptr [ebp - 0x44] */
    /* cmp esi, 0x10u */ /* 0x11020C7B: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020C83; /* 0x11020C7E: jae 0x11020c83 */
L_11020C80:
    eax = ebp + (-0x44); /* 0x11020C80: lea eax, [ebp - 0x44] */
L_11020C83:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x11020C83: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11020C8C; /* 0x11020C87: jle 0x11020c8c */
L_11020C89:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11020C89: inc ebx */
    _flag_k = FK_INC;
    goto L_11020C93; /* 0x11020C8A: jmp 0x11020c93 */
L_11020C8C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x11020C8C: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11020C96; /* 0x11020C8E: jmp 0x11020c96 */
L_11020C90:
    esi = MEM32(ebp + (-0x30)); /* 0x11020C90: mov esi, dword ptr [ebp - 0x30] */
L_11020C93:
    SET_LO8(ecx, MEM8(ebp + (-0x5D))); /* 0x11020C93: mov cl, byte ptr [ebp - 0x5d] */
L_11020C96:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x11020C96: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x11020C9A: mov eax, dword ptr [ebp - 0x5c] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020CA2; /* 0x11020C9D: jae 0x11020ca2 */
L_11020C9F:
    eax = ebp + (-0x5C); /* 0x11020C9F: lea eax, [ebp - 0x5c] */
L_11020CA2:
    /* test LO8(ecx), LO8(ecx) */ /* 0x11020CA2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020CF2; /* 0x11020CA4: je 0x11020cf2 */
L_11020CA6:
    /* test ebx, ebx */ /* 0x11020CA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020CE3; /* 0x11020CA8: je 0x11020ce3 */
L_11020CAA:
    SET_LO8(ecx, MEM8(eax)); /* 0x11020CAA: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x11020CAC: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020CE3; /* 0x11020CAF: je 0x11020ce3 */
L_11020CB1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11020CB1: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11020CC4; /* 0x11020CB2: je 0x11020cc4 */
L_11020CB4:
    edx = MEM32(ebp + (-0x44)); /* 0x11020CB4: mov edx, dword ptr [ebp - 0x44] */
    /* cmp esi, 0x10u */ /* 0x11020CB7: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020CBF; /* 0x11020CBA: jae 0x11020cbf */
L_11020CBC:
    edx = ebp + (-0x44); /* 0x11020CBC: lea edx, [ebp - 0x44] */
L_11020CBF:
    /* cmp LO8(ecx), MEM8(edx + ebx) */ /* 0x11020CBF: cmp cl, byte ptr [edx + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020CF2; /* 0x11020CC2: jne 0x11020cf2 */
L_11020CC4:
    /* test ebx, ebx */ /* 0x11020CC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020CD7; /* 0x11020CC6: jne 0x11020cd7 */
L_11020CC8:
    edx = MEM32(ebp + (-0x44)); /* 0x11020CC8: mov edx, dword ptr [ebp - 0x44] */
    /* cmp esi, 0x10u */ /* 0x11020CCB: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020CD3; /* 0x11020CCE: jae 0x11020cd3 */
L_11020CD0:
    edx = ebp + (-0x44); /* 0x11020CD0: lea edx, [ebp - 0x44] */
L_11020CD3:
    /* cmp LO8(ecx), MEM8(edx) */ /* 0x11020CD3: cmp cl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11020CF2; /* 0x11020CD5: jl 0x11020cf2 */
L_11020CD7:
    ecx = eax + 0x1; /* 0x11020CD7: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0 */ /* 0x11020CDA: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_11020CA6; /* 0x11020CDD: jle 0x11020ca6 */
L_11020CDF:
    eax = ecx; /* 0x11020CDF: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_11020CA6; /* 0x11020CE1: jmp 0x11020ca6 */
L_11020CE3:
    /* cmp MEM8(ebp + (-0x5E)), 0 */ /* 0x11020CE3: cmp byte ptr [ebp - 0x5e], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5E))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x64)); /* 0x11020CE7: mov eax, dword ptr [ebp - 0x64] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020CF5; /* 0x11020CEA: jne 0x11020cf5 */
L_11020CEC:
    MEM8(eax) = (uint8_t)(0x30u); /* 0x11020CEC: mov byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11020CEF: inc eax */
    _flag_k = FK_INC;
    goto L_11020CF5; /* 0x11020CF0: jmp 0x11020cf5 */
L_11020CF2:
    eax = MEM32(ebp + (-0x70)); /* 0x11020CF2: mov eax, dword ptr [ebp - 0x70] */
L_11020CF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11020CF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11020CF7: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11020CFA: push ebx */
    PUSH32(esp, 1); /* 0x11020CFB: push 1 */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11020CFD: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_11010630); /* 0x11020CFF: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11020D04: push ebx */
    PUSH32(esp, 1); /* 0x11020D05: push 1 */
    ecx = ebp + (-0x5C); /* 0x11020D07: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_11010630); /* 0x11020D0A: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11020D0F: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x11020D11: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11020D16: ret  */
    RECOMP_REGS_OUT();
}

void sub_11020D17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11020D17u);

L_11020D17:
    PUSH32(esp, 0x84u); /* 0x11020D17: push 0x84 */
    eax = 0x1103E3FFu; /* 0x11020D1C: mov eax, 0x1103e3ff */
    RECOMP_CALL(sub_1103B3A5); /* 0x11020D21: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x11020D26: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x1C); /* 0x11020D29: mov ebx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x10); /* 0x11020D2C: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x11020D2F: mov dword ptr [ebp - 0x8c], eax */
    eax = MEM32(ebp + 0x14); /* 0x11020D35: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11020D38: push ebx */
    MEM32(ebp + (-0x80)) = eax; /* 0x11020D39: mov dword ptr [ebp - 0x80], eax */
    RECOMP_CALL(sub_11015C0B); /* 0x11020D3C: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11020D41: mov edi, eax */
    eax = ebp + (-0x74); /* 0x11020D43: lea eax, [ebp - 0x74] */
    ecx = POP32_VAL(esp); /* 0x11020D46: pop ecx */
    PUSH32(esp, eax); /* 0x11020D47: push eax */
    ecx = edi; /* 0x11020D48: mov ecx, edi */
    RECOMP_CALL(sub_110292E9); /* 0x11020D4A: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11020D4F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x11020D53: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020D62; /* 0x11020D57: jne 0x11020d62 */
L_11020D59:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) & 0; /* 0x11020D59: and dword ptr [ebp - 0x88], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11020D72; /* 0x11020D60: jmp 0x11020d72 */
L_11020D62:
    eax = MEM32(edi); /* 0x11020D62: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11020D64: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11020D66: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11020D69: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x11020D6C: mov dword ptr [ebp - 0x88], eax */
L_11020D72:
    PUSH32(esp, ebx); /* 0x11020D72: push ebx */
    RECOMP_CALL(sub_1101103E); /* 0x11020D73: call 0x1101103e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11020D78: pop ecx */
    ecx = ebp + (-0x44); /* 0x11020D79: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x11020D7C: push ecx */
    edx = MEM32(eax); /* 0x11020D7D: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x11020D7F: mov ecx, eax */
    PUSH32(esp, 0x11002352u); /* 0x11020D81: push 0x11002352 */
    PUSH32(esp, 0x11002338u); /* 0x11020D86: push 0x11002338 */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11020D8B: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x8C)); /* 0x11020D8E: mov ebx, dword ptr [ebp - 0x8c] */
    ecx = esi; /* 0x11020D94: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11020D96: push dword ptr [ebp - 0x80] */
    eax = ebx; /* 0x11020D99: mov eax, ebx */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11020D9B: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_110278AC); /* 0x11020D9E: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020DA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020DE9; /* 0x11020DA5: jne 0x11020de9 */
L_11020DA7:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020DA7: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020DB3; /* 0x11020DAA: jne 0x11020db3 */
L_11020DAC:
    ecx = esi; /* 0x11020DAC: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020DAE: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020DB3:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020DB3: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x16)) */ /* 0x11020DB7: cmp ax, word ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x16))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020DC2; /* 0x11020DBB: jne 0x11020dc2 */
L_11020DBD:
    MEM8(ebx) = (uint8_t)(0x2Bu); /* 0x11020DBD: mov byte ptr [ebx], 0x2b */
    goto L_11020DDC; /* 0x11020DC0: jmp 0x11020ddc */
L_11020DC2:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020DC2: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020DCF; /* 0x11020DC6: jne 0x11020dcf */
L_11020DC8:
    ecx = esi; /* 0x11020DC8: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020DCA: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020DCF:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020DCF: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x18)) */ /* 0x11020DD3: cmp ax, word ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020DE9; /* 0x11020DD7: jne 0x11020de9 */
L_11020DD9:
    MEM8(ebx) = (uint8_t)(0x2Du); /* 0x11020DD9: mov byte ptr [ebx], 0x2d */
L_11020DDC:
    eax = ebx + 0x1; /* 0x11020DDC: lea eax, [ebx + 1] */
    ecx = esi; /* 0x11020DDF: mov ecx, esi */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11020DE1: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_11021838); /* 0x11020DE4: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11020DE9:
    edi = MEM32(ebp + 0x18); /* 0x11020DE9: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0xAu); /* 0x11020DEC: push 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xE00u);
    edi = edi & 0xE00u; /* 0x11020DEE: and edi, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11020DF4: pop ebx */
    MEM32(ebp + (-0x90)) = ebx; /* 0x11020DF5: mov dword ptr [ebp - 0x90], ebx */
    /* cmp edi, 0x400u */ /* 0x11020DFB: cmp edi, 0x400 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020E07; /* 0x11020E01: jne 0x11020e07 */
L_11020E03:
    PUSH32(esp, 8); /* 0x11020E03: push 8 */
    goto L_11020E11; /* 0x11020E05: jmp 0x11020e11 */
L_11020E07:
    /* cmp edi, 0x800u */ /* 0x11020E07: cmp edi, 0x800 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020E14; /* 0x11020E0D: jne 0x11020e14 */
L_11020E0F:
    PUSH32(esp, 0x10u); /* 0x11020E0F: push 0x10 */
L_11020E11:
    edi = POP32_VAL(esp); /* 0x11020E11: pop edi */
    goto L_11020E1A; /* 0x11020E12: jmp 0x11020e1a */
L_11020E14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x11020E14: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11020E16: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x11020E18: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11020E1A:
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11020E1A: push dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11020E1D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x11020E1F: mov ecx, esi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x11020E21: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x11020E24: mov byte ptr [ebp - 0x84], al */
    MEM8(ebp + (-0x76)) = (uint8_t)(LO8(eax)); /* 0x11020E2A: mov byte ptr [ebp - 0x76], al */
    RECOMP_CALL(sub_110278AC); /* 0x11020E2D: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020E32: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020EC4; /* 0x11020E34: jne 0x11020ec4 */
L_11020E3A:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020E3A: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020E46; /* 0x11020E3D: jne 0x11020e46 */
L_11020E3F:
    ecx = esi; /* 0x11020E3F: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020E41: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020E46:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020E46: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x44)) */ /* 0x11020E4A: cmp ax, word ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x44))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020EC4; /* 0x11020E4E: jne 0x11020ec4 */
L_11020E50:
    SET_LO8(eax, 1); /* 0x11020E50: mov al, 1 */
    ecx = esi; /* 0x11020E52: mov ecx, esi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x11020E54: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x11020E57: mov byte ptr [ebp - 0x84], al */
    RECOMP_CALL(sub_11021838); /* 0x11020E5D: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11020E62: push dword ptr [ebp - 0x80] */
    ecx = esi; /* 0x11020E65: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x11020E67: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020E6C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020EBD; /* 0x11020E6E: jne 0x11020ebd */
L_11020E70:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x11020E70: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020E7C; /* 0x11020E73: jne 0x11020e7c */
L_11020E75:
    ecx = esi; /* 0x11020E75: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020E77: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020E7C:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020E7C: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x12)) */ /* 0x11020E80: cmp ax, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x12))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020E9D; /* 0x11020E84: je 0x11020e9d */
L_11020E86:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020E86: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020E93; /* 0x11020E8A: jne 0x11020e93 */
L_11020E8C:
    ecx = esi; /* 0x11020E8C: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020E8E: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020E93:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020E93: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x11020E97: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020EBD; /* 0x11020E9B: jne 0x11020ebd */
L_11020E9D:
    /* test edi, edi */ /* 0x11020E9D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020EA6; /* 0x11020E9F: je 0x11020ea6 */
L_11020EA1:
    /* cmp edi, 0x10u */ /* 0x11020EA1: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020EBD; /* 0x11020EA4: jne 0x11020ebd */
L_11020EA6:
    PUSH32(esp, 0x10u); /* 0x11020EA6: push 0x10 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11020EA8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x11020EAA: mov ecx, esi */
    edi = POP32_VAL(esp); /* 0x11020EAC: pop edi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x11020EAD: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x11020EB0: mov byte ptr [ebp - 0x84], al */
    RECOMP_CALL(sub_11021838); /* 0x11020EB6: call 0x11021838 */
    RECOMP_FLAGS_IN();
    goto L_11020ECC; /* 0x11020EBB: jmp 0x11020ecc */
L_11020EBD:
    /* test edi, edi */ /* 0x11020EBD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11020EC8; /* 0x11020EBF: jne 0x11020ec8 */
L_11020EC1:
    PUSH32(esp, 8); /* 0x11020EC1: push 8 */
    edi = POP32_VAL(esp); /* 0x11020EC3: pop edi */
L_11020EC4:
    /* test edi, edi */ /* 0x11020EC4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020EE1; /* 0x11020EC6: je 0x11020ee1 */
L_11020EC8:
    /* cmp edi, ebx */ /* 0x11020EC8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020EE1; /* 0x11020ECA: je 0x11020ee1 */
L_11020ECC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11020ECC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 8 */ /* 0x11020ECE: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x11020ED1: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11020ED4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF2u);
    eax = eax & 0xFFFFFFF2u; /* 0x11020ED5: and eax, 0xfffffff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x16u; /* 0x11020ED8: add eax, 0x16 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = eax; /* 0x11020EDB: mov dword ptr [ebp - 0x90], eax */
L_11020EE1:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x11020EE1: push dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & 0; /* 0x11020EE7: and dword ptr [ebp - 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x11020EEB: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, 1); /* 0x11020EEE: push 1 */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x11020EF0: mov dword ptr [ebp - 0x48], 0xf */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x11020EF7: mov byte ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_11014076); /* 0x11020EFB: call 0x11014076 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8C)); /* 0x11020F00: mov eax, dword ptr [ebp - 0x8c] */
    ecx = esi; /* 0x11020F06: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11020F08: push dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x11020F0B: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11020F0E: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11020F12: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x84)) = eax; /* 0x11020F14: mov dword ptr [ebp - 0x84], eax */
    RECOMP_CALL(sub_110278AC); /* 0x11020F1A: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020F1F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021013; /* 0x11020F21: jne 0x11021013 */
L_11020F27:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020F27: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020F34; /* 0x11020F2B: jne 0x11020f34 */
L_11020F2D:
    ecx = esi; /* 0x11020F2D: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020F2F: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11020F34:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11020F34: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, eax); /* 0x11020F38: push eax */
    eax = ebp + (-0x44); /* 0x11020F39: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11020F3C: push eax */
    RECOMP_CALL(sub_1101503D); /* 0x11020F3D: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11020F42: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11020F43: pop ecx */
    /* cmp eax, MEM32(ebp + (-0x90)) */ /* 0x11020F44: cmp eax, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x90)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020F98; /* 0x11020F4A: jae 0x11020f98 */
L_11020F4C:
    /* cmp MEM8(ebp + (-0x76)), 0 */ /* 0x11020F4C: cmp byte ptr [ebp - 0x76], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x76))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, MEM8(eax + 0x11002338)); /* 0x11020F50: mov cl, byte ptr [eax + 0x11002338] */
    eax = MEM32(ebp + (-0x7C)); /* 0x11020F56: mov eax, dword ptr [ebp - 0x7c] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x11020F59: mov byte ptr [eax], cl */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020F62; /* 0x11020F5B: jne 0x11020f62 */
L_11020F5D:
    /* cmp LO8(ecx), 0x30u */ /* 0x11020F5D: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020F72; /* 0x11020F60: je 0x11020f72 */
L_11020F62:
    /* cmp eax, MEM32(ebp + (-0x84)) */ /* 0x11020F62: cmp eax, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x84)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020F72; /* 0x11020F68: jae 0x11020f72 */
L_11020F6A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11020F6A: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x76)) = (uint8_t)(1); /* 0x11020F6B: mov byte ptr [ebp - 0x76], 1 */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11020F6F: mov dword ptr [ebp - 0x7c], eax */
L_11020F72:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x11020F72: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x11020F76: mov eax, dword ptr [ebp - 0x5c] */
    ecx = eax; /* 0x11020F79: mov ecx, eax */
    MEM8(ebp + (-0x75)) = (uint8_t)(1); /* 0x11020F7B: mov byte ptr [ebp - 0x75], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020F84; /* 0x11020F7F: jae 0x11020f84 */
L_11020F81:
    ecx = ebp + (-0x5C); /* 0x11020F81: lea ecx, [ebp - 0x5c] */
L_11020F84:
    /* cmp MEM8(ecx + ebx), 0x7Fu */ /* 0x11020F84: cmp byte ptr [ecx + ebx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + ebx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020FDB; /* 0x11020F88: je 0x11020fdb */
L_11020F8A:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x11020F8A: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020F93; /* 0x11020F8E: jae 0x11020f93 */
L_11020F90:
    eax = ebp + (-0x5C); /* 0x11020F90: lea eax, [ebp - 0x5c] */
L_11020F93:
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + ebx) = (uint8_t)(MEM8(eax + ebx) + 1); /* 0x11020F93: inc byte ptr [eax + ebx] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_11020FDB; /* 0x11020F96: jmp 0x11020fdb */
L_11020F98:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x11020F98: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x11020F9C: mov eax, dword ptr [ebp - 0x5c] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11020FA4; /* 0x11020F9F: jae 0x11020fa4 */
L_11020FA1:
    eax = ebp + (-0x5C); /* 0x11020FA1: lea eax, [ebp - 0x5c] */
L_11020FA4:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x11020FA4: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11020FF4; /* 0x11020FA8: je 0x11020ff4 */
L_11020FAA:
    eax = MEM32(ebp + (-0x88)); /* 0x11020FAA: mov eax, dword ptr [ebp - 0x88] */
    /* test LO16(eax), LO16(eax) */ /* 0x11020FB0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020FF4; /* 0x11020FB3: je 0x11020ff4 */
L_11020FB5:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11020FB5: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020FC8; /* 0x11020FB9: jne 0x11020fc8 */
L_11020FBB:
    ecx = esi; /* 0x11020FBB: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11020FBD: call 0x11022515 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x88)); /* 0x11020FC2: mov eax, dword ptr [ebp - 0x88] */
L_11020FC8:
    /* cmp MEM16(esi + 0x6), LO16(eax) */ /* 0x11020FC8: cmp word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x6)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11020FF4; /* 0x11020FCC: jne 0x11020ff4 */
L_11020FCE:
    PUSH32(esp, 0); /* 0x11020FCE: push 0 */
    PUSH32(esp, 1); /* 0x11020FD0: push 1 */
    ecx = ebp + (-0x5C); /* 0x11020FD2: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_11014015); /* 0x11020FD5: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11020FDA: inc ebx */
    _flag_k = FK_INC;
L_11020FDB:
    ecx = esi; /* 0x11020FDB: mov ecx, esi */
    RECOMP_CALL(sub_11021838); /* 0x11020FDD: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11020FE2: push dword ptr [ebp - 0x80] */
    ecx = esi; /* 0x11020FE5: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x11020FE7: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11020FEC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11020F27; /* 0x11020FEE: je 0x11020f27 */
L_11020FF4:
    esi = MEM32(ebp + (-0x48)); /* 0x11020FF4: mov esi, dword ptr [ebp - 0x48] */
    /* test ebx, ebx */ /* 0x11020FF7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021016; /* 0x11020FF9: je 0x11021016 */
L_11020FFB:
    eax = MEM32(ebp + (-0x5C)); /* 0x11020FFB: mov eax, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x11020FFE: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021006; /* 0x11021001: jae 0x11021006 */
L_11021003:
    eax = ebp + (-0x5C); /* 0x11021003: lea eax, [ebp - 0x5c] */
L_11021006:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x11021006: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102100F; /* 0x1102100A: jle 0x1102100f */
L_1102100C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102100C: inc ebx */
    _flag_k = FK_INC;
    goto L_11021016; /* 0x1102100D: jmp 0x11021016 */
L_1102100F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1102100F: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11021019; /* 0x11021011: jmp 0x11021019 */
L_11021013:
    esi = MEM32(ebp + (-0x48)); /* 0x11021013: mov esi, dword ptr [ebp - 0x48] */
L_11021016:
    SET_LO8(ecx, MEM8(ebp + (-0x75))); /* 0x11021016: mov cl, byte ptr [ebp - 0x75] */
L_11021019:
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x11021019: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x74)); /* 0x1102101D: mov eax, dword ptr [ebp - 0x74] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021025; /* 0x11021020: jae 0x11021025 */
L_11021022:
    eax = ebp + (-0x74); /* 0x11021022: lea eax, [ebp - 0x74] */
L_11021025:
    /* test LO8(ecx), LO8(ecx) */ /* 0x11021025: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021075; /* 0x11021027: je 0x11021075 */
L_11021029:
    /* test ebx, ebx */ /* 0x11021029: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021066; /* 0x1102102B: je 0x11021066 */
L_1102102D:
    SET_LO8(ecx, MEM8(eax)); /* 0x1102102D: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x1102102F: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021066; /* 0x11021032: je 0x11021066 */
L_11021034:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11021034: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11021047; /* 0x11021035: je 0x11021047 */
L_11021037:
    edx = MEM32(ebp + (-0x5C)); /* 0x11021037: mov edx, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x1102103A: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021042; /* 0x1102103D: jae 0x11021042 */
L_1102103F:
    edx = ebp + (-0x5C); /* 0x1102103F: lea edx, [ebp - 0x5c] */
L_11021042:
    /* cmp LO8(ecx), MEM8(edx + ebx) */ /* 0x11021042: cmp cl, byte ptr [edx + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021075; /* 0x11021045: jne 0x11021075 */
L_11021047:
    /* test ebx, ebx */ /* 0x11021047: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102105A; /* 0x11021049: jne 0x1102105a */
L_1102104B:
    edx = MEM32(ebp + (-0x5C)); /* 0x1102104B: mov edx, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x1102104E: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021056; /* 0x11021051: jae 0x11021056 */
L_11021053:
    edx = ebp + (-0x5C); /* 0x11021053: lea edx, [ebp - 0x5c] */
L_11021056:
    /* cmp LO8(ecx), MEM8(edx) */ /* 0x11021056: cmp cl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11021075; /* 0x11021058: jl 0x11021075 */
L_1102105A:
    ecx = eax + 0x1; /* 0x1102105A: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0 */ /* 0x1102105D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_11021029; /* 0x11021060: jle 0x11021029 */
L_11021062:
    eax = ecx; /* 0x11021062: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_11021029; /* 0x11021064: jmp 0x11021029 */
L_11021066:
    /* cmp MEM8(ebp + (-0x76)), 0 */ /* 0x11021066: cmp byte ptr [ebp - 0x76], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x76))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x7C)); /* 0x1102106A: mov eax, dword ptr [ebp - 0x7c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102107B; /* 0x1102106D: jne 0x1102107b */
L_1102106F:
    MEM8(eax) = (uint8_t)(0x30u); /* 0x1102106F: mov byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11021072: inc eax */
    _flag_k = FK_INC;
    goto L_1102107B; /* 0x11021073: jmp 0x1102107b */
L_11021075:
    eax = MEM32(ebp + (-0x8C)); /* 0x11021075: mov eax, dword ptr [ebp - 0x8c] */
L_1102107B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102107B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x1102107D: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, ebx); /* 0x11021080: push ebx */
    PUSH32(esp, 1); /* 0x11021081: push 1 */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11021083: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_11010630); /* 0x11021085: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102108A: push ebx */
    PUSH32(esp, 1); /* 0x1102108B: push 1 */
    ecx = ebp + (-0x74); /* 0x1102108D: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_11010630); /* 0x11021090: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11021095: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x11021097: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102109C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102109D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102109Du);

L_1102109D:
    PUSH32(esp, 0x84u); /* 0x1102109D: push 0x84 */
    eax = 0x1103E3FFu; /* 0x110210A2: mov eax, 0x1103e3ff */
    RECOMP_CALL(sub_1103B3A5); /* 0x110210A7: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110210AC: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x1C); /* 0x110210AF: mov ebx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x10); /* 0x110210B2: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x110210B5: mov dword ptr [ebp - 0x8c], eax */
    eax = MEM32(ebp + 0x14); /* 0x110210BB: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x110210BE: push ebx */
    MEM32(ebp + (-0x80)) = eax; /* 0x110210BF: mov dword ptr [ebp - 0x80], eax */
    RECOMP_CALL(sub_11015CA5); /* 0x110210C2: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x110210C7: mov edi, eax */
    eax = ebp + (-0x74); /* 0x110210C9: lea eax, [ebp - 0x74] */
    ecx = POP32_VAL(esp); /* 0x110210CC: pop ecx */
    PUSH32(esp, eax); /* 0x110210CD: push eax */
    ecx = edi; /* 0x110210CE: mov ecx, edi */
    RECOMP_CALL(sub_110292E9); /* 0x110210D0: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110210D5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x110210D9: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110210E8; /* 0x110210DD: jne 0x110210e8 */
L_110210DF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) & 0; /* 0x110210DF: and dword ptr [ebp - 0x88], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110210F8; /* 0x110210E6: jmp 0x110210f8 */
L_110210E8:
    eax = MEM32(edi); /* 0x110210E8: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x110210EA: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110210EC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110210EF: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x110210F2: mov dword ptr [ebp - 0x88], eax */
L_110210F8:
    PUSH32(esp, ebx); /* 0x110210F8: push ebx */
    RECOMP_CALL(sub_11010FA4); /* 0x110210F9: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110210FE: pop ecx */
    ecx = ebp + (-0x44); /* 0x110210FF: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x11021102: push ecx */
    edx = MEM32(eax); /* 0x11021103: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x11021105: mov ecx, eax */
    PUSH32(esp, 0x11002306u); /* 0x11021107: push 0x11002306 */
    PUSH32(esp, 0x110022ECu); /* 0x1102110C: push 0x110022ec */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11021111: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x8C)); /* 0x11021114: mov ebx, dword ptr [ebp - 0x8c] */
    ecx = esi; /* 0x1102111A: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x1102111C: push dword ptr [ebp - 0x80] */
    eax = ebx; /* 0x1102111F: mov eax, ebx */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11021121: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_110278AC); /* 0x11021124: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11021129: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102116F; /* 0x1102112B: jne 0x1102116f */
L_1102112D:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x1102112D: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021139; /* 0x11021130: jne 0x11021139 */
L_11021132:
    ecx = esi; /* 0x11021132: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11021134: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021139:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021139: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x16)) */ /* 0x1102113D: cmp ax, word ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x16))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021148; /* 0x11021141: jne 0x11021148 */
L_11021143:
    MEM8(ebx) = (uint8_t)(0x2Bu); /* 0x11021143: mov byte ptr [ebx], 0x2b */
    goto L_11021162; /* 0x11021146: jmp 0x11021162 */
L_11021148:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11021148: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021155; /* 0x1102114C: jne 0x11021155 */
L_1102114E:
    ecx = esi; /* 0x1102114E: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11021150: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021155:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021155: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x18)) */ /* 0x11021159: cmp ax, word ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102116F; /* 0x1102115D: jne 0x1102116f */
L_1102115F:
    MEM8(ebx) = (uint8_t)(0x2Du); /* 0x1102115F: mov byte ptr [ebx], 0x2d */
L_11021162:
    eax = ebx + 0x1; /* 0x11021162: lea eax, [ebx + 1] */
    ecx = esi; /* 0x11021165: mov ecx, esi */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11021167: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_11021838); /* 0x1102116A: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1102116F:
    edi = MEM32(ebp + 0x18); /* 0x1102116F: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0xAu); /* 0x11021172: push 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xE00u);
    edi = edi & 0xE00u; /* 0x11021174: and edi, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102117A: pop ebx */
    MEM32(ebp + (-0x90)) = ebx; /* 0x1102117B: mov dword ptr [ebp - 0x90], ebx */
    /* cmp edi, 0x400u */ /* 0x11021181: cmp edi, 0x400 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102118D; /* 0x11021187: jne 0x1102118d */
L_11021189:
    PUSH32(esp, 8); /* 0x11021189: push 8 */
    goto L_11021197; /* 0x1102118B: jmp 0x11021197 */
L_1102118D:
    /* cmp edi, 0x800u */ /* 0x1102118D: cmp edi, 0x800 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102119A; /* 0x11021193: jne 0x1102119a */
L_11021195:
    PUSH32(esp, 0x10u); /* 0x11021195: push 0x10 */
L_11021197:
    edi = POP32_VAL(esp); /* 0x11021197: pop edi */
    goto L_110211A0; /* 0x11021198: jmp 0x110211a0 */
L_1102119A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1102119A: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102119C: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x1102119E: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_110211A0:
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x110211A0: push dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x110211A3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x110211A5: mov ecx, esi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x110211A7: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x110211AA: mov byte ptr [ebp - 0x84], al */
    MEM8(ebp + (-0x76)) = (uint8_t)(LO8(eax)); /* 0x110211B0: mov byte ptr [ebp - 0x76], al */
    RECOMP_CALL(sub_110278AC); /* 0x110211B3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110211B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102124A; /* 0x110211BA: jne 0x1102124a */
L_110211C0:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x110211C0: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110211CC; /* 0x110211C3: jne 0x110211cc */
L_110211C5:
    ecx = esi; /* 0x110211C5: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x110211C7: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110211CC:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x110211CC: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x44)) */ /* 0x110211D0: cmp ax, word ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x44))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102124A; /* 0x110211D4: jne 0x1102124a */
L_110211D6:
    SET_LO8(eax, 1); /* 0x110211D6: mov al, 1 */
    ecx = esi; /* 0x110211D8: mov ecx, esi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x110211DA: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x110211DD: mov byte ptr [ebp - 0x84], al */
    RECOMP_CALL(sub_11021838); /* 0x110211E3: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x110211E8: push dword ptr [ebp - 0x80] */
    ecx = esi; /* 0x110211EB: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x110211ED: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110211F2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021243; /* 0x110211F4: jne 0x11021243 */
L_110211F6:
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x110211F6: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021202; /* 0x110211F9: jne 0x11021202 */
L_110211FB:
    ecx = esi; /* 0x110211FB: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x110211FD: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021202:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021202: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x12)) */ /* 0x11021206: cmp ax, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x12))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021223; /* 0x1102120A: je 0x11021223 */
L_1102120C:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1102120C: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021219; /* 0x11021210: jne 0x11021219 */
L_11021212:
    ecx = esi; /* 0x11021212: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11021214: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021219:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021219: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x1102121D: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021243; /* 0x11021221: jne 0x11021243 */
L_11021223:
    /* test edi, edi */ /* 0x11021223: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102122C; /* 0x11021225: je 0x1102122c */
L_11021227:
    /* cmp edi, 0x10u */ /* 0x11021227: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021243; /* 0x1102122A: jne 0x11021243 */
L_1102122C:
    PUSH32(esp, 0x10u); /* 0x1102122C: push 0x10 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1102122E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x11021230: mov ecx, esi */
    edi = POP32_VAL(esp); /* 0x11021232: pop edi */
    MEM8(ebp + (-0x75)) = (uint8_t)(LO8(eax)); /* 0x11021233: mov byte ptr [ebp - 0x75], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x11021236: mov byte ptr [ebp - 0x84], al */
    RECOMP_CALL(sub_11021838); /* 0x1102123C: call 0x11021838 */
    RECOMP_FLAGS_IN();
    goto L_11021252; /* 0x11021241: jmp 0x11021252 */
L_11021243:
    /* test edi, edi */ /* 0x11021243: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102124E; /* 0x11021245: jne 0x1102124e */
L_11021247:
    PUSH32(esp, 8); /* 0x11021247: push 8 */
    edi = POP32_VAL(esp); /* 0x11021249: pop edi */
L_1102124A:
    /* test edi, edi */ /* 0x1102124A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021267; /* 0x1102124C: je 0x11021267 */
L_1102124E:
    /* cmp edi, ebx */ /* 0x1102124E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021267; /* 0x11021250: je 0x11021267 */
L_11021252:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021252: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 8 */ /* 0x11021254: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x11021257: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102125A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF2u);
    eax = eax & 0xFFFFFFF2u; /* 0x1102125B: and eax, 0xfffffff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x16u; /* 0x1102125E: add eax, 0x16 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = eax; /* 0x11021261: mov dword ptr [ebp - 0x90], eax */
L_11021267:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x11021267: push dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & 0; /* 0x1102126D: and dword ptr [ebp - 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x11021271: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, 1); /* 0x11021274: push 1 */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x11021276: mov dword ptr [ebp - 0x48], 0xf */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x1102127D: mov byte ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_11014076); /* 0x11021281: call 0x11014076 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8C)); /* 0x11021286: mov eax, dword ptr [ebp - 0x8c] */
    ecx = esi; /* 0x1102128C: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x1102128E: push dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x11021291: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11021294: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021298: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x84)) = eax; /* 0x1102129A: mov dword ptr [ebp - 0x84], eax */
    RECOMP_CALL(sub_110278AC); /* 0x110212A0: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110212A5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021399; /* 0x110212A7: jne 0x11021399 */
L_110212AD:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x110212AD: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110212BA; /* 0x110212B1: jne 0x110212ba */
L_110212B3:
    ecx = esi; /* 0x110212B3: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x110212B5: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110212BA:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x110212BA: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, eax); /* 0x110212BE: push eax */
    eax = ebp + (-0x44); /* 0x110212BF: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110212C2: push eax */
    RECOMP_CALL(sub_1101503D); /* 0x110212C3: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110212C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110212C9: pop ecx */
    /* cmp eax, MEM32(ebp + (-0x90)) */ /* 0x110212CA: cmp eax, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x90)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102131E; /* 0x110212D0: jae 0x1102131e */
L_110212D2:
    /* cmp MEM8(ebp + (-0x76)), 0 */ /* 0x110212D2: cmp byte ptr [ebp - 0x76], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x76))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, MEM8(eax + 0x110022EC)); /* 0x110212D6: mov cl, byte ptr [eax + 0x110022ec] */
    eax = MEM32(ebp + (-0x7C)); /* 0x110212DC: mov eax, dword ptr [ebp - 0x7c] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x110212DF: mov byte ptr [eax], cl */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110212E8; /* 0x110212E1: jne 0x110212e8 */
L_110212E3:
    /* cmp LO8(ecx), 0x30u */ /* 0x110212E3: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110212F8; /* 0x110212E6: je 0x110212f8 */
L_110212E8:
    /* cmp eax, MEM32(ebp + (-0x84)) */ /* 0x110212E8: cmp eax, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x84)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110212F8; /* 0x110212EE: jae 0x110212f8 */
L_110212F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110212F0: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x76)) = (uint8_t)(1); /* 0x110212F1: mov byte ptr [ebp - 0x76], 1 */
    MEM32(ebp + (-0x7C)) = eax; /* 0x110212F5: mov dword ptr [ebp - 0x7c], eax */
L_110212F8:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x110212F8: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x110212FC: mov eax, dword ptr [ebp - 0x5c] */
    ecx = eax; /* 0x110212FF: mov ecx, eax */
    MEM8(ebp + (-0x75)) = (uint8_t)(1); /* 0x11021301: mov byte ptr [ebp - 0x75], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102130A; /* 0x11021305: jae 0x1102130a */
L_11021307:
    ecx = ebp + (-0x5C); /* 0x11021307: lea ecx, [ebp - 0x5c] */
L_1102130A:
    /* cmp MEM8(ecx + ebx), 0x7Fu */ /* 0x1102130A: cmp byte ptr [ecx + ebx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + ebx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021361; /* 0x1102130E: je 0x11021361 */
L_11021310:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x11021310: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021319; /* 0x11021314: jae 0x11021319 */
L_11021316:
    eax = ebp + (-0x5C); /* 0x11021316: lea eax, [ebp - 0x5c] */
L_11021319:
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + ebx) = (uint8_t)(MEM8(eax + ebx) + 1); /* 0x11021319: inc byte ptr [eax + ebx] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_11021361; /* 0x1102131C: jmp 0x11021361 */
L_1102131E:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x1102131E: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x11021322: mov eax, dword ptr [ebp - 0x5c] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102132A; /* 0x11021325: jae 0x1102132a */
L_11021327:
    eax = ebp + (-0x5C); /* 0x11021327: lea eax, [ebp - 0x5c] */
L_1102132A:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1102132A: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102137A; /* 0x1102132E: je 0x1102137a */
L_11021330:
    eax = MEM32(ebp + (-0x88)); /* 0x11021330: mov eax, dword ptr [ebp - 0x88] */
    /* test LO16(eax), LO16(eax) */ /* 0x11021336: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102137A; /* 0x11021339: je 0x1102137a */
L_1102133B:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1102133B: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102134E; /* 0x1102133F: jne 0x1102134e */
L_11021341:
    ecx = esi; /* 0x11021341: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x11021343: call 0x11022515 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x88)); /* 0x11021348: mov eax, dword ptr [ebp - 0x88] */
L_1102134E:
    /* cmp MEM16(esi + 0x6), LO16(eax) */ /* 0x1102134E: cmp word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x6)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102137A; /* 0x11021352: jne 0x1102137a */
L_11021354:
    PUSH32(esp, 0); /* 0x11021354: push 0 */
    PUSH32(esp, 1); /* 0x11021356: push 1 */
    ecx = ebp + (-0x5C); /* 0x11021358: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_11014015); /* 0x1102135B: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11021360: inc ebx */
    _flag_k = FK_INC;
L_11021361:
    ecx = esi; /* 0x11021361: mov ecx, esi */
    RECOMP_CALL(sub_11021838); /* 0x11021363: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11021368: push dword ptr [ebp - 0x80] */
    ecx = esi; /* 0x1102136B: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x1102136D: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11021372: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110212AD; /* 0x11021374: je 0x110212ad */
L_1102137A:
    esi = MEM32(ebp + (-0x48)); /* 0x1102137A: mov esi, dword ptr [ebp - 0x48] */
    /* test ebx, ebx */ /* 0x1102137D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102139C; /* 0x1102137F: je 0x1102139c */
L_11021381:
    eax = MEM32(ebp + (-0x5C)); /* 0x11021381: mov eax, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x11021384: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102138C; /* 0x11021387: jae 0x1102138c */
L_11021389:
    eax = ebp + (-0x5C); /* 0x11021389: lea eax, [ebp - 0x5c] */
L_1102138C:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1102138C: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11021395; /* 0x11021390: jle 0x11021395 */
L_11021392:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11021392: inc ebx */
    _flag_k = FK_INC;
    goto L_1102139C; /* 0x11021393: jmp 0x1102139c */
L_11021395:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x11021395: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1102139F; /* 0x11021397: jmp 0x1102139f */
L_11021399:
    esi = MEM32(ebp + (-0x48)); /* 0x11021399: mov esi, dword ptr [ebp - 0x48] */
L_1102139C:
    SET_LO8(ecx, MEM8(ebp + (-0x75))); /* 0x1102139C: mov cl, byte ptr [ebp - 0x75] */
L_1102139F:
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x1102139F: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x74)); /* 0x110213A3: mov eax, dword ptr [ebp - 0x74] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110213AB; /* 0x110213A6: jae 0x110213ab */
L_110213A8:
    eax = ebp + (-0x74); /* 0x110213A8: lea eax, [ebp - 0x74] */
L_110213AB:
    /* test LO8(ecx), LO8(ecx) */ /* 0x110213AB: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110213FB; /* 0x110213AD: je 0x110213fb */
L_110213AF:
    /* test ebx, ebx */ /* 0x110213AF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110213EC; /* 0x110213B1: je 0x110213ec */
L_110213B3:
    SET_LO8(ecx, MEM8(eax)); /* 0x110213B3: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x110213B5: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110213EC; /* 0x110213B8: je 0x110213ec */
L_110213BA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x110213BA: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110213CD; /* 0x110213BB: je 0x110213cd */
L_110213BD:
    edx = MEM32(ebp + (-0x5C)); /* 0x110213BD: mov edx, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x110213C0: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110213C8; /* 0x110213C3: jae 0x110213c8 */
L_110213C5:
    edx = ebp + (-0x5C); /* 0x110213C5: lea edx, [ebp - 0x5c] */
L_110213C8:
    /* cmp LO8(ecx), MEM8(edx + ebx) */ /* 0x110213C8: cmp cl, byte ptr [edx + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110213FB; /* 0x110213CB: jne 0x110213fb */
L_110213CD:
    /* test ebx, ebx */ /* 0x110213CD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110213E0; /* 0x110213CF: jne 0x110213e0 */
L_110213D1:
    edx = MEM32(ebp + (-0x5C)); /* 0x110213D1: mov edx, dword ptr [ebp - 0x5c] */
    /* cmp esi, 0x10u */ /* 0x110213D4: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110213DC; /* 0x110213D7: jae 0x110213dc */
L_110213D9:
    edx = ebp + (-0x5C); /* 0x110213D9: lea edx, [ebp - 0x5c] */
L_110213DC:
    /* cmp LO8(ecx), MEM8(edx) */ /* 0x110213DC: cmp cl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_110213FB; /* 0x110213DE: jl 0x110213fb */
L_110213E0:
    ecx = eax + 0x1; /* 0x110213E0: lea ecx, [eax + 1] */
    /* cmp MEM8(ecx), 0 */ /* 0x110213E3: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_110213AF; /* 0x110213E6: jle 0x110213af */
L_110213E8:
    eax = ecx; /* 0x110213E8: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_110213AF; /* 0x110213EA: jmp 0x110213af */
L_110213EC:
    /* cmp MEM8(ebp + (-0x76)), 0 */ /* 0x110213EC: cmp byte ptr [ebp - 0x76], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x76))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x7C)); /* 0x110213F0: mov eax, dword ptr [ebp - 0x7c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021401; /* 0x110213F3: jne 0x11021401 */
L_110213F5:
    MEM8(eax) = (uint8_t)(0x30u); /* 0x110213F5: mov byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110213F8: inc eax */
    _flag_k = FK_INC;
    goto L_11021401; /* 0x110213F9: jmp 0x11021401 */
L_110213FB:
    eax = MEM32(ebp + (-0x8C)); /* 0x110213FB: mov eax, dword ptr [ebp - 0x8c] */
L_11021401:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021401: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x11021403: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, ebx); /* 0x11021406: push ebx */
    PUSH32(esp, 1); /* 0x11021407: push 1 */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x11021409: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_11010630); /* 0x1102140B: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11021410: push ebx */
    PUSH32(esp, 1); /* 0x11021411: push 1 */
    ecx = ebp + (-0x74); /* 0x11021413: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_11010630); /* 0x11021416: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1102141B: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x1102141D: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021422: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021423(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021423u);

L_11021423:
    PUSH32(esp, ebp); /* 0x11021423: push ebp */
    ebp = esp; /* 0x11021424: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x11021426: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11021429: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102142E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11021430: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x1C); /* 0x11021433: mov ecx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x11021436: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x11021439: push ebx */
    PUSH32(esp, esi); /* 0x1102143A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102143B: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1102143E: mov dword ptr [ebp - 0x40], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x11021441: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11021444: push edi */
    MEM32(ebp + (-0x38)) = ecx; /* 0x11021445: mov dword ptr [ebp - 0x38], ecx */
    edi = ebp + (-0x24); /* 0x11021448: lea edi, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1102144B: push eax */
    ecx = esi; /* 0x1102144C: mov ecx, esi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1102144E: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x34)) = edi; /* 0x11021451: mov dword ptr [ebp - 0x34], edi */
    RECOMP_CALL(sub_11027871); /* 0x11021454: call 0x11027871 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021459: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x1102145B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102149A; /* 0x1102145D: jne 0x1102149a */
L_1102145F:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x1102145F: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102146B; /* 0x11021462: jne 0x1102146b */
L_11021464:
    ecx = esi; /* 0x11021464: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11021466: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1102146B:
    ecx = MEM32(ebp + (-0x38)); /* 0x1102146B: mov ecx, dword ptr [ebp - 0x38] */
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x1102146E: mov al, byte ptr [esi + 5] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x11021471: mov byte ptr [ebp - 0x30], al */
    PUSH32(esp, ebx); /* 0x11021474: push ebx */
    eax = MEM32(ecx); /* 0x11021475: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11021477: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102147A: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x2Bu */ /* 0x1102147D: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021486; /* 0x1102147F: jne 0x11021486 */
L_11021481:
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11021481: mov byte ptr [ebp - 0x24], al */
    goto L_1102148D; /* 0x11021484: jmp 0x1102148d */
L_11021486:
    /* cmp LO8(eax), 0x2Du */ /* 0x11021486: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102149A; /* 0x11021488: jne 0x1102149a */
L_1102148A:
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x1102148A: mov byte ptr [ebp - 0x24], al */
L_1102148D:
    edi = ebp + (-0x23); /* 0x1102148D: lea edi, [ebp - 0x23] */
    ecx = esi; /* 0x11021490: mov ecx, esi */
    MEM32(ebp + (-0x34)) = edi; /* 0x11021492: mov dword ptr [ebp - 0x34], edi */
    RECOMP_CALL(sub_11021816); /* 0x11021495: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1102149A:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1102149A: push dword ptr [ebp - 0x2c] */
    ecx = esi; /* 0x1102149D: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(LO8(ebx)); /* 0x1102149F: mov byte ptr [ebp - 0x25], bl */
    RECOMP_CALL(sub_11027871); /* 0x110214A2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110214A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021534; /* 0x110214A9: jne 0x11021534 */
L_110214AF:
    edi = MEM32(ebp + (-0x2C)); /* 0x110214AF: mov edi, dword ptr [ebp - 0x2c] */
L_110214B2:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x110214B2: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110214BE; /* 0x110214B5: jne 0x110214be */
L_110214B7:
    ecx = esi; /* 0x110214B7: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x110214B9: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110214BE:
    ecx = MEM32(ebp + (-0x38)); /* 0x110214BE: mov ecx, dword ptr [ebp - 0x38] */
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x110214C1: mov al, byte ptr [esi + 5] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x110214C4: mov byte ptr [ebp - 0x30], al */
    PUSH32(esp, ebx); /* 0x110214C7: push ebx */
    eax = MEM32(ecx); /* 0x110214C8: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110214CA: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110214CD: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x30u */ /* 0x110214D0: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110214EB; /* 0x110214D2: jne 0x110214eb */
L_110214D4:
    ecx = esi; /* 0x110214D4: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(1); /* 0x110214D6: mov byte ptr [ebp - 0x25], 1 */
    RECOMP_CALL(sub_11021816); /* 0x110214DA: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110214DF: push edi */
    ecx = esi; /* 0x110214E0: mov ecx, esi */
    RECOMP_CALL(sub_11027871); /* 0x110214E2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110214E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110214B2; /* 0x110214E9: je 0x110214b2 */
L_110214EB:
    edi = MEM32(ebp + (-0x34)); /* 0x110214EB: mov edi, dword ptr [ebp - 0x34] */
    /* cmp MEM8(ebp + (-0x25)), LO8(ebx) */ /* 0x110214EE: cmp byte ptr [ebp - 0x25], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x25))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021534; /* 0x110214F1: je 0x11021534 */
L_110214F3:
    MEM8(edi) = (uint8_t)(0x30u); /* 0x110214F3: mov byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110214F6: inc edi */
    _flag_k = FK_INC;
    goto L_11021534; /* 0x110214F7: jmp 0x11021534 */
L_110214F9:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x110214F9: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021505; /* 0x110214FC: jne 0x11021505 */
L_110214FE:
    ecx = esi; /* 0x110214FE: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x11021500: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11021505:
    ecx = MEM32(ebp + (-0x38)); /* 0x11021505: mov ecx, dword ptr [ebp - 0x38] */
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x11021508: mov al, byte ptr [esi + 5] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x1102150B: mov byte ptr [ebp - 0x30], al */
    PUSH32(esp, ebx); /* 0x1102150E: push ebx */
    eax = MEM32(ecx); /* 0x1102150F: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11021511: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11021514: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = eax + (-0x30); /* 0x11021517: lea ecx, [eax - 0x30] */
    /* cmp LO8(ecx), 9 */ /* 0x1102151A: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_11021542; /* 0x1102151D: ja 0x11021542 */
L_1102151F:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1102151F: mov byte ptr [edi], al */
    eax = ebp + (-0x5); /* 0x11021521: lea eax, [ebp - 5] */
    /* cmp edi, eax */ /* 0x11021524: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021529; /* 0x11021526: jae 0x11021529 */
L_11021528:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11021528: inc edi */
    _flag_k = FK_INC;
L_11021529:
    ecx = esi; /* 0x11021529: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(1); /* 0x1102152B: mov byte ptr [ebp - 0x25], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1102152F: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11021534:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11021534: push dword ptr [ebp - 0x2c] */
    ecx = esi; /* 0x11021537: mov ecx, esi */
    RECOMP_CALL(sub_11027871); /* 0x11021539: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102153E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110214F9; /* 0x11021540: je 0x110214f9 */
L_11021542:
    /* cmp MEM8(ebp + (-0x25)), LO8(ebx) */ /* 0x11021542: cmp byte ptr [ebp - 0x25], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x25))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102154A; /* 0x11021545: jne 0x1102154a */
L_11021547:
    edi = ebp + (-0x24); /* 0x11021547: lea edi, [ebp - 0x24] */
L_1102154A:
    eax = ebp + (-0x3C); /* 0x1102154A: lea eax, [ebp - 0x3c] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1102154D: mov byte ptr [edi], bl */
    PUSH32(esp, eax); /* 0x1102154F: push eax */
    PUSH32(esp, 0xAu); /* 0x11021550: push 0xa */
    eax = ebp + (-0x44); /* 0x11021552: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x11021555: mov dword ptr [ebp - 0x3c], ebx */
    PUSH32(esp, eax); /* 0x11021558: push eax */
    eax = ebp + (-0x24); /* 0x11021559: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1102155C: push eax */
    RECOMP_CALL(sub_11030E1D); /* 0x1102155D: call 0x11030e1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11021562: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x11021565: mov ecx, esi */
    edi = eax; /* 0x11021567: mov edi, eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11021569: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_11027871); /* 0x1102156C: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11021571: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021578; /* 0x11021573: je 0x11021578 */
L_11021575:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021575: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11021577: inc ebx */
    _flag_k = FK_INC;
L_11021578:
    eax = ebp + (-0x24); /* 0x11021578: lea eax, [ebp - 0x24] */
    /* cmp MEM32(ebp + (-0x44)), eax */ /* 0x1102157B: cmp dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021597; /* 0x1102157E: je 0x11021597 */
L_11021580:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x11021580: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021597; /* 0x11021584: jne 0x11021597 */
L_11021586:
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x11021586: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11021597; /* 0x11021589: jl 0x11021597 */
L_1102158B:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x1102158B: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11021597; /* 0x1102158E: jl 0x11021597 */
L_11021590:
    eax = MEM32(ebp + (-0x40)); /* 0x11021590: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = edi; /* 0x11021593: mov dword ptr [eax], edi */
    goto L_1102159A; /* 0x11021595: jmp 0x1102159a */
L_11021597:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11021597: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102159A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102159A: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1102159D: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1102159F: pop edi */
    esi = POP32_VAL(esp); /* 0x110215A0: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110215A1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x110215A3: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110215A4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110215A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110215AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110215AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110215AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110215ADu);

L_110215AD:
    PUSH32(esp, ebp); /* 0x110215AD: push ebp */
    ebp = esp; /* 0x110215AE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x110215B0: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110215B3: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110215B8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110215BA: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x1C); /* 0x110215BD: mov ecx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x110215C0: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x110215C3: push ebx */
    PUSH32(esp, esi); /* 0x110215C4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110215C5: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x110215C8: mov dword ptr [ebp - 0x40], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x110215CB: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x110215CE: push edi */
    MEM32(ebp + (-0x30)) = ecx; /* 0x110215CF: mov dword ptr [ebp - 0x30], ecx */
    edi = ebp + (-0x24); /* 0x110215D2: lea edi, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x110215D5: push eax */
    ecx = esi; /* 0x110215D6: mov ecx, esi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x110215D8: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x34)) = edi; /* 0x110215DB: mov dword ptr [ebp - 0x34], edi */
    RECOMP_CALL(sub_110278AC); /* 0x110215DE: call 0x110278ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110215E3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x110215E5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021620; /* 0x110215E7: jne 0x11021620 */
L_110215E9:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x110215E9: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110215F5; /* 0x110215EC: jne 0x110215f5 */
L_110215EE:
    ecx = esi; /* 0x110215EE: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x110215F0: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110215F5:
    ecx = MEM32(ebp + (-0x30)); /* 0x110215F5: mov ecx, dword ptr [ebp - 0x30] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x110215F8: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, ebx); /* 0x110215FC: push ebx */
    PUSH32(esp, eax); /* 0x110215FD: push eax */
    edx = MEM32(ecx); /* 0x110215FE: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11021600: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x2Bu */ /* 0x11021603: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102160C; /* 0x11021605: jne 0x1102160c */
L_11021607:
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11021607: mov byte ptr [ebp - 0x24], al */
    goto L_11021613; /* 0x1102160A: jmp 0x11021613 */
L_1102160C:
    /* cmp LO8(eax), 0x2Du */ /* 0x1102160C: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021620; /* 0x1102160E: jne 0x11021620 */
L_11021610:
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11021610: mov byte ptr [ebp - 0x24], al */
L_11021613:
    edi = ebp + (-0x23); /* 0x11021613: lea edi, [ebp - 0x23] */
    ecx = esi; /* 0x11021616: mov ecx, esi */
    MEM32(ebp + (-0x34)) = edi; /* 0x11021618: mov dword ptr [ebp - 0x34], edi */
    RECOMP_CALL(sub_11021838); /* 0x1102161B: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11021620:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11021620: push dword ptr [ebp - 0x2c] */
    ecx = esi; /* 0x11021623: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(LO8(ebx)); /* 0x11021625: mov byte ptr [ebp - 0x25], bl */
    RECOMP_CALL(sub_110278AC); /* 0x11021628: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102162D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110216AE; /* 0x1102162F: jne 0x110216ae */
L_11021631:
    edi = MEM32(ebp + (-0x2C)); /* 0x11021631: mov edi, dword ptr [ebp - 0x2c] */
L_11021634:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x11021634: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021640; /* 0x11021637: jne 0x11021640 */
L_11021639:
    ecx = esi; /* 0x11021639: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x1102163B: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021640:
    ecx = MEM32(ebp + (-0x30)); /* 0x11021640: mov ecx, dword ptr [ebp - 0x30] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021643: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, ebx); /* 0x11021647: push ebx */
    PUSH32(esp, eax); /* 0x11021648: push eax */
    edx = MEM32(ecx); /* 0x11021649: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102164B: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x30u */ /* 0x1102164E: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021669; /* 0x11021650: jne 0x11021669 */
L_11021652:
    ecx = esi; /* 0x11021652: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(1); /* 0x11021654: mov byte ptr [ebp - 0x25], 1 */
    RECOMP_CALL(sub_11021838); /* 0x11021658: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1102165D: push edi */
    ecx = esi; /* 0x1102165E: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x11021660: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11021665: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021634; /* 0x11021667: je 0x11021634 */
L_11021669:
    edi = MEM32(ebp + (-0x34)); /* 0x11021669: mov edi, dword ptr [ebp - 0x34] */
    /* cmp MEM8(ebp + (-0x25)), LO8(ebx) */ /* 0x1102166C: cmp byte ptr [ebp - 0x25], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x25))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110216AE; /* 0x1102166F: je 0x110216ae */
L_11021671:
    MEM8(edi) = (uint8_t)(0x30u); /* 0x11021671: mov byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11021674: inc edi */
    _flag_k = FK_INC;
    goto L_110216AE; /* 0x11021675: jmp 0x110216ae */
L_11021677:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x11021677: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021683; /* 0x1102167A: jne 0x11021683 */
L_1102167C:
    ecx = esi; /* 0x1102167C: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x1102167E: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11021683:
    ecx = MEM32(ebp + (-0x30)); /* 0x11021683: mov ecx, dword ptr [ebp - 0x30] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x11021686: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, ebx); /* 0x1102168A: push ebx */
    PUSH32(esp, eax); /* 0x1102168B: push eax */
    edx = MEM32(ecx); /* 0x1102168C: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102168E: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    ecx = eax + (-0x30); /* 0x11021691: lea ecx, [eax - 0x30] */
    /* cmp LO8(ecx), 9 */ /* 0x11021694: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_110216BC; /* 0x11021697: ja 0x110216bc */
L_11021699:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x11021699: mov byte ptr [edi], al */
    eax = ebp + (-0x5); /* 0x1102169B: lea eax, [ebp - 5] */
    /* cmp edi, eax */ /* 0x1102169E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110216A3; /* 0x110216A0: jae 0x110216a3 */
L_110216A2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110216A2: inc edi */
    _flag_k = FK_INC;
L_110216A3:
    ecx = esi; /* 0x110216A3: mov ecx, esi */
    MEM8(ebp + (-0x25)) = (uint8_t)(1); /* 0x110216A5: mov byte ptr [ebp - 0x25], 1 */
    RECOMP_CALL(sub_11021838); /* 0x110216A9: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_110216AE:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x110216AE: push dword ptr [ebp - 0x2c] */
    ecx = esi; /* 0x110216B1: mov ecx, esi */
    RECOMP_CALL(sub_110278AC); /* 0x110216B3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110216B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021677; /* 0x110216BA: je 0x11021677 */
L_110216BC:
    /* cmp MEM8(ebp + (-0x25)), LO8(ebx) */ /* 0x110216BC: cmp byte ptr [ebp - 0x25], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x25))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110216C4; /* 0x110216BF: jne 0x110216c4 */
L_110216C1:
    edi = ebp + (-0x24); /* 0x110216C1: lea edi, [ebp - 0x24] */
L_110216C4:
    eax = ebp + (-0x38); /* 0x110216C4: lea eax, [ebp - 0x38] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x110216C7: mov byte ptr [edi], bl */
    PUSH32(esp, eax); /* 0x110216C9: push eax */
    PUSH32(esp, 0xAu); /* 0x110216CA: push 0xa */
    eax = ebp + (-0x3C); /* 0x110216CC: lea eax, [ebp - 0x3c] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x110216CF: mov dword ptr [ebp - 0x38], ebx */
    PUSH32(esp, eax); /* 0x110216D2: push eax */
    eax = ebp + (-0x24); /* 0x110216D3: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x110216D6: push eax */
    RECOMP_CALL(sub_11030E1D); /* 0x110216D7: call 0x11030e1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110216DC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x110216DF: mov ecx, esi */
    edi = eax; /* 0x110216E1: mov edi, eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x110216E3: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_110278AC); /* 0x110216E6: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110216EB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110216F2; /* 0x110216ED: je 0x110216f2 */
L_110216EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110216EF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110216F1: inc ebx */
    _flag_k = FK_INC;
L_110216F2:
    eax = ebp + (-0x24); /* 0x110216F2: lea eax, [ebp - 0x24] */
    /* cmp MEM32(ebp + (-0x3C)), eax */ /* 0x110216F5: cmp dword ptr [ebp - 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021711; /* 0x110216F8: je 0x11021711 */
L_110216FA:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x110216FA: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021711; /* 0x110216FE: jne 0x11021711 */
L_11021700:
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x11021700: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11021711; /* 0x11021703: jl 0x11021711 */
L_11021705:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x11021705: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11021711; /* 0x11021708: jl 0x11021711 */
L_1102170A:
    eax = MEM32(ebp + (-0x40)); /* 0x1102170A: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = edi; /* 0x1102170D: mov dword ptr [eax], edi */
    goto L_11021714; /* 0x1102170F: jmp 0x11021714 */
L_11021711:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x11021711: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11021714:
    ecx = MEM32(ebp + (-0x4)); /* 0x11021714: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x11021717: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x11021719: pop edi */
    esi = POP32_VAL(esp); /* 0x1102171A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102171B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102171D: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102171E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11021723: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11021725: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021726: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021727(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021727u);

L_11021727:
    eax = MEM32(ecx + 0x2C); /* 0x11021727: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102172A: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ecx = MEM32(ecx + 0x1C); /* 0x1102172C: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x1102172F: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x11021731: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x11021734: mov dword ptr [ecx], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021736: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021737(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021737u);

L_11021737:
    PUSH32(esp, ebp); /* 0x11021737: push ebp */
    ebp = esp; /* 0x11021738: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102173A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102173B: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0x7FFFFFFEu */ /* 0x1102173E: cmp esi, 0x7ffffffe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11021795; /* 0x11021744: ja 0x11021795 */
L_11021746:
    /* cmp MEM32(ecx + 0x14), esi */ /* 0x11021746: cmp dword ptr [ecx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021756; /* 0x11021749: jae 0x11021756 */
L_1102174B:
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x1102174B: push dword ptr [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x1102174E: push esi */
    RECOMP_CALL(sub_1101CFD6); /* 0x1102174F: call 0x1101cfd6 */
    RECOMP_FLAGS_IN();
    goto L_11021788; /* 0x11021754: jmp 0x11021788 */
L_11021756:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11021756: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021774; /* 0x1102175A: je 0x11021774 */
L_1102175C:
    /* cmp esi, 8 */ /* 0x1102175C: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021774; /* 0x1102175F: jae 0x11021774 */
L_11021761:
    eax = MEM32(ecx + 0x10); /* 0x11021761: mov eax, dword ptr [ecx + 0x10] */
    /* cmp esi, eax */ /* 0x11021764: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102176A; /* 0x11021766: jae 0x1102176a */
L_11021768:
    eax = esi; /* 0x11021768: mov eax, esi */
L_1102176A:
    PUSH32(esp, eax); /* 0x1102176A: push eax */
    PUSH32(esp, 1); /* 0x1102176B: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x1102176D: call 0x1102261d */
    RECOMP_FLAGS_IN();
    goto L_11021788; /* 0x11021772: jmp 0x11021788 */
L_11021774:
    /* test esi, esi */ /* 0x11021774: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11021788; /* 0x11021776: jne 0x11021788 */
L_11021778:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(esi);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & esi; /* 0x11021778: and dword ptr [ecx + 0x10], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x1102177B: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11021783; /* 0x1102177F: jb 0x11021783 */
L_11021781:
    ecx = MEM32(ecx); /* 0x11021781: mov ecx, dword ptr [ecx] */
L_11021783:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021783: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x11021785: mov word ptr [ecx], ax */
L_11021788:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021788: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1102178A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1102178C: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102178D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102178F: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x11021791: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11021792: ret 8 */
L_11021795:
    PUSH32(esp, 0x11004948u); /* 0x11021795: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x1102179A: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102179Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110217A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110217A0u);

L_110217A0:
    PUSH32(esp, ebp); /* 0x110217A0: push ebp */
    ebp = esp; /* 0x110217A1: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x110217A3: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x110217A6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110217A7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110217AA: push edi */
    MEM8(esi) = (uint8_t)(0x25u); /* 0x110217AB: mov byte ptr [esi], 0x25 */
    eax = esi + 0x1; /* 0x110217AE: lea eax, [esi + 1] */
    /* test LO8(ecx), 0x20u */ /* 0x110217B1: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110217BA; /* 0x110217B4: je 0x110217ba */
L_110217B6:
    MEM8(eax) = (uint8_t)(0x2Bu); /* 0x110217B6: mov byte ptr [eax], 0x2b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110217B9: inc eax */
    _flag_k = FK_INC;
L_110217BA:
    /* test LO8(ecx), 8 */ /* 0x110217BA: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110217C3; /* 0x110217BD: je 0x110217c3 */
L_110217BF:
    MEM8(eax) = (uint8_t)(0x23u); /* 0x110217BF: mov byte ptr [eax], 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110217C2: inc eax */
    _flag_k = FK_INC;
L_110217C3:
    edi = MEM32(ebp + 0x10); /* 0x110217C3: mov edi, dword ptr [ebp + 0x10] */
    SET_LO8(edx, MEM8(edi)); /* 0x110217C6: mov dl, byte ptr [edi] */
    /* cmp LO8(edx), 0x4Cu */ /* 0x110217C8: cmp dl, 0x4c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x4Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110217D2; /* 0x110217CB: je 0x110217d2 */
L_110217CD:
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x110217CD: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110217CF: inc eax */
    _flag_k = FK_INC;
    goto L_110217DE; /* 0x110217D0: jmp 0x110217de */
L_110217D2:
    MEM16(eax) = (uint16_t)(0x3649u); /* 0x110217D2: mov word ptr [eax], 0x3649 */
    MEM8(eax + 0x2) = (uint8_t)(0x34u); /* 0x110217D7: mov byte ptr [eax + 2], 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x110217DB: add eax, 3 */
    _flag_k = FK_ADD;
L_110217DE:
    edx = ecx; /* 0x110217DE: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xE00u);
    edx = edx & 0xE00u; /* 0x110217E0: and edx, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x400u */ /* 0x110217E6: cmp edx, 0x400 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110217F2; /* 0x110217EC: jne 0x110217f2 */
L_110217EE:
    SET_LO8(ecx, 0x6Fu); /* 0x110217EE: mov cl, 0x6f */
    goto L_1102180A; /* 0x110217F0: jmp 0x1102180a */
L_110217F2:
    /* cmp edx, 0x800u */ /* 0x110217F2: cmp edx, 0x800 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110217FF; /* 0x110217F8: je 0x110217ff */
L_110217FA:
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x110217FA: mov cl, byte ptr [edi + 1] */
    goto L_1102180A; /* 0x110217FD: jmp 0x1102180a */
L_110217FF:
    if (3u) _cf = (((LO8(ecx)) >> 5) & 1u); /* 0x110217FF: shl cl, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 3u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 3u); /* 0x110217FF: shl cl, 3 */
    SET_LO8(ecx, ~LO8(ecx)); /* 0x11021802: not cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x20u); /* 0x11021804: and cl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x58u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x58u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x58u); /* 0x11021807: or cl, 0x58 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1102180A:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1102180A: mov byte ptr [eax], cl */
    MEM8(eax + 0x1) = (uint8_t)(0); /* 0x1102180C: mov byte ptr [eax + 1], 0 */
    eax = esi; /* 0x11021810: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x11021812: pop edi */
    esi = POP32_VAL(esp); /* 0x11021813: pop esi */
    ebp = POP32_VAL(esp); /* 0x11021814: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021815: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021816(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021816u);

L_11021816:
    PUSH32(esp, esi); /* 0x11021816: push esi */
    esi = ecx; /* 0x11021817: mov esi, ecx */
    ecx = MEM32(esi); /* 0x11021819: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1102181B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102182F; /* 0x1102181D: je 0x1102182f */
L_1102181F:
    RECOMP_CALL(sub_110107B0); /* 0x1102181F: call 0x110107b0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11021824: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102182F; /* 0x11021827: je 0x1102182f */
L_11021829:
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x11021829: mov byte ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x1102182D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102182E: ret  */
L_1102182F:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102182F: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(1); /* 0x11021832: mov byte ptr [esi + 4], 1 */
    esi = POP32_VAL(esp); /* 0x11021836: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021837: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021838u);

L_11021838:
    PUSH32(esp, esi); /* 0x11021838: push esi */
    esi = ecx; /* 0x11021839: mov esi, ecx */
    ecx = MEM32(esi); /* 0x1102183B: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1102183D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021856; /* 0x1102183F: je 0x11021856 */
L_11021841:
    RECOMP_CALL(sub_1101093B); /* 0x11021841: call 0x1101093b */
    RECOMP_FLAGS_IN();
    ecx = 0xFFFFu; /* 0x11021846: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102184B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021856; /* 0x1102184E: je 0x11021856 */
L_11021850:
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x11021850: mov byte ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x11021854: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021855: ret  */
L_11021856:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11021856: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(1); /* 0x11021859: mov byte ptr [esi + 4], 1 */
    esi = POP32_VAL(esp); /* 0x1102185D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102185E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102185F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102185Fu);

L_1102185F:
    eax = ecx + 0x4; /* 0x1102185F: lea eax, [ecx + 4] */
    MEM32(ecx + 0xC) = eax; /* 0x11021862: mov dword ptr [ecx + 0xc], eax */
    edx = ecx + 0x8; /* 0x11021865: lea edx, [ecx + 8] */
    eax = ecx + 0x14; /* 0x11021868: lea eax, [ecx + 0x14] */
    MEM32(ecx + 0x10) = edx; /* 0x1102186B: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx + 0x1C) = eax; /* 0x1102186E: mov dword ptr [ecx + 0x1c], eax */
    eax = ecx + 0x18; /* 0x11021871: lea eax, [ecx + 0x18] */
    MEM32(ecx + 0x20) = eax; /* 0x11021874: mov dword ptr [ecx + 0x20], eax */
    eax = ecx + 0x24; /* 0x11021877: lea eax, [ecx + 0x24] */
    MEM32(ecx + 0x2C) = eax; /* 0x1102187A: mov dword ptr [ecx + 0x2c], eax */
    eax = ecx + 0x28; /* 0x1102187D: lea eax, [ecx + 0x28] */
    MEM32(ecx + 0x30) = eax; /* 0x11021880: mov dword ptr [ecx + 0x30], eax */
    PUSH32(esp, esi); /* 0x11021883: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11021884: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = esi; /* 0x11021886: mov dword ptr [edx], esi */
    eax = MEM32(ecx + 0x20); /* 0x11021888: mov eax, dword ptr [ecx + 0x20] */
    MEM32(eax) = esi; /* 0x1102188B: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x30); /* 0x1102188D: mov eax, dword ptr [ecx + 0x30] */
    MEM32(eax) = esi; /* 0x11021890: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0xC); /* 0x11021892: mov eax, dword ptr [ecx + 0xc] */
    MEM32(eax) = esi; /* 0x11021895: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x1C); /* 0x11021897: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(eax) = esi; /* 0x1102189A: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x2C); /* 0x1102189C: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x1102189F: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x110218A1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110218A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110218A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110218A3u);

L_110218A3:
    PUSH32(esp, 0x64u); /* 0x110218A3: push 0x64 */
    eax = 0x1103E427u; /* 0x110218A5: mov eax, 0x1103e427 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110218AA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110218AF: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110218B1: mov dword ptr [ebp - 0x18], esi */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x110218B4: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x110218BA: mov ebx, eax */
    eax = ebp + (-0x44); /* 0x110218BC: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110218BF: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x110218C0: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110218C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x110218C7: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x110218CB: pop ecx */
    MEM32(esi + 0x8) = edi; /* 0x110218CC: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x10) = edi; /* 0x110218CF: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = edi; /* 0x110218D2: mov dword ptr [esi + 0x14], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110218D5: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110218E3; /* 0x110218D8: je 0x110218e3 */
L_110218DA:
    MEM32(ebp + (-0x14)) = 0x110048B6u; /* 0x110218DA: mov dword ptr [ebp - 0x14], 0x110048b6 */
    goto L_110218E9; /* 0x110218E1: jmp 0x110218e9 */
L_110218E3:
    eax = MEM32(ebx + 0x8); /* 0x110218E3: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x110218E6: mov dword ptr [ebp - 0x14], eax */
L_110218E9:
    eax = ebp + (-0x70); /* 0x110218E9: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x110218EC: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x110218ED: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x110218F2: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110218F5: push eax */
    PUSH32(esp, edi); /* 0x110218F6: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x110218F7: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_110156AE); /* 0x110218FA: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110218FF: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x11021902: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x44); /* 0x11021905: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11021908: push eax */
    PUSH32(esp, edi); /* 0x11021909: push edi */
    PUSH32(esp, 0x110046E0u); /* 0x1102190A: push 0x110046e0 */
    RECOMP_CALL(sub_110156AE); /* 0x1102190F: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11021914: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x11021917: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x44); /* 0x1102191A: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1102191D: push eax */
    PUSH32(esp, edi); /* 0x1102191E: push edi */
    PUSH32(esp, 0x110046E8u); /* 0x1102191F: push 0x110046e8 */
    RECOMP_CALL(sub_110156AE); /* 0x11021924: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11021929: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x1102192C: mov dword ptr [esi + 0x14], eax */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1102192F: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021943; /* 0x11021933: je 0x11021943 */
L_11021935:
    MEM16(esi + 0xC) = (uint16_t)(0x2C2Eu); /* 0x11021935: mov word ptr [esi + 0xc], 0x2c2e */
L_1102193B:
    RECOMP_CALL(sub_1103B340); /* 0x1102193B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11021940: ret 8 */
L_11021943:
    eax = MEM32(ebx); /* 0x11021943: mov eax, dword ptr [ebx] */
    SET_LO8(eax, MEM8(eax)); /* 0x11021945: mov al, byte ptr [eax] */
    MEM8(esi + 0xC) = (uint8_t)(LO8(eax)); /* 0x11021947: mov byte ptr [esi + 0xc], al */
    eax = MEM32(ebx + 0x4); /* 0x1102194A: mov eax, dword ptr [ebx + 4] */
    SET_LO8(eax, MEM8(eax)); /* 0x1102194D: mov al, byte ptr [eax] */
    MEM8(esi + 0xD) = (uint8_t)(LO8(eax)); /* 0x1102194F: mov byte ptr [esi + 0xd], al */
    RECOMP_BACKEDGE();
    goto L_1102193B; /* 0x11021952: jmp 0x1102193b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11021966(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021966u);

L_11021966:
    PUSH32(esp, 0x98u); /* 0x11021966: push 0x98 */
    eax = 0x1103E442u; /* 0x1102196B: mov eax, 0x1103e442 */
    RECOMP_CALL(sub_1103B411); /* 0x11021970: call 0x1103b411 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = ecx; /* 0x11021975: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x11021978: mov dword ptr [ebp - 0x4c], ecx */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1102197B: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x11021981: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x78); /* 0x11021984: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x11021987: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11021988: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102198D: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1102198E: push 0xb */
    ecx = POP32_VAL(esp); /* 0x11021990: pop ecx */
    esi = eax; /* 0x11021991: mov esi, eax */
    edi = ebp + (-0x40); /* 0x11021993: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11021996: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x44)); /* 0x11021998: mov esi, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102199B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102199D: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x110219A0: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x110219A3: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x110219A6: mov dword ptr [esi + 0x14], ebx */
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x110219A9: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110219B5; /* 0x110219AC: je 0x110219b5 */
L_110219AE:
    edi = 0x110048B6u; /* 0x110219AE: mov edi, 0x110048b6 */
    goto L_110219BB; /* 0x110219B3: jmp 0x110219bb */
L_110219B5:
    edi = MEM32(ebp + (-0x48)); /* 0x110219B5: mov edi, dword ptr [ebp - 0x48] */
    edi = MEM32(edi + 0x8); /* 0x110219B8: mov edi, dword ptr [edi + 8] */
L_110219BB:
    eax = ebp + (-0x78); /* 0x110219BB: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x110219BE: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x110219BF: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA4); /* 0x110219C4: lea eax, [ebp - 0xa4] */
    PUSH32(esp, eax); /* 0x110219CA: push eax */
    PUSH32(esp, ebx); /* 0x110219CB: push ebx */
    PUSH32(esp, edi); /* 0x110219CC: push edi */
    RECOMP_CALL(sub_110156AE); /* 0x110219CD: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110219D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x110219D5: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x40); /* 0x110219D8: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110219DB: push eax */
    PUSH32(esp, ebx); /* 0x110219DC: push ebx */
    PUSH32(esp, 0x110046E0u); /* 0x110219DD: push 0x110046e0 */
    RECOMP_CALL(sub_110156DC); /* 0x110219E2: call 0x110156dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110219E7: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x110219EA: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x40); /* 0x110219ED: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110219F0: push eax */
    PUSH32(esp, ebx); /* 0x110219F1: push ebx */
    PUSH32(esp, 0x110046E8u); /* 0x110219F2: push 0x110046e8 */
    RECOMP_CALL(sub_110156DC); /* 0x110219F7: call 0x110156dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110219FC: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x110219FF: mov dword ptr [esi + 0x14], eax */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11021A02: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021A33; /* 0x11021A06: je 0x11021a33 */
L_11021A08:
    eax = ebp + (-0x40); /* 0x11021A08: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021A0B: push eax */
    PUSH32(esp, ebx); /* 0x11021A0C: push ebx */
    PUSH32(esp, 0x2Eu); /* 0x11021A0D: push 0x2e */
    RECOMP_CALL(sub_11015680); /* 0x11021A0F: call 0x11015680 */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0xC) = (uint16_t)(LO16(eax)); /* 0x11021A14: mov word ptr [esi + 0xc], ax */
    eax = ebp + (-0x40); /* 0x11021A18: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021A1B: push eax */
    PUSH32(esp, ebx); /* 0x11021A1C: push ebx */
    PUSH32(esp, 0x2Cu); /* 0x11021A1D: push 0x2c */
    RECOMP_CALL(sub_11015680); /* 0x11021A1F: call 0x11015680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11021A24: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM16(esi + 0xE) = (uint16_t)(LO16(eax)); /* 0x11021A27: mov word ptr [esi + 0xe], ax */
L_11021A2B:
    RECOMP_CALL(sub_1103B363); /* 0x11021A2B: call 0x1103b363 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11021A30: ret 8 */
L_11021A33:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x11021A33: sub esp, 0x2c */
    _flag_k = FK_CMP;
    esi = ebp + (-0x40); /* 0x11021A36: lea esi, [ebp - 0x40] */
    PUSH32(esp, 0xBu); /* 0x11021A39: push 0xb */
    ecx = POP32_VAL(esp); /* 0x11021A3B: pop ecx */
    edi = esp; /* 0x11021A3C: mov edi, esp */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11021A3E: push dword ptr [ebp - 0x48] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11021A41: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x44)); /* 0x11021A43: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11021A46: push ebx */
    RECOMP_CALL(sub_11015554); /* 0x11021A47: call 0x11015554 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11021A2B; /* 0x11021A4C: jmp 0x11021a2b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11021A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021A60u);

L_11021A60:
    PUSH32(esp, 0x98u); /* 0x11021A60: push 0x98 */
    eax = 0x1103E46Au; /* 0x11021A65: mov eax, 0x1103e46a */
    RECOMP_CALL(sub_1103B411); /* 0x11021A6A: call 0x1103b411 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11021A6F: mov ebx, ecx */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x11021A71: mov dword ptr [ebp - 0x4c], ebx */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x11021A74: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x11021A7A: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x78); /* 0x11021A7D: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x11021A80: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11021A81: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11021A86: pop ecx */
    PUSH32(esp, 0xBu); /* 0x11021A87: push 0xb */
    ecx = POP32_VAL(esp); /* 0x11021A89: pop ecx */
    esi = eax; /* 0x11021A8A: mov esi, eax */
    edi = ebp + (-0x40); /* 0x11021A8C: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11021A8F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x48)); /* 0x11021A91: mov edi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11021A94: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11021A96: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x8) = esi; /* 0x11021A9A: mov dword ptr [ebx + 8], esi */
    MEM32(ebx + 0x10) = esi; /* 0x11021A9D: mov dword ptr [ebx + 0x10], esi */
    MEM32(ebx + 0x14) = esi; /* 0x11021AA0: mov dword ptr [ebx + 0x14], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x11021AA3: mov dword ptr [ebp - 4], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021AB1; /* 0x11021AA6: je 0x11021ab1 */
L_11021AA8:
    MEM32(ebp + (-0x44)) = 0x110048B6u; /* 0x11021AA8: mov dword ptr [ebp - 0x44], 0x110048b6 */
    goto L_11021AB7; /* 0x11021AAF: jmp 0x11021ab7 */
L_11021AB1:
    eax = MEM32(edi + 0x8); /* 0x11021AB1: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x44)) = eax; /* 0x11021AB4: mov dword ptr [ebp - 0x44], eax */
L_11021AB7:
    eax = ebp + (-0x78); /* 0x11021AB7: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x11021ABA: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11021ABB: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA4); /* 0x11021AC0: lea eax, [ebp - 0xa4] */
    PUSH32(esp, eax); /* 0x11021AC6: push eax */
    PUSH32(esp, esi); /* 0x11021AC7: push esi */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x11021AC8: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_110156AE); /* 0x11021ACB: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11021AD0: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x11021AD3: mov dword ptr [ebx + 8], eax */
    eax = ebp + (-0x40); /* 0x11021AD6: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021AD9: push eax */
    PUSH32(esp, esi); /* 0x11021ADA: push esi */
    PUSH32(esp, 0x110046E0u); /* 0x11021ADB: push 0x110046e0 */
    RECOMP_CALL(sub_110156DC); /* 0x11021AE0: call 0x110156dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11021AE5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = eax; /* 0x11021AE8: mov dword ptr [ebx + 0x10], eax */
    eax = ebp + (-0x40); /* 0x11021AEB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021AEE: push eax */
    PUSH32(esp, esi); /* 0x11021AEF: push esi */
    PUSH32(esp, 0x110046E8u); /* 0x11021AF0: push 0x110046e8 */
    RECOMP_CALL(sub_110156DC); /* 0x11021AF5: call 0x110156dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11021AFA: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x14) = eax; /* 0x11021AFD: mov dword ptr [ebx + 0x14], eax */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11021B00: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021B31; /* 0x11021B04: je 0x11021b31 */
L_11021B06:
    eax = ebp + (-0x40); /* 0x11021B06: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021B09: push eax */
    PUSH32(esp, esi); /* 0x11021B0A: push esi */
    PUSH32(esp, 0x2Eu); /* 0x11021B0B: push 0x2e */
    RECOMP_CALL(sub_11015680); /* 0x11021B0D: call 0x11015680 */
    RECOMP_FLAGS_IN();
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x11021B12: mov word ptr [ebx + 0xc], ax */
    eax = ebp + (-0x40); /* 0x11021B16: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11021B19: push eax */
    PUSH32(esp, esi); /* 0x11021B1A: push esi */
    PUSH32(esp, 0x2Cu); /* 0x11021B1B: push 0x2c */
    RECOMP_CALL(sub_11015680); /* 0x11021B1D: call 0x11015680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11021B22: add esp, 0x18 */
    _flag_k = FK_ADD;
L_11021B25:
    MEM16(ebx + 0xE) = (uint16_t)(LO16(eax)); /* 0x11021B25: mov word ptr [ebx + 0xe], ax */
    RECOMP_CALL(sub_1103B363); /* 0x11021B29: call 0x1103b363 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11021B2E: ret 8 */
L_11021B31:
    eax = MEM32(edi + 0x30); /* 0x11021B31: mov eax, dword ptr [edi + 0x30] */
    SET_LO16(eax, MEM16(eax)); /* 0x11021B34: mov ax, word ptr [eax] */
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x11021B37: mov word ptr [ebx + 0xc], ax */
    eax = MEM32(edi + 0x34); /* 0x11021B3B: mov eax, dword ptr [edi + 0x34] */
    SET_LO16(eax, MEM16(eax)); /* 0x11021B3E: mov ax, word ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_11021B25; /* 0x11021B41: jmp 0x11021b25 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11021B55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021B55u);

L_11021B55:
    PUSH32(esp, 8); /* 0x11021B55: push 8 */
    eax = 0x1103E492u; /* 0x11021B57: mov eax, 0x1103e492 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11021B5C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11021B61: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11021B63: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021B66: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021B69: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021B6B: push eax */
    MEM32(esi + 0x8) = eax; /* 0x11021B6C: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x11021B6F: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x11021B72: mov dword ptr [esi + 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x11021B75: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_110154E7); /* 0x11021B78: call 0x110154e7 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103014C); /* 0x11021B7D: call 0x1103014c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x11021B82: mov dword ptr [esi + 0x14], eax */
    RECOMP_CALL(sub_1103B340); /* 0x11021B85: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021B8A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021B9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021B9Fu);

L_11021B9F:
    PUSH32(esp, 8); /* 0x11021B9F: push 8 */
    eax = 0x1103E4ADu; /* 0x11021BA1: mov eax, 0x1103e4ad */
    RECOMP_CALL(sub_1103B3DB); /* 0x11021BA6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11021BAB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11021BAD: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021BB0: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021BB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021BB5: push eax */
    MEM32(esi + 0x8) = eax; /* 0x11021BB6: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x11021BB9: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x11021BBC: mov dword ptr [esi + 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x11021BBF: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_110155B8); /* 0x11021BC2: call 0x110155b8 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103014C); /* 0x11021BC7: call 0x1103014c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x11021BCC: mov dword ptr [esi + 0x14], eax */
    RECOMP_CALL(sub_1103B340); /* 0x11021BCF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021BD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021BE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021BE9u);

L_11021BE9:
    PUSH32(esp, 8); /* 0x11021BE9: push 8 */
    eax = 0x1103E4C8u; /* 0x11021BEB: mov eax, 0x1103e4c8 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11021BF0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11021BF5: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11021BF7: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021BFA: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021BFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021BFF: push eax */
    MEM32(esi + 0x8) = eax; /* 0x11021C00: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x11021C03: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x11021C06: mov dword ptr [esi + 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x11021C09: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_11015625); /* 0x11021C0C: call 0x11015625 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103014C); /* 0x11021C11: call 0x1103014c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x11021C16: mov dword ptr [esi + 0x14], eax */
    RECOMP_CALL(sub_1103B340); /* 0x11021C19: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021C1E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021C33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021C33u);

L_11021C33:
    PUSH32(esp, ebp); /* 0x11021C33: push ebp */
    ebp = esp; /* 0x11021C34: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11021C36: push ecx */
    PUSH32(esp, esi); /* 0x11021C37: push esi */
    eax = ebp + (-0x4); /* 0x11021C38: lea eax, [ebp - 4] */
    esi = ecx; /* 0x11021C3B: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x11021C3D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11021C40: push eax */
    RECOMP_CALL(sub_1100E125); /* 0x11021C41: call 0x1100e125 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x11021C46: mov edx, dword ptr [eax] */
    MEM32(esi + 0x8) = edx; /* 0x11021C48: mov dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x11021C4B: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x11021C4E: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11021C51: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11021C57: pop ecx */
    esi = POP32_VAL(esp); /* 0x11021C58: pop esi */
    esp = ebp; /* 0x11021C59: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11021C5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021C5C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021C5Fu);

L_11021C5F:
    PUSH32(esp, ebp); /* 0x11021C5F: push ebp */
    ebp = esp; /* 0x11021C60: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11021C62: push ecx */
    PUSH32(esp, esi); /* 0x11021C63: push esi */
    eax = ebp + (-0x4); /* 0x11021C64: lea eax, [ebp - 4] */
    esi = ecx; /* 0x11021C67: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x11021C69: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11021C6C: push eax */
    RECOMP_CALL(sub_1100E1C0); /* 0x11021C6D: call 0x1100e1c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x11021C72: mov edx, dword ptr [eax] */
    MEM32(esi + 0x8) = edx; /* 0x11021C74: mov dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x11021C77: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x11021C7A: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11021C7D: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11021C83: pop ecx */
    esi = POP32_VAL(esp); /* 0x11021C84: pop esi */
    esp = ebp; /* 0x11021C85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11021C87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021C88: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021C8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021C8Bu);

L_11021C8B:
    PUSH32(esp, ebp); /* 0x11021C8B: push ebp */
    ebp = esp; /* 0x11021C8C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11021C8E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x11021C91: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021CC1; /* 0x11021C93: je 0x11021cc1 */
L_11021C95:
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x11021C95: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11021C9F; /* 0x11021C99: jb 0x11021c9f */
L_11021C9B:
    eax = MEM32(ecx); /* 0x11021C9B: mov eax, dword ptr [ecx] */
    goto L_11021CA1; /* 0x11021C9D: jmp 0x11021ca1 */
L_11021C9F:
    eax = ecx; /* 0x11021C9F: mov eax, ecx */
L_11021CA1:
    /* cmp edx, eax */ /* 0x11021CA1: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11021CC1; /* 0x11021CA3: jb 0x11021cc1 */
L_11021CA5:
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x11021CA5: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11021CA9: push esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_11021CB0; /* 0x11021CAA: jb 0x11021cb0 */
L_11021CAC:
    esi = MEM32(ecx); /* 0x11021CAC: mov esi, dword ptr [ecx] */
    goto L_11021CB2; /* 0x11021CAE: jmp 0x11021cb2 */
L_11021CB0:
    esi = ecx; /* 0x11021CB0: mov esi, ecx */
L_11021CB2:
    eax = MEM32(ecx + 0x10); /* 0x11021CB2: mov eax, dword ptr [ecx + 0x10] */
    eax = esi + eax * 2; /* 0x11021CB5: lea eax, [esi + eax*2] */
    esi = POP32_VAL(esp); /* 0x11021CB8: pop esi */
    /* cmp eax, edx */ /* 0x11021CB9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11021CC1; /* 0x11021CBB: jbe 0x11021cc1 */
L_11021CBD:
    SET_LO8(eax, 1); /* 0x11021CBD: mov al, 1 */
    goto L_11021CC3; /* 0x11021CBF: jmp 0x11021cc3 */
L_11021CC1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11021CC1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11021CC3:
    ebp = POP32_VAL(esp); /* 0x11021CC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11021CC4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11021CC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021CC7u);

L_11021CC7:
    PUSH32(esp, 0x4Cu); /* 0x11021CC7: push 0x4c */
    eax = 0x1103E503u; /* 0x11021CC9: mov eax, 0x1103e503 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11021CCE: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x24); /* 0x11021CD3: mov esi, dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0xC); /* 0x11021CD6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x11021CD9: mov ecx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x20); /* 0x11021CDC: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x58)) = eax; /* 0x11021CDF: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = ecx; /* 0x11021CE2: mov dword ptr [ebp - 0x50], ecx */
    /* test esi, esi */ /* 0x11021CE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021CF8; /* 0x11021CE7: je 0x11021cf8 */
L_11021CE9:
    SET_LO8(eax, MEM8(edi)); /* 0x11021CE9: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x11021CEB: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021CF3; /* 0x11021CED: je 0x11021cf3 */
L_11021CEF:
    /* cmp LO8(eax), 0x2Du */ /* 0x11021CEF: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021CF8; /* 0x11021CF1: jne 0x11021cf8 */
L_11021CF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021CF3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11021CF5: inc ebx */
    _flag_k = FK_INC;
    goto L_11021CFA; /* 0x11021CF6: jmp 0x11021cfa */
L_11021CF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11021CF8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11021CFA:
    eax = MEM32(ecx + 0x14); /* 0x11021CFA: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE00u);
    eax = eax & 0xE00u; /* 0x11021CFD: and eax, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x11021D02: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021D26; /* 0x11021D07: jne 0x11021d26 */
L_11021D09:
    eax = ebx + 0x2; /* 0x11021D09: lea eax, [ebx + 2] */
    /* cmp eax, esi */ /* 0x11021D0C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11021D26; /* 0x11021D0E: ja 0x11021d26 */
L_11021D10:
    /* cmp MEM8(edi + ebx), 0x30u */ /* 0x11021D10: cmp byte ptr [edi + ebx], 0x30 */
    _flag_a = (uint32_t)(MEM8(edi + ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021D26; /* 0x11021D14: jne 0x11021d26 */
L_11021D16:
    SET_LO8(edx, MEM8(edi + ebx + 0x1)); /* 0x11021D16: mov dl, byte ptr [edi + ebx + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x11021D1A: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021D24; /* 0x11021D1D: je 0x11021d24 */
L_11021D1F:
    /* cmp LO8(edx), 0x58u */ /* 0x11021D1F: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021D26; /* 0x11021D22: jne 0x11021d26 */
L_11021D24:
    ebx = eax; /* 0x11021D24: mov ebx, eax */
L_11021D26:
    eax = ebp + (-0x44); /* 0x11021D26: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11021D29: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11021D2A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11021D2F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021D33: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11021D34: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11021D39: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11021D3D: pop ecx */
    ecx = ebp + (-0x44); /* 0x11021D3E: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = eax; /* 0x11021D41: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11021D44: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021D49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11021D4B: mov dword ptr [ebp - 0x14], 0xf */
    PUSH32(esp, eax); /* 0x11021D52: push eax */
    PUSH32(esp, esi); /* 0x11021D53: push esi */
    ecx = ebp + (-0x28); /* 0x11021D54: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = eax; /* 0x11021D57: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x11021D5A: mov byte ptr [ebp - 0x28], al */
    RECOMP_CALL(sub_11014076); /* 0x11021D5D: call 0x11014076 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11021D62: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11021D66: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11021D69: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021D75; /* 0x11021D70: jae 0x11021d75 */
L_11021D72:
    eax = ebp + (-0x28); /* 0x11021D72: lea eax, [ebp - 0x28] */
L_11021D75:
    ecx = MEM32(ebp + (-0x48)); /* 0x11021D75: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x11021D78: push eax */
    eax = esi + edi; /* 0x11021D79: lea eax, [esi + edi] */
    PUSH32(esp, eax); /* 0x11021D7C: push eax */
    edx = MEM32(ecx); /* 0x11021D7D: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x11021D7F: push edi */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x11021D80: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x50)); /* 0x11021D83: mov ecx, dword ptr [ebp - 0x50] */
    eax = ebp + (-0x48); /* 0x11021D86: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x11021D89: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11021D8A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11021D8F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11021D90: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015B71); /* 0x11021D94: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11021D99: pop ecx */
    edi = eax; /* 0x11021D9A: mov edi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11021D9C: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x48); /* 0x11021DA0: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x44)) = edi; /* 0x11021DA3: mov dword ptr [ebp - 0x44], edi */
    RECOMP_CALL(sub_1100E431); /* 0x11021DA6: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x11021DAB: lea eax, [ebp - 0x40] */
    ecx = edi; /* 0x11021DAE: mov ecx, edi */
    PUSH32(esp, eax); /* 0x11021DB0: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x11021DB1: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11021DB6: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x11021DBA: mov edi, dword ptr [ebp - 0x40] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11021DBD: mov byte ptr [ebp - 4], 3 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021DC6; /* 0x11021DC1: jae 0x11021dc6 */
L_11021DC3:
    edi = ebp + (-0x40); /* 0x11021DC3: lea edi, [ebp - 0x40] */
L_11021DC6:
    SET_LO8(eax, MEM8(edi)); /* 0x11021DC6: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11021DC8: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021E0C; /* 0x11021DCA: je 0x11021e0c */
L_11021DCC:
    /* test LO8(eax), LO8(eax) */ /* 0x11021DCC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11021E0C; /* 0x11021DCE: jle 0x11021e0c */
L_11021DD0:
    ecx = MEM32(ebp + (-0x44)); /* 0x11021DD0: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x11021DD3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11021DD5: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x11021DD8: mov byte ptr [ebp - 0x48], al */
    goto L_11021E06; /* 0x11021DDB: jmp 0x11021e06 */
L_11021DDD:
    /* test LO8(eax), LO8(eax) */ /* 0x11021DDD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11021E0C; /* 0x11021DDF: jle 0x11021e0c */
L_11021DE1:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x11021DE1: movsx ecx, al */
    eax = esi; /* 0x11021DE4: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x11021DE6: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x11021DE8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021E0C; /* 0x11021DEA: jae 0x11021e0c */
L_11021DEC:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11021DEC: push dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11021DEF: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x11021DF1: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x11021DF4: push 1 */
    PUSH32(esp, esi); /* 0x11021DF6: push esi */
    RECOMP_CALL(sub_110297AC); /* 0x11021DF7: call 0x110297ac */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1; /* 0x11021DFC: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x11021DFF: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11021E06; /* 0x11021E02: jle 0x11021e06 */
L_11021E04:
    edi = eax; /* 0x11021E04: mov edi, eax */
L_11021E06:
    SET_LO8(eax, MEM8(edi)); /* 0x11021E06: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11021E08: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021DDD; /* 0x11021E0A: jne 0x11021ddd */
L_11021E0C:
    edi = MEM32(ebp + (-0x50)); /* 0x11021E0C: mov edi, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x18)); /* 0x11021E0F: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x11021E12: mov dword ptr [ebp - 0x44], eax */
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x11021E15: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11021E2E; /* 0x11021E19: jl 0x11021e2e */
L_11021E1B:
    if (CMP_G(_flag_a, _flag_b)) goto L_11021E23; /* 0x11021E1B: jg 0x11021e23 */
L_11021E1D:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x11021E1D: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11021E2E; /* 0x11021E21: jbe 0x11021e2e */
L_11021E23:
    esi = MEM32(edi + 0x20); /* 0x11021E23: mov esi, dword ptr [edi + 0x20] */
    /* cmp esi, eax */ /* 0x11021E26: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11021E2E; /* 0x11021E28: jbe 0x11021e2e */
L_11021E2A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11021E2A: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_11021E30; /* 0x11021E2C: jmp 0x11021e30 */
L_11021E2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11021E2E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11021E30:
    eax = MEM32(edi + 0x14); /* 0x11021E30: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x11021E33: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x11021E38: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021ECE; /* 0x11021E3B: je 0x11021ece */
L_11021E41:
    /* cmp eax, 0x100u */ /* 0x11021E41: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021E85; /* 0x11021E46: je 0x11021e85 */
L_11021E48:
    PUSH32(esp, esi); /* 0x11021E48: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11021E49: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x4C); /* 0x11021E4C: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11021E4F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11021E52: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11021E55: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021E56: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225C9); /* 0x11021E59: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11021E5E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11021E60: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11021E63: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11021E65: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x11021E69: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x11021E6B: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x11021E6E: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x11021E71: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11021E74: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021E7C; /* 0x11021E77: jae 0x11021e7c */
L_11021E79:
    eax = ebp + (-0x28); /* 0x11021E79: lea eax, [ebp - 0x28] */
L_11021E7C:
    PUSH32(esp, ebx); /* 0x11021E7C: push ebx */
    PUSH32(esp, eax); /* 0x11021E7D: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x11021E7E: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x11021E81: push dword ptr [ecx] */
    goto L_11021EE2; /* 0x11021E83: jmp 0x11021ee2 */
L_11021E85:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11021E85: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11021E89: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021E91; /* 0x11021E8C: jae 0x11021e91 */
L_11021E8E:
    eax = ebp + (-0x28); /* 0x11021E8E: lea eax, [ebp - 0x28] */
L_11021E91:
    PUSH32(esp, ebx); /* 0x11021E91: push ebx */
    PUSH32(esp, eax); /* 0x11021E92: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11021E93: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x4C); /* 0x11021E96: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11021E99: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11021E9C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021E9D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022565); /* 0x11021EA0: call 0x11022565 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11021EA5: mov ecx, eax */
    PUSH32(esp, esi); /* 0x11021EA7: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11021EA8: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x11021EAB: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x11021EAD: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x11021EB0: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x11021EB3: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x4C); /* 0x11021EB6: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x11021EB9: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x11021EBC: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11021EBE: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021EBF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225C9); /* 0x11021EC2: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11021EC7: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11021ECA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11021EF1; /* 0x11021ECC: jmp 0x11021ef1 */
L_11021ECE:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11021ECE: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11021ED2: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021EDA; /* 0x11021ED5: jae 0x11021eda */
L_11021ED7:
    eax = ebp + (-0x28); /* 0x11021ED7: lea eax, [ebp - 0x28] */
L_11021EDA:
    PUSH32(esp, ebx); /* 0x11021EDA: push ebx */
    PUSH32(esp, eax); /* 0x11021EDB: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11021EDC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11021EDF: push dword ptr [ebp + 0x10] */
L_11021EE2:
    eax = ebp + (-0x4C); /* 0x11021EE2: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11021EE5: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11021EE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022565); /* 0x11021EE9: call 0x11022565 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11021EEE: add esp, 0x18 */
    _flag_k = FK_ADD;
L_11021EF1:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11021EF1: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x11021EF5: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x11021EF7: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x11021EFA: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x11021EFD: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x11021F00: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11021F08; /* 0x11021F03: jae 0x11021f08 */
L_11021F05:
    eax = ebp + (-0x28); /* 0x11021F05: lea eax, [ebp - 0x28] */
L_11021F08:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) - ebx; /* 0x11021F08: sub dword ptr [ebp - 0x44], ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11021F0B: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x11021F0D: push dword ptr [ebp - 0x44] */
    ebx = MEM32(ebp + 0x8); /* 0x11021F10: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11021F13: push eax */
    PUSH32(esp, edx); /* 0x11021F14: push edx */
    PUSH32(esp, ecx); /* 0x11021F15: push ecx */
    eax = ebp + (-0x54); /* 0x11021F16: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x11021F19: push eax */
    PUSH32(esp, ebx); /* 0x11021F1A: push ebx */
    RECOMP_CALL(sub_11022565); /* 0x11021F1B: call 0x11022565 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11021F20: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11021F21: push dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x58)); /* 0x11021F24: mov esi, dword ptr [ebp - 0x58] */
    ecx = MEM32(eax); /* 0x11021F27: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x11021F29: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x11021F2C: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x11021F2F: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0; /* 0x11021F33: and dword ptr [edi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021F37: push eax */
    PUSH32(esp, ecx); /* 0x11021F38: push ecx */
    PUSH32(esp, esi); /* 0x11021F39: push esi */
    PUSH32(esp, ebx); /* 0x11021F3A: push ebx */
    MEM32(ebp + 0x14) = eax; /* 0x11021F3B: mov dword ptr [ebp + 0x14], eax */
    RECOMP_CALL(sub_110225C9); /* 0x11021F3E: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11021F43: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x11021F46: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x11021F49: push 0 */
    PUSH32(esp, 1); /* 0x11021F4B: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11021F4D: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11021F52: push 0 */
    PUSH32(esp, 1); /* 0x11021F54: push 1 */
    ecx = ebp + (-0x28); /* 0x11021F56: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11021F59: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11021F5E: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11021F60: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11021F65: ret  */
    RECOMP_REGS_OUT();
}

void sub_11021F66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11021F66u);

L_11021F66:
    PUSH32(esp, 0x4Cu); /* 0x11021F66: push 0x4c */
    eax = 0x1103E548u; /* 0x11021F68: mov eax, 0x1103e548 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11021F6D: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x24); /* 0x11021F72: mov esi, dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0xC); /* 0x11021F75: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x11021F78: mov ecx, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x20); /* 0x11021F7B: mov ebx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x58)) = eax; /* 0x11021F7E: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = ecx; /* 0x11021F81: mov dword ptr [ebp - 0x50], ecx */
    /* test esi, esi */ /* 0x11021F84: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11021F97; /* 0x11021F86: je 0x11021f97 */
L_11021F88:
    SET_LO8(eax, MEM8(ebx)); /* 0x11021F88: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x11021F8A: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021F92; /* 0x11021F8C: je 0x11021f92 */
L_11021F8E:
    /* cmp LO8(eax), 0x2Du */ /* 0x11021F8E: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021F97; /* 0x11021F90: jne 0x11021f97 */
L_11021F92:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11021F92: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11021F94: inc edi */
    _flag_k = FK_INC;
    goto L_11021F99; /* 0x11021F95: jmp 0x11021f99 */
L_11021F97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11021F97: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11021F99:
    eax = MEM32(ecx + 0x14); /* 0x11021F99: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE00u);
    eax = eax & 0xE00u; /* 0x11021F9C: and eax, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x11021FA1: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021FC5; /* 0x11021FA6: jne 0x11021fc5 */
L_11021FA8:
    eax = edi + 0x2; /* 0x11021FA8: lea eax, [edi + 2] */
    /* cmp eax, esi */ /* 0x11021FAB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11021FC5; /* 0x11021FAD: ja 0x11021fc5 */
L_11021FAF:
    /* cmp MEM8(ebx + edi), 0x30u */ /* 0x11021FAF: cmp byte ptr [ebx + edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021FC5; /* 0x11021FB3: jne 0x11021fc5 */
L_11021FB5:
    SET_LO8(edx, MEM8(ebx + edi + 0x1)); /* 0x11021FB5: mov dl, byte ptr [ebx + edi + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x11021FB9: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11021FC3; /* 0x11021FBC: je 0x11021fc3 */
L_11021FBE:
    /* cmp LO8(edx), 0x58u */ /* 0x11021FBE: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11021FC5; /* 0x11021FC1: jne 0x11021fc5 */
L_11021FC3:
    edi = eax; /* 0x11021FC3: mov edi, eax */
L_11021FC5:
    eax = ebp + (-0x44); /* 0x11021FC5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11021FC8: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11021FC9: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11021FCE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11021FD2: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x11021FD3: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11021FD8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11021FDC: pop ecx */
    ecx = ebp + (-0x44); /* 0x11021FDD: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = eax; /* 0x11021FE0: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11021FE3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11021FE8: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x11021FEC: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11021FEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x11021FF1: mov dword ptr [ebp - 0x14], 7 */
    PUSH32(esp, eax); /* 0x11021FF8: push eax */
    PUSH32(esp, esi); /* 0x11021FF9: push esi */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x11021FFA: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_1102283F); /* 0x11021FFE: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11022003: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11022007: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102200A: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022016; /* 0x11022011: jae 0x11022016 */
L_11022013:
    eax = ebp + (-0x28); /* 0x11022013: lea eax, [ebp - 0x28] */
L_11022016:
    ecx = MEM32(ebp + (-0x48)); /* 0x11022016: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x11022019: push eax */
    eax = esi + ebx; /* 0x1102201A: lea eax, [esi + ebx] */
    PUSH32(esp, eax); /* 0x1102201D: push eax */
    edx = MEM32(ecx); /* 0x1102201E: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x11022020: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11022021: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x50)); /* 0x11022024: mov ecx, dword ptr [ebp - 0x50] */
    eax = ebp + (-0x48); /* 0x11022027: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1102202A: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102202B: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11022030: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11022031: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015C0B); /* 0x11022035: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102203A: pop ecx */
    ebx = eax; /* 0x1102203B: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1102203D: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x48); /* 0x11022041: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x44)) = ebx; /* 0x11022044: mov dword ptr [ebp - 0x44], ebx */
    RECOMP_CALL(sub_1100E431); /* 0x11022047: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1102204C: lea eax, [ebp - 0x40] */
    ecx = ebx; /* 0x1102204F: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11022051: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x11022052: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11022057: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x40)); /* 0x1102205B: mov ebx, dword ptr [ebp - 0x40] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1102205E: mov byte ptr [ebp - 4], 3 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022067; /* 0x11022062: jae 0x11022067 */
L_11022064:
    ebx = ebp + (-0x40); /* 0x11022064: lea ebx, [ebp - 0x40] */
L_11022067:
    SET_LO8(eax, MEM8(ebx)); /* 0x11022067: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11022069: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110220B1; /* 0x1102206B: je 0x110220b1 */
L_1102206D:
    /* test LO8(eax), LO8(eax) */ /* 0x1102206D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110220B1; /* 0x1102206F: jle 0x110220b1 */
L_11022071:
    ecx = MEM32(ebp + (-0x44)); /* 0x11022071: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x11022074: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11022076: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)LO16(eax); /* 0x11022079: movzx edx, ax */
    MEM32(ebp + (-0x48)) = edx; /* 0x1102207C: mov dword ptr [ebp - 0x48], edx */
    goto L_110220AB; /* 0x1102207F: jmp 0x110220ab */
L_11022081:
    /* test LO8(eax), LO8(eax) */ /* 0x11022081: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110220B1; /* 0x11022083: jle 0x110220b1 */
L_11022085:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x11022085: movsx ecx, al */
    eax = esi; /* 0x11022088: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1102208A: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1102208C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110220B1; /* 0x1102208E: jae 0x110220b1 */
L_11022090:
    PUSH32(esp, edx); /* 0x11022090: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11022091: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x11022093: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x11022096: push 1 */
    PUSH32(esp, esi); /* 0x11022098: push esi */
    RECOMP_CALL(sub_1102985D); /* 0x11022099: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x1; /* 0x1102209E: lea eax, [ebx + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x110220A1: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_110220A8; /* 0x110220A4: jle 0x110220a8 */
L_110220A6:
    ebx = eax; /* 0x110220A6: mov ebx, eax */
L_110220A8:
    edx = MEM32(ebp + (-0x48)); /* 0x110220A8: mov edx, dword ptr [ebp - 0x48] */
L_110220AB:
    SET_LO8(eax, MEM8(ebx)); /* 0x110220AB: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x110220AD: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022081; /* 0x110220AF: jne 0x11022081 */
L_110220B1:
    ebx = MEM32(ebp + (-0x50)); /* 0x110220B1: mov ebx, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x18)); /* 0x110220B4: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x110220B7: mov dword ptr [ebp - 0x44], eax */
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x110220BA: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_110220D3; /* 0x110220BE: jl 0x110220d3 */
L_110220C0:
    if (CMP_G(_flag_a, _flag_b)) goto L_110220C8; /* 0x110220C0: jg 0x110220c8 */
L_110220C2:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x110220C2: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110220D3; /* 0x110220C6: jbe 0x110220d3 */
L_110220C8:
    esi = MEM32(ebx + 0x20); /* 0x110220C8: mov esi, dword ptr [ebx + 0x20] */
    /* cmp esi, eax */ /* 0x110220CB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110220D3; /* 0x110220CD: jbe 0x110220d3 */
L_110220CF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x110220CF: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_110220D5; /* 0x110220D1: jmp 0x110220d5 */
L_110220D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110220D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110220D5:
    eax = MEM32(ebx + 0x14); /* 0x110220D5: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x110220D8: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x110220DD: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022173; /* 0x110220E0: je 0x11022173 */
L_110220E6:
    /* cmp eax, 0x100u */ /* 0x110220E6: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102212A; /* 0x110220EB: je 0x1102212a */
L_110220ED:
    PUSH32(esp, esi); /* 0x110220ED: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110220EE: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x4C); /* 0x110220F1: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110220F4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110220F7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110220FA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110220FB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225F3); /* 0x110220FE: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11022103: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022105: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11022108: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1102210A: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1102210E: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x11022110: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x11022113: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x11022116: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11022119: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022121; /* 0x1102211C: jae 0x11022121 */
L_1102211E:
    eax = ebp + (-0x28); /* 0x1102211E: lea eax, [ebp - 0x28] */
L_11022121:
    PUSH32(esp, edi); /* 0x11022121: push edi */
    PUSH32(esp, eax); /* 0x11022122: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x11022123: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x11022126: push dword ptr [ecx] */
    goto L_11022187; /* 0x11022128: jmp 0x11022187 */
L_1102212A:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1102212A: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1102212E: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022136; /* 0x11022131: jae 0x11022136 */
L_11022133:
    eax = ebp + (-0x28); /* 0x11022133: lea eax, [ebp - 0x28] */
L_11022136:
    PUSH32(esp, edi); /* 0x11022136: push edi */
    PUSH32(esp, eax); /* 0x11022137: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11022138: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x4C); /* 0x1102213B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102213E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11022141: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11022142: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022596); /* 0x11022145: call 0x11022596 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1102214A: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1102214C: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102214D: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x11022150: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x11022152: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x11022155: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x11022158: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x4C); /* 0x1102215B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1102215E: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x11022161: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11022163: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11022164: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225F3); /* 0x11022167: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1102216C: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102216F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11022196; /* 0x11022171: jmp 0x11022196 */
L_11022173:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11022173: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11022177: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102217F; /* 0x1102217A: jae 0x1102217f */
L_1102217C:
    eax = ebp + (-0x28); /* 0x1102217C: lea eax, [ebp - 0x28] */
L_1102217F:
    PUSH32(esp, edi); /* 0x1102217F: push edi */
    PUSH32(esp, eax); /* 0x11022180: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11022181: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11022184: push dword ptr [ebp + 0x10] */
L_11022187:
    eax = ebp + (-0x4C); /* 0x11022187: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1102218A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102218B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022596); /* 0x1102218E: call 0x11022596 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022193: add esp, 0x18 */
    _flag_k = FK_ADD;
L_11022196:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11022196: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x1102219A: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x1102219C: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x1102219F: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x110221A2: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x110221A5: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110221AD; /* 0x110221A8: jae 0x110221ad */
L_110221AA:
    eax = ebp + (-0x28); /* 0x110221AA: lea eax, [ebp - 0x28] */
L_110221AD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) - edi; /* 0x110221AD: sub dword ptr [ebp - 0x44], edi */
    _flag_k = FK_CMP;
    eax = eax + edi * 2; /* 0x110221B0: lea eax, [eax + edi*2] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x110221B3: push dword ptr [ebp - 0x44] */
    edi = MEM32(ebp + 0x8); /* 0x110221B6: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110221B9: push eax */
    PUSH32(esp, edx); /* 0x110221BA: push edx */
    PUSH32(esp, ecx); /* 0x110221BB: push ecx */
    eax = ebp + (-0x54); /* 0x110221BC: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x110221BF: push eax */
    PUSH32(esp, edi); /* 0x110221C0: push edi */
    RECOMP_CALL(sub_11022596); /* 0x110221C1: call 0x11022596 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110221C6: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110221C7: push dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x58)); /* 0x110221CA: mov esi, dword ptr [ebp - 0x58] */
    ecx = MEM32(eax); /* 0x110221CD: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x110221CF: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x110221D2: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0; /* 0x110221D5: and dword ptr [ebx + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) & 0; /* 0x110221D9: and dword ptr [ebx + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110221DD: push eax */
    PUSH32(esp, ecx); /* 0x110221DE: push ecx */
    PUSH32(esp, esi); /* 0x110221DF: push esi */
    PUSH32(esp, edi); /* 0x110221E0: push edi */
    MEM32(ebp + 0x14) = eax; /* 0x110221E1: mov dword ptr [ebp + 0x14], eax */
    RECOMP_CALL(sub_110225F3); /* 0x110221E4: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110221E9: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x110221EC: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x110221EF: push 0 */
    PUSH32(esp, 1); /* 0x110221F1: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x110221F3: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110221F8: push 0 */
    PUSH32(esp, 1); /* 0x110221FA: push 1 */
    ecx = ebp + (-0x28); /* 0x110221FC: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x110221FF: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11022204: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11022206: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102220B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102220C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102220Cu);

L_1102220C:
    PUSH32(esp, 0x4Cu); /* 0x1102220C: push 0x4c */
    eax = 0x1103E548u; /* 0x1102220E: mov eax, 0x1103e548 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022213: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x24); /* 0x11022218: mov esi, dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0xC); /* 0x1102221B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1102221E: mov ecx, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x20); /* 0x11022221: mov ebx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x58)) = eax; /* 0x11022224: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = ecx; /* 0x11022227: mov dword ptr [ebp - 0x50], ecx */
    /* test esi, esi */ /* 0x1102222A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102223D; /* 0x1102222C: je 0x1102223d */
L_1102222E:
    SET_LO8(eax, MEM8(ebx)); /* 0x1102222E: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x2Bu */ /* 0x11022230: cmp al, 0x2b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022238; /* 0x11022232: je 0x11022238 */
L_11022234:
    /* cmp LO8(eax), 0x2Du */ /* 0x11022234: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102223D; /* 0x11022236: jne 0x1102223d */
L_11022238:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11022238: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102223A: inc edi */
    _flag_k = FK_INC;
    goto L_1102223F; /* 0x1102223B: jmp 0x1102223f */
L_1102223D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102223D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102223F:
    eax = MEM32(ecx + 0x14); /* 0x1102223F: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE00u);
    eax = eax & 0xE00u; /* 0x11022242: and eax, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x11022247: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102226B; /* 0x1102224C: jne 0x1102226b */
L_1102224E:
    eax = edi + 0x2; /* 0x1102224E: lea eax, [edi + 2] */
    /* cmp eax, esi */ /* 0x11022251: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102226B; /* 0x11022253: ja 0x1102226b */
L_11022255:
    /* cmp MEM8(ebx + edi), 0x30u */ /* 0x11022255: cmp byte ptr [ebx + edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102226B; /* 0x11022259: jne 0x1102226b */
L_1102225B:
    SET_LO8(edx, MEM8(ebx + edi + 0x1)); /* 0x1102225B: mov dl, byte ptr [ebx + edi + 1] */
    /* cmp LO8(edx), 0x78u */ /* 0x1102225F: cmp dl, 0x78 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022269; /* 0x11022262: je 0x11022269 */
L_11022264:
    /* cmp LO8(edx), 0x58u */ /* 0x11022264: cmp dl, 0x58 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102226B; /* 0x11022267: jne 0x1102226b */
L_11022269:
    edi = eax; /* 0x11022269: mov edi, eax */
L_1102226B:
    eax = ebp + (-0x44); /* 0x1102226B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1102226E: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102226F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022274: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11022278: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11022279: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102227E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11022282: pop ecx */
    ecx = ebp + (-0x44); /* 0x11022283: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = eax; /* 0x11022286: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022289: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1102228E: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x11022292: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11022295: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x11022297: mov dword ptr [ebp - 0x14], 7 */
    PUSH32(esp, eax); /* 0x1102229E: push eax */
    PUSH32(esp, esi); /* 0x1102229F: push esi */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x110222A0: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_1102283F); /* 0x110222A4: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x110222A9: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x110222AD: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110222B0: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110222BC; /* 0x110222B7: jae 0x110222bc */
L_110222B9:
    eax = ebp + (-0x28); /* 0x110222B9: lea eax, [ebp - 0x28] */
L_110222BC:
    ecx = MEM32(ebp + (-0x48)); /* 0x110222BC: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x110222BF: push eax */
    eax = esi + ebx; /* 0x110222C0: lea eax, [esi + ebx] */
    PUSH32(esp, eax); /* 0x110222C3: push eax */
    edx = MEM32(ecx); /* 0x110222C4: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x110222C6: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x110222C7: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x50)); /* 0x110222CA: mov ecx, dword ptr [ebp - 0x50] */
    eax = ebp + (-0x48); /* 0x110222CD: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x110222D0: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110222D1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110222D6: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110222D7: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015CA5); /* 0x110222DB: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110222E0: pop ecx */
    ebx = eax; /* 0x110222E1: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110222E3: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x48); /* 0x110222E7: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x44)) = ebx; /* 0x110222EA: mov dword ptr [ebp - 0x44], ebx */
    RECOMP_CALL(sub_1100E431); /* 0x110222ED: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x110222F2: lea eax, [ebp - 0x40] */
    ecx = ebx; /* 0x110222F5: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x110222F7: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x110222F8: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110222FD: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x40)); /* 0x11022301: mov ebx, dword ptr [ebp - 0x40] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11022304: mov byte ptr [ebp - 4], 3 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102230D; /* 0x11022308: jae 0x1102230d */
L_1102230A:
    ebx = ebp + (-0x40); /* 0x1102230A: lea ebx, [ebp - 0x40] */
L_1102230D:
    SET_LO8(eax, MEM8(ebx)); /* 0x1102230D: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1102230F: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022357; /* 0x11022311: je 0x11022357 */
L_11022313:
    /* test LO8(eax), LO8(eax) */ /* 0x11022313: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11022357; /* 0x11022315: jle 0x11022357 */
L_11022317:
    ecx = MEM32(ebp + (-0x44)); /* 0x11022317: mov ecx, dword ptr [ebp - 0x44] */
    eax = MEM32(ecx); /* 0x1102231A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102231C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)LO16(eax); /* 0x1102231F: movzx edx, ax */
    MEM32(ebp + (-0x48)) = edx; /* 0x11022322: mov dword ptr [ebp - 0x48], edx */
    goto L_11022351; /* 0x11022325: jmp 0x11022351 */
L_11022327:
    /* test LO8(eax), LO8(eax) */ /* 0x11022327: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11022357; /* 0x11022329: jle 0x11022357 */
L_1102232B:
    ecx = (int32_t)(int8_t)LO8(eax); /* 0x1102232B: movsx ecx, al */
    eax = esi; /* 0x1102232E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11022330: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x11022332: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022357; /* 0x11022334: jae 0x11022357 */
L_11022336:
    PUSH32(esp, edx); /* 0x11022336: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11022337: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x11022339: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x1102233C: push 1 */
    PUSH32(esp, esi); /* 0x1102233E: push esi */
    RECOMP_CALL(sub_1102985D); /* 0x1102233F: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x1; /* 0x11022344: lea eax, [ebx + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x11022347: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102234E; /* 0x1102234A: jle 0x1102234e */
L_1102234C:
    ebx = eax; /* 0x1102234C: mov ebx, eax */
L_1102234E:
    edx = MEM32(ebp + (-0x48)); /* 0x1102234E: mov edx, dword ptr [ebp - 0x48] */
L_11022351:
    SET_LO8(eax, MEM8(ebx)); /* 0x11022351: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11022353: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022327; /* 0x11022355: jne 0x11022327 */
L_11022357:
    ebx = MEM32(ebp + (-0x50)); /* 0x11022357: mov ebx, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x18)); /* 0x1102235A: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1102235D: mov dword ptr [ebp - 0x44], eax */
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x11022360: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11022379; /* 0x11022364: jl 0x11022379 */
L_11022366:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102236E; /* 0x11022366: jg 0x1102236e */
L_11022368:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x11022368: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11022379; /* 0x1102236C: jbe 0x11022379 */
L_1102236E:
    esi = MEM32(ebx + 0x20); /* 0x1102236E: mov esi, dword ptr [ebx + 0x20] */
    /* cmp esi, eax */ /* 0x11022371: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11022379; /* 0x11022373: jbe 0x11022379 */
L_11022375:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11022375: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_1102237B; /* 0x11022377: jmp 0x1102237b */
L_11022379:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11022379: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102237B:
    eax = MEM32(ebx + 0x14); /* 0x1102237B: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x1102237E: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x11022383: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022419; /* 0x11022386: je 0x11022419 */
L_1102238C:
    /* cmp eax, 0x100u */ /* 0x1102238C: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110223D0; /* 0x11022391: je 0x110223d0 */
L_11022393:
    PUSH32(esp, esi); /* 0x11022393: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11022394: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x4C); /* 0x11022397: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102239A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102239D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110223A0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110223A1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225F3); /* 0x110223A4: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110223A9: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110223AB: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110223AE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x110223B0: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x110223B4: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x110223B6: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x110223B9: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x110223BC: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x110223BF: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110223C7; /* 0x110223C2: jae 0x110223c7 */
L_110223C4:
    eax = ebp + (-0x28); /* 0x110223C4: lea eax, [ebp - 0x28] */
L_110223C7:
    PUSH32(esp, edi); /* 0x110223C7: push edi */
    PUSH32(esp, eax); /* 0x110223C8: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x110223C9: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x110223CC: push dword ptr [ecx] */
    goto L_1102242D; /* 0x110223CE: jmp 0x1102242d */
L_110223D0:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x110223D0: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x110223D4: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110223DC; /* 0x110223D7: jae 0x110223dc */
L_110223D9:
    eax = ebp + (-0x28); /* 0x110223D9: lea eax, [ebp - 0x28] */
L_110223DC:
    PUSH32(esp, edi); /* 0x110223DC: push edi */
    PUSH32(esp, eax); /* 0x110223DD: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110223DE: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x4C); /* 0x110223E1: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110223E4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110223E7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110223E8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022596); /* 0x110223EB: call 0x11022596 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110223F0: mov ecx, eax */
    PUSH32(esp, esi); /* 0x110223F2: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110223F3: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x110223F6: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0x10) = eax; /* 0x110223F8: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x110223FB: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = eax; /* 0x110223FE: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + (-0x4C); /* 0x11022401: lea eax, [ebp - 0x4c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x11022404: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x11022407: push dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11022409: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102240A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110225F3); /* 0x1102240D: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11022412: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11022415: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102243C; /* 0x11022417: jmp 0x1102243c */
L_11022419:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11022419: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1102241D: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022425; /* 0x11022420: jae 0x11022425 */
L_11022422:
    eax = ebp + (-0x28); /* 0x11022422: lea eax, [ebp - 0x28] */
L_11022425:
    PUSH32(esp, edi); /* 0x11022425: push edi */
    PUSH32(esp, eax); /* 0x11022426: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11022427: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102242A: push dword ptr [ebp + 0x10] */
L_1102242D:
    eax = ebp + (-0x4C); /* 0x1102242D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11022430: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11022431: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11022596); /* 0x11022434: call 0x11022596 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022439: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1102243C:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1102243C: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x11022440: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x11022442: mov dword ptr [ebp + 0x10], ecx */
    edx = MEM32(eax + 0x4); /* 0x11022445: mov edx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x11022448: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + 0x14) = edx; /* 0x1102244B: mov dword ptr [ebp + 0x14], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022453; /* 0x1102244E: jae 0x11022453 */
L_11022450:
    eax = ebp + (-0x28); /* 0x11022450: lea eax, [ebp - 0x28] */
L_11022453:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) - edi; /* 0x11022453: sub dword ptr [ebp - 0x44], edi */
    _flag_k = FK_CMP;
    eax = eax + edi * 2; /* 0x11022456: lea eax, [eax + edi*2] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x11022459: push dword ptr [ebp - 0x44] */
    edi = MEM32(ebp + 0x8); /* 0x1102245C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102245F: push eax */
    PUSH32(esp, edx); /* 0x11022460: push edx */
    PUSH32(esp, ecx); /* 0x11022461: push ecx */
    eax = ebp + (-0x54); /* 0x11022462: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x11022465: push eax */
    PUSH32(esp, edi); /* 0x11022466: push edi */
    RECOMP_CALL(sub_11022596); /* 0x11022467: call 0x11022596 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102246C: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102246D: push dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x58)); /* 0x11022470: mov esi, dword ptr [ebp - 0x58] */
    ecx = MEM32(eax); /* 0x11022473: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x10) = ecx; /* 0x11022475: mov dword ptr [ebp + 0x10], ecx */
    eax = MEM32(eax + 0x4); /* 0x11022478: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0; /* 0x1102247B: and dword ptr [ebx + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) & 0; /* 0x1102247F: and dword ptr [ebx + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11022483: push eax */
    PUSH32(esp, ecx); /* 0x11022484: push ecx */
    PUSH32(esp, esi); /* 0x11022485: push esi */
    PUSH32(esp, edi); /* 0x11022486: push edi */
    MEM32(ebp + 0x14) = eax; /* 0x11022487: mov dword ptr [ebp + 0x14], eax */
    RECOMP_CALL(sub_110225F3); /* 0x1102248A: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1102248F: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x11022492: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x11022495: push 0 */
    PUSH32(esp, 1); /* 0x11022497: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11022499: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102249E: push 0 */
    PUSH32(esp, 1); /* 0x110224A0: push 1 */
    ecx = ebp + (-0x28); /* 0x110224A2: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x110224A5: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110224AA: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x110224AC: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110224B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110224B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110224B2u);

L_110224B2:
    PUSH32(esp, ebp); /* 0x110224B2: push ebp */
    ebp = esp; /* 0x110224B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110224B5: push esi */
    PUSH32(esp, edi); /* 0x110224B6: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110224B7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069110)); /* 0x110224BA: call dword ptr [0x11069110] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110224C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x110224C2: push 2 */
    edx = POP32_VAL(esp); /* 0x110224C4: pop edx */
    edi = eax + 0x1; /* 0x110224C5: lea edi, [eax + 1] */
    eax = edi; /* 0x110224C8: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x110224CA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x110224CC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x110224CF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x110224D1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x110224D3: push ecx */
    RECOMP_CALL(sub_110306E8); /* 0x110224D4: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    ecx = edi + edi; /* 0x110224D9: lea ecx, [edi + edi] */
    esi = eax; /* 0x110224DC: mov esi, eax */
    PUSH32(esp, ecx); /* 0x110224DE: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110224DF: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110224E2: push esi */
    RECOMP_CALL(sub_1103B300); /* 0x110224E3: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110224E8: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x110224EB: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x110224ED: pop edi */
    esi = POP32_VAL(esp); /* 0x110224EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x110224EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110224F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_110224F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110224F1u);

L_110224F1:
    PUSH32(esp, esi); /* 0x110224F1: push esi */
    esi = ecx; /* 0x110224F2: mov esi, ecx */
    ecx = MEM32(esi); /* 0x110224F4: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x110224F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022509; /* 0x110224F8: je 0x11022509 */
L_110224FA:
    RECOMP_CALL(sub_11010336); /* 0x110224FA: call 0x11010336 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110224FF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022509; /* 0x11022502: je 0x11022509 */
L_11022504:
    MEM8(esi + 0x5) = (uint8_t)(LO8(eax)); /* 0x11022504: mov byte ptr [esi + 5], al */
    goto L_1102250C; /* 0x11022507: jmp 0x1102250c */
L_11022509:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11022509: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102250C:
    SET_LO8(eax, MEM8(esi + 0x5)); /* 0x1102250C: mov al, byte ptr [esi + 5] */
    MEM8(esi + 0x4) = (uint8_t)(1); /* 0x1102250F: mov byte ptr [esi + 4], 1 */
    esi = POP32_VAL(esp); /* 0x11022513: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022514: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022515u);

L_11022515:
    PUSH32(esp, esi); /* 0x11022515: push esi */
    esi = ecx; /* 0x11022516: mov esi, ecx */
    ecx = MEM32(esi); /* 0x11022518: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1102251A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022536; /* 0x1102251C: je 0x11022536 */
L_1102251E:
    RECOMP_CALL(sub_11010398); /* 0x1102251E: call 0x11010398 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11022523: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x11022526: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102252B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022536; /* 0x1102252E: je 0x11022536 */
L_11022530:
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x11022530: mov word ptr [esi + 6], ax */
    goto L_11022539; /* 0x11022534: jmp 0x11022539 */
L_11022536:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11022536: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022539:
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x11022539: mov ax, word ptr [esi + 6] */
    MEM8(esi + 0x4) = (uint8_t)(1); /* 0x1102253D: mov byte ptr [esi + 4], 1 */
    esi = POP32_VAL(esp); /* 0x11022541: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022542: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022543(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022543u);

L_11022543:
    eax = MEM32(ecx + 0x20); /* 0x11022543: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11022546: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x11022548: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022551; /* 0x1102254A: je 0x11022551 */
L_1102254C:
    eax = MEM32(ecx + 0x30); /* 0x1102254C: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(eax); /* 0x1102254F: mov edx, dword ptr [eax] */
L_11022551:
    eax = edx; /* 0x11022551: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11022553: cdq  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022554: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022555u);

L_11022555:
    eax = MEM32(ecx + 0x30); /* 0x11022555: mov eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x11022558: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x20); /* 0x1102255A: mov edx, dword ptr [ecx + 0x20] */
    eax = MEM32(edx); /* 0x1102255D: mov eax, dword ptr [edx] */
    ecx = eax + 0x2; /* 0x1102255F: lea ecx, [eax + 2] */
    MEM32(edx) = ecx; /* 0x11022562: mov dword ptr [edx], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022564: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022565(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022565u);

L_11022565:
    PUSH32(esp, ebp); /* 0x11022565: push ebp */
    ebp = esp; /* 0x11022566: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11022568: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x11022569: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x1102256C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022585; /* 0x1102256E: je 0x11022585 */
L_11022570:
    PUSH32(esp, edi); /* 0x11022570: push edi */
    edi = MEM32(ebp + 0x18); /* 0x11022571: mov edi, dword ptr [ebp + 0x18] */
L_11022574:
    eax = (uint32_t)MEM8(edi); /* 0x11022574: movzx eax, byte ptr [edi] */
    ecx = ebp + 0x10; /* 0x11022577: lea ecx, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1102257A: push eax */
    RECOMP_CALL(sub_1101776A); /* 0x1102257B: call 0x1101776a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11022580: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11022581: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11022574; /* 0x11022582: jne 0x11022574 */
L_11022584:
    edi = POP32_VAL(esp); /* 0x11022584: pop edi */
L_11022585:
    eax = MEM32(ebp + 0xC); /* 0x11022585: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x11022588: mov ecx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x1102258B: pop esi */
    MEM32(eax) = ecx; /* 0x1102258C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1102258E: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x11022591: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x11022594: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022595: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022596(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022596u);

L_11022596:
    PUSH32(esp, ebp); /* 0x11022596: push ebp */
    ebp = esp; /* 0x11022597: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11022599: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x1102259A: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x1102259D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110225B8; /* 0x1102259F: je 0x110225b8 */
L_110225A1:
    PUSH32(esp, edi); /* 0x110225A1: push edi */
    edi = MEM32(ebp + 0x18); /* 0x110225A2: mov edi, dword ptr [ebp + 0x18] */
L_110225A5:
    eax = (uint32_t)MEM16(edi); /* 0x110225A5: movzx eax, word ptr [edi] */
    ecx = ebp + 0x10; /* 0x110225A8: lea ecx, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110225AB: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x110225AC: call 0x1101778e */
    RECOMP_FLAGS_IN();
    edi = edi + 0x2; /* 0x110225B1: lea edi, [edi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110225B4: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110225A5; /* 0x110225B5: jne 0x110225a5 */
L_110225B7:
    edi = POP32_VAL(esp); /* 0x110225B7: pop edi */
L_110225B8:
    eax = MEM32(ebp + 0xC); /* 0x110225B8: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x110225BB: mov ecx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x110225BE: pop esi */
    MEM32(eax) = ecx; /* 0x110225BF: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x110225C1: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x110225C4: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x110225C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110225C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101E218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101E218u);

L_1101E218:
    PUSH32(esp, 0x6Cu); /* 0x1101E218: push 0x6c */
    eax = 0x1103E28Eu; /* 0x1101E21A: mov eax, 0x1103e28e */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101E21F: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x18); /* 0x1101E224: mov esi, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0xC); /* 0x1101E227: mov edx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x14); /* 0x1101E22A: mov ebx, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x10); /* 0x1101E22D: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0x14); /* 0x1101E230: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(ebp + 0x1C); /* 0x1101E233: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x1101E236: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x6C)) = edx; /* 0x1101E23B: mov dword ptr [ebp - 0x6c], edx */
    MEM32(ebp + (-0x58)) = ebx; /* 0x1101E23E: mov dword ptr [ebp - 0x58], ebx */
    /* cmp eax, 0x3000u */ /* 0x1101E241: cmp eax, 0x3000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E25D; /* 0x1101E246: jne 0x1101e25d */
L_1101E248:
    PUSH32(esp, ecx); /* 0x1101E248: push ecx */
    PUSH32(esp, esi); /* 0x1101E249: push esi */
    PUSH32(esp, ebx); /* 0x1101E24A: push ebx */
    PUSH32(esp, edi); /* 0x1101E24B: push edi */
    PUSH32(esp, edx); /* 0x1101E24C: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101E24D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1101F376); /* 0x1101E250: call 0x1101f376 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1101E255: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_1101E7BA; /* 0x1101E258: jmp 0x1101e7ba */
L_1101E25D:
    eax = ebp + (-0x78); /* 0x1101E25D: lea eax, [ebp - 0x78] */
    ecx = esi; /* 0x1101E260: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1101E262: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101E263: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101E268: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101E26C: push eax */
    RECOMP_CALL(sub_11015B71); /* 0x1101E26D: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101E272: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1101E276: pop ecx */
    ecx = ebp + (-0x78); /* 0x1101E277: lea ecx, [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = eax; /* 0x1101E27A: mov dword ptr [ebp - 0x70], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101E27D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x70)); /* 0x1101E282: mov ecx, dword ptr [ebp - 0x70] */
    eax = ebp + (-0x50); /* 0x1101E285: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1101E288: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1101E289: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x6C)); /* 0x1101E28E: mov eax, dword ptr [ebp - 0x6c] */
    ecx = esi; /* 0x1101E291: mov ecx, esi */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1101E293: mov dword ptr [ebp - 0x5c], eax */
    eax = ebp + (-0x68); /* 0x1101E296: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1101E299: push eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101E29A: mov dword ptr [ebp - 4], 1 */
    MEM8(ebp + (-0x53)) = (uint8_t)(0); /* 0x1101E2A1: mov byte ptr [ebp - 0x53], 0 */
    RECOMP_CALL(sub_1100F94A); /* 0x1101E2A5: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101E2AA: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101E2AB: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11010F0A); /* 0x1101E2AF: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E2B4: pop ecx */
    ecx = ebp + (-0x68); /* 0x1101E2B5: lea ecx, [ebp - 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101E2B8: mov byte ptr [ebp - 4], 1 */
    esi = eax; /* 0x1101E2BC: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101E2BE: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1101E2C3: mov edx, dword ptr [esi] */
    eax = ebp + (-0x20); /* 0x1101E2C5: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1101E2C8: push eax */
    PUSH32(esp, 0x110022AEu); /* 0x1101E2C9: push 0x110022ae */
    PUSH32(esp, 0x110022A0u); /* 0x1101E2CE: push 0x110022a0 */
    ecx = esi; /* 0x1101E2D3: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1101E2D5: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101E2D8: push ebx */
    ecx = edi; /* 0x1101E2D9: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E2DB: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E2E0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E32A; /* 0x1101E2E2: jne 0x1101e32a */
L_1101E2E4:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101E2E4: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E2F0; /* 0x1101E2E7: jne 0x1101e2f0 */
L_1101E2E9:
    ecx = edi; /* 0x1101E2E9: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E2EB: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E2F0:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E2F0: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x15)) */ /* 0x1101E2F3: cmp al, byte ptr [ebp - 0x15] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x15))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E30D; /* 0x1101E2F6: jne 0x1101e30d */
L_1101E2F8:
    eax = MEM32(ebp + (-0x6C)); /* 0x1101E2F8: mov eax, dword ptr [ebp - 0x6c] */
    MEM8(eax) = (uint8_t)(0x2Bu); /* 0x1101E2FB: mov byte ptr [eax], 0x2b */
L_1101E2FE:
    esi = eax + 0x1; /* 0x1101E2FE: lea esi, [eax + 1] */
    ecx = edi; /* 0x1101E301: mov ecx, edi */
    MEM32(ebp + (-0x5C)) = esi; /* 0x1101E303: mov dword ptr [ebp - 0x5c], esi */
    RECOMP_CALL(sub_11021816); /* 0x1101E306: call 0x11021816 */
    RECOMP_FLAGS_IN();
    goto L_1101E32D; /* 0x1101E30B: jmp 0x1101e32d */
L_1101E30D:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E30D: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E31A; /* 0x1101E311: jne 0x1101e31a */
L_1101E313:
    ecx = edi; /* 0x1101E313: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E315: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E31A:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E31A: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x16)) */ /* 0x1101E31D: cmp al, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x16))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E32A; /* 0x1101E320: jne 0x1101e32a */
L_1101E322:
    eax = MEM32(ebp + (-0x6C)); /* 0x1101E322: mov eax, dword ptr [ebp - 0x6c] */
    MEM8(eax) = (uint8_t)(0x2Du); /* 0x1101E325: mov byte ptr [eax], 0x2d */
    RECOMP_BACKEDGE();
    goto L_1101E2FE; /* 0x1101E328: jmp 0x1101e2fe */
L_1101E32A:
    esi = MEM32(ebp + (-0x5C)); /* 0x1101E32A: mov esi, dword ptr [ebp - 0x5c] */
L_1101E32D:
    eax = MEM32(ebp + (-0x50)); /* 0x1101E32D: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1101E330: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x3C)), 0x10u */ /* 0x1101E332: cmp dword ptr [ebp - 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x51)) = (uint8_t)(LO8(ecx)); /* 0x1101E336: mov byte ptr [ebp - 0x51], cl */
    MEM32(ebp + (-0x64)) = ecx; /* 0x1101E339: mov dword ptr [ebp - 0x64], ecx */
    MEM32(ebp + (-0x60)) = ecx; /* 0x1101E33C: mov dword ptr [ebp - 0x60], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E344; /* 0x1101E33F: jae 0x1101e344 */
L_1101E341:
    eax = ebp + (-0x50); /* 0x1101E341: lea eax, [ebp - 0x50] */
L_1101E344:
    MEM32(ebp + (-0x68)) = eax; /* 0x1101E344: mov dword ptr [ebp - 0x68], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x1101E347: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101E349: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E4F8; /* 0x1101E34B: je 0x1101e4f8 */
L_1101E351:
    /* test LO8(eax), LO8(eax) */ /* 0x1101E351: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101E4F8; /* 0x1101E353: jle 0x1101e4f8 */
L_1101E359:
    /* cmp MEM32(ebp + (-0x40)), ecx */ /* 0x1101E359: cmp dword ptr [ebp - 0x40], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E363; /* 0x1101E35C: jne 0x1101e363 */
L_1101E35E:
    MEM8(ebp + (-0x52)) = (uint8_t)(LO8(ecx)); /* 0x1101E35E: mov byte ptr [ebp - 0x52], cl */
    goto L_1101E370; /* 0x1101E361: jmp 0x1101e370 */
L_1101E363:
    ecx = MEM32(ebp + (-0x70)); /* 0x1101E363: mov ecx, dword ptr [ebp - 0x70] */
    eax = MEM32(ecx); /* 0x1101E366: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101E368: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x52)) = (uint8_t)(LO8(eax)); /* 0x1101E36B: mov byte ptr [ebp - 0x52], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1101E36E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101E370:
    PUSH32(esp, ecx); /* 0x1101E370: push ecx */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1101E371: mov dword ptr [ebp - 0x28], ecx */
    MEM8(ebp + (-0x38)) = (uint8_t)(LO8(ecx)); /* 0x1101E374: mov byte ptr [ebp - 0x38], cl */
    ecx = ebp + (-0x38); /* 0x1101E377: lea ecx, [ebp - 0x38] */
    PUSH32(esp, 1); /* 0x1101E37A: push 1 */
    MEM32(ebp + (-0x24)) = 0xFu; /* 0x1101E37C: mov dword ptr [ebp - 0x24], 0xf */
    RECOMP_CALL(sub_11014076); /* 0x1101E383: call 0x11014076 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101E388: push dword ptr [ebp - 0x58] */
    ecx = edi; /* 0x1101E38B: mov ecx, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101E38D: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101E391: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11027871); /* 0x1101E393: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E398: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E48B; /* 0x1101E39A: jne 0x1101e48b */
L_1101E3A0:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E3A0: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E3AD; /* 0x1101E3A4: jne 0x1101e3ad */
L_1101E3A6:
    ecx = edi; /* 0x1101E3A6: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E3A8: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E3AD:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E3AD: mov al, byte ptr [edi + 5] */
    MEM8(ebp + (-0x74)) = (uint8_t)(LO8(eax)); /* 0x1101E3B0: mov byte ptr [ebp - 0x74], al */
    eax = ebp + (-0x20); /* 0x1101E3B3: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x1101E3B6: push dword ptr [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1101E3B9: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101E3BA: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E3BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101E3C0: pop ecx */
    /* cmp eax, 0xAu */ /* 0x1101E3C1: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E411; /* 0x1101E3C4: jae 0x1101e411 */
L_1101E3C6:
    ecx = MEM32(ebp + (-0x64)); /* 0x1101E3C6: mov ecx, dword ptr [ebp - 0x64] */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E3C9: mov byte ptr [ebp - 0x51], 1 */
    /* cmp ecx, 0x24u */ /* 0x1101E3CD: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1101E3D7; /* 0x1101E3D0: jl 0x1101e3d7 */
L_1101E3D2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + 1; /* 0x1101E3D2: inc dword ptr [ebp - 0x60] */
    _flag_k = FK_INC;
    goto L_1101E3EF; /* 0x1101E3D5: jmp 0x1101e3ef */
L_1101E3D7:
    /* test eax, eax */ /* 0x1101E3D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E3DF; /* 0x1101E3D9: jne 0x1101e3df */
L_1101E3DB:
    /* test ecx, ecx */ /* 0x1101E3DB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E3EF; /* 0x1101E3DD: je 0x1101e3ef */
L_1101E3DF:
    SET_LO8(eax, MEM8(eax + 0x110022A0)); /* 0x1101E3DF: mov al, byte ptr [eax + 0x110022a0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101E3E5: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E3E7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101E3E8: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = esi; /* 0x1101E3E9: mov dword ptr [ebp - 0x5c], esi */
    MEM32(ebp + (-0x64)) = ecx; /* 0x1101E3EC: mov dword ptr [ebp - 0x64], ecx */
L_1101E3EF:
    /* cmp MEM32(ebp + (-0x24)), 0x10u */ /* 0x1101E3EF: cmp dword ptr [ebp - 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x38)); /* 0x1101E3F3: mov eax, dword ptr [ebp - 0x38] */
    ecx = eax; /* 0x1101E3F6: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E3FD; /* 0x1101E3F8: jae 0x1101e3fd */
L_1101E3FA:
    ecx = ebp + (-0x38); /* 0x1101E3FA: lea ecx, [ebp - 0x38] */
L_1101E3FD:
    /* cmp MEM8(ecx + ebx), 0x7Fu */ /* 0x1101E3FD: cmp byte ptr [ecx + ebx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + ebx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E455; /* 0x1101E401: je 0x1101e455 */
L_1101E403:
    /* cmp MEM32(ebp + (-0x24)), 0x10u */ /* 0x1101E403: cmp dword ptr [ebp - 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E40C; /* 0x1101E407: jae 0x1101e40c */
L_1101E409:
    eax = ebp + (-0x38); /* 0x1101E409: lea eax, [ebp - 0x38] */
L_1101E40C:
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + ebx) = (uint8_t)(MEM8(eax + ebx) + 1); /* 0x1101E40C: inc byte ptr [eax + ebx] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1101E455; /* 0x1101E40F: jmp 0x1101e455 */
L_1101E411:
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E411: mov ecx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x38)); /* 0x1101E414: mov edx, dword ptr [ebp - 0x38] */
    eax = edx; /* 0x1101E417: mov eax, edx */
    /* cmp ecx, 0x10u */ /* 0x1101E419: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E421; /* 0x1101E41C: jae 0x1101e421 */
L_1101E41E:
    eax = ebp + (-0x38); /* 0x1101E41E: lea eax, [ebp - 0x38] */
L_1101E421:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1101E421: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E474; /* 0x1101E425: je 0x1101e474 */
L_1101E427:
    /* cmp MEM8(ebp + (-0x52)), 0 */ /* 0x1101E427: cmp byte ptr [ebp - 0x52], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x52))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E474; /* 0x1101E42B: je 0x1101e474 */
L_1101E42D:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E42D: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E440; /* 0x1101E431: jne 0x1101e440 */
L_1101E433:
    ecx = edi; /* 0x1101E433: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E435: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E43A: mov ecx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x38)); /* 0x1101E43D: mov edx, dword ptr [ebp - 0x38] */
L_1101E440:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E440: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x52)) */ /* 0x1101E443: cmp al, byte ptr [ebp - 0x52] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x52))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E474; /* 0x1101E446: jne 0x1101e474 */
L_1101E448:
    PUSH32(esp, 0); /* 0x1101E448: push 0 */
    PUSH32(esp, 1); /* 0x1101E44A: push 1 */
    ecx = ebp + (-0x38); /* 0x1101E44C: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_11014015); /* 0x1101E44F: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E454: inc ebx */
    _flag_k = FK_INC;
L_1101E455:
    ecx = edi; /* 0x1101E455: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x1101E457: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101E45C: push dword ptr [ebp - 0x58] */
    ecx = edi; /* 0x1101E45F: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E461: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E466: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E3A0; /* 0x1101E468: je 0x1101e3a0 */
L_1101E46E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E46E: mov ecx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x38)); /* 0x1101E471: mov edx, dword ptr [ebp - 0x38] */
L_1101E474:
    /* test ebx, ebx */ /* 0x1101E474: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E491; /* 0x1101E476: je 0x1101e491 */
L_1101E478:
    eax = edx; /* 0x1101E478: mov eax, edx */
    /* cmp ecx, 0x10u */ /* 0x1101E47A: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E482; /* 0x1101E47D: jae 0x1101e482 */
L_1101E47F:
    eax = ebp + (-0x38); /* 0x1101E47F: lea eax, [ebp - 0x38] */
L_1101E482:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1101E482: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101E4DF; /* 0x1101E486: jle 0x1101e4df */
L_1101E488:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E488: inc ebx */
    _flag_k = FK_INC;
    goto L_1101E491; /* 0x1101E489: jmp 0x1101e491 */
L_1101E48B:
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E48B: mov ecx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x38)); /* 0x1101E48E: mov edx, dword ptr [ebp - 0x38] */
L_1101E491:
    eax = MEM32(ebp + (-0x68)); /* 0x1101E491: mov eax, dword ptr [ebp - 0x68] */
L_1101E494:
    /* test ebx, ebx */ /* 0x1101E494: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E4E3; /* 0x1101E496: je 0x1101e4e3 */
L_1101E498:
    SET_LO8(eax, MEM8(eax)); /* 0x1101E498: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x52)) = (uint8_t)(LO8(eax)); /* 0x1101E49A: mov byte ptr [ebp - 0x52], al */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101E49D: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E4E3; /* 0x1101E49F: je 0x1101e4e3 */
L_1101E4A1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1101E4A1: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1101E4B9; /* 0x1101E4A2: je 0x1101e4b9 */
L_1101E4A4:
    eax = edx; /* 0x1101E4A4: mov eax, edx */
    /* cmp ecx, 0x10u */ /* 0x1101E4A6: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E4AE; /* 0x1101E4A9: jae 0x1101e4ae */
L_1101E4AB:
    eax = ebp + (-0x38); /* 0x1101E4AB: lea eax, [ebp - 0x38] */
L_1101E4AE:
    SET_LO8(ecx, MEM8(ebp + (-0x52))); /* 0x1101E4AE: mov cl, byte ptr [ebp - 0x52] */
    /* cmp LO8(ecx), MEM8(eax + ebx) */ /* 0x1101E4B1: cmp cl, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E4B4: mov ecx, dword ptr [ebp - 0x24] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E4DF; /* 0x1101E4B7: jne 0x1101e4df */
L_1101E4B9:
    /* test ebx, ebx */ /* 0x1101E4B9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E4D1; /* 0x1101E4BB: jne 0x1101e4d1 */
L_1101E4BD:
    eax = edx; /* 0x1101E4BD: mov eax, edx */
    /* cmp ecx, 0x10u */ /* 0x1101E4BF: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E4C7; /* 0x1101E4C2: jae 0x1101e4c7 */
L_1101E4C4:
    eax = ebp + (-0x38); /* 0x1101E4C4: lea eax, [ebp - 0x38] */
L_1101E4C7:
    SET_LO8(ecx, MEM8(ebp + (-0x52))); /* 0x1101E4C7: mov cl, byte ptr [ebp - 0x52] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1101E4CA: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + (-0x24)); /* 0x1101E4CC: mov ecx, dword ptr [ebp - 0x24] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1101E4DF; /* 0x1101E4CF: jl 0x1101e4df */
L_1101E4D1:
    eax = MEM32(ebp + (-0x68)); /* 0x1101E4D1: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101E4D4: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0 */ /* 0x1101E4D5: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101E491; /* 0x1101E4D8: jle 0x1101e491 */
L_1101E4DA:
    MEM32(ebp + (-0x68)) = eax; /* 0x1101E4DA: mov dword ptr [ebp - 0x68], eax */
    RECOMP_BACKEDGE();
    goto L_1101E494; /* 0x1101E4DD: jmp 0x1101e494 */
L_1101E4DF:
    MEM8(ebp + (-0x53)) = (uint8_t)(1); /* 0x1101E4DF: mov byte ptr [ebp - 0x53], 1 */
L_1101E4E3:
    PUSH32(esp, 0); /* 0x1101E4E3: push 0 */
    PUSH32(esp, 1); /* 0x1101E4E5: push 1 */
    ecx = ebp + (-0x38); /* 0x1101E4E7: lea ecx, [ebp - 0x38] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101E4EA: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101E4EE: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x58)); /* 0x1101E4F3: mov ebx, dword ptr [ebp - 0x58] */
    goto L_1101E562; /* 0x1101E4F6: jmp 0x1101e562 */
L_1101E4F8:
    PUSH32(esp, ebx); /* 0x1101E4F8: push ebx */
    ecx = edi; /* 0x1101E4F9: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E4FB: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E500: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E575; /* 0x1101E502: jne 0x1101e575 */
L_1101E504:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E504: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E511; /* 0x1101E508: jne 0x1101e511 */
L_1101E50A:
    ecx = edi; /* 0x1101E50A: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E50C: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E511:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101E511: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101E515: push eax */
    eax = ebp + (-0x20); /* 0x1101E516: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1101E519: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101E51A: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E51F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101E520: pop ecx */
    /* cmp eax, 0xAu */ /* 0x1101E521: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E55F; /* 0x1101E524: jae 0x1101e55f */
L_1101E526:
    ecx = MEM32(ebp + (-0x64)); /* 0x1101E526: mov ecx, dword ptr [ebp - 0x64] */
    /* cmp ecx, 0x24u */ /* 0x1101E529: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1101E533; /* 0x1101E52C: jl 0x1101e533 */
L_1101E52E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + 1; /* 0x1101E52E: inc dword ptr [ebp - 0x60] */
    _flag_k = FK_INC;
    goto L_1101E548; /* 0x1101E531: jmp 0x1101e548 */
L_1101E533:
    /* test eax, eax */ /* 0x1101E533: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E53B; /* 0x1101E535: jne 0x1101e53b */
L_1101E537:
    /* test ecx, ecx */ /* 0x1101E537: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E548; /* 0x1101E539: je 0x1101e548 */
L_1101E53B:
    SET_LO8(eax, MEM8(eax + 0x110022A0)); /* 0x1101E53B: mov al, byte ptr [eax + 0x110022a0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101E541: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E543: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101E544: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ecx; /* 0x1101E545: mov dword ptr [ebp - 0x64], ecx */
L_1101E548:
    ecx = edi; /* 0x1101E548: mov ecx, edi */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E54A: mov byte ptr [ebp - 0x51], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101E54E: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101E553: push ebx */
    ecx = edi; /* 0x1101E554: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E556: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E55B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E504; /* 0x1101E55D: je 0x1101e504 */
L_1101E55F:
    MEM32(ebp + (-0x5C)) = esi; /* 0x1101E55F: mov dword ptr [ebp - 0x5c], esi */
L_1101E562:
    /* cmp MEM8(ebp + (-0x51)), 0 */ /* 0x1101E562: cmp byte ptr [ebp - 0x51], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x51))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E575; /* 0x1101E566: je 0x1101e575 */
L_1101E568:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x1101E568: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E575; /* 0x1101E56C: jne 0x1101e575 */
L_1101E56E:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101E56E: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E571: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = esi; /* 0x1101E572: mov dword ptr [ebp - 0x5c], esi */
L_1101E575:
    PUSH32(esp, ebx); /* 0x1101E575: push ebx */
    ecx = edi; /* 0x1101E576: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E578: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E57D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E5B6; /* 0x1101E57F: jne 0x1101e5b6 */
L_1101E581:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101E581: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E58D; /* 0x1101E584: jne 0x1101e58d */
L_1101E586:
    ecx = edi; /* 0x1101E586: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E588: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E58D:
    ecx = MEM32(ebp + (-0x70)); /* 0x1101E58D: mov ecx, dword ptr [ebp - 0x70] */
    SET_LO8(ebx, MEM8(edi + 0x5)); /* 0x1101E590: mov bl, byte ptr [edi + 5] */
    eax = MEM32(ecx); /* 0x1101E593: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101E595: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(ebx), LO8(eax) */ /* 0x1101E598: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E5B3; /* 0x1101E59A: jne 0x1101e5b3 */
L_1101E59C:
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1101E59C: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1101E5A2: mov ecx, edi */
    eax = MEM32(eax); /* 0x1101E5A4: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1101E5A6: mov al, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101E5A8: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E5AA: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = esi; /* 0x1101E5AB: mov dword ptr [ebp - 0x5c], esi */
    RECOMP_CALL(sub_11021816); /* 0x1101E5AE: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101E5B3:
    ebx = MEM32(ebp + (-0x58)); /* 0x1101E5B3: mov ebx, dword ptr [ebp - 0x58] */
L_1101E5B6:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x1101E5B6: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E655; /* 0x1101E5BA: jne 0x1101e655 */
L_1101E5C0:
    PUSH32(esp, ebx); /* 0x1101E5C0: push ebx */
    ecx = edi; /* 0x1101E5C1: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E5C3: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E5C8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E602; /* 0x1101E5CA: jne 0x1101e602 */
L_1101E5CC:
    esi = MEM32(ebp + (-0x60)); /* 0x1101E5CC: mov esi, dword ptr [ebp - 0x60] */
L_1101E5CF:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E5CF: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E5DC; /* 0x1101E5D3: jne 0x1101e5dc */
L_1101E5D5:
    ecx = edi; /* 0x1101E5D5: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E5D7: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E5DC:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E5DC: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x20)) */ /* 0x1101E5DF: cmp al, byte ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x20))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E5FC; /* 0x1101E5E2: jne 0x1101e5fc */
L_1101E5E4:
    ecx = edi; /* 0x1101E5E4: mov ecx, edi */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E5E6: mov byte ptr [ebp - 0x51], 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1101E5EA: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_11021816); /* 0x1101E5EB: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101E5F0: push ebx */
    ecx = edi; /* 0x1101E5F1: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E5F3: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E5F8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E5CF; /* 0x1101E5FA: je 0x1101e5cf */
L_1101E5FC:
    MEM32(ebp + (-0x60)) = esi; /* 0x1101E5FC: mov dword ptr [ebp - 0x60], esi */
    esi = MEM32(ebp + (-0x5C)); /* 0x1101E5FF: mov esi, dword ptr [ebp - 0x5c] */
L_1101E602:
    eax = MEM32(ebp + (-0x60)); /* 0x1101E602: mov eax, dword ptr [ebp - 0x60] */
    /* test eax, eax */ /* 0x1101E605: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1101E655; /* 0x1101E607: jns 0x1101e655 */
L_1101E609:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101E609: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E60C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101E60D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = eax; /* 0x1101E60E: mov dword ptr [ebp - 0x60], eax */
    goto L_1101E655; /* 0x1101E611: jmp 0x1101e655 */
L_1101E613:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E613: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E620; /* 0x1101E617: jne 0x1101e620 */
L_1101E619:
    ecx = edi; /* 0x1101E619: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E61B: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E620:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101E620: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101E624: push eax */
    eax = ebp + (-0x20); /* 0x1101E625: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1101E628: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101E629: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E62E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101E62F: pop ecx */
    /* cmp eax, 0xAu */ /* 0x1101E630: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E661; /* 0x1101E633: jae 0x1101e661 */
L_1101E635:
    ecx = MEM32(ebp + (-0x64)); /* 0x1101E635: mov ecx, dword ptr [ebp - 0x64] */
    /* cmp ecx, 0x24u */ /* 0x1101E638: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1101E64A; /* 0x1101E63B: jge 0x1101e64a */
L_1101E63D:
    SET_LO8(eax, MEM8(eax + 0x110022A0)); /* 0x1101E63D: mov al, byte ptr [eax + 0x110022a0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101E643: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E645: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101E646: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ecx; /* 0x1101E647: mov dword ptr [ebp - 0x64], ecx */
L_1101E64A:
    ecx = edi; /* 0x1101E64A: mov ecx, edi */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E64C: mov byte ptr [ebp - 0x51], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101E650: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101E655:
    PUSH32(esp, ebx); /* 0x1101E655: push ebx */
    ecx = edi; /* 0x1101E656: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E658: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E65D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E613; /* 0x1101E65F: je 0x1101e613 */
L_1101E661:
    SET_LO8(eax, MEM8(ebp + (-0x51))); /* 0x1101E661: mov al, byte ptr [ebp - 0x51] */
    /* test LO8(eax), LO8(eax) */ /* 0x1101E664: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E79B; /* 0x1101E666: je 0x1101e79b */
L_1101E66C:
    PUSH32(esp, ebx); /* 0x1101E66C: push ebx */
    ecx = edi; /* 0x1101E66D: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E66F: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E674: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E798; /* 0x1101E676: jne 0x1101e798 */
L_1101E67C:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101E67C: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E688; /* 0x1101E67F: jne 0x1101e688 */
L_1101E681:
    ecx = edi; /* 0x1101E681: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E683: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E688:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E688: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x13)) */ /* 0x1101E68B: cmp al, byte ptr [ebp - 0x13] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x13))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E6A9; /* 0x1101E68E: je 0x1101e6a9 */
L_1101E690:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E690: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E69D; /* 0x1101E694: jne 0x1101e69d */
L_1101E696:
    ecx = edi; /* 0x1101E696: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E698: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E69D:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E69D: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x14)) */ /* 0x1101E6A0: cmp al, byte ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x14))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E798; /* 0x1101E6A3: jne 0x1101e798 */
L_1101E6A9:
    MEM8(esi) = (uint8_t)(0x65u); /* 0x1101E6A9: mov byte ptr [esi], 0x65 */
    ecx = edi; /* 0x1101E6AC: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E6AE: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x1101E6AF: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101E6B4: push dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101E6B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x51)) = (uint8_t)(0); /* 0x1101E6B9: mov byte ptr [ebp - 0x51], 0 */
    ecx = edi; /* 0x1101E6BD: mov ecx, edi */
    MEM32(ebp + (-0x74)) = ebx; /* 0x1101E6BF: mov dword ptr [ebp - 0x74], ebx */
    RECOMP_CALL(sub_11027871); /* 0x1101E6C2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E6C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E703; /* 0x1101E6C9: jne 0x1101e703 */
L_1101E6CB:
    /* cmp MEM8(edi + 0x4), LO8(ebx) */ /* 0x1101E6CB: cmp byte ptr [edi + 4], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E6D7; /* 0x1101E6CE: jne 0x1101e6d7 */
L_1101E6D0:
    ecx = edi; /* 0x1101E6D0: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E6D2: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E6D7:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E6D7: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x15)) */ /* 0x1101E6DA: cmp al, byte ptr [ebp - 0x15] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x15))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E6E4; /* 0x1101E6DD: jne 0x1101e6e4 */
L_1101E6DF:
    MEM8(esi) = (uint8_t)(0x2Bu); /* 0x1101E6DF: mov byte ptr [esi], 0x2b */
    goto L_1101E6FB; /* 0x1101E6E2: jmp 0x1101e6fb */
L_1101E6E4:
    /* cmp MEM8(edi + 0x4), LO8(ebx) */ /* 0x1101E6E4: cmp byte ptr [edi + 4], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E6F0; /* 0x1101E6E7: jne 0x1101e6f0 */
L_1101E6E9:
    ecx = edi; /* 0x1101E6E9: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E6EB: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E6F0:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E6F0: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x16)) */ /* 0x1101E6F3: cmp al, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x16))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E703; /* 0x1101E6F6: jne 0x1101e703 */
L_1101E6F8:
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1101E6F8: mov byte ptr [esi], 0x2d */
L_1101E6FB:
    ecx = edi; /* 0x1101E6FB: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E6FD: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x1101E6FE: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101E703:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101E703: push dword ptr [ebp - 0x58] */
    ecx = edi; /* 0x1101E706: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E708: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E70D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E74D; /* 0x1101E70F: jne 0x1101e74d */
L_1101E711:
    ebx = MEM32(ebp + (-0x58)); /* 0x1101E711: mov ebx, dword ptr [ebp - 0x58] */
L_1101E714:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101E714: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E721; /* 0x1101E718: jne 0x1101e721 */
L_1101E71A:
    ecx = edi; /* 0x1101E71A: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E71C: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E721:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101E721: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x20)) */ /* 0x1101E724: cmp al, byte ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x20))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E740; /* 0x1101E727: jne 0x1101e740 */
L_1101E729:
    ecx = edi; /* 0x1101E729: mov ecx, edi */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E72B: mov byte ptr [ebp - 0x51], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101E72F: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101E734: push ebx */
    ecx = edi; /* 0x1101E735: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E737: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E73C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101E714; /* 0x1101E73E: je 0x1101e714 */
L_1101E740:
    /* cmp MEM8(ebp + (-0x51)), 0 */ /* 0x1101E740: cmp byte ptr [ebp - 0x51], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x51))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + (-0x74)); /* 0x1101E744: mov ebx, dword ptr [ebp - 0x74] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101E74D; /* 0x1101E747: je 0x1101e74d */
L_1101E749:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101E749: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E74C: inc esi */
    _flag_k = FK_INC;
L_1101E74D:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1101E74D: push dword ptr [ebp - 0x58] */
    ecx = edi; /* 0x1101E750: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101E752: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101E757: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E798; /* 0x1101E759: jne 0x1101e798 */
L_1101E75B:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101E75B: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E767; /* 0x1101E75E: jne 0x1101e767 */
L_1101E760:
    ecx = edi; /* 0x1101E760: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101E762: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101E767:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101E767: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101E76B: push eax */
    eax = ebp + (-0x20); /* 0x1101E76C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1101E76F: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101E770: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101E775: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101E776: pop ecx */
    /* cmp eax, 0xAu */ /* 0x1101E777: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101E798; /* 0x1101E77A: jae 0x1101e798 */
L_1101E77C:
    /* cmp ebx, 8 */ /* 0x1101E77C: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1101E78B; /* 0x1101E77F: jge 0x1101e78b */
L_1101E781:
    SET_LO8(eax, MEM8(eax + 0x110022A0)); /* 0x1101E781: mov al, byte ptr [eax + 0x110022a0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101E787: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101E789: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101E78A: inc ebx */
    _flag_k = FK_INC;
L_1101E78B:
    ecx = edi; /* 0x1101E78B: mov ecx, edi */
    MEM8(ebp + (-0x51)) = (uint8_t)(1); /* 0x1101E78D: mov byte ptr [ebp - 0x51], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101E791: call 0x11021816 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101E74D; /* 0x1101E796: jmp 0x1101e74d */
L_1101E798:
    SET_LO8(eax, MEM8(ebp + (-0x51))); /* 0x1101E798: mov al, byte ptr [ebp - 0x51] */
L_1101E79B:
    /* cmp MEM8(ebp + (-0x53)), 0 */ /* 0x1101E79B: cmp byte ptr [ebp - 0x53], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x53))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101E7A5; /* 0x1101E79F: jne 0x1101e7a5 */
L_1101E7A1:
    /* test LO8(eax), LO8(eax) */ /* 0x1101E7A1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101E7A8; /* 0x1101E7A3: jne 0x1101e7a8 */
L_1101E7A5:
    esi = MEM32(ebp + (-0x6C)); /* 0x1101E7A5: mov esi, dword ptr [ebp - 0x6c] */
L_1101E7A8:
    PUSH32(esp, 0); /* 0x1101E7A8: push 0 */
    PUSH32(esp, 1); /* 0x1101E7AA: push 1 */
    ecx = ebp + (-0x50); /* 0x1101E7AC: lea ecx, [ebp - 0x50] */
    MEM8(esi) = (uint8_t)(0); /* 0x1101E7AF: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_11010630); /* 0x1101E7B2: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x60)); /* 0x1101E7B7: mov eax, dword ptr [ebp - 0x60] */
L_1101E7BA:
    RECOMP_CALL(sub_1103B354); /* 0x1101E7BA: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101E7BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101F376(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101F376u);

L_1101F376:
    PUSH32(esp, 0x7Cu); /* 0x1101F376: push 0x7c */
    eax = 0x1103E321u; /* 0x1101F378: mov eax, 0x1103e321 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101F37D: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1101F382: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x18); /* 0x1101F385: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x1101F388: mov ecx, esi */
    ebx = MEM32(ebp + 0x14); /* 0x1101F38A: mov ebx, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x10); /* 0x1101F38D: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x78)) = eax; /* 0x1101F390: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1101F393: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x84)) = eax; /* 0x1101F396: mov dword ptr [ebp - 0x84], eax */
    eax = ebp + (-0x88); /* 0x1101F39C: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1101F3A2: push eax */
    MEM32(ebp + (-0x64)) = ebx; /* 0x1101F3A3: mov dword ptr [ebp - 0x64], ebx */
    RECOMP_CALL(sub_1100F94A); /* 0x1101F3A6: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101F3AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1101F3AF: push eax */
    RECOMP_CALL(sub_11015B71); /* 0x1101F3B0: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101F3B5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1101F3B9: pop ecx */
    ecx = ebp + (-0x88); /* 0x1101F3BA: lea ecx, [ebp - 0x88] */
    MEM32(ebp + (-0x80)) = eax; /* 0x1101F3C0: mov dword ptr [ebp - 0x80], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101F3C3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x1101F3C8: mov ecx, dword ptr [ebp - 0x80] */
    eax = ebp + (-0x5C); /* 0x1101F3CB: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1101F3CE: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1101F3CF: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x70); /* 0x1101F3D4: lea eax, [ebp - 0x70] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101F3D7: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x1101F3DE: push eax */
    ecx = esi; /* 0x1101F3DF: mov ecx, esi */
    RECOMP_CALL(sub_1100F94A); /* 0x1101F3E1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101F3E6: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101F3E7: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11010F0A); /* 0x1101F3EB: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101F3F0: pop ecx */
    ecx = ebp + (-0x70); /* 0x1101F3F1: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101F3F4: mov byte ptr [ebp - 4], 1 */
    esi = eax; /* 0x1101F3F8: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101F3FA: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1101F3FF: mov edx, dword ptr [esi] */
    eax = ebp + (-0x2C); /* 0x1101F401: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1101F404: push eax */
    PUSH32(esp, 0x110022CCu); /* 0x1101F405: push 0x110022cc */
    PUSH32(esp, 0x110022B0u); /* 0x1101F40A: push 0x110022b0 */
    ecx = esi; /* 0x1101F40F: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1101F411: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x78)); /* 0x1101F414: mov esi, dword ptr [ebp - 0x78] */
    ecx = edi; /* 0x1101F417: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1101F419: push ebx */
    MEM8(ebp + (-0x5E)) = (uint8_t)(0); /* 0x1101F41A: mov byte ptr [ebp - 0x5e], 0 */
    RECOMP_CALL(sub_11027871); /* 0x1101F41E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F423: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F466; /* 0x1101F425: jne 0x1101f466 */
L_1101F427:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F427: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F433; /* 0x1101F42A: jne 0x1101f433 */
L_1101F42C:
    ecx = edi; /* 0x1101F42C: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F42E: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F433:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F433: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x15)) */ /* 0x1101F436: cmp al, byte ptr [ebp - 0x15] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x15))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F442; /* 0x1101F439: jne 0x1101f442 */
L_1101F43B:
    eax = esi; /* 0x1101F43B: mov eax, esi */
    MEM8(eax) = (uint8_t)(0x2Bu); /* 0x1101F43D: mov byte ptr [eax], 0x2b */
    goto L_1101F45C; /* 0x1101F440: jmp 0x1101f45c */
L_1101F442:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F442: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F44F; /* 0x1101F446: jne 0x1101f44f */
L_1101F448:
    ecx = edi; /* 0x1101F448: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F44A: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F44F:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F44F: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x16)) */ /* 0x1101F452: cmp al, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x16))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F466; /* 0x1101F455: jne 0x1101f466 */
L_1101F457:
    eax = esi; /* 0x1101F457: mov eax, esi */
    MEM8(eax) = (uint8_t)(0x2Du); /* 0x1101F459: mov byte ptr [eax], 0x2d */
L_1101F45C:
    ecx = edi; /* 0x1101F45C: mov ecx, edi */
    esi = eax + 0x1; /* 0x1101F45E: lea esi, [eax + 1] */
    RECOMP_CALL(sub_11021816); /* 0x1101F461: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101F466:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101F466: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(0x7830u); /* 0x1101F468: mov word ptr [esi], 0x7830 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1101F46D: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5D)) = (uint8_t)(LO8(eax)); /* 0x1101F470: mov byte ptr [ebp - 0x5d], al */
    PUSH32(esp, ebx); /* 0x1101F473: push ebx */
    ecx = edi; /* 0x1101F474: mov ecx, edi */
    MEM32(ebp + (-0x70)) = esi; /* 0x1101F476: mov dword ptr [ebp - 0x70], esi */
    MEM32(ebp + (-0x6C)) = eax; /* 0x1101F479: mov dword ptr [ebp - 0x6c], eax */
    MEM32(ebp + (-0x68)) = eax; /* 0x1101F47C: mov dword ptr [ebp - 0x68], eax */
    RECOMP_CALL(sub_11027871); /* 0x1101F47F: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F484: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F4E5; /* 0x1101F486: jne 0x1101f4e5 */
L_1101F488:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F488: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F494; /* 0x1101F48B: jne 0x1101f494 */
L_1101F48D:
    ecx = edi; /* 0x1101F48D: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F48F: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F494:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F494: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x2C)) */ /* 0x1101F497: cmp al, byte ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x2C))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F4E5; /* 0x1101F49A: jne 0x1101f4e5 */
L_1101F49C:
    ecx = edi; /* 0x1101F49C: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x1101F49E: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101F4A3: push ebx */
    ecx = edi; /* 0x1101F4A4: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F4A6: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F4AB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F4E1; /* 0x1101F4AD: jne 0x1101f4e1 */
L_1101F4AF:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F4AF: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F4BB; /* 0x1101F4B2: jne 0x1101f4bb */
L_1101F4B4:
    ecx = edi; /* 0x1101F4B4: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F4B6: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F4BB:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F4BB: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x13)) */ /* 0x1101F4BE: cmp al, byte ptr [ebp - 0x13] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x13))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F4D8; /* 0x1101F4C1: je 0x1101f4d8 */
L_1101F4C3:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F4C3: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F4D0; /* 0x1101F4C7: jne 0x1101f4d0 */
L_1101F4C9:
    ecx = edi; /* 0x1101F4C9: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F4CB: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F4D0:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F4D0: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x14)) */ /* 0x1101F4D3: cmp al, byte ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x14))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F4E1; /* 0x1101F4D6: jne 0x1101f4e1 */
L_1101F4D8:
    ecx = edi; /* 0x1101F4D8: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x1101F4DA: call 0x11021816 */
    RECOMP_FLAGS_IN();
    goto L_1101F4E5; /* 0x1101F4DF: jmp 0x1101f4e5 */
L_1101F4E1:
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F4E1: mov byte ptr [ebp - 0x5d], 1 */
L_1101F4E5:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x1101F4E5: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x5C)); /* 0x1101F4E9: mov eax, dword ptr [ebp - 0x5c] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F4F1; /* 0x1101F4EC: jae 0x1101f4f1 */
L_1101F4EE:
    eax = ebp + (-0x5C); /* 0x1101F4EE: lea eax, [ebp - 0x5c] */
L_1101F4F1:
    MEM32(ebp + (-0x74)) = eax; /* 0x1101F4F1: mov dword ptr [ebp - 0x74], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x1101F4F4: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x1101F4F6: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F699; /* 0x1101F4F8: je 0x1101f699 */
L_1101F4FE:
    /* test LO8(eax), LO8(eax) */ /* 0x1101F4FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101F699; /* 0x1101F500: jle 0x1101f699 */
L_1101F506:
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1101F506: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F512; /* 0x1101F50A: jne 0x1101f512 */
L_1101F50C:
    MEM8(ebp + (-0x5F)) = (uint8_t)(0); /* 0x1101F50C: mov byte ptr [ebp - 0x5f], 0 */
    goto L_1101F51D; /* 0x1101F510: jmp 0x1101f51d */
L_1101F512:
    ecx = MEM32(ebp + (-0x80)); /* 0x1101F512: mov ecx, dword ptr [ebp - 0x80] */
    eax = MEM32(ecx); /* 0x1101F515: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101F517: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x5F)) = (uint8_t)(LO8(eax)); /* 0x1101F51A: mov byte ptr [ebp - 0x5f], al */
L_1101F51D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1101F51D: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1101F521: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x1101F524: push 0 */
    PUSH32(esp, 1); /* 0x1101F526: push 1 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x1101F528: mov dword ptr [ebp - 0x30], 0xf */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x1101F52F: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_11014076); /* 0x1101F533: call 0x11014076 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1101F538: push dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x1101F53B: mov ecx, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101F53D: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101F541: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11027871); /* 0x1101F543: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F548: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F63B; /* 0x1101F54A: jne 0x1101f63b */
L_1101F550:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F550: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F55D; /* 0x1101F554: jne 0x1101f55d */
L_1101F556:
    ecx = edi; /* 0x1101F556: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F558: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F55D:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F55D: mov al, byte ptr [edi + 5] */
    MEM8(ebp + (-0x7C)) = (uint8_t)(LO8(eax)); /* 0x1101F560: mov byte ptr [ebp - 0x7c], al */
    eax = ebp + (-0x2C); /* 0x1101F563: lea eax, [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x1101F566: push dword ptr [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1101F569: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101F56A: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101F56F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101F570: pop ecx */
    /* cmp eax, 0x16u */ /* 0x1101F571: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F5C1; /* 0x1101F574: jae 0x1101f5c1 */
L_1101F576:
    ecx = MEM32(ebp + (-0x6C)); /* 0x1101F576: mov ecx, dword ptr [ebp - 0x6c] */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F579: mov byte ptr [ebp - 0x5d], 1 */
    /* cmp ecx, 0x24u */ /* 0x1101F57D: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1101F587; /* 0x1101F580: jl 0x1101f587 */
L_1101F582:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) + 1; /* 0x1101F582: inc dword ptr [ebp - 0x68] */
    _flag_k = FK_INC;
    goto L_1101F59F; /* 0x1101F585: jmp 0x1101f59f */
L_1101F587:
    /* test eax, eax */ /* 0x1101F587: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F58F; /* 0x1101F589: jne 0x1101f58f */
L_1101F58B:
    /* test ecx, ecx */ /* 0x1101F58B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F59F; /* 0x1101F58D: je 0x1101f59f */
L_1101F58F:
    SET_LO8(eax, MEM8(eax + 0x110022B0)); /* 0x1101F58F: mov al, byte ptr [eax + 0x110022b0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101F595: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F597: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101F598: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x70)) = esi; /* 0x1101F599: mov dword ptr [ebp - 0x70], esi */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x1101F59C: mov dword ptr [ebp - 0x6c], ecx */
L_1101F59F:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x1101F59F: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x44)); /* 0x1101F5A3: mov eax, dword ptr [ebp - 0x44] */
    ecx = eax; /* 0x1101F5A6: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F5AD; /* 0x1101F5A8: jae 0x1101f5ad */
L_1101F5AA:
    ecx = ebp + (-0x44); /* 0x1101F5AA: lea ecx, [ebp - 0x44] */
L_1101F5AD:
    /* cmp MEM8(ecx + ebx), 0x7Fu */ /* 0x1101F5AD: cmp byte ptr [ecx + ebx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + ebx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F605; /* 0x1101F5B1: je 0x1101f605 */
L_1101F5B3:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x1101F5B3: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F5BC; /* 0x1101F5B7: jae 0x1101f5bc */
L_1101F5B9:
    eax = ebp + (-0x44); /* 0x1101F5B9: lea eax, [ebp - 0x44] */
L_1101F5BC:
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + ebx) = (uint8_t)(MEM8(eax + ebx) + 1); /* 0x1101F5BC: inc byte ptr [eax + ebx] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1101F605; /* 0x1101F5BF: jmp 0x1101f605 */
L_1101F5C1:
    edx = MEM32(ebp + (-0x30)); /* 0x1101F5C1: mov edx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x44)); /* 0x1101F5C4: mov ecx, dword ptr [ebp - 0x44] */
    eax = ecx; /* 0x1101F5C7: mov eax, ecx */
    /* cmp edx, 0x10u */ /* 0x1101F5C9: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F5D1; /* 0x1101F5CC: jae 0x1101f5d1 */
L_1101F5CE:
    eax = ebp + (-0x44); /* 0x1101F5CE: lea eax, [ebp - 0x44] */
L_1101F5D1:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1101F5D1: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F624; /* 0x1101F5D5: je 0x1101f624 */
L_1101F5D7:
    /* cmp MEM8(ebp + (-0x5F)), 0 */ /* 0x1101F5D7: cmp byte ptr [ebp - 0x5f], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5F))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F624; /* 0x1101F5DB: je 0x1101f624 */
L_1101F5DD:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F5DD: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F5F0; /* 0x1101F5E1: jne 0x1101f5f0 */
L_1101F5E3:
    ecx = edi; /* 0x1101F5E3: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F5E5: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x30)); /* 0x1101F5EA: mov edx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x44)); /* 0x1101F5ED: mov ecx, dword ptr [ebp - 0x44] */
L_1101F5F0:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F5F0: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x5F)) */ /* 0x1101F5F3: cmp al, byte ptr [ebp - 0x5f] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x5F))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F624; /* 0x1101F5F6: jne 0x1101f624 */
L_1101F5F8:
    PUSH32(esp, 0); /* 0x1101F5F8: push 0 */
    PUSH32(esp, 1); /* 0x1101F5FA: push 1 */
    ecx = ebp + (-0x44); /* 0x1101F5FC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_11014015); /* 0x1101F5FF: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101F604: inc ebx */
    _flag_k = FK_INC;
L_1101F605:
    ecx = edi; /* 0x1101F605: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x1101F607: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1101F60C: push dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x1101F60F: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F611: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F616: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F550; /* 0x1101F618: je 0x1101f550 */
L_1101F61E:
    edx = MEM32(ebp + (-0x30)); /* 0x1101F61E: mov edx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x44)); /* 0x1101F621: mov ecx, dword ptr [ebp - 0x44] */
L_1101F624:
    /* test ebx, ebx */ /* 0x1101F624: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F63E; /* 0x1101F626: je 0x1101f63e */
L_1101F628:
    eax = ecx; /* 0x1101F628: mov eax, ecx */
    /* cmp edx, 0x10u */ /* 0x1101F62A: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F632; /* 0x1101F62D: jae 0x1101f632 */
L_1101F62F:
    eax = ebp + (-0x44); /* 0x1101F62F: lea eax, [ebp - 0x44] */
L_1101F632:
    /* cmp MEM8(eax + ebx), 0 */ /* 0x1101F632: cmp byte ptr [eax + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101F680; /* 0x1101F636: jle 0x1101f680 */
L_1101F638:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101F638: inc ebx */
    _flag_k = FK_INC;
    goto L_1101F63E; /* 0x1101F639: jmp 0x1101f63e */
L_1101F63B:
    edx = MEM32(ebp + (-0x30)); /* 0x1101F63B: mov edx, dword ptr [ebp - 0x30] */
L_1101F63E:
    eax = MEM32(ebp + (-0x74)); /* 0x1101F63E: mov eax, dword ptr [ebp - 0x74] */
L_1101F641:
    /* test ebx, ebx */ /* 0x1101F641: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F684; /* 0x1101F643: je 0x1101f684 */
L_1101F645:
    SET_LO8(ecx, MEM8(eax)); /* 0x1101F645: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x1101F647: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F684; /* 0x1101F64A: je 0x1101f684 */
L_1101F64C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1101F64C: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1101F65F; /* 0x1101F64D: je 0x1101f65f */
L_1101F64F:
    eax = MEM32(ebp + (-0x44)); /* 0x1101F64F: mov eax, dword ptr [ebp - 0x44] */
    /* cmp edx, 0x10u */ /* 0x1101F652: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F65A; /* 0x1101F655: jae 0x1101f65a */
L_1101F657:
    eax = ebp + (-0x44); /* 0x1101F657: lea eax, [ebp - 0x44] */
L_1101F65A:
    /* cmp LO8(ecx), MEM8(eax + ebx) */ /* 0x1101F65A: cmp cl, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F680; /* 0x1101F65D: jne 0x1101f680 */
L_1101F65F:
    /* test ebx, ebx */ /* 0x1101F65F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F672; /* 0x1101F661: jne 0x1101f672 */
L_1101F663:
    eax = MEM32(ebp + (-0x44)); /* 0x1101F663: mov eax, dword ptr [ebp - 0x44] */
    /* cmp edx, 0x10u */ /* 0x1101F666: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F66E; /* 0x1101F669: jae 0x1101f66e */
L_1101F66B:
    eax = ebp + (-0x44); /* 0x1101F66B: lea eax, [ebp - 0x44] */
L_1101F66E:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x1101F66E: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1101F680; /* 0x1101F670: jl 0x1101f680 */
L_1101F672:
    eax = MEM32(ebp + (-0x74)); /* 0x1101F672: mov eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101F675: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0 */ /* 0x1101F676: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101F63E; /* 0x1101F679: jle 0x1101f63e */
L_1101F67B:
    MEM32(ebp + (-0x74)) = eax; /* 0x1101F67B: mov dword ptr [ebp - 0x74], eax */
    RECOMP_BACKEDGE();
    goto L_1101F641; /* 0x1101F67E: jmp 0x1101f641 */
L_1101F680:
    MEM8(ebp + (-0x5E)) = (uint8_t)(1); /* 0x1101F680: mov byte ptr [ebp - 0x5e], 1 */
L_1101F684:
    PUSH32(esp, 0); /* 0x1101F684: push 0 */
    PUSH32(esp, 1); /* 0x1101F686: push 1 */
    ecx = ebp + (-0x44); /* 0x1101F688: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101F68B: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101F68F: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x64)); /* 0x1101F694: mov ebx, dword ptr [ebp - 0x64] */
    goto L_1101F703; /* 0x1101F697: jmp 0x1101f703 */
L_1101F699:
    PUSH32(esp, ebx); /* 0x1101F699: push ebx */
    ecx = edi; /* 0x1101F69A: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F69C: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F6A1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F703; /* 0x1101F6A3: jne 0x1101f703 */
L_1101F6A5:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F6A5: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F6B2; /* 0x1101F6A9: jne 0x1101f6b2 */
L_1101F6AB:
    ecx = edi; /* 0x1101F6AB: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F6AD: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F6B2:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101F6B2: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101F6B6: push eax */
    eax = ebp + (-0x2C); /* 0x1101F6B7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1101F6BA: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101F6BB: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101F6C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101F6C1: pop ecx */
    /* cmp eax, 0x16u */ /* 0x1101F6C2: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F700; /* 0x1101F6C5: jae 0x1101f700 */
L_1101F6C7:
    ecx = MEM32(ebp + (-0x6C)); /* 0x1101F6C7: mov ecx, dword ptr [ebp - 0x6c] */
    /* cmp ecx, 0x24u */ /* 0x1101F6CA: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1101F6D4; /* 0x1101F6CD: jl 0x1101f6d4 */
L_1101F6CF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) + 1; /* 0x1101F6CF: inc dword ptr [ebp - 0x68] */
    _flag_k = FK_INC;
    goto L_1101F6E9; /* 0x1101F6D2: jmp 0x1101f6e9 */
L_1101F6D4:
    /* test eax, eax */ /* 0x1101F6D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F6DC; /* 0x1101F6D6: jne 0x1101f6dc */
L_1101F6D8:
    /* test ecx, ecx */ /* 0x1101F6D8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F6E9; /* 0x1101F6DA: je 0x1101f6e9 */
L_1101F6DC:
    SET_LO8(eax, MEM8(eax + 0x110022B0)); /* 0x1101F6DC: mov al, byte ptr [eax + 0x110022b0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101F6E2: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F6E4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101F6E5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x6C)) = ecx; /* 0x1101F6E6: mov dword ptr [ebp - 0x6c], ecx */
L_1101F6E9:
    ecx = edi; /* 0x1101F6E9: mov ecx, edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F6EB: mov byte ptr [ebp - 0x5d], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101F6EF: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101F6F4: push ebx */
    ecx = edi; /* 0x1101F6F5: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F6F7: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F6FC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F6A5; /* 0x1101F6FE: je 0x1101f6a5 */
L_1101F700:
    MEM32(ebp + (-0x70)) = esi; /* 0x1101F700: mov dword ptr [ebp - 0x70], esi */
L_1101F703:
    /* cmp MEM8(ebp + (-0x5D)), 0 */ /* 0x1101F703: cmp byte ptr [ebp - 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5D))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F716; /* 0x1101F707: je 0x1101f716 */
L_1101F709:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x1101F709: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F716; /* 0x1101F70D: jne 0x1101f716 */
L_1101F70F:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101F70F: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F712: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x70)) = esi; /* 0x1101F713: mov dword ptr [ebp - 0x70], esi */
L_1101F716:
    PUSH32(esp, ebx); /* 0x1101F716: push ebx */
    ecx = edi; /* 0x1101F717: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F719: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F71E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F757; /* 0x1101F720: jne 0x1101f757 */
L_1101F722:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F722: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F72E; /* 0x1101F725: jne 0x1101f72e */
L_1101F727:
    ecx = edi; /* 0x1101F727: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F729: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F72E:
    ecx = MEM32(ebp + (-0x80)); /* 0x1101F72E: mov ecx, dword ptr [ebp - 0x80] */
    SET_LO8(ebx, MEM8(edi + 0x5)); /* 0x1101F731: mov bl, byte ptr [edi + 5] */
    eax = MEM32(ecx); /* 0x1101F734: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101F736: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(ebx), LO8(eax) */ /* 0x1101F739: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F754; /* 0x1101F73B: jne 0x1101f754 */
L_1101F73D:
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x1101F73D: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1101F743: mov ecx, edi */
    eax = MEM32(eax); /* 0x1101F745: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x1101F747: mov al, byte ptr [eax] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101F749: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F74B: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x70)) = esi; /* 0x1101F74C: mov dword ptr [ebp - 0x70], esi */
    RECOMP_CALL(sub_11021816); /* 0x1101F74F: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101F754:
    ebx = MEM32(ebp + (-0x64)); /* 0x1101F754: mov ebx, dword ptr [ebp - 0x64] */
L_1101F757:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x1101F757: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F7F6; /* 0x1101F75B: jne 0x1101f7f6 */
L_1101F761:
    PUSH32(esp, ebx); /* 0x1101F761: push ebx */
    ecx = edi; /* 0x1101F762: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F764: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F769: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F7A3; /* 0x1101F76B: jne 0x1101f7a3 */
L_1101F76D:
    esi = MEM32(ebp + (-0x68)); /* 0x1101F76D: mov esi, dword ptr [ebp - 0x68] */
L_1101F770:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F770: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F77D; /* 0x1101F774: jne 0x1101f77d */
L_1101F776:
    ecx = edi; /* 0x1101F776: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F778: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F77D:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F77D: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x2C)) */ /* 0x1101F780: cmp al, byte ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x2C))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F79D; /* 0x1101F783: jne 0x1101f79d */
L_1101F785:
    ecx = edi; /* 0x1101F785: mov ecx, edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F787: mov byte ptr [ebp - 0x5d], 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1101F78B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_11021816); /* 0x1101F78C: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101F791: push ebx */
    ecx = edi; /* 0x1101F792: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F794: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F799: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F770; /* 0x1101F79B: je 0x1101f770 */
L_1101F79D:
    MEM32(ebp + (-0x68)) = esi; /* 0x1101F79D: mov dword ptr [ebp - 0x68], esi */
    esi = MEM32(ebp + (-0x70)); /* 0x1101F7A0: mov esi, dword ptr [ebp - 0x70] */
L_1101F7A3:
    eax = MEM32(ebp + (-0x68)); /* 0x1101F7A3: mov eax, dword ptr [ebp - 0x68] */
    /* test eax, eax */ /* 0x1101F7A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1101F7F6; /* 0x1101F7A8: jns 0x1101f7f6 */
L_1101F7AA:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101F7AA: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F7AD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101F7AE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x68)) = eax; /* 0x1101F7AF: mov dword ptr [ebp - 0x68], eax */
    goto L_1101F7F6; /* 0x1101F7B2: jmp 0x1101f7f6 */
L_1101F7B4:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F7B4: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F7C1; /* 0x1101F7B8: jne 0x1101f7c1 */
L_1101F7BA:
    ecx = edi; /* 0x1101F7BA: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F7BC: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F7C1:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101F7C1: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101F7C5: push eax */
    eax = ebp + (-0x2C); /* 0x1101F7C6: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1101F7C9: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101F7CA: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101F7CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101F7D0: pop ecx */
    /* cmp eax, 0x16u */ /* 0x1101F7D1: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F802; /* 0x1101F7D4: jae 0x1101f802 */
L_1101F7D6:
    ecx = MEM32(ebp + (-0x6C)); /* 0x1101F7D6: mov ecx, dword ptr [ebp - 0x6c] */
    /* cmp ecx, 0x24u */ /* 0x1101F7D9: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1101F7EB; /* 0x1101F7DC: jge 0x1101f7eb */
L_1101F7DE:
    SET_LO8(eax, MEM8(eax + 0x110022B0)); /* 0x1101F7DE: mov al, byte ptr [eax + 0x110022b0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101F7E4: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F7E6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101F7E7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x6C)) = ecx; /* 0x1101F7E8: mov dword ptr [ebp - 0x6c], ecx */
L_1101F7EB:
    ecx = edi; /* 0x1101F7EB: mov ecx, edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F7ED: mov byte ptr [ebp - 0x5d], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101F7F1: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101F7F6:
    PUSH32(esp, ebx); /* 0x1101F7F6: push ebx */
    ecx = edi; /* 0x1101F7F7: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F7F9: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F7FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F7B4; /* 0x1101F800: je 0x1101f7b4 */
L_1101F802:
    SET_LO8(eax, MEM8(ebp + (-0x5D))); /* 0x1101F802: mov al, byte ptr [ebp - 0x5d] */
    /* test LO8(eax), LO8(eax) */ /* 0x1101F805: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F93C; /* 0x1101F807: je 0x1101f93c */
L_1101F80D:
    PUSH32(esp, ebx); /* 0x1101F80D: push ebx */
    ecx = edi; /* 0x1101F80E: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F810: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F815: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F939; /* 0x1101F817: jne 0x1101f939 */
L_1101F81D:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F81D: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F829; /* 0x1101F820: jne 0x1101f829 */
L_1101F822:
    ecx = edi; /* 0x1101F822: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F824: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F829:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F829: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x11)) */ /* 0x1101F82C: cmp al, byte ptr [ebp - 0x11] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x11))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F84A; /* 0x1101F82F: je 0x1101f84a */
L_1101F831:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F831: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F83E; /* 0x1101F835: jne 0x1101f83e */
L_1101F837:
    ecx = edi; /* 0x1101F837: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F839: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F83E:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F83E: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x12)) */ /* 0x1101F841: cmp al, byte ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x12))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F939; /* 0x1101F844: jne 0x1101f939 */
L_1101F84A:
    MEM8(esi) = (uint8_t)(0x70u); /* 0x1101F84A: mov byte ptr [esi], 0x70 */
    ecx = edi; /* 0x1101F84D: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F84F: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x1101F850: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1101F855: push dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101F858: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x5D)) = (uint8_t)(0); /* 0x1101F85A: mov byte ptr [ebp - 0x5d], 0 */
    ecx = edi; /* 0x1101F85E: mov ecx, edi */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1101F860: mov dword ptr [ebp - 0x7c], ebx */
    RECOMP_CALL(sub_11027871); /* 0x1101F863: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F868: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F8A4; /* 0x1101F86A: jne 0x1101f8a4 */
L_1101F86C:
    /* cmp MEM8(edi + 0x4), LO8(ebx) */ /* 0x1101F86C: cmp byte ptr [edi + 4], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F878; /* 0x1101F86F: jne 0x1101f878 */
L_1101F871:
    ecx = edi; /* 0x1101F871: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F873: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F878:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F878: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x15)) */ /* 0x1101F87B: cmp al, byte ptr [ebp - 0x15] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x15))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F885; /* 0x1101F87E: jne 0x1101f885 */
L_1101F880:
    MEM8(esi) = (uint8_t)(0x2Bu); /* 0x1101F880: mov byte ptr [esi], 0x2b */
    goto L_1101F89C; /* 0x1101F883: jmp 0x1101f89c */
L_1101F885:
    /* cmp MEM8(edi + 0x4), LO8(ebx) */ /* 0x1101F885: cmp byte ptr [edi + 4], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F891; /* 0x1101F888: jne 0x1101f891 */
L_1101F88A:
    ecx = edi; /* 0x1101F88A: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F88C: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F891:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F891: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x16)) */ /* 0x1101F894: cmp al, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x16))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F8A4; /* 0x1101F897: jne 0x1101f8a4 */
L_1101F899:
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1101F899: mov byte ptr [esi], 0x2d */
L_1101F89C:
    ecx = edi; /* 0x1101F89C: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F89E: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x1101F89F: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_1101F8A4:
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1101F8A4: push dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x1101F8A7: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F8A9: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F8AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F8EE; /* 0x1101F8B0: jne 0x1101f8ee */
L_1101F8B2:
    ebx = MEM32(ebp + (-0x64)); /* 0x1101F8B2: mov ebx, dword ptr [ebp - 0x64] */
L_1101F8B5:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1101F8B5: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F8C2; /* 0x1101F8B9: jne 0x1101f8c2 */
L_1101F8BB:
    ecx = edi; /* 0x1101F8BB: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F8BD: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F8C2:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x1101F8C2: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x2C)) */ /* 0x1101F8C5: cmp al, byte ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x2C))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F8E1; /* 0x1101F8C8: jne 0x1101f8e1 */
L_1101F8CA:
    ecx = edi; /* 0x1101F8CA: mov ecx, edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F8CC: mov byte ptr [ebp - 0x5d], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101F8D0: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1101F8D5: push ebx */
    ecx = edi; /* 0x1101F8D6: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F8D8: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F8DD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101F8B5; /* 0x1101F8DF: je 0x1101f8b5 */
L_1101F8E1:
    /* cmp MEM8(ebp + (-0x5D)), 0 */ /* 0x1101F8E1: cmp byte ptr [ebp - 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5D))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + (-0x7C)); /* 0x1101F8E5: mov ebx, dword ptr [ebp - 0x7c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101F8EE; /* 0x1101F8E8: je 0x1101f8ee */
L_1101F8EA:
    MEM8(esi) = (uint8_t)(0x30u); /* 0x1101F8EA: mov byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F8ED: inc esi */
    _flag_k = FK_INC;
L_1101F8EE:
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1101F8EE: push dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x1101F8F1: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1101F8F3: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101F8F8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F939; /* 0x1101F8FA: jne 0x1101f939 */
L_1101F8FC:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1101F8FC: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F908; /* 0x1101F8FF: jne 0x1101f908 */
L_1101F901:
    ecx = edi; /* 0x1101F901: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x1101F903: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1101F908:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1101F908: movzx eax, byte ptr [edi + 5] */
    PUSH32(esp, eax); /* 0x1101F90C: push eax */
    eax = ebp + (-0x2C); /* 0x1101F90D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1101F910: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x1101F911: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101F916: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101F917: pop ecx */
    /* cmp eax, 0x16u */ /* 0x1101F918: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101F939; /* 0x1101F91B: jae 0x1101f939 */
L_1101F91D:
    /* cmp ebx, 8 */ /* 0x1101F91D: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1101F92C; /* 0x1101F920: jge 0x1101f92c */
L_1101F922:
    SET_LO8(eax, MEM8(eax + 0x110022B0)); /* 0x1101F922: mov al, byte ptr [eax + 0x110022b0] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1101F928: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101F92A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101F92B: inc ebx */
    _flag_k = FK_INC;
L_1101F92C:
    ecx = edi; /* 0x1101F92C: mov ecx, edi */
    MEM8(ebp + (-0x5D)) = (uint8_t)(1); /* 0x1101F92E: mov byte ptr [ebp - 0x5d], 1 */
    RECOMP_CALL(sub_11021816); /* 0x1101F932: call 0x11021816 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101F8EE; /* 0x1101F937: jmp 0x1101f8ee */
L_1101F939:
    SET_LO8(eax, MEM8(ebp + (-0x5D))); /* 0x1101F939: mov al, byte ptr [ebp - 0x5d] */
L_1101F93C:
    /* cmp MEM8(ebp + (-0x5E)), 0 */ /* 0x1101F93C: cmp byte ptr [ebp - 0x5e], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5E))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101F946; /* 0x1101F940: jne 0x1101f946 */
L_1101F942:
    /* test LO8(eax), LO8(eax) */ /* 0x1101F942: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101F949; /* 0x1101F944: jne 0x1101f949 */
L_1101F946:
    esi = MEM32(ebp + (-0x78)); /* 0x1101F946: mov esi, dword ptr [ebp - 0x78] */
L_1101F949:
    ecx = MEM32(ebp + (-0x84)); /* 0x1101F949: mov ecx, dword ptr [ebp - 0x84] */
    eax = MEM32(ebp + (-0x68)); /* 0x1101F94F: mov eax, dword ptr [ebp - 0x68] */
    MEM8(esi) = (uint8_t)(0); /* 0x1101F952: mov byte ptr [esi], 0 */
    PUSH32(esp, 0); /* 0x1101F955: push 0 */
    MEM32(ecx) = eax; /* 0x1101F957: mov dword ptr [ecx], eax */
    ecx = ebp + (-0x5C); /* 0x1101F959: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, 1); /* 0x1101F95C: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x1101F95E: call 0x11010630 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101F963: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B354); /* 0x1101F965: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101F96A: ret  */
    RECOMP_REGS_OUT();
}
