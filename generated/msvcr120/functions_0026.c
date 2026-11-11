#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100898EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100898EFu);

L_100898EF:
    PUSH32(esp, ebp); /* 0x100898EF: push ebp */
    ebp = esp; /* 0x100898F0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100898F2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100898F5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100898F6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x100898F9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089915; /* 0x100898FB: jne 0x10089915 */
L_100898FD:
    RECOMP_CALL(sub_1001177D); /* 0x100898FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10089902: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10089908: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008990D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899E5; /* 0x10089910: jmp 0x100899e5 */
L_10089915:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10089915: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x10089919: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008991C: push esi */
    PUSH32(esp, edi); /* 0x1008991D: push edi */
    edi = MEM32(ebx); /* 0x1008991E: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10089920: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10089922: push esi */
    RECOMP_CALL(sub_1000F764); /* 0x10089923: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x10089928: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1008992B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089937; /* 0x1008992D: jne 0x10089937 */
L_1008992F:
    eax = 0x100E40B4u; /* 0x1008992F: mov eax, 0x100e40b4 */
    MEM32(ebp + 0x14) = eax; /* 0x10089934: mov dword ptr [ebp + 0x14], eax */
L_10089937:
    ecx = MEM32(ebp + 0x8); /* 0x10089937: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008993A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008998F; /* 0x1008993C: jne 0x1008998f */
L_1008993E:
    ecx = ebp + (-0x14); /* 0x1008993E: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x10089941: push ecx */
    PUSH32(esp, eax); /* 0x10089942: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10089943: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x10089948: push edi */
    eax = ebp + 0xC; /* 0x10089949: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1008994C: push eax */
    eax = ebp + (-0x4); /* 0x1008994D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10089950: push eax */
    RECOMP_CALL(sub_10089751); /* 0x10089951: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089956: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089959: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008995C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008998A; /* 0x1008995E: js 0x1008998a */
L_10089960:
    ebx = MEM32(ebp + 0x14); /* 0x10089960: mov ebx, dword ptr [ebp + 0x14] */
L_10089963:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100899D4; /* 0x10089963: je 0x100899d4 */
L_10089965:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10089965: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089967: inc esi */
    _flag_k = FK_INC;
    eax = ebp + (-0x14); /* 0x10089968: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008996B: push eax */
    PUSH32(esp, ebx); /* 0x1008996C: push ebx */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1008996D: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x10089972: push edi */
    eax = ebp + 0xC; /* 0x10089973: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10089976: push eax */
    eax = ebp + (-0x4); /* 0x10089977: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008997A: push eax */
    RECOMP_CALL(sub_10089751); /* 0x1008997B: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089980: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089983: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10089986: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10089963; /* 0x10089988: jns 0x10089963 */
L_1008998A:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008998A: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899D4; /* 0x1008998D: jmp 0x100899d4 */
L_1008998F:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1008998F: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100899D2; /* 0x10089992: jbe 0x100899d2 */
L_10089994:
    edx = ebp + (-0x14); /* 0x10089994: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x10089997: push edx */
    PUSH32(esp, eax); /* 0x10089998: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10089999: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x1008999E: push edi */
    PUSH32(esp, ecx); /* 0x1008999F: push ecx */
    eax = ebp + (-0x4); /* 0x100899A0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100899A3: push eax */
    RECOMP_CALL(sub_10089751); /* 0x100899A4: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100899A9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100899AC: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100899AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100899CF; /* 0x100899B1: js 0x100899cf */
L_100899B3:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100899CB; /* 0x100899B3: je 0x100899cb */
L_100899B5:
    ecx = MEM32(ebp + 0x8); /* 0x100899B5: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100899B8: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x100899BA: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100899BD: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100899C0: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x100899C1: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x100899C4: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100899D2; /* 0x100899C7: je 0x100899d2 */
L_100899C9:
    RECOMP_BACKEDGE();
    goto L_10089994; /* 0x100899C9: jmp 0x10089994 */
L_100899CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100899CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899D2; /* 0x100899CD: jmp 0x100899d2 */
L_100899CF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100899CF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100899D2:
    MEM32(ebx) = edi; /* 0x100899D2: mov dword ptr [ebx], edi */
L_100899D4:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x100899D4: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100899E1; /* 0x100899D8: je 0x100899e1 */
L_100899DA:
    ecx = MEM32(ebp + (-0xC)); /* 0x100899DA: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100899DD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100899E1:
    edi = POP32_VAL(esp); /* 0x100899E1: pop edi */
    eax = esi; /* 0x100899E2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100899E4: pop esi */
L_100899E5:
    ebx = POP32_VAL(esp); /* 0x100899E5: pop ebx */
    esp = ebp; /* 0x100899E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100899E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100899E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100899EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100899EAu);

L_100899EA:
    PUSH32(esp, ebp); /* 0x100899EA: push ebp */
    ebp = esp; /* 0x100899EB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100899ED: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100899F0: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100899F3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100899FF; /* 0x100899F6: jne 0x100899ff */
L_100899F8:
    eax = 0xFFFFu; /* 0x100899F8: mov eax, 0xffff */
    goto L_10089A38; /* 0x100899FD: jmp 0x10089a38 */
L_100899FF:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100899FF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0xB) = (uint8_t)(LO8(eax)); /* 0x10089A03: mov byte ptr [ebp + 0xb], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089A06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10089A08: push eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x10089A09: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x10089A0C: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0xC); /* 0x10089A0F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x10089A12: push eax */
    PUSH32(esp, 1); /* 0x10089A13: push 1 */
    eax = ebp + 0xB; /* 0x10089A15: lea eax, [ebp + 0xb] */
    PUSH32(esp, eax); /* 0x10089A18: push eax */
    eax = ebp + (-0x8); /* 0x10089A19: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10089A1C: push eax */
    eax = ebp + (-0x4); /* 0x10089A1D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10089A20: push eax */
    RECOMP_CALL(sub_10089751); /* 0x10089A21: call 0x10089751 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089A26: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x10089A29: mov eax, 0xffff */
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x10089A2E: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10089A38; /* 0x10089A32: jl 0x10089a38 */
L_10089A34:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x10089A34: movzx eax, word ptr [ebp - 8] */
L_10089A38:
    esp = ebp; /* 0x10089A38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089A3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089A3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089A3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089A3Cu);

L_10089A3C:
    PUSH32(esp, ebp); /* 0x10089A3C: push ebp */
    ebp = esp; /* 0x10089A3D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10089A3F: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10089A40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x10089A44: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10089A47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089A50; /* 0x10089A49: jne 0x10089a50 */
L_10089A4B:
    eax = 0x100E40ACu; /* 0x10089A4B: mov eax, 0x100e40ac */
L_10089A50:
    PUSH32(esp, 0); /* 0x10089A50: push 0 */
    PUSH32(esp, eax); /* 0x10089A52: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089A53: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10089A56: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089A59: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x10089A5C: push 0 */
    PUSH32(esp, eax); /* 0x10089A5E: push eax */
    RECOMP_CALL(sub_10089751); /* 0x10089A5F: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089A64: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089A67: add esp, 0x18 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x10089A6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089A6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089A6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089A6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089A6Eu);

L_10089A6E:
    PUSH32(esp, ebp); /* 0x10089A6E: push ebp */
    ebp = esp; /* 0x10089A6F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10089A71: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10089A72: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10089A76: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x10089A7A: mov eax, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089A96; /* 0x10089A7D: je 0x10089a96 */
L_10089A7F:
    /* test eax, eax */ /* 0x10089A7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089A88; /* 0x10089A81: jne 0x10089a88 */
L_10089A83:
    eax = 0x100E40B0u; /* 0x10089A83: mov eax, 0x100e40b0 */
L_10089A88:
    PUSH32(esp, 0); /* 0x10089A88: push 0 */
    PUSH32(esp, eax); /* 0x10089A8A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089A8B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089A8E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089A91: push dword ptr [ebp + 8] */
    goto L_10089AAB; /* 0x10089A94: jmp 0x10089aab */
L_10089A96:
    /* test eax, eax */ /* 0x10089A96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089A9F; /* 0x10089A98: jne 0x10089a9f */
L_10089A9A:
    eax = 0x100E40B0u; /* 0x10089A9A: mov eax, 0x100e40b0 */
L_10089A9F:
    PUSH32(esp, 0); /* 0x10089A9F: push 0 */
    PUSH32(esp, eax); /* 0x10089AA1: push eax */
    PUSH32(esp, 1); /* 0x10089AA2: push 1 */
    PUSH32(esp, 0x100237BAu); /* 0x10089AA4: push 0x100237ba */
    PUSH32(esp, 0); /* 0x10089AA9: push 0 */
L_10089AAB:
    eax = ebp + (-0x4); /* 0x10089AAB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10089AAE: push eax */
    RECOMP_CALL(sub_10089751); /* 0x10089AAF: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089AB4: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089AB7: add esp, 0x18 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x10089ABA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089ABC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089ABD: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089ABE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089ABEu);

    goto L_10089ABE;
L_100898EF:
    PUSH32(esp, ebp); /* 0x100898EF: push ebp */
    ebp = esp; /* 0x100898F0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100898F2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100898F5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100898F6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x100898F9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089915; /* 0x100898FB: jne 0x10089915 */
L_100898FD:
    RECOMP_CALL(sub_1001177D); /* 0x100898FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10089902: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10089908: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008990D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899E5; /* 0x10089910: jmp 0x100899e5 */
L_10089915:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10089915: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x10089919: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008991C: push esi */
    PUSH32(esp, edi); /* 0x1008991D: push edi */
    edi = MEM32(ebx); /* 0x1008991E: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10089920: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10089922: push esi */
    RECOMP_CALL(sub_1000F764); /* 0x10089923: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x10089928: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1008992B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089937; /* 0x1008992D: jne 0x10089937 */
L_1008992F:
    eax = 0x100E40B4u; /* 0x1008992F: mov eax, 0x100e40b4 */
    MEM32(ebp + 0x14) = eax; /* 0x10089934: mov dword ptr [ebp + 0x14], eax */
L_10089937:
    ecx = MEM32(ebp + 0x8); /* 0x10089937: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008993A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008998F; /* 0x1008993C: jne 0x1008998f */
L_1008993E:
    ecx = ebp + (-0x14); /* 0x1008993E: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x10089941: push ecx */
    PUSH32(esp, eax); /* 0x10089942: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10089943: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x10089948: push edi */
    eax = ebp + 0xC; /* 0x10089949: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1008994C: push eax */
    eax = ebp + (-0x4); /* 0x1008994D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10089950: push eax */
    RECOMP_CALL(sub_10089751); /* 0x10089951: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089956: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089959: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008995C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008998A; /* 0x1008995E: js 0x1008998a */
L_10089960:
    ebx = MEM32(ebp + 0x14); /* 0x10089960: mov ebx, dword ptr [ebp + 0x14] */
L_10089963:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100899D4; /* 0x10089963: je 0x100899d4 */
L_10089965:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10089965: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089967: inc esi */
    _flag_k = FK_INC;
    eax = ebp + (-0x14); /* 0x10089968: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008996B: push eax */
    PUSH32(esp, ebx); /* 0x1008996C: push ebx */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1008996D: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x10089972: push edi */
    eax = ebp + 0xC; /* 0x10089973: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10089976: push eax */
    eax = ebp + (-0x4); /* 0x10089977: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008997A: push eax */
    RECOMP_CALL(sub_10089751); /* 0x1008997B: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10089980: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089983: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10089986: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10089963; /* 0x10089988: jns 0x10089963 */
L_1008998A:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008998A: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899D4; /* 0x1008998D: jmp 0x100899d4 */
L_1008998F:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1008998F: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100899D2; /* 0x10089992: jbe 0x100899d2 */
L_10089994:
    edx = ebp + (-0x14); /* 0x10089994: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x10089997: push edx */
    PUSH32(esp, eax); /* 0x10089998: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10089999: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x1008999E: push edi */
    PUSH32(esp, ecx); /* 0x1008999F: push ecx */
    eax = ebp + (-0x4); /* 0x100899A0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100899A3: push eax */
    RECOMP_CALL(sub_10089751); /* 0x100899A4: call 0x10089751 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100899A9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100899AC: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100899AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100899CF; /* 0x100899B1: js 0x100899cf */
L_100899B3:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100899CB; /* 0x100899B3: je 0x100899cb */
L_100899B5:
    ecx = MEM32(ebp + 0x8); /* 0x100899B5: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100899B8: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x100899BA: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100899BD: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100899C0: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x100899C1: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x100899C4: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100899D2; /* 0x100899C7: je 0x100899d2 */
L_100899C9:
    RECOMP_BACKEDGE();
    goto L_10089994; /* 0x100899C9: jmp 0x10089994 */
L_100899CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100899CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100899D2; /* 0x100899CD: jmp 0x100899d2 */
L_100899CF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100899CF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100899D2:
    MEM32(ebx) = edi; /* 0x100899D2: mov dword ptr [ebx], edi */
L_100899D4:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x100899D4: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100899E1; /* 0x100899D8: je 0x100899e1 */
L_100899DA:
    ecx = MEM32(ebp + (-0xC)); /* 0x100899DA: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100899DD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100899E1:
    edi = POP32_VAL(esp); /* 0x100899E1: pop edi */
    eax = esi; /* 0x100899E2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100899E4: pop esi */
L_100899E5:
    ebx = POP32_VAL(esp); /* 0x100899E5: pop ebx */
    esp = ebp; /* 0x100899E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100899E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100899E9: ret  */
L_10089ABE:
    PUSH32(esp, ebp); /* 0x10089ABE: push ebp */
    ebp = esp; /* 0x10089ABF: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089AC1: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100898EF; /* 0x10089AC2: jmp 0x100898ef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10089AC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089AC7u);

L_10089AC7:
    PUSH32(esp, ebp); /* 0x10089AC7: push ebp */
    ebp = esp; /* 0x10089AC8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10089ACA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10089ACB: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10089ACE: push esi */
    PUSH32(esp, edi); /* 0x10089ACF: push edi */
    /* test ebx, ebx */ /* 0x10089AD0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089AD7; /* 0x10089AD2: je 0x10089ad7 */
L_10089AD4:
    _flag_a = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu));
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu; /* 0x10089AD4: or dword ptr [ebx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089AD7:
    esi = MEM32(ebp + 0xC); /* 0x10089AD7: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x10089ADA: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x10089ADD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089AE7; /* 0x10089ADF: jne 0x10089ae7 */
L_10089AE1:
    /* test edi, edi */ /* 0x10089AE1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089AEB; /* 0x10089AE3: jne 0x10089aeb */
L_10089AE5:
    goto L_10089B03; /* 0x10089AE5: jmp 0x10089b03 */
L_10089AE7:
    /* test edi, edi */ /* 0x10089AE7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089AFE; /* 0x10089AE9: jne 0x10089afe */
L_10089AEB:
    RECOMP_CALL(sub_1001177D); /* 0x10089AEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10089AF0: push 0x16 */
L_10089AF2:
    esi = POP32_VAL(esp); /* 0x10089AF2: pop esi */
    MEM32(eax) = esi; /* 0x10089AF3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10089AF5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10089AFA: mov eax, esi */
    goto L_10089B61; /* 0x10089AFC: jmp 0x10089b61 */
L_10089AFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089AFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10089B00: mov word ptr [esi], ax */
L_10089B03:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10089B03: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089AEB; /* 0x10089B07: je 0x10089aeb */
L_10089B09:
    eax = MEM32(ebp + 0x18); /* 0x10089B09: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, edi */ /* 0x10089B0C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10089B12; /* 0x10089B0E: jbe 0x10089b12 */
L_10089B10:
    eax = edi; /* 0x10089B10: mov eax, edi */
L_10089B12:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10089B12: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x10089B15: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089B16: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10089B19: push esi */
    RECOMP_CALL(sub_100898EF); /* 0x10089B1A: call 0x100898ef */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10089B1F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10089B22: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089B39; /* 0x10089B25: jne 0x10089b39 */
L_10089B27:
    /* test esi, esi */ /* 0x10089B27: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089B30; /* 0x10089B29: je 0x10089b30 */
L_10089B2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089B2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10089B2D: mov word ptr [esi], ax */
L_10089B30:
    RECOMP_CALL(sub_1001177D); /* 0x10089B30: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10089B35: mov eax, dword ptr [eax] */
    goto L_10089B61; /* 0x10089B37: jmp 0x10089b61 */
L_10089B39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10089B39: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x10089B3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089B59; /* 0x10089B3C: je 0x10089b59 */
L_10089B3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10089B3E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x10089B40: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10089B54; /* 0x10089B42: jbe 0x10089b54 */
L_10089B44:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x10089B44: mov word ptr [esi], cx */
    /* cmp edi, eax */ /* 0x10089B47: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10089B59; /* 0x10089B49: jbe 0x10089b59 */
L_10089B4B:
    RECOMP_CALL(sub_1001177D); /* 0x10089B4B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10089B50: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10089AF2; /* 0x10089B52: jmp 0x10089af2 */
L_10089B54:
    MEM16(esi + eax * 2 + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x10089B54: mov word ptr [esi + eax*2 - 2], cx */
L_10089B59:
    /* test ebx, ebx */ /* 0x10089B59: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089B5F; /* 0x10089B5B: je 0x10089b5f */
L_10089B5D:
    MEM32(ebx) = eax; /* 0x10089B5D: mov dword ptr [ebx], eax */
L_10089B5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089B5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089B61:
    edi = POP32_VAL(esp); /* 0x10089B61: pop edi */
    esi = POP32_VAL(esp); /* 0x10089B62: pop esi */
    ebx = POP32_VAL(esp); /* 0x10089B63: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10089B64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089B65: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089B66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089B66u);

L_10089B66:
    PUSH32(esp, ebp); /* 0x10089B66: push ebp */
    ebp = esp; /* 0x10089B67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x10089B69: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10089B6C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10089B71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10089B73: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10089B76: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10089B77: mov ebx, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x10089B7A: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x10089B7D: push esi */
    PUSH32(esp, edi); /* 0x10089B7E: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089B7F: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x10089B82: mov edi, dword ptr [ebp + 0xc] */
    esi = ebx; /* 0x10089B85: mov esi, ebx */
    RECOMP_CALL(sub_1000F764); /* 0x10089B87: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10089B8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089B92; /* 0x10089B8E: je 0x10089b92 */
L_10089B90:
    MEM32(edi) = ebx; /* 0x10089B90: mov dword ptr [edi], ebx */
L_10089B92:
    /* test ebx, ebx */ /* 0x10089B92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089BAB; /* 0x10089B94: jne 0x10089bab */
L_10089B96:
    RECOMP_CALL(sub_1001177D); /* 0x10089B96: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10089B9B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10089BA1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10089C58; /* 0x10089BA6: jmp 0x10089c58 */
L_10089BAB:
    edx = MEM32(ebp + (-0x2C)); /* 0x10089BAB: mov edx, dword ptr [ebp - 0x2c] */
L_10089BAE:
    /* cmp MEM32(edx + 0x74), 1 */ /* 0x10089BAE: cmp dword ptr [edx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10089BCB; /* 0x10089BB2: jle 0x10089bcb */
L_10089BB4:
    eax = ebp + (-0x2C); /* 0x10089BB4: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10089BB7: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x10089BB8: movzx eax, byte ptr [esi] */
    PUSH32(esp, 8); /* 0x10089BBB: push 8 */
    PUSH32(esp, eax); /* 0x10089BBD: push eax */
    RECOMP_CALL(sub_100895AC); /* 0x10089BBE: call 0x100895ac */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x10089BC3: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089BC6: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10089BDB; /* 0x10089BC9: jmp 0x10089bdb */
L_10089BCB:
    ecx = (uint32_t)MEM8(esi); /* 0x10089BCB: movzx ecx, byte ptr [esi] */
    eax = MEM32(edx + 0x90); /* 0x10089BCE: mov eax, dword ptr [edx + 0x90] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10089BD4: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x10089BD8: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089BDB:
    /* test eax, eax */ /* 0x10089BDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089BE2; /* 0x10089BDD: je 0x10089be2 */
L_10089BDF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089BDF: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10089BAE; /* 0x10089BE0: jmp 0x10089bae */
L_10089BE2:
    eax = ebp + (-0x2C); /* 0x10089BE2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10089BE5: push eax */
    eax = ebp + (-0x1C); /* 0x10089BE6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x10089BE9: push esi */
    PUSH32(esp, eax); /* 0x10089BEA: push eax */
    RECOMP_CALL(sub_100305A2); /* 0x10089BEB: call 0x100305a2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089BF0: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x10089BF3: mov edx, eax */
    /* test edi, edi */ /* 0x10089BF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C00; /* 0x10089BF7: je 0x10089c00 */
L_10089BF9:
    ecx = MEM32(edx + 0x4); /* 0x10089BF9: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10089BFC: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x10089BFE: mov dword ptr [edi], ecx */
L_10089C00:
    /* test MEM32(edx), 0x240u */ /* 0x10089C00: test dword ptr [edx], 0x240 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C12; /* 0x10089C06: je 0x10089c12 */
L_10089C08:
    fp_push(0.0); /* 0x10089C08: fldz  */
    /* test edi, edi */ /* 0x10089C0A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C5F; /* 0x10089C0C: je 0x10089c5f */
L_10089C0E:
    MEM32(edi) = ebx; /* 0x10089C0E: mov dword ptr [edi], ebx */
    goto L_10089C5F; /* 0x10089C10: jmp 0x10089c5f */
L_10089C12:
    /* test MEM8(edx), 0x81u */ /* 0x10089C12: test byte ptr [edx], 0x81 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C37; /* 0x10089C15: je 0x10089c37 */
L_10089C17:
    /* cmp MEM8(esi), 0x2Du */ /* 0x10089C17: cmp byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    fp_push(*(double*)ADDR(0x100DF570)); /* 0x10089C1A: fld qword ptr [0x100df570] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089C24; /* 0x10089C20: jne 0x10089c24 */
L_10089C22:
    _st[0] = -_st[0]; /* 0x10089C22: fchs  */
L_10089C24:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x10089C24: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1001177D); /* 0x10089C27: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x10089C2C: fld qword ptr [ebp - 0x34] */
    MEM32(eax) = 0x22u; /* 0x10089C2F: mov dword ptr [eax], 0x22 */
    goto L_10089C5F; /* 0x10089C35: jmp 0x10089c5f */
L_10089C37:
    /* test MEM32(edx), 0x100u */ /* 0x10089C37: test dword ptr [edx], 0x100 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C5C; /* 0x10089C3D: je 0x10089c5c */
