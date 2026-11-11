#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0065D620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065D620u);

L_0065D620:
    PUSH32(esp, ebp); /* 0x0065D620: push ebp */
    ebp = esp; /* 0x0065D621: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065D623: push -1 */
    PUSH32(esp, 0x007BB156u); /* 0x0065D625: push 0x7bb156 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065D62A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065D630: push eax */
    PUSH32(esp, ecx); /* 0x0065D631: push ecx */
    PUSH32(esp, esi); /* 0x0065D632: push esi */
    eax = MEM32(0x855000); /* 0x0065D633: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065D638: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065D63A: push eax */
    eax = ebp + (-0xC); /* 0x0065D63B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065D63E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065D644: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0065D646: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0065D649: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_0065D6C0); /* 0x0065D650: call 0x65d6c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065D655: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x60), 0x10u */ /* 0x0065D659: cmp dword ptr [esi + 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065D66B; /* 0x0065D65D: jb 0x65d66b */
L_0065D65F:
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x0065D65F: push dword ptr [esi + 0x4c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0065D662: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065D668: add esp, 4 */
    _flag_k = FK_ADD;
L_0065D66B:
    MEM32(esi + 0x60) = 0xFu; /* 0x0065D66B: mov dword ptr [esi + 0x60], 0xf */
    MEM32(esi + 0x5C) = 0; /* 0x0065D672: mov dword ptr [esi + 0x5c], 0 */
    MEM8(esi + 0x4C) = (uint8_t)(0); /* 0x0065D679: mov byte ptr [esi + 0x4c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065D67D: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x0065D684: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065D69D; /* 0x0065D688: jbe 0x65d69d */
L_0065D68A:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x0065D68A: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0065D68D: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065D693: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 0; /* 0x0065D696: mov dword ptr [esi + 0x44], 0 */
L_0065D69D:
    MEM32(esi + 0x40) = 0; /* 0x0065D69D: mov dword ptr [esi + 0x40], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065D6A4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065D6A7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065D6AE: pop ecx */
    esi = POP32_VAL(esp); /* 0x0065D6AF: pop esi */
    esp = ebp; /* 0x0065D6B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065D6B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065D6B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065D6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065D6C0u);

L_0065D6C0:
    PUSH32(esp, esi); /* 0x0065D6C0: push esi */
    esi = ecx; /* 0x0065D6C1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0065D6C3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065D6C4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x40), edi */ /* 0x0065D6C6: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065D6E0; /* 0x0065D6C9: jbe 0x65d6e0 */
L_0065D6CB:
    goto L_0065D6D0; /* 0x0065D6CB: jmp 0x65d6d0 */
L_0065D6D0:
    eax = MEM32(esi + 0x3C); /* 0x0065D6D0: mov eax, dword ptr [esi + 0x3c] */
    ecx = MEM32(eax + edi * 4); /* 0x0065D6D3: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0065D6D6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x0065D6D8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0065D6DA: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x40) */ /* 0x0065D6DB: cmp edi, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065D6D0; /* 0x0065D6DE: jb 0x65d6d0 */
L_0065D6E0:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x0065D6E0: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065D6F9; /* 0x0065D6E4: jbe 0x65d6f9 */
L_0065D6E6:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x0065D6E6: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0065D6E9: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065D6EF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 0; /* 0x0065D6F2: mov dword ptr [esi + 0x44], 0 */
L_0065D6F9:
    MEM32(esi + 0x40) = 0; /* 0x0065D6F9: mov dword ptr [esi + 0x40], 0 */
    edi = POP32_VAL(esp); /* 0x0065D700: pop edi */
    MEM32(esi) = 0x200u; /* 0x0065D701: mov dword ptr [esi], 0x200 */
    MEM32(esi + 0x4) = 0; /* 0x0065D707: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0065D70E: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0065D715: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0065D71C: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x0065D723: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x0065D72A: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x20) = 0; /* 0x0065D731: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x24) = 0; /* 0x0065D738: mov dword ptr [esi + 0x24], 0 */
    MEM32(esi + 0x28) = 0; /* 0x0065D73F: mov dword ptr [esi + 0x28], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x0065D746: mov dword ptr [esi + 0x2c], 0 */
    MEM32(esi + 0x30) = 0; /* 0x0065D74D: mov dword ptr [esi + 0x30], 0 */
    MEM16(esi + 0x34) = (uint16_t)(0); /* 0x0065D754: mov word ptr [esi + 0x34], 0 */
    MEM32(esi + 0x38) = 0; /* 0x0065D75A: mov dword ptr [esi + 0x38], 0 */
    esi = POP32_VAL(esp); /* 0x0065D761: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065D762: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065D770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065D770u);

L_0065D770:
    PUSH32(esp, ebp); /* 0x0065D770: push ebp */
    ebp = esp; /* 0x0065D771: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065D773: push -1 */
    PUSH32(esp, 0x007BB1F3u); /* 0x0065D775: push 0x7bb1f3 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065D77A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065D780: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x0065D781: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065D787: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065D78C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065D78E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065D791: push ebx */
    PUSH32(esp, esi); /* 0x0065D792: push esi */
    PUSH32(esp, edi); /* 0x0065D793: push edi */
    PUSH32(esp, eax); /* 0x0065D794: push eax */
    eax = ebp + (-0xC); /* 0x0065D795: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065D798: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0065D79E: mov ebx, ecx */
    MEM32(ebp + (-0xBC)) = ebx; /* 0x0065D7A0: mov dword ptr [ebp - 0xbc], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0065D7A6: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM8(0x86E016), 0 */ /* 0x0065D7AD: cmp byte ptr [0x86e016], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E016)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DB2C; /* 0x0065D7B4: jne 0x65db2c */
L_0065D7BA:
    /* cmp MEM8(ebx + 0x48), 0 */ /* 0x0065D7BA: cmp byte ptr [ebx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DB2C; /* 0x0065D7BE: jne 0x65db2c */
L_0065D7C4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D7C4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x0065D7C7: lea eax, [ebp + 8] */
    ecx = esp; /* 0x0065D7CA: mov ecx, esp */
    MEM32(ebp + (-0xC0)) = esp; /* 0x0065D7CC: mov dword ptr [ebp - 0xc0], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065D7D2: push -1 */
    PUSH32(esp, 0); /* 0x0065D7D4: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065D7D6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065D7DD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0065D7E4: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065D7E5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0065D7E8: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065D7ED: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, 0); /* 0x0065D7F1: push 0 */
    PUSH32(esp, ecx); /* 0x0065D7F3: push ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065D7F4: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x78); /* 0x0065D7F8: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_0065C560); /* 0x0065D7FB: call 0x65c560 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065D800: mov byte ptr [ebp - 4], 2 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x0065D804: movss xmm1, dword ptr [ebx + 4] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x74)); _xmm[2].u64[1] = 0; /* 0x0065D809: movss xmm2, dword ptr [ebp - 0x74] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065D80E: ucomiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065D811: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065D812: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0065DB20; /* 0x0065D815: jp 0x65db20 */
L_0065D81B:
    _xmm[0].u64[0] = MEM32(ebp + (-0x70)); _xmm[0].u64[1] = 0; /* 0x0065D81B: movss xmm0, dword ptr [ebp - 0x70] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065D820: ucomiss xmm0, dword ptr [ebx + 8] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065D824: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065D825: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0065DB20; /* 0x0065D828: jp 0x65db20 */
L_0065D82E:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065D82E: ucomiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065D831: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065D832: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065D87F; /* 0x0065D835: jnp 0x65d87f */
L_0065D837:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D837: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D83A: mov ecx, esp */
    MEM32(ebp + (-0xC0)) = esp; /* 0x0065D83C: mov dword ptr [ebp - 0xc0], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065D842: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D847: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0065D84C: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D850: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D853: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0065D855: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0x007FB894u); /* 0x0065D85B: push 0x7fb894 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D860: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0065D865: mov byte ptr [ebp - 4], 6 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065D869: mov byte ptr [ebp - 4], 2 */
    ecx = 0x1CEu; /* 0x0065D86D: mov ecx, 0x1ce */
    RECOMP_CALL(sub_00668DA0); /* 0x0065D872: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x70)); _xmm[0].u64[1] = 0; /* 0x0065D877: movss xmm0, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065D87C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065D87F:
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065D87F: ucomiss xmm0, dword ptr [ebx + 8] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065D883: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065D884: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065D8CC; /* 0x0065D887: jnp 0x65d8cc */
L_0065D889:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D889: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D88C: mov ecx, esp */
    MEM32(ebp + (-0xC0)) = esp; /* 0x0065D88E: mov dword ptr [ebp - 0xc0], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065D894: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D899: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0065D89E: mov byte ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D8A2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D8A5: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0065D8A7: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0x007FB87Cu); /* 0x0065D8AD: push 0x7fb87c */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D8B2: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0065D8B7: mov byte ptr [ebp - 4], 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065D8BB: mov byte ptr [ebp - 4], 2 */
    ecx = 0x1CFu; /* 0x0065D8BF: mov ecx, 0x1cf */
    RECOMP_CALL(sub_00668DA0); /* 0x0065D8C4: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065D8C9: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065D8CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065D8CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB8)) = edi; /* 0x0065D8CE: mov dword ptr [ebp - 0xb8], edi */
    /* cmp MEM32(ebx + 0x40), edi */ /* 0x0065D8D4: cmp dword ptr [ebx + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065DB20; /* 0x0065D8D7: jbe 0x65db20 */
L_0065D8DD:
    eax = ebx + 0x3C; /* 0x0065D8DD: lea eax, [ebx + 0x3c] */
L_0065D8E0:
    PUSH32(esp, edi); /* 0x0065D8E0: push edi */
    ecx = eax; /* 0x0065D8E1: mov ecx, eax */
    RECOMP_CALL(sub_0065F140); /* 0x0065D8E3: call 0x65f140 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0065D8E8: push edi */
    ecx = ebp + (-0x3C); /* 0x0065D8E9: lea ecx, [ebp - 0x3c] */
    esi = MEM32(eax); /* 0x0065D8EC: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0xC0)) = esi; /* 0x0065D8EE: mov dword ptr [ebp - 0xc0], esi */
    RECOMP_CALL(sub_0065F140); /* 0x0065D8F4: call 0x65f140 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x0065D8F9: lea ecx, [ebp - 0x94] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065D8FF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0065D901: push ecx */
    PUSH32(esp, edi); /* 0x0065D902: push edi */
    eax = MEM32(eax); /* 0x0065D903: mov eax, dword ptr [eax] */
    ecx = esi; /* 0x0065D905: mov ecx, esi */
    MEM32(ebp + (-0xC8)) = eax; /* 0x0065D907: mov dword ptr [ebp - 0xc8], eax */
    eax = MEM32(esi); /* 0x0065D90D: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xC4)) = edi; /* 0x0065D90F: mov dword ptr [ebp - 0xc4], edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065D915: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065D918: mov esi, eax */
    /* test esi, esi */ /* 0x0065D91A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DB07; /* 0x0065D91C: je 0x65db07 */
L_0065D922:
    ebx = MEM32(ebp + (-0xC8)); /* 0x0065D922: mov ebx, dword ptr [ebp - 0xc8] */
    goto L_0065D930; /* 0x0065D928: jmp 0x65d930 */
L_0065D930:
    edx = MEM32(ebx); /* 0x0065D930: mov edx, dword ptr [ebx] */
    eax = ebp + (-0xB0); /* 0x0065D932: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x0065D938: push eax */
    PUSH32(esp, edi); /* 0x0065D939: push edi */
    ecx = ebx; /* 0x0065D93A: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x0065D93C: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0065D93F: mov edi, eax */
    /* test edi, edi */ /* 0x0065D941: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DB01; /* 0x0065D943: je 0x65db01 */
L_0065D949:
    edx = MEM32(ebp + (-0x94)); /* 0x0065D949: mov edx, dword ptr [ebp - 0x94] */
    MEM32(ebp + (-0xB4)) = edx; /* 0x0065D94F: mov dword ptr [ebp - 0xb4], edx */
    /* cmp MEM32(ebp + (-0xB0)), edx */ /* 0x0065D955: cmp dword ptr [ebp - 0xb0], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB0))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065D9AC; /* 0x0065D95B: je 0x65d9ac */
L_0065D95D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D95D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D960: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0065D962: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065D968: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D96D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0065D972: mov byte ptr [ebp - 4], 9 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D976: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D979: mov ecx, esp */
    MEM32(ebp + (-0xCC)) = esp; /* 0x0065D97B: mov dword ptr [ebp - 0xcc], esp */
    PUSH32(esp, 0x007FB8C0u); /* 0x0065D981: push 0x7fb8c0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D986: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0065D98B: mov byte ptr [ebp - 4], 0xa */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065D98F: mov byte ptr [ebp - 4], 2 */
    ecx = 0x1E2u; /* 0x0065D993: mov ecx, 0x1e2 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065D998: call 0x668da0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x94)); /* 0x0065D99D: mov edx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065D9A3: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB4)) = edx; /* 0x0065D9A6: mov dword ptr [ebp - 0xb4], edx */
L_0065D9AC:
    eax = MEM32(ebp + (-0xAC)); /* 0x0065D9AC: mov eax, dword ptr [ebp - 0xac] */
    ebx = MEM32(ebp + (-0x90)); /* 0x0065D9B2: mov ebx, dword ptr [ebp - 0x90] */
    /* cmp eax, ebx */ /* 0x0065D9B8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065DA17; /* 0x0065D9BA: je 0x65da17 */
L_0065D9BC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D9BC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D9BF: mov ecx, esp */
    MEM32(ebp + (-0xCC)) = esp; /* 0x0065D9C1: mov dword ptr [ebp - 0xcc], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065D9C7: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D9CC: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0065D9D1: mov byte ptr [ebp - 4], 0xb */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065D9D5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065D9D8: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0065D9DA: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007FB8A8u); /* 0x0065D9E0: push 0x7fb8a8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065D9E5: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0065D9EA: mov byte ptr [ebp - 4], 0xc */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065D9EE: mov byte ptr [ebp - 4], 2 */
    ecx = 0x1E3u; /* 0x0065D9F2: mov ecx, 0x1e3 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065D9F7: call 0x668da0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x94)); /* 0x0065D9FC: mov edx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065DA02: add esp, 0x30 */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x90)); /* 0x0065DA05: mov ebx, dword ptr [ebp - 0x90] */
    eax = MEM32(ebp + (-0xAC)); /* 0x0065DA0B: mov eax, dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xB4)) = edx; /* 0x0065DA11: mov dword ptr [ebp - 0xb4], edx */
L_0065DA17:
    /* cmp MEM32(ebp + (-0xB0)), edx */ /* 0x0065DA17: cmp dword ptr [ebp - 0xb0], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB0))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DB20; /* 0x0065DA1D: jne 0x65db20 */
L_0065DA23:
    /* cmp eax, ebx */ /* 0x0065DA23: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DB20; /* 0x0065DA25: jne 0x65db20 */
L_0065DA2B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC4)) = MEM32(ebp + (-0xC4)) + 1; /* 0x0065DA2B: inc dword ptr [ebp - 0xc4] */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x0065DA31: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DAC8; /* 0x0065DA33: je 0x65dac8 */
L_0065DA39:
    esp = esp; /* 0x0065DA39: lea esp, [esp] */
L_0065DA40:
    /* test edx, edx */ /* 0x0065DA40: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DAA4; /* 0x0065DA42: je 0x65daa4 */
L_0065DA44:
    ecx = edx; /* 0x0065DA44: mov ecx, edx */
    edx = MEM32(ebp + (-0xBC)); /* 0x0065DA46: mov edx, dword ptr [ebp - 0xbc] */
    esp = esp; /* 0x0065DA4C: lea esp, [esp] */
L_0065DA50:
    eax = (uint32_t)MEM8(esi + 0x2); /* 0x0065DA50: movzx eax, byte ptr [esi + 2] */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x0065DA54: movd xmm3, eax */
    eax = (uint32_t)MEM8(esi + 0x1); /* 0x0065DA58: movzx eax, byte ptr [esi + 1] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DA5C: cvtdq2ps xmm3, xmm3 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0065DA5F: movd xmm2, eax */
    eax = (uint32_t)MEM8(esi); /* 0x0065DA63: movzx eax, byte ptr [esi] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DA66: cvtdq2ps xmm2, xmm2 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DA69: movd xmm0, eax */
    eax = (uint32_t)MEM8(edi); /* 0x0065DA6D: movzx eax, byte ptr [edi] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DA70: cvtdq2ps xmm0, xmm0 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0065DA73: movd xmm1, eax */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065DA77: cvttss2si eax, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DA7B: cvtdq2ps xmm1, xmm1 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0065DA7E: mov byte ptr [esi], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0065DA80: cvttss2si eax, xmm2 */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x0065DA84: mov byte ptr [esi + 1], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[3].f32[0], 1); /* 0x0065DA87: cvttss2si eax, xmm3 */
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x0065DA8B: mov byte ptr [esi + 2], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065DA8E: cvttss2si eax, xmm1 */
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x0065DA92: mov byte ptr [esi + 3], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edx + 0x10); /* 0x0065DA95: add esi, dword ptr [edx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(edx + 0x10); /* 0x0065DA98: add edi, dword ptr [edx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0065DA9B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065DA50; /* 0x0065DA9C: jne 0x65da50 */
L_0065DA9E:
    edx = MEM32(ebp + (-0xB4)); /* 0x0065DA9E: mov edx, dword ptr [ebp - 0xb4] */
L_0065DAA4:
    eax = MEM32(ebp + (-0xBC)); /* 0x0065DAA4: mov eax, dword ptr [ebp - 0xbc] */
    ecx = MEM32(eax + 0x10); /* 0x0065DAAA: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebp + (-0x80)); /* 0x0065DAAD: mov eax, dword ptr [ebp - 0x80] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x0065DAB0: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0065DAB3: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0065DAB5: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x9C)); /* 0x0065DAB7: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0065DABD: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0065DABF: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0065DAC1: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065DA40; /* 0x0065DAC2: jne 0x65da40 */
L_0065DAC8:
    ebx = MEM32(ebp + (-0xC8)); /* 0x0065DAC8: mov ebx, dword ptr [ebp - 0xc8] */
    ecx = ebx; /* 0x0065DACE: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x0065DAD0: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065DAD2: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC0)); /* 0x0065DAD5: mov esi, dword ptr [ebp - 0xc0] */
    ecx = esi; /* 0x0065DADB: mov ecx, esi */
    eax = MEM32(esi); /* 0x0065DADD: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065DADF: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x0065DAE2: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x94); /* 0x0065DAE4: lea ecx, [ebp - 0x94] */
    edi = MEM32(ebp + (-0xC4)); /* 0x0065DAEA: mov edi, dword ptr [ebp - 0xc4] */
    PUSH32(esp, ecx); /* 0x0065DAF0: push ecx */
    PUSH32(esp, edi); /* 0x0065DAF1: push edi */
    ecx = esi; /* 0x0065DAF2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065DAF4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065DAF7: mov esi, eax */
    /* test esi, esi */ /* 0x0065DAF9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065D930; /* 0x0065DAFB: jne 0x65d930 */
L_0065DB01:
    ebx = MEM32(ebp + (-0xBC)); /* 0x0065DB01: mov ebx, dword ptr [ebp - 0xbc] */
L_0065DB07:
    edi = MEM32(ebp + (-0xB8)); /* 0x0065DB07: mov edi, dword ptr [ebp - 0xb8] */
    eax = ebx + 0x3C; /* 0x0065DB0D: lea eax, [ebx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0065DB10: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xB8)) = edi; /* 0x0065DB11: mov dword ptr [ebp - 0xb8], edi */
    /* cmp edi, MEM32(ebx + 0x40) */ /* 0x0065DB17: cmp edi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065D8E0; /* 0x0065DB1A: jb 0x65d8e0 */
L_0065DB20:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065DB20: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x78); /* 0x0065DB24: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_0065D620); /* 0x0065DB27: call 0x65d620 */
    RECOMP_FLAGS_IN();
L_0065DB2C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065DB2C: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065DB33: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065DB45; /* 0x0065DB37: jb 0x65db45 */
L_0065DB39:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065DB39: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0065DB3C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065DB42: add esp, 4 */
    _flag_k = FK_ADD;
L_0065DB45:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0065DB45: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0065DB4C: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0065DB53: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065DB57: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065DB5A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065DB61: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065DB62: pop edi */
    esi = POP32_VAL(esp); /* 0x0065DB63: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065DB64: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065DB65: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065DB68: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065DB6A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065DB6F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065DB71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x0065DB72: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_0065DB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065DB80u);

L_0065DB80:
    PUSH32(esp, ebp); /* 0x0065DB80: push ebp */
    ebp = esp; /* 0x0065DB81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065DB83: push -1 */
    PUSH32(esp, 0x007BB260u); /* 0x0065DB85: push 0x7bb260 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065DB8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065DB90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x0065DB91: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065DB94: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065DB99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065DB9B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065DB9E: push ebx */
    PUSH32(esp, esi); /* 0x0065DB9F: push esi */
    PUSH32(esp, edi); /* 0x0065DBA0: push edi */
    PUSH32(esp, eax); /* 0x0065DBA1: push eax */
    eax = ebp + (-0xC); /* 0x0065DBA2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065DBA5: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0065DBAB: mov ebx, ecx */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x0065DBAD: mov dword ptr [ebp - 0x5c], ebx */
    /* cmp MEM8(0x86E016), 0 */ /* 0x0065DBB0: cmp byte ptr [0x86e016], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E016)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ebp + 0x8); /* 0x0065DBB7: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x64)) = esi; /* 0x0065DBBA: mov dword ptr [ebp - 0x64], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DF51; /* 0x0065DBBD: jne 0x65df51 */
L_0065DBC3:
    /* cmp MEM8(ebx + 0x48), 0 */ /* 0x0065DBC3: cmp byte ptr [ebx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065DF51; /* 0x0065DBC7: jne 0x65df51 */
L_0065DBCD:
    _xmm[0].u64[0] = MEM32(esi + 0x4); _xmm[0].u64[1] = 0; /* 0x0065DBCD: movss xmm0, dword ptr [esi + 4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x4))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065DBD2: ucomiss xmm0, dword ptr [ebx + 4] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065DBD6: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065DBD7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0065DF51; /* 0x0065DBDA: jp 0x65df51 */
L_0065DBE0:
    _xmm[0].u64[0] = MEM32(esi + 0x8); _xmm[0].u64[1] = 0; /* 0x0065DBE0: movss xmm0, dword ptr [esi + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065DBE5: ucomiss xmm0, dword ptr [ebx + 8] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065DBE9: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065DBEA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0065DF51; /* 0x0065DBED: jp 0x65df51 */
L_0065DBF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065DBF3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = edi; /* 0x0065DBF5: mov dword ptr [ebp - 0x60], edi */
    /* cmp MEM32(ebx + 0x40), edi */ /* 0x0065DBF8: cmp dword ptr [ebx + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065DF51; /* 0x0065DBFB: jbe 0x65df51 */
L_0065DC01:
    eax = esi + 0x3C; /* 0x0065DC01: lea eax, [esi + 0x3c] */
    MEM32(ebp + (-0x68)) = eax; /* 0x0065DC04: mov dword ptr [ebp - 0x68], eax */
    goto L_0065DC10; /* 0x0065DC07: jmp 0x65dc10 */
L_0065DC10:
    _xmm[0].u64[0] = MEM32(esi + 0x4); _xmm[0].u64[1] = 0; /* 0x0065DC10: movss xmm0, dword ptr [esi + 4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x4))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065DC15: ucomiss xmm0, dword ptr [ebx + 4] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065DC19: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065DC1A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065DC62; /* 0x0065DC1D: jnp 0x65dc62 */
L_0065DC1F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DC1F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DC22: mov ecx, esp */
    MEM32(ebp + (-0x50)) = esp; /* 0x0065DC24: mov dword ptr [ebp - 0x50], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065DC27: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065DC2C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0065DC31: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DC38: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DC3B: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065DC3D: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007FB894u); /* 0x0065DC40: push 0x7fb894 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065DC45: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065DC4A: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065DC4E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x239u; /* 0x0065DC55: mov ecx, 0x239 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065DC5A: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065DC5F: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065DC62:
    _xmm[0].u64[0] = MEM32(esi + 0x8); _xmm[0].u64[1] = 0; /* 0x0065DC62: movss xmm0, dword ptr [esi + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065DC67: ucomiss xmm0, dword ptr [ebx + 8] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065DC6B: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065DC6C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065DCB4; /* 0x0065DC6F: jnp 0x65dcb4 */
L_0065DC71:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DC71: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DC74: mov ecx, esp */
    MEM32(ebp + (-0x50)) = esp; /* 0x0065DC76: mov dword ptr [ebp - 0x50], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065DC79: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065DC7E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x0065DC83: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DC8A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DC8D: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065DC8F: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007FB87Cu); /* 0x0065DC92: push 0x7fb87c */
    RECOMP_CALL(sub_00409FA0); /* 0x0065DC97: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0065DC9C: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065DCA0: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x23Au; /* 0x0065DCA7: mov ecx, 0x23a */
    RECOMP_CALL(sub_00668DA0); /* 0x0065DCAC: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065DCB1: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065DCB4:
    PUSH32(esp, edi); /* 0x0065DCB4: push edi */
    ecx = ebx + 0x3C; /* 0x0065DCB5: lea ecx, [ebx + 0x3c] */
    RECOMP_CALL(sub_0065F140); /* 0x0065DCB8: call 0x65f140 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x68)); /* 0x0065DCBD: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, edi); /* 0x0065DCC0: push edi */
    esi = MEM32(eax); /* 0x0065DCC1: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x50)) = esi; /* 0x0065DCC3: mov dword ptr [ebp - 0x50], esi */
    RECOMP_CALL(sub_0065F140); /* 0x0065DCC6: call 0x65f140 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x0065DCCB: lea ecx, [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065DCCE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0065DCD0: push ecx */
    PUSH32(esp, edi); /* 0x0065DCD1: push edi */
    eax = MEM32(eax); /* 0x0065DCD2: mov eax, dword ptr [eax] */
    ecx = esi; /* 0x0065DCD4: mov ecx, esi */
    MEM32(ebp + (-0x54)) = eax; /* 0x0065DCD6: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(esi); /* 0x0065DCD9: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x58)) = edi; /* 0x0065DCDB: mov dword ptr [ebp - 0x58], edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065DCDE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065DCE1: mov esi, eax */
    /* test esi, esi */ /* 0x0065DCE3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DF3E; /* 0x0065DCE5: je 0x65df3e */
L_0065DCEB:
    ebx = MEM32(ebp + (-0x54)); /* 0x0065DCEB: mov ebx, dword ptr [ebp - 0x54] */
    edi = edi; /* 0x0065DCEE: mov edi, edi */
L_0065DCF0:
    edx = MEM32(ebx); /* 0x0065DCF0: mov edx, dword ptr [ebx] */
    eax = ebp + (-0x48); /* 0x0065DCF2: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0065DCF5: push eax */
    PUSH32(esp, edi); /* 0x0065DCF6: push edi */
    ecx = ebx; /* 0x0065DCF7: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x0065DCF9: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0065DCFC: mov ecx, dword ptr [ebp - 0x48] */
    edi = eax; /* 0x0065DCFF: mov edi, eax */
    /* cmp ecx, MEM32(ebp + (-0x2C)) */ /* 0x0065DD01: cmp ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065DD6F; /* 0x0065DD04: je 0x65dd6f */
L_0065DD06:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DD06: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DD09: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065DD0B: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x25u); /* 0x0065DD0E: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065DD10: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065DD17: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB928u); /* 0x0065DD1E: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065DD23: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065DD26: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x0065DD2B: mov dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DD32: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DD35: mov ecx, esp */
    MEM32(ebp + (-0x6C)) = esp; /* 0x0065DD37: mov dword ptr [ebp - 0x6c], esp */
    PUSH32(esp, 0x15u); /* 0x0065DD3A: push 0x15 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065DD3C: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065DD43: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB8C0u); /* 0x0065DD4A: push 0x7fb8c0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065DD4F: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065DD52: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0065DD57: mov byte ptr [ebp - 4], 7 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065DD5B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x24Bu; /* 0x0065DD62: mov ecx, 0x24b */
    RECOMP_CALL(sub_00668DA0); /* 0x0065DD67: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065DD6C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065DD6F:
    ebx = MEM32(ebp + (-0x28)); /* 0x0065DD6F: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x44)), ebx */ /* 0x0065DD72: cmp dword ptr [ebp - 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065DDE3; /* 0x0065DD75: je 0x65dde3 */
L_0065DD77:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DD77: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DD7A: mov ecx, esp */
    MEM32(ebp + (-0x6C)) = esp; /* 0x0065DD7C: mov dword ptr [ebp - 0x6c], esp */
    PUSH32(esp, 0x25u); /* 0x0065DD7F: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065DD81: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065DD88: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB928u); /* 0x0065DD8F: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065DD94: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065DD97: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 8; /* 0x0065DD9C: mov dword ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DDA3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DDA6: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065DDA8: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x17u); /* 0x0065DDAB: push 0x17 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065DDAD: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065DDB4: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB8A8u); /* 0x0065DDBB: push 0x7fb8a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065DDC0: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065DDC3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0065DDC8: mov byte ptr [ebp - 4], 9 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065DDCC: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x24Cu; /* 0x0065DDD3: mov ecx, 0x24c */
    RECOMP_CALL(sub_00668DA0); /* 0x0065DDD8: call 0x668da0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x0065DDDD: mov ebx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065DDE0: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065DDE3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) + 1; /* 0x0065DDE3: inc dword ptr [ebp - 0x58] */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x0065DDE6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DF15; /* 0x0065DDE8: je 0x65df15 */
L_0065DDEE:
    edx = MEM32(ebp + (-0x2C)); /* 0x0065DDEE: mov edx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x4C)) = edx; /* 0x0065DDF1: mov dword ptr [ebp - 0x4c], edx */
    /* test ebx, ebx */ /* 0x0065DDF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DF09; /* 0x0065DDF6: je 0x65df09 */
L_0065DDFC:
    esp = esp; /* 0x0065DDFC: lea esp, [esp] */
L_0065DE00:
    /* test edx, edx */ /* 0x0065DE00: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065DEEB; /* 0x0065DE02: je 0x65deeb */
L_0065DE08:
    _xmm[6].u64[0] = MEM64(0x808C80); _xmm[6].u64[1] = 0; /* 0x0065DE08: movsd xmm6, qword ptr [0x808c80] */
    ecx = edx; /* 0x0065DE10: mov ecx, edx */
    edx = MEM32(ebp + (-0x5C)); /* 0x0065DE12: mov edx, dword ptr [ebp - 0x5c] */
    goto L_0065DE20; /* 0x0065DE15: jmp 0x65de20 */
L_0065DE20:
    eax = (uint32_t)MEM8(edi + 0x3); /* 0x0065DE20: movzx eax, byte ptr [edi + 3] */
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x0065DE24: movss xmm3, dword ptr [0x808cb0] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DE2C: movd xmm0, eax */
    eax = (uint32_t)MEM8(edi + 0x2); /* 0x0065DE30: movzx eax, byte ptr [edi + 2] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065DE34: cvtdq2pd xmm0, xmm0 */
    _xmm[4].u64[0] = (uint32_t)(eax); _xmm[4].u64[1] = 0; /* 0x0065DE38: movd xmm4, eax */
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x0065DE3C: movzx eax, byte ptr [edi + 1] */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0065DE40: mulsd xmm0, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DE44: cvtdq2ps xmm4, xmm4 */
    { xmm_t _s = _xmm[0]; _xmm[5].f32[0] = (float)_s.f64[0]; _xmm[5].f32[1] = (float)_s.f64[1]; _xmm[5].u64[1] = 0; } /* 0x0065DE47: cvtpd2ps xmm5, xmm0 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0065DE4B: movd xmm2, eax */
    eax = (uint32_t)MEM8(esi); /* 0x0065DE4F: movzx eax, byte ptr [esi] */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0065DE52: subss xmm3, xmm5 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DE56: cvtdq2ps xmm2, xmm2 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0065DE59: movd xmm1, eax */
    eax = (uint32_t)MEM8(edi); /* 0x0065DE5D: movzx eax, byte ptr [edi] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DE60: cvtdq2ps xmm1, xmm1 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DE63: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DE67: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065DE6A: mulss xmm1, xmm3 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065DE6E: mulss xmm0, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0065DE72: mulss xmm2, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0065DE76: addss xmm1, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x0065DE7A: mulss xmm4, xmm5 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065DE7E: cvttss2si eax, xmm1 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0065DE82: mov byte ptr [esi], al */
    eax = (uint32_t)MEM8(esi + 0x1); /* 0x0065DE84: movzx eax, byte ptr [esi + 1] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DE88: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DE8C: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065DE8F: mulss xmm0, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0065DE93: addss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065DE97: cvttss2si eax, xmm0 */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x0065DE9B: mov byte ptr [esi + 1], al */
    eax = (uint32_t)MEM8(esi + 0x2); /* 0x0065DE9E: movzx eax, byte ptr [esi + 2] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DEA2: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065DEA6: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065DEA9: mulss xmm0, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0065DEAD: addss xmm0, xmm4 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065DEB1: cvttss2si eax, xmm0 */
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x0065DEB5: mov byte ptr [esi + 2], al */
    eax = (uint32_t)MEM8(esi + 0x3); /* 0x0065DEB8: movzx eax, byte ptr [esi + 3] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065DEBC: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065DEC0: cvtdq2pd xmm0, xmm0 */
    { double _s = _xmm[6].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x0065DEC4: mulsd xmm0, xmm6 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065DEC8: cvtpd2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x8095DC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065DECC: mulss xmm0, dword ptr [0x8095dc] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065DED4: cvttss2si eax, xmm0 */
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x0065DED8: mov byte ptr [esi + 3], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edx + 0x10); /* 0x0065DEDB: add esi, dword ptr [edx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(edx + 0x10); /* 0x0065DEDE: add edi, dword ptr [edx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0065DEE1: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065DE20; /* 0x0065DEE2: jne 0x65de20 */
L_0065DEE8:
    edx = MEM32(ebp + (-0x4C)); /* 0x0065DEE8: mov edx, dword ptr [ebp - 0x4c] */
L_0065DEEB:
    eax = MEM32(ebp + (-0x5C)); /* 0x0065DEEB: mov eax, dword ptr [ebp - 0x5c] */
    ecx = MEM32(eax + 0x10); /* 0x0065DEEE: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebp + (-0x18)); /* 0x0065DEF1: mov eax, dword ptr [ebp - 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x0065DEF4: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0065DEF7: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0065DEF9: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x34)); /* 0x0065DEFB: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0065DEFE: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0065DF00: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0065DF02: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065DE00; /* 0x0065DF03: jne 0x65de00 */
L_0065DF09:
    ebx = MEM32(ebp + (-0x54)); /* 0x0065DF09: mov ebx, dword ptr [ebp - 0x54] */
    ecx = ebx; /* 0x0065DF0C: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x0065DF0E: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065DF10: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    goto L_0065DF18; /* 0x0065DF13: jmp 0x65df18 */
L_0065DF15:
    ebx = MEM32(ebp + (-0x54)); /* 0x0065DF15: mov ebx, dword ptr [ebp - 0x54] */
L_0065DF18:
    esi = MEM32(ebp + (-0x50)); /* 0x0065DF18: mov esi, dword ptr [ebp - 0x50] */
    ecx = esi; /* 0x0065DF1B: mov ecx, esi */
    eax = MEM32(esi); /* 0x0065DF1D: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065DF1F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x0065DF22: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x2C); /* 0x0065DF24: lea ecx, [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x58)); /* 0x0065DF27: mov edi, dword ptr [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x0065DF2A: push ecx */
    PUSH32(esp, edi); /* 0x0065DF2B: push edi */
    ecx = esi; /* 0x0065DF2C: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065DF2E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065DF31: mov esi, eax */
    /* test esi, esi */ /* 0x0065DF33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065DCF0; /* 0x0065DF35: jne 0x65dcf0 */
L_0065DF3B:
    ebx = MEM32(ebp + (-0x5C)); /* 0x0065DF3B: mov ebx, dword ptr [ebp - 0x5c] */
L_0065DF3E:
    edi = MEM32(ebp + (-0x60)); /* 0x0065DF3E: mov edi, dword ptr [ebp - 0x60] */
    esi = MEM32(ebp + (-0x64)); /* 0x0065DF41: mov esi, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0065DF44: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = edi; /* 0x0065DF45: mov dword ptr [ebp - 0x60], edi */
    /* cmp edi, MEM32(ebx + 0x40) */ /* 0x0065DF48: cmp edi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065DC10; /* 0x0065DF4B: jb 0x65dc10 */
L_0065DF51:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065DF51: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065DF54: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065DF5B: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065DF5C: pop edi */
    esi = POP32_VAL(esp); /* 0x0065DF5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065DF5E: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065DF5F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065DF62: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065DF64: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065DF69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065DF6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0065DF6C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0065DF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065DF70u);

L_0065DF70:
    PUSH32(esp, ebp); /* 0x0065DF70: push ebp */
    ebp = esp; /* 0x0065DF71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065DF73: push -1 */
    PUSH32(esp, 0x007BB2A0u); /* 0x0065DF75: push 0x7bb2a0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065DF7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065DF80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0065DF81: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065DF84: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065DF89: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065DF8B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065DF8E: push ebx */
    PUSH32(esp, esi); /* 0x0065DF8F: push esi */
    PUSH32(esp, edi); /* 0x0065DF90: push edi */
    PUSH32(esp, eax); /* 0x0065DF91: push eax */
    eax = ebp + (-0xC); /* 0x0065DF92: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065DF95: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065DF9B: mov esi, ecx */
    /* cmp MEM8(0x86E016), 0 */ /* 0x0065DF9D: cmp byte ptr [0x86e016], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E016)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065E0FF; /* 0x0065DFA4: jne 0x65e0ff */
L_0065DFAA:
    /* cmp MEM8(esi + 0x48), 0 */ /* 0x0065DFAA: cmp byte ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065E0FF; /* 0x0065DFAE: jne 0x65e0ff */
L_0065DFB4:
    { float _s = sse_f32(MEM32(0x8095DC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065DFB4: mulss xmm1, dword ptr [0x8095dc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065DFBC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065DFBE: mov dword ptr [ebp - 0x30], ebx */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065DFC1: cvttss2si eax, xmm1 */
    MEM32(ebp + (-0x48)) = eax; /* 0x0065DFC5: mov dword ptr [ebp - 0x48], eax */
    /* cmp MEM32(esi + 0x40), ebx */ /* 0x0065DFC8: cmp dword ptr [esi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065E0FF; /* 0x0065DFCB: jbe 0x65e0ff */
L_0065DFD1:
    /* cmp ebx, MEM32(esi + 0x40) */ /* 0x0065DFD1: cmp ebx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E031; /* 0x0065DFD4: jb 0x65e031 */
L_0065DFD6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DFD6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DFD9: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065DFDB: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x39u); /* 0x0065DFDE: push 0x39 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065DFE0: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065DFE7: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007FBA20u); /* 0x0065DFEA: push 0x7fba20 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065DFEF: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065DFF1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x0065DFF6: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065DFF9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065DFFC: mov ecx, esp */
    MEM32(ebp + (-0x3C)) = esp; /* 0x0065DFFE: mov dword ptr [ebp - 0x3c], esp */
    PUSH32(esp, 6); /* 0x0065E001: push 6 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E003: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065E00A: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007F9AE8u); /* 0x0065E00D: push 0x7f9ae8 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065E012: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E014: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065E019: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E01D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xA6u; /* 0x0065E024: mov ecx, 0xa6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E029: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E02E: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E031:
    eax = MEM32(esi + 0x3C); /* 0x0065E031: mov eax, dword ptr [esi + 0x3c] */
    edx = ebp + (-0x2C); /* 0x0065E034: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x0065E037: push edx */
    ecx = MEM32(eax + ebx * 4); /* 0x0065E038: mov ecx, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065E03B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0065E03D: push ebx */
    MEM32(ebp + (-0x44)) = ecx; /* 0x0065E03E: mov dword ptr [ebp - 0x44], ecx */
    eax = MEM32(ecx); /* 0x0065E041: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E043: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0065E046: mov edi, eax */
    /* test edi, edi */ /* 0x0065E048: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E0EF; /* 0x0065E04A: je 0x65e0ef */
L_0065E050:
    ecx = MEM32(ebp + (-0x28)); /* 0x0065E050: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065E053: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x2C)); /* 0x0065E054: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x0065E057: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = eax; /* 0x0065E05A: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x40)) = ecx; /* 0x0065E05D: mov dword ptr [ebp - 0x40], ecx */
    /* test ecx, ecx */ /* 0x0065E060: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E0CF; /* 0x0065E062: je 0x65e0cf */
L_0065E064:
    /* test eax, eax */ /* 0x0065E064: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E0B7; /* 0x0065E066: je 0x65e0b7 */
L_0065E068:
    MEM32(ebp + (-0x34)) = eax; /* 0x0065E068: mov dword ptr [ebp - 0x34], eax */
    goto L_0065E070; /* 0x0065E06B: jmp 0x65e070 */
L_0065E070:
    ebx = MEM32(edi); /* 0x0065E070: mov ebx, dword ptr [edi] */
    /* test MEM32(esi + 0x30), ebx */ /* 0x0065E072: test dword ptr [esi + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E0AB; /* 0x0065E075: je 0x65e0ab */
L_0065E077:
    eax = MEM32(ebp + (-0x48)); /* 0x0065E077: mov eax, dword ptr [ebp - 0x48] */
    ecx = MEM32(esi + 0x1C); /* 0x0065E07A: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x18); /* 0x0065E07D: add ecx, dword ptr [esi + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x0065E080: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0065E083: push dword ptr [esi + 0x10] */
    edx = (int32_t)(int8_t)LO8(eax); /* 0x0065E086: movsx edx, al */
    eax = MEM32(esi + 0x2C); /* 0x0065E089: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x28); /* 0x0065E08C: add eax, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x24); /* 0x0065E08F: add eax, dword ptr [esi + 0x24] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x0065E092: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x0065E094: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x0065E094: shl edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0065E096: add edx, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x4C); /* 0x0065E098: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x0065E09B: push eax */
    PUSH32(esp, edi); /* 0x0065E09C: push edi */
    MEM32(ebp + (-0x4C)) = edx; /* 0x0065E09D: mov dword ptr [ebp - 0x4c], edx */
    RECOMP_CALL(sub_00780838); /* 0x0065E0A0: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x0065E0A5: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0065E0A8: add esp, 0xc */
    _flag_k = FK_ADD;
L_0065E0AB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x10); /* 0x0065E0AB: add edi, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0065E0AE: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x34)) = eax; /* 0x0065E0AF: mov dword ptr [ebp - 0x34], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E070; /* 0x0065E0B2: jne 0x65e070 */
L_0065E0B4:
    eax = MEM32(ebp + (-0x38)); /* 0x0065E0B4: mov eax, dword ptr [ebp - 0x38] */
L_0065E0B7:
    ecx = MEM32(esi + 0x10); /* 0x0065E0B7: mov ecx, dword ptr [esi + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x0065E0BA: imul ecx, eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0065E0BD: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0065E0C0: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0065E0C2: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) - 1; /* 0x0065E0C4: dec dword ptr [ebp - 0x40] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x38)); /* 0x0065E0C7: mov eax, dword ptr [ebp - 0x38] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E064; /* 0x0065E0CA: jne 0x65e064 */
L_0065E0CC:
    ebx = MEM32(ebp + (-0x3C)); /* 0x0065E0CC: mov ebx, dword ptr [ebp - 0x3c] */
L_0065E0CF:
    edi = MEM32(ebp + (-0x44)); /* 0x0065E0CF: mov edi, dword ptr [ebp - 0x44] */
    ecx = edi; /* 0x0065E0D2: mov ecx, edi */
    eax = MEM32(edi); /* 0x0065E0D4: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065E0D6: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x0065E0D9: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x0065E0DB: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x0065E0DE: push ecx */
    PUSH32(esp, ebx); /* 0x0065E0DF: push ebx */
    ecx = edi; /* 0x0065E0E0: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E0E2: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0065E0E5: mov edi, eax */
    /* test edi, edi */ /* 0x0065E0E7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065E050; /* 0x0065E0E9: jne 0x65e050 */
L_0065E0EF:
    ebx = MEM32(ebp + (-0x30)); /* 0x0065E0EF: mov ebx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065E0F2: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065E0F3: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(esi + 0x40) */ /* 0x0065E0F6: cmp ebx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E031; /* 0x0065E0F9: jb 0x65e031 */
L_0065E0FF:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065E0FF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065E102: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065E109: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065E10A: pop edi */
    esi = POP32_VAL(esp); /* 0x0065E10B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065E10C: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065E10D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065E110: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065E112: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065E117: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065E119: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065E11A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065E120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065E120u);

L_0065E120:
    PUSH32(esp, ebp); /* 0x0065E120: push ebp */
    ebp = esp; /* 0x0065E121: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065E123: push -1 */
    PUSH32(esp, 0x007BB320u); /* 0x0065E125: push 0x7bb320 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065E12A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065E130: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0065E131: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065E134: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065E139: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065E13B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065E13E: push ebx */
    PUSH32(esp, esi); /* 0x0065E13F: push esi */
    PUSH32(esp, edi); /* 0x0065E140: push edi */
    PUSH32(esp, eax); /* 0x0065E141: push eax */
    eax = ebp + (-0xC); /* 0x0065E142: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065E145: mov dword ptr fs:[0], eax */
    _xmm[0] = _xmm[2]; /* 0x0065E14B: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x44)) = _xmm[0].u32[0]; /* 0x0065E14E: movss dword ptr [ebp - 0x44], xmm0 */
    MEM32(ebp + (-0x40)) = _xmm[1].u32[0]; /* 0x0065E153: movss dword ptr [ebp - 0x40], xmm1 */
    ebx = ecx; /* 0x0065E158: mov ebx, ecx */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(ebx + 0x4))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E15A: ucomiss xmm1, dword ptr [ebx + 4] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065E15E: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065E15F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_0065E172; /* 0x0065E162: jp 0x65e172 */
L_0065E164:
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebx + 0x8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E164: ucomiss xmm0, dword ptr [ebx + 8] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065E168: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065E169: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065E200; /* 0x0065E16C: jnp 0x65e200 */
L_0065E172:
    RECOMP_CALL(sub_0065D6C0); /* 0x0065E172: call 0x65d6c0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x40)); _xmm[0].u64[1] = 0; /* 0x0065E177: movss xmm0, dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_007803B0); /* 0x0065E17C: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x0065E181: mov dword ptr [ebp - 0x2c], eax */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E184: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E188: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E18C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E18C: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E18F: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E198: cvtpd2ps xmm0, xmm0 */
    MEM32(ebx + 0x4) = _xmm[0].u32[0]; /* 0x0065E19C: movss dword ptr [ebx + 4], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x44)); _xmm[0].u64[1] = 0; /* 0x0065E1A1: movss xmm0, dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_007803B0); /* 0x0065E1A6: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x0065E1AB: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebx + 0x10) = 4; /* 0x0065E1AE: mov dword ptr [ebx + 0x10], 4 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E1B5: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E1B9: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E1BD: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E1BD: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E1C0: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E1C9: cvtpd2ps xmm0, xmm0 */
    MEM32(ebx + 0x8) = _xmm[0].u32[0]; /* 0x0065E1CD: movss dword ptr [ebx + 8], xmm0 */
    RECOMP_CALL(sub_00496250); /* 0x0065E1D2: call 0x496250 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x0065E1D7: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x0065E1DA: push ecx */
    ecx = eax; /* 0x0065E1DB: mov ecx, eax */
    edx = MEM32(eax); /* 0x0065E1DD: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x0065E1DF: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x34)) = eax; /* 0x0065E1E2: mov dword ptr [ebp - 0x34], eax */
    /* test eax, eax */ /* 0x0065E1E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E52B; /* 0x0065E1E7: je 0x65e52b */
L_0065E1ED:
    eax = ebp + (-0x34); /* 0x0065E1ED: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0065E1F0: push eax */
    ecx = ebx + 0x3C; /* 0x0065E1F1: lea ecx, [ebx + 0x3c] */
    RECOMP_CALL(sub_00644D50); /* 0x0065E1F4: call 0x644d50 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x20) = 1; /* 0x0065E1F9: mov dword ptr [ebx + 0x20], 1 */
L_0065E200:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0065E200: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = esi; /* 0x0065E202: mov dword ptr [ebp - 0x34], esi */
    /* cmp MEM32(ebx + 0x40), esi */ /* 0x0065E205: cmp dword ptr [ebx + 0x40], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065E52B; /* 0x0065E208: jbe 0x65e52b */
L_0065E20E:
    /* cmp esi, MEM32(ebx + 0x40) */ /* 0x0065E20E: cmp esi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E270; /* 0x0065E211: jb 0x65e270 */
L_0065E213:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E213: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E216: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0065E218: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x39u); /* 0x0065E21B: push 0x39 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E21D: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065E224: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007FBA20u); /* 0x0065E227: push 0x7fba20 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E22C: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E22F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x0065E234: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E237: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E23A: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0065E23C: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 6); /* 0x0065E23F: push 6 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E241: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065E248: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007F9AE8u); /* 0x0065E24B: push 0x7f9ae8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E250: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E253: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065E258: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E25C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xA6u; /* 0x0065E263: mov ecx, 0xa6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E268: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E26D: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E270:
    eax = MEM32(ebx + 0x3C); /* 0x0065E270: mov eax, dword ptr [ebx + 0x3c] */
    edx = ebp + (-0x2C); /* 0x0065E273: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x0065E276: push edx */
    PUSH32(esp, 0); /* 0x0065E277: push 0 */
    ecx = MEM32(eax + esi * 4); /* 0x0065E279: mov ecx, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x0065E27C: mov dword ptr [ebp - 0x38], ecx */
    eax = MEM32(ecx); /* 0x0065E27F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E281: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065E284: mov esi, eax */
    /* test esi, esi */ /* 0x0065E286: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065E351; /* 0x0065E288: jne 0x65e351 */
L_0065E28E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E28E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E291: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0065E293: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x25u); /* 0x0065E296: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E298: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = eax; /* 0x0065E29F: mov dword ptr [ecx + 0x10], eax */
    PUSH32(esp, 0x007FB928u); /* 0x0065E2A2: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0065E2A7: mov byte ptr [ecx], al */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E2A9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0065E2AE: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E2B5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E2B8: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0065E2BA: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 3); /* 0x0065E2BD: push 3 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E2BF: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065E2C6: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007FB8ECu); /* 0x0065E2C9: push 0x7fb8ec */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E2CE: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E2D1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065E2D6: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E2DA: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x2E6u; /* 0x0065E2E1: mov ecx, 0x2e6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E2E6: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0065E2EB: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x0065E2EE: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0065E2F0: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x25u); /* 0x0065E2F3: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E2F5: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065E2FC: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007FB928u); /* 0x0065E2FF: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E304: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E307: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 8; /* 0x0065E30C: mov dword ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E313: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E316: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0065E318: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x1Bu); /* 0x0065E31B: push 0x1b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E31D: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065E324: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007FB97Cu); /* 0x0065E327: push 0x7fb97c */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E32C: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E32F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0065E334: mov byte ptr [ebp - 4], 9 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E338: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x311u; /* 0x0065E33F: mov ecx, 0x311 */
    RECOMP_CALL(sub_00668410); /* 0x0065E344: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E349: add esp, 0x30 */
    _flag_k = FK_ADD;
    goto L_0065E51B; /* 0x0065E34C: jmp 0x65e51b */
L_0065E351:
    eax = MEM32(ebp + (-0x2C)); /* 0x0065E351: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x0065E354: mov dword ptr [ebp - 0x30], eax */
    ecx = MEM32(ebp + (-0x28)); /* 0x0065E357: mov ecx, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + 0xC); /* 0x0065E35A: mov edi, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E35D: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E361: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E365: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E365: shr eax, 0x1f */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x0065E368: mov dword ptr [ebp - 0x3c], ecx */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E36B: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E374: cvtpd2ps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebp + (-0x40)))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E378: ucomiss xmm0, dword ptr [ebp - 0x40] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065E37C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065E37D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065E3EE; /* 0x0065E380: jnp 0x65e3ee */
L_0065E382:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E382: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E385: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065E387: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x25u); /* 0x0065E38A: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E38C: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065E393: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB928u); /* 0x0065E39A: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E39F: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E3A2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x0065E3A7: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E3AE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E3B1: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065E3B3: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x10u); /* 0x0065E3B6: push 0x10 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E3B8: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065E3BF: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB8D8u); /* 0x0065E3C6: push 0x7fb8d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E3CB: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E3CE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0065E3D3: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E3D7: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x2F0u; /* 0x0065E3DE: mov ecx, 0x2f0 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E3E3: call 0x668da0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x0065E3E8: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E3EB: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E3EE:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x0065E3EE: movd xmm0, ecx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E3F2: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x0065E3F6: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x0065E3F6: shr ecx, 0x1f */
    { double _s = sse_f64(MEM64(ecx * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E3F9: addsd xmm0, qword ptr [ecx*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E402: cvtpd2ps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebp + (-0x44)))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E406: ucomiss xmm0, dword ptr [ebp - 0x44] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0065E40A: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0065E40B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0065E479; /* 0x0065E40E: jnp 0x65e479 */
L_0065E410:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E410: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E413: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065E415: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x25u); /* 0x0065E418: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E41A: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065E421: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB928u); /* 0x0065E428: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E42D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E430: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x0065E435: mov dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E43C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E43F: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065E441: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x12u); /* 0x0065E444: push 0x12 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E446: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065E44D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB998u); /* 0x0065E454: push 0x7fb998 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065E459: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E45C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0065E461: mov byte ptr [ebp - 4], 7 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E465: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x2F1u; /* 0x0065E46C: mov ecx, 0x2f1 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E471: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E476: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E479:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x0065E479: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065E513; /* 0x0065E47D: jbe 0x65e513 */
L_0065E483:
    eax = MEM32(ebp + (-0x30)); /* 0x0065E483: mov eax, dword ptr [ebp - 0x30] */
    /* test eax, eax */ /* 0x0065E486: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E4FD; /* 0x0065E488: je 0x65e4fd */
L_0065E48A:
    SET_LO8(edx, MEM8(ebp + 0x10)); /* 0x0065E48A: mov dl, byte ptr [ebp + 0x10] */
    ecx = eax; /* 0x0065E48D: mov ecx, eax */
    /* nop */ /* 0x0065E48F: nop  */
L_0065E490:
    eax = (uint32_t)MEM8(esi + 0x3); /* 0x0065E490: movzx eax, byte ptr [esi + 3] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E494: movd xmm0, eax */
    eax = (uint32_t)MEM8(edi); /* 0x0065E498: movzx eax, byte ptr [edi] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E49B: cvtdq2ps xmm0, xmm0 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0065E49E: movd xmm1, eax */
    eax = (uint32_t)MEM8(edi + 0x2); /* 0x0065E4A2: movzx eax, byte ptr [edi + 2] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E4A6: cvtdq2ps xmm1, xmm1 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0065E4A9: movd xmm2, eax */
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x0065E4AD: movzx eax, byte ptr [edi + 1] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E4B1: cvtdq2ps xmm2, xmm2 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x0065E4B4: movd xmm3, eax */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E4B8: cvtdq2ps xmm3, xmm3 */
    /* test LO8(edx), LO8(edx) */ /* 0x0065E4BB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E4CA; /* 0x0065E4BD: je 0x65e4ca */
L_0065E4BF:
    eax = (uint32_t)MEM8(edi + 0x3); /* 0x0065E4BF: movzx eax, byte ptr [edi + 3] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E4C3: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E4C7: cvtdq2ps xmm0, xmm0 */
L_0065E4CA:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065E4CA: cvttss2si eax, xmm1 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0065E4CE: mov byte ptr [esi], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[3].f32[0], 1); /* 0x0065E4D0: cvttss2si eax, xmm3 */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x0065E4D4: mov byte ptr [esi + 1], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0065E4D7: cvttss2si eax, xmm2 */
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x0065E4DB: mov byte ptr [esi + 2], al */
    /* test LO8(edx), LO8(edx) */ /* 0x0065E4DE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065E4EA; /* 0x0065E4E0: jne 0x65e4ea */
L_0065E4E2:
    _xmm[0].u64[0] = MEM32(0x8095DC); _xmm[0].u64[1] = 0; /* 0x0065E4E2: movss xmm0, dword ptr [0x8095dc] */
L_0065E4EA:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065E4EA: cvttss2si eax, xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0065E4EE: add edi, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x0065E4F1: mov byte ptr [esi + 3], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x10); /* 0x0065E4F4: add esi, dword ptr [ebx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0065E4F7: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E490; /* 0x0065E4F8: jne 0x65e490 */
L_0065E4FA:
    eax = MEM32(ebp + (-0x30)); /* 0x0065E4FA: mov eax, dword ptr [ebp - 0x30] */
L_0065E4FD:
    edx = MEM32(ebx + 0x10); /* 0x0065E4FD: mov edx, dword ptr [ebx + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x0065E500: imul edx, eax */
    eax = MEM32(ebp + (-0x18)); /* 0x0065E503: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0065E506: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0065E508: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) - 1; /* 0x0065E50A: dec dword ptr [ebp - 0x3c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E483; /* 0x0065E50D: jne 0x65e483 */
L_0065E513:
    ecx = MEM32(ebp + (-0x38)); /* 0x0065E513: mov ecx, dword ptr [ebp - 0x38] */
    eax = MEM32(ecx); /* 0x0065E516: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065E518: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_0065E51B:
    esi = MEM32(ebp + (-0x34)); /* 0x0065E51B: mov esi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0065E51E: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = esi; /* 0x0065E51F: mov dword ptr [ebp - 0x34], esi */
    /* cmp esi, MEM32(ebx + 0x40) */ /* 0x0065E522: cmp esi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E270; /* 0x0065E525: jb 0x65e270 */
L_0065E52B:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065E52B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065E52E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065E535: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065E536: pop edi */
    esi = POP32_VAL(esp); /* 0x0065E537: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065E538: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065E539: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065E53C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065E53E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065E543: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065E545: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0065E546: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0065E550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065E550u);

L_0065E550:
    PUSH32(esp, ebp); /* 0x0065E550: push ebp */
    ebp = esp; /* 0x0065E551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065E553: push -1 */
    PUSH32(esp, 0x007BB360u); /* 0x0065E555: push 0x7bb360 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065E55A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065E560: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x0065E561: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065E564: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065E569: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065E56B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065E56E: push ebx */
    PUSH32(esp, esi); /* 0x0065E56F: push esi */
    PUSH32(esp, edi); /* 0x0065E570: push edi */
    PUSH32(esp, eax); /* 0x0065E571: push eax */
    eax = ebp + (-0xC); /* 0x0065E572: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065E575: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0065E57B: mov edi, ecx */
    /* cmp MEM8(edi + 0x48), 0 */ /* 0x0065E57D: cmp byte ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065E876; /* 0x0065E581: jne 0x65e876 */
L_0065E587:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065E587: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065E589: mov dword ptr [ebp - 0x30], ebx */
    /* cmp MEM32(edi + 0x40), ebx */ /* 0x0065E58C: cmp dword ptr [edi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065E876; /* 0x0065E58F: jbe 0x65e876 */
L_0065E595:
    /* cmp ebx, MEM32(edi + 0x40) */ /* 0x0065E595: cmp ebx, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E5F5; /* 0x0065E598: jb 0x65e5f5 */
L_0065E59A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E59A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E59D: mov ecx, esp */
    MEM32(ebp + (-0x40)) = esp; /* 0x0065E59F: mov dword ptr [ebp - 0x40], esp */
    PUSH32(esp, 0x39u); /* 0x0065E5A2: push 0x39 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E5A4: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065E5AB: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007FBA20u); /* 0x0065E5AE: push 0x7fba20 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065E5B3: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E5B5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x0065E5BA: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E5BD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E5C0: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0065E5C2: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 6); /* 0x0065E5C5: push 6 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E5C7: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065E5CE: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007F9AE8u); /* 0x0065E5D1: push 0x7f9ae8 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065E5D6: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E5D8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065E5DD: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E5E1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xA6u; /* 0x0065E5E8: mov ecx, 0xa6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E5ED: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E5F2: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E5F5:
    eax = MEM32(edi + 0x3C); /* 0x0065E5F5: mov eax, dword ptr [edi + 0x3c] */
    edx = ebp + (-0x2C); /* 0x0065E5F8: lea edx, [ebp - 0x2c] */
    esi = MEM32(ebp + 0xC); /* 0x0065E5FB: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0065E5FE: push edx */
    ecx = MEM32(eax + ebx * 4); /* 0x0065E5FF: mov ecx, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065E602: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0065E604: push ebx */
    MEM32(ebp + (-0x40)) = ecx; /* 0x0065E605: mov dword ptr [ebp - 0x40], ecx */
    eax = MEM32(ecx); /* 0x0065E608: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E60A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0065E60D: mov edx, eax */
    /* test edx, edx */ /* 0x0065E60F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E866; /* 0x0065E611: je 0x65e866 */
L_0065E617:
    eax = MEM32(ebp + (-0x28)); /* 0x0065E617: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065E61A: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x0065E61B: mov dword ptr [ebp - 0x3c], ebx */
    ebx = MEM32(ebp + (-0x2C)); /* 0x0065E61E: mov ebx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x34)) = eax; /* 0x0065E621: mov dword ptr [ebp - 0x34], eax */
    /* test eax, eax */ /* 0x0065E624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E841; /* 0x0065E626: je 0x65e841 */
L_0065E62C:
    esp = esp; /* 0x0065E62C: lea esp, [esp] */
L_0065E630:
    /* test ebx, ebx */ /* 0x0065E630: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065E829; /* 0x0065E632: je 0x65e829 */
L_0065E638:
    ecx = MEM32(ebp + 0x8); /* 0x0065E638: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x0065E63B: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0065E63D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0065E63D: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x0065E640: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u64[0] = MEM32(0x8095DC); _xmm[6].u64[1] = 0; /* 0x0065E645: movss xmm6, dword ptr [0x8095dc] */
    _xmm[7].u64[0] = MEM64(0x808FB8); _xmm[7].u64[1] = 0; /* 0x0065E64D: movsd xmm7, qword ptr [0x808fb8] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E655: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E659: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E65D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E65D: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E660: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = ecx; /* 0x0065E669: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0065E66B: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0065E66B: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x0065E66E: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x0065E673: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E677: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E67B: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E67F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E67F: shr eax, 0x1f */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x0065E682: divss xmm1, xmm6 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E686: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = (uint32_t)LO8(ecx); /* 0x0065E68F: movzx eax, cl */
    ecx = ebx; /* 0x0065E692: mov ecx, ebx */
    MEM32(ebp + (-0x48)) = _xmm[1].u32[0]; /* 0x0065E694: movss dword ptr [ebp - 0x48], xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[4].f32[0] = (float)_s.f64[0]; _xmm[4].f32[1] = (float)_s.f64[1]; _xmm[4].u64[1] = 0; } /* 0x0065E699: cvtpd2ps xmm4, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E69D: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E6A1: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E6A5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E6A5: shr eax, 0x1f */
    { float _s = _xmm[6].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x0065E6A8: divss xmm4, xmm6 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E6AC: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    MEM32(ebp + (-0x38)) = _xmm[4].u32[0]; /* 0x0065E6B5: movss dword ptr [ebp - 0x38], xmm4 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E6BA: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E6BE: divss xmm0, xmm6 */
    MEM32(ebp + (-0x44)) = _xmm[0].u32[0]; /* 0x0065E6C2: movss dword ptr [ebp - 0x44], xmm0 */
    goto L_0065E6D0; /* 0x0065E6C7: jmp 0x65e6d0 */
L_0065E6D0:
    eax = (uint32_t)MEM8(esi + 0x3); /* 0x0065E6D0: movzx eax, byte ptr [esi + 3] */
    _xmm[2] = _xmm[7]; /* 0x0065E6D4: movapd xmm2, xmm7 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x0065E6D8: movd xmm3, eax */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E6DC: cvtdq2ps xmm3, xmm3 */
    eax = (uint32_t)MEM8(edx + 0x2); /* 0x0065E6DF: movzx eax, byte ptr [edx + 2] */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] / _s); } /* 0x0065E6E3: divss xmm3, xmm6 */
    { float _a = _xmm[3].f32[0], _b = _xmm[3].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E6E7: cvtps2pd xmm0, xmm3 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x0065E6EA: subsd xmm2, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E6EE: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E6F2: cvtdq2ps xmm0, xmm0 */
    eax = (uint32_t)MEM8(esi + 0x2); /* 0x0065E6F5: movzx eax, byte ptr [esi + 2] */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E6F9: divss xmm0, xmm6 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E6FD: mulss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0065E701: cvtps2pd xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E704: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E708: cvtdq2ps xmm0, xmm0 */
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x0065E70B: movzx eax, byte ptr [edx + 1] */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x0065E70F: mulsd xmm1, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E713: divss xmm0, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E717: mulss xmm0, xmm3 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E71B: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x0065E71E: addsd xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E722: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E726: cvtdq2ps xmm0, xmm0 */
    eax = (uint32_t)MEM8(esi + 0x1); /* 0x0065E729: movzx eax, byte ptr [esi + 1] */
    { xmm_t _s = _xmm[1]; _xmm[5].f32[0] = (float)_s.f64[0]; _xmm[5].f32[1] = (float)_s.f64[1]; _xmm[5].u64[1] = 0; } /* 0x0065E72D: cvtpd2ps xmm5, xmm1 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E731: divss xmm0, xmm6 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E735: mulss xmm0, xmm4 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0065E739: cvtps2pd xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E73C: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E740: cvtdq2ps xmm0, xmm0 */
    eax = (uint32_t)MEM8(edx); /* 0x0065E743: movzx eax, byte ptr [edx] */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x0065E746: mulsd xmm1, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E74A: divss xmm0, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E74E: mulss xmm0, xmm3 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E752: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x0065E755: addsd xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E759: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E75D: cvtdq2ps xmm0, xmm0 */
    eax = (uint32_t)MEM8(esi); /* 0x0065E760: movzx eax, byte ptr [esi] */
    { xmm_t _s = _xmm[1]; _xmm[4].f32[0] = (float)_s.f64[0]; _xmm[4].f32[1] = (float)_s.f64[1]; _xmm[4].u64[1] = 0; } /* 0x0065E763: cvtpd2ps xmm4, xmm1 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E767: divss xmm0, xmm6 */
    { float _s = sse_f32(MEM32(ebp + (-0x44))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E76B: mulss xmm0, dword ptr [ebp - 0x44] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0065E770: cvtps2pd xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E773: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065E777: cvtdq2ps xmm0, xmm0 */
    { double _s = _xmm[2].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x0065E77A: mulsd xmm1, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065E77E: divss xmm0, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E782: mulss xmm0, xmm3 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E786: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x0065E789: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0065E78D: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[5].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E790: comiss xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    { xmm_t _s = _xmm[1]; _xmm[3].f32[0] = (float)_s.f64[0]; _xmm[3].f32[1] = (float)_s.f64[1]; _xmm[3].u64[1] = 0; } /* 0x0065E793: cvtpd2ps xmm3, xmm1 */
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x0065E797: movss xmm1, dword ptr [0x808cb0] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0065E7AF; /* 0x0065E79F: ja 0x65e7af */
L_0065E7A1:
    _flag_a = SSE_COMI(_xmm[5].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E7A1: comiss xmm5, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0065E7AC; /* 0x0065E7A4: jbe 0x65e7ac */
L_0065E7A6:
    _xmm[0] = _xmm[7]; /* 0x0065E7A6: movapd xmm0, xmm7 */
    goto L_0065E7AF; /* 0x0065E7AA: jmp 0x65e7af */
L_0065E7AC:
    { float _a = _xmm[5].f32[0], _b = _xmm[5].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E7AC: cvtps2pd xmm0, xmm5 */
L_0065E7AF:
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x0065E7AF: xorps xmm5, xmm5 */
    _flag_a = SSE_COMI(_xmm[5].f32[0], _xmm[4].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E7B2: comiss xmm5, xmm4 */
    _flag_k = FK_EFLAGS;
    { xmm_t _s = _xmm[0]; _xmm[2].f32[0] = (float)_s.f64[0]; _xmm[2].f32[1] = (float)_s.f64[1]; _xmm[2].u64[1] = 0; } /* 0x0065E7B5: cvtpd2ps xmm2, xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0065E7C0; /* 0x0065E7B9: jbe 0x65e7c0 */
L_0065E7BB:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0065E7BB: xorps xmm0, xmm0 */
    goto L_0065E7CE; /* 0x0065E7BE: jmp 0x65e7ce */
L_0065E7C0:
    _flag_a = SSE_COMI(_xmm[4].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E7C0: comiss xmm4, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0065E7CB; /* 0x0065E7C3: jbe 0x65e7cb */
L_0065E7C5:
    _xmm[0] = _xmm[7]; /* 0x0065E7C5: movapd xmm0, xmm7 */
    goto L_0065E7CE; /* 0x0065E7C9: jmp 0x65e7ce */
L_0065E7CB:
    { float _a = _xmm[4].f32[0], _b = _xmm[4].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E7CB: cvtps2pd xmm0, xmm4 */
L_0065E7CE:
    _flag_a = SSE_COMI(_xmm[5].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E7CE: comiss xmm5, xmm3 */
    _flag_k = FK_EFLAGS;
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x0065E7D1: cvtpd2ps xmm1, xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0065E7DC; /* 0x0065E7D5: jbe 0x65e7dc */
L_0065E7D7:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0065E7D7: xorps xmm0, xmm0 */
    goto L_0065E7EE; /* 0x0065E7DA: jmp 0x65e7ee */
L_0065E7DC:
    _flag_a = SSE_COMI(_xmm[3].f32[0], sse_f32(MEM32(0x808CB0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065E7DC: comiss xmm3, dword ptr [0x808cb0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0065E7EB; /* 0x0065E7E3: jbe 0x65e7eb */
L_0065E7E5:
    _xmm[0] = _xmm[7]; /* 0x0065E7E5: movapd xmm0, xmm7 */
    goto L_0065E7EE; /* 0x0065E7E9: jmp 0x65e7ee */
L_0065E7EB:
    { float _a = _xmm[3].f32[0], _b = _xmm[3].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E7EB: cvtps2pd xmm0, xmm3 */
L_0065E7EE:
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E7EE: cvtpd2ps xmm0, xmm0 */
    _xmm[4].u64[0] = MEM32(ebp + (-0x38)); _xmm[4].u64[1] = 0; /* 0x0065E7F2: movss xmm4, dword ptr [ebp - 0x38] */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E7F7: mulss xmm0, xmm6 */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065E7FB: mulss xmm1, xmm6 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065E7FF: cvttss2si eax, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0065E803: mulss xmm2, xmm6 */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0065E807: mov byte ptr [edx], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065E809: cvttss2si eax, xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x48)); _xmm[1].u64[1] = 0; /* 0x0065E80D: movss xmm1, dword ptr [ebp - 0x48] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x0065E812: mov byte ptr [edx + 1], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0065E815: cvttss2si eax, xmm2 */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x0065E819: mov byte ptr [edx + 2], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0x10); /* 0x0065E81C: add edx, dword ptr [edi + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x10); /* 0x0065E81F: add esi, dword ptr [edi + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0065E822: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E6D0; /* 0x0065E823: jne 0x65e6d0 */
L_0065E829:
    eax = MEM32(edi + 0x10); /* 0x0065E829: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(ebp + (-0x18)); /* 0x0065E82C: mov ecx, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x0065E82F: imul eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0065E832: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0065E834: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x0065E836: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) - 1; /* 0x0065E838: dec dword ptr [ebp - 0x34] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065E630; /* 0x0065E83B: jne 0x65e630 */
L_0065E841:
    ebx = MEM32(ebp + (-0x40)); /* 0x0065E841: mov ebx, dword ptr [ebp - 0x40] */
    ecx = ebx; /* 0x0065E844: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x0065E846: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065E848: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x0065E84B: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x2C); /* 0x0065E84D: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x0065E850: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0065E851: push dword ptr [ebp - 0x3c] */
    ecx = ebx; /* 0x0065E854: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E856: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x3C)); /* 0x0065E859: mov ebx, dword ptr [ebp - 0x3c] */
    edx = eax; /* 0x0065E85C: mov edx, eax */
    /* test edx, edx */ /* 0x0065E85E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065E617; /* 0x0065E860: jne 0x65e617 */
L_0065E866:
    ebx = MEM32(ebp + (-0x30)); /* 0x0065E866: mov ebx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065E869: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065E86A: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(edi + 0x40) */ /* 0x0065E86D: cmp ebx, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E5F5; /* 0x0065E870: jb 0x65e5f5 */
L_0065E876:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065E876: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065E879: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065E880: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065E881: pop edi */
    esi = POP32_VAL(esp); /* 0x0065E882: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065E883: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065E884: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065E887: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065E889: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065E88E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065E890: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0065E891: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0065E8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065E8A0u);

L_0065E8A0:
    PUSH32(esp, ebp); /* 0x0065E8A0: push ebp */
    ebp = esp; /* 0x0065E8A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065E8A3: push -1 */
    PUSH32(esp, 0x007BB3A0u); /* 0x0065E8A5: push 0x7bb3a0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065E8AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065E8B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0065E8B1: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065E8B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065E8B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065E8BB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065E8BE: push ebx */
    PUSH32(esp, esi); /* 0x0065E8BF: push esi */
    PUSH32(esp, edi); /* 0x0065E8C0: push edi */
    PUSH32(esp, eax); /* 0x0065E8C1: push eax */
    eax = ebp + (-0xC); /* 0x0065E8C2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065E8C5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065E8CB: mov esi, ecx */
    MEM32(ebp + (-0x44)) = esi; /* 0x0065E8CD: mov dword ptr [ebp - 0x44], esi */
    /* cmp MEM8(0x86E016), 0 */ /* 0x0065E8D0: cmp byte ptr [0x86e016], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E016)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EAB0; /* 0x0065E8D7: jne 0x65eab0 */
L_0065E8DD:
    /* cmp MEM8(esi + 0x48), 0 */ /* 0x0065E8DD: cmp byte ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EAB0; /* 0x0065E8E1: jne 0x65eab0 */
L_0065E8E7:
    ecx = MEM32(ebp + 0x8); /* 0x0065E8E7: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065E8EA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[1].u64[0] = MEM32(0x808B68); _xmm[1].u64[1] = 0; /* 0x0065E8EC: movss xmm1, dword ptr [0x808b68] */
    eax = ecx; /* 0x0065E8F4: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x0065E8F6: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x0065E8F6: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x0065E8F9: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065E8FE: mov dword ptr [ebp - 0x30], ebx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E901: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E905: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E909: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E909: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E90C: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = ecx; /* 0x0065E915: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x0065E917: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x0065E917: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x0065E91A: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E91F: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E923: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x48)) = _xmm[0].u32[0]; /* 0x0065E927: movss dword ptr [ebp - 0x48], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E92C: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E930: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E934: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E934: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E937: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = (uint32_t)LO8(ecx); /* 0x0065E940: movzx eax, cl */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E943: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E947: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x40)) = _xmm[0].u32[0]; /* 0x0065E94B: movss dword ptr [ebp - 0x40], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065E950: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065E954: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065E958: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065E958: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065E95B: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0065E964: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065E968: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4C)) = _xmm[0].u32[0]; /* 0x0065E96C: movss dword ptr [ebp - 0x4c], xmm0 */
    /* cmp MEM32(esi + 0x40), ebx */ /* 0x0065E971: cmp dword ptr [esi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065EAB0; /* 0x0065E974: jbe 0x65eab0 */
L_0065E97A:
    /* cmp ebx, MEM32(esi + 0x40) */ /* 0x0065E97A: cmp ebx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E9DA; /* 0x0065E97D: jb 0x65e9da */
L_0065E97F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E97F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E982: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0065E984: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x39u); /* 0x0065E987: push 0x39 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E989: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065E990: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007FBA20u); /* 0x0065E993: push 0x7fba20 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065E998: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E99A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x0065E99F: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065E9A2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065E9A5: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0065E9A7: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 6); /* 0x0065E9AA: push 6 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065E9AC: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = ebx; /* 0x0065E9B3: mov dword ptr [ecx + 0x10], ebx */
    PUSH32(esp, 0x007F9AE8u); /* 0x0065E9B6: push 0x7f9ae8 */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0065E9BB: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065E9BD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065E9C2: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065E9C6: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xA6u; /* 0x0065E9CD: mov ecx, 0xa6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065E9D2: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065E9D7: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065E9DA:
    eax = MEM32(esi + 0x3C); /* 0x0065E9DA: mov eax, dword ptr [esi + 0x3c] */
    ecx = ebp + (-0x2C); /* 0x0065E9DD: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x0065E9E0: push ecx */
    edi = MEM32(eax + ebx * 4); /* 0x0065E9E1: mov edi, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065E9E4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0065E9E6: push ebx */
    ecx = edi; /* 0x0065E9E7: mov ecx, edi */
    MEM32(ebp + (-0x34)) = edi; /* 0x0065E9E9: mov dword ptr [ebp - 0x34], edi */
    eax = MEM32(edi); /* 0x0065E9EC: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065E9EE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065E9F1: mov esi, eax */
    /* test esi, esi */ /* 0x0065E9F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EA9D; /* 0x0065E9F5: je 0x65ea9d */
L_0065E9FB:
    goto L_0065EA00; /* 0x0065E9FB: jmp 0x65ea00 */
L_0065EA00:
    eax = MEM32(ebp + (-0x2C)); /* 0x0065EA00: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065EA03: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ebx; /* 0x0065EA04: mov dword ptr [ebp - 0x38], ebx */
    ebx = MEM32(ebp + (-0x28)); /* 0x0065EA07: mov ebx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x0065EA0A: mov dword ptr [ebp - 0x3c], eax */
    /* test ebx, ebx */ /* 0x0065EA0D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EA7D; /* 0x0065EA0F: je 0x65ea7d */
L_0065EA11:
    ecx = esi + 0x1; /* 0x0065EA11: lea ecx, [esi + 1] */
    /* test eax, eax */ /* 0x0065EA14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EA74; /* 0x0065EA16: je 0x65ea74 */
L_0065EA18:
    _xmm[3].u64[0] = MEM32(ebp + (-0x4C)); _xmm[3].u64[1] = 0; /* 0x0065EA18: movss xmm3, dword ptr [ebp - 0x4c] */
    edx = esi; /* 0x0065EA1D: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x0065EA1F: sub edx, ecx */
    _flag_k = FK_CMP;
    edi = eax; /* 0x0065EA21: mov edi, eax */
L_0065EA23:
    eax = (uint32_t)MEM8(edx + ecx + 0x2); /* 0x0065EA23: movzx eax, byte ptr [edx + ecx + 2] */
    ecx = ecx + 0x4; /* 0x0065EA28: lea ecx, [ecx + 4] */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0065EA2B: movd xmm2, eax */
    eax = (uint32_t)MEM8(ecx + (-0x4)); /* 0x0065EA2F: movzx eax, byte ptr [ecx - 4] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EA33: cvtdq2ps xmm2, xmm2 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0065EA36: movd xmm1, eax */
    eax = (uint32_t)MEM8(edx + ecx + (-0x4)); /* 0x0065EA3A: movzx eax, byte ptr [edx + ecx - 4] */
    { float _s = sse_f32(MEM32(ebp + (-0x48))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0065EA3F: mulss xmm2, dword ptr [ebp - 0x48] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EA44: cvtdq2ps xmm1, xmm1 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065EA47: movd xmm0, eax */
    { float _s = sse_f32(MEM32(ebp + (-0x40))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065EA4B: mulss xmm1, dword ptr [ebp - 0x40] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EA50: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065EA53: mulss xmm0, xmm3 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065EA57: cvttss2si eax, xmm0 */
    MEM8(edx + ecx + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0065EA5B: mov byte ptr [edx + ecx - 4], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0065EA5F: cvttss2si eax, xmm1 */
    MEM8(ecx + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0065EA63: mov byte ptr [ecx - 4], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0065EA66: cvttss2si eax, xmm2 */
    MEM8(edx + ecx + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x0065EA6A: mov byte ptr [edx + ecx - 2], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0065EA6E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065EA23; /* 0x0065EA6F: jne 0x65ea23 */
L_0065EA71:
    eax = MEM32(ebp + (-0x3C)); /* 0x0065EA71: mov eax, dword ptr [ebp - 0x3c] */
L_0065EA74:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x18)); /* 0x0065EA74: add esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0065EA77: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065EA11; /* 0x0065EA78: jne 0x65ea11 */
L_0065EA7A:
    edi = MEM32(ebp + (-0x34)); /* 0x0065EA7A: mov edi, dword ptr [ebp - 0x34] */
L_0065EA7D:
    eax = MEM32(edi); /* 0x0065EA7D: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x0065EA7F: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065EA81: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x0065EA84: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x0065EA86: lea ecx, [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x38)); /* 0x0065EA89: mov ebx, dword ptr [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x0065EA8C: push ecx */
    PUSH32(esp, ebx); /* 0x0065EA8D: push ebx */
    ecx = edi; /* 0x0065EA8E: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065EA90: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065EA93: mov esi, eax */
    /* test esi, esi */ /* 0x0065EA95: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065EA00; /* 0x0065EA97: jne 0x65ea00 */
L_0065EA9D:
    ebx = MEM32(ebp + (-0x30)); /* 0x0065EA9D: mov ebx, dword ptr [ebp - 0x30] */
    esi = MEM32(ebp + (-0x44)); /* 0x0065EAA0: mov esi, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065EAA3: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x0065EAA4: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(esi + 0x40) */ /* 0x0065EAA7: cmp ebx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065E9DA; /* 0x0065EAAA: jb 0x65e9da */
L_0065EAB0:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065EAB0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065EAB3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065EABA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065EABB: pop edi */
    esi = POP32_VAL(esp); /* 0x0065EABC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065EABD: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065EABE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065EAC1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065EAC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065EAC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065EACA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0065EACB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0065EAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065EAD0u);

L_0065EAD0:
    PUSH32(esp, ebp); /* 0x0065EAD0: push ebp */
    ebp = esp; /* 0x0065EAD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x0065EAD3: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065EAD6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065EADB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0065EADD: mov dword ptr [ebp - 4], eax */
    /* cmp MEM8(0x86E016), 0 */ /* 0x0065EAE0: cmp byte ptr [0x86e016], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E016)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x0065EAE7: push ebx */
    PUSH32(esp, esi); /* 0x0065EAE8: push esi */
    esi = ecx; /* 0x0065EAE9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0065EAEB: push edi */
    MEM32(ebp + (-0x28)) = esi; /* 0x0065EAEC: mov dword ptr [ebp - 0x28], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EC7C; /* 0x0065EAEF: jne 0x65ec7c */
L_0065EAF5:
    /* cmp MEM8(0x86DFCF), 0 */ /* 0x0065EAF5: cmp byte ptr [0x86dfcf], 0 */
    _flag_a = (uint32_t)(MEM8(0x86DFCF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EC7C; /* 0x0065EAFC: jne 0x65ec7c */
L_0065EB02:
    /* cmp MEM8(esi + 0x48), 0 */ /* 0x0065EB02: cmp byte ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EC7C; /* 0x0065EB06: jne 0x65ec7c */
L_0065EB0C:
    eax = MEM32(ebp + 0x8); /* 0x0065EB0C: mov eax, dword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0065EB0F: movss xmm0, dword ptr [0x808cb0] */
    _xmm[1].u64[0] = MEM32(eax + 0xC); _xmm[1].u64[1] = 0; /* 0x0065EB17: movss xmm1, dword ptr [eax + 0xc] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065EB1C: mulss xmm1, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065EB20: subss xmm0, xmm1 */
    MEM32(ebp + (-0x44)) = _xmm[1].u32[0]; /* 0x0065EB24: movss dword ptr [ebp - 0x44], xmm1 */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0065EB29: cvtps2pd xmm1, xmm1 */
    MEM32(ebp + (-0x34)) = _xmm[0].u32[0]; /* 0x0065EB2C: movss dword ptr [ebp - 0x34], xmm0 */
    _xmm[0].u64[0] = MEM64(0x808D80); _xmm[0].u64[1] = 0; /* 0x0065EB31: movsd xmm0, qword ptr [0x808d80] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[1].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EB39: comisd xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0065EC7C; /* 0x0065EB3D: ja 0x65ec7c */
L_0065EB43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065EB43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x0065EB45: mov dword ptr [ebp - 0x2c], eax */
    /* cmp MEM32(esi + 0x40), eax */ /* 0x0065EB48: cmp dword ptr [esi + 0x40], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065EC7C; /* 0x0065EB4B: jbe 0x65ec7c */
L_0065EB51:
    ecx = esi + 0x3C; /* 0x0065EB51: lea ecx, [esi + 0x3c] */
L_0065EB54:
    PUSH32(esp, eax); /* 0x0065EB54: push eax */
    RECOMP_CALL(sub_0065F140); /* 0x0065EB55: call 0x65f140 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x0065EB5A: lea ecx, [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0065EB5D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0065EB5F: push ecx */
    PUSH32(esp, ebx); /* 0x0065EB60: push ebx */
    edi = MEM32(eax); /* 0x0065EB61: mov edi, dword ptr [eax] */
    ecx = edi; /* 0x0065EB63: mov ecx, edi */
    MEM32(ebp + (-0x38)) = edi; /* 0x0065EB65: mov dword ptr [ebp - 0x38], edi */
    eax = MEM32(edi); /* 0x0065EB68: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065EB6A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0065EB6D: mov ecx, eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x0065EB6F: mov dword ptr [ebp - 0x24], ecx */
    /* test ecx, ecx */ /* 0x0065EB72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EC69; /* 0x0065EB74: je 0x65ec69 */
L_0065EB7A:
    ebx = ebx; /* 0x0065EB7A: lea ebx, [ebx] */
L_0065EB80:
    eax = MEM32(ebp + (-0x1C)); /* 0x0065EB80: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0065EB83: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x0065EB84: mov dword ptr [ebp - 0x3c], ebx */
    ebx = MEM32(ebp + (-0x20)); /* 0x0065EB87: mov ebx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x40)) = ebx; /* 0x0065EB8A: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x30)) = eax; /* 0x0065EB8D: mov dword ptr [ebp - 0x30], eax */
    /* test eax, eax */ /* 0x0065EB90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EC43; /* 0x0065EB92: je 0x65ec43 */
L_0065EB98:
    esi = ecx + 0x1; /* 0x0065EB98: lea esi, [ecx + 1] */
    edx = ecx; /* 0x0065EB9B: mov edx, ecx */
    edi = ecx + 0x2; /* 0x0065EB9D: lea edi, [ecx + 2] */
    /* test ebx, ebx */ /* 0x0065EBA0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065EC30; /* 0x0065EBA2: je 0x65ec30 */
L_0065EBA8:
    _xmm[4].u64[0] = MEM32(ebp + (-0x34)); _xmm[4].u64[1] = 0; /* 0x0065EBA8: movss xmm4, dword ptr [ebp - 0x34] */
    _xmm[5].u64[0] = MEM32(ebp + (-0x44)); _xmm[5].u64[1] = 0; /* 0x0065EBAD: movss xmm5, dword ptr [ebp - 0x44] */
    _xmm[6].u64[0] = MEM32(0x808BF0); _xmm[6].u64[1] = 0; /* 0x0065EBB2: movss xmm6, dword ptr [0x808bf0] */
    ecx = MEM32(ebp + (-0x28)); /* 0x0065EBBA: mov ecx, dword ptr [ebp - 0x28] */
    ecx = ecx; /* 0x0065EBBD: lea ecx, [ecx] */
L_0065EBC0:
    eax = (uint32_t)MEM8(edx); /* 0x0065EBC0: movzx eax, byte ptr [edx] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065EBC3: movd xmm0, eax */
    eax = (uint32_t)MEM8(esi); /* 0x0065EBC7: movzx eax, byte ptr [esi] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EBCA: cvtdq2ps xmm0, xmm0 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0065EBCD: movd xmm2, eax */
    eax = (uint32_t)MEM8(edi); /* 0x0065EBD1: movzx eax, byte ptr [edi] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EBD4: cvtdq2ps xmm2, xmm2 */
    _xmm[3].u64[0] = (uint32_t)(eax); _xmm[3].u64[1] = 0; /* 0x0065EBD7: movd xmm3, eax */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].f32[_k] = (float)_s.i32[_k]; } /* 0x0065EBDB: cvtdq2ps xmm3, xmm3 */
    _xmm[1] = _xmm[3]; /* 0x0065EBDE: movaps xmm1, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x0065EBE1: mulss xmm3, xmm4 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0065EBE5: addss xmm1, xmm2 */
    { float _s = _xmm[4].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0065EBE9: mulss xmm2, xmm4 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0065EBED: addss xmm1, xmm0 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065EBF1: mulss xmm0, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065EBF5: mulss xmm1, xmm6 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0065EBF9: mulss xmm1, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0065EBFD: addss xmm0, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0065EC01: addss xmm2, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x0065EC05: addss xmm3, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0065EC09: cvttss2si eax, xmm0 */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0065EC0D: mov byte ptr [edx], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0065EC0F: cvttss2si eax, xmm2 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0065EC13: mov byte ptr [esi], al */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[3].f32[0], 1); /* 0x0065EC15: cvttss2si eax, xmm3 */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x0065EC19: mov byte ptr [edi], al */
    eax = MEM32(ecx + 0x10); /* 0x0065EC1B: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0065EC1E: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0065EC20: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0065EC22: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0065EC24: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065EBC0; /* 0x0065EC25: jne 0x65ebc0 */
L_0065EC27:
    ecx = MEM32(ebp + (-0x24)); /* 0x0065EC27: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x30)); /* 0x0065EC2A: mov eax, dword ptr [ebp - 0x30] */
    ebx = MEM32(ebp + (-0x40)); /* 0x0065EC2D: mov ebx, dword ptr [ebp - 0x40] */
L_0065EC30:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x0065EC30: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0065EC33: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x0065EC34: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x0065EC37: mov dword ptr [ebp - 0x30], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0065EB98; /* 0x0065EC3A: jne 0x65eb98 */
L_0065EC40:
    edi = MEM32(ebp + (-0x38)); /* 0x0065EC40: mov edi, dword ptr [ebp - 0x38] */
L_0065EC43:
    eax = MEM32(edi); /* 0x0065EC43: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x0065EC45: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x0065EC47: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x0065EC4A: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x20); /* 0x0065EC4C: lea ecx, [ebp - 0x20] */
    ebx = MEM32(ebp + (-0x3C)); /* 0x0065EC4F: mov ebx, dword ptr [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x0065EC52: push ecx */
    PUSH32(esp, ebx); /* 0x0065EC53: push ebx */
    ecx = edi; /* 0x0065EC54: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0065EC56: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0065EC59: mov ecx, eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x0065EC5B: mov dword ptr [ebp - 0x24], eax */
    /* test ecx, ecx */ /* 0x0065EC5E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065EB80; /* 0x0065EC60: jne 0x65eb80 */
L_0065EC66:
    esi = MEM32(ebp + (-0x28)); /* 0x0065EC66: mov esi, dword ptr [ebp - 0x28] */
L_0065EC69:
    eax = MEM32(ebp + (-0x2C)); /* 0x0065EC69: mov eax, dword ptr [ebp - 0x2c] */
    ecx = esi + 0x3C; /* 0x0065EC6C: lea ecx, [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0065EC6F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = eax; /* 0x0065EC70: mov dword ptr [ebp - 0x2c], eax */
    /* cmp eax, MEM32(esi + 0x40) */ /* 0x0065EC73: cmp eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065EB54; /* 0x0065EC76: jb 0x65eb54 */
L_0065EC7C:
    ecx = MEM32(ebp + (-0x4)); /* 0x0065EC7C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x0065EC7F: pop edi */
    esi = POP32_VAL(esp); /* 0x0065EC80: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065EC81: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0065EC83: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0065EC84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065EC89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065EC8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0065EC8C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0065EC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065EC90u);

L_0065EC90:
    PUSH32(esp, ebp); /* 0x0065EC90: push ebp */
    ebp = esp; /* 0x0065EC91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065EC93: push -1 */
    PUSH32(esp, 0x007BB3F0u); /* 0x0065EC95: push 0x7bb3f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065EC9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065ECA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0065ECA1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0065ECA4: push esi */
    eax = MEM32(0x855000); /* 0x0065ECA5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065ECAA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065ECAC: push eax */
    eax = ebp + (-0xC); /* 0x0065ECAD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065ECB0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065ECB6: mov esi, ecx */
    /* cmp MEM8(esi + 0x48), 0 */ /* 0x0065ECB8: cmp byte ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065ED01; /* 0x0065ECBC: je 0x65ed01 */
L_0065ECBE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065ECBE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065ECC1: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065ECC3: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065ECC6: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065ECCB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065ECD0: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065ECD7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065ECDA: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065ECDC: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FB9D8u); /* 0x0065ECDF: push 0x7fb9d8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065ECE4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065ECE9: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065ECED: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x483u; /* 0x0065ECF4: mov ecx, 0x483 */
    RECOMP_CALL(sub_00668410); /* 0x0065ECF9: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065ECFE: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065ED01:
    eax = MEM32(esi + 0x3C); /* 0x0065ED01: mov eax, dword ptr [esi + 0x3c] */
    edx = MEM32(ebp + 0xC); /* 0x0065ED04: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x0065ED07: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0065ED08: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x0065ED0B: push dword ptr [eax] */
    RECOMP_CALL(sub_0065C3A0); /* 0x0065ED0D: call 0x65c3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0065ED12: add esp, 8 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x0065ED15: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065ED5C; /* 0x0065ED17: jne 0x65ed5c */
L_0065ED19:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065ED19: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065ED1C: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x0065ED1E: mov dword ptr [ebp + 0xc], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065ED21: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065ED26: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0065ED2B: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065ED32: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065ED35: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0065ED37: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007FB9ACu); /* 0x0065ED3A: push 0x7fb9ac */
    RECOMP_CALL(sub_00409FA0); /* 0x0065ED3F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065ED44: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065ED48: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x485u; /* 0x0065ED4F: mov ecx, 0x485 */
    RECOMP_CALL(sub_00668410); /* 0x0065ED54: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065ED59: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065ED5C:
    ecx = MEM32(ebp + (-0xC)); /* 0x0065ED5C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065ED5F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065ED66: pop ecx */
    esi = POP32_VAL(esp); /* 0x0065ED67: pop esi */
    esp = ebp; /* 0x0065ED68: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065ED6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0065ED6B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0065ED70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065ED70u);

L_0065ED70:
    PUSH32(esp, ebp); /* 0x0065ED70: push ebp */
    ebp = esp; /* 0x0065ED71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065ED73: push -1 */
    PUSH32(esp, 0x007825F0u); /* 0x0065ED75: push 0x7825f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065ED7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065ED80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065ED81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0065ED84: push esi */
    eax = MEM32(0x855000); /* 0x0065ED85: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065ED8A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065ED8C: push eax */
    eax = ebp + (-0xC); /* 0x0065ED8D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065ED90: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065ED96: mov esi, ecx */
    /* cmp MEM32(esi + 0x40), 0x100u */ /* 0x0065ED98: cmp dword ptr [esi + 0x40], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065EDE4; /* 0x0065ED9F: jb 0x65ede4 */
L_0065EDA1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065EDA1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065EDA4: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065EDA6: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FB928u); /* 0x0065EDA9: push 0x7fb928 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065EDAE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065EDB3: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065EDBA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065EDBD: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065EDBF: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBA08u); /* 0x0065EDC2: push 0x7fba08 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065EDC7: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065EDCC: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065EDD0: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x498u; /* 0x0065EDD7: mov ecx, 0x498 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065EDDC: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065EDE1: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065EDE4:
    SET_LO8(eax, MEM8(esi + 0x40)); /* 0x0065EDE4: mov al, byte ptr [esi + 0x40] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065EDE7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065EDEA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065EDF1: pop ecx */
    esi = POP32_VAL(esp); /* 0x0065EDF2: pop esi */
    esp = ebp; /* 0x0065EDF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065EDF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065EDF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065EE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065EE00u);

L_0065EE00:
    PUSH32(esp, ebp); /* 0x0065EE00: push ebp */
    ebp = esp; /* 0x0065EE01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065EE03: push -1 */
    PUSH32(esp, 0x007BB420u); /* 0x0065EE05: push 0x7bb420 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065EE0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065EE10: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0065EE11: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0065EE14: push ebx */
    PUSH32(esp, esi); /* 0x0065EE15: push esi */
    PUSH32(esp, edi); /* 0x0065EE16: push edi */
    eax = MEM32(0x855000); /* 0x0065EE17: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065EE1C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065EE1E: push eax */
    eax = ebp + (-0xC); /* 0x0065EE1F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065EE22: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x0065EE28: mov esi, edx */
    eax = MEM32(ebp + 0xC); /* 0x0065EE2A: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0065EE2D: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0065EE31: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0065EE35: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0065EE35: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0065EE38: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[2].f32[0] = (float)_s.f64[0]; _xmm[2].f32[1] = (float)_s.f64[1]; _xmm[2].u64[1] = 0; } /* 0x0065EE41: cvtpd2ps xmm2, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0065EE45: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x0065EE48: movss dword ptr [ebp - 0x14], xmm0 */
    { float _s = sse_f32(MEM32(0x8095DC)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0065EE4D: divss xmm2, dword ptr [0x8095dc] */
    MEM32(ebp + 0xC) = _xmm[2].u32[0]; /* 0x0065EE55: movss dword ptr [ebp + 0xc], xmm2 */
    /* cmp ecx, 1 */ /* 0x0065EE5A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0065EE73; /* 0x0065EE5D: jae 0x65ee73 */
L_0065EE5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065EE5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065EE61: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065EE64: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065EE6B: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065EE6C: pop edi */
    esi = POP32_VAL(esp); /* 0x0065EE6D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065EE6E: pop ebx */
    esp = ebp; /* 0x0065EE6F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065EE71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065EE72: ret  */
L_0065EE73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0065EE73: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx + (-0x1); /* 0x0065EE75: lea ebx, [ecx - 1] */
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x0065EE78: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065EF71; /* 0x0065EE7C: jne 0x65ef71 */
L_0065EE82:
    /* test ebx, ebx */ /* 0x0065EE82: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F0AE; /* 0x0065EE84: je 0x65f0ae */
L_0065EE8A:
    ebx = ebx; /* 0x0065EE8A: lea ebx, [ebx] */
L_0065EE90:
    _xmm[1].u64[0] = MEM32(esi + edi * 4); _xmm[1].u64[1] = 0; /* 0x0065EE90: movss xmm1, dword ptr [esi + edi*4] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EE95: comiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0065EEA5; /* 0x0065EE98: jb 0x65eea5 */
L_0065EE9A:
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065EE9A: movss xmm0, dword ptr [esi + edi*4 + 4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EEA0: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0065EEBB; /* 0x0065EEA3: jae 0x65eebb */
L_0065EEA5:
    _flag_a = SSE_COMI(_xmm[2].f32[0], sse_f32(MEM32(esi + edi * 4 + 0x4))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EEA5: comiss xmm2, dword ptr [esi + edi*4 + 4] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0065EEB1; /* 0x0065EEAA: jb 0x65eeb1 */
L_0065EEAC:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EEAC: comiss xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0065EF25; /* 0x0065EEAF: jae 0x65ef25 */
L_0065EEB1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0065EEB1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x0065EEB2: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0065EE90; /* 0x0065EEB4: jb 0x65ee90 */
L_0065EEB6:
    goto L_0065F0AE; /* 0x0065EEB6: jmp 0x65f0ae */
L_0065EEBB:
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065EEBB: subss xmm0, xmm1 */
    esi = MEM32(ebp + 0x8); /* 0x0065EEBF: mov esi, dword ptr [ebp + 8] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0065EEC2: subss xmm2, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0065EEC6: divss xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0065EECA: movss xmm0, dword ptr [0x808cb0] */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065EED2: divss xmm0, xmm3 */
    MEM32(ebp + 0xC) = _xmm[2].u32[0]; /* 0x0065EED6: movss dword ptr [ebp + 0xc], xmm2 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x0065EEDB: movss dword ptr [ebp - 0x14], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x0065EEE0: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4); _xmm[0].u64[1] = 0; /* 0x0065EEE3: movss xmm0, dword ptr [esi + edi*4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065EEE8: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x14)); _xmm[1].u64[1] = 0; /* 0x0065EEED: movss xmm1, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x0065EEF2: movss dword ptr [ebp - 0x10], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065EEF7: movss xmm0, dword ptr [esi + edi*4 + 4] */
L_0065EEFD:
    RECOMP_CALL(sub_0040BD80); /* 0x0065EEFD: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[3] = _xmm[0]; /* 0x0065EF02: movaps xmm3, xmm0 */
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0065EF05: movss xmm0, dword ptr [0x808cb0] */
    { float _s = sse_f32(MEM32(ebp + 0xC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065EF0D: subss xmm0, dword ptr [ebp + 0xc] */
    { float _s = sse_f32(MEM32(ebp + 0xC)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x0065EF12: mulss xmm3, dword ptr [ebp + 0xc] */
    { float _s = sse_f32(MEM32(ebp + (-0x10))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065EF17: mulss xmm0, dword ptr [ebp - 0x10] */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x0065EF1C: addss xmm3, xmm0 */
    goto L_0065F0A9; /* 0x0065EF20: jmp 0x65f0a9 */
L_0065EF25:
    { float _s = sse_f32(MEM32(esi + edi * 4 + 0x4)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0065EF25: subss xmm2, dword ptr [esi + edi*4 + 4] */
    _xmm[0].u32[0] = _xmm[1].u32[0]; /* 0x0065EF2B: movss xmm0, xmm1 */
    { float _s = sse_f32(MEM32(esi + edi * 4 + 0x4)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065EF2F: subss xmm0, dword ptr [esi + edi*4 + 4] */
    esi = MEM32(ebp + 0x8); /* 0x0065EF35: mov esi, dword ptr [ebp + 8] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0065EF38: divss xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0065EF3C: movss xmm0, dword ptr [0x808cb0] */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065EF44: divss xmm0, xmm3 */
    MEM32(ebp + 0xC) = _xmm[2].u32[0]; /* 0x0065EF48: movss dword ptr [ebp + 0xc], xmm2 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x0065EF4D: movss dword ptr [ebp - 0x14], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x0065EF52: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065EF55: movss xmm0, dword ptr [esi + edi*4 + 4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065EF5B: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x14)); _xmm[1].u64[1] = 0; /* 0x0065EF60: movss xmm1, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x0065EF65: movss dword ptr [ebp - 0x10], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4); _xmm[0].u64[1] = 0; /* 0x0065EF6A: movss xmm0, dword ptr [esi + edi*4] */
    RECOMP_BACKEDGE();
    goto L_0065EEFD; /* 0x0065EF6F: jmp 0x65eefd */
L_0065EF71:
    /* test ebx, ebx */ /* 0x0065EF71: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F0AE; /* 0x0065EF73: je 0x65f0ae */
L_0065EF79:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0065EF79: movss xmm0, dword ptr [0x808cb0] */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0065EF81: divss xmm0, xmm3 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x0065EF85: movss dword ptr [ebp - 0x10], xmm0 */
    ebx = ebx; /* 0x0065EF8A: lea ebx, [ebx] */
L_0065EF90:
    _xmm[1] = _xmm[0]; /* 0x0065EF90: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4); _xmm[0].u64[1] = 0; /* 0x0065EF93: movss xmm0, dword ptr [esi + edi*4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065EF98: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1] = _xmm[0]; /* 0x0065EF9D: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0xC); _xmm[0].u64[1] = 0; /* 0x0065EFA0: movss xmm0, dword ptr [ebp + 0xc] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EFA5: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    MEM32(ebp + (-0x18)) = _xmm[1].u32[0]; /* 0x0065EFA8: movss dword ptr [ebp - 0x18], xmm1 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0065EFC5; /* 0x0065EFAD: jb 0x65efc5 */
L_0065EFAF:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065EFAF: movss xmm1, dword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065EFB4: movss xmm0, dword ptr [esi + edi*4 + 4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065EFBA: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ebp + 0xC))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EFBF: comiss xmm0, dword ptr [ebp + 0xc] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0065EFF9; /* 0x0065EFC3: jae 0x65eff9 */
L_0065EFC5:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065EFC5: movss xmm1, dword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065EFCA: movss xmm0, dword ptr [esi + edi*4 + 4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065EFD0: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + 0xC); _xmm[1].u64[1] = 0; /* 0x0065EFD5: movss xmm1, dword ptr [ebp + 0xc] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EFDA: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0065EFE9; /* 0x0065EFDD: jb 0x65efe9 */
L_0065EFDF:
    _xmm[0].u64[0] = MEM32(ebp + (-0x18)); _xmm[0].u64[1] = 0; /* 0x0065EFDF: movss xmm0, dword ptr [ebp - 0x18] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0065EFE4: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0065F054; /* 0x0065EFE7: jae 0x65f054 */
L_0065EFE9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0065EFE9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x0065EFEA: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0065F0B0; /* 0x0065EFEC: jae 0x65f0b0 */
L_0065EFF2:
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x0065EFF2: movss xmm0, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_0065EF90; /* 0x0065EFF7: jmp 0x65ef90 */
L_0065EFF9:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065EFF9: movss xmm1, dword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM32(esi + edi * 4); _xmm[0].u64[1] = 0; /* 0x0065EFFE: movss xmm0, dword ptr [esi + edi*4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065F003: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065F008: movss xmm1, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x0065F00D: movss dword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065F012: movss xmm0, dword ptr [esi + edi*4 + 4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065F018: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(ebp + 0xC); _xmm[2].u64[1] = 0; /* 0x0065F01D: movss xmm2, dword ptr [ebp + 0xc] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065F022: subss xmm0, dword ptr [ebp - 0x18] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0065F027: subss xmm2, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x0065F02C: mov eax, dword ptr [ebp + 8] */
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x0065F02F: movss xmm3, dword ptr [0x808cb0] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0065F037: divss xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065F03B: movss xmm0, dword ptr [eax + edi*4 + 4] */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0065F041: subss xmm3, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065F045: mulss xmm0, xmm2 */
    { float _s = sse_f32(MEM32(eax + edi * 4)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x0065F049: mulss xmm3, dword ptr [eax + edi*4] */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x0065F04E: addss xmm3, xmm0 */
    goto L_0065F0A9; /* 0x0065F052: jmp 0x65f0a9 */
L_0065F054:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065F054: movss xmm1, dword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM32(esi + edi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0065F059: movss xmm0, dword ptr [esi + edi*4 + 4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065F05F: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0065F064: movss xmm1, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x0065F069: movss dword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + edi * 4); _xmm[0].u64[1] = 0; /* 0x0065F06E: movss xmm0, dword ptr [esi + edi*4] */
    RECOMP_CALL(sub_0040BD80); /* 0x0065F073: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(ebp + 0xC); _xmm[2].u64[1] = 0; /* 0x0065F078: movss xmm2, dword ptr [ebp + 0xc] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0065F07D: subss xmm2, dword ptr [ebp - 0x18] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0065F082: subss xmm0, dword ptr [ebp - 0x18] */
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x0065F087: movss xmm3, dword ptr [0x808cb0] */
    eax = MEM32(ebp + 0x8); /* 0x0065F08F: mov eax, dword ptr [ebp + 8] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0065F092: divss xmm2, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0065F096: subss xmm3, xmm2 */
    { float _s = sse_f32(MEM32(eax + edi * 4)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0065F09A: mulss xmm2, dword ptr [eax + edi*4] */
    { float _s = sse_f32(MEM32(eax + edi * 4 + 0x4)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x0065F09F: mulss xmm3, dword ptr [eax + edi*4 + 4] */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x0065F0A5: addss xmm3, xmm2 */
L_0065F0A9:
    MEM32(ebp + (-0x14)) = _xmm[3].u32[0]; /* 0x0065F0A9: movss dword ptr [ebp - 0x14], xmm3 */
L_0065F0AE:
    /* cmp edi, ebx */ /* 0x0065F0AE: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_0065F0B0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_0065F11B; /* 0x0065F0B0: jne 0x65f11b */
L_0065F0B2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F0B2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F0B5: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x0065F0B7: mov dword ptr [ebp + 0xc], esp */
    PUSH32(esp, 0x25u); /* 0x0065F0BA: push 0x25 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F0BC: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F0C3: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB928u); /* 0x0065F0CA: push 0x7fb928 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F0CF: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F0D2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F0D7: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F0DE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F0E1: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x0065F0E3: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0xAu); /* 0x0065F0E6: push 0xa */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F0E8: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F0EF: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FB9FCu); /* 0x0065F0F6: push 0x7fb9fc */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F0FB: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F0FE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F103: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F107: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x528u; /* 0x0065F10E: mov ecx, 0x528 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065F113: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F118: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065F11B:
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x0065F11B: movss xmm0, dword ptr [ebp - 0x14] */
    { float _s = sse_f32(MEM32(0x8095DC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0065F120: mulss xmm0, dword ptr [0x8095dc] */
    RECOMP_CALL(sub_007803B0); /* 0x0065F128: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F12D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F130: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F137: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065F138: pop edi */
    esi = POP32_VAL(esp); /* 0x0065F139: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065F13A: pop ebx */
    esp = ebp; /* 0x0065F13B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F13D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F13E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F140u);

L_0065F140:
    PUSH32(esp, ebp); /* 0x0065F140: push ebp */
    ebp = esp; /* 0x0065F141: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F143: push -1 */
    PUSH32(esp, 0x00782DD0u); /* 0x0065F145: push 0x782dd0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F14A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F150: push eax */
    PUSH32(esp, ecx); /* 0x0065F151: push ecx */
    PUSH32(esp, esi); /* 0x0065F152: push esi */
    PUSH32(esp, edi); /* 0x0065F153: push edi */
    eax = MEM32(0x855000); /* 0x0065F154: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F159: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F15B: push eax */
    eax = ebp + (-0xC); /* 0x0065F15C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F15F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0065F165: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x0065F167: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x0065F16A: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065F1B2; /* 0x0065F16D: jb 0x65f1b2 */
L_0065F16F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F16F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F172: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0065F174: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007FBA20u); /* 0x0065F177: push 0x7fba20 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F17C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F181: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F188: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F18B: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F18D: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007F9AE8u); /* 0x0065F190: push 0x7f9ae8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F195: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F19A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F19E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xA6u; /* 0x0065F1A5: mov ecx, 0xa6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065F1AA: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F1AF: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065F1B2:
    eax = MEM32(esi); /* 0x0065F1B2: mov eax, dword ptr [esi] */
    eax = eax + edi * 4; /* 0x0065F1B4: lea eax, [eax + edi*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F1B7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F1BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F1C1: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065F1C2: pop edi */
    esi = POP32_VAL(esp); /* 0x0065F1C3: pop esi */
    esp = ebp; /* 0x0065F1C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F1C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0065F1C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0065F1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F1D0u);

L_0065F1D0:
    PUSH32(esp, ebp); /* 0x0065F1D0: push ebp */
    ebp = esp; /* 0x0065F1D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F1D3: push -1 */
    PUSH32(esp, 0x007BB4B0u); /* 0x0065F1D5: push 0x7bb4b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F1DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F1E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0065F1E1: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F1E4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F1E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065F1EB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0065F1EE: push esi */
    PUSH32(esp, eax); /* 0x0065F1EF: push eax */
    eax = ebp + (-0xC); /* 0x0065F1F0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F1F3: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x0065F1F9: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM8(0x86E017), 1 */ /* 0x0065F200: cmp byte ptr [0x86e017], 1 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(0x7CC694); /* 0x0065F207: mov esi, dword ptr [0x7cc694] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0065F2F1; /* 0x0065F20D: jne 0x65f2f1 */
L_0065F213:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F213: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F216: mov ecx, esp */
    MEM32(ebp + (-0x50)) = esp; /* 0x0065F218: mov dword ptr [ebp - 0x50], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F21B: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F220: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065F225: mov byte ptr [ebp - 4], 2 */
    edx = 0x007FBCB8u; /* 0x0065F229: mov edx, 0x7fbcb8 */
    PUSH32(esp, 0x00865EF8u); /* 0x0065F22E: push 0x865ef8 */
    ecx = ebp + (-0x28); /* 0x0065F233: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0042A130); /* 0x0065F236: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F23B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065F23E: mov byte ptr [ebp - 4], 3 */
    edx = eax; /* 0x0065F242: mov edx, eax */
    PUSH32(esp, 0x007FBCB0u); /* 0x0065F244: push 0x7fbcb0 */
    ecx = ebp + (-0x40); /* 0x0065F249: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_00419C40); /* 0x0065F24C: call 0x419c40 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0065F251: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0065F255: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = ebp + 0x8; /* 0x0065F258: lea edx, [ebp + 8] */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065F25B: mov dword ptr [ebp - 0x4c], esp */
    ecx = esp; /* 0x0065F25E: mov ecx, esp */
    PUSH32(esp, edx); /* 0x0065F260: push edx */
    edx = eax; /* 0x0065F261: mov edx, eax */
    RECOMP_CALL(sub_0045F540); /* 0x0065F263: call 0x45f540 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0065F268: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0065F26C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F26F: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065F271: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007FBC24u); /* 0x0065F274: push 0x7fbc24 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F279: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0065F27E: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F282: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F285: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065F287: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007FBC58u); /* 0x0065F28A: push 0x7fbc58 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F28F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0065F294: mov byte ptr [ebp - 4], 7 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0065F298: mov byte ptr [ebp - 4], 9 */
    ecx = 0x33u; /* 0x0065F29C: mov ecx, 0x33 */
    RECOMP_CALL(sub_00668A10); /* 0x0065F2A1: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0065F2A6: add esp, 0x60 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0065F2A9: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0065F2AD: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065F2BB; /* 0x0065F2B1: jb 0x65f2bb */
L_0065F2B3:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0065F2B3: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0065F2B6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F2B8: add esp, 4 */
    _flag_k = FK_ADD;
L_0065F2BB:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0065F2BB: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0065F2C2: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0065F2C9: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F2CD: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0065F2D1: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065F2DF; /* 0x0065F2D5: jb 0x65f2df */
L_0065F2D7:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0065F2D7: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0065F2DA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F2DC: add esp, 4 */
    _flag_k = FK_ADD;
L_0065F2DF:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0065F2DF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0065F2E6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0065F2ED: mov byte ptr [ebp - 0x28], 0 */
L_0065F2F1:
    /* cmp MEM32(0x871980), 0 */ /* 0x0065F2F1: cmp dword ptr [0x871980], 0 */
    _flag_a = (uint32_t)(MEM32(0x871980)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F337; /* 0x0065F2F8: je 0x65f337 */
L_0065F2FA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F2FA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F2FD: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065F2FF: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F302: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F307: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0065F30C: mov byte ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F310: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F313: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065F315: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007FBAD4u); /* 0x0065F318: push 0x7fbad4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F31D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0065F322: mov byte ptr [ebp - 4], 0xb */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F326: mov byte ptr [ebp - 4], 1 */
    ecx = 0x37u; /* 0x0065F32A: mov ecx, 0x37 */
    RECOMP_CALL(sub_00668DA0); /* 0x0065F32F: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F334: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0065F337:
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x0065F337: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x20; /* 0x0065F33B: lea ecx, [ebp + 0x20] */
    eax = ebp + 0x8; /* 0x0065F33E: lea eax, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x20); } /* 0x0065F341: cmovae ecx, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065F345: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x0065F349: push ecx */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x0065F34A: cmovae eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0065F34E: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x0065F34F: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0065F355: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(0x871980) = eax; /* 0x0065F358: mov dword ptr [0x871980], eax */
    /* test eax, eax */ /* 0x0065F35D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065F3DE; /* 0x0065F35F: jne 0x65f3de */
L_0065F361:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F361: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F364: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065F366: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F369: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F36E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0065F373: mov byte ptr [ebp - 4], 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F377: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F37A: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065F37C: mov dword ptr [ebp - 0x44], esp */
    eax = ebp + 0x8; /* 0x0065F37F: lea eax, [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F382: push -1 */
    PUSH32(esp, 0); /* 0x0065F384: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F386: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F38D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0065F394: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F395: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0065F398: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0065F39D: mov byte ptr [ebp - 4], 0xd */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F3A1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F3A4: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065F3A6: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0065F3A9: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F3AE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0065F3B3: mov byte ptr [ebp - 4], 0xe */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F3B7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F3BA: mov ecx, esp */
    MEM32(ebp + (-0x50)) = esp; /* 0x0065F3BC: mov dword ptr [ebp - 0x50], esp */
    PUSH32(esp, 0x007FBAE8u); /* 0x0065F3BF: push 0x7fbae8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065F3C4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0065F3C9: mov byte ptr [ebp - 4], 0xf */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F3CD: mov byte ptr [ebp - 4], 1 */
    ecx = 0x3Eu; /* 0x0065F3D1: mov ecx, 0x3e */
    RECOMP_CALL(sub_00668A10); /* 0x0065F3D6: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0065F3DB: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0065F3DE:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F3DE: push -1 */
    PUSH32(esp, 0); /* 0x0065F3E0: push 0 */
    eax = ebp + 0x8; /* 0x0065F3E2: lea eax, [ebp + 8] */
    ecx = 0x00865EF8u; /* 0x0065F3E5: mov ecx, 0x865ef8 */
    PUSH32(esp, eax); /* 0x0065F3EA: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0065F3EB: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(0x86E017) = (uint8_t)(1); /* 0x0065F3F0: mov byte ptr [0x86e017], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065F3F7: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065F3FB: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065F409; /* 0x0065F3FF: jb 0x65f409 */
L_0065F401:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065F401: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x0065F404: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F406: add esp, 4 */
    _flag_k = FK_ADD;
L_0065F409:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0065F409: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0065F410: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0065F417: mov byte ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F41B: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x34), 0x10u */ /* 0x0065F422: cmp dword ptr [ebp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065F430; /* 0x0065F426: jb 0x65f430 */
L_0065F428:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x0065F428: push dword ptr [ebp + 0x20] */
    RECOMP_ICALL(esi); /* 0x0065F42B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F42D: add esp, 4 */
    _flag_k = FK_ADD;
L_0065F430:
    MEM32(ebp + 0x34) = 0xFu; /* 0x0065F430: mov dword ptr [ebp + 0x34], 0xf */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F437: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x30) = 0; /* 0x0065F439: mov dword ptr [ebp + 0x30], 0 */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x0065F440: mov byte ptr [ebp + 0x20], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F444: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F447: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F44E: pop ecx */
    esi = POP32_VAL(esp); /* 0x0065F44F: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065F450: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065F453: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065F455: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065F45A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F45C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F45D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F460u);

L_0065F460:
    PUSH32(esp, ebp); /* 0x0065F460: push ebp */
    ebp = esp; /* 0x0065F461: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F463: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065F465: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F46A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F470: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065F471: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F474: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F479: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F47B: push eax */
    eax = ebp + (-0xC); /* 0x0065F47C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F47F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F485: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F4D4; /* 0x0065F48C: je 0x65f4d4 */
L_0065F48E:
    eax = MEM32(0x871980); /* 0x0065F48E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065F493: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F4D4; /* 0x0065F495: je 0x65f4d4 */
L_0065F497:
    PUSH32(esp, eax); /* 0x0065F497: push eax */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0065F498: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F49E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = 0x00865EF8u; /* 0x0065F4A1: mov ecx, 0x865ef8 */
    PUSH32(esp, 0); /* 0x0065F4A6: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0065F4A8: push 0x7cd0c4 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F4AD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(0x871980) = 0; /* 0x0065F4B2: mov dword ptr [0x871980], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F4BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x86E017) = (uint8_t)(0); /* 0x0065F4BE: mov byte ptr [0x86e017], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F4C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F4C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F4CF: pop ecx */
    esp = ebp; /* 0x0065F4D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F4D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F4D3: ret  */
L_0065F4D4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F4D4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F4D7: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F4D9: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F4DC: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F4DE: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F4E5: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F4EC: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F4F1: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F4F4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F4F9: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F500: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F503: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F505: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x40u); /* 0x0065F508: push 0x40 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F50A: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F511: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBA60u); /* 0x0065F518: push 0x7fba60 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F51D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F520: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F525: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F529: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x52u; /* 0x0065F530: mov ecx, 0x52 */
    RECOMP_CALL(sub_00668410); /* 0x0065F535: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F53A: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F53D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F540: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F543: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F54A: pop ecx */
    esp = ebp; /* 0x0065F54B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F54D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F54E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F550u);

L_0065F550:
    PUSH32(esp, ebp); /* 0x0065F550: push ebp */
    ebp = esp; /* 0x0065F551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F553: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065F555: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F55A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F560: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065F561: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F564: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F569: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F56B: push eax */
    eax = ebp + (-0xC); /* 0x0065F56C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F56F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F575: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F5A4; /* 0x0065F57C: je 0x65f5a4 */
L_0065F57E:
    eax = MEM32(0x871980); /* 0x0065F57E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065F583: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F5A4; /* 0x0065F585: je 0x65f5a4 */
L_0065F587:
    PUSH32(esp, edx); /* 0x0065F587: push edx */
    PUSH32(esp, ecx); /* 0x0065F588: push ecx */
    PUSH32(esp, eax); /* 0x0065F589: push eax */
    RECOMP_ICALL(MEM32(0x7CC514)); /* 0x0065F58A: call dword ptr [0x7cc514] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0065F590: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F593: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F595: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F598: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F59F: pop ecx */
    esp = ebp; /* 0x0065F5A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F5A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F5A3: ret  */
L_0065F5A4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F5A4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F5A7: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F5A9: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F5AC: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F5AE: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F5B5: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F5BC: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F5C1: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F5C4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F5C9: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F5D0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F5D3: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F5D5: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x2Du); /* 0x0065F5D8: push 0x2d */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F5DA: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F5E1: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBAA4u); /* 0x0065F5E8: push 0x7fbaa4 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F5ED: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F5F0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F5F5: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F5F9: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x6Bu; /* 0x0065F600: mov ecx, 0x6b */
    RECOMP_CALL(sub_00668410); /* 0x0065F605: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F60A: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F60D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F610: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F613: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F61A: pop ecx */
    esp = ebp; /* 0x0065F61B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F61D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F61E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F620u);

L_0065F620:
    PUSH32(esp, ebp); /* 0x0065F620: push ebp */
    ebp = esp; /* 0x0065F621: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F623: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065F625: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F62A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F630: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065F631: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F634: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F639: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F63B: push eax */
    eax = ebp + (-0xC); /* 0x0065F63C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F63F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F645: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F670; /* 0x0065F64C: je 0x65f670 */
L_0065F64E:
    eax = MEM32(0x871980); /* 0x0065F64E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065F653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F670; /* 0x0065F655: je 0x65f670 */
L_0065F657:
    PUSH32(esp, eax); /* 0x0065F657: push eax */
    RECOMP_ICALL(MEM32(0x7CC510)); /* 0x0065F658: call dword ptr [0x7cc510] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F65E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F661: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F664: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F66B: pop ecx */
    esp = ebp; /* 0x0065F66C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F66E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F66F: ret  */
L_0065F670:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F670: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F673: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F675: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F678: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F67A: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F681: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F688: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F68D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F690: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F695: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F69C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F69F: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F6A1: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x2Du); /* 0x0065F6A4: push 0x2d */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F6A6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F6AD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBB98u); /* 0x0065F6B4: push 0x7fbb98 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F6B9: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F6BC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F6C1: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F6C5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x7Fu; /* 0x0065F6CC: mov ecx, 0x7f */
    RECOMP_CALL(sub_00668410); /* 0x0065F6D1: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F6D6: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F6D9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F6DC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F6DF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F6E6: pop ecx */
    esp = ebp; /* 0x0065F6E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F6E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F6EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F6F0u);

L_0065F6F0:
    PUSH32(esp, ebp); /* 0x0065F6F0: push ebp */
    ebp = esp; /* 0x0065F6F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F6F3: push -1 */
    PUSH32(esp, 0x007825F0u); /* 0x0065F6F5: push 0x7825f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F6FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F700: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0065F701: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F704: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F709: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F70B: push eax */
    eax = ebp + (-0xC); /* 0x0065F70C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F70F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F715: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F747; /* 0x0065F71C: je 0x65f747 */
L_0065F71E:
    eax = MEM32(0x871980); /* 0x0065F71E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065F723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F747; /* 0x0065F725: je 0x65f747 */
L_0065F727:
    PUSH32(esp, eax); /* 0x0065F727: push eax */
    PUSH32(esp, edx); /* 0x0065F728: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065F729: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0065F72C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x0065F72D: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0065F733: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F736: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F738: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F73B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F742: pop ecx */
    esp = ebp; /* 0x0065F743: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F745: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F746: ret  */
L_0065F747:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F747: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F74A: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F74C: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F74F: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F751: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F758: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F75F: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F764: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F767: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F76C: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F773: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F776: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F778: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x2Du); /* 0x0065F77B: push 0x2d */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F77D: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F784: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBC8u); /* 0x0065F78B: push 0x7fbbc8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F790: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F793: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F798: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F79C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x9Bu; /* 0x0065F7A3: mov ecx, 0x9b */
    RECOMP_CALL(sub_00668410); /* 0x0065F7A8: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F7AD: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F7B0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F7B3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F7B6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F7BD: pop ecx */
    esp = ebp; /* 0x0065F7BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F7C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F7C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F7D0u);

L_0065F7D0:
    PUSH32(esp, ebp); /* 0x0065F7D0: push ebp */
    ebp = esp; /* 0x0065F7D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F7D3: push -1 */
    PUSH32(esp, 0x00783000u); /* 0x0065F7D5: push 0x783000 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F7DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F7E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0065F7E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0065F7E4: push ebx */
    PUSH32(esp, esi); /* 0x0065F7E5: push esi */
    PUSH32(esp, edi); /* 0x0065F7E6: push edi */
    eax = MEM32(0x855000); /* 0x0065F7E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F7EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F7EE: push eax */
    eax = ebp + (-0xC); /* 0x0065F7EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F7F2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0065F7F8: mov ebx, ecx */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F7FA: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F8B2; /* 0x0065F801: je 0x65f8b2 */
L_0065F807:
    /* cmp MEM32(0x871980), 0 */ /* 0x0065F807: cmp dword ptr [0x871980], 0 */
    _flag_a = (uint32_t)(MEM32(0x871980)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F8B2; /* 0x0065F80E: je 0x65f8b2 */
L_0065F814:
    PUSH32(esp, 0); /* 0x0065F814: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0065F816: push 0x7cd0c4 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F81B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x871980)); /* 0x0065F820: push dword ptr [0x871980] */
    edi = MEM32(0x7CC478); /* 0x0065F826: mov edi, dword ptr [0x7cc478] */
    RECOMP_ICALL(edi); /* 0x0065F82C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F82E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(0x871990) = (uint8_t)(LO8(eax)); /* 0x0065F831: mov byte ptr [0x871990], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0065F836: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F85D; /* 0x0065F838: je 0x65f85d */
L_0065F83A:
    esi = 0x00871990u; /* 0x0065F83A: mov esi, 0x871990 */
    /* nop */ /* 0x0065F83F: nop  */
L_0065F840:
    PUSH32(esp, MEM32(0x871980)); /* 0x0065F840: push dword ptr [0x871980] */
    esi = esi + 0x1; /* 0x0065F846: lea esi, [esi + 1] */
    RECOMP_ICALL(edi); /* 0x0065F849: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065F84B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x0065F84E: mov byte ptr [esi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0065F850: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065F840; /* 0x0065F852: jne 0x65f840 */
L_0065F854:
    SET_LO8(eax, MEM8(0x871990)); /* 0x0065F854: mov al, byte ptr [0x871990] */
    /* test LO8(eax), LO8(eax) */ /* 0x0065F859: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065F880; /* 0x0065F85B: jne 0x65f880 */
L_0065F85D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0065F85D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0065F85F: push ecx */
    PUSH32(esp, 0x00871990u); /* 0x0065F860: push 0x871990 */
    ecx = ebx; /* 0x0065F865: mov ecx, ebx */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F867: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F86C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F86E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F871: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F878: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065F879: pop edi */
    esi = POP32_VAL(esp); /* 0x0065F87A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065F87B: pop ebx */
    esp = ebp; /* 0x0065F87C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F87E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F87F: ret  */
L_0065F880:
    ecx = 0x00871990u; /* 0x0065F880: mov ecx, 0x871990 */
    edx = ecx + 0x1; /* 0x0065F885: lea edx, [ecx + 1] */
L_0065F888:
    SET_LO8(eax, MEM8(ecx)); /* 0x0065F888: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0065F88A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0065F88B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065F888; /* 0x0065F88D: jne 0x65f888 */
L_0065F88F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0065F88F: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x0065F891: push ecx */
    PUSH32(esp, 0x00871990u); /* 0x0065F892: push 0x871990 */
    ecx = ebx; /* 0x0065F897: mov ecx, ebx */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F899: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F89E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F8A0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F8A3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F8AA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065F8AB: pop edi */
    esi = POP32_VAL(esp); /* 0x0065F8AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065F8AD: pop ebx */
    esp = ebp; /* 0x0065F8AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F8B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F8B1: ret  */
L_0065F8B2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F8B2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F8B5: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F8B7: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F8BA: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F8BC: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F8C3: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F8CA: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F8CF: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F8D2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F8D7: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F8DE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F8E1: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F8E3: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x33u); /* 0x0065F8E6: push 0x33 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F8E8: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F8EF: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBB64u); /* 0x0065F8F6: push 0x7fbb64 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F8FB: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F8FE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F903: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F907: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0xCAu; /* 0x0065F90E: mov ecx, 0xca */
    RECOMP_CALL(sub_00668410); /* 0x0065F913: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F918: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F91B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F91E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F921: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F928: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065F929: pop edi */
    esi = POP32_VAL(esp); /* 0x0065F92A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065F92B: pop ebx */
    esp = ebp; /* 0x0065F92C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F92E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F92F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065F930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065F930u);

L_0065F930:
    PUSH32(esp, ebp); /* 0x0065F930: push ebp */
    ebp = esp; /* 0x0065F931: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065F933: push -1 */
    PUSH32(esp, 0x007825F0u); /* 0x0065F935: push 0x7825f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065F93A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065F940: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0065F941: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065F944: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065F949: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065F94B: push eax */
    eax = ebp + (-0xC); /* 0x0065F94C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065F94F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065F955: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065F987; /* 0x0065F95C: je 0x65f987 */
L_0065F95E:
    eax = MEM32(0x871980); /* 0x0065F95E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065F963: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065F987; /* 0x0065F965: je 0x65f987 */
L_0065F967:
    PUSH32(esp, eax); /* 0x0065F967: push eax */
    PUSH32(esp, edx); /* 0x0065F968: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065F969: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0065F96C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x0065F96D: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0065F973: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065F976: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F978: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F97B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F982: pop ecx */
    esp = ebp; /* 0x0065F983: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065F985: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065F986: ret  */
L_0065F987:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F987: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F98A: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065F98C: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065F98F: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F991: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F998: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065F99F: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F9A4: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F9A7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065F9AC: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065F9B3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065F9B6: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065F9B8: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x2Eu); /* 0x0065F9BB: push 0x2e */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065F9BD: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065F9C4: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBDFCu); /* 0x0065F9CB: push 0x7fbdfc */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065F9D0: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065F9D3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065F9D8: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065F9DC: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x113u; /* 0x0065F9E3: mov ecx, 0x113 */
    RECOMP_CALL(sub_00668410); /* 0x0065F9E8: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065F9ED: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065F9F0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065F9F3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065F9F6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065F9FD: pop ecx */
    esp = ebp; /* 0x0065F9FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FA00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FA01: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FA10u);

L_0065FA10:
    PUSH32(esp, ebp); /* 0x0065FA10: push ebp */
    ebp = esp; /* 0x0065FA11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FA13: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065FA15: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FA1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FA20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065FA21: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065FA24: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FA29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065FA2B: push eax */
    eax = ebp + (-0xC); /* 0x0065FA2C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065FA2F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065FA35: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065FABC; /* 0x0065FA3C: je 0x65fabc */
L_0065FA3E:
    /* cmp MEM32(0x871980), 0 */ /* 0x0065FA3E: cmp dword ptr [0x871980], 0 */
    _flag_a = (uint32_t)(MEM32(0x871980)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065FABC; /* 0x0065FA45: je 0x65fabc */
L_0065FA47:
    eax = MEM32(ecx + 0x10); /* 0x0065FA47: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0065FA4A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x0065FA4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065FA89; /* 0x0065FA4E: je 0x65fa89 */
L_0065FA50:
    /* cmp eax, edx */ /* 0x0065FA50: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0065FA7E; /* 0x0065FA52: jbe 0x65fa7e */
L_0065FA54:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x0065FA54: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065FA5E; /* 0x0065FA58: jb 0x65fa5e */
L_0065FA5A:
    eax = MEM32(ecx); /* 0x0065FA5A: mov eax, dword ptr [ecx] */
    goto L_0065FA60; /* 0x0065FA5C: jmp 0x65fa60 */
L_0065FA5E:
    eax = ecx; /* 0x0065FA5E: mov eax, ecx */
L_0065FA60:
    SET_LO8(eax, MEM8(eax + edx)); /* 0x0065FA60: mov al, byte ptr [eax + edx] */
    MEM8(edx + 0x871990) = (uint8_t)(LO8(eax)); /* 0x0065FA63: mov byte ptr [edx + 0x871990], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0065FA69: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x10); /* 0x0065FA6A: mov eax, dword ptr [ecx + 0x10] */
    /* cmp eax, edx */ /* 0x0065FA6D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0065FA54; /* 0x0065FA6F: ja 0x65fa54 */
L_0065FA71:
    /* cmp edx, 0x4000u */ /* 0x0065FA71: cmp edx, 0x4000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065FA89; /* 0x0065FA77: jb 0x65fa89 */
L_0065FA79:
    RECOMP_CALL(sub_0077F8A2); /* 0x0065FA79: call 0x77f8a2 */
    RECOMP_FLAGS_IN();
L_0065FA7E:
    PUSH32(esp, 0x007CCE6Cu); /* 0x0065FA7E: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x0065FA83: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_0065FA89:
    PUSH32(esp, MEM32(0x871980)); /* 0x0065FA89: push dword ptr [0x871980] */
    MEM8(edx + 0x871990) = (uint8_t)(0); /* 0x0065FA8F: mov byte ptr [edx + 0x871990], 0 */
    eax = MEM32(ecx + 0x10); /* 0x0065FA96: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0065FA99: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x0065FA9A: push eax */
    PUSH32(esp, 1); /* 0x0065FA9B: push 1 */
    PUSH32(esp, 0x00871990u); /* 0x0065FA9D: push 0x871990 */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x0065FAA2: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0065FAA8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0065FAAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FAAD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FAB0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FAB7: pop ecx */
    esp = ebp; /* 0x0065FAB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FABA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FABB: ret  */
L_0065FABC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FABC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FABF: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065FAC1: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065FAC4: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FAC6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FACD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FAD4: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FAD9: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FADC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065FAE1: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FAE8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FAEB: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065FAED: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x33u); /* 0x0065FAF0: push 0x33 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FAF2: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FAF9: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBE9Cu); /* 0x0065FB00: push 0x7fbe9c */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FB05: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FB08: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065FB0D: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065FB11: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x12Fu; /* 0x0065FB18: mov ecx, 0x12f */
    RECOMP_CALL(sub_00668410); /* 0x0065FB1D: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065FB22: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065FB25: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FB28: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FB2B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FB32: pop ecx */
    esp = ebp; /* 0x0065FB33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FB35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FB36: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FB40u);

L_0065FB40:
    PUSH32(esp, ebp); /* 0x0065FB40: push ebp */
    ebp = esp; /* 0x0065FB41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FB43: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065FB45: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FB4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FB50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065FB51: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065FB54: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FB59: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065FB5B: push eax */
    eax = ebp + (-0xC); /* 0x0065FB5C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065FB5F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065FB65: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065FB90; /* 0x0065FB6C: je 0x65fb90 */
L_0065FB6E:
    eax = MEM32(0x871980); /* 0x0065FB6E: mov eax, dword ptr [0x871980] */
    /* test eax, eax */ /* 0x0065FB73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065FB90; /* 0x0065FB75: je 0x65fb90 */
L_0065FB77:
    PUSH32(esp, eax); /* 0x0065FB77: push eax */
    RECOMP_ICALL(MEM32(0x7CC508)); /* 0x0065FB78: call dword ptr [0x7cc508] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065FB7E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FB81: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FB84: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FB8B: pop ecx */
    esp = ebp; /* 0x0065FB8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FB8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FB8F: ret  */
L_0065FB90:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FB90: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FB93: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065FB95: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065FB98: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FB9A: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FBA1: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FBA8: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FBAD: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FBB0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065FBB5: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FBBC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FBBF: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065FBC1: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x2Cu); /* 0x0065FBC4: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FBC6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FBCD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBE38u); /* 0x0065FBD4: push 0x7fbe38 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FBD9: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FBDC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065FBE1: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065FBE5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x190u; /* 0x0065FBEC: mov ecx, 0x190 */
    RECOMP_CALL(sub_00668410); /* 0x0065FBF1: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065FBF6: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0065FBF9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FBFC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FBFF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FC06: pop ecx */
    esp = ebp; /* 0x0065FC07: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FC09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FC0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FC10u);

L_0065FC10:
    PUSH32(esp, ebp); /* 0x0065FC10: push ebp */
    ebp = esp; /* 0x0065FC11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FC13: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0065FC15: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FC1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FC20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0065FC21: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065FC24: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FC29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065FC2B: push eax */
    eax = ebp + (-0xC); /* 0x0065FC2C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065FC2F: mov dword ptr fs:[0], eax */
    /* cmp MEM8(0x86E017), 0 */ /* 0x0065FC35: cmp byte ptr [0x86e017], 0 */
    _flag_a = (uint32_t)(MEM8(0x86E017)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0065FC5C; /* 0x0065FC3C: je 0x65fc5c */
L_0065FC3E:
    ecx = MEM32(0x871980); /* 0x0065FC3E: mov ecx, dword ptr [0x871980] */
    /* test ecx, ecx */ /* 0x0065FC44: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065FC5C; /* 0x0065FC46: je 0x65fc5c */
L_0065FC48:
    RECOMP_CALL(sub_0067A540); /* 0x0065FC48: call 0x67a540 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FC4D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FC50: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FC57: pop ecx */
    esp = ebp; /* 0x0065FC58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FC5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FC5B: ret  */
L_0065FC5C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FC5C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FC5F: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065FC61: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0065FC64: push 0x28 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FC66: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FC6D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FC74: push 0x7fbbf8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FC79: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FC7C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0065FC81: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FC88: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FC8B: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065FC8D: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x32u); /* 0x0065FC90: push 0x32 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FC92: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FC99: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBE68u); /* 0x0065FCA0: push 0x7fbe68 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FCA5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0065FCA8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065FCAD: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065FCB1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x1A2u; /* 0x0065FCB8: mov ecx, 0x1a2 */
    RECOMP_CALL(sub_00668410); /* 0x0065FCBD: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0065FCC2: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = 0x007CD0C4u; /* 0x0065FCC5: mov eax, 0x7cd0c4 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FCCA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FCCD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FCD4: pop ecx */
    esp = ebp; /* 0x0065FCD5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FCD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FCD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FCE0u);

L_0065FCE0:
    PUSH32(esp, ebp); /* 0x0065FCE0: push ebp */
    ebp = esp; /* 0x0065FCE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FCE3: push -1 */
    PUSH32(esp, 0x007BB528u); /* 0x0065FCE5: push 0x7bb528 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FCEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FCF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x0065FCF1: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0065FCF4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FCF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0065FCFB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0065FCFE: push ebx */
    PUSH32(esp, esi); /* 0x0065FCFF: push esi */
    PUSH32(esp, edi); /* 0x0065FD00: push edi */
    PUSH32(esp, eax); /* 0x0065FD01: push eax */
    eax = ebp + (-0xC); /* 0x0065FD02: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065FD05: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x50)) = edx; /* 0x0065FD0B: mov dword ptr [ebp - 0x50], edx */
    ebx = ecx; /* 0x0065FD0E: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0065FD10: mov dword ptr [ebp - 4], 0 */
    eax = ebp + 0x8; /* 0x0065FD17: lea eax, [ebp + 8] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065FD1A: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x007F24ECu); /* 0x0065FD1E: push 0x7f24ec */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x0065FD23: cmovae eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0065FD27: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x0065FD28: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0065FD2E: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0065FD30: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0065FD33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065FDAF; /* 0x0065FD35: jne 0x65fdaf */
L_0065FD37:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FD37: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FD3A: mov ecx, esp */
    MEM32(ebp + (-0x54)) = esp; /* 0x0065FD3C: mov dword ptr [ebp - 0x54], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FD3F: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FD44: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065FD49: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FD4D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FD50: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065FD52: mov dword ptr [ebp - 0x44], esp */
    eax = ebp + 0x8; /* 0x0065FD55: lea eax, [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FD58: push -1 */
    PUSH32(esp, edi); /* 0x0065FD5A: push edi */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FD5B: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = edi; /* 0x0065FD62: mov dword ptr [ecx + 0x10], edi */
    PUSH32(esp, eax); /* 0x0065FD65: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FD66: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0065FD69: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065FD6E: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FD72: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FD75: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065FD77: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007CE4ACu); /* 0x0065FD7A: push 0x7ce4ac */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FD7F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065FD84: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FD88: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FD8B: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065FD8D: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007FBD54u); /* 0x0065FD90: push 0x7fbd54 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FD95: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0065FD9A: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065FD9E: mov byte ptr [ebp - 4], 0 */
    ecx = 0x1D9u; /* 0x0065FDA2: mov ecx, 0x1d9 */
    RECOMP_CALL(sub_00668A10); /* 0x0065FDA7: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0065FDAC: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0065FDAF:
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065FDAF: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x40); /* 0x0065FDB3: lea ecx, [ebp - 0x40] */
    eax = ebp + 0x8; /* 0x0065FDB6: lea eax, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x0065FDB9: cmovae eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0065FDBD: push ecx */
    PUSH32(esp, eax); /* 0x0065FDBE: push eax */
    RECOMP_ICALL(MEM32(0x7CC4BC)); /* 0x0065FDBF: call dword ptr [0x7cc4bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0065FDC5: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0065FDC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0065FE50; /* 0x0065FDCA: je 0x65fe50 */
L_0065FDD0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FDD0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FDD3: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0065FDD5: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FDD8: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FDDD: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0065FDE2: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FDE6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FDE9: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0065FDEB: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FDEE: push -1 */
    PUSH32(esp, 0); /* 0x0065FDF0: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FDF2: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0065FDF9: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x00865EF8u); /* 0x0065FE00: push 0x865ef8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FE05: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0065FE08: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0065FE0D: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FE11: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FE14: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0065FE16: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007FBE2Cu); /* 0x0065FE19: push 0x7fbe2c */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FE1E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0065FE23: mov byte ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FE27: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FE2A: mov ecx, esp */
    MEM32(ebp + (-0x54)) = esp; /* 0x0065FE2C: mov dword ptr [ebp - 0x54], esp */
    PUSH32(esp, 0x007FBCC8u); /* 0x0065FE2F: push 0x7fbcc8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FE34: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0065FE39: mov byte ptr [ebp - 4], 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065FE3D: mov byte ptr [ebp - 4], 0 */
    ecx = 0x1DFu; /* 0x0065FE41: mov ecx, 0x1df */
    RECOMP_CALL(sub_00668A10); /* 0x0065FE46: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0065FE4B: add esp, 0x60 */
    _flag_k = FK_ADD;
    goto L_0065FE78; /* 0x0065FE4E: jmp 0x65fe78 */
L_0065FE50:
    eax = MEM32(ebp + (-0x50)); /* 0x0065FE50: mov eax, dword ptr [ebp - 0x50] */
    esi = MEM32(ebp + (-0x2C)); /* 0x0065FE53: mov esi, dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x0065FE56: push esi */
    MEM32(eax) = esi; /* 0x0065FE57: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_0077F3DF); /* 0x0065FE59: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065FE5E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x0065FE61: mov dword ptr [ebx], eax */
    PUSH32(esp, edi); /* 0x0065FE63: push edi */
    PUSH32(esp, esi); /* 0x0065FE64: push esi */
    PUSH32(esp, 1); /* 0x0065FE65: push 1 */
    PUSH32(esp, eax); /* 0x0065FE67: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x0065FE68: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0065FE6E: push edi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0065FE6F: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0065FE75: add esp, 0x14 */
    _flag_k = FK_ADD;
L_0065FE78:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065FE78: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065FE7F: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065FE91; /* 0x0065FE83: jb 0x65fe91 */
L_0065FE85:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065FE85: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0065FE88: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065FE8E: add esp, 4 */
    _flag_k = FK_ADD;
L_0065FE91:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0065FE91: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0065FE98: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0065FE9F: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FEA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FEA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FEAD: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065FEAE: pop edi */
    esi = POP32_VAL(esp); /* 0x0065FEAF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065FEB0: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0065FEB1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0065FEB4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0065FEB6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0065FEBB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FEBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FEBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FEC0u);

L_0065FEC0:
    PUSH32(esp, ebp); /* 0x0065FEC0: push ebp */
    ebp = esp; /* 0x0065FEC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FEC3: push -1 */
    PUSH32(esp, 0x007BB578u); /* 0x0065FEC5: push 0x7bb578 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FECA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FED0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0065FED1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0065FED4: push ebx */
    PUSH32(esp, esi); /* 0x0065FED5: push esi */
    PUSH32(esp, edi); /* 0x0065FED6: push edi */
    eax = MEM32(0x855000); /* 0x0065FED7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FEDC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065FEDE: push eax */
    eax = ebp + (-0xC); /* 0x0065FEDF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0065FEE2: mov dword ptr fs:[0], eax */
    edi = edx; /* 0x0065FEE8: mov edi, edx */
    ebx = ecx; /* 0x0065FEEA: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0065FEEC: mov dword ptr [ebp - 4], 0 */
    eax = ebp + 0x8; /* 0x0065FEF3: lea eax, [ebp + 8] */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065FEF6: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x007F8FCCu); /* 0x0065FEFA: push 0x7f8fcc */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x0065FEFF: cmovae eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0065FF03: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E4)); /* 0x0065FF04: call dword ptr [0x7cc4e4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0065FF0A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0065FF0C: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0065FF0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0065FF8B; /* 0x0065FF11: jne 0x65ff8b */
L_0065FF13:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FF13: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FF16: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x0065FF18: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0065FF1B: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FF20: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0065FF25: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FF29: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FF2C: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0065FF2E: mov dword ptr [ebp - 0x10], esp */
    eax = ebp + 0x8; /* 0x0065FF31: lea eax, [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FF34: push -1 */
    PUSH32(esp, esi); /* 0x0065FF36: push esi */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0065FF37: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x0065FF3E: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, eax); /* 0x0065FF41: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0065FF42: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0065FF45: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0065FF4A: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FF4E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FF51: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0065FF53: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007CE4ACu); /* 0x0065FF56: push 0x7ce4ac */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FF5B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0065FF60: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0065FF64: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0065FF67: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x0065FF69: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007FBD20u); /* 0x0065FF6C: push 0x7fbd20 */
    RECOMP_CALL(sub_00409FA0); /* 0x0065FF71: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0065FF76: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0065FF7A: mov byte ptr [ebp - 4], 0 */
    ecx = 0x20Au; /* 0x0065FF7E: mov ecx, 0x20a */
    RECOMP_CALL(sub_00668A10); /* 0x0065FF83: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0065FF88: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0065FF8B:
    PUSH32(esp, esi); /* 0x0065FF8B: push esi */
    PUSH32(esp, edi); /* 0x0065FF8C: push edi */
    PUSH32(esp, 1); /* 0x0065FF8D: push 1 */
    PUSH32(esp, MEM32(ebx)); /* 0x0065FF8F: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x0065FF91: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0065FF97: push esi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0065FF98: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0065FF9E: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0065FFA1: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0065FFA8: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0065FFBA; /* 0x0065FFAC: jb 0x65ffba */
L_0065FFAE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0065FFAE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0065FFB1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0065FFB7: add esp, 4 */
    _flag_k = FK_ADD;
L_0065FFBA:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0065FFBA: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0065FFC1: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0065FFC8: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0065FFCC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0065FFCF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0065FFD6: pop ecx */
    edi = POP32_VAL(esp); /* 0x0065FFD7: pop edi */
    esi = POP32_VAL(esp); /* 0x0065FFD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0065FFD9: pop ebx */
    esp = ebp; /* 0x0065FFDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0065FFDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0065FFDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0065FFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0065FFE0u);

L_0065FFE0:
    PUSH32(esp, ebp); /* 0x0065FFE0: push ebp */
    ebp = esp; /* 0x0065FFE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0065FFE3: push -1 */
    PUSH32(esp, 0x00783000u); /* 0x0065FFE5: push 0x783000 */
    eax = MEM32(FS_BASE + (0)); /* 0x0065FFEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0065FFF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0065FFF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0065FFF4: push ebx */
    PUSH32(esp, esi); /* 0x0065FFF5: push esi */
    PUSH32(esp, edi); /* 0x0065FFF6: push edi */
    eax = MEM32(0x855000); /* 0x0065FFF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0065FFFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0065FFFE: push eax */
    eax = ebp + (-0xC); /* 0x0065FFFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660002: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x00660008: mov esi, edx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0066000A: mov dword ptr [ebp - 0x10], esi */
    edi = ecx; /* 0x0066000D: mov edi, ecx */
    /* test edi, edi */ /* 0x0066000F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660067; /* 0x00660011: jne 0x660067 */
L_00660013:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660013: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660016: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660018: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0066001B: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660020: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x00660025: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660028: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066002B: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0066002D: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBD88u); /* 0x00660030: push 0x7fbd88 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660035: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066003A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066003E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x21Cu; /* 0x00660045: mov ecx, 0x21c */
    RECOMP_CALL(sub_00668410); /* 0x0066004A: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066004F: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00660052: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660055: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660058: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066005F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00660060: pop edi */
    esi = POP32_VAL(esp); /* 0x00660061: pop esi */
    ebx = POP32_VAL(esp); /* 0x00660062: pop ebx */
    esp = ebp; /* 0x00660063: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660065: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00660066: ret  */
L_00660067:
    PUSH32(esp, 0); /* 0x00660067: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00660069: push 0x7cd0c4 */
    ecx = esi; /* 0x0066006E: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660070: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC478); /* 0x00660075: mov ebx, dword ptr [0x7cc478] */
    PUSH32(esp, edi); /* 0x0066007B: push edi */
    RECOMP_ICALL(ebx); /* 0x0066007C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066007E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(0x871990) = (uint8_t)(LO8(eax)); /* 0x00660081: mov byte ptr [0x871990], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00660086: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006600AB; /* 0x00660088: je 0x6600ab */
L_0066008A:
    esi = 0x00871990u; /* 0x0066008A: mov esi, 0x871990 */
    /* nop */ /* 0x0066008F: nop  */
L_00660090:
    PUSH32(esp, edi); /* 0x00660090: push edi */
    esi = esi + 0x1; /* 0x00660091: lea esi, [esi + 1] */
    RECOMP_ICALL(ebx); /* 0x00660094: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660096: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x00660099: mov byte ptr [esi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066009B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660090; /* 0x0066009D: jne 0x660090 */
L_0066009F:
    SET_LO8(eax, MEM8(0x871990)); /* 0x0066009F: mov al, byte ptr [0x871990] */
    esi = MEM32(ebp + (-0x10)); /* 0x006600A4: mov esi, dword ptr [ebp - 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x006600A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006600AF; /* 0x006600A9: jne 0x6600af */
L_006600AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006600AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006600C0; /* 0x006600AD: jmp 0x6600c0 */
L_006600AF:
    ecx = 0x00871990u; /* 0x006600AF: mov ecx, 0x871990 */
    edx = ecx + 0x1; /* 0x006600B4: lea edx, [ecx + 1] */
L_006600B7:
    SET_LO8(eax, MEM8(ecx)); /* 0x006600B7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006600B9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006600BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006600B7; /* 0x006600BC: jne 0x6600b7 */
L_006600BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006600BE: sub ecx, edx */
    _flag_k = FK_CMP;
L_006600C0:
    PUSH32(esp, ecx); /* 0x006600C0: push ecx */
    PUSH32(esp, 0x00871990u); /* 0x006600C1: push 0x871990 */
    ecx = esi; /* 0x006600C6: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x006600C8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006600CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x006600CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006600D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006600D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006600DA: pop edi */
    esi = POP32_VAL(esp); /* 0x006600DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006600DC: pop ebx */
    esp = ebp; /* 0x006600DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006600DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006600E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00660000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660000u);

L_00660000:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x00660000: inc ebp */
    _flag_k = FK_INC;
    void_lift_trap(0x00660001u, "hlt ");
    MEM32(FS_BASE + (0)) = eax; /* 0x00660002: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x00660008: mov esi, edx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0066000A: mov dword ptr [ebp - 0x10], esi */
    edi = ecx; /* 0x0066000D: mov edi, ecx */
    /* test edi, edi */ /* 0x0066000F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660067; /* 0x00660011: jne 0x660067 */
L_00660013:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660013: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660016: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660018: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x0066001B: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660020: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x00660025: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660028: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066002B: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0066002D: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBD88u); /* 0x00660030: push 0x7fbd88 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660035: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066003A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066003E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x21Cu; /* 0x00660045: mov ecx, 0x21c */
    RECOMP_CALL(sub_00668410); /* 0x0066004A: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066004F: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00660052: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660055: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660058: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066005F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00660060: pop edi */
    esi = POP32_VAL(esp); /* 0x00660061: pop esi */
    ebx = POP32_VAL(esp); /* 0x00660062: pop ebx */
    esp = ebp; /* 0x00660063: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660065: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00660066: ret  */
L_00660067:
    PUSH32(esp, 0); /* 0x00660067: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00660069: push 0x7cd0c4 */
    ecx = esi; /* 0x0066006E: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660070: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC478); /* 0x00660075: mov ebx, dword ptr [0x7cc478] */
    PUSH32(esp, edi); /* 0x0066007B: push edi */
    RECOMP_ICALL(ebx); /* 0x0066007C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066007E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(0x871990) = (uint8_t)(LO8(eax)); /* 0x00660081: mov byte ptr [0x871990], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00660086: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006600AB; /* 0x00660088: je 0x6600ab */
L_0066008A:
    esi = 0x00871990u; /* 0x0066008A: mov esi, 0x871990 */
    /* nop */ /* 0x0066008F: nop  */
L_00660090:
    PUSH32(esp, edi); /* 0x00660090: push edi */
    esi = esi + 0x1; /* 0x00660091: lea esi, [esi + 1] */
    RECOMP_ICALL(ebx); /* 0x00660094: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660096: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x00660099: mov byte ptr [esi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066009B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660090; /* 0x0066009D: jne 0x660090 */
L_0066009F:
    SET_LO8(eax, MEM8(0x871990)); /* 0x0066009F: mov al, byte ptr [0x871990] */
    esi = MEM32(ebp + (-0x10)); /* 0x006600A4: mov esi, dword ptr [ebp - 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x006600A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006600AF; /* 0x006600A9: jne 0x6600af */
L_006600AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006600AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006600C0; /* 0x006600AD: jmp 0x6600c0 */
L_006600AF:
    ecx = 0x00871990u; /* 0x006600AF: mov ecx, 0x871990 */
    edx = ecx + 0x1; /* 0x006600B4: lea edx, [ecx + 1] */
L_006600B7:
    SET_LO8(eax, MEM8(ecx)); /* 0x006600B7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006600B9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006600BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006600B7; /* 0x006600BC: jne 0x6600b7 */
L_006600BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006600BE: sub ecx, edx */
    _flag_k = FK_CMP;
L_006600C0:
    PUSH32(esp, ecx); /* 0x006600C0: push ecx */
    PUSH32(esp, 0x00871990u); /* 0x006600C1: push 0x871990 */
    ecx = esi; /* 0x006600C6: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x006600C8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006600CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x006600CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006600D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006600D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006600DA: pop edi */
    esi = POP32_VAL(esp); /* 0x006600DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006600DC: pop ebx */
    esp = ebp; /* 0x006600DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006600DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006600E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006600F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006600F0u);

L_006600F0:
    PUSH32(esp, ebp); /* 0x006600F0: push ebp */
    ebp = esp; /* 0x006600F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006600F3: push -1 */
    PUSH32(esp, 0x007825F0u); /* 0x006600F5: push 0x7825f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006600FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660100: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00660101: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660104: push esi */
    eax = MEM32(0x855000); /* 0x00660105: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066010A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066010C: push eax */
    eax = ebp + (-0xC); /* 0x0066010D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660110: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660116: mov esi, ecx */
    /* test esi, esi */ /* 0x00660118: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066016E; /* 0x0066011A: jne 0x66016e */
L_0066011C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066011C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066011F: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660121: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBBF8u); /* 0x00660124: push 0x7fbbf8 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660129: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x0066012E: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660131: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660134: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660136: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBDC0u); /* 0x00660139: push 0x7fbdc0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066013E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660143: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660147: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x238u; /* 0x0066014E: mov ecx, 0x238 */
    RECOMP_CALL(sub_00668410); /* 0x00660153: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660158: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0066015B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0066015E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660161: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660168: pop ecx */
    esi = POP32_VAL(esp); /* 0x00660169: pop esi */
    esp = ebp; /* 0x0066016A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066016C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066016D: ret  */
L_0066016E:
    eax = MEM32(edx + 0x10); /* 0x0066016E: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00660171: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x00660173: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006601B0; /* 0x00660175: je 0x6601b0 */
L_00660177:
    /* cmp eax, ecx */ /* 0x00660177: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006601A5; /* 0x00660179: jbe 0x6601a5 */
L_0066017B:
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x0066017B: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00660185; /* 0x0066017F: jb 0x660185 */
L_00660181:
    eax = MEM32(edx); /* 0x00660181: mov eax, dword ptr [edx] */
    goto L_00660187; /* 0x00660183: jmp 0x660187 */
L_00660185:
    eax = edx; /* 0x00660185: mov eax, edx */
L_00660187:
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x00660187: mov al, byte ptr [eax + ecx] */
    MEM8(ecx + 0x871990) = (uint8_t)(LO8(eax)); /* 0x0066018A: mov byte ptr [ecx + 0x871990], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00660190: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(edx + 0x10); /* 0x00660191: mov eax, dword ptr [edx + 0x10] */
    /* cmp eax, ecx */ /* 0x00660194: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0066017B; /* 0x00660196: ja 0x66017b */
L_00660198:
    /* cmp ecx, 0x4000u */ /* 0x00660198: cmp ecx, 0x4000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006601B0; /* 0x0066019E: jb 0x6601b0 */
L_006601A0:
    RECOMP_CALL(sub_0077F8A2); /* 0x006601A0: call 0x77f8a2 */
    RECOMP_FLAGS_IN();
L_006601A5:
    PUSH32(esp, 0x007CCE6Cu); /* 0x006601A5: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x006601AA: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_006601B0:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x006601B0: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ecx + 0x871990) = (uint8_t)(0); /* 0x006601B4: mov byte ptr [ecx + 0x871990], 0 */
    PUSH32(esp, esi); /* 0x006601BB: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006601C5; /* 0x006601BC: jne 0x6601c5 */
L_006601BE:
    eax = MEM32(edx + 0x10); /* 0x006601BE: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006601C1: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006601C2: push eax */
    goto L_006601C8; /* 0x006601C3: jmp 0x6601c8 */
L_006601C5:
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x006601C5: push dword ptr [edx + 0x10] */
L_006601C8:
    PUSH32(esp, 1); /* 0x006601C8: push 1 */
    PUSH32(esp, 0x00871990u); /* 0x006601CA: push 0x871990 */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x006601CF: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006601D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006601D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x006601DA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006601DD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006601E4: pop ecx */
    esi = POP32_VAL(esp); /* 0x006601E5: pop esi */
    esp = ebp; /* 0x006601E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006601E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006601E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006601F0(void) {
    extern int crashday_inflate_buffer_fast(void);
    extern void sub_006601F0_lifted(void);
    if (!crashday_inflate_buffer_fast()) sub_006601F0_lifted();
}

void sub_006601F0_lifted(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006601F0u);

L_006601F0:
    PUSH32(esp, ebp); /* 0x006601F0: push ebp */
    ebp = esp; /* 0x006601F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006601F3: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006601F6: push ebx */
    PUSH32(esp, esi); /* 0x006601F7: push esi */
    PUSH32(esp, edi); /* 0x006601F8: push edi */
    PUSH32(esp, 0x34u); /* 0x006601F9: push 0x34 */
    eax = ebp + (-0x34); /* 0x006601FB: lea eax, [ebp - 0x34] */
    esi = edx; /* 0x006601FE: mov esi, edx */
    PUSH32(esp, 0); /* 0x00660200: push 0 */
    PUSH32(esp, eax); /* 0x00660202: push eax */
    edi = ecx; /* 0x00660203: mov edi, ecx */
    RECOMP_CALL(sub_0078083E); /* 0x00660205: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0066020A: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x38); /* 0x0066020D: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x34)) = esi; /* 0x00660210: mov dword ptr [ebp - 0x34], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660213: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = esi; /* 0x00660216: mov dword ptr [ebp - 0x30], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x00660219: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x0066021C: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x0066021F: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0x8); /* 0x00660222: mov eax, dword ptr [ebp + 8] */
    edx = esi + 0x10; /* 0x00660225: lea edx, [esi + 0x10] */
    MEM32(ebp + (-0x38)) = edi; /* 0x00660228: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x0066022B: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_006CB8C0); /* 0x0066022E: call 0x6cb8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660233: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00660236: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066024C; /* 0x00660238: jne 0x66024c */
L_0066023A:
    edx = esi + 0x5; /* 0x0066023A: lea edx, [esi + 5] */
    ecx = ebp + (-0x38); /* 0x0066023D: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_006CBA50); /* 0x00660240: call 0x6cba50 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x00660245: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x24)); } /* 0x00660248: cmove esi, dword ptr [ebp - 0x24] */
L_0066024C:
    edi = MEM32(ebp + (-0x1C)); /* 0x0066024C: mov edi, dword ptr [ebp - 0x1c] */
    /* test edi, edi */ /* 0x0066024F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660275; /* 0x00660251: je 0x660275 */
L_00660253:
    ebx = MEM32(ebp + (-0x14)); /* 0x00660253: mov ebx, dword ptr [ebp - 0x14] */
    /* test ebx, ebx */ /* 0x00660256: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660275; /* 0x00660258: je 0x660275 */
L_0066025A:
    eax = MEM32(edi + 0x34); /* 0x0066025A: mov eax, dword ptr [edi + 0x34] */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066025D: mov ecx, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x00660260: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066026E; /* 0x00660262: je 0x66026e */
L_00660264:
    PUSH32(esp, eax); /* 0x00660264: push eax */
    PUSH32(esp, ecx); /* 0x00660265: push ecx */
    RECOMP_ICALL(ebx); /* 0x00660266: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x00660268: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0066026B: add esp, 8 */
    _flag_k = FK_ADD;
L_0066026E:
    PUSH32(esp, edi); /* 0x0066026E: push edi */
    PUSH32(esp, ecx); /* 0x0066026F: push ecx */
    RECOMP_ICALL(ebx); /* 0x00660270: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660272: add esp, 8 */
    _flag_k = FK_ADD;
L_00660275:
    edi = POP32_VAL(esp); /* 0x00660275: pop edi */
    eax = esi; /* 0x00660276: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00660278: pop esi */
    ebx = POP32_VAL(esp); /* 0x00660279: pop ebx */
    esp = ebp; /* 0x0066027A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066027C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066027D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00660280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660280u);

L_00660280:
    PUSH32(esp, ebp); /* 0x00660280: push ebp */
    ebp = esp; /* 0x00660281: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660283: push -1 */
    PUSH32(esp, 0x007BB5EDu); /* 0x00660285: push 0x7bb5ed */
    eax = MEM32(FS_BASE + (0)); /* 0x0066028A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660290: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x00660291: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00660294: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660299: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066029B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0066029E: push ebx */
    PUSH32(esp, esi); /* 0x0066029F: push esi */
    PUSH32(esp, edi); /* 0x006602A0: push edi */
    PUSH32(esp, eax); /* 0x006602A1: push eax */
    eax = ebp + (-0xC); /* 0x006602A2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006602A5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006602AB: mov esi, ecx */
    MEM32(ebp + (-0x64)) = esi; /* 0x006602AD: mov dword ptr [ebp - 0x64], esi */
    edi = MEM32(ebp + 0x8); /* 0x006602B0: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x54)) = edi; /* 0x006602B3: mov dword ptr [ebp - 0x54], edi */
    MEM32(ebp + (-0x50)) = 0; /* 0x006602B6: mov dword ptr [ebp - 0x50], 0 */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x006602BD: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006602C7; /* 0x006602C1: jb 0x6602c7 */
L_006602C3:
    eax = MEM32(edi); /* 0x006602C3: mov eax, dword ptr [edi] */
    goto L_006602C9; /* 0x006602C5: jmp 0x6602c9 */
L_006602C7:
    eax = edi; /* 0x006602C7: mov eax, edi */
L_006602C9:
    PUSH32(esp, 0x007F24ECu); /* 0x006602C9: push 0x7f24ec */
    PUSH32(esp, eax); /* 0x006602CE: push eax */
    eax = ebp + (-0x50); /* 0x006602CF: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x006602D2: push eax */
    RECOMP_ICALL(MEM32(0x7CC518)); /* 0x006602D3: call dword ptr [0x7cc518] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x006602D9: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006602DC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = MEM32(0x7CC9AC); /* 0x006602DF: mov ebx, dword ptr [0x7cc9ac] */
    /* test eax, eax */ /* 0x006602E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066039D; /* 0x006602E7: jne 0x66039d */
L_006602ED:
    RECOMP_ICALL(ebx); /* 0x006602ED: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006602EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006602F7; /* 0x006602F1: jne 0x6602f7 */
L_006602F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006602F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00660311; /* 0x006602F5: jmp 0x660311 */
L_006602F7:
    ecx = MEM32(0x927B00); /* 0x006602F7: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x006602FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660311; /* 0x006602FF: jne 0x660311 */
L_00660301:
    ecx = 0x00927AE8u; /* 0x00660301: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x00660306: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x0066030B: mov ecx, dword ptr [0x927b00] */
L_00660311:
    eax = MEM32(ecx); /* 0x00660311: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x00660313: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x00660315: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660318: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066031B: mov ecx, esp */
    MEM32(ebp + (-0x58)) = esp; /* 0x0066031D: mov dword ptr [ebp - 0x58], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660320: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660325: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066032A: mov dword ptr [ebp - 4], 0 */
    edx = 0x007FBFA4u; /* 0x00660331: mov edx, 0x7fbfa4 */
    PUSH32(esp, edi); /* 0x00660336: push edi */
    ecx = ebp + (-0x48); /* 0x00660337: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_0042A130); /* 0x0066033A: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066033F: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00660343: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660346: mov ecx, esp */
    MEM32(ebp + (-0x5C)) = esp; /* 0x00660348: mov dword ptr [ebp - 0x5c], esp */
    edx = eax; /* 0x0066034B: mov edx, eax */
    PUSH32(esp, 0x007FBFFCu); /* 0x0066034D: push 0x7fbffc */
    RECOMP_CALL(sub_00419C40); /* 0x00660352: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660357: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066035A: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066035E: mov byte ptr [ebp - 4], 3 */
    ecx = 0x70u; /* 0x00660362: mov ecx, 0x70 */
    RECOMP_CALL(sub_00668410); /* 0x00660367: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066036C: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066036F: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x34)), 0x10u */ /* 0x00660376: cmp dword ptr [ebp - 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00660388; /* 0x0066037A: jb 0x660388 */
L_0066037C:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x0066037C: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066037F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660385: add esp, 4 */
    _flag_k = FK_ADD;
L_00660388:
    eax = MEM32(ebp + (-0x50)); /* 0x00660388: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x34)) = 0xFu; /* 0x0066038B: mov dword ptr [ebp - 0x34], 0xf */
    MEM32(ebp + (-0x38)) = 0; /* 0x00660392: mov dword ptr [ebp - 0x38], 0 */
    MEM8(ebp + (-0x48)) = (uint8_t)(0); /* 0x00660399: mov byte ptr [ebp - 0x48], 0 */
L_0066039D:
    PUSH32(esp, eax); /* 0x0066039D: push eax */
    PUSH32(esp, 1); /* 0x0066039E: push 1 */
    eax = ebp + (-0x18); /* 0x006603A0: lea eax, [ebp - 0x18] */
    PUSH32(esp, 8); /* 0x006603A3: push 8 */
    PUSH32(esp, eax); /* 0x006603A5: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x006603A6: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006603AC: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x18)), 0x43u */ /* 0x006603AF: cmp byte ptr [ebp - 0x18], 0x43 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006603C5; /* 0x006603B3: jne 0x6603c5 */
L_006603B5:
    /* cmp MEM8(ebp + (-0x17)), 0x44u */ /* 0x006603B5: cmp byte ptr [ebp - 0x17], 0x44 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x17))) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006603C5; /* 0x006603B9: jne 0x6603c5 */
L_006603BB:
    /* cmp MEM8(ebp + (-0x16)), 0x58u */ /* 0x006603BB: cmp byte ptr [ebp - 0x16], 0x58 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x16))) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660465; /* 0x006603BF: je 0x660465 */
L_006603C5:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x006603C5: push dword ptr [ebp - 0x50] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x006603C8: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006603CE: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(ebx); /* 0x006603D1: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006603D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006603DB; /* 0x006603D5: jne 0x6603db */
L_006603D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006603D7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006603F5; /* 0x006603D9: jmp 0x6603f5 */
L_006603DB:
    ecx = MEM32(0x927B00); /* 0x006603DB: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x006603E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006603F5; /* 0x006603E3: jne 0x6603f5 */
L_006603E5:
    ecx = 0x00927AE8u; /* 0x006603E5: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x006603EA: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x006603EF: mov ecx, dword ptr [0x927b00] */
L_006603F5:
    eax = MEM32(ecx); /* 0x006603F5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006603F7: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x006603F9: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006603FC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006603FF: mov ecx, esp */
    MEM32(ebp + (-0x5C)) = esp; /* 0x00660401: mov dword ptr [ebp - 0x5c], esp */
    PUSH32(esp, 0x2Bu); /* 0x00660404: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00660406: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0066040D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660414: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00660419: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066041C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x00660421: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660428: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066042B: mov ecx, esp */
    MEM32(ebp + (-0x58)) = esp; /* 0x0066042D: mov dword ptr [ebp - 0x58], esp */
    PUSH32(esp, 0x18u); /* 0x00660430: push 0x18 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00660432: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00660439: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFB4u); /* 0x00660440: push 0x7fbfb4 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00660445: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660448: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066044D: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660451: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x7Fu; /* 0x00660458: mov ecx, 0x7f */
    RECOMP_CALL(sub_00668410); /* 0x0066045D: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660462: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660465:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00660465: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), ebx */ /* 0x00660467: cmp dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00660553; /* 0x0066046A: jbe 0x660553 */
L_00660470:
    edi = esi + 0x18; /* 0x00660470: lea edi, [esi + 0x18] */
    MEM32(ebp + (-0x58)) = edi; /* 0x00660473: mov dword ptr [ebp - 0x58], edi */
L_00660476:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00660476: push dword ptr [ebp - 0x50] */
    eax = ebp + (-0x30); /* 0x00660479: lea eax, [ebp - 0x30] */
    PUSH32(esp, 1); /* 0x0066047C: push 1 */
    PUSH32(esp, 0x16u); /* 0x0066047E: push 0x16 */
    PUSH32(esp, eax); /* 0x00660480: push eax */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x00660481: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x00660487: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0066048A: add esp, 0x10 */
    _flag_k = FK_ADD;
    _xmm[0] = xmm_ld(ebp + (-0x30)); /* 0x0066048D: movdqu xmm0, xmmword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x00660492: mov dword ptr [ebp - 0x4c], eax */
    ecx = edi; /* 0x00660495: mov ecx, edi */
    eax = MEM32(ebp + (-0x20)); /* 0x00660497: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x38)) = eax; /* 0x0066049A: mov dword ptr [ebp - 0x38], eax */
    SET_LO16(eax, MEM16(ebp + (-0x1C))); /* 0x0066049D: mov ax, word ptr [ebp - 0x1c] */
    MEM16(ebp + (-0x34)) = (uint16_t)(LO16(eax)); /* 0x006604A1: mov word ptr [ebp - 0x34], ax */
    eax = ebp + (-0x4C); /* 0x006604A5: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x006604A8: push eax */
    xmm_st(ebp + (-0x48), _xmm[0]); /* 0x006604A9: movdqu xmmword ptr [ebp - 0x48], xmm0 */
    RECOMP_CALL(sub_00663FF0); /* 0x006604AE: call 0x663ff0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006604B3: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x006604B4: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006604B7: push eax */
    PUSH32(esp, ecx); /* 0x006604B8: push ecx */
    eax = ebp + (-0x60); /* 0x006604B9: lea eax, [ebp - 0x60] */
    ecx = edi; /* 0x006604BC: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006604BE: push eax */
    RECOMP_CALL(sub_006640A0); /* 0x006604BF: call 0x6640a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x006604C4: mov ecx, dword ptr [esi + 0x24] */
    eax = ebp + (-0x30); /* 0x006604C7: lea eax, [ebp - 0x30] */
    /* cmp eax, ecx */ /* 0x006604CA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066050F; /* 0x006604CC: jae 0x66050f */
L_006604CE:
    eax = MEM32(esi + 0x20); /* 0x006604CE: mov eax, dword ptr [esi + 0x20] */
    edx = ebp + (-0x30); /* 0x006604D1: lea edx, [ebp - 0x30] */
    /* cmp eax, edx */ /* 0x006604D4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066050F; /* 0x006604D6: ja 0x66050f */
L_006604D8:
    edi = edx; /* 0x006604D8: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006604DA: sub edi, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x006604DC: sar edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 2u);
    /* cmp ecx, MEM32(esi + 0x28) */ /* 0x006604DF: cmp ecx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006604ED; /* 0x006604E2: jne 0x6604ed */
L_006604E4:
    PUSH32(esp, ecx); /* 0x006604E4: push ecx */
    ecx = esi + 0x20; /* 0x006604E5: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_0047AC70); /* 0x006604E8: call 0x47ac70 */
    RECOMP_FLAGS_IN();
L_006604ED:
    eax = MEM32(esi + 0x20); /* 0x006604ED: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(esi + 0x24); /* 0x006604F0: mov ecx, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x4)) = 6; /* 0x006604F3: mov dword ptr [ebp - 4], 6 */
    /* test ecx, ecx */ /* 0x006604FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660503; /* 0x006604FC: je 0x660503 */
L_006604FE:
    eax = MEM32(eax + edi * 4); /* 0x006604FE: mov eax, dword ptr [eax + edi*4] */
    MEM32(ecx) = eax; /* 0x00660501: mov dword ptr [ecx], eax */
L_00660503:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660503: mov dword ptr [ebp - 4], 0xffffffff */
    edi = MEM32(ebp + (-0x58)); /* 0x0066050A: mov edi, dword ptr [ebp - 0x58] */
    goto L_00660529; /* 0x0066050D: jmp 0x660529 */
L_0066050F:
    /* cmp ecx, MEM32(esi + 0x28) */ /* 0x0066050F: cmp ecx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066051D; /* 0x00660512: jne 0x66051d */
L_00660514:
    PUSH32(esp, ecx); /* 0x00660514: push ecx */
    ecx = esi + 0x20; /* 0x00660515: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_0047AC70); /* 0x00660518: call 0x47ac70 */
    RECOMP_FLAGS_IN();
L_0066051D:
    ecx = MEM32(esi + 0x24); /* 0x0066051D: mov ecx, dword ptr [esi + 0x24] */
    /* test ecx, ecx */ /* 0x00660520: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660529; /* 0x00660522: je 0x660529 */
L_00660524:
    eax = MEM32(ebp + (-0x30)); /* 0x00660524: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ecx) = eax; /* 0x00660527: mov dword ptr [ecx], eax */
L_00660529:
    eax = (uint32_t)MEM8(ebp + (-0x23)); /* 0x00660529: movzx eax, byte ptr [ebp - 0x23] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x0066052D: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 4; /* 0x00660530: add dword ptr [esi + 0x24], 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x00660534: push 1 */
    PUSH32(esp, eax); /* 0x00660536: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00660537: push dword ptr [ebp - 0x50] */
    RECOMP_ICALL(MEM32(0x7CC514)); /* 0x0066053A: call dword ptr [0x7cc514] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00660540: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00660541: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x00660544: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00660476; /* 0x00660547: jb 0x660476 */
L_0066054D:
    esi = MEM32(ebp + (-0x64)); /* 0x0066054D: mov esi, dword ptr [ebp - 0x64] */
    edi = MEM32(ebp + (-0x54)); /* 0x00660550: mov edi, dword ptr [ebp - 0x54] */
L_00660553:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00660553: push dword ptr [ebp - 0x50] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x00660556: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x0066055C: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066055F: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(0x7CC9AC); /* 0x00660562: mov ebx, dword ptr [0x7cc9ac] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x00660568: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660605; /* 0x0066056B: je 0x660605 */
L_00660571:
    RECOMP_ICALL(ebx); /* 0x00660571: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00660573: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066057B; /* 0x00660575: jne 0x66057b */
L_00660577:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00660577: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00660595; /* 0x00660579: jmp 0x660595 */
L_0066057B:
    ecx = MEM32(0x927B00); /* 0x0066057B: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x00660581: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660595; /* 0x00660583: jne 0x660595 */
L_00660585:
    ecx = 0x00927AE8u; /* 0x00660585: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0066058A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x0066058F: mov ecx, dword ptr [0x927b00] */
L_00660595:
    eax = MEM32(ecx); /* 0x00660595: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x00660597: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x00660599: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066059C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066059F: mov ecx, esp */
    MEM32(ebp + (-0x5C)) = esp; /* 0x006605A1: mov dword ptr [ebp - 0x5c], esp */
    PUSH32(esp, 0x2Bu); /* 0x006605A4: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006605A6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006605AD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x006605B4: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006605B9: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006605BC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 7; /* 0x006605C1: mov dword ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006605C8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006605CB: mov ecx, esp */
    MEM32(ebp + (-0x54)) = esp; /* 0x006605CD: mov dword ptr [ebp - 0x54], esp */
    PUSH32(esp, 0x18u); /* 0x006605D0: push 0x18 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006605D2: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006605D9: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBF00u); /* 0x006605E0: push 0x7fbf00 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006605E5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006605E8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006605ED: mov byte ptr [ebp - 4], 8 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006605F1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x91u; /* 0x006605F8: mov ecx, 0x91 */
    RECOMP_CALL(sub_00668410); /* 0x006605FD: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660602: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660605:
    /* cmp esi, edi */ /* 0x00660605: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660615; /* 0x00660607: je 0x660615 */
L_00660609:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660609: push -1 */
    PUSH32(esp, 0); /* 0x0066060B: push 0 */
    PUSH32(esp, edi); /* 0x0066060D: push edi */
    ecx = esi; /* 0x0066060E: mov ecx, esi */
    RECOMP_CALL(sub_0040A030); /* 0x00660610: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00660615:
    ecx = esi; /* 0x00660615: mov ecx, esi */
    RECOMP_CALL(sub_00660A10); /* 0x00660617: call 0x660a10 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x0066061C: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006606AB; /* 0x0066061F: je 0x6606ab */
L_00660625:
    RECOMP_ICALL(ebx); /* 0x00660625: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00660627: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066062F; /* 0x00660629: jne 0x66062f */
L_0066062B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0066062B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00660649; /* 0x0066062D: jmp 0x660649 */
L_0066062F:
    ecx = MEM32(0x927B00); /* 0x0066062F: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x00660635: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00660649; /* 0x00660637: jne 0x660649 */
L_00660639:
    ecx = 0x00927AE8u; /* 0x00660639: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0066063E: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x00660643: mov ecx, dword ptr [0x927b00] */
L_00660649:
    eax = MEM32(ecx); /* 0x00660649: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x0066064B: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x0066064D: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660650: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660653: mov ecx, esp */
    MEM32(ebp + (-0x5C)) = esp; /* 0x00660655: mov dword ptr [ebp - 0x5c], esp */
    PUSH32(esp, 0x2Bu); /* 0x00660658: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066065A: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00660661: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660668: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066066D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660670: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 9; /* 0x00660675: mov dword ptr [ebp - 4], 9 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066067C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066067F: mov ecx, esp */
    MEM32(ebp + (-0x54)) = esp; /* 0x00660681: mov dword ptr [ebp - 0x54], esp */
    edx = esi; /* 0x00660684: mov edx, esi */
    PUSH32(esp, 0x007FBF1Cu); /* 0x00660686: push 0x7fbf1c */
    RECOMP_CALL(sub_0041A0F0); /* 0x0066068B: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660690: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00660693: mov byte ptr [ebp - 4], 0xa */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660697: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x9Au; /* 0x0066069E: mov ecx, 0x9a */
    RECOMP_CALL(sub_00668410); /* 0x006606A3: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006606A8: add esp, 0x30 */
    _flag_k = FK_ADD;
L_006606AB:
    ecx = MEM32(ebp + (-0xC)); /* 0x006606AB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006606AE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006606B5: pop ecx */
    edi = POP32_VAL(esp); /* 0x006606B6: pop edi */
    esi = POP32_VAL(esp); /* 0x006606B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006606B8: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006606B9: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006606BC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006606BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006606C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006606C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006606C6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006606D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006606D0u);

L_006606D0:
    PUSH32(esp, ebp); /* 0x006606D0: push ebp */
    ebp = esp; /* 0x006606D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006606D3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006606D6: push -1 */
    PUSH32(esp, 0x007BB64Cu); /* 0x006606D8: push 0x7bb64c */
    eax = MEM32(FS_BASE + (0)); /* 0x006606DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006606E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14Cu; /* 0x006606E4: sub esp, 0x14c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006606EA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006606EF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x144) = eax; /* 0x006606F1: mov dword ptr [esp + 0x144], eax */
    PUSH32(esp, esi); /* 0x006606F8: push esi */
    PUSH32(esp, edi); /* 0x006606F9: push edi */
    eax = MEM32(0x855000); /* 0x006606FA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006606FF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660701: push eax */
    eax = esp + 0x158; /* 0x00660702: lea eax, [esp + 0x158] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660709: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0066070F: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00660711: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x00660715: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x20) = eax; /* 0x00660718: mov dword ptr [esp + 0x20], eax */
    MEM32(esp + 0x10) = 0; /* 0x0066071C: mov dword ptr [esp + 0x10], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066072A; /* 0x00660724: jb 0x66072a */
L_00660726:
    eax = MEM32(esi); /* 0x00660726: mov eax, dword ptr [esi] */
    goto L_0066072C; /* 0x00660728: jmp 0x66072c */
L_0066072A:
    eax = esi; /* 0x0066072A: mov eax, esi */
L_0066072C:
    PUSH32(esp, 0x007F24ECu); /* 0x0066072C: push 0x7f24ec */
    PUSH32(esp, eax); /* 0x00660731: push eax */
    eax = esp + 0x18; /* 0x00660732: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x00660736: push eax */
    RECOMP_ICALL(MEM32(0x7CC518)); /* 0x00660737: call dword ptr [0x7cc518] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0066073D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esp + 0x10), 0 */ /* 0x00660740: cmp dword ptr [esp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066079C; /* 0x00660745: jne 0x66079c */
L_00660747:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660747: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066074A: mov ecx, esp */
    MEM32(esp + 0x30) = esp; /* 0x0066074C: mov dword ptr [esp + 0x30], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660750: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660755: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x178) = 0; /* 0x0066075A: mov dword ptr [esp + 0x178], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660765: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660768: mov ecx, esp */
    MEM32(esp + 0x4C) = esp; /* 0x0066076A: mov dword ptr [esp + 0x4c], esp */
    edx = 0x007FBED8u; /* 0x0066076E: mov edx, 0x7fbed8 */
    PUSH32(esp, esi); /* 0x00660773: push esi */
    RECOMP_CALL(sub_0042A130); /* 0x00660774: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660779: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x190) = (uint8_t)(1); /* 0x0066077C: mov byte ptr [esp + 0x190], 1 */
    MEM32(esp + 0x190) = 0xFFFFFFFFu; /* 0x00660784: mov dword ptr [esp + 0x190], 0xffffffff */
    ecx = 0xA4u; /* 0x0066078F: mov ecx, 0xa4 */
    RECOMP_CALL(sub_00668410); /* 0x00660794: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660799: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066079C:
    eax = MEM32(esi + 0x18); /* 0x0066079C: mov eax, dword ptr [esi + 0x18] */
    edx = eax; /* 0x0066079F: mov edx, eax */
    edi = MEM32(ebp + 0x8); /* 0x006607A1: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x006607A4: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x006607A7: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006607C4; /* 0x006607AB: jne 0x6607c4 */
L_006607AD:
    ecx = ecx; /* 0x006607AD: lea ecx, [ecx] */
L_006607B0:
    /* cmp MEM32(ecx + 0x10), edi */ /* 0x006607B0: cmp dword ptr [ecx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006607BA; /* 0x006607B3: jae 0x6607ba */
L_006607B5:
    ecx = MEM32(ecx + 0x8); /* 0x006607B5: mov ecx, dword ptr [ecx + 8] */
    goto L_006607BE; /* 0x006607B8: jmp 0x6607be */
L_006607BA:
    edx = ecx; /* 0x006607BA: mov edx, ecx */
    ecx = MEM32(ecx); /* 0x006607BC: mov ecx, dword ptr [ecx] */
L_006607BE:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x006607BE: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006607B0; /* 0x006607C2: je 0x6607b0 */
L_006607C4:
    /* cmp edx, eax */ /* 0x006607C4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006607D1; /* 0x006607C6: je 0x6607d1 */
L_006607C8:
    MEM32(esp + 0xC) = edx; /* 0x006607C8: mov dword ptr [esp + 0xc], edx */
    /* cmp edi, MEM32(edx + 0x10) */ /* 0x006607CC: cmp edi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006607D5; /* 0x006607CF: jae 0x6607d5 */
L_006607D1:
    MEM32(esp + 0xC) = eax; /* 0x006607D1: mov dword ptr [esp + 0xc], eax */
L_006607D5:
    eax = esp + 0xC; /* 0x006607D5: lea eax, [esp + 0xc] */
    eax = MEM32(eax); /* 0x006607D9: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x006607DB: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006609AE; /* 0x006607DE: je 0x6609ae */
L_006607E4:
    _xmm[0] = xmm_ld(eax + 0x14); /* 0x006607E4: movdqu xmm0, xmmword ptr [eax + 0x14] */
    ecx = MEM32(eax + 0x24); /* 0x006607E9: mov ecx, dword ptr [eax + 0x24] */
    SET_LO16(eax, MEM16(eax + 0x28)); /* 0x006607EC: mov ax, word ptr [eax + 0x28] */
    PUSH32(esp, 0); /* 0x006607F0: push 0 */
    MEM32(esp + 0x38) = ecx; /* 0x006607F2: mov dword ptr [esp + 0x38], ecx */
    MEM16(esp + 0x3C) = (uint16_t)(LO16(eax)); /* 0x006607F6: mov word ptr [esp + 0x3c], ax */
    PUSH32(esp, MEM32(esp + 0x3A)); /* 0x006607FB: push dword ptr [esp + 0x3a] */
    xmm_st(esp + 0x4C, _xmm[0]); /* 0x006607FF: movdqa xmmword ptr [esp + 0x4c], xmm0 */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x00660805: push dword ptr [esp + 0x18] */
    xmm_st(esp + 0x30, _xmm[0]); /* 0x00660809: movdqa xmmword ptr [esp + 0x30], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC514)); /* 0x0066080F: call dword ptr [0x7cc514] */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(esp + 0x50); /* 0x00660815: movdqa xmm0, xmmword ptr [esp + 0x50] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0066081B: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x0066081E: psrldq xmm0, 0xc */
    edx = 0x00860AB4u; /* 0x00660823: mov edx, 0x860ab4 */
    eax = _xmm[0].u32[0]; /* 0x00660828: movd eax, xmm0 */
    PUSH32(esp, ecx); /* 0x0066082C: push ecx */
    ecx = esp + 0x58; /* 0x0066082D: lea ecx, [esp + 0x58] */
    /* test LO8(eax), LO8(eax) */ /* 0x00660831: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066083A; /* 0x00660833: je 0x66083a */
L_00660835:
    edx = 0x00860AC4u; /* 0x00660835: mov edx, 0x860ac4 */
L_0066083A:
    RECOMP_CALL(sub_00673120); /* 0x0066083A: call 0x673120 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)MEM8(esp + 0x35); /* 0x0066083F: movzx edi, byte ptr [esp + 0x35] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660844: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esp + 0x2C); /* 0x00660847: add edi, dword ptr [esp + 0x2c] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x144) = eax; /* 0x0066084B: mov dword ptr [esp + 0x144], eax */
    MEM32(esp + 0x18) = edi; /* 0x00660852: mov dword ptr [esp + 0x18], edi */
    PUSH32(esp, edi); /* 0x00660856: push edi */
    RECOMP_CALL(sub_0077F3DF); /* 0x00660857: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066085C: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0066085F: mov esi, eax */
    MEM32(esp + 0x14) = esi; /* 0x00660861: mov dword ptr [esp + 0x14], esi */
    PUSH32(esp, edi); /* 0x00660865: push edi */
    RECOMP_CALL(sub_0077F3DF); /* 0x00660866: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066086B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x0066086E: mov dword ptr [esp + 0xc], eax */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x00660872: push dword ptr [esp + 0x10] */
    PUSH32(esp, 1); /* 0x00660876: push 1 */
    PUSH32(esp, edi); /* 0x00660878: push edi */
    PUSH32(esp, esi); /* 0x00660879: push esi */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x0066087A: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00660880: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00660883: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006608C9; /* 0x00660885: je 0x6608c9 */
L_00660887:
    eax = MEM32(esp + 0xC); /* 0x00660887: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0066088B: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0066088C: sub eax, esi */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x0066088E: shr edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 4u; /* 0x0066088E: shr edi, 4 */
    MEM32(esp + 0x1C) = eax; /* 0x00660891: mov dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00660895: inc edi */
    _flag_k = FK_INC;
    goto L_006608A0; /* 0x00660896: jmp 0x6608a0 */
L_006608A0:
    edx = MEM32(esp + 0x144); /* 0x006608A0: mov edx, dword ptr [esp + 0x144] */
    ecx = esp + 0x54; /* 0x006608A7: lea ecx, [esp + 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006608AB: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006608AD: push eax */
    PUSH32(esp, esi); /* 0x006608AE: push esi */
    RECOMP_CALL(sub_006738A0); /* 0x006608AF: call 0x6738a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x006608B4: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006608B8: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x006608BB: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006608BE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006608A0; /* 0x006608BF: jne 0x6608a0 */
L_006608C1:
    edi = MEM32(esp + 0x18); /* 0x006608C1: mov edi, dword ptr [esp + 0x18] */
    esi = MEM32(esp + 0x14); /* 0x006608C5: mov esi, dword ptr [esp + 0x14] */
L_006608C9:
    PUSH32(esp, esi); /* 0x006608C9: push esi */
    esi = MEM32(0x7CC6A8); /* 0x006608CA: mov esi, dword ptr [0x7cc6a8] */
    RECOMP_ICALL(esi); /* 0x006608D0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006608D2: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006608D5: push dword ptr [esp + 0x28] */
    RECOMP_CALL(sub_0077F3DF); /* 0x006608D9: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006608DE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = eax; /* 0x006608E1: mov dword ptr [esp + 0x14], eax */
    edx = edi; /* 0x006608E5: mov edx, edi */
    edi = MEM32(esp + 0xC); /* 0x006608E7: mov edi, dword ptr [esp + 0xc] */
    ecx = edi; /* 0x006608EB: mov ecx, edi */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006608ED: push dword ptr [esp + 0x28] */
    PUSH32(esp, eax); /* 0x006608F1: push eax */
    RECOMP_CALL(sub_006601F0); /* 0x006608F2: call 0x6601f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006608F7: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esp + 0x28) */ /* 0x006608FA: cmp eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660987; /* 0x006608FE: je 0x660987 */
L_00660904:
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x00660904: push dword ptr [esp + 0x14] */
    RECOMP_ICALL(esi); /* 0x00660908: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066090A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x0066090D: push edi */
    RECOMP_ICALL(esi); /* 0x0066090E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00660910: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660913: mov ecx, esp */
    MEM32(esp + 0x30) = esp; /* 0x00660915: mov dword ptr [esp + 0x30], esp */
    PUSH32(esp, 0x2Bu); /* 0x00660919: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066091B: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00660922: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660929: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066092E: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660931: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x178) = 2; /* 0x00660936: mov dword ptr [esp + 0x178], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660941: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660944: mov ecx, esp */
    MEM32(esp + 0x4C) = esp; /* 0x00660946: mov dword ptr [esp + 0x4c], esp */
    PUSH32(esp, 0x15u); /* 0x0066094A: push 0x15 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066094C: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00660953: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBEE8u); /* 0x0066095A: push 0x7fbee8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066095F: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00660962: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x190) = (uint8_t)(3); /* 0x00660967: mov byte ptr [esp + 0x190], 3 */
    MEM32(esp + 0x190) = 0xFFFFFFFFu; /* 0x0066096F: mov dword ptr [esp + 0x190], 0xffffffff */
    ecx = 0xC7u; /* 0x0066097A: mov ecx, 0xc7 */
    RECOMP_CALL(sub_00668410); /* 0x0066097F: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660984: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660987:
    PUSH32(esp, edi); /* 0x00660987: push edi */
    RECOMP_ICALL(esi); /* 0x00660988: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x24); /* 0x0066098A: mov ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066098E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00660991: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066099B; /* 0x00660993: je 0x66099b */
L_00660995:
    eax = MEM32(esp + 0x28); /* 0x00660995: mov eax, dword ptr [esp + 0x28] */
    MEM32(ecx) = eax; /* 0x00660999: mov dword ptr [ecx], eax */
L_0066099B:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x0066099B: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0066099F: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006609A5: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006609A9: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006609BD; /* 0x006609AC: jmp 0x6609bd */
L_006609AE:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x006609AE: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x006609B2: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006609B8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006609BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006609BD:
    ecx = MEM32(esp + 0x158); /* 0x006609BD: mov ecx, dword ptr [esp + 0x158] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006609C4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006609CB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006609CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006609CD: pop esi */
    ecx = MEM32(esp + 0x144); /* 0x006609CE: mov ecx, dword ptr [esp + 0x144] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006609D5: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006609D7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006609DC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006609DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006609DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006609F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006609F0u);

L_006609F0:
    PUSH32(esp, ebp); /* 0x006609F0: push ebp */
    ebp = esp; /* 0x006609F1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006609F3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006609F6: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006609FC: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006609FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00660A00: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00660A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660A10u);

L_00660A10:
    PUSH32(esp, ebp); /* 0x00660A10: push ebp */
    ebp = esp; /* 0x00660A11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00660A13: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00660A16: push ebx */
    PUSH32(esp, esi); /* 0x00660A17: push esi */
    PUSH32(esp, edi); /* 0x00660A18: push edi */
    edi = ecx; /* 0x00660A19: mov edi, ecx */
    edx = 4; /* 0x00660A1B: mov edx, 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00660A20: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x1C); /* 0x00660A22: mov eax, dword ptr [edi + 0x1c] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x00660A25: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x00660A27: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x00660A2A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00660A2C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00660A2E: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x00660A2F: call 0x77f3df */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x24); /* 0x00660A34: mov ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660A37: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x20); /* 0x00660A3A: sub ecx, dword ptr [edi + 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00660A3D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x00660A3F: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    MEM32(ebp + (-0xC)) = eax; /* 0x00660A42: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x00660A45: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00660A48: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00660A4F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660A93; /* 0x00660A51: je 0x660a93 */
L_00660A53:
    eax = MEM32(edi + 0x20); /* 0x00660A53: mov eax, dword ptr [edi + 0x20] */
    ecx = ebp + (-0x4); /* 0x00660A56: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x00660A59: push ecx */
    ecx = edi; /* 0x00660A5A: mov ecx, edi */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x00660A5C: push dword ptr [eax + ebx*4] */
    RECOMP_CALL(sub_006606D0); /* 0x00660A5F: call 0x6606d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00660A64: push dword ptr [ebp - 4] */
    esi = eax; /* 0x00660A67: mov esi, eax */
    edx = esi; /* 0x00660A69: mov edx, esi */
    RECOMP_CALL(sub_006648C0); /* 0x00660A6B: call 0x6648c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x00660A70: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x00660A73: push esi */
    MEM32(ecx) = eax; /* 0x00660A74: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00660A76: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x00660A79: mov dword ptr [ebp - 8], ecx */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00660A7C: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x24); /* 0x00660A82: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00660A85: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x20); /* 0x00660A86: sub eax, dword ptr [edi + 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660A89: add esp, 8 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00660A8C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp ebx, eax */ /* 0x00660A8F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00660A53; /* 0x00660A91: jb 0x660a53 */
L_00660A93:
    eax = MEM32(edi + 0x1C); /* 0x00660A93: mov eax, dword ptr [edi + 0x1c] */
    edi = MEM32(ebp + (-0xC)); /* 0x00660A96: mov edi, dword ptr [ebp - 0xc] */
    edx = edi; /* 0x00660A99: mov edx, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00660A9B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00660A9B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x00660A9E: push eax */
    RECOMP_CALL(sub_006648C0); /* 0x00660A9F: call 0x6648c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00660AA4: push edi */
    esi = eax; /* 0x00660AA5: mov esi, eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00660AA7: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660AAD: add esp, 8 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x00660AB0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x00660AB2: pop edi */
    esi = POP32_VAL(esp); /* 0x00660AB3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00660AB4: pop ebx */
    esp = ebp; /* 0x00660AB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660AB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00660AB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_00660AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660AC0u);

L_00660AC0:
    PUSH32(esp, ebp); /* 0x00660AC0: push ebp */
    ebp = esp; /* 0x00660AC1: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x00660AC3: mov al, byte ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x00660AC6: mov byte ptr [ecx], al */
    eax = ecx; /* 0x00660AC8: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x00660ACA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00660ACB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00660AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660AD0u);

L_00660AD0:
    PUSH32(esp, ebp); /* 0x00660AD0: push ebp */
    ebp = esp; /* 0x00660AD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00660AD3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660AD6: push -1 */
    PUSH32(esp, 0x007BB6B1u); /* 0x00660AD8: push 0x7bb6b1 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660ADD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660AE3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x00660AE4: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00660AE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00660AEC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x58) = eax; /* 0x00660AEE: mov dword ptr [esp + 0x58], eax */
    PUSH32(esp, ebx); /* 0x00660AF2: push ebx */
    PUSH32(esp, esi); /* 0x00660AF3: push esi */
    PUSH32(esp, edi); /* 0x00660AF4: push edi */
    eax = MEM32(0x855000); /* 0x00660AF5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00660AFA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660AFC: push eax */
    eax = esp + 0x70; /* 0x00660AFD: lea eax, [esp + 0x70] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660B01: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660B07: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x00660B09: mov eax, dword ptr [ebp + 8] */
    ecx = esp + 0x38; /* 0x00660B0C: lea ecx, [esp + 0x38] */
    PUSH32(esp, eax); /* 0x00660B10: push eax */
    edx = 0x007E7E28u; /* 0x00660B11: mov edx, 0x7e7e28 */
    MEM32(esp + 0x18) = 0; /* 0x00660B16: mov dword ptr [esp + 0x18], 0 */
    RECOMP_CALL(sub_0042A130); /* 0x00660B1E: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660B23: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x78) = 1; /* 0x00660B26: mov dword ptr [esp + 0x78], 1 */
    ecx = esp + 0x20; /* 0x00660B2E: lea ecx, [esp + 0x20] */
    MEM32(esp + 0x30) = 0; /* 0x00660B32: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x00660B3A: mov dword ptr [esp + 0x34], 0 */
    PUSH32(esp, eax); /* 0x00660B42: push eax */
    MEM32(esp + 0x18) = 2; /* 0x00660B43: mov dword ptr [esp + 0x18], 2 */
    MEM32(esp + 0x38) = 0xFu; /* 0x00660B4B: mov dword ptr [esp + 0x38], 0xf */
    MEM32(esp + 0x34) = 0; /* 0x00660B53: mov dword ptr [esp + 0x34], 0 */
    MEM8(esp + 0x24) = (uint8_t)(0); /* 0x00660B5B: mov byte ptr [esp + 0x24], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00660B60: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x78) = 3; /* 0x00660B65: mov dword ptr [esp + 0x78], 3 */
    ebx = 2; /* 0x00660B6D: mov ebx, 2 */
    MEM32(esp + 0x14) = ebx; /* 0x00660B72: mov dword ptr [esp + 0x14], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x00660B76: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = ebx; /* 0x00660B79: mov dword ptr [esp + 0x14], ebx */
    /* cmp MEM32(esp + 0x4C), 0x10u */ /* 0x00660B7D: cmp dword ptr [esp + 0x4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00660B82: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00660B93; /* 0x00660B88: jb 0x660b93 */
L_00660B8A:
    PUSH32(esp, MEM32(esp + 0x38)); /* 0x00660B8A: push dword ptr [esp + 0x38] */
    RECOMP_ICALL(edi); /* 0x00660B8E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660B90: add esp, 4 */
    _flag_k = FK_ADD;
L_00660B93:
    MEM32(esp + 0x4C) = 0xFu; /* 0x00660B93: mov dword ptr [esp + 0x4c], 0xf */
    MEM32(esp + 0x48) = 0; /* 0x00660B9B: mov dword ptr [esp + 0x48], 0 */
    MEM8(esp + 0x38) = (uint8_t)(0); /* 0x00660BA3: mov byte ptr [esp + 0x38], 0 */
    MEM8(esp + 0x78) = (uint8_t)(4); /* 0x00660BA8: mov byte ptr [esp + 0x78], 4 */
    /* test LO8(ebx), 1 */ /* 0x00660BAD: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00660BDE; /* 0x00660BB0: je 0x660bde */
L_00660BB2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x00660BB2: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = ebx; /* 0x00660BB5: mov dword ptr [esp + 0x14], ebx */
    /* cmp MEM32(esp + 0x64), 0x10u */ /* 0x00660BB9: cmp dword ptr [esp + 0x64], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00660BC9; /* 0x00660BBE: jb 0x660bc9 */
L_00660BC0:
    PUSH32(esp, MEM32(esp + 0x50)); /* 0x00660BC0: push dword ptr [esp + 0x50] */
    RECOMP_ICALL(edi); /* 0x00660BC4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660BC6: add esp, 4 */
    _flag_k = FK_ADD;
L_00660BC9:
    MEM32(esp + 0x64) = 0xFu; /* 0x00660BC9: mov dword ptr [esp + 0x64], 0xf */
    MEM32(esp + 0x60) = 0; /* 0x00660BD1: mov dword ptr [esp + 0x60], 0 */
    MEM8(esp + 0x50) = (uint8_t)(0); /* 0x00660BD9: mov byte ptr [esp + 0x50], 0 */
L_00660BDE:
    eax = MEM32(ebp + 0xC); /* 0x00660BDE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x00660BE1: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x00660BE3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00660C1D; /* 0x00660BE6: je 0x660c1d */
L_00660BE8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00660BE8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00660C06; /* 0x00660BE9: je 0x660c06 */
L_00660BEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00660BEB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00660C33; /* 0x00660BEC: jne 0x660c33 */
L_00660BEE:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x00660BEE: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x00660BF3: lea ecx, [esp + 0x20] */
    edx = eax + 0x1; /* 0x00660BF7: lea edx, [eax + 1] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x20); } /* 0x00660BFA: cmovae ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_0076E4E0); /* 0x00660BFF: call 0x76e4e0 */
    RECOMP_FLAGS_IN();
    goto L_00660C30; /* 0x00660C04: jmp 0x660c30 */
L_00660C06:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x00660C06: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x00660C0B: lea ecx, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x20); } /* 0x00660C0F: cmovae ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00660C14: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0076E4E0); /* 0x00660C16: call 0x76e4e0 */
    RECOMP_FLAGS_IN();
    goto L_00660C30; /* 0x00660C1B: jmp 0x660c30 */
L_00660C1D:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x00660C1D: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x00660C22: lea ecx, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x20); } /* 0x00660C26: cmovae ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_0076E690); /* 0x00660C2B: call 0x76e690 */
    RECOMP_FLAGS_IN();
L_00660C30:
    MEM32(esi + 0x4) = eax; /* 0x00660C30: mov dword ptr [esi + 4], eax */
L_00660C33:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660C33: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660C91; /* 0x00660C37: jne 0x660c91 */
L_00660C39:
    /* cmp MEM8(esi), 0 */ /* 0x00660C39: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660C9B; /* 0x00660C3C: je 0x660c9b */
L_00660C3E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660C3E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660C41: mov ecx, esp */
    MEM32(esp + 0x34) = esp; /* 0x00660C43: mov dword ptr [esp + 0x34], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660C47: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660C4C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(5); /* 0x00660C51: mov byte ptr [esp + 0x90], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660C59: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = esp + 0x50; /* 0x00660C5C: lea eax, [esp + 0x50] */
    MEM32(esp + 0x48) = esp; /* 0x00660C60: mov dword ptr [esp + 0x48], esp */
    ecx = esp; /* 0x00660C64: mov ecx, esp */
    edx = 0x007FBED8u; /* 0x00660C66: mov edx, 0x7fbed8 */
    PUSH32(esp, eax); /* 0x00660C6B: push eax */
    RECOMP_CALL(sub_0042A130); /* 0x00660C6C: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660C71: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0xA8) = (uint8_t)(6); /* 0x00660C74: mov byte ptr [esp + 0xa8], 6 */
    MEM8(esp + 0xA8) = (uint8_t)(4); /* 0x00660C7C: mov byte ptr [esp + 0xa8], 4 */
    ecx = 0x123u; /* 0x00660C84: mov ecx, 0x123 */
    RECOMP_CALL(sub_00668410); /* 0x00660C89: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660C8E: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660C91:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00660C91: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x00660C94: mov ecx, esi */
    RECOMP_CALL(sub_00660F80); /* 0x00660C96: call 0x660f80 */
    RECOMP_FLAGS_IN();
L_00660C9B:
    MEM32(esp + 0x78) = 0xFFFFFFFFu; /* 0x00660C9B: mov dword ptr [esp + 0x78], 0xffffffff */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x00660CA3: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00660CB3; /* 0x00660CA8: jb 0x660cb3 */
L_00660CAA:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x00660CAA: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(edi); /* 0x00660CAE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660CB0: add esp, 4 */
    _flag_k = FK_ADD;
L_00660CB3:
    MEM32(esp + 0x34) = 0xFu; /* 0x00660CB3: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x00660CBB: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x00660CC3: mov byte ptr [esp + 0x20], 0 */
    ecx = MEM32(esp + 0x70); /* 0x00660CC8: mov ecx, dword ptr [esp + 0x70] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660CCC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660CD3: pop ecx */
    edi = POP32_VAL(esp); /* 0x00660CD4: pop edi */
    esi = POP32_VAL(esp); /* 0x00660CD5: pop esi */
    ebx = POP32_VAL(esp); /* 0x00660CD6: pop ebx */
    ecx = MEM32(esp + 0x58); /* 0x00660CD7: mov ecx, dword ptr [esp + 0x58] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00660CDB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00660CDD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00660CE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660CE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00660CE5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00660CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660CF0u);

L_00660CF0:
    PUSH32(esp, ebp); /* 0x00660CF0: push ebp */
    ebp = esp; /* 0x00660CF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660CF3: push -1 */
    PUSH32(esp, 0x007825F0u); /* 0x00660CF5: push 0x7825f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660CFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660D00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00660D01: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660D04: push esi */
    eax = MEM32(0x855000); /* 0x00660D05: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660D0A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660D0C: push eax */
    eax = ebp + (-0xC); /* 0x00660D0D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660D10: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660D16: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660D18: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660D61; /* 0x00660D1C: jne 0x660d61 */
L_00660D1E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660D1E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660D21: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660D23: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660D26: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660D2B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00660D30: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660D37: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660D3A: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660D3C: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBF54u); /* 0x00660D3F: push 0x7fbf54 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660D44: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660D49: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660D4D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x133u; /* 0x00660D54: mov ecx, 0x133 */
    RECOMP_CALL(sub_00668410); /* 0x00660D59: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660D5E: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660D61:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00660D61: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x00660D64: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00660D67: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x00660D6A: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_0076EAB0); /* 0x00660D6D: call 0x76eab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660D72: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660D75: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660D78: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660D7F: pop ecx */
    esi = POP32_VAL(esp); /* 0x00660D80: pop esi */
    esp = ebp; /* 0x00660D81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660D83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00660D84: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00660D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660D90u);

L_00660D90:
    PUSH32(esp, ebp); /* 0x00660D90: push ebp */
    ebp = esp; /* 0x00660D91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660D93: push -1 */
    PUSH32(esp, 0x007825C0u); /* 0x00660D95: push 0x7825c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660D9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660DA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00660DA1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660DA4: push esi */
    PUSH32(esp, edi); /* 0x00660DA5: push edi */
    eax = MEM32(0x855000); /* 0x00660DA6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660DAB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660DAD: push eax */
    eax = ebp + (-0xC); /* 0x00660DAE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660DB1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660DB7: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660DB9: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660E02; /* 0x00660DBD: jne 0x660e02 */
L_00660DBF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660DBF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660DC2: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660DC4: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660DC7: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660DCC: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00660DD1: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660DD8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660DDB: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660DDD: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBF54u); /* 0x00660DE0: push 0x7fbf54 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660DE5: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660DEA: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660DEE: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x14Bu; /* 0x00660DF5: mov ecx, 0x14b */
    RECOMP_CALL(sub_00668410); /* 0x00660DFA: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660DFF: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660E02:
    esi = MEM32(esi + 0x4); /* 0x00660E02: mov esi, dword ptr [esi + 4] */
    eax = MEM32(esi + 0xC); /* 0x00660E05: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x00660E08: push dword ptr [esi] */
    eax = MEM32(eax + 0x44); /* 0x00660E0A: mov eax, dword ptr [eax + 0x44] */
    RECOMP_ICALL(eax); /* 0x00660E0D: call eax */
    RECOMP_FLAGS_IN();
    edi = edx; /* 0x00660E0F: mov edi, edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660E11: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00660E14: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00660E16: mov ecx, eax */
    /* cmp MEM8(esi + 0x4), LO8(edx) */ /* 0x00660E18: cmp byte ptr [esi + 4], dl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00660E27; /* 0x00660E1B: je 0x660e27 */
L_00660E1D:
    eax = MEM32(esi + 0x1C); /* 0x00660E1D: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x00660E20: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00660E23: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_00660E2A; /* 0x00660E25: jmp 0x660e2a */
L_00660E27:
    eax = MEM32(esi + 0x18); /* 0x00660E27: mov eax, dword ptr [esi + 0x18] */
L_00660E2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00660E2A: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00660E2C: adc edx, edi */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = MEM32(ebp + (-0xC)); /* 0x00660E2E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660E31: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660E38: pop ecx */
    edi = POP32_VAL(esp); /* 0x00660E39: pop edi */
    esi = POP32_VAL(esp); /* 0x00660E3A: pop esi */
    esp = ebp; /* 0x00660E3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660E3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00660E3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00660E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660E40u);

L_00660E40:
    PUSH32(esp, ebp); /* 0x00660E40: push ebp */
    ebp = esp; /* 0x00660E41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660E43: push -1 */
    PUSH32(esp, 0x007825C0u); /* 0x00660E45: push 0x7825c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660E4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660E50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00660E51: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660E54: push esi */
    eax = MEM32(0x855000); /* 0x00660E55: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660E5A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660E5C: push eax */
    eax = ebp + (-0xC); /* 0x00660E5D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660E60: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660E66: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660E68: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660EB1; /* 0x00660E6C: jne 0x660eb1 */
L_00660E6E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660E6E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660E71: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660E73: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660E76: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660E7B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00660E80: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660E87: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660E8A: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660E8C: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBF54u); /* 0x00660E8F: push 0x7fbf54 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660E94: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660E99: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660E9D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x153u; /* 0x00660EA4: mov ecx, 0x153 */
    RECOMP_CALL(sub_00668410); /* 0x00660EA9: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660EAE: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660EB1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00660EB1: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x00660EB4: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00660EB7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0076EB60); /* 0x00660EBA: call 0x76eb60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660EBF: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660EC2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660EC5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660ECC: pop ecx */
    esi = POP32_VAL(esp); /* 0x00660ECD: pop esi */
    esp = ebp; /* 0x00660ECE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660ED0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00660ED1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00660EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660EE0u);

L_00660EE0:
    PUSH32(esp, ebp); /* 0x00660EE0: push ebp */
    ebp = esp; /* 0x00660EE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660EE3: push -1 */
    PUSH32(esp, 0x007825C0u); /* 0x00660EE5: push 0x7825c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660EEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660EF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00660EF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660EF4: push esi */
    eax = MEM32(0x855000); /* 0x00660EF5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660EFA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660EFC: push eax */
    eax = ebp + (-0xC); /* 0x00660EFD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660F00: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660F06: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660F08: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660F51; /* 0x00660F0C: jne 0x660f51 */
L_00660F0E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660F0E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660F11: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660F13: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660F16: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660F1B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00660F20: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660F27: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660F2A: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660F2C: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBF54u); /* 0x00660F2F: push 0x7fbf54 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660F34: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660F39: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660F3D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x15Bu; /* 0x00660F44: mov ecx, 0x15b */
    RECOMP_CALL(sub_00668410); /* 0x00660F49: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660F4E: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660F51:
    eax = MEM32(esi + 0x4); /* 0x00660F51: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0xC); /* 0x00660F54: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax)); /* 0x00660F57: push dword ptr [eax] */
    eax = MEM32(ecx + 0x4C); /* 0x00660F59: mov eax, dword ptr [ecx + 0x4c] */
    RECOMP_ICALL(eax); /* 0x00660F5C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00660F5E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660F61: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00660F64: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00660F6B: pop ecx */
    esi = POP32_VAL(esp); /* 0x00660F6C: pop esi */
    esp = ebp; /* 0x00660F6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00660F6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00660F70: ret  */
    RECOMP_REGS_OUT();
}

void sub_00660F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00660F80u);

L_00660F80:
    PUSH32(esp, ebp); /* 0x00660F80: push ebp */
    ebp = esp; /* 0x00660F81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00660F83: push -1 */
    PUSH32(esp, 0x007825C0u); /* 0x00660F85: push 0x7825c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00660F8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00660F90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00660F91: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00660F94: push esi */
    eax = MEM32(0x855000); /* 0x00660F95: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00660F9A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00660F9C: push eax */
    eax = ebp + (-0xC); /* 0x00660F9D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00660FA0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00660FA6: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x00660FA8: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00660FF1; /* 0x00660FAC: jne 0x660ff1 */
L_00660FAE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660FAE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660FB1: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00660FB3: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00660FB6: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660FBB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00660FC0: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00660FC7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00660FCA: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x00660FCC: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007FBF54u); /* 0x00660FCF: push 0x7fbf54 */
    RECOMP_CALL(sub_00409FA0); /* 0x00660FD4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00660FD9: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00660FDD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x163u; /* 0x00660FE4: mov ecx, 0x163 */
    RECOMP_CALL(sub_00668410); /* 0x00660FE9: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00660FEE: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00660FF1:
    ecx = MEM32(esi + 0x4); /* 0x00660FF1: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00660FF4: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0076EC10); /* 0x00660FF7: call 0x76ec10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00660FFC: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00660FFF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00661002: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00661009: pop ecx */
    esi = POP32_VAL(esp); /* 0x0066100A: pop esi */
    esp = ebp; /* 0x0066100B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066100D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0066100E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00661020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00661020u);

L_00661020:
    PUSH32(esp, ebp); /* 0x00661020: push ebp */
    ebp = esp; /* 0x00661021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661023: push -1 */
    PUSH32(esp, 0x007BB708u); /* 0x00661025: push 0x7bb708 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066102A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00661030: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x00661031: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00661034: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00661039: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066103B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0066103E: push ebx */
    PUSH32(esp, esi); /* 0x0066103F: push esi */
    PUSH32(esp, edi); /* 0x00661040: push edi */
    PUSH32(esp, eax); /* 0x00661041: push eax */
    eax = ebp + (-0xC); /* 0x00661042: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00661045: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x0066104B: mov dword ptr [ebp - 0x5c], ecx */
    eax = MEM32(0x8780CC); /* 0x0066104E: mov eax, dword ptr [0x8780cc] */
    ecx = ebp + (-0x40); /* 0x00661053: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x00661056: push ecx */
    ecx = MEM32(eax + 0xC0); /* 0x00661057: mov ecx, dword ptr [eax + 0xc0] */
    RECOMP_CALL(sub_00671C20); /* 0x0066105D: call 0x671c20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00661062: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x58); /* 0x00661069: lea ecx, [ebp - 0x58] */
    eax = MEM32(0x8780CC); /* 0x0066106C: mov eax, dword ptr [0x8780cc] */
    PUSH32(esp, ecx); /* 0x00661071: push ecx */
    ecx = MEM32(eax + 0xC0); /* 0x00661072: mov ecx, dword ptr [eax + 0xc0] */
    RECOMP_CALL(sub_00671BA0); /* 0x00661078: call 0x671ba0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066107D: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x30)); /* 0x00661081: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00661084: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00661086: push eax */
    RECOMP_CALL(sub_0077F3DF); /* 0x00661087: call 0x77f3df */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0066108C: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066108F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x00661092: add ecx, ecx */
    _flag_k = FK_ADD;
    esi = eax; /* 0x00661094: mov esi, eax */
    PUSH32(esp, ecx); /* 0x00661096: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x00661097: call 0x77f3df */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x30)); /* 0x0066109C: mov edx, dword ptr [ebp - 0x30] */
    ecx = ebp + (-0x40); /* 0x0066109F: lea ecx, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006610A2: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x006610A5: mov ebx, eax */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x006610A7: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x40)); } /* 0x006610AB: cmovae ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x006610AF: add edx, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006610B1: push 0 */
    PUSH32(esp, edx); /* 0x006610B3: push edx */
    edx = esi; /* 0x006610B4: mov edx, esi */
    RECOMP_CALL(sub_0076F320); /* 0x006610B6: call 0x76f320 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x006610BB: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x58); /* 0x006610BF: lea ecx, [ebp - 0x58] */
    eax = MEM32(ebp + (-0x48)); /* 0x006610C2: mov eax, dword ptr [ebp - 0x48] */
    edx = ebx; /* 0x006610C5: mov edx, ebx */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x58)); } /* 0x006610C7: cmovae ecx, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006610CB: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006610CD: push 0 */
    PUSH32(esp, eax); /* 0x006610CF: push eax */
    RECOMP_CALL(sub_0076F320); /* 0x006610D0: call 0x76f320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006610D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006610D8: mov ecx, esi */
    RECOMP_CALL(sub_0076D940); /* 0x006610DA: call 0x76d940 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006610DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661120; /* 0x006610E1: jne 0x661120 */
L_006610E3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006610E3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006610E6: mov ecx, esp */
    MEM32(ebp + (-0x64)) = esp; /* 0x006610E8: mov dword ptr [ebp - 0x64], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x006610EB: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x006610F0: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006610F5: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006610F9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006610FC: mov ecx, esp */
    MEM32(ebp + (-0x60)) = esp; /* 0x006610FE: mov dword ptr [ebp - 0x60], esp */
    PUSH32(esp, 0x007FBF7Cu); /* 0x00661101: push 0x7fbf7c */
    RECOMP_CALL(sub_00409FA0); /* 0x00661106: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066110B: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066110F: mov byte ptr [ebp - 4], 1 */
    ecx = 0x17Du; /* 0x00661113: mov ecx, 0x17d */
    RECOMP_CALL(sub_00668410); /* 0x00661118: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066111D: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00661120:
    /* cmp MEM8(ebx), 0 */ /* 0x00661120: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x18)) = 0; /* 0x00661123: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0066112A: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00661131: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00661138: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066113F: mov byte ptr [ebp - 0x28], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661149; /* 0x00661143: jne 0x661149 */
L_00661145:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00661145: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00661159; /* 0x00661147: jmp 0x661159 */
L_00661149:
    eax = ebx; /* 0x00661149: mov eax, ebx */
    edx = eax + 0x1; /* 0x0066114B: lea edx, [eax + 1] */
    edi = edi; /* 0x0066114E: mov edi, edi */
L_00661150:
    SET_LO8(ecx, MEM8(eax)); /* 0x00661150: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00661152: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x00661153: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661150; /* 0x00661155: jne 0x661150 */
L_00661157:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00661157: sub eax, edx */
    _flag_k = FK_CMP;
L_00661159:
    PUSH32(esp, eax); /* 0x00661159: push eax */
    PUSH32(esp, ebx); /* 0x0066115A: push ebx */
    ecx = ebp + (-0x28); /* 0x0066115B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066115E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00661163: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x28); /* 0x00661167: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0066116A: push eax */
    RECOMP_CALL(sub_00661220); /* 0x0066116B: call 0x661220 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00661170: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00661174: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00661178: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00661188; /* 0x0066117E: jb 0x661188 */
L_00661180:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00661180: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00661183: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661185: add esp, 4 */
    _flag_k = FK_ADD;
L_00661188:
    PUSH32(esp, esi); /* 0x00661188: push esi */
    esi = MEM32(0x7CC6A8); /* 0x00661189: mov esi, dword ptr [0x7cc6a8] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066118F: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00661196: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066119D: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_ICALL(esi); /* 0x006611A1: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006611A3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x006611A6: push ebx */
    RECOMP_ICALL(esi); /* 0x006611A7: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006611A9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006611AC: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x006611B0: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006611BE; /* 0x006611B4: jb 0x6611be */
L_006611B6:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x006611B6: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x006611B9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006611BB: add esp, 4 */
    _flag_k = FK_ADD;
L_006611BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006611BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x006611C0: mov dword ptr [ebp - 0x44], 7 */
    MEM32(ebp + (-0x48)) = 0; /* 0x006611C7: mov dword ptr [ebp - 0x48], 0 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x006611CE: mov word ptr [ebp - 0x58], ax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006611D2: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x006611D9: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006611E7; /* 0x006611DD: jb 0x6611e7 */
L_006611DF:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x006611DF: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x006611E2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006611E4: add esp, 4 */
    _flag_k = FK_ADD;
L_006611E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006611E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x006611E9: mov dword ptr [ebp - 0x2c], 7 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x006611F0: mov word ptr [ebp - 0x40], ax */
    eax = MEM32(ebp + (-0x5C)); /* 0x006611F4: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x30)) = 0; /* 0x006611F7: mov dword ptr [ebp - 0x30], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006611FE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00661201: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00661208: pop ecx */
    edi = POP32_VAL(esp); /* 0x00661209: pop edi */
    esi = POP32_VAL(esp); /* 0x0066120A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066120B: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066120C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066120F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00661211: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00661216: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00661218: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00661219: ret  */
    RECOMP_REGS_OUT();
}

void sub_00661220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00661220u);

L_00661220:
    PUSH32(esp, ebp); /* 0x00661220: push ebp */
    ebp = esp; /* 0x00661221: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661223: push -1 */
    PUSH32(esp, 0x007BB740u); /* 0x00661225: push 0x7bb740 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066122A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00661230: push eax */
    PUSH32(esp, ecx); /* 0x00661231: push ecx */
    eax = MEM32(0x855000); /* 0x00661232: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00661237: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00661239: push eax */
    eax = ebp + (-0xC); /* 0x0066123A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066123D: mov dword ptr fs:[0], eax */
    ecx = MEM32(ebp + 0x8); /* 0x00661243: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x00661246: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066124E; /* 0x0066124A: jb 0x66124e */
L_0066124C:
    ecx = MEM32(ecx); /* 0x0066124C: mov ecx, dword ptr [ecx] */
L_0066124E:
    RECOMP_CALL(sub_0076DC50); /* 0x0066124E: call 0x76dc50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00661253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066129A; /* 0x00661255: jne 0x66129a */
L_00661257:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00661257: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066125A: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0066125C: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x0066125F: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00661264: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00661269: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00661270: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00661273: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x00661275: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007FBF2Cu); /* 0x00661278: push 0x7fbf2c */
    RECOMP_CALL(sub_00409FA0); /* 0x0066127D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00661282: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00661286: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x1A1u; /* 0x0066128D: mov ecx, 0x1a1 */
    RECOMP_CALL(sub_00668410); /* 0x00661292: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00661297: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066129A:
    ecx = MEM32(ebp + (-0xC)); /* 0x0066129A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066129D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006612A4: pop ecx */
    esp = ebp; /* 0x006612A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006612A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006612A8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006612B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006612B0u);

L_006612B0:
    PUSH32(esp, ebp); /* 0x006612B0: push ebp */
    ebp = esp; /* 0x006612B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006612B3: push -1 */
    PUSH32(esp, 0x007BB7BBu); /* 0x006612B5: push 0x7bb7bb */
    eax = MEM32(FS_BASE + (0)); /* 0x006612BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006612C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x006612C1: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006612C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006612C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x006612CB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x006612CE: push ebx */
    PUSH32(esp, esi); /* 0x006612CF: push esi */
    PUSH32(esp, edi); /* 0x006612D0: push edi */
    PUSH32(esp, eax); /* 0x006612D1: push eax */
    eax = ebp + (-0xC); /* 0x006612D2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006612D5: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x006612DB: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0x8); /* 0x006612E2: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x006612E5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x60)) = 0; /* 0x006612E8: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x6C)) = edi; /* 0x006612EF: mov dword ptr [ebp - 0x6c], edi */
    MEM32(edi) = 0; /* 0x006612F2: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x006612F8: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x006612FF: mov dword ptr [edi + 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00661306: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x0066130D: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x60)) = 1; /* 0x00661311: mov dword ptr [ebp - 0x60], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661358; /* 0x00661318: je 0x661358 */
L_0066131A:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066131A: push -1 */
    PUSH32(esp, 0); /* 0x0066131C: push 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066131E: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x00661325: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x00661328: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x0066132F: push eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00661330: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00661337: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0066133E: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00661342: call 0x40a030 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x00661347: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066134A: mov dword ptr [ebp - 4], 1 */
    ebx = 3; /* 0x00661351: mov ebx, 3 */
    goto L_00661375; /* 0x00661356: jmp 0x661375 */
L_00661358:
    PUSH32(esp, eax); /* 0x00661358: push eax */
    edx = 0x007E7E28u; /* 0x00661359: mov edx, 0x7e7e28 */
    ecx = ebp + (-0x44); /* 0x0066135E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0042A130); /* 0x00661361: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661366: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 2; /* 0x00661369: mov dword ptr [ebp - 4], 2 */
    ebx = 5; /* 0x00661370: mov ebx, 5 */
L_00661375:
    MEM32(ebp + (-0x60)) = ebx; /* 0x00661375: mov dword ptr [ebp - 0x60], ebx */
    ecx = ebp + (-0x5C); /* 0x00661378: lea ecx, [ebp - 0x5c] */
    MEM32(ebp + (-0x4C)) = 0; /* 0x0066137B: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x00661382: mov dword ptr [ebp - 0x48], 0 */
    PUSH32(esp, eax); /* 0x00661389: push eax */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x0066138A: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x00661391: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x00661398: mov byte ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0066139C: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x006613A1: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(0x7CC694); /* 0x006613A8: mov eax, dword ptr [0x7cc694] */
    /* test LO8(ebx), 4 */ /* 0x006613AD: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006613DD; /* 0x006613B0: je 0x6613dd */
L_006613B2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ebx = ebx & 0xFFFFFFFBu; /* 0x006613B2: and ebx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x006613B5: mov dword ptr [ebp - 0x60], ebx */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x006613B8: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006613CB; /* 0x006613BC: jb 0x6613cb */
L_006613BE:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x006613BE: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(eax); /* 0x006613C1: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x7CC694); /* 0x006613C3: mov eax, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006613C8: add esp, 4 */
    _flag_k = FK_ADD;
L_006613CB:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x006613CB: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x006613D2: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x006613D9: mov byte ptr [ebp - 0x44], 0 */
L_006613DD:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006613DD: mov byte ptr [ebp - 4], 5 */
    /* test LO8(ebx), 2 */ /* 0x006613E1: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066140C; /* 0x006613E4: je 0x66140c */
L_006613E6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x006613E6: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x006613E9: mov dword ptr [ebp - 0x60], ebx */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006613EC: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006613FA; /* 0x006613F0: jb 0x6613fa */
L_006613F2:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x006613F2: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(eax); /* 0x006613F5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006613F7: add esp, 4 */
    _flag_k = FK_ADD;
L_006613FA:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x006613FA: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00661401: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00661408: mov byte ptr [ebp - 0x2c], 0 */
L_0066140C:
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x0066140C: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ebp + (-0x5C); /* 0x00661410: lea esi, [ebp - 0x5c] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00661413: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00661416: mov dword ptr [ebp - 0x18], 0 */
    if (CMP_AE(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x5C)); } /* 0x0066141D: cmovae esi, dword ptr [ebp - 0x5c] */
    PUSH32(esp, 0); /* 0x00661421: push 0 */
    PUSH32(esp, 4); /* 0x00661423: push 4 */
    MEM64(ebp + (-0x20)) = _xmm[0].u64[0]; /* 0x00661425: movq qword ptr [ebp - 0x20], xmm0 */
    RECOMP_ICALL(MEM32(0x92C608)); /* 0x0066142A: call dword ptr [0x92c608] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00661430: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x00661433: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x00661436: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661448; /* 0x00661438: jne 0x661448 */
L_0066143A:
    ecx = 0x00803E4Cu; /* 0x0066143A: mov ecx, 0x803e4c */
    RECOMP_CALL(sub_0076D050); /* 0x0066143F: call 0x76d050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00661444: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00661466; /* 0x00661446: jmp 0x661466 */
L_00661448:
    eax = ebp + (-0x20); /* 0x00661448: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x0066144B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0066144D: push eax */
    RECOMP_CALL(sub_0076E220); /* 0x0066144E: call 0x76e220 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x00661453: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661456: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x20)); /* 0x00661459: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx + eax * 4) = 0; /* 0x0066145C: mov dword ptr [ecx + eax*4], 0 */
    eax = MEM32(ebp + (-0x20)); /* 0x00661463: mov eax, dword ptr [ebp - 0x20] */
L_00661466:
    /* cmp MEM32(eax), 0 */ /* 0x00661466: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax; /* 0x00661469: mov esi, eax */
    ebx = MEM32(0x7CC694); /* 0x0066146B: mov ebx, dword ptr [0x7cc694] */
    MEM32(ebp + (-0x64)) = eax; /* 0x00661471: mov dword ptr [ebp - 0x64], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661509; /* 0x00661474: je 0x661509 */
L_0066147A:
    ebx = ebx; /* 0x0066147A: lea ebx, [ebx] */
L_00661480:
    edx = MEM32(esi); /* 0x00661480: mov edx, dword ptr [esi] */
    MEM32(ebp + (-0x34)) = 0; /* 0x00661482: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00661489: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00661490: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00661497: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0066149E: mov byte ptr [ebp - 0x44], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x006614A2: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006614AB; /* 0x006614A5: jne 0x6614ab */
L_006614A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006614A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006614BD; /* 0x006614A9: jmp 0x6614bd */
L_006614AB:
    ecx = edx; /* 0x006614AB: mov ecx, edx */
    eax = ecx + 0x1; /* 0x006614AD: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x68)) = eax; /* 0x006614B0: mov dword ptr [ebp - 0x68], eax */
L_006614B3:
    SET_LO8(eax, MEM8(ecx)); /* 0x006614B3: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006614B5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006614B6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006614B3; /* 0x006614B8: jne 0x6614b3 */
L_006614BA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x68)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x68)); /* 0x006614BA: sub ecx, dword ptr [ebp - 0x68] */
    _flag_k = FK_CMP;
L_006614BD:
    PUSH32(esp, ecx); /* 0x006614BD: push ecx */
    PUSH32(esp, edx); /* 0x006614BE: push edx */
    ecx = ebp + (-0x44); /* 0x006614BF: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0040A2F0); /* 0x006614C2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006614C7: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x44); /* 0x006614CB: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x006614CE: push eax */
    ecx = edi; /* 0x006614CF: mov ecx, edi */
    RECOMP_CALL(sub_0044E380); /* 0x006614D1: call 0x44e380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006614D6: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x006614DA: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006614E8; /* 0x006614DE: jb 0x6614e8 */
L_006614E0:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x006614E0: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(ebx); /* 0x006614E3: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006614E5: add esp, 4 */
    _flag_k = FK_ADD;
L_006614E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006614E8: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x006614EB: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x006614F2: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x006614F9: mov byte ptr [ebp - 0x44], 0 */
    /* cmp MEM32(esi), 0 */ /* 0x006614FD: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661480; /* 0x00661500: jne 0x661480 */
L_00661506:
    eax = MEM32(ebp + (-0x64)); /* 0x00661506: mov eax, dword ptr [ebp - 0x64] */
L_00661509:
    esi = eax; /* 0x00661509: mov esi, eax */
    eax = MEM32(eax); /* 0x0066150B: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x0066150D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661525; /* 0x0066150F: je 0x661525 */
L_00661511:
    PUSH32(esp, eax); /* 0x00661511: push eax */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00661512: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x00661518: mov eax, dword ptr [esi + 4] */
    esi = esi + 0x4; /* 0x0066151B: lea esi, [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066151E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00661521: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661511; /* 0x00661523: jne 0x661511 */
L_00661525:
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x00661525: push dword ptr [ebp - 0x64] */
    RECOMP_ICALL(MEM32(0x92C610)); /* 0x00661528: call dword ptr [0x92c610] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066152E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00661531: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x00661535: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661543; /* 0x00661539: jb 0x661543 */
L_0066153B:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x0066153B: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(ebx); /* 0x0066153E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661540: add esp, 4 */
    _flag_k = FK_ADD;
L_00661543:
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x00661543: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x0066154A: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x00661551: mov byte ptr [ebp - 0x5c], 0 */
    eax = edi; /* 0x00661555: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00661557: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066155A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00661561: pop ecx */
    edi = POP32_VAL(esp); /* 0x00661562: pop edi */
    esi = POP32_VAL(esp); /* 0x00661563: pop esi */
    ebx = POP32_VAL(esp); /* 0x00661564: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00661565: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00661568: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066156A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066156F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00661571: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00661572: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00661580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00661580u);

L_00661580:
    PUSH32(esp, ebp); /* 0x00661580: push ebp */
    ebp = esp; /* 0x00661581: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661583: push -1 */
    PUSH32(esp, 0x007BB800u); /* 0x00661585: push 0x7bb800 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066158A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00661590: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x00661591: sub esp, 0x70 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00661594: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00661599: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0066159B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0066159E: push ebx */
    PUSH32(esp, esi); /* 0x0066159F: push esi */
    PUSH32(esp, edi); /* 0x006615A0: push edi */
    PUSH32(esp, eax); /* 0x006615A1: push eax */
    eax = ebp + (-0xC); /* 0x006615A2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006615A5: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x006615AB: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x10); /* 0x006615AE: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x006615B1: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x64)) = 0; /* 0x006615B4: mov dword ptr [ebp - 0x64], 0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x006615BB: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x6C)) = eax; /* 0x006615C2: mov dword ptr [ebp - 0x6c], eax */
    MEM32(ebp + (-0x68)) = edi; /* 0x006615C5: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x5C)) = 0; /* 0x006615C8: mov dword ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006615CF: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x48); /* 0x006615D6: lea eax, [ebp - 0x48] */
    PUSH32(esp, 1); /* 0x006615D9: push 1 */
    PUSH32(esp, 0); /* 0x006615DB: push 0 */
    PUSH32(esp, eax); /* 0x006615DD: push eax */
    ecx = edi; /* 0x006615DE: mov ecx, edi */
    MEM8(ebp + (-0x48)) = (uint8_t)(0x2Au); /* 0x006615E0: mov byte ptr [ebp - 0x48], 0x2a */
    RECOMP_CALL(sub_0044E510); /* 0x006615E4: call 0x44e510 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006615E9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006615FD; /* 0x006615EC: je 0x6615fd */
L_006615EE:
    PUSH32(esp, 0x2Au); /* 0x006615EE: push 0x2a */
    edx = edi; /* 0x006615F0: mov edx, edi */
    ecx = ebp + (-0x64); /* 0x006615F2: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_00679F30); /* 0x006615F5: call 0x679f30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006615FA: add esp, 4 */
    _flag_k = FK_ADD;
L_006615FD:
    PUSH32(esp, 0); /* 0x006615FD: push 0 */
    PUSH32(esp, esi); /* 0x006615FF: push esi */
    eax = ebp + (-0x58); /* 0x00661600: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x00661603: push eax */
    RECOMP_CALL(sub_006612B0); /* 0x00661604: call 0x6612b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00661609: mov byte ptr [ebp - 4], 1 */
    eax = 0x2AAAAAABu; /* 0x0066160D: mov eax, 0x2aaaaaab */
    ecx = MEM32(ebp + (-0x54)); /* 0x00661612: mov ecx, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x58)); /* 0x00661615: sub ecx, dword ptr [ebp - 0x58] */
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x00661618: mov ebx, dword ptr [0x7cc694] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0066161E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x78)) = 0; /* 0x00661620: mov dword ptr [ebp - 0x78], 0 */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00661627: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x0066162A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0066162C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0066162C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0066162F: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006618CE; /* 0x00661631: je 0x6618ce */
L_00661637:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00661637: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = ebx; /* 0x00661639: mov dword ptr [ebp - 0x4c], ebx */
    esp = esp; /* 0x0066163C: lea esp, [esp] */
L_00661640:
    esi = MEM32(ebp + (-0x58)); /* 0x00661640: mov esi, dword ptr [ebp - 0x58] */
    edx = MEM32(ebp + (-0x64)); /* 0x00661643: mov edx, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x00661646: add esi, ebx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x60)); /* 0x00661648: mov ecx, dword ptr [ebp - 0x60] */
    /* cmp edx, ecx */ /* 0x0066164B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006616A7; /* 0x0066164D: jne 0x6616a7 */
L_0066164F:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0066164F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0x10); /* 0x00661653: mov ebx, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066165C; /* 0x00661656: jb 0x66165c */
L_00661658:
    edx = MEM32(esi); /* 0x00661658: mov edx, dword ptr [esi] */
    goto L_0066165E; /* 0x0066165A: jmp 0x66165e */
L_0066165C:
    edx = esi; /* 0x0066165C: mov edx, esi */
L_0066165E:
    eax = MEM32(ebp + (-0x68)); /* 0x0066165E: mov eax, dword ptr [ebp - 0x68] */
    edi = MEM32(edi + 0x10); /* 0x00661661: mov edi, dword ptr [edi + 0x10] */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00661664: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066166E; /* 0x00661668: jb 0x66166e */
L_0066166A:
    ecx = MEM32(eax); /* 0x0066166A: mov ecx, dword ptr [eax] */
    goto L_00661670; /* 0x0066166C: jmp 0x661670 */
L_0066166E:
    ecx = eax; /* 0x0066166E: mov ecx, eax */
L_00661670:
    /* cmp edi, ebx */ /* 0x00661670: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x00661672: mov eax, ebx */
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x00661674: cmovb eax, edi */
    PUSH32(esp, eax); /* 0x00661677: push eax */
    RECOMP_CALL(sub_00424360); /* 0x00661678: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066167D: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00661680: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661696; /* 0x00661682: jne 0x661696 */
L_00661684:
    /* cmp edi, ebx */ /* 0x00661684: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066168D; /* 0x00661686: jae 0x66168d */
L_00661688:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00661688: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00661694; /* 0x0066168B: jmp 0x661694 */
L_0066168D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066168D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x0066168F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00661691: setne al */
L_00661694:
    /* test eax, eax */ /* 0x00661694: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_00661696:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x00661696: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x00661699: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661898; /* 0x0066169B: je 0x661898 */
L_006616A1:
    PUSH32(esp, esi); /* 0x006616A1: push esi */
    goto L_00661890; /* 0x006616A2: jmp 0x661890 */
L_006616A7:
    eax = MEM32(esi + 0x10); /* 0x006616A7: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x006616AA: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661898; /* 0x006616AD: jb 0x661898 */
L_006616B3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006616B3: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x006616B5: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006616BA: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x006616BC: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x006616BF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006616C1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006616C1: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006616C4: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x70)) = eax; /* 0x006616C6: mov dword ptr [ebp - 0x70], eax */
    /* cmp eax, 1 */ /* 0x006616C9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066173F; /* 0x006616CC: jne 0x66173f */
L_006616CE:
    PUSH32(esp, 0); /* 0x006616CE: push 0 */
    ecx = edi; /* 0x006616D0: mov ecx, edi */
    RECOMP_CALL(sub_00429F00); /* 0x006616D2: call 0x429f00 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax), 0x2Au */ /* 0x006616D7: cmp byte ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066173C; /* 0x006616DA: je 0x66173c */
L_006616DC:
    edi = MEM32(ebp + (-0x64)); /* 0x006616DC: mov edi, dword ptr [ebp - 0x64] */
    eax = ebp + (-0x44); /* 0x006616DF: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x006616E2: mov ecx, esi */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006616E4: push dword ptr [edi + 0x10] */
    PUSH32(esp, 0); /* 0x006616E7: push 0 */
    PUSH32(esp, eax); /* 0x006616E9: push eax */
    RECOMP_CALL(sub_0045F3F0); /* 0x006616EA: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006616EF: mov byte ptr [ebp - 4], 2 */
    edx = edi; /* 0x006616F3: mov edx, edi */
    ecx = ebp + (-0x44); /* 0x006616F5: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0042A240); /* 0x006616F8: call 0x42a240 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006616FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066170F; /* 0x006616FF: je 0x66170f */
L_00661701:
    eax = MEM32(ebp + (-0x58)); /* 0x00661701: mov eax, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x00661704: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x00661707: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00661709: push eax */
    RECOMP_CALL(sub_00519390); /* 0x0066170A: call 0x519390 */
    RECOMP_FLAGS_IN();
L_0066170F:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066170F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00661713: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661725; /* 0x00661717: jb 0x661725 */
L_00661719:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00661719: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066171C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661722: add esp, 4 */
    _flag_k = FK_ADD;
L_00661725:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00661725: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x0066172C: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00661733: mov byte ptr [ebp - 0x44], 0 */
    goto L_00661898; /* 0x00661737: jmp 0x661898 */
L_0066173C:
    eax = MEM32(ebp + (-0x70)); /* 0x0066173C: mov eax, dword ptr [ebp - 0x70] */
L_0066173F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0066173F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00661741: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x74)) = ebx; /* 0x00661743: mov dword ptr [ebp - 0x74], ebx */
    /* test eax, eax */ /* 0x00661746: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661889; /* 0x00661748: je 0x661889 */
L_0066174E:
    esi = MEM32(ebp + (-0x64)); /* 0x0066174E: mov esi, dword ptr [ebp - 0x64] */
L_00661751:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00661751: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x58)); /* 0x00661754: add ecx, dword ptr [ebp - 0x58] */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00661757: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661761; /* 0x0066175B: jb 0x661761 */
L_0066175D:
    eax = MEM32(esi); /* 0x0066175D: mov eax, dword ptr [esi] */
    goto L_00661763; /* 0x0066175F: jmp 0x661763 */
L_00661761:
    eax = esi; /* 0x00661761: mov eax, esi */
L_00661763:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x00661763: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x00661766: push edi */
    PUSH32(esp, eax); /* 0x00661767: push eax */
    RECOMP_CALL(sub_0044E510); /* 0x00661768: call 0x44e510 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0066176D: mov edi, eax */
    MEM32(ebp + (-0x7C)) = edi; /* 0x0066176F: mov dword ptr [ebp - 0x7c], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x00661772: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661898; /* 0x00661775: je 0x661898 */
L_0066177B:
    eax = MEM32(ebp + (-0x64)); /* 0x0066177B: mov eax, dword ptr [ebp - 0x64] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x0066177E: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661791; /* 0x00661782: jne 0x661791 */
L_00661784:
    /* test edi, edi */ /* 0x00661784: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661791; /* 0x00661786: jne 0x661791 */
L_00661788:
    /* cmp ebx, 1 */ /* 0x00661788: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661898; /* 0x0066178B: je 0x661898 */
L_00661791:
    eax = MEM32(ebp + (-0x70)); /* 0x00661791: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00661794: dec eax */
    _flag_k = FK_DEC;
    /* cmp ebx, eax */ /* 0x00661795: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661879; /* 0x00661797: jne 0x661879 */
L_0066179D:
    eax = MEM32(ebp + (-0x58)); /* 0x0066179D: mov eax, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x4C)); /* 0x006617A0: mov ecx, dword ptr [ebp - 0x4c] */
    edx = MEM32(ecx + eax + 0x10); /* 0x006617A3: mov edx, dword ptr [ecx + eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006617A7: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x006617A9: sub edx, edi */
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x006617AB: lea eax, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x006617AE: push edx */
    PUSH32(esp, edi); /* 0x006617AF: push edi */
    PUSH32(esp, eax); /* 0x006617B0: push eax */
    RECOMP_CALL(sub_0045F3F0); /* 0x006617B1: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006617B6: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006617BA: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0x10); /* 0x006617BE: mov ebx, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006617C7; /* 0x006617C1: jb 0x6617c7 */
L_006617C3:
    edx = MEM32(esi); /* 0x006617C3: mov edx, dword ptr [esi] */
    goto L_006617C9; /* 0x006617C5: jmp 0x6617c9 */
L_006617C7:
    edx = esi; /* 0x006617C7: mov edx, esi */
L_006617C9:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006617C9: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x006617CD: lea ecx, [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x1C)); /* 0x006617D0: mov edi, dword ptr [ebp - 0x1c] */
    eax = ebx; /* 0x006617D3: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x2C)); } /* 0x006617D5: cmovae ecx, dword ptr [ebp - 0x2c] */
    /* cmp edi, ebx */ /* 0x006617D9: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x006617DB: cmovb eax, edi */
    PUSH32(esp, eax); /* 0x006617DE: push eax */
    RECOMP_CALL(sub_00424360); /* 0x006617DF: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006617E4: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006617E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006617FD; /* 0x006617E9: jne 0x6617fd */
L_006617EB:
    /* cmp edi, ebx */ /* 0x006617EB: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006617F4; /* 0x006617ED: jae 0x6617f4 */
L_006617EF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006617EF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006617FB; /* 0x006617F2: jmp 0x6617fb */
L_006617F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006617F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x006617F6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006617F8: setne al */
L_006617FB:
    /* test eax, eax */ /* 0x006617FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_006617FD:
    edi = MEM32(ebp + (-0x68)); /* 0x006617FD: mov edi, dword ptr [ebp - 0x68] */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x00661800: sete cl */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x00661803: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(edi + 0x10); /* 0x00661807: mov edx, dword ptr [edi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00661810; /* 0x0066180A: jb 0x661810 */
L_0066180C:
    eax = MEM32(edi); /* 0x0066180C: mov eax, dword ptr [edi] */
    goto L_00661812; /* 0x0066180E: jmp 0x661812 */
L_00661810:
    eax = edi; /* 0x00661810: mov eax, edi */
L_00661812:
    /* cmp MEM8(eax + edx + (-0x1)), 0x2Au */ /* 0x00661812: cmp byte ptr [eax + edx - 1], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax + edx + (-0x1))) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661847; /* 0x00661817: jne 0x661847 */
L_00661819:
    /* test LO8(ecx), LO8(ecx) */ /* 0x00661819: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066184B; /* 0x0066181B: je 0x66184b */
L_0066181D:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066181D: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00661821: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661833; /* 0x00661825: jb 0x661833 */
L_00661827:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00661827: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066182A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661830: add esp, 4 */
    _flag_k = FK_ADD;
L_00661833:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00661833: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066183A: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00661841: mov byte ptr [ebp - 0x2c], 0 */
    goto L_00661898; /* 0x00661845: jmp 0x661898 */
L_00661847:
    /* test LO8(ecx), LO8(ecx) */ /* 0x00661847: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066181D; /* 0x00661849: je 0x66181d */
L_0066184B:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066184B: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0066184F: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661861; /* 0x00661853: jb 0x661861 */
L_00661855:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00661855: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00661858: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066185E: add esp, 4 */
    _flag_k = FK_ADD;
L_00661861:
    ebx = MEM32(ebp + (-0x74)); /* 0x00661861: mov ebx, dword ptr [ebp - 0x74] */
    edi = MEM32(ebp + (-0x7C)); /* 0x00661864: mov edi, dword ptr [ebp - 0x7c] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00661867: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066186E: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00661875: mov byte ptr [ebp - 0x2c], 0 */
L_00661879:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00661879: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x0066187A: add esi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x74)) = ebx; /* 0x0066187D: mov dword ptr [ebp - 0x74], ebx */
    /* cmp ebx, MEM32(ebp + (-0x70)) */ /* 0x00661880: cmp ebx, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00661751; /* 0x00661883: jb 0x661751 */
L_00661889:
    eax = MEM32(ebp + (-0x58)); /* 0x00661889: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4C)); /* 0x0066188C: add eax, dword ptr [ebp - 0x4c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0066188F: push eax */
L_00661890:
    ecx = MEM32(ebp + (-0x6C)); /* 0x00661890: mov ecx, dword ptr [ebp - 0x6c] */
    RECOMP_CALL(sub_00519390); /* 0x00661893: call 0x519390 */
    RECOMP_FLAGS_IN();
L_00661898:
    ecx = MEM32(ebp + (-0x54)); /* 0x00661898: mov ecx, dword ptr [ebp - 0x54] */
    eax = 0x2AAAAAABu; /* 0x0066189B: mov eax, 0x2aaaaaab */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x58)); /* 0x006618A0: sub ecx, dword ptr [ebp - 0x58] */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x78)); /* 0x006618A3: mov esi, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) + 0x18u; /* 0x006618A6: add dword ptr [ebp - 0x4c], 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006618AA: inc esi */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x68)); /* 0x006618AB: mov edi, dword ptr [ebp - 0x68] */
    ebx = MEM32(ebp + (-0x4C)); /* 0x006618AE: mov ebx, dword ptr [ebp - 0x4c] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006618B1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x78)) = esi; /* 0x006618B3: mov dword ptr [ebp - 0x78], esi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x006618B6: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x006618B9: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006618BB: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006618BB: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006618BE: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x006618C0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00661640; /* 0x006618C2: jb 0x661640 */
L_006618C8:
    ebx = MEM32(0x7CC694); /* 0x006618C8: mov ebx, dword ptr [0x7cc694] */
L_006618CE:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006618CE: mov byte ptr [ebp - 4], 0 */
    esi = MEM32(ebp + (-0x58)); /* 0x006618D2: mov esi, dword ptr [ebp - 0x58] */
    /* test esi, esi */ /* 0x006618D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661923; /* 0x006618D7: je 0x661923 */
L_006618D9:
    edi = MEM32(ebp + (-0x54)); /* 0x006618D9: mov edi, dword ptr [ebp - 0x54] */
    /* cmp esi, edi */ /* 0x006618DC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661908; /* 0x006618DE: je 0x661908 */
L_006618E0:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006618E0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006618ED; /* 0x006618E4: jb 0x6618ed */
L_006618E6:
    PUSH32(esp, MEM32(esi)); /* 0x006618E6: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006618E8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006618EA: add esp, 4 */
    _flag_k = FK_ADD;
L_006618ED:
    MEM32(esi + 0x14) = 0xFu; /* 0x006618ED: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x006618F4: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x006618FB: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x006618FE: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x00661901: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006618E0; /* 0x00661903: jne 0x6618e0 */
L_00661905:
    esi = MEM32(ebp + (-0x58)); /* 0x00661905: mov esi, dword ptr [ebp - 0x58] */
L_00661908:
    PUSH32(esp, esi); /* 0x00661908: push esi */
    RECOMP_ICALL(ebx); /* 0x00661909: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066190B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = 0; /* 0x0066190E: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x00661915: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x0066191C: mov dword ptr [ebp - 0x50], 0 */
L_00661923:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00661923: mov dword ptr [ebp - 4], 0xffffffff */
    edi = MEM32(ebp + (-0x64)); /* 0x0066192A: mov edi, dword ptr [ebp - 0x64] */
    /* test edi, edi */ /* 0x0066192D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661983; /* 0x0066192F: je 0x661983 */
L_00661931:
    eax = MEM32(ebp + (-0x60)); /* 0x00661931: mov eax, dword ptr [ebp - 0x60] */
    esi = edi; /* 0x00661934: mov esi, edi */
    /* cmp edi, eax */ /* 0x00661936: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661968; /* 0x00661938: je 0x661968 */
L_0066193A:
    ebx = ebx; /* 0x0066193A: lea ebx, [ebx] */
L_00661940:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00661940: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661950; /* 0x00661944: jb 0x661950 */
L_00661946:
    PUSH32(esp, MEM32(esi)); /* 0x00661946: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x00661948: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x60)); /* 0x0066194A: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066194D: add esp, 4 */
    _flag_k = FK_ADD;
L_00661950:
    MEM32(esi + 0x14) = 0xFu; /* 0x00661950: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00661957: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066195E: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x00661961: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x00661964: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00661940; /* 0x00661966: jne 0x661940 */
L_00661968:
    PUSH32(esp, edi); /* 0x00661968: push edi */
    RECOMP_ICALL(ebx); /* 0x00661969: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066196B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = 0; /* 0x0066196E: mov dword ptr [ebp - 0x64], 0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x00661975: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0066197C: mov dword ptr [ebp - 0x5c], 0 */
L_00661983:
    ecx = MEM32(ebp + (-0xC)); /* 0x00661983: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00661986: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066198D: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066198E: pop edi */
    esi = POP32_VAL(esp); /* 0x0066198F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00661990: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00661991: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00661994: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00661996: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066199B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066199D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0066199E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006619B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006619B0u);

L_006619B0:
    PUSH32(esp, ebp); /* 0x006619B0: push ebp */
    ebp = esp; /* 0x006619B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006619B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006619B6: push -1 */
    PUSH32(esp, 0x007BB860u); /* 0x006619B8: push 0x7bb860 */
    eax = MEM32(FS_BASE + (0)); /* 0x006619BD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006619C3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x006619C4: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006619C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006619CC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006619CE: mov dword ptr [esp + 0x4c], eax */
    PUSH32(esp, ebx); /* 0x006619D2: push ebx */
    PUSH32(esp, esi); /* 0x006619D3: push esi */
    eax = MEM32(0x855000); /* 0x006619D4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006619D9: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006619DB: push eax */
    eax = esp + 0x60; /* 0x006619DC: lea eax, [esp + 0x60] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006619E0: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x006619E6: mov esi, dword ptr [ebp + 8] */
    ecx = esp + 0x10; /* 0x006619E9: lea ecx, [esp + 0x10] */
    PUSH32(esp, esi); /* 0x006619ED: push esi */
    edx = 0x007E7E28u; /* 0x006619EE: mov edx, 0x7e7e28 */
    RECOMP_CALL(sub_0042A130); /* 0x006619F3: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006619F8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x68) = 0; /* 0x006619FB: mov dword ptr [esp + 0x68], 0 */
    PUSH32(esp, esi); /* 0x00661A03: push esi */
    RECOMP_CALL(sub_00661BF0); /* 0x00661A04: call 0x661bf0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC694); /* 0x00661A09: mov esi, dword ptr [0x7cc694] */
    /* test LO8(eax), LO8(eax) */ /* 0x00661A0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661A1A; /* 0x00661A11: je 0x661a1a */
L_00661A13:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x00661A13: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_00661B98; /* 0x00661A15: jmp 0x661b98 */
L_00661A1A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00661A1A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = esp + 0x28; /* 0x00661A1D: lea eax, [esp + 0x28] */
    ecx = esp; /* 0x00661A21: mov ecx, esp */
    MEM32(esp + 0x24) = esp; /* 0x00661A23: mov dword ptr [esp + 0x24], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661A27: push -1 */
    PUSH32(esp, 0); /* 0x00661A29: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00661A2B: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00661A32: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00661A39: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x00661A3A: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00661A3D: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x80) = (uint8_t)(1); /* 0x00661A42: mov byte ptr [esp + 0x80], 1 */
    MEM8(esp + 0x80) = (uint8_t)(0); /* 0x00661A4A: mov byte ptr [esp + 0x80], 0 */
    ecx = esp + 0x40; /* 0x00661A52: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_00669DB0); /* 0x00661A56: call 0x669db0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x00661A5B: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x68) = (uint8_t)(2); /* 0x00661A5E: mov byte ptr [esp + 0x68], 2 */
    edx = 0x007E7E34u; /* 0x00661A63: mov edx, 0x7e7e34 */
    ecx = eax; /* 0x00661A68: mov ecx, eax */
    RECOMP_CALL(sub_004261B0); /* 0x00661A6A: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x00661A6F: mov bl, al */
    MEM8(esp + 0x68) = (uint8_t)(0); /* 0x00661A71: mov byte ptr [esp + 0x68], 0 */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x00661A76: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661A86; /* 0x00661A7B: jb 0x661a86 */
L_00661A7D:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x00661A7D: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(esi); /* 0x00661A81: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661A83: add esp, 4 */
    _flag_k = FK_ADD;
L_00661A86:
    MEM32(esp + 0x3C) = 0xFu; /* 0x00661A86: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x00661A8E: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x00661A96: mov byte ptr [esp + 0x28], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x00661A9B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661B80; /* 0x00661A9D: je 0x661b80 */
L_00661AA3:
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x00661AA3: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x10; /* 0x00661AA8: lea ecx, [esp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x10); } /* 0x00661AAC: cmovae ecx, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_0076DED0); /* 0x00661AB1: call 0x76ded0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00661AB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661AC1; /* 0x00661AB8: je 0x661ac1 */
L_00661ABA:
    SET_LO8(ebx, 1); /* 0x00661ABA: mov bl, 1 */
    goto L_00661B98; /* 0x00661ABC: jmp 0x661b98 */
L_00661AC1:
    PUSH32(esp, 0x007F82C8u); /* 0x00661AC1: push 0x7f82c8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00661AC6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = esp + 0x2C; /* 0x00661AC9: lea eax, [esp + 0x2c] */
    ecx = esp; /* 0x00661ACD: mov ecx, esp */
    MEM32(esp + 0x28) = esp; /* 0x00661ACF: mov dword ptr [esp + 0x28], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661AD3: push -1 */
    PUSH32(esp, 0); /* 0x00661AD5: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00661AD7: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00661ADE: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00661AE5: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x00661AE6: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00661AE9: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x84) = (uint8_t)(3); /* 0x00661AEE: mov byte ptr [esp + 0x84], 3 */
    MEM8(esp + 0x84) = (uint8_t)(0); /* 0x00661AF6: mov byte ptr [esp + 0x84], 0 */
    ecx = esp + 0x5C; /* 0x00661AFE: lea ecx, [esp + 0x5c] */
    RECOMP_CALL(sub_0066A090); /* 0x00661B02: call 0x66a090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x00661B07: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x6C) = (uint8_t)(4); /* 0x00661B0A: mov byte ptr [esp + 0x6c], 4 */
    edx = eax; /* 0x00661B0F: mov edx, eax */
    ecx = esp + 0x2C; /* 0x00661B11: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_00419C40); /* 0x00661B15: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661B1A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x68) = (uint8_t)(5); /* 0x00661B1D: mov byte ptr [esp + 0x68], 5 */
    ecx = esp + 0x10; /* 0x00661B22: lea ecx, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00661B26: push eax */
    RECOMP_CALL(sub_004196B0); /* 0x00661B27: call 0x4196b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(4); /* 0x00661B2C: mov byte ptr [esp + 0x68], 4 */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x00661B31: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661B41; /* 0x00661B36: jb 0x661b41 */
L_00661B38:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x00661B38: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(esi); /* 0x00661B3C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661B3E: add esp, 4 */
    _flag_k = FK_ADD;
L_00661B41:
    MEM32(esp + 0x3C) = 0xFu; /* 0x00661B41: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x00661B49: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x00661B51: mov byte ptr [esp + 0x28], 0 */
    MEM8(esp + 0x68) = (uint8_t)(0); /* 0x00661B56: mov byte ptr [esp + 0x68], 0 */
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x00661B5B: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661B6B; /* 0x00661B60: jb 0x661b6b */
L_00661B62:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x00661B62: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(esi); /* 0x00661B66: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661B68: add esp, 4 */
    _flag_k = FK_ADD;
L_00661B6B:
    MEM32(esp + 0x54) = 0xFu; /* 0x00661B6B: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x00661B73: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x00661B7B: mov byte ptr [esp + 0x40], 0 */
L_00661B80:
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x00661B80: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x10; /* 0x00661B85: lea ecx, [esp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x10); } /* 0x00661B89: cmovae ecx, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_0076DED0); /* 0x00661B8E: call 0x76ded0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00661B93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00661B95: setne bl */
L_00661B98:
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x00661B98: mov dword ptr [esp + 0x68], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x00661BA0: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661BB0; /* 0x00661BA5: jb 0x661bb0 */
L_00661BA7:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x00661BA7: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(esi); /* 0x00661BAB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661BAD: add esp, 4 */
    _flag_k = FK_ADD;
L_00661BB0:
    MEM32(esp + 0x24) = 0xFu; /* 0x00661BB0: mov dword ptr [esp + 0x24], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x00661BB8: mov al, bl */
    MEM32(esp + 0x20) = 0; /* 0x00661BBA: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x00661BC2: mov byte ptr [esp + 0x10], 0 */
    ecx = MEM32(esp + 0x60); /* 0x00661BC7: mov ecx, dword ptr [esp + 0x60] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00661BCB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00661BD2: pop ecx */
    esi = POP32_VAL(esp); /* 0x00661BD3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00661BD4: pop ebx */
    ecx = MEM32(esp + 0x4C); /* 0x00661BD5: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00661BD9: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00661BDB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00661BE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00661BE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00661BE3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00661BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00661BF0u);

L_00661BF0:
    PUSH32(esp, ebp); /* 0x00661BF0: push ebp */
    ebp = esp; /* 0x00661BF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661BF3: push -1 */
    PUSH32(esp, 0x007BB898u); /* 0x00661BF5: push 0x7bb898 */
    eax = MEM32(FS_BASE + (0)); /* 0x00661BFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00661C00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x00661C01: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00661C04: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00661C09: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x00661C0B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00661C0E: push ebx */
    PUSH32(esp, eax); /* 0x00661C0F: push eax */
    eax = ebp + (-0xC); /* 0x00661C10: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00661C13: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x00661C19: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x00661C1C: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00661C1F: push eax */
    edx = 0x007E7E28u; /* 0x00661C20: mov edx, 0x7e7e28 */
    RECOMP_CALL(sub_0042A130); /* 0x00661C25: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661C2A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x00661C2D: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x00661C34: lea ecx, [ebp - 0x2c] */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00661C37: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x2C)); } /* 0x00661C3B: cmovae ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_0076E380); /* 0x00661C3F: call 0x76e380 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00661C44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00661C46: setne bl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00661C49: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00661C50: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661C62; /* 0x00661C54: jb 0x661c62 */
L_00661C56:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00661C56: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00661C59: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661C5F: add esp, 4 */
    _flag_k = FK_ADD;
L_00661C62:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00661C62: mov dword ptr [ebp - 0x18], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x00661C69: mov al, bl */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00661C6B: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00661C72: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00661C76: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00661C79: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00661C80: pop ecx */
    ebx = POP32_VAL(esp); /* 0x00661C81: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00661C82: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00661C85: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00661C87: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00661C8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00661C8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00661C8F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00661CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00661CA0u);

L_00661CA0:
    PUSH32(esp, ebp); /* 0x00661CA0: push ebp */
    ebp = esp; /* 0x00661CA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661CA3: push -1 */
    PUSH32(esp, 0x007BB965u); /* 0x00661CA5: push 0x7bb965 */
    eax = MEM32(FS_BASE + (0)); /* 0x00661CAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00661CB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x100u; /* 0x00661CB1: sub esp, 0x100 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00661CB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00661CBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x00661CBE: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x00661CC1: push ebx */
    PUSH32(esp, esi); /* 0x00661CC2: push esi */
    PUSH32(esp, edi); /* 0x00661CC3: push edi */
    PUSH32(esp, eax); /* 0x00661CC4: push eax */
    eax = ebp + (-0xC); /* 0x00661CC5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00661CC8: mov dword ptr fs:[0], eax */
    ebx = MEM32(ebp + 0x8); /* 0x00661CCE: mov ebx, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x00661CD1: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 7); /* 0x00661CD4: push 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00661CD6: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00661CDD: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007FBF4Cu); /* 0x00661CE4: push 0x7fbf4c */
    MEM32(ebp + (-0xF4)) = ebx; /* 0x00661CE9: mov dword ptr [ebp - 0xf4], ebx */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00661CEF: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00661CF6: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00661CFD: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00661D01: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00661D06: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0xE0); /* 0x00661D0D: lea eax, [ebp - 0xe0] */
    PUSH32(esp, ecx); /* 0x00661D13: push ecx */
    ecx = eax; /* 0x00661D14: mov ecx, eax */
    MEM32(ebp + (-0xCC)) = eax; /* 0x00661D16: mov dword ptr [ebp - 0xcc], eax */
    RECOMP_CALL(sub_005ED150); /* 0x00661D1C: call 0x5ed150 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00661D21: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x2C); /* 0x00661D25: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00661D28: push eax */
    ecx = ebp + (-0xE0); /* 0x00661D29: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_00663CB0); /* 0x00661D2F: call 0x663cb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x00661D34: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x00661D37: push dword ptr [ebx] */
    RECOMP_CALL(sub_0042A0E0); /* 0x00661D39: call 0x42a0e0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xD0)); /* 0x00661D3E: mov esi, dword ptr [ebp - 0xd0] */
    eax = MEM32(ebx); /* 0x00661D44: mov eax, dword ptr [ebx] */
    edi = MEM32(0x7CC694); /* 0x00661D46: mov edi, dword ptr [0x7cc694] */
    MEM32(ebx + 0x4) = eax; /* 0x00661D4C: mov dword ptr [ebx + 4], eax */
    /* test esi, esi */ /* 0x00661D4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066214D; /* 0x00661D51: je 0x66214d */
L_00661D57:
    PUSH32(esp, ecx); /* 0x00661D57: push ecx */
    eax = ebp + (-0x100); /* 0x00661D58: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x00661D5E: push eax */
    eax = ebp + (-0x10C); /* 0x00661D5F: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x00661D65: push eax */
    ecx = ebp + (-0xE0); /* 0x00661D66: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_00663E10); /* 0x00661D6C: call 0x663e10 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00661D71: mov ecx, eax */
    RECOMP_CALL(sub_00663FB0); /* 0x00661D73: call 0x663fb0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00661D78: mov edx, eax */
    eax = MEM32(edx); /* 0x00661D7A: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x00661D7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00661D82; /* 0x00661D7E: je 0x661d82 */
L_00661D80:
    eax = MEM32(eax); /* 0x00661D80: mov eax, dword ptr [eax] */
L_00661D82:
    ecx = MEM32(eax + 0x8); /* 0x00661D82: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x00661D85: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00661D88: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    ecx = ecx & MEM32(edx + 0x8); /* 0x00661D89: and ecx, dword ptr [edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + ecx * 4); /* 0x00661D8C: mov eax, dword ptr [eax + ecx*4] */
    ecx = ebp + (-0x2C); /* 0x00661D8F: lea ecx, [ebp - 0x2c] */
    /* cmp ecx, eax */ /* 0x00661D92: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00661DA6; /* 0x00661D94: je 0x661da6 */
L_00661D96:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00661D96: push -1 */
    PUSH32(esp, 0); /* 0x00661D98: push 0 */
    PUSH32(esp, eax); /* 0x00661D9A: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00661D9B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xD0)); /* 0x00661DA0: mov esi, dword ptr [ebp - 0xd0] */
L_00661DA6:
    ecx = MEM32(ebp + (-0xD4)); /* 0x00661DA6: mov ecx, dword ptr [ebp - 0xd4] */
    edx = MEM32(ebp + (-0xD8)); /* 0x00661DAC: mov edx, dword ptr [ebp - 0xd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00661DB2: dec ecx */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0xDC)); /* 0x00661DB3: mov eax, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x00661DB9: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00661DBB: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x00661DBC: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + edx * 4); /* 0x00661DBE: mov esi, dword ptr [eax + edx*4] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00661DC1: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661DCE; /* 0x00661DC5: jb 0x661dce */
L_00661DC7:
    PUSH32(esp, MEM32(esi)); /* 0x00661DC7: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x00661DC9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661DCB: add esp, 4 */
    _flag_k = FK_ADD;
L_00661DCE:
    MEM32(esi + 0x14) = 0xFu; /* 0x00661DCE: mov dword ptr [esi + 0x14], 0xf */
    ecx = 0; /* 0x00661DD5: mov ecx, 0 */
    MEM32(esi + 0x10) = 0; /* 0x00661DDA: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00661DE1: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) - 1; /* 0x00661DE4: dec dword ptr [ebp - 0xd0] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0xD4)); /* 0x00661DEA: mov eax, dword ptr [ebp - 0xd4] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00661DF0: cmove eax, ecx */
    MEM32(ebp + (-0xD4)) = eax; /* 0x00661DF3: mov dword ptr [ebp - 0xd4], eax */
    eax = ebp + (-0x2C); /* 0x00661DF9: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 1); /* 0x00661DFC: push 1 */
    PUSH32(esp, eax); /* 0x00661DFE: push eax */
    eax = ebp + (-0xC8); /* 0x00661DFF: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x00661E05: push eax */
    RECOMP_CALL(sub_006612B0); /* 0x00661E06: call 0x6612b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00661E0B: mov byte ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0xC8)); /* 0x00661E0F: mov eax, dword ptr [ebp - 0xc8] */
    ecx = MEM32(ebp + (-0xC4)); /* 0x00661E15: mov ecx, dword ptr [ebp - 0xc4] */
    /* cmp eax, ecx */ /* 0x00661E1B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006621CA; /* 0x00661E1D: je 0x6621ca */
L_00661E23:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00661E23: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xE4)) = 0; /* 0x00661E25: mov dword ptr [ebp - 0xe4], 0 */
    eax = 0x2AAAAAABu; /* 0x00661E2F: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00661E34: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00661E36: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x00661E39: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00661E3B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00661E3B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00661E3E: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006620D7; /* 0x00661E40: je 0x6620d7 */
L_00661E46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00661E46: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xCC)) = ebx; /* 0x00661E48: mov dword ptr [ebp - 0xcc], ebx */
    edi = edi; /* 0x00661E4E: mov edi, edi */
L_00661E50:
    PUSH32(esp, 0x007DF1A4u); /* 0x00661E50: push 0x7df1a4 */
    edx = ebp + (-0x2C); /* 0x00661E55: lea edx, [ebp - 0x2c] */
    ecx = ebp + (-0x5C); /* 0x00661E58: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00661E5B: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661E60: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00661E63: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x00661E67: mov edx, eax */
    ecx = MEM32(ebp + (-0xC8)); /* 0x00661E69: mov ecx, dword ptr [ebp - 0xc8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x00661E6F: add ecx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x00661E71: push ecx */
    ecx = ebp + (-0x44); /* 0x00661E72: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0045F540); /* 0x00661E75: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661E7A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00661E7D: mov byte ptr [ebp - 4], 6 */
    PUSH32(esp, 1); /* 0x00661E81: push 1 */
    PUSH32(esp, eax); /* 0x00661E83: push eax */
    eax = ebp + (-0xF0); /* 0x00661E84: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x00661E8A: push eax */
    RECOMP_CALL(sub_006612B0); /* 0x00661E8B: call 0x6612b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x00661E90: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00661E94: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661EA2; /* 0x00661E98: jb 0x661ea2 */
L_00661E9A:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00661E9A: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(edi); /* 0x00661E9D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661E9F: add esp, 4 */
    _flag_k = FK_ADD;
L_00661EA2:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00661EA2: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00661EA9: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00661EB0: mov byte ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00661EB4: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x00661EB8: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661EC6; /* 0x00661EBC: jb 0x661ec6 */
L_00661EBE:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x00661EBE: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(edi); /* 0x00661EC1: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661EC3: add esp, 4 */
    _flag_k = FK_ADD;
L_00661EC6:
    ecx = MEM32(ebp + (-0xEC)); /* 0x00661EC6: mov ecx, dword ptr [ebp - 0xec] */
    eax = 0x2AAAAAABu; /* 0x00661ECC: mov eax, 0x2aaaaaab */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xF0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xF0)); /* 0x00661ED1: sub ecx, dword ptr [ebp - 0xf0] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00661ED7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x00661ED9: mov dword ptr [ebp - 0x48], 0xf */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00661EE0: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x00661EE3: mov eax, edx */
    MEM32(ebp + (-0x4C)) = 0; /* 0x00661EE5: mov dword ptr [ebp - 0x4c], 0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00661EEC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00661EEC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00661EEF: add eax, edx */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x00661EF1: mov byte ptr [ebp - 0x5c], 0 */
    PUSH32(esp, 0x007DF1A4u); /* 0x00661EF5: push 0x7df1a4 */
    edx = ebp + (-0x2C); /* 0x00661EFA: lea edx, [ebp - 0x2c] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00661FA0; /* 0x00661EFD: je 0x661fa0 */
L_00661F03:
    ecx = ebp + (-0xBC); /* 0x00661F03: lea ecx, [ebp - 0xbc] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00661F09: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661F0E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00661F11: mov byte ptr [ebp - 4], 0xa */
    edx = eax; /* 0x00661F15: mov edx, eax */
    ecx = MEM32(ebp + (-0xC8)); /* 0x00661F17: mov ecx, dword ptr [ebp - 0xc8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x00661F1D: add ecx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x00661F1F: push ecx */
    ecx = ebp + (-0x8C); /* 0x00661F20: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_0045F540); /* 0x00661F26: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661F2B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x00661F2E: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0xE0); /* 0x00661F32: lea ecx, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x00661F38: push eax */
    RECOMP_CALL(sub_00663BF0); /* 0x00661F39: call 0x663bf0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00661F3E: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0x78)), 0x10u */ /* 0x00661F42: cmp dword ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661F53; /* 0x00661F46: jb 0x661f53 */
L_00661F48:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x00661F48: push dword ptr [ebp - 0x8c] */
    RECOMP_ICALL(edi); /* 0x00661F4E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661F50: add esp, 4 */
    _flag_k = FK_ADD;
L_00661F53:
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x00661F53: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x00661F5A: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x00661F61: mov byte ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x00661F68: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0xA8)), 0x10u */ /* 0x00661F6C: cmp dword ptr [ebp - 0xa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661F80; /* 0x00661F73: jb 0x661f80 */
L_00661F75:
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x00661F75: push dword ptr [ebp - 0xbc] */
    RECOMP_ICALL(edi); /* 0x00661F7B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661F7D: add esp, 4 */
    _flag_k = FK_ADD;
L_00661F80:
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x00661F80: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x00661F8A: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x00661F94: mov byte ptr [ebp - 0xbc], 0 */
    goto L_0066202F; /* 0x00661F9B: jmp 0x66202f */
L_00661FA0:
    ecx = ebp + (-0x74); /* 0x00661FA0: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_0041A0F0); /* 0x00661FA3: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661FA8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00661FAB: mov byte ptr [ebp - 4], 0xc */
    edx = eax; /* 0x00661FAF: mov edx, eax */
    ecx = MEM32(ebp + (-0xC8)); /* 0x00661FB1: mov ecx, dword ptr [ebp - 0xc8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x00661FB7: add ecx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x00661FB9: push ecx */
    ecx = ebp + (-0xA4); /* 0x00661FBA: lea ecx, [ebp - 0xa4] */
    RECOMP_CALL(sub_0045F540); /* 0x00661FC0: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661FC5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00661FC8: mov byte ptr [ebp - 4], 0xd */
    ecx = MEM32(ebp + (-0xF4)); /* 0x00661FCC: mov ecx, dword ptr [ebp - 0xf4] */
    PUSH32(esp, eax); /* 0x00661FD2: push eax */
    RECOMP_CALL(sub_0044E380); /* 0x00661FD3: call 0x44e380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00661FD8: mov byte ptr [ebp - 4], 0xc */
    /* cmp MEM32(ebp + (-0x90)), 0x10u */ /* 0x00661FDC: cmp dword ptr [ebp - 0x90], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00661FF0; /* 0x00661FE3: jb 0x661ff0 */
L_00661FE5:
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x00661FE5: push dword ptr [ebp - 0xa4] */
    RECOMP_ICALL(edi); /* 0x00661FEB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00661FED: add esp, 4 */
    _flag_k = FK_ADD;
L_00661FF0:
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x00661FF0: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x00661FFA: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x00662004: mov byte ptr [ebp - 0xa4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0066200B: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x0066200F: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066201D; /* 0x00662013: jb 0x66201d */
L_00662015:
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x00662015: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(edi); /* 0x00662018: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066201A: add esp, 4 */
    _flag_k = FK_ADD;
L_0066201D:
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x0066201D: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x00662024: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x0066202B: mov byte ptr [ebp - 0x74], 0 */
L_0066202F:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0066202F: mov byte ptr [ebp - 4], 4 */
    esi = MEM32(ebp + (-0xF0)); /* 0x00662033: mov esi, dword ptr [ebp - 0xf0] */
    /* test esi, esi */ /* 0x00662039: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066209C; /* 0x0066203B: je 0x66209c */
L_0066203D:
    ebx = MEM32(ebp + (-0xEC)); /* 0x0066203D: mov ebx, dword ptr [ebp - 0xec] */
    /* cmp esi, ebx */ /* 0x00662043: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00662072; /* 0x00662045: je 0x662072 */
L_00662047:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00662047: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662054; /* 0x0066204B: jb 0x662054 */
L_0066204D:
    PUSH32(esp, MEM32(esi)); /* 0x0066204D: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0066204F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662051: add esp, 4 */
    _flag_k = FK_ADD;
L_00662054:
    MEM32(esi + 0x14) = 0xFu; /* 0x00662054: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0066205B: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00662062: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x00662065: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x00662068: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00662047; /* 0x0066206A: jne 0x662047 */
L_0066206C:
    esi = MEM32(ebp + (-0xF0)); /* 0x0066206C: mov esi, dword ptr [ebp - 0xf0] */
L_00662072:
    PUSH32(esp, esi); /* 0x00662072: push esi */
    RECOMP_ICALL(edi); /* 0x00662073: call edi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xCC)); /* 0x00662075: mov ebx, dword ptr [ebp - 0xcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066207B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xF0)) = 0; /* 0x0066207E: mov dword ptr [ebp - 0xf0], 0 */
    MEM32(ebp + (-0xEC)) = 0; /* 0x00662088: mov dword ptr [ebp - 0xec], 0 */
    MEM32(ebp + (-0xE8)) = 0; /* 0x00662092: mov dword ptr [ebp - 0xe8], 0 */
L_0066209C:
    ecx = MEM32(ebp + (-0xC4)); /* 0x0066209C: mov ecx, dword ptr [ebp - 0xc4] */
    eax = 0x2AAAAAABu; /* 0x006620A2: mov eax, 0x2aaaaaab */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC8)); /* 0x006620A7: sub ecx, dword ptr [ebp - 0xc8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x006620AD: add ebx, 0x18 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0xE4)); /* 0x006620B0: mov esi, dword ptr [ebp - 0xe4] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006620B6: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006620B8: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xCC)) = ebx; /* 0x006620B9: mov dword ptr [ebp - 0xcc], ebx */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x006620BF: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x006620C2: mov eax, edx */
    MEM32(ebp + (-0xE4)) = esi; /* 0x006620C4: mov dword ptr [ebp - 0xe4], esi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006620CA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006620CA: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006620CD: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x006620CF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00661E50; /* 0x006620D1: jb 0x661e50 */
L_006620D7:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006620D7: mov byte ptr [ebp - 4], 3 */
    esi = MEM32(ebp + (-0xC8)); /* 0x006620DB: mov esi, dword ptr [ebp - 0xc8] */
    /* test esi, esi */ /* 0x006620E1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066213F; /* 0x006620E3: je 0x66213f */
L_006620E5:
    ebx = MEM32(ebp + (-0xC4)); /* 0x006620E5: mov ebx, dword ptr [ebp - 0xc4] */
    /* cmp esi, ebx */ /* 0x006620EB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066211B; /* 0x006620ED: je 0x66211b */
L_006620EF:
    /* nop */ /* 0x006620EF: nop  */
L_006620F0:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006620F0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006620FD; /* 0x006620F4: jb 0x6620fd */
L_006620F6:
    PUSH32(esp, MEM32(esi)); /* 0x006620F6: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x006620F8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006620FA: add esp, 4 */
    _flag_k = FK_ADD;
L_006620FD:
    MEM32(esi + 0x14) = 0xFu; /* 0x006620FD: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00662104: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066210B: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x0066210E: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x00662111: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006620F0; /* 0x00662113: jne 0x6620f0 */
L_00662115:
    esi = MEM32(ebp + (-0xC8)); /* 0x00662115: mov esi, dword ptr [ebp - 0xc8] */
L_0066211B:
    PUSH32(esp, esi); /* 0x0066211B: push esi */
    RECOMP_ICALL(edi); /* 0x0066211C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066211E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC8)) = 0; /* 0x00662121: mov dword ptr [ebp - 0xc8], 0 */
    MEM32(ebp + (-0xC4)) = 0; /* 0x0066212B: mov dword ptr [ebp - 0xc4], 0 */
    MEM32(ebp + (-0xC0)) = 0; /* 0x00662135: mov dword ptr [ebp - 0xc0], 0 */
L_0066213F:
    esi = MEM32(ebp + (-0xD0)); /* 0x0066213F: mov esi, dword ptr [ebp - 0xd0] */
    /* test esi, esi */ /* 0x00662145: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00661D57; /* 0x00662147: jne 0x661d57 */
L_0066214D:
    SET_LO8(ebx, 1); /* 0x0066214D: mov bl, 1 */
L_0066214F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066214F: mov byte ptr [ebp - 4], 0 */
    eax = ebp + (-0xE0); /* 0x00662153: lea eax, [ebp - 0xe0] */
    MEM32(ebp + (-0xF4)) = eax; /* 0x00662159: mov dword ptr [ebp - 0xf4], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0066215F: mov byte ptr [ebp - 4], 0xf */
    ecx = eax; /* 0x00662163: mov ecx, eax */
    RECOMP_CALL(sub_00663D70); /* 0x00662165: call 0x663d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0066216A: mov byte ptr [ebp - 4], 0x10 */
    PUSH32(esp, MEM32(ebp + (-0xE0))); /* 0x0066216E: push dword ptr [ebp - 0xe0] */
    RECOMP_ICALL(edi); /* 0x00662174: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662176: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xE0)) = 0; /* 0x00662179: mov dword ptr [ebp - 0xe0], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00662183: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0066218A: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662198; /* 0x0066218E: jb 0x662198 */
L_00662190:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00662190: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(edi); /* 0x00662193: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662195: add esp, 4 */
    _flag_k = FK_ADD;
L_00662198:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00662198: mov dword ptr [ebp - 0x18], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x0066219F: mov al, bl */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006621A1: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x006621A8: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006621AC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006621AF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006621B6: pop ecx */
    edi = POP32_VAL(esp); /* 0x006621B7: pop edi */
    esi = POP32_VAL(esp); /* 0x006621B8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006621B9: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x006621BA: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006621BD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006621BF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006621C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006621C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006621C7: ret 4 */
L_006621CA:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006621CA: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + (-0xC8)); /* 0x006621CE: mov eax, dword ptr [ebp - 0xc8] */
    /* test eax, eax */ /* 0x006621D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066220D; /* 0x006621D6: je 0x66220d */
L_006621D8:
    PUSH32(esp, MEM32(ebp + (-0xC4))); /* 0x006621D8: push dword ptr [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x006621DE: push eax */
    RECOMP_CALL(sub_0042A0E0); /* 0x006621DF: call 0x42a0e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC8))); /* 0x006621E4: push dword ptr [ebp - 0xc8] */
    RECOMP_ICALL(edi); /* 0x006621EA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006621EC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC8)) = 0; /* 0x006621EF: mov dword ptr [ebp - 0xc8], 0 */
    MEM32(ebp + (-0xC4)) = 0; /* 0x006621F9: mov dword ptr [ebp - 0xc4], 0 */
    MEM32(ebp + (-0xC0)) = 0; /* 0x00662203: mov dword ptr [ebp - 0xc0], 0 */
L_0066220D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x0066220D: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_0066214F; /* 0x0066220F: jmp 0x66214f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00662220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662220u);

L_00662220:
    PUSH32(esp, ebp); /* 0x00662220: push ebp */
    ebp = esp; /* 0x00662221: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00662223: push -1 */
    PUSH32(esp, 0x007BB9B1u); /* 0x00662225: push 0x7bb9b1 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066222A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00662230: push eax */
    PUSH32(esp, ecx); /* 0x00662231: push ecx */
    PUSH32(esp, esi); /* 0x00662232: push esi */
    eax = MEM32(0x855000); /* 0x00662233: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00662238: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066223A: push eax */
    eax = ebp + (-0xC); /* 0x0066223B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066223E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00662244: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00662246: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00662249: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x00662250: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x00662253: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_00663D70); /* 0x0066225A: call 0x663d70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0066225F: mov dword ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(esi)); /* 0x00662266: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00662268: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066226E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x00662271: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00662277: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066227E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00662281: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00662288: pop ecx */
    esi = POP32_VAL(esp); /* 0x00662289: pop esi */
    esp = ebp; /* 0x0066228A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066228C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066228D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00662290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662290u);

L_00662290:
    PUSH32(esp, ebp); /* 0x00662290: push ebp */
    ebp = esp; /* 0x00662291: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00662293: push -1 */
    PUSH32(esp, 0x007BB9F8u); /* 0x00662295: push 0x7bb9f8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066229A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006622A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006622A1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006622A4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006622A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006622AB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x006622AE: push esi */
    PUSH32(esp, eax); /* 0x006622AF: push eax */
    eax = ebp + (-0xC); /* 0x006622B0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006622B3: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x006622B9: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x006622BC: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006622C6; /* 0x006622C0: jb 0x6622c6 */
L_006622C2:
    ecx = MEM32(esi); /* 0x006622C2: mov ecx, dword ptr [esi] */
    goto L_006622C8; /* 0x006622C4: jmp 0x6622c8 */
L_006622C6:
    ecx = esi; /* 0x006622C6: mov ecx, esi */
L_006622C8:
    PUSH32(esp, ecx); /* 0x006622C8: push ecx */
    RECOMP_CALL(sub_0076DCE0); /* 0x006622C9: call 0x76dce0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006622CE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006622D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0066238A; /* 0x006622D3: jne 0x66238a */
L_006622D9:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x006622D9: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006622DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006622E7; /* 0x006622E1: jne 0x6622e7 */
L_006622E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006622E3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00662301; /* 0x006622E5: jmp 0x662301 */
L_006622E7:
    ecx = MEM32(0x927B00); /* 0x006622E7: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x006622ED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00662301; /* 0x006622EF: jne 0x662301 */
L_006622F1:
    ecx = 0x00927AE8u; /* 0x006622F1: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x006622F6: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x006622FB: mov ecx, dword ptr [0x927b00] */
L_00662301:
    eax = MEM32(ecx); /* 0x00662301: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x00662303: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x00662305: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00662308: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066230B: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0066230D: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00662310: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00662315: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066231A: mov dword ptr [ebp - 4], 0 */
    edx = 0x007FBFA4u; /* 0x00662321: mov edx, 0x7fbfa4 */
    PUSH32(esp, esi); /* 0x00662326: push esi */
    ecx = ebp + (-0x28); /* 0x00662327: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0042A130); /* 0x0066232A: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066232F: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00662333: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00662336: mov ecx, esp */
    MEM32(ebp + (-0x2C)) = esp; /* 0x00662338: mov dword ptr [ebp - 0x2c], esp */
    edx = eax; /* 0x0066233B: mov edx, eax */
    PUSH32(esp, 0x007FBFFCu); /* 0x0066233D: push 0x7fbffc */
    RECOMP_CALL(sub_00419C40); /* 0x00662342: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662347: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066234A: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066234E: mov byte ptr [ebp - 4], 3 */
    ecx = 0x26Cu; /* 0x00662352: mov ecx, 0x26c */
    RECOMP_CALL(sub_00668410); /* 0x00662357: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066235C: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066235F: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00662366: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662378; /* 0x0066236A: jb 0x662378 */
L_0066236C:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0066236C: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066236F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662375: add esp, 4 */
    _flag_k = FK_ADD;
L_00662378:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00662378: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066237F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00662386: mov byte ptr [ebp - 0x28], 0 */
L_0066238A:
    eax = MEM32(ebp + 0xC); /* 0x0066238A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x0066238D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662418; /* 0x0066238F: je 0x662418 */
L_00662395:
    PUSH32(esp, eax); /* 0x00662395: push eax */
    ecx = esi; /* 0x00662396: mov ecx, esi */
    RECOMP_CALL(sub_00662440); /* 0x00662398: call 0x662440 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0066239D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662418; /* 0x0066239F: je 0x662418 */
L_006623A1:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x006623A1: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006623A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006623AF; /* 0x006623A9: jne 0x6623af */
L_006623AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006623AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006623C9; /* 0x006623AD: jmp 0x6623c9 */
L_006623AF:
    ecx = MEM32(0x927B00); /* 0x006623AF: mov ecx, dword ptr [0x927b00] */
    /* test ecx, ecx */ /* 0x006623B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006623C9; /* 0x006623B7: jne 0x6623c9 */
L_006623B9:
    ecx = 0x00927AE8u; /* 0x006623B9: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x006623BE: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B00); /* 0x006623C3: mov ecx, dword ptr [0x927b00] */
L_006623C9:
    eax = MEM32(ecx); /* 0x006623C9: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006623CB: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x006623CD: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006623D0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006623D3: mov ecx, esp */
    MEM32(ebp + (-0x2C)) = esp; /* 0x006623D5: mov dword ptr [ebp - 0x2c], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x006623D8: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x006623DD: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x006623E2: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006623E9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006623EC: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x006623EE: mov dword ptr [ebp - 0x30], esp */
    edx = esi; /* 0x006623F1: mov edx, esi */
    PUSH32(esp, 0x007FC0BCu); /* 0x006623F3: push 0x7fc0bc */
    RECOMP_CALL(sub_0041A0F0); /* 0x006623F8: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006623FD: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00662400: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00662404: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x274u; /* 0x0066240B: mov ecx, 0x274 */
    RECOMP_CALL(sub_00668410); /* 0x00662410: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00662415: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00662418:
    RECOMP_CALL(sub_006B7F70); /* 0x00662418: call 0x6b7f70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0066241D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00662420: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00662427: pop ecx */
    esi = POP32_VAL(esp); /* 0x00662428: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00662429: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066242C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0066242E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00662433: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662435: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00662436: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00662440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662440u);

L_00662440:
    PUSH32(esp, ebp); /* 0x00662440: push ebp */
    ebp = esp; /* 0x00662441: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x00662443: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00662449: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066244E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00662450: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x00662453: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00662457: push ebx */
    PUSH32(esp, esi); /* 0x00662458: push esi */
    PUSH32(esp, edi); /* 0x00662459: push edi */
    MEM32(ebp + (-0x7C)) = 0; /* 0x0066245A: mov dword ptr [ebp - 0x7c], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_00662465; /* 0x00662461: jb 0x662465 */
L_00662463:
    ecx = MEM32(ecx); /* 0x00662463: mov ecx, dword ptr [ecx] */
L_00662465:
    PUSH32(esp, 0x007F24ECu); /* 0x00662465: push 0x7f24ec */
    PUSH32(esp, ecx); /* 0x0066246A: push ecx */
    eax = ebp + (-0x7C); /* 0x0066246B: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x0066246E: push eax */
    RECOMP_ICALL(MEM32(0x7CC518)); /* 0x0066246F: call dword ptr [0x7cc518] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x00662475: mov eax, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00662478: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0066247B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662567; /* 0x0066247D: je 0x662567 */
L_00662483:
    esi = MEM32(0x7CC514); /* 0x00662483: mov esi, dword ptr [0x7cc514] */
    PUSH32(esp, 2); /* 0x00662489: push 2 */
    PUSH32(esp, 0); /* 0x0066248B: push 0 */
    PUSH32(esp, eax); /* 0x0066248D: push eax */
    RECOMP_ICALL(esi); /* 0x0066248E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00662490: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x00662493: push dword ptr [ebp - 0x7c] */
    RECOMP_ICALL(MEM32(0x7CC510)); /* 0x00662496: call dword ptr [0x7cc510] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066249C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0066249F: mov edi, eax */
    PUSH32(esp, 0); /* 0x006624A1: push 0 */
    PUSH32(esp, 0); /* 0x006624A3: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x006624A5: push dword ptr [ebp - 0x7c] */
    RECOMP_ICALL(esi); /* 0x006624A8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006624AA: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006624AD: push edi */
    RECOMP_CALL(sub_0077F3DF); /* 0x006624AE: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006624B3: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x006624B6: mov ebx, eax */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x006624B8: push dword ptr [ebp - 0x7c] */
    PUSH32(esp, edi); /* 0x006624BB: push edi */
    PUSH32(esp, 1); /* 0x006624BC: push 1 */
    PUSH32(esp, ebx); /* 0x006624BE: push ebx */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x006624BF: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006624C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x78)) = 0x67452301u; /* 0x006624C8: mov dword ptr [ebp - 0x78], 0x67452301 */
    ecx = ebp + (-0x78); /* 0x006624CF: lea ecx, [ebp - 0x78] */
    MEM32(ebp + (-0x74)) = 0xEFCDAB89u; /* 0x006624D2: mov dword ptr [ebp - 0x74], 0xefcdab89 */
    MEM32(ebp + (-0x70)) = 0x98BADCFEu; /* 0x006624D9: mov dword ptr [ebp - 0x70], 0x98badcfe */
    MEM32(ebp + (-0x6C)) = 0x10325476u; /* 0x006624E0: mov dword ptr [ebp - 0x6c], 0x10325476 */
    PUSH32(esp, edi); /* 0x006624E7: push edi */
    PUSH32(esp, ebx); /* 0x006624E8: push ebx */
    MEM32(ebp + (-0x68)) = 0xC3D2E1F0u; /* 0x006624E9: mov dword ptr [ebp - 0x68], 0xc3d2e1f0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x006624F0: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x64)) = 0; /* 0x006624F7: mov dword ptr [ebp - 0x64], 0 */
    RECOMP_CALL(sub_00674FB0); /* 0x006624FE: call 0x674fb0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x00662503: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00662506: push eax */
    ecx = ebp + (-0x78); /* 0x00662507: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_00675060); /* 0x0066250A: call 0x675060 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x0066250F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00662512: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00662514:
    edx = (uint32_t)LO8(eax); /* 0x00662514: movzx edx, al */
    SET_LO8(ecx, MEM8(ebp + edx + (-0x18))); /* 0x00662517: mov cl, byte ptr [ebp + edx - 0x18] */
    /* cmp LO8(ecx), MEM8(edx + esi) */ /* 0x0066251B: cmp cl, byte ptr [edx + esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00662551; /* 0x0066251E: jne 0x662551 */
L_00662520:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x00662520: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* cmp LO8(eax), 0x14u */ /* 0x00662522: cmp al, 0x14 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00662514; /* 0x00662524: jb 0x662514 */
L_00662526:
    PUSH32(esp, ebx); /* 0x00662526: push ebx */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00662527: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066252D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x00662530: push dword ptr [ebp - 0x7c] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x00662533: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662539: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0066253C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x0066253E: pop edi */
    esi = POP32_VAL(esp); /* 0x0066253F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00662540: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00662541: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00662544: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00662546: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066254B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066254D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066254E: ret 4 */
L_00662551:
    PUSH32(esp, ebx); /* 0x00662551: push ebx */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00662552: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662558: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x0066255B: push dword ptr [ebp - 0x7c] */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0066255E: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662564: add esp, 4 */
    _flag_k = FK_ADD;
L_00662567:
    ecx = MEM32(ebp + (-0x4)); /* 0x00662567: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0066256A: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0066256C: pop edi */
    esi = POP32_VAL(esp); /* 0x0066256D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0066256E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00662570: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00662571: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00662576: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662578: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00662579: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00662580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662580u);

L_00662580:
    PUSH32(esp, ebp); /* 0x00662580: push ebp */
    ebp = esp; /* 0x00662581: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00662583: push -1 */
    PUSH32(esp, 0x007BBB38u); /* 0x00662585: push 0x7bbb38 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066258A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00662590: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x168u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x168u; /* 0x00662591: sub esp, 0x168 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00662597: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066259C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0066259E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x006625A1: push ebx */
    PUSH32(esp, esi); /* 0x006625A2: push esi */
    PUSH32(esp, edi); /* 0x006625A3: push edi */
    PUSH32(esp, eax); /* 0x006625A4: push eax */
    eax = ebp + (-0xC); /* 0x006625A5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006625A8: mov dword ptr fs:[0], eax */
    edx = MEM32(ebp + 0x8); /* 0x006625AE: mov edx, dword ptr [ebp + 8] */
    ecx = ebp + (-0x174); /* 0x006625B1: lea ecx, [ebp - 0x174] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006625B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x006625B9: mov dword ptr [ebp - 0x154], ebx */
    RECOMP_CALL(sub_006636D0); /* 0x006625BF: call 0x6636d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x006625C4: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006625C7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + (-0x174)); /* 0x006625C9: mov edi, dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006625CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x7CC694); /* 0x006625D1: mov esi, dword ptr [0x7cc694] */
    MEM8(ebp + (-0x14D)) = (uint8_t)(LO8(eax)); /* 0x006625D7: mov byte ptr [ebp - 0x14d], al */
    eax = 0x2AAAAAABu; /* 0x006625DD: mov eax, 0x2aaaaaab */
    MEM32(ebp + (-0x164)) = ecx; /* 0x006625E2: mov dword ptr [ebp - 0x164], ecx */
    ecx = MEM32(ebp + (-0x170)); /* 0x006625E8: mov ecx, dword ptr [ebp - 0x170] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x006625EE: sub ecx, edi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006625F0: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x006625F2: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x006625F5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006625F7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006625F7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006625FA: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00662CF9; /* 0x006625FC: je 0x662cf9 */
L_00662602:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00662602: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x168)) = eax; /* 0x00662604: mov dword ptr [ebp - 0x168], eax */
    ebx = ebx; /* 0x0066260A: lea ebx, [ebx] */
L_00662610:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00662610: push -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x00662612: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x00662614: mov dword ptr [ebp - 0x1c], 0 */
    PUSH32(esp, 0); /* 0x0066261B: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066261D: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x2C); /* 0x00662624: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00662627: push eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00662628: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066262F: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00662636: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0066263A: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0066263F: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x2C); /* 0x00662643: lea ecx, [ebp - 0x2c] */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00662646: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x2C)); } /* 0x0066264A: cmovae ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_0076E380); /* 0x0066264E: call 0x76e380 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00662653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00662C97; /* 0x00662655: jne 0x662c97 */
L_0066265B:
    PUSH32(esp, 0x11u); /* 0x0066265B: push 0x11 */
    MEM32(ebp + (-0x4C)) = eax; /* 0x0066265D: mov dword ptr [ebp - 0x4c], eax */
    ecx = ebp + (-0x5C); /* 0x00662660: lea ecx, [ebp - 0x5c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x00662663: mov dword ptr [ebp - 0x48], eax */
    PUSH32(esp, 0x007FC0A8u); /* 0x00662666: push 0x7fc0a8 */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x0066266B: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = eax; /* 0x00662672: mov dword ptr [ebp - 0x4c], eax */
    MEM8(ebp + (-0x5C)) = (uint8_t)(LO8(eax)); /* 0x00662675: mov byte ptr [ebp - 0x5c], al */
    RECOMP_CALL(sub_0040A2F0); /* 0x00662678: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066267D: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x44); /* 0x00662681: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0xDu); /* 0x00662684: push 0xd */
    MEM32(ebp + (-0x34)) = 0; /* 0x00662686: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0066268D: mov dword ptr [ebp - 0x30], 0 */
    PUSH32(esp, 0x007FC0F0u); /* 0x00662694: push 0x7fc0f0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00662699: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x006626A0: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x006626A7: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006626AB: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006626B0: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x74); /* 0x006626B4: lea ecx, [ebp - 0x74] */
    PUSH32(esp, 0x11u); /* 0x006626B7: push 0x11 */
    MEM32(ebp + (-0x64)) = 0; /* 0x006626B9: mov dword ptr [ebp - 0x64], 0 */
    MEM32(ebp + (-0x60)) = 0; /* 0x006626C0: mov dword ptr [ebp - 0x60], 0 */
    PUSH32(esp, 0x007FC100u); /* 0x006626C7: push 0x7fc100 */
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x006626CC: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x006626D3: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x006626DA: mov byte ptr [ebp - 0x74], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006626DE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006626E3: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0x8C); /* 0x006626E7: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, 0xEu); /* 0x006626ED: push 0xe */
    MEM32(ebp + (-0x7C)) = 0; /* 0x006626EF: mov dword ptr [ebp - 0x7c], 0 */
    MEM32(ebp + (-0x78)) = 0; /* 0x006626F6: mov dword ptr [ebp - 0x78], 0 */
    PUSH32(esp, 0x007FC0CCu); /* 0x006626FD: push 0x7fc0cc */
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x00662702: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x00662709: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x00662710: mov byte ptr [ebp - 0x8c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00662717: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0066271C: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + (-0xA4); /* 0x00662720: lea ecx, [ebp - 0xa4] */
    PUSH32(esp, 0x10u); /* 0x00662726: push 0x10 */
    MEM32(ebp + (-0x94)) = 0; /* 0x00662728: mov dword ptr [ebp - 0x94], 0 */
    MEM32(ebp + (-0x90)) = 0; /* 0x00662732: mov dword ptr [ebp - 0x90], 0 */
    PUSH32(esp, 0x007FC0DCu); /* 0x0066273C: push 0x7fc0dc */
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x00662741: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x0066274B: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x00662755: mov byte ptr [ebp - 0xa4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066275C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00662761: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + (-0xBC); /* 0x00662765: lea ecx, [ebp - 0xbc] */
    PUSH32(esp, 0xFu); /* 0x0066276B: push 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x0066276D: mov dword ptr [ebp - 0xac], 0 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x00662777: mov dword ptr [ebp - 0xa8], 0 */
    PUSH32(esp, 0x007FC04Cu); /* 0x00662781: push 0x7fc04c */
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x00662786: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x00662790: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x0066279A: mov byte ptr [ebp - 0xbc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006627A1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006627A6: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x11C); /* 0x006627AA: lea eax, [ebp - 0x11c] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x006627B0: push dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x2C); /* 0x006627B3: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x006627B6: push 0 */
    PUSH32(esp, eax); /* 0x006627B8: push eax */
    RECOMP_CALL(sub_0045F3F0); /* 0x006627B9: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x15C)) = eax; /* 0x006627BE: mov dword ptr [ebp - 0x15c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006627C4: mov byte ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x006627C8: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x006627CB: mov dword ptr [ebp - 0x154], ebx */
    edx = ebp + (-0x5C); /* 0x006627D1: lea edx, [ebp - 0x5c] */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x006627D4: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x10); /* 0x006627D8: mov ecx, dword ptr [eax + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x5C)); } /* 0x006627DB: cmovae edx, dword ptr [ebp - 0x5c] */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x006627DF: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x160)) = ecx; /* 0x006627E3: mov dword ptr [ebp - 0x160], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_006627F3; /* 0x006627E9: jb 0x6627f3 */
L_006627EB:
    eax = MEM32(eax); /* 0x006627EB: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x15C)) = eax; /* 0x006627ED: mov dword ptr [ebp - 0x15c], eax */
L_006627F3:
    edi = MEM32(ebp + (-0x4C)); /* 0x006627F3: mov edi, dword ptr [ebp - 0x4c] */
    /* cmp ecx, edi */ /* 0x006627F6: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x006627F8: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = ecx; } /* 0x006627FA: cmovb eax, ecx */
    ecx = MEM32(ebp + (-0x15C)); /* 0x006627FD: mov ecx, dword ptr [ebp - 0x15c] */
    PUSH32(esp, eax); /* 0x00662803: push eax */
    RECOMP_CALL(sub_00424360); /* 0x00662804: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662809: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0066280C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00662828; /* 0x0066280E: jne 0x662828 */
L_00662810:
    ecx = MEM32(ebp + (-0x160)); /* 0x00662810: mov ecx, dword ptr [ebp - 0x160] */
    /* cmp ecx, edi */ /* 0x00662816: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066281F; /* 0x00662818: jae 0x66281f */
L_0066281A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0066281A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00662826; /* 0x0066281D: jmp 0x662826 */
L_0066281F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066281F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x00662821: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00662823: setne al */
L_00662826:
    /* test eax, eax */ /* 0x00662826: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_00662828:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x00662828: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066282B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006629EF; /* 0x0066282D: jne 0x6629ef */
L_00662833:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x00662833: push dword ptr [ebp - 0x34] */
    eax = ebp + (-0x134); /* 0x00662836: lea eax, [ebp - 0x134] */
    PUSH32(esp, 0); /* 0x0066283C: push 0 */
    PUSH32(esp, eax); /* 0x0066283E: push eax */
    ecx = ebp + (-0x2C); /* 0x0066283F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F3F0); /* 0x00662842: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00662847: mov ecx, eax */
    MEM32(ebp + (-0x4)) = 9; /* 0x00662849: mov dword ptr [ebp - 4], 9 */
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x00662850: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662853: mov dword ptr [ebp - 0x154], ebx */
    eax = ebp + (-0x44); /* 0x00662859: lea eax, [ebp - 0x44] */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x0066285C: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ecx + 0x10); /* 0x00662860: mov edx, dword ptr [ecx + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x44)); } /* 0x00662863: cmovae eax, dword ptr [ebp - 0x44] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x00662867: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x160)) = eax; /* 0x0066286B: mov dword ptr [ebp - 0x160], eax */
    MEM32(ebp + (-0x15C)) = edx; /* 0x00662871: mov dword ptr [ebp - 0x15c], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066287B; /* 0x00662877: jb 0x66287b */
L_00662879:
    ecx = MEM32(ecx); /* 0x00662879: mov ecx, dword ptr [ecx] */
L_0066287B:
    edi = MEM32(ebp + (-0x34)); /* 0x0066287B: mov edi, dword ptr [ebp - 0x34] */
    /* cmp edx, edi */ /* 0x0066287E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x00662880: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = edx; } /* 0x00662882: cmovb eax, edx */
    edx = MEM32(ebp + (-0x160)); /* 0x00662885: mov edx, dword ptr [ebp - 0x160] */
    PUSH32(esp, eax); /* 0x0066288B: push eax */
    RECOMP_CALL(sub_00424360); /* 0x0066288C: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662891: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00662894: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006628B0; /* 0x00662896: jne 0x6628b0 */
L_00662898:
    ecx = MEM32(ebp + (-0x15C)); /* 0x00662898: mov ecx, dword ptr [ebp - 0x15c] */
    /* cmp ecx, edi */ /* 0x0066289E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006628A7; /* 0x006628A0: jae 0x6628a7 */
L_006628A2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006628A2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006628AE; /* 0x006628A5: jmp 0x6628ae */
L_006628A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006628A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x006628A9: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006628AB: setne al */
L_006628AE:
    /* test eax, eax */ /* 0x006628AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_006628B0:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x006628B0: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x006628B3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006629EF; /* 0x006628B5: jne 0x6629ef */
L_006628BB:
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x006628BB: push dword ptr [ebp - 0x64] */
    eax = ebp + (-0x14C); /* 0x006628BE: lea eax, [ebp - 0x14c] */
    PUSH32(esp, 0); /* 0x006628C4: push 0 */
    PUSH32(esp, eax); /* 0x006628C6: push eax */
    ecx = ebp + (-0x2C); /* 0x006628C7: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F3F0); /* 0x006628CA: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006628CF: mov ecx, eax */
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x006628D1: mov dword ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x006628D8: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x006628DB: mov dword ptr [ebp - 0x154], ebx */
    eax = ebp + (-0x74); /* 0x006628E1: lea eax, [ebp - 0x74] */
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x006628E4: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ecx + 0x10); /* 0x006628E8: mov edx, dword ptr [ecx + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x74)); } /* 0x006628EB: cmovae eax, dword ptr [ebp - 0x74] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x006628EF: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x160)) = eax; /* 0x006628F3: mov dword ptr [ebp - 0x160], eax */
    MEM32(ebp + (-0x15C)) = edx; /* 0x006628F9: mov dword ptr [ebp - 0x15c], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_00662903; /* 0x006628FF: jb 0x662903 */
L_00662901:
    ecx = MEM32(ecx); /* 0x00662901: mov ecx, dword ptr [ecx] */
L_00662903:
    edi = MEM32(ebp + (-0x64)); /* 0x00662903: mov edi, dword ptr [ebp - 0x64] */
    /* cmp edx, edi */ /* 0x00662906: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x00662908: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = edx; } /* 0x0066290A: cmovb eax, edx */
    edx = MEM32(ebp + (-0x160)); /* 0x0066290D: mov edx, dword ptr [ebp - 0x160] */
    PUSH32(esp, eax); /* 0x00662913: push eax */
    RECOMP_CALL(sub_00424360); /* 0x00662914: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662919: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0066291C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00662938; /* 0x0066291E: jne 0x662938 */
L_00662920:
    ecx = MEM32(ebp + (-0x15C)); /* 0x00662920: mov ecx, dword ptr [ebp - 0x15c] */
    /* cmp ecx, edi */ /* 0x00662926: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066292F; /* 0x00662928: jae 0x66292f */
L_0066292A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0066292A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00662936; /* 0x0066292D: jmp 0x662936 */
L_0066292F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066292F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x00662931: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00662933: setne al */
L_00662936:
    /* test eax, eax */ /* 0x00662936: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_00662938:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x00662938: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x0066293B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006629EF; /* 0x0066293D: jne 0x6629ef */
L_00662943:
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x00662943: push dword ptr [ebp - 0x7c] */
    eax = ebp + (-0x104); /* 0x00662946: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0); /* 0x0066294C: push 0 */
    PUSH32(esp, eax); /* 0x0066294E: push eax */
    ecx = ebp + (-0x2C); /* 0x0066294F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F3F0); /* 0x00662952: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x00662957: mov dword ptr [ebp - 4], 0xb */
    _flag_a = (uint32_t)((ebx | 8)); _flag_b = (uint32_t)((ebx | 8));
    ebx = ebx | 8; /* 0x0066295E: or ebx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x8C); /* 0x00662961: lea edx, [ebp - 0x8c] */
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662967: mov dword ptr [ebp - 0x154], ebx */
    ecx = eax; /* 0x0066296D: mov ecx, eax */
    RECOMP_CALL(sub_0042A240); /* 0x0066296F: call 0x42a240 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00662974: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006629EF; /* 0x00662976: jne 0x6629ef */
L_00662978:
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x00662978: push dword ptr [ebp - 0x94] */
    eax = ebp + (-0xEC); /* 0x0066297E: lea eax, [ebp - 0xec] */
    PUSH32(esp, 0); /* 0x00662984: push 0 */
    PUSH32(esp, eax); /* 0x00662986: push eax */
    ecx = ebp + (-0x2C); /* 0x00662987: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F3F0); /* 0x0066298A: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xCu; /* 0x0066298F: mov dword ptr [ebp - 4], 0xc */
    _flag_a = (uint32_t)((ebx | 0x10u)); _flag_b = (uint32_t)((ebx | 0x10u));
    ebx = ebx | 0x10u; /* 0x00662996: or ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0xA4); /* 0x00662999: lea edx, [ebp - 0xa4] */
    MEM32(ebp + (-0x154)) = ebx; /* 0x0066299F: mov dword ptr [ebp - 0x154], ebx */
    ecx = eax; /* 0x006629A5: mov ecx, eax */
    RECOMP_CALL(sub_0042A240); /* 0x006629A7: call 0x42a240 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006629AC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006629EF; /* 0x006629AE: jne 0x6629ef */
L_006629B0:
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x006629B0: push dword ptr [ebp - 0xac] */
    eax = ebp + (-0xD4); /* 0x006629B6: lea eax, [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x006629BC: push 0 */
    PUSH32(esp, eax); /* 0x006629BE: push eax */
    ecx = ebp + (-0x2C); /* 0x006629BF: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F3F0); /* 0x006629C2: call 0x45f3f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xDu; /* 0x006629C7: mov dword ptr [ebp - 4], 0xd */
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x006629CE: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0xBC); /* 0x006629D1: lea edx, [ebp - 0xbc] */
    MEM32(ebp + (-0x154)) = ebx; /* 0x006629D7: mov dword ptr [ebp - 0x154], ebx */
    ecx = eax; /* 0x006629DD: mov ecx, eax */
    RECOMP_CALL(sub_0042A240); /* 0x006629DF: call 0x42a240 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x155)) = (uint8_t)(0); /* 0x006629E4: mov byte ptr [ebp - 0x155], 0 */
    /* test LO8(eax), LO8(eax) */ /* 0x006629EB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006629F6; /* 0x006629ED: je 0x6629f6 */
L_006629EF:
    MEM8(ebp + (-0x155)) = (uint8_t)(1); /* 0x006629EF: mov byte ptr [ebp - 0x155], 1 */
L_006629F6:
    MEM32(ebp + (-0x4)) = 0xCu; /* 0x006629F6: mov dword ptr [ebp - 4], 0xc */
    /* test LO8(ebx), 0x20u */ /* 0x006629FD: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662A3A; /* 0x00662A00: je 0x662a3a */
L_00662A02:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFDFu);
    ebx = ebx & 0xFFFFFFDFu; /* 0x00662A02: and ebx, 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662A05: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0xC0)), 0x10u */ /* 0x00662A0B: cmp dword ptr [ebp - 0xc0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662A1F; /* 0x00662A12: jb 0x662a1f */
L_00662A14:
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x00662A14: push dword ptr [ebp - 0xd4] */
    RECOMP_ICALL(esi); /* 0x00662A1A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662A1C: add esp, 4 */
    _flag_k = FK_ADD;
L_00662A1F:
    MEM32(ebp + (-0xC0)) = 0xFu; /* 0x00662A1F: mov dword ptr [ebp - 0xc0], 0xf */
    MEM32(ebp + (-0xC4)) = 0; /* 0x00662A29: mov dword ptr [ebp - 0xc4], 0 */
    MEM8(ebp + (-0xD4)) = (uint8_t)(0); /* 0x00662A33: mov byte ptr [ebp - 0xd4], 0 */
L_00662A3A:
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x00662A3A: mov dword ptr [ebp - 4], 0xb */
    /* test LO8(ebx), 0x10u */ /* 0x00662A41: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662A7E; /* 0x00662A44: je 0x662a7e */
L_00662A46:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFEFu);
    ebx = ebx & 0xFFFFFFEFu; /* 0x00662A46: and ebx, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662A49: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0xD8)), 0x10u */ /* 0x00662A4F: cmp dword ptr [ebp - 0xd8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662A63; /* 0x00662A56: jb 0x662a63 */
L_00662A58:
    PUSH32(esp, MEM32(ebp + (-0xEC))); /* 0x00662A58: push dword ptr [ebp - 0xec] */
    RECOMP_ICALL(esi); /* 0x00662A5E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662A60: add esp, 4 */
    _flag_k = FK_ADD;
L_00662A63:
    MEM32(ebp + (-0xD8)) = 0xFu; /* 0x00662A63: mov dword ptr [ebp - 0xd8], 0xf */
    MEM32(ebp + (-0xDC)) = 0; /* 0x00662A6D: mov dword ptr [ebp - 0xdc], 0 */
    MEM8(ebp + (-0xEC)) = (uint8_t)(0); /* 0x00662A77: mov byte ptr [ebp - 0xec], 0 */
L_00662A7E:
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x00662A7E: mov dword ptr [ebp - 4], 0xa */
    /* test LO8(ebx), 8 */ /* 0x00662A85: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662AC2; /* 0x00662A88: je 0x662ac2 */
L_00662A8A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ebx = ebx & 0xFFFFFFF7u; /* 0x00662A8A: and ebx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662A8D: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0xF0)), 0x10u */ /* 0x00662A93: cmp dword ptr [ebp - 0xf0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662AA7; /* 0x00662A9A: jb 0x662aa7 */
L_00662A9C:
    PUSH32(esp, MEM32(ebp + (-0x104))); /* 0x00662A9C: push dword ptr [ebp - 0x104] */
    RECOMP_ICALL(esi); /* 0x00662AA2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662AA4: add esp, 4 */
    _flag_k = FK_ADD;
L_00662AA7:
    MEM32(ebp + (-0xF0)) = 0xFu; /* 0x00662AA7: mov dword ptr [ebp - 0xf0], 0xf */
    MEM32(ebp + (-0xF4)) = 0; /* 0x00662AB1: mov dword ptr [ebp - 0xf4], 0 */
    MEM8(ebp + (-0x104)) = (uint8_t)(0); /* 0x00662ABB: mov byte ptr [ebp - 0x104], 0 */
L_00662AC2:
    MEM32(ebp + (-0x4)) = 9; /* 0x00662AC2: mov dword ptr [ebp - 4], 9 */
    /* test LO8(ebx), 4 */ /* 0x00662AC9: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662B06; /* 0x00662ACC: je 0x662b06 */
L_00662ACE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ebx = ebx & 0xFFFFFFFBu; /* 0x00662ACE: and ebx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662AD1: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0x138)), 0x10u */ /* 0x00662AD7: cmp dword ptr [ebp - 0x138], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x138))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662AEB; /* 0x00662ADE: jb 0x662aeb */
L_00662AE0:
    PUSH32(esp, MEM32(ebp + (-0x14C))); /* 0x00662AE0: push dword ptr [ebp - 0x14c] */
    RECOMP_ICALL(esi); /* 0x00662AE6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662AE8: add esp, 4 */
    _flag_k = FK_ADD;
L_00662AEB:
    MEM32(ebp + (-0x138)) = 0xFu; /* 0x00662AEB: mov dword ptr [ebp - 0x138], 0xf */
    MEM32(ebp + (-0x13C)) = 0; /* 0x00662AF5: mov dword ptr [ebp - 0x13c], 0 */
    MEM8(ebp + (-0x14C)) = (uint8_t)(0); /* 0x00662AFF: mov byte ptr [ebp - 0x14c], 0 */
L_00662B06:
    MEM32(ebp + (-0x4)) = 8; /* 0x00662B06: mov dword ptr [ebp - 4], 8 */
    /* test LO8(ebx), 2 */ /* 0x00662B0D: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662B4A; /* 0x00662B10: je 0x662b4a */
L_00662B12:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x00662B12: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662B15: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0x120)), 0x10u */ /* 0x00662B1B: cmp dword ptr [ebp - 0x120], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662B2F; /* 0x00662B22: jb 0x662b2f */
L_00662B24:
    PUSH32(esp, MEM32(ebp + (-0x134))); /* 0x00662B24: push dword ptr [ebp - 0x134] */
    RECOMP_ICALL(esi); /* 0x00662B2A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662B2C: add esp, 4 */
    _flag_k = FK_ADD;
L_00662B2F:
    MEM32(ebp + (-0x120)) = 0xFu; /* 0x00662B2F: mov dword ptr [ebp - 0x120], 0xf */
    MEM32(ebp + (-0x124)) = 0; /* 0x00662B39: mov dword ptr [ebp - 0x124], 0 */
    MEM8(ebp + (-0x134)) = (uint8_t)(0); /* 0x00662B43: mov byte ptr [ebp - 0x134], 0 */
L_00662B4A:
    MEM32(ebp + (-0x4)) = 7; /* 0x00662B4A: mov dword ptr [ebp - 4], 7 */
    /* test LO8(ebx), 1 */ /* 0x00662B51: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662B8E; /* 0x00662B54: je 0x662b8e */
L_00662B56:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x00662B56: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x154)) = ebx; /* 0x00662B59: mov dword ptr [ebp - 0x154], ebx */
    /* cmp MEM32(ebp + (-0x108)), 0x10u */ /* 0x00662B5F: cmp dword ptr [ebp - 0x108], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662B73; /* 0x00662B66: jb 0x662b73 */
L_00662B68:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x00662B68: push dword ptr [ebp - 0x11c] */
    RECOMP_ICALL(esi); /* 0x00662B6E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662B70: add esp, 4 */
    _flag_k = FK_ADD;
L_00662B73:
    MEM32(ebp + (-0x108)) = 0xFu; /* 0x00662B73: mov dword ptr [ebp - 0x108], 0xf */
    MEM32(ebp + (-0x10C)) = 0; /* 0x00662B7D: mov dword ptr [ebp - 0x10c], 0 */
    MEM8(ebp + (-0x11C)) = (uint8_t)(0); /* 0x00662B87: mov byte ptr [ebp - 0x11c], 0 */
L_00662B8E:
    /* cmp MEM8(ebp + (-0x155)), 0 */ /* 0x00662B8E: cmp byte ptr [ebp - 0x155], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x155))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00662D7A; /* 0x00662B95: jne 0x662d7a */
L_00662B9B:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00662B9B: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0xA8)), 0x10u */ /* 0x00662B9F: cmp dword ptr [ebp - 0xa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662BB3; /* 0x00662BA6: jb 0x662bb3 */
L_00662BA8:
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x00662BA8: push dword ptr [ebp - 0xbc] */
    RECOMP_ICALL(esi); /* 0x00662BAE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662BB0: add esp, 4 */
    _flag_k = FK_ADD;
L_00662BB3:
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x00662BB3: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x00662BBD: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x00662BC7: mov byte ptr [ebp - 0xbc], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00662BCE: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x90)), 0x10u */ /* 0x00662BD2: cmp dword ptr [ebp - 0x90], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662BE6; /* 0x00662BD9: jb 0x662be6 */
L_00662BDB:
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x00662BDB: push dword ptr [ebp - 0xa4] */
    RECOMP_ICALL(esi); /* 0x00662BE1: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662BE3: add esp, 4 */
    _flag_k = FK_ADD;
L_00662BE6:
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x00662BE6: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x00662BF0: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x00662BFA: mov byte ptr [ebp - 0xa4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00662C01: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x78)), 0x10u */ /* 0x00662C05: cmp dword ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662C16; /* 0x00662C09: jb 0x662c16 */
L_00662C0B:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x00662C0B: push dword ptr [ebp - 0x8c] */
    RECOMP_ICALL(esi); /* 0x00662C11: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662C13: add esp, 4 */
    _flag_k = FK_ADD;
L_00662C16:
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x00662C16: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x00662C1D: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x00662C24: mov byte ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00662C2B: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x00662C2F: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662C3D; /* 0x00662C33: jb 0x662c3d */
L_00662C35:
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x00662C35: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(esi); /* 0x00662C38: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662C3A: add esp, 4 */
    _flag_k = FK_ADD;
L_00662C3D:
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x00662C3D: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x00662C44: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x00662C4B: mov byte ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00662C4F: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00662C53: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662C61; /* 0x00662C57: jb 0x662c61 */
L_00662C59:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00662C59: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x00662C5C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662C5E: add esp, 4 */
    _flag_k = FK_ADD;
L_00662C61:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00662C61: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00662C68: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00662C6F: mov byte ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00662C73: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x00662C77: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662C85; /* 0x00662C7B: jb 0x662c85 */
L_00662C7D:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x00662C7D: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(esi); /* 0x00662C80: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662C82: add esp, 4 */
    _flag_k = FK_ADD;
L_00662C85:
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x00662C85: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x00662C8C: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x00662C93: mov byte ptr [ebp - 0x5c], 0 */
L_00662C97:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00662C97: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00662C9B: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662CA9; /* 0x00662C9F: jb 0x662ca9 */
L_00662CA1:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00662CA1: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x00662CA4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662CA6: add esp, 4 */
    _flag_k = FK_ADD;
L_00662CA9:
    ecx = MEM32(ebp + (-0x170)); /* 0x00662CA9: mov ecx, dword ptr [ebp - 0x170] */
    eax = 0x2AAAAAABu; /* 0x00662CAF: mov eax, 0x2aaaaaab */
    edi = MEM32(ebp + (-0x174)); /* 0x00662CB4: mov edi, dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x00662CBA: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x164))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x164)) = MEM32(ebp + (-0x164)) + 1; /* 0x00662CBC: inc dword ptr [ebp - 0x164] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x168))); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x168)) = MEM32(ebp + (-0x168)) + 0x18u; /* 0x00662CC2: add dword ptr [ebp - 0x168], 0x18 */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00662CC9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00662CCB: mov byte ptr [ebp - 0x2c], 0 */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00662CCF: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x00662CD2: mov eax, edx */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00662CD4: mov dword ptr [ebp - 0x1c], 0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00662CDB: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00662CDB: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00662CDE: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00662CE0: mov dword ptr [ebp - 0x18], 0xf */
    /* cmp MEM32(ebp + (-0x164)), eax */ /* 0x00662CE7: cmp dword ptr [ebp - 0x164], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x164))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x168)); /* 0x00662CED: mov eax, dword ptr [ebp - 0x168] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00662610; /* 0x00662CF3: jb 0x662610 */
L_00662CF9:
    SET_LO8(ebx, MEM8(ebp + (-0x14D))); /* 0x00662CF9: mov bl, byte ptr [ebp - 0x14d] */
L_00662CFF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00662CFF: mov dword ptr [ebp - 4], 0xffffffff */
    edi = MEM32(ebp + (-0x174)); /* 0x00662D06: mov edi, dword ptr [ebp - 0x174] */
    /* test edi, edi */ /* 0x00662D0C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662EA7; /* 0x00662D0E: je 0x662ea7 */
L_00662D14:
    ebx = MEM32(ebp + (-0x170)); /* 0x00662D14: mov ebx, dword ptr [ebp - 0x170] */
    /* cmp edi, ebx */ /* 0x00662D1A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00662D4B; /* 0x00662D1C: je 0x662d4b */
L_00662D1E:
    edi = edi; /* 0x00662D1E: mov edi, edi */
L_00662D20:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x00662D20: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662D2D; /* 0x00662D24: jb 0x662d2d */
L_00662D26:
    PUSH32(esp, MEM32(edi)); /* 0x00662D26: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x00662D28: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662D2A: add esp, 4 */
    _flag_k = FK_ADD;
L_00662D2D:
    MEM32(edi + 0x14) = 0xFu; /* 0x00662D2D: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x00662D34: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x00662D3B: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x00662D3E: add edi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x00662D41: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00662D20; /* 0x00662D43: jne 0x662d20 */
L_00662D45:
    edi = MEM32(ebp + (-0x174)); /* 0x00662D45: mov edi, dword ptr [ebp - 0x174] */
L_00662D4B:
    PUSH32(esp, edi); /* 0x00662D4B: push edi */
    RECOMP_ICALL(esi); /* 0x00662D4C: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0x14D))); /* 0x00662D4E: mov al, byte ptr [ebp - 0x14d] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662D54: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x174)) = 0; /* 0x00662D57: mov dword ptr [ebp - 0x174], 0 */
    MEM32(ebp + (-0x170)) = 0; /* 0x00662D61: mov dword ptr [ebp - 0x170], 0 */
    MEM32(ebp + (-0x16C)) = 0; /* 0x00662D6B: mov dword ptr [ebp - 0x16c], 0 */
    goto L_00662EA9; /* 0x00662D75: jmp 0x662ea9 */
L_00662D7A:
    SET_LO8(ebx, 1); /* 0x00662D7A: mov bl, 1 */
    MEM8(ebp + (-0x14D)) = (uint8_t)(LO8(ebx)); /* 0x00662D7C: mov byte ptr [ebp - 0x14d], bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00662D82: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0xA8)), 0x10u */ /* 0x00662D86: cmp dword ptr [ebp - 0xa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662D9A; /* 0x00662D8D: jb 0x662d9a */
L_00662D8F:
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x00662D8F: push dword ptr [ebp - 0xbc] */
    RECOMP_ICALL(esi); /* 0x00662D95: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662D97: add esp, 4 */
    _flag_k = FK_ADD;
L_00662D9A:
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x00662D9A: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x00662DA4: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x00662DAE: mov byte ptr [ebp - 0xbc], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00662DB5: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x90)), 0x10u */ /* 0x00662DB9: cmp dword ptr [ebp - 0x90], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662DCD; /* 0x00662DC0: jb 0x662dcd */
L_00662DC2:
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x00662DC2: push dword ptr [ebp - 0xa4] */
    RECOMP_ICALL(esi); /* 0x00662DC8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662DCA: add esp, 4 */
    _flag_k = FK_ADD;
L_00662DCD:
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x00662DCD: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x00662DD7: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x00662DE1: mov byte ptr [ebp - 0xa4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00662DE8: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x78)), 0x10u */ /* 0x00662DEC: cmp dword ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662DFD; /* 0x00662DF0: jb 0x662dfd */
L_00662DF2:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x00662DF2: push dword ptr [ebp - 0x8c] */
    RECOMP_ICALL(esi); /* 0x00662DF8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662DFA: add esp, 4 */
    _flag_k = FK_ADD;
L_00662DFD:
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x00662DFD: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x00662E04: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x00662E0B: mov byte ptr [ebp - 0x8c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00662E12: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x00662E16: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662E24; /* 0x00662E1A: jb 0x662e24 */
L_00662E1C:
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x00662E1C: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(esi); /* 0x00662E1F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662E21: add esp, 4 */
    _flag_k = FK_ADD;
L_00662E24:
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x00662E24: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x00662E2B: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x00662E32: mov byte ptr [ebp - 0x74], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00662E36: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00662E3A: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662E48; /* 0x00662E3E: jb 0x662e48 */
L_00662E40:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00662E40: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x00662E43: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662E45: add esp, 4 */
    _flag_k = FK_ADD;
L_00662E48:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00662E48: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00662E4F: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00662E56: mov byte ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00662E5A: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x00662E5E: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662E6C; /* 0x00662E62: jb 0x662e6c */
L_00662E64:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x00662E64: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(esi); /* 0x00662E67: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662E69: add esp, 4 */
    _flag_k = FK_ADD;
L_00662E6C:
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x00662E6C: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x00662E73: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x00662E7A: mov byte ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00662E7E: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00662E82: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662E90; /* 0x00662E86: jb 0x662e90 */
L_00662E88:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00662E88: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x00662E8B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00662E8D: add esp, 4 */
    _flag_k = FK_ADD;
L_00662E90:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00662E90: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00662E97: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00662E9E: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_BACKEDGE();
    goto L_00662CFF; /* 0x00662EA2: jmp 0x662cff */
L_00662EA7:
    SET_LO8(eax, LO8(ebx)); /* 0x00662EA7: mov al, bl */
L_00662EA9:
    ecx = MEM32(ebp + (-0xC)); /* 0x00662EA9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00662EAC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00662EB3: pop ecx */
    edi = POP32_VAL(esp); /* 0x00662EB4: pop edi */
    esi = POP32_VAL(esp); /* 0x00662EB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x00662EB6: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x00662EB7: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00662EBA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00662EBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00662EC1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662EC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00662EC4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00662ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662ED0u);

L_00662ED0:
    PUSH32(esp, ebp); /* 0x00662ED0: push ebp */
    ebp = esp; /* 0x00662ED1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00662ED3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00662ED6: push ebx */
    eax = edx; /* 0x00662ED7: mov eax, edx */
    ebx = ecx; /* 0x00662ED9: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x00662EDB: mov dword ptr [ebp - 0xc], eax */
    ecx = MEM32(ebx + 0x10); /* 0x00662EDE: mov ecx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x00662EE1: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(eax + 0x10), ecx */ /* 0x00662EE4: cmp dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00662EF0; /* 0x00662EE7: je 0x662ef0 */
L_00662EE9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00662EE9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x00662EEB: pop ebx */
    esp = ebp; /* 0x00662EEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662EEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00662EEF: ret  */
L_00662EF0:
    PUSH32(esp, esi); /* 0x00662EF0: push esi */
    PUSH32(esp, edi); /* 0x00662EF1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00662EF2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x00662EF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00662F3B; /* 0x00662EF6: je 0x662f3b */
L_00662EF8:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x00662EF8: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662F05; /* 0x00662EFC: jb 0x662f05 */
L_00662EFE:
    ecx = MEM32(ebx); /* 0x00662EFE: mov ecx, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x00662F00: mov dword ptr [ebp - 4], ecx */
    goto L_00662F08; /* 0x00662F03: jmp 0x662f08 */
L_00662F05:
    MEM32(ebp + (-0x4)) = ebx; /* 0x00662F05: mov dword ptr [ebp - 4], ebx */
L_00662F08:
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00662F08: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00662F10; /* 0x00662F0C: jb 0x662f10 */
L_00662F0E:
    eax = MEM32(eax); /* 0x00662F0E: mov eax, dword ptr [eax] */
L_00662F10:
    eax = (int32_t)(int8_t)MEM8(eax + edi); /* 0x00662F10: movsx eax, byte ptr [eax + edi] */
    PUSH32(esp, eax); /* 0x00662F14: push eax */
    RECOMP_ICALL(MEM32(0x7CC6AC)); /* 0x00662F15: call dword ptr [0x7cc6ac] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00662F1B: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x00662F1D: mov eax, dword ptr [ebp - 4] */
    ecx = (int32_t)(int8_t)MEM8(eax + edi); /* 0x00662F20: movsx ecx, byte ptr [eax + edi] */
    PUSH32(esp, ecx); /* 0x00662F24: push ecx */
    RECOMP_ICALL(MEM32(0x7CC6AC)); /* 0x00662F25: call dword ptr [0x7cc6ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00662F2B: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x00662F2E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00662F44; /* 0x00662F30: jne 0x662f44 */
L_00662F32:
    eax = MEM32(ebp + (-0xC)); /* 0x00662F32: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00662F35: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x00662F36: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00662EF8; /* 0x00662F39: jb 0x662ef8 */
L_00662F3B:
    edi = POP32_VAL(esp); /* 0x00662F3B: pop edi */
    esi = POP32_VAL(esp); /* 0x00662F3C: pop esi */
    SET_LO8(eax, 1); /* 0x00662F3D: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x00662F3F: pop ebx */
    esp = ebp; /* 0x00662F40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662F42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00662F43: ret  */
L_00662F44:
    edi = POP32_VAL(esp); /* 0x00662F44: pop edi */
    esi = POP32_VAL(esp); /* 0x00662F45: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00662F46: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x00662F48: pop ebx */
    esp = ebp; /* 0x00662F49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00662F4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00662F4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00662F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00662F50u);

L_00662F50:
    PUSH32(esp, ebp); /* 0x00662F50: push ebp */
    ebp = esp; /* 0x00662F51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00662F53: push -1 */
    PUSH32(esp, 0x007BBB78u); /* 0x00662F55: push 0x7bbb78 */
    eax = MEM32(FS_BASE + (0)); /* 0x00662F5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00662F60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x00662F61: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00662F64: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00662F69: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00662F6B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x00662F6E: push esi */
    PUSH32(esp, edi); /* 0x00662F6F: push edi */
    PUSH32(esp, eax); /* 0x00662F70: push eax */
    eax = ebp + (-0xC); /* 0x00662F71: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00662F74: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00662F7A: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x00662F7C: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x5C)) = 0x0077EED0u; /* 0x00662F7F: mov dword ptr [ebp - 0x5c], 0x77eed0 */
    MEM32(ebp + (-0x58)) = 0x0077EF70u; /* 0x00662F86: mov dword ptr [ebp - 0x58], 0x77ef70 */
    MEM32(ebp + (-0x54)) = 0x0077EFC0u; /* 0x00662F8D: mov dword ptr [ebp - 0x54], 0x77efc0 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00662F94: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = 0x0077F010u; /* 0x00662F98: mov dword ptr [ebp - 0x50], 0x77f010 */
    MEM32(ebp + (-0x4C)) = 0x0077F080u; /* 0x00662F9F: mov dword ptr [ebp - 0x4c], 0x77f080 */
    MEM32(ebp + (-0x48)) = 0x0077F0F0u; /* 0x00662FA6: mov dword ptr [ebp - 0x48], 0x77f0f0 */
    MEM32(ebp + (-0x44)) = 0x0077F120u; /* 0x00662FAD: mov dword ptr [ebp - 0x44], 0x77f120 */
    MEM32(ebp + (-0x40)) = 0; /* 0x00662FB4: mov dword ptr [ebp - 0x40], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_00662FC1; /* 0x00662FBB: jb 0x662fc1 */
L_00662FBD:
    ecx = MEM32(esi); /* 0x00662FBD: mov ecx, dword ptr [esi] */
    goto L_00662FC3; /* 0x00662FBF: jmp 0x662fc3 */
L_00662FC1:
    ecx = esi; /* 0x00662FC1: mov ecx, esi */
L_00662FC3:
    _xmm[0] = xmm_ld(ebp + (-0x5C)); /* 0x00662FC3: movdqu xmm0, xmmword ptr [ebp - 0x5c] */
    eax = ebp + (-0x3C); /* 0x00662FC8: lea eax, [ebp - 0x3c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x00662FCB: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x00662FD2: push eax */
    xmm_st(ebp + (-0x3C), _xmm[0]); /* 0x00662FD3: movdqu xmmword ptr [ebp - 0x3c], xmm0 */
    PUSH32(esp, ecx); /* 0x00662FD8: push ecx */
    _xmm[0] = xmm_ld(ebp + (-0x4C)); /* 0x00662FD9: movdqu xmm0, xmmword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00662FDE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0; /* 0x00662FE0: mov dword ptr [ebp - 0x14], 0 */
    xmm_st(ebp + (-0x2C), _xmm[0]); /* 0x00662FE7: movdqu xmmword ptr [ebp - 0x2c], xmm0 */
    RECOMP_CALL(sub_0077D110); /* 0x00662FEC: call 0x77d110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00662FF1: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x00662FF4: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x00662FF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663080; /* 0x00662FF8: jne 0x663080 */
L_00662FFE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00662FFE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663001: mov ecx, esp */
    MEM32(ebp + (-0x64)) = esp; /* 0x00663003: mov dword ptr [ebp - 0x64], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x00663006: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0066300B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00663010: mov dword ptr [ebp - 4], 1 */
    edx = 0x007FC05Cu; /* 0x00663017: mov edx, 0x7fc05c */
    PUSH32(esp, esi); /* 0x0066301C: push esi */
    ecx = ebp + (-0x28); /* 0x0066301D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0042A130); /* 0x00663020: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00663025: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00663029: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066302C: mov ecx, esp */
    MEM32(ebp + (-0x60)) = esp; /* 0x0066302E: mov dword ptr [ebp - 0x60], esp */
    edx = eax; /* 0x00663031: mov edx, eax */
    PUSH32(esp, 0x007E6C3Cu); /* 0x00663033: push 0x7e6c3c */
    RECOMP_CALL(sub_00419C40); /* 0x00663038: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066303D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00663040: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00663044: mov byte ptr [ebp - 4], 4 */
    ecx = 0x2F5u; /* 0x00663048: mov ecx, 0x2f5 */
    RECOMP_CALL(sub_00668410); /* 0x0066304D: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00663052: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00663055: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0066305C: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066306E; /* 0x00663060: jb 0x66306e */
L_00663062:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00663062: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00663065: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066306B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066306E:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0066306E: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00663075: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0066307C: mov byte ptr [ebp - 0x28], 0 */
L_00663080:
    ecx = MEM32(ebp + (-0xC)); /* 0x00663080: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00663083: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066308A: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066308B: pop edi */
    esi = POP32_VAL(esp); /* 0x0066308C: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0066308D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00663090: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00663092: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00663097: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663099: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0066309A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006630A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006630A0u);

L_006630A0:
    PUSH32(esp, ebp); /* 0x006630A0: push ebp */
    ebp = esp; /* 0x006630A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006630A3: push -1 */
    PUSH32(esp, 0x007BBC6Fu); /* 0x006630A5: push 0x7bbc6f */
    eax = MEM32(FS_BASE + (0)); /* 0x006630AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006630B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xECu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xECu; /* 0x006630B1: sub esp, 0xec */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006630B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006630BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x006630BE: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x006630C1: push esi */
    PUSH32(esp, edi); /* 0x006630C2: push edi */
    PUSH32(esp, eax); /* 0x006630C3: push eax */
    eax = ebp + (-0xC); /* 0x006630C4: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006630C7: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006630CD: mov edi, ecx */
    MEM32(ebp + (-0xF0)) = edi; /* 0x006630CF: mov dword ptr [ebp - 0xf0], edi */
    /* cmp MEM32(edi), 0 */ /* 0x006630D5: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x006630D8: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x006630DB: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xEC)) = eax; /* 0x006630DE: mov dword ptr [ebp - 0xec], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066312F; /* 0x006630E4: jne 0x66312f */
L_006630E6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006630E6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006630E9: mov ecx, esp */
    MEM32(ebp + (-0xE4)) = esp; /* 0x006630EB: mov dword ptr [ebp - 0xe4], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x006630F1: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x006630F6: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006630FB: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00663102: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663105: mov ecx, esp */
    MEM32(ebp + (-0xE8)) = esp; /* 0x00663107: mov dword ptr [ebp - 0xe8], esp */
    PUSH32(esp, 0x007FC010u); /* 0x0066310D: push 0x7fc010 */
    RECOMP_CALL(sub_00409FA0); /* 0x00663112: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00663117: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066311B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x300u; /* 0x00663122: mov ecx, 0x300 */
    RECOMP_CALL(sub_00668DA0); /* 0x00663127: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066312C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0066312F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066312F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663132: mov ecx, esp */
    MEM32(ebp + (-0xE4)) = esp; /* 0x00663134: mov dword ptr [ebp - 0xe4], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066313A: push -1 */
    PUSH32(esp, 0); /* 0x0066313C: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066313E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663145: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, esi); /* 0x0066314C: push esi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066314D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00663150: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x00663155: mov dword ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066315C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x00663163: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0066A090); /* 0x00663166: call 0x66a090 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x0066316B: mov dword ptr [ebp - 4], 3 */
    ecx = esp; /* 0x00663172: mov ecx, esp */
    MEM32(ebp + (-0xE4)) = esp; /* 0x00663174: mov dword ptr [ebp - 0xe4], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0066317A: push -1 */
    PUSH32(esp, 0); /* 0x0066317C: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066317E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663185: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, esi); /* 0x0066318C: push esi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0066318D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00663190: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00663195: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00663199: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x68); /* 0x0066319D: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_00669DB0); /* 0x006631A0: call 0x669db0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006631A5: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006631A8: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + (-0x2C); /* 0x006631AC: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006631AF: push -1 */
    PUSH32(esp, 0); /* 0x006631B1: push 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006631B3: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006631BA: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, esi); /* 0x006631C1: push esi */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x006631C2: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006631C9: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x006631D0: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x006631D4: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006631D9: mov byte ptr [ebp - 4], 6 */
    eax = 1; /* 0x006631DD: mov eax, 1 */
    ecx = MEM32(ebp + (-0xF0)); /* 0x006631E2: mov ecx, dword ptr [ebp - 0xf0] */
    esi = MEM32(0x7CC694); /* 0x006631E8: mov esi, dword ptr [0x7cc694] */
    edi = ecx + 0x4; /* 0x006631EE: lea edi, [ecx + 4] */
L_006631F1:
    MEM32(ebp + (-0xE4)) = eax; /* 0x006631F1: mov dword ptr [ebp - 0xe4], eax */
    /* cmp eax, 8 */ /* 0x006631F7: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00663270; /* 0x006631FA: jbe 0x663270 */
L_006631FC:
    ecx = MEM32(ecx); /* 0x006631FC: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x006631FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663207; /* 0x00663200: je 0x663207 */
L_00663202:
    RECOMP_CALL(sub_0077ED00); /* 0x00663202: call 0x77ed00 */
    RECOMP_FLAGS_IN();
L_00663207:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00663207: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066320A: mov ecx, esp */
    MEM32(ebp + (-0xE8)) = esp; /* 0x0066320C: mov dword ptr [ebp - 0xe8], esp */
    PUSH32(esp, 0x2Bu); /* 0x00663212: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00663214: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0066321B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00663222: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663227: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066322A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0066322F: mov byte ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00663233: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663236: mov ecx, esp */
    MEM32(ebp + (-0xF4)) = esp; /* 0x00663238: mov dword ptr [ebp - 0xf4], esp */
    PUSH32(esp, 0x2Bu); /* 0x0066323E: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00663240: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663247: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FC020u); /* 0x0066324E: push 0x7fc020 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663253: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00663256: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0066325B: mov byte ptr [ebp - 4], 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066325F: mov byte ptr [ebp - 4], 6 */
    ecx = 0x30Eu; /* 0x00663263: mov ecx, 0x30e */
    RECOMP_CALL(sub_00668410); /* 0x00663268: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066326D: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00663270:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00663270: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x2AAAAAABu; /* 0x00663272: mov eax, 0x2aaaaaab */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x00663277: mov dword ptr [ebp - 0xe8], ecx */
    ecx = MEM32(edi + 0x4); /* 0x0066327D: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x00663280: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00663282: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00663284: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x00663287: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00663289: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00663289: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0066328C: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006632D3; /* 0x0066328E: je 0x6632d3 */
L_00663290:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00663290: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00663292:
    edx = MEM32(edi); /* 0x00663292: mov edx, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x00663294: lea ecx, [ebp - 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00663297: add edx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00662ED0); /* 0x00663299: call 0x662ed0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0066329E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006633AF; /* 0x006632A0: jne 0x6633af */
L_006632A6:
    ecx = MEM32(edi + 0x4); /* 0x006632A6: mov ecx, dword ptr [edi + 4] */
    eax = 0x2AAAAAABu; /* 0x006632A9: mov eax, 0x2aaaaaab */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x006632AE: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x006632B0: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xE8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xE8)) = MEM32(ebp + (-0xE8)) + 1; /* 0x006632B3: inc dword ptr [ebp - 0xe8] */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006632B9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x006632BB: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x006632BE: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006632C0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006632C0: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006632C3: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xE8)), eax */ /* 0x006632C5: cmp dword ptr [ebp - 0xe8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xE8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00663292; /* 0x006632CB: jb 0x663292 */
L_006632CD:
    esi = MEM32(0x7CC694); /* 0x006632CD: mov esi, dword ptr [0x7cc694] */
L_006632D3:
    eax = ebp + (-0x2C); /* 0x006632D3: lea eax, [ebp - 0x2c] */
    ecx = edi; /* 0x006632D6: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006632D8: push eax */
    RECOMP_CALL(sub_00519390); /* 0x006632D9: call 0x519390 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x006632DE: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + (-0x2C); /* 0x006632E2: lea edx, [ebp - 0x2c] */
    edi = MEM32(ebp + (-0xF0)); /* 0x006632E5: mov edi, dword ptr [ebp - 0xf0] */
    eax = ebp + (-0x50); /* 0x006632EB: lea eax, [ebp - 0x50] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x2C)); } /* 0x006632EE: cmovae edx, dword ptr [ebp - 0x2c] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006632F2: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006632F5: sub esp, 0x40 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = 0; /* 0x006632F8: mov dword ptr [ebp - 0x30], 0 */
    xmm_st(ebp + (-0x50), _xmm[0]); /* 0x006632FF: movdqu xmmword ptr [ebp - 0x50], xmm0 */
    ecx = MEM32(edi); /* 0x00663304: mov ecx, dword ptr [edi] */
    xmm_st(ebp + (-0x40), _xmm[0]); /* 0x00663306: movdqu xmmword ptr [ebp - 0x40], xmm0 */
    PUSH32(esp, eax); /* 0x0066330B: push eax */
    RECOMP_CALL(sub_0077D700); /* 0x0066330C: call 0x77d700 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x00663311: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x00663313: add esp, 0x44 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00663316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006635A5; /* 0x00663318: jne 0x6635a5 */
L_0066331E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0066331E: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0xEC)); /* 0x00663321: mov edx, dword ptr [ebp - 0xec] */
    RECOMP_CALL(sub_0077DC70); /* 0x00663327: call 0x77dc70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066332C: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0066332F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00663642; /* 0x00663331: jns 0x663642 */
L_00663337:
    ecx = MEM32(edi); /* 0x00663337: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x00663339: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663342; /* 0x0066333B: je 0x663342 */
L_0066333D:
    RECOMP_CALL(sub_0077ED00); /* 0x0066333D: call 0x77ed00 */
    RECOMP_FLAGS_IN();
L_00663342:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00663342: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663345: mov ecx, esp */
    MEM32(ebp + (-0xF4)) = esp; /* 0x00663347: mov dword ptr [ebp - 0xf4], esp */
    PUSH32(esp, 0x2Bu); /* 0x0066334D: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0066334F: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663356: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x0066335D: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663362: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00663365: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0066336A: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x2C); /* 0x0066336E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00663371: push eax */
    edx = 0x007FC06Cu; /* 0x00663372: mov edx, 0x7fc06c */
    ecx = ebp + (-0x44); /* 0x00663377: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0042A130); /* 0x0066337A: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0066337F: mov byte ptr [ebp - 4], 0x10 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00663383: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663386: mov ecx, esp */
    MEM32(ebp + (-0xEC)) = esp; /* 0x00663388: mov dword ptr [ebp - 0xec], esp */
    edx = eax; /* 0x0066338E: mov edx, eax */
    PUSH32(esp, 0x007FC094u); /* 0x00663390: push 0x7fc094 */
    RECOMP_CALL(sub_00419C40); /* 0x00663395: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066339A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0066339D: mov byte ptr [ebp - 4], 0x11 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x006633A1: mov byte ptr [ebp - 4], 0x12 */
    ecx = 0x331u; /* 0x006633A5: mov ecx, 0x331 */
    goto L_00663616; /* 0x006633AA: jmp 0x663616 */
L_006633AF:
    edx = MEM32(ebp + (-0xE4)); /* 0x006633AF: mov edx, dword ptr [ebp - 0xe4] */
    ecx = ebp + (-0x44); /* 0x006633B5: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0047ADC0); /* 0x006633B8: call 0x47adc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006633BD: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x006633BF: mov byte ptr [ebp - 4], 9 */
    edx = ebp + (-0x80); /* 0x006633C3: lea edx, [ebp - 0x80] */
    PUSH32(esp, 0x007CD690u); /* 0x006633C6: push 0x7cd690 */
    ecx = ebp + (-0xC8); /* 0x006633CB: lea ecx, [ebp - 0xc8] */
    RECOMP_CALL(sub_0041A0F0); /* 0x006633D1: call 0x41a0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006633D6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x006633D9: mov byte ptr [ebp - 4], 0xa */
    edx = eax; /* 0x006633DD: mov edx, eax */
    PUSH32(esp, esi); /* 0x006633DF: push esi */
    ecx = ebp + (-0xE0); /* 0x006633E0: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_00419B80); /* 0x006633E6: call 0x419b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006633EB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x006633EE: mov byte ptr [ebp - 4], 0xb */
    edx = eax; /* 0x006633F2: mov edx, eax */
    PUSH32(esp, 0x007FC090u); /* 0x006633F4: push 0x7fc090 */
    ecx = ebp + (-0xB0); /* 0x006633F9: lea ecx, [ebp - 0xb0] */
    RECOMP_CALL(sub_00419C40); /* 0x006633FF: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663404: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x00663407: mov byte ptr [ebp - 4], 0xc */
    ecx = ebp + (-0x68); /* 0x0066340B: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x0066340E: push ecx */
    edx = eax; /* 0x0066340F: mov edx, eax */
    ecx = ebp + (-0x98); /* 0x00663411: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_0045F540); /* 0x00663417: call 0x45f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066341C: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0066341F: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00663421: mov byte ptr [ebp - 4], 0xd */
    eax = ebp + (-0x2C); /* 0x00663425: lea eax, [ebp - 0x2c] */
    /* cmp eax, esi */ /* 0x00663428: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066349D; /* 0x0066342A: je 0x66349d */
L_0066342C:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0066342C: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066343E; /* 0x00663430: jb 0x66343e */
L_00663432:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00663432: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00663435: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066343B: add esp, 4 */
    _flag_k = FK_ADD;
L_0066343E:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0066343E: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00663445: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0066344C: mov byte ptr [ebp - 0x2c], 0 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00663450: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066346D; /* 0x00663454: jae 0x66346d */
L_00663456:
    eax = MEM32(esi + 0x10); /* 0x00663456: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00663459: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00663480; /* 0x0066345A: je 0x663480 */
L_0066345C:
    PUSH32(esp, eax); /* 0x0066345C: push eax */
    eax = ebp + (-0x2C); /* 0x0066345D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x00663460: push esi */
    PUSH32(esp, eax); /* 0x00663461: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00663462: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00663468: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00663480; /* 0x0066346B: jmp 0x663480 */
L_0066346D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0066346D: mov byte ptr [ebp - 4], 0xe */
    eax = MEM32(esi); /* 0x00663471: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x00663473: mov dword ptr [ebp - 0x2c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x00663476: mov byte ptr [ebp - 4], 0xd */
    MEM32(esi) = 0; /* 0x0066347A: mov dword ptr [esi], 0 */
L_00663480:
    eax = MEM32(esi + 0x10); /* 0x00663480: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x00663483: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi + 0x14); /* 0x00663486: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x00663489: mov dword ptr [ebp - 0x18], eax */
    MEM32(esi + 0x14) = 0xFu; /* 0x0066348C: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00663493: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066349A: mov byte ptr [esi], 0 */
L_0066349D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0066349D: mov byte ptr [ebp - 4], 0xc */
    /* cmp MEM32(ebp + (-0x84)), 0x10u */ /* 0x006634A1: cmp dword ptr [ebp - 0x84], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x006634A8: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006634BB; /* 0x006634AE: jb 0x6634bb */
L_006634B0:
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x006634B0: push dword ptr [ebp - 0x98] */
    RECOMP_ICALL(esi); /* 0x006634B6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006634B8: add esp, 4 */
    _flag_k = FK_ADD;
L_006634BB:
    MEM32(ebp + (-0x84)) = 0xFu; /* 0x006634BB: mov dword ptr [ebp - 0x84], 0xf */
    MEM32(ebp + (-0x88)) = 0; /* 0x006634C5: mov dword ptr [ebp - 0x88], 0 */
    MEM8(ebp + (-0x98)) = (uint8_t)(0); /* 0x006634CF: mov byte ptr [ebp - 0x98], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x006634D6: mov byte ptr [ebp - 4], 0xb */
    /* cmp MEM32(ebp + (-0x9C)), 0x10u */ /* 0x006634DA: cmp dword ptr [ebp - 0x9c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x9C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006634EE; /* 0x006634E1: jb 0x6634ee */
L_006634E3:
    PUSH32(esp, MEM32(ebp + (-0xB0))); /* 0x006634E3: push dword ptr [ebp - 0xb0] */
    RECOMP_ICALL(esi); /* 0x006634E9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006634EB: add esp, 4 */
    _flag_k = FK_ADD;
L_006634EE:
    MEM32(ebp + (-0x9C)) = 0xFu; /* 0x006634EE: mov dword ptr [ebp - 0x9c], 0xf */
    MEM32(ebp + (-0xA0)) = 0; /* 0x006634F8: mov dword ptr [ebp - 0xa0], 0 */
    MEM8(ebp + (-0xB0)) = (uint8_t)(0); /* 0x00663502: mov byte ptr [ebp - 0xb0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x00663509: mov byte ptr [ebp - 4], 0xa */
    /* cmp MEM32(ebp + (-0xCC)), 0x10u */ /* 0x0066350D: cmp dword ptr [ebp - 0xcc], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663521; /* 0x00663514: jb 0x663521 */
L_00663516:
    PUSH32(esp, MEM32(ebp + (-0xE0))); /* 0x00663516: push dword ptr [ebp - 0xe0] */
    RECOMP_ICALL(esi); /* 0x0066351C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066351E: add esp, 4 */
    _flag_k = FK_ADD;
L_00663521:
    MEM32(ebp + (-0xCC)) = 0xFu; /* 0x00663521: mov dword ptr [ebp - 0xcc], 0xf */
    MEM32(ebp + (-0xD0)) = 0; /* 0x0066352B: mov dword ptr [ebp - 0xd0], 0 */
    MEM8(ebp + (-0xE0)) = (uint8_t)(0); /* 0x00663535: mov byte ptr [ebp - 0xe0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0066353C: mov byte ptr [ebp - 4], 9 */
    /* cmp MEM32(ebp + (-0xB4)), 0x10u */ /* 0x00663540: cmp dword ptr [ebp - 0xb4], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663554; /* 0x00663547: jb 0x663554 */
L_00663549:
    PUSH32(esp, MEM32(ebp + (-0xC8))); /* 0x00663549: push dword ptr [ebp - 0xc8] */
    RECOMP_ICALL(esi); /* 0x0066354F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663551: add esp, 4 */
    _flag_k = FK_ADD;
L_00663554:
    MEM32(ebp + (-0xB4)) = 0xFu; /* 0x00663554: mov dword ptr [ebp - 0xb4], 0xf */
    MEM32(ebp + (-0xB8)) = 0; /* 0x0066355E: mov dword ptr [ebp - 0xb8], 0 */
    MEM8(ebp + (-0xC8)) = (uint8_t)(0); /* 0x00663568: mov byte ptr [ebp - 0xc8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066356F: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00663573: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663581; /* 0x00663577: jb 0x663581 */
L_00663579:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00663579: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x0066357C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066357E: add esp, 4 */
    _flag_k = FK_ADD;
L_00663581:
    eax = MEM32(ebp + (-0xE4)); /* 0x00663581: mov eax, dword ptr [ebp - 0xe4] */
    ecx = MEM32(ebp + (-0xF0)); /* 0x00663587: mov ecx, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066358D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x0066358E: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00663595: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0066359C: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_BACKEDGE();
    goto L_006631F1; /* 0x006635A0: jmp 0x6631f1 */
L_006635A5:
    /* test ecx, ecx */ /* 0x006635A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006635AE; /* 0x006635A7: je 0x6635ae */
L_006635A9:
    RECOMP_CALL(sub_0077ED00); /* 0x006635A9: call 0x77ed00 */
    RECOMP_FLAGS_IN();
L_006635AE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006635AE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006635B1: mov ecx, esp */
    MEM32(ebp + (-0xF4)) = esp; /* 0x006635B3: mov dword ptr [ebp - 0xf4], esp */
    PUSH32(esp, 0x2Bu); /* 0x006635B9: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006635BB: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006635C2: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x006635C9: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006635CE: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x006635D1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x006635D6: mov byte ptr [ebp - 4], 0x13 */
    eax = ebp + (-0x2C); /* 0x006635DA: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006635DD: push eax */
    edx = 0x007FC15Cu; /* 0x006635DE: mov edx, 0x7fc15c */
    ecx = ebp + (-0x44); /* 0x006635E3: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0042A130); /* 0x006635E6: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x006635EB: mov byte ptr [ebp - 4], 0x14 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006635EF: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006635F2: mov ecx, esp */
    MEM32(ebp + (-0xEC)) = esp; /* 0x006635F4: mov dword ptr [ebp - 0xec], esp */
    edx = eax; /* 0x006635FA: mov edx, eax */
    PUSH32(esp, 0x007FC080u); /* 0x006635FC: push 0x7fc080 */
    RECOMP_CALL(sub_00419C40); /* 0x00663601: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663606: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0x15u); /* 0x00663609: mov byte ptr [ebp - 4], 0x15 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x0066360D: mov byte ptr [ebp - 4], 0x16 */
    ecx = 0x337u; /* 0x00663611: mov ecx, 0x337 */
L_00663616:
    RECOMP_CALL(sub_00668410); /* 0x00663616: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0066361B: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0066361E: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00663622: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663630; /* 0x00663626: jb 0x663630 */
L_00663628:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00663628: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x0066362B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066362D: add esp, 4 */
    _flag_k = FK_ADD;
L_00663630:
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00663630: mov byte ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x00663634: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x0066363B: mov dword ptr [ebp - 0x30], 0xf */
L_00663642:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x00663642: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00663646: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663654; /* 0x0066364A: jb 0x663654 */
L_0066364C:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0066364C: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x0066364F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663651: add esp, 4 */
    _flag_k = FK_ADD;
L_00663654:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00663654: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0066365B: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00663662: mov byte ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00663666: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x54)), 0x10u */ /* 0x0066366A: cmp dword ptr [ebp - 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663678; /* 0x0066366E: jb 0x663678 */
L_00663670:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x00663670: push dword ptr [ebp - 0x68] */
    RECOMP_ICALL(esi); /* 0x00663673: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663675: add esp, 4 */
    _flag_k = FK_ADD;
L_00663678:
    MEM32(ebp + (-0x54)) = 0xFu; /* 0x00663678: mov dword ptr [ebp - 0x54], 0xf */
    MEM32(ebp + (-0x58)) = 0; /* 0x0066367F: mov dword ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x68)) = (uint8_t)(0); /* 0x00663686: mov byte ptr [ebp - 0x68], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0066368A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x6C)), 0x10u */ /* 0x00663691: cmp dword ptr [ebp - 0x6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066369F; /* 0x00663695: jb 0x66369f */
L_00663697:
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x00663697: push dword ptr [ebp - 0x80] */
    RECOMP_ICALL(esi); /* 0x0066369A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066369C: add esp, 4 */
    _flag_k = FK_ADD;
L_0066369F:
    MEM32(ebp + (-0x6C)) = 0xFu; /* 0x0066369F: mov dword ptr [ebp - 0x6c], 0xf */
    MEM32(ebp + (-0x70)) = 0; /* 0x006636A6: mov dword ptr [ebp - 0x70], 0 */
    MEM8(ebp + (-0x80)) = (uint8_t)(0); /* 0x006636AD: mov byte ptr [ebp - 0x80], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006636B1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006636B4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006636BB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006636BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006636BD: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x006636BE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006636C1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006636C3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006636C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006636CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006636CB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006636D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006636D0u);

L_006636D0:
    PUSH32(esp, ebp); /* 0x006636D0: push ebp */
    ebp = esp; /* 0x006636D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006636D3: push -1 */
    PUSH32(esp, 0x007BBD30u); /* 0x006636D5: push 0x7bbd30 */
    eax = MEM32(FS_BASE + (0)); /* 0x006636DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006636E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1D4u; /* 0x006636E1: sub esp, 0x1d4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006636E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006636EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006636EE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006636F1: push ebx */
    PUSH32(esp, esi); /* 0x006636F2: push esi */
    PUSH32(esp, edi); /* 0x006636F3: push edi */
    PUSH32(esp, eax); /* 0x006636F4: push eax */
    eax = ebp + (-0xC); /* 0x006636F5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006636F8: mov dword ptr fs:[0], eax */
    eax = edx; /* 0x006636FE: mov eax, edx */
    MEM32(ebp + (-0x158)) = eax; /* 0x00663700: mov dword ptr [ebp - 0x158], eax */
    ebx = ecx; /* 0x00663706: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663708: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x164)) = 0; /* 0x0066370F: mov dword ptr [ebp - 0x164], 0 */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00663719: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x188)) = ebx; /* 0x0066371D: mov dword ptr [ebp - 0x188], ebx */
    MEM32(ebp + (-0x184)) = 0x0077EED0u; /* 0x00663723: mov dword ptr [ebp - 0x184], 0x77eed0 */
    MEM32(ebp + (-0x180)) = 0x0077EF70u; /* 0x0066372D: mov dword ptr [ebp - 0x180], 0x77ef70 */
    MEM32(ebp + (-0x17C)) = 0x0077EFC0u; /* 0x00663737: mov dword ptr [ebp - 0x17c], 0x77efc0 */
    MEM32(ebp + (-0x178)) = 0x0077F010u; /* 0x00663741: mov dword ptr [ebp - 0x178], 0x77f010 */
    MEM32(ebp + (-0x174)) = 0x0077F080u; /* 0x0066374B: mov dword ptr [ebp - 0x174], 0x77f080 */
    MEM32(ebp + (-0x170)) = 0x0077F0F0u; /* 0x00663755: mov dword ptr [ebp - 0x170], 0x77f0f0 */
    MEM32(ebp + (-0x16C)) = 0x0077F120u; /* 0x0066375F: mov dword ptr [ebp - 0x16c], 0x77f120 */
    MEM32(ebp + (-0x168)) = 0; /* 0x00663769: mov dword ptr [ebp - 0x168], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_00663779; /* 0x00663773: jb 0x663779 */
L_00663775:
    ecx = MEM32(eax); /* 0x00663775: mov ecx, dword ptr [eax] */
    goto L_0066377B; /* 0x00663777: jmp 0x66377b */
L_00663779:
    ecx = eax; /* 0x00663779: mov ecx, eax */
L_0066377B:
    _xmm[0] = xmm_ld(ebp + (-0x184)); /* 0x0066377B: movdqu xmm0, xmmword ptr [ebp - 0x184] */
    PUSH32(esp, ecx); /* 0x00663783: push ecx */
    edx = ebp + (-0x154); /* 0x00663784: lea edx, [ebp - 0x154] */
    MEM32(ebp + (-0x130)) = 0; /* 0x0066378A: mov dword ptr [ebp - 0x130], 0 */
    xmm_st(ebp + (-0x154), _xmm[0]); /* 0x00663794: movdqu xmmword ptr [ebp - 0x154], xmm0 */
    MEM32(ebp + (-0x12C)) = 0; /* 0x0066379C: mov dword ptr [ebp - 0x12c], 0 */
    _xmm[0] = xmm_ld(ebp + (-0x174)); /* 0x006637A6: movdqu xmm0, xmmword ptr [ebp - 0x174] */
    xmm_st(ebp + (-0x144), _xmm[0]); /* 0x006637AE: movdqu xmmword ptr [ebp - 0x144], xmm0 */
    RECOMP_CALL(sub_0077B860); /* 0x006637B6: call 0x77b860 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC694); /* 0x006637BB: mov edi, dword ptr [0x7cc694] */
    esi = eax; /* 0x006637C1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006637C3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006637C6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006638FE; /* 0x006637C8: jne 0x6638fe */
L_006637CE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006637CE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006637D1: mov ecx, esp */
    MEM32(ebp + (-0x160)) = esp; /* 0x006637D3: mov dword ptr [ebp - 0x160], esp */
    PUSH32(esp, 0x007FBFD0u); /* 0x006637D9: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x006637DE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x006637E3: mov dword ptr [ebp - 4], 1 */
    edx = 0x007FC16Cu; /* 0x006637EA: mov edx, 0x7fc16c */
    PUSH32(esp, MEM32(ebp + (-0x158))); /* 0x006637EF: push dword ptr [ebp - 0x158] */
    ecx = ebp + (-0x128); /* 0x006637F5: lea ecx, [ebp - 0x128] */
    RECOMP_CALL(sub_0042A130); /* 0x006637FB: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00663800: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00663804: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00663807: mov ecx, esp */
    MEM32(ebp + (-0x15C)) = esp; /* 0x00663809: mov dword ptr [ebp - 0x15c], esp */
    edx = eax; /* 0x0066380F: mov edx, eax */
    PUSH32(esp, 0x007E6C3Cu); /* 0x00663811: push 0x7e6c3c */
    RECOMP_CALL(sub_00419C40); /* 0x00663816: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066381B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0066381E: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00663822: mov byte ptr [ebp - 4], 4 */
    ecx = 0x346u; /* 0x00663826: mov ecx, 0x346 */
    RECOMP_CALL(sub_00668410); /* 0x0066382B: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00663830: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00663833: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x114)), 0x10u */ /* 0x00663837: cmp dword ptr [ebp - 0x114], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066384B; /* 0x0066383E: jb 0x66384b */
L_00663840:
    PUSH32(esp, MEM32(ebp + (-0x128))); /* 0x00663840: push dword ptr [ebp - 0x128] */
    RECOMP_ICALL(edi); /* 0x00663846: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663848: add esp, 4 */
    _flag_k = FK_ADD;
L_0066384B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0066384B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x114)) = 0xFu; /* 0x0066384E: mov dword ptr [ebp - 0x114], 0xf */
    ecx = esp; /* 0x00663858: mov ecx, esp */
    MEM32(ebp + (-0x15C)) = esp; /* 0x0066385A: mov dword ptr [ebp - 0x15c], esp */
    MEM32(ebp + (-0x118)) = 0; /* 0x00663860: mov dword ptr [ebp - 0x118], 0 */
    MEM8(ebp + (-0x128)) = (uint8_t)(0); /* 0x0066386A: mov byte ptr [ebp - 0x128], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00663871: push 0x7fbfd0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00663876: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 5; /* 0x0066387B: mov dword ptr [ebp - 4], 5 */
    edx = 0x007FC114u; /* 0x00663882: mov edx, 0x7fc114 */
    PUSH32(esp, MEM32(ebp + (-0x158))); /* 0x00663887: push dword ptr [ebp - 0x158] */
    ecx = ebp + (-0x128); /* 0x0066388D: lea ecx, [ebp - 0x128] */
    RECOMP_CALL(sub_0042A130); /* 0x00663893: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00663898: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0066389C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066389F: mov ecx, esp */
    MEM32(ebp + (-0x160)) = esp; /* 0x006638A1: mov dword ptr [ebp - 0x160], esp */
    edx = eax; /* 0x006638A7: mov edx, eax */
    PUSH32(esp, 0x007E6C3Cu); /* 0x006638A9: push 0x7e6c3c */
    RECOMP_CALL(sub_00419C40); /* 0x006638AE: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006638B3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006638B6: mov byte ptr [ebp - 4], 7 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x006638BA: mov byte ptr [ebp - 4], 8 */
    ecx = 0x34Au; /* 0x006638BE: mov ecx, 0x34a */
    RECOMP_CALL(sub_00668410); /* 0x006638C3: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006638C8: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006638CB: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x114)), 0x10u */ /* 0x006638CF: cmp dword ptr [ebp - 0x114], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006638E3; /* 0x006638D6: jb 0x6638e3 */
L_006638D8:
    PUSH32(esp, MEM32(ebp + (-0x128))); /* 0x006638D8: push dword ptr [ebp - 0x128] */
    RECOMP_ICALL(edi); /* 0x006638DE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006638E0: add esp, 4 */
    _flag_k = FK_ADD;
L_006638E3:
    MEM32(ebp + (-0x114)) = 0xFu; /* 0x006638E3: mov dword ptr [ebp - 0x114], 0xf */
    MEM32(ebp + (-0x118)) = 0; /* 0x006638ED: mov dword ptr [ebp - 0x118], 0 */
    MEM8(ebp + (-0x128)) = (uint8_t)(0); /* 0x006638F7: mov byte ptr [ebp - 0x128], 0 */
L_006638FE:
    MEM32(ebx) = 0; /* 0x006638FE: mov dword ptr [ebx], 0 */
    MEM32(ebx + 0x4) = 0; /* 0x00663904: mov dword ptr [ebx + 4], 0 */
    MEM32(ebx + 0x8) = 0; /* 0x0066390B: mov dword ptr [ebx + 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663912: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x164)) = 1; /* 0x00663919: mov dword ptr [ebp - 0x164], 1 */
    goto L_00663930; /* 0x00663923: jmp 0x663930 */
L_00663930:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00663930: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x110); /* 0x00663933: lea eax, [ebp - 0x110] */
    edx = ebp + (-0x1E0); /* 0x00663939: lea edx, [ebp - 0x1e0] */
    ecx = esi; /* 0x0066393F: mov ecx, esi */
    PUSH32(esp, 0x100u); /* 0x00663941: push 0x100 */
    PUSH32(esp, eax); /* 0x00663946: push eax */
    PUSH32(esp, 0); /* 0x00663947: push 0 */
    RECOMP_CALL(sub_0077BD80); /* 0x00663949: call 0x77bd80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x0066394E: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00663951: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663A04; /* 0x00663953: je 0x663a04 */
L_00663959:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00663959: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0066395C: mov ecx, esp */
    MEM32(ebp + (-0x15C)) = esp; /* 0x0066395E: mov dword ptr [ebp - 0x15c], esp */
    PUSH32(esp, 0x2Bu); /* 0x00663964: push 0x2b */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00663966: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0066396D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007FBFD0u); /* 0x00663974: push 0x7fbfd0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663979: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0066397C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 9; /* 0x00663981: mov dword ptr [ebp - 4], 9 */
    edx = 0x007FC138u; /* 0x00663988: mov edx, 0x7fc138 */
    PUSH32(esp, MEM32(ebp + (-0x158))); /* 0x0066398D: push dword ptr [ebp - 0x158] */
    ecx = ebp + (-0x140); /* 0x00663993: lea ecx, [ebp - 0x140] */
    RECOMP_CALL(sub_0042A130); /* 0x00663999: call 0x42a130 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0066399E: mov byte ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006639A2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006639A5: mov ecx, esp */
    MEM32(ebp + (-0x160)) = esp; /* 0x006639A7: mov dword ptr [ebp - 0x160], esp */
    edx = eax; /* 0x006639AD: mov edx, eax */
    PUSH32(esp, 0x007E6C3Cu); /* 0x006639AF: push 0x7e6c3c */
    RECOMP_CALL(sub_00419C40); /* 0x006639B4: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006639B9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x006639BC: mov byte ptr [ebp - 4], 0xb */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x006639C0: mov byte ptr [ebp - 4], 0xc */
    ecx = 0x353u; /* 0x006639C4: mov ecx, 0x353 */
    RECOMP_CALL(sub_00668410); /* 0x006639C9: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006639CE: add esp, 0x30 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006639D1: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x12C)), 0x10u */ /* 0x006639D5: cmp dword ptr [ebp - 0x12c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x12C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006639E9; /* 0x006639DC: jb 0x6639e9 */
L_006639DE:
    PUSH32(esp, MEM32(ebp + (-0x140))); /* 0x006639DE: push dword ptr [ebp - 0x140] */
    RECOMP_ICALL(edi); /* 0x006639E4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006639E6: add esp, 4 */
    _flag_k = FK_ADD;
L_006639E9:
    MEM32(ebp + (-0x12C)) = 0xFu; /* 0x006639E9: mov dword ptr [ebp - 0x12c], 0xf */
    MEM32(ebp + (-0x130)) = 0; /* 0x006639F3: mov dword ptr [ebp - 0x130], 0 */
    MEM8(ebp + (-0x140)) = (uint8_t)(0); /* 0x006639FD: mov byte ptr [ebp - 0x140], 0 */
L_00663A04:
    /* cmp MEM8(ebp + (-0x110)), 0 */ /* 0x00663A04: cmp byte ptr [ebp - 0x110], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x110))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x118)) = 0; /* 0x00663A0B: mov dword ptr [ebp - 0x118], 0 */
    MEM32(ebp + (-0x114)) = 0; /* 0x00663A15: mov dword ptr [ebp - 0x114], 0 */
    MEM32(ebp + (-0x114)) = 0xFu; /* 0x00663A1F: mov dword ptr [ebp - 0x114], 0xf */
    MEM32(ebp + (-0x118)) = 0; /* 0x00663A29: mov dword ptr [ebp - 0x118], 0 */
    MEM8(ebp + (-0x128)) = (uint8_t)(0); /* 0x00663A33: mov byte ptr [ebp - 0x128], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00663A40; /* 0x00663A3A: jne 0x663a40 */
L_00663A3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00663A3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00663A59; /* 0x00663A3E: jmp 0x663a59 */
L_00663A40:
    eax = ebp + (-0x110); /* 0x00663A40: lea eax, [ebp - 0x110] */
    edx = eax + 0x1; /* 0x00663A46: lea edx, [eax + 1] */
    esp = esp; /* 0x00663A49: lea esp, [esp] */
L_00663A50:
    SET_LO8(ecx, MEM8(eax)); /* 0x00663A50: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00663A52: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x00663A53: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663A50; /* 0x00663A55: jne 0x663a50 */
L_00663A57:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00663A57: sub eax, edx */
    _flag_k = FK_CMP;
L_00663A59:
    PUSH32(esp, eax); /* 0x00663A59: push eax */
    eax = ebp + (-0x110); /* 0x00663A5A: lea eax, [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x00663A60: push eax */
    ecx = ebp + (-0x128); /* 0x00663A61: lea ecx, [ebp - 0x128] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00663A67: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xDu; /* 0x00663A6C: mov dword ptr [ebp - 4], 0xd */
    eax = ebp + (-0x128); /* 0x00663A73: lea eax, [ebp - 0x128] */
    PUSH32(esp, eax); /* 0x00663A79: push eax */
    ecx = ebx; /* 0x00663A7A: mov ecx, ebx */
    RECOMP_CALL(sub_0044E380); /* 0x00663A7C: call 0x44e380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00663A81: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x114)), 0x10u */ /* 0x00663A85: cmp dword ptr [ebp - 0x114], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663A99; /* 0x00663A8C: jb 0x663a99 */
L_00663A8E:
    PUSH32(esp, MEM32(ebp + (-0x128))); /* 0x00663A8E: push dword ptr [ebp - 0x128] */
    RECOMP_ICALL(edi); /* 0x00663A94: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663A96: add esp, 4 */
    _flag_k = FK_ADD;
L_00663A99:
    ecx = esi; /* 0x00663A99: mov ecx, esi */
    MEM32(ebp + (-0x114)) = 0xFu; /* 0x00663A9B: mov dword ptr [ebp - 0x114], 0xf */
    MEM32(ebp + (-0x118)) = 0; /* 0x00663AA5: mov dword ptr [ebp - 0x118], 0 */
    MEM8(ebp + (-0x128)) = (uint8_t)(0); /* 0x00663AAF: mov byte ptr [ebp - 0x128], 0 */
    RECOMP_CALL(sub_0077C200); /* 0x00663AB6: call 0x77c200 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00663ABB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663930; /* 0x00663ABD: je 0x663930 */
L_00663AC3:
    /* test esi, esi */ /* 0x00663AC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663AEC; /* 0x00663AC5: je 0x663aec */
L_00663AC7:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x00663AC7: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00663AD7; /* 0x00663ACE: je 0x663ad7 */
L_00663AD0:
    ecx = esi; /* 0x00663AD0: mov ecx, esi */
    RECOMP_CALL(sub_0077C2A0); /* 0x00663AD2: call 0x77c2a0 */
    RECOMP_FLAGS_IN();
L_00663AD7:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x00663AD7: push dword ptr [esi + 0x30] */
    ecx = MEM32(esi + 0x14); /* 0x00663ADA: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x00663ADD: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(ecx); /* 0x00663AE0: call ecx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00663AE2: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00663AE3: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00663AE9: add esp, 0xc */
    _flag_k = FK_ADD;
L_00663AEC:
    eax = ebx; /* 0x00663AEC: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00663AEE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00663AF1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00663AF8: pop ecx */
    edi = POP32_VAL(esp); /* 0x00663AF9: pop edi */
    esi = POP32_VAL(esp); /* 0x00663AFA: pop esi */
    ebx = POP32_VAL(esp); /* 0x00663AFB: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00663AFC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00663AFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00663B01: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00663B06: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663B08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00663B09: ret  */
    RECOMP_REGS_OUT();
}

void sub_00663B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663B10u);

L_00663B10:
    PUSH32(esp, ebp); /* 0x00663B10: push ebp */
    ebp = esp; /* 0x00663B11: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00663B13: push esi */
    PUSH32(esp, edi); /* 0x00663B14: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00663B15: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x00663B18: mov esi, ecx */
    /* cmp esi, edi */ /* 0x00663B1A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00663B70; /* 0x00663B1C: je 0x663b70 */
L_00663B1E:
    eax = MEM32(esi); /* 0x00663B1E: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00663B20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663B4C; /* 0x00663B22: je 0x663b4c */
L_00663B24:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00663B24: push dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x00663B27: push eax */
    RECOMP_CALL(sub_0042A0E0); /* 0x00663B28: call 0x42a0e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x00663B2D: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00663B2F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663B35: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x00663B38: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00663B3E: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x00663B45: mov dword ptr [esi + 8], 0 */
L_00663B4C:
    eax = MEM32(edi); /* 0x00663B4C: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x00663B4E: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x00663B50: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x00663B53: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x00663B56: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x00663B59: mov dword ptr [esi + 8], eax */
    MEM32(edi) = 0; /* 0x00663B5C: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x00663B62: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x00663B69: mov dword ptr [edi + 8], 0 */
L_00663B70:
    edi = POP32_VAL(esp); /* 0x00663B70: pop edi */
    eax = esi; /* 0x00663B71: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00663B73: pop esi */
    ebp = POP32_VAL(esp); /* 0x00663B74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00663B75: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00663B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663B80u);

L_00663B80:
    PUSH32(esp, ebp); /* 0x00663B80: push ebp */
    ebp = esp; /* 0x00663B81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00663B83: push -1 */
    PUSH32(esp, 0x007B1869u); /* 0x00663B85: push 0x7b1869 */
    eax = MEM32(FS_BASE + (0)); /* 0x00663B8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00663B90: push eax */
    PUSH32(esp, ecx); /* 0x00663B91: push ecx */
    PUSH32(esp, esi); /* 0x00663B92: push esi */
    eax = MEM32(0x855000); /* 0x00663B93: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00663B98: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00663B9A: push eax */
    eax = ebp + (-0xC); /* 0x00663B9B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00663B9E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00663BA4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00663BA6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663BA9: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_00663D70); /* 0x00663BB0: call 0x663d70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00663BB5: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x00663BBC: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00663BBE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663BC4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x00663BC7: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00663BCD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00663BD4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00663BD7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00663BDE: pop ecx */
    esi = POP32_VAL(esp); /* 0x00663BDF: pop esi */
    esp = ebp; /* 0x00663BE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663BE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00663BE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_00663BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663BF0u);

L_00663BF0:
    PUSH32(esp, ebp); /* 0x00663BF0: push ebp */
    ebp = esp; /* 0x00663BF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00663BF3: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x00663BF5: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x00663BFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00663C00: push eax */
    PUSH32(esp, esi); /* 0x00663C01: push esi */
    PUSH32(esp, edi); /* 0x00663C02: push edi */
    eax = MEM32(0x855000); /* 0x00663C03: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00663C08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00663C0A: push eax */
    eax = ebp + (-0xC); /* 0x00663C0B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00663C0E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00663C14: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x00663C16: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00663C19: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x8), eax */ /* 0x00663C1A: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00663C25; /* 0x00663C1D: ja 0x663c25 */
L_00663C1F:
    PUSH32(esp, ecx); /* 0x00663C1F: push ecx */
    RECOMP_CALL(sub_00663E30); /* 0x00663C20: call 0x663e30 */
    RECOMP_FLAGS_IN();
L_00663C25:
    ecx = MEM32(esi + 0x8); /* 0x00663C25: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x10); /* 0x00663C28: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00663C2B: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ecx; /* 0x00663C2C: and dword ptr [esi + 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x00663C2F: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x00663C32: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x00663C34: mov eax, dword ptr [esi + 4] */
    edi = ecx * 4; /* 0x00663C37: lea edi, [ecx*4] */
    /* cmp MEM32(edi + eax), 0 */ /* 0x00663C3E: cmp dword ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00663C61; /* 0x00663C42: jne 0x663c61 */
L_00663C44:
    PUSH32(esp, 0x18u); /* 0x00663C44: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00663C46: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00663C4C: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663C4E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00663C51: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663C5B; /* 0x00663C53: jne 0x663c5b */
L_00663C55:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00663C55: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00663C5B:
    eax = MEM32(esi + 0x4); /* 0x00663C5B: mov eax, dword ptr [esi + 4] */
    MEM32(edi + eax) = ecx; /* 0x00663C5E: mov dword ptr [edi + eax], ecx */
L_00663C61:
    eax = MEM32(esi + 0x4); /* 0x00663C61: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(edi + eax); /* 0x00663C64: mov ecx, dword ptr [edi + eax] */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663C67: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00663C6E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663C8B; /* 0x00663C70: je 0x663c8b */
L_00663C72:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00663C72: push dword ptr [ebp + 8] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00663C75: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663C7C: mov dword ptr [ecx + 0x10], 0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663C83: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_00419890); /* 0x00663C86: call 0x419890 */
    RECOMP_FLAGS_IN();
L_00663C8B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00663C8B: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x00663C92: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x00663C95: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00663C98: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00663C9F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00663CA0: pop edi */
    esi = POP32_VAL(esp); /* 0x00663CA1: pop esi */
    esp = ebp; /* 0x00663CA2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663CA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00663CA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00663CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663CB0u);

L_00663CB0:
    PUSH32(esp, ebp); /* 0x00663CB0: push ebp */
    ebp = esp; /* 0x00663CB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00663CB3: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x00663CB5: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x00663CBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00663CC0: push eax */
    PUSH32(esp, esi); /* 0x00663CC1: push esi */
    PUSH32(esp, edi); /* 0x00663CC2: push edi */
    eax = MEM32(0x855000); /* 0x00663CC3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00663CC8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00663CCA: push eax */
    eax = ebp + (-0xC); /* 0x00663CCB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00663CCE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00663CD4: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x00663CD6: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00663CD9: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x8), eax */ /* 0x00663CDA: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00663CE5; /* 0x00663CDD: ja 0x663ce5 */
L_00663CDF:
    PUSH32(esp, ecx); /* 0x00663CDF: push ecx */
    RECOMP_CALL(sub_00663E30); /* 0x00663CE0: call 0x663e30 */
    RECOMP_FLAGS_IN();
L_00663CE5:
    ecx = MEM32(esi + 0x8); /* 0x00663CE5: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x10); /* 0x00663CE8: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00663CEB: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ecx; /* 0x00663CEC: and dword ptr [esi + 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x00663CEF: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x00663CF2: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x00663CF4: mov eax, dword ptr [esi + 4] */
    edi = ecx * 4; /* 0x00663CF7: lea edi, [ecx*4] */
    /* cmp MEM32(edi + eax), 0 */ /* 0x00663CFE: cmp dword ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00663D21; /* 0x00663D02: jne 0x663d21 */
L_00663D04:
    PUSH32(esp, 0x18u); /* 0x00663D04: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00663D06: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00663D0C: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663D0E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00663D11: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663D1B; /* 0x00663D13: jne 0x663d1b */
L_00663D15:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00663D15: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00663D1B:
    eax = MEM32(esi + 0x4); /* 0x00663D1B: mov eax, dword ptr [esi + 4] */
    MEM32(edi + eax) = ecx; /* 0x00663D1E: mov dword ptr [edi + eax], ecx */
L_00663D21:
    eax = MEM32(esi + 0x4); /* 0x00663D21: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(edi + eax); /* 0x00663D24: mov ecx, dword ptr [edi + eax] */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663D27: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00663D2E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663D4F; /* 0x00663D30: je 0x663d4f */
L_00663D32:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00663D32: push -1 */
    PUSH32(esp, 0); /* 0x00663D34: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00663D36: push dword ptr [ebp + 8] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00663D39: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00663D40: mov dword ptr [ecx + 0x10], 0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x00663D47: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00663D4A: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00663D4F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00663D4F: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x00663D56: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x00663D59: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00663D5C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00663D63: pop ecx */
    edi = POP32_VAL(esp); /* 0x00663D64: pop edi */
    esi = POP32_VAL(esp); /* 0x00663D65: pop esi */
    esp = ebp; /* 0x00663D66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663D68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00663D69: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00663D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663D70u);

L_00663D70:
    PUSH32(esp, ebx); /* 0x00663D70: push ebx */
    ebx = MEM32(0x7CC694); /* 0x00663D71: mov ebx, dword ptr [0x7cc694] */
    PUSH32(esp, esi); /* 0x00663D77: push esi */
    esi = ecx; /* 0x00663D78: mov esi, ecx */
    PUSH32(esp, edi); /* 0x00663D7A: push edi */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x00663D7B: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00663DC6; /* 0x00663D7F: je 0x663dc6 */
L_00663D81:
    eax = MEM32(esi + 0xC); /* 0x00663D81: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x10); /* 0x00663D84: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00663D87: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x00663D88: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x8); /* 0x00663D8A: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00663D8D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x00663D8E: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x00663D90: mov eax, dword ptr [esi + 4] */
    edi = MEM32(eax + ecx * 4); /* 0x00663D93: mov edi, dword ptr [eax + ecx*4] */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x00663D96: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663DA3; /* 0x00663D9A: jb 0x663da3 */
L_00663D9C:
    PUSH32(esp, MEM32(edi)); /* 0x00663D9C: push dword ptr [edi] */
    RECOMP_ICALL(ebx); /* 0x00663D9E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663DA0: add esp, 4 */
    _flag_k = FK_ADD;
L_00663DA3:
    MEM32(edi + 0x14) = 0xFu; /* 0x00663DA3: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x00663DAA: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x00663DB1: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x00663DB4: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00663DC0; /* 0x00663DB7: jne 0x663dc0 */
L_00663DB9:
    MEM32(esi + 0xC) = 0; /* 0x00663DB9: mov dword ptr [esi + 0xc], 0 */
L_00663DC0:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x00663DC0: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00663D81; /* 0x00663DC4: jne 0x663d81 */
L_00663DC6:
    edi = MEM32(esi + 0x8); /* 0x00663DC6: mov edi, dword ptr [esi + 8] */
    /* test edi, edi */ /* 0x00663DC9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663DE5; /* 0x00663DCB: je 0x663de5 */
L_00663DCD:
    ecx = ecx; /* 0x00663DCD: lea ecx, [ecx] */
L_00663DD0:
    eax = MEM32(esi + 0x4); /* 0x00663DD0: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00663DD3: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(eax + edi * 4); /* 0x00663DD4: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x00663DD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663DE1; /* 0x00663DD9: je 0x663de1 */
L_00663DDB:
    PUSH32(esp, eax); /* 0x00663DDB: push eax */
    RECOMP_ICALL(ebx); /* 0x00663DDC: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663DDE: add esp, 4 */
    _flag_k = FK_ADD;
L_00663DE1:
    /* test edi, edi */ /* 0x00663DE1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663DD0; /* 0x00663DE3: jne 0x663dd0 */
L_00663DE5:
    eax = MEM32(esi + 0x4); /* 0x00663DE5: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x00663DE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663DF2; /* 0x00663DEA: je 0x663df2 */
L_00663DEC:
    PUSH32(esp, eax); /* 0x00663DEC: push eax */
    RECOMP_ICALL(ebx); /* 0x00663DED: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663DEF: add esp, 4 */
    _flag_k = FK_ADD;
L_00663DF2:
    edi = POP32_VAL(esp); /* 0x00663DF2: pop edi */
    MEM32(esi + 0x4) = 0; /* 0x00663DF3: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x00663DFA: mov dword ptr [esi + 8], 0 */
    esi = POP32_VAL(esp); /* 0x00663E01: pop esi */
    ebx = POP32_VAL(esp); /* 0x00663E02: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00663E03: ret  */
    RECOMP_REGS_OUT();
}

void sub_00663E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663E10u);

L_00663E10:
    PUSH32(esp, ebp); /* 0x00663E10: push ebp */
    ebp = esp; /* 0x00663E11: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00663E13: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x10); /* 0x00663E16: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0xC); /* 0x00663E19: add edx, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx); /* 0x00663E1C: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = 0; /* 0x00663E1E: mov dword ptr [eax + 4], 0 */
    MEM32(eax) = ecx; /* 0x00663E25: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = edx; /* 0x00663E27: mov dword ptr [eax + 8], edx */
    ebp = POP32_VAL(esp); /* 0x00663E2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00663E2B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00663E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663E30u);

L_00663E30:
    PUSH32(esp, ebp); /* 0x00663E30: push ebp */
    ebp = esp; /* 0x00663E31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00663E33: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00663E36: push ebx */
    ebx = ecx; /* 0x00663E37: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x00663E39: push esi */
    esi = 1; /* 0x00663E3A: mov esi, 1 */
    MEM32(ebp + (-0x14)) = ebx; /* 0x00663E3F: mov dword ptr [ebp - 0x14], ebx */
    PUSH32(esp, edi); /* 0x00663E42: push edi */
    edx = MEM32(ebx + 0x8); /* 0x00663E43: mov edx, dword ptr [ebx + 8] */
    /* test edx, edx */ /* 0x00663E46: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = edx; } /* 0x00663E48: cmovne esi, edx */
    goto L_00663E50; /* 0x00663E4B: jmp 0x663e50 */
L_00663E50:
    eax = esi; /* 0x00663E50: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00663E52: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x00663E54: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663E5E; /* 0x00663E57: jb 0x663e5e */
L_00663E59:
    /* cmp esi, 8 */ /* 0x00663E59: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00663E71; /* 0x00663E5C: jae 0x663e71 */
L_00663E5E:
    eax = 0x0AAAAAAAu; /* 0x00663E5E: mov eax, 0xaaaaaaa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00663E63: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x00663E65: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00663FA3; /* 0x00663E67: jb 0x663fa3 */
L_00663E6D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x00663E6D: add esi, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_00663E50; /* 0x00663E6F: jmp 0x663e50 */
L_00663E71:
    edi = MEM32(ebx + 0xC); /* 0x00663E71: mov edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x00663E74: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x00663E76: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00663E79: mov dword ptr [ebp - 4], 0 */
    eax = edx + esi; /* 0x00663E80: lea eax, [edx + esi] */
    /* test eax, eax */ /* 0x00663E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663EA8; /* 0x00663E85: je 0x663ea8 */
L_00663E87:
    /* cmp eax, 0x3FFFFFFFu */ /* 0x00663E87: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00663EA2; /* 0x00663E8C: ja 0x663ea2 */
L_00663E8E:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00663E8E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00663E8E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x00663E91: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00663E92: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663E98: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x00663E9B: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x00663E9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00663EA8; /* 0x00663EA0: jne 0x663ea8 */
L_00663EA2:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00663EA2: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00663EA8:
    ecx = MEM32(ebx + 0x4); /* 0x00663EA8: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x00663EAB: mov eax, dword ptr [ebx + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00663EAE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00663EAE: shl eax, 2 */
    edx = ecx + edi * 4; /* 0x00663EB1: lea edx, [ecx + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00663EB4: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00663EB6: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x00663EB8: mov ecx, dword ptr [ebp - 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00663EBB: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    edi = eax * 4; /* 0x00663EBE: lea edi, [eax*4] */
    eax = MEM32(ebp + (-0x4)); /* 0x00663EC5: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x00663EC8: push edi */
    PUSH32(esp, edx); /* 0x00663EC9: push edx */
    eax = eax + ecx * 4; /* 0x00663ECA: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x00663ECD: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00663ECE: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x00663ED4: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00663ED7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi + eax; /* 0x00663EDA: lea edx, [edi + eax] */
    edi = MEM32(ebp + (-0x8)); /* 0x00663EDD: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = edx; /* 0x00663EE0: mov dword ptr [ebp - 0xc], edx */
    /* cmp edi, esi */ /* 0x00663EE3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00663F2E; /* 0x00663EE5: ja 0x663f2e */
L_00663EE7:
    eax = edi * 4; /* 0x00663EE7: lea eax, [edi*4] */
    edx = esi; /* 0x00663EEE: mov edx, esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00663EF0: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x00663EF3: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x00663EF5: mov dword ptr [ebp - 0x10], edx */
    ebx = eax * 4; /* 0x00663EF8: lea ebx, [eax*4] */
    eax = MEM32(0x7CC68C); /* 0x00663EFF: mov eax, dword ptr [0x7cc68c] */
    PUSH32(esp, ebx); /* 0x00663F04: push ebx */
    PUSH32(esp, ecx); /* 0x00663F05: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x00663F06: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(eax); /* 0x00663F09: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x00663F0B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00663F0E: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ebx + eax; /* 0x00663F11: lea edx, [ebx + eax] */
    /* test ecx, ecx */ /* 0x00663F14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663F21; /* 0x00663F16: je 0x663f21 */
L_00663F18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00663F18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x00663F1A: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x00663F1C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x8)); /* 0x00663F1E: mov edi, dword ptr [ebp - 8] */
L_00663F21:
    ebx = MEM32(ebp + (-0x4)); /* 0x00663F21: mov ebx, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x00663F24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663F80; /* 0x00663F26: je 0x663f80 */
L_00663F28:
    ecx = edi; /* 0x00663F28: mov ecx, edi */
    edi = ebx; /* 0x00663F2A: mov edi, ebx */
    goto L_00663F7C; /* 0x00663F2C: jmp 0x663f7c */
L_00663F2E:
    edi = esi * 4; /* 0x00663F2E: lea edi, [esi*4] */
    eax = edi; /* 0x00663F35: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x00663F37: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00663F3A: push eax */
    eax = MEM32(0x7CC68C); /* 0x00663F3B: mov eax, dword ptr [0x7cc68c] */
    PUSH32(esp, ecx); /* 0x00663F40: push ecx */
    PUSH32(esp, edx); /* 0x00663F41: push edx */
    RECOMP_ICALL(eax); /* 0x00663F42: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x00663F44: mov eax, dword ptr [ebx + 4] */
    ecx = edi + eax; /* 0x00663F47: lea ecx, [edi + eax] */
    edi = MEM32(ebp + (-0x8)); /* 0x00663F4A: mov edi, dword ptr [ebp - 8] */
    edx = edi * 4; /* 0x00663F4D: lea edx, [edi*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00663F54: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x00663F56: add edx, eax */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x00663F58: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ebx = edx * 4; /* 0x00663F5B: lea ebx, [edx*4] */
    PUSH32(esp, ebx); /* 0x00663F62: push ebx */
    PUSH32(esp, ecx); /* 0x00663F63: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00663F64: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00663F67: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x00663F6D: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = ebx + eax; /* 0x00663F70: lea edi, [ebx + eax] */
    ebx = MEM32(ebp + (-0x4)); /* 0x00663F73: mov ebx, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x00663F76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663F80; /* 0x00663F78: je 0x663f80 */
L_00663F7A:
    ecx = esi; /* 0x00663F7A: mov ecx, esi */
L_00663F7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00663F7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x00663F7E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_00663F80:
    edi = MEM32(ebp + (-0x14)); /* 0x00663F80: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(edi + 0x4); /* 0x00663F83: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x00663F86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663F94; /* 0x00663F88: je 0x663f94 */
L_00663F8A:
    PUSH32(esp, eax); /* 0x00663F8A: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00663F8B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00663F91: add esp, 4 */
    _flag_k = FK_ADD;
L_00663F94:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + esi; /* 0x00663F94: add dword ptr [edi + 8], esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = ebx; /* 0x00663F97: mov dword ptr [edi + 4], ebx */
    edi = POP32_VAL(esp); /* 0x00663F9A: pop edi */
    esi = POP32_VAL(esp); /* 0x00663F9B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00663F9C: pop ebx */
    esp = ebp; /* 0x00663F9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00663F9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00663FA0: ret 4 */
L_00663FA3:
    PUSH32(esp, 0x007F659Cu); /* 0x00663FA3: push 0x7f659c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00663FA8: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00663FAEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00663FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663FB0u);

L_00663FB0:
    PUSH32(esp, ebp); /* 0x00663FB0: push ebp */
    ebp = esp; /* 0x00663FB1: mov ebp, esp */
    eax = MEM32(ecx); /* 0x00663FB3: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x00663FB5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00663FB6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x00663FB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663FC4; /* 0x00663FBA: je 0x663fc4 */
L_00663FBC:
    eax = MEM32(eax); /* 0x00663FBC: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x00663FBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663FC4; /* 0x00663FC0: je 0x663fc4 */
L_00663FC2:
    esi = MEM32(eax); /* 0x00663FC2: mov esi, dword ptr [eax] */
L_00663FC4:
    eax = MEM32(ebp + 0x8); /* 0x00663FC4: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x8); /* 0x00663FC7: mov edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00663FCA: dec edx */
    _flag_k = FK_DEC;
    MEM32(eax) = 0; /* 0x00663FCB: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x00663FD1: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = edx; /* 0x00663FD8: mov dword ptr [eax + 8], edx */
    /* test esi, esi */ /* 0x00663FDB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663FE9; /* 0x00663FDD: je 0x663fe9 */
L_00663FDF:
    ecx = MEM32(esi); /* 0x00663FDF: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x00663FE1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00663FE9; /* 0x00663FE3: je 0x663fe9 */
L_00663FE5:
    ecx = MEM32(ecx); /* 0x00663FE5: mov ecx, dword ptr [ecx] */
    MEM32(eax) = ecx; /* 0x00663FE7: mov dword ptr [eax], ecx */
L_00663FE9:
    esi = POP32_VAL(esp); /* 0x00663FE9: pop esi */
    ebp = POP32_VAL(esp); /* 0x00663FEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00663FEB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00663FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00663FF0u);

L_00663FF0:
    PUSH32(esp, ebp); /* 0x00663FF0: push ebp */
    ebp = esp; /* 0x00663FF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00663FF3: push -1 */
    PUSH32(esp, 0x007BBD65u); /* 0x00663FF5: push 0x7bbd65 */
    eax = MEM32(FS_BASE + (0)); /* 0x00663FFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664000: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00664001: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00664004: push ebx */
    PUSH32(esp, esi); /* 0x00664005: push esi */
    PUSH32(esp, edi); /* 0x00664006: push edi */
    eax = MEM32(0x855000); /* 0x00664007: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066400C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066400E: push eax */
    eax = ebp + (-0xC); /* 0x0066400F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664012: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00664018: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_006641C0); /* 0x0066401B: call 0x6641c0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00664020: mov edx, eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x00664022: mov dword ptr [ebp - 0x14], edx */
    MEM16(edx + 0xC) = (uint16_t)(0); /* 0x00664025: mov word ptr [edx + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066402B: mov dword ptr [ebp - 4], 0 */
    esi = edx + 0x10; /* 0x00664032: lea esi, [edx + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00664035: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x00664039: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066405C; /* 0x0066403B: je 0x66405c */
L_0066403D:
    ecx = MEM32(ebp + 0x8); /* 0x0066403D: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x00664040: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x00664042: mov dword ptr [esi], eax */
    _xmm[0] = xmm_ld(ecx + 0x4); /* 0x00664044: movdqu xmm0, xmmword ptr [ecx + 4] */
    xmm_st(esi + 0x4, _xmm[0]); /* 0x00664049: movdqu xmmword ptr [esi + 4], xmm0 */
    eax = MEM32(ecx + 0x14); /* 0x0066404E: mov eax, dword ptr [ecx + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x00664051: mov dword ptr [esi + 0x14], eax */
    SET_LO16(eax, MEM16(ecx + 0x18)); /* 0x00664054: mov ax, word ptr [ecx + 0x18] */
    MEM16(esi + 0x18) = (uint16_t)(LO16(eax)); /* 0x00664058: mov word ptr [esi + 0x18], ax */
L_0066405C:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0066405C: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664060: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edx; /* 0x00664067: mov eax, edx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664069: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066406C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664073: pop ecx */
    edi = POP32_VAL(esp); /* 0x00664074: pop edi */
    esi = POP32_VAL(esp); /* 0x00664075: pop esi */
    ebx = POP32_VAL(esp); /* 0x00664076: pop ebx */
    esp = ebp; /* 0x00664077: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664079: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066407A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0066407D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066407Du);

L_0066407D:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0066407D: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664080: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664086: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00664089: push 0 */
    PUSH32(esp, 0); /* 0x0066408B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0066408D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00664092u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006640A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006640A0u);

L_006640A0:
    PUSH32(esp, ebp); /* 0x006640A0: push ebp */
    ebp = esp; /* 0x006640A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006640A3: push -1 */
    PUSH32(esp, 0x007BBD80u); /* 0x006640A5: push 0x7bbd80 */
    eax = MEM32(FS_BASE + (0)); /* 0x006640AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006640B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006640B1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006640B4: push ebx */
    PUSH32(esp, esi); /* 0x006640B5: push esi */
    PUSH32(esp, edi); /* 0x006640B6: push edi */
    eax = MEM32(0x855000); /* 0x006640B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006640BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006640BE: push eax */
    eax = ebp + (-0xC); /* 0x006640BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006640C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006640C8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x006640CB: mov dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(eax, 0); /* 0x006640CE: xor ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x11)) = (uint8_t)(HI8(eax)); /* 0x006640D0: mov byte ptr [ebp - 0x11], ah */
    MEM32(ebp + (-0x4)) = 0; /* 0x006640D3: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x006640DA: mov edi, dword ptr [ecx] */
    edx = MEM32(edi + 0x4); /* 0x006640DC: mov edx, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x006640DF: mov al, 1 */
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(eax)); /* 0x006640E1: mov byte ptr [ebp - 0x15], al */
    ebx = MEM32(ebp + 0x10); /* 0x006640E4: mov ebx, dword ptr [ebp + 0x10] */
L_006640E7:
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x006640E7: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066411B; /* 0x006640EB: jne 0x66411b */
L_006640ED:
    edi = edx; /* 0x006640ED: mov edi, edx */
    /* test HI8(eax), HI8(eax) */ /* 0x006640EF: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006640FD; /* 0x006640F1: je 0x6640fd */
L_006640F3:
    eax = MEM32(edx + 0x10); /* 0x006640F3: mov eax, dword ptr [edx + 0x10] */
    /* cmp eax, MEM32(ebx) */ /* 0x006640F6: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_AE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006640F8: setae al */
    goto L_00664105; /* 0x006640FB: jmp 0x664105 */
L_006640FD:
    eax = MEM32(ebx); /* 0x006640FD: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x006640FF: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_B(_flag_a, _flag_b)) ? 1 : 0); /* 0x00664102: setb al */
L_00664105:
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(eax)); /* 0x00664105: mov byte ptr [ebp - 0x15], al */
    /* test LO8(eax), LO8(eax) */ /* 0x00664108: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664113; /* 0x0066410A: je 0x664113 */
L_0066410C:
    edx = MEM32(edx); /* 0x0066410C: mov edx, dword ptr [edx] */
    SET_HI8(eax, MEM8(ebp + (-0x11))); /* 0x0066410E: mov ah, byte ptr [ebp - 0x11] */
    RECOMP_BACKEDGE();
    goto L_006640E7; /* 0x00664111: jmp 0x6640e7 */
L_00664113:
    edx = MEM32(edx + 0x8); /* 0x00664113: mov edx, dword ptr [edx + 8] */
    SET_HI8(eax, MEM8(ebp + (-0x11))); /* 0x00664116: mov ah, byte ptr [ebp - 0x11] */
    RECOMP_BACKEDGE();
    goto L_006640E7; /* 0x00664119: jmp 0x6640e7 */
L_0066411B:
    esi = edi; /* 0x0066411B: mov esi, edi */
    MEM32(ebp + 0x10) = esi; /* 0x0066411D: mov dword ptr [ebp + 0x10], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x00664120: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664167; /* 0x00664122: je 0x664167 */
L_00664124:
    eax = MEM32(ecx); /* 0x00664124: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x00664126: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664159; /* 0x00664128: jne 0x664159 */
L_0066412A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0066412A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x0066412D: push ecx */
    PUSH32(esp, edi); /* 0x0066412E: push edi */
    PUSH32(esp, 1); /* 0x0066412F: push 1 */
L_00664131:
    eax = ebp + 0x10; /* 0x00664131: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x00664134: push eax */
    RECOMP_CALL(sub_00664260); /* 0x00664135: call 0x664260 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x0066413A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x0066413C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x0066413F: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x00664141: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664145: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664148: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066414F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00664150: pop edi */
    esi = POP32_VAL(esp); /* 0x00664151: pop esi */
    ebx = POP32_VAL(esp); /* 0x00664152: pop ebx */
    esp = ebp; /* 0x00664153: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664155: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00664156: ret 0x10 */
L_00664159:
    ecx = ebp + 0x10; /* 0x00664159: lea ecx, [ebp + 0x10] */
    RECOMP_CALL(sub_0041B310); /* 0x0066415C: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x00664161: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x00664164: mov ecx, dword ptr [ebp - 0x1c] */
L_00664167:
    eax = MEM32(esi + 0x10); /* 0x00664167: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0066416A: push dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(ebx) */ /* 0x0066416D: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00664178; /* 0x0066416F: jae 0x664178 */
L_00664171:
    PUSH32(esp, ecx); /* 0x00664171: push ecx */
    PUSH32(esp, edi); /* 0x00664172: push edi */
    PUSH32(esp, MEM32(ebp + (-0x15))); /* 0x00664173: push dword ptr [ebp - 0x15] */
    RECOMP_BACKEDGE();
    goto L_00664131; /* 0x00664176: jmp 0x664131 */
L_00664178:
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664178: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066417E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x00664181: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x00664184: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x00664186: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066418A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066418D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664194: pop ecx */
    edi = POP32_VAL(esp); /* 0x00664195: pop edi */
    esi = POP32_VAL(esp); /* 0x00664196: pop esi */
    ebx = POP32_VAL(esp); /* 0x00664197: pop ebx */
    esp = ebp; /* 0x00664198: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066419A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0066419B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0066419E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0066419Eu);

L_0066419E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0066419E: push dword ptr [ebp + 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006641A1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006641A7: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006641AA: push 0 */
    PUSH32(esp, 0); /* 0x006641AC: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006641AE: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006641B3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006641C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006641C0u);

L_006641C0:
    PUSH32(esp, ebp); /* 0x006641C0: push ebp */
    ebp = esp; /* 0x006641C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006641C3: push -1 */
    PUSH32(esp, 0x007BBDA0u); /* 0x006641C5: push 0x7bbda0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006641CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006641D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006641D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006641D4: push ebx */
    PUSH32(esp, esi); /* 0x006641D5: push esi */
    PUSH32(esp, edi); /* 0x006641D6: push edi */
    eax = MEM32(0x855000); /* 0x006641D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006641DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006641DE: push eax */
    eax = ebp + (-0xC); /* 0x006641DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006641E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006641E8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x006641EB: mov edi, ecx */
    PUSH32(esp, 0x2Cu); /* 0x006641ED: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006641EF: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006641F5: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006641F8: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x006641FA: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x006641FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00664207; /* 0x006641FF: jne 0x664207 */
L_00664201:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00664201: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00664207:
    MEM32(ebp + (-0x4)) = 0; /* 0x00664207: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x0066420E: push edi */
    PUSH32(esp, esi); /* 0x0066420F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x00664210: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x00664215: push edi */
    eax = esi + 0x4; /* 0x00664216: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x00664219: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x0066421A: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x0066421F: push edi */
    eax = esi + 0x8; /* 0x00664220: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x00664223: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x00664224: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664229: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00664230: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664232: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664235: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066423C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066423D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066423E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066423F: pop ebx */
    esp = ebp; /* 0x00664240: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664242: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664243: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664244(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664244u);

L_00664244:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00664244: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664247: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066424D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00664250: push 0 */
    PUSH32(esp, 0); /* 0x00664252: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00664254: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00664259u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00664260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664260u);

L_00664260:
    PUSH32(esp, ebp); /* 0x00664260: push ebp */
    ebp = esp; /* 0x00664261: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00664263: push ebx */
    PUSH32(esp, esi); /* 0x00664264: push esi */
    PUSH32(esp, edi); /* 0x00664265: push edi */
    edi = ecx; /* 0x00664266: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x00664268: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 0x05D1745Cu */ /* 0x0066426B: cmp eax, 0x5d1745c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05D1745Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00664289; /* 0x00664270: jb 0x664289 */
L_00664272:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x00664272: push dword ptr [ebp + 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664275: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066427B: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x0066427E: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00664283: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00664289:
    ebx = MEM32(ebp + 0x18); /* 0x00664289: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0066428C: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x0066428D: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x00664290: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x00664293: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x00664296: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x00664298: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006642AA; /* 0x0066429A: jne 0x6642aa */
L_0066429C:
    MEM32(ecx + 0x4) = ebx; /* 0x0066429C: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x0066429F: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x006642A1: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x006642A3: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x006642A5: mov dword ptr [eax + 8], ebx */
    goto L_006642C9; /* 0x006642A8: jmp 0x6642c9 */
L_006642AA:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x006642AA: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006642BC; /* 0x006642AE: je 0x6642bc */
L_006642B0:
    MEM32(eax) = ebx; /* 0x006642B0: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x006642B2: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x006642B4: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006642C9; /* 0x006642B6: jne 0x6642c9 */
L_006642B8:
    MEM32(ecx) = ebx; /* 0x006642B8: mov dword ptr [ecx], ebx */
    goto L_006642C9; /* 0x006642BA: jmp 0x6642c9 */
L_006642BC:
    MEM32(eax + 0x8) = ebx; /* 0x006642BC: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x006642BF: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x006642C1: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006642C9; /* 0x006642C4: jne 0x6642c9 */
L_006642C6:
    MEM32(ecx + 0x8) = ebx; /* 0x006642C6: mov dword ptr [ecx + 8], ebx */
L_006642C9:
    eax = MEM32(ebx + 0x4); /* 0x006642C9: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x006642CC: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x006642CE: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006643E2; /* 0x006642D2: jne 0x6643e2 */
L_006642D8:
    eax = MEM32(esi + 0x4); /* 0x006642D8: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006642DB: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x006642DE: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x006642E0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664358; /* 0x006642E2: jne 0x664358 */
L_006642E4:
    ecx = MEM32(edx + 0x8); /* 0x006642E4: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x006642E7: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0066435E; /* 0x006642EB: je 0x66435e */
L_006642ED:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x006642ED: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006642FC; /* 0x006642F0: jne 0x6642fc */
L_006642F2:
    esi = eax; /* 0x006642F2: mov esi, eax */
    ecx = edi; /* 0x006642F4: mov ecx, edi */
    PUSH32(esp, esi); /* 0x006642F6: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x006642F7: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_006642FC:
    eax = MEM32(esi + 0x4); /* 0x006642FC: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006642FF: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x00664303: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x00664306: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x00664309: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x0066430D: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x00664310: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x00664313: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x00664315: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x00664318: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x0066431A: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0066431D: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664326; /* 0x00664321: jne 0x664326 */
L_00664323:
    MEM32(eax + 0x4) = ecx; /* 0x00664323: mov dword ptr [eax + 4], ecx */
L_00664326:
    eax = MEM32(ecx + 0x4); /* 0x00664326: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x00664329: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x0066432C: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x0066432E: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0066433E; /* 0x00664331: jne 0x66433e */
L_00664333:
    MEM32(eax + 0x4) = edx; /* 0x00664333: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00664336: mov dword ptr [edx + 8], ecx */
    goto L_006643D2; /* 0x00664339: jmp 0x6643d2 */
L_0066433E:
    eax = MEM32(ecx + 0x4); /* 0x0066433E: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x00664341: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664351; /* 0x00664344: jne 0x664351 */
L_00664346:
    MEM32(eax + 0x8) = edx; /* 0x00664346: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00664349: mov dword ptr [edx + 8], ecx */
    goto L_006643D2; /* 0x0066434C: jmp 0x6643d2 */
L_00664351:
    MEM32(eax) = edx; /* 0x00664351: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00664353: mov dword ptr [edx + 8], ecx */
    goto L_006643D2; /* 0x00664356: jmp 0x6643d2 */
L_00664358:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00664358: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664378; /* 0x0066435C: jne 0x664378 */
L_0066435E:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0066435E: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x00664362: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x00664366: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x00664369: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x0066436C: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x00664370: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x00664373: mov esi, dword ptr [eax + 4] */
    goto L_006643D5; /* 0x00664376: jmp 0x6643d5 */
L_00664378:
    /* cmp esi, MEM32(eax) */ /* 0x00664378: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00664386; /* 0x0066437A: jne 0x664386 */
L_0066437C:
    esi = eax; /* 0x0066437C: mov esi, eax */
    ecx = edi; /* 0x0066437E: mov ecx, edi */
    PUSH32(esp, esi); /* 0x00664380: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x00664381: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_00664386:
    eax = MEM32(esi + 0x4); /* 0x00664386: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00664389: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x0066438D: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x00664390: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x00664393: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x00664397: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x0066439A: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x0066439D: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x006643A0: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x006643A2: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x006643A5: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006643A7: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006643B0; /* 0x006643AB: jne 0x6643b0 */
L_006643AD:
    MEM32(eax + 0x4) = ecx; /* 0x006643AD: mov dword ptr [eax + 4], ecx */
L_006643B0:
    eax = MEM32(ecx + 0x4); /* 0x006643B0: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x006643B3: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x006643B6: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x006643B8: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006643C2; /* 0x006643BB: jne 0x6643c2 */
L_006643BD:
    MEM32(eax + 0x4) = edx; /* 0x006643BD: mov dword ptr [eax + 4], edx */
    goto L_006643D0; /* 0x006643C0: jmp 0x6643d0 */
L_006643C2:
    eax = MEM32(ecx + 0x4); /* 0x006643C2: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x006643C5: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006643CD; /* 0x006643C7: jne 0x6643cd */
L_006643C9:
    MEM32(eax) = edx; /* 0x006643C9: mov dword ptr [eax], edx */
    goto L_006643D0; /* 0x006643CB: jmp 0x6643d0 */
L_006643CD:
    MEM32(eax + 0x8) = edx; /* 0x006643CD: mov dword ptr [eax + 8], edx */
L_006643D0:
    MEM32(edx) = ecx; /* 0x006643D0: mov dword ptr [edx], ecx */
L_006643D2:
    MEM32(ecx + 0x4) = edx; /* 0x006643D2: mov dword ptr [ecx + 4], edx */
L_006643D5:
    eax = MEM32(esi + 0x4); /* 0x006643D5: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x006643D8: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006642D8; /* 0x006643DC: je 0x6642d8 */
L_006643E2:
    eax = MEM32(edi); /* 0x006643E2: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x006643E4: pop edi */
    esi = POP32_VAL(esp); /* 0x006643E5: pop esi */
    eax = MEM32(eax + 0x4); /* 0x006643E6: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006643E9: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x006643ED: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x006643F0: mov dword ptr [eax], ebx */
    ebx = POP32_VAL(esp); /* 0x006643F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006643F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006643F4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_00664400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664400u);

L_00664400:
    PUSH32(esp, ebp); /* 0x00664400: push ebp */
    ebp = esp; /* 0x00664401: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664403: push -1 */
    PUSH32(esp, 0x007BBDCCu); /* 0x00664405: push 0x7bbdcc */
    eax = MEM32(FS_BASE + (0)); /* 0x0066440A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664410: push eax */
    PUSH32(esp, ecx); /* 0x00664411: push ecx */
    PUSH32(esp, esi); /* 0x00664412: push esi */
    PUSH32(esp, edi); /* 0x00664413: push edi */
    eax = MEM32(0x855000); /* 0x00664414: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664419: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066441B: push eax */
    eax = ebp + (-0xC); /* 0x0066441C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066441F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664425: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00664427: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x00230023u; /* 0x00664429: mov dword ptr [esi], 0x230023 */
    eax = 0x23u; /* 0x0066442F: mov eax, 0x23 */
    edx = 0x20u; /* 0x00664434: mov edx, 0x20 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x00664439: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x0066443B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x0066443E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00664440: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00664442: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00664444: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x00664447: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0066444A: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0066444C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066444E: push eax */
    RECOMP_CALL(sub_0077F3DF); /* 0x0066444F: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664454: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x00664457: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066445A: mov dword ptr [ebp - 4], 0 */
    /* test eax, eax */ /* 0x00664461: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664484; /* 0x00664463: je 0x664484 */
L_00664465:
    PUSH32(esp, 0x004296F0u); /* 0x00664465: push 0x4296f0 */
    PUSH32(esp, 0x004BDB60u); /* 0x0066446A: push 0x4bdb60 */
    PUSH32(esp, 0x23u); /* 0x0066446F: push 0x23 */
    edi = eax + 0x4; /* 0x00664471: lea edi, [eax + 4] */
    MEM32(eax) = 0x23u; /* 0x00664474: mov dword ptr [eax], 0x23 */
    PUSH32(esp, 0x20u); /* 0x0066447A: push 0x20 */
    PUSH32(esp, edi); /* 0x0066447C: push edi */
    RECOMP_CALL(sub_0077F6F5); /* 0x0066447D: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    goto L_00664486; /* 0x00664482: jmp 0x664486 */
L_00664484:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00664484: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00664486:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664486: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066448D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x0066448F: mov word ptr [esi + 4], ax */
    eax = esi; /* 0x00664493: mov eax, esi */
    MEM32(esi + 0xC) = edi; /* 0x00664495: mov dword ptr [esi + 0xc], edi */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x00664498: mov byte ptr [esi + 0x18], 0 */
    MEM32(esi + 0x6) = 0xFFFF0000u; /* 0x0066449C: mov dword ptr [esi + 6], 0xffff0000 */
    MEM32(esi + 0x10) = 0xAu; /* 0x006644A3: mov dword ptr [esi + 0x10], 0xa */
    MEM32(esi + 0x14) = 0xAu; /* 0x006644AA: mov dword ptr [esi + 0x14], 0xa */
    ecx = MEM32(ebp + (-0xC)); /* 0x006644B1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006644B4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006644BB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006644BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006644BD: pop esi */
    esp = ebp; /* 0x006644BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006644C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006644C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006644D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006644D0u);

L_006644D0:
    PUSH32(esp, ebp); /* 0x006644D0: push ebp */
    ebp = esp; /* 0x006644D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006644D3: push -1 */
    PUSH32(esp, 0x007AD058u); /* 0x006644D5: push 0x7ad058 */
    eax = MEM32(FS_BASE + (0)); /* 0x006644DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006644E0: push eax */
    PUSH32(esp, esi); /* 0x006644E1: push esi */
    eax = MEM32(0x855000); /* 0x006644E2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006644E7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006644E9: push eax */
    eax = ebp + (-0xC); /* 0x006644EA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006644ED: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x006644F3: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(0x871984); /* 0x006644FA: mov esi, dword ptr [0x871984] */
    ecx = (uint32_t)MEM16(esi); /* 0x00664500: movzx ecx, word ptr [esi] */
    _flag_a = (uint32_t)(MEM16(esi + 0x8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x8) = (uint16_t)(MEM16(esi + 0x8) + 1); /* 0x00664503: inc word ptr [esi + 8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* cmp MEM16(esi + 0x8), LO16(ecx) */ /* 0x00664507: cmp word ptr [esi + 8], cx */
    _flag_a = (uint32_t)(MEM16(esi + 0x8)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_00664513; /* 0x0066450B: jb 0x664513 */
L_0066450D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0066450D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x0066450F: mov word ptr [esi + 8], ax */
L_00664513:
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x4) = (uint16_t)(MEM16(esi + 0x4) + 1); /* 0x00664513: inc word ptr [esi + 4] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* cmp MEM16(esi + 0x4), LO16(ecx) */ /* 0x00664517: cmp word ptr [esi + 4], cx */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_00664536; /* 0x0066451B: jbe 0x664536 */
L_0066451D:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x0066451D: movzx eax, word ptr [esi + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x00664521: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(esi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x00664523: mov word ptr [esi + 4], cx */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x00664527: mov word ptr [esi + 6], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x0066452B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_00664536; /* 0x0066452E: jb 0x664536 */
L_00664530:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00664530: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x00664532: mov word ptr [esi + 6], ax */
L_00664536:
    ecx = (uint32_t)MEM16(esi + 0x8); /* 0x00664536: movzx ecx, word ptr [esi + 8] */
    eax = ebp + 0x8; /* 0x0066453A: lea eax, [ebp + 8] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x0066453D: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x0066453D: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0xC); /* 0x00664540: add ecx, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x00664543: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00664551; /* 0x00664545: je 0x664551 */
L_00664547:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664547: push -1 */
    PUSH32(esp, 0); /* 0x00664549: push 0 */
    PUSH32(esp, eax); /* 0x0066454B: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0066454C: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00664551:
    edx = (uint32_t)MEM16(esi + 0x8); /* 0x00664551: movzx edx, word ptr [esi + 8] */
    ecx = MEM32(esi + 0xC); /* 0x00664555: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x20); /* 0x00664558: mov eax, dword ptr [ebp + 0x20] */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x0066455B: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x0066455B: shl edx, 5 */
    MEM32(edx + ecx + 0x18) = eax; /* 0x0066455E: mov dword ptr [edx + ecx + 0x18], eax */
    ecx = (uint32_t)MEM16(esi + 0x8); /* 0x00664562: movzx ecx, word ptr [esi + 8] */
    eax = MEM32(esi + 0xC); /* 0x00664566: mov eax, dword ptr [esi + 0xc] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x00664569: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x00664569: shl ecx, 5 */
    MEM32(ecx + eax + 0x1C) = 0; /* 0x0066456C: mov dword ptr [ecx + eax + 0x1c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664574: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0066457B: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0066458D; /* 0x0066457F: jb 0x66458d */
L_00664581:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00664581: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664584: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066458A: add esp, 4 */
    _flag_k = FK_ADD;
L_0066458D:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0066458D: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x00664594: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0066459B: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066459F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006645A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006645A9: pop ecx */
    esi = POP32_VAL(esp); /* 0x006645AA: pop esi */
    esp = ebp; /* 0x006645AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006645AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x006645AE: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_006645C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006645C0u);

L_006645C0:
    PUSH32(esp, ebp); /* 0x006645C0: push ebp */
    ebp = esp; /* 0x006645C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006645C3: push -1 */
    PUSH32(esp, 0x00781699u); /* 0x006645C5: push 0x781699 */
    eax = MEM32(FS_BASE + (0)); /* 0x006645CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006645D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006645D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006645D4: push esi */
    eax = MEM32(0x855000); /* 0x006645D5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006645DA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006645DC: push eax */
    eax = ebp + (-0xC); /* 0x006645DD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006645E0: mov dword ptr fs:[0], eax */
    SET_LO16(ecx, MEM16(ebp + 0xC)); /* 0x006645E6: mov cx, word ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(ecx); /* 0x006645EA: movzx eax, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006645ED: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = 0; /* 0x006645EE: mov dword ptr [ebp - 0x10], 0 */
    edx = MEM32(0x871984); /* 0x006645F5: mov edx, dword ptr [0x871984] */
    /* cmp eax, 1 */ /* 0x006645FB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00664648; /* 0x006645FE: jl 0x664648 */
L_00664600:
    /* cmp LO16(ecx), MEM16(edx + 0x4) */ /* 0x00664600: cmp cx, word ptr [edx + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00664648; /* 0x00664604: jae 0x664648 */
L_00664606:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x6)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + MEM16(edx + 0x6)); /* 0x00664606: add cx, word ptr [edx + 6] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)MEM16(edx); /* 0x0066460A: movzx eax, word ptr [edx] */
    MEM16(ebp + 0xC) = (uint16_t)(LO16(ecx)); /* 0x0066460D: mov word ptr [ebp + 0xc], cx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x00664611: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_0066461D; /* 0x00664614: jb 0x66461d */
L_00664616:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax; /* 0x00664616: sub dword ptr [ebp + 0xc], eax */
    _flag_k = FK_CMP;
    SET_LO16(ecx, MEM16(ebp + 0xC)); /* 0x00664619: mov cx, word ptr [ebp + 0xc] */
L_0066461D:
    esi = MEM32(ebp + 0x8); /* 0x0066461D: mov esi, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(ecx); /* 0x00664620: movzx ecx, cx */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x00664623: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x00664623: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0xC); /* 0x00664626: add ecx, dword ptr [edx + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664629: push -1 */
    PUSH32(esp, 0); /* 0x0066462B: push 0 */
    PUSH32(esp, ecx); /* 0x0066462D: push ecx */
    MEM32(esi + 0x14) = 0xFu; /* 0x0066462E: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x00664635: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x00664637: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0066463E: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00664641: call 0x40a030 */
    RECOMP_FLAGS_IN();
    goto L_0066466A; /* 0x00664646: jmp 0x66466a */
L_00664648:
    esi = MEM32(ebp + 0x8); /* 0x00664648: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x0066464B: mov ecx, esi */
    PUSH32(esp, 0x12u); /* 0x0066464D: push 0x12 */
    PUSH32(esp, 0x007FC17Cu); /* 0x0066464F: push 0x7fc17c */
    MEM32(esi + 0x14) = 0xFu; /* 0x00664654: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0066465B: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00664662: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00664665: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
L_0066466A:
    MEM32(ebp + (-0x4)) = 0; /* 0x0066466A: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00664671: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x00664678: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066467A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066467D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664684: pop ecx */
    esi = POP32_VAL(esp); /* 0x00664685: pop esi */
    esp = ebp; /* 0x00664686: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664688: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00664689: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00664690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664690u);

L_00664690:
    PUSH32(esp, ebp); /* 0x00664690: push ebp */
    ebp = esp; /* 0x00664691: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00664693: push ecx */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x00664694: mov cx, word ptr [ebp + 8] */
    edx = MEM32(0x871984); /* 0x00664698: mov edx, dword ptr [0x871984] */
    eax = (uint32_t)LO16(ecx); /* 0x0066469E: movzx eax, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006646A1: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x006646A2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006646D7; /* 0x006646A5: jl 0x6646d7 */
L_006646A7:
    /* cmp LO16(ecx), MEM16(edx + 0x4) */ /* 0x006646A7: cmp cx, word ptr [edx + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_006646D7; /* 0x006646AB: jae 0x6646d7 */
L_006646AD:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x6)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + MEM16(edx + 0x6)); /* 0x006646AD: add cx, word ptr [edx + 6] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)MEM16(edx); /* 0x006646B1: movzx eax, word ptr [edx] */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(ecx)); /* 0x006646B4: mov word ptr [ebp + 8], cx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x006646B8: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_006646C4; /* 0x006646BB: jb 0x6646c4 */
L_006646BD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x006646BD: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x006646C0: mov cx, word ptr [ebp + 8] */
L_006646C4:
    eax = MEM32(edx + 0xC); /* 0x006646C4: mov eax, dword ptr [edx + 0xc] */
    ecx = (uint32_t)LO16(ecx); /* 0x006646C7: movzx ecx, cx */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x006646CA: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x006646CA: shl ecx, 5 */
    eax = MEM32(ecx + eax + 0x18); /* 0x006646CD: mov eax, dword ptr [ecx + eax + 0x18] */
    esp = ebp; /* 0x006646D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006646D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006646D4: ret 4 */
L_006646D7:
    eax = 0x00FFFFFFu; /* 0x006646D7: mov eax, 0xffffff */
    esp = ebp; /* 0x006646DC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006646DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006646DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006646F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006646F0u);

L_006646F0:
    PUSH32(esp, ebp); /* 0x006646F0: push ebp */
    ebp = esp; /* 0x006646F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006646F3: push ecx */
    PUSH32(esp, esi); /* 0x006646F4: push esi */
    esi = MEM32(0x871984); /* 0x006646F5: mov esi, dword ptr [0x871984] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006646FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006646FD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(esi + 0x4) */ /* 0x006646FF: cmp ax, word ptr [esi + 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0066472F; /* 0x00664703: jae 0x66472f */
L_00664705:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00664705: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00664710; /* 0x00664707: jmp 0x664710 */
L_00664710:
    eax = MEM32(esi + 0xC); /* 0x00664710: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00664713: inc edx */
    _flag_k = FK_INC;
    _xmm[0].u64[0] = MEM32(eax + ecx + 0x1C); _xmm[0].u64[1] = 0; /* 0x00664714: movss xmm0, dword ptr [eax + ecx + 0x1c] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0066471A: addss xmm0, xmm1 */
    MEM32(eax + ecx + 0x1C) = _xmm[0].u32[0]; /* 0x0066471E: movss dword ptr [eax + ecx + 0x1c], xmm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00664724: add ecx, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x00664727: movzx eax, word ptr [esi + 4] */
    /* cmp edx, eax */ /* 0x0066472B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00664710; /* 0x0066472D: jl 0x664710 */
L_0066472F:
    esi = POP32_VAL(esp); /* 0x0066472F: pop esi */
    esp = ebp; /* 0x00664730: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664733: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664740u);

L_00664740:
    PUSH32(esp, ebp); /* 0x00664740: push ebp */
    ebp = esp; /* 0x00664741: mov ebp, esp */
    eax = MEM32(0x871984); /* 0x00664743: mov eax, dword ptr [0x871984] */
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x00664748: mov cl, byte ptr [ebp + 8] */
    MEM8(eax + 0x18) = (uint8_t)(LO8(ecx)); /* 0x0066474B: mov byte ptr [eax + 0x18], cl */
    ebp = POP32_VAL(esp); /* 0x0066474E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0066474F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664760u);

L_00664760:
    MEM32(ecx + 0x10) = 0xAu; /* 0x00664760: mov dword ptr [ecx + 0x10], 0xa */
    MEM32(ecx + 0x14) = 0xAu; /* 0x00664767: mov dword ptr [ecx + 0x14], 0xa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066476E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664770u);

L_00664770:
    PUSH32(esp, ebp); /* 0x00664770: push ebp */
    ebp = esp; /* 0x00664771: mov ebp, esp */
    eax = MEM32(0x871984); /* 0x00664773: mov eax, dword ptr [0x871984] */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x00664778: mov cx, word ptr [ebp + 8] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0066477C: mov word ptr [eax + 2], cx */
    ebp = POP32_VAL(esp); /* 0x00664780: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00664781: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664790u);

L_00664790:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00664790: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00664792:
    eax = ecx; /* 0x00664792: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00664794: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00664794: shr eax, 1 */
    /* test LO8(ecx), 1 */ /* 0x00664796: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647A0; /* 0x00664799: je 0x6647a0 */
L_0066479B:
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x0066479B: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006647A0:
    /* test LO8(eax), 1 */ /* 0x006647A0: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647AD; /* 0x006647A2: je 0x6647ad */
L_006647A4:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647A4: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647A4: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647A6: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647AF; /* 0x006647AB: jmp 0x6647af */
L_006647AD:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647AD: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647AD: shr eax, 1 */
L_006647AF:
    /* test LO8(eax), 1 */ /* 0x006647AF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647BC; /* 0x006647B1: je 0x6647bc */
L_006647B3:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647B3: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647B3: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647B5: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647BE; /* 0x006647BA: jmp 0x6647be */
L_006647BC:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647BC: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647BC: shr eax, 1 */
L_006647BE:
    /* test LO8(eax), 1 */ /* 0x006647BE: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647CB; /* 0x006647C0: je 0x6647cb */
L_006647C2:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647C2: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647C2: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647C4: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647CD; /* 0x006647C9: jmp 0x6647cd */
L_006647CB:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647CB: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647CB: shr eax, 1 */
L_006647CD:
    /* test LO8(eax), 1 */ /* 0x006647CD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647DA; /* 0x006647CF: je 0x6647da */
L_006647D1:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647D1: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647D1: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647D3: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647DC; /* 0x006647D8: jmp 0x6647dc */
L_006647DA:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647DA: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647DA: shr eax, 1 */
L_006647DC:
    /* test LO8(eax), 1 */ /* 0x006647DC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647E9; /* 0x006647DE: je 0x6647e9 */
L_006647E0:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647E0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647E0: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647E2: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647EB; /* 0x006647E7: jmp 0x6647eb */
L_006647E9:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647E9: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647E9: shr eax, 1 */
L_006647EB:
    /* test LO8(eax), 1 */ /* 0x006647EB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006647F8; /* 0x006647ED: je 0x6647f8 */
L_006647EF:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647EF: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647EF: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x006647F1: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006647FA; /* 0x006647F6: jmp 0x6647fa */
L_006647F8:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647F8: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647F8: shr eax, 1 */
L_006647FA:
    /* test LO8(eax), 1 */ /* 0x006647FA: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664807; /* 0x006647FC: je 0x664807 */
L_006647FE:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006647FE: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006647FE: shr eax, 1 */
    _flag_a = (uint32_t)((eax ^ 0x82F63B78u)); _flag_b = (uint32_t)((eax ^ 0x82F63B78u));
    eax = eax ^ 0x82F63B78u; /* 0x00664800: xor eax, 0x82f63b78 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00664809; /* 0x00664805: jmp 0x664809 */
L_00664807:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00664807: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00664807: shr eax, 1 */
L_00664809:
    MEM32(ecx * 4 + 0x922FE0) = eax; /* 0x00664809: mov dword ptr [ecx*4 + 0x922fe0], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00664810: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x100u */ /* 0x00664811: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00664792; /* 0x00664817: jb 0x664792 */
L_0066481D:
    edx = 0x800u; /* 0x0066481D: mov edx, 0x800 */
L_00664822:
    ecx = MEM32(edx + 0x9227E0); /* 0x00664822: mov ecx, dword ptr [edx + 0x9227e0] */
    eax = (uint32_t)LO8(ecx); /* 0x00664828: movzx eax, cl */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0066482B: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0066482B: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x0066482E: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x00664835: movzx eax, cl */
    MEM32(edx + 0x922BE0) = ecx; /* 0x00664838: mov dword ptr [edx + 0x922be0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0066483E: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0066483E: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x00664841: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x00664848: movzx eax, cl */
    MEM32(edx + 0x922FE0) = ecx; /* 0x0066484B: mov dword ptr [edx + 0x922fe0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00664851: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00664851: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x00664854: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x0066485B: movzx eax, cl */
    MEM32(edx + 0x9233E0) = ecx; /* 0x0066485E: mov dword ptr [edx + 0x9233e0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00664864: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00664864: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x00664867: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x0066486E: movzx eax, cl */
    MEM32(edx + 0x9237E0) = ecx; /* 0x00664871: mov dword ptr [edx + 0x9237e0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x00664877: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x00664877: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x0066487A: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x00664881: movzx eax, cl */
    MEM32(edx + 0x923BE0) = ecx; /* 0x00664884: mov dword ptr [edx + 0x923be0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0066488A: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0066488A: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x0066488D: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x00664894: movzx eax, cl */
    MEM32(edx + 0x923FE0) = ecx; /* 0x00664897: mov dword ptr [edx + 0x923fe0], ecx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0066489D: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0066489D: shr ecx, 8 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((ecx ^ MEM32(eax * 4 + 0x922FE0)));
    ecx = ecx ^ MEM32(eax * 4 + 0x922FE0); /* 0x006648A0: xor ecx, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x9243E0) = ecx; /* 0x006648A7: mov dword ptr [edx + 0x9243e0], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006648AD: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 0xC00u */ /* 0x006648B0: cmp edx, 0xc00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00664822; /* 0x006648B6: jb 0x664822 */
L_006648BC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006648BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006648C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006648C0u);

L_006648C0:
    PUSH32(esp, ebp); /* 0x006648C0: push ebp */
    ebp = esp; /* 0x006648C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006648C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006648C6: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006648C9: push ebx */
    PUSH32(esp, esi); /* 0x006648CA: push esi */
    PUSH32(esp, edi); /* 0x006648CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006648CC: mov edi, dword ptr [ebp + 8] */
    ecx = edx; /* 0x006648CF: mov ecx, edx */
    MEM32(esp + 0x10) = ecx; /* 0x006648D1: mov dword ptr [esp + 0x10], ecx */
    /* test edi, edi */ /* 0x006648D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006648E2; /* 0x006648D7: jne 0x6648e2 */
L_006648D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006648D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006648DB: pop edi */
    esi = POP32_VAL(esp); /* 0x006648DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006648DD: pop ebx */
    esp = ebp; /* 0x006648DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006648E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006648E1: ret  */
L_006648E2:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x006648E2: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006648E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006648E7:
    /* test LO8(ecx), 7 */ /* 0x006648E7: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664917; /* 0x006648EA: je 0x664917 */
L_006648EC:
    ecx = (uint32_t)MEM8(ecx); /* 0x006648EC: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006648EF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x006648F1: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x006648F3: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) _cf = (((ebx) >> 7) & 1u); /* 0x006648F9: shrd ebx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ebx));
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006648FD: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006648FD: shr eax, 8 */
    ecx = MEM32(ecx * 4 + 0x922FE0); /* 0x00664900: mov ecx, dword ptr [ecx*4 + 0x922fe0] */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x00664907: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx ^ ecx)); _flag_b = (uint32_t)((ebx ^ ecx));
    ebx = ebx ^ ecx; /* 0x00664909: xor ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x10); /* 0x0066490B: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0066490F: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0x10) = ecx; /* 0x00664910: mov dword ptr [esp + 0x10], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00664914: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006648E7; /* 0x00664915: jne 0x6648e7 */
L_00664917:
    /* cmp edi, 8 */ /* 0x00664917: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006649DF; /* 0x0066491A: jb 0x6649df */
L_00664920:
    edx = edi; /* 0x00664920: mov edx, edi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00664922: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x00664922: shr edx, 3 */
    MEM32(esp + 0x14) = edx; /* 0x00664925: mov dword ptr [esp + 0x14], edx */
    esp = esp; /* 0x00664929: lea esp, [esp] */
L_00664930:
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x4)));
    eax = eax ^ MEM32(ecx + 0x4); /* 0x00664930: xor eax, dword ptr [ecx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 8; /* 0x00664933: sub edi, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x00664936: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x00664938: mov edx, eax */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x0066493A: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x0066493A: shr edx, 0x10 */
    ecx = eax; /* 0x0066493D: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0066493F: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0066493F: shr ecx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x00664942: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x00664948: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = eax; /* 0x0066494E: mov dword ptr [esp + 0x1c], eax */
    esi = MEM32(edx * 4 + 0x9233E0); /* 0x00664952: mov esi, dword ptr [edx*4 + 0x9233e0] */
    edx = ebx; /* 0x00664959: mov edx, ebx */
    _flag_a = (uint32_t)((esi ^ MEM32(ecx * 4 + 0x9237E0))); _flag_b = (uint32_t)((esi ^ MEM32(ecx * 4 + 0x9237E0)));
    esi = esi ^ MEM32(ecx * 4 + 0x9237E0); /* 0x0066495B: xor esi, dword ptr [ecx*4 + 0x9237e0] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)LO8(eax); /* 0x00664962: movzx ecx, al */
    _flag_a = (uint32_t)((esi ^ MEM32(ecx * 4 + 0x923BE0))); _flag_b = (uint32_t)((esi ^ MEM32(ecx * 4 + 0x923BE0)));
    esi = esi ^ MEM32(ecx * 4 + 0x923BE0); /* 0x00664965: xor esi, dword ptr [ecx*4 + 0x923be0] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0066496C: mov ecx, eax */
    if (1) _cf = (((edx) >> 23) & 1u); /* 0x0066496E: shrd edx, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edx));
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x00664972: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x00664978: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x00664978: shr ecx, 0x18 */
    ecx = eax; /* 0x0066497B: mov ecx, eax */
    _flag_a = (uint32_t)((esi ^ MEM32(edx * 4 + 0x923FE0))); _flag_b = (uint32_t)((esi ^ MEM32(edx * 4 + 0x923FE0)));
    esi = esi ^ MEM32(edx * 4 + 0x923FE0); /* 0x0066497D: xor esi, dword ptr [edx*4 + 0x923fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x00664984: mov edx, ebx */
    if (1) _cf = (((edx) >> 15) & 1u); /* 0x00664986: shrd edx, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (16u)) | ((uint32_t)(ecx) << (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (16u)) | ((uint32_t)(ecx) << (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x0066498A: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00664990: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00664990: shr ecx, 0x10 */
    ecx = eax; /* 0x00664993: mov ecx, eax */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x00664995: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x00664995: shr eax, 0x18 */
    _flag_a = (uint32_t)((esi ^ MEM32(edx * 4 + 0x9243E0))); _flag_b = (uint32_t)((esi ^ MEM32(edx * 4 + 0x9243E0)));
    esi = esi ^ MEM32(edx * 4 + 0x9243E0); /* 0x00664998: xor esi, dword ptr [edx*4 + 0x9243e0] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x0066499F: mov edx, ebx */
    if (1) _cf = (((edx) >> 7) & 1u); /* 0x006649A1: shrd edx, ecx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (8u)) | ((uint32_t)(ecx) << (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (8u)) | ((uint32_t)(ecx) << (32 - (8u)))) : (edx));
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x006649A5: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x006649AB: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x006649AB: shr ecx, 8 */
    ecx = MEM32(esp + 0x10); /* 0x006649AE: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006649B2: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = ecx; /* 0x006649B5: mov dword ptr [esp + 0x10], ecx */
    _flag_a = (uint32_t)((esi ^ MEM32(edx * 4 + 0x9247E0))); _flag_b = (uint32_t)((esi ^ MEM32(edx * 4 + 0x9247E0)));
    esi = esi ^ MEM32(edx * 4 + 0x9247E0); /* 0x006649B9: xor esi, dword ptr [edx*4 + 0x9247e0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ MEM32(eax * 4 + 0x922FE0))); _flag_b = (uint32_t)((esi ^ MEM32(eax * 4 + 0x922FE0)));
    esi = esi ^ MEM32(eax * 4 + 0x922FE0); /* 0x006649C0: xor esi, dword ptr [eax*4 + 0x922fe0] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ebx); /* 0x006649C7: movzx eax, bl */
    _flag_a = (uint32_t)((esi ^ MEM32(eax * 4 + 0x924BE0))); _flag_b = (uint32_t)((esi ^ MEM32(eax * 4 + 0x924BE0)));
    esi = esi ^ MEM32(eax * 4 + 0x924BE0); /* 0x006649CA: xor esi, dword ptr [eax*4 + 0x924be0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006649D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1; /* 0x006649D3: dec dword ptr [esp + 0x14] */
    _flag_k = FK_DEC;
    ebx = esi; /* 0x006649D7: mov ebx, esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00664930; /* 0x006649D9: jne 0x664930 */
L_006649DF:
    /* test edi, edi */ /* 0x006649DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664A0E; /* 0x006649E1: je 0x664a0e */
L_006649E3:
    ecx = (uint32_t)MEM8(ecx); /* 0x006649E3: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006649E6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x006649E8: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x006649EA: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) _cf = (((ebx) >> 7) & 1u); /* 0x006649F0: shrd ebx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ebx));
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006649F4: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006649F4: shr eax, 8 */
    ecx = MEM32(ecx * 4 + 0x922FE0); /* 0x006649F7: mov ecx, dword ptr [ecx*4 + 0x922fe0] */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x006649FE: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx ^ ecx)); _flag_b = (uint32_t)((ebx ^ ecx));
    ebx = ebx ^ ecx; /* 0x00664A00: xor ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x10); /* 0x00664A02: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00664A06: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0x10) = ecx; /* 0x00664A07: mov dword ptr [esp + 0x10], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00664A0B: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006649E3; /* 0x00664A0C: jne 0x6649e3 */
L_00664A0E:
    edi = POP32_VAL(esp); /* 0x00664A0E: pop edi */
    ebx = ~ebx; /* 0x00664A0F: not ebx */
    esi = POP32_VAL(esp); /* 0x00664A11: pop esi */
    eax = ebx; /* 0x00664A12: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x00664A14: pop ebx */
    esp = ebp; /* 0x00664A15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664A17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664A18: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664A20u);

L_00664A20:
    PUSH32(esp, ebp); /* 0x00664A20: push ebp */
    ebp = esp; /* 0x00664A21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664A23: push -1 */
    PUSH32(esp, 0x007BBDF9u); /* 0x00664A25: push 0x7bbdf9 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664A2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664A30: push eax */
    PUSH32(esp, ecx); /* 0x00664A31: push ecx */
    PUSH32(esp, esi); /* 0x00664A32: push esi */
    eax = MEM32(0x855000); /* 0x00664A33: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664A38: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664A3A: push eax */
    eax = ebp + (-0xC); /* 0x00664A3B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664A3E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664A44: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00664A46: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664A49: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC520)); /* 0x00664A50: call dword ptr [0x7cc520] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x00664A56: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664A66; /* 0x00664A5A: je 0x664a66 */
L_00664A5C:
    PUSH32(esp, esi); /* 0x00664A5C: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664A5D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664A63: add esp, 4 */
    _flag_k = FK_ADD;
L_00664A66:
    eax = esi; /* 0x00664A66: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664A68: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664A6B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664A72: pop ecx */
    esi = POP32_VAL(esp); /* 0x00664A73: pop esi */
    esp = ebp; /* 0x00664A74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664A76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00664A77: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664A80u);

L_00664A80:
    PUSH32(esp, ebp); /* 0x00664A80: push ebp */
    ebp = esp; /* 0x00664A81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664A83: push -1 */
    PUSH32(esp, 0x007BBE29u); /* 0x00664A85: push 0x7bbe29 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664A8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664A90: push eax */
    PUSH32(esp, ecx); /* 0x00664A91: push ecx */
    eax = MEM32(0x855000); /* 0x00664A92: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664A97: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664A99: push eax */
    eax = ebp + (-0xC); /* 0x00664A9A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664A9D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00664AA3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664AA6: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC520)); /* 0x00664AAD: call dword ptr [0x7cc520] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x00664AB3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664AB6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664ABD: pop ecx */
    esp = ebp; /* 0x00664ABE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664AC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664AC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664AD0u);

L_00664AD0:
    PUSH32(esp, ebp); /* 0x00664AD0: push ebp */
    ebp = esp; /* 0x00664AD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664AD3: push -1 */
    PUSH32(esp, 0x007BBE61u); /* 0x00664AD5: push 0x7bbe61 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664ADA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664AE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00664AE1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00664AE4: push esi */
    eax = MEM32(0x855000); /* 0x00664AE5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664AEA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664AEC: push eax */
    eax = ebp + (-0xC); /* 0x00664AED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664AF0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664AF6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x00664AF8: mov dword ptr [ebp - 0x14], esi */
    eax = ebp + (-0x10); /* 0x00664AFB: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x007FC1DCu; /* 0x00664AFE: mov dword ptr [ebp - 0x10], 0x7fc1dc */
    PUSH32(esp, eax); /* 0x00664B05: push eax */
    RECOMP_ICALL(MEM32(0x7CC524)); /* 0x00664B06: call dword ptr [0x7cc524] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00664B0C: mov dword ptr [ebp - 4], 0 */
    MEM32(esi) = 0x007FC194u; /* 0x00664B13: mov dword ptr [esi], 0x7fc194 */
    MEM32(ebp + (-0x4)) = 1; /* 0x00664B19: mov dword ptr [ebp - 4], 1 */
    MEM32(esi) = 0x007FC1D4u; /* 0x00664B20: mov dword ptr [esi], 0x7fc1d4 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664B26: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00664B2D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664B2F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664B32: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664B39: pop ecx */
    esi = POP32_VAL(esp); /* 0x00664B3A: pop esi */
    esp = ebp; /* 0x00664B3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664B3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00664B3E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664B50u);

L_00664B50:
    PUSH32(esp, ebp); /* 0x00664B50: push ebp */
    ebp = esp; /* 0x00664B51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664B53: push -1 */
    PUSH32(esp, 0x007BBE91u); /* 0x00664B55: push 0x7bbe91 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664B5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664B60: push eax */
    PUSH32(esp, ecx); /* 0x00664B61: push ecx */
    PUSH32(esp, esi); /* 0x00664B62: push esi */
    eax = MEM32(0x855000); /* 0x00664B63: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664B68: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664B6A: push eax */
    eax = ebp + (-0xC); /* 0x00664B6B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664B6E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664B74: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00664B76: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664B79: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC520)); /* 0x00664B80: call dword ptr [0x7cc520] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x00664B86: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664B96; /* 0x00664B8A: je 0x664b96 */
L_00664B8C:
    PUSH32(esp, esi); /* 0x00664B8C: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664B8D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664B93: add esp, 4 */
    _flag_k = FK_ADD;
L_00664B96:
    eax = esi; /* 0x00664B96: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664B98: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664B9B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664BA2: pop ecx */
    esi = POP32_VAL(esp); /* 0x00664BA3: pop esi */
    esp = ebp; /* 0x00664BA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664BA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00664BA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664BB0u);

L_00664BB0:
    PUSH32(esp, ebp); /* 0x00664BB0: push ebp */
    ebp = esp; /* 0x00664BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664BB3: push -1 */
    PUSH32(esp, 0x007BBEC1u); /* 0x00664BB5: push 0x7bbec1 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664BC0: push eax */
    PUSH32(esp, ecx); /* 0x00664BC1: push ecx */
    eax = MEM32(0x855000); /* 0x00664BC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664BC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664BC9: push eax */
    eax = ebp + (-0xC); /* 0x00664BCA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664BCD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00664BD3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664BD6: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC520)); /* 0x00664BDD: call dword ptr [0x7cc520] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x00664BE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664BE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664BED: pop ecx */
    esp = ebp; /* 0x00664BEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664BF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664BF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664C00u);

L_00664C00:
    PUSH32(esp, ebp); /* 0x00664C00: push ebp */
    ebp = esp; /* 0x00664C01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664C03: push -1 */
    PUSH32(esp, 0x007BBDF9u); /* 0x00664C05: push 0x7bbdf9 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664C0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664C10: push eax */
    PUSH32(esp, ecx); /* 0x00664C11: push ecx */
    PUSH32(esp, esi); /* 0x00664C12: push esi */
    eax = MEM32(0x855000); /* 0x00664C13: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664C18: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664C1A: push eax */
    eax = ebp + (-0xC); /* 0x00664C1B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664C1E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664C24: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00664C26: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00664C29: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC6C8)); /* 0x00664C2C: call dword ptr [0x7cc6c8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00664C32: mov dword ptr [ebp - 4], 0 */
    MEM32(esi) = 0x007FC194u; /* 0x00664C39: mov dword ptr [esi], 0x7fc194 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00664C3F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00664C46: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664C48: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664C4B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664C52: pop ecx */
    esi = POP32_VAL(esp); /* 0x00664C53: pop esi */
    esp = ebp; /* 0x00664C54: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664C56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00664C57: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00664C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664C60u);

L_00664C60:
    PUSH32(esp, ebp); /* 0x00664C60: push ebp */
    ebp = esp; /* 0x00664C61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x210u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x210u; /* 0x00664C63: sub esp, 0x210 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00664C69: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664C6E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00664C70: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x00664C73: push edi */
    edi = ecx; /* 0x00664C74: mov edi, ecx */
    /* test edi, edi */ /* 0x00664C76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664CED; /* 0x00664C78: je 0x664ced */
L_00664C7A:
    /* cmp MEM8(edi), 0 */ /* 0x00664C7A: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00664CED; /* 0x00664C7D: je 0x664ced */
L_00664C7F:
    PUSH32(esp, esi); /* 0x00664C7F: push esi */
    PUSH32(esp, 0x118u); /* 0x00664C80: push 0x118 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00664C85: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00664C8B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664C8D: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00664C90: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664CDB; /* 0x00664C92: je 0x664cdb */
L_00664C94:
    PUSH32(esp, 0x104u); /* 0x00664C94: push 0x104 */
    PUSH32(esp, edi); /* 0x00664C99: push edi */
    PUSH32(esp, 0x104u); /* 0x00664C9A: push 0x104 */
    eax = ebp + (-0x20C); /* 0x00664C9F: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x00664CA5: push eax */
    eax = ebp + (-0x210); /* 0x00664CA6: lea eax, [ebp - 0x210] */
    PUSH32(esp, eax); /* 0x00664CAC: push eax */
    RECOMP_ICALL(MEM32(0x7CC4B8)); /* 0x00664CAD: call dword ptr [0x7cc4b8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x00664CB3: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00664CB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00664CCF; /* 0x00664CB8: jne 0x664ccf */
L_00664CBA:
    ecx = ebp + (-0x20C); /* 0x00664CBA: lea ecx, [ebp - 0x20c] */
    RECOMP_CALL(sub_0055DA40); /* 0x00664CC0: call 0x55da40 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x114) = eax; /* 0x00664CC5: mov dword ptr [esi + 0x114], eax */
    /* test eax, eax */ /* 0x00664CCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00664CDB; /* 0x00664CCD: jne 0x664cdb */
L_00664CCF:
    PUSH32(esp, esi); /* 0x00664CCF: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00664CD0: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664CD6: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00664CD9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00664CDB:
    eax = esi; /* 0x00664CDB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00664CDD: pop esi */
    edi = POP32_VAL(esp); /* 0x00664CDE: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00664CDF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00664CE2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00664CE4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00664CE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664CEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664CEC: ret  */
L_00664CED:
    PUSH32(esp, 2); /* 0x00664CED: push 2 */
    RECOMP_ICALL(MEM32(0x7CC4B4)); /* 0x00664CEF: call dword ptr [0x7cc4b4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00664CF5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664CF8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00664CFB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00664CFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00664CFF: pop edi */
    RECOMP_CALL(sub_0077F4C2); /* 0x00664D00: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00664D05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664D07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664D08: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664D10u);

L_00664D10:
    PUSH32(esp, ebp); /* 0x00664D10: push ebp */
    ebp = esp; /* 0x00664D11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00664D13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664D16: push -1 */
    PUSH32(esp, 0x00794518u); /* 0x00664D18: push 0x794518 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664D1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664D23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x00664D24: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00664D27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00664D2C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = eax; /* 0x00664D2E: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(0x855000); /* 0x00664D32: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00664D37: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00664D39: push eax */
    eax = esp + 0x28; /* 0x00664D3A: lea eax, [esp + 0x28] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664D3E: mov dword ptr fs:[0], eax */
    PUSH32(esp, 0); /* 0x00664D44: push 0 */
    MEM32(esp + 0x1C) = 0; /* 0x00664D46: mov dword ptr [esp + 0x1c], 0 */
    ecx = esp + 0xC; /* 0x00664D4E: lea ecx, [esp + 0xc] */
    MEM32(esp + 0x20) = 0; /* 0x00664D52: mov dword ptr [esp + 0x20], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00664D5A: push 0x7cd0c4 */
    MEM32(esp + 0x24) = 0xFu; /* 0x00664D5F: mov dword ptr [esp + 0x24], 0xf */
    MEM32(esp + 0x20) = 0; /* 0x00664D67: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x00664D6F: mov byte ptr [esp + 0x10], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00664D74: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x30) = 0; /* 0x00664D79: mov dword ptr [esp + 0x30], 0 */
    RECOMP_ICALL(MEM32(0x7CC274)); /* 0x00664D81: call dword ptr [0x7cc274] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x30) = 0xFFFFFFFFu; /* 0x00664D87: mov dword ptr [esp + 0x30], 0xffffffff */
    /* cmp MEM32(esp + 0x1C), 0x10u */ /* 0x00664D8F: cmp dword ptr [esp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00664DA3; /* 0x00664D94: jb 0x664da3 */
L_00664D96:
    PUSH32(esp, MEM32(esp + 0x8)); /* 0x00664D96: push dword ptr [esp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00664D9A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664DA0: add esp, 4 */
    _flag_k = FK_ADD;
L_00664DA3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00664DA3: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x24) = 0xFu; /* 0x00664DA6: mov dword ptr [esp + 0x24], 0xf */
    MEM32(esp + 0x20) = 0; /* 0x00664DAE: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x00664DB6: mov byte ptr [esp + 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC274)); /* 0x00664DBB: call dword ptr [0x7cc274] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00664DC1: push eax */
    ecx = 0x00920604u; /* 0x00664DC2: mov ecx, 0x920604 */
    RECOMP_CALL(sub_00665B40); /* 0x00664DC7: call 0x665b40 */
    RECOMP_FLAGS_IN();
    eax = 0x00920600u; /* 0x00664DCC: mov eax, 0x920600 */
    ecx = MEM32(esp + 0x28); /* 0x00664DD1: mov ecx, dword ptr [esp + 0x28] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664DD5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664DDC: pop ecx */
    ecx = MEM32(esp + 0x1C); /* 0x00664DDD: mov ecx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00664DE1: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00664DE3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00664DE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664DEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664DEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664DF0u);

L_00664DF0:
    edx = MEM32(0x7CC528); /* 0x00664DF0: mov edx, dword ptr [0x7cc528] */
    ecx = MEM32(0x7CC544); /* 0x00664DF6: mov ecx, dword ptr [0x7cc544] */
    edx = MEM32(edx); /* 0x00664DFC: mov edx, dword ptr [edx] */
    ecx = MEM32(ecx); /* 0x00664DFE: mov ecx, dword ptr [ecx] */
    RECOMP_CALL(sub_00668360); /* 0x00664E00: call 0x668360 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00664E05: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00664E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664E10u);

L_00664E10:
    PUSH32(esp, ebp); /* 0x00664E10: push ebp */
    ebp = esp; /* 0x00664E11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664E13: push -1 */
    PUSH32(esp, 0x007BBF18u); /* 0x00664E15: push 0x7bbf18 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664E1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664E20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x248u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x248u; /* 0x00664E21: sub esp, 0x248 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00664E27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664E2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00664E2E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x00664E31: push esi */
    PUSH32(esp, edi); /* 0x00664E32: push edi */
    PUSH32(esp, eax); /* 0x00664E33: push eax */
    eax = ebp + (-0xC); /* 0x00664E34: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664E37: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00664E3D: mov esi, ecx */
    eax = ebp + (-0x218); /* 0x00664E3F: lea eax, [ebp - 0x218] */
    MEM32(ebp + (-0x250)) = esi; /* 0x00664E45: mov dword ptr [ebp - 0x250], esi */
    PUSH32(esp, eax); /* 0x00664E4B: push eax */
    PUSH32(esp, 0); /* 0x00664E4C: push 0 */
    PUSH32(esp, 0); /* 0x00664E4E: push 0 */
    PUSH32(esp, 0x801Cu); /* 0x00664E50: push 0x801c */
    PUSH32(esp, 0); /* 0x00664E55: push 0 */
    MEM32(ebp + (-0x24C)) = 0; /* 0x00664E57: mov dword ptr [ebp - 0x24c], 0 */
    RECOMP_ICALL(MEM32(0x7CC6E0)); /* 0x00664E61: call dword ptr [0x7cc6e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00664E67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00664F73; /* 0x00664E69: js 0x664f73 */
L_00664E6F:
    PUSH32(esp, 0x007FC234u); /* 0x00664E6F: push 0x7fc234 */
    ecx = ebp + (-0x248); /* 0x00664E74: lea ecx, [ebp - 0x248] */
    RECOMP_CALL(sub_005C8920); /* 0x00664E7A: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00664E7F: mov dword ptr [ebp - 4], 1 */
    edx = ebp + (-0x218); /* 0x00664E86: lea edx, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x00664E8C: push eax */
    ecx = ebp + (-0x230); /* 0x00664E8D: lea ecx, [ebp - 0x230] */
    RECOMP_CALL(sub_005CA3A0); /* 0x00664E93: call 0x5ca3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664E98: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00664E9B: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x234)), 8 */ /* 0x00664E9F: cmp dword ptr [ebp - 0x234], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x234))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00664EA6: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00664EB9; /* 0x00664EAC: jb 0x664eb9 */
L_00664EAE:
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x00664EAE: push dword ptr [ebp - 0x248] */
    RECOMP_ICALL(edi); /* 0x00664EB4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664EB6: add esp, 4 */
    _flag_k = FK_ADD;
L_00664EB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00664EB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x234)) = 7; /* 0x00664EBB: mov dword ptr [ebp - 0x234], 7 */
    /* cmp MEM32(ebp + (-0x21C)), 8 */ /* 0x00664EC5: cmp dword ptr [ebp - 0x21c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebp + (-0x248)) = (uint16_t)(LO16(eax)); /* 0x00664ECC: mov word ptr [ebp - 0x248], ax */
    eax = ebp + (-0x230); /* 0x00664ED3: lea eax, [ebp - 0x230] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x230)); } /* 0x00664ED9: cmovae eax, dword ptr [ebp - 0x230] */
    PUSH32(esp, eax); /* 0x00664EE0: push eax */
    MEM32(ebp + (-0x238)) = 0; /* 0x00664EE1: mov dword ptr [ebp - 0x238], 0 */
    RECOMP_ICALL(MEM32(0x7CC52C)); /* 0x00664EEB: call dword ptr [0x7cc52c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664EF1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00664EF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00664F50; /* 0x00664EF6: je 0x664f50 */
L_00664EF8:
    RECOMP_ICALL(MEM32(0x7CC4D0)); /* 0x00664EF8: call dword ptr [0x7cc4d0] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x11u */ /* 0x00664EFE: cmp dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00664F50; /* 0x00664F01: je 0x664f50 */
L_00664F03:
    PUSH32(esp, 0x007F533Cu); /* 0x00664F03: push 0x7f533c */
    ecx = esi; /* 0x00664F08: mov ecx, esi */
    RECOMP_CALL(sub_005C8920); /* 0x00664F0A: call 0x5c8920 */
    RECOMP_FLAGS_IN();
L_00664F0F:
    MEM32(ebp + (-0x24C)) = 1; /* 0x00664F0F: mov dword ptr [ebp - 0x24c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00664F19: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x21C)), 8 */ /* 0x00664F1D: cmp dword ptr [ebp - 0x21c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00664F31; /* 0x00664F24: jb 0x664f31 */
L_00664F26:
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x00664F26: push dword ptr [ebp - 0x230] */
    RECOMP_ICALL(edi); /* 0x00664F2C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00664F2E: add esp, 4 */
    _flag_k = FK_ADD;
L_00664F31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00664F31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x21C)) = 7; /* 0x00664F33: mov dword ptr [ebp - 0x21c], 7 */
    MEM32(ebp + (-0x220)) = 0; /* 0x00664F3D: mov dword ptr [ebp - 0x220], 0 */
    MEM16(ebp + (-0x230)) = (uint16_t)(LO16(eax)); /* 0x00664F47: mov word ptr [ebp - 0x230], ax */
    goto L_00664F90; /* 0x00664F4E: jmp 0x664f90 */
L_00664F50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00664F50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x00664F52: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x00664F59: mov dword ptr [esi + 0x10], 0 */
    ecx = esi; /* 0x00664F60: mov ecx, esi */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x00664F62: mov word ptr [esi], ax */
    eax = ebp + (-0x230); /* 0x00664F65: lea eax, [ebp - 0x230] */
    PUSH32(esp, eax); /* 0x00664F6B: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x00664F6C: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_00664F0F; /* 0x00664F71: jmp 0x664f0f */
L_00664F73:
    PUSH32(esp, 0x007F533Cu); /* 0x00664F73: push 0x7f533c */
    ecx = esi; /* 0x00664F78: mov ecx, esi */
    RECOMP_CALL(sub_005C8920); /* 0x00664F7A: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00664F7F: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x24C)) = 1; /* 0x00664F86: mov dword ptr [ebp - 0x24c], 1 */
L_00664F90:
    eax = esi; /* 0x00664F90: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00664F92: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00664F95: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00664F9C: pop ecx */
    edi = POP32_VAL(esp); /* 0x00664F9D: pop edi */
    esi = POP32_VAL(esp); /* 0x00664F9E: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00664F9F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00664FA2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00664FA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00664FA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00664FAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00664FAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00664FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00664FB0u);

L_00664FB0:
    PUSH32(esp, ebp); /* 0x00664FB0: push ebp */
    ebp = esp; /* 0x00664FB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00664FB3: push -1 */
    PUSH32(esp, 0x007BBF71u); /* 0x00664FB5: push 0x7bbf71 */
    eax = MEM32(FS_BASE + (0)); /* 0x00664FBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00664FC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x00664FC1: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00664FC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00664FC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00664FCB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00664FCE: push ebx */
    PUSH32(esp, esi); /* 0x00664FCF: push esi */
    PUSH32(esp, edi); /* 0x00664FD0: push edi */
    PUSH32(esp, eax); /* 0x00664FD1: push eax */
    eax = ebp + (-0xC); /* 0x00664FD2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00664FD5: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00664FDB: mov edi, ecx */
    PUSH32(esp, 0); /* 0x00664FDD: push 0 */
    PUSH32(esp, 0); /* 0x00664FDF: push 0 */
    MEM32(ebp + (-0x64)) = edi; /* 0x00664FE1: mov dword ptr [ebp - 0x64], edi */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00664FE4: mov dword ptr [ebp - 0x5c], 0 */
    RECOMP_ICALL(MEM32(0x7CC120)); /* 0x00664FEB: call dword ptr [0x7cc120] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00664FF1: mov esi, eax */
    /* test esi, esi */ /* 0x00664FF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00665156; /* 0x00664FF5: je 0x665156 */
L_00664FFB:
    eax = esi + esi; /* 0x00664FFB: lea eax, [esi + esi] */
    PUSH32(esp, eax); /* 0x00664FFE: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00664FFF: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665005: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x00665008: mov ebx, eax */
    MEM32(ebp + (-0x60)) = ebx; /* 0x0066500A: mov dword ptr [ebp - 0x60], ebx */
    PUSH32(esp, ebx); /* 0x0066500D: push ebx */
    PUSH32(esp, esi); /* 0x0066500E: push esi */
    RECOMP_ICALL(MEM32(0x7CC120)); /* 0x0066500F: call dword ptr [0x7cc120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00665015: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066513E; /* 0x00665017: je 0x66513e */
L_0066501D:
    /* cmp eax, esi */ /* 0x0066501D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0066513E; /* 0x0066501F: ja 0x66513e */
L_00665025:
    PUSH32(esp, 0x007F9838u); /* 0x00665025: push 0x7f9838 */
    ecx = ebp + (-0x58); /* 0x0066502A: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_005C8920); /* 0x0066502D: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00665032: mov dword ptr [ebp - 4], 1 */
    edx = ebx; /* 0x00665039: mov edx, ebx */
    PUSH32(esp, eax); /* 0x0066503B: push eax */
    ecx = ebp + (-0x40); /* 0x0066503C: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_005CA3A0); /* 0x0066503F: call 0x5ca3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665044: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00665047: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x0066504B: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x0066504F: mov ebx, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0066505F; /* 0x00665055: jb 0x66505f */
L_00665057:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00665057: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(ebx); /* 0x0066505A: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066505C: add esp, 4 */
    _flag_k = FK_ADD;
L_0066505F:
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x0066505F: push dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665062: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x00665064: mov dword ptr [ebp - 0x44], 7 */
    MEM32(ebp + (-0x48)) = 0; /* 0x0066506B: mov dword ptr [ebp - 0x48], 0 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x00665072: mov word ptr [ebp - 0x58], ax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00665076: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0066507C: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x40); /* 0x0066507F: lea edx, [ebp - 0x40] */
    ecx = ebp + (-0x28); /* 0x00665082: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_006652D0); /* 0x00665085: call 0x6652d0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0066508A: mov byte ptr [ebp - 4], 4 */
    edx = ebp + (-0x28); /* 0x0066508E: lea edx, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00665091: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x00665095: lea eax, [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x18)); /* 0x00665098: mov ecx, dword ptr [ebp - 0x18] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x28)); } /* 0x0066509B: cmovae edx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x0066509F: cmovae eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006650A3: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x006650A5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006650BF; /* 0x006650A7: je 0x6650bf */
L_006650A9:
    esp = esp; /* 0x006650A9: lea esp, [esp] */
L_006650B0:
    SET_LO8(edx, MEM8(eax)); /* 0x006650B0: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - 0x20u); /* 0x006650B2: sub dl, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(edx), 0x5Eu */ /* 0x006650B5: cmp dl, 0x5e */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_006650DF; /* 0x006650B8: ja 0x6650df */
L_006650BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006650BA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x006650BB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006650B0; /* 0x006650BD: jne 0x6650b0 */
L_006650BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006650BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 7; /* 0x006650C1: mov dword ptr [edi + 0x14], 7 */
    MEM32(edi + 0x10) = 0; /* 0x006650C8: mov dword ptr [edi + 0x10], 0 */
    ecx = edi; /* 0x006650CF: mov ecx, edi */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x006650D1: mov word ptr [edi], ax */
    eax = ebp + (-0x40); /* 0x006650D4: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x006650D7: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x006650D8: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    goto L_006650EB; /* 0x006650DD: jmp 0x6650eb */
L_006650DF:
    PUSH32(esp, 0x007F533Cu); /* 0x006650DF: push 0x7f533c */
    ecx = edi; /* 0x006650E4: mov ecx, edi */
    RECOMP_CALL(sub_005C8920); /* 0x006650E6: call 0x5c8920 */
    RECOMP_FLAGS_IN();
L_006650EB:
    MEM32(ebp + (-0x5C)) = 1; /* 0x006650EB: mov dword ptr [ebp - 0x5c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006650F2: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x006650F6: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665104; /* 0x006650FA: jb 0x665104 */
L_006650FC:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006650FC: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(ebx); /* 0x006650FF: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665101: add esp, 4 */
    _flag_k = FK_ADD;
L_00665104:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00665104: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0066510B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00665112: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00665116: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x0066511A: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665128; /* 0x0066511E: jb 0x665128 */
L_00665120:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x00665120: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(ebx); /* 0x00665123: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665125: add esp, 4 */
    _flag_k = FK_ADD;
L_00665128:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665128: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x0066512A: mov dword ptr [ebp - 0x2c], 7 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00665131: mov dword ptr [ebp - 0x30], 0 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x00665138: mov word ptr [ebp - 0x40], ax */
    goto L_00665170; /* 0x0066513C: jmp 0x665170 */
L_0066513E:
    PUSH32(esp, ebx); /* 0x0066513E: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0066513F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665145: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x00665148: mov ecx, edi */
    PUSH32(esp, 0x007F533Cu); /* 0x0066514A: push 0x7f533c */
    RECOMP_CALL(sub_005C8920); /* 0x0066514F: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    goto L_00665162; /* 0x00665154: jmp 0x665162 */
L_00665156:
    PUSH32(esp, 0x007F533Cu); /* 0x00665156: push 0x7f533c */
    ecx = edi; /* 0x0066515B: mov ecx, edi */
    RECOMP_CALL(sub_005C8920); /* 0x0066515D: call 0x5c8920 */
    RECOMP_FLAGS_IN();
L_00665162:
    MEM32(ebp + (-0x4)) = 0; /* 0x00665162: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x5C)) = 1; /* 0x00665169: mov dword ptr [ebp - 0x5c], 1 */
L_00665170:
    eax = edi; /* 0x00665170: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665172: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665175: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066517C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066517D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066517E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0066517F: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00665180: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00665183: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00665185: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066518A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066518C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066518D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00665190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665190u);

L_00665190:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x00665190: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665198; /* 0x00665194: jb 0x665198 */
L_00665196:
    ecx = MEM32(ecx); /* 0x00665196: mov ecx, dword ptr [ecx] */
L_00665198:
    PUSH32(esp, esi); /* 0x00665198: push esi */
    RECOMP_CALL(sub_00664C60); /* 0x00665199: call 0x664c60 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0066519E: mov esi, eax */
    /* test esi, esi */ /* 0x006651A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006651C7; /* 0x006651A2: je 0x6651c7 */
L_006651A4:
    ecx = MEM32(esi + 0x114); /* 0x006651A4: mov ecx, dword ptr [esi + 0x114] */
    RECOMP_CALL(sub_0055DB40); /* 0x006651AA: call 0x55db40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006651AF: push esi */
    MEM32(esi + 0x114) = 0; /* 0x006651B0: mov dword ptr [esi + 0x114], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006651BA: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006651C0: add esp, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x006651C3: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x006651C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006651C6: ret  */
L_006651C7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006651C7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x006651C9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006651CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006651D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006651D0u);

L_006651D0:
    eax = (uint32_t)((int32_t)MEM32(0x860A98) * (int32_t)0x000343FDu); /* 0x006651D0: imul eax, dword ptr [0x860a98], 0x343fd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00269EC3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00269EC3u; /* 0x006651DA: add eax, 0x269ec3 */
    _flag_k = FK_ADD;
    MEM32(0x860A98) = eax; /* 0x006651DF: mov dword ptr [0x860a98], eax */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006651E4: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006651E4: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x006651E7: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006651EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006651F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006651F0u);

L_006651F0:
    PUSH32(esp, ecx); /* 0x006651F0: push ecx */
    /* cmp MEM32(0x865F24), 0x10u */ /* 0x006651F1: cmp dword ptr [0x865f24], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x00865F10u; /* 0x006651F8: mov eax, 0x865f10 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(0x865F10); } /* 0x006651FD: cmovae eax, dword ptr [0x865f10] */
    PUSH32(esp, eax); /* 0x00665204: push eax */
    PUSH32(esp, 1); /* 0x00665205: push 1 */
    PUSH32(esp, 0); /* 0x00665207: push 0 */
    RECOMP_ICALL(MEM32(0x7CC128)); /* 0x00665209: call dword ptr [0x7cc128] */
    RECOMP_FLAGS_IN();
    MEM32(0x87198C) = eax; /* 0x0066520F: mov dword ptr [0x87198c], eax */
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x00665214: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xB7u */ /* 0x0066521A: cmp eax, 0xb7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB7u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00665226; /* 0x0066521F: je 0x665226 */
L_00665221:
    /* cmp eax, 5 */ /* 0x00665221: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00665239; /* 0x00665224: jne 0x665239 */
L_00665226:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00665226: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_006ECB70); /* 0x00665229: call 0x6ecb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0066522E: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665231: push -1 */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x00665233: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
L_00665239:
    ecx = POP32_VAL(esp); /* 0x00665239: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0066523A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00665240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665240u);

L_00665240:
    PUSH32(esp, ebp); /* 0x00665240: push ebp */
    ebp = esp; /* 0x00665241: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665243: push -1 */
    PUSH32(esp, 0x007BBFC1u); /* 0x00665245: push 0x7bbfc1 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066524A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665250: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x00665251: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00665254: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665259: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0066525B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0066525E: push esi */
    PUSH32(esp, edi); /* 0x0066525F: push edi */
    PUSH32(esp, eax); /* 0x00665260: push eax */
    eax = ebp + (-0xC); /* 0x00665261: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665264: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x0066526A: mov esi, edx */
    edi = ecx; /* 0x0066526C: mov edi, ecx */
    ecx = ebp + (-0x58); /* 0x0066526E: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x60)) = edi; /* 0x00665271: mov dword ptr [ebp - 0x60], edi */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00665274: mov dword ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_00665360); /* 0x0066527B: call 0x665360 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00665280: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x58); /* 0x00665287: lea ecx, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x0066528A: push esi */
    PUSH32(esp, edi); /* 0x0066528B: push edi */
    RECOMP_CALL(sub_00665500); /* 0x0066528C: call 0x665500 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = 1; /* 0x00665291: mov dword ptr [ebp - 0x5c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00665298: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x58); /* 0x0066529C: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_00665440); /* 0x0066529F: call 0x665440 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x006652A4: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006652A6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006652A9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006652B0: pop ecx */
    edi = POP32_VAL(esp); /* 0x006652B1: pop edi */
    esi = POP32_VAL(esp); /* 0x006652B2: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x006652B3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006652B6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006652B8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006652BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006652BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006652C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006652D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006652D0u);

L_006652D0:
    PUSH32(esp, ebp); /* 0x006652D0: push ebp */
    ebp = esp; /* 0x006652D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006652D3: push -1 */
    PUSH32(esp, 0x007BC011u); /* 0x006652D5: push 0x7bc011 */
    eax = MEM32(FS_BASE + (0)); /* 0x006652DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006652E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x006652E1: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006652E4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006652E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006652EB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x006652EE: push esi */
    PUSH32(esp, edi); /* 0x006652EF: push edi */
    PUSH32(esp, eax); /* 0x006652F0: push eax */
    eax = ebp + (-0xC); /* 0x006652F1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006652F4: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x006652FA: mov esi, edx */
    edi = ecx; /* 0x006652FC: mov edi, ecx */
    ecx = ebp + (-0x58); /* 0x006652FE: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x60)) = edi; /* 0x00665301: mov dword ptr [ebp - 0x60], edi */
    MEM32(ebp + (-0x5C)) = 0; /* 0x00665304: mov dword ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_00665360); /* 0x0066530B: call 0x665360 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00665310: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x58); /* 0x00665317: lea ecx, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x0066531A: push esi */
    PUSH32(esp, edi); /* 0x0066531B: push edi */
    RECOMP_CALL(sub_00665570); /* 0x0066531C: call 0x665570 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = 1; /* 0x00665321: mov dword ptr [ebp - 0x5c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00665328: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x58); /* 0x0066532C: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_00665440); /* 0x0066532F: call 0x665440 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x00665334: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665336: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665339: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00665340: pop ecx */
    edi = POP32_VAL(esp); /* 0x00665341: pop edi */
    esi = POP32_VAL(esp); /* 0x00665342: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x00665343: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00665346: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00665348: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0066534D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0066534F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00665350: ret  */
    RECOMP_REGS_OUT();
}

void sub_00665360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665360u);

L_00665360:
    PUSH32(esp, ebp); /* 0x00665360: push ebp */
    ebp = esp; /* 0x00665361: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665363: push -1 */
    PUSH32(esp, 0x007BC076u); /* 0x00665365: push 0x7bc076 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066536A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665370: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00665371: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00665374: push esi */
    PUSH32(esp, edi); /* 0x00665375: push edi */
    eax = MEM32(0x855000); /* 0x00665376: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0066537B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066537D: push eax */
    eax = ebp + (-0xC); /* 0x0066537E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00665381: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00665387: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00665389: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, 1); /* 0x0066538C: push 1 */
    MEM32(esi) = 0x007FC1CCu; /* 0x0066538E: mov dword ptr [esi], 0x7fc1cc */
    RECOMP_ICALL(MEM32(0x7CC2F0)); /* 0x00665394: call dword ptr [0x7cc2f0] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x0066539A: mov dword ptr [esi + 8], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0066539D: mov dword ptr [ebp - 4], 0 */
    MEM32(esi + 0x20) = 0xFu; /* 0x006653A4: mov dword ptr [esi + 0x20], 0xf */
    MEM32(esi + 0x1C) = 0; /* 0x006653AB: mov dword ptr [esi + 0x1c], 0 */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x006653B2: mov byte ptr [esi + 0xc], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006653B6: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006653BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x38) = 7; /* 0x006653BC: mov dword ptr [esi + 0x38], 7 */
    MEM32(esi + 0x34) = 0; /* 0x006653C3: mov dword ptr [esi + 0x34], 0 */
    MEM16(esi + 0x24) = (uint16_t)(LO16(eax)); /* 0x006653CA: mov word ptr [esi + 0x24], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006653CE: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, 0x34u); /* 0x006653D2: push 0x34 */
    MEM16(esi + 0x40) = (uint16_t)(LO16(eax)); /* 0x006653D4: mov word ptr [esi + 0x40], ax */
    MEM8(esi + 0x42) = (uint8_t)(LO8(eax)); /* 0x006653D8: mov byte ptr [esi + 0x42], al */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006653DB: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006653E1: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006653E3: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edi; /* 0x006653E6: mov dword ptr [ebp - 0x14], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006653E9: mov byte ptr [ebp - 4], 3 */
    /* test edi, edi */ /* 0x006653ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0066540B; /* 0x006653EF: je 0x66540b */
L_006653F1:
    PUSH32(esp, 0); /* 0x006653F1: push 0 */
    ecx = edi; /* 0x006653F3: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x7CC254)); /* 0x006653F5: call dword ptr [0x7cc254] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006653FB: mov byte ptr [ebp - 4], 4 */
    MEM32(edi) = 0x007FC1A0u; /* 0x006653FF: mov dword ptr [edi], 0x7fc1a0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00665405: mov byte ptr [ebp - 4], 3 */
    goto L_0066540D; /* 0x00665409: jmp 0x66540d */
L_0066540B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0066540B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0066540D:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0066540D: mov byte ptr [ebp - 4], 2 */
    ecx = esi; /* 0x00665411: mov ecx, esi */
    PUSH32(esp, edi); /* 0x00665413: push edi */
    RECOMP_CALL(sub_00665B90); /* 0x00665414: call 0x665b90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00665419: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00665420: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00665422: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00665425: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0066542C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0066542D: pop edi */
    esi = POP32_VAL(esp); /* 0x0066542E: pop esi */
    esp = ebp; /* 0x0066542F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00665431: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00665432: ret  */
    RECOMP_REGS_OUT();
}

void sub_00665440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665440u);

L_00665440:
    PUSH32(esp, ebp); /* 0x00665440: push ebp */
    ebp = esp; /* 0x00665441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665443: push -1 */
    PUSH32(esp, 0x007BC0C1u); /* 0x00665445: push 0x7bc0c1 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066544A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665450: push eax */
    PUSH32(esp, ecx); /* 0x00665451: push ecx */
    PUSH32(esp, esi); /* 0x00665452: push esi */
    eax = MEM32(0x855000); /* 0x00665453: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665458: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066545A: push eax */
    eax = ebp + (-0xC); /* 0x0066545B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066545E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00665464: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00665466: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x007FC1CCu; /* 0x00665469: mov dword ptr [esi], 0x7fc1cc */
    MEM32(ebp + (-0x4)) = 1; /* 0x0066546F: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x00665476: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665488; /* 0x0066547A: jb 0x665488 */
L_0066547C:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x0066547C: push dword ptr [esi + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0066547F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00665485: add esp, 4 */
    _flag_k = FK_ADD;
L_00665488:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00665488: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x38) = 7; /* 0x0066548A: mov dword ptr [esi + 0x38], 7 */
    MEM32(esi + 0x34) = 0; /* 0x00665491: mov dword ptr [esi + 0x34], 0 */
    MEM16(esi + 0x24) = (uint16_t)(LO16(eax)); /* 0x00665498: mov word ptr [esi + 0x24], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0066549C: mov byte ptr [ebp - 4], al */
    /* cmp MEM32(esi + 0x20), 0x10u */ /* 0x0066549F: cmp dword ptr [esi + 0x20], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006654B1; /* 0x006654A3: jb 0x6654b1 */
L_006654A5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006654A5: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006654A8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006654AE: add esp, 4 */
    _flag_k = FK_ADD;
L_006654B1:
    MEM32(esi + 0x20) = 0xFu; /* 0x006654B1: mov dword ptr [esi + 0x20], 0xf */
    MEM32(esi + 0x1C) = 0; /* 0x006654B8: mov dword ptr [esi + 0x1c], 0 */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x006654BF: mov byte ptr [esi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006654C3: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x8); /* 0x006654CA: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x006654CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006654E2; /* 0x006654CF: je 0x6654e2 */
L_006654D1:
    eax = MEM32(ecx); /* 0x006654D1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006654D3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006654D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006654E2; /* 0x006654D8: je 0x6654e2 */
L_006654DA:
    edx = MEM32(eax); /* 0x006654DA: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x006654DC: mov ecx, eax */
    PUSH32(esp, 1); /* 0x006654DE: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x006654E0: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_006654E2:
    ecx = MEM32(ebp + (-0xC)); /* 0x006654E2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006654E5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006654EC: pop ecx */
    esi = POP32_VAL(esp); /* 0x006654ED: pop esi */
    esp = ebp; /* 0x006654EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006654F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006654F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00665500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665500u);

L_00665500:
    PUSH32(esp, ebp); /* 0x00665500: push ebp */
    ebp = esp; /* 0x00665501: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665503: push -1 */
    PUSH32(esp, 0x007AE189u); /* 0x00665505: push 0x7ae189 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066550A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665510: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00665511: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00665514: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665519: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066551B: push eax */
    eax = ebp + (-0xC); /* 0x0066551C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066551F: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0xC); /* 0x00665525: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00665528: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x0066552F: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00665539; /* 0x00665533: jb 0x665539 */
L_00665535:
    edx = MEM32(eax); /* 0x00665535: mov edx, dword ptr [eax] */
    goto L_0066553B; /* 0x00665537: jmp 0x66553b */
L_00665539:
    edx = eax; /* 0x00665539: mov edx, eax */
L_0066553B:
    eax = MEM32(eax + 0x10); /* 0x0066553B: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0066553E: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00665540: push eax */
    PUSH32(esp, edx); /* 0x00665541: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00665542: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00665C80); /* 0x00665545: call 0x665c80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0066554A: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00665551: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x00665558: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0066555B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0066555E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00665565: pop ecx */
    esp = ebp; /* 0x00665566: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00665568: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00665569: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00665570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00665570u);

L_00665570:
    PUSH32(esp, ebp); /* 0x00665570: push ebp */
    ebp = esp; /* 0x00665571: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00665573: push -1 */
    PUSH32(esp, 0x00781739u); /* 0x00665575: push 0x781739 */
    eax = MEM32(FS_BASE + (0)); /* 0x0066557A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00665580: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00665581: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00665584: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00665589: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0066558B: push eax */
    eax = ebp + (-0xC); /* 0x0066558C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0066558F: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0xC); /* 0x00665595: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00665598: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM32(eax + 0x14), 8 */ /* 0x0066559F: cmp dword ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006655A9; /* 0x006655A3: jb 0x6655a9 */
L_006655A5:
    edx = MEM32(eax); /* 0x006655A5: mov edx, dword ptr [eax] */
    goto L_006655AB; /* 0x006655A7: jmp 0x6655ab */
L_006655A9:
    edx = eax; /* 0x006655A9: mov edx, eax */
L_006655AB:
    eax = MEM32(eax + 0x10); /* 0x006655AB: mov eax, dword ptr [eax + 0x10] */
    eax = edx + eax * 2; /* 0x006655AE: lea eax, [edx + eax*2] */
    PUSH32(esp, eax); /* 0x006655B1: push eax */
    PUSH32(esp, edx); /* 0x006655B2: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006655B3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00665F70); /* 0x006655B6: call 0x665f70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006655BB: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x006655C2: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x006655C9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006655CC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006655CF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006655D6: pop ecx */
    esp = ebp; /* 0x006655D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006655D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006655DA: ret 8 */
    RECOMP_REGS_OUT();
}