L_10089C3F:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x10089C3F: fld qword ptr [edx + 0x10] */
    fp_push(0.0); /* 0x10089C42: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x10089C44: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x10089C46: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x10089C48: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_10089C5C; /* 0x10089C4B: jp 0x10089c5c */
L_10089C4D:
    RECOMP_CALL(sub_1001177D); /* 0x10089C4D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10089C52: mov dword ptr [eax], 0x22 */
L_10089C58:
    fp_push(0.0); /* 0x10089C58: fldz  */
    goto L_10089C5F; /* 0x10089C5A: jmp 0x10089c5f */
L_10089C5C:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x10089C5C: fld qword ptr [edx + 0x10] */
L_10089C5F:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x10089C5F: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x10089C63: pop edi */
    esi = POP32_VAL(esp); /* 0x10089C64: pop esi */
    ebx = POP32_VAL(esp); /* 0x10089C65: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089C6F; /* 0x10089C66: je 0x10089c6f */
L_10089C68:
    eax = MEM32(ebp + (-0x24)); /* 0x10089C68: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10089C6B: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089C6F:
    ecx = MEM32(ebp + (-0x4)); /* 0x10089C6F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10089C72: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10089C74: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10089C79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089C7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089C7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089C7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089C7Du);

L_10089C7D:
    PUSH32(esp, ebp); /* 0x10089C7D: push ebp */
    ebp = esp; /* 0x10089C7E: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089C80: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089C82: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089C85: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089B66); /* 0x10089C88: call 0x10089b66 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089C8D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089C90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089C91: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089C92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089C92u);

L_10089C92:
    PUSH32(esp, ebp); /* 0x10089C92: push ebp */
    ebp = esp; /* 0x10089C93: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089C95: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089C97: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089C9A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089C9D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089CA0: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1002E4B5); /* 0x10089CA3: call 0x1002e4b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089CA8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089CAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089CAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089CAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089CADu);

L_10089CAD:
    PUSH32(esp, ebp); /* 0x10089CAD: push ebp */
    ebp = esp; /* 0x10089CAE: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10089CB0: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089CB2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089CB5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089CB8: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089CBB: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1002E4B5); /* 0x10089CBE: call 0x1002e4b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089CC3: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089CC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089CC7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089CC8u);

L_10089CC8:
    PUSH32(esp, ebp); /* 0x10089CC8: push ebp */
    ebp = esp; /* 0x10089CC9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x10089CCB: sub esp, 0x40 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x40); /* 0x10089CCE: lea ecx, [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089CD1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F764); /* 0x10089CD4: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x10089CD9: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x10089CDC: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10089CDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089CE5; /* 0x10089CE1: je 0x10089ce5 */
L_10089CE3:
    MEM32(eax) = ecx; /* 0x10089CE3: mov dword ptr [eax], ecx */
L_10089CE5:
    PUSH32(esp, ebx); /* 0x10089CE5: push ebx */
    PUSH32(esp, edi); /* 0x10089CE6: push edi */
    /* test ecx, ecx */ /* 0x10089CE7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089CFC; /* 0x10089CE9: je 0x10089cfc */
L_10089CEB:
    ebx = MEM32(ebp + 0x14); /* 0x10089CEB: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x10089CEE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089D15; /* 0x10089CF0: je 0x10089d15 */
L_10089CF2:
    /* cmp ebx, 2 */ /* 0x10089CF2: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10089CFC; /* 0x10089CF5: jl 0x10089cfc */
L_10089CF7:
    /* cmp ebx, 0x24u */ /* 0x10089CF7: cmp ebx, 0x24 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10089D15; /* 0x10089CFA: jle 0x10089d15 */
L_10089CFC:
    RECOMP_CALL(sub_1001177D); /* 0x10089CFC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10089D01: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10089D07: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089D0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x10089D0E: mov edi, eax */
    goto L_10089F23; /* 0x10089D10: jmp 0x10089f23 */
L_10089D15:
    SET_LO8(edx, MEM8(ecx)); /* 0x10089D15: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089D17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x40)); /* 0x10089D19: mov ebx, dword ptr [ebp - 0x40] */
    edi = eax; /* 0x10089D1C: mov edi, eax */
    PUSH32(esp, esi); /* 0x10089D1E: push esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x10089D1F: mov dword ptr [ebp - 8], eax */
    esi = ecx + 0x1; /* 0x10089D22: lea esi, [ecx + 1] */
L_10089D25:
    /* cmp MEM32(ebx + 0x74), 1 */ /* 0x10089D25: cmp dword ptr [ebx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x10089D29: mov byte ptr [ebp - 1], dl */
    if (CMP_LE(_flag_a, _flag_b)) goto L_10089D48; /* 0x10089D2C: jle 0x10089d48 */
L_10089D2E:
    eax = ebp + (-0x40); /* 0x10089D2E: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10089D31: push eax */
    eax = (uint32_t)LO8(edx); /* 0x10089D32: movzx eax, dl */
    PUSH32(esp, 8); /* 0x10089D35: push 8 */
    PUSH32(esp, eax); /* 0x10089D37: push eax */
    RECOMP_CALL(sub_100895AC); /* 0x10089D38: call 0x100895ac */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x10089D3D: mov dl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089D40: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x40)); /* 0x10089D43: mov ebx, dword ptr [ebp - 0x40] */
    goto L_10089D58; /* 0x10089D46: jmp 0x10089d58 */
L_10089D48:
    eax = MEM32(ebx + 0x90); /* 0x10089D48: mov eax, dword ptr [ebx + 0x90] */
    ecx = (uint32_t)LO8(edx); /* 0x10089D4E: movzx ecx, dl */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10089D51: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x10089D55: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089D58:
    /* test eax, eax */ /* 0x10089D58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089D61; /* 0x10089D5A: je 0x10089d61 */
L_10089D5C:
    SET_LO8(edx, MEM8(esi)); /* 0x10089D5C: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089D5E: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10089D25; /* 0x10089D5F: jmp 0x10089d25 */
L_10089D61:
    eax = MEM32(ebp + 0x18); /* 0x10089D61: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO8(edx), 0x2Du */ /* 0x10089D64: cmp dl, 0x2d */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089D6E; /* 0x10089D67: jne 0x10089d6e */
L_10089D69:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x10089D69: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10089D73; /* 0x10089D6C: jmp 0x10089d73 */
L_10089D6E:
    /* cmp LO8(edx), 0x2Bu */ /* 0x10089D6E: cmp dl, 0x2b */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089D79; /* 0x10089D71: jne 0x10089d79 */
L_10089D73:
    SET_LO8(edx, MEM8(esi)); /* 0x10089D73: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089D75: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x10089D76: mov byte ptr [ebp - 1], dl */
L_10089D79:
    ebx = MEM32(ebp + 0x14); /* 0x10089D79: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10089D7C: mov dword ptr [ebp - 0xc], eax */
    /* test ebx, ebx */ /* 0x10089D7F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089DA4; /* 0x10089D81: jne 0x10089da4 */
L_10089D83:
    /* cmp LO8(edx), 0x30u */ /* 0x10089D83: cmp dl, 0x30 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089D90; /* 0x10089D86: je 0x10089d90 */
L_10089D88:
    PUSH32(esp, 0xAu); /* 0x10089D88: push 0xa */
L_10089D8A:
    ebx = POP32_VAL(esp); /* 0x10089D8A: pop ebx */
    MEM32(ebp + 0x14) = ebx; /* 0x10089D8B: mov dword ptr [ebp + 0x14], ebx */
    goto L_10089DC1; /* 0x10089D8E: jmp 0x10089dc1 */
L_10089D90:
    SET_LO8(eax, MEM8(esi)); /* 0x10089D90: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x10089D92: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089D9E; /* 0x10089D94: je 0x10089d9e */
L_10089D96:
    /* cmp LO8(eax), 0x58u */ /* 0x10089D96: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089D9E; /* 0x10089D98: je 0x10089d9e */
L_10089D9A:
    PUSH32(esp, 8); /* 0x10089D9A: push 8 */
    RECOMP_BACKEDGE();
    goto L_10089D8A; /* 0x10089D9C: jmp 0x10089d8a */
L_10089D9E:
    PUSH32(esp, 0x10u); /* 0x10089D9E: push 0x10 */
    ebx = POP32_VAL(esp); /* 0x10089DA0: pop ebx */
    MEM32(ebp + 0x14) = ebx; /* 0x10089DA1: mov dword ptr [ebp + 0x14], ebx */
L_10089DA4:
    /* cmp ebx, 0x10u */ /* 0x10089DA4: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089DC1; /* 0x10089DA7: jne 0x10089dc1 */
L_10089DA9:
    /* cmp LO8(edx), 0x30u */ /* 0x10089DA9: cmp dl, 0x30 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089DC1; /* 0x10089DAC: jne 0x10089dc1 */
L_10089DAE:
    SET_LO8(eax, MEM8(esi)); /* 0x10089DAE: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x10089DB0: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089DB8; /* 0x10089DB2: je 0x10089db8 */
L_10089DB4:
    /* cmp LO8(eax), 0x58u */ /* 0x10089DB4: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089DC1; /* 0x10089DB6: jne 0x10089dc1 */
L_10089DB8:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x10089DB8: mov al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10089DBB: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x10089DBE: mov byte ptr [ebp - 1], al */
L_10089DC1:
    eax = ebx; /* 0x10089DC1: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10089DC3: cdq  */
    ecx = edx; /* 0x10089DC4: mov ecx, edx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10089DC6: mov dword ptr [ebp - 0x2c], eax */
    PUSH32(esp, ecx); /* 0x10089DC9: push ecx */
    PUSH32(esp, eax); /* 0x10089DCA: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10089DCB: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10089DCD: push -1 */
    MEM32(ebp + (-0x28)) = ecx; /* 0x10089DCF: mov dword ptr [ebp - 0x28], ecx */
    RECOMP_CALL(sub_10011849); /* 0x10089DD2: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = edx; /* 0x10089DD7: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(ebp + (-0x40)); /* 0x10089DDA: mov edx, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10089DDD: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x10089DE0: mov dword ptr [ebp - 0x24], ecx */
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x10089DE3: mov cl, byte ptr [ebp - 1] */
    eax = MEM32(edx + 0x90); /* 0x10089DE6: mov eax, dword ptr [edx + 0x90] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10089DEC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10089DEE: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10089DF1: mov dword ptr [ebp - 0x1c], eax */
L_10089DF4:
    ebx = MEM32(ebp + (-0x1C)); /* 0x10089DF4: mov ebx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO8(ecx); /* 0x10089DF7: movzx eax, cl */
    eax = (uint32_t)MEM16(ebx + eax * 2); /* 0x10089DFA: movzx eax, word ptr [ebx + eax*2] */
    ebx = MEM32(ebp + (-0xC)); /* 0x10089DFE: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10089E01: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x10089E04: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089E11; /* 0x10089E07: je 0x10089e11 */
L_10089E09:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x10089E09: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x10089E0C: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    goto L_10089E2B; /* 0x10089E0F: jmp 0x10089e2b */
L_10089E11:
    eax = MEM32(ebp + (-0x18)); /* 0x10089E11: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    eax = eax & 0x103u; /* 0x10089E14: and eax, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089E8F; /* 0x10089E19: je 0x10089e8f */
L_10089E1B:
    eax = ecx + (-0x61); /* 0x10089E1B: lea eax, [ecx - 0x61] */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x10089E1E: movsx ecx, cl */
    /* cmp LO8(eax), 0x19u */ /* 0x10089E21: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_10089E28; /* 0x10089E23: ja 0x10089e28 */
L_10089E25:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x20u; /* 0x10089E25: sub ecx, 0x20 */
    _flag_k = FK_CMP;
L_10089E28:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFC9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFC9u; /* 0x10089E28: add ecx, -0x37 */
    _flag_k = FK_ADD;
L_10089E2B:
    eax = MEM32(ebp + (-0x8)); /* 0x10089E2B: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x10089E2E: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x10089E31: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10089E92; /* 0x10089E34: jae 0x10089e92 */
L_10089E36:
    _flag_a = (uint32_t)((ebx | 8)); _flag_b = (uint32_t)((ebx | 8));
    ebx = ebx | 8; /* 0x10089E36: or ebx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x10089E39: mov dword ptr [ebp - 0xc], ebx */
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x10089E3C: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10089E6D; /* 0x10089E3F: jb 0x10089e6d */
L_10089E41:
    if (CMP_A(_flag_a, _flag_b)) goto L_10089E48; /* 0x10089E41: ja 0x10089e48 */
L_10089E43:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x10089E43: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10089E6D; /* 0x10089E46: jb 0x10089e6d */
L_10089E48:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x10089E48: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089E5E; /* 0x10089E4B: jne 0x10089e5e */
L_10089E4D:
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x10089E4D: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089E5E; /* 0x10089E50: jne 0x10089e5e */
L_10089E52:
    /* cmp edx, MEM32(ebp + (-0x20)) */ /* 0x10089E52: cmp edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10089E6D; /* 0x10089E55: jb 0x10089e6d */
L_10089E57:
    if (CMP_A(_flag_a, _flag_b)) goto L_10089E5E; /* 0x10089E57: ja 0x10089e5e */
L_10089E59:
    /* cmp ecx, MEM32(ebp + (-0x24)) */ /* 0x10089E59: cmp ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10089E6D; /* 0x10089E5C: jbe 0x10089e6d */
L_10089E5E:
    ecx = MEM32(ebp + 0x10); /* 0x10089E5E: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x10089E61: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x10089E64: mov dword ptr [ebp - 0xc], ebx */
    /* test ecx, ecx */ /* 0x10089E67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089E87; /* 0x10089E69: jne 0x10089e87 */
L_10089E6B:
    goto L_10089E95; /* 0x10089E6B: jmp 0x10089e95 */
L_10089E6D:
    PUSH32(esp, edi); /* 0x10089E6D: push edi */
    PUSH32(esp, eax); /* 0x10089E6E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x10089E6F: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10089E72: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_10015B8C); /* 0x10089E75: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x10089E7A: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    edi = edx; /* 0x10089E7D: mov edi, edx */
    PUSH32(esp, 0); /* 0x10089E7F: push 0 */
    edx = POP32_VAL(esp); /* 0x10089E81: pop edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x10089E82: mov dword ptr [ebp - 8], eax */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10089E85: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10089E87:
    SET_LO8(ecx, MEM8(esi)); /* 0x10089E87: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089E89: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10089DF4; /* 0x10089E8A: jmp 0x10089df4 */
L_10089E8F:
    eax = MEM32(ebp + (-0x8)); /* 0x10089E8F: mov eax, dword ptr [ebp - 8] */
L_10089E92:
    ecx = MEM32(ebp + 0x10); /* 0x10089E92: mov ecx, dword ptr [ebp + 0x10] */
L_10089E95:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10089E95: dec esi */
    _flag_k = FK_DEC;
    /* test LO8(ebx), 8 */ /* 0x10089E96: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089EA8; /* 0x10089E99: jne 0x10089ea8 */
L_10089E9B:
    /* test ecx, ecx */ /* 0x10089E9B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089EA2; /* 0x10089E9D: je 0x10089ea2 */
L_10089E9F:
    esi = MEM32(ebp + 0xC); /* 0x10089E9F: mov esi, dword ptr [ebp + 0xc] */
L_10089EA2:
    eax = edx; /* 0x10089EA2: mov eax, edx */
    edi = edx; /* 0x10089EA4: mov edi, edx */
    goto L_10089F0D; /* 0x10089EA6: jmp 0x10089f0d */
L_10089EA8:
    /* test LO8(ebx), 4 */ /* 0x10089EA8: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089EDA; /* 0x10089EAB: jne 0x10089eda */
L_10089EAD:
    /* test LO8(ebx), 1 */ /* 0x10089EAD: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089F0A; /* 0x10089EB0: jne 0x10089f0a */
L_10089EB2:
    ecx = ebx; /* 0x10089EB2: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x10089EB4: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089EC7; /* 0x10089EB7: je 0x10089ec7 */
L_10089EB9:
    /* cmp edi, 0x80000000u */ /* 0x10089EB9: cmp edi, 0x80000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10089EDA; /* 0x10089EBF: ja 0x10089eda */
L_10089EC1:
    if (CMP_B(_flag_a, _flag_b)) goto L_10089EC7; /* 0x10089EC1: jb 0x10089ec7 */
L_10089EC3:
    /* cmp eax, edx */ /* 0x10089EC3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10089EDA; /* 0x10089EC5: ja 0x10089eda */
L_10089EC7:
    /* test ecx, ecx */ /* 0x10089EC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089F0A; /* 0x10089EC9: jne 0x10089f0a */
L_10089ECB:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x10089ECB: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10089F0A; /* 0x10089ED1: jb 0x10089f0a */
L_10089ED3:
    if (CMP_A(_flag_a, _flag_b)) goto L_10089EDA; /* 0x10089ED3: ja 0x10089eda */
L_10089ED5:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10089ED5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10089F0A; /* 0x10089ED8: jbe 0x10089f0a */
L_10089EDA:
    RECOMP_CALL(sub_1001177D); /* 0x10089EDA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10089EDF: mov dword ptr [eax], 0x22 */
    /* test LO8(ebx), 1 */ /* 0x10089EE5: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089EF2; /* 0x10089EE8: je 0x10089ef2 */
L_10089EEA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10089EEA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10089EED: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10089F0D; /* 0x10089EF0: jmp 0x10089f0d */
L_10089EF2:
    /* test LO8(ebx), 2 */ /* 0x10089EF2: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089F00; /* 0x10089EF5: je 0x10089f00 */
L_10089EF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089EF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x80000000u; /* 0x10089EF9: mov edi, 0x80000000 */
    goto L_10089F0D; /* 0x10089EFE: jmp 0x10089f0d */
L_10089F00:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10089F00: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7FFFFFFFu; /* 0x10089F03: mov edi, 0x7fffffff */
    goto L_10089F0D; /* 0x10089F08: jmp 0x10089f0d */
L_10089F0A:
    eax = MEM32(ebp + (-0x8)); /* 0x10089F0A: mov eax, dword ptr [ebp - 8] */
L_10089F0D:
    ecx = MEM32(ebp + 0x10); /* 0x10089F0D: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x10089F10: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089F16; /* 0x10089F12: je 0x10089f16 */
L_10089F14:
    MEM32(ecx) = esi; /* 0x10089F14: mov dword ptr [ecx], esi */
L_10089F16:
    esi = POP32_VAL(esp); /* 0x10089F16: pop esi */
    /* test LO8(ebx), 2 */ /* 0x10089F17: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089F23; /* 0x10089F1A: je 0x10089f23 */
L_10089F1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10089F1C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10089F1E: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x10089F21: neg edi */
    _flag_k = FK_CMP;
L_10089F23:
    /* cmp MEM8(ebp + (-0x34)), 0 */ /* 0x10089F23: cmp byte ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089F30; /* 0x10089F27: je 0x10089f30 */
L_10089F29:
    ecx = MEM32(ebp + (-0x38)); /* 0x10089F29: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10089F2C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089F30:
    edx = edi; /* 0x10089F30: mov edx, edi */
    edi = POP32_VAL(esp); /* 0x10089F32: pop edi */
    ebx = POP32_VAL(esp); /* 0x10089F33: pop ebx */
    esp = ebp; /* 0x10089F34: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089F36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F37: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089F38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089F38u);

L_10089F38:
    PUSH32(esp, ebp); /* 0x10089F38: push ebp */
    ebp = esp; /* 0x10089F39: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10089F3B: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089F3C: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10089F3F: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089F42: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089F45: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10089F48: push eax */
    RECOMP_CALL(sub_1002BCD0); /* 0x10089F49: call 0x1002bcd0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x10089F4E: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10089F51: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x10089F54: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089F56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F57: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089F58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089F58u);

L_10089F58:
    PUSH32(esp, ebp); /* 0x10089F58: push ebp */
    ebp = esp; /* 0x10089F59: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10089F5B: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10089F62: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089F64: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089F67: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089F6A: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089F76; /* 0x10089F6D: jne 0x10089f76 */
L_10089F6F:
    PUSH32(esp, 0x100E1870u); /* 0x10089F6F: push 0x100e1870 */
    goto L_10089F78; /* 0x10089F74: jmp 0x10089f78 */
L_10089F76:
    PUSH32(esp, 0); /* 0x10089F76: push 0 */
L_10089F78:
    RECOMP_CALL(sub_10089CC8); /* 0x10089F78: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089F7D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089F80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F81: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089F82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089F82u);

L_10089F82:
    PUSH32(esp, ebp); /* 0x10089F82: push ebp */
    ebp = esp; /* 0x10089F83: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089F85: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089F87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089F8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089F8D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089F90: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10089CC8); /* 0x10089F93: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089F98: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089F9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089F9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089F9Du);

    goto L_10089F9D;
L_10089B66:
    PUSH32(esp, ebp); /* 0x10089B66: push ebp */
    ebp = esp; /* 0x10089B67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x10089B69: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10089B6C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10089B71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10089B73: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10089B76: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10089B77: mov ebx, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x10089B7A: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x10089B7D: push esi */
    PUSH32(esp, edi); /* 0x10089B7E: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089B7F: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x10089B82: mov edi, dword ptr [ebp + 0xc] */
    esi = ebx; /* 0x10089B85: mov esi, ebx */
    RECOMP_CALL(sub_1000F764); /* 0x10089B87: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10089B8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089B92; /* 0x10089B8E: je 0x10089b92 */
L_10089B90:
    MEM32(edi) = ebx; /* 0x10089B90: mov dword ptr [edi], ebx */
L_10089B92:
    /* test ebx, ebx */ /* 0x10089B92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089BAB; /* 0x10089B94: jne 0x10089bab */
L_10089B96:
    RECOMP_CALL(sub_1001177D); /* 0x10089B96: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10089B9B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10089BA1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10089C58; /* 0x10089BA6: jmp 0x10089c58 */
L_10089BAB:
    edx = MEM32(ebp + (-0x2C)); /* 0x10089BAB: mov edx, dword ptr [ebp - 0x2c] */
L_10089BAE:
    /* cmp MEM32(edx + 0x74), 1 */ /* 0x10089BAE: cmp dword ptr [edx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10089BCB; /* 0x10089BB2: jle 0x10089bcb */
L_10089BB4:
    eax = ebp + (-0x2C); /* 0x10089BB4: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10089BB7: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x10089BB8: movzx eax, byte ptr [esi] */
    PUSH32(esp, 8); /* 0x10089BBB: push 8 */
    PUSH32(esp, eax); /* 0x10089BBD: push eax */
    RECOMP_CALL(sub_100895AC); /* 0x10089BBE: call 0x100895ac */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x10089BC3: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089BC6: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10089BDB; /* 0x10089BC9: jmp 0x10089bdb */
L_10089BCB:
    ecx = (uint32_t)MEM8(esi); /* 0x10089BCB: movzx ecx, byte ptr [esi] */
    eax = MEM32(edx + 0x90); /* 0x10089BCE: mov eax, dword ptr [edx + 0x90] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10089BD4: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x10089BD8: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089BDB:
    /* test eax, eax */ /* 0x10089BDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089BE2; /* 0x10089BDD: je 0x10089be2 */
L_10089BDF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089BDF: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10089BAE; /* 0x10089BE0: jmp 0x10089bae */
L_10089BE2:
    eax = ebp + (-0x2C); /* 0x10089BE2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10089BE5: push eax */
    eax = ebp + (-0x1C); /* 0x10089BE6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x10089BE9: push esi */
    PUSH32(esp, eax); /* 0x10089BEA: push eax */
    RECOMP_CALL(sub_100305A2); /* 0x10089BEB: call 0x100305a2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089BF0: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x10089BF3: mov edx, eax */
    /* test edi, edi */ /* 0x10089BF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C00; /* 0x10089BF7: je 0x10089c00 */
L_10089BF9:
    ecx = MEM32(edx + 0x4); /* 0x10089BF9: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10089BFC: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x10089BFE: mov dword ptr [edi], ecx */
L_10089C00:
    /* test MEM32(edx), 0x240u */ /* 0x10089C00: test dword ptr [edx], 0x240 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C12; /* 0x10089C06: je 0x10089c12 */
L_10089C08:
    fp_push(0.0); /* 0x10089C08: fldz  */
    /* test edi, edi */ /* 0x10089C0A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C5F; /* 0x10089C0C: je 0x10089c5f */
L_10089C0E:
    MEM32(edi) = ebx; /* 0x10089C0E: mov dword ptr [edi], ebx */
    goto L_10089C5F; /* 0x10089C10: jmp 0x10089c5f */
L_10089C12:
    /* test MEM8(edx), 0x81u */ /* 0x10089C12: test byte ptr [edx], 0x81 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C37; /* 0x10089C15: je 0x10089c37 */
L_10089C17:
    /* cmp MEM8(esi), 0x2Du */ /* 0x10089C17: cmp byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    fp_push(*(double*)ADDR(0x100DF570)); /* 0x10089C1A: fld qword ptr [0x100df570] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089C24; /* 0x10089C20: jne 0x10089c24 */
L_10089C22:
    _st[0] = -_st[0]; /* 0x10089C22: fchs  */
L_10089C24:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x10089C24: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1001177D); /* 0x10089C27: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x10089C2C: fld qword ptr [ebp - 0x34] */
    MEM32(eax) = 0x22u; /* 0x10089C2F: mov dword ptr [eax], 0x22 */
    goto L_10089C5F; /* 0x10089C35: jmp 0x10089c5f */
L_10089C37:
    /* test MEM32(edx), 0x100u */ /* 0x10089C37: test dword ptr [edx], 0x100 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089C5C; /* 0x10089C3D: je 0x10089c5c */
L_10089C3F:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x10089C3F: fld qword ptr [edx + 0x10] */
    fp_push(0.0); /* 0x10089C42: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x10089C44: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x10089C46: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x10089C48: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_10089C5C; /* 0x10089C4B: jp 0x10089c5c */
L_10089C4D:
    RECOMP_CALL(sub_1001177D); /* 0x10089C4D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10089C52: mov dword ptr [eax], 0x22 */
L_10089C58:
    fp_push(0.0); /* 0x10089C58: fldz  */
    goto L_10089C5F; /* 0x10089C5A: jmp 0x10089c5f */
L_10089C5C:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x10089C5C: fld qword ptr [edx + 0x10] */
L_10089C5F:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x10089C5F: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x10089C63: pop edi */
    esi = POP32_VAL(esp); /* 0x10089C64: pop esi */
    ebx = POP32_VAL(esp); /* 0x10089C65: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089C6F; /* 0x10089C66: je 0x10089c6f */
L_10089C68:
    eax = MEM32(ebp + (-0x24)); /* 0x10089C68: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10089C6B: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089C6F:
    ecx = MEM32(ebp + (-0x4)); /* 0x10089C6F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10089C72: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10089C74: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10089C79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089C7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089C7C: ret  */
L_10089F9D:
    PUSH32(esp, ebp); /* 0x10089F9D: push ebp */
    ebp = esp; /* 0x10089F9E: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089FA0: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089B66; /* 0x10089FA1: jmp 0x10089b66 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10089FA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089FA6u);

    goto L_10089FA6;
L_10089F82:
    PUSH32(esp, ebp); /* 0x10089F82: push ebp */
    ebp = esp; /* 0x10089F83: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089F85: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089F87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089F8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089F8D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089F90: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10089CC8); /* 0x10089F93: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089F98: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089F9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F9C: ret  */
L_10089FA6:
    PUSH32(esp, ebp); /* 0x10089FA6: push ebp */
    ebp = esp; /* 0x10089FA7: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089FA9: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089F82; /* 0x10089FAA: jmp 0x10089f82 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10089FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089FACu);

L_10089FAC:
    PUSH32(esp, ebp); /* 0x10089FAC: push ebp */
    ebp = esp; /* 0x10089FAD: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10089FAF: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x10089FB6: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089FB8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089FBB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089FBE: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089FCA; /* 0x10089FC1: jne 0x10089fca */
L_10089FC3:
    PUSH32(esp, 0x100E1870u); /* 0x10089FC3: push 0x100e1870 */
    goto L_10089FCC; /* 0x10089FC8: jmp 0x10089fcc */
L_10089FCA:
    PUSH32(esp, 0); /* 0x10089FCA: push 0 */
L_10089FCC:
    RECOMP_CALL(sub_10089CC8); /* 0x10089FCC: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089FD1: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089FD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089FD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089FD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089FD6u);

L_10089FD6:
    PUSH32(esp, ebp); /* 0x10089FD6: push ebp */
    ebp = esp; /* 0x10089FD7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10089FD9: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089FDB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089FDE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089FE1: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089FE4: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10089CC8); /* 0x10089FE7: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089FEC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089FEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089FF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089FF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089FF1u);

    goto L_10089FF1;
L_10089FD6:
    PUSH32(esp, ebp); /* 0x10089FD6: push ebp */
    ebp = esp; /* 0x10089FD7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10089FD9: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089FDB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089FDE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089FE1: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089FE4: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10089CC8); /* 0x10089FE7: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089FEC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089FEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089FF0: ret  */
L_10089FF1:
    PUSH32(esp, ebp); /* 0x10089FF1: push ebp */
    ebp = esp; /* 0x10089FF2: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089FF4: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089FD6; /* 0x10089FF5: jmp 0x10089fd6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10089FF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089FF7u);

L_10089FF7:
    PUSH32(esp, ebp); /* 0x10089FF7: push ebp */
    ebp = esp; /* 0x10089FF8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10089FFA: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089FFB: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10089FFE: lea eax, [ebp - 4] */
    PUSH32(esp, 0); /* 0x1008A001: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A003: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008A006: push eax */
    RECOMP_CALL(sub_1002BCD0); /* 0x1008A007: call 0x1002bcd0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1008A00C: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008A00F: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1008A012: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A014: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A015: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A016(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A016u);

    goto L_1008A016;
L_10089F58:
    PUSH32(esp, ebp); /* 0x10089F58: push ebp */
    ebp = esp; /* 0x10089F59: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10089F5B: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10089F62: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089F64: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089F67: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089F6A: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089F76; /* 0x10089F6D: jne 0x10089f76 */
L_10089F6F:
    PUSH32(esp, 0x100E1870u); /* 0x10089F6F: push 0x100e1870 */
    goto L_10089F78; /* 0x10089F74: jmp 0x10089f78 */
L_10089F76:
    PUSH32(esp, 0); /* 0x10089F76: push 0 */
L_10089F78:
    RECOMP_CALL(sub_10089CC8); /* 0x10089F78: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089F7D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089F80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089F81: ret  */
L_1008A016:
    PUSH32(esp, ebp); /* 0x1008A016: push ebp */
    ebp = esp; /* 0x1008A017: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008A019: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089F58; /* 0x1008A01A: jmp 0x10089f58 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008A01F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A01Fu);

    goto L_1008A01F;
L_10089C7D:
    PUSH32(esp, ebp); /* 0x10089C7D: push ebp */
    ebp = esp; /* 0x10089C7E: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089C80: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089C82: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089C85: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089B66); /* 0x10089C88: call 0x10089b66 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089C8D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089C90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089C91: ret  */
L_1008A01F:
    PUSH32(esp, ebp); /* 0x1008A01F: push ebp */
    ebp = esp; /* 0x1008A020: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008A022: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089C7D; /* 0x1008A023: jmp 0x10089c7d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008A028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A028u);

    goto L_1008A028;
L_10089FAC:
    PUSH32(esp, ebp); /* 0x10089FAC: push ebp */
    ebp = esp; /* 0x10089FAD: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10089FAF: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x10089FB6: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089FB8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089FBB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089FBE: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089FCA; /* 0x10089FC1: jne 0x10089fca */
L_10089FC3:
    PUSH32(esp, 0x100E1870u); /* 0x10089FC3: push 0x100e1870 */
    goto L_10089FCC; /* 0x10089FC8: jmp 0x10089fcc */
L_10089FCA:
    PUSH32(esp, 0); /* 0x10089FCA: push 0 */
L_10089FCC:
    RECOMP_CALL(sub_10089CC8); /* 0x10089FCC: call 0x10089cc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089FD1: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089FD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089FD5: ret  */
L_1008A028:
    PUSH32(esp, ebp); /* 0x1008A028: push ebp */
    ebp = esp; /* 0x1008A029: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008A02B: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10089FAC; /* 0x1008A02C: jmp 0x10089fac */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008A031(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A031u);

L_1008A031:
    PUSH32(esp, ebp); /* 0x1008A031: push ebp */
    ebp = esp; /* 0x1008A032: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008A034: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008A037: add eax, 0x20 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008A03A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A03B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A03Cu);

L_1008A03C:
    PUSH32(esp, ebp); /* 0x1008A03C: push ebp */
    ebp = esp; /* 0x1008A03D: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008A03F: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A05A; /* 0x1008A046: jne 0x1008a05a */
L_1008A048:
    ecx = MEM32(ebp + 0x8); /* 0x1008A048: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x41); /* 0x1008A04B: lea eax, [ecx - 0x41] */
    /* cmp eax, 0x19u */ /* 0x1008A04E: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A056; /* 0x1008A051: ja 0x1008a056 */
L_1008A053:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1008A053: add ecx, 0x20 */
    _flag_k = FK_ADD;
L_1008A056:
    eax = ecx; /* 0x1008A056: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1008A058: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A059: ret  */
L_1008A05A:
    PUSH32(esp, 0); /* 0x1008A05A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A05C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002A069); /* 0x1008A05F: call 0x1002a069 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A064: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A065: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008A066: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A067: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A068u);

L_1008A068:
    PUSH32(esp, ebp); /* 0x1008A068: push ebp */
    ebp = esp; /* 0x1008A069: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008A06B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE0u; /* 0x1008A06E: add eax, -0x20 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008A071: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A072: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A073(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A073u);

L_1008A073:
    PUSH32(esp, ebp); /* 0x1008A073: push ebp */
    ebp = esp; /* 0x1008A074: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1008A076: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x1008A079: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1008A07C: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008A07D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008A080: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1008A085: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x100u */ /* 0x1008A088: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008A0F0; /* 0x1008A08E: jae 0x1008a0f0 */
L_1008A090:
    ecx = MEM32(ebp + (-0x18)); /* 0x1008A090: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x1008A093: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008A0AD; /* 0x1008A097: jle 0x1008a0ad */
L_1008A099:
    eax = ebp + (-0x18); /* 0x1008A099: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1008A09C: push eax */
    PUSH32(esp, 2); /* 0x1008A09D: push 2 */
    PUSH32(esp, ebx); /* 0x1008A09F: push ebx */
    RECOMP_CALL(sub_100895AC); /* 0x1008A0A0: call 0x100895ac */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1008A0A5: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008A0A8: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1008A0BA; /* 0x1008A0AB: jmp 0x1008a0ba */
L_1008A0AD:
    eax = MEM32(ecx + 0x90); /* 0x1008A0AD: mov eax, dword ptr [ecx + 0x90] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x1008A0B3: movzx eax, word ptr [eax + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1008A0B7: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A0BA:
    /* test eax, eax */ /* 0x1008A0BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A0DC; /* 0x1008A0BC: je 0x1008a0dc */
L_1008A0BE:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008A0BE: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx + 0x98); /* 0x1008A0C2: mov eax, dword ptr [ecx + 0x98] */
    ecx = (uint32_t)MEM8(eax + ebx); /* 0x1008A0C8: movzx ecx, byte ptr [eax + ebx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A0D5; /* 0x1008A0CC: je 0x1008a0d5 */
L_1008A0CE:
    eax = MEM32(ebp + (-0x10)); /* 0x1008A0CE: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008A0D1: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A0D5:
    eax = ecx; /* 0x1008A0D5: mov eax, ecx */
    goto L_1008A1B2; /* 0x1008A0D7: jmp 0x1008a1b2 */
L_1008A0DC:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008A0DC: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A0E9; /* 0x1008A0E0: je 0x1008a0e9 */
L_1008A0E2:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008A0E2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A0E5: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A0E9:
    eax = ebx; /* 0x1008A0E9: mov eax, ebx */
    goto L_1008A1B2; /* 0x1008A0EB: jmp 0x1008a1b2 */
L_1008A0F0:
    eax = MEM32(ebp + (-0x18)); /* 0x1008A0F0: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x1008A0F3: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008A126; /* 0x1008A0F7: jle 0x1008a126 */
L_1008A0F9:
    eax = ebx; /* 0x1008A0F9: mov eax, ebx */
    ecx = ebp + (-0x18); /* 0x1008A0FB: lea ecx, [ebp - 0x18] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008A0FE: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + 0x8) = eax; /* 0x1008A101: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, ecx); /* 0x1008A104: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x1008A105: movzx eax, al */
    PUSH32(esp, eax); /* 0x1008A108: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x1008A109: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A10E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A10F: pop ecx */
    /* test eax, eax */ /* 0x1008A110: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A126; /* 0x1008A112: je 0x1008a126 */
L_1008A114:
    eax = MEM32(ebp + 0x8); /* 0x1008A114: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1008A117: push 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x1008A119: mov byte ptr [ebp - 4], al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x1008A11C: mov byte ptr [ebp - 3], bl */
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x1008A11F: mov byte ptr [ebp - 2], 0 */
    ecx = POP32_VAL(esp); /* 0x1008A123: pop ecx */
    goto L_1008A13B; /* 0x1008A124: jmp 0x1008a13b */
L_1008A126:
    RECOMP_CALL(sub_1001177D); /* 0x1008A126: call 0x1001177d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008A12B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008A12D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x2Au; /* 0x1008A12E: mov dword ptr [eax], 0x2a */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1008A134: mov byte ptr [ebp - 4], bl */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x1008A137: mov byte ptr [ebp - 3], 0 */
L_1008A13B:
    eax = MEM32(ebp + (-0x18)); /* 0x1008A13B: mov eax, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x8); /* 0x1008A13E: lea edx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x1008A141: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008A143: push dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x1008A146: push 3 */
    PUSH32(esp, edx); /* 0x1008A148: push edx */
    PUSH32(esp, ecx); /* 0x1008A149: push ecx */
    ecx = ebp + (-0x4); /* 0x1008A14A: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1008A14D: push ecx */
    PUSH32(esp, 0x200u); /* 0x1008A14E: push 0x200 */
    PUSH32(esp, MEM32(eax + 0xA8)); /* 0x1008A153: push dword ptr [eax + 0xa8] */
    eax = ebp + (-0x18); /* 0x1008A159: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1008A15C: push eax */
    RECOMP_CALL(sub_10020EFE); /* 0x1008A15D: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1008A162: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A17E; /* 0x1008A167: jne 0x1008a17e */
L_1008A169:
    /* cmp MEM8(ebp + (-0xC)), LO8(eax) */ /* 0x1008A169: cmp byte ptr [ebp - 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A0E9; /* 0x1008A16C: je 0x1008a0e9 */
L_1008A172:
    eax = MEM32(ebp + (-0x10)); /* 0x1008A172: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008A175: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1008A0E9; /* 0x1008A179: jmp 0x1008a0e9 */
L_1008A17E:
    /* cmp eax, 1 */ /* 0x1008A17E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A196; /* 0x1008A181: jne 0x1008a196 */
L_1008A183:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008A183: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x1008A187: movzx eax, byte ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A1B2; /* 0x1008A18B: je 0x1008a1b2 */
L_1008A18D:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008A18D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A190: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A1B2; /* 0x1008A194: jmp 0x1008a1b2 */
L_1008A196:
    edx = (uint32_t)MEM8(ebp + (-0x8)); /* 0x1008A196: movzx edx, byte ptr [ebp - 8] */
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x1008A19A: movzx eax, byte ptr [ebp - 7] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1008A19E: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1008A19E: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1008A1A1: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008A1A3: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A1B0; /* 0x1008A1A7: je 0x1008a1b0 */
L_1008A1A9:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008A1A9: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A1AC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A1B0:
    eax = edx; /* 0x1008A1B0: mov eax, edx */
L_1008A1B2:
    ebx = POP32_VAL(esp); /* 0x1008A1B2: pop ebx */
    esp = ebp; /* 0x1008A1B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A1B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A1B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A1B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A1B7u);

L_1008A1B7:
    PUSH32(esp, ebp); /* 0x1008A1B7: push ebp */
    ebp = esp; /* 0x1008A1B8: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008A1BA: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A1D5; /* 0x1008A1C1: jne 0x1008a1d5 */
L_1008A1C3:
    ecx = MEM32(ebp + 0x8); /* 0x1008A1C3: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x61); /* 0x1008A1C6: lea eax, [ecx - 0x61] */
    /* cmp eax, 0x19u */ /* 0x1008A1C9: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A1D1; /* 0x1008A1CC: ja 0x1008a1d1 */
L_1008A1CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x1008A1CE: add ecx, -0x20 */
    _flag_k = FK_ADD;
L_1008A1D1:
    eax = ecx; /* 0x1008A1D1: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1008A1D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A1D4: ret  */
L_1008A1D5:
    PUSH32(esp, 0); /* 0x1008A1D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A1D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008A073); /* 0x1008A1DA: call 0x1008a073 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A1DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A1E0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008A1E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A1E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A1E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A1E3u);

L_1008A1E3:
    PUSH32(esp, ebp); /* 0x1008A1E3: push ebp */
    ebp = esp; /* 0x1008A1E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008A1E6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008A1E9: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008A1EC: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1008A1ED: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1000F764); /* 0x1008A1F0: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1008A1F5: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008A1F8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1008A1FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A200; /* 0x1008A1FC: je 0x1008a200 */
L_1008A1FE:
    MEM32(eax) = esi; /* 0x1008A1FE: mov dword ptr [eax], esi */
L_1008A200:
    eax = MEM32(ebp + (-0x10)); /* 0x1008A200: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x1008A203: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A22D; /* 0x1008A209: jne 0x1008a22d */
L_1008A20B:
    SET_LO16(ecx, MEM16(ebp + 0x14)); /* 0x1008A20B: mov cx, word ptr [ebp + 0x14] */
    eax = 0xFFu; /* 0x1008A20F: mov eax, 0xff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1008A214: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A25F; /* 0x1008A217: ja 0x1008a25f */
L_1008A219:
    eax = MEM32(ebp + 0xC); /* 0x1008A219: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1008A21C: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0x8); /* 0x1008A21E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008A221: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A27B; /* 0x1008A223: je 0x1008a27b */
L_1008A225:
    MEM32(eax) = 1; /* 0x1008A225: mov dword ptr [eax], 1 */
    goto L_1008A27B; /* 0x1008A22B: jmp 0x1008a27b */
L_1008A22D:
    ecx = ebp + 0x18; /* 0x1008A22D: lea ecx, [ebp + 0x18] */
    MEM32(ebp + 0x18) = esi; /* 0x1008A230: mov dword ptr [ebp + 0x18], esi */
    PUSH32(esp, ecx); /* 0x1008A233: push ecx */
    PUSH32(esp, esi); /* 0x1008A234: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A235: push dword ptr [ebp + 0x10] */
    ecx = ebp + 0x14; /* 0x1008A238: lea ecx, [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008A23B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1008A23E: push 1 */
    PUSH32(esp, ecx); /* 0x1008A240: push ecx */
    PUSH32(esp, esi); /* 0x1008A241: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008A242: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1008A245: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008A24B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A25F; /* 0x1008A24D: je 0x1008a25f */
L_1008A24F:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1008A24F: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A25F; /* 0x1008A252: jne 0x1008a25f */
L_1008A254:
    ecx = MEM32(ebp + 0x8); /* 0x1008A254: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008A257: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A27B; /* 0x1008A259: je 0x1008a27b */
L_1008A25B:
    MEM32(ecx) = eax; /* 0x1008A25B: mov dword ptr [ecx], eax */
    goto L_1008A27B; /* 0x1008A25D: jmp 0x1008a27b */
L_1008A25F:
    RECOMP_CALL(sub_1001177D); /* 0x1008A25F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1008A264: mov dword ptr [eax], 0x2a */
    eax = MEM32(ebp + 0x8); /* 0x1008A26A: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008A26D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A274; /* 0x1008A26F: je 0x1008a274 */
L_1008A271:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1008A271: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A274:
    RECOMP_CALL(sub_1001177D); /* 0x1008A274: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1008A279: mov esi, dword ptr [eax] */
L_1008A27B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008A27B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A288; /* 0x1008A27F: je 0x1008a288 */
L_1008A281:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008A281: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A284: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A288:
    eax = esi; /* 0x1008A288: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008A28A: pop esi */
    esp = ebp; /* 0x1008A28B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A28D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A28E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A28F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A28Fu);

L_1008A28F:
    PUSH32(esp, ebp); /* 0x1008A28F: push ebp */
    ebp = esp; /* 0x1008A290: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1008A292: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A295: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A29A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A29C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1008A29F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1008A2A2: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1008A2A5: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1008A2A8: mov dword ptr [ebp - 0x14], ecx */
    PUSH32(esp, edi); /* 0x1008A2AB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1008A2AC: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008A2AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A2CB; /* 0x1008A2B1: jne 0x1008a2cb */
L_1008A2B3:
    RECOMP_CALL(sub_1001177D); /* 0x1008A2B3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008A2B8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008A2BE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008A2C3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A3DD; /* 0x1008A2C6: jmp 0x1008a3dd */
L_1008A2CB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1008A2CB: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1008A2CF: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1008A2D2: push ebx */
    ebx = MEM32(eax); /* 0x1008A2D3: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1008A2D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008A2D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008A2D8: push esi */
    RECOMP_CALL(sub_1000F764); /* 0x1008A2D9: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1008A2DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A345; /* 0x1008A2E0: jne 0x1008a345 */
L_1008A2E2:
    eax = ebp + (-0x2C); /* 0x1008A2E2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A2E5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A2E6: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A2E9: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A2EC: push eax */
    PUSH32(esp, 5); /* 0x1008A2ED: push 5 */
    eax = ebp + (-0xC); /* 0x1008A2EF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A2F2: push eax */
    eax = ebp + (-0x10); /* 0x1008A2F3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A2F6: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A2F7: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A2FC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A2FF: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008A33D; /* 0x1008A304: jle 0x1008a33d */
L_1008A306:
    edi = ebp + (-0xC); /* 0x1008A306: lea edi, [ebp - 0xc] */
L_1008A309:
    /* cmp MEM8(edi + eax + (-0x1)), 0 */ /* 0x1008A309: cmp byte ptr [edi + eax - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + eax + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3BF; /* 0x1008A30E: je 0x1008a3bf */
L_1008A314:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A314: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A316: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x1008A319: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A31C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A31D: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A320: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A323: push eax */
    PUSH32(esp, 5); /* 0x1008A324: push 5 */
    eax = ebp + (-0xC); /* 0x1008A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A329: push eax */
    eax = ebp + (-0x10); /* 0x1008A32A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A32D: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A32E: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A333: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A336: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A339: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008A309; /* 0x1008A33B: jg 0x1008a309 */
L_1008A33D:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008A33D: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A3CC; /* 0x1008A340: jmp 0x1008a3cc */
L_1008A345:
    ecx = MEM32(ebp + 0x10); /* 0x1008A345: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1008A348: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A34A: je 0x1008a3c7 */
L_1008A34C:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008A34C: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp ecx, MEM32(eax + 0x74) */ /* 0x1008A34F: cmp ecx, dword ptr [eax + 0x74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008A35C; /* 0x1008A352: jae 0x1008a35c */
L_1008A354:
    ecx = ebp + (-0xC); /* 0x1008A354: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1008A357: mov dword ptr [ebp - 0x18], ecx */
    goto L_1008A361; /* 0x1008A35A: jmp 0x1008a361 */
L_1008A35C:
    ecx = edi; /* 0x1008A35C: mov ecx, edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1008A35E: mov dword ptr [ebp - 0x18], edi */
L_1008A361:
    eax = ebp + (-0x2C); /* 0x1008A361: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A364: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A365: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A368: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A36B: push eax */
    PUSH32(esp, 5); /* 0x1008A36C: push 5 */
    PUSH32(esp, ecx); /* 0x1008A36E: push ecx */
    eax = ebp + (-0x10); /* 0x1008A36F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A372: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A373: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A378: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A37B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A37E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008A3C4; /* 0x1008A380: jle 0x1008a3c4 */
L_1008A382:
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x1008A382: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3A0; /* 0x1008A385: je 0x1008a3a0 */
L_1008A387:
    ecx = MEM32(ebp + 0x10); /* 0x1008A387: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x1008A38A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A38C: jb 0x1008a3c7 */
L_1008A38E:
    PUSH32(esp, eax); /* 0x1008A38E: push eax */
    eax = ebp + (-0xC); /* 0x1008A38F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A392: push eax */
    PUSH32(esp, ecx); /* 0x1008A393: push ecx */
    PUSH32(esp, edi); /* 0x1008A394: push edi */
    RECOMP_CALL(sub_1000F62F); /* 0x1008A395: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A39A: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008A39D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1008A3A0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1008A3A0: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x1008A3A2: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3B9; /* 0x1008A3A6: je 0x1008a3b9 */
L_1008A3A8:
    ecx = MEM32(ebp + 0x10); /* 0x1008A3A8: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A3AB: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A3AD: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1008A3B0: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x1008A3B2: mov dword ptr [ebp + 0x10], ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A3B5: je 0x1008a3c7 */
L_1008A3B7:
    RECOMP_BACKEDGE();
    goto L_1008A34C; /* 0x1008A3B7: jmp 0x1008a34c */
L_1008A3B9:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1008A3B9: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1008A3BC: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008A3BF: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A3C0: add esi, eax */
    _flag_k = FK_ADD;
    goto L_1008A3CC; /* 0x1008A3C2: jmp 0x1008a3cc */
L_1008A3C4:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008A3C4: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3C7:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1008A3C7: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = ebx; /* 0x1008A3CA: mov dword ptr [ecx], ebx */
L_1008A3CC:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x1008A3CC: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3D9; /* 0x1008A3D0: je 0x1008a3d9 */
L_1008A3D2:
    ecx = MEM32(ebp + (-0x24)); /* 0x1008A3D2: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A3D5: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3D9:
    eax = esi; /* 0x1008A3D9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008A3DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A3DC: pop ebx */
L_1008A3DD:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A3DD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A3E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1008A3E2: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A3E3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A3E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A3EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A3EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A3EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A3ECu);

L_1008A3EC:
    PUSH32(esp, ebp); /* 0x1008A3EC: push ebp */
    ebp = esp; /* 0x1008A3ED: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1008A3EF: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1008A3F0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A3F4: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1008A3F7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008A3FA: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008A3FD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008A3FF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x1008A401: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1008A404: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A405: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x1008A408: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008A40B: push eax */
    RECOMP_CALL(sub_1008A41B); /* 0x1008A40C: call 0x1008a41b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1008A411: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008A414: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1008A417: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A419: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A41A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A41B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A41Bu);

L_1008A41B:
    PUSH32(esp, ebp); /* 0x1008A41B: push ebp */
    ebp = esp; /* 0x1008A41C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008A41E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A421: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A426: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A428: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1008A42B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x1008A42E: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x18); /* 0x1008A432: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1008A435: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008A436: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008A439: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A462; /* 0x1008A43B: jne 0x1008a462 */
L_1008A43D:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1008A43D: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A455; /* 0x1008A440: je 0x1008a455 */
L_1008A442:
    RECOMP_CALL(sub_1001177D); /* 0x1008A442: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008A447: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008A449: pop esi */
    MEM32(eax) = esi; /* 0x1008A44A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008A44C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008A451: mov eax, esi */
    goto L_1008A485; /* 0x1008A453: jmp 0x1008a485 */
L_1008A455:
    PUSH32(esp, 0); /* 0x1008A455: push 0 */
    PUSH32(esp, ecx); /* 0x1008A457: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008A458: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0xC); /* 0x1008A45B: lea eax, [ebp - 0xc] */
    PUSH32(esp, 5); /* 0x1008A45E: push 5 */
    goto L_1008A46B; /* 0x1008A460: jmp 0x1008a46b */
L_1008A462:
    PUSH32(esp, 0); /* 0x1008A462: push 0 */
    PUSH32(esp, ecx); /* 0x1008A464: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008A465: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A468: push dword ptr [ebp + 0x10] */
L_1008A46B:
    PUSH32(esp, eax); /* 0x1008A46B: push eax */
    eax = ebp + (-0x10); /* 0x1008A46C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A46F: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A470: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A475: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1008A478: mov ecx, eax */
    /* test esi, esi */ /* 0x1008A47A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A483; /* 0x1008A47C: je 0x1008a483 */
L_1008A47E:
    eax = MEM32(ebp + (-0x10)); /* 0x1008A47E: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x1008A481: mov dword ptr [esi], eax */
L_1008A483:
    eax = ecx; /* 0x1008A483: mov eax, ecx */
L_1008A485:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A485: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A488: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1008A48A: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A48B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A490: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A492: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A493: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A494(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A494u);

    goto L_1008A494;
L_1008A28F:
    PUSH32(esp, ebp); /* 0x1008A28F: push ebp */
    ebp = esp; /* 0x1008A290: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1008A292: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A295: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A29A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A29C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1008A29F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1008A2A2: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1008A2A5: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1008A2A8: mov dword ptr [ebp - 0x14], ecx */
    PUSH32(esp, edi); /* 0x1008A2AB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1008A2AC: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008A2AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A2CB; /* 0x1008A2B1: jne 0x1008a2cb */
L_1008A2B3:
    RECOMP_CALL(sub_1001177D); /* 0x1008A2B3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008A2B8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008A2BE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008A2C3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A3DD; /* 0x1008A2C6: jmp 0x1008a3dd */
L_1008A2CB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1008A2CB: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1008A2CF: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1008A2D2: push ebx */
    ebx = MEM32(eax); /* 0x1008A2D3: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1008A2D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008A2D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008A2D8: push esi */
    RECOMP_CALL(sub_1000F764); /* 0x1008A2D9: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1008A2DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A345; /* 0x1008A2E0: jne 0x1008a345 */
L_1008A2E2:
    eax = ebp + (-0x2C); /* 0x1008A2E2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A2E5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A2E6: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A2E9: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A2EC: push eax */
    PUSH32(esp, 5); /* 0x1008A2ED: push 5 */
    eax = ebp + (-0xC); /* 0x1008A2EF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A2F2: push eax */
    eax = ebp + (-0x10); /* 0x1008A2F3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A2F6: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A2F7: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A2FC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A2FF: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008A33D; /* 0x1008A304: jle 0x1008a33d */
L_1008A306:
    edi = ebp + (-0xC); /* 0x1008A306: lea edi, [ebp - 0xc] */
L_1008A309:
    /* cmp MEM8(edi + eax + (-0x1)), 0 */ /* 0x1008A309: cmp byte ptr [edi + eax - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + eax + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3BF; /* 0x1008A30E: je 0x1008a3bf */
L_1008A314:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A314: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A316: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x1008A319: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A31C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A31D: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A320: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A323: push eax */
    PUSH32(esp, 5); /* 0x1008A324: push 5 */
    eax = ebp + (-0xC); /* 0x1008A326: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A329: push eax */
    eax = ebp + (-0x10); /* 0x1008A32A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A32D: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A32E: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A333: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A336: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A339: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008A309; /* 0x1008A33B: jg 0x1008a309 */
L_1008A33D:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008A33D: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A3CC; /* 0x1008A340: jmp 0x1008a3cc */
L_1008A345:
    ecx = MEM32(ebp + 0x10); /* 0x1008A345: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1008A348: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A34A: je 0x1008a3c7 */
L_1008A34C:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008A34C: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp ecx, MEM32(eax + 0x74) */ /* 0x1008A34F: cmp ecx, dword ptr [eax + 0x74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008A35C; /* 0x1008A352: jae 0x1008a35c */
L_1008A354:
    ecx = ebp + (-0xC); /* 0x1008A354: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1008A357: mov dword ptr [ebp - 0x18], ecx */
    goto L_1008A361; /* 0x1008A35A: jmp 0x1008a361 */
L_1008A35C:
    ecx = edi; /* 0x1008A35C: mov ecx, edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1008A35E: mov dword ptr [ebp - 0x18], edi */
L_1008A361:
    eax = ebp + (-0x2C); /* 0x1008A361: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008A364: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1008A365: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM16(ebx); /* 0x1008A368: movzx eax, word ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008A36B: push eax */
    PUSH32(esp, 5); /* 0x1008A36C: push 5 */
    PUSH32(esp, ecx); /* 0x1008A36E: push ecx */
    eax = ebp + (-0x10); /* 0x1008A36F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A372: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A373: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A378: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A37B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A37E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008A3C4; /* 0x1008A380: jle 0x1008a3c4 */
L_1008A382:
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x1008A382: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3A0; /* 0x1008A385: je 0x1008a3a0 */
L_1008A387:
    ecx = MEM32(ebp + 0x10); /* 0x1008A387: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x1008A38A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A38C: jb 0x1008a3c7 */
L_1008A38E:
    PUSH32(esp, eax); /* 0x1008A38E: push eax */
    eax = ebp + (-0xC); /* 0x1008A38F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1008A392: push eax */
    PUSH32(esp, ecx); /* 0x1008A393: push ecx */
    PUSH32(esp, edi); /* 0x1008A394: push edi */
    RECOMP_CALL(sub_1000F62F); /* 0x1008A395: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008A39A: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008A39D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1008A3A0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1008A3A0: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + (-0x1)), 0 */ /* 0x1008A3A2: cmp byte ptr [edi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3B9; /* 0x1008A3A6: je 0x1008a3b9 */
L_1008A3A8:
    ecx = MEM32(ebp + 0x10); /* 0x1008A3A8: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A3AB: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A3AD: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1008A3B0: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x1008A3B2: mov dword ptr [ebp + 0x10], ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008A3C7; /* 0x1008A3B5: je 0x1008a3c7 */
L_1008A3B7:
    RECOMP_BACKEDGE();
    goto L_1008A34C; /* 0x1008A3B7: jmp 0x1008a34c */
L_1008A3B9:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1008A3B9: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1008A3BC: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008A3BF: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008A3C0: add esi, eax */
    _flag_k = FK_ADD;
    goto L_1008A3CC; /* 0x1008A3C2: jmp 0x1008a3cc */
L_1008A3C4:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008A3C4: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3C7:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1008A3C7: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = ebx; /* 0x1008A3CA: mov dword ptr [ecx], ebx */
L_1008A3CC:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x1008A3CC: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A3D9; /* 0x1008A3D0: je 0x1008a3d9 */
L_1008A3D2:
    ecx = MEM32(ebp + (-0x24)); /* 0x1008A3D2: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A3D5: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A3D9:
    eax = esi; /* 0x1008A3D9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008A3DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A3DC: pop ebx */
L_1008A3DD:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A3DD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A3E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1008A3E2: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A3E3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A3E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A3EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A3EB: ret  */
L_1008A494:
    PUSH32(esp, ebp); /* 0x1008A494: push ebp */
    ebp = esp; /* 0x1008A495: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008A497: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008A28F; /* 0x1008A498: jmp 0x1008a28f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008A49D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A49Du);

L_1008A49D:
    PUSH32(esp, ebp); /* 0x1008A49D: push ebp */
    ebp = esp; /* 0x1008A49E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1008A4A0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1008A4A1: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1008A4A4: push esi */
    PUSH32(esp, edi); /* 0x1008A4A5: push edi */
    /* test ebx, ebx */ /* 0x1008A4A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A4AD; /* 0x1008A4A8: je 0x1008a4ad */
L_1008A4AA:
    _flag_a = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu));
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu; /* 0x1008A4AA: or dword ptr [ebx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A4AD:
    esi = MEM32(ebp + 0xC); /* 0x1008A4AD: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x1008A4B0: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008A4B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A4BD; /* 0x1008A4B5: jne 0x1008a4bd */
L_1008A4B7:
    /* test edi, edi */ /* 0x1008A4B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A4C1; /* 0x1008A4B9: jne 0x1008a4c1 */
L_1008A4BB:
    goto L_1008A4D7; /* 0x1008A4BB: jmp 0x1008a4d7 */
L_1008A4BD:
    /* test edi, edi */ /* 0x1008A4BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A4D4; /* 0x1008A4BF: jne 0x1008a4d4 */
L_1008A4C1:
    RECOMP_CALL(sub_1001177D); /* 0x1008A4C1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008A4C6: push 0x16 */
L_1008A4C8:
    esi = POP32_VAL(esp); /* 0x1008A4C8: pop esi */
    MEM32(eax) = esi; /* 0x1008A4C9: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008A4CB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008A4D0: mov eax, esi */
    goto L_1008A52D; /* 0x1008A4D2: jmp 0x1008a52d */
L_1008A4D4:
    MEM8(esi) = (uint8_t)(0); /* 0x1008A4D4: mov byte ptr [esi], 0 */
L_1008A4D7:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1008A4D7: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A4C1; /* 0x1008A4DB: je 0x1008a4c1 */
L_1008A4DD:
    eax = MEM32(ebp + 0x18); /* 0x1008A4DD: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, edi */ /* 0x1008A4E0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A4E6; /* 0x1008A4E2: jbe 0x1008a4e6 */
L_1008A4E4:
    eax = edi; /* 0x1008A4E4: mov eax, edi */
L_1008A4E6:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1008A4E6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x1008A4E9: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008A4EA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1008A4ED: push esi */
    RECOMP_CALL(sub_1008A28F); /* 0x1008A4EE: call 0x1008a28f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008A4F3: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1008A4F6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A50B; /* 0x1008A4F9: jne 0x1008a50b */
L_1008A4FB:
    /* test esi, esi */ /* 0x1008A4FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A502; /* 0x1008A4FD: je 0x1008a502 */
L_1008A4FF:
    MEM8(esi) = (uint8_t)(0); /* 0x1008A4FF: mov byte ptr [esi], 0 */
L_1008A502:
    RECOMP_CALL(sub_1001177D); /* 0x1008A502: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1008A507: mov eax, dword ptr [eax] */
    goto L_1008A52D; /* 0x1008A509: jmp 0x1008a52d */
L_1008A50B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008A50B: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1008A50C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A525; /* 0x1008A50E: je 0x1008a525 */
L_1008A510:
    /* cmp eax, edi */ /* 0x1008A510: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A520; /* 0x1008A512: jbe 0x1008a520 */
L_1008A514:
    MEM8(esi) = (uint8_t)(0); /* 0x1008A514: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x1008A517: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008A51C: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1008A4C8; /* 0x1008A51E: jmp 0x1008a4c8 */
L_1008A520:
    MEM8(eax + esi + (-0x1)) = (uint8_t)(0); /* 0x1008A520: mov byte ptr [eax + esi - 1], 0 */
L_1008A525:
    /* test ebx, ebx */ /* 0x1008A525: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A52B; /* 0x1008A527: je 0x1008a52b */
L_1008A529:
    MEM32(ebx) = eax; /* 0x1008A529: mov dword ptr [ebx], eax */
L_1008A52B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008A52B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A52D:
    edi = POP32_VAL(esp); /* 0x1008A52D: pop edi */
    esi = POP32_VAL(esp); /* 0x1008A52E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A52F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1008A530: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A531: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A532(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A532u);

L_1008A532:
    PUSH32(esp, ebp); /* 0x1008A532: push ebp */
    ebp = esp; /* 0x1008A533: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008A535: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A538: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A53D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A53F: mov dword ptr [ebp - 4], eax */
    eax = 0xFFFFu; /* 0x1008A542: mov eax, 0xffff */
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x1008A547: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A57A; /* 0x1008A54B: je 0x1008a57a */
L_1008A54D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x1008A54D: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xC); /* 0x1008A551: lea eax, [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x1008A554: push 0 */
    PUSH32(esp, 0); /* 0x1008A556: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A558: push dword ptr [ebp + 8] */
    PUSH32(esp, 5); /* 0x1008A55B: push 5 */
    PUSH32(esp, eax); /* 0x1008A55D: push eax */
    eax = ebp + (-0x10); /* 0x1008A55E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008A561: push eax */
    RECOMP_CALL(sub_1008A1E3); /* 0x1008A562: call 0x1008a1e3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008A567: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008A56A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A57A; /* 0x1008A56C: jne 0x1008a57a */
L_1008A56E:
    /* cmp MEM32(ebp + (-0x10)), 1 */ /* 0x1008A56E: cmp dword ptr [ebp - 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A57A; /* 0x1008A572: jne 0x1008a57a */
L_1008A574:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0xC)); /* 0x1008A574: movsx eax, byte ptr [ebp - 0xc] */
    goto L_1008A57D; /* 0x1008A578: jmp 0x1008a57d */
L_1008A57A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008A57A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A57D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A57D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A580: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A582: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A587: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A589: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A58A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A58B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A58Bu);

L_1008A58B:
    PUSH32(esp, ebp); /* 0x1008A58B: push ebp */
    ebp = esp; /* 0x1008A58C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1008A58E: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A591: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A596: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A598: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008A59B: push ebx */
    PUSH32(esp, esi); /* 0x1008A59C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1008A59D: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x34); /* 0x1008A5A0: lea ecx, [ebp - 0x34] */
    PUSH32(esp, edi); /* 0x1008A5A3: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A5A4: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1008A5A7: mov edi, dword ptr [ebp + 8] */
    ebx = edi; /* 0x1008A5AA: mov ebx, edi */
    RECOMP_CALL(sub_1000F764); /* 0x1008A5AC: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1008A5B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A5B7; /* 0x1008A5B3: je 0x1008a5b7 */
L_1008A5B5:
    MEM32(esi) = edi; /* 0x1008A5B5: mov dword ptr [esi], edi */
L_1008A5B7:
    /* test edi, edi */ /* 0x1008A5B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A5D0; /* 0x1008A5B9: jne 0x1008a5d0 */
L_1008A5BB:
    RECOMP_CALL(sub_1001177D); /* 0x1008A5BB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008A5C0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008A5C6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008A661; /* 0x1008A5CB: jmp 0x1008a661 */
L_1008A5D0:
    eax = (uint32_t)MEM16(edi); /* 0x1008A5D0: movzx eax, word ptr [edi] */
    goto L_1008A5DB; /* 0x1008A5D3: jmp 0x1008a5db */
L_1008A5D5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A5D5: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x1008A5D8: movzx eax, word ptr [ebx] */
L_1008A5DB:
    PUSH32(esp, 8); /* 0x1008A5DB: push 8 */
    PUSH32(esp, eax); /* 0x1008A5DD: push eax */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008A5DE: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A5E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A5E4: pop ecx */
    /* test eax, eax */ /* 0x1008A5E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A5D5; /* 0x1008A5E7: jne 0x1008a5d5 */
L_1008A5E9:
    eax = ebp + (-0x34); /* 0x1008A5E9: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1008A5EC: push eax */
    eax = ebp + (-0x1C); /* 0x1008A5ED: lea eax, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1008A5F0: push ebx */
    PUSH32(esp, eax); /* 0x1008A5F1: push eax */
    RECOMP_CALL(sub_10035832); /* 0x1008A5F2: call 0x10035832 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008A5F7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008A5FA: mov edx, eax */
    /* test esi, esi */ /* 0x1008A5FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A608; /* 0x1008A5FE: je 0x1008a608 */
L_1008A600:
    ecx = MEM32(edx + 0x4); /* 0x1008A600: mov ecx, dword ptr [edx + 4] */
    ecx = ebx + ecx * 2; /* 0x1008A603: lea ecx, [ebx + ecx*2] */
    MEM32(esi) = ecx; /* 0x1008A606: mov dword ptr [esi], ecx */
L_1008A608:
    /* test MEM32(edx), 0x240u */ /* 0x1008A608: test dword ptr [edx], 0x240 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A61A; /* 0x1008A60E: je 0x1008a61a */
L_1008A610:
    fp_push(0.0); /* 0x1008A610: fldz  */
    /* test esi, esi */ /* 0x1008A612: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A668; /* 0x1008A614: je 0x1008a668 */
L_1008A616:
    MEM32(esi) = edi; /* 0x1008A616: mov dword ptr [esi], edi */
    goto L_1008A668; /* 0x1008A618: jmp 0x1008a668 */
L_1008A61A:
    /* test MEM8(edx), 0x81u */ /* 0x1008A61A: test byte ptr [edx], 0x81 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A640; /* 0x1008A61D: je 0x1008a640 */
L_1008A61F:
    /* cmp MEM16(ebx), 0x2Du */ /* 0x1008A61F: cmp word ptr [ebx], 0x2d */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push(*(double*)ADDR(0x100DF570)); /* 0x1008A623: fld qword ptr [0x100df570] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A62D; /* 0x1008A629: jne 0x1008a62d */
L_1008A62B:
    _st[0] = -_st[0]; /* 0x1008A62B: fchs  */
L_1008A62D:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x1008A62D: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1001177D); /* 0x1008A630: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1008A635: fld qword ptr [ebp - 0x24] */
    MEM32(eax) = 0x22u; /* 0x1008A638: mov dword ptr [eax], 0x22 */
    goto L_1008A668; /* 0x1008A63E: jmp 0x1008a668 */
L_1008A640:
    /* test MEM32(edx), 0x100u */ /* 0x1008A640: test dword ptr [edx], 0x100 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A665; /* 0x1008A646: je 0x1008a665 */
L_1008A648:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x1008A648: fld qword ptr [edx + 0x10] */
    fp_push(0.0); /* 0x1008A64B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1008A64D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1008A64F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1008A651: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1008A665; /* 0x1008A654: jp 0x1008a665 */
L_1008A656:
    RECOMP_CALL(sub_1001177D); /* 0x1008A656: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1008A65B: mov dword ptr [eax], 0x22 */
L_1008A661:
    fp_push(0.0); /* 0x1008A661: fldz  */
    goto L_1008A668; /* 0x1008A663: jmp 0x1008a668 */
L_1008A665:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x1008A665: fld qword ptr [edx + 0x10] */
L_1008A668:
    /* cmp MEM8(ebp + (-0x28)), 0 */ /* 0x1008A668: cmp byte ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008A66C: pop edi */
    esi = POP32_VAL(esp); /* 0x1008A66D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A66E: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A678; /* 0x1008A66F: je 0x1008a678 */
L_1008A671:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008A671: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008A674: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A678:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A678: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A67B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A67D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A682: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A684: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A685: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A686u);

L_1008A686:
    PUSH32(esp, ebp); /* 0x1008A686: push ebp */
    ebp = esp; /* 0x1008A687: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008A689: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008A68B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A68E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008A58B); /* 0x1008A691: call 0x1008a58b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008A696: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008A699: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A69A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A69B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A69Bu);

L_1008A69B:
    PUSH32(esp, ebp); /* 0x1008A69B: push ebp */
    ebp = esp; /* 0x1008A69C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1008A69E: sub esp, 0x34 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x34); /* 0x1008A6A1: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A6A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F764); /* 0x1008A6A7: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1008A6AC: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1008A6AF: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1008A6B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A6B8; /* 0x1008A6B4: je 0x1008a6b8 */
L_1008A6B6:
    MEM32(eax) = ecx; /* 0x1008A6B6: mov dword ptr [eax], ecx */
L_1008A6B8:
    PUSH32(esp, ebx); /* 0x1008A6B8: push ebx */
    PUSH32(esp, esi); /* 0x1008A6B9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A6BA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1008A6BC: push edi */
    /* test ecx, ecx */ /* 0x1008A6BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A6D2; /* 0x1008A6BF: je 0x1008a6d2 */
L_1008A6C1:
    eax = MEM32(ebp + 0x14); /* 0x1008A6C1: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1008A6C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A6E7; /* 0x1008A6C6: je 0x1008a6e7 */
L_1008A6C8:
    /* cmp eax, 2 */ /* 0x1008A6C8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1008A6D2; /* 0x1008A6CB: jl 0x1008a6d2 */
L_1008A6CD:
    /* cmp eax, 0x24u */ /* 0x1008A6CD: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008A6E7; /* 0x1008A6D0: jle 0x1008a6e7 */
L_1008A6D2:
    RECOMP_CALL(sub_1001177D); /* 0x1008A6D2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008A6D7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008A6DD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008A94F; /* 0x1008A6E2: jmp 0x1008a94f */
L_1008A6E7:
    ebx = (uint32_t)MEM16(ecx); /* 0x1008A6E7: movzx ebx, word ptr [ecx] */
    esi = ecx + 0x2; /* 0x1008A6EA: lea esi, [ecx + 2] */
    edi = edx; /* 0x1008A6ED: mov edi, edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1008A6EF: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, 8); /* 0x1008A6F2: push 8 */
    PUSH32(esp, ebx); /* 0x1008A6F4: push ebx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1008A6F5: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1008A6F8: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008A6FB: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A700: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A701: pop ecx */
    /* test eax, eax */ /* 0x1008A702: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A723; /* 0x1008A704: je 0x1008a723 */
L_1008A706:
    edi = (uint32_t)MEM16(esi); /* 0x1008A706: movzx edi, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008A709: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x1008A70C: push 8 */
    PUSH32(esp, edi); /* 0x1008A70E: push edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1008A70F: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008A712: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A717: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A718: pop ecx */
    /* test eax, eax */ /* 0x1008A719: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A706; /* 0x1008A71B: jne 0x1008a706 */
L_1008A71D:
    edi = MEM32(ebp + (-0x14)); /* 0x1008A71D: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1008A720: mov ebx, dword ptr [ebp - 0xc] */
L_1008A723:
    eax = MEM32(ebp + 0x18); /* 0x1008A723: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO16(ebx), 0x2Du */ /* 0x1008A726: cmp bx, 0x2d */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A731; /* 0x1008A72A: jne 0x1008a731 */
L_1008A72C:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1008A72C: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A737; /* 0x1008A72F: jmp 0x1008a737 */
L_1008A731:
    /* cmp LO16(ebx), 0x2Bu */ /* 0x1008A731: cmp bx, 0x2b */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x2Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A740; /* 0x1008A735: jne 0x1008a740 */
L_1008A737:
    ebx = (uint32_t)MEM16(esi); /* 0x1008A737: movzx ebx, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008A73A: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1008A73D: mov dword ptr [ebp - 0xc], ebx */
L_1008A740:
    MEM32(ebp + (-0x8)) = eax; /* 0x1008A740: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x14); /* 0x1008A743: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1008A746: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008A943; /* 0x1008A748: js 0x1008a943 */
L_1008A74E:
    /* cmp eax, 1 */ /* 0x1008A74E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A943; /* 0x1008A751: je 0x1008a943 */
L_1008A757:
    /* cmp eax, 0x24u */ /* 0x1008A757: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1008A943; /* 0x1008A75A: jg 0x1008a943 */
L_1008A760:
    /* test eax, eax */ /* 0x1008A760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A794; /* 0x1008A762: jne 0x1008a794 */
L_1008A764:
    PUSH32(esp, ebx); /* 0x1008A764: push ebx */
    RECOMP_CALL(sub_1001C77F); /* 0x1008A765: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A76A: pop ecx */
    /* test eax, eax */ /* 0x1008A76B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A777; /* 0x1008A76D: je 0x1008a777 */
L_1008A76F:
    PUSH32(esp, 0xAu); /* 0x1008A76F: push 0xa */
L_1008A771:
    eax = POP32_VAL(esp); /* 0x1008A771: pop eax */
    MEM32(ebp + 0x14) = eax; /* 0x1008A772: mov dword ptr [ebp + 0x14], eax */
    goto L_1008A7C4; /* 0x1008A775: jmp 0x1008a7c4 */
L_1008A777:
    eax = (uint32_t)MEM16(esi); /* 0x1008A777: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x1008A77A: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x1008A77C: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A77D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A78E; /* 0x1008A780: je 0x1008a78e */
L_1008A782:
    PUSH32(esp, 0x58u); /* 0x1008A782: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x1008A784: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A785: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A78E; /* 0x1008A788: je 0x1008a78e */
L_1008A78A:
    PUSH32(esp, 8); /* 0x1008A78A: push 8 */
    RECOMP_BACKEDGE();
    goto L_1008A771; /* 0x1008A78C: jmp 0x1008a771 */
L_1008A78E:
    PUSH32(esp, 0x10u); /* 0x1008A78E: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1008A790: pop eax */
    MEM32(ebp + 0x14) = eax; /* 0x1008A791: mov dword ptr [ebp + 0x14], eax */
L_1008A794:
    /* cmp eax, 0x10u */ /* 0x1008A794: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A7C4; /* 0x1008A797: jne 0x1008a7c4 */
L_1008A799:
    PUSH32(esp, ebx); /* 0x1008A799: push ebx */
    RECOMP_CALL(sub_1001C77F); /* 0x1008A79A: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A79F: pop ecx */
    /* test eax, eax */ /* 0x1008A7A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A7C1; /* 0x1008A7A2: jne 0x1008a7c1 */
L_1008A7A4:
    eax = (uint32_t)MEM16(esi); /* 0x1008A7A4: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x1008A7A7: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x1008A7A9: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A7AA: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A7B7; /* 0x1008A7AD: je 0x1008a7b7 */
L_1008A7AF:
    PUSH32(esp, 0x58u); /* 0x1008A7AF: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x1008A7B1: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A7B2: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A7C1; /* 0x1008A7B5: jne 0x1008a7c1 */
L_1008A7B7:
    ebx = (uint32_t)MEM16(esi + 0x2); /* 0x1008A7B7: movzx ebx, word ptr [esi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1008A7BB: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1008A7BE: mov dword ptr [ebp - 0xc], ebx */
L_1008A7C1:
    eax = MEM32(ebp + 0x14); /* 0x1008A7C1: mov eax, dword ptr [ebp + 0x14] */
L_1008A7C4:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008A7C4: cdq  */
    ecx = edx; /* 0x1008A7C5: mov ecx, edx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1008A7C7: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, ecx); /* 0x1008A7CA: push ecx */
    PUSH32(esp, eax); /* 0x1008A7CB: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008A7CC: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008A7CE: push -1 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1008A7D0: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_CALL(sub_10011849); /* 0x1008A7D3: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = ebx; /* 0x1008A7D8: mov dword ptr [ebp - 0x18], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x1008A7DB: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1008A7DE: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1008A7E1: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x1008A7E4: mov dword ptr [ebp - 0x14], edx */
L_1008A7E7:
    PUSH32(esp, ebx); /* 0x1008A7E7: push ebx */
    RECOMP_CALL(sub_1001C77F); /* 0x1008A7E8: call 0x1001c77f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A7ED: pop ecx */
    ecx = eax; /* 0x1008A7EE: mov ecx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1008A7F0: mov dword ptr [ebp - 0xc], eax */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1008A7F3: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A84F; /* 0x1008A7F6: jne 0x1008a84f */
L_1008A7F8:
    PUSH32(esp, 0x41u); /* 0x1008A7F8: push 0x41 */
    eax = POP32_VAL(esp); /* 0x1008A7FA: pop eax */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1008A7FB: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A806; /* 0x1008A7FE: ja 0x1008a806 */
L_1008A800:
    /* cmp LO16(ebx), 0x5Au */ /* 0x1008A800: cmp bx, 0x5a */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x5Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A838; /* 0x1008A804: jbe 0x1008a838 */
L_1008A806:
    PUSH32(esp, 0x19u); /* 0x1008A806: push 0x19 */
    eax = ebx + (-0x61); /* 0x1008A808: lea eax, [ebx - 0x61] */
    ecx = POP32_VAL(esp); /* 0x1008A80B: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A80C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A83B; /* 0x1008A80F: jbe 0x1008a83b */
L_1008A811:
    eax = MEM32(ebp + (-0x4)); /* 0x1008A811: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1008A814: mov ebx, dword ptr [ebp - 8] */
L_1008A817:
    ecx = MEM32(ebp + 0x10); /* 0x1008A817: mov ecx, dword ptr [ebp + 0x10] */
L_1008A81A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1008A81A: sub esi, 2 */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 8 */ /* 0x1008A81D: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A8B9; /* 0x1008A820: jne 0x1008a8b9 */
L_1008A826:
    /* test ecx, ecx */ /* 0x1008A826: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A82D; /* 0x1008A828: je 0x1008a82d */
L_1008A82A:
    esi = MEM32(ebp + 0xC); /* 0x1008A82A: mov esi, dword ptr [ebp + 0xc] */
L_1008A82D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A82D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1008A82F: mov eax, edx */
    edi = edx; /* 0x1008A831: mov edi, edx */
    goto L_1008A92D; /* 0x1008A833: jmp 0x1008a92d */
L_1008A838:
    PUSH32(esp, 0x19u); /* 0x1008A838: push 0x19 */
    ecx = POP32_VAL(esp); /* 0x1008A83A: pop ecx */
L_1008A83B:
    eax = ebx + (-0x61); /* 0x1008A83B: lea eax, [ebx - 0x61] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1008A83E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (uint32_t)LO16(ebx); /* 0x1008A841: movzx eax, bx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A849; /* 0x1008A844: ja 0x1008a849 */
L_1008A846:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x1008A846: sub eax, 0x20 */
    _flag_k = FK_CMP;
L_1008A849:
    ecx = eax + (-0x37); /* 0x1008A849: lea ecx, [eax - 0x37] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1008A84C: mov dword ptr [ebp - 0xc], ecx */
L_1008A84F:
    ebx = MEM32(ebp + (-0x8)); /* 0x1008A84F: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1008A852: mov eax, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1008A855: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008A817; /* 0x1008A858: jae 0x1008a817 */
L_1008A85A:
    _flag_a = (uint32_t)((ebx | 8)); _flag_b = (uint32_t)((ebx | 8));
    ebx = ebx | 8; /* 0x1008A85A: or ebx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1008A85D: mov dword ptr [ebp - 8], ebx */
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x1008A860: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A894; /* 0x1008A863: jb 0x1008a894 */
L_1008A865:
    edx = MEM32(ebp + (-0x10)); /* 0x1008A865: mov edx, dword ptr [ebp - 0x10] */
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A86E; /* 0x1008A868: ja 0x1008a86e */
L_1008A86A:
    /* cmp eax, edx */ /* 0x1008A86A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A894; /* 0x1008A86C: jb 0x1008a894 */
L_1008A86E:
    /* cmp eax, edx */ /* 0x1008A86E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A885; /* 0x1008A870: jne 0x1008a885 */
L_1008A872:
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x1008A872: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A885; /* 0x1008A875: jne 0x1008a885 */
L_1008A877:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A877: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + (-0x18)) */ /* 0x1008A879: cmp edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A894; /* 0x1008A87C: jb 0x1008a894 */
L_1008A87E:
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A885; /* 0x1008A87E: ja 0x1008a885 */
L_1008A880:
    /* cmp ecx, MEM32(ebp + (-0x1C)) */ /* 0x1008A880: cmp ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A894; /* 0x1008A883: jbe 0x1008a894 */
L_1008A885:
    ecx = MEM32(ebp + 0x10); /* 0x1008A885: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1008A888: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1008A88B: mov dword ptr [ebp - 8], ebx */
    /* test ecx, ecx */ /* 0x1008A88E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A8AE; /* 0x1008A890: jne 0x1008a8ae */
L_1008A892:
    RECOMP_BACKEDGE();
    goto L_1008A81A; /* 0x1008A892: jmp 0x1008a81a */
L_1008A894:
    PUSH32(esp, edi); /* 0x1008A894: push edi */
    PUSH32(esp, eax); /* 0x1008A895: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1008A896: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1008A899: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_10015B8C); /* 0x1008A89C: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1008A8A1: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edi = edx; /* 0x1008A8A4: mov edi, edx */
    PUSH32(esp, 0); /* 0x1008A8A6: push 0 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A8A8: mov dword ptr [ebp - 4], eax */
    eax = POP32_VAL(esp); /* 0x1008A8AB: pop eax */
    { uint32_t _aa = edi, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008A8AC: adc edi, eax */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1008A8AE:
    ebx = (uint32_t)MEM16(esi); /* 0x1008A8AE: movzx ebx, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008A8B1: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1008A7E7; /* 0x1008A8B4: jmp 0x1008a7e7 */
L_1008A8B9:
    /* test LO8(ebx), 4 */ /* 0x1008A8B9: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A8F1; /* 0x1008A8BC: jne 0x1008a8f1 */
L_1008A8BE:
    /* test LO8(ebx), 1 */ /* 0x1008A8BE: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A928; /* 0x1008A8C1: jne 0x1008a928 */
L_1008A8C3:
    ecx = ebx; /* 0x1008A8C3: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x1008A8C5: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A8DC; /* 0x1008A8C8: je 0x1008a8dc */
L_1008A8CA:
    /* cmp edi, 0x80000000u */ /* 0x1008A8CA: cmp edi, 0x80000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A8F1; /* 0x1008A8D0: ja 0x1008a8f1 */
L_1008A8D2:
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A8DC; /* 0x1008A8D2: jb 0x1008a8dc */
L_1008A8D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A8D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1008A8D6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A8DE; /* 0x1008A8D8: jbe 0x1008a8de */
L_1008A8DA:
    goto L_1008A8F1; /* 0x1008A8DA: jmp 0x1008a8f1 */
L_1008A8DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A8DC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A8DE:
    /* test ecx, ecx */ /* 0x1008A8DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A923; /* 0x1008A8E0: jne 0x1008a923 */
L_1008A8E2:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x1008A8E2: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008A923; /* 0x1008A8E8: jb 0x1008a923 */
L_1008A8EA:
    if (CMP_A(_flag_a, _flag_b)) goto L_1008A8F1; /* 0x1008A8EA: ja 0x1008a8f1 */
L_1008A8EC:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1008A8EC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008A923; /* 0x1008A8EF: jbe 0x1008a923 */
L_1008A8F1:
    RECOMP_CALL(sub_1001177D); /* 0x1008A8F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1008A8F6: mov dword ptr [eax], 0x22 */
    /* test LO8(ebx), 1 */ /* 0x1008A8FC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A909; /* 0x1008A8FF: je 0x1008a909 */
L_1008A901:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008A901: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1008A904: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008A92B; /* 0x1008A907: jmp 0x1008a92b */
L_1008A909:
    /* test LO8(ebx), 2 */ /* 0x1008A909: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A919; /* 0x1008A90C: je 0x1008a919 */
L_1008A90E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A90E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x80000000u; /* 0x1008A910: mov edi, 0x80000000 */
    eax = edx; /* 0x1008A915: mov eax, edx */
    goto L_1008A92D; /* 0x1008A917: jmp 0x1008a92d */
L_1008A919:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008A919: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7FFFFFFFu; /* 0x1008A91C: mov edi, 0x7fffffff */
    goto L_1008A92B; /* 0x1008A921: jmp 0x1008a92b */
L_1008A923:
    eax = MEM32(ebp + (-0x4)); /* 0x1008A923: mov eax, dword ptr [ebp - 4] */
    goto L_1008A92D; /* 0x1008A926: jmp 0x1008a92d */
L_1008A928:
    eax = MEM32(ebp + (-0x4)); /* 0x1008A928: mov eax, dword ptr [ebp - 4] */
L_1008A92B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008A92B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A92D:
    ecx = MEM32(ebp + 0x10); /* 0x1008A92D: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1008A930: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A936; /* 0x1008A932: je 0x1008a936 */
L_1008A934:
    MEM32(ecx) = esi; /* 0x1008A934: mov dword ptr [ecx], esi */
L_1008A936:
    /* test LO8(ebx), 2 */ /* 0x1008A936: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A955; /* 0x1008A939: je 0x1008a955 */
L_1008A93B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008A93B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008A93D: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1008A93F: neg edi */
    _flag_k = FK_CMP;
    goto L_1008A955; /* 0x1008A941: jmp 0x1008a955 */
L_1008A943:
    eax = MEM32(ebp + 0x10); /* 0x1008A943: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1008A946: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A94F; /* 0x1008A948: je 0x1008a94f */
L_1008A94A:
    ecx = MEM32(ebp + 0xC); /* 0x1008A94A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1008A94D: mov dword ptr [eax], ecx */
L_1008A94F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008A94F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1008A951: mov eax, ecx */
    edi = ecx; /* 0x1008A953: mov edi, ecx */
L_1008A955:
    /* cmp MEM8(ebp + (-0x28)), 0 */ /* 0x1008A955: cmp byte ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A962; /* 0x1008A959: je 0x1008a962 */
L_1008A95B:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1008A95B: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008A95E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A962:
    edx = edi; /* 0x1008A962: mov edx, edi */
    edi = POP32_VAL(esp); /* 0x1008A964: pop edi */
    esi = POP32_VAL(esp); /* 0x1008A965: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A966: pop ebx */
    esp = ebp; /* 0x1008A967: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A969: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A96A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008A96B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008A96Bu);

L_1008A96B:
    PUSH32(esp, ebp); /* 0x1008A96B: push ebp */
    ebp = esp; /* 0x1008A96C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1008A96E: push ecx */
    PUSH32(esp, ecx); /* 0x1008A96F: push ecx */
    PUSH32(esp, ebx); /* 0x1008A970: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1008A971: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008A974: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1008A976: push edi */
    PUSH32(esp, eax); /* 0x1008A977: push eax */
    PUSH32(esp, eax); /* 0x1008A978: push eax */
    PUSH32(esp, eax); /* 0x1008A979: push eax */
    PUSH32(esp, eax); /* 0x1008A97A: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008A97B: push -1 */
    PUSH32(esp, ebx); /* 0x1008A97D: push ebx */
    PUSH32(esp, eax); /* 0x1008A97E: push eax */
    PUSH32(esp, eax); /* 0x1008A97F: push eax */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1008A980: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1008A986: mov edi, eax */
    /* test edi, edi */ /* 0x1008A988: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A99D; /* 0x1008A98A: jne 0x1008a99d */
L_1008A98C:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1008A98C: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008A992: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1008A993: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1008A998: fldz  */
    ecx = POP32_VAL(esp); /* 0x1008A99A: pop ecx */
    goto L_1008AA18; /* 0x1008A99B: jmp 0x1008aa18 */
L_1008A99D:
    PUSH32(esp, esi); /* 0x1008A99D: push esi */
    PUSH32(esp, edi); /* 0x1008A99E: push edi */
    RECOMP_CALL(sub_10012226); /* 0x1008A99F: call 0x10012226 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008A9A4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1008A9A6: pop ecx */
    /* test esi, esi */ /* 0x1008A9A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A9AF; /* 0x1008A9A9: jne 0x1008a9af */
L_1008A9AB:
    fp_push(0.0); /* 0x1008A9AB: fldz  */
    goto L_1008AA17; /* 0x1008A9AD: jmp 0x1008aa17 */
L_1008A9AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008A9AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1008A9B1: push eax */
    PUSH32(esp, eax); /* 0x1008A9B2: push eax */
    PUSH32(esp, edi); /* 0x1008A9B3: push edi */
    PUSH32(esp, esi); /* 0x1008A9B4: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008A9B5: push -1 */
    PUSH32(esp, ebx); /* 0x1008A9B7: push ebx */
    PUSH32(esp, eax); /* 0x1008A9B8: push eax */
    PUSH32(esp, eax); /* 0x1008A9B9: push eax */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1008A9BA: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008A9C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A9DB; /* 0x1008A9C2: jne 0x1008a9db */
L_1008A9C4:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1008A9C4: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008A9CA: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1008A9CB: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1008A9D0: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008A9D1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1008A9D6: fldz  */
    ecx = POP32_VAL(esp); /* 0x1008A9D8: pop ecx */
    goto L_1008AA16; /* 0x1008A9D9: jmp 0x1008aa16 */
L_1008A9DB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1008A9DB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1008A9DF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008A9E2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A9E3: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x8); /* 0x1008A9E6: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x1008A9E9: push esi */
    PUSH32(esp, eax); /* 0x1008A9EA: push eax */
    RECOMP_CALL(sub_1002BCD0); /* 0x1008A9EB: call 0x1002bcd0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1008A9F0: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008A9F3: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1008A9F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008AA0D; /* 0x1008A9F8: je 0x1008aa0d */
L_1008A9FA:
    eax = MEM32(ebp + (-0x4)); /* 0x1008A9FA: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1008A9FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008AA0A; /* 0x1008A9FF: je 0x1008aa0a */
L_1008AA01:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1008AA01: sub eax, esi */
    _flag_k = FK_CMP;
    eax = ebx + eax * 2; /* 0x1008AA03: lea eax, [ebx + eax*2] */
    MEM32(ecx) = eax; /* 0x1008AA06: mov dword ptr [ecx], eax */
    goto L_1008AA0D; /* 0x1008AA08: jmp 0x1008aa0d */
L_1008AA0A:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1008AA0A: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AA0D:
    PUSH32(esp, esi); /* 0x1008AA0D: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008AA0E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1008AA13: fld dword ptr [ebp - 8] */
L_1008AA16:
    ecx = POP32_VAL(esp); /* 0x1008AA16: pop ecx */
L_1008AA17:
    esi = POP32_VAL(esp); /* 0x1008AA17: pop esi */
L_1008AA18:
    edi = POP32_VAL(esp); /* 0x1008AA18: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008AA19: pop ebx */
    esp = ebp; /* 0x1008AA1A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AA1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AA1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA1Eu);

L_1008AA1E:
    PUSH32(esp, ebp); /* 0x1008AA1E: push ebp */
    ebp = esp; /* 0x1008AA1F: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008AA21: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1008AA28: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA2A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA30: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AA3C; /* 0x1008AA33: jne 0x1008aa3c */
L_1008AA35:
    PUSH32(esp, 0x100E1870u); /* 0x1008AA35: push 0x100e1870 */
    goto L_1008AA3E; /* 0x1008AA3A: jmp 0x1008aa3e */
L_1008AA3C:
    PUSH32(esp, 0); /* 0x1008AA3C: push 0 */
L_1008AA3E:
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA3E: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA43: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA47: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AA48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA48u);

L_1008AA48:
    PUSH32(esp, ebp); /* 0x1008AA48: push ebp */
    ebp = esp; /* 0x1008AA49: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AA4B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA4D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA53: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008AA56: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA59: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA5E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA62: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AA63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA63u);

    goto L_1008AA63;
L_1008A58B:
    PUSH32(esp, ebp); /* 0x1008A58B: push ebp */
    ebp = esp; /* 0x1008A58C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1008A58E: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008A591: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008A596: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008A598: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008A59B: push ebx */
    PUSH32(esp, esi); /* 0x1008A59C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1008A59D: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x34); /* 0x1008A5A0: lea ecx, [ebp - 0x34] */
    PUSH32(esp, edi); /* 0x1008A5A3: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008A5A4: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1008A5A7: mov edi, dword ptr [ebp + 8] */
    ebx = edi; /* 0x1008A5AA: mov ebx, edi */
    RECOMP_CALL(sub_1000F764); /* 0x1008A5AC: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1008A5B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A5B7; /* 0x1008A5B3: je 0x1008a5b7 */
L_1008A5B5:
    MEM32(esi) = edi; /* 0x1008A5B5: mov dword ptr [esi], edi */
L_1008A5B7:
    /* test edi, edi */ /* 0x1008A5B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A5D0; /* 0x1008A5B9: jne 0x1008a5d0 */
L_1008A5BB:
    RECOMP_CALL(sub_1001177D); /* 0x1008A5BB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008A5C0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008A5C6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008A661; /* 0x1008A5CB: jmp 0x1008a661 */
L_1008A5D0:
    eax = (uint32_t)MEM16(edi); /* 0x1008A5D0: movzx eax, word ptr [edi] */
    goto L_1008A5DB; /* 0x1008A5D3: jmp 0x1008a5db */
L_1008A5D5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1008A5D5: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x1008A5D8: movzx eax, word ptr [ebx] */
L_1008A5DB:
    PUSH32(esp, 8); /* 0x1008A5DB: push 8 */
    PUSH32(esp, eax); /* 0x1008A5DD: push eax */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008A5DE: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008A5E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008A5E4: pop ecx */
    /* test eax, eax */ /* 0x1008A5E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008A5D5; /* 0x1008A5E7: jne 0x1008a5d5 */
L_1008A5E9:
    eax = ebp + (-0x34); /* 0x1008A5E9: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1008A5EC: push eax */
    eax = ebp + (-0x1C); /* 0x1008A5ED: lea eax, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1008A5F0: push ebx */
    PUSH32(esp, eax); /* 0x1008A5F1: push eax */
    RECOMP_CALL(sub_10035832); /* 0x1008A5F2: call 0x10035832 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008A5F7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008A5FA: mov edx, eax */
    /* test esi, esi */ /* 0x1008A5FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A608; /* 0x1008A5FE: je 0x1008a608 */
L_1008A600:
    ecx = MEM32(edx + 0x4); /* 0x1008A600: mov ecx, dword ptr [edx + 4] */
    ecx = ebx + ecx * 2; /* 0x1008A603: lea ecx, [ebx + ecx*2] */
    MEM32(esi) = ecx; /* 0x1008A606: mov dword ptr [esi], ecx */
L_1008A608:
    /* test MEM32(edx), 0x240u */ /* 0x1008A608: test dword ptr [edx], 0x240 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A61A; /* 0x1008A60E: je 0x1008a61a */
L_1008A610:
    fp_push(0.0); /* 0x1008A610: fldz  */
    /* test esi, esi */ /* 0x1008A612: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A668; /* 0x1008A614: je 0x1008a668 */
L_1008A616:
    MEM32(esi) = edi; /* 0x1008A616: mov dword ptr [esi], edi */
    goto L_1008A668; /* 0x1008A618: jmp 0x1008a668 */
L_1008A61A:
    /* test MEM8(edx), 0x81u */ /* 0x1008A61A: test byte ptr [edx], 0x81 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A640; /* 0x1008A61D: je 0x1008a640 */
L_1008A61F:
    /* cmp MEM16(ebx), 0x2Du */ /* 0x1008A61F: cmp word ptr [ebx], 0x2d */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push(*(double*)ADDR(0x100DF570)); /* 0x1008A623: fld qword ptr [0x100df570] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008A62D; /* 0x1008A629: jne 0x1008a62d */
L_1008A62B:
    _st[0] = -_st[0]; /* 0x1008A62B: fchs  */
L_1008A62D:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x1008A62D: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1001177D); /* 0x1008A630: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1008A635: fld qword ptr [ebp - 0x24] */
    MEM32(eax) = 0x22u; /* 0x1008A638: mov dword ptr [eax], 0x22 */
    goto L_1008A668; /* 0x1008A63E: jmp 0x1008a668 */
L_1008A640:
    /* test MEM32(edx), 0x100u */ /* 0x1008A640: test dword ptr [edx], 0x100 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008A665; /* 0x1008A646: je 0x1008a665 */
L_1008A648:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x1008A648: fld qword ptr [edx + 0x10] */
    fp_push(0.0); /* 0x1008A64B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1008A64D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1008A64F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1008A651: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1008A665; /* 0x1008A654: jp 0x1008a665 */
L_1008A656:
    RECOMP_CALL(sub_1001177D); /* 0x1008A656: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1008A65B: mov dword ptr [eax], 0x22 */
L_1008A661:
    fp_push(0.0); /* 0x1008A661: fldz  */
    goto L_1008A668; /* 0x1008A663: jmp 0x1008a668 */
L_1008A665:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x1008A665: fld qword ptr [edx + 0x10] */
L_1008A668:
    /* cmp MEM8(ebp + (-0x28)), 0 */ /* 0x1008A668: cmp byte ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008A66C: pop edi */
    esi = POP32_VAL(esp); /* 0x1008A66D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008A66E: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008A678; /* 0x1008A66F: je 0x1008a678 */
L_1008A671:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008A671: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008A674: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008A678:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008A678: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008A67B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1008A67D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008A682: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008A684: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A685: ret  */
L_1008AA63:
    PUSH32(esp, ebp); /* 0x1008AA63: push ebp */
    ebp = esp; /* 0x1008AA64: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AA66: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008A58B; /* 0x1008AA67: jmp 0x1008a58b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AA6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA6Cu);

    goto L_1008AA6C;
L_1008AA48:
    PUSH32(esp, ebp); /* 0x1008AA48: push ebp */
    ebp = esp; /* 0x1008AA49: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AA4B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA4D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA53: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008AA56: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA59: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA5E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA62: ret  */
L_1008AA6C:
    PUSH32(esp, ebp); /* 0x1008AA6C: push ebp */
    ebp = esp; /* 0x1008AA6D: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AA6F: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008AA48; /* 0x1008AA70: jmp 0x1008aa48 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AA72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA72u);

L_1008AA72:
    PUSH32(esp, ebp); /* 0x1008AA72: push ebp */
    ebp = esp; /* 0x1008AA73: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008AA75: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1008AA7C: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA7E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA81: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA84: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AA90; /* 0x1008AA87: jne 0x1008aa90 */
L_1008AA89:
    PUSH32(esp, 0x100E1870u); /* 0x1008AA89: push 0x100e1870 */
    goto L_1008AA92; /* 0x1008AA8E: jmp 0x1008aa92 */
L_1008AA90:
    PUSH32(esp, 0); /* 0x1008AA90: push 0 */
L_1008AA92:
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA92: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA97: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AA9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AA9Cu);

L_1008AA9C:
    PUSH32(esp, ebp); /* 0x1008AA9C: push ebp */
    ebp = esp; /* 0x1008AA9D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AA9F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AAA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AAA4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AAA7: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008AAAA: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1008A69B); /* 0x1008AAAD: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AAB2: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AAB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AAB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AAB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AAB7u);

    goto L_1008AAB7;
L_1008AA9C:
    PUSH32(esp, ebp); /* 0x1008AA9C: push ebp */
    ebp = esp; /* 0x1008AA9D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AA9F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AAA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AAA4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AAA7: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008AAAA: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1008A69B); /* 0x1008AAAD: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AAB2: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AAB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AAB6: ret  */
L_1008AAB7:
    PUSH32(esp, ebp); /* 0x1008AAB7: push ebp */
    ebp = esp; /* 0x1008AAB8: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AABA: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008AA9C; /* 0x1008AABB: jmp 0x1008aa9c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AABD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AABDu);

L_1008AABD:
    PUSH32(esp, ebp); /* 0x1008AABD: push ebp */
    ebp = esp; /* 0x1008AABE: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AAC0: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AAC2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AAC5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008A96B); /* 0x1008AAC8: call 0x1008a96b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008AACD: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AAD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AAD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AAD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AAD2u);

    goto L_1008AAD2;
L_1008AA1E:
    PUSH32(esp, ebp); /* 0x1008AA1E: push ebp */
    ebp = esp; /* 0x1008AA1F: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008AA21: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1008AA28: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA2A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA30: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AA3C; /* 0x1008AA33: jne 0x1008aa3c */
L_1008AA35:
    PUSH32(esp, 0x100E1870u); /* 0x1008AA35: push 0x100e1870 */
    goto L_1008AA3E; /* 0x1008AA3A: jmp 0x1008aa3e */
L_1008AA3C:
    PUSH32(esp, 0); /* 0x1008AA3C: push 0 */
L_1008AA3E:
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA3E: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA43: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA47: ret  */
L_1008AAD2:
    PUSH32(esp, ebp); /* 0x1008AAD2: push ebp */
    ebp = esp; /* 0x1008AAD3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AAD5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008AA1E; /* 0x1008AAD6: jmp 0x1008aa1e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AADBu);

    goto L_1008AADB;
L_1008A686:
    PUSH32(esp, ebp); /* 0x1008A686: push ebp */
    ebp = esp; /* 0x1008A687: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008A689: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008A68B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008A68E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008A58B); /* 0x1008A691: call 0x1008a58b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008A696: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008A699: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008A69A: ret  */
L_1008AADB:
    PUSH32(esp, ebp); /* 0x1008AADB: push ebp */
    ebp = esp; /* 0x1008AADC: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AADE: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008A686; /* 0x1008AADF: jmp 0x1008a686 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AAE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AAE4u);

    goto L_1008AAE4;
L_1008AA72:
    PUSH32(esp, ebp); /* 0x1008AA72: push ebp */
    ebp = esp; /* 0x1008AA73: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008AA75: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1008AA7C: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AA7E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AA81: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AA84: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AA90; /* 0x1008AA87: jne 0x1008aa90 */
L_1008AA89:
    PUSH32(esp, 0x100E1870u); /* 0x1008AA89: push 0x100e1870 */
    goto L_1008AA92; /* 0x1008AA8E: jmp 0x1008aa92 */
L_1008AA90:
    PUSH32(esp, 0); /* 0x1008AA90: push 0 */
L_1008AA92:
    RECOMP_CALL(sub_1008A69B); /* 0x1008AA92: call 0x1008a69b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AA97: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AA9B: ret  */
L_1008AAE4:
    PUSH32(esp, ebp); /* 0x1008AAE4: push ebp */
    ebp = esp; /* 0x1008AAE5: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AAE7: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1008AA72; /* 0x1008AAE8: jmp 0x1008aa72 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AAEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AAEAu);

    goto L_1008AAEA;
L_10012781:
    PUSH32(esp, ebp); /* 0x10012781: push ebp */
    ebp = esp; /* 0x10012782: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10012784: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10012787: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1001278C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1001278E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10012791: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10012794: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x10012795: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10012798: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10012799: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1001279B: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x1001279E: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, edi); /* 0x100127A1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100127A2: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edi; /* 0x100127A5: mov dword ptr [ebp - 0x14], edi */
    /* test eax, eax */ /* 0x100127A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100127B4; /* 0x100127AA: je 0x100127b4 */
L_100127AC:
    /* test ebx, ebx */ /* 0x100127AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005726E; /* 0x100127AE: je 0x1005726e */
L_100127B4:
    /* test edi, edi */ /* 0x100127B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057275; /* 0x100127B6: je 0x10057275 */
L_100127BC:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100127BC: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x2C); /* 0x100127BF: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1000F764); /* 0x100127C2: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x100127C7: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x2C)); /* 0x100127CA: mov eax, dword ptr [ebp - 0x2c] */
    /* test ecx, ecx */ /* 0x100127CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012DC5; /* 0x100127CF: je 0x10012dc5 */
L_100127D5:
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x100127D5: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002296F; /* 0x100127DB: je 0x1002296f */
L_100127E1:
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x100127E1: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005728D; /* 0x100127E5: jne 0x1005728d */
L_100127EB:
    /* test ebx, ebx */ /* 0x100127EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012811; /* 0x100127ED: je 0x10012811 */
L_100127EF:
    eax = edi; /* 0x100127EF: mov eax, edi */
    edx = ebx; /* 0x100127F1: mov edx, ebx */
L_100127F3:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x100127F3: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100127FE; /* 0x100127F6: je 0x100127fe */
L_100127F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100127F8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100127FB: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100127F3; /* 0x100127FC: jne 0x100127f3 */
L_100127FE:
    /* test edx, edx */ /* 0x100127FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001280E; /* 0x10012800: je 0x1001280e */
L_10012802:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x10012802: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001280E; /* 0x10012805: jne 0x1001280e */
L_10012807:
    ebx = eax; /* 0x10012807: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x10012809: sub ebx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1001280B: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1001280D: inc ebx */
    _flag_k = FK_INC;
L_1001280E:
    eax = MEM32(ebp + (-0x2C)); /* 0x1001280E: mov eax, dword ptr [ebp - 0x2c] */
L_10012811:
    edx = ebp + (-0x10); /* 0x10012811: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x10012814: push edx */
    PUSH32(esp, esi); /* 0x10012815: push esi */
    PUSH32(esp, ebx); /* 0x10012816: push ebx */
    PUSH32(esp, ecx); /* 0x10012817: push ecx */
    PUSH32(esp, ebx); /* 0x10012818: push ebx */
    PUSH32(esp, edi); /* 0x10012819: push edi */
    PUSH32(esp, esi); /* 0x1001281A: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1001281B: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1001281E: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10012824: mov esi, eax */
    /* test esi, esi */ /* 0x10012826: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002297E; /* 0x10012828: je 0x1002297e */
L_1001282E:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1001282E: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002297E; /* 0x10012832: jne 0x1002297e */
L_10012838:
    eax = MEM32(ebp + (-0x18)); /* 0x10012838: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM8(eax + esi + (-0x1)), 0 */ /* 0x1001283B: cmp byte ptr [eax + esi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10012843; /* 0x10012840: jne 0x10012843 */
L_10012842:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10012842: dec esi */
    _flag_k = FK_DEC;
L_10012843:
    edi = esi; /* 0x10012843: mov edi, esi */
L_10012845:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x10012845: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F56A; /* 0x10012849: jne 0x1002f56a */
L_1001284F:
    eax = edi; /* 0x1001284F: mov eax, edi */
L_10012851:
    ecx = MEM32(ebp + (-0x4)); /* 0x10012851: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10012854: pop edi */
    esi = POP32_VAL(esp); /* 0x10012855: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10012856: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10012858: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10012859: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1001285E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10012860: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012861: ret  */
L_10012DC5:
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x10012DC5: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100229B5; /* 0x10012DCB: je 0x100229b5 */
L_10012DD1:
    ecx = ebp + (-0x10); /* 0x10012DD1: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x10012DD4: push ecx */
    PUSH32(esp, esi); /* 0x10012DD5: push esi */
    PUSH32(esp, esi); /* 0x10012DD6: push esi */
    PUSH32(esp, esi); /* 0x10012DD7: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10012DD8: push -1 */
    PUSH32(esp, edi); /* 0x10012DDA: push edi */
    PUSH32(esp, esi); /* 0x10012DDB: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10012DDC: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x10012DDF: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10012DE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022988; /* 0x10012DE7: je 0x10022988 */
L_10012DED:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x10012DED: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022988; /* 0x10012DF0: jne 0x10022988 */
L_10012DF6:
    edi = eax + (-0x1); /* 0x10012DF6: lea edi, [eax - 1] */
    RECOMP_BACKEDGE();
    goto L_10012845; /* 0x10012DF9: jmp 0x10012845 */
L_1002296F:
    /* test ebx, ebx */ /* 0x1002296F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012843; /* 0x10022971: je 0x10012843 */
L_10022977:
    edx = 0xFFu; /* 0x10022977: mov edx, 0xff */
    goto L_10022992; /* 0x1002297C: jmp 0x10022992 */
L_1002297E:
    RECOMP_CALL(sub_1001177D); /* 0x1002297E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10057363; /* 0x10022983: jmp 0x10057363 */
L_10022988:
    RECOMP_CALL(sub_1001177D); /* 0x10022988: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10057371; /* 0x1002298D: jmp 0x10057371 */
L_10022992:
    /* cmp MEM16(edi), LO16(edx) */ /* 0x10022992: cmp word ptr [edi], dx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1002297E; /* 0x10022995: ja 0x1002297e */
L_10022997:
    SET_LO8(eax, MEM8(edi)); /* 0x10022997: mov al, byte ptr [edi] */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x10022999: mov byte ptr [ecx + esi], al */
    SET_LO16(eax, MEM16(edi)); /* 0x1002299C: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1002299F: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100229A2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012843; /* 0x100229A5: je 0x10012843 */
L_100229AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100229AB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x100229AC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10022992; /* 0x100229AE: jb 0x10022992 */
L_100229B0:
    RECOMP_BACKEDGE();
    goto L_10012843; /* 0x100229B0: jmp 0x10012843 */
L_100229B5:
    eax = (uint32_t)MEM16(edi); /* 0x100229B5: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100229B8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012843; /* 0x100229BB: je 0x10012843 */
L_100229C1:
    edx = 0xFFu; /* 0x100229C1: mov edx, 0xff */
L_100229C6:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100229C6: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10022988; /* 0x100229C9: ja 0x10022988 */
L_100229CB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x100229CB: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100229CE: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(edi); /* 0x100229CF: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100229D2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012843; /* 0x100229D5: je 0x10012843 */
L_100229DB:
    RECOMP_BACKEDGE();
    goto L_100229C6; /* 0x100229DB: jmp 0x100229c6 */
L_1002F56A:
    ecx = MEM32(ebp + (-0x24)); /* 0x1002F56A: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002F56D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001284F; /* 0x1002F571: jmp 0x1001284f */
L_1005726E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005726E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10012851; /* 0x10057270: jmp 0x10012851 */
L_10057275:
    RECOMP_CALL(sub_1001177D); /* 0x10057275: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005727A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10057280: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10057285: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10012851; /* 0x10057288: jmp 0x10012851 */
L_1005728D:
    edx = ebp + (-0x10); /* 0x1005728D: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x10057290: push edx */
    PUSH32(esp, esi); /* 0x10057291: push esi */
    PUSH32(esp, ebx); /* 0x10057292: push ebx */
    PUSH32(esp, ecx); /* 0x10057293: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10057294: push -1 */
    PUSH32(esp, edi); /* 0x10057296: push edi */
    PUSH32(esp, esi); /* 0x10057297: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10057298: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1005729B: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100572A1: mov edi, eax */
    /* test edi, edi */ /* 0x100572A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100572B8; /* 0x100572A5: je 0x100572b8 */
L_100572A7:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x100572A7: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002297E; /* 0x100572AA: jne 0x1002297e */
L_100572B0:
    esi = edi + (-0x1); /* 0x100572B0: lea esi, [edi - 1] */
    RECOMP_BACKEDGE();
    goto L_10012843; /* 0x100572B3: jmp 0x10012843 */
L_100572B8:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x100572B8: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002297E; /* 0x100572BB: jne 0x1002297e */
L_100572C1:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100572C1: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x100572C7: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002297E; /* 0x100572CA: jne 0x1002297e */
L_100572D0:
    /* test ebx, ebx */ /* 0x100572D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012845; /* 0x100572D2: je 0x10012845 */
L_100572D8:
    eax = MEM32(ebp + (-0x14)); /* 0x100572D8: mov eax, dword ptr [ebp - 0x14] */
L_100572DB:
    ecx = ebp + (-0x10); /* 0x100572DB: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100572DE: push ecx */
    ecx = MEM32(ebp + (-0x2C)); /* 0x100572DF: mov ecx, dword ptr [ebp - 0x2c] */
    edx = ebp + (-0xC); /* 0x100572E2: lea edx, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100572E5: push esi */
    PUSH32(esp, MEM32(ecx + 0x74)); /* 0x100572E6: push dword ptr [ecx + 0x74] */
    PUSH32(esp, edx); /* 0x100572E9: push edx */
    PUSH32(esp, 1); /* 0x100572EA: push 1 */
    PUSH32(esp, eax); /* 0x100572EC: push eax */
    PUSH32(esp, esi); /* 0x100572ED: push esi */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x100572EE: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x100572F1: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100572F7: mov edx, eax */
    /* test edx, edx */ /* 0x100572F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022988; /* 0x100572FB: je 0x10022988 */
L_10057301:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x10057301: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022988; /* 0x10057304: jne 0x10022988 */
L_1005730A:
    /* test edx, edx */ /* 0x1005730A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10022988; /* 0x1005730C: js 0x10022988 */
L_10057312:
    /* cmp edx, 5 */ /* 0x10057312: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10022988; /* 0x10057315: ja 0x10022988 */
L_1005731B:
    eax = edx + edi; /* 0x1005731B: lea eax, [edx + edi] */
    /* cmp eax, ebx */ /* 0x1005731E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10012845; /* 0x10057320: ja 0x10012845 */
L_10057326:
    eax = esi; /* 0x10057326: mov eax, esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10057328: mov dword ptr [ebp - 0x1c], eax */
    /* test edx, edx */ /* 0x1005732B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005734D; /* 0x1005732D: jle 0x1005734d */
L_1005732F:
    ecx = MEM32(ebp + (-0x18)); /* 0x1005732F: mov ecx, dword ptr [ebp - 0x18] */
L_10057332:
    SET_LO8(eax, MEM8(ebp + eax + (-0xC))); /* 0x10057332: mov al, byte ptr [ebp + eax - 0xc] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x10057336: mov byte ptr [edi + ecx], al */
    /* test LO8(eax), LO8(eax) */ /* 0x10057339: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012845; /* 0x1005733B: je 0x10012845 */
L_10057341:
    eax = MEM32(ebp + (-0x1C)); /* 0x10057341: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10057344: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10057345: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10057346: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edx */ /* 0x10057349: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10057332; /* 0x1005734B: jl 0x10057332 */
L_1005734D:
    eax = MEM32(ebp + (-0x14)); /* 0x1005734D: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x10057350: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x10057353: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, ebx */ /* 0x10057356: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10012845; /* 0x10057358: jae 0x10012845 */
L_1005735E:
    RECOMP_BACKEDGE();
    goto L_100572DB; /* 0x1005735E: jmp 0x100572db */
L_10057363:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10057363: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x10057366: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_10012843; /* 0x1005736C: jmp 0x10012843 */
L_10057371:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10057371: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x10057374: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_10012845; /* 0x1005737A: jmp 0x10012845 */
L_1008AAEA:
    PUSH32(esp, ebp); /* 0x1008AAEA: push ebp */
    ebp = esp; /* 0x1008AAEB: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1008AAED: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10012781; /* 0x1008AAEE: jmp 0x10012781 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008AAF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AAF3u);

L_1008AAF3:
    PUSH32(esp, ebp); /* 0x1008AAF3: push ebp */
    ebp = esp; /* 0x1008AAF4: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AAF6: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AAF8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AAFB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AAFE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10012781); /* 0x1008AB01: call 0x10012781 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AB06: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AB09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AB0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AB0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AB0Bu);

L_1008AB0B:
    PUSH32(esp, ebp); /* 0x1008AB0B: push ebp */
    ebp = esp; /* 0x1008AB0C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008AB0E: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008AB11: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008AB12: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008AB15: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x1008AB18: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1008AB1B: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1000F764); /* 0x1008AB1E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1008AB23: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008AB26: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1008AB27: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AB2A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x74)); /* 0x1008AB2D: push dword ptr [eax + 0x74] */
    eax = ebp + (-0x4); /* 0x1008AB30: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AB33: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008AB36: push eax */
    RECOMP_CALL(sub_10014321); /* 0x1008AB37: call 0x10014321 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AB3C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008AB3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008AB46; /* 0x1008AB41: jne 0x1008ab46 */
L_1008AB43:
    esi = MEM32(ebp + (-0x4)); /* 0x1008AB43: mov esi, dword ptr [ebp - 4] */
L_1008AB46:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008AB46: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AB53; /* 0x1008AB4A: je 0x1008ab53 */
L_1008AB4C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008AB4C: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008AB4F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AB53:
    eax = esi; /* 0x1008AB53: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008AB55: pop esi */
    esp = ebp; /* 0x1008AB56: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AB58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AB59: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AB5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AB5Au);

L_1008AB5A:
    PUSH32(esp, ebp); /* 0x1008AB5A: push ebp */
    ebp = esp; /* 0x1008AB5B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1008AB5D: push ecx */
    PUSH32(esp, esi); /* 0x1008AB5E: push esi */
    PUSH32(esp, 0); /* 0x1008AB5F: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AB61: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008AB64: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1008AB67: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_10022A43); /* 0x1008AB6A: call 0x10022a43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008AB6F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AB70: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x1008AB73: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008AB76: push eax */
    RECOMP_CALL(sub_10014321); /* 0x1008AB77: call 0x10014321 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008AB7C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008AB7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008AB86; /* 0x1008AB81: jne 0x1008ab86 */
L_1008AB83:
    esi = MEM32(ebp + (-0x4)); /* 0x1008AB83: mov esi, dword ptr [ebp - 4] */
L_1008AB86:
    eax = esi; /* 0x1008AB86: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008AB88: pop esi */
    esp = ebp; /* 0x1008AB89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AB8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AB8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AB8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AB8Du);

L_1008AB8D:
    PUSH32(esp, ebp); /* 0x1008AB8D: push ebp */
    ebp = esp; /* 0x1008AB8E: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AB90: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AB92: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AB95: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008ABA2); /* 0x1008AB98: call 0x1008aba2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008AB9D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ABA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ABA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ABA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ABA2u);

L_1008ABA2:
    PUSH32(esp, ebp); /* 0x1008ABA2: push ebp */
    ebp = esp; /* 0x1008ABA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008ABA5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008ABA8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008ABA9: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008ABAC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008ABC4; /* 0x1008ABAE: jne 0x1008abc4 */
L_1008ABB0:
    RECOMP_CALL(sub_1001177D); /* 0x1008ABB0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008ABB5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008ABBB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008ABC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008AC2C; /* 0x1008ABC2: jmp 0x1008ac2c */
L_1008ABC4:
    PUSH32(esp, edi); /* 0x1008ABC4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008ABC5: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008ABC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008ABE0; /* 0x1008ABCA: jne 0x1008abe0 */
L_1008ABCC:
    RECOMP_CALL(sub_1001177D); /* 0x1008ABCC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008ABD1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008ABD7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008ABDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008AC2B; /* 0x1008ABDE: jmp 0x1008ac2b */
L_1008ABE0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008ABE0: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1008ABE3: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008ABE6: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008ABEB: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008ABEE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x1008ABF0: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AC13; /* 0x1008ABF3: jne 0x1008ac13 */
L_1008ABF5:
    goto L_1008AC1C; /* 0x1008ABF5: jmp 0x1008ac1c */
L_1008ABF7:
    SET_LO8(eax, MEM8(esi)); /* 0x1008ABF7: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008ABF9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008AC1C; /* 0x1008ABFB: je 0x1008ac1c */
L_1008ABFD:
    eax = (uint32_t)LO8(eax); /* 0x1008ABFD: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008AC00: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008AC12; /* 0x1008AC05: je 0x1008ac12 */
L_1008AC07:
    eax = esi; /* 0x1008AC07: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008AC09: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1008AC0A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AC19; /* 0x1008AC0C: je 0x1008ac19 */
L_1008AC0E:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x1008AC0E: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AC1C; /* 0x1008AC10: je 0x1008ac1c */
L_1008AC12:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008AC12: inc esi */
    _flag_k = FK_INC;
L_1008AC13:
    /* cmp esi, edi */ /* 0x1008AC13: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008AC1C; /* 0x1008AC15: ja 0x1008ac1c */
L_1008AC17:
    RECOMP_BACKEDGE();
    goto L_1008ABF7; /* 0x1008AC17: jmp 0x1008abf7 */
L_1008AC19:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1008AC19: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AC1C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008AC1C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AC29; /* 0x1008AC20: je 0x1008ac29 */
L_1008AC22:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008AC22: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008AC25: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AC29:
    eax = edx; /* 0x1008AC29: mov eax, edx */
L_1008AC2B:
    edi = POP32_VAL(esp); /* 0x1008AC2B: pop edi */
L_1008AC2C:
    esi = POP32_VAL(esp); /* 0x1008AC2C: pop esi */
    esp = ebp; /* 0x1008AC2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AC2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AC30: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AC31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AC31u);

L_1008AC31:
    PUSH32(esp, ebp); /* 0x1008AC31: push ebp */
    ebp = esp; /* 0x1008AC32: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AC34: push 1 */
    PUSH32(esp, 0x107u); /* 0x1008AC36: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AC3B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AC3E: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AC40: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AC45: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AC48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AC49: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AC4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AC4Au);

L_1008AC4A:
    PUSH32(esp, ebp); /* 0x1008AC4A: push ebp */
    ebp = esp; /* 0x1008AC4B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AC4D: push 1 */
    PUSH32(esp, 0x107u); /* 0x1008AC4F: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AC54: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AC57: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AC5A: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AC5F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AC62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AC63: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AC64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AC64u);

L_1008AC64:
    PUSH32(esp, ebp); /* 0x1008AC64: push ebp */
    ebp = esp; /* 0x1008AC65: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AC67: push 1 */
    PUSH32(esp, 0x103u); /* 0x1008AC69: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AC6E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AC71: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AC73: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AC78: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AC7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AC7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AC7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AC7Du);

L_1008AC7D:
    PUSH32(esp, ebp); /* 0x1008AC7D: push ebp */
    ebp = esp; /* 0x1008AC7E: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AC80: push 1 */
    PUSH32(esp, 0x103u); /* 0x1008AC82: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AC87: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AC8A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AC8D: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AC92: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AC95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AC96: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AC97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AC97u);

L_1008AC97:
    PUSH32(esp, ebp); /* 0x1008AC97: push ebp */
    ebp = esp; /* 0x1008AC98: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 9 */ /* 0x1008AC9A: cmp dword ptr [ebp + 8], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008ACA5; /* 0x1008AC9E: jne 0x1008aca5 */
L_1008ACA0:
    PUSH32(esp, 0x40u); /* 0x1008ACA0: push 0x40 */
    eax = POP32_VAL(esp); /* 0x1008ACA2: pop eax */
    ebp = POP32_VAL(esp); /* 0x1008ACA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ACA4: ret  */
L_1008ACA5:
    PUSH32(esp, 2); /* 0x1008ACA5: push 2 */
    PUSH32(esp, 0x40u); /* 0x1008ACA7: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ACA9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008ACAC: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ACAE: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ACB3: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ACB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ACB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ACB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ACB8u);

L_1008ACB8:
    PUSH32(esp, ebp); /* 0x1008ACB8: push ebp */
    ebp = esp; /* 0x1008ACB9: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 9 */ /* 0x1008ACBB: cmp dword ptr [ebp + 8], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008ACC6; /* 0x1008ACBF: jne 0x1008acc6 */
L_1008ACC1:
    PUSH32(esp, 0x40u); /* 0x1008ACC1: push 0x40 */
    eax = POP32_VAL(esp); /* 0x1008ACC3: pop eax */
    ebp = POP32_VAL(esp); /* 0x1008ACC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ACC5: ret  */
L_1008ACC6:
    PUSH32(esp, 2); /* 0x1008ACC6: push 2 */
    PUSH32(esp, 0x40u); /* 0x1008ACC8: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ACCA: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008ACCD: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ACD0: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ACD5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ACD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ACD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ACDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ACDAu);

L_1008ACDA:
    PUSH32(esp, ebp); /* 0x1008ACDA: push ebp */
    ebp = esp; /* 0x1008ACDB: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008ACDD: push 3 */
    PUSH32(esp, 0x117u); /* 0x1008ACDF: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ACE4: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008ACE7: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ACE9: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ACEE: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ACF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ACF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ACF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ACF3u);

L_1008ACF3:
    PUSH32(esp, ebp); /* 0x1008ACF3: push ebp */
    ebp = esp; /* 0x1008ACF4: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008ACF6: push 3 */
    PUSH32(esp, 0x117u); /* 0x1008ACF8: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ACFD: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AD00: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AD03: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AD08: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AD0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AD0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AD0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AD0Du);

L_1008AD0D:
    PUSH32(esp, ebp); /* 0x1008AD0D: push ebp */
    ebp = esp; /* 0x1008AD0E: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AD10: push 1 */
    PUSH32(esp, 0); /* 0x1008AD12: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AD14: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AD17: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AD19: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AD1E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AD21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AD22: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AD23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AD23u);

L_1008AD23:
    PUSH32(esp, ebp); /* 0x1008AD23: push ebp */
    ebp = esp; /* 0x1008AD24: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1008AD26: push 1 */
    PUSH32(esp, 0); /* 0x1008AD28: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AD2A: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AD2D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AD30: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AD35: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AD38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AD39: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AD3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AD3Au);

L_1008AD3A:
    PUSH32(esp, ebp); /* 0x1008AD3A: push ebp */
    ebp = esp; /* 0x1008AD3B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AD3D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AD3F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008AD4B); /* 0x1008AD42: call 0x1008ad4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008AD47: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008AD48: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008AD49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AD4A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AD4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AD4Bu);

L_1008AD4B:
    PUSH32(esp, ebp); /* 0x1008AD4B: push ebp */
    ebp = esp; /* 0x1008AD4C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008AD4E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AD51: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008AD54: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008AD57: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008AD5C: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1008AD5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008AD82; /* 0x1008AD61: je 0x1008ad82 */
L_1008AD63:
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x1008AD63: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008AD82; /* 0x1008AD6A: jne 0x1008ad82 */
L_1008AD6C:
    PUSH32(esp, 3); /* 0x1008AD6C: push 3 */
    PUSH32(esp, 0); /* 0x1008AD6E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AD70: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AD73: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AD76: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AD7B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1008AD7E: mov ecx, eax */
    goto L_1008AD84; /* 0x1008AD80: jmp 0x1008ad84 */
L_1008AD82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008AD82: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AD84:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008AD84: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AD91; /* 0x1008AD88: je 0x1008ad91 */
L_1008AD8A:
    eax = MEM32(ebp + (-0x8)); /* 0x1008AD8A: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008AD8D: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AD91:
    eax = ecx; /* 0x1008AD91: mov eax, ecx */
    esp = ebp; /* 0x1008AD93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AD95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AD96: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AD97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AD97u);

L_1008AD97:
    PUSH32(esp, ebp); /* 0x1008AD97: push ebp */
    ebp = esp; /* 0x1008AD98: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008AD9A: push 3 */
    PUSH32(esp, 0); /* 0x1008AD9C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AD9E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008ADA1: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ADA3: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ADA8: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ADAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ADAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ADAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ADADu);

L_1008ADAD:
    PUSH32(esp, ebp); /* 0x1008ADAD: push ebp */
    ebp = esp; /* 0x1008ADAE: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008ADB0: push 3 */
    PUSH32(esp, 0); /* 0x1008ADB2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ADB4: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008ADB7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ADBA: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ADBF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ADC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ADC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ADC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ADC4u);

L_1008ADC4:
    PUSH32(esp, ebp); /* 0x1008ADC4: push ebp */
    ebp = esp; /* 0x1008ADC5: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1008ADC7: push 2 */
    PUSH32(esp, 0); /* 0x1008ADC9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ADCB: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008ADCE: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ADD0: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ADD5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ADD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ADD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ADDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ADDAu);

L_1008ADDA:
    PUSH32(esp, ebp); /* 0x1008ADDA: push ebp */
    ebp = esp; /* 0x1008ADDB: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1008ADDD: push 2 */
    PUSH32(esp, 0); /* 0x1008ADDF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ADE1: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008ADE4: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ADE7: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008ADEC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008ADEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008ADF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008ADF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008ADF1u);

L_1008ADF1:
    PUSH32(esp, ebp); /* 0x1008ADF1: push ebp */
    ebp = esp; /* 0x1008ADF2: mov ebp, esp */
    PUSH32(esp, 4); /* 0x1008ADF4: push 4 */
    PUSH32(esp, 0); /* 0x1008ADF6: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008ADF8: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008ADFB: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008ADFE: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE03: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE07: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE08u);

L_1008AE08:
    PUSH32(esp, ebp); /* 0x1008AE08: push ebp */
    ebp = esp; /* 0x1008AE09: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008AE0B: push 3 */
    PUSH32(esp, 0x157u); /* 0x1008AE0D: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE12: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AE15: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE17: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE1C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE20: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE21u);

L_1008AE21:
    PUSH32(esp, ebp); /* 0x1008AE21: push ebp */
    ebp = esp; /* 0x1008AE22: mov ebp, esp */
    PUSH32(esp, 3); /* 0x1008AE24: push 3 */
    PUSH32(esp, 0x157u); /* 0x1008AE26: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE2B: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AE2E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE31: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE36: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE3Bu);

L_1008AE3B:
    PUSH32(esp, ebp); /* 0x1008AE3B: push ebp */
    ebp = esp; /* 0x1008AE3C: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1008AE3E: push 2 */
    PUSH32(esp, 0x10u); /* 0x1008AE40: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE42: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AE45: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE47: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE4C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE50: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE51u);

L_1008AE51:
    PUSH32(esp, ebp); /* 0x1008AE51: push ebp */
    ebp = esp; /* 0x1008AE52: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1008AE54: push 2 */
    PUSH32(esp, 0x10u); /* 0x1008AE56: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE58: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AE5B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE5E: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE63: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE67: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE68u);

L_1008AE68:
    PUSH32(esp, ebp); /* 0x1008AE68: push ebp */
    ebp = esp; /* 0x1008AE69: mov ebp, esp */
    PUSH32(esp, 8); /* 0x1008AE6B: push 8 */
    PUSH32(esp, 0); /* 0x1008AE6D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE6F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1008AE72: push 0 */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE74: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE79: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE7Eu);

L_1008AE7E:
    PUSH32(esp, ebp); /* 0x1008AE7E: push ebp */
    ebp = esp; /* 0x1008AE7F: mov ebp, esp */
    PUSH32(esp, 8); /* 0x1008AE81: push 8 */
    PUSH32(esp, 0); /* 0x1008AE83: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AE85: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AE88: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002E00D); /* 0x1008AE8B: call 0x1002e00d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008AE90: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008AE93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AE94: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AE95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AE95u);

L_1008AE95:
    PUSH32(esp, ebp); /* 0x1008AE95: push ebp */
    ebp = esp; /* 0x1008AE96: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008AE98: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3A4u; /* 0x1008AE9B: sub eax, 0x3a4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008AEC8; /* 0x1008AEA0: je 0x1008aec8 */
L_1008AEA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1008AEA2: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008AEC1; /* 0x1008AEA5: je 0x1008aec1 */
L_1008AEA7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x1008AEA7: sub eax, 0xd */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008AEBA; /* 0x1008AEAA: je 0x1008aeba */
L_1008AEAC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008AEAC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008AEB3; /* 0x1008AEAD: je 0x1008aeb3 */
L_1008AEAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008AEAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008AEB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AEB2: ret  */
L_1008AEB3:
    eax = MEM32(0x1008AEDC); /* 0x1008AEB3: mov eax, dword ptr [0x1008aedc] */
    ebp = POP32_VAL(esp); /* 0x1008AEB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AEB9: ret  */
L_1008AEBA:
    eax = MEM32(0x1008AED8); /* 0x1008AEBA: mov eax, dword ptr [0x1008aed8] */
    ebp = POP32_VAL(esp); /* 0x1008AEBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AEC0: ret  */
L_1008AEC1:
    eax = MEM32(0x1008AED4); /* 0x1008AEC1: mov eax, dword ptr [0x1008aed4] */
    ebp = POP32_VAL(esp); /* 0x1008AEC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AEC7: ret  */
L_1008AEC8:
    eax = MEM32(0x1008AED0); /* 0x1008AEC8: mov eax, dword ptr [0x1008aed0] */
    ebp = POP32_VAL(esp); /* 0x1008AECD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AECE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AEE0u);

L_1008AEE0:
    PUSH32(esp, ebp); /* 0x1008AEE0: push ebp */
    ebp = esp; /* 0x1008AEE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1008AEE3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1008AEE4: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1008AEE7: push esi */
    PUSH32(esp, edi); /* 0x1008AEE8: push edi */
    PUSH32(esp, 0x101u); /* 0x1008AEE9: push 0x101 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008AEEE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x18; /* 0x1008AEF0: lea esi, [ebx + 0x18] */
    PUSH32(esp, edi); /* 0x1008AEF3: push edi */
    PUSH32(esp, esi); /* 0x1008AEF4: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1008AEF5: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x4) = edi; /* 0x1008AEFA: mov dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008AEFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x8) = edi; /* 0x1008AEFF: mov dword ptr [ebx + 8], edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008AF02: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x21C) = edi; /* 0x1008AF05: mov dword ptr [ebx + 0x21c], edi */
    ecx = 0x101u; /* 0x1008AF0B: mov ecx, 0x101 */
    edi = ebx + 0xC; /* 0x1008AF10: lea edi, [ebx + 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1008AF13: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1008AF14: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1008AF15: stosd dword ptr es:[edi], eax */
    edi = 0x100DFA88u; /* 0x1008AF16: mov edi, 0x100dfa88 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1008AF1B: sub edi, ebx */
    _flag_k = FK_CMP;
L_1008AF1D:
    SET_LO8(eax, MEM8(edi + esi)); /* 0x1008AF1D: mov al, byte ptr [edi + esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1008AF20: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008AF22: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008AF23: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008AF1D; /* 0x1008AF24: jne 0x1008af1d */
L_1008AF26:
    ecx = ebx + 0x119; /* 0x1008AF26: lea ecx, [ebx + 0x119] */
    edx = 0x100u; /* 0x1008AF2C: mov edx, 0x100 */
L_1008AF31:
    SET_LO8(eax, MEM8(ecx + edi)); /* 0x1008AF31: mov al, byte ptr [ecx + edi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008AF34: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008AF36: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008AF37: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008AF31; /* 0x1008AF38: jne 0x1008af31 */
L_1008AF3A:
    edi = POP32_VAL(esp); /* 0x1008AF3A: pop edi */
    esi = POP32_VAL(esp); /* 0x1008AF3B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008AF3C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1008AF3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AF3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AF3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AF3Fu);

L_1008AF3F:
    PUSH32(esp, ebp); /* 0x1008AF3F: push ebp */
    ebp = esp; /* 0x1008AF40: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008AF42: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008AF45: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008AF46: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10); /* 0x1008AF48: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008AF4B: push esi */
    RECOMP_CALL(sub_1000F764); /* 0x1008AF4C: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008AF51: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1008AF54: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AF5C; /* 0x1008AF57: je 0x1008af5c */
L_1008AF59:
    esi = MEM32(eax + 0x4); /* 0x1008AF59: mov esi, dword ptr [eax + 4] */
L_1008AF5C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008AF5C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008AF69; /* 0x1008AF60: je 0x1008af69 */
L_1008AF62:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008AF62: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008AF65: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008AF69:
    eax = esi; /* 0x1008AF69: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008AF6B: pop esi */
    esp = ebp; /* 0x1008AF6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008AF6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AF6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AF70u);

L_1008AF70:
    PUSH32(esp, ebp); /* 0x1008AF70: push ebp */
    ebp = esp; /* 0x1008AF71: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008AF73: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008AF75: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008AF81); /* 0x1008AF78: call 0x1008af81 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008AF7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008AF7E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008AF7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008AF80: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008AF81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008AF81u);

L_1008AF81:
    PUSH32(esp, ebp); /* 0x1008AF81: push ebp */
    ebp = esp; /* 0x1008AF82: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008AF84: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008AF87: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008AF8A: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008AF8B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008AF8E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008AF93: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008AF96: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008AFE9; /* 0x1008AF9C: jbe 0x1008afe9 */
L_1008AF9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008AF9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008AFA0: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008AFA3: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008AFA6: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008AFA8: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008AFA8: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008AFAB: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008AFAE: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008AFB1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B00A; /* 0x1008AFB5: je 0x1008b00a */
L_1008AFB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008AFB7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008AFB9: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008AFBA: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008AFBB: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008AFBE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008AFC1: push eax */
    PUSH32(esp, 2); /* 0x1008AFC2: push 2 */
    eax = ebp + 0x8; /* 0x1008AFC4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008AFC7: push eax */
    PUSH32(esp, esi); /* 0x1008AFC8: push esi */
    PUSH32(esp, 0); /* 0x1008AFC9: push 0 */
    RECOMP_CALL(sub_100211C4); /* 0x1008AFCB: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008AFD0: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008AFD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B00A; /* 0x1008AFD5: je 0x1008b00a */
L_1008AFD7:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008AFD7: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B00A; /* 0x1008AFDC: jne 0x1008b00a */
L_1008AFDE:
    /* test MEM32(ebp + (-0x4)), 0x107u */ /* 0x1008AFDE: test dword ptr [ebp - 4], 0x107 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x107u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B00A; /* 0x1008AFE5: je 0x1008b00a */
L_1008AFE7:
    goto L_1008B011; /* 0x1008AFE7: jmp 0x1008b011 */
L_1008AFE9:
    eax = MEM32(ebp + (-0x14)); /* 0x1008AFE9: mov eax, dword ptr [ebp - 0x14] */
    edx = 0x107u; /* 0x1008AFEC: mov edx, 0x107 */
    ecx = (uint32_t)LO8(ecx); /* 0x1008AFF1: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008AFF4: mov eax, dword ptr [eax + 0x90] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1008AFFA: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B00E; /* 0x1008AFFE: jne 0x1008b00e */
L_1008B000:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B000: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 1 */ /* 0x1008B003: test byte ptr [ecx + eax + 0x19], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B00E; /* 0x1008B008: jne 0x1008b00e */
L_1008B00A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B00A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B011; /* 0x1008B00C: jmp 0x1008b011 */
L_1008B00E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B00E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B010: inc esi */
    _flag_k = FK_INC;
L_1008B011:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B011: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B01E; /* 0x1008B015: je 0x1008b01e */
L_1008B017:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B017: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B01A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B01E:
    eax = esi; /* 0x1008B01E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B020: pop esi */
    esp = ebp; /* 0x1008B021: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B023: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B024: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B025(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B025u);

L_1008B025:
    PUSH32(esp, ebp); /* 0x1008B025: push ebp */
    ebp = esp; /* 0x1008B026: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B028: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B02A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B036); /* 0x1008B02D: call 0x1008b036 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B032: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B033: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B034: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B035: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B036u);

L_1008B036:
    PUSH32(esp, ebp); /* 0x1008B036: push ebp */
    ebp = esp; /* 0x1008B037: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B039: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B03C: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B03F: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B040: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B043: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B048: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B04B: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B0A0; /* 0x1008B051: jbe 0x1008b0a0 */
L_1008B053:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B053: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B055: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B058: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B05B: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B05D: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B05D: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B060: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B063: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B066: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B0C1; /* 0x1008B06A: je 0x1008b0c1 */
L_1008B06C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B06C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B06E: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B06F: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B070: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B073: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B076: push eax */
    PUSH32(esp, 2); /* 0x1008B077: push 2 */
    eax = ebp + 0x8; /* 0x1008B079: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B07C: push eax */
    eax = ebp + (-0x14); /* 0x1008B07D: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B080: push esi */
    PUSH32(esp, eax); /* 0x1008B081: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B082: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B087: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B08A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B0C1; /* 0x1008B08C: je 0x1008b0c1 */
L_1008B08E:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B08E: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B0C1; /* 0x1008B093: jne 0x1008b0c1 */
L_1008B095:
    /* test MEM32(ebp + (-0x4)), 0x103u */ /* 0x1008B095: test dword ptr [ebp - 4], 0x103 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x103u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B0C1; /* 0x1008B09C: je 0x1008b0c1 */
L_1008B09E:
    goto L_1008B0C8; /* 0x1008B09E: jmp 0x1008b0c8 */
L_1008B0A0:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B0A0: mov eax, dword ptr [ebp - 0x14] */
    edx = 0x103u; /* 0x1008B0A3: mov edx, 0x103 */
    ecx = (uint32_t)LO8(ecx); /* 0x1008B0A8: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008B0AB: mov eax, dword ptr [eax + 0x90] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1008B0B1: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B0C5; /* 0x1008B0B5: jne 0x1008b0c5 */
L_1008B0B7:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B0B7: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 1 */ /* 0x1008B0BA: test byte ptr [ecx + eax + 0x19], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B0C5; /* 0x1008B0BF: jne 0x1008b0c5 */
L_1008B0C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B0C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B0C8; /* 0x1008B0C3: jmp 0x1008b0c8 */
L_1008B0C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B0C5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B0C7: inc esi */
    _flag_k = FK_INC;
L_1008B0C8:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B0C8: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B0D5; /* 0x1008B0CC: je 0x1008b0d5 */
L_1008B0CE:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B0CE: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B0D1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B0D5:
    eax = esi; /* 0x1008B0D5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B0D7: pop esi */
    esp = ebp; /* 0x1008B0D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B0DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B0DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B0DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B0DCu);

L_1008B0DC:
    PUSH32(esp, ebp); /* 0x1008B0DC: push ebp */
    ebp = esp; /* 0x1008B0DD: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B0DF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B0E1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B0ED); /* 0x1008B0E4: call 0x1008b0ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B0E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B0EA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B0EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B0EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B0ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B0EDu);

L_1008B0ED:
    PUSH32(esp, ebp); /* 0x1008B0ED: push ebp */
    ebp = esp; /* 0x1008B0EE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B0F0: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B0F3: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B0F6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B0F7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B0FA: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B0FF: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B102: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B156; /* 0x1008B108: jbe 0x1008b156 */
L_1008B10A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B10A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B10C: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B10F: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B112: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B114: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B114: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B117: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B11A: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B11D: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B152; /* 0x1008B121: je 0x1008b152 */
L_1008B123:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B123: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B125: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B126: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B127: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B12A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B12D: push eax */
    PUSH32(esp, 2); /* 0x1008B12E: push 2 */
    eax = ebp + 0x8; /* 0x1008B130: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B133: push eax */
    eax = ebp + (-0x14); /* 0x1008B134: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B137: push esi */
    PUSH32(esp, eax); /* 0x1008B138: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B139: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B13E: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B141: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B152; /* 0x1008B143: je 0x1008b152 */
L_1008B145:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B145: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B152; /* 0x1008B14A: jne 0x1008b152 */
L_1008B14C:
    /* test MEM8(ebp + (-0x4)), 4 */ /* 0x1008B14C: test byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B17F; /* 0x1008B150: jne 0x1008b17f */
L_1008B152:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B152: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B17F; /* 0x1008B154: jmp 0x1008b17f */
L_1008B156:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B156: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x1008B159: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008B172; /* 0x1008B15D: jle 0x1008b172 */
L_1008B15F:
    eax = ebp + (-0x14); /* 0x1008B15F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008B162: push eax */
    PUSH32(esp, 4); /* 0x1008B163: push 4 */
    PUSH32(esp, ecx); /* 0x1008B165: push ecx */
    RECOMP_CALL(sub_100895AC); /* 0x1008B166: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008B16B: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008B16E: mov esi, eax */
    goto L_1008B17F; /* 0x1008B170: jmp 0x1008b17f */
L_1008B172:
    eax = MEM32(eax + 0x90); /* 0x1008B172: mov eax, dword ptr [eax + 0x90] */
    esi = (uint32_t)MEM16(eax + ecx * 2); /* 0x1008B178: movzx esi, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    esi = esi & 4; /* 0x1008B17C: and esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B17F:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B17F: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B18C; /* 0x1008B183: je 0x1008b18c */
L_1008B185:
    eax = MEM32(ebp + (-0xC)); /* 0x1008B185: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008B188: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B18C:
    eax = esi; /* 0x1008B18C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B18E: pop esi */
    esp = ebp; /* 0x1008B18F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B191: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B192: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B193u);

L_1008B193:
    PUSH32(esp, ebp); /* 0x1008B193: push ebp */
    ebp = esp; /* 0x1008B194: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B196: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B198: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B1A4); /* 0x1008B19B: call 0x1008b1a4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B1A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B1A1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B1A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B1A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B1A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B1A4u);

L_1008B1A4:
    PUSH32(esp, ebp); /* 0x1008B1A4: push ebp */
    ebp = esp; /* 0x1008B1A5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B1A7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B1AA: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B1AD: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B1AE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B1B1: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B1B6: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B1B9: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B20E; /* 0x1008B1BF: jbe 0x1008b20e */
L_1008B1C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B1C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B1C3: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B1C6: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B1C9: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B1CB: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B1CB: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B1CE: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B1D1: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B1D4: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B22F; /* 0x1008B1D8: je 0x1008b22f */
L_1008B1DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B1DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B1DC: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B1DD: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B1DE: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B1E1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B1E4: push eax */
    PUSH32(esp, 2); /* 0x1008B1E5: push 2 */
    eax = ebp + 0x8; /* 0x1008B1E7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B1EA: push eax */
    eax = ebp + (-0x14); /* 0x1008B1EB: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B1EE: push esi */
    PUSH32(esp, eax); /* 0x1008B1EF: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B1F0: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B1F5: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B1F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B22F; /* 0x1008B1FA: je 0x1008b22f */
L_1008B1FC:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B1FC: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B22F; /* 0x1008B201: jne 0x1008b22f */
L_1008B203:
    /* test MEM32(ebp + (-0x4)), 0x117u */ /* 0x1008B203: test dword ptr [ebp - 4], 0x117 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x117u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B22F; /* 0x1008B20A: je 0x1008b22f */
L_1008B20C:
    goto L_1008B236; /* 0x1008B20C: jmp 0x1008b236 */
L_1008B20E:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B20E: mov eax, dword ptr [ebp - 0x14] */
    edx = 0x117u; /* 0x1008B211: mov edx, 0x117 */
    ecx = (uint32_t)LO8(ecx); /* 0x1008B216: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008B219: mov eax, dword ptr [eax + 0x90] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1008B21F: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B233; /* 0x1008B223: jne 0x1008b233 */
L_1008B225:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B225: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 3 */ /* 0x1008B228: test byte ptr [ecx + eax + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B233; /* 0x1008B22D: jne 0x1008b233 */
L_1008B22F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B22F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B236; /* 0x1008B231: jmp 0x1008b236 */
L_1008B233:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B233: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B235: inc esi */
    _flag_k = FK_INC;
L_1008B236:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B236: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B243; /* 0x1008B23A: je 0x1008b243 */
L_1008B23C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B23C: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B23F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B243:
    eax = esi; /* 0x1008B243: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B245: pop esi */
    esp = ebp; /* 0x1008B246: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B249: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B24A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B24Au);

L_1008B24A:
    PUSH32(esp, ebp); /* 0x1008B24A: push ebp */
    ebp = esp; /* 0x1008B24B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B24D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B24F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B25B); /* 0x1008B252: call 0x1008b25b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B257: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B258: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B259: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B25A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B25B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B25Bu);

L_1008B25B:
    PUSH32(esp, ebp); /* 0x1008B25B: push ebp */
    ebp = esp; /* 0x1008B25C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B25E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B261: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008B264: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B267: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008B26C: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x1008B26F: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B28A; /* 0x1008B276: jne 0x1008b28a */
L_1008B278:
    eax = MEM32(ebp + 0x8); /* 0x1008B278: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7D61u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFF7D61u; /* 0x1008B27B: add eax, 0xffff7d61 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x52u */ /* 0x1008B280: cmp eax, 0x52 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008B28A; /* 0x1008B283: ja 0x1008b28a */
L_1008B285:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B285: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008B287: inc eax */
    _flag_k = FK_INC;
    goto L_1008B28C; /* 0x1008B288: jmp 0x1008b28c */
L_1008B28A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B28A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B28C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B28C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B299; /* 0x1008B290: je 0x1008b299 */
L_1008B292:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B292: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B295: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B299:
    esp = ebp; /* 0x1008B299: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B29B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B29C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B29D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B29Du);

L_1008B29D:
    PUSH32(esp, ebp); /* 0x1008B29D: push ebp */
    ebp = esp; /* 0x1008B29E: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B2A0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B2A2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B2AE); /* 0x1008B2A5: call 0x1008b2ae */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B2AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B2AB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B2AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B2AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B2AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B2AEu);

L_1008B2AE:
    PUSH32(esp, ebp); /* 0x1008B2AE: push ebp */
    ebp = esp; /* 0x1008B2AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B2B1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B2B4: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008B2B7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B2BA: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008B2BF: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x1008B2C2: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B2E6; /* 0x1008B2C9: jne 0x1008b2e6 */
L_1008B2CB:
    ecx = MEM32(ebp + 0x8); /* 0x1008B2CB: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x8340); /* 0x1008B2CE: lea eax, [ecx - 0x8340] */
    /* cmp eax, 0x56u */ /* 0x1008B2D4: cmp eax, 0x56 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008B2E6; /* 0x1008B2D7: ja 0x1008b2e6 */
L_1008B2D9:
    /* cmp ecx, 0x837Fu */ /* 0x1008B2D9: cmp ecx, 0x837f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B2E6; /* 0x1008B2DF: je 0x1008b2e6 */
L_1008B2E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B2E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008B2E3: inc eax */
    _flag_k = FK_INC;
    goto L_1008B2E8; /* 0x1008B2E4: jmp 0x1008b2e8 */
L_1008B2E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B2E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B2E8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B2E8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B2F5; /* 0x1008B2EC: je 0x1008b2f5 */
L_1008B2EE:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B2EE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B2F1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B2F5:
    esp = ebp; /* 0x1008B2F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B2F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B2F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B2F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B2F9u);

L_1008B2F9:
    PUSH32(esp, ebp); /* 0x1008B2F9: push ebp */
    ebp = esp; /* 0x1008B2FA: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B2FC: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B2FE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B30A); /* 0x1008B301: call 0x1008b30a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B306: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B307: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B308: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B309: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B30A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B30Au);

L_1008B30A:
    PUSH32(esp, ebp); /* 0x1008B30A: push ebp */
    ebp = esp; /* 0x1008B30B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B30D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B310: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008B313: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B316: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008B31B: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x1008B31E: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B342; /* 0x1008B325: jne 0x1008b342 */
L_1008B327:
    ecx = MEM32(ebp + 0x8); /* 0x1008B327: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x8141); /* 0x1008B32A: lea eax, [ecx - 0x8141] */
    /* cmp eax, 0x6Bu */ /* 0x1008B330: cmp eax, 0x6b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008B342; /* 0x1008B333: ja 0x1008b342 */
L_1008B335:
    /* cmp ecx, 0x817Fu */ /* 0x1008B335: cmp ecx, 0x817f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x817Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B342; /* 0x1008B33B: je 0x1008b342 */
L_1008B33D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B33D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008B33F: inc eax */
    _flag_k = FK_INC;
    goto L_1008B344; /* 0x1008B340: jmp 0x1008b344 */
L_1008B342:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B342: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B344:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B344: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B351; /* 0x1008B348: je 0x1008b351 */
L_1008B34A:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B34A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B34D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B351:
    esp = ebp; /* 0x1008B351: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B353: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B354: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B355u);

L_1008B355:
    PUSH32(esp, ebp); /* 0x1008B355: push ebp */
    ebp = esp; /* 0x1008B356: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B358: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B35A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B366); /* 0x1008B35D: call 0x1008b366 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B362: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B363: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B364: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B365: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B366u);

L_1008B366:
    PUSH32(esp, ebp); /* 0x1008B366: push ebp */
    ebp = esp; /* 0x1008B367: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B369: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B36C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008B36F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B372: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B377: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1008B37A: mov eax, ecx */
    edx = MEM32(ebp + (-0xC)); /* 0x1008B37C: mov edx, dword ptr [ebp - 0xc] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B37F: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B37F: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008B382: movzx eax, al */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008B385: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B39B; /* 0x1008B38A: je 0x1008b39b */
L_1008B38C:
    eax = (uint32_t)LO8(ecx); /* 0x1008B38C: movzx eax, cl */
    /* test MEM8(eax + edx + 0x19), 8 */ /* 0x1008B38F: test byte ptr [eax + edx + 0x19], 8 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B39B; /* 0x1008B394: je 0x1008b39b */
L_1008B396:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B396: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008B398: inc eax */
    _flag_k = FK_INC;
    goto L_1008B39D; /* 0x1008B399: jmp 0x1008b39d */
L_1008B39B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B39B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B39D:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B39D: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B3AA; /* 0x1008B3A1: je 0x1008b3aa */
L_1008B3A3:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B3A3: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B3A6: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B3AA:
    esp = ebp; /* 0x1008B3AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B3AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B3AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B3AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B3AEu);

L_1008B3AE:
    PUSH32(esp, ebp); /* 0x1008B3AE: push ebp */
    ebp = esp; /* 0x1008B3AF: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B3B1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B3B3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B3BF); /* 0x1008B3B6: call 0x1008b3bf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B3BB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B3BC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B3BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B3BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B3BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B3BFu);

L_1008B3BF:
    PUSH32(esp, ebp); /* 0x1008B3BF: push ebp */
    ebp = esp; /* 0x1008B3C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B3C2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B3C5: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B3C8: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B3C9: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B3CC: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B3D1: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B3D4: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B428; /* 0x1008B3DA: jbe 0x1008b428 */
L_1008B3DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B3DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B3DE: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B3E1: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B3E4: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B3E6: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B3E6: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B3E9: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B3EC: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B3EF: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B424; /* 0x1008B3F3: je 0x1008b424 */
L_1008B3F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B3F5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B3F7: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B3F8: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B3F9: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B3FC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B3FF: push eax */
    PUSH32(esp, 2); /* 0x1008B400: push 2 */
    eax = ebp + 0x8; /* 0x1008B402: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B405: push eax */
    eax = ebp + (-0x14); /* 0x1008B406: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B409: push esi */
    PUSH32(esp, eax); /* 0x1008B40A: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B40B: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B410: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B413: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B424; /* 0x1008B415: je 0x1008b424 */
L_1008B417:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B417: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B424; /* 0x1008B41C: jne 0x1008b424 */
L_1008B41E:
    /* test MEM8(ebp + (-0x4)), 2 */ /* 0x1008B41E: test byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B436; /* 0x1008B422: jne 0x1008b436 */
L_1008B424:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B424: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B436; /* 0x1008B426: jmp 0x1008b436 */
L_1008B428:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B428: mov eax, dword ptr [ebp - 0x10] */
    esi = (uint32_t)MEM8(eax + ecx + 0x19); /* 0x1008B42B: movzx esi, byte ptr [eax + ecx + 0x19] */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1008B430: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x1008B430: shr esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1008B433: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B436:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B436: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B443; /* 0x1008B43A: je 0x1008b443 */
L_1008B43C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B43C: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B43F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B443:
    eax = esi; /* 0x1008B443: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B445: pop esi */
    esp = ebp; /* 0x1008B446: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B448: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B449: ret  */
    RECOMP_REGS_OUT();
}
