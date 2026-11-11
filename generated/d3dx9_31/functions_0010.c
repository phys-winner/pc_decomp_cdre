#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170579BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170579BDu);

L_170579BD:
    edi = edi; /* 0x170579BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170579BF: push ebp */
    ebp = esp; /* 0x170579C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170579C2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170579C5: push ebx */
    ebx = ecx; /* 0x170579C6: mov ebx, ecx */
    eax = MEM32(ebx + 0x23C); /* 0x170579C8: mov eax, dword ptr [ebx + 0x23c] */
    PUSH32(esp, esi); /* 0x170579CE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170579CF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebx + 0x218), 2 */ /* 0x170579D1: test byte ptr [ebx + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x14)) = eax; /* 0x170579D8: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x240); /* 0x170579DB: mov eax, dword ptr [ebx + 0x240] */
    MEM32(ebp + (-0x8)) = esi; /* 0x170579E1: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x170579E4: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x170579E7: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x170579EA: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17057A15; /* 0x170579ED: je 0x17057a15 */
L_170579EF:
    eax = ebp + (-0x10); /* 0x170579EF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x170579F2: push eax */
    eax = ebp + (-0x14); /* 0x170579F3: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x170579F6: push eax */
    eax = ebp + 0xC; /* 0x170579F7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170579FA: push eax */
    eax = ebx + 0x244; /* 0x170579FB: lea eax, [ebx + 0x244] */
    PUSH32(esp, eax); /* 0x17057A01: push eax */
    RECOMP_CALL(sub_17051E0D); /* 0x17057A02: call 0x17051e0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17057A07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17057A15; /* 0x17057A09: jne 0x17057a15 */
L_17057A0B:
    eax = 0x8007000Eu; /* 0x17057A0B: mov eax, 0x8007000e */
    goto L_17057B7F; /* 0x17057A10: jmp 0x17057b7f */
L_17057A15:
    PUSH32(esp, edi); /* 0x17057A15: push edi */
    edi = ebx + 0x234; /* 0x17057A16: lea edi, [ebx + 0x234] */
    /* cmp MEM32(edi), esi */ /* 0x17057A1C: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17057A5E; /* 0x17057A1E: jne 0x17057a5e */
L_17057A20:
    edx = MEM32(ebx + 0x238); /* 0x17057A20: mov edx, dword ptr [ebx + 0x238] */
    eax = MEM32(ebx + 0x230); /* 0x17057A26: mov eax, dword ptr [ebx + 0x230] */
    PUSH32(esp, esi); /* 0x17057A2C: push esi */
    PUSH32(esp, edi); /* 0x17057A2D: push edi */
    PUSH32(esp, MEM32(ebx + 0x220)); /* 0x17057A2E: push dword ptr [ebx + 0x220] */
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x17057A34: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x17057A34: shl edx, 1 */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x17057A36: push dword ptr [ebx + 4] */
    MEM32(ebx + 0x23C) = esi; /* 0x17057A39: mov dword ptr [ebx + 0x23c], esi */
    PUSH32(esp, MEM32(ebx + 0x228)); /* 0x17057A3F: push dword ptr [ebx + 0x228] */
    MEM32(ebx + 0x240) = 2; /* 0x17057A45: mov dword ptr [ebx + 0x240], 2 */
    ecx = MEM32(eax); /* 0x17057A4F: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x17057A51: push edx */
    PUSH32(esp, eax); /* 0x17057A52: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x17057A53: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17057A56: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057A58: jl 0x17057b7e */
L_17057A5E:
    eax = MEM32(ebx + 0x240); /* 0x17057A5E: mov eax, dword ptr [ebx + 0x240] */
    /* cmp MEM32(ebx + 0x23C), eax */ /* 0x17057A64: cmp dword ptr [ebx + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17057B45; /* 0x17057A6A: jne 0x17057b45 */
L_17057A70:
    PUSH32(esp, esi); /* 0x17057A70: push esi */
    edx = ebp + (-0x4); /* 0x17057A71: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x17057A74: push edx */
    edx = MEM32(ebx + 0x238); /* 0x17057A75: mov edx, dword ptr [ebx + 0x238] */
    PUSH32(esp, MEM32(ebx + 0x220)); /* 0x17057A7B: push dword ptr [ebx + 0x220] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17057A81: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x17057A83: push dword ptr [ebx + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x17057A86: mov dword ptr [ebp + 0xc], eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x17057A89: imul edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x228)); /* 0x17057A8D: push dword ptr [ebx + 0x228] */
    eax = MEM32(ebx + 0x230); /* 0x17057A93: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x17057A99: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x17057A9B: push edx */
    PUSH32(esp, eax); /* 0x17057A9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x17057A9D: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17057AA0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057AA2: jl 0x17057b7e */
L_17057AA8:
    eax = MEM32(edi); /* 0x17057AA8: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x17057AAA: mov ecx, dword ptr [eax] */
    edi = 0x800u; /* 0x17057AAC: mov edi, 0x800 */
    PUSH32(esp, edi); /* 0x17057AB1: push edi */
    edx = ebp + (-0x8); /* 0x17057AB2: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x17057AB5: push edx */
    PUSH32(esp, esi); /* 0x17057AB6: push esi */
    PUSH32(esp, esi); /* 0x17057AB7: push esi */
    PUSH32(esp, eax); /* 0x17057AB8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17057AB9: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17057ABC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057ABE: jl 0x17057b7e */
L_17057AC4:
    eax = MEM32(ebp + (-0x4)); /* 0x17057AC4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17057AC7: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x17057AC9: push edi */
    edx = ebp + (-0xC); /* 0x17057ACA: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x17057ACD: push edx */
    PUSH32(esp, esi); /* 0x17057ACE: push esi */
    PUSH32(esp, esi); /* 0x17057ACF: push esi */
    PUSH32(esp, eax); /* 0x17057AD0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17057AD1: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17057AD4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057AD6: jl 0x17057b7e */
L_17057ADC:
    ecx = MEM32(ebx + 0x23C); /* 0x17057ADC: mov ecx, dword ptr [ebx + 0x23c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x238)); /* 0x17057AE2: imul ecx, dword ptr [ebx + 0x238] */
    esi = MEM32(ebp + (-0x8)); /* 0x17057AE9: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0xC)); /* 0x17057AEC: mov edi, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x17057AEF: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17057AF1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17057AF1: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17057AF4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17057AF6: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17057AF8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17057AFB: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + (-0x4)); /* 0x17057AFD: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17057B00: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17057B02: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17057B03: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17057B06: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x17057B08: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057B0A: jl 0x17057b7e */
L_17057B0C:
    esi = ebx + 0x234; /* 0x17057B0C: lea esi, [ebx + 0x234] */
    eax = MEM32(esi); /* 0x17057B12: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = edi; /* 0x17057B14: mov dword ptr [ebp - 0xc], edi */
    ecx = MEM32(eax); /* 0x17057B17: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17057B19: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17057B1A: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17057B1D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057B1F: jl 0x17057b7e */
L_17057B21:
    eax = MEM32(esi); /* 0x17057B21: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x17057B23: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x17057B25: mov dword ptr [ebp - 8], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17057B32; /* 0x17057B28: je 0x17057b32 */
L_17057B2A:
    ecx = MEM32(eax); /* 0x17057B2A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17057B2C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17057B2D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = edi; /* 0x17057B30: mov dword ptr [esi], edi */
L_17057B32:
    eax = MEM32(ebp + (-0x4)); /* 0x17057B32: mov eax, dword ptr [ebp - 4] */
    MEM32(esi) = eax; /* 0x17057B35: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x17057B37: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x17057B3A: mov dword ptr [ebp - 4], edi */
    MEM32(ebx + 0x240) = eax; /* 0x17057B3D: mov dword ptr [ebx + 0x240], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17057B43: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17057B45:
    PUSH32(esp, esi); /* 0x17057B45: push esi */
    eax = ebp + (-0x8); /* 0x17057B46: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x17057B49: push eax */
    ecx = ebx; /* 0x17057B4A: mov ecx, ebx */
    RECOMP_CALL(sub_1704FE30); /* 0x17057B4C: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17057B51: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17057B7E; /* 0x17057B53: jl 0x17057b7e */
L_17057B55:
    ecx = MEM32(ebx + 0x238); /* 0x17057B55: mov ecx, dword ptr [ebx + 0x238] */
    edi = MEM32(ebx + 0x23C); /* 0x17057B5B: mov edi, dword ptr [ebx + 0x23c] */
    esi = MEM32(ebp + 0x8); /* 0x17057B61: mov esi, dword ptr [ebp + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x17057B64: imul edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8)); /* 0x17057B67: add edi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x17057B6A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17057B6C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17057B6C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17057B6F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17057B71: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17057B73: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17057B76: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x23C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x23C) = MEM32(ebx + 0x23C) + 1; /* 0x17057B78: inc dword ptr [ebx + 0x23c] */
    _flag_k = FK_INC;
L_17057B7E:
    edi = POP32_VAL(esp); /* 0x17057B7E: pop edi */
L_17057B7F:
    esi = POP32_VAL(esp); /* 0x17057B7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x17057B80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17057B81: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17057B82: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17057B8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17057B8Au);

L_17057B8A:
    edi = edi; /* 0x17057B8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17057B8C: push ebp */
    ebp = esp; /* 0x17057B8D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x100u; /* 0x17057B8F: sub esp, 0x100 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x17057B95: mov edx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x17057B98: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17057B9A: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x17057B9D: push ebx */
    ebx = ecx; /* 0x17057B9E: mov ebx, ecx */
    fp_push(0.0); /* 0x17057BA0: fldz  */
    ecx = MEM32(ebx + 0x34C); /* 0x17057BA2: mov ecx, dword ptr [ebx + 0x34c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17057BA8: fstp dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x17057BAB: push esi */
    fp_push(0.0); /* 0x17057BAC: fldz  */
    esi = MEM32(ebp + 0x8); /* 0x17057BAE: mov esi, dword ptr [ebp + 8] */
    esi = esi + esi * 2; /* 0x17057BB1: lea esi, [esi + esi*2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17057BB4: fstp dword ptr [ebp - 0x18] */
    eax = esi + edx; /* 0x17057BB7: lea eax, [esi + edx] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17057BBA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17057BBA: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x17057BBD: mov ecx, dword ptr [eax + ecx] */
    MEM32(ebp + (-0x8C)) = ecx; /* 0x17057BC0: mov dword ptr [ebp - 0x8c], ecx */
    ecx = MEM32(ebx + 0x31C); /* 0x17057BC6: mov ecx, dword ptr [ebx + 0x31c] */
    ecx = MEM32(eax + ecx); /* 0x17057BCC: mov ecx, dword ptr [eax + ecx] */
    MEM32(ebp + (-0x84)) = ecx; /* 0x17057BCF: mov dword ptr [ebp - 0x84], ecx */
    ecx = MEM32(ebx + 0x318); /* 0x17057BD5: mov ecx, dword ptr [ebx + 0x318] */
    eax = MEM32(ecx + eax); /* 0x17057BDB: mov eax, dword ptr [ecx + eax] */
    MEM32(ebp + (-0x34)) = eax; /* 0x17057BDE: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, edi); /* 0x17057BE1: push edi */
    eax = edx + 0x1; /* 0x17057BE2: lea eax, [edx + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17057BE5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x17057BE7: push 3 */
    edi = POP32_VAL(esp); /* 0x17057BE9: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x17057BEA: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx + 0xC8); /* 0x17057BEC: mov eax, dword ptr [ebx + 0xc8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x17057BF2: add edx, esi */
    _flag_k = FK_ADD;
    edi = MEM32(ecx + edx * 4); /* 0x17057BF4: mov edi, dword ptr [ecx + edx*4] */
    ecx = MEM32(ebx + 0x90); /* 0x17057BF7: mov ecx, dword ptr [ebx + 0x90] */
    edx = (uint32_t)MEM16(ecx + 0x2); /* 0x17057BFD: movzx edx, word ptr [ecx + 2] */
    esi = MEM32(ebp + 0x10); /* 0x17057C01: mov esi, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x17057C04: mov ecx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17057C06: imul eax, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x34))); /* 0x17057C09: imul ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x17057C0D: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17057C0F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17057C11: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17057C13: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x454), 0 */ /* 0x17057C15: cmp dword ptr [ebx + 0x454], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x454)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x17057C1C: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x88)) = eax; /* 0x17057C1F: mov dword ptr [ebp - 0x88], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17057C44; /* 0x17057C25: je 0x17057c44 */
L_17057C27:
    eax = MEM32(ebx + 0x9C); /* 0x17057C27: mov eax, dword ptr [ebx + 0x9c] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x17057C2D: movzx ecx, word ptr [eax + 2] */
    eax = MEM32(ebx + 0xC8); /* 0x17057C31: mov eax, dword ptr [ebx + 0xc8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x34))); /* 0x17057C37: imul eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17057C3B: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17057C3D: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x17057C3F: mov dword ptr [ebp - 0x28], eax */
    goto L_17057C48; /* 0x17057C42: jmp 0x17057c48 */
L_17057C44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x17057C44: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17057C48:
    PUSH32(esp, 0); /* 0x17057C48: push 0 */
    eax = ebx + 0xCC; /* 0x17057C4A: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x17057C50: push eax */
    PUSH32(esp, edi); /* 0x17057C51: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17057C52: push dword ptr [ebp + 8] */
    ecx = ebp + (-0xC0); /* 0x17057C55: lea ecx, [ebp - 0xc0] */
    RECOMP_CALL(sub_17050C3A); /* 0x17057C5B: call 0x17050c3a */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17057C60: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x17057C62: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x17057C66: fstp qword ptr [ebp - 0x54] */
    /* cmp MEM32(ebp + (-0xB8)), 0xFFFFFFFFu */ /* 0x17057C69: cmp dword ptr [ebp - 0xb8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB8))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x17057C70: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17057C72: fstp dword ptr [ebp - 0x2c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058175; /* 0x17057C75: je 0x17058175 */
L_17057C7B:
    goto L_17057C80; /* 0x17057C7B: jmp 0x17057c80 */
L_17057C7D:
    esi = MEM32(ebp + 0x10); /* 0x17057C7D: mov esi, dword ptr [ebp + 0x10] */
L_17057C80:
    ecx = ebp + (-0xC0); /* 0x17057C80: lea ecx, [ebp - 0xc0] */
    RECOMP_CALL(sub_170565B5); /* 0x17057C86: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x17057C8B: mov ecx, dword ptr [ebx + 0x318] */
    edi = MEM32(ebx + 0xC8); /* 0x17057C91: mov edi, dword ptr [ebx + 0xc8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x17057C97: mov dword ptr [ebp - 0x30], eax */
    eax = eax + eax * 2; /* 0x17057C9A: lea eax, [eax + eax*2] */
    edx = ecx + eax * 4; /* 0x17057C9D: lea edx, [ecx + eax*4] */
    eax = MEM32(ebx + 0x90); /* 0x17057CA0: mov eax, dword ptr [ebx + 0x90] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x17057CA6: movzx ecx, word ptr [eax + 2] */
    eax = MEM32(edx + 0x4); /* 0x17057CAA: mov eax, dword ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17057CAD: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17057CB0: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17057CB2: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(edx); /* 0x17057CB5: mov ecx, dword ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x17057CB7: imul ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x14)); /* 0x17057CBA: add ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17057CBD: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17057CBF: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = edx; /* 0x17057CC1: mov dword ptr [ebp - 0x5c], edx */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17057CC4: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17057CC6: fsub dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17057CC8: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17057CCB: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17057CCE: fld dword ptr [ecx + 8] */
    ecx = edi; /* 0x17057CD1: mov ecx, edi */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17057CD3: fsub dword ptr [eax + 8] */
    eax = MEM32(ebx + 0x90); /* 0x17057CD6: mov eax, dword ptr [ebx + 0x90] */
    edi = (uint32_t)MEM16(eax + 0x2); /* 0x17057CDC: movzx edi, word ptr [eax + 2] */
    eax = MEM32(edx + 0x8); /* 0x17057CE0: mov eax, dword ptr [edx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x17057CE3: imul eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx)); /* 0x17057CE6: imul ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17057CE9: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17057CEB: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x17057CED: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17057CEF: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edi; /* 0x17057CF1: mov dword ptr [ebp - 0x14], edi */
    esi = ebp + (-0xA4); /* 0x17057CF4: lea esi, [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17057CFA: fld dword ptr [ecx] */
    edi = ebp + (-0xC); /* 0x17057CFC: lea edi, [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17057CFF: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17057D01: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17057D04: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17057D07: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17057D0A: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17057D0D: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17057D10: fsub dword ptr [eax + 8] */
    fp_push(_st[0]); /* 0x17057D13: fld st(0) */
    _st[0] *= _st[3]; /* 0x17057D15: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17057D17: fld dword ptr [ebp - 0x7c] */
    _st[0] *= _st[3]; /* 0x17057D1A: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057D1C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17057D1E: fstp dword ptr [ebp - 0xa4] */
    fp_push(_st[1]); /* 0x17057D24: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17057D26: fmul dword ptr [ebp - 0x80] */
    fp_push(_st[1]); /* 0x17057D29: fld st(1) */
    _st[0] *= _st[5]; /* 0x17057D2B: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057D2D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x17057D2F: fstp dword ptr [ebp - 0xa0] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057D35: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057D37: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17057D39: fld dword ptr [ebp - 0x7c] */
    _st[0] *= _st[2]; /* 0x17057D3C: fmul st(2) */
    fp_push(_st[1]); /* 0x17057D3E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17057D40: fmul dword ptr [ebp - 0x80] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057D43: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x17057D45: fstp dword ptr [ebp - 0x9c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057D4B: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057D4C: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057D4E: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057D4F: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057D51: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17057D52: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17057D55: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17057D58: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17057D5B: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057D5E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17057D60: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17057D63: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057D66: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17057D68: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17005950)); /* 0x17057D6A: fcom qword ptr [0x17005950] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17057D70: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17057D72: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17057D93; /* 0x17057D75: jne 0x17057d93 */
L_17057D77:
    fp_push(1.0); /* 0x17057D77: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x17057D79: fdivrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17057D7B: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x17057D7E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17057D80: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17057D83: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17057D86: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17057D88: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17057D8B: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17057D8E: fstp dword ptr [ebp - 4] */
    goto L_17057D95; /* 0x17057D91: jmp 0x17057d95 */
L_17057D93:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057D93: fstp st(0) */
L_17057D95:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17057D95: fld dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x30)); /* 0x17057D98: mov eax, dword ptr [ebp - 0x30] */
    /* cmp eax, MEM32(ebp + (-0x84)) */ /* 0x17057D9B: cmp eax, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x84)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17057DA1: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17057DA4: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17057DA7: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17057DAA: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17057DAD: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17057DB0: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17057DB3: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17057DB6: fstp dword ptr [ebp - 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170580FB; /* 0x17057DB9: je 0x170580fb */
L_17057DBF:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17057DBF: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170580FB; /* 0x17057DC2: je 0x170580fb */
L_17057DC8:
    esi = MEM32(edx); /* 0x17057DC8: mov esi, dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17057DCA: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebx + 0xC8); /* 0x17057DCD: mov eax, dword ptr [ebx + 0xc8] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x17057DD3: fadd dword ptr [0x17001424] */
    ecx = MEM32(ebx + 0x90); /* 0x17057DD9: mov ecx, dword ptr [ebx + 0x90] */
    ecx = (uint32_t)MEM16(ecx + 0x2); /* 0x17057DDF: movzx ecx, word ptr [ecx + 2] */
    edi = esi; /* 0x17057DE3: mov edi, esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17057DE5: fstp dword ptr [ebp - 0x2c] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x17057DE8: imul edi, eax */
    eax = MEM32(ebp + 0x10); /* 0x17057DEB: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x17057DEE: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17057DF0: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(edx + 0x8); /* 0x17057DF2: mov edi, dword ptr [edx + 8] */
    edx = MEM32(edx + 0x4); /* 0x17057DF5: mov edx, dword ptr [edx + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17057DF8: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17057DFB: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edx; /* 0x17057DFE: mov dword ptr [ebp - 0x14], edx */
    edx = ebp + (-0x48); /* 0x17057E01: lea edx, [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17057E04: fld dword ptr [ecx + 8] */
    PUSH32(esp, edx); /* 0x17057E07: push edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17057E08: fmul dword ptr [ebp - 4] */
    edx = ebp + (-0x58); /* 0x17057E0B: lea edx, [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17057E0E: fld dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x17057E11: push edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17057E12: fmul dword ptr [ebp - 8] */
    edx = ebp + (-0x60); /* 0x17057E15: lea edx, [ebp - 0x60] */
    PUSH32(esp, edx); /* 0x17057E18: push edx */
    edx = ebp + (-0xC); /* 0x17057E19: lea edx, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057E1C: faddp st(1) */
    PUSH32(esp, edx); /* 0x17057E1E: push edx */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17057E1F: fld dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17057E21: push ecx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17057E22: fmul dword ptr [ebp - 0xc] */
    ecx = edi; /* 0x17057E25: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0xC8)); /* 0x17057E27: imul ecx, dword ptr [ebx + 0xc8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057E2E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17057E30: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17057E33: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057E35: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17057E37: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17057E3A: fmul dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x17057E3D: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x17057E40: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x17057E43: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057E46: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17057E48: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17057E4B: fmul dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17057E4E: push ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x17057E4F: mov ecx, dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17057E52: fsubp st(1) */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0xC8)); /* 0x17057E54: imul ecx, dword ptr [ebx + 0xc8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x17057E5B: fstp qword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x17057E5E: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x17057E61: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x17057E64: push ecx */
    PUSH32(esp, eax); /* 0x17057E65: push eax */
    RECOMP_CALL(sub_1704DF84); /* 0x17057E66: call 0x1704df84 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx + 0x3D0)); /* 0x17057E6B: fld dword ptr [ebx + 0x3d0] */
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x17057E71: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= *(double*)ADDR(ebp + (-0x68)); /* 0x17057E75: fmul qword ptr [ebp - 0x68] */
    _st[0] *= *(double*)ADDR(ebp + (-0x68)); /* 0x17057E78: fmul qword ptr [ebp - 0x68] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17057E7B: fstp qword ptr [ebp - 0x4c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17057F1E; /* 0x17057E7E: je 0x17057f1e */
L_17057E84:
    ecx = MEM32(ebx + 0xC8); /* 0x17057E84: mov ecx, dword ptr [ebx + 0xc8] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17057E8A: fld dword ptr [ebp - 0x58] */
    eax = MEM32(ebx + 0x9C); /* 0x17057E8D: mov eax, dword ptr [ebx + 0x9c] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x17057E93: imul edi, ecx */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x17057E96: imul esi, ecx */
    edx = (uint32_t)MEM16(eax + 0x2); /* 0x17057E99: movzx edx, word ptr [eax + 2] */
    eax = MEM32(ebp + (-0x14)); /* 0x17057E9D: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x17057EA0: imul eax, ecx */
    PUSH32(esp, ecx); /* 0x17057EA3: push ecx */
    PUSH32(esp, ecx); /* 0x17057EA4: push ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17057EA5: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x17057EA7: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17057EAA: fstp dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17057EAE: add eax, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17057EB0: fld dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x17057EB3: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17057EB6: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x17057EB9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17057EBA: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x17057EBC: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17057EBF: push eax */
    PUSH32(esp, esi); /* 0x17057EC0: push esi */
    eax = ebp + (-0x98); /* 0x17057EC1: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x17057EC7: push eax */
    RECOMP_CALL(sub_17040DAE); /* 0x17057EC8: call 0x17040dae */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x28)); /* 0x17057ECD: mov esi, dword ptr [ebp - 0x28] */
    edi = ebp + (-0x74); /* 0x17057ED0: lea edi, [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057ED3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057ED4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17057ED5: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17057ED6: fld dword ptr [ebp - 0x74] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x17057ED9: fsub dword ptr [ebp - 0x98] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x17057EDF: fst dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17057EE2: fld dword ptr [ebp - 0x70] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x17057EE5: fsub dword ptr [ebp - 0x94] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17057EEB: fst dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x17057EEE: fld dword ptr [ebp - 0x6c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x90)); /* 0x17057EF1: fsub dword ptr [ebp - 0x90] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17057EF7: fst dword ptr [ebp - 0x6c] */
    fp_push(_st[2]); /* 0x17057EFA: fld st(2) */
    _st[0] *= _st[3]; /* 0x17057EFC: fmul st(3) */
    fp_push(_st[2]); /* 0x17057EFE: fld st(2) */
    _st[0] *= _st[3]; /* 0x17057F00: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057F02: faddp st(1) */
    fp_push(_st[1]); /* 0x17057F04: fld st(1) */
    _st[0] *= _st[2]; /* 0x17057F06: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17057F08: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x3D8)); /* 0x17057F0A: fld dword ptr [ebx + 0x3d8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17057F10: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x17057F12: fadd qword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17057F15: fstp qword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057F18: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057F1A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057F1C: fstp st(0) */
L_17057F1E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17057F1E: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x660), 0 */ /* 0x17057F22: cmp dword ptr [ebx + 0x660], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x660)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17058053; /* 0x17057F29: jbe 0x17058053 */
L_17057F2F:
    esi = ebx + 0x458; /* 0x17057F2F: lea esi, [ebx + 0x458] */
L_17057F35:
    PUSH32(esp, 4); /* 0x17057F35: push 4 */
    eax = ebp + (-0xD0); /* 0x17057F37: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x17057F3D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x17057F3E: push dword ptr [ebp - 0x34] */
    ecx = ebx + 0x8; /* 0x17057F41: lea ecx, [ebx + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x17057F44: push dword ptr [esi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17057F46: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x5C)); /* 0x17057F4B: mov edi, dword ptr [ebp - 0x5c] */
    PUSH32(esp, 4); /* 0x17057F4E: push 4 */
    eax = ebp + (-0xE0); /* 0x17057F50: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x17057F56: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x17057F57: push dword ptr [edi] */
    ecx = ebx + 0x8; /* 0x17057F59: lea ecx, [ebx + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x17057F5C: push dword ptr [esi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17057F5E: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x17057F63: push 4 */
    eax = ebp + (-0xF0); /* 0x17057F65: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x17057F6B: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x17057F6C: push dword ptr [edi + 4] */
    ecx = ebx + 0x8; /* 0x17057F6F: lea ecx, [ebx + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x17057F72: push dword ptr [esi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17057F74: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x17057F79: push 4 */
    eax = ebp + (-0x100); /* 0x17057F7B: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x17057F81: push eax */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x17057F82: push dword ptr [edi + 8] */
    ecx = ebx + 0x8; /* 0x17057F85: lea ecx, [ebx + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x17057F88: push dword ptr [esi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17057F8A: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17057F8F: fld dword ptr [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x17057F92: push ecx */
    PUSH32(esp, ecx); /* 0x17057F93: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17057F94: fstp dword ptr [esp + 4] */
    eax = ebp + (-0x100); /* 0x17057F98: lea eax, [ebp - 0x100] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17057F9E: fld dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17057FA1: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17057FA4: push eax */
    eax = ebp + (-0xF0); /* 0x17057FA5: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x17057FAB: push eax */
    eax = ebp + (-0xE0); /* 0x17057FAC: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x17057FB2: push eax */
    eax = ebp + (-0x44); /* 0x17057FB3: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x17057FB6: push eax */
    RECOMP_CALL(sub_1704142A); /* 0x17057FB7: call 0x1704142a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x17057FBC: fld dword ptr [0x170018d8] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17057FC2: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x17057FC5: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17057FC7: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[2]; /* 0x17057FCA: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17057FCC: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17057FCF: fld dword ptr [ebp - 0x3c] */
    _st[0] *= _st[2]; /* 0x17057FD2: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17057FD4: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17057FD7: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[2]; /* 0x17057FDA: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17057FDC: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0xD0))); /* 0x17057FDF: fld dword ptr [ebp - 0xd0] */
    _st[0] += _st[1]; /* 0x17057FE5: fadd st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17057FE7: fst dword ptr [ebp - 0x44] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17057FEA: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17057FEC: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x17057FEE: fld dword ptr [ebp - 0xcc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17057FF4: fadd dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17057FF7: fst dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x17057FFA: fld dword ptr [ebp - 0xc8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17058000: fadd dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17058003: fst dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC4))); /* 0x17058006: fld dword ptr [ebp - 0xc4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1705800C: fadd dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1705800F: fst dword ptr [ebp - 0x38] */
    fp_push(_st[3]); /* 0x17058012: fld st(3) */
    _st[0] *= _st[4]; /* 0x17058014: fmul st(4) */
    fp_push(_st[1]); /* 0x17058016: fld st(1) */
    _st[0] *= _st[2]; /* 0x17058018: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1705801A: faddp st(1) */
    fp_push(_st[2]); /* 0x1705801C: fld st(2) */
    _st[0] *= _st[3]; /* 0x1705801E: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058020: faddp st(1) */
    fp_push(_st[3]); /* 0x17058022: fld st(3) */
    _st[0] *= _st[4]; /* 0x17058024: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058026: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x104)); /* 0x17058028: fld dword ptr [esi + 0x104] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1705802E: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x17058031: mov eax, dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17058034: fmulp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17058036: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x660) */ /* 0x17058039: cmp eax, dword ptr [ebx + 0x660] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x660));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x1705803F: fadd qword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17058042: fstp qword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058045: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058047: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058049: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705804B: fstp st(0) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17057F35; /* 0x1705804D: jb 0x17057f35 */
L_17058053:
    /* cmp MEM8(ebp + (-0xA8)), 0 */ /* 0x17058053: cmp byte ptr [ebp - 0xa8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xA8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ebp + (-0xB4)); /* 0x1705805A: mov esi, dword ptr [ebp - 0xb4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058066; /* 0x17058060: je 0x17058066 */
L_17058062:
    edx = esi; /* 0x17058062: mov edx, esi */
    goto L_17058070; /* 0x17058064: jmp 0x17058070 */
L_17058066:
    PUSH32(esp, 3); /* 0x17058066: push 3 */
    eax = esi + 0x1; /* 0x17058068: lea eax, [esi + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705806B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705806D: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1705806E: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_17058070:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17058070: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x17058073: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17058075: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x17058078: push edx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17058079: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_17052786); /* 0x1705807C: call 0x17052786 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x17058081: fstp qword ptr [ebp - 0x68] */
    /* cmp MEM8(ebp + (-0xA8)), 0 */ /* 0x17058084: cmp byte ptr [ebp - 0xa8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xA8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058091; /* 0x1705808B: je 0x17058091 */
L_1705808D:
    edx = esi; /* 0x1705808D: mov edx, esi */
    goto L_1705809B; /* 0x1705808F: jmp 0x1705809b */
L_17058091:
    PUSH32(esp, 3); /* 0x17058091: push 3 */
    eax = esi + 0x1; /* 0x17058093: lea eax, [esi + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17058096: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17058098: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17058099: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1705809B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705809B: push dword ptr [ebp + 0x10] */
    eax = edx + 0x2; /* 0x1705809E: lea eax, [edx + 2] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170580A1: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170580A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x170580A6: push 3 */
    ecx = POP32_VAL(esp); /* 0x170580A8: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x170580A9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = ebx; /* 0x170580AB: mov ecx, ebx */
    PUSH32(esp, edx); /* 0x170580AD: push edx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x170580AE: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_17052786); /* 0x170580B1: call 0x17052786 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x68)); /* 0x170580B6: fadd qword ptr [ebp - 0x68] */
    /* cmp MEM8(ebp + (-0xA8)), 0 */ /* 0x170580B9: cmp byte ptr [ebp - 0xa8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xA8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3D4); /* 0x170580C0: fmul dword ptr [ebx + 0x3d4] */
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x170580C6: fadd qword ptr [ebp - 0x4c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170580CF; /* 0x170580C9: je 0x170580cf */
L_170580CB:
    edx = esi; /* 0x170580CB: mov edx, esi */
    goto L_170580D9; /* 0x170580CD: jmp 0x170580d9 */
L_170580CF:
    PUSH32(esp, 3); /* 0x170580CF: push 3 */
    eax = esi + 0x1; /* 0x170580D1: lea eax, [esi + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170580D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170580D6: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x170580D7: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_170580D9:
    eax = MEM32(ebp + (-0x5C)); /* 0x170580D9: mov eax, dword ptr [ebp - 0x5c] */
    ecx = MEM32(ebx + 0x310); /* 0x170580DC: mov ecx, dword ptr [ebx + 0x310] */
    eax = MEM32(eax + edx * 4); /* 0x170580E2: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(ecx + eax * 4); /* 0x170580E5: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(ebx + 0x448); /* 0x170580E8: mov ecx, dword ptr [ebx + 0x448] */
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x170580EE: fld dword ptr [ecx + eax*4] */
    _st[0] *= _st[1]; /* 0x170580F1: fmul st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x54)); /* 0x170580F3: fadd qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x170580F6: fstp qword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170580F9: fstp st(0) */
L_170580FB:
    /* cmp MEM32(ebp + (-0xB8)), 0xFFFFFFFFu */ /* 0x170580FB: cmp dword ptr [ebp - 0xb8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB8))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17057C7D; /* 0x17058102: jne 0x17057c7d */
L_17058108:
    esi = MEM32(ebp + (-0x24)); /* 0x17058108: mov esi, dword ptr [ebp - 0x24] */
    /* test esi, esi */ /* 0x1705810B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058175; /* 0x1705810D: jbe 0x17058175 */
L_1705810F:
    eax = ebp + (-0x20); /* 0x1705810F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x17058112: push eax */
    PUSH32(esp, eax); /* 0x17058113: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x17058114: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x17058119: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1705811B: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1705811E: fld dword ptr [eax + 8] */
    MEM32(ebp + 0x10) = esi; /* 0x17058121: mov dword ptr [ebp + 0x10], esi */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17058124: fmul dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17058127: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1705812A: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1705812D: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1705812F: fld dword ptr [eax] */
    eax = MEM32(ebp + (-0x88)); /* 0x17058131: mov eax, dword ptr [ebp - 0x88] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17058137: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1705813A: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1705813C: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1705813E: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058141: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17058143: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17058146: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058149: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1705814B: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1705814E: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058151: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17058153: fld dword ptr [ebp - 0x2c] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x17058156: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17058161; /* 0x17058159: jge 0x17058161 */
L_1705815B:
    _st[0] += *(double*)ADDR(0x17001F50); /* 0x1705815B: fadd qword ptr [0x17001f50] */
L_17058161:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17058161: fdivp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3D0); /* 0x17058163: fmul dword ptr [ebx + 0x3d0] */
    _st[0] *= _st[1]; /* 0x17058169: fmul st(1) */
    _st[0] *= _st[1]; /* 0x1705816B: fmul st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x54)); /* 0x1705816D: fadd qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x17058170: fstp qword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058173: fstp st(0) */
L_17058175:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x17058175: fld qword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x8C)); /* 0x17058178: mov eax, dword ptr [ebp - 0x8c] */
    edi = POP32_VAL(esp); /* 0x1705817E: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1705817F: fstp dword ptr [eax + 8] */
    esi = POP32_VAL(esp); /* 0x17058182: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058183: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17058184: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17058185: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705818D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705818Du);

L_1705818D:
    edi = edi; /* 0x1705818D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705818F: push ebp */
    ebp = esp; /* 0x17058190: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17058192: push ecx */
    PUSH32(esp, ebx); /* 0x17058193: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17058194: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17058197: push esi */
    PUSH32(esp, edi); /* 0x17058198: push edi */
    edi = ecx; /* 0x17058199: mov edi, ecx */
    eax = MEM32(edi); /* 0x1705819B: mov eax, dword ptr [edi] */
    eax = MEM32(eax + ebx * 4); /* 0x1705819D: mov eax, dword ptr [eax + ebx*4] */
    eax = MEM32(eax + 0x8); /* 0x170581A0: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x170581A3: mov dword ptr [ebp + 8], eax */
L_170581A6:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x170581A6: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170581C7; /* 0x170581AA: je 0x170581c7 */
L_170581AC:
    esi = ebx + (-0x1); /* 0x170581AC: lea esi, [ebx - 1] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x170581AF: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x170581AF: shr esi, 1 */
    /* test ebx, ebx */ /* 0x170581B1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170581C7; /* 0x170581B3: jbe 0x170581c7 */
L_170581B5:
    eax = MEM32(edi); /* 0x170581B5: mov eax, dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170581B7: fld dword ptr [ebp + 8] */
    eax = MEM32(eax + esi * 4); /* 0x170581BA: mov eax, dword ptr [eax + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + 0x8)); /* 0x170581BD: fcomp dword ptr [eax + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170581C0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170581C2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17058229; /* 0x170581C5: jnp 0x17058229 */
L_170581C7:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x170581C7: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170581F2; /* 0x170581CB: je 0x170581f2 */
L_170581CD:
    edx = MEM32(edi + 0x4); /* 0x170581CD: mov edx, dword ptr [edi + 4] */
    ecx = ebx + ebx + 0x1; /* 0x170581D0: lea ecx, [ebx + ebx + 1] */
    /* cmp ecx, edx */ /* 0x170581D4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170581F2; /* 0x170581D6: jae 0x170581f2 */
L_170581D8:
    eax = MEM32(edi); /* 0x170581D8: mov eax, dword ptr [edi] */
    esi = MEM32(eax + ecx * 4); /* 0x170581DA: mov esi, dword ptr [eax + ecx*4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x170581DD: fld dword ptr [esi + 8] */
    esi = ebx + ebx + 0x2; /* 0x170581E0: lea esi, [ebx + ebx + 2] */
    /* cmp esi, edx */ /* 0x170581E4: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170581F9; /* 0x170581E6: jb 0x170581f9 */
L_170581E8:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x170581E8: fcomp dword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170581EB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170581ED: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17058216; /* 0x170581F0: jnp 0x17058216 */
L_170581F2:
    edi = POP32_VAL(esp); /* 0x170581F2: pop edi */
    esi = POP32_VAL(esp); /* 0x170581F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x170581F4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170581F5: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170581F6: ret 0xc */
L_170581F9:
    eax = MEM32(eax + esi * 4); /* 0x170581F9: mov eax, dword ptr [eax + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x170581FC: fcom dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x170581FF: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17058202: mov dword ptr [ebp - 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17058205: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058207: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1705821A; /* 0x1705820A: jp 0x1705821a */
L_1705820C:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4))); /* 0x1705820C: fcomp dword ptr [ebp - 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1705820F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058211: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1705821C; /* 0x17058214: jp 0x1705821c */
L_17058216:
    esi = ecx; /* 0x17058216: mov esi, ecx */
    goto L_17058229; /* 0x17058218: jmp 0x17058229 */
L_1705821A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705821A: fstp st(0) */
L_1705821C:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1705821C: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x1705821F: fcomp dword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17058222: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058224: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170581F2; /* 0x17058227: jp 0x170581f2 */
L_17058229:
    PUSH32(esp, esi); /* 0x17058229: push esi */
    PUSH32(esp, ebx); /* 0x1705822A: push ebx */
    ecx = edi; /* 0x1705822B: mov ecx, edi */
    RECOMP_CALL(sub_17051DA0); /* 0x1705822D: call 0x17051da0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x17058232: mov ebx, esi */
    RECOMP_BACKEDGE();
    goto L_170581A6; /* 0x17058234: jmp 0x170581a6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1705823E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705823Eu);

L_1705823E:
    edi = edi; /* 0x1705823E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058240: push ebp */
    ebp = esp; /* 0x17058241: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x100u; /* 0x17058243: sub esp, 0x100 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x17058249: movzx eax, word ptr [ebp + 8] */
    fp_push(0.0); /* 0x1705824D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1705824F: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x17058252: push ebx */
    PUSH32(esp, esi); /* 0x17058253: push esi */
    fp_push(0.0); /* 0x17058254: fldz  */
    ebx = ecx; /* 0x17058256: mov ebx, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17058258: fstp dword ptr [ebp - 0x1c] */
    edx = MEM32(ebx + 0x34C); /* 0x1705825B: mov edx, dword ptr [ebx + 0x34c] */
    fp_push(0.0); /* 0x17058261: fldz  */
    esi = MEM32(ebx + 0x318); /* 0x17058263: mov esi, dword ptr [ebx + 0x318] */
    PUSH32(esp, edi); /* 0x17058269: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1705826A: fstp dword ptr [ebp - 0x18] */
    edi = eax + eax * 2; /* 0x1705826D: lea edi, [eax + eax*2] */
    eax = (uint32_t)MEM16(ebp + 0xC); /* 0x17058270: movzx eax, word ptr [ebp + 0xc] */
    ecx = eax + edi; /* 0x17058274: lea ecx, [eax + edi] */
    edx = MEM32(edx + ecx * 4); /* 0x17058277: mov edx, dword ptr [edx + ecx*4] */
    MEM32(ebp + (-0x78)) = edx; /* 0x1705827A: mov dword ptr [ebp - 0x78], edx */
    edx = MEM32(ebx + 0x31C); /* 0x1705827D: mov edx, dword ptr [ebx + 0x31c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x17058283: add ecx, ecx */
    _flag_k = FK_ADD;
    SET_LO16(edx, MEM16(ecx + edx)); /* 0x17058285: mov dx, word ptr [ecx + edx] */
    SET_LO16(ecx, MEM16(esi + ecx)); /* 0x17058289: mov cx, word ptr [esi + ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705828D: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x90)) = (uint16_t)(LO16(edx)); /* 0x1705828E: mov word ptr [ebp - 0x90], dx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17058295: cdq  */
    MEM16(ebp + 0xC) = (uint16_t)(LO16(ecx)); /* 0x17058296: mov word ptr [ebp + 0xc], cx */
    PUSH32(esp, 3); /* 0x1705829A: push 3 */
    ecx = POP32_VAL(esp); /* 0x1705829C: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1705829D: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx + 0x90); /* 0x1705829F: mov eax, dword ptr [ebx + 0x90] */
    ecx = MEM32(ebx + 0xC8); /* 0x170582A5: mov ecx, dword ptr [ebx + 0xc8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170582AB: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM16(ebp + 0xC); /* 0x170582AD: movzx edi, word ptr [ebp + 0xc] */
    SET_LO16(esi, MEM16(esi + edx * 2)); /* 0x170582B1: mov si, word ptr [esi + edx*2] */
    edx = (uint32_t)MEM16(eax + 0x2); /* 0x170582B5: movzx edx, word ptr [eax + 2] */
    eax = ecx; /* 0x170582B9: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x170582BB: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170582BE: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x54)) = edi; /* 0x170582C0: mov dword ptr [ebp - 0x54], edi */
    edi = MEM32(ebp + 0x10); /* 0x170582C3: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170582C6: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = eax; /* 0x170582C8: mov dword ptr [ebp - 0x30], eax */
    eax = (uint32_t)LO16(esi); /* 0x170582CB: movzx eax, si */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x170582CE: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170582D1: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170582D3: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x454), 0 */ /* 0x170582D5: cmp dword ptr [ebx + 0x454], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x454)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x94)) = eax; /* 0x170582DC: mov dword ptr [ebp - 0x94], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058301; /* 0x170582E2: je 0x17058301 */
L_170582E4:
    eax = MEM32(ebx + 0x9C); /* 0x170582E4: mov eax, dword ptr [ebx + 0x9c] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x170582EA: movzx ecx, word ptr [eax + 2] */
    eax = MEM32(ebx + 0xC8); /* 0x170582EE: mov eax, dword ptr [ebx + 0xc8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x54))); /* 0x170582F4: imul eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x170582F8: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170582FA: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = eax; /* 0x170582FC: mov dword ptr [ebp - 0x34], eax */
    goto L_17058305; /* 0x170582FF: jmp 0x17058305 */
L_17058301:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x17058301: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058305:
    PUSH32(esp, 0); /* 0x17058305: push 0 */
    eax = ebx + 0xCC; /* 0x17058307: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x1705830D: push eax */
    PUSH32(esp, esi); /* 0x1705830E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705830F: push dword ptr [ebp + 8] */
    ecx = ebp + (-0xA8); /* 0x17058312: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_17050BBD); /* 0x17058318: call 0x17050bbd */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1705831D: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1705831F: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17058323: fstp qword ptr [ebp - 0x5c] */
    /* cmp MEM16(ebp + (-0xA4)), 0xFFFFu */ /* 0x17058326: cmp word ptr [ebp - 0xa4], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0xA4))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push(0.0); /* 0x1705832F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17058331: fstp dword ptr [ebp - 0x24] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705886A; /* 0x17058334: je 0x1705886a */
L_1705833A:
    goto L_1705833F; /* 0x1705833A: jmp 0x1705833f */
L_1705833C:
    edi = MEM32(ebp + 0x10); /* 0x1705833C: mov edi, dword ptr [ebp + 0x10] */
L_1705833F:
    ecx = ebp + (-0xA8); /* 0x1705833F: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_170564A4); /* 0x17058345: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705834A: mov ecx, dword ptr [ebx + 0x318] */
    esi = MEM32(ebx + 0xC8); /* 0x17058350: mov esi, dword ptr [ebx + 0xc8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x17058356: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)LO16(eax); /* 0x17058359: movzx eax, ax */
    eax = eax + eax * 2; /* 0x1705835C: lea eax, [eax + eax*2] */
    edx = ecx + eax * 2; /* 0x1705835F: lea edx, [ecx + eax*2] */
    eax = MEM32(ebx + 0x90); /* 0x17058362: mov eax, dword ptr [ebx + 0x90] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x17058368: movzx ecx, word ptr [eax + 2] */
    eax = (uint32_t)MEM16(edx + 0x2); /* 0x1705836C: movzx eax, word ptr [edx + 2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x17058370: imul eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17058373: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17058375: mov dword ptr [ebp - 0x14], ecx */
    ecx = (uint32_t)MEM16(edx); /* 0x17058378: movzx ecx, word ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x1705837B: imul ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x14)); /* 0x1705837E: add ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17058381: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x17058383: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x17058385: mov dword ptr [ebp + 0xc], edx */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17058388: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1705838A: fsub dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1705838C: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1705838F: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17058392: fld dword ptr [ecx + 8] */
    ecx = esi; /* 0x17058395: mov ecx, esi */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17058397: fsub dword ptr [eax + 8] */
    eax = MEM32(ebx + 0x90); /* 0x1705839A: mov eax, dword ptr [ebx + 0x90] */
    esi = (uint32_t)MEM16(eax + 0x2); /* 0x170583A0: movzx esi, word ptr [eax + 2] */
    eax = (uint32_t)MEM16(edx + 0x4); /* 0x170583A4: movzx eax, word ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x170583A8: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170583AB: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = esi; /* 0x170583AD: mov dword ptr [ebp - 0x14], esi */
    esi = (uint32_t)MEM16(edx); /* 0x170583B0: movzx esi, word ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x170583B3: imul ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x14)); /* 0x170583B6: add ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170583B9: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x170583BB: add ecx, edi */
    _flag_k = FK_ADD;
    esi = ebp + (-0xC0); /* 0x170583BD: lea esi, [ebp - 0xc0] */
    edi = ebp + (-0xC); /* 0x170583C3: lea edi, [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170583C6: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x170583C8: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x170583CA: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170583D0: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x170583D3: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x170583D6: fstp dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170583DC: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x170583DF: fsub dword ptr [eax + 8] */
    fp_push(_st[0]); /* 0x170583E2: fld st(0) */
    _st[0] *= _st[3]; /* 0x170583E4: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x170583E6: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[3]; /* 0x170583EC: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170583EE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x170583F0: fstp dword ptr [ebp - 0xc0] */
    fp_push(_st[1]); /* 0x170583F6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x170583F8: fmul dword ptr [ebp - 0x88] */
    fp_push(_st[1]); /* 0x170583FE: fld st(1) */
    _st[0] *= _st[5]; /* 0x17058400: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058402: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x17058404: fstp dword ptr [ebp - 0xbc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705840A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705840C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1705840E: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[2]; /* 0x17058414: fmul st(2) */
    fp_push(_st[1]); /* 0x17058416: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x17058418: fmul dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1705841E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x17058420: fstp dword ptr [ebp - 0xb8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17058426: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17058427: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058428: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705842A: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1705842C: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1705842D: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17058430: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17058433: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17058436: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058439: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1705843B: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1705843E: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058441: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17058443: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17005950)); /* 0x17058445: fcom qword ptr [0x17005950] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1705844B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1705844D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705846E; /* 0x17058450: jne 0x1705846e */
L_17058452:
    fp_push(1.0); /* 0x17058452: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x17058454: fdivrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17058456: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x17058459: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1705845B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1705845E: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17058461: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17058463: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17058466: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17058469: fstp dword ptr [ebp - 4] */
    goto L_17058470; /* 0x1705846C: jmp 0x17058470 */
L_1705846E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705846E: fstp st(0) */
L_17058470:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17058470: fld dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x2C)); /* 0x17058473: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp LO16(eax), MEM16(ebp + (-0x90)) */ /* 0x17058476: cmp ax, word ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x90))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1705847D: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17058480: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17058483: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17058486: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17058489: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1705848C: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1705848F: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17058492: fstp dword ptr [ebp - 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170587EE; /* 0x17058495: je 0x170587ee */
L_1705849B:
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x1705849B: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170587EE; /* 0x1705849F: je 0x170587ee */
L_170584A5:
    ecx = (uint32_t)MEM16(edx); /* 0x170584A5: movzx ecx, word ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x170584A8: fld dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x170584AB: fadd dword ptr [0x17001424] */
    eax = MEM32(ebx + 0xC8); /* 0x170584B1: mov eax, dword ptr [ebx + 0xc8] */
    esi = MEM32(ebx + 0x90); /* 0x170584B7: mov esi, dword ptr [ebx + 0x90] */
    esi = (uint32_t)MEM16(esi + 0x2); /* 0x170584BD: movzx esi, word ptr [esi + 2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170584C1: fstp dword ptr [ebp - 0x24] */
    edi = eax; /* 0x170584C4: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x170584C6: imul edi, ecx */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x170584C9: mov dword ptr [ebp - 0x7c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x170584CC: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x170584CF: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x170584D1: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x30)); /* 0x170584D3: mov edi, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x10)) = esi; /* 0x170584D6: mov dword ptr [ebp - 0x10], esi */
    esi = (uint32_t)MEM16(edx + 0x4); /* 0x170584D9: movzx esi, word ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x170584DD: fld dword ptr [edi + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170584E0: fmul dword ptr [ebp - 4] */
    edx = (uint32_t)MEM16(edx + 0x2); /* 0x170584E3: movzx edx, word ptr [edx + 2] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x170584E7: fld dword ptr [edi + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170584EA: fmul dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = edx; /* 0x170584ED: mov dword ptr [ebp - 0x14], edx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170584F0: faddp st(1) */
    edx = ebp + (-0x48); /* 0x170584F2: lea edx, [ebp - 0x48] */
    fp_push(*(float*)&MEM32(edi)); /* 0x170584F5: fld dword ptr [edi] */
    PUSH32(esp, edx); /* 0x170584F7: push edx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170584F8: fmul dword ptr [ebp - 0xc] */
    edx = ebp + (-0x50); /* 0x170584FB: lea edx, [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x170584FE: push edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 1; /* 0x170584FF: inc dword ptr [ebp - 0x28] */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058502: faddp st(1) */
    edx = ebp + (-0x60); /* 0x17058504: lea edx, [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17058507: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1705850A: push edx */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1705850B: fmul dword ptr [ecx] */
    edx = ebp + (-0xC); /* 0x1705850D: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x17058510: push edx */
    edx = eax; /* 0x17058511: mov edx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x14))); /* 0x17058513: imul eax, dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058517: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17058519: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1705851C: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1705851F: fsubp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17058521: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17058524: fmul dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x17058527: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1705852A: imul edx, esi */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1705852D: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x1705852F: fstp qword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x17058532: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = esi; /* 0x17058535: mov dword ptr [ebp - 0x8c], esi */
    esi = MEM32(ebp + 0x10); /* 0x1705853B: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1705853E: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1705853F: add edx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x17058541: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17058542: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17058544: push eax */
    PUSH32(esp, ecx); /* 0x17058545: push ecx */
    RECOMP_CALL(sub_1704DF84); /* 0x17058546: call 0x1704df84 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1705854B: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebx + 0x3D0)); /* 0x1705854F: fld dword ptr [ebx + 0x3d0] */
    _st[0] *= *(double*)ADDR(ebp + (-0x68)); /* 0x17058555: fmul qword ptr [ebp - 0x68] */
    _st[0] *= *(double*)ADDR(ebp + (-0x68)); /* 0x17058558: fmul qword ptr [ebp - 0x68] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1705855B: fstp qword ptr [ebp - 0x4c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058605; /* 0x1705855E: je 0x17058605 */
L_17058564:
    eax = MEM32(ebx + 0xC8); /* 0x17058564: mov eax, dword ptr [ebx + 0xc8] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1705856A: fld dword ptr [ebp - 0x50] */
    ecx = MEM32(ebx + 0x9C); /* 0x1705856D: mov ecx, dword ptr [ebx + 0x9c] */
    ecx = (uint32_t)MEM16(ecx + 0x2); /* 0x17058573: movzx ecx, word ptr [ecx + 2] */
    edx = eax; /* 0x17058577: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x8C))); /* 0x17058579: imul edx, dword ptr [ebp - 0x8c] */
    PUSH32(esp, ecx); /* 0x17058580: push ecx */
    PUSH32(esp, ecx); /* 0x17058581: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x17058582: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x17058584: add edx, esi */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17058586: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1705858A: fld dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1705858D: fstp dword ptr [esp] */
    PUSH32(esp, edx); /* 0x17058590: push edx */
    edx = eax; /* 0x17058591: mov edx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x7C))); /* 0x17058593: imul eax, dword ptr [ebp - 0x7c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x14))); /* 0x17058597: imul edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1705859B: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705859D: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1705859F: add edx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x170585A1: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170585A2: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170585A4: push eax */
    eax = ebp + (-0xB4); /* 0x170585A5: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x170585AB: push eax */
    RECOMP_CALL(sub_17040DAE); /* 0x170585AC: call 0x17040dae */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x34)); /* 0x170585B1: mov esi, dword ptr [ebp - 0x34] */
    edi = ebp + (-0x74); /* 0x170585B4: lea edi, [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170585B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170585B8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170585B9: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x170585BA: fld dword ptr [ebp - 0x74] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x170585BD: fsub dword ptr [ebp - 0xb4] */
    edi = MEM32(ebp + (-0x30)); /* 0x170585C3: mov edi, dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x170585C6: fst dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x170585C9: fld dword ptr [ebp - 0x70] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x170585CC: fsub dword ptr [ebp - 0xb0] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x170585D2: fst dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x170585D5: fld dword ptr [ebp - 0x6c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x170585D8: fsub dword ptr [ebp - 0xac] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x170585DE: fst dword ptr [ebp - 0x6c] */
    fp_push(_st[2]); /* 0x170585E1: fld st(2) */
    _st[0] *= _st[3]; /* 0x170585E3: fmul st(3) */
    fp_push(_st[2]); /* 0x170585E5: fld st(2) */
    _st[0] *= _st[3]; /* 0x170585E7: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170585E9: faddp st(1) */
    fp_push(_st[1]); /* 0x170585EB: fld st(1) */
    _st[0] *= _st[2]; /* 0x170585ED: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170585EF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x3D8)); /* 0x170585F1: fld dword ptr [ebx + 0x3d8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170585F7: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x170585F9: fadd qword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170585FC: fstp qword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170585FF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058601: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058603: fstp st(0) */
L_17058605:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17058605: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x660), 0 */ /* 0x17058609: cmp dword ptr [ebx + 0x660], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x660)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17058746; /* 0x17058610: jbe 0x17058746 */
L_17058616:
    esi = ebx + 0x458; /* 0x17058616: lea esi, [ebx + 0x458] */
L_1705861C:
    PUSH32(esp, 4); /* 0x1705861C: push 4 */
    eax = ebp + (-0xD0); /* 0x1705861E: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x17058624: push eax */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x17058625: push dword ptr [ebp - 0x54] */
    ecx = ebx + 0x8; /* 0x17058628: lea ecx, [ebx + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x1705862B: push dword ptr [esi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x1705862D: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x17058632: push 4 */
    eax = ebp + (-0xF0); /* 0x17058634: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x1705863A: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1705863B: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax); /* 0x1705863E: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x17058641: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17058642: push dword ptr [esi] */
    ecx = ebx + 0x8; /* 0x17058644: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17058647: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x1705864C: push 4 */
    eax = ebp + (-0xE0); /* 0x1705864E: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x17058654: push eax */
    eax = MEM32(ebp + 0xC); /* 0x17058655: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x17058658: movzx eax, word ptr [eax + 2] */
    PUSH32(esp, eax); /* 0x1705865C: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1705865D: push dword ptr [esi] */
    ecx = ebx + 0x8; /* 0x1705865F: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_170B7D9D); /* 0x17058662: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x17058667: push 4 */
    eax = ebp + (-0x100); /* 0x17058669: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x1705866F: push eax */
    eax = MEM32(ebp + 0xC); /* 0x17058670: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x17058673: movzx eax, word ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x17058677: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17058678: push dword ptr [esi] */
    ecx = ebx + 0x8; /* 0x1705867A: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_170B7D9D); /* 0x1705867D: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17058682: push ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17058683: fld dword ptr [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x17058686: push ecx */
    eax = ebp + (-0x100); /* 0x17058687: lea eax, [ebp - 0x100] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1705868D: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17058691: fld dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17058694: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17058697: push eax */
    eax = ebp + (-0xE0); /* 0x17058698: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x1705869E: push eax */
    eax = ebp + (-0xF0); /* 0x1705869F: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x170586A5: push eax */
    eax = ebp + (-0x44); /* 0x170586A6: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x170586A9: push eax */
    RECOMP_CALL(sub_1704142A); /* 0x170586AA: call 0x1704142a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x170586AF: fld dword ptr [0x170018d8] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170586B5: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x170586B8: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170586BA: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[2]; /* 0x170586BD: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170586BF: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170586C2: fld dword ptr [ebp - 0x3c] */
    _st[0] *= _st[2]; /* 0x170586C5: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170586C7: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170586CA: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[2]; /* 0x170586CD: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170586CF: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0xD0))); /* 0x170586D2: fld dword ptr [ebp - 0xd0] */
    _st[0] += _st[1]; /* 0x170586D8: fadd st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170586DA: fst dword ptr [ebp - 0x44] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170586DD: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170586DF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x170586E1: fld dword ptr [ebp - 0xcc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x40)); /* 0x170586E7: fadd dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170586EA: fst dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x170586ED: fld dword ptr [ebp - 0xc8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x170586F3: fadd dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170586F6: fst dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC4))); /* 0x170586F9: fld dword ptr [ebp - 0xc4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x38)); /* 0x170586FF: fadd dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17058702: fst dword ptr [ebp - 0x38] */
    fp_push(_st[3]); /* 0x17058705: fld st(3) */
    _st[0] *= _st[4]; /* 0x17058707: fmul st(4) */
    fp_push(_st[1]); /* 0x17058709: fld st(1) */
    _st[0] *= _st[2]; /* 0x1705870B: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1705870D: faddp st(1) */
    fp_push(_st[2]); /* 0x1705870F: fld st(2) */
    _st[0] *= _st[3]; /* 0x17058711: fmul st(3) */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17058713: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x17058716: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17058719: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x660) */ /* 0x1705871C: cmp eax, dword ptr [ebx + 0x660] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x660));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058722: faddp st(1) */
    fp_push(_st[3]); /* 0x17058724: fld st(3) */
    _st[0] *= _st[4]; /* 0x17058726: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058728: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x100)); /* 0x1705872A: fld dword ptr [esi + 0x100] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17058730: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x17058732: fadd qword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17058735: fstp qword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058738: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705873A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705873C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705873E: fstp st(0) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705861C; /* 0x17058740: jb 0x1705861c */
L_17058746:
    /* cmp MEM8(ebp + (-0x98)), 0 */ /* 0x17058746: cmp byte ptr [ebp - 0x98], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x98))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = (uint32_t)MEM16(ebp + (-0xA2)); /* 0x1705874D: movzx esi, word ptr [ebp - 0xa2] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705875A; /* 0x17058754: je 0x1705875a */
L_17058756:
    edx = esi; /* 0x17058756: mov edx, esi */
    goto L_17058763; /* 0x17058758: jmp 0x17058763 */
L_1705875A:
    eax = esi + 0x1; /* 0x1705875A: lea eax, [esi + 1] */
    PUSH32(esp, 3); /* 0x1705875D: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705875F: cdq  */
    ecx = POP32_VAL(esp); /* 0x17058760: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x17058761: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_17058763:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17058763: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x17058766: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x17058768: push edi */
    PUSH32(esp, edx); /* 0x17058769: push edx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705876A: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_17052918); /* 0x1705876D: call 0x17052918 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x17058772: fstp qword ptr [ebp - 0x68] */
    /* cmp MEM8(ebp + (-0x98)), 0 */ /* 0x17058775: cmp byte ptr [ebp - 0x98], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x98))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058782; /* 0x1705877C: je 0x17058782 */
L_1705877E:
    edx = esi; /* 0x1705877E: mov edx, esi */
    goto L_1705878B; /* 0x17058780: jmp 0x1705878b */
L_17058782:
    eax = esi + 0x1; /* 0x17058782: lea eax, [esi + 1] */
    PUSH32(esp, 3); /* 0x17058785: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17058787: cdq  */
    ecx = POP32_VAL(esp); /* 0x17058788: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x17058789: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_1705878B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705878B: push dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(edx); /* 0x1705878E: movzx eax, dx */
    PUSH32(esp, edi); /* 0x17058791: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17058792: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17058793: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x17058794: push 3 */
    ecx = POP32_VAL(esp); /* 0x17058796: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17058797: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x17058798: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = ebx; /* 0x1705879A: mov ecx, ebx */
    PUSH32(esp, edx); /* 0x1705879C: push edx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705879D: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_17052918); /* 0x170587A0: call 0x17052918 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x68)); /* 0x170587A5: fadd qword ptr [ebp - 0x68] */
    /* cmp MEM8(ebp + (-0x98)), 0 */ /* 0x170587A8: cmp byte ptr [ebp - 0x98], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x98))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3D4); /* 0x170587AF: fmul dword ptr [ebx + 0x3d4] */
    _st[0] += *(double*)ADDR(ebp + (-0x4C)); /* 0x170587B5: fadd qword ptr [ebp - 0x4c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170587BE; /* 0x170587B8: je 0x170587be */
L_170587BA:
    edx = esi; /* 0x170587BA: mov edx, esi */
    goto L_170587C7; /* 0x170587BC: jmp 0x170587c7 */
L_170587BE:
    eax = esi + 0x1; /* 0x170587BE: lea eax, [esi + 1] */
    PUSH32(esp, 3); /* 0x170587C1: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x170587C3: cdq  */
    ecx = POP32_VAL(esp); /* 0x170587C4: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x170587C5: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_170587C7:
    ecx = MEM32(ebp + 0xC); /* 0x170587C7: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(edx); /* 0x170587CA: movzx eax, dx */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x170587CD: movzx eax, word ptr [ecx + eax*2] */
    ecx = MEM32(ebx + 0x310); /* 0x170587D1: mov ecx, dword ptr [ebx + 0x310] */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x170587D7: movzx eax, word ptr [ecx + eax*2] */
    ecx = MEM32(ebx + 0x448); /* 0x170587DB: mov ecx, dword ptr [ebx + 0x448] */
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x170587E1: fld dword ptr [ecx + eax*4] */
    _st[0] *= _st[1]; /* 0x170587E4: fmul st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x5C)); /* 0x170587E6: fadd qword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x170587E9: fstp qword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170587EC: fstp st(0) */
L_170587EE:
    /* cmp MEM16(ebp + (-0xA4)), 0xFFFFu */ /* 0x170587EE: cmp word ptr [ebp - 0xa4], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0xA4))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705833C; /* 0x170587F7: jne 0x1705833c */
L_170587FD:
    esi = MEM32(ebp + (-0x28)); /* 0x170587FD: mov esi, dword ptr [ebp - 0x28] */
    /* test esi, esi */ /* 0x17058800: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705886A; /* 0x17058802: jbe 0x1705886a */
L_17058804:
    eax = ebp + (-0x20); /* 0x17058804: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x17058807: push eax */
    PUSH32(esp, eax); /* 0x17058808: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x17058809: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1705880E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x30)); /* 0x17058810: mov eax, dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17058813: fld dword ptr [eax + 8] */
    MEM32(ebp + 0x10) = esi; /* 0x17058816: mov dword ptr [ebp + 0x10], esi */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17058819: fmul dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1705881C: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1705881F: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17058822: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17058824: fld dword ptr [eax] */
    eax = MEM32(ebp + (-0x94)); /* 0x17058826: mov eax, dword ptr [ebp - 0x94] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1705882C: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1705882F: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17058831: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17058833: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058836: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17058838: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1705883B: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1705883E: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17058840: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17058843: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17058846: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17058848: fld dword ptr [ebp - 0x24] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1705884B: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17058856; /* 0x1705884E: jge 0x17058856 */
L_17058850:
    _st[0] += *(double*)ADDR(0x17001F50); /* 0x17058850: fadd qword ptr [0x17001f50] */
L_17058856:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17058856: fdivp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3D0); /* 0x17058858: fmul dword ptr [ebx + 0x3d0] */
    _st[0] *= _st[1]; /* 0x1705885E: fmul st(1) */
    _st[0] *= _st[1]; /* 0x17058860: fmul st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x5C)); /* 0x17058862: fadd qword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17058865: fstp qword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17058868: fstp st(0) */
L_1705886A:
    fp_push(*(double*)ADDR(ebp + (-0x5C))); /* 0x1705886A: fld qword ptr [ebp - 0x5c] */
    eax = MEM32(ebp + (-0x78)); /* 0x1705886D: mov eax, dword ptr [ebp - 0x78] */
    edi = POP32_VAL(esp); /* 0x17058870: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17058871: fstp dword ptr [eax + 4] */
    esi = POP32_VAL(esp); /* 0x17058874: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058875: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17058876: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17058877: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705887F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705887Fu);

L_1705887F:
    edi = edi; /* 0x1705887F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058881: push ebp */
    ebp = esp; /* 0x17058882: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17058884: push ecx */
    PUSH32(esp, ebx); /* 0x17058885: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17058886: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17058889: push esi */
    PUSH32(esp, edi); /* 0x1705888A: push edi */
    edi = ecx; /* 0x1705888B: mov edi, ecx */
    eax = MEM32(edi); /* 0x1705888D: mov eax, dword ptr [edi] */
    eax = MEM32(eax + ebx * 4); /* 0x1705888F: mov eax, dword ptr [eax + ebx*4] */
    eax = MEM32(eax + 0x4); /* 0x17058892: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x17058895: mov dword ptr [ebp + 8], eax */
L_17058898:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x17058898: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170588B9; /* 0x1705889C: je 0x170588b9 */
L_1705889E:
    esi = ebx + (-0x1); /* 0x1705889E: lea esi, [ebx - 1] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x170588A1: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x170588A1: shr esi, 1 */
    /* test ebx, ebx */ /* 0x170588A3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170588B9; /* 0x170588A5: jbe 0x170588b9 */
L_170588A7:
    eax = MEM32(edi); /* 0x170588A7: mov eax, dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170588A9: fld dword ptr [ebp + 8] */
    eax = MEM32(eax + esi * 4); /* 0x170588AC: mov eax, dword ptr [eax + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + 0x4)); /* 0x170588AF: fcomp dword ptr [eax + 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170588B2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170588B4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1705891B; /* 0x170588B7: jnp 0x1705891b */
L_170588B9:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x170588B9: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170588E4; /* 0x170588BD: je 0x170588e4 */
L_170588BF:
    edx = MEM32(edi + 0x4); /* 0x170588BF: mov edx, dword ptr [edi + 4] */
    ecx = ebx + ebx + 0x1; /* 0x170588C2: lea ecx, [ebx + ebx + 1] */
    /* cmp ecx, edx */ /* 0x170588C6: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170588E4; /* 0x170588C8: jae 0x170588e4 */
L_170588CA:
    eax = MEM32(edi); /* 0x170588CA: mov eax, dword ptr [edi] */
    esi = MEM32(eax + ecx * 4); /* 0x170588CC: mov esi, dword ptr [eax + ecx*4] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x170588CF: fld dword ptr [esi + 4] */
    esi = ebx + ebx + 0x2; /* 0x170588D2: lea esi, [ebx + ebx + 2] */
    /* cmp esi, edx */ /* 0x170588D6: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170588EB; /* 0x170588D8: jb 0x170588eb */
L_170588DA:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x170588DA: fcomp dword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170588DD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170588DF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17058908; /* 0x170588E2: jnp 0x17058908 */
L_170588E4:
    edi = POP32_VAL(esp); /* 0x170588E4: pop edi */
    esi = POP32_VAL(esp); /* 0x170588E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x170588E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170588E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170588E8: ret 0xc */
L_170588EB:
    eax = MEM32(eax + esi * 4); /* 0x170588EB: mov eax, dword ptr [eax + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x170588EE: fcom dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x170588F1: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170588F4: mov dword ptr [ebp - 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170588F7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170588F9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1705890C; /* 0x170588FC: jp 0x1705890c */
L_170588FE:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4))); /* 0x170588FE: fcomp dword ptr [ebp - 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17058901: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058903: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1705890E; /* 0x17058906: jp 0x1705890e */
L_17058908:
    esi = ecx; /* 0x17058908: mov esi, ecx */
    goto L_1705891B; /* 0x1705890A: jmp 0x1705891b */
L_1705890C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1705890C: fstp st(0) */
L_1705890E:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1705890E: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x17058911: fcomp dword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17058914: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058916: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170588E4; /* 0x17058919: jp 0x170588e4 */
L_1705891B:
    PUSH32(esp, esi); /* 0x1705891B: push esi */
    PUSH32(esp, ebx); /* 0x1705891C: push ebx */
    ecx = edi; /* 0x1705891D: mov ecx, edi */
    RECOMP_CALL(sub_17051EE9); /* 0x1705891F: call 0x17051ee9 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x17058924: mov ebx, esi */
    RECOMP_BACKEDGE();
    goto L_17058898; /* 0x17058926: jmp 0x17058898 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17058930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058930u);

L_17058930:
    edi = edi; /* 0x17058930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058932: push ebp */
    ebp = esp; /* 0x17058933: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17058935: push ecx */
    PUSH32(esp, esi); /* 0x17058936: push esi */
    PUSH32(esp, edi); /* 0x17058937: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17058938: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1705893A: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), edi */ /* 0x1705893C: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1705893F: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705898F; /* 0x17058942: jne 0x1705898f */
L_17058944:
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x17058944: movzx eax, word ptr [esi + 0x18] */
    eax = eax + eax * 2; /* 0x17058948: lea eax, [eax + eax*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1705894B: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1705894B: shl eax, 1 */
    PUSH32(esp, eax); /* 0x1705894D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705894E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17058953: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17058955: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x17058956: mov dword ptr [esi + 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058976; /* 0x17058959: je 0x17058976 */
L_1705895B:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1705895B: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705898F; /* 0x1705895F: je 0x1705898f */
L_17058961:
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x17058961: movzx eax, word ptr [esi + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17058965: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17058965: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17058968: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17058969: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705896E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17058970: pop ecx */
    MEM32(esi + 0x20) = eax; /* 0x17058971: mov dword ptr [esi + 0x20], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705898F; /* 0x17058974: jne 0x1705898f */
L_17058976:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x17058976: push dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17058979: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_1721B010); /* 0x17058980: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17058985: pop ecx */
L_17058986:
    eax = MEM32(ebp + (-0x4)); /* 0x17058986: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17058989: pop edi */
    esi = POP32_VAL(esp); /* 0x1705898A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705898B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705898C: ret 0xc */
L_1705898F:
    SET_LO16(ecx, MEM16(ebp + 0xC)); /* 0x1705898F: mov cx, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM16(esi + 0x8) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x8) | 0xFFFFu)) << 16;
    MEM16(esi + 0x8) = (uint16_t)(MEM16(esi + 0x8) | 0xFFFFu); /* 0x17058993: or word ptr [esi + 8], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(esi + 0xA) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0xA) | 0xFFFFu)) << 16;
    MEM16(esi + 0xA) = (uint16_t)(MEM16(esi + 0xA) | 0xFFFFu); /* 0x17058999: or word ptr [esi + 0xa], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(esi + 0xC) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0xC) | 0xFFFFu)) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) | 0xFFFFu); /* 0x1705899F: or word ptr [esi + 0xc], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(esi + 0xE) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0xE) | 0xFFFFu)) << 16;
    MEM16(esi + 0xE) = (uint16_t)(MEM16(esi + 0xE) | 0xFFFFu); /* 0x170589A5: or word ptr [esi + 0xe], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, ebx); /* 0x170589AB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170589AC: mov ebx, dword ptr [ebp + 8] */
    MEM16(esi + 0x16) = (uint16_t)(LO16(ecx)); /* 0x170589AF: mov word ptr [esi + 0x16], cx */
    eax = (uint32_t)LO16(ebx); /* 0x170589B3: movzx eax, bx */
    ecx = (uint32_t)LO16(ecx); /* 0x170589B6: movzx ecx, cx */
    edx = eax + ecx; /* 0x170589B9: lea edx, [eax + ecx] */
    /* cmp eax, edx */ /* 0x170589BC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(esi + 0x14) = (uint16_t)(LO16(ebx)); /* 0x170589BE: mov word ptr [esi + 0x14], bx */
    MEM32(ebp + 0x10) = ecx; /* 0x170589C2: mov dword ptr [ebp + 0x10], ecx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_17058A16; /* 0x170589C5: jge 0x17058a16 */
L_170589C7:
    ecx = MEM32(esi + 0x4); /* 0x170589C7: mov ecx, dword ptr [esi + 4] */
    eax = eax + eax * 2; /* 0x170589CA: lea eax, [eax + eax*2] */
    PUSH32(esp, 3); /* 0x170589CD: push 3 */
    eax = ecx + eax * 2; /* 0x170589CF: lea eax, [ecx + eax*2] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x170589D2: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x170589D4: pop edx */
L_170589D5:
    /* cmp MEM16(eax), 0xFFFFu */ /* 0x170589D5: cmp word ptr [eax], 0xffff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170589DE; /* 0x170589DA: je 0x170589de */
L_170589DC:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x170589DC: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
L_170589DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170589DE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170589DF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170589E0: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170589D5; /* 0x170589E1: jne 0x170589d5 */
L_170589E3:
    edx = MEM32(esi + 0x10); /* 0x170589E3: mov edx, dword ptr [esi + 0x10] */
    eax = (uint32_t)LO16(edi); /* 0x170589E6: movzx eax, di */
    eax = eax + eax * 2; /* 0x170589E9: lea eax, [eax + eax*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170589EC: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170589EC: shl eax, 1 */
    MEM8(eax + edx) = (uint8_t)(0); /* 0x170589EE: mov byte ptr [eax + edx], 0 */
    edx = MEM32(esi + 0x10); /* 0x170589F2: mov edx, dword ptr [esi + 0x10] */
    MEM8(eax + edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x170589F5: mov byte ptr [eax + edx + 1], cl */
    PUSH32(esp, edi); /* 0x170589F9: push edi */
    ecx = esi; /* 0x170589FA: mov ecx, esi */
    RECOMP_CALL(sub_170523BA); /* 0x170589FC: call 0x170523ba */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM16(esi + 0x14); /* 0x17058A01: movzx ecx, word ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x17058A05: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17058A08: inc edi */
    _flag_k = FK_INC;
    eax = edi + ebx; /* 0x17058A09: lea eax, [edi + ebx] */
    eax = (uint32_t)LO16(eax); /* 0x17058A0C: movzx eax, ax */
    /* cmp eax, ecx */ /* 0x17058A0F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170589C7; /* 0x17058A11: jl 0x170589c7 */
L_17058A13:
    ecx = MEM32(ebp + 0x10); /* 0x17058A13: mov ecx, dword ptr [ebp + 0x10] */
L_17058A16:
    edi = MEM32(esi + 0x20); /* 0x17058A16: mov edi, dword ptr [esi + 0x20] */
    /* test edi, edi */ /* 0x17058A19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x17058A1B: pop ebx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058986; /* 0x17058A1C: je 0x17058986 */
L_17058A22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058A22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17058A24: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & eax; /* 0x17058A26: and dword ptr [esi + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17058986; /* 0x17058A29: jmp 0x17058986 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17058A33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058A33u);

L_17058A33:
    edi = edi; /* 0x17058A33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058A35: push ebp */
    ebp = esp; /* 0x17058A36: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17058A38: push ebx */
    PUSH32(esp, esi); /* 0x17058A39: push esi */
    esi = ecx; /* 0x17058A3A: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x17058A3C: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058A3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x17058A41: mov ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x14)); /* 0x17058A45: sub ax, word ptr [esi + 0x14] */
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, edi); /* 0x17058A49: push edi */
    edi = (uint32_t)LO16(eax); /* 0x17058A4A: movzx edi, ax */
    ecx = edi + edi * 2; /* 0x17058A4D: lea ecx, [edi + edi*2] */
    MEM8(edx + ecx * 2) = (uint8_t)(1); /* 0x17058A50: mov byte ptr [edx + ecx*2], 1 */
    ecx = esi; /* 0x17058A54: mov ecx, esi */
    PUSH32(esp, eax); /* 0x17058A56: push eax */
    RECOMP_CALL(sub_17052327); /* 0x17058A57: call 0x17052327 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x17058A5C: movzx eax, word ptr [ebp + 8] */
    ecx = MEM32(esi + 0x4); /* 0x17058A60: mov ecx, dword ptr [esi + 4] */
    eax = eax + eax * 2; /* 0x17058A63: lea eax, [eax + eax*2] */
    ebx = ecx + eax * 2; /* 0x17058A66: lea ebx, [ecx + eax*2] */
    MEM32(ebp + 0x8) = 3; /* 0x17058A69: mov dword ptr [ebp + 8], 3 */
L_17058A70:
    SET_LO16(ecx, MEM16(ebx)); /* 0x17058A70: mov cx, word ptr [ebx] */
    /* cmp LO16(ecx), 0xFFFFu */ /* 0x17058A73: cmp cx, 0xffff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058A97; /* 0x17058A78: je 0x17058a97 */
L_17058A7A:
    edx = (uint32_t)MEM16(esi + 0x14); /* 0x17058A7A: movzx edx, word ptr [esi + 0x14] */
    eax = (uint32_t)LO16(ecx); /* 0x17058A7E: movzx eax, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17058A81: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x10); /* 0x17058A83: mov edx, dword ptr [esi + 0x10] */
    eax = eax + eax * 2; /* 0x17058A86: lea eax, [eax + eax*2] */
    /* cmp MEM8(edx + eax * 2), 0 */ /* 0x17058A89: cmp byte ptr [edx + eax*2], 0 */
    _flag_a = (uint32_t)(MEM8(edx + eax * 2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058A97; /* 0x17058A8D: jne 0x17058a97 */
L_17058A8F:
    PUSH32(esp, ecx); /* 0x17058A8F: push ecx */
    ecx = esi; /* 0x17058A90: mov ecx, esi */
    RECOMP_CALL(sub_17052410); /* 0x17058A92: call 0x17052410 */
    RECOMP_FLAGS_IN();
L_17058A97:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17058A97: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17058A98: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17058A99: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17058A70; /* 0x17058A9C: jne 0x17058a70 */
L_17058A9E:
    esi = MEM32(esi + 0x20); /* 0x17058A9E: mov esi, dword ptr [esi + 0x20] */
    /* test esi, esi */ /* 0x17058AA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058AA9; /* 0x17058AA3: je 0x17058aa9 */
L_17058AA5:
    _flag_a = (uint32_t)((MEM32(esi + edi * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + edi * 4) | 0xFFFFFFFFu));
    MEM32(esi + edi * 4) = MEM32(esi + edi * 4) | 0xFFFFFFFFu; /* 0x17058AA5: or dword ptr [esi + edi*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058AA9:
    edi = POP32_VAL(esp); /* 0x17058AA9: pop edi */
    esi = POP32_VAL(esp); /* 0x17058AAA: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058AAB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17058AAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17058AAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17058AB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058AB5u);

L_17058AB5:
    edi = edi; /* 0x17058AB5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058AB7: push ebp */
    ebp = esp; /* 0x17058AB8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17058ABA: push ecx */
    PUSH32(esp, esi); /* 0x17058ABB: push esi */
    PUSH32(esp, edi); /* 0x17058ABC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17058ABD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x17058ABF: mov esi, ecx */
    /* cmp MEM32(esi + 0x18), edi */ /* 0x17058AC1: cmp dword ptr [esi + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17058AC4: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058B13; /* 0x17058AC7: jne 0x17058b13 */
L_17058AC9:
    eax = MEM32(esi + 0x24); /* 0x17058AC9: mov eax, dword ptr [esi + 0x24] */
    eax = eax + eax * 2; /* 0x17058ACC: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17058ACF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17058ACF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17058AD2: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17058AD3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17058AD8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17058ADA: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x17058ADB: mov dword ptr [esi + 0x18], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058AFA; /* 0x17058ADE: je 0x17058afa */
L_17058AE0:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x17058AE0: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058B13; /* 0x17058AE4: je 0x17058b13 */
L_17058AE6:
    eax = MEM32(esi + 0x24); /* 0x17058AE6: mov eax, dword ptr [esi + 0x24] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17058AE9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17058AE9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17058AEC: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17058AED: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17058AF2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17058AF4: pop ecx */
    MEM32(esi + 0x2C) = eax; /* 0x17058AF5: mov dword ptr [esi + 0x2c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058B13; /* 0x17058AF8: jne 0x17058b13 */
L_17058AFA:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17058AFA: push dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17058AFD: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_1721B010); /* 0x17058B04: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17058B09: pop ecx */
L_17058B0A:
    eax = MEM32(ebp + (-0x4)); /* 0x17058B0A: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17058B0D: pop edi */
    esi = POP32_VAL(esp); /* 0x17058B0E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17058B0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17058B10: ret 0xc */
L_17058B13:
    eax = MEM32(ebp + 0x8); /* 0x17058B13: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x17058B16: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x17058B19: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edx; /* 0x17058B1C: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x17058B1F: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = edx; /* 0x17058B22: mov dword ptr [esi + 0x10], edx */
    MEM32(esi + 0x14) = edx; /* 0x17058B25: mov dword ptr [esi + 0x14], edx */
    edx = eax + ecx; /* 0x17058B28: lea edx, [eax + ecx] */
    /* cmp eax, edx */ /* 0x17058B2B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x1C) = eax; /* 0x17058B2D: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x20) = ecx; /* 0x17058B30: mov dword ptr [esi + 0x20], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x17058B33: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058B8C; /* 0x17058B36: jae 0x17058b8c */
L_17058B38:
    PUSH32(esp, ebx); /* 0x17058B38: push ebx */
    ebx = eax + eax * 2; /* 0x17058B39: lea ebx, [eax + eax*2] */
    MEM32(ebp + 0x10) = edi; /* 0x17058B3C: mov dword ptr [ebp + 0x10], edi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x17058B3F: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x17058B3F: shl ebx, 2 */
L_17058B42:
    eax = MEM32(esi + 0x4); /* 0x17058B42: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17058B45: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x17058B47: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17058B49: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058B4B:
    /* cmp MEM32(eax + edx * 4), 0xFFFFFFFFu */ /* 0x17058B4B: cmp dword ptr [eax + edx*4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058B53; /* 0x17058B4F: je 0x17058b53 */
L_17058B51:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x17058B51: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
L_17058B53:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17058B53: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x17058B54: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058B4B; /* 0x17058B57: jb 0x17058b4b */
L_17058B59:
    eax = MEM32(esi + 0x18); /* 0x17058B59: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17058B5C: push dword ptr [ebp + 0x10] */
    MEM8(edi + eax) = (uint8_t)(0); /* 0x17058B5F: mov byte ptr [edi + eax], 0 */
    eax = MEM32(esi + 0x18); /* 0x17058B63: mov eax, dword ptr [esi + 0x18] */
    MEM8(edi + eax + 0x1) = (uint8_t)(LO8(ecx)); /* 0x17058B66: mov byte ptr [edi + eax + 1], cl */
    ecx = esi; /* 0x17058B6A: mov ecx, esi */
    RECOMP_CALL(sub_17052709); /* 0x17058B6C: call 0x17052709 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x17058B71: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17058B74: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x17058B77: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x17058B7A: add ebx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x17058B7D: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17058B80: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17058B83: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058B42; /* 0x17058B86: jb 0x17058b42 */
L_17058B88:
    ecx = MEM32(ebp + 0xC); /* 0x17058B88: mov ecx, dword ptr [ebp + 0xc] */
    ebx = POP32_VAL(esp); /* 0x17058B8B: pop ebx */
L_17058B8C:
    edi = MEM32(esi + 0x2C); /* 0x17058B8C: mov edi, dword ptr [esi + 0x2c] */
    /* test edi, edi */ /* 0x17058B8F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058B0A; /* 0x17058B91: je 0x17058b0a */
L_17058B97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058B97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17058B99: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & eax; /* 0x17058B9B: and dword ptr [esi + 0x28], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17058B0A; /* 0x17058B9E: jmp 0x17058b0a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17058BA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058BA8u);

L_17058BA8:
    edi = edi; /* 0x17058BA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058BAA: push ebp */
    ebp = esp; /* 0x17058BAB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17058BAD: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17058BAE: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17058BB1: push esi */
    PUSH32(esp, edi); /* 0x17058BB2: push edi */
    esi = ecx; /* 0x17058BB3: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x17058BB5: mov ecx, dword ptr [esi + 0x18] */
    edi = ebx; /* 0x17058BB8: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x1C); /* 0x17058BBA: sub edi, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    eax = edi + edi * 2; /* 0x17058BBD: lea eax, [edi + edi*2] */
    MEM8(ecx + eax * 4) = (uint8_t)(1); /* 0x17058BC0: mov byte ptr [ecx + eax*4], 1 */
    PUSH32(esp, edi); /* 0x17058BC4: push edi */
    ecx = esi; /* 0x17058BC5: mov ecx, esi */
    RECOMP_CALL(sub_17052690); /* 0x17058BC7: call 0x17052690 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x17058BCC: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17058BCF: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + ebx * 2; /* 0x17058BD3: lea eax, [ebx + ebx*2] */
    ebx = ecx + eax * 4; /* 0x17058BD6: lea ebx, [ecx + eax*4] */
L_17058BD9:
    eax = MEM32(ebp + 0x8); /* 0x17058BD9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + eax * 4); /* 0x17058BDC: mov ecx, dword ptr [ebx + eax*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x17058BDF: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058BFD; /* 0x17058BE2: je 0x17058bfd */
L_17058BE4:
    edx = MEM32(esi + 0x18); /* 0x17058BE4: mov edx, dword ptr [esi + 0x18] */
    eax = ecx; /* 0x17058BE7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x1C); /* 0x17058BE9: sub eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    eax = eax + eax * 2; /* 0x17058BEC: lea eax, [eax + eax*2] */
    /* cmp MEM8(edx + eax * 4), 0 */ /* 0x17058BEF: cmp byte ptr [edx + eax*4], 0 */
    _flag_a = (uint32_t)(MEM8(edx + eax * 4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058BFD; /* 0x17058BF3: jne 0x17058bfd */
L_17058BF5:
    PUSH32(esp, ecx); /* 0x17058BF5: push ecx */
    ecx = esi; /* 0x17058BF6: mov ecx, esi */
    RECOMP_CALL(sub_17052752); /* 0x17058BF8: call 0x17052752 */
    RECOMP_FLAGS_IN();
L_17058BFD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17058BFD: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x17058C00: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058BD9; /* 0x17058C04: jb 0x17058bd9 */
L_17058C06:
    esi = MEM32(esi + 0x2C); /* 0x17058C06: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x17058C09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058C11; /* 0x17058C0B: je 0x17058c11 */
L_17058C0D:
    _flag_a = (uint32_t)((MEM32(esi + edi * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + edi * 4) | 0xFFFFFFFFu));
    MEM32(esi + edi * 4) = MEM32(esi + edi * 4) | 0xFFFFFFFFu; /* 0x17058C0D: or dword ptr [esi + edi*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058C11:
    edi = POP32_VAL(esp); /* 0x17058C11: pop edi */
    esi = POP32_VAL(esp); /* 0x17058C12: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058C13: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17058C14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17058C15: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17058C1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058C1Du);

L_17058C1D:
    edi = edi; /* 0x17058C1D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058C1F: push ebp */
    ebp = esp; /* 0x17058C20: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17058C22: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x17058C25: movzx eax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17058C29: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17058C2D: push ebx */
    PUSH32(esp, esi); /* 0x17058C2E: push esi */
    PUSH32(esp, edi); /* 0x17058C2F: push edi */
    edi = ecx; /* 0x17058C30: mov edi, ecx */
    ebx = MEM32(edi + 0x4); /* 0x17058C32: mov ebx, dword ptr [edi + 4] */
    eax = eax + eax * 2; /* 0x17058C35: lea eax, [eax + eax*2] */
    eax = ebx + eax * 2; /* 0x17058C38: lea eax, [ebx + eax*2] */
    MEM32(ebp + (-0x10)) = 3; /* 0x17058C3B: mov dword ptr [ebp - 0x10], 3 */
    MEM32(ebp + (-0x8)) = 0xFFFFu; /* 0x17058C42: mov dword ptr [ebp - 8], 0xffff */
    MEM32(ebp + (-0xC)) = eax; /* 0x17058C49: mov dword ptr [ebp - 0xc], eax */
L_17058C4C:
    eax = MEM32(ebp + (-0xC)); /* 0x17058C4C: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)MEM16(eax); /* 0x17058C4F: movzx eax, word ptr [eax] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x17058C52: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + 0x8) = eax; /* 0x17058C56: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058D0D; /* 0x17058C59: je 0x17058d0d */
L_17058C5F:
    edx = (uint32_t)MEM16(edi + 0x14); /* 0x17058C5F: movzx edx, word ptr [edi + 0x14] */
    ecx = MEM32(edi + 0x10); /* 0x17058C63: mov ecx, dword ptr [edi + 0x10] */
    esi = (uint32_t)LO16(eax); /* 0x17058C66: movzx esi, ax */
    eax = esi; /* 0x17058C69: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17058C6B: sub eax, edx */
    _flag_k = FK_CMP;
    eax = eax + eax * 2; /* 0x17058C6D: lea eax, [eax + eax*2] */
    /* cmp MEM8(ecx + eax * 2), 0 */ /* 0x17058C70: cmp byte ptr [ecx + eax*2], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058D0D; /* 0x17058C74: jne 0x17058d0d */
L_17058C7A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17058C7A: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x17058C7D: mov ecx, edi */
    RECOMP_CALL(sub_17052ABF); /* 0x17058C7F: call 0x17052abf */
    RECOMP_FLAGS_IN();
    ecx = 0xFFFFu; /* 0x17058C84: mov ecx, 0xffff */
    MEM32(ebp + 0x8) = ecx; /* 0x17058C89: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x14)) = 3; /* 0x17058C8C: mov dword ptr [ebp - 0x14], 3 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17058C93: mov dword ptr [ebp - 0x1c], eax */
    eax = esi + esi * 2; /* 0x17058C96: lea eax, [esi + esi*2] */
    esi = ebx + eax * 2; /* 0x17058C99: lea esi, [ebx + eax*2] */
L_17058C9C:
    SET_LO16(eax, MEM16(esi)); /* 0x17058C9C: mov ax, word ptr [esi] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x17058C9F: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058CD3; /* 0x17058CA3: je 0x17058cd3 */
L_17058CA5:
    edx = (uint32_t)MEM16(edi + 0x14); /* 0x17058CA5: movzx edx, word ptr [edi + 0x14] */
    eax = (uint32_t)LO16(eax); /* 0x17058CA9: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17058CAC: sub eax, edx */
    _flag_k = FK_CMP;
    edx = eax + eax * 2; /* 0x17058CAE: lea edx, [eax + eax*2] */
    eax = MEM32(edi + 0x10); /* 0x17058CB1: mov eax, dword ptr [edi + 0x10] */
    /* cmp MEM8(eax + edx * 2), 0 */ /* 0x17058CB4: cmp byte ptr [eax + edx*2], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx * 2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058CD3; /* 0x17058CB8: jne 0x17058cd3 */
L_17058CBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058CBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi)); /* 0x17058CBC: mov ax, word ptr [esi] */
    ecx = edi; /* 0x17058CBF: mov ecx, edi */
    PUSH32(esp, eax); /* 0x17058CC1: push eax */
    RECOMP_CALL(sub_17052ABF); /* 0x17058CC2: call 0x17052abf */
    RECOMP_FLAGS_IN();
    /* cmp LO16(eax), MEM16(ebp + 0x8) */ /* 0x17058CC7: cmp ax, word ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058CD0; /* 0x17058CCB: jae 0x17058cd0 */
L_17058CCD:
    MEM32(ebp + 0x8) = eax; /* 0x17058CCD: mov dword ptr [ebp + 8], eax */
L_17058CD0:
    ecx = MEM32(ebp + 0x8); /* 0x17058CD0: mov ecx, dword ptr [ebp + 8] */
L_17058CD3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17058CD3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17058CD4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x17058CD5: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17058C9C; /* 0x17058CD8: jne 0x17058c9c */
L_17058CDA:
    /* cmp LO16(ecx), 0xFFFFu */ /* 0x17058CDA: cmp cx, 0xffff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058CE8; /* 0x17058CDF: jne 0x17058ce8 */
L_17058CE1:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17058CE1: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x17058CE5: mov ecx, dword ptr [ebp + 8] */
L_17058CE8:
    eax = MEM32(ebp + (-0x1C)); /* 0x17058CE8: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x17058CEB: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058CFC; /* 0x17058CEF: jae 0x17058cfc */
L_17058CF1:
    edx = MEM32(ebp + (-0x4)); /* 0x17058CF1: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x17058CF4: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17058CF7: mov dword ptr [ebp - 8], eax */
    goto L_17058D0A; /* 0x17058CFA: jmp 0x17058d0a */
L_17058CFC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17058D0D; /* 0x17058CFC: jne 0x17058d0d */
L_17058CFE:
    /* cmp LO16(ecx), MEM16(ebp + (-0x18)) */ /* 0x17058CFE: cmp cx, word ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058D0D; /* 0x17058D02: jae 0x17058d0d */
L_17058D04:
    eax = MEM32(ebp + (-0x4)); /* 0x17058D04: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17058D07: mov dword ptr [ebp - 0x10], eax */
L_17058D0A:
    MEM32(ebp + (-0x18)) = ecx; /* 0x17058D0A: mov dword ptr [ebp - 0x18], ecx */
L_17058D0D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17058D0D: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 2; /* 0x17058D10: add dword ptr [ebp - 0xc], 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x4)), 3 */ /* 0x17058D14: cmp word ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058C4C; /* 0x17058D19: jb 0x17058c4c */
L_17058D1F:
    SET_LO16(eax, MEM16(ebp + (-0x10))); /* 0x17058D1F: mov ax, word ptr [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x17058D23: pop edi */
    esi = POP32_VAL(esp); /* 0x17058D24: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058D25: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17058D26: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17058D27: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17058D2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058D2Fu);

L_17058D2F:
    edi = edi; /* 0x17058D2F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058D31: push ebp */
    ebp = esp; /* 0x17058D32: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17058D34: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x17058D37: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x17058D3A: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17058D3E: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17058D42: push ebx */
    ebx = MEM32(ecx + 0x4); /* 0x17058D43: mov ebx, dword ptr [ecx + 4] */
    eax = edx + edx * 2; /* 0x17058D46: lea eax, [edx + edx*2] */
    PUSH32(esp, esi); /* 0x17058D49: push esi */
    eax = ebx + eax * 4; /* 0x17058D4A: lea eax, [ebx + eax*4] */
    PUSH32(esp, edi); /* 0x17058D4D: push edi */
    MEM32(ebp + (-0x10)) = 3; /* 0x17058D4E: mov dword ptr [ebp - 0x10], 3 */
    MEM32(ebp + (-0x18)) = eax; /* 0x17058D55: mov dword ptr [ebp - 0x18], eax */
L_17058D58:
    eax = MEM32(ebp + (-0x18)); /* 0x17058D58: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + 0x8); /* 0x17058D5B: mov edx, dword ptr [ebp + 8] */
    esi = MEM32(eax + edx * 4); /* 0x17058D5E: mov esi, dword ptr [eax + edx*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x17058D61: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058DF2; /* 0x17058D64: je 0x17058df2 */
L_17058D6A:
    eax = MEM32(ecx + 0x1C); /* 0x17058D6A: mov eax, dword ptr [ecx + 0x1c] */
    edi = MEM32(ecx + 0x18); /* 0x17058D6D: mov edi, dword ptr [ecx + 0x18] */
    edx = esi; /* 0x17058D70: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x17058D72: sub edx, eax */
    _flag_k = FK_CMP;
    eax = edx + edx * 2; /* 0x17058D74: lea eax, [edx + edx*2] */
    edx = edi + eax * 4; /* 0x17058D77: lea edx, [edi + eax*4] */
    /* cmp MEM8(edx), 0 */ /* 0x17058D7A: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058DF2; /* 0x17058D7D: jne 0x17058df2 */
L_17058D7F:
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x17058D7F: movzx eax, byte ptr [edx + 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17058D83: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x17058D86: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17058D89: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + esi * 2; /* 0x17058D8D: lea edx, [esi + esi*2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17058D90: mov dword ptr [ebp - 8], eax */
    esi = ebx + edx * 4; /* 0x17058D93: lea esi, [ebx + edx*4] */
L_17058D96:
    edx = MEM32(ebp + (-0x4)); /* 0x17058D96: mov edx, dword ptr [ebp - 4] */
    edx = MEM32(esi + edx * 4); /* 0x17058D99: mov edx, dword ptr [esi + edx*4] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x17058D9C: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17058DBF; /* 0x17058D9F: je 0x17058dbf */
L_17058DA1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x1C); /* 0x17058DA1: sub edx, dword ptr [ecx + 0x1c] */
    _flag_k = FK_CMP;
    eax = edx + edx * 2; /* 0x17058DA4: lea eax, [edx + edx*2] */
    edx = edi + eax * 4; /* 0x17058DA7: lea edx, [edi + eax*4] */
    /* cmp MEM8(edx), 0 */ /* 0x17058DAA: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x8)); /* 0x17058DAD: mov eax, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058DBF; /* 0x17058DB0: jne 0x17058dbf */
L_17058DB2:
    edx = (uint32_t)MEM8(edx + 0x1); /* 0x17058DB2: movzx edx, byte ptr [edx + 1] */
    /* cmp edx, eax */ /* 0x17058DB6: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058DBF; /* 0x17058DB8: jae 0x17058dbf */
L_17058DBA:
    eax = edx; /* 0x17058DBA: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17058DBC: mov dword ptr [ebp - 8], eax */
L_17058DBF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17058DBF: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x17058DC2: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058D96; /* 0x17058DC6: jb 0x17058d96 */
L_17058DC8:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17058DC8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17058DCF; /* 0x17058DCB: jne 0x17058dcf */
L_17058DCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058DCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058DCF:
    edx = MEM32(ebp + (-0x1C)); /* 0x17058DCF: mov edx, dword ptr [ebp - 0x1c] */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x17058DD2: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058DE2; /* 0x17058DD5: jae 0x17058de2 */
L_17058DD7:
    esi = MEM32(ebp + 0x8); /* 0x17058DD7: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = esi; /* 0x17058DDA: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x17058DDD: mov dword ptr [ebp - 0xc], edx */
    goto L_17058DEF; /* 0x17058DE0: jmp 0x17058def */
L_17058DE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17058DF2; /* 0x17058DE2: jne 0x17058df2 */
L_17058DE4:
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x17058DE4: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058DF2; /* 0x17058DE7: jae 0x17058df2 */
L_17058DE9:
    edx = MEM32(ebp + 0x8); /* 0x17058DE9: mov edx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = edx; /* 0x17058DEC: mov dword ptr [ebp - 0x10], edx */
L_17058DEF:
    MEM32(ebp + (-0x14)) = eax; /* 0x17058DEF: mov dword ptr [ebp - 0x14], eax */
L_17058DF2:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17058DF2: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x17058DF5: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058D58; /* 0x17058DF9: jb 0x17058d58 */
L_17058DFF:
    eax = MEM32(ebp + (-0x10)); /* 0x17058DFF: mov eax, dword ptr [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x17058E02: pop edi */
    esi = POP32_VAL(esp); /* 0x17058E03: pop esi */
    ebx = POP32_VAL(esp); /* 0x17058E04: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17058E05: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17058E06: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17058E0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058E0Eu);

L_17058E0E:
    eax = ecx; /* 0x17058E0E: mov eax, ecx */
    fp_push(0.0); /* 0x17058E10: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17058E12: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x238) = _v; } /* 0x17058E14: fstp dword ptr [eax + 0x238] */
    MEM32(eax) = 0x17005AA0u; /* 0x17058E1A: mov dword ptr [eax], 0x17005aa0 */
    MEM32(eax + 0x4) = ecx; /* 0x17058E20: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x23C) = ecx; /* 0x17058E23: mov dword ptr [eax + 0x23c], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x17058E29: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x17058E2C: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x17058E2F: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x230) = ecx; /* 0x17058E32: mov dword ptr [eax + 0x230], ecx */
    MEM32(eax + 0x240) = ecx; /* 0x17058E38: mov dword ptr [eax + 0x240], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x17058E3E: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17058E41: ret  */
    RECOMP_REGS_OUT();
}

void sub_17058E47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058E47u);

L_17058E47:
    edi = edi; /* 0x17058E47: mov edi, edi */
    PUSH32(esp, esi); /* 0x17058E49: push esi */
    esi = ecx; /* 0x17058E4A: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x17058E4C: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x17058E4F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17005AA0u; /* 0x17058E51: mov dword ptr [esi], 0x17005aa0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058E60; /* 0x17058E57: je 0x17058e60 */
L_17058E59:
    PUSH32(esp, 3); /* 0x17058E59: push 3 */
    RECOMP_CALL(sub_17052DB9); /* 0x17058E5B: call 0x17052db9 */
    RECOMP_FLAGS_IN();
L_17058E60:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x17058E60: push dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x17058E63: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x17058E67: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x17058E6C: push dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x17058E6F: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x17058E73: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17058E78: push dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x17058E7B: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x17058E7F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x17058E84: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi + 0x23C); /* 0x17058E88: mov esi, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17058E8E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x17058E91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058E9C; /* 0x17058E93: je 0x17058e9c */
L_17058E95:
    PUSH32(esp, esi); /* 0x17058E95: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17058E96: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17058E9B: pop ecx */
L_17058E9C:
    esi = POP32_VAL(esp); /* 0x17058E9C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17058E9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_17058EA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058EA3u);

L_17058EA3:
    edi = edi; /* 0x17058EA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058EA5: push ebp */
    ebp = esp; /* 0x17058EA6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17058EA8: push esi */
    esi = ecx; /* 0x17058EA9: mov esi, ecx */
    RECOMP_CALL(sub_17058E47); /* 0x17058EAB: call 0x17058e47 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17058EB0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058EBD; /* 0x17058EB4: je 0x17058ebd */
L_17058EB6:
    PUSH32(esp, esi); /* 0x17058EB6: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17058EB7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17058EBC: pop ecx */
L_17058EBD:
    eax = esi; /* 0x17058EBD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17058EBF: pop esi */
    ebp = POP32_VAL(esp); /* 0x17058EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17058EC1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17058EC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058EC9u);

L_17058EC9:
    edi = edi; /* 0x17058EC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058ECB: push ebp */
    ebp = esp; /* 0x17058ECC: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17058ECE: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17058ED1: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x230)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax + 0x230) = MEM32(eax + 0x230) & 0xFFFFFFFBu; /* 0x17058ED4: and dword ptr [eax + 0x230], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x20) = ecx; /* 0x17058EDB: mov dword ptr [eax + 0x20], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x17058EDE: add eax, 0x24 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17058EE1: push eax */
    PUSH32(esp, ecx); /* 0x17058EE2: push ecx */
    RECOMP_CALL(sub_170533BA); /* 0x17058EE3: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17058EE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17058EEE; /* 0x17058EEA: jl 0x17058eee */
L_17058EEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17058EEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17058EEE:
    ebp = POP32_VAL(esp); /* 0x17058EEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17058EEF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17058EF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17058EF7u);

L_17058EF7:
    edi = edi; /* 0x17058EF7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17058EF9: push ebp */
    ebp = esp; /* 0x17058EFA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x17058EFC: sub esp, 0xcc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17058F02: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17058F03: mov esi, dword ptr [ebp + 8] */
    eax = esi + 0x24; /* 0x17058F06: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x17058F09: push eax */
    ecx = ebp + (-0xCC); /* 0x17058F0A: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_1703D7E2); /* 0x17058F10: call 0x1703d7e2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x17058F15: mov eax, dword ptr [ebp - 0x40] */
    /* test eax, eax */ /* 0x17058F18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058F30; /* 0x17058F1A: je 0x17058f30 */
L_17058F1C:
    eax = (uint32_t)MEM8(eax + 0x4); /* 0x17058F1C: movzx eax, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17058F20: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x17058F21: mov dword ptr [ebp + 8], eax */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_17058F30; /* 0x17058F24: je 0x17058f30 */
L_17058F26:
    eax = 0x8876086Cu; /* 0x17058F26: mov eax, 0x8876086c */
    goto L_17059012; /* 0x17058F2B: jmp 0x17059012 */
L_17058F30:
    ecx = esi; /* 0x17058F30: mov ecx, esi */
    RECOMP_CALL(sub_1704D74B); /* 0x17058F32: call 0x1704d74b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17058F37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17058F39: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705900F; /* 0x17058F3C: jl 0x1705900f */
L_17058F42:
    PUSH32(esp, edi); /* 0x17058F42: push edi */
    edi = MEM32(esi + 0x1C); /* 0x17058F43: mov edi, dword ptr [esi + 0x1c] */
    /* test edi, edi */ /* 0x17058F46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17058F57; /* 0x17058F48: jbe 0x17058f57 */
L_17058F4A:
    eax = MEM32(esi + 0x10); /* 0x17058F4A: mov eax, dword ptr [esi + 0x10] */
    ecx = edi; /* 0x17058F4D: mov ecx, edi */
L_17058F4F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax); /* 0x17058F4F: add edi, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17058F51: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17058F54: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17058F4F; /* 0x17058F55: jne 0x17058f4f */
L_17058F57:
    /* cmp MEM32(esi + 0x240), edi */ /* 0x17058F57: cmp dword ptr [esi + 0x240], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x240)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17058F5D: push ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17058F96; /* 0x17058F5E: jae 0x17058f96 */
L_17058F60:
    ebx = esi + 0x23C; /* 0x17058F60: lea ebx, [esi + 0x23c] */
    PUSH32(esp, MEM32(ebx)); /* 0x17058F66: push dword ptr [ebx] */
    RECOMP_CALL(sub_1721B010); /* 0x17058F68: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x240)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x240) = MEM32(esi + 0x240) & 0; /* 0x17058F6D: and dword ptr [esi + 0x240], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x17058F74: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17058F76: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17058F76: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17058F79: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17058F7A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17058F7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17058F81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17058F82: pop ecx */
    MEM32(ebx) = eax; /* 0x17058F83: mov dword ptr [ebx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17058F90; /* 0x17058F85: jne 0x17058f90 */
L_17058F87:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17058F87: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1705900D; /* 0x17058F8E: jmp 0x1705900d */
L_17058F90:
    MEM32(esi + 0x240) = edi; /* 0x17058F90: mov dword ptr [esi + 0x240], edi */
L_17058F96:
    edi = MEM32(esi + 0x23C); /* 0x17058F96: mov edi, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17058F9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), ebx */ /* 0x17058F9E: cmp dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705900D; /* 0x17058FA1: jbe 0x1705900d */
L_17058FA3:
    eax = MEM32(esi + 0x10); /* 0x17058FA3: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17058FA6: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + ebx * 4), 0 */ /* 0x17058FAA: cmp dword ptr [eax + ebx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17058FFE; /* 0x17058FAE: jbe 0x17058ffe */
L_17058FB0:
    ecx = MEM32(esi + 0xC); /* 0x17058FB0: mov ecx, dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x238)); /* 0x17058FB3: fld dword ptr [esi + 0x238] */
    eax = MEM32(esi + 0x18); /* 0x17058FB9: mov eax, dword ptr [esi + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x17058FBC: imul ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x17058FBF: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17058FC2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17058FC2: shl ecx, 2 */
    edx = eax + ecx; /* 0x17058FC5: lea edx, [eax + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x17058FC8: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17058FCA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17058FCC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17058FF0; /* 0x17058FCF: jp 0x17058ff0 */
L_17058FD1:
    eax = MEM32(esi + 0x14); /* 0x17058FD1: mov eax, dword ptr [esi + 0x14] */
    eax = MEM32(ecx + eax); /* 0x17058FD4: mov eax, dword ptr [ecx + eax] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17058FD7: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17058FD7: shl eax, 1 */
    /* test eax, eax */ /* 0x17058FD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x17058FDB: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x17058FDE: fild dword ptr [ebp - 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17058FE9; /* 0x17058FE1: jge 0x17058fe9 */
L_17058FE3:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17058FE3: fadd dword ptr [0x1700142c] */
L_17058FE9:
    _st[0] += (double)*(float*)ADDR(edx); /* 0x17058FE9: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x17058FEB: fstp dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17058FED: add edi, 4 */
    _flag_k = FK_ADD;
L_17058FF0:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17058FF0: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x10); /* 0x17058FF3: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17058FF6: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + ebx * 4) */ /* 0x17058FF9: cmp ecx, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + ebx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058FB0; /* 0x17058FFC: jb 0x17058fb0 */
L_17058FFE:
    MEM32(edi) = 0xBF800000u; /* 0x17058FFE: mov dword ptr [edi], 0xbf800000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17059004: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17059007: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x1C) */ /* 0x17059008: cmp ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17058FA3; /* 0x1705900B: jb 0x17058fa3 */
L_1705900D:
    ebx = POP32_VAL(esp); /* 0x1705900D: pop ebx */
    edi = POP32_VAL(esp); /* 0x1705900E: pop edi */
L_1705900F:
    eax = MEM32(ebp + (-0x4)); /* 0x1705900F: mov eax, dword ptr [ebp - 4] */
L_17059012:
    esi = POP32_VAL(esp); /* 0x17059012: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17059013: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17059014: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705901C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705901Cu);

L_1705901C:
    edi = edi; /* 0x1705901C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705901E: push ebp */
    ebp = esp; /* 0x1705901F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x17059021: sub esp, 0x324 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x17059027: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705902C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1705902F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x17059032: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x17059033: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x17059036: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17059037: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1705903A: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1705903D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x17059040: push edi */
    MEM32(ebp + (-0x54)) = eax; /* 0x17059041: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + 0x14); /* 0x17059044: mov eax, dword ptr [ebp + 0x14] */
    edi = esi + 0x230; /* 0x17059047: lea edi, [esi + 0x230] */
    /* test MEM8(edi), 4 */ /* 0x1705904D: test byte ptr [edi], 4 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x50)) = eax; /* 0x17059050: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x58)) = ebx; /* 0x17059053: mov dword ptr [ebp - 0x58], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17059061; /* 0x17059056: jne 0x17059061 */
L_17059058:
    PUSH32(esp, esi); /* 0x17059058: push esi */
    RECOMP_CALL(sub_17058EF7); /* 0x17059059: call 0x17058ef7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | 4)); _flag_b = (uint32_t)((MEM32(edi) | 4));
    MEM32(edi) = MEM32(edi) | 4; /* 0x1705905E: or dword ptr [edi], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059061:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17059061: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C)), edi */ /* 0x17059063: cmp dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059178; /* 0x17059066: je 0x17059178 */
L_1705906C:
    /* cmp MEM32(ebp + (-0x50)), edi */ /* 0x1705906C: cmp dword ptr [ebp - 0x50], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059178; /* 0x1705906F: je 0x17059178 */
L_17059075:
    /* cmp ebx, edi */ /* 0x17059075: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059178; /* 0x17059077: je 0x17059178 */
L_1705907D:
    eax = esi + 0x24; /* 0x1705907D: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x17059080: push eax */
    ecx = ebp + (-0x11C); /* 0x17059081: lea ecx, [ebp - 0x11c] */
    RECOMP_CALL(sub_1703D7E2); /* 0x17059087: call 0x1703d7e2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1705908C: push edi */
    PUSH32(esp, edi); /* 0x1705908D: push edi */
    ecx = ebp + (-0x11C); /* 0x1705908E: lea ecx, [ebp - 0x11c] */
    RECOMP_CALL(sub_1704E9C0); /* 0x17059094: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17059099: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059178; /* 0x1705909B: je 0x17059178 */
L_170590A1:
    /* cmp MEM16(eax + 0x2), LO16(edi) */ /* 0x170590A1: cmp word ptr [eax + 2], di */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059178; /* 0x170590A5: jne 0x17059178 */
L_170590AB:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x170590AB: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059178; /* 0x170590AF: jne 0x17059178 */
L_170590B5:
    ecx = esi + 0x24; /* 0x170590B5: lea ecx, [esi + 0x24] */
    goto L_17059103; /* 0x170590B8: jmp 0x17059103 */
L_170590BA:
    SET_LO8(eax, MEM8(ecx + 0x6)); /* 0x170590BA: mov al, byte ptr [ecx + 6] */
    /* test LO8(eax), LO8(eax) */ /* 0x170590BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170590CD; /* 0x170590BF: je 0x170590cd */
L_170590C1:
    /* cmp LO8(eax), 3 */ /* 0x170590C1: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170590CD; /* 0x170590C3: je 0x170590cd */
L_170590C5:
    /* cmp LO8(eax), 6 */ /* 0x170590C5: cmp al, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170590CD; /* 0x170590C7: je 0x170590cd */
L_170590C9:
    /* cmp LO8(eax), 7 */ /* 0x170590C9: cmp al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059100; /* 0x170590CB: jne 0x17059100 */
L_170590CD:
    SET_LO8(eax, MEM8(ecx + 0x4)); /* 0x170590CD: mov al, byte ptr [ecx + 4] */
    /* cmp LO8(eax), 2 */ /* 0x170590D0: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170590DC; /* 0x170590D2: je 0x170590dc */
L_170590D4:
    /* cmp LO8(eax), 3 */ /* 0x170590D4: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059178; /* 0x170590D6: jne 0x17059178 */
L_170590DC:
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x170590DC: movzx eax, word ptr [ecx + 2] */
    edx = MEM32(ebp + (-0x50)); /* 0x170590E0: mov edx, dword ptr [ebp - 0x50] */
    ebx = MEM32(ebp + (-0x58)); /* 0x170590E3: mov ebx, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170590E6: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x170590E8: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + edi * 4 + (-0x220)) = eax; /* 0x170590EA: mov dword ptr [ebp + edi*4 - 0x220], eax */
    SET_LO8(eax, MEM8(ecx + 0x6)); /* 0x170590F1: mov al, byte ptr [ecx + 6] */
    MEM32(ebp + edi * 4 + (-0x324)) = edx; /* 0x170590F4: mov dword ptr [ebp + edi*4 - 0x324], edx */
    MEM8(ebp + edi + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x170590FB: mov byte ptr [ebp + edi - 0x48], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170590FF: inc edi */
    _flag_k = FK_INC;
L_17059100:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x17059100: add ecx, 8 */
    _flag_k = FK_ADD;
L_17059103:
    /* cmp MEM16(ecx), 0xFFu */ /* 0x17059103: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170590BA; /* 0x17059108: jne 0x170590ba */
L_1705910A:
    /* test MEM8(ebp + (-0x4C)), 0xFu */ /* 0x1705910A: test byte ptr [ebp - 0x4c], 0xf */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4C))) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17059146; /* 0x1705910E: jne 0x17059146 */
L_17059110:
    /* test MEM8(ebp + (-0x54)), 0xFu */ /* 0x17059110: test byte ptr [ebp - 0x54], 0xf */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x54))) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17059146; /* 0x17059114: jne 0x17059146 */
L_17059116:
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x17059116: push dword ptr [esi + 0x23c] */
    eax = ebp + (-0x48); /* 0x1705911C: lea eax, [ebp - 0x48] */
    PUSH32(esp, edi); /* 0x1705911F: push edi */
    PUSH32(esp, eax); /* 0x17059120: push eax */
    eax = ebp + (-0x220); /* 0x17059121: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x17059127: push eax */
    eax = ebp + (-0x324); /* 0x17059128: lea eax, [ebp - 0x324] */
    PUSH32(esp, eax); /* 0x1705912E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x1705912F: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17059132: push dword ptr [esi + 0x1c] */
    PUSH32(esp, ebx); /* 0x17059135: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x17059136: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x17059139: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1705913C: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_17044461); /* 0x1705913F: call 0x17044461 */
    RECOMP_FLAGS_IN();
    goto L_17059174; /* 0x17059144: jmp 0x17059174 */
L_17059146:
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x17059146: push dword ptr [esi + 0x23c] */
    eax = ebp + (-0x48); /* 0x1705914C: lea eax, [ebp - 0x48] */
    PUSH32(esp, edi); /* 0x1705914F: push edi */
    PUSH32(esp, eax); /* 0x17059150: push eax */
    eax = ebp + (-0x220); /* 0x17059151: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x17059157: push eax */
    eax = ebp + (-0x324); /* 0x17059158: lea eax, [ebp - 0x324] */
    PUSH32(esp, eax); /* 0x1705915E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x1705915F: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17059162: push dword ptr [esi + 0x1c] */
    PUSH32(esp, ebx); /* 0x17059165: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x17059166: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x17059169: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1705916C: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_170B862D); /* 0x1705916F: call 0x170b862d */
    RECOMP_FLAGS_IN();
L_17059174:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059174: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705917D; /* 0x17059176: jmp 0x1705917d */
L_17059178:
    eax = 0x8876086Cu; /* 0x17059178: mov eax, 0x8876086c */
L_1705917D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1705917D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17059180: pop edi */
    esi = POP32_VAL(esp); /* 0x17059181: pop esi */
    ebx = POP32_VAL(esp); /* 0x17059182: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17059183: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17059188: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17059189: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17059191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059191u);

L_17059191:
    edi = edi; /* 0x17059191: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059193: push ebp */
    ebp = esp; /* 0x17059194: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17059196: push esi */
    PUSH32(esp, 0x244u); /* 0x17059197: push 0x244 */
    RECOMP_CALL(sub_1721B01C); /* 0x1705919C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170591A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170591A3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170591B1; /* 0x170591A4: je 0x170591b1 */
L_170591A6:
    ecx = eax; /* 0x170591A6: mov ecx, eax */
    RECOMP_CALL(sub_17058E0E); /* 0x170591A8: call 0x17058e0e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170591AD: mov esi, eax */
    goto L_170591B3; /* 0x170591AF: jmp 0x170591b3 */
L_170591B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170591B1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170591B3:
    /* test esi, esi */ /* 0x170591B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170591BE; /* 0x170591B5: jne 0x170591be */
L_170591B7:
    eax = 0x8007000Eu; /* 0x170591B7: mov eax, 0x8007000e */
    goto L_170591ED; /* 0x170591BC: jmp 0x170591ed */
L_170591BE:
    PUSH32(esp, edi); /* 0x170591BE: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170591BF: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170591C2: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170591C4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170591C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170591CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17052ECB); /* 0x170591CD: call 0x17052ecb */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170591D2: mov edi, eax */
    /* test edi, edi */ /* 0x170591D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170591E5; /* 0x170591D6: jge 0x170591e5 */
L_170591D8:
    PUSH32(esp, 1); /* 0x170591D8: push 1 */
    ecx = esi; /* 0x170591DA: mov ecx, esi */
    RECOMP_CALL(sub_17058EA3); /* 0x170591DC: call 0x17058ea3 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x170591E1: mov eax, edi */
    goto L_170591EC; /* 0x170591E3: jmp 0x170591ec */
L_170591E5:
    eax = MEM32(ebp + 0x18); /* 0x170591E5: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x170591E8: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170591EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170591EC:
    edi = POP32_VAL(esp); /* 0x170591EC: pop edi */
L_170591ED:
    esi = POP32_VAL(esp); /* 0x170591ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x170591EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170591EF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170591F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170591F7u);

L_170591F7:
    edi = edi; /* 0x170591F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170591F9: push ebp */
    ebp = esp; /* 0x170591FA: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170591FC: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x170591FD: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x17059200: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059212; /* 0x17059202: je 0x17059212 */
L_17059204:
    PUSH32(esp, 0); /* 0x17059204: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17059206: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704E9F0); /* 0x17059209: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705920E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17059219; /* 0x17059210: jne 0x17059219 */
L_17059212:
    eax = 0x8876086Cu; /* 0x17059212: mov eax, 0x8876086c */
    goto L_1705926B; /* 0x17059217: jmp 0x1705926b */
L_17059219:
    PUSH32(esp, esi); /* 0x17059219: push esi */
    PUSH32(esp, 0x244u); /* 0x1705921A: push 0x244 */
    RECOMP_CALL(sub_1721B01C); /* 0x1705921F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17059224: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17059226: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059234; /* 0x17059227: je 0x17059234 */
L_17059229:
    ecx = eax; /* 0x17059229: mov ecx, eax */
    RECOMP_CALL(sub_17058E0E); /* 0x1705922B: call 0x17058e0e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17059230: mov esi, eax */
    goto L_17059236; /* 0x17059232: jmp 0x17059236 */
L_17059234:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17059234: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059236:
    /* test esi, esi */ /* 0x17059236: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17059241; /* 0x17059238: jne 0x17059241 */
L_1705923A:
    eax = 0x8007000Eu; /* 0x1705923A: mov eax, 0x8007000e */
    goto L_1705926A; /* 0x1705923F: jmp 0x1705926a */
L_17059241:
    PUSH32(esp, edi); /* 0x17059241: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17059242: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x17059245: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17059247: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705924A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17052EA0); /* 0x1705924D: call 0x17052ea0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17059252: mov edi, eax */
    /* test edi, edi */ /* 0x17059254: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17059265; /* 0x17059256: jge 0x17059265 */
L_17059258:
    PUSH32(esp, 1); /* 0x17059258: push 1 */
    ecx = esi; /* 0x1705925A: mov ecx, esi */
    RECOMP_CALL(sub_17058EA3); /* 0x1705925C: call 0x17058ea3 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17059261: mov eax, edi */
    goto L_17059269; /* 0x17059263: jmp 0x17059269 */
L_17059265:
    MEM32(ebx) = esi; /* 0x17059265: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059267: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059269:
    edi = POP32_VAL(esp); /* 0x17059269: pop edi */
L_1705926A:
    esi = POP32_VAL(esp); /* 0x1705926A: pop esi */
L_1705926B:
    ebx = POP32_VAL(esp); /* 0x1705926B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1705926C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1705926D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17059275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059275u);

L_17059275:
    edi = edi; /* 0x17059275: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059277: push ebp */
    ebp = esp; /* 0x17059278: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x1705927A: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x208); /* 0x17059280: lea eax, [ebp - 0x208] */
    PUSH32(esp, eax); /* 0x17059286: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17059287: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170533BA); /* 0x1705928A: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705928F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1705929A; /* 0x17059291: jge 0x1705929a */
L_17059293:
    eax = 0x8876086Cu; /* 0x17059293: mov eax, 0x8876086c */
    goto L_170592AF; /* 0x17059298: jmp 0x170592af */
L_1705929A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705929A: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x208); /* 0x1705929D: lea eax, [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170592A3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170592A6: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170592A7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170591F7); /* 0x170592AA: call 0x170591f7 */
    RECOMP_FLAGS_IN();
L_170592AF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170592AF: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170592B0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170592B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170592B8u);

L_170592B8:
    edi = edi; /* 0x170592B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170592BA: push ebp */
    ebp = esp; /* 0x170592BB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x524u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x524u; /* 0x170592BD: sub esp, 0x524 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170592C3: push ebx */
    PUSH32(esp, esi); /* 0x170592C4: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170592C5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170592C7: push edi */
    ecx = ebp + (-0x114); /* 0x170592C8: lea ecx, [ebp - 0x114] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x170592CE: mov dword ptr [ebp - 0x34], ebx */
    RECOMP_CALL(sub_1704AC26); /* 0x170592D1: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170592D6: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, ebx */ /* 0x170592D9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = ebx; /* 0x170592DB: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x170592DE: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x170592E1: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x170592E4: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x170592E7: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x44)) = ebx; /* 0x170592EA: mov dword ptr [ebp - 0x44], ebx */
    MEM32(ebp + (-0x40)) = ebx; /* 0x170592ED: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x170592F0: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x50)) = ebx; /* 0x170592F3: mov dword ptr [ebp - 0x50], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059875; /* 0x170592F6: je 0x17059875 */
L_170592FC:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x170592FC: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059875; /* 0x170592FF: je 0x17059875 */
L_17059305:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x17059305: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059875; /* 0x17059308: je 0x17059875 */
L_1705930E:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1705930E: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059875; /* 0x17059311: je 0x17059875 */
L_17059317:
    eax = MEM32(esi); /* 0x17059317: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x31C); /* 0x17059319: lea ecx, [ebp - 0x31c] */
    PUSH32(esp, ecx); /* 0x1705931F: push ecx */
    PUSH32(esp, esi); /* 0x17059320: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17059321: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17059324: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x17059326: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x17059329: jl 0x1705987c */
L_1705932F:
    eax = ebp + (-0x31C); /* 0x1705932F: lea eax, [ebp - 0x31c] */
    PUSH32(esp, eax); /* 0x17059335: push eax */
    ecx = ebp + (-0x114); /* 0x17059336: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_1703CC5E); /* 0x1705933C: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x17059341: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x1C); /* 0x17059343: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x17059346: push ecx */
    PUSH32(esp, ebx); /* 0x17059347: push ebx */
    PUSH32(esp, esi); /* 0x17059348: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x17059349: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705934C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1705934E: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x17059351: jl 0x1705987c */
L_17059357:
    eax = MEM32(ebp + (-0x1C)); /* 0x17059357: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, ebx */ /* 0x1705935A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059875; /* 0x1705935C: je 0x17059875 */
L_17059362:
    eax = eax + eax * 4; /* 0x17059362: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17059365: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17059365: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17059368: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17059369: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705936E: mov edi, eax */
    /* cmp edi, ebx */ /* 0x17059370: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17059372: pop ecx */
    MEM32(ebp + (-0x50)) = edi; /* 0x17059373: mov dword ptr [ebp - 0x50], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059384; /* 0x17059376: jne 0x17059384 */
L_17059378:
    MEM32(ebp + (-0xC)) = 0x8007000Eu; /* 0x17059378: mov dword ptr [ebp - 0xc], 0x8007000e */
    goto L_1705987C; /* 0x1705937F: jmp 0x1705987c */
L_17059384:
    eax = MEM32(esi); /* 0x17059384: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x1C); /* 0x17059386: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x17059389: push ecx */
    PUSH32(esp, edi); /* 0x1705938A: push edi */
    PUSH32(esp, esi); /* 0x1705938B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1705938C: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705938F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x17059391: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x17059394: jl 0x1705987c */
L_1705939A:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x1705939A: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ebx; /* 0x1705939D: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170593A0: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x170593A3: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170593CE; /* 0x170593A6: jbe 0x170593ce */
L_170593A8:
    ecx = edi + 0x10; /* 0x170593A8: lea ecx, [edi + 0x10] */
    edi = MEM32(ebp + (-0x1C)); /* 0x170593AB: mov edi, dword ptr [ebp - 0x1c] */
L_170593AE:
    edx = MEM32(ecx); /* 0x170593AE: mov edx, dword ptr [ecx] */
    eax = MEM32(ecx + (-0x4)); /* 0x170593B0: mov eax, dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170593B3: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x170593B5: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170593BD; /* 0x170593B8: jbe 0x170593bd */
L_170593BA:
    MEM32(ebp + (-0x20)) = eax; /* 0x170593BA: mov dword ptr [ebp - 0x20], eax */
L_170593BD:
    /* cmp MEM32(ebp + (-0x8)), edx */ /* 0x170593BD: cmp dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170593C5; /* 0x170593C0: ja 0x170593c5 */
L_170593C2:
    MEM32(ebp + (-0x8)) = edx; /* 0x170593C2: mov dword ptr [ebp - 8], edx */
L_170593C5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + edx; /* 0x170593C5: add dword ptr [ebp - 4], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x170593C8: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170593CB: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170593AE; /* 0x170593CC: jne 0x170593ae */
L_170593CE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x170593CE: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM16(ebp + (-0x31C)), 0xFFu */ /* 0x170593D0: cmp word ptr [ebp - 0x31c], 0xff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x31C))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = ebp + (-0x31C); /* 0x170593D9: lea ecx, [ebp - 0x31c] */
    eax = ebp + (-0x524); /* 0x170593DF: lea eax, [ebp - 0x524] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705941F; /* 0x170593E5: je 0x1705941f */
L_170593E7:
    SET_LO8(ebx, MEM8(ecx + 0x6)); /* 0x170593E7: mov bl, byte ptr [ecx + 6] */
    /* cmp LO8(ebx), 1 */ /* 0x170593EA: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059413; /* 0x170593ED: je 0x17059413 */
L_170593EF:
    /* cmp LO8(ebx), 2 */ /* 0x170593EF: cmp bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059413; /* 0x170593F2: je 0x17059413 */
L_170593F4:
    edi = MEM32(ecx); /* 0x170593F4: mov edi, dword ptr [ecx] */
    MEM32(eax) = edi; /* 0x170593F6: mov dword ptr [eax], edi */
    edi = MEM32(ecx + 0x4); /* 0x170593F8: mov edi, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = edi; /* 0x170593FB: mov dword ptr [eax + 4], edi */
    SET_LO16(edi, (uint32_t)LO8(edx)); /* 0x170593FE: movzx di, dl */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x17059402: mov word ptr [eax + 2], di */
    edi = (uint32_t)MEM8(eax + 0x4); /* 0x17059406: movzx edi, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x17005980)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi + 0x17005980)); /* 0x1705940A: add dl, byte ptr [edi + 0x17005980] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17059410: add eax, 8 */
    _flag_k = FK_ADD;
L_17059413:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x17059413: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), 0xFFu */ /* 0x17059416: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170593E7; /* 0x1705941B: jne 0x170593e7 */
L_1705941D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705941D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705941F:
    edx = MEM32(ecx); /* 0x1705941F: mov edx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x4); /* 0x17059421: mov ecx, dword ptr [ecx + 4] */
    MEM32(eax) = edx; /* 0x17059424: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x17059426: mov dword ptr [eax + 4], ecx */
    eax = ebp + (-0x34); /* 0x17059429: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1705942C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705942D: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x524); /* 0x17059430: lea eax, [ebp - 0x524] */
    PUSH32(esp, eax); /* 0x17059436: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x17059437: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_170591F7); /* 0x1705943A: call 0x170591f7 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705943F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x17059441: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x17059444: jl 0x1705987c */
L_1705944A:
    eax = MEM32(esi); /* 0x1705944A: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x28); /* 0x1705944C: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1705944F: push ecx */
    PUSH32(esp, 0x10u); /* 0x17059450: push 0x10 */
    PUSH32(esp, esi); /* 0x17059452: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x17059453: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17059456: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x17059458: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x1705945B: jl 0x1705987c */
L_17059461:
    eax = MEM32(esi); /* 0x17059461: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x30); /* 0x17059463: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x17059466: push ecx */
    PUSH32(esp, 0x10u); /* 0x17059467: push 0x10 */
    PUSH32(esp, esi); /* 0x17059469: push esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1705946A: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705946D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1705946F: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705987C; /* 0x17059472: jl 0x1705987c */
L_17059478:
    eax = MEM32(esi); /* 0x17059478: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705947A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1705947B: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = ~eax; /* 0x1705947E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x17059480: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = eax; /* 0x17059483: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x88)); /* 0x17059486: mov eax, dword ptr [ebp - 0x88] */
    /* cmp eax, ebx */ /* 0x1705948C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059494; /* 0x1705948E: jne 0x17059494 */
L_17059490:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059490: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17059499; /* 0x17059492: jmp 0x17059499 */
L_17059494:
    eax = (uint32_t)MEM8(eax + 0x4); /* 0x17059494: movzx eax, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17059498: inc eax */
    _flag_k = FK_INC;
L_17059499:
    edi = MEM32(ebp + 0xC); /* 0x17059499: mov edi, dword ptr [ebp + 0xc] */
    esi = eax + 0x1; /* 0x1705949C: lea esi, [eax + 1] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1705949F: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1705949F: shl edi, 2 */
    PUSH32(esp, edi); /* 0x170594A2: push edi */
    MEM32(ebp + (-0x38)) = esi; /* 0x170594A3: mov dword ptr [ebp - 0x38], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x170594A6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170594AB: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x170594AC: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170594AF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170594B4: push edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x170594B5: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170594B8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x4))); /* 0x170594BD: imul esi, dword ptr [ebp - 4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x170594C1: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x170594C1: shl esi, 2 */
    PUSH32(esp, esi); /* 0x170594C4: push esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x170594C5: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170594C8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x170594CD: push esi */
    MEM32(ebp + (-0x44)) = eax; /* 0x170594CE: mov dword ptr [ebp - 0x44], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170594D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170594D6: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x40)) = eax; /* 0x170594D9: mov dword ptr [ebp - 0x40], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170594DC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x170594E1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x170594E4: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x170594E7: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x170594EA: je 0x17059378 */
L_170594F0:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x170594F0: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x170594F3: je 0x17059378 */
L_170594F9:
    /* cmp MEM32(ebp + (-0x24)), ebx */ /* 0x170594F9: cmp dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x170594FC: je 0x17059378 */
L_17059502:
    /* cmp MEM32(ebp + (-0x44)), ebx */ /* 0x17059502: cmp dword ptr [ebp - 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x17059505: je 0x17059378 */
L_1705950B:
    /* cmp MEM32(ebp + (-0x40)), ebx */ /* 0x1705950B: cmp dword ptr [ebp - 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x1705950E: je 0x17059378 */
L_17059514:
    /* cmp eax, ebx */ /* 0x17059514: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059378; /* 0x17059516: je 0x17059378 */
L_1705951C:
    ecx = edi; /* 0x1705951C: mov ecx, edi */
    edi = MEM32(ebp + (-0x10)); /* 0x1705951E: mov edi, dword ptr [ebp - 0x10] */
    edx = ecx; /* 0x17059521: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17059523: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17059523: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059526: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17059528: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705952A: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705952C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705952F: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x17059531: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x17059534: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705964A; /* 0x17059537: jbe 0x1705964a */
L_1705953D:
    ebx = MEM32(ebp + 0x10); /* 0x1705953D: mov ebx, dword ptr [ebp + 0x10] */
L_17059540:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x17059540: push dword ptr [ebp - 0x14] */
    esi = MEM32(ebx + 0xC); /* 0x17059543: mov esi, dword ptr [ebx + 0xc] */
    edi = MEM32(ebx + 0x10); /* 0x17059546: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x17059549: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1705954B: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705954F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17059550: push dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = edi; /* 0x17059553: mov dword ptr [ebp - 0x20], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705955F; /* 0x17059556: je 0x1705955f */
L_17059558:
    RECOMP_CALL(sub_1704F68A); /* 0x17059558: call 0x1704f68a */
    RECOMP_FLAGS_IN();
    goto L_17059564; /* 0x1705955D: jmp 0x17059564 */
L_1705955F:
    RECOMP_CALL(sub_1704F702); /* 0x1705955F: call 0x1704f702 */
    RECOMP_FLAGS_IN();
L_17059564:
    eax = MEM32(ebp + (-0x84)); /* 0x17059564: mov eax, dword ptr [ebp - 0x84] */
    /* test eax, eax */ /* 0x1705956A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705957F; /* 0x1705956C: je 0x1705957f */
L_1705956E:
    ecx = MEM32(ebp + (-0x54)); /* 0x1705956E: mov ecx, dword ptr [ebp - 0x54] */
    edx = (uint32_t)MEM16(eax + 0x2); /* 0x17059571: movzx edx, word ptr [eax + 2] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x17059575: imul ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x28)); /* 0x17059578: add ecx, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1705957B: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_17059581; /* 0x1705957D: jmp 0x17059581 */
L_1705957F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705957F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059581:
    /* cmp esi, edi */ /* 0x17059581: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x17059583: mov dword ptr [ebp - 4], esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17059638; /* 0x17059586: jae 0x17059638 */
L_1705958C:
    eax = MEM32(ebp + (-0x14)); /* 0x1705958C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1705958F: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x17059591: mov dword ptr [ebp - 0x3c], eax */
L_17059594:
    eax = MEM32(ebp + (-0x3C)); /* 0x17059594: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17059597: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(eax + ecx), 0 */ /* 0x1705959A: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059626; /* 0x1705959E: je 0x17059626 */
L_170595A4:
    eax = MEM32(ebp + (-0x38)); /* 0x170595A4: mov eax, dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x170595A7: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170595A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x170595AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059624; /* 0x170595AD: jbe 0x17059624 */
L_170595AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170595AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170595B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170595B1: dec eax */
    _flag_k = FK_DEC;
    /* cmp edi, eax */ /* 0x170595B2: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170595BC; /* 0x170595B4: jne 0x170595bc */
L_170595B6:
    fp_push(1.0); /* 0x170595B6: fld1  */
    _st[0] -= _st[1]; /* 0x170595B8: fsub st(1) */
    goto L_170595D5; /* 0x170595BA: jmp 0x170595d5 */
L_170595BC:
    eax = MEM32(ebp + (-0x54)); /* 0x170595BC: mov eax, dword ptr [ebp - 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x170595BF: imul eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x88)); /* 0x170595C3: mov esi, dword ptr [ebp - 0x88] */
    esi = (uint32_t)MEM16(esi + 0x2); /* 0x170595C9: movzx esi, word ptr [esi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x28)); /* 0x170595CD: add esi, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170595D0: add esi, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(esi + edi * 4)); /* 0x170595D2: fld dword ptr [esi + edi*4] */
L_170595D5:
    fp_push(_st[0]); /* 0x170595D5: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x170595D7: faddp st(2) */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170595D9: fld dword ptr [0x17001430] */
    fp_push(_st[1]); /* 0x170595DF: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170595E1: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170595E3: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170595E5: fstp st(0) */
    /* test HI8(eax), 0x44u */ /* 0x170595E7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17059619; /* 0x170595EA: jnp 0x17059619 */
L_170595EC:
    /* cmp MEM32(ebp + (-0x84)), 0 */ /* 0x170595EC: cmp dword ptr [ebp - 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059606; /* 0x170595F3: je 0x17059606 */
L_170595F5:
    eax = MEM32(edx); /* 0x170595F5: mov eax, dword ptr [edx] */
    esi = MEM32(ebx + 0x14); /* 0x170595F7: mov esi, dword ptr [ebx + 0x14] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x170595FA: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x170595FA: shr eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x170595FC: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x17059601: mov eax, dword ptr [esi + eax*4] */
    goto L_1705960C; /* 0x17059604: jmp 0x1705960c */
L_17059606:
    eax = MEM32(ebx + 0x14); /* 0x17059606: mov eax, dword ptr [ebx + 0x14] */
    eax = MEM32(eax + edi * 4); /* 0x17059609: mov eax, dword ptr [eax + edi*4] */
L_1705960C:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1705960C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059619; /* 0x1705960F: je 0x17059619 */
L_17059611:
    esi = MEM32(ebp + (-0x10)); /* 0x17059611: mov esi, dword ptr [ebp - 0x10] */
    eax = esi + eax * 4; /* 0x17059614: lea eax, [esi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17059617: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_17059619:
    eax = MEM32(ebp + (-0x38)); /* 0x17059619: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1705961C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1705961D: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x17059620: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170595B1; /* 0x17059622: jb 0x170595b1 */
L_17059624:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17059624: fstp st(0) */
L_17059626:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x54)); /* 0x17059626: add edx, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17059629: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1705962C: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1705962F: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059594; /* 0x17059632: jb 0x17059594 */
L_17059638:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17059638: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x1705963B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x1705963E: add ebx, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x17059641: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059540; /* 0x17059644: jb 0x17059540 */
L_1705964A:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1705964A: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x44)); /* 0x1705964E: mov eax, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + (-0x18)); /* 0x17059651: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x17059654: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x17059656: mov eax, dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x24)); /* 0x17059659: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(ecx) = eax; /* 0x1705965C: mov dword ptr [ecx], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170596A3; /* 0x1705965E: jbe 0x170596a3 */
L_17059660:
    ebx = MEM32(ebp + (-0x18)); /* 0x17059660: mov ebx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x10)); /* 0x17059663: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x18)); /* 0x17059666: mov edx, dword ptr [ebp - 0x18] */
    edi = ecx; /* 0x17059669: mov edi, ecx */
    esi = edi; /* 0x1705966B: mov esi, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1705966D: sub ebx, edi */
    _flag_k = FK_CMP;
    ecx = edi + 0x4; /* 0x1705966F: lea ecx, [edi + 4] */
    edi = MEM32(ebp + 0xC); /* 0x17059672: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x17059675: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x17059677: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17059679: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1705967A: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1705967D: mov dword ptr [ebp - 0x2c], edi */
L_17059680:
    edi = MEM32(eax); /* 0x17059680: mov edi, dword ptr [eax] */
    ebx = MEM32(edx + eax); /* 0x17059682: mov ebx, dword ptr [edx + eax] */
    edi = ebx + edi * 4; /* 0x17059685: lea edi, [ebx + edi*4] */
    ebx = MEM32(ebp + (-0x3C)); /* 0x17059688: mov ebx, dword ptr [ebp - 0x3c] */
    MEM32(ebx + ecx) = edi; /* 0x1705968B: mov dword ptr [ebx + ecx], edi */
    edi = MEM32(eax); /* 0x1705968E: mov edi, dword ptr [eax] */
    ebx = MEM32(esi + eax); /* 0x17059690: mov ebx, dword ptr [esi + eax] */
    edi = ebx + edi * 4; /* 0x17059693: lea edi, [ebx + edi*4] */
    MEM32(ecx) = edi; /* 0x17059696: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17059698: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1705969B: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) - 1; /* 0x1705969E: dec dword ptr [ebp - 0x2c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17059680; /* 0x170596A1: jne 0x17059680 */
L_170596A3:
    ecx = MEM32(ebp + 0xC); /* 0x170596A3: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x10)); /* 0x170596A6: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x170596A9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x170596AD: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x170596AD: shl ecx, 2 */
    edx = ecx; /* 0x170596B0: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170596B2: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170596B2: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170596B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170596B7: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170596B9: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170596BB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170596BE: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x170596C0: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059827; /* 0x170596C4: jbe 0x17059827 */
L_170596CA:
    eax = MEM32(ebp + 0x10); /* 0x170596CA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170596CD: mov dword ptr [ebp - 4], eax */
L_170596D0:
    ecx = MEM32(ebp + (-0x4)); /* 0x170596D0: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170596D3: push dword ptr [ebp - 0x14] */
    edi = MEM32(ecx + 0xC); /* 0x170596D6: mov edi, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170596D9: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170596DC: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x170596DE: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170596E2: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x170596E3: push dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170596E6: mov dword ptr [ebp - 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170596F2; /* 0x170596E9: je 0x170596f2 */
L_170596EB:
    RECOMP_CALL(sub_1704F68A); /* 0x170596EB: call 0x1704f68a */
    RECOMP_FLAGS_IN();
    goto L_170596F7; /* 0x170596F0: jmp 0x170596f7 */
L_170596F2:
    RECOMP_CALL(sub_1704F702); /* 0x170596F2: call 0x1704f702 */
    RECOMP_FLAGS_IN();
L_170596F7:
    eax = MEM32(ebp + (-0x88)); /* 0x170596F7: mov eax, dword ptr [ebp - 0x88] */
    /* test eax, eax */ /* 0x170596FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059712; /* 0x170596FF: je 0x17059712 */
L_17059701:
    ecx = MEM32(ebp + (-0x54)); /* 0x17059701: mov ecx, dword ptr [ebp - 0x54] */
    ebx = (uint32_t)MEM16(eax + 0x2); /* 0x17059704: movzx ebx, word ptr [eax + 2] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x17059708: imul ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x28)); /* 0x1705970B: add ecx, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1705970E: add ebx, ecx */
    _flag_k = FK_ADD;
    goto L_17059714; /* 0x17059710: jmp 0x17059714 */
L_17059712:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17059712: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059714:
    /* cmp MEM32(ebp + (-0x84)), 0 */ /* 0x17059714: cmp dword ptr [ebp - 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1705971B: mov dword ptr [ebp - 0x2c], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059737; /* 0x1705971E: je 0x17059737 */
L_17059720:
    eax = MEM32(ebp + (-0x54)); /* 0x17059720: mov eax, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x84)); /* 0x17059723: mov ecx, dword ptr [ebp - 0x84] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17059729: imul eax, edi */
    esi = (uint32_t)MEM16(ecx + 0x2); /* 0x1705972C: movzx esi, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x17059730: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17059733: add esi, eax */
    _flag_k = FK_ADD;
    goto L_17059739; /* 0x17059735: jmp 0x17059739 */
L_17059737:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17059737: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059739:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x17059739: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17059814; /* 0x1705973C: jae 0x17059814 */
L_17059742:
    eax = MEM32(ebp + (-0x14)); /* 0x17059742: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17059745: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x17059747: mov dword ptr [ebp - 0x3c], eax */
L_1705974A:
    /* cmp MEM8(eax + edi), 0 */ /* 0x1705974A: cmp byte ptr [eax + edi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059801; /* 0x1705974E: je 0x17059801 */
L_17059754:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17059754: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x17059756: fldz  */
    /* cmp MEM32(ebp + (-0x38)), ecx */ /* 0x17059758: cmp dword ptr [ebp - 0x38], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x1705975B: mov dword ptr [ebp + 0x10], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170597FF; /* 0x1705975E: jbe 0x170597ff */
L_17059764:
    MEM32(ebp + (-0x48)) = ecx; /* 0x17059764: mov dword ptr [ebp - 0x48], ecx */
L_17059767:
    /* cmp MEM32(ebp + (-0x84)), 0 */ /* 0x17059767: cmp dword ptr [ebp - 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059787; /* 0x1705976E: je 0x17059787 */
L_17059770:
    ecx = MEM32(ebp + (-0x48)); /* 0x17059770: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(esi); /* 0x17059773: mov eax, dword ptr [esi] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17059775: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x17059775: shr eax, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x17059777: mov ecx, dword ptr [ebp - 4] */
    ecx = MEM32(ecx + 0x14); /* 0x1705977A: mov ecx, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x1705977D: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx + eax * 4); /* 0x17059782: mov edx, dword ptr [ecx + eax*4] */
    goto L_17059793; /* 0x17059785: jmp 0x17059793 */
L_17059787:
    eax = MEM32(ebp + (-0x4)); /* 0x17059787: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x14); /* 0x1705978A: mov eax, dword ptr [eax + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1705978D: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(eax + ecx * 4); /* 0x17059790: mov edx, dword ptr [eax + ecx*4] */
L_17059793:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x17059793: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170597E9; /* 0x17059796: je 0x170597e9 */
L_17059798:
    eax = MEM32(ebp + (-0x38)); /* 0x17059798: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705979B: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1705979C: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170597B1; /* 0x1705979F: jae 0x170597b1 */
L_170597A1:
    eax = MEM32(ebp + 0x10); /* 0x170597A1: mov eax, dword ptr [ebp + 0x10] */
    eax = ebx + eax * 4; /* 0x170597A4: lea eax, [ebx + eax*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170597A7: fld dword ptr [eax] */
    fp_push(_st[1]); /* 0x170597A9: fld st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170597AB: fadd dword ptr [eax] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170597AD: fstp st(2) */
    goto L_170597B5; /* 0x170597AF: jmp 0x170597b5 */
L_170597B1:
    fp_push(1.0); /* 0x170597B1: fld1  */
    _st[0] -= _st[1]; /* 0x170597B3: fsub st(1) */
L_170597B5:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170597B5: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170597BB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170597BD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170597E7; /* 0x170597C0: jne 0x170597e7 */
L_170597C2:
    eax = MEM32(ebp + (-0x10)); /* 0x170597C2: mov eax, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0x18)); /* 0x170597C5: mov ebx, dword ptr [ebp - 0x18] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x170597C8: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x170597C8: shl edx, 2 */
    ebx = MEM32(edx + ebx); /* 0x170597CB: mov ebx, dword ptr [edx + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170597CE: add eax, edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x170597D0: mov ecx, dword ptr [eax] */
    MEM32(ebx + ecx * 4) = edi; /* 0x170597D2: mov dword ptr [ebx + ecx*4], edi */
    ebx = MEM32(ebp + (-0x24)); /* 0x170597D5: mov ebx, dword ptr [ebp - 0x24] */
    edx = MEM32(edx + ebx); /* 0x170597D8: mov edx, dword ptr [edx + ebx] */
    ecx = MEM32(eax); /* 0x170597DB: mov ecx, dword ptr [eax] */
    ebx = MEM32(ebp + (-0x2C)); /* 0x170597DD: mov ebx, dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + ecx * 4) = _v; } /* 0x170597E0: fstp dword ptr [edx + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x170597E3: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_170597E9; /* 0x170597E5: jmp 0x170597e9 */
L_170597E7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170597E7: fstp st(0) */
L_170597E9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x170597E9: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x170597EC: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) + 8; /* 0x170597EF: add dword ptr [ebp - 0x48], 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x170597F3: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059767; /* 0x170597F6: jb 0x17059767 */
L_170597FC:
    eax = MEM32(ebp + (-0x3C)); /* 0x170597FC: mov eax, dword ptr [ebp - 0x3c] */
L_170597FF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170597FF: fstp st(0) */
L_17059801:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x54)); /* 0x17059801: add ebx, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x54)); /* 0x17059804: add esi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17059807: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x17059808: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1705980B: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705974A; /* 0x1705980E: jb 0x1705974a */
L_17059814:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17059814: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x17059817: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0x18u; /* 0x1705981A: add dword ptr [ebp - 4], 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1705981E: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170596D0; /* 0x17059821: jb 0x170596d0 */
L_17059827:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17059827: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1705982B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059867; /* 0x1705982F: jbe 0x17059867 */
L_17059831:
    esi = MEM32(ebp + (-0x18)); /* 0x17059831: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x24)); /* 0x17059834: mov edi, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x10)); /* 0x17059837: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1705983A: sub edi, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1705983C: sub ebx, esi */
    _flag_k = FK_CMP;
L_1705983E:
    PUSH32(esp, MEM32(edi + esi)); /* 0x1705983E: push dword ptr [edi + esi] */
    eax = MEM32(ebp + (-0x34)); /* 0x17059841: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(esi)); /* 0x17059844: push dword ptr [esi] */
    ecx = MEM32(eax); /* 0x17059846: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebx + esi)); /* 0x17059848: push dword ptr [ebx + esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705984B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1705984E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1705984F: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17059852: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x17059854: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705987C; /* 0x17059857: jl 0x1705987c */
L_17059859:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17059859: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x1705985C: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1705985F: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x17059862: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705983E; /* 0x17059865: jb 0x1705983e */
L_17059867:
    eax = MEM32(ebp + (-0x34)); /* 0x17059867: mov eax, dword ptr [ebp - 0x34] */
    ecx = MEM32(ebp + 0x14); /* 0x1705986A: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1705986D: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x17059871: mov dword ptr [ecx], eax */
    goto L_1705987C; /* 0x17059873: jmp 0x1705987c */
L_17059875:
    MEM32(ebp + (-0xC)) = 0x8876086Cu; /* 0x17059875: mov dword ptr [ebp - 0xc], 0x8876086c */
L_1705987C:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1705987C: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x17059880: mov esi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705988B; /* 0x17059883: je 0x1705988b */
L_17059885:
    eax = MEM32(esi); /* 0x17059885: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17059887: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x17059888: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1705988B:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x1705988B: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059897; /* 0x1705988F: je 0x17059897 */
L_17059891:
    eax = MEM32(esi); /* 0x17059891: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17059893: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x17059894: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_17059897:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17059897: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1705989A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1705989F: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x170598A2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x170598A7: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x170598AA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x170598AF: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1721B010); /* 0x170598B2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x170598B7: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_1721B010); /* 0x170598BA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x170598BF: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1721B010); /* 0x170598C2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170598C7: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x170598CA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x170598CF: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x170598D2: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x170598D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170598D7: pop edi */
    esi = POP32_VAL(esp); /* 0x170598D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x170598D9: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170598E2; /* 0x170598DA: je 0x170598e2 */
L_170598DC:
    ecx = MEM32(eax); /* 0x170598DC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170598DE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170598DF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170598E2:
    eax = MEM32(ebp + (-0xC)); /* 0x170598E2: mov eax, dword ptr [ebp - 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170598E5: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170598E6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170598EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170598EEu);

L_170598EE:
    edi = edi; /* 0x170598EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170598F0: push ebp */
    ebp = esp; /* 0x170598F1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x170598F3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170598F4: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x270); /* 0x170598F7: mov eax, dword ptr [edi + 0x270] */
    /* test eax, eax */ /* 0x170598FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059909; /* 0x170598FF: je 0x17059909 */
L_17059901:
    ecx = MEM32(eax); /* 0x17059901: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17059903: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17059904: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    goto L_1705992D; /* 0x17059907: jmp 0x1705992d */
L_17059909:
    eax = edi + 0x26C; /* 0x17059909: lea eax, [edi + 0x26c] */
    ecx = MEM32(eax); /* 0x1705990F: mov ecx, dword ptr [eax] */
    /* cmp ecx, 1 */ /* 0x17059911: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17059914: push esi */
    esi = ecx + (-0x1); /* 0x17059915: lea esi, [ecx - 1] */
    MEM32(eax) = esi; /* 0x17059918: mov dword ptr [eax], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705992A; /* 0x1705991A: jne 0x1705992a */
L_1705991C:
    ecx = edi; /* 0x1705991C: mov ecx, edi */
    RECOMP_CALL(sub_1704EE22); /* 0x1705991E: call 0x1704ee22 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x17059923: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x17059924: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17059929: pop ecx */
L_1705992A:
    eax = esi; /* 0x1705992A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705992C: pop esi */
L_1705992D:
    edi = POP32_VAL(esp); /* 0x1705992D: pop edi */
    ebp = POP32_VAL(esp); /* 0x1705992E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705992F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17059937(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059937u);

L_17059937:
    edi = edi; /* 0x17059937: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059939: push ebp */
    ebp = esp; /* 0x1705993A: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1705993C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1705993D: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x270); /* 0x17059940: mov eax, dword ptr [edi + 0x270] */
    /* test eax, eax */ /* 0x17059946: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059952; /* 0x17059948: je 0x17059952 */
L_1705994A:
    ecx = MEM32(eax); /* 0x1705994A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705994C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705994D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    goto L_17059976; /* 0x17059950: jmp 0x17059976 */
L_17059952:
    eax = edi + 0x26C; /* 0x17059952: lea eax, [edi + 0x26c] */
    ecx = MEM32(eax); /* 0x17059958: mov ecx, dword ptr [eax] */
    /* cmp ecx, 1 */ /* 0x1705995A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705995D: push esi */
    esi = ecx + (-0x1); /* 0x1705995E: lea esi, [ecx - 1] */
    MEM32(eax) = esi; /* 0x17059961: mov dword ptr [eax], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059973; /* 0x17059963: jne 0x17059973 */
L_17059965:
    ecx = edi; /* 0x17059965: mov ecx, edi */
    RECOMP_CALL(sub_1704F29D); /* 0x17059967: call 0x1704f29d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1705996C: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1705996D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17059972: pop ecx */
L_17059973:
    eax = esi; /* 0x17059973: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17059975: pop esi */
L_17059976:
    edi = POP32_VAL(esp); /* 0x17059976: pop edi */
    ebp = POP32_VAL(esp); /* 0x17059977: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17059978: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17059980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059980u);

L_17059980:
    edi = edi; /* 0x17059980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059982: push ebp */
    ebp = esp; /* 0x17059983: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17059985: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x17059986: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x17059989: push ebx */
    PUSH32(esp, esi); /* 0x1705998A: push esi */
    esi = ecx; /* 0x1705998B: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705998D: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705998E: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17059991: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x214) = eax; /* 0x17059993: mov dword ptr [esi + 0x214], eax */
    eax = MEM32(ebp + 0x8); /* 0x17059999: mov eax, dword ptr [ebp + 8] */
    ebx = esi + 0xC; /* 0x1705999C: lea ebx, [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x1705999F: push ebx */
    MEM32(esi) = 0x170059A0u; /* 0x170599A0: mov dword ptr [esi], 0x170059a0 */
    MEM32(esi + 0x218) = 4; /* 0x170599A6: mov dword ptr [esi + 0x218], 4 */
    MEM32(esi + 0x22C) = edi; /* 0x170599B0: mov dword ptr [esi + 0x22c], edi */
    MEM32(esi + 0x234) = edi; /* 0x170599B6: mov dword ptr [esi + 0x234], edi */
    MEM32(esi + 0x23C) = edi; /* 0x170599BC: mov dword ptr [esi + 0x23c], edi */
    MEM32(esi + 0x240) = edi; /* 0x170599C2: mov dword ptr [esi + 0x240], edi */
    MEM32(esi + 0x244) = edi; /* 0x170599C8: mov dword ptr [esi + 0x244], edi */
    MEM32(esi + 0x248) = edi; /* 0x170599CE: mov dword ptr [esi + 0x248], edi */
    MEM32(esi + 0x24C) = edi; /* 0x170599D4: mov dword ptr [esi + 0x24c], edi */
    MEM32(esi + 0x250) = edi; /* 0x170599DA: mov dword ptr [esi + 0x250], edi */
    MEM32(esi + 0x254) = edi; /* 0x170599E0: mov dword ptr [esi + 0x254], edi */
    MEM32(esi + 0x258) = edi; /* 0x170599E6: mov dword ptr [esi + 0x258], edi */
    MEM32(esi + 0x25C) = edi; /* 0x170599EC: mov dword ptr [esi + 0x25c], edi */
    MEM32(esi + 0x260) = edi; /* 0x170599F2: mov dword ptr [esi + 0x260], edi */
    MEM32(esi + 0x264) = edi; /* 0x170599F8: mov dword ptr [esi + 0x264], edi */
    MEM32(esi + 0x268) = edi; /* 0x170599FE: mov dword ptr [esi + 0x268], edi */
    MEM32(esi + 0x26C) = 1; /* 0x17059A04: mov dword ptr [esi + 0x26c], 1 */
    MEM32(esi + 0x270) = edi; /* 0x17059A0E: mov dword ptr [esi + 0x270], edi */
    MEM32(esi + 0x230) = eax; /* 0x17059A14: mov dword ptr [esi + 0x230], eax */
    RECOMP_CALL(sub_1704EC19); /* 0x17059A1A: call 0x1704ec19 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x17059A1F: push edi */
    PUSH32(esp, ebx); /* 0x17059A20: push ebx */
    RECOMP_CALL(sub_1704E494); /* 0x17059A21: call 0x1704e494 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x238) = eax; /* 0x17059A26: mov dword ptr [esi + 0x238], eax */
    PUSH32(esp, 1); /* 0x17059A2C: push 1 */
    eax = esi + 0x4; /* 0x17059A2E: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x17059A31: push eax */
    PUSH32(esp, ebx); /* 0x17059A32: push ebx */
    MEM32(esi + 0x8) = edi; /* 0x17059A33: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_1704E4E9); /* 0x17059A36: call 0x1704e4e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17059A3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17059A42; /* 0x17059A3D: jge 0x17059a42 */
L_17059A3F:
    MEM32(esi + 0x4) = edi; /* 0x17059A3F: mov dword ptr [esi + 4], edi */
L_17059A42:
    ecx = MEM32(esi + 0x214); /* 0x17059A42: mov ecx, dword ptr [esi + 0x214] */
    /* test HI8(ecx), 2 */ /* 0x17059A48: test ch, 2 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x21C) = edi; /* 0x17059A4B: mov dword ptr [esi + 0x21c], edi */
    MEM32(esi + 0x224) = edi; /* 0x17059A51: mov dword ptr [esi + 0x224], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059A63; /* 0x17059A57: je 0x17059a63 */
L_17059A59:
    MEM32(esi + 0x21C) = 1; /* 0x17059A59: mov dword ptr [esi + 0x21c], 1 */
L_17059A63:
    /* test HI8(ecx), 1 */ /* 0x17059A63: test ch, 1 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059A72; /* 0x17059A66: je 0x17059a72 */
L_17059A68:
    MEM32(esi + 0x21C) = 2; /* 0x17059A68: mov dword ptr [esi + 0x21c], 2 */
L_17059A72:
    /* test HI8(ecx), 4 */ /* 0x17059A72: test ch, 4 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 8); /* 0x17059A75: push 8 */
    ebx = POP32_VAL(esp); /* 0x17059A77: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059A80; /* 0x17059A78: je 0x17059a80 */
L_17059A7A:
    MEM32(esi + 0x224) = ebx; /* 0x17059A7A: mov dword ptr [esi + 0x224], ebx */
L_17059A80:
    MEM32(ebp + 0x10) = ecx; /* 0x17059A80: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(2);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 2; /* 0x17059A83: and dword ptr [ebp + 0x10], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059A90; /* 0x17059A87: je 0x17059a90 */
L_17059A89:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x20u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x20u; /* 0x17059A89: or dword ptr [esi + 0x224], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059A90:
    MEM32(ebp + 0x8) = ecx; /* 0x17059A90: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 4; /* 0x17059A93: and dword ptr [ebp + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AA0; /* 0x17059A97: je 0x17059aa0 */
L_17059A99:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x40u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x40u; /* 0x17059A99: or dword ptr [esi + 0x224], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059AA0:
    MEM32(ebp + 0xC) = ecx; /* 0x17059AA0: mov dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & ebx; /* 0x17059AA3: and dword ptr [ebp + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80u; /* 0x17059AA6: mov edx, 0x80 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AB3; /* 0x17059AAB: je 0x17059ab3 */
L_17059AAD:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | edx));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | edx; /* 0x17059AAD: or dword ptr [esi + 0x224], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059AB3:
    MEM32(ebp + (-0x4)) = ecx; /* 0x17059AB3: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x4000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0x4000u; /* 0x17059AB6: and dword ptr [ebp - 4], 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AC6; /* 0x17059ABD: je 0x17059ac6 */
L_17059ABF:
    _flag_a = (uint32_t)((MEM8(esi + 0x225) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x225) | 1)) << 24;
    MEM8(esi + 0x225) = (uint8_t)(MEM8(esi + 0x225) | 1); /* 0x17059ABF: or byte ptr [esi + 0x225], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059AC6:
    /* test HI8(ecx), 8 */ /* 0x17059AC6: test ch, 8 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AD2; /* 0x17059AC9: je 0x17059ad2 */
L_17059ACB:
    _flag_a = (uint32_t)((MEM8(esi + 0x225) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x225) | 2)) << 24;
    MEM8(esi + 0x225) = (uint8_t)(MEM8(esi + 0x225) | 2); /* 0x17059ACB: or byte ptr [esi + 0x225], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059AD2:
    /* test ecx, 0x00010000u */ /* 0x17059AD2: test ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AE1; /* 0x17059AD8: je 0x17059ae1 */
L_17059ADA:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x10u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x10u; /* 0x17059ADA: or dword ptr [esi + 0x224], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059AE1:
    /* test LO8(ecx), 0x20u */ /* 0x17059AE1: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi + 0x220; /* 0x17059AE4: lea eax, [esi + 0x220] */
    MEM32(eax) = edi; /* 0x17059AEA: mov dword ptr [eax], edi */
    MEM32(esi + 0x228) = edi; /* 0x17059AEC: mov dword ptr [esi + 0x228], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059AFA; /* 0x17059AF2: je 0x17059afa */
L_17059AF4:
    MEM32(eax) = 1; /* 0x17059AF4: mov dword ptr [eax], 1 */
L_17059AFA:
    /* test LO8(ecx), 0x10u */ /* 0x17059AFA: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059B05; /* 0x17059AFD: je 0x17059b05 */
L_17059AFF:
    MEM32(eax) = 2; /* 0x17059AFF: mov dword ptr [eax], 2 */
L_17059B05:
    /* test LO8(ecx), 0x40u */ /* 0x17059B05: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059B10; /* 0x17059B08: je 0x17059b10 */
L_17059B0A:
    MEM32(esi + 0x228) = ebx; /* 0x17059B0A: mov dword ptr [esi + 0x228], ebx */
L_17059B10:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17059B10: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059B1C; /* 0x17059B13: je 0x17059b1c */
L_17059B15:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x20u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x20u; /* 0x17059B15: or dword ptr [esi + 0x228], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059B1C:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x17059B1C: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059B28; /* 0x17059B1F: je 0x17059b28 */
L_17059B21:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x40u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x40u; /* 0x17059B21: or dword ptr [esi + 0x228], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059B28:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17059B28: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059B33; /* 0x17059B2B: je 0x17059b33 */
L_17059B2D:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | edx));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | edx; /* 0x17059B2D: or dword ptr [esi + 0x228], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059B33:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x17059B33: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059B3F; /* 0x17059B36: je 0x17059b3f */
L_17059B38:
    _flag_a = (uint32_t)((MEM8(esi + 0x229) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x229) | 1)) << 24;
    MEM8(esi + 0x229) = (uint8_t)(MEM8(esi + 0x229) | 1); /* 0x17059B38: or byte ptr [esi + 0x229], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059B3F:
    /* test LO8(edx), LO8(ecx) */ /* 0x17059B3F: test dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059B4A; /* 0x17059B41: je 0x17059b4a */
L_17059B43:
    _flag_a = (uint32_t)((MEM8(esi + 0x229) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x229) | 2)) << 24;
    MEM8(esi + 0x229) = (uint8_t)(MEM8(esi + 0x229) | 2); /* 0x17059B43: or byte ptr [esi + 0x229], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059B4A:
    /* test HI8(ecx), HI8(ecx) */ /* 0x17059B4A: test ch, ch */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17059B55; /* 0x17059B4C: jns 0x17059b55 */
L_17059B4E:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x10u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x10u; /* 0x17059B4E: or dword ptr [esi + 0x228], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059B55:
    /* test HI8(ecx), 0x10u */ /* 0x17059B55: test ch, 0x10 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059B61; /* 0x17059B58: je 0x17059b61 */
L_17059B5A:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x20u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x20u; /* 0x17059B5A: or dword ptr [esi + 0x218], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059B61:
    eax = MEM32(esi + 0x230); /* 0x17059B61: mov eax, dword ptr [esi + 0x230] */
    ecx = MEM32(eax); /* 0x17059B67: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17059B69: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17059B6A: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x230); /* 0x17059B6D: mov eax, dword ptr [esi + 0x230] */
    edx = MEM32(eax); /* 0x17059B73: mov edx, dword ptr [eax] */
    ecx = esi + 0x22C; /* 0x17059B75: lea ecx, [esi + 0x22c] */
    PUSH32(esp, ecx); /* 0x17059B7B: push ecx */
    PUSH32(esp, eax); /* 0x17059B7C: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x17059B7D: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17059B80: pop edi */
    eax = esi; /* 0x17059B81: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17059B83: pop esi */
    ebx = POP32_VAL(esp); /* 0x17059B84: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17059B85: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17059B86: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17059B8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059B8Eu);

L_17059B8E:
    edi = edi; /* 0x17059B8E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059B90: push ebp */
    ebp = esp; /* 0x17059B91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x17059B93: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17059B96: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17059B97: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17059B9A: push esi */
    ecx = ebp + (-0x44); /* 0x17059B9B: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1704FE5B); /* 0x17059B9E: call 0x1704fe5b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x250); /* 0x17059BA3: mov ecx, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059BA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x17059BAB: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17059BAE: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x17059BB1: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x17059BB4: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x17059BB7: mov dword ptr [ebp - 0x24], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059BCA; /* 0x17059BBA: je 0x17059bca */
L_17059BBC:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x17059BBC: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059BCA; /* 0x17059BBF: je 0x17059bca */
L_17059BC1:
    /* test MEM8(esi + 0x215), 4 */ /* 0x17059BC1: test byte ptr [esi + 0x215], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x215)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059BD6; /* 0x17059BC8: je 0x17059bd6 */
L_17059BCA:
    MEM32(ebp + 0xC) = 0x8876086Cu; /* 0x17059BCA: mov dword ptr [ebp + 0xc], 0x8876086c */
    goto L_17059E68; /* 0x17059BD1: jmp 0x17059e68 */
L_17059BD6:
    PUSH32(esp, ebx); /* 0x17059BD6: push ebx */
    PUSH32(esp, edi); /* 0x17059BD7: push edi */
    edi = MEM32(esi + 0x264); /* 0x17059BD8: mov edi, dword ptr [esi + 0x264] */
    eax = edi + edi * 2; /* 0x17059BDE: lea eax, [edi + edi*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17059BE1: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17059BE1: shl eax, 1 */
    PUSH32(esp, eax); /* 0x17059BE3: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17059BE4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17059BE9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17059BEB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17059BED: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059C02; /* 0x17059BEE: je 0x17059c02 */
L_17059BF0:
    PUSH32(esp, 0x1706E47Eu); /* 0x17059BF0: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x17059BF5: push edi */
    PUSH32(esp, 6); /* 0x17059BF6: push 6 */
    PUSH32(esp, ebx); /* 0x17059BF8: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x17059BF9: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x17059BFE: mov eax, ebx */
    goto L_17059C04; /* 0x17059C00: jmp 0x17059c04 */
L_17059C02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059C02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059C04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17059C04: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x17059C06: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x250) = eax; /* 0x17059C08: mov dword ptr [esi + 0x250], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059C1C; /* 0x17059C0E: jne 0x17059c1c */
L_17059C10:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x17059C10: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_17059E54; /* 0x17059C17: jmp 0x17059e54 */
L_17059C1C:
    eax = MEM32(ebp + 0xC); /* 0x17059C1C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17059C1F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), ecx */ /* 0x17059C21: cmp dword ptr [esi + 0x264], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059C67; /* 0x17059C27: jbe 0x17059c67 */
L_17059C29:
    SET_LO16(ebx, MEM16(eax)); /* 0x17059C29: mov bx, word ptr [eax] */
    edi = MEM32(esi + 0x250); /* 0x17059C2C: mov edi, dword ptr [esi + 0x250] */
    MEM16(ecx + edi) = (uint16_t)(LO16(ebx)); /* 0x17059C32: mov word ptr [ecx + edi], bx */
    edi = MEM32(esi + 0x250); /* 0x17059C36: mov edi, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17059C3C: add eax, 4 */
    _flag_k = FK_ADD;
    SET_LO16(ebx, MEM16(eax)); /* 0x17059C3F: mov bx, word ptr [eax] */
    MEM16(ecx + edi + 0x2) = (uint16_t)(LO16(ebx)); /* 0x17059C42: mov word ptr [ecx + edi + 2], bx */
    edi = MEM32(esi + 0x250); /* 0x17059C47: mov edi, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17059C4D: add eax, 4 */
    _flag_k = FK_ADD;
    SET_LO16(ebx, MEM16(eax)); /* 0x17059C50: mov bx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17059C53: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ecx + edi + 0x4) = (uint16_t)(LO16(ebx)); /* 0x17059C56: mov word ptr [ecx + edi + 4], bx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17059C5B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x17059C5C: add ecx, 6 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x17059C5F: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059C29; /* 0x17059C65: jb 0x17059c29 */
L_17059C67:
    ecx = MEM32(esi + 0x23C); /* 0x17059C67: mov ecx, dword ptr [esi + 0x23c] */
    ebx = MEM32(ebp + 0x10); /* 0x17059C6D: mov ebx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17059C70: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17059C70: shl ecx, 2 */
    edx = ecx; /* 0x17059C73: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17059C75: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17059C75: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x17059C78: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x17059C7B: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17059C7D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x17059C7F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17059C81: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17059C84: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 0x10u); /* 0x17059C86: push 0x10 */
    eax = ebp + 0x8; /* 0x17059C88: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17059C8B: push eax */
    ecx = esi; /* 0x17059C8C: mov ecx, esi */
    RECOMP_CALL(sub_1704EA87); /* 0x17059C8E: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17059C93: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x17059C95: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x17059C97: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_17059E54; /* 0x17059C9A: jl 0x17059e54 */
L_17059CA0:
    eax = MEM32(ebp + 0x8); /* 0x17059CA0: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x24C) = eax; /* 0x17059CA3: mov dword ptr [esi + 0x24c], eax */
    eax = MEM32(esi + 0x260); /* 0x17059CA9: mov eax, dword ptr [esi + 0x260] */
    /* cmp eax, ecx */ /* 0x17059CAF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059CD7; /* 0x17059CB1: jne 0x17059cd7 */
L_17059CB3:
    edx = MEM32(esi + 0x264); /* 0x17059CB3: mov edx, dword ptr [esi + 0x264] */
    MEM32(ebp + (-0x50)) = edx; /* 0x17059CB9: mov dword ptr [ebp - 0x50], edx */
    edx = MEM32(esi + 0x23C); /* 0x17059CBC: mov edx, dword ptr [esi + 0x23c] */
    MEM32(ebp + (-0x14)) = 1; /* 0x17059CC2: mov dword ptr [ebp - 0x14], 1 */
    eax = ebp + (-0x58); /* 0x17059CC9: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0x54)) = ecx; /* 0x17059CCC: mov dword ptr [ebp - 0x54], ecx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x17059CCF: mov dword ptr [ebp - 0x4c], ecx */
    MEM32(ebp + (-0x48)) = edx; /* 0x17059CD2: mov dword ptr [ebp - 0x48], edx */
    goto L_17059CE0; /* 0x17059CD5: jmp 0x17059ce0 */
L_17059CD7:
    MEM32(ebp + (-0x14)) = eax; /* 0x17059CD7: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi + 0x25C); /* 0x17059CDA: mov eax, dword ptr [esi + 0x25c] */
L_17059CE0:
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x17059CE0: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x17059CE3: mov dword ptr [ebp - 0x10], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059DDD; /* 0x17059CE6: jbe 0x17059ddd */
L_17059CEC:
    ecx = eax + 0x4; /* 0x17059CEC: lea ecx, [eax + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17059CEF: mov dword ptr [ebp - 0x1c], ecx */
L_17059CF2:
    eax = MEM32(ecx); /* 0x17059CF2: mov eax, dword ptr [ecx] */
    edx = MEM32(ecx + 0x4); /* 0x17059CF4: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x17059CF7: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x17059CF9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edx; /* 0x17059CFB: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17059CFE: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17059DC6; /* 0x17059D01: jae 0x17059dc6 */
L_17059D07:
    ecx = eax + eax * 2; /* 0x17059D07: lea ecx, [eax + eax*2] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x17059D0A: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x17059D0A: shl ecx, 1 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17059D0C: mov dword ptr [ebp - 0xc], ecx */
L_17059D0F:
    eax = MEM32(ebp + 0x8); /* 0x17059D0F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17059D12: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17059D14: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x17059D18: mov dword ptr [ebp - 0x28], eax */
L_17059D1B:
    eax = MEM32(ebp + (-0x28)); /* 0x17059D1B: mov eax, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x4)); /* 0x17059D1E: mov edi, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(eax + edi * 2); /* 0x17059D21: movzx eax, word ptr [eax + edi*2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x17059D25: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059DA4; /* 0x17059D29: je 0x17059da4 */
L_17059D2B:
    edi = (uint32_t)LO16(eax); /* 0x17059D2B: movzx edi, ax */
    /* cmp MEM32(ebx + edi * 4), 0xFFFFFFFFu */ /* 0x17059D2E: cmp dword ptr [ebx + edi*4], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + edi * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059DA4; /* 0x17059D32: jne 0x17059da4 */
L_17059D34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17059D34: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17059D36: push ebx */
    PUSH32(esp, eax); /* 0x17059D37: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17059D38: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x44); /* 0x17059D3B: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_17055EB7); /* 0x17059D3E: call 0x17055eb7 */
    RECOMP_FLAGS_IN();
L_17059D43:
    /* cmp MEM16(ebp + (-0x40)), 0xFFFFu */ /* 0x17059D43: cmp word ptr [ebp - 0x40], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x40))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059D9B; /* 0x17059D49: je 0x17059d9b */
L_17059D4B:
    ecx = ebp + (-0x44); /* 0x17059D4B: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_170564A4); /* 0x17059D4E: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), 0 */ /* 0x17059D53: cmp byte ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x2C)) = eax; /* 0x17059D57: mov dword ptr [ebp - 0x2c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059D62; /* 0x17059D5A: je 0x17059d62 */
L_17059D5C:
    edx = (uint32_t)MEM16(ebp + (-0x3E)); /* 0x17059D5C: movzx edx, word ptr [ebp - 0x3e] */
    goto L_17059D6D; /* 0x17059D60: jmp 0x17059d6d */
L_17059D62:
    eax = (uint32_t)MEM16(ebp + (-0x3E)); /* 0x17059D62: movzx eax, word ptr [ebp - 0x3e] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17059D66: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x17059D67: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17059D69: cdq  */
    ecx = POP32_VAL(esp); /* 0x17059D6A: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x17059D6B: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_17059D6D:
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x17059D6D: movzx eax, word ptr [ebp - 0x2c] */
    ecx = (uint32_t)LO16(edx); /* 0x17059D71: movzx ecx, dx */
    eax = eax + eax * 2; /* 0x17059D74: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17059D77: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x17059D79: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x17059D7C: movzx eax, word ptr [ecx + eax*2] */
    ecx = MEM32(ebp + 0x10); /* 0x17059D80: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17059D83: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 0x2710u */ /* 0x17059D84: cmp ebx, 0x2710 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2710u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + eax * 4) = edi; /* 0x17059D8A: mov dword ptr [ecx + eax*4], edi */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059D43; /* 0x17059D8D: jbe 0x17059d43 */
L_17059D8F:
    MEM32(ebp + 0xC) = 0x88760B55u; /* 0x17059D8F: mov dword ptr [ebp + 0xc], 0x88760b55 */
    goto L_17059E54; /* 0x17059D96: jmp 0x17059e54 */
L_17059D9B:
    ebx = MEM32(ebp + 0x10); /* 0x17059D9B: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x18)); /* 0x17059D9E: mov edx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0xC)); /* 0x17059DA1: mov ecx, dword ptr [ebp - 0xc] */
L_17059DA4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17059DA4: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x17059DA7: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059D1B; /* 0x17059DAB: jb 0x17059d1b */
L_17059DB1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17059DB1: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x17059DB4: add ecx, 6 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), edx */ /* 0x17059DB7: cmp dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x17059DBA: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059D0F; /* 0x17059DBD: jb 0x17059d0f */
L_17059DC3:
    ecx = MEM32(ebp + (-0x1C)); /* 0x17059DC3: mov ecx, dword ptr [ebp - 0x1c] */
L_17059DC6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17059DC6: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x17059DC9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x17059DCC: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x17059DCF: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17059DD2: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059CF2; /* 0x17059DD5: jb 0x17059cf2 */
L_17059DDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17059DDB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059DDD:
    /* cmp MEM32(esi + 0x23C), ecx */ /* 0x17059DDD: cmp dword ptr [esi + 0x23c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059E54; /* 0x17059DE3: jbe 0x17059e54 */
L_17059DE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17059DE5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17059DE7: inc edx */
    _flag_k = FK_INC;
L_17059DE8:
    eax = MEM32(ebx + ecx * 4); /* 0x17059DE8: mov eax, dword ptr [ebx + ecx*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17059DEB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059DF5; /* 0x17059DEE: jne 0x17059df5 */
L_17059DF0:
    MEM32(ebx + ecx * 4) = ecx; /* 0x17059DF0: mov dword ptr [ebx + ecx*4], ecx */
    goto L_17059E0E; /* 0x17059DF3: jmp 0x17059e0e */
L_17059DF5:
    /* cmp eax, ecx */ /* 0x17059DF5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E0E; /* 0x17059DF7: je 0x17059e0e */
L_17059DF9:
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059DFE; /* 0x17059DF9: jbe 0x17059dfe */
L_17059DFB:
    MEM32(ebp + (-0x20)) = edx; /* 0x17059DFB: mov dword ptr [ebp - 0x20], edx */
L_17059DFE:
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x17059DFE: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_17059D8F; /* 0x17059E04: jae 0x17059d8f */
L_17059E06:
    /* cmp MEM32(ebx + eax * 4), eax */ /* 0x17059E06: cmp dword ptr [ebx + eax*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E0E; /* 0x17059E09: je 0x17059e0e */
L_17059E0B:
    MEM32(ebp + (-0x24)) = edx; /* 0x17059E0B: mov dword ptr [ebp - 0x24], edx */
L_17059E0E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17059E0E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x23C) */ /* 0x17059E0F: cmp ecx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059DE8; /* 0x17059E15: jb 0x17059de8 */
L_17059E17:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x17059E17: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E54; /* 0x17059E1B: je 0x17059e54 */
L_17059E1D:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x17059E1D: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17059E54; /* 0x17059E21: jne 0x17059e54 */
L_17059E23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17059E23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x17059E25: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059E54; /* 0x17059E2B: jbe 0x17059e54 */
L_17059E2D:
    edx = MEM32(ebx + eax * 4); /* 0x17059E2D: mov edx, dword ptr [ebx + eax*4] */
    /* cmp edx, eax */ /* 0x17059E30: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E4B; /* 0x17059E32: je 0x17059e4b */
L_17059E34:
    ecx = ebx + edx * 4; /* 0x17059E34: lea ecx, [ebx + edx*4] */
    edi = MEM32(ecx); /* 0x17059E37: mov edi, dword ptr [ecx] */
    /* cmp edi, edx */ /* 0x17059E39: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E42; /* 0x17059E3B: je 0x17059e42 */
L_17059E3D:
    MEM32(ebx + eax * 4) = edi; /* 0x17059E3D: mov dword ptr [ebx + eax*4], edi */
    goto L_17059E4B; /* 0x17059E40: jmp 0x17059e4b */
L_17059E42:
    /* cmp edx, eax */ /* 0x17059E42: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17059E4B; /* 0x17059E44: jbe 0x17059e4b */
L_17059E46:
    MEM32(ecx) = eax; /* 0x17059E46: mov dword ptr [ecx], eax */
    MEM32(ebx + eax * 4) = eax; /* 0x17059E48: mov dword ptr [ebx + eax*4], eax */
L_17059E4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17059E4B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x17059E4C: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17059E2D; /* 0x17059E52: jb 0x17059e2d */
L_17059E54:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17059E54: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17059E58: pop edi */
    ebx = POP32_VAL(esp); /* 0x17059E59: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17059E68; /* 0x17059E5A: je 0x17059e68 */
L_17059E5C:
    eax = MEM32(esi + 0x248); /* 0x17059E5C: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x17059E62: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17059E64: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17059E65: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_17059E68:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x17059E68: push dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(MEM32(esi + 0x24C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x24C) = MEM32(esi + 0x24C) & 0; /* 0x17059E6E: and dword ptr [esi + 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x17059E75: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x17059E7A: mov eax, dword ptr [ebp - 0x30] */
    ecx = POP32_VAL(esp); /* 0x17059E7D: pop ecx */
    MEM32(esi + 0x250) = eax; /* 0x17059E7E: mov dword ptr [esi + 0x250], eax */
    eax = MEM32(ebp + 0xC); /* 0x17059E84: mov eax, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x17059E87: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17059E88: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17059E89: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17059E91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17059E91u);

L_17059E91:
    edi = edi; /* 0x17059E91: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17059E93: push ebp */
    ebp = esp; /* 0x17059E94: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17059E96: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x17059E97: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x17059E9A: push ebx */
    PUSH32(esp, esi); /* 0x17059E9B: push esi */
    esi = ecx; /* 0x17059E9C: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17059E9E: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17059E9F: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17059EA2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x214) = eax; /* 0x17059EA4: mov dword ptr [esi + 0x214], eax */
    eax = MEM32(ebp + 0x8); /* 0x17059EAA: mov eax, dword ptr [ebp + 8] */
    ebx = esi + 0xC; /* 0x17059EAD: lea ebx, [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x17059EB0: push ebx */
    MEM32(esi) = 0x17005A18u; /* 0x17059EB1: mov dword ptr [esi], 0x17005a18 */
    MEM32(esi + 0x218) = 4; /* 0x17059EB7: mov dword ptr [esi + 0x218], 4 */
    MEM32(esi + 0x22C) = edi; /* 0x17059EC1: mov dword ptr [esi + 0x22c], edi */
    MEM32(esi + 0x234) = edi; /* 0x17059EC7: mov dword ptr [esi + 0x234], edi */
    MEM32(esi + 0x23C) = edi; /* 0x17059ECD: mov dword ptr [esi + 0x23c], edi */
    MEM32(esi + 0x240) = edi; /* 0x17059ED3: mov dword ptr [esi + 0x240], edi */
    MEM32(esi + 0x244) = edi; /* 0x17059ED9: mov dword ptr [esi + 0x244], edi */
    MEM32(esi + 0x248) = edi; /* 0x17059EDF: mov dword ptr [esi + 0x248], edi */
    MEM32(esi + 0x24C) = edi; /* 0x17059EE5: mov dword ptr [esi + 0x24c], edi */
    MEM32(esi + 0x250) = edi; /* 0x17059EEB: mov dword ptr [esi + 0x250], edi */
    MEM32(esi + 0x254) = edi; /* 0x17059EF1: mov dword ptr [esi + 0x254], edi */
    MEM32(esi + 0x258) = edi; /* 0x17059EF7: mov dword ptr [esi + 0x258], edi */
    MEM32(esi + 0x25C) = edi; /* 0x17059EFD: mov dword ptr [esi + 0x25c], edi */
    MEM32(esi + 0x260) = edi; /* 0x17059F03: mov dword ptr [esi + 0x260], edi */
    MEM32(esi + 0x264) = edi; /* 0x17059F09: mov dword ptr [esi + 0x264], edi */
    MEM32(esi + 0x268) = edi; /* 0x17059F0F: mov dword ptr [esi + 0x268], edi */
    MEM32(esi + 0x26C) = 1; /* 0x17059F15: mov dword ptr [esi + 0x26c], 1 */
    MEM32(esi + 0x270) = edi; /* 0x17059F1F: mov dword ptr [esi + 0x270], edi */
    MEM32(esi + 0x230) = eax; /* 0x17059F25: mov dword ptr [esi + 0x230], eax */
    RECOMP_CALL(sub_1704EC19); /* 0x17059F2B: call 0x1704ec19 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x17059F30: push edi */
    PUSH32(esp, ebx); /* 0x17059F31: push ebx */
    RECOMP_CALL(sub_1704E494); /* 0x17059F32: call 0x1704e494 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x238) = eax; /* 0x17059F37: mov dword ptr [esi + 0x238], eax */
    PUSH32(esp, 1); /* 0x17059F3D: push 1 */
    eax = esi + 0x4; /* 0x17059F3F: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x17059F42: push eax */
    PUSH32(esp, ebx); /* 0x17059F43: push ebx */
    MEM32(esi + 0x8) = edi; /* 0x17059F44: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_1704E4E9); /* 0x17059F47: call 0x1704e4e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17059F4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17059F53; /* 0x17059F4E: jge 0x17059f53 */
L_17059F50:
    MEM32(esi + 0x4) = edi; /* 0x17059F50: mov dword ptr [esi + 4], edi */
L_17059F53:
    ecx = MEM32(esi + 0x214); /* 0x17059F53: mov ecx, dword ptr [esi + 0x214] */
    /* test HI8(ecx), 2 */ /* 0x17059F59: test ch, 2 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x21C) = edi; /* 0x17059F5C: mov dword ptr [esi + 0x21c], edi */
    MEM32(esi + 0x224) = edi; /* 0x17059F62: mov dword ptr [esi + 0x224], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059F74; /* 0x17059F68: je 0x17059f74 */
L_17059F6A:
    MEM32(esi + 0x21C) = 1; /* 0x17059F6A: mov dword ptr [esi + 0x21c], 1 */
L_17059F74:
    /* test HI8(ecx), 1 */ /* 0x17059F74: test ch, 1 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059F83; /* 0x17059F77: je 0x17059f83 */
L_17059F79:
    MEM32(esi + 0x21C) = 2; /* 0x17059F79: mov dword ptr [esi + 0x21c], 2 */
L_17059F83:
    /* test HI8(ecx), 4 */ /* 0x17059F83: test ch, 4 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 8); /* 0x17059F86: push 8 */
    ebx = POP32_VAL(esp); /* 0x17059F88: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059F91; /* 0x17059F89: je 0x17059f91 */
L_17059F8B:
    MEM32(esi + 0x224) = ebx; /* 0x17059F8B: mov dword ptr [esi + 0x224], ebx */
L_17059F91:
    MEM32(ebp + 0x10) = ecx; /* 0x17059F91: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(2);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 2; /* 0x17059F94: and dword ptr [ebp + 0x10], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FA1; /* 0x17059F98: je 0x17059fa1 */
L_17059F9A:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x20u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x20u; /* 0x17059F9A: or dword ptr [esi + 0x224], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059FA1:
    MEM32(ebp + 0x8) = ecx; /* 0x17059FA1: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 4; /* 0x17059FA4: and dword ptr [ebp + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FB1; /* 0x17059FA8: je 0x17059fb1 */
L_17059FAA:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x40u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x40u; /* 0x17059FAA: or dword ptr [esi + 0x224], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059FB1:
    MEM32(ebp + 0xC) = ecx; /* 0x17059FB1: mov dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & ebx; /* 0x17059FB4: and dword ptr [ebp + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80u; /* 0x17059FB7: mov edx, 0x80 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FC4; /* 0x17059FBC: je 0x17059fc4 */
L_17059FBE:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | edx));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | edx; /* 0x17059FBE: or dword ptr [esi + 0x224], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059FC4:
    MEM32(ebp + (-0x4)) = ecx; /* 0x17059FC4: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x4000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0x4000u; /* 0x17059FC7: and dword ptr [ebp - 4], 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FD7; /* 0x17059FCE: je 0x17059fd7 */
L_17059FD0:
    _flag_a = (uint32_t)((MEM8(esi + 0x225) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x225) | 1)) << 24;
    MEM8(esi + 0x225) = (uint8_t)(MEM8(esi + 0x225) | 1); /* 0x17059FD0: or byte ptr [esi + 0x225], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059FD7:
    /* test HI8(ecx), 8 */ /* 0x17059FD7: test ch, 8 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FE3; /* 0x17059FDA: je 0x17059fe3 */
L_17059FDC:
    _flag_a = (uint32_t)((MEM8(esi + 0x225) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x225) | 2)) << 24;
    MEM8(esi + 0x225) = (uint8_t)(MEM8(esi + 0x225) | 2); /* 0x17059FDC: or byte ptr [esi + 0x225], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_17059FE3:
    /* test ecx, 0x00010000u */ /* 0x17059FE3: test ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17059FF2; /* 0x17059FE9: je 0x17059ff2 */
L_17059FEB:
    _flag_a = (uint32_t)((MEM32(esi + 0x224) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x224) | 0x10u));
    MEM32(esi + 0x224) = MEM32(esi + 0x224) | 0x10u; /* 0x17059FEB: or dword ptr [esi + 0x224], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17059FF2:
    /* test LO8(ecx), 0x20u */ /* 0x17059FF2: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi + 0x220; /* 0x17059FF5: lea eax, [esi + 0x220] */
    MEM32(eax) = edi; /* 0x17059FFB: mov dword ptr [eax], edi */
    MEM32(esi + 0x228) = edi; /* 0x17059FFD: mov dword ptr [esi + 0x228], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A00B; /* 0x1705A003: je 0x1705a00b */
L_1705A005:
    MEM32(eax) = 1; /* 0x1705A005: mov dword ptr [eax], 1 */
L_1705A00B:
    /* test LO8(ecx), 0x10u */ /* 0x1705A00B: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A016; /* 0x1705A00E: je 0x1705a016 */
L_1705A010:
    MEM32(eax) = 2; /* 0x1705A010: mov dword ptr [eax], 2 */
L_1705A016:
    /* test LO8(ecx), 0x40u */ /* 0x1705A016: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A021; /* 0x1705A019: je 0x1705a021 */
L_1705A01B:
    MEM32(esi + 0x228) = ebx; /* 0x1705A01B: mov dword ptr [esi + 0x228], ebx */
L_1705A021:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1705A021: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A02D; /* 0x1705A024: je 0x1705a02d */
L_1705A026:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x20u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x20u; /* 0x1705A026: or dword ptr [esi + 0x228], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A02D:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1705A02D: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A039; /* 0x1705A030: je 0x1705a039 */
L_1705A032:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x40u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x40u; /* 0x1705A032: or dword ptr [esi + 0x228], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A039:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1705A039: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A044; /* 0x1705A03C: je 0x1705a044 */
L_1705A03E:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | edx)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | edx));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | edx; /* 0x1705A03E: or dword ptr [esi + 0x228], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A044:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1705A044: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A050; /* 0x1705A047: je 0x1705a050 */
L_1705A049:
    _flag_a = (uint32_t)((MEM8(esi + 0x229) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x229) | 1)) << 24;
    MEM8(esi + 0x229) = (uint8_t)(MEM8(esi + 0x229) | 1); /* 0x1705A049: or byte ptr [esi + 0x229], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1705A050:
    /* test LO8(edx), LO8(ecx) */ /* 0x1705A050: test dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A05B; /* 0x1705A052: je 0x1705a05b */
L_1705A054:
    _flag_a = (uint32_t)((MEM8(esi + 0x229) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x229) | 2)) << 24;
    MEM8(esi + 0x229) = (uint8_t)(MEM8(esi + 0x229) | 2); /* 0x1705A054: or byte ptr [esi + 0x229], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1705A05B:
    /* test HI8(ecx), HI8(ecx) */ /* 0x1705A05B: test ch, ch */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1705A066; /* 0x1705A05D: jns 0x1705a066 */
L_1705A05F:
    _flag_a = (uint32_t)((MEM32(esi + 0x228) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x228) | 0x10u));
    MEM32(esi + 0x228) = MEM32(esi + 0x228) | 0x10u; /* 0x1705A05F: or dword ptr [esi + 0x228], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A066:
    /* test HI8(ecx), 0x10u */ /* 0x1705A066: test ch, 0x10 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A072; /* 0x1705A069: je 0x1705a072 */
L_1705A06B:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x20u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x20u; /* 0x1705A06B: or dword ptr [esi + 0x218], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A072:
    eax = MEM32(esi + 0x230); /* 0x1705A072: mov eax, dword ptr [esi + 0x230] */
    ecx = MEM32(eax); /* 0x1705A078: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A07A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705A07B: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x230); /* 0x1705A07E: mov eax, dword ptr [esi + 0x230] */
    edx = MEM32(eax); /* 0x1705A084: mov edx, dword ptr [eax] */
    ecx = esi + 0x22C; /* 0x1705A086: lea ecx, [esi + 0x22c] */
    PUSH32(esp, ecx); /* 0x1705A08C: push ecx */
    PUSH32(esp, eax); /* 0x1705A08D: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1705A08E: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1705A091: pop edi */
    eax = esi; /* 0x1705A092: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705A094: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705A095: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705A096: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705A097: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705A09F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705A09Fu);

L_1705A09F:
    edi = edi; /* 0x1705A09F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705A0A1: push ebp */
    ebp = esp; /* 0x1705A0A2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1705A0A4: push ecx */
    PUSH32(esp, ecx); /* 0x1705A0A5: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x1705A0A6: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1705A0A9: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705A0AA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1705A0AC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705A0AE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705A0AF: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705A0B2: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705A0B5: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + 0x10) = eax; /* 0x1705A0B8: mov dword ptr [ebp + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A0C3; /* 0x1705A0BB: jne 0x1705a0c3 */
L_1705A0BD:
    eax = esi + 0xC; /* 0x1705A0BD: lea eax, [esi + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x1705A0C0: mov dword ptr [ebp + 0x10], eax */
L_1705A0C3:
    PUSH32(esp, ebx); /* 0x1705A0C3: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705A0C4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9F0); /* 0x1705A0C7: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A0CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705A0DA; /* 0x1705A0CE: jne 0x1705a0da */
L_1705A0D0:
    eax = 0x8876086Cu; /* 0x1705A0D0: mov eax, 0x8876086c */
    goto L_1705A286; /* 0x1705A0D5: jmp 0x1705a286 */
L_1705A0DA:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x1705A0DA: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1705A0E1: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705A120; /* 0x1705A0E2: jne 0x1705a120 */
L_1705A0E4:
    eax = MEM32(ebp + 0xC); /* 0x1705A0E4: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1705A0E7: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1705A0EC: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A101; /* 0x1705A0EF: je 0x1705a101 */
L_1705A0F1:
    eax = esi + 0xC; /* 0x1705A0F1: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x1705A0F4: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705A0F5: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705A0F8: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A0FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A120; /* 0x1705A0FF: je 0x1705a120 */
L_1705A101:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1705A101: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x14); /* 0x1705A104: mov edi, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A111; /* 0x1705A107: je 0x1705a111 */
L_1705A109:
    /* cmp edi, MEM32(esi + 0x230) */ /* 0x1705A109: cmp edi, dword ptr [esi + 0x230] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x230));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A120; /* 0x1705A10F: jne 0x1705a120 */
L_1705A111:
    eax = MEM32(esi + 0x214); /* 0x1705A111: mov eax, dword ptr [esi + 0x214] */
    /* test HI8(eax), 4 */ /* 0x1705A117: test ah, 4 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705A120; /* 0x1705A11A: jne 0x1705a120 */
L_1705A11C:
    /* test LO8(eax), 0x40u */ /* 0x1705A11C: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A12A; /* 0x1705A11E: je 0x1705a12a */
L_1705A120:
    edi = 0x8876086Cu; /* 0x1705A120: mov edi, 0x8876086c */
    goto L_1705A283; /* 0x1705A125: jmp 0x1705a283 */
L_1705A12A:
    /* test MEM8(ebp + 0xC), 1 */ /* 0x1705A12A: test byte ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A1AF; /* 0x1705A12E: je 0x1705a1af */
L_1705A130:
    PUSH32(esp, 0x27Cu); /* 0x1705A130: push 0x27c */
    RECOMP_CALL(sub_1721B01C); /* 0x1705A135: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A13A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705A13C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A152; /* 0x1705A13D: je 0x1705a152 */
L_1705A13F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705A13F: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705A142: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705A144: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1705A147: push edi */
    RECOMP_CALL(sub_17059E91); /* 0x1705A148: call 0x17059e91 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1705A14D: mov dword ptr [ebp - 4], eax */
    goto L_1705A156; /* 0x1705A150: jmp 0x1705a156 */
L_1705A152:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705A152: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A156:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1705A156: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A1F3; /* 0x1705A15A: je 0x1705a1f3 */
L_1705A160:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705A160: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x1705A163: mov ecx, esi */
    RECOMP_CALL(sub_1705A4BD); /* 0x1705A165: call 0x1705a4bd */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705A16A: mov edi, eax */
    /* test edi, edi */ /* 0x1705A16C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705A276; /* 0x1705A16E: jl 0x1705a276 */
L_1705A174:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1705A174: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A19A; /* 0x1705A178: je 0x1705a19a */
L_1705A17A:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x20u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x20u; /* 0x1705A17A: or dword ptr [esi + 0x218], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x1705A181: mov edx, dword ptr [ebp - 4] */
    eax = esi + 0x234; /* 0x1705A184: lea eax, [esi + 0x234] */
    ecx = MEM32(eax); /* 0x1705A18A: mov ecx, dword ptr [eax] */
    MEM32(edx + 0x234) = ecx; /* 0x1705A18C: mov dword ptr [edx + 0x234], ecx */
    eax = MEM32(eax); /* 0x1705A192: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705A194: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A196: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705A197: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1705A19A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1705A19A: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x234); /* 0x1705A19D: mov eax, dword ptr [ecx + 0x234] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705A1A3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1705A1A7: mov dword ptr [ebp - 8], ecx */
    goto L_1705A239; /* 0x1705A1AA: jmp 0x1705a239 */
L_1705A1AF:
    eax = 0xFFFFu; /* 0x1705A1AF: mov eax, 0xffff */
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1705A1B4: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705A25A; /* 0x1705A1BA: ja 0x1705a25a */
L_1705A1C0:
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1705A1C0: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705A25A; /* 0x1705A1C6: ja 0x1705a25a */
L_1705A1CC:
    PUSH32(esp, 0x27Cu); /* 0x1705A1CC: push 0x27c */
    RECOMP_CALL(sub_1721B01C); /* 0x1705A1D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A1D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705A1D8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A1ED; /* 0x1705A1D9: je 0x1705a1ed */
L_1705A1DB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705A1DB: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705A1DE: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705A1E0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1705A1E3: push edi */
    RECOMP_CALL(sub_17059980); /* 0x1705A1E4: call 0x17059980 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705A1E9: mov ebx, eax */
    goto L_1705A1EF; /* 0x1705A1EB: jmp 0x1705a1ef */
L_1705A1ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705A1ED: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A1EF:
    /* test ebx, ebx */ /* 0x1705A1EF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705A1FD; /* 0x1705A1F1: jne 0x1705a1fd */
L_1705A1F3:
    edi = 0x8007000Eu; /* 0x1705A1F3: mov edi, 0x8007000e */
    goto L_1705A283; /* 0x1705A1F8: jmp 0x1705a283 */
L_1705A1FD:
    PUSH32(esp, ebx); /* 0x1705A1FD: push ebx */
    ecx = esi; /* 0x1705A1FE: mov ecx, esi */
    RECOMP_CALL(sub_1705A291); /* 0x1705A200: call 0x1705a291 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705A205: mov edi, eax */
    /* test edi, edi */ /* 0x1705A207: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705A26C; /* 0x1705A209: jl 0x1705a26c */
L_1705A20B:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1705A20B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A22E; /* 0x1705A20F: je 0x1705a22e */
L_1705A211:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x20u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x20u; /* 0x1705A211: or dword ptr [esi + 0x218], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x234; /* 0x1705A218: lea eax, [esi + 0x234] */
    ecx = MEM32(eax); /* 0x1705A21E: mov ecx, dword ptr [eax] */
    MEM32(ebx + 0x234) = ecx; /* 0x1705A220: mov dword ptr [ebx + 0x234], ecx */
    eax = MEM32(eax); /* 0x1705A226: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705A228: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A22A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705A22B: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1705A22E:
    eax = MEM32(ebx + 0x234); /* 0x1705A22E: mov eax, dword ptr [ebx + 0x234] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705A234: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705A237: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A239:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1705A239: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A250; /* 0x1705A23D: jne 0x1705a250 */
L_1705A23F:
    PUSH32(esp, eax); /* 0x1705A23F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705A240: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1705A243: mov ecx, esi */
    RECOMP_CALL(sub_1705A6CF); /* 0x1705A245: call 0x1705a6cf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705A24A: mov edi, eax */
    /* test edi, edi */ /* 0x1705A24C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705A25F; /* 0x1705A24E: jl 0x1705a25f */
L_1705A250:
    eax = MEM32(ebp + 0x18); /* 0x1705A250: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1705A253: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1705A256: mov dword ptr [eax], ecx */
    goto L_1705A283; /* 0x1705A258: jmp 0x1705a283 */
L_1705A25A:
    edi = 0x8876086Cu; /* 0x1705A25A: mov edi, 0x8876086c */
L_1705A25F:
    eax = MEM32(ebp + (-0x8)); /* 0x1705A25F: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1705A262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A283; /* 0x1705A264: je 0x1705a283 */
L_1705A266:
    ecx = MEM32(eax); /* 0x1705A266: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A268: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705A269: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705A26C:
    /* test ebx, ebx */ /* 0x1705A26C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A283; /* 0x1705A26E: je 0x1705a283 */
L_1705A270:
    eax = MEM32(ebx); /* 0x1705A270: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705A272: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1705A273: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1705A276:
    eax = MEM32(ebp + (-0x4)); /* 0x1705A276: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705A279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A283; /* 0x1705A27B: je 0x1705a283 */
L_1705A27D:
    ecx = MEM32(eax); /* 0x1705A27D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A27F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705A280: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705A283:
    eax = edi; /* 0x1705A283: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1705A285: pop edi */
L_1705A286:
    esi = POP32_VAL(esp); /* 0x1705A286: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705A287: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705A288: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705A289: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705A291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705A291u);

L_1705A291:
    edi = edi; /* 0x1705A291: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705A293: push ebp */
    ebp = esp; /* 0x1705A294: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1705A296: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705A299: push ebx */
    PUSH32(esp, esi); /* 0x1705A29A: push esi */
    ebx = ecx; /* 0x1705A29B: mov ebx, ecx */
    ecx = MEM32(ebx + 0x218); /* 0x1705A29D: mov ecx, dword ptr [ebx + 0x218] */
    PUSH32(esp, edi); /* 0x1705A2A3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1705A2A4: mov edi, dword ptr [ebp + 8] */
    eax = edi + 0x218; /* 0x1705A2A7: lea eax, [edi + 0x218] */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax))); _flag_b = (uint32_t)((ecx ^ MEM32(eax)));
    ecx = ecx ^ MEM32(eax); /* 0x1705A2AD: xor ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A2AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x1705A2B1: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x218))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x218)));
    ecx = ecx ^ MEM32(ebx + 0x218); /* 0x1705A2B4: xor ecx, dword ptr [ebx + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x1705A2BA: mov dword ptr [ebp - 0x10], esi */
    MEM32(eax) = ecx; /* 0x1705A2BD: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebx + 0x23C)); /* 0x1705A2BF: push dword ptr [ebx + 0x23c] */
    ecx = edi; /* 0x1705A2C5: mov ecx, edi */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x1705A2C7: push dword ptr [ebx + 0x264] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1705A2CD: mov dword ptr [ebp - 0x14], esi */
    RECOMP_CALL(sub_17053C95); /* 0x1705A2D0: call 0x17053c95 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A2D5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1705A2D7: mov dword ptr [ebp - 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A48C; /* 0x1705A2DA: jl 0x1705a48c */
L_1705A2E0:
    PUSH32(esp, esi); /* 0x1705A2E0: push esi */
    eax = ebp + (-0x14); /* 0x1705A2E1: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1705A2E4: push eax */
    ecx = edi; /* 0x1705A2E5: mov ecx, edi */
    RECOMP_CALL(sub_1704EA87); /* 0x1705A2E7: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A2EC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1705A2EE: mov dword ptr [ebp - 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A48C; /* 0x1705A2F1: jl 0x1705a48c */
L_1705A2F7:
    PUSH32(esp, 0x10u); /* 0x1705A2F7: push 0x10 */
    eax = ebp + (-0x10); /* 0x1705A2F9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1705A2FC: push eax */
    ecx = ebx; /* 0x1705A2FD: mov ecx, ebx */
    RECOMP_CALL(sub_1704EA87); /* 0x1705A2FF: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A304: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1705A306: mov dword ptr [ebp - 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A48C; /* 0x1705A309: jl 0x1705a48c */
L_1705A30F:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x1705A30F: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A340; /* 0x1705A316: je 0x1705a340 */
L_1705A318:
    ecx = MEM32(ebx + 0x264); /* 0x1705A318: mov ecx, dword ptr [ebx + 0x264] */
    edi = MEM32(edi + 0x254); /* 0x1705A31E: mov edi, dword ptr [edi + 0x254] */
    esi = MEM32(ebx + 0x254); /* 0x1705A324: mov esi, dword ptr [ebx + 0x254] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705A32A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705A32A: shl ecx, 2 */
    eax = ecx; /* 0x1705A32D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A32F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A32F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A332: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A334: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A336: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A339: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1705A33B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A33E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A340:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x1705A340: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A370; /* 0x1705A347: je 0x1705a370 */
L_1705A349:
    ecx = MEM32(ebx + 0x264); /* 0x1705A349: mov ecx, dword ptr [ebx + 0x264] */
    edi = MEM32(edi + 0x258); /* 0x1705A34F: mov edi, dword ptr [edi + 0x258] */
    esi = MEM32(ebx + 0x258); /* 0x1705A355: mov esi, dword ptr [ebx + 0x258] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1705A35B: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1705A35B: shl ecx, 1 */
    eax = ecx; /* 0x1705A35D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A35F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A35F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A362: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A364: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A366: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A369: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1705A36B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A36E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A370:
    /* cmp MEM32(ebx + 0x25C), esi */ /* 0x1705A370: cmp dword ptr [ebx + 0x25c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x25C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A3D6; /* 0x1705A376: je 0x1705a3d6 */
L_1705A378:
    eax = MEM32(ebx + 0x260); /* 0x1705A378: mov eax, dword ptr [ebx + 0x260] */
    eax = eax + eax * 4; /* 0x1705A37E: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705A381: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705A381: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705A384: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705A385: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A38A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705A38C: pop ecx */
    MEM32(edi + 0x25C) = eax; /* 0x1705A38D: mov dword ptr [edi + 0x25c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A3A1; /* 0x1705A393: jne 0x1705a3a1 */
L_1705A395:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1705A395: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1705A48C; /* 0x1705A39C: jmp 0x1705a48c */
L_1705A3A1:
    ecx = MEM32(ebx + 0x260); /* 0x1705A3A1: mov ecx, dword ptr [ebx + 0x260] */
    esi = MEM32(ebx + 0x25C); /* 0x1705A3A7: mov esi, dword ptr [ebx + 0x25c] */
    ecx = ecx + ecx * 4; /* 0x1705A3AD: lea ecx, [ecx + ecx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705A3B0: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705A3B0: shl ecx, 2 */
    edi = eax; /* 0x1705A3B3: mov edi, eax */
    eax = ecx; /* 0x1705A3B5: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A3B7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A3B7: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A3BA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A3BC: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A3BE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A3C1: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1705A3C3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x260); /* 0x1705A3C6: mov eax, dword ptr [ebx + 0x260] */
    MEM32(ecx + 0x260) = eax; /* 0x1705A3CC: mov dword ptr [ecx + 0x260], eax */
    edi = ecx; /* 0x1705A3D2: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A3D4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A3D6:
    /* cmp MEM32(ebx + 0x264), esi */ /* 0x1705A3D6: cmp dword ptr [ebx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x1705A3DC: mov dword ptr [ebp - 4], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A42A; /* 0x1705A3DF: jbe 0x1705a42a */
L_1705A3E1:
    MEM32(ebp + (-0xC)) = esi; /* 0x1705A3E1: mov dword ptr [ebp - 0xc], esi */
L_1705A3E4:
    eax = MEM32(ebp + (-0x14)); /* 0x1705A3E4: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0xC)); /* 0x1705A3E7: mov edx, dword ptr [ebp - 0xc] */
    ecx = esi + eax; /* 0x1705A3EA: lea ecx, [esi + eax] */
    eax = MEM32(ebp + (-0x10)); /* 0x1705A3ED: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1705A3F0: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705A3F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A3F4:
    /* cmp MEM32(edx + eax * 4), 0xFFFFFFFFu */ /* 0x1705A3F4: cmp dword ptr [edx + eax*4], -1 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A407; /* 0x1705A3F8: je 0x1705a407 */
L_1705A3FA:
    SET_LO16(edi, MEM16(edx + eax * 4)); /* 0x1705A3FA: mov di, word ptr [edx + eax*4] */
    MEM16(ecx + eax * 2) = (uint16_t)(LO16(edi)); /* 0x1705A3FE: mov word ptr [ecx + eax*2], di */
    edi = MEM32(ebp + 0x8); /* 0x1705A402: mov edi, dword ptr [ebp + 8] */
    goto L_1705A40D; /* 0x1705A405: jmp 0x1705a40d */
L_1705A407:
    _flag_a = (uint32_t)((MEM16(ecx + eax * 2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(ecx + eax * 2) | 0xFFFFu)) << 16;
    MEM16(ecx + eax * 2) = (uint16_t)(MEM16(ecx + eax * 2) | 0xFFFFu); /* 0x1705A407: or word ptr [ecx + eax*2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1705A40D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705A40D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x1705A40E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A3F4; /* 0x1705A411: jb 0x1705a3f4 */
L_1705A413:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1705A413: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1705A416: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0xCu; /* 0x1705A419: add dword ptr [ebp - 0xc], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 6; /* 0x1705A41D: add esi, 6 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x264) */ /* 0x1705A420: cmp eax, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A3E4; /* 0x1705A426: jb 0x1705a3e4 */
L_1705A428:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A428: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A42A:
    /* test MEM8(ebx + 0x218), 1 */ /* 0x1705A42A: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A48C; /* 0x1705A431: je 0x1705a48c */
L_1705A433:
    /* cmp MEM32(ebx + 0x264), esi */ /* 0x1705A433: cmp dword ptr [ebx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x1705A439: mov dword ptr [ebp - 4], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A48C; /* 0x1705A43C: jbe 0x1705a48c */
L_1705A43E:
    MEM32(ebp + (-0xC)) = esi; /* 0x1705A43E: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + 0x8) = esi; /* 0x1705A441: mov dword ptr [ebp + 8], esi */
L_1705A444:
    eax = MEM32(edi + 0x250); /* 0x1705A444: mov eax, dword ptr [edi + 0x250] */
    ecx = MEM32(ebx + 0x250); /* 0x1705A44A: mov ecx, dword ptr [ebx + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1705A450: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x1705A453: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705A456: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A458:
    /* cmp MEM32(ecx + edx * 4), 0xFFFFFFFFu */ /* 0x1705A458: cmp dword ptr [ecx + edx*4], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A46A; /* 0x1705A45C: je 0x1705a46a */
L_1705A45E:
    SET_LO16(esi, MEM16(ecx + edx * 4)); /* 0x1705A45E: mov si, word ptr [ecx + edx*4] */
    MEM16(eax + edx * 2) = (uint16_t)(LO16(esi)); /* 0x1705A462: mov word ptr [eax + edx*2], si */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A466: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705A470; /* 0x1705A468: jmp 0x1705a470 */
L_1705A46A:
    _flag_a = (uint32_t)((MEM16(eax + edx * 2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + edx * 2) | 0xFFFFu)) << 16;
    MEM16(eax + edx * 2) = (uint16_t)(MEM16(eax + edx * 2) | 0xFFFFu); /* 0x1705A46A: or word ptr [eax + edx*2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1705A470:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705A470: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x1705A471: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A458; /* 0x1705A474: jb 0x1705a458 */
L_1705A476:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1705A476: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1705A479: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 6; /* 0x1705A47C: add dword ptr [ebp + 8], 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0xCu; /* 0x1705A480: add dword ptr [ebp - 0xc], 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x264) */ /* 0x1705A484: cmp eax, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A444; /* 0x1705A48A: jb 0x1705a444 */
L_1705A48C:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x1705A48C: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A49D; /* 0x1705A48F: je 0x1705a49d */
L_1705A491:
    ebx = MEM32(ebx + 0x248); /* 0x1705A491: mov ebx, dword ptr [ebx + 0x248] */
    eax = MEM32(ebx); /* 0x1705A497: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705A499: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1705A49A: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A49D:
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x1705A49D: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A4AE; /* 0x1705A4A0: je 0x1705a4ae */
L_1705A4A2:
    edi = MEM32(edi + 0x248); /* 0x1705A4A2: mov edi, dword ptr [edi + 0x248] */
    eax = MEM32(edi); /* 0x1705A4A8: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1705A4AA: push edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1705A4AB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A4AE:
    eax = MEM32(ebp + (-0x8)); /* 0x1705A4AE: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1705A4B1: pop edi */
    esi = POP32_VAL(esp); /* 0x1705A4B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705A4B3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705A4B4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705A4B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705A4BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705A4BDu);

L_1705A4BD:
    edi = edi; /* 0x1705A4BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705A4BF: push ebp */
    ebp = esp; /* 0x1705A4C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705A4C2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705A4C5: push ebx */
    PUSH32(esp, esi); /* 0x1705A4C6: push esi */
    ebx = ecx; /* 0x1705A4C7: mov ebx, ecx */
    ecx = MEM32(ebx + 0x218); /* 0x1705A4C9: mov ecx, dword ptr [ebx + 0x218] */
    PUSH32(esp, edi); /* 0x1705A4CF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1705A4D0: mov edi, dword ptr [ebp + 8] */
    eax = edi + 0x218; /* 0x1705A4D3: lea eax, [edi + 0x218] */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax))); _flag_b = (uint32_t)((ecx ^ MEM32(eax)));
    ecx = ecx ^ MEM32(eax); /* 0x1705A4D9: xor ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A4DB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x1705A4DD: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x218))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x218)));
    ecx = ecx ^ MEM32(ebx + 0x218); /* 0x1705A4E0: xor ecx, dword ptr [ebx + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1705A4E6: mov dword ptr [ebp - 8], esi */
    MEM32(eax) = ecx; /* 0x1705A4E9: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebx + 0x23C)); /* 0x1705A4EB: push dword ptr [ebx + 0x23c] */
    ecx = edi; /* 0x1705A4F1: mov ecx, edi */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x1705A4F3: push dword ptr [ebx + 0x264] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1705A4F9: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1705493B); /* 0x1705A4FC: call 0x1705493b */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A501: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705A503: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A69C; /* 0x1705A506: jl 0x1705a69c */
L_1705A50C:
    PUSH32(esp, esi); /* 0x1705A50C: push esi */
    eax = ebp + (-0xC); /* 0x1705A50D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1705A510: push eax */
    ecx = edi; /* 0x1705A511: mov ecx, edi */
    RECOMP_CALL(sub_1704EA87); /* 0x1705A513: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A518: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705A51A: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A69C; /* 0x1705A51D: jl 0x1705a69c */
L_1705A523:
    PUSH32(esp, 0x10u); /* 0x1705A523: push 0x10 */
    eax = ebp + (-0x8); /* 0x1705A525: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1705A528: push eax */
    ecx = ebx; /* 0x1705A529: mov ecx, ebx */
    RECOMP_CALL(sub_1704EA87); /* 0x1705A52B: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705A530: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705A532: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A69C; /* 0x1705A535: jl 0x1705a69c */
L_1705A53B:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x1705A53B: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A56A; /* 0x1705A542: je 0x1705a56a */
L_1705A544:
    ecx = MEM32(ebx + 0x264); /* 0x1705A544: mov ecx, dword ptr [ebx + 0x264] */
    edi = MEM32(edi + 0x254); /* 0x1705A54A: mov edi, dword ptr [edi + 0x254] */
    esi = MEM32(ebx + 0x254); /* 0x1705A550: mov esi, dword ptr [ebx + 0x254] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705A556: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705A556: shl ecx, 2 */
    eax = ecx; /* 0x1705A559: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A55B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A55B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A55E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A560: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A562: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A565: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1705A567: mov edi, dword ptr [ebp + 8] */
L_1705A56A:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x1705A56A: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A598; /* 0x1705A571: je 0x1705a598 */
L_1705A573:
    ecx = MEM32(ebx + 0x264); /* 0x1705A573: mov ecx, dword ptr [ebx + 0x264] */
    edi = MEM32(edi + 0x258); /* 0x1705A579: mov edi, dword ptr [edi + 0x258] */
    esi = MEM32(ebx + 0x258); /* 0x1705A57F: mov esi, dword ptr [ebx + 0x258] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1705A585: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1705A585: shl ecx, 1 */
    eax = ecx; /* 0x1705A587: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A589: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A589: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A58C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A58E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A590: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A593: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1705A595: mov edi, dword ptr [ebp + 8] */
L_1705A598:
    /* cmp MEM32(ebx + 0x25C), 0 */ /* 0x1705A598: cmp dword ptr [ebx + 0x25c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x25C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A5FD; /* 0x1705A59F: je 0x1705a5fd */
L_1705A5A1:
    eax = MEM32(ebx + 0x260); /* 0x1705A5A1: mov eax, dword ptr [ebx + 0x260] */
    eax = eax + eax * 4; /* 0x1705A5A7: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705A5AA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705A5AA: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705A5AD: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705A5AE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A5B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705A5B5: pop ecx */
    MEM32(edi + 0x25C) = eax; /* 0x1705A5B6: mov dword ptr [edi + 0x25c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705A5CA; /* 0x1705A5BC: jne 0x1705a5ca */
L_1705A5BE:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1705A5BE: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1705A69C; /* 0x1705A5C5: jmp 0x1705a69c */
L_1705A5CA:
    ecx = MEM32(ebx + 0x260); /* 0x1705A5CA: mov ecx, dword ptr [ebx + 0x260] */
    esi = MEM32(ebx + 0x25C); /* 0x1705A5D0: mov esi, dword ptr [ebx + 0x25c] */
    ecx = ecx + ecx * 4; /* 0x1705A5D6: lea ecx, [ecx + ecx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705A5D9: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705A5D9: shl ecx, 2 */
    edi = eax; /* 0x1705A5DC: mov edi, eax */
    eax = ecx; /* 0x1705A5DE: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A5E0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A5E0: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A5E3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A5E5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A5E7: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A5EA: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1705A5EC: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x260); /* 0x1705A5EF: mov eax, dword ptr [ebx + 0x260] */
    MEM32(ecx + 0x260) = eax; /* 0x1705A5F5: mov dword ptr [ecx + 0x260], eax */
    edi = ecx; /* 0x1705A5FB: mov edi, ecx */
L_1705A5FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705A5FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x264), eax */ /* 0x1705A5FF: cmp dword ptr [ebx + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705A605: mov dword ptr [ebp + 8], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A645; /* 0x1705A608: jbe 0x1705a645 */
L_1705A60A:
    ecx = MEM32(ebp + (-0xC)); /* 0x1705A60A: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x1705A60D: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705A610: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1705A612: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1705A614: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = 3; /* 0x1705A616: mov dword ptr [ebp - 0x10], 3 */
L_1705A61D:
    esi = MEM32(edx + ecx); /* 0x1705A61D: mov esi, dword ptr [edx + ecx] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1705A620: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A629; /* 0x1705A623: je 0x1705a629 */
L_1705A625:
    MEM32(ecx) = esi; /* 0x1705A625: mov dword ptr [ecx], esi */
    goto L_1705A62C; /* 0x1705A627: jmp 0x1705a62c */
L_1705A629:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x1705A629: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A62C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1705A62C: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1705A62F: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705A61D; /* 0x1705A632: jne 0x1705a61d */
L_1705A634:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1705A634: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x1705A637: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1705A63A: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x264) */ /* 0x1705A63D: cmp ecx, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A60A; /* 0x1705A643: jb 0x1705a60a */
L_1705A645:
    /* test MEM8(ebx + 0x218), 1 */ /* 0x1705A645: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A69C; /* 0x1705A64C: je 0x1705a69c */
L_1705A64E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705A64E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x264), esi */ /* 0x1705A650: cmp dword ptr [ebx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x1705A656: mov dword ptr [ebp + 8], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A69C; /* 0x1705A659: jbe 0x1705a69c */
L_1705A65B:
    eax = MEM32(edi + 0x250); /* 0x1705A65B: mov eax, dword ptr [edi + 0x250] */
    ecx = MEM32(ebx + 0x250); /* 0x1705A661: mov ecx, dword ptr [ebx + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1705A667: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1705A669: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1705A66B: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = 3; /* 0x1705A66D: mov dword ptr [ebp - 0x10], 3 */
L_1705A674:
    edx = MEM32(eax + ecx); /* 0x1705A674: mov edx, dword ptr [eax + ecx] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1705A677: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A680; /* 0x1705A67A: je 0x1705a680 */
L_1705A67C:
    MEM32(eax) = edx; /* 0x1705A67C: mov dword ptr [eax], edx */
    goto L_1705A683; /* 0x1705A67E: jmp 0x1705a683 */
L_1705A680:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1705A680: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A683:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1705A683: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1705A686: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705A674; /* 0x1705A689: jne 0x1705a674 */
L_1705A68B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1705A68B: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x1705A68E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1705A691: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x264) */ /* 0x1705A694: cmp eax, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A65B; /* 0x1705A69A: jb 0x1705a65b */
L_1705A69C:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1705A69C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A6AE; /* 0x1705A6A0: je 0x1705a6ae */
L_1705A6A2:
    ebx = MEM32(ebx + 0x248); /* 0x1705A6A2: mov ebx, dword ptr [ebx + 0x248] */
    eax = MEM32(ebx); /* 0x1705A6A8: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705A6AA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1705A6AB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A6AE:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1705A6AE: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A6C0; /* 0x1705A6B2: je 0x1705a6c0 */
L_1705A6B4:
    edi = MEM32(edi + 0x248); /* 0x1705A6B4: mov edi, dword ptr [edi + 0x248] */
    eax = MEM32(edi); /* 0x1705A6BA: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1705A6BC: push edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1705A6BD: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A6C0:
    eax = MEM32(ebp + (-0x4)); /* 0x1705A6C0: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1705A6C3: pop edi */
    esi = POP32_VAL(esp); /* 0x1705A6C4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705A6C5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705A6C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705A6C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705A6CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705A6CFu);

L_1705A6CF:
    edi = edi; /* 0x1705A6CF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705A6D1: push ebp */
    ebp = esp; /* 0x1705A6D2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3A0u; /* 0x1705A6D4: sub esp, 0x3a0 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1705A6DA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1705A6DD: push ebx */
    PUSH32(esp, edi); /* 0x1705A6DE: push edi */
    PUSH32(esp, 0x800u); /* 0x1705A6DF: push 0x800 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705A6E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x8); /* 0x1705A6E6: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1705A6E9: push edx */
    PUSH32(esp, edi); /* 0x1705A6EA: push edi */
    PUSH32(esp, edi); /* 0x1705A6EB: push edi */
    ebx = ecx; /* 0x1705A6EC: mov ebx, ecx */
    ecx = MEM32(eax); /* 0x1705A6EE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A6F0: push eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1705A6F1: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1705A6F4: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1705A6F7: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705A6FA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1705A6FC: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A78D; /* 0x1705A6FF: jl 0x1705a78d */
L_1705A705:
    PUSH32(esp, 0x10u); /* 0x1705A705: push 0x10 */
    eax = ebp + (-0x4); /* 0x1705A707: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1705A70A: push eax */
    ecx = ebx; /* 0x1705A70B: mov ecx, ebx */
    RECOMP_CALL(sub_1704FE30); /* 0x1705A70D: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705A712: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1705A714: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705A78D; /* 0x1705A717: jl 0x1705a78d */
L_1705A719:
    PUSH32(esp, esi); /* 0x1705A719: push esi */
    esi = ebx + 0xC; /* 0x1705A71A: lea esi, [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x1705A71D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705A71E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705A721: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705A726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A74D; /* 0x1705A728: je 0x1705a74d */
L_1705A72A:
    ecx = MEM32(ebx + 0x23C); /* 0x1705A72A: mov ecx, dword ptr [ebx + 0x23c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x238)); /* 0x1705A730: imul ecx, dword ptr [ebx + 0x238] */
    esi = MEM32(ebp + (-0x4)); /* 0x1705A737: mov esi, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x1705A73A: mov edi, dword ptr [ebp - 8] */
    eax = ecx; /* 0x1705A73D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A73F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A73F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705A742: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705A744: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A746: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705A749: rep movsb byte ptr es:[edi], byte ptr [esi] */
    goto L_1705A78C; /* 0x1705A74B: jmp 0x1705a78c */
L_1705A74D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705A74D: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x3A0); /* 0x1705A750: lea ecx, [ebp - 0x3a0] */
    PUSH32(esp, esi); /* 0x1705A756: push esi */
    RECOMP_CALL(sub_17053A3C); /* 0x1705A757: call 0x17053a3c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705A75C: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x3A0); /* 0x1705A75F: lea ecx, [ebp - 0x3a0] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705A765: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1704EAB2); /* 0x1705A768: call 0x1704eab2 */
    RECOMP_FLAGS_IN();
    esi = ebx + 0x23C; /* 0x1705A76D: lea esi, [ebx + 0x23c] */
    /* cmp MEM32(esi), 0 */ /* 0x1705A773: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A78C; /* 0x1705A776: jbe 0x1705a78c */
L_1705A778:
    PUSH32(esp, 1); /* 0x1705A778: push 1 */
    PUSH32(esp, edi); /* 0x1705A77A: push edi */
    PUSH32(esp, edi); /* 0x1705A77B: push edi */
    ecx = ebp + (-0x3A0); /* 0x1705A77C: lea ecx, [ebp - 0x3a0] */
    RECOMP_CALL(sub_1704EAE2); /* 0x1705A782: call 0x1704eae2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1705A787: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x1705A788: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A778; /* 0x1705A78A: jb 0x1705a778 */
L_1705A78C:
    esi = POP32_VAL(esp); /* 0x1705A78C: pop esi */
L_1705A78D:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1705A78D: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A79C; /* 0x1705A791: je 0x1705a79c */
L_1705A793:
    eax = MEM32(ebp + 0xC); /* 0x1705A793: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1705A796: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705A798: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705A799: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A79C:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1705A79C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A7AE; /* 0x1705A7A0: je 0x1705a7ae */
L_1705A7A2:
    ebx = MEM32(ebx + 0x234); /* 0x1705A7A2: mov ebx, dword ptr [ebx + 0x234] */
    eax = MEM32(ebx); /* 0x1705A7A8: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705A7AA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1705A7AB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1705A7AE:
    eax = MEM32(ebp + (-0xC)); /* 0x1705A7AE: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1705A7B1: pop edi */
    ebx = POP32_VAL(esp); /* 0x1705A7B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705A7B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705A7B4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705A7BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705A7BCu);

L_1705A7BC:
    edi = edi; /* 0x1705A7BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705A7BE: push ebp */
    ebp = esp; /* 0x1705A7BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x1705A7C1: sub esp, 0x60 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705A7C4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705A7C5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1705A7C8: push esi */
    ecx = ebp + (-0x60); /* 0x1705A7C9: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_1704FE8A); /* 0x1705A7CC: call 0x1704fe8a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x250); /* 0x1705A7D1: mov ecx, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705A7D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1705A7D9: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705A7DC: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1705A7DF: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1705A7E2: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1705A7E5: mov dword ptr [ebp - 0x28], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A7F8; /* 0x1705A7E8: je 0x1705a7f8 */
L_1705A7EA:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1705A7EA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A7F8; /* 0x1705A7ED: je 0x1705a7f8 */
L_1705A7EF:
    /* test MEM8(esi + 0x215), 4 */ /* 0x1705A7EF: test byte ptr [esi + 0x215], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x215)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A804; /* 0x1705A7F6: je 0x1705a804 */
L_1705A7F8:
    MEM32(ebp + 0xC) = 0x8876086Cu; /* 0x1705A7F8: mov dword ptr [ebp + 0xc], 0x8876086c */
    goto L_1705AA8A; /* 0x1705A7FF: jmp 0x1705aa8a */
L_1705A804:
    PUSH32(esp, ebx); /* 0x1705A804: push ebx */
    PUSH32(esp, edi); /* 0x1705A805: push edi */
    edi = MEM32(esi + 0x264); /* 0x1705A806: mov edi, dword ptr [esi + 0x264] */
    eax = edi + edi * 2; /* 0x1705A80C: lea eax, [edi + edi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705A80F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705A80F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705A812: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705A813: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705A818: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1705A81A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705A81C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705A831; /* 0x1705A81D: je 0x1705a831 */
L_1705A81F:
    PUSH32(esp, 0x1706E47Eu); /* 0x1705A81F: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x1705A824: push edi */
    PUSH32(esp, 0xCu); /* 0x1705A825: push 0xc */
    PUSH32(esp, ebx); /* 0x1705A827: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1705A828: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1705A82D: mov eax, ebx */
    goto L_1705A833; /* 0x1705A82F: jmp 0x1705a833 */
L_1705A831:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705A831: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A833:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705A833: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1705A835: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x250) = eax; /* 0x1705A837: mov dword ptr [esi + 0x250], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A84B; /* 0x1705A83D: jne 0x1705a84b */
L_1705A83F:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1705A83F: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1705AA76; /* 0x1705A846: jmp 0x1705aa76 */
L_1705A84B:
    eax = MEM32(ebp + 0xC); /* 0x1705A84B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705A84E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), ecx */ /* 0x1705A850: cmp dword ptr [esi + 0x264], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A890; /* 0x1705A856: jbe 0x1705a890 */
L_1705A858:
    ebx = MEM32(eax); /* 0x1705A858: mov ebx, dword ptr [eax] */
    edi = MEM32(esi + 0x250); /* 0x1705A85A: mov edi, dword ptr [esi + 0x250] */
    MEM32(ecx + edi) = ebx; /* 0x1705A860: mov dword ptr [ecx + edi], ebx */
    edi = MEM32(esi + 0x250); /* 0x1705A863: mov edi, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1705A869: add eax, 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(eax); /* 0x1705A86C: mov ebx, dword ptr [eax] */
    MEM32(ecx + edi + 0x4) = ebx; /* 0x1705A86E: mov dword ptr [ecx + edi + 4], ebx */
    edi = MEM32(esi + 0x250); /* 0x1705A872: mov edi, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1705A878: add eax, 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(eax); /* 0x1705A87B: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1705A87D: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx + edi + 0x8) = ebx; /* 0x1705A880: mov dword ptr [ecx + edi + 8], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705A884: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1705A885: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x1705A888: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A858; /* 0x1705A88E: jb 0x1705a858 */
L_1705A890:
    ecx = MEM32(esi + 0x23C); /* 0x1705A890: mov ecx, dword ptr [esi + 0x23c] */
    ebx = MEM32(ebp + 0x10); /* 0x1705A896: mov ebx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705A899: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705A899: shl ecx, 2 */
    edx = ecx; /* 0x1705A89C: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705A89E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705A89E: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1705A8A1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1705A8A4: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705A8A6: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705A8A8: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705A8AA: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705A8AD: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 0x10u); /* 0x1705A8AF: push 0x10 */
    eax = ebp + 0x8; /* 0x1705A8B1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1705A8B4: push eax */
    ecx = esi; /* 0x1705A8B5: mov ecx, esi */
    RECOMP_CALL(sub_1704EA87); /* 0x1705A8B7: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705A8BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1705A8BE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1705A8C0: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705AA76; /* 0x1705A8C3: jl 0x1705aa76 */
L_1705A8C9:
    eax = MEM32(ebp + 0x8); /* 0x1705A8C9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x24C) = eax; /* 0x1705A8CC: mov dword ptr [esi + 0x24c], eax */
    eax = MEM32(esi + 0x260); /* 0x1705A8D2: mov eax, dword ptr [esi + 0x260] */
    /* cmp eax, ecx */ /* 0x1705A8D8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A900; /* 0x1705A8DA: jne 0x1705a900 */
L_1705A8DC:
    edx = MEM32(esi + 0x264); /* 0x1705A8DC: mov edx, dword ptr [esi + 0x264] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1705A8E2: mov dword ptr [ebp - 0x3c], edx */
    edx = MEM32(esi + 0x23C); /* 0x1705A8E5: mov edx, dword ptr [esi + 0x23c] */
    MEM32(ebp + (-0x14)) = 1; /* 0x1705A8EB: mov dword ptr [ebp - 0x14], 1 */
    eax = ebp + (-0x44); /* 0x1705A8F2: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1705A8F5: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x38)) = ecx; /* 0x1705A8F8: mov dword ptr [ebp - 0x38], ecx */
    MEM32(ebp + (-0x34)) = edx; /* 0x1705A8FB: mov dword ptr [ebp - 0x34], edx */
    goto L_1705A909; /* 0x1705A8FE: jmp 0x1705a909 */
L_1705A900:
    MEM32(ebp + (-0x14)) = eax; /* 0x1705A900: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi + 0x25C); /* 0x1705A903: mov eax, dword ptr [esi + 0x25c] */
L_1705A909:
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1705A909: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1705A90C: mov dword ptr [ebp - 0x10], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A9FF; /* 0x1705A90F: jbe 0x1705a9ff */
L_1705A915:
    edx = eax + 0x4; /* 0x1705A915: lea edx, [eax + 4] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1705A918: mov dword ptr [ebp - 0x20], edx */
L_1705A91B:
    eax = MEM32(edx); /* 0x1705A91B: mov eax, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x1705A91D: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705A920: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1705A922: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1705A924: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705A927: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705A9E8; /* 0x1705A92A: jae 0x1705a9e8 */
L_1705A930:
    ebx = eax + eax * 2; /* 0x1705A930: lea ebx, [eax + eax*2] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1705A933: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1705A933: shl ebx, 2 */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1705A936: mov dword ptr [ebp - 0x1c], ebx */
L_1705A939:
    eax = MEM32(ebp + 0x8); /* 0x1705A939: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1705A93C: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705A93E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1705A942: mov dword ptr [ebp - 0x2c], eax */
L_1705A945:
    eax = MEM32(ebp + (-0x2C)); /* 0x1705A945: mov eax, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x4)); /* 0x1705A948: mov edx, dword ptr [ebp - 4] */
    edi = MEM32(eax + edx * 4); /* 0x1705A94B: mov edi, dword ptr [eax + edx*4] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1705A94E: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A9C3; /* 0x1705A951: je 0x1705a9c3 */
L_1705A953:
    eax = MEM32(ebp + 0x10); /* 0x1705A953: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + edi * 4), 0xFFFFFFFFu */ /* 0x1705A956: cmp dword ptr [eax + edi*4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705A9C3; /* 0x1705A95A: jne 0x1705a9c3 */
L_1705A95C:
    PUSH32(esp, 0); /* 0x1705A95C: push 0 */
    PUSH32(esp, edi); /* 0x1705A95E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705A95F: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x60); /* 0x1705A962: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17055F2F); /* 0x1705A965: call 0x17055f2f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1705A96A: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A96E:
    /* cmp MEM32(ebp + (-0x58)), 0xFFFFFFFFu */ /* 0x1705A96E: cmp dword ptr [ebp - 0x58], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A9C0; /* 0x1705A972: je 0x1705a9c0 */
L_1705A974:
    ecx = ebp + (-0x60); /* 0x1705A974: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170565B5); /* 0x1705A977: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x48)), 0 */ /* 0x1705A97C: cmp byte ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x48))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705A980: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705A989; /* 0x1705A982: je 0x1705a989 */
L_1705A984:
    edx = MEM32(ebp + (-0x54)); /* 0x1705A984: mov edx, dword ptr [ebp - 0x54] */
    goto L_1705A997; /* 0x1705A987: jmp 0x1705a997 */
L_1705A989:
    eax = MEM32(ebp + (-0x54)); /* 0x1705A989: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, 3); /* 0x1705A98C: push 3 */
    ebx = POP32_VAL(esp); /* 0x1705A98E: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705A98F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705A990: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1705A992: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = MEM32(ebp + (-0x1C)); /* 0x1705A994: mov ebx, dword ptr [ebp - 0x1c] */
L_1705A997:
    eax = edx + ecx * 2; /* 0x1705A997: lea eax, [edx + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705A99A: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x1705A99C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + eax * 4); /* 0x1705A99F: mov eax, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1705A9A2: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0xC)), 0x2710u */ /* 0x1705A9A5: cmp dword ptr [ebp - 0xc], 0x2710 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x2710u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1705A9AC: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + eax * 4) = edi; /* 0x1705A9AF: mov dword ptr [ecx + eax*4], edi */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705A96E; /* 0x1705A9B2: jbe 0x1705a96e */
L_1705A9B4:
    MEM32(ebp + 0xC) = 0x88760B55u; /* 0x1705A9B4: mov dword ptr [ebp + 0xc], 0x88760b55 */
    goto L_1705AA76; /* 0x1705A9BB: jmp 0x1705aa76 */
L_1705A9C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x1705A9C0: mov ecx, dword ptr [ebp - 0x18] */
L_1705A9C3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1705A9C3: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x1705A9C6: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A945; /* 0x1705A9CA: jb 0x1705a945 */
L_1705A9D0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705A9D0: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x1705A9D3: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1705A9D6: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1705A9D9: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A939; /* 0x1705A9DC: jb 0x1705a939 */
L_1705A9E2:
    ebx = MEM32(ebp + 0x10); /* 0x1705A9E2: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x20)); /* 0x1705A9E5: mov edx, dword ptr [ebp - 0x20] */
L_1705A9E8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1705A9E8: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1705A9EB: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1705A9EE: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x1705A9F1: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x1705A9F4: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705A91B; /* 0x1705A9F7: jb 0x1705a91b */
L_1705A9FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705A9FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705A9FF:
    /* cmp MEM32(esi + 0x23C), ecx */ /* 0x1705A9FF: cmp dword ptr [esi + 0x23c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705AA76; /* 0x1705AA05: jbe 0x1705aa76 */
L_1705AA07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705AA07: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705AA09: inc edx */
    _flag_k = FK_INC;
L_1705AA0A:
    eax = MEM32(ebx + ecx * 4); /* 0x1705AA0A: mov eax, dword ptr [ebx + ecx*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1705AA0D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705AA17; /* 0x1705AA10: jne 0x1705aa17 */
L_1705AA12:
    MEM32(ebx + ecx * 4) = ecx; /* 0x1705AA12: mov dword ptr [ebx + ecx*4], ecx */
    goto L_1705AA30; /* 0x1705AA15: jmp 0x1705aa30 */
L_1705AA17:
    /* cmp eax, ecx */ /* 0x1705AA17: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA30; /* 0x1705AA19: je 0x1705aa30 */
L_1705AA1B:
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705AA20; /* 0x1705AA1B: jbe 0x1705aa20 */
L_1705AA1D:
    MEM32(ebp + (-0x24)) = edx; /* 0x1705AA1D: mov dword ptr [ebp - 0x24], edx */
L_1705AA20:
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1705AA20: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705A9B4; /* 0x1705AA26: jae 0x1705a9b4 */
L_1705AA28:
    /* cmp MEM32(ebx + eax * 4), eax */ /* 0x1705AA28: cmp dword ptr [ebx + eax*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA30; /* 0x1705AA2B: je 0x1705aa30 */
L_1705AA2D:
    MEM32(ebp + (-0x28)) = edx; /* 0x1705AA2D: mov dword ptr [ebp - 0x28], edx */
L_1705AA30:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705AA30: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x23C) */ /* 0x1705AA31: cmp ecx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705AA0A; /* 0x1705AA37: jb 0x1705aa0a */
L_1705AA39:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1705AA39: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA76; /* 0x1705AA3D: je 0x1705aa76 */
L_1705AA3F:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1705AA3F: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705AA76; /* 0x1705AA43: jne 0x1705aa76 */
L_1705AA45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705AA45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1705AA47: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705AA76; /* 0x1705AA4D: jbe 0x1705aa76 */
L_1705AA4F:
    edx = MEM32(ebx + eax * 4); /* 0x1705AA4F: mov edx, dword ptr [ebx + eax*4] */
    /* cmp edx, eax */ /* 0x1705AA52: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA6D; /* 0x1705AA54: je 0x1705aa6d */
L_1705AA56:
    ecx = ebx + edx * 4; /* 0x1705AA56: lea ecx, [ebx + edx*4] */
    edi = MEM32(ecx); /* 0x1705AA59: mov edi, dword ptr [ecx] */
    /* cmp edi, edx */ /* 0x1705AA5B: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA64; /* 0x1705AA5D: je 0x1705aa64 */
L_1705AA5F:
    MEM32(ebx + eax * 4) = edi; /* 0x1705AA5F: mov dword ptr [ebx + eax*4], edi */
    goto L_1705AA6D; /* 0x1705AA62: jmp 0x1705aa6d */
L_1705AA64:
    /* cmp edx, eax */ /* 0x1705AA64: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705AA6D; /* 0x1705AA66: jbe 0x1705aa6d */
L_1705AA68:
    MEM32(ecx) = eax; /* 0x1705AA68: mov dword ptr [ecx], eax */
    MEM32(ebx + eax * 4) = eax; /* 0x1705AA6A: mov dword ptr [ebx + eax*4], eax */
L_1705AA6D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705AA6D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1705AA6E: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705AA4F; /* 0x1705AA74: jb 0x1705aa4f */
L_1705AA76:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1705AA76: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1705AA7A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1705AA7B: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AA8A; /* 0x1705AA7C: je 0x1705aa8a */
L_1705AA7E:
    eax = MEM32(esi + 0x248); /* 0x1705AA7E: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x1705AA84: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AA86: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705AA87: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1705AA8A:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1705AA8A: push dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(MEM32(esi + 0x24C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x24C) = MEM32(esi + 0x24C) & 0; /* 0x1705AA90: and dword ptr [esi + 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x1705AA97: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1705AA9C: mov eax, dword ptr [ebp - 0x30] */
    ecx = POP32_VAL(esp); /* 0x1705AA9F: pop ecx */
    MEM32(esi + 0x250) = eax; /* 0x1705AAA0: mov dword ptr [esi + 0x250], eax */
    eax = MEM32(ebp + 0xC); /* 0x1705AAA6: mov eax, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x1705AAA9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705AAAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705AAAB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AAB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AAB3u);

L_1705AAB3:
    edi = edi; /* 0x1705AAB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AAB5: push ebp */
    ebp = esp; /* 0x1705AAB6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705AAB8: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705AAB9: push dword ptr [ebp + 0x10] */
    esi = ecx; /* 0x1705AABC: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AABE: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x8; /* 0x1705AAC1: lea ecx, [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705AAC4: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x17005B18u; /* 0x1705AAC7: mov dword ptr [esi], 0x17005b18 */
    MEM32(esi + 0x4) = 1; /* 0x1705AACD: mov dword ptr [esi + 4], 1 */
    RECOMP_CALL(sub_17059980); /* 0x1705AAD4: call 0x17059980 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705AAD9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x220; /* 0x1705AADB: lea ecx, [esi + 0x220] */
    edx = MEM32(ecx); /* 0x1705AAE1: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    edx = edx & 0xFFFFFFFBu; /* 0x1705AAE3: and edx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x284) = eax; /* 0x1705AAE6: mov dword ptr [esi + 0x284], eax */
    MEM32(esi + 0x28C) = eax; /* 0x1705AAEC: mov dword ptr [esi + 0x28c], eax */
    MEM32(esi + 0x290) = eax; /* 0x1705AAF2: mov dword ptr [esi + 0x290], eax */
    MEM32(esi + 0x294) = eax; /* 0x1705AAF8: mov dword ptr [esi + 0x294], eax */
    MEM32(esi + 0x29C) = eax; /* 0x1705AAFE: mov dword ptr [esi + 0x29c], eax */
    MEM32(esi + 0x2A0) = eax; /* 0x1705AB04: mov dword ptr [esi + 0x2a0], eax */
    MEM32(esi + 0x2A8) = eax; /* 0x1705AB0A: mov dword ptr [esi + 0x2a8], eax */
    MEM32(esi + 0x2AC) = eax; /* 0x1705AB10: mov dword ptr [esi + 0x2ac], eax */
    MEM32(esi + 0x2B0) = eax; /* 0x1705AB16: mov dword ptr [esi + 0x2b0], eax */
    MEM32(esi + 0x2B8) = eax; /* 0x1705AB1C: mov dword ptr [esi + 0x2b8], eax */
    MEM32(esi + 0x2EC) = eax; /* 0x1705AB22: mov dword ptr [esi + 0x2ec], eax */
    MEM16(esi + 0x2F2) = (uint16_t)(LO16(eax)); /* 0x1705AB28: mov word ptr [esi + 0x2f2], ax */
    _flag_a = (uint32_t)((edx | 0x19u)); _flag_b = (uint32_t)((edx | 0x19u));
    edx = edx | 0x19u; /* 0x1705AB2F: or edx, 0x19 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x278) = esi; /* 0x1705AB32: mov dword ptr [esi + 0x278], esi */
    eax = esi; /* 0x1705AB38: mov eax, esi */
    MEM32(ecx) = edx; /* 0x1705AB3A: mov dword ptr [ecx], edx */
    esi = POP32_VAL(esp); /* 0x1705AB3C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705AB3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705AB3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AB46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AB46u);

L_1705AB46:
    edi = edi; /* 0x1705AB46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AB48: push ebp */
    ebp = esp; /* 0x1705AB49: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705AB4B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x1705AB4E: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x4); /* 0x1705AB51: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1705AB54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705AB55: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705AB5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AB5Du);

L_1705AB5D:
    edi = edi; /* 0x1705AB5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AB5F: push ebp */
    ebp = esp; /* 0x1705AB60: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705AB62: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2B4); /* 0x1705AB65: mov eax, dword ptr [eax + 0x2b4] */
    ebp = POP32_VAL(esp); /* 0x1705AB6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705AB6C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705AB74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AB74u);

L_1705AB74:
    edi = edi; /* 0x1705AB74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AB76: push ebp */
    ebp = esp; /* 0x1705AB77: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705AB79: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2C0); /* 0x1705AB7C: mov eax, dword ptr [eax + 0x2c0] */
    ebp = POP32_VAL(esp); /* 0x1705AB82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705AB83: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705AB8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AB8Bu);

L_1705AB8B:
    edi = edi; /* 0x1705AB8B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AB8D: push ebp */
    ebp = esp; /* 0x1705AB8E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705AB90: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AB93: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705AB96: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705AB99: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AB9B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1705AB9C: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705AB9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705ABA0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705ABA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705ABA8u);

L_1705ABA8:
    edi = edi; /* 0x1705ABA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705ABAA: push ebp */
    ebp = esp; /* 0x1705ABAB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705ABAD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705ABB0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705ABB3: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705ABB6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705ABB8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1705ABB9: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705ABBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705ABBD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705ABC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705ABC5u);

L_1705ABC5:
    edi = edi; /* 0x1705ABC5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705ABC7: push ebp */
    ebp = esp; /* 0x1705ABC8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705ABCA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705ABCD: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705ABD0: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705ABD3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705ABD5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x1705ABD6: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705ABD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705ABDA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705ABE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705ABE2u);

L_1705ABE2:
    edi = edi; /* 0x1705ABE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705ABE4: push ebp */
    ebp = esp; /* 0x1705ABE5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705ABE7: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1705ABEA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705ABED: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705ABF0: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705ABF3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705ABF5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x1705ABF6: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705ABF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705ABFA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AC02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AC02u);

L_1705AC02:
    edi = edi; /* 0x1705AC02: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AC04: push ebp */
    ebp = esp; /* 0x1705AC05: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705AC07: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1705AC0A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AC0D: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705AC10: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705AC13: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AC15: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x1705AC16: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705AC19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705AC1A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AC22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AC22u);

L_1705AC22:
    edi = edi; /* 0x1705AC22: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AC24: push ebp */
    ebp = esp; /* 0x1705AC25: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705AC27: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1705AC2A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AC2D: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705AC30: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705AC33: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AC35: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x1705AC36: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705AC39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705AC3A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AC42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AC42u);

L_1705AC42:
    edi = edi; /* 0x1705AC42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AC44: push ebp */
    ebp = esp; /* 0x1705AC45: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705AC47: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1705AC4A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AC4D: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705AC50: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705AC53: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AC55: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x54)); /* 0x1705AC56: call dword ptr [ecx + 0x54] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705AC59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705AC5A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705AC62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AC62u);

L_1705AC62:
    edi = edi; /* 0x1705AC62: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AC64: push ebp */
    ebp = esp; /* 0x1705AC65: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705AC67: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AC6A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705AC6D: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705AC70: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AC72: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x5C)); /* 0x1705AC73: call dword ptr [ecx + 0x5c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705AC76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705AC77: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705AC7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AC7Fu);

L_1705AC7F:
    edi = edi; /* 0x1705AC7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AC81: push ebp */
    ebp = esp; /* 0x1705AC82: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x23Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x23Cu; /* 0x1705AC84: sub esp, 0x23c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1705AC8A: mov eax, dword ptr [0x1723c894] */
    ecx = MEM32(ebp + 0x14); /* 0x1705AC8F: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x214)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x214)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x214)) = MEM32(ebp + (-0x214)) | 0xFFFFFFFFu; /* 0x1705AC92: or dword ptr [ebp - 0x214], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1705AC99: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1705AC9A: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1705AC9D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705AC9E: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x2C0); /* 0x1705ACA1: mov edx, dword ptr [esi + 0x2c0] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705ACA7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1705ACAA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1705ACAD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705ACAE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1705ACB0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x230)) = eax; /* 0x1705ACB2: mov dword ptr [ebp - 0x230], eax */
    MEM32(ebp + (-0x23C)) = ecx; /* 0x1705ACB8: mov dword ptr [ebp - 0x23c], ecx */
    MEM32(ebp + (-0x21C)) = edi; /* 0x1705ACBE: mov dword ptr [ebp - 0x21c], edi */
    MEM32(ebp + (-0x22C)) = edx; /* 0x1705ACC4: mov dword ptr [ebp - 0x22c], edx */
    MEM32(ebp + (-0x224)) = edi; /* 0x1705ACCA: mov dword ptr [ebp - 0x224], edi */
    MEM32(ebp + (-0x220)) = edi; /* 0x1705ACD0: mov dword ptr [ebp - 0x220], edi */
    MEM32(ebp + (-0x228)) = edi; /* 0x1705ACD6: mov dword ptr [ebp - 0x228], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AE62; /* 0x1705ACDC: je 0x1705ae62 */
L_1705ACE2:
    /* cmp ebx, edi */ /* 0x1705ACE2: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705ACF3; /* 0x1705ACE4: jne 0x1705acf3 */
L_1705ACE6:
    /* cmp ecx, edi */ /* 0x1705ACE6: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705ACF3; /* 0x1705ACE8: jne 0x1705acf3 */
L_1705ACEA:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x1705ACEA: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705AE62; /* 0x1705ACED: ja 0x1705ae62 */
L_1705ACF3:
    eax = MEM32(esi); /* 0x1705ACF3: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x21C); /* 0x1705ACF5: lea ecx, [ebp - 0x21c] */
    PUSH32(esp, ecx); /* 0x1705ACFB: push ecx */
    ecx = ebp + (-0x220); /* 0x1705ACFC: lea ecx, [ebp - 0x220] */
    PUSH32(esp, ecx); /* 0x1705AD02: push ecx */
    ecx = ebp + (-0x234); /* 0x1705AD03: lea ecx, [ebp - 0x234] */
    PUSH32(esp, ecx); /* 0x1705AD09: push ecx */
    ecx = ebp + (-0x224); /* 0x1705AD0A: lea ecx, [ebp - 0x224] */
    PUSH32(esp, ecx); /* 0x1705AD10: push ecx */
    PUSH32(esp, esi); /* 0x1705AD11: push esi */
    RECOMP_ICALL(MEM32(eax + 0x9C)); /* 0x1705AD12: call dword ptr [eax + 0x9c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705AD18: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x210)) = eax; /* 0x1705AD1A: mov dword ptr [ebp - 0x210], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705AE6C; /* 0x1705AD20: jl 0x1705ae6c */
L_1705AD26:
    eax = ebp + (-0x108); /* 0x1705AD26: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1705AD2C: push eax */
    edi = 0x104u; /* 0x1705AD2D: mov edi, 0x104 */
    PUSH32(esp, edi); /* 0x1705AD32: push edi */
    RECOMP_ICALL(MEM32(0x170010E8)); /* 0x1705AD33: call dword ptr [0x170010e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705AD39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AE56; /* 0x1705AD3B: je 0x1705ae56 */
L_1705AD41:
    /* cmp eax, edi */ /* 0x1705AD41: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705AE56; /* 0x1705AD43: ja 0x1705ae56 */
L_1705AD49:
    eax = ebp + (-0x20C); /* 0x1705AD49: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1705AD4F: push eax */
    PUSH32(esp, 0); /* 0x1705AD50: push 0 */
    PUSH32(esp, 0x17005BC0u); /* 0x1705AD52: push 0x17005bc0 */
    eax = ebp + (-0x108); /* 0x1705AD57: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1705AD5D: push eax */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x1705AD5E: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705AD64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AE56; /* 0x1705AD66: je 0x1705ae56 */
L_1705AD6C:
    PUSH32(esp, MEM32(ebp + (-0x234))); /* 0x1705AD6C: push dword ptr [ebp - 0x234] */
    eax = ebp + (-0x20C); /* 0x1705AD72: lea eax, [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1705AD78: push dword ptr [ebp - 0x224] */
    MEM32(ebp + (-0x228)) = 1; /* 0x1705AD7E: mov dword ptr [ebp - 0x228], 1 */
    PUSH32(esp, 0); /* 0x1705AD88: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705AD8A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x23C))); /* 0x1705AD8D: push dword ptr [ebp - 0x23c] */
    PUSH32(esp, ebx); /* 0x1705AD93: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x220))); /* 0x1705AD94: push dword ptr [ebp - 0x220] */
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x1705AD9A: push dword ptr [ebp - 0x21c] */
    PUSH32(esp, 0); /* 0x1705ADA0: push 0 */
    PUSH32(esp, eax); /* 0x1705ADA2: push eax */
    RECOMP_CALL(sub_17078CF5); /* 0x1705ADA3: call 0x17078cf5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705ADA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x210)) = eax; /* 0x1705ADAA: mov dword ptr [ebp - 0x210], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705AE6C; /* 0x1705ADB0: jl 0x1705ae6c */
L_1705ADB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705ADB6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1705ADB8: push ebx */
    PUSH32(esp, 0x80u); /* 0x1705ADB9: push 0x80 */
    PUSH32(esp, 3); /* 0x1705ADBE: push 3 */
    PUSH32(esp, ebx); /* 0x1705ADC0: push ebx */
    PUSH32(esp, ebx); /* 0x1705ADC1: push ebx */
    PUSH32(esp, 0x80000000u); /* 0x1705ADC2: push 0x80000000 */
    eax = ebp + (-0x20C); /* 0x1705ADC7: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1705ADCD: push eax */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x1705ADCE: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1705ADD4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x214)) = eax; /* 0x1705ADD7: mov dword ptr [ebp - 0x214], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AE56; /* 0x1705ADDD: je 0x1705ae56 */
L_1705ADDF:
    PUSH32(esp, ebx); /* 0x1705ADDF: push ebx */
    ebx = MEM32(0x170010F4); /* 0x1705ADE0: mov ebx, dword ptr [0x170010f4] */
    ecx = ebp + (-0x218); /* 0x1705ADE6: lea ecx, [ebp - 0x218] */
    PUSH32(esp, ecx); /* 0x1705ADEC: push ecx */
    PUSH32(esp, edi); /* 0x1705ADED: push edi */
    ecx = ebp + (-0x108); /* 0x1705ADEE: lea ecx, [ebp - 0x108] */
    PUSH32(esp, ecx); /* 0x1705ADF4: push ecx */
    PUSH32(esp, eax); /* 0x1705ADF5: push eax */
    goto L_1705AE50; /* 0x1705ADF6: jmp 0x1705ae50 */
L_1705ADF8:
    /* cmp MEM32(ebp + (-0x218)), 0 */ /* 0x1705ADF8: cmp dword ptr [ebp - 0x218], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x218))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AE6C; /* 0x1705ADFF: je 0x1705ae6c */
L_1705AE01:
    eax = MEM32(ebp + (-0x230)); /* 0x1705AE01: mov eax, dword ptr [ebp - 0x230] */
    ecx = MEM32(eax); /* 0x1705AE07: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x238); /* 0x1705AE09: lea edx, [ebp - 0x238] */
    PUSH32(esp, edx); /* 0x1705AE0F: push edx */
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x1705AE10: push dword ptr [ebp - 0x218] */
    edx = ebp + (-0x108); /* 0x1705AE16: lea edx, [ebp - 0x108] */
    PUSH32(esp, edx); /* 0x1705AE1C: push edx */
    PUSH32(esp, eax); /* 0x1705AE1D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1705AE1E: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705AE21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x210)) = eax; /* 0x1705AE23: mov dword ptr [ebp - 0x210], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705AE6C; /* 0x1705AE29: jl 0x1705ae6c */
L_1705AE2B:
    eax = MEM32(ebp + (-0x238)); /* 0x1705AE2B: mov eax, dword ptr [ebp - 0x238] */
    /* cmp eax, MEM32(ebp + (-0x218)) */ /* 0x1705AE31: cmp eax, dword ptr [ebp - 0x218] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x218)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1705AE56; /* 0x1705AE37: jb 0x1705ae56 */
L_1705AE39:
    PUSH32(esp, 0); /* 0x1705AE39: push 0 */
    eax = ebp + (-0x218); /* 0x1705AE3B: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x1705AE41: push eax */
    PUSH32(esp, edi); /* 0x1705AE42: push edi */
    eax = ebp + (-0x108); /* 0x1705AE43: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1705AE49: push eax */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x1705AE4A: push dword ptr [ebp - 0x214] */
L_1705AE50:
    RECOMP_ICALL(ebx); /* 0x1705AE50: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705AE52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705ADF8; /* 0x1705AE54: jne 0x1705adf8 */
L_1705AE56:
    MEM32(ebp + (-0x210)) = 0x80004005u; /* 0x1705AE56: mov dword ptr [ebp - 0x210], 0x80004005 */
    goto L_1705AE6C; /* 0x1705AE60: jmp 0x1705ae6c */
L_1705AE62:
    MEM32(ebp + (-0x210)) = 0x8876086Cu; /* 0x1705AE62: mov dword ptr [ebp - 0x210], 0x8876086c */
L_1705AE6C:
    eax = MEM32(ebp + (-0x21C)); /* 0x1705AE6C: mov eax, dword ptr [ebp - 0x21c] */
    /* test eax, eax */ /* 0x1705AE72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AE83; /* 0x1705AE74: je 0x1705ae83 */
L_1705AE76:
    ecx = MEM32(eax); /* 0x1705AE76: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705AE78: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705AE79: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x21C)) = MEM32(ebp + (-0x21C)) & 0; /* 0x1705AE7C: and dword ptr [ebp - 0x21c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705AE83:
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1705AE83: push dword ptr [ebp - 0x224] */
    RECOMP_CALL(sub_1721B010); /* 0x1705AE89: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x220))); /* 0x1705AE8E: push dword ptr [ebp - 0x220] */
    RECOMP_CALL(sub_1721B010); /* 0x1705AE94: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x22C)); /* 0x1705AE99: mov eax, dword ptr [ebp - 0x22c] */
    /* cmp MEM32(esi + 0x2A8), eax */ /* 0x1705AE9F: cmp dword ptr [esi + 0x2a8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705AEA5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705AEA6: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AEB0; /* 0x1705AEA7: je 0x1705aeb0 */
L_1705AEA9:
    ecx = MEM32(esi); /* 0x1705AEA9: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1705AEAB: push eax */
    PUSH32(esp, esi); /* 0x1705AEAC: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x6C)); /* 0x1705AEAD: call dword ptr [ecx + 0x6c] */
    RECOMP_FLAGS_IN();
L_1705AEB0:
    /* cmp MEM32(ebp + (-0x214)), 0xFFFFFFFFu */ /* 0x1705AEB0: cmp dword ptr [ebp - 0x214], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x214))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1705AEB7: pop edi */
    esi = POP32_VAL(esp); /* 0x1705AEB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705AEB9: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AEC8; /* 0x1705AEBA: je 0x1705aec8 */
L_1705AEBC:
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x1705AEBC: push dword ptr [ebp - 0x214] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x1705AEC2: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_1705AEC8:
    /* cmp MEM32(ebp + (-0x228)), 0 */ /* 0x1705AEC8: cmp dword ptr [ebp - 0x228], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x228))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705AEDE; /* 0x1705AECF: je 0x1705aede */
L_1705AED1:
    eax = ebp + (-0x20C); /* 0x1705AED1: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1705AED7: push eax */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x1705AED8: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
L_1705AEDE:
    ecx = MEM32(ebp + (-0x4)); /* 0x1705AEDE: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x210)); /* 0x1705AEE1: mov eax, dword ptr [ebp - 0x210] */
    RECOMP_CALL(sub_1721B76C); /* 0x1705AEE7: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705AEEC: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705AEED: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705AEF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AEF5u);

L_1705AEF5:
    edi = edi; /* 0x1705AEF5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AEF7: push ebp */
    ebp = esp; /* 0x1705AEF8: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1705AEFA: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, 0xC0BE2000u */ /* 0x1705AEFD: test edx, 0xc0be2000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0BE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705AF0F; /* 0x1705AF03: jne 0x1705af0f */
L_1705AF05:
    /* test LO8(edx), 1 */ /* 0x1705AF05: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705AF0F; /* 0x1705AF08: jne 0x1705af0f */
L_1705AF0A:
    /* test HI8(edx), 4 */ /* 0x1705AF0A: test dh, 4 */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AF16; /* 0x1705AF0D: je 0x1705af16 */
L_1705AF0F:
    eax = 0x8876086Cu; /* 0x1705AF0F: mov eax, 0x8876086c */
    goto L_1705AF5C; /* 0x1705AF14: jmp 0x1705af5c */
L_1705AF16:
    eax = MEM32(ebp + 0x8); /* 0x1705AF16: mov eax, dword ptr [ebp + 8] */
    ecx = edx; /* 0x1705AF19: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001CFFFu);
    ecx = ecx & 0x0001CFFFu; /* 0x1705AF1B: and ecx, 0x1cfff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AF31; /* 0x1705AF21: je 0x1705af31 */
L_1705AF23:
    /* test MEM8(eax + 0x21C), 1 */ /* 0x1705AF23: test byte ptr [eax + 0x21c], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x21C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705AF37; /* 0x1705AF2A: je 0x1705af37 */
L_1705AF2C:
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x1705AF2C: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705AF37; /* 0x1705AF2F: jmp 0x1705af37 */
L_1705AF31:
    ecx = MEM32(eax + 0x21C); /* 0x1705AF31: mov ecx, dword ptr [eax + 0x21c] */
L_1705AF37:
    PUSH32(esp, esi); /* 0x1705AF37: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1705AF38: push dword ptr [ebp + 0x1c] */
    esi = MEM32(eax); /* 0x1705AF3B: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705AF3D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705AF40: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705AF43: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x1705AF46: push edx */
    PUSH32(esp, 0); /* 0x1705AF47: push 0 */
    PUSH32(esp, MEM32(eax + 0x238)); /* 0x1705AF49: push dword ptr [eax + 0x238] */
    edx = eax + 0x14; /* 0x1705AF4F: lea edx, [eax + 0x14] */
    PUSH32(esp, edx); /* 0x1705AF52: push edx */
    PUSH32(esp, ecx); /* 0x1705AF53: push ecx */
    PUSH32(esp, eax); /* 0x1705AF54: push eax */
    RECOMP_ICALL(MEM32(esi + 0xA0)); /* 0x1705AF55: call dword ptr [esi + 0xa0] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1705AF5B: pop esi */
L_1705AF5C:
    ebp = POP32_VAL(esp); /* 0x1705AF5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1705AF5D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1705AF65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705AF65u);

L_1705AF65:
    edi = edi; /* 0x1705AF65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705AF67: push ebp */
    ebp = esp; /* 0x1705AF68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705AF6A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705AF6D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705AF70: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1705AF74: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705AF77: push esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705AF84; /* 0x1705AF78: jae 0x1705af84 */
L_1705AF7A:
    esi = 0x8876086Cu; /* 0x1705AF7A: mov esi, 0x8876086c */
    goto L_1705B051; /* 0x1705AF7F: jmp 0x1705b051 */
L_1705AF84:
    PUSH32(esp, ebx); /* 0x1705AF84: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1705AF85: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x2C0); /* 0x1705AF88: mov ecx, dword ptr [ebx + 0x2c0] */
    PUSH32(esp, eax); /* 0x1705AF8E: push eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1705AF8F: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebx); /* 0x1705AF92: mov ecx, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705AF94: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x6C)); /* 0x1705AF95: call dword ptr [ecx + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705AF98: mov esi, eax */
    /* test esi, esi */ /* 0x1705AF9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705B050; /* 0x1705AF9C: jl 0x1705b050 */
L_1705AFA2:
    eax = MEM32(ebx + 0x2A8); /* 0x1705AFA2: mov eax, dword ptr [ebx + 0x2a8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1705AFA8: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0x290); /* 0x1705AFAB: mov eax, dword ptr [ebx + 0x290] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705AFB1: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x2B4); /* 0x1705AFB4: mov eax, dword ptr [ebx + 0x2b4] */
    MEM32(ebp + 0x8) = eax; /* 0x1705AFBA: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebx + 0x2C0); /* 0x1705AFBD: mov eax, dword ptr [ebx + 0x2c0] */
    MEM32(ebp + 0x10) = eax; /* 0x1705AFC3: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx + 0x268); /* 0x1705AFC6: mov eax, dword ptr [ebx + 0x268] */
    eax = eax + eax * 4; /* 0x1705AFCC: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705AFCF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705AFCF: shl eax, 2 */
    PUSH32(esp, edi); /* 0x1705AFD2: push edi */
    PUSH32(esp, eax); /* 0x1705AFD3: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705AFD4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705AFD9: mov edi, eax */
    /* test edi, edi */ /* 0x1705AFDB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705AFDD: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1705AFDE: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705AFEA; /* 0x1705AFE1: jne 0x1705afea */
L_1705AFE3:
    esi = 0x8007000Eu; /* 0x1705AFE3: mov esi, 0x8007000e */
    goto L_1705B04F; /* 0x1705AFE8: jmp 0x1705b04f */
L_1705AFEA:
    eax = MEM32(ebx + 0x268); /* 0x1705AFEA: mov eax, dword ptr [ebx + 0x268] */
    esi = MEM32(ebx + 0x264); /* 0x1705AFF0: mov esi, dword ptr [ebx + 0x264] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705AFF6: push dword ptr [ebp + 0xc] */
    ecx = eax + eax * 4; /* 0x1705AFF9: lea ecx, [eax + eax*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705AFFC: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705AFFC: shl ecx, 2 */
    eax = ecx; /* 0x1705AFFF: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705B001: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705B001: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705B004: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705B006: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705B008: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705B00B: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx); /* 0x1705B00D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705B00F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B010: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705B013: mov esi, eax */
    /* test esi, esi */ /* 0x1705B015: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705B04F; /* 0x1705B017: jl 0x1705b04f */
L_1705B019:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705B019: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebx + 0x2A8); /* 0x1705B01C: mov eax, dword ptr [ebx + 0x2a8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705B022: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebx); /* 0x1705B025: mov ecx, dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705B027: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705B02A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705B02D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705B030: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705B033: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1705B036: push eax */
    PUSH32(esp, ebx); /* 0x1705B037: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xA4)); /* 0x1705B038: call dword ptr [ecx + 0xa4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705B03E: mov esi, eax */
    /* test esi, esi */ /* 0x1705B040: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705B04F; /* 0x1705B042: jl 0x1705b04f */
L_1705B044:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705B044: push dword ptr [ebp - 0x10] */
    eax = MEM32(ebx); /* 0x1705B047: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705B049: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B04A: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705B04D: mov esi, eax */
L_1705B04F:
    edi = POP32_VAL(esp); /* 0x1705B04F: pop edi */
L_1705B050:
    ebx = POP32_VAL(esp); /* 0x1705B050: pop ebx */
L_1705B051:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705B051: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1705B054: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705B059: pop ecx */
    eax = esi; /* 0x1705B05A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705B05C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705B05D: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705B05E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705B066(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B066u);

L_1705B066:
    edi = edi; /* 0x1705B066: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B068: push ebp */
    ebp = esp; /* 0x1705B069: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1705B06B: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1705B06E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B079; /* 0x1705B070: jne 0x1705b079 */
L_1705B072:
    eax = 0x8876086Cu; /* 0x1705B072: mov eax, 0x8876086c */
    goto L_1705B0AF; /* 0x1705B077: jmp 0x1705b0af */
L_1705B079:
    eax = MEM32(ebp + 0x8); /* 0x1705B079: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x258); /* 0x1705B07C: mov ecx, dword ptr [eax + 0x258] */
    eax = MEM32(eax + 0x26C); /* 0x1705B082: mov eax, dword ptr [eax + 0x26c] */
    eax = eax + eax * 2; /* 0x1705B088: lea eax, [eax + eax*2] */
    /* test eax, eax */ /* 0x1705B08B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B0AD; /* 0x1705B08D: jbe 0x1705b0ad */
L_1705B08F:
    PUSH32(esp, esi); /* 0x1705B08F: push esi */
L_1705B090:
    SET_LO16(esi, MEM16(ecx)); /* 0x1705B090: mov si, word ptr [ecx] */
    /* cmp LO16(esi), 0xFFFFu */ /* 0x1705B093: cmp si, 0xffff */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B0A1; /* 0x1705B098: je 0x1705b0a1 */
L_1705B09A:
    esi = (uint32_t)LO16(esi); /* 0x1705B09A: movzx esi, si */
    MEM32(edx) = esi; /* 0x1705B09D: mov dword ptr [edx], esi */
    goto L_1705B0A4; /* 0x1705B09F: jmp 0x1705b0a4 */
L_1705B0A1:
    _flag_a = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu));
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu; /* 0x1705B0A1: or dword ptr [edx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B0A4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1705B0A4: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705B0A7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705B0A8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705B0A9: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705B090; /* 0x1705B0AA: jne 0x1705b090 */
L_1705B0AC:
    esi = POP32_VAL(esp); /* 0x1705B0AC: pop esi */
L_1705B0AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705B0AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B0AF:
    ebp = POP32_VAL(esp); /* 0x1705B0AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705B0B0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705B0B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B0B8u);

L_1705B0B8:
    edi = edi; /* 0x1705B0B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B0BA: push ebp */
    ebp = esp; /* 0x1705B0BB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1705B0BD: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705B0C0: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705B0C1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1705B0C3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705B0C4: mov esi, dword ptr [ebp + 8] */
    /* test MEM16(esi + 0x21C), 0x440u */ /* 0x1705B0C7: test word ptr [esi + 0x21c], 0x440 */
    _flag_a = (uint32_t)(MEM16(esi + 0x21C)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705B0D0: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705B0D3: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1705B0D6: mov dword ptr [ebp - 0x10], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B0E7; /* 0x1705B0D9: je 0x1705b0e7 */
L_1705B0DB:
    MEM32(ebp + 0x8) = 0x8876086Cu; /* 0x1705B0DB: mov dword ptr [ebp + 8], 0x8876086c */
    goto L_1705B2DD; /* 0x1705B0E2: jmp 0x1705b2dd */
L_1705B0E7:
    eax = MEM32(esi); /* 0x1705B0E7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705B0E9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1705B0EA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1705B0ED: push 1 */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705B0EF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x1705B0F2: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705B0F4: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B0F5: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705B0F8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705B0FA: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705B2DD; /* 0x1705B0FD: jl 0x1705b2dd */
L_1705B103:
    eax = MEM32(esi + 0x270); /* 0x1705B103: mov eax, dword ptr [esi + 0x270] */
    eax = eax + eax * 2; /* 0x1705B109: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705B10C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705B10C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705B10F: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705B110: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705B115: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705B117: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705B118: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B129; /* 0x1705B11B: jne 0x1705b129 */
L_1705B11D:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1705B11D: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_1705B2DD; /* 0x1705B124: jmp 0x1705b2dd */
L_1705B129:
    eax = MEM32(esi + 0x21C); /* 0x1705B129: mov eax, dword ptr [esi + 0x21c] */
    ecx = MEM32(esi); /* 0x1705B12F: mov ecx, dword ptr [esi] */
    edx = ebp + (-0xC); /* 0x1705B131: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1705B134: push edx */
    PUSH32(esp, ebx); /* 0x1705B135: push ebx */
    PUSH32(esp, ebx); /* 0x1705B136: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705B137: push dword ptr [ebp - 4] */
    edx = esi + 0x14; /* 0x1705B13A: lea edx, [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x1705B13D: push ebx */
    PUSH32(esp, 1); /* 0x1705B13E: push 1 */
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x1705B140: push dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x1705B146: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1705B14B: push edx */
    PUSH32(esp, eax); /* 0x1705B14C: push eax */
    PUSH32(esp, esi); /* 0x1705B14D: push esi */
    RECOMP_ICALL(MEM32(ecx + 0xA0)); /* 0x1705B14E: call dword ptr [ecx + 0xa0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705B154: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705B156: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705B2DD; /* 0x1705B159: jl 0x1705b2dd */
L_1705B15F:
    eax = MEM32(esi + 0x268); /* 0x1705B15F: mov eax, dword ptr [esi + 0x268] */
    ecx = MEM32(esi + 0x288); /* 0x1705B165: mov ecx, dword ptr [esi + 0x288] */
    PUSH32(esp, edi); /* 0x1705B16B: push edi */
    edi = ecx + eax * 2 + 0x2; /* 0x1705B16C: lea edi, [ecx + eax*2 + 2] */
    edi = edi + edi * 2; /* 0x1705B170: lea edi, [edi + edi*2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x294));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x294); /* 0x1705B173: add edi, dword ptr [esi + 0x294] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1705B179: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1705B179: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1705B17C: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1705B17D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705B182: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705B184: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1705B185: mov dword ptr [ebp - 0x14], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B196; /* 0x1705B188: jne 0x1705b196 */
L_1705B18A:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1705B18A: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_1705B2DC; /* 0x1705B191: jmp 0x1705b2dc */
L_1705B196:
    ecx = MEM32(esi + 0x268); /* 0x1705B196: mov ecx, dword ptr [esi + 0x268] */
    PUSH32(esp, 4); /* 0x1705B19C: push 4 */
    MEM32(eax) = ecx; /* 0x1705B19E: mov dword ptr [eax], ecx */
    edx = POP32_VAL(esp); /* 0x1705B1A0: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1A1: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x268), ebx */ /* 0x1705B1A3: cmp dword ptr [esi + 0x268], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x268)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705B1A9: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705B217; /* 0x1705B1AC: jbe 0x1705b217 */
L_1705B1AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705B1AE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B1B0:
    ebx = MEM32(esi + 0x264); /* 0x1705B1B0: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x4); /* 0x1705B1B6: mov ebx, dword ptr [ecx + ebx + 4] */
    MEM32(eax) = ebx; /* 0x1705B1BA: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705B1BC: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x8); /* 0x1705B1C2: mov ebx, dword ptr [ecx + ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1C6: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B1C8: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x29C); /* 0x1705B1CA: mov ebx, dword ptr [esi + 0x29c] */
    ebx = MEM32(ebx + ecx + 0x8); /* 0x1705B1D0: mov ebx, dword ptr [ebx + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1D4: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B1D6: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705B1D8: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0xC); /* 0x1705B1DE: mov ebx, dword ptr [ecx + ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1E2: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B1E4: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705B1E6: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x10); /* 0x1705B1EC: mov ebx, dword ptr [ecx + ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1F0: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B1F2: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x29C); /* 0x1705B1F4: mov ebx, dword ptr [esi + 0x29c] */
    ebx = MEM32(ebx + ecx + 0x10); /* 0x1705B1FA: mov ebx, dword ptr [ebx + ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B1FE: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B200: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B202: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705B204: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x8)); /* 0x1705B207: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1705B20A: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x268) */ /* 0x1705B20D: cmp ebx, dword ptr [esi + 0x268] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x268));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B1B0; /* 0x1705B213: jb 0x1705b1b0 */
L_1705B215:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705B215: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B217:
    ecx = (uint32_t)MEM16(esi + 0x2F2); /* 0x1705B217: movzx ecx, word ptr [esi + 0x2f2] */
    MEM32(eax) = ecx; /* 0x1705B21E: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x2A0); /* 0x1705B220: mov ecx, dword ptr [esi + 0x2a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B226: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705B228: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x2A4); /* 0x1705B22A: mov ecx, dword ptr [esi + 0x2a4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B230: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705B232: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x288); /* 0x1705B234: mov ecx, dword ptr [esi + 0x288] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B23A: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705B23C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B23E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x288), ebx */ /* 0x1705B240: cmp dword ptr [esi + 0x288], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x288)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705B246: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705B28C; /* 0x1705B249: jbe 0x1705b28c */
L_1705B24B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1705B24B: mov ecx, dword ptr [ebp - 8] */
    ebx = MEM32(esi + 0x284); /* 0x1705B24E: mov ebx, dword ptr [esi + 0x284] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1705B254: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1705B254: shl ecx, 3 */
    ebx = MEM32(ecx + ebx); /* 0x1705B257: mov ebx, dword ptr [ecx + ebx] */
    MEM32(eax) = ebx; /* 0x1705B25A: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x284); /* 0x1705B25C: mov ebx, dword ptr [esi + 0x284] */
    ebx = (uint32_t)MEM16(ecx + ebx + 0x4); /* 0x1705B262: movzx ebx, word ptr [ecx + ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B267: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705B269: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x284); /* 0x1705B26B: mov ebx, dword ptr [esi + 0x284] */
    ecx = (uint32_t)MEM16(ecx + ebx + 0x6); /* 0x1705B271: movzx ecx, word ptr [ecx + ebx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B276: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705B278: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B27A: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705B27C: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x8)); /* 0x1705B27F: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(esi + 0x288) */ /* 0x1705B282: cmp ecx, dword ptr [esi + 0x288] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x288));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B24B; /* 0x1705B288: jb 0x1705b24b */
L_1705B28A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705B28A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B28C:
    ecx = MEM32(esi + 0x294); /* 0x1705B28C: mov ecx, dword ptr [esi + 0x294] */
    MEM32(eax) = ecx; /* 0x1705B292: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B294: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705B296: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x294), ebx */ /* 0x1705B298: cmp dword ptr [esi + 0x294], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x294)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705B2B9; /* 0x1705B29E: jbe 0x1705b2b9 */
L_1705B2A0:
    ebx = MEM32(esi + 0x28C); /* 0x1705B2A0: mov ebx, dword ptr [esi + 0x28c] */
    ebx = (uint32_t)MEM16(ebx + ecx * 2); /* 0x1705B2A6: movzx ebx, word ptr [ebx + ecx*2] */
    MEM32(eax) = ebx; /* 0x1705B2AA: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705B2AC: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705B2AE: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x294) */ /* 0x1705B2AF: cmp ecx, dword ptr [esi + 0x294] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x294));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B2A0; /* 0x1705B2B5: jb 0x1705b2a0 */
L_1705B2B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705B2B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B2B9:
    eax = MEM32(ebp + 0xC); /* 0x1705B2B9: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1705B2BC: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(eax) = ecx; /* 0x1705B2BF: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x10); /* 0x1705B2C1: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1705B2C4: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = edi; /* 0x1705B2C7: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x14); /* 0x1705B2C9: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x1705B2CC: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + (-0xC)); /* 0x1705B2CE: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1705B2D1: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705B2D4: mov dword ptr [ebp - 4], ebx */
    MEM32(ecx) = eax; /* 0x1705B2D7: mov dword ptr [ecx], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705B2D9: mov dword ptr [ebp - 0xc], ebx */
L_1705B2DC:
    edi = POP32_VAL(esp); /* 0x1705B2DC: pop edi */
L_1705B2DD:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1705B2DD: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B2F2; /* 0x1705B2E0: je 0x1705b2f2 */
L_1705B2E2:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705B2E2: push dword ptr [ebp - 0x10] */
    eax = MEM32(esi); /* 0x1705B2E5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705B2E7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B2E8: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705B2EB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705B2ED: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1705B2DD; /* 0x1705B2F0: jl 0x1705b2dd */
L_1705B2F2:
    PUSH32(esp, ebx); /* 0x1705B2F2: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1705B2F3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705B2F8: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1705B2FB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1705B300: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x1705B303: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705B304: pop ecx */
    esi = POP32_VAL(esp); /* 0x1705B305: pop esi */
    /* cmp eax, ebx */ /* 0x1705B306: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1705B308: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B311; /* 0x1705B309: je 0x1705b311 */
L_1705B30B:
    ecx = MEM32(eax); /* 0x1705B30B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705B30D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705B30E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705B311:
    eax = MEM32(ebp + 0x8); /* 0x1705B311: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705B314: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705B315: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705B31D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B31Du);

L_1705B31D:
    edi = edi; /* 0x1705B31D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B31F: push ebp */
    ebp = esp; /* 0x1705B320: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x1705B322: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705B328: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1705B32B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1705B32D: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x1705B333: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B33F; /* 0x1705B336: jne 0x1705b33f */
L_1705B338:
    eax = 0x8876086Cu; /* 0x1705B338: mov eax, 0x8876086c */
    goto L_1705B384; /* 0x1705B33D: jmp 0x1705b384 */
L_1705B33F:
    PUSH32(esp, esi); /* 0x1705B33F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705B340: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1705B342: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B37E; /* 0x1705B344: je 0x1705b37e */
L_1705B346:
    /* test LO8(eax), 1 */ /* 0x1705B346: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B37E; /* 0x1705B348: jne 0x1705b37e */
L_1705B34A:
    ecx = ebp + (-0x208); /* 0x1705B34A: lea ecx, [ebp - 0x208] */
    PUSH32(esp, ecx); /* 0x1705B350: push ecx */
    PUSH32(esp, eax); /* 0x1705B351: push eax */
    RECOMP_CALL(sub_170533BA); /* 0x1705B352: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705B357: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1705B383; /* 0x1705B359: jl 0x1705b383 */
L_1705B35B:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705B35B: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x1705B35E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1705B361: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1705B363: push esi */
    PUSH32(esp, esi); /* 0x1705B364: push esi */
    PUSH32(esp, esi); /* 0x1705B365: push esi */
    PUSH32(esp, esi); /* 0x1705B366: push esi */
    PUSH32(esp, esi); /* 0x1705B367: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705B368: push dword ptr [ebp + 0x14] */
    edx = ebp + (-0x208); /* 0x1705B36B: lea edx, [ebp - 0x208] */
    PUSH32(esp, edx); /* 0x1705B371: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705B372: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705B375: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xA0)); /* 0x1705B376: call dword ptr [ecx + 0xa0] */
    RECOMP_FLAGS_IN();
    goto L_1705B383; /* 0x1705B37C: jmp 0x1705b383 */
L_1705B37E:
    eax = 0x8876086Cu; /* 0x1705B37E: mov eax, 0x8876086c */
L_1705B383:
    esi = POP32_VAL(esp); /* 0x1705B383: pop esi */
L_1705B384:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705B384: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705B385: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705B38D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B38Du);

L_1705B38D:
    edi = edi; /* 0x1705B38D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B38F: push ebp */
    ebp = esp; /* 0x1705B390: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705B392: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705B393: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1705B396: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x1705B399: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1705B39C: push edi */
    edi = eax + (-0x1); /* 0x1705B39D: lea edi, [eax - 1] */
    MEM32(esi + 0x4) = edi; /* 0x1705B3A0: mov dword ptr [esi + 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B3B3; /* 0x1705B3A3: jne 0x1705b3b3 */
L_1705B3A5:
    ecx = esi; /* 0x1705B3A5: mov ecx, esi */
    RECOMP_CALL(sub_1705B3C0); /* 0x1705B3A7: call 0x1705b3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1705B3AC: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1705B3AD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705B3B2: pop ecx */
L_1705B3B3:
    eax = edi; /* 0x1705B3B3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1705B3B5: pop edi */
    esi = POP32_VAL(esp); /* 0x1705B3B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705B3B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705B3B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705B3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B3C0u);

    goto L_1705B3C0;
L_1704EE22:
    edi = edi; /* 0x1704EE22: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704EE24: push ebx */
    PUSH32(esp, esi); /* 0x1704EE25: push esi */
    esi = ecx; /* 0x1704EE26: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1704EE28: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704EE2B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704EE2D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704EE2F: push edi */
    MEM32(esi) = 0x170059A0u; /* 0x1704EE30: mov dword ptr [esi], 0x170059a0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE41; /* 0x1704EE36: je 0x1704ee41 */
L_1704EE38:
    ecx = MEM32(eax); /* 0x1704EE38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE3B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x1704EE3E: mov dword ptr [esi + 8], ebx */
L_1704EE41:
    edi = esi + 0x22C; /* 0x1704EE41: lea edi, [esi + 0x22c] */
    eax = MEM32(edi); /* 0x1704EE47: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE49: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE55; /* 0x1704EE4B: je 0x1704ee55 */
L_1704EE4D:
    ecx = MEM32(eax); /* 0x1704EE4D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE4F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE50: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE53: mov dword ptr [edi], ebx */
L_1704EE55:
    edi = esi + 0x230; /* 0x1704EE55: lea edi, [esi + 0x230] */
    eax = MEM32(edi); /* 0x1704EE5B: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE5D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE69; /* 0x1704EE5F: je 0x1704ee69 */
L_1704EE61:
    ecx = MEM32(eax); /* 0x1704EE61: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE63: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE64: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE67: mov dword ptr [edi], ebx */
L_1704EE69:
    edi = esi + 0x234; /* 0x1704EE69: lea edi, [esi + 0x234] */
    eax = MEM32(edi); /* 0x1704EE6F: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE71: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE7D; /* 0x1704EE73: je 0x1704ee7d */
L_1704EE75:
    ecx = MEM32(eax); /* 0x1704EE75: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE77: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE78: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE7B: mov dword ptr [edi], ebx */
L_1704EE7D:
    edi = esi + 0x248; /* 0x1704EE7D: lea edi, [esi + 0x248] */
    eax = MEM32(edi); /* 0x1704EE83: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE85: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE91; /* 0x1704EE87: je 0x1704ee91 */
L_1704EE89:
    ecx = MEM32(eax); /* 0x1704EE89: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE8B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE8C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE8F: mov dword ptr [edi], ebx */
L_1704EE91:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1704EE91: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EE97: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1704EE9C: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEA2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1704EEA7: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEAD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1704EEB2: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEB8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1704EEBD: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEC3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704EEC8: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1704EECB: pop edi */
    esi = POP32_VAL(esp); /* 0x1704EECC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704EECD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704EECE: ret  */
L_1705B3C0:
    edi = edi; /* 0x1705B3C0: mov edi, edi */
    PUSH32(esp, esi); /* 0x1705B3C2: push esi */
    esi = ecx; /* 0x1705B3C3: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705B3C5: push edi */
    edi = esi + 0x298; /* 0x1705B3C6: lea edi, [esi + 0x298] */
    eax = MEM32(edi); /* 0x1705B3CC: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x1705B3CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17005B18u; /* 0x1705B3D0: mov dword ptr [esi], 0x17005b18 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B3E1; /* 0x1705B3D6: je 0x1705b3e1 */
L_1705B3D8:
    ecx = MEM32(eax); /* 0x1705B3D8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705B3DA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705B3DB: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1705B3DE: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B3E1:
    PUSH32(esp, MEM32(esi + 0x2EC)); /* 0x1705B3E1: push dword ptr [esi + 0x2ec] */
    RECOMP_CALL(sub_1721B010); /* 0x1705B3E7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x29C)); /* 0x1705B3EC: push dword ptr [esi + 0x29c] */
    RECOMP_CALL(sub_1721B010); /* 0x1705B3F2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705B3F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705B3F8: pop ecx */
    edi = POP32_VAL(esp); /* 0x1705B3F9: pop edi */
    ecx = esi + 0x8; /* 0x1705B3FA: lea ecx, [esi + 8] */
    esi = POP32_VAL(esp); /* 0x1705B3FD: pop esi */
    RECOMP_BACKEDGE();
    goto L_1704EE22; /* 0x1705B3FE: jmp 0x1704ee22 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1705B408(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B408u);

L_1705B408:
    edi = edi; /* 0x1705B408: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B40A: push ebp */
    ebp = esp; /* 0x1705B40B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705B40D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705B410: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1705B411: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1705B414: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705B415: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1705B418: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705B419: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1705B41B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1705B41D: mov dword ptr [ebp - 0xc], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B42E; /* 0x1705B420: jne 0x1705b42e */
L_1705B422:
    MEM32(ebp + 0x8) = 0x8876086Cu; /* 0x1705B422: mov dword ptr [ebp + 8], 0x8876086c */
    goto L_1705B8BA; /* 0x1705B429: jmp 0x1705b8ba */
L_1705B42E:
    eax = MEM32(esi + 0x2C0); /* 0x1705B42E: mov eax, dword ptr [esi + 0x2c0] */
    PUSH32(esp, MEM32(esi + 0x2B8)); /* 0x1705B434: push dword ptr [esi + 0x2b8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1705B43A: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1705B43D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705B43F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B440: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705B443: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1705B445: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705B8BA; /* 0x1705B448: jl 0x1705b8ba */
L_1705B44E:
    eax = MEM32(esi + 0x268); /* 0x1705B44E: mov eax, dword ptr [esi + 0x268] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705B454: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705B454: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705B457: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705B458: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705B45D: mov edi, eax */
    /* test edi, edi */ /* 0x1705B45F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705B461: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B470; /* 0x1705B462: jne 0x1705b470 */
L_1705B464:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1705B464: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_1705B8BA; /* 0x1705B46B: jmp 0x1705b8ba */
L_1705B470:
    eax = esi + 0x254; /* 0x1705B470: lea eax, [esi + 0x254] */
    PUSH32(esp, 0); /* 0x1705B476: push 0 */
    PUSH32(esp, eax); /* 0x1705B478: push eax */
    ecx = esi + 0x8; /* 0x1705B479: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_1704EA87); /* 0x1705B47C: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705B481: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1705B483: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705B8BA; /* 0x1705B486: jl 0x1705b8ba */
L_1705B48C:
    goto L_1705B864; /* 0x1705B48C: jmp 0x1705b864 */
L_1705B491:
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2A8) = MEM32(esi + 0x2A8) - 1; /* 0x1705B491: dec dword ptr [esi + 0x2a8] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x284); /* 0x1705B497: mov ecx, dword ptr [esi + 0x284] */
    eax = MEM32(esi + 0x2A8); /* 0x1705B49D: mov eax, dword ptr [esi + 0x2a8] */
    eax = ecx + eax * 8; /* 0x1705B4A3: lea eax, [ecx + eax*8] */
    ecx = (uint32_t)MEM16(eax + 0x6); /* 0x1705B4A6: movzx ecx, word ptr [eax + 6] */
    /* cmp MEM16(eax + 0x4), 0 */ /* 0x1705B4AA: cmp word ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + 0xC) = ecx; /* 0x1705B4AF: mov dword ptr [ebp + 0xc], ecx */
    SET_LO8(ecx, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x1705B4B2: seta cl */
    MEM8(esi + 0x2C4) = (uint8_t)(LO8(ecx)); /* 0x1705B4B5: mov byte ptr [esi + 0x2c4], cl */
    ecx = (uint32_t)MEM16(eax); /* 0x1705B4BB: movzx ecx, word ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705B4BE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax + 0x6)); /* 0x1705B4C0: mov dl, byte ptr [eax + 6] */
    ecx = ecx + ecx * 2; /* 0x1705B4C3: lea ecx, [ecx + ecx*2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705B4C6: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1705B4C9: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x17005960));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x17005960); /* 0x1705B4CC: add ecx, dword ptr [edx*4 + 0x17005960] */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705B4D3: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = ecx; /* 0x1705B4DA: mov edx, ecx */
    ecx = MEM32(esi + 0x258); /* 0x1705B4DC: mov ecx, dword ptr [esi + 0x258] */
    SET_LO16(ecx, MEM16(ecx + edx * 2)); /* 0x1705B4E2: mov cx, word ptr [ecx + edx*2] */
    edx = MEM32(esi + 0x260); /* 0x1705B4E6: mov edx, dword ptr [esi + 0x260] */
    MEM16(esi + 0x2D8) = (uint16_t)(LO16(ecx)); /* 0x1705B4EC: mov word ptr [esi + 0x2d8], cx */
    ecx = (uint32_t)LO16(ecx); /* 0x1705B4F3: movzx ecx, cx */
    SET_LO16(ecx, MEM16(edx + ecx * 2)); /* 0x1705B4F6: mov cx, word ptr [edx + ecx*2] */
    MEM16(esi + 0x2D4) = (uint16_t)(LO16(ecx)); /* 0x1705B4FA: mov word ptr [esi + 0x2d4], cx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B747; /* 0x1705B501: je 0x1705b747 */
L_1705B507:
    /* test MEM8(ebp + 0xD), 0x20u */ /* 0x1705B507: test byte ptr [ebp + 0xd], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)MEM16(esi + 0x2D8); /* 0x1705B50B: movzx ecx, word ptr [esi + 0x2d8] */
    edx = ecx + ecx * 2; /* 0x1705B512: lea edx, [ecx + ecx*2] */
    ecx = MEM32(esi + 0x258); /* 0x1705B515: mov ecx, dword ptr [esi + 0x258] */
    SET_LO16(ecx, MEM16(ecx + edx * 2)); /* 0x1705B51B: mov cx, word ptr [ecx + edx*2] */
    MEM16(esi + 0x2DA) = (uint16_t)(LO16(ecx)); /* 0x1705B51F: mov word ptr [esi + 0x2da], cx */
    edx = (uint32_t)LO16(ecx); /* 0x1705B526: movzx edx, cx */
    ecx = MEM32(esi + 0x260); /* 0x1705B529: mov ecx, dword ptr [esi + 0x260] */
    SET_LO16(ecx, MEM16(ecx + edx * 2)); /* 0x1705B52F: mov cx, word ptr [ecx + edx*2] */
    edx = MEM32(esi + 0x264); /* 0x1705B533: mov edx, dword ptr [esi + 0x264] */
    MEM16(esi + 0x2D6) = (uint16_t)(LO16(ecx)); /* 0x1705B539: mov word ptr [esi + 0x2d6], cx */
    ecx = (uint32_t)LO16(ecx); /* 0x1705B540: movzx ecx, cx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1705B543: mov dword ptr [ebp - 8], ecx */
    ecx = ecx + ecx * 4; /* 0x1705B546: lea ecx, [ecx + ecx*4] */
    ecx = edx + ecx * 4; /* 0x1705B549: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705B54C: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705B54F: mov ecx, dword ptr [ecx + 0xc] */
    ecx = edx + ecx + (-0x1); /* 0x1705B552: lea ecx, [edx + ecx - 1] */
    edx = MEM32(ebp + (-0x8)); /* 0x1705B556: mov edx, dword ptr [ebp - 8] */
    MEM32(edi + edx * 4) = ecx; /* 0x1705B559: mov dword ptr [edi + edx*4], ecx */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B55C: movzx ecx, word ptr [esi + 0x2d4] */
    edx = MEM32(esi + 0x264); /* 0x1705B563: mov edx, dword ptr [esi + 0x264] */
    ecx = ecx + ecx * 4; /* 0x1705B569: lea ecx, [ecx + ecx*4] */
    ecx = edx + ecx * 4; /* 0x1705B56C: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705B56F: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705B572: mov ecx, dword ptr [ecx + 0xc] */
    edx = edx + ecx + (-0x1); /* 0x1705B575: lea edx, [edx + ecx - 1] */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B579: movzx ecx, word ptr [esi + 0x2d4] */
    MEM32(edi + ecx * 4) = edx; /* 0x1705B580: mov dword ptr [edi + ecx*4], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B5FE; /* 0x1705B583: je 0x1705b5fe */
L_1705B585:
    eax = (uint32_t)MEM16(esi + 0x2DA); /* 0x1705B585: movzx eax, word ptr [esi + 0x2da] */
    ecx = MEM32(esi + 0x258); /* 0x1705B58C: mov ecx, dword ptr [esi + 0x258] */
    eax = eax + eax * 2; /* 0x1705B592: lea eax, [eax + eax*2] */
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0x2)); /* 0x1705B595: mov ax, word ptr [ecx + eax*2 + 2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705B59A: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(esi + 0x2E2) = (uint16_t)(LO16(eax)); /* 0x1705B59E: mov word ptr [esi + 0x2e2], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B897; /* 0x1705B5A5: je 0x1705b897 */
L_1705B5AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705B5AB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(esi + 0x2DA)); /* 0x1705B5AD: mov dx, word ptr [esi + 0x2da] */
    eax = (uint32_t)LO16(eax); /* 0x1705B5B4: movzx eax, ax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705B5B7: mov dword ptr [ebp - 8], eax */
    eax = eax + eax * 2; /* 0x1705B5BA: lea eax, [eax + eax*2] */
    eax = ecx + eax * 2; /* 0x1705B5BD: lea eax, [ecx + eax*2] */
    PUSH32(esp, edx); /* 0x1705B5C0: push edx */
    PUSH32(esp, eax); /* 0x1705B5C1: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705B5C2: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1705B5C7: mov ecx, eax */
    ecx = MEM32(ecx * 4 + 0x1700595C); /* 0x1705B5C9: mov ecx, dword ptr [ecx*4 + 0x1700595c] */
    eax = MEM32(ebp + (-0x8)); /* 0x1705B5D0: mov eax, dword ptr [ebp - 8] */
    eax = eax + eax * 2; /* 0x1705B5D3: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705B5D6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705B5D8: mov eax, dword ptr [esi + 0x254] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1705B5DE: movzx eax, word ptr [eax + ecx*2] */
    ecx = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B5E2: movzx ecx, word ptr [esi + 0x2d6] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705B5E9: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1705B5EC: mov dword ptr [ebx + ecx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B5EF: movzx eax, word ptr [esi + 0x2d6] */
    eax = edi + eax * 4; /* 0x1705B5F6: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B5F9: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x4)); /* 0x1705B5FB: mov eax, dword ptr [ebp - 4] */
L_1705B5FE:
    ecx = MEM32(ebp + 0xC); /* 0x1705B5FE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1705B601: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x40u);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0x40u; /* 0x1705B604: and dword ptr [ebp - 8], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B710; /* 0x1705B608: jne 0x1705b710 */
L_1705B60E:
    /* test HI8(ecx), 1 */ /* 0x1705B60E: test ch, 1 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B710; /* 0x1705B611: jne 0x1705b710 */
L_1705B617:
    /* test LO8(ecx), 0x20u */ /* 0x1705B617: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B710; /* 0x1705B61A: jne 0x1705b710 */
L_1705B620:
    eax = (uint32_t)MEM16(esi + 0x2DA); /* 0x1705B620: movzx eax, word ptr [esi + 0x2da] */
    ecx = MEM32(esi + 0x258); /* 0x1705B627: mov ecx, dword ptr [esi + 0x258] */
    eax = eax + eax * 2; /* 0x1705B62D: lea eax, [eax + eax*2] */
    SET_LO16(eax, MEM16(ecx + eax * 2)); /* 0x1705B630: mov ax, word ptr [ecx + eax*2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705B634: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(esi + 0x2E0) = (uint16_t)(LO16(eax)); /* 0x1705B638: mov word ptr [esi + 0x2e0], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B897; /* 0x1705B63F: je 0x1705b897 */
L_1705B645:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705B645: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(esi + 0x2DA)); /* 0x1705B647: mov dx, word ptr [esi + 0x2da] */
    eax = (uint32_t)LO16(eax); /* 0x1705B64E: movzx eax, ax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705B651: mov dword ptr [ebp - 0x10], eax */
    eax = eax + eax * 2; /* 0x1705B654: lea eax, [eax + eax*2] */
    eax = ecx + eax * 2; /* 0x1705B657: lea eax, [ecx + eax*2] */
    PUSH32(esp, edx); /* 0x1705B65A: push edx */
    PUSH32(esp, eax); /* 0x1705B65B: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705B65C: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1705B661: mov ecx, dword ptr [ebp - 0x10] */
    ecx = ecx + ecx * 2; /* 0x1705B664: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x1700595C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x1700595C); /* 0x1705B667: add ecx, dword ptr [eax*4 + 0x1700595c] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705B66E: mov eax, dword ptr [esi + 0x254] */
    ecx = (uint32_t)MEM16(eax + ecx * 2); /* 0x1705B674: movzx ecx, word ptr [eax + ecx*2] */
    eax = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B678: movzx eax, word ptr [esi + 0x2d6] */
    eax = MEM32(edi + eax * 4); /* 0x1705B67F: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705B682: mov dword ptr [ebx + eax*4], ecx */
    eax = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B685: movzx eax, word ptr [esi + 0x2d6] */
    eax = edi + eax * 4; /* 0x1705B68C: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B68F: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    /* test MEM8(ebp + 0xD), 2 */ /* 0x1705B691: test byte ptr [ebp + 0xd], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B6B0; /* 0x1705B695: jne 0x1705b6b0 */
L_1705B697:
    eax = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B697: movzx eax, word ptr [esi + 0x2d6] */
    eax = MEM32(edi + eax * 4); /* 0x1705B69E: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705B6A1: mov dword ptr [ebx + eax*4], ecx */
    eax = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B6A4: movzx eax, word ptr [esi + 0x2d6] */
    eax = edi + eax * 4; /* 0x1705B6AB: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B6AE: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705B6B0:
    eax = MEM32(ebp + (-0x4)); /* 0x1705B6B0: mov eax, dword ptr [ebp - 4] */
L_1705B6B3:
    /* test MEM8(ebp + 0xD), 8 */ /* 0x1705B6B3: test byte ptr [ebp + 0xd], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B6F3; /* 0x1705B6B7: je 0x1705b6f3 */
L_1705B6B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705B6B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1705B6BB: mov cl, byte ptr [eax + 6] */
    eax = (uint32_t)MEM16(eax); /* 0x1705B6BE: movzx eax, word ptr [eax] */
    eax = eax + eax * 2; /* 0x1705B6C1: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705B6C4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx * 4 + 0x1700595C); /* 0x1705B6C7: mov ecx, dword ptr [ecx*4 + 0x1700595c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705B6CE: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705B6D0: mov eax, dword ptr [esi + 0x254] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1705B6D6: movzx eax, word ptr [eax + ecx*2] */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B6DA: movzx ecx, word ptr [esi + 0x2d4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705B6E1: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1705B6E4: mov dword ptr [ebx + ecx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B6E7: movzx eax, word ptr [esi + 0x2d4] */
    eax = edi + eax * 4; /* 0x1705B6EE: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B6F1: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705B6F3:
    /* test MEM8(ebp + 0xC), 0x90u */ /* 0x1705B6F3: test byte ptr [ebp + 0xc], 0x90 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B820; /* 0x1705B6F7: jne 0x1705b820 */
L_1705B6FD:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1705B6FD: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B7AF; /* 0x1705B701: je 0x1705b7af */
L_1705B707:
    /* test MEM8(ebp + 0xC), 0x20u */ /* 0x1705B707: test byte ptr [ebp + 0xc], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1705B7AD; /* 0x1705B70B: jmp 0x1705b7ad */
L_1705B710:
    /* test HI8(ecx), 2 */ /* 0x1705B710: test ch, 2 */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705B6B3; /* 0x1705B713: jne 0x1705b6b3 */
L_1705B715:
    ecx = (uint32_t)MEM16(esi + 0x2DA); /* 0x1705B715: movzx ecx, word ptr [esi + 0x2da] */
    edx = MEM32(esi + 0x254); /* 0x1705B71C: mov edx, dword ptr [esi + 0x254] */
    ecx = ecx + ecx * 2; /* 0x1705B722: lea ecx, [ecx + ecx*2] */
    ecx = (uint32_t)MEM16(edx + ecx * 2); /* 0x1705B725: movzx ecx, word ptr [edx + ecx*2] */
    edx = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B729: movzx edx, word ptr [esi + 0x2d6] */
    edx = MEM32(edi + edx * 4); /* 0x1705B730: mov edx, dword ptr [edi + edx*4] */
    MEM32(ebx + edx * 4) = ecx; /* 0x1705B733: mov dword ptr [ebx + edx*4], ecx */
    ecx = (uint32_t)MEM16(esi + 0x2D6); /* 0x1705B736: movzx ecx, word ptr [esi + 0x2d6] */
    ecx = edi + ecx * 4; /* 0x1705B73D: lea ecx, [edi + ecx*4] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1705B740: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1705B6B3; /* 0x1705B742: jmp 0x1705b6b3 */
L_1705B747:
    /* test MEM8(ebp + 0xD), 8 */ /* 0x1705B747: test byte ptr [ebp + 0xd], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(esi + 0x264); /* 0x1705B74B: mov edx, dword ptr [esi + 0x264] */
    ecx = (uint32_t)LO16(ecx); /* 0x1705B751: movzx ecx, cx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1705B754: mov dword ptr [ebp - 0x10], ecx */
    ecx = ecx + ecx * 4; /* 0x1705B757: lea ecx, [ecx + ecx*4] */
    ecx = edx + ecx * 4; /* 0x1705B75A: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705B75D: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705B760: mov ecx, dword ptr [ecx + 0xc] */
    ecx = edx + ecx + (-0x1); /* 0x1705B763: lea ecx, [edx + ecx - 1] */
    edx = MEM32(ebp + (-0x10)); /* 0x1705B767: mov edx, dword ptr [ebp - 0x10] */
    MEM32(edi + edx * 4) = ecx; /* 0x1705B76A: mov dword ptr [edi + edx*4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705B7A9; /* 0x1705B76D: je 0x1705b7a9 */
L_1705B76F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705B76F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1705B771: mov cl, byte ptr [eax + 6] */
    eax = (uint32_t)MEM16(eax); /* 0x1705B774: movzx eax, word ptr [eax] */
    eax = eax + eax * 2; /* 0x1705B777: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705B77A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx * 4 + 0x1700595C); /* 0x1705B77D: mov ecx, dword ptr [ecx*4 + 0x1700595c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705B784: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705B786: mov eax, dword ptr [esi + 0x254] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1705B78C: movzx eax, word ptr [eax + ecx*2] */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B790: movzx ecx, word ptr [esi + 0x2d4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705B797: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1705B79A: mov dword ptr [ebx + ecx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B79D: movzx eax, word ptr [esi + 0x2d4] */
    eax = edi + eax * 4; /* 0x1705B7A4: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B7A7: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705B7A9:
    /* test MEM8(ebp + 0xC), 0x90u */ /* 0x1705B7A9: test byte ptr [ebp + 0xc], 0x90 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1705B7AD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1705B820; /* 0x1705B7AD: jne 0x1705b820 */
L_1705B7AF:
    eax = (uint32_t)MEM16(esi + 0x2D8); /* 0x1705B7AF: movzx eax, word ptr [esi + 0x2d8] */
    ecx = MEM32(esi + 0x258); /* 0x1705B7B6: mov ecx, dword ptr [esi + 0x258] */
    eax = eax + eax * 2; /* 0x1705B7BC: lea eax, [eax + eax*2] */
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0x4)); /* 0x1705B7BF: mov ax, word ptr [ecx + eax*2 + 4] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705B7C4: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(esi + 0x2DE) = (uint16_t)(LO16(eax)); /* 0x1705B7C8: mov word ptr [esi + 0x2de], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B897; /* 0x1705B7CF: je 0x1705b897 */
L_1705B7D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705B7D5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(esi + 0x2D8)); /* 0x1705B7D7: mov dx, word ptr [esi + 0x2d8] */
    eax = (uint32_t)LO16(eax); /* 0x1705B7DE: movzx eax, ax */
    MEM32(ebp + 0xC) = eax; /* 0x1705B7E1: mov dword ptr [ebp + 0xc], eax */
    eax = eax + eax * 2; /* 0x1705B7E4: lea eax, [eax + eax*2] */
    eax = ecx + eax * 2; /* 0x1705B7E7: lea eax, [ecx + eax*2] */
    PUSH32(esp, edx); /* 0x1705B7EA: push edx */
    PUSH32(esp, eax); /* 0x1705B7EB: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705B7EC: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1705B7F1: mov ecx, eax */
    eax = MEM32(ebp + 0xC); /* 0x1705B7F3: mov eax, dword ptr [ebp + 0xc] */
    eax = eax + eax * 2; /* 0x1705B7F6: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1705B7F9: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705B7FB: mov eax, dword ptr [esi + 0x254] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1705B801: movzx eax, word ptr [eax + ecx*2] */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B805: movzx ecx, word ptr [esi + 0x2d4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705B80C: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1705B80F: mov dword ptr [ebx + ecx*4], eax */
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B812: movzx ecx, word ptr [esi + 0x2d4] */
    ecx = edi + ecx * 4; /* 0x1705B819: lea ecx, [edi + ecx*4] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1705B81C: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    goto L_1705B834; /* 0x1705B81E: jmp 0x1705b834 */
L_1705B820:
    eax = (uint32_t)MEM16(esi + 0x2D8); /* 0x1705B820: movzx eax, word ptr [esi + 0x2d8] */
    ecx = MEM32(esi + 0x254); /* 0x1705B827: mov ecx, dword ptr [esi + 0x254] */
    eax = eax + eax * 2; /* 0x1705B82D: lea eax, [eax + eax*2] */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x1705B830: movzx eax, word ptr [ecx + eax*2] */
L_1705B834:
    ecx = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B834: movzx ecx, word ptr [esi + 0x2d4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705B83B: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1705B83E: mov dword ptr [ebx + ecx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2D4); /* 0x1705B841: movzx eax, word ptr [esi + 0x2d4] */
    eax = edi + eax * 4; /* 0x1705B848: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705B84B: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x284); /* 0x1705B84D: mov ecx, dword ptr [esi + 0x284] */
    eax = MEM32(esi + 0x2A8); /* 0x1705B853: mov eax, dword ptr [esi + 0x2a8] */
    eax = ecx + eax * 8; /* 0x1705B859: lea eax, [ecx + eax*8] */
    PUSH32(esp, eax); /* 0x1705B85C: push eax */
    ecx = esi; /* 0x1705B85D: mov ecx, esi */
    RECOMP_CALL(sub_1705B8F9); /* 0x1705B85F: call 0x1705b8f9 */
    RECOMP_FLAGS_IN();
L_1705B864:
    /* cmp MEM32(esi + 0x2A8), 0 */ /* 0x1705B864: cmp dword ptr [esi + 0x2a8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1705B491; /* 0x1705B86B: ja 0x1705b491 */
L_1705B871:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1705B871: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x268), 0 */ /* 0x1705B875: cmp dword ptr [esi + 0x268], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x268)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705B8BA; /* 0x1705B87C: jbe 0x1705b8ba */
L_1705B87E:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1705B87E: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705B882:
    ecx = MEM32(ebp + 0xC); /* 0x1705B882: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x264); /* 0x1705B885: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705B88B: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0xC); /* 0x1705B88D: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1705B890: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705B893: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1705B8A4; /* 0x1705B895: jmp 0x1705b8a4 */
L_1705B897:
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x1705B897: mov dword ptr [ebp + 8], 0x80004005 */
    goto L_1705B8BA; /* 0x1705B89E: jmp 0x1705b8ba */
L_1705B8A0:
    MEM32(ebx + ecx * 4) = ecx; /* 0x1705B8A0: mov dword ptr [ebx + ecx*4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705B8A3: inc ecx */
    _flag_k = FK_INC;
L_1705B8A4:
    /* cmp ecx, eax */ /* 0x1705B8A4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B8A0; /* 0x1705B8A6: jb 0x1705b8a0 */
L_1705B8A8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705B8A8: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x1705B8AB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x14u; /* 0x1705B8AE: add dword ptr [ebp + 0xc], 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x268) */ /* 0x1705B8B2: cmp eax, dword ptr [esi + 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x268));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B882; /* 0x1705B8B8: jb 0x1705b882 */
L_1705B8BA:
    eax = esi + 0x254; /* 0x1705B8BA: lea eax, [esi + 0x254] */
    /* cmp MEM32(eax), 0 */ /* 0x1705B8C0: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B8D4; /* 0x1705B8C3: je 0x1705b8d4 */
L_1705B8C5:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1705B8C5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x250); /* 0x1705B8C8: mov eax, dword ptr [esi + 0x250] */
    ecx = MEM32(eax); /* 0x1705B8CE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705B8D0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705B8D1: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1705B8D4:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1705B8D4: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705B8E3; /* 0x1705B8D8: jbe 0x1705b8e3 */
L_1705B8DA:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705B8DA: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x1705B8DD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705B8DF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705B8E0: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
L_1705B8E3:
    PUSH32(esp, edi); /* 0x1705B8E3: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1705B8E4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1705B8E9: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1705B8EC: pop ecx */
    edi = POP32_VAL(esp); /* 0x1705B8ED: pop edi */
    esi = POP32_VAL(esp); /* 0x1705B8EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705B8EF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705B8F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705B8F1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705B8F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705B8F9u);

L_1705B8F9:
    edi = edi; /* 0x1705B8F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705B8FB: push ebp */
    ebp = esp; /* 0x1705B8FC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1705B8FE: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705B901: push ebx */
    PUSH32(esp, esi); /* 0x1705B902: push esi */
    esi = ecx; /* 0x1705B903: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705B905: push edi */
    eax = esi + 0x8; /* 0x1705B906: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1705B909: push eax */
    ecx = ebp + (-0x14); /* 0x1705B90A: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1704FE5B); /* 0x1705B90D: call 0x1704fe5b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1705B912: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1705B915: push edi */
    ecx = esi; /* 0x1705B916: mov ecx, esi */
    RECOMP_CALL(sub_1705BB17); /* 0x1705B918: call 0x1705bb17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705B91D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2C8)); /* 0x1705B91F: mov ax, word ptr [esi + 0x2c8] */
    PUSH32(esp, 1); /* 0x1705B926: push 1 */
    ecx = ebp + (-0x14); /* 0x1705B928: lea ecx, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1705B92B: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705B92C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2D8)); /* 0x1705B92E: mov ax, word ptr [esi + 0x2d8] */
    PUSH32(esp, eax); /* 0x1705B935: push eax */
    RECOMP_CALL(sub_17055EB7); /* 0x1705B936: call 0x17055eb7 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705B93B: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BA0A; /* 0x1705B942: je 0x1705ba0a */
L_1705B948:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1705B948: movzx eax, word ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1705B94C: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705B950: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1705BA12; /* 0x1705B951: je 0x1705ba12 */
L_1705B957:
    ecx = ebp + (-0x14); /* 0x1705B957: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_170564A4); /* 0x1705B95A: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1705B95F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO16(eax); /* 0x1705B963: movzx ecx, ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B96E; /* 0x1705B966: je 0x1705b96e */
L_1705B968:
    edx = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1705B968: movzx edx, word ptr [ebp - 0xe] */
    goto L_1705B979; /* 0x1705B96C: jmp 0x1705b979 */
L_1705B96E:
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1705B96E: movzx eax, word ptr [ebp - 0xe] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705B972: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1705B973: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705B975: cdq  */
    ebx = POP32_VAL(esp); /* 0x1705B976: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1705B977: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_1705B979:
    eax = ecx + ecx * 2; /* 0x1705B979: lea eax, [ecx + ecx*2] */
    ecx = (uint32_t)LO16(edx); /* 0x1705B97C: movzx ecx, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705B97F: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x254); /* 0x1705B981: mov ecx, dword ptr [esi + 0x254] */
    eax = ecx + eax * 2; /* 0x1705B987: lea eax, [ecx + eax*2] */
    SET_LO16(ecx, MEM16(eax)); /* 0x1705B98A: mov cx, word ptr [eax] */
    /* cmp LO16(ecx), MEM16(esi + 0x2C8) */ /* 0x1705B98D: cmp cx, word ptr [esi + 0x2c8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x2C8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B99F; /* 0x1705B994: jne 0x1705b99f */
L_1705B996:
    SET_LO16(ecx, MEM16(esi + 0x2CA)); /* 0x1705B996: mov cx, word ptr [esi + 0x2ca] */
    goto L_1705B9A6; /* 0x1705B99D: jmp 0x1705b9a6 */
L_1705B99F:
    SET_LO16(ecx, MEM16(esi + 0x2CE)); /* 0x1705B99F: mov cx, word ptr [esi + 0x2ce] */
L_1705B9A6:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1705B9A6: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1705B9A9: mov word ptr [eax], cx */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1705B9AC: movzx eax, word ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705B9B0: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1705B9B1: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705B957; /* 0x1705B9B4: jb 0x1705b957 */
L_1705B9B6:
    goto L_1705BA12; /* 0x1705B9B6: jmp 0x1705ba12 */
L_1705B9B8:
    ecx = ebp + (-0x14); /* 0x1705B9B8: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_170564A4); /* 0x1705B9BB: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1705B9C0: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO16(eax); /* 0x1705B9C4: movzx ecx, ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705B9CF; /* 0x1705B9C7: je 0x1705b9cf */
L_1705B9C9:
    edx = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1705B9C9: movzx edx, word ptr [ebp - 0xe] */
    goto L_1705B9DA; /* 0x1705B9CD: jmp 0x1705b9da */
L_1705B9CF:
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1705B9CF: movzx eax, word ptr [ebp - 0xe] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705B9D3: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1705B9D4: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705B9D6: cdq  */
    edi = POP32_VAL(esp); /* 0x1705B9D7: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x1705B9D8: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_1705B9DA:
    eax = ecx + ecx * 2; /* 0x1705B9DA: lea eax, [ecx + ecx*2] */
    ecx = (uint32_t)LO16(edx); /* 0x1705B9DD: movzx ecx, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705B9E0: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x254); /* 0x1705B9E2: mov ecx, dword ptr [esi + 0x254] */
    eax = ecx + eax * 2; /* 0x1705B9E8: lea eax, [ecx + eax*2] */
    SET_LO16(ecx, MEM16(eax)); /* 0x1705B9EB: mov cx, word ptr [eax] */
    /* cmp LO16(ecx), MEM16(esi + 0x2C8) */ /* 0x1705B9EE: cmp cx, word ptr [esi + 0x2c8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x2C8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705BA00; /* 0x1705B9F5: jne 0x1705ba00 */
L_1705B9F7:
    SET_LO16(ecx, MEM16(esi + 0x2CA)); /* 0x1705B9F7: mov cx, word ptr [esi + 0x2ca] */
    goto L_1705BA07; /* 0x1705B9FE: jmp 0x1705ba07 */
L_1705BA00:
    SET_LO16(ecx, MEM16(esi + 0x2CE)); /* 0x1705BA00: mov cx, word ptr [esi + 0x2ce] */
L_1705BA07:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1705BA07: mov word ptr [eax], cx */
L_1705BA0A:
    /* cmp MEM16(ebp + (-0x10)), 0xFFFFu */ /* 0x1705BA0A: cmp word ptr [ebp - 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x10))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705B9B8; /* 0x1705BA10: jne 0x1705b9b8 */
L_1705BA12:
    SET_LO16(eax, MEM16(esi + 0x2DE)); /* 0x1705BA12: mov ax, word ptr [esi + 0x2de] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705BA19: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BA4E; /* 0x1705BA1D: je 0x1705ba4e */
L_1705BA1F:
    ebx = MEM32(esi + 0x258); /* 0x1705BA1F: mov ebx, dword ptr [esi + 0x258] */
    edi = (uint32_t)LO16(eax); /* 0x1705BA25: movzx edi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BA28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2D8)); /* 0x1705BA2A: mov ax, word ptr [esi + 0x2d8] */
    PUSH32(esp, eax); /* 0x1705BA31: push eax */
    eax = edi + edi * 2; /* 0x1705BA32: lea eax, [edi + edi*2] */
    eax = ebx + eax * 2; /* 0x1705BA35: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1705BA38: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705BA39: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705BA3E: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705BA41: add eax, ecx */
    _flag_k = FK_ADD;
    SET_LO16(ecx, MEM16(esi + 0x2DC)); /* 0x1705BA43: mov cx, word ptr [esi + 0x2dc] */
    MEM16(ebx + eax * 2) = (uint16_t)(LO16(ecx)); /* 0x1705BA4A: mov word ptr [ebx + eax*2], cx */
L_1705BA4E:
    SET_LO16(eax, MEM16(esi + 0x2DC)); /* 0x1705BA4E: mov ax, word ptr [esi + 0x2dc] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705BA55: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BA8A; /* 0x1705BA59: je 0x1705ba8a */
L_1705BA5B:
    ebx = MEM32(esi + 0x258); /* 0x1705BA5B: mov ebx, dword ptr [esi + 0x258] */
    edi = (uint32_t)LO16(eax); /* 0x1705BA61: movzx edi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BA64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2D8)); /* 0x1705BA66: mov ax, word ptr [esi + 0x2d8] */
    PUSH32(esp, eax); /* 0x1705BA6D: push eax */
    eax = edi + edi * 2; /* 0x1705BA6E: lea eax, [edi + edi*2] */
    eax = ebx + eax * 2; /* 0x1705BA71: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1705BA74: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705BA75: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705BA7A: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705BA7D: add eax, ecx */
    _flag_k = FK_ADD;
    SET_LO16(ecx, MEM16(esi + 0x2DE)); /* 0x1705BA7F: mov cx, word ptr [esi + 0x2de] */
    MEM16(ebx + eax * 2) = (uint16_t)(LO16(ecx)); /* 0x1705BA86: mov word ptr [ebx + eax*2], cx */
L_1705BA8A:
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705BA8A: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BB0B; /* 0x1705BA91: je 0x1705bb0b */
L_1705BA93:
    SET_LO16(eax, MEM16(esi + 0x2E2)); /* 0x1705BA93: mov ax, word ptr [esi + 0x2e2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705BA9A: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BACF; /* 0x1705BA9E: je 0x1705bacf */
L_1705BAA0:
    ebx = MEM32(esi + 0x258); /* 0x1705BAA0: mov ebx, dword ptr [esi + 0x258] */
    edi = (uint32_t)LO16(eax); /* 0x1705BAA6: movzx edi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BAA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2DA)); /* 0x1705BAAB: mov ax, word ptr [esi + 0x2da] */
    PUSH32(esp, eax); /* 0x1705BAB2: push eax */
    eax = edi + edi * 2; /* 0x1705BAB3: lea eax, [edi + edi*2] */
    eax = ebx + eax * 2; /* 0x1705BAB6: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1705BAB9: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705BABA: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705BABF: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705BAC2: add eax, ecx */
    _flag_k = FK_ADD;
    SET_LO16(ecx, MEM16(esi + 0x2E0)); /* 0x1705BAC4: mov cx, word ptr [esi + 0x2e0] */
    MEM16(ebx + eax * 2) = (uint16_t)(LO16(ecx)); /* 0x1705BACB: mov word ptr [ebx + eax*2], cx */
L_1705BACF:
    SET_LO16(eax, MEM16(esi + 0x2E0)); /* 0x1705BACF: mov ax, word ptr [esi + 0x2e0] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1705BAD6: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BB0B; /* 0x1705BADA: je 0x1705bb0b */
L_1705BADC:
    ebx = MEM32(esi + 0x258); /* 0x1705BADC: mov ebx, dword ptr [esi + 0x258] */
    edi = (uint32_t)LO16(eax); /* 0x1705BAE2: movzx edi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BAE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x2DA)); /* 0x1705BAE7: mov ax, word ptr [esi + 0x2da] */
    PUSH32(esp, eax); /* 0x1705BAEE: push eax */
    eax = edi + edi * 2; /* 0x1705BAEF: lea eax, [edi + edi*2] */
    eax = ebx + eax * 2; /* 0x1705BAF2: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1705BAF5: push eax */
    RECOMP_CALL(sub_17050079); /* 0x1705BAF6: call 0x17050079 */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705BAFB: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705BAFE: add eax, ecx */
    _flag_k = FK_ADD;
    SET_LO16(ecx, MEM16(esi + 0x2E2)); /* 0x1705BB00: mov cx, word ptr [esi + 0x2e2] */
    MEM16(ebx + eax * 2) = (uint16_t)(LO16(ecx)); /* 0x1705BB07: mov word ptr [ebx + eax*2], cx */
L_1705BB0B:
    edi = POP32_VAL(esp); /* 0x1705BB0B: pop edi */
    esi = POP32_VAL(esp); /* 0x1705BB0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705BB0D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705BB0E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BB0F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BB17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BB17u);

L_1705BB17:
    edi = edi; /* 0x1705BB17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BB19: push ebp */
    ebp = esp; /* 0x1705BB1A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1705BB1C: push ebx */
    PUSH32(esp, esi); /* 0x1705BB1D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705BB1E: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM16(esi + 0x4), 0 */ /* 0x1705BB21: cmp word ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(ebx, MEM16(esi + 0x6)); /* 0x1705BB26: mov bx, word ptr [esi + 6] */
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x1705BB2A: seta al */
    MEM8(ecx + 0x2C4) = (uint8_t)(LO8(eax)); /* 0x1705BB2D: mov byte ptr [ecx + 0x2c4], al */
    eax = (uint32_t)LO16(ebx); /* 0x1705BB33: movzx eax, bx */
    edx = eax; /* 0x1705BB36: mov edx, eax */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x1705BB38: shr edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((edx >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 14u; /* 0x1705BB38: shr edx, 0xe */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x1705BB3B: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x290)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x290) = MEM32(ecx + 0x290) - edx; /* 0x1705BB3E: sub dword ptr [ecx + 0x290], edx */
    _flag_k = FK_CMP;
    SET_LO16(edx, MEM16(esi)); /* 0x1705BB44: mov dx, word ptr [esi] */
    PUSH32(esp, edi); /* 0x1705BB47: push edi */
    edi = ecx + 0x2DC; /* 0x1705BB48: lea edi, [ecx + 0x2dc] */
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x1705BB4E: mov word ptr [edi], dx */
    SET_LO8(edx, MEM8(esi + 0x6)); /* 0x1705BB51: mov dl, byte ptr [esi + 6] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(edx, LO8(edx) & 3); /* 0x1705BB54: and dl, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO16(esi, (uint32_t)LO8(edx)); /* 0x1705BB57: movzx si, dl */
    edx = (uint32_t)MEM16(edi); /* 0x1705BB5B: movzx edx, word ptr [edi] */
    edi = MEM32(ecx + 0x254); /* 0x1705BB5E: mov edi, dword ptr [ecx + 0x254] */
    MEM16(ecx + 0x2E4) = (uint16_t)(LO16(esi)); /* 0x1705BB64: mov word ptr [ecx + 0x2e4], si */
    edx = edx + edx * 2; /* 0x1705BB6B: lea edx, [edx + edx*2] */
    esi = (uint32_t)LO16(esi); /* 0x1705BB6E: movzx esi, si */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1705BB71: add esi, edx */
    _flag_k = FK_ADD;
    SET_LO16(esi, MEM16(edi + esi * 2)); /* 0x1705BB73: mov si, word ptr [edi + esi*2] */
    MEM16(ecx + 0x2C6) = (uint16_t)(LO16(esi)); /* 0x1705BB77: mov word ptr [ecx + 0x2c6], si */
    esi = (uint32_t)MEM16(ecx + 0x2E4); /* 0x1705BB7E: movzx esi, word ptr [ecx + 0x2e4] */
    esi = MEM32(esi * 4 + 0x17005960); /* 0x1705BB85: mov esi, dword ptr [esi*4 + 0x17005960] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1705BB8C: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x258); /* 0x1705BB8E: mov edx, dword ptr [ecx + 0x258] */
    SET_LO16(edx, MEM16(edx + esi * 2)); /* 0x1705BB94: mov dx, word ptr [edx + esi*2] */
    esi = MEM32(ecx + 0x260); /* 0x1705BB98: mov esi, dword ptr [ecx + 0x260] */
    MEM16(ecx + 0x2D8) = (uint16_t)(LO16(edx)); /* 0x1705BB9E: mov word ptr [ecx + 0x2d8], dx */
    edx = (uint32_t)LO16(edx); /* 0x1705BBA5: movzx edx, dx */
    SET_LO16(edx, MEM16(esi + edx * 2)); /* 0x1705BBA8: mov dx, word ptr [esi + edx*2] */
    esi = MEM32(ecx + 0x264); /* 0x1705BBAC: mov esi, dword ptr [ecx + 0x264] */
    MEM16(ecx + 0x2D4) = (uint16_t)(LO16(edx)); /* 0x1705BBB2: mov word ptr [ecx + 0x2d4], dx */
    edx = (uint32_t)LO16(edx); /* 0x1705BBB9: movzx edx, dx */
    edx = edx + edx * 4; /* 0x1705BBBC: lea edx, [edx + edx*4] */
    edx = esi + edx * 4 + 0x8; /* 0x1705BBBF: lea edx, [esi + edx*4 + 8] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1705BBC3: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    edx = (uint32_t)MEM16(ecx + 0x2D8); /* 0x1705BBC5: movzx edx, word ptr [ecx + 0x2d8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2B4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2B4) = MEM32(ecx + 0x2B4) - 1; /* 0x1705BBCC: dec dword ptr [ecx + 0x2b4] */
    _flag_k = FK_DEC;
    /* cmp MEM8(ecx + 0x2C4), 0 */ /* 0x1705BBD2: cmp byte ptr [ecx + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x258); /* 0x1705BBD9: mov esi, dword ptr [ecx + 0x258] */
    edx = edx + edx * 2; /* 0x1705BBDF: lea edx, [edx + edx*2] */
    SET_LO16(edx, MEM16(esi + edx * 2)); /* 0x1705BBE2: mov dx, word ptr [esi + edx*2] */
    MEM16(ecx + 0x2DA) = (uint16_t)(LO16(edx)); /* 0x1705BBE6: mov word ptr [ecx + 0x2da], dx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BCE3; /* 0x1705BBED: je 0x1705bce3 */
L_1705BBF3:
    esi = MEM32(ecx + 0x260); /* 0x1705BBF3: mov esi, dword ptr [ecx + 0x260] */
    edx = (uint32_t)LO16(edx); /* 0x1705BBF9: movzx edx, dx */
    SET_LO16(edx, MEM16(esi + edx * 2)); /* 0x1705BBFC: mov dx, word ptr [esi + edx*2] */
    esi = MEM32(ecx + 0x264); /* 0x1705BC00: mov esi, dword ptr [ecx + 0x264] */
    MEM16(ecx + 0x2D6) = (uint16_t)(LO16(edx)); /* 0x1705BC06: mov word ptr [ecx + 0x2d6], dx */
    edx = (uint32_t)LO16(edx); /* 0x1705BC0D: movzx edx, dx */
    edx = edx + edx * 4; /* 0x1705BC10: lea edx, [edx + edx*4] */
    edx = esi + edx * 4 + 0x8; /* 0x1705BC13: lea edx, [esi + edx*4 + 8] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1705BC17: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    edx = (uint32_t)MEM16(ecx + 0x2DA); /* 0x1705BC19: movzx edx, word ptr [ecx + 0x2da] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2B4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2B4) = MEM32(ecx + 0x2B4) - 1; /* 0x1705BC20: dec dword ptr [ecx + 0x2b4] */
    _flag_k = FK_DEC;
    edx = edx + edx * 2; /* 0x1705BC26: lea edx, [edx + edx*2] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x1705BC29: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x1705BC29: shr eax, 0xf */
    _flag_a = (uint32_t)(MEM32(ecx + 0x290)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x290) = MEM32(ecx + 0x290) - eax; /* 0x1705BC2C: sub dword ptr [ecx + 0x290], eax */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x258); /* 0x1705BC32: mov eax, dword ptr [ecx + 0x258] */
    SET_LO16(edx, MEM16(eax + edx * 2)); /* 0x1705BC38: mov dx, word ptr [eax + edx*2] */
    MEM16(ecx + 0x2E0) = (uint16_t)(LO16(edx)); /* 0x1705BC3C: mov word ptr [ecx + 0x2e0], dx */
    edx = (uint32_t)MEM16(ecx + 0x2DA); /* 0x1705BC43: movzx edx, word ptr [ecx + 0x2da] */
    edx = edx + edx * 2; /* 0x1705BC4A: lea edx, [edx + edx*2] */
    SET_LO16(eax, MEM16(eax + edx * 2 + 0x2)); /* 0x1705BC4D: mov ax, word ptr [eax + edx*2 + 2] */
    edx = (uint32_t)MEM16(ecx + 0x2DA); /* 0x1705BC52: movzx edx, word ptr [ecx + 0x2da] */
    edx = edx + edx * 2; /* 0x1705BC59: lea edx, [edx + edx*2] */
    MEM16(ecx + 0x2E2) = (uint16_t)(LO16(eax)); /* 0x1705BC5C: mov word ptr [ecx + 0x2e2], ax */
    eax = MEM32(ecx + 0x254); /* 0x1705BC63: mov eax, dword ptr [ecx + 0x254] */
    SET_LO16(edx, MEM16(eax + edx * 2)); /* 0x1705BC69: mov dx, word ptr [eax + edx*2] */
    MEM16(ecx + 0x2CE) = (uint16_t)(LO16(edx)); /* 0x1705BC6D: mov word ptr [ecx + 0x2ce], dx */
    edx = (uint32_t)MEM16(ecx + 0x2DA); /* 0x1705BC74: movzx edx, word ptr [ecx + 0x2da] */
    edx = edx + edx * 2; /* 0x1705BC7B: lea edx, [edx + edx*2] */
    SET_LO16(eax, MEM16(eax + edx * 2 + 0x4)); /* 0x1705BC7E: mov ax, word ptr [eax + edx*2 + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BC83: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BC85: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), 0x90u */ /* 0x1705BC86: test bl, 0x90 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM16(ecx + 0x2CC) = (uint16_t)(LO16(eax)); /* 0x1705BC89: mov word ptr [ecx + 0x2cc], ax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BC9F; /* 0x1705BC90: jne 0x1705bc9f */
L_1705BC92:
    /* test LO8(ebx), 0x40u */ /* 0x1705BC92: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BC9C; /* 0x1705BC95: je 0x1705bc9c */
L_1705BC97:
    /* test LO8(ebx), 0x20u */ /* 0x1705BC97: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BC9F; /* 0x1705BC9A: jne 0x1705bc9f */
L_1705BC9C:
    PUSH32(esp, 2); /* 0x1705BC9C: push 2 */
    edx = POP32_VAL(esp); /* 0x1705BC9E: pop edx */
L_1705BC9F:
    /* test HI8(ebx), 8 */ /* 0x1705BC9F: test bh, 8 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BCA5; /* 0x1705BCA2: je 0x1705bca5 */
L_1705BCA4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCA4: inc edx */
    _flag_k = FK_INC;
L_1705BCA5:
    eax = (uint32_t)MEM16(ecx + 0x2D4); /* 0x1705BCA5: movzx eax, word ptr [ecx + 0x2d4] */
    esi = MEM32(ecx + 0x264); /* 0x1705BCAC: mov esi, dword ptr [ecx + 0x264] */
    eax = eax + eax * 4; /* 0x1705BCB2: lea eax, [eax + eax*4] */
    eax = esi + eax * 4 + 0x10; /* 0x1705BCB5: lea eax, [esi + eax*4 + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1705BCB9: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x2C0) = MEM32(ecx + 0x2C0) - edx; /* 0x1705BCBB: sub dword ptr [ecx + 0x2c0], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BCC1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(ebx), 2 */ /* 0x1705BCC3: test bh, 2 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BCC9; /* 0x1705BCC6: jne 0x1705bcc9 */
L_1705BCC8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCC8: inc edx */
    _flag_k = FK_INC;
L_1705BCC9:
    /* test LO8(ebx), 0x60u */ /* 0x1705BCC9: test bl, 0x60 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BCD4; /* 0x1705BCCC: jne 0x1705bcd4 */
L_1705BCCE:
    /* test HI8(ebx), 1 */ /* 0x1705BCCE: test bh, 1 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BCD4; /* 0x1705BCD1: jne 0x1705bcd4 */
L_1705BCD3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCD3: inc edx */
    _flag_k = FK_INC;
L_1705BCD4:
    /* test HI8(ebx), 0x20u */ /* 0x1705BCD4: test bh, 0x20 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BCDA; /* 0x1705BCD7: je 0x1705bcda */
L_1705BCD9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCD9: inc edx */
    _flag_k = FK_INC;
L_1705BCDA:
    eax = (uint32_t)MEM16(ecx + 0x2D6); /* 0x1705BCDA: movzx eax, word ptr [ecx + 0x2d6] */
    goto L_1705BCFB; /* 0x1705BCE1: jmp 0x1705bcfb */
L_1705BCE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BCE3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCE5: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), 0x90u */ /* 0x1705BCE6: test bl, 0x90 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BCEE; /* 0x1705BCE9: jne 0x1705bcee */
L_1705BCEB:
    PUSH32(esp, 2); /* 0x1705BCEB: push 2 */
    edx = POP32_VAL(esp); /* 0x1705BCED: pop edx */
L_1705BCEE:
    /* test HI8(ebx), 8 */ /* 0x1705BCEE: test bh, 8 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BCF4; /* 0x1705BCF1: je 0x1705bcf4 */
L_1705BCF3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705BCF3: inc edx */
    _flag_k = FK_INC;
L_1705BCF4:
    eax = (uint32_t)MEM16(ecx + 0x2D4); /* 0x1705BCF4: movzx eax, word ptr [ecx + 0x2d4] */
L_1705BCFB:
    esi = MEM32(ecx + 0x264); /* 0x1705BCFB: mov esi, dword ptr [ecx + 0x264] */
    eax = eax + eax * 4; /* 0x1705BD01: lea eax, [eax + eax*4] */
    eax = esi + eax * 4 + 0x10; /* 0x1705BD04: lea eax, [esi + eax*4 + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1705BD08: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x2C0) = MEM32(ecx + 0x2C0) - edx; /* 0x1705BD0A: sub dword ptr [ecx + 0x2c0], edx */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ecx + 0x2D8); /* 0x1705BD10: movzx eax, word ptr [ecx + 0x2d8] */
    edx = MEM32(ecx + 0x258); /* 0x1705BD17: mov edx, dword ptr [ecx + 0x258] */
    eax = eax + eax * 2; /* 0x1705BD1D: lea eax, [eax + eax*2] */
    SET_LO16(eax, MEM16(edx + eax * 2 + 0x4)); /* 0x1705BD20: mov ax, word ptr [edx + eax*2 + 4] */
    edx = (uint32_t)MEM16(ecx + 0x2D8); /* 0x1705BD25: movzx edx, word ptr [ecx + 0x2d8] */
    MEM16(ecx + 0x2DE) = (uint16_t)(LO16(eax)); /* 0x1705BD2C: mov word ptr [ecx + 0x2de], ax */
    eax = MEM32(ecx + 0x254); /* 0x1705BD33: mov eax, dword ptr [ecx + 0x254] */
    edx = edx + edx * 2; /* 0x1705BD39: lea edx, [edx + edx*2] */
    SET_LO16(edx, MEM16(eax + edx * 2)); /* 0x1705BD3C: mov dx, word ptr [eax + edx*2] */
    MEM16(ecx + 0x2CA) = (uint16_t)(LO16(edx)); /* 0x1705BD40: mov word ptr [ecx + 0x2ca], dx */
    edx = (uint32_t)MEM16(ecx + 0x2D8); /* 0x1705BD47: movzx edx, word ptr [ecx + 0x2d8] */
    edi = POP32_VAL(esp); /* 0x1705BD4E: pop edi */
    edx = edx + edx * 2; /* 0x1705BD4F: lea edx, [edx + edx*2] */
    SET_LO16(eax, MEM16(eax + edx * 2 + 0x2)); /* 0x1705BD52: mov ax, word ptr [eax + edx*2 + 2] */
    esi = POP32_VAL(esp); /* 0x1705BD57: pop esi */
    MEM16(ecx + 0x2C8) = (uint16_t)(LO16(eax)); /* 0x1705BD58: mov word ptr [ecx + 0x2c8], ax */
    ebx = POP32_VAL(esp); /* 0x1705BD5F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1705BD60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BD61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BD69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BD69u);

L_1705BD69:
    edi = edi; /* 0x1705BD69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BD6B: push ebp */
    ebp = esp; /* 0x1705BD6C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705BD6E: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705BD6F: push dword ptr [ebp + 0x10] */
    esi = ecx; /* 0x1705BD72: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705BD74: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x8; /* 0x1705BD77: lea ecx, [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705BD7A: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x17005BC8u; /* 0x1705BD7D: mov dword ptr [esi], 0x17005bc8 */
    MEM32(esi + 0x4) = 1; /* 0x1705BD83: mov dword ptr [esi + 4], 1 */
    RECOMP_CALL(sub_17059E91); /* 0x1705BD8A: call 0x17059e91 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BD8F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x220; /* 0x1705BD91: lea ecx, [esi + 0x220] */
    edx = MEM32(ecx); /* 0x1705BD97: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    edx = edx & 0xFFFFFFFBu; /* 0x1705BD99: and edx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x284) = eax; /* 0x1705BD9C: mov dword ptr [esi + 0x284], eax */
    MEM32(esi + 0x28C) = eax; /* 0x1705BDA2: mov dword ptr [esi + 0x28c], eax */
    MEM32(esi + 0x290) = eax; /* 0x1705BDA8: mov dword ptr [esi + 0x290], eax */
    MEM32(esi + 0x294) = eax; /* 0x1705BDAE: mov dword ptr [esi + 0x294], eax */
    MEM32(esi + 0x29C) = eax; /* 0x1705BDB4: mov dword ptr [esi + 0x29c], eax */
    MEM32(esi + 0x2A0) = eax; /* 0x1705BDBA: mov dword ptr [esi + 0x2a0], eax */
    MEM32(esi + 0x2A8) = eax; /* 0x1705BDC0: mov dword ptr [esi + 0x2a8], eax */
    MEM32(esi + 0x2AC) = eax; /* 0x1705BDC6: mov dword ptr [esi + 0x2ac], eax */
    MEM32(esi + 0x2B0) = eax; /* 0x1705BDCC: mov dword ptr [esi + 0x2b0], eax */
    MEM32(esi + 0x2B8) = eax; /* 0x1705BDD2: mov dword ptr [esi + 0x2b8], eax */
    MEM32(esi + 0x310) = eax; /* 0x1705BDD8: mov dword ptr [esi + 0x310], eax */
    MEM32(esi + 0x318) = eax; /* 0x1705BDDE: mov dword ptr [esi + 0x318], eax */
    _flag_a = (uint32_t)((edx | 0x19u)); _flag_b = (uint32_t)((edx | 0x19u));
    edx = edx | 0x19u; /* 0x1705BDE4: or edx, 0x19 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x278) = esi; /* 0x1705BDE7: mov dword ptr [esi + 0x278], esi */
    eax = esi; /* 0x1705BDED: mov eax, esi */
    MEM32(ecx) = edx; /* 0x1705BDEF: mov dword ptr [ecx], edx */
    esi = POP32_VAL(esp); /* 0x1705BDF1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705BDF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705BDF3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705BDFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BDFBu);

L_1705BDFB:
    edi = edi; /* 0x1705BDFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BDFD: push ebp */
    ebp = esp; /* 0x1705BDFE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE00: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705BE03: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE06: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE09: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE0B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1705BE0C: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705BE10: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705BE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE18u);

L_1705BE18:
    edi = edi; /* 0x1705BE18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE1A: push ebp */
    ebp = esp; /* 0x1705BE1B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE1D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE20: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE23: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE25: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1705BE26: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BE2A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE32u);

L_1705BE32:
    edi = edi; /* 0x1705BE32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE34: push ebp */
    ebp = esp; /* 0x1705BE35: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE37: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705BE3A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE3D: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE40: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE42: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1705BE43: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705BE47: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705BE4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE4Fu);

L_1705BE4F:
    edi = edi; /* 0x1705BE4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE51: push ebp */
    ebp = esp; /* 0x1705BE52: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE54: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE57: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE5A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE5C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1705BE5D: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BE61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BE69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE69u);

L_1705BE69:
    edi = edi; /* 0x1705BE69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE6B: push ebp */
    ebp = esp; /* 0x1705BE6C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE6E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE71: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE74: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE76: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1705BE77: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BE7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BE83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE83u);

L_1705BE83:
    edi = edi; /* 0x1705BE83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE85: push ebp */
    ebp = esp; /* 0x1705BE86: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BE88: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BE8B: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BE8E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BE90: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x1705BE91: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BE94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BE95: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BE9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BE9Du);

L_1705BE9D:
    edi = edi; /* 0x1705BE9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BE9F: push ebp */
    ebp = esp; /* 0x1705BEA0: mov ebp, esp */
    /* test MEM8(ebp + 0xC), 0x10u */ /* 0x1705BEA2: test byte ptr [ebp + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BEBC; /* 0x1705BEA6: je 0x1705bebc */
L_1705BEA8:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705BEA8: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1705BEAB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705BEAE: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BEB1: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BEB4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BEB6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1705BEB7: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    goto L_1705BEC1; /* 0x1705BEBA: jmp 0x1705bec1 */
L_1705BEBC:
    eax = 0x88760B54u; /* 0x1705BEBC: mov eax, 0x88760b54 */
L_1705BEC1:
    ebp = POP32_VAL(esp); /* 0x1705BEC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705BEC2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705BECA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BECAu);

L_1705BECA:
    edi = edi; /* 0x1705BECA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BECC: push ebp */
    ebp = esp; /* 0x1705BECD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BECF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BED2: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BED5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705BED7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x1705BED8: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BEDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705BEDC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705BEE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BEE4u);

L_1705BEE4:
    edi = edi; /* 0x1705BEE4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BEE6: push ebp */
    ebp = esp; /* 0x1705BEE7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BEE9: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1705BEEC: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705BEEF: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1705BEF2: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705BEF5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1705BEF7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1705BEF8: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1705BEFB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x58)); /* 0x1705BEFC: call dword ptr [ecx + 0x58] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705BEFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705BF00: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705BF08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BF08u);

L_1705BF08:
    edi = edi; /* 0x1705BF08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BF0A: push ebp */
    ebp = esp; /* 0x1705BF0B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1705BF0D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1705BF10: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1705BF13: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1705BF14: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1705BF17: push edi */
    PUSH32(esp, 4); /* 0x1705BF18: push 4 */
    ecx = POP32_VAL(esp); /* 0x1705BF1A: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1705BF1B: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BF20: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1705BF22: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1705BF48; /* 0x1705BF24: je 0x1705bf48 */
L_1705BF26:
    esi = MEM32(ebp + 0xC); /* 0x1705BF26: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1705BF29: push 4 */
    ecx = POP32_VAL(esp); /* 0x1705BF2B: pop ecx */
    edi = 0x17001BD0u; /* 0x1705BF2C: mov edi, 0x17001bd0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BF31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1705BF33: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1705BF48; /* 0x1705BF35: je 0x1705bf48 */
L_1705BF37:
    esi = MEM32(ebp + 0xC); /* 0x1705BF37: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1705BF3A: push 4 */
    ecx = POP32_VAL(esp); /* 0x1705BF3C: pop ecx */
    edi = 0x17001BB0u; /* 0x1705BF3D: mov edi, 0x17001bb0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705BF42: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1705BF44: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1705BF57; /* 0x1705BF46: jne 0x1705bf57 */
L_1705BF48:
    ecx = MEM32(ebp + 0x8); /* 0x1705BF48: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1705BF4B: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1705BF4D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1705BF4F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1705BF50: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705BF53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705BF5C; /* 0x1705BF55: jmp 0x1705bf5c */
L_1705BF57:
    eax = 0x80004002u; /* 0x1705BF57: mov eax, 0x80004002 */
L_1705BF5C:
    edi = POP32_VAL(esp); /* 0x1705BF5C: pop edi */
    esi = POP32_VAL(esp); /* 0x1705BF5D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705BF5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705BF5F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705BF67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BF67u);

L_1705BF67:
    edi = edi; /* 0x1705BF67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BF69: push ebp */
    ebp = esp; /* 0x1705BF6A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1705BF6C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1705BF6D: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1705BF70: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705BF71: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1705BF74: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705BF75: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1705BF77: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705BF7E; /* 0x1705BF79: jne 0x1705bf7e */
L_1705BF7B:
    ebx = esi + 0x14; /* 0x1705BF7B: lea ebx, [esi + 0x14] */
L_1705BF7E:
    PUSH32(esp, edi); /* 0x1705BF7E: push edi */
    PUSH32(esp, ebx); /* 0x1705BF7F: push ebx */
    RECOMP_CALL(sub_1704E9F0); /* 0x1705BF80: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705BF85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BFC8; /* 0x1705BF87: je 0x1705bfc8 */
L_1705BF89:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x1705BF89: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705BFC8; /* 0x1705BF90: jne 0x1705bfc8 */
L_1705BF92:
    eax = MEM32(ebp + 0xC); /* 0x1705BF92: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1705BF95: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1705BF9A: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BFAF; /* 0x1705BF9D: je 0x1705bfaf */
L_1705BF9F:
    eax = esi + 0x14; /* 0x1705BF9F: lea eax, [esi + 0x14] */
    PUSH32(esp, eax); /* 0x1705BFA2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705BFA3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705BFA6: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705BFAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BFC8; /* 0x1705BFAD: je 0x1705bfc8 */
L_1705BFAF:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1705BFAF: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1705BFB2: mov eax, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705BFBF; /* 0x1705BFB5: je 0x1705bfbf */
L_1705BFB7:
    /* cmp eax, MEM32(esi + 0x238) */ /* 0x1705BFB7: cmp eax, dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x238));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705BFC8; /* 0x1705BFBD: jne 0x1705bfc8 */
L_1705BFBF:
    /* test MEM8(esi + 0x21C), 0x40u */ /* 0x1705BFBF: test byte ptr [esi + 0x21c], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x21C)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705BFCF; /* 0x1705BFC6: je 0x1705bfcf */
L_1705BFC8:
    eax = 0x8876086Cu; /* 0x1705BFC8: mov eax, 0x8876086c */
    goto L_1705BFE5; /* 0x1705BFCD: jmp 0x1705bfe5 */
L_1705BFCF:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705BFCF: push dword ptr [ebp + 0x18] */
    ecx = MEM32(esi); /* 0x1705BFD2: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1705BFD4: push edi */
    PUSH32(esp, edi); /* 0x1705BFD5: push edi */
    PUSH32(esp, edi); /* 0x1705BFD6: push edi */
    PUSH32(esp, edi); /* 0x1705BFD7: push edi */
    PUSH32(esp, edi); /* 0x1705BFD8: push edi */
    PUSH32(esp, eax); /* 0x1705BFD9: push eax */
    PUSH32(esp, ebx); /* 0x1705BFDA: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705BFDB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1705BFDE: push esi */
    RECOMP_ICALL(MEM32(ecx + 0xA0)); /* 0x1705BFDF: call dword ptr [ecx + 0xa0] */
    RECOMP_FLAGS_IN();
L_1705BFE5:
    edi = POP32_VAL(esp); /* 0x1705BFE5: pop edi */
    esi = POP32_VAL(esp); /* 0x1705BFE6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705BFE7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1705BFE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705BFE9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705BFF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705BFF1u);

L_1705BFF1:
    edi = edi; /* 0x1705BFF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705BFF3: push ebp */
    ebp = esp; /* 0x1705BFF4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705BFF6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2B0); /* 0x1705BFF9: mov eax, dword ptr [eax + 0x2b0] */
    ebp = POP32_VAL(esp); /* 0x1705BFFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705C000: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705C008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C008u);

L_1705C008:
    edi = edi; /* 0x1705C008: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C00A: push ebp */
    ebp = esp; /* 0x1705C00B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705C00D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2AC); /* 0x1705C010: mov eax, dword ptr [eax + 0x2ac] */
    ebp = POP32_VAL(esp); /* 0x1705C016: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705C017: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705C01F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C01Fu);

L_1705C01F:
    edi = edi; /* 0x1705C01F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C021: push ebp */
    ebp = esp; /* 0x1705C022: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705C024: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2B8); /* 0x1705C027: mov eax, dword ptr [eax + 0x2b8] */
    ebp = POP32_VAL(esp); /* 0x1705C02D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705C02E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705C036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C036u);

L_1705C036:
    edi = edi; /* 0x1705C036: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C038: push ebp */
    ebp = esp; /* 0x1705C039: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705C03B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2BC); /* 0x1705C03E: mov eax, dword ptr [eax + 0x2bc] */
    ebp = POP32_VAL(esp); /* 0x1705C044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705C045: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705C04D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C04Du);

L_1705C04D:
    edi = edi; /* 0x1705C04D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C04F: push ebp */
    ebp = esp; /* 0x1705C050: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705C052: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705C055: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705C058: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1705C05C: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705C05F: push esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705C06C; /* 0x1705C060: jae 0x1705c06c */
L_1705C062:
    esi = 0x8876086Cu; /* 0x1705C062: mov esi, 0x8876086c */
    goto L_1705C139; /* 0x1705C067: jmp 0x1705c139 */
L_1705C06C:
    PUSH32(esp, ebx); /* 0x1705C06C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1705C06D: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x2B4); /* 0x1705C070: mov ecx, dword ptr [ebx + 0x2b4] */
    PUSH32(esp, eax); /* 0x1705C076: push eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1705C077: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebx); /* 0x1705C07A: mov ecx, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705C07C: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x1705C07D: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C080: mov esi, eax */
    /* test esi, esi */ /* 0x1705C082: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705C138; /* 0x1705C084: jl 0x1705c138 */
L_1705C08A:
    eax = MEM32(ebx + 0x2A8); /* 0x1705C08A: mov eax, dword ptr [ebx + 0x2a8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1705C090: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0x290); /* 0x1705C093: mov eax, dword ptr [ebx + 0x290] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705C099: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x2B4); /* 0x1705C09C: mov eax, dword ptr [ebx + 0x2b4] */
    MEM32(ebp + 0x8) = eax; /* 0x1705C0A2: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebx + 0x2C0); /* 0x1705C0A5: mov eax, dword ptr [ebx + 0x2c0] */
    MEM32(ebp + 0x10) = eax; /* 0x1705C0AB: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx + 0x268); /* 0x1705C0AE: mov eax, dword ptr [ebx + 0x268] */
    eax = eax + eax * 4; /* 0x1705C0B4: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C0B7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C0B7: shl eax, 2 */
    PUSH32(esp, edi); /* 0x1705C0BA: push edi */
    PUSH32(esp, eax); /* 0x1705C0BB: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C0BC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705C0C1: mov edi, eax */
    /* test edi, edi */ /* 0x1705C0C3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705C0C5: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1705C0C6: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705C0D2; /* 0x1705C0C9: jne 0x1705c0d2 */
L_1705C0CB:
    esi = 0x8007000Eu; /* 0x1705C0CB: mov esi, 0x8007000e */
    goto L_1705C137; /* 0x1705C0D0: jmp 0x1705c137 */
L_1705C0D2:
    eax = MEM32(ebx + 0x268); /* 0x1705C0D2: mov eax, dword ptr [ebx + 0x268] */
    esi = MEM32(ebx + 0x264); /* 0x1705C0D8: mov esi, dword ptr [ebx + 0x264] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705C0DE: push dword ptr [ebp + 0xc] */
    ecx = eax + eax * 4; /* 0x1705C0E1: lea ecx, [eax + eax*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705C0E4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705C0E4: shl ecx, 2 */
    eax = ecx; /* 0x1705C0E7: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705C0E9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705C0E9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705C0EC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705C0EE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705C0F0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705C0F3: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx); /* 0x1705C0F5: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705C0F7: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x1705C0F8: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C0FB: mov esi, eax */
    /* test esi, esi */ /* 0x1705C0FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705C137; /* 0x1705C0FF: jl 0x1705c137 */
L_1705C101:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705C101: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebx + 0x2A8); /* 0x1705C104: mov eax, dword ptr [ebx + 0x2a8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705C10A: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebx); /* 0x1705C10D: mov ecx, dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705C10F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C112: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705C115: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705C118: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705C11B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1705C11E: push eax */
    PUSH32(esp, ebx); /* 0x1705C11F: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xA4)); /* 0x1705C120: call dword ptr [ecx + 0xa4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C126: mov esi, eax */
    /* test esi, esi */ /* 0x1705C128: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705C137; /* 0x1705C12A: jl 0x1705c137 */
L_1705C12C:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705C12C: push dword ptr [ebp - 0x10] */
    eax = MEM32(ebx); /* 0x1705C12F: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1705C131: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x1705C132: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C135: mov esi, eax */
L_1705C137:
    edi = POP32_VAL(esp); /* 0x1705C137: pop edi */
L_1705C138:
    ebx = POP32_VAL(esp); /* 0x1705C138: pop ebx */
L_1705C139:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705C139: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1705C13C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705C141: pop ecx */
    eax = esi; /* 0x1705C142: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705C144: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705C145: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705C146: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705C14E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C14Eu);

L_1705C14E:
    edi = edi; /* 0x1705C14E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C150: push ebp */
    ebp = esp; /* 0x1705C151: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705C153: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1705C154: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1705C157: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705C162; /* 0x1705C159: jne 0x1705c162 */
L_1705C15B:
    eax = 0x8876086Cu; /* 0x1705C15B: mov eax, 0x8876086c */
    goto L_1705C191; /* 0x1705C160: jmp 0x1705c191 */
L_1705C162:
    eax = MEM32(ebp + 0x8); /* 0x1705C162: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x258); /* 0x1705C165: mov ecx, dword ptr [eax + 0x258] */
    eax = MEM32(eax + 0x26C); /* 0x1705C16B: mov eax, dword ptr [eax + 0x26c] */
    eax = eax + eax * 2; /* 0x1705C171: lea eax, [eax + eax*2] */
    /* test eax, eax */ /* 0x1705C174: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C18F; /* 0x1705C176: jbe 0x1705c18f */
L_1705C178:
    edx = MEM32(ecx); /* 0x1705C178: mov edx, dword ptr [ecx] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1705C17A: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C183; /* 0x1705C17D: je 0x1705c183 */
L_1705C17F:
    MEM32(esi) = edx; /* 0x1705C17F: mov dword ptr [esi], edx */
    goto L_1705C186; /* 0x1705C181: jmp 0x1705c186 */
L_1705C183:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1705C183: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C186:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1705C186: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1705C189: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705C18C: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705C178; /* 0x1705C18D: jne 0x1705c178 */
L_1705C18F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705C18F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C191:
    esi = POP32_VAL(esp); /* 0x1705C191: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705C192: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705C193: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705C19B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C19Bu);

L_1705C19B:
    edi = edi; /* 0x1705C19B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C19D: push ebp */
    ebp = esp; /* 0x1705C19E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1705C1A0: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705C1A3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705C1A4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1705C1A6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705C1A7: mov esi, dword ptr [ebp + 8] */
    /* test MEM16(esi + 0x21C), 0x440u */ /* 0x1705C1AA: test word ptr [esi + 0x21c], 0x440 */
    _flag_a = (uint32_t)(MEM16(esi + 0x21C)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705C1B3: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705C1B6: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1705C1B9: mov dword ptr [ebp - 0x10], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C1CA; /* 0x1705C1BC: je 0x1705c1ca */
L_1705C1BE:
    MEM32(ebp + 0x8) = 0x8876086Cu; /* 0x1705C1BE: mov dword ptr [ebp + 8], 0x8876086c */
    goto L_1705C3BF; /* 0x1705C1C5: jmp 0x1705c3bf */
L_1705C1CA:
    eax = MEM32(esi); /* 0x1705C1CA: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705C1CC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1705C1CD: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1705C1D0: push 1 */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705C1D2: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x1705C1D5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705C1D7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705C1D8: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C1DB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705C1DD: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705C3BF; /* 0x1705C1E0: jl 0x1705c3bf */
L_1705C1E6:
    eax = MEM32(esi + 0x270); /* 0x1705C1E6: mov eax, dword ptr [esi + 0x270] */
    eax = eax + eax * 2; /* 0x1705C1EC: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C1EF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C1EF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C1F2: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C1F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C1F8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C1FA: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705C1FB: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C20C; /* 0x1705C1FE: jne 0x1705c20c */
L_1705C200:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1705C200: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_1705C3BF; /* 0x1705C207: jmp 0x1705c3bf */
L_1705C20C:
    eax = MEM32(esi + 0x21C); /* 0x1705C20C: mov eax, dword ptr [esi + 0x21c] */
    ecx = MEM32(esi); /* 0x1705C212: mov ecx, dword ptr [esi] */
    edx = ebp + (-0xC); /* 0x1705C214: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1705C217: push edx */
    PUSH32(esp, ebx); /* 0x1705C218: push ebx */
    PUSH32(esp, ebx); /* 0x1705C219: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705C21A: push dword ptr [ebp - 4] */
    edx = esi + 0x14; /* 0x1705C21D: lea edx, [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x1705C220: push ebx */
    PUSH32(esp, 1); /* 0x1705C221: push 1 */
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x1705C223: push dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x1705C229: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1705C22E: push edx */
    PUSH32(esp, eax); /* 0x1705C22F: push eax */
    PUSH32(esp, esi); /* 0x1705C230: push esi */
    RECOMP_ICALL(MEM32(ecx + 0xA0)); /* 0x1705C231: call dword ptr [ecx + 0xa0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C237: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705C239: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705C3BF; /* 0x1705C23C: jl 0x1705c3bf */
L_1705C242:
    eax = MEM32(esi + 0x268); /* 0x1705C242: mov eax, dword ptr [esi + 0x268] */
    ecx = MEM32(esi + 0x288); /* 0x1705C248: mov ecx, dword ptr [esi + 0x288] */
    PUSH32(esp, edi); /* 0x1705C24E: push edi */
    edi = ecx + eax * 2 + 0x2; /* 0x1705C24F: lea edi, [ecx + eax*2 + 2] */
    edi = edi + edi * 2; /* 0x1705C253: lea edi, [edi + edi*2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x294));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x294); /* 0x1705C256: add edi, dword ptr [esi + 0x294] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1705C25C: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1705C25C: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1705C25F: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C260: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C265: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C267: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1705C268: mov dword ptr [ebp - 0x14], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C279; /* 0x1705C26B: jne 0x1705c279 */
L_1705C26D:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x1705C26D: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_1705C3BE; /* 0x1705C274: jmp 0x1705c3be */
L_1705C279:
    ecx = MEM32(esi + 0x268); /* 0x1705C279: mov ecx, dword ptr [esi + 0x268] */
    PUSH32(esp, 4); /* 0x1705C27F: push 4 */
    MEM32(eax) = ecx; /* 0x1705C281: mov dword ptr [eax], ecx */
    edx = POP32_VAL(esp); /* 0x1705C283: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C284: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x268), ebx */ /* 0x1705C286: cmp dword ptr [esi + 0x268], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x268)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705C28C: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705C2FA; /* 0x1705C28F: jbe 0x1705c2fa */
L_1705C291:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705C291: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C293:
    ebx = MEM32(esi + 0x264); /* 0x1705C293: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x4); /* 0x1705C299: mov ebx, dword ptr [ecx + ebx + 4] */
    MEM32(eax) = ebx; /* 0x1705C29D: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705C29F: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x8); /* 0x1705C2A5: mov ebx, dword ptr [ecx + ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2A9: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C2AB: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x29C); /* 0x1705C2AD: mov ebx, dword ptr [esi + 0x29c] */
    ebx = MEM32(ebx + ecx + 0x8); /* 0x1705C2B3: mov ebx, dword ptr [ebx + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2B7: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C2B9: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705C2BB: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0xC); /* 0x1705C2C1: mov ebx, dword ptr [ecx + ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2C5: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C2C7: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x264); /* 0x1705C2C9: mov ebx, dword ptr [esi + 0x264] */
    ebx = MEM32(ecx + ebx + 0x10); /* 0x1705C2CF: mov ebx, dword ptr [ecx + ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2D3: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C2D5: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x29C); /* 0x1705C2D7: mov ebx, dword ptr [esi + 0x29c] */
    ebx = MEM32(ebx + ecx + 0x10); /* 0x1705C2DD: mov ebx, dword ptr [ebx + ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2E1: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C2E3: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C2E5: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705C2E7: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x8)); /* 0x1705C2EA: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x1705C2ED: add ecx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x268) */ /* 0x1705C2F0: cmp ebx, dword ptr [esi + 0x268] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x268));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705C293; /* 0x1705C2F6: jb 0x1705c293 */
L_1705C2F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705C2F8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C2FA:
    ecx = MEM32(esi + 0x318); /* 0x1705C2FA: mov ecx, dword ptr [esi + 0x318] */
    MEM32(eax) = ecx; /* 0x1705C300: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x2A0); /* 0x1705C302: mov ecx, dword ptr [esi + 0x2a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C308: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705C30A: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x2A4); /* 0x1705C30C: mov ecx, dword ptr [esi + 0x2a4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C312: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705C314: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x288); /* 0x1705C316: mov ecx, dword ptr [esi + 0x288] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C31C: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705C31E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C320: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x288), ebx */ /* 0x1705C322: cmp dword ptr [esi + 0x288], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x288)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705C328: mov dword ptr [ebp - 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705C36E; /* 0x1705C32B: jbe 0x1705c36e */
L_1705C32D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1705C32D: mov ecx, dword ptr [ebp - 8] */
    ebx = MEM32(esi + 0x284); /* 0x1705C330: mov ebx, dword ptr [esi + 0x284] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1705C336: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1705C336: shl ecx, 3 */
    ebx = MEM32(ecx + ebx); /* 0x1705C339: mov ebx, dword ptr [ecx + ebx] */
    MEM32(eax) = ebx; /* 0x1705C33C: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x284); /* 0x1705C33E: mov ebx, dword ptr [esi + 0x284] */
    ebx = (uint32_t)MEM16(ebx + ecx + 0x4); /* 0x1705C344: movzx ebx, word ptr [ebx + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C349: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x1705C34B: mov dword ptr [eax], ebx */
    ebx = MEM32(esi + 0x284); /* 0x1705C34D: mov ebx, dword ptr [esi + 0x284] */
    ecx = (uint32_t)MEM16(ebx + ecx + 0x6); /* 0x1705C353: movzx ecx, word ptr [ebx + ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C358: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1705C35A: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C35C: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705C35E: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x8)); /* 0x1705C361: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(esi + 0x288) */ /* 0x1705C364: cmp ecx, dword ptr [esi + 0x288] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x288));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705C32D; /* 0x1705C36A: jb 0x1705c32d */
L_1705C36C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705C36C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C36E:
    ecx = MEM32(esi + 0x294); /* 0x1705C36E: mov ecx, dword ptr [esi + 0x294] */
    MEM32(eax) = ecx; /* 0x1705C374: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C376: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1705C378: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x294), ebx */ /* 0x1705C37A: cmp dword ptr [esi + 0x294], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x294)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705C39B; /* 0x1705C380: jbe 0x1705c39b */
L_1705C382:
    ebx = MEM32(esi + 0x28C); /* 0x1705C382: mov ebx, dword ptr [esi + 0x28c] */
    ebx = (uint32_t)MEM16(ebx + ecx * 2); /* 0x1705C388: movzx ebx, word ptr [ebx + ecx*2] */
    MEM32(eax) = ebx; /* 0x1705C38C: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705C38E: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705C390: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x294) */ /* 0x1705C391: cmp ecx, dword ptr [esi + 0x294] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x294));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705C382; /* 0x1705C397: jb 0x1705c382 */
L_1705C399:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705C399: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C39B:
    eax = MEM32(ebp + 0xC); /* 0x1705C39B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1705C39E: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(eax) = ecx; /* 0x1705C3A1: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x10); /* 0x1705C3A3: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1705C3A6: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = edi; /* 0x1705C3A9: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x14); /* 0x1705C3AB: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x1705C3AE: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + (-0xC)); /* 0x1705C3B0: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1705C3B3: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705C3B6: mov dword ptr [ebp - 4], ebx */
    MEM32(ecx) = eax; /* 0x1705C3B9: mov dword ptr [ecx], eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705C3BB: mov dword ptr [ebp - 0xc], ebx */
L_1705C3BE:
    edi = POP32_VAL(esp); /* 0x1705C3BE: pop edi */
L_1705C3BF:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1705C3BF: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C3D4; /* 0x1705C3C2: je 0x1705c3d4 */
L_1705C3C4:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705C3C4: push dword ptr [ebp - 0x10] */
    eax = MEM32(esi); /* 0x1705C3C7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705C3C9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705C3CA: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C3CD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1705C3CF: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1705C3BF; /* 0x1705C3D2: jl 0x1705c3bf */
L_1705C3D4:
    PUSH32(esp, ebx); /* 0x1705C3D4: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1705C3D5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1705C3DA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1705C3DD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1705C3E2: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x1705C3E5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705C3E6: pop ecx */
    esi = POP32_VAL(esp); /* 0x1705C3E7: pop esi */
    /* cmp eax, ebx */ /* 0x1705C3E8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1705C3EA: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C3F3; /* 0x1705C3EB: je 0x1705c3f3 */
L_1705C3ED:
    ecx = MEM32(eax); /* 0x1705C3ED: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C3EF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705C3F0: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705C3F3:
    eax = MEM32(ebp + 0x8); /* 0x1705C3F3: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705C3F6: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705C3F7: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705C3FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C3FFu);

L_1705C3FF:
    edi = edi; /* 0x1705C3FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C401: push ebp */
    ebp = esp; /* 0x1705C402: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x1705C404: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705C40A: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1705C40D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1705C40F: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x1705C415: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C44E; /* 0x1705C418: je 0x1705c44e */
L_1705C41A:
    /* test eax, eax */ /* 0x1705C41A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C44E; /* 0x1705C41C: je 0x1705c44e */
L_1705C41E:
    /* test LO8(eax), 1 */ /* 0x1705C41E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705C44E; /* 0x1705C420: jne 0x1705c44e */
L_1705C422:
    ecx = ebp + (-0x208); /* 0x1705C422: lea ecx, [ebp - 0x208] */
    PUSH32(esp, ecx); /* 0x1705C428: push ecx */
    PUSH32(esp, eax); /* 0x1705C429: push eax */
    RECOMP_CALL(sub_170533BA); /* 0x1705C42A: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705C42F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705C453; /* 0x1705C431: jl 0x1705c453 */
L_1705C433:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705C433: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x1705C436: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705C439: push dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x1705C43C: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x208); /* 0x1705C43E: lea edx, [ebp - 0x208] */
    PUSH32(esp, edx); /* 0x1705C444: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705C445: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705C448: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x64)); /* 0x1705C449: call dword ptr [ecx + 0x64] */
    RECOMP_FLAGS_IN();
    goto L_1705C453; /* 0x1705C44C: jmp 0x1705c453 */
L_1705C44E:
    eax = 0x8876086Cu; /* 0x1705C44E: mov eax, 0x8876086c */
L_1705C453:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705C453: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705C454: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705C45C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C45Cu);

L_1705C45C:
    edi = edi; /* 0x1705C45C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C45E: push ebp */
    ebp = esp; /* 0x1705C45F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705C461: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705C462: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1705C465: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x1705C468: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1705C46B: push edi */
    edi = eax + (-0x1); /* 0x1705C46C: lea edi, [eax - 1] */
    MEM32(esi + 0x4) = edi; /* 0x1705C46F: mov dword ptr [esi + 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C482; /* 0x1705C472: jne 0x1705c482 */
L_1705C474:
    ecx = esi; /* 0x1705C474: mov ecx, esi */
    RECOMP_CALL(sub_1705C48F); /* 0x1705C476: call 0x1705c48f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1705C47B: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1705C47C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705C481: pop ecx */
L_1705C482:
    eax = edi; /* 0x1705C482: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1705C484: pop edi */
    esi = POP32_VAL(esp); /* 0x1705C485: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705C486: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705C487: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705C48F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C48Fu);

    goto L_1705C48F;
L_1704F29D:
    edi = edi; /* 0x1704F29D: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704F29F: push ebx */
    PUSH32(esp, esi); /* 0x1704F2A0: push esi */
    esi = ecx; /* 0x1704F2A1: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1704F2A3: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F2A6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704F2A8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704F2AA: push edi */
    MEM32(esi) = 0x17005A18u; /* 0x1704F2AB: mov dword ptr [esi], 0x17005a18 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2BC; /* 0x1704F2B1: je 0x1704f2bc */
L_1704F2B3:
    ecx = MEM32(eax); /* 0x1704F2B3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2B5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2B6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x1704F2B9: mov dword ptr [esi + 8], ebx */
L_1704F2BC:
    edi = esi + 0x22C; /* 0x1704F2BC: lea edi, [esi + 0x22c] */
    eax = MEM32(edi); /* 0x1704F2C2: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2C4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2D0; /* 0x1704F2C6: je 0x1704f2d0 */
L_1704F2C8:
    ecx = MEM32(eax); /* 0x1704F2C8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2CA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2CB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2CE: mov dword ptr [edi], ebx */
L_1704F2D0:
    edi = esi + 0x230; /* 0x1704F2D0: lea edi, [esi + 0x230] */
    eax = MEM32(edi); /* 0x1704F2D6: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2D8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2E4; /* 0x1704F2DA: je 0x1704f2e4 */
L_1704F2DC:
    ecx = MEM32(eax); /* 0x1704F2DC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2DE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2DF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2E2: mov dword ptr [edi], ebx */
L_1704F2E4:
    edi = esi + 0x234; /* 0x1704F2E4: lea edi, [esi + 0x234] */
    eax = MEM32(edi); /* 0x1704F2EA: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2EC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2F8; /* 0x1704F2EE: je 0x1704f2f8 */
L_1704F2F0:
    ecx = MEM32(eax); /* 0x1704F2F0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2F3: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2F6: mov dword ptr [edi], ebx */
L_1704F2F8:
    edi = esi + 0x248; /* 0x1704F2F8: lea edi, [esi + 0x248] */
    eax = MEM32(edi); /* 0x1704F2FE: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F300: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F30C; /* 0x1704F302: je 0x1704f30c */
L_1704F304:
    ecx = MEM32(eax); /* 0x1704F304: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F306: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F307: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F30A: mov dword ptr [edi], ebx */
L_1704F30C:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1704F30C: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F312: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1704F317: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F31D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1704F322: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F328: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1704F32D: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F333: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1704F338: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F33E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704F343: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1704F346: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F347: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F348: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704F349: ret  */
L_1705C48F:
    edi = edi; /* 0x1705C48F: mov edi, edi */
    PUSH32(esp, esi); /* 0x1705C491: push esi */
    esi = ecx; /* 0x1705C492: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705C494: push edi */
    edi = esi + 0x298; /* 0x1705C495: lea edi, [esi + 0x298] */
    eax = MEM32(edi); /* 0x1705C49B: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x1705C49D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17005BC8u; /* 0x1705C49F: mov dword ptr [esi], 0x17005bc8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C4B0; /* 0x1705C4A5: je 0x1705c4b0 */
L_1705C4A7:
    ecx = MEM32(eax); /* 0x1705C4A7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C4A9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705C4AA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1705C4AD: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C4B0:
    PUSH32(esp, MEM32(esi + 0x310)); /* 0x1705C4B0: push dword ptr [esi + 0x310] */
    RECOMP_CALL(sub_1721B010); /* 0x1705C4B6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x29C)); /* 0x1705C4BB: push dword ptr [esi + 0x29c] */
    RECOMP_CALL(sub_1721B010); /* 0x1705C4C1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705C4C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705C4C7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1705C4C8: pop edi */
    ecx = esi + 0x8; /* 0x1705C4C9: lea ecx, [esi + 8] */
    esi = POP32_VAL(esp); /* 0x1705C4CC: pop esi */
    RECOMP_BACKEDGE();
    goto L_1704F29D; /* 0x1705C4CD: jmp 0x1704f29d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1705C4D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C4D7u);

L_1705C4D7:
    edi = edi; /* 0x1705C4D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C4D9: push ebp */
    ebp = esp; /* 0x1705C4DA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1705C4DC: push ecx */
    PUSH32(esp, ecx); /* 0x1705C4DD: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x1705C4DE: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1705C4E1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1705C4E2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1705C4E5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705C4E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1705C4E8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1705C4EA: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1705C4ED: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + 0x10) = eax; /* 0x1705C4F0: mov dword ptr [ebp + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C4FB; /* 0x1705C4F3: jne 0x1705c4fb */
L_1705C4F5:
    eax = ebx + 0x14; /* 0x1705C4F5: lea eax, [ebx + 0x14] */
    MEM32(ebp + 0x10) = eax; /* 0x1705C4F8: mov dword ptr [ebp + 0x10], eax */
L_1705C4FB:
    PUSH32(esp, edi); /* 0x1705C4FB: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C4FC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9F0); /* 0x1705C4FF: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705C504: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705C512; /* 0x1705C506: jne 0x1705c512 */
L_1705C508:
    eax = 0x8876086Cu; /* 0x1705C508: mov eax, 0x8876086c */
    goto L_1705C943; /* 0x1705C50D: jmp 0x1705c943 */
L_1705C512:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x1705C512: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1705C519: push esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705C559; /* 0x1705C51A: jne 0x1705c559 */
L_1705C51C:
    eax = MEM32(ebp + 0xC); /* 0x1705C51C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x1705C51F: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1705C524: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C539; /* 0x1705C527: je 0x1705c539 */
L_1705C529:
    eax = ebx + 0x14; /* 0x1705C529: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x1705C52C: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C52D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705C530: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705C535: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C559; /* 0x1705C537: je 0x1705c559 */
L_1705C539:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1705C539: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x14); /* 0x1705C53C: mov esi, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C553; /* 0x1705C53F: je 0x1705c553 */
L_1705C541:
    /* cmp esi, MEM32(ebx + 0x238) */ /* 0x1705C541: cmp esi, dword ptr [ebx + 0x238] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x238));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C553; /* 0x1705C547: je 0x1705c553 */
L_1705C549:
    eax = 0x8876086Cu; /* 0x1705C549: mov eax, 0x8876086c */
    goto L_1705C942; /* 0x1705C54E: jmp 0x1705c942 */
L_1705C553:
    /* test MEM8(ebp + 0xD), 4 */ /* 0x1705C553: test byte ptr [ebp + 0xd], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C565; /* 0x1705C557: je 0x1705c565 */
L_1705C559:
    MEM32(ebp + 0xC) = 0x8876086Cu; /* 0x1705C559: mov dword ptr [ebp + 0xc], 0x8876086c */
    goto L_1705C93F; /* 0x1705C560: jmp 0x1705c93f */
L_1705C565:
    /* test MEM8(ebp + 0xC), 1 */ /* 0x1705C565: test byte ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C702; /* 0x1705C569: je 0x1705c702 */
L_1705C56F:
    PUSH32(esp, 0x31Cu); /* 0x1705C56F: push 0x31c */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C574: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705C579: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1705C57B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C57D: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C595; /* 0x1705C57E: je 0x1705c595 */
L_1705C580:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705C580: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705C583: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C585: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1705C588: push esi */
    RECOMP_CALL(sub_1705BD69); /* 0x1705C589: call 0x1705bd69 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C58E: mov esi, eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1705C590: mov dword ptr [ebp - 4], esi */
    goto L_1705C59A; /* 0x1705C593: jmp 0x1705c59a */
L_1705C595:
    MEM32(ebp + (-0x4)) = edi; /* 0x1705C595: mov dword ptr [ebp - 4], edi */
    esi = edi; /* 0x1705C598: mov esi, edi */
L_1705C59A:
    /* cmp esi, edi */ /* 0x1705C59A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C74E; /* 0x1705C59C: je 0x1705c74e */
L_1705C5A2:
    eax = ebx + 0x298; /* 0x1705C5A2: lea eax, [ebx + 0x298] */
    ecx = MEM32(eax); /* 0x1705C5A8: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x298) = ecx; /* 0x1705C5AA: mov dword ptr [esi + 0x298], ecx */
    eax = MEM32(eax); /* 0x1705C5B0: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705C5B2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C5B4: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1705C5B5: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x8; /* 0x1705C5B7: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1705C5BA: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1705C5BD: push esi */
    MEM32(ebp + 0x14) = ecx; /* 0x1705C5BE: mov dword ptr [ebp + 0x14], ecx */
    RECOMP_CALL(sub_1705A4BD); /* 0x1705C5C1: call 0x1705a4bd */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705C5C6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1705C5C8: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705C932; /* 0x1705C5CB: jl 0x1705c932 */
L_1705C5D1:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1705C5D1: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x4)); /* 0x1705C5D4: mov esi, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C5F6; /* 0x1705C5D7: je 0x1705c5f6 */
L_1705C5D9:
    _flag_a = (uint32_t)((MEM32(ebx + 0x220) | 0x20u)); _flag_b = (uint32_t)((MEM32(ebx + 0x220) | 0x20u));
    MEM32(ebx + 0x220) = MEM32(ebx + 0x220) | 0x20u; /* 0x1705C5D9: or dword ptr [ebx + 0x220], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x23C; /* 0x1705C5E0: lea eax, [ebx + 0x23c] */
    ecx = MEM32(eax); /* 0x1705C5E6: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x23C) = ecx; /* 0x1705C5E8: mov dword ptr [esi + 0x23c], ecx */
    eax = MEM32(eax); /* 0x1705C5EE: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705C5F0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C5F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705C5F3: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1705C5F6:
    eax = MEM32(ebx + 0x294); /* 0x1705C5F6: mov eax, dword ptr [ebx + 0x294] */
    MEM32(esi + 0x294) = eax; /* 0x1705C5FC: mov dword ptr [esi + 0x294], eax */
    eax = MEM32(ebx + 0x290); /* 0x1705C602: mov eax, dword ptr [ebx + 0x290] */
    MEM32(esi + 0x290) = eax; /* 0x1705C608: mov dword ptr [esi + 0x290], eax */
    eax = MEM32(esi + 0x298); /* 0x1705C60E: mov eax, dword ptr [esi + 0x298] */
    eax = MEM32(eax + 0xC); /* 0x1705C614: mov eax, dword ptr [eax + 0xc] */
    MEM32(esi + 0x28C) = eax; /* 0x1705C617: mov dword ptr [esi + 0x28c], eax */
    eax = MEM32(ebx + 0x2A0); /* 0x1705C61D: mov eax, dword ptr [ebx + 0x2a0] */
    MEM32(esi + 0x2A0) = eax; /* 0x1705C623: mov dword ptr [esi + 0x2a0], eax */
    eax = MEM32(ebx + 0x2A4); /* 0x1705C629: mov eax, dword ptr [ebx + 0x2a4] */
    MEM32(esi + 0x2A4) = eax; /* 0x1705C62F: mov dword ptr [esi + 0x2a4], eax */
    eax = MEM32(ebx + 0x2B8); /* 0x1705C635: mov eax, dword ptr [ebx + 0x2b8] */
    MEM32(esi + 0x2B8) = eax; /* 0x1705C63B: mov dword ptr [esi + 0x2b8], eax */
    eax = MEM32(ebx + 0x2BC); /* 0x1705C641: mov eax, dword ptr [ebx + 0x2bc] */
    MEM32(esi + 0x2BC) = eax; /* 0x1705C647: mov dword ptr [esi + 0x2bc], eax */
    eax = MEM32(ebx + 0x2C0); /* 0x1705C64D: mov eax, dword ptr [ebx + 0x2c0] */
    MEM32(esi + 0x2C0) = eax; /* 0x1705C653: mov dword ptr [esi + 0x2c0], eax */
    eax = MEM32(ebx + 0x2AC); /* 0x1705C659: mov eax, dword ptr [ebx + 0x2ac] */
    MEM32(esi + 0x2AC) = eax; /* 0x1705C65F: mov dword ptr [esi + 0x2ac], eax */
    eax = MEM32(ebx + 0x2B4); /* 0x1705C665: mov eax, dword ptr [ebx + 0x2b4] */
    MEM32(esi + 0x2B4) = eax; /* 0x1705C66B: mov dword ptr [esi + 0x2b4], eax */
    eax = MEM32(ebx + 0x2B0); /* 0x1705C671: mov eax, dword ptr [ebx + 0x2b0] */
    MEM32(esi + 0x2B0) = eax; /* 0x1705C677: mov dword ptr [esi + 0x2b0], eax */
    eax = MEM32(ebx + 0x2A8); /* 0x1705C67D: mov eax, dword ptr [ebx + 0x2a8] */
    MEM32(esi + 0x2A8) = eax; /* 0x1705C683: mov dword ptr [esi + 0x2a8], eax */
    eax = MEM32(ebx + 0x318); /* 0x1705C689: mov eax, dword ptr [ebx + 0x318] */
    MEM32(esi + 0x318) = eax; /* 0x1705C68F: mov dword ptr [esi + 0x318], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C695: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C695: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C698: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C699: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x310) = eax; /* 0x1705C69E: mov dword ptr [esi + 0x310], eax */
    eax = MEM32(ebx + 0x268); /* 0x1705C6A4: mov eax, dword ptr [ebx + 0x268] */
    eax = eax + eax * 4; /* 0x1705C6AA: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C6AD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C6AD: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C6B0: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C6B1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x310), edi */ /* 0x1705C6B6: cmp dword ptr [esi + 0x310], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x310)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C6BC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705C6BD: pop ecx */
    MEM32(esi + 0x29C) = eax; /* 0x1705C6BE: mov dword ptr [esi + 0x29c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C6F6; /* 0x1705C6C4: je 0x1705c6f6 */
L_1705C6C6:
    /* cmp eax, edi */ /* 0x1705C6C6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C6F6; /* 0x1705C6C8: je 0x1705c6f6 */
L_1705C6CA:
    ecx = MEM32(ebx + 0x268); /* 0x1705C6CA: mov ecx, dword ptr [ebx + 0x268] */
    esi = MEM32(ebx + 0x29C); /* 0x1705C6D0: mov esi, dword ptr [ebx + 0x29c] */
    ecx = ecx + ecx * 4; /* 0x1705C6D6: lea ecx, [ecx + ecx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705C6D9: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705C6D9: shl ecx, 2 */
    edi = eax; /* 0x1705C6DC: mov edi, eax */
    eax = ecx; /* 0x1705C6DE: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705C6E0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705C6E0: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705C6E3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705C6E5: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1705C6E7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705C6EA: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705C6ED: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705C8C6; /* 0x1705C6F1: jmp 0x1705c8c6 */
L_1705C6F6:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1705C6F6: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1705C932; /* 0x1705C6FD: jmp 0x1705c932 */
L_1705C702:
    eax = 0xFFFFu; /* 0x1705C702: mov eax, 0xffff */
    /* cmp MEM32(ebx + 0x26C), eax */ /* 0x1705C707: cmp dword ptr [ebx + 0x26c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x26C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705C914; /* 0x1705C70D: ja 0x1705c914 */
L_1705C713:
    /* cmp MEM32(ebx + 0x244), eax */ /* 0x1705C713: cmp dword ptr [ebx + 0x244], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x244)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1705C914; /* 0x1705C719: ja 0x1705c914 */
L_1705C71F:
    PUSH32(esp, 0x2F4u); /* 0x1705C71F: push 0x2f4 */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C724: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705C729: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1705C72B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C72D: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C745; /* 0x1705C72E: je 0x1705c745 */
L_1705C730:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705C730: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705C733: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C735: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1705C738: push esi */
    RECOMP_CALL(sub_1705AAB3); /* 0x1705C739: call 0x1705aab3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705C73E: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1705C740: mov dword ptr [ebp - 8], esi */
    goto L_1705C74A; /* 0x1705C743: jmp 0x1705c74a */
L_1705C745:
    MEM32(ebp + (-0x8)) = edi; /* 0x1705C745: mov dword ptr [ebp - 8], edi */
    esi = edi; /* 0x1705C748: mov esi, edi */
L_1705C74A:
    /* cmp esi, edi */ /* 0x1705C74A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C75A; /* 0x1705C74C: jne 0x1705c75a */
L_1705C74E:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1705C74E: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1705C93F; /* 0x1705C755: jmp 0x1705c93f */
L_1705C75A:
    eax = ebx + 0x298; /* 0x1705C75A: lea eax, [ebx + 0x298] */
    ecx = MEM32(eax); /* 0x1705C760: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x298) = ecx; /* 0x1705C762: mov dword ptr [esi + 0x298], ecx */
    eax = MEM32(eax); /* 0x1705C768: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705C76A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C76C: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1705C76D: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x8; /* 0x1705C76F: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1705C772: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1705C775: push esi */
    MEM32(ebp + 0x14) = ecx; /* 0x1705C776: mov dword ptr [ebp + 0x14], ecx */
    RECOMP_CALL(sub_1705A291); /* 0x1705C779: call 0x1705a291 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1705C77E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1705C780: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705C925; /* 0x1705C783: jl 0x1705c925 */
L_1705C789:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1705C789: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x248); /* 0x1705C78C: mov eax, dword ptr [ebx + 0x248] */
    esi = MEM32(ebp + (-0x8)); /* 0x1705C792: mov esi, dword ptr [ebp - 8] */
    MEM32(esi + 0x248) = eax; /* 0x1705C795: mov dword ptr [esi + 0x248], eax */
    eax = MEM32(ebx + 0x270); /* 0x1705C79B: mov eax, dword ptr [ebx + 0x270] */
    MEM32(esi + 0x270) = eax; /* 0x1705C7A1: mov dword ptr [esi + 0x270], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C7C6; /* 0x1705C7A7: je 0x1705c7c6 */
L_1705C7A9:
    _flag_a = (uint32_t)((MEM32(ebx + 0x220) | 0x20u)); _flag_b = (uint32_t)((MEM32(ebx + 0x220) | 0x20u));
    MEM32(ebx + 0x220) = MEM32(ebx + 0x220) | 0x20u; /* 0x1705C7A9: or dword ptr [ebx + 0x220], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x23C; /* 0x1705C7B0: lea eax, [ebx + 0x23c] */
    ecx = MEM32(eax); /* 0x1705C7B6: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x23C) = ecx; /* 0x1705C7B8: mov dword ptr [esi + 0x23c], ecx */
    eax = MEM32(eax); /* 0x1705C7BE: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1705C7C0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C7C2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1705C7C3: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1705C7C6:
    eax = MEM32(ebx + 0x294); /* 0x1705C7C6: mov eax, dword ptr [ebx + 0x294] */
    MEM32(esi + 0x294) = eax; /* 0x1705C7CC: mov dword ptr [esi + 0x294], eax */
    eax = MEM32(ebx + 0x290); /* 0x1705C7D2: mov eax, dword ptr [ebx + 0x290] */
    MEM32(esi + 0x290) = eax; /* 0x1705C7D8: mov dword ptr [esi + 0x290], eax */
    eax = MEM32(esi + 0x298); /* 0x1705C7DE: mov eax, dword ptr [esi + 0x298] */
    eax = MEM32(eax + 0xC); /* 0x1705C7E4: mov eax, dword ptr [eax + 0xc] */
    MEM32(esi + 0x28C) = eax; /* 0x1705C7E7: mov dword ptr [esi + 0x28c], eax */
    eax = MEM32(ebx + 0x2A0); /* 0x1705C7ED: mov eax, dword ptr [ebx + 0x2a0] */
    MEM32(esi + 0x2A0) = eax; /* 0x1705C7F3: mov dword ptr [esi + 0x2a0], eax */
    eax = MEM32(ebx + 0x2A4); /* 0x1705C7F9: mov eax, dword ptr [ebx + 0x2a4] */
    MEM32(esi + 0x2A4) = eax; /* 0x1705C7FF: mov dword ptr [esi + 0x2a4], eax */
    eax = MEM32(ebx + 0x2B8); /* 0x1705C805: mov eax, dword ptr [ebx + 0x2b8] */
    MEM32(esi + 0x2B8) = eax; /* 0x1705C80B: mov dword ptr [esi + 0x2b8], eax */
    eax = MEM32(ebx + 0x2BC); /* 0x1705C811: mov eax, dword ptr [ebx + 0x2bc] */
    MEM32(esi + 0x2BC) = eax; /* 0x1705C817: mov dword ptr [esi + 0x2bc], eax */
    eax = MEM32(ebx + 0x2C0); /* 0x1705C81D: mov eax, dword ptr [ebx + 0x2c0] */
    MEM32(esi + 0x2C0) = eax; /* 0x1705C823: mov dword ptr [esi + 0x2c0], eax */
    eax = MEM32(ebx + 0x2AC); /* 0x1705C829: mov eax, dword ptr [ebx + 0x2ac] */
    MEM32(esi + 0x2AC) = eax; /* 0x1705C82F: mov dword ptr [esi + 0x2ac], eax */
    eax = MEM32(ebx + 0x2B4); /* 0x1705C835: mov eax, dword ptr [ebx + 0x2b4] */
    MEM32(esi + 0x2B4) = eax; /* 0x1705C83B: mov dword ptr [esi + 0x2b4], eax */
    eax = MEM32(ebx + 0x2B0); /* 0x1705C841: mov eax, dword ptr [ebx + 0x2b0] */
    MEM32(esi + 0x2B0) = eax; /* 0x1705C847: mov dword ptr [esi + 0x2b0], eax */
    eax = MEM32(ebx + 0x2A8); /* 0x1705C84D: mov eax, dword ptr [ebx + 0x2a8] */
    MEM32(esi + 0x2A8) = eax; /* 0x1705C853: mov dword ptr [esi + 0x2a8], eax */
    SET_LO16(eax, MEM16(ebx + 0x318)); /* 0x1705C859: mov ax, word ptr [ebx + 0x318] */
    MEM16(esi + 0x2F2) = (uint16_t)(LO16(eax)); /* 0x1705C860: mov word ptr [esi + 0x2f2], ax */
    eax = (uint32_t)LO16(eax); /* 0x1705C867: movzx eax, ax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C86A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C86A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C86D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C86E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x2EC) = eax; /* 0x1705C873: mov dword ptr [esi + 0x2ec], eax */
    eax = MEM32(ebx + 0x268); /* 0x1705C879: mov eax, dword ptr [ebx + 0x268] */
    eax = eax + eax * 4; /* 0x1705C87F: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C882: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C882: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C885: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C886: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x2EC), edi */ /* 0x1705C88B: cmp dword ptr [esi + 0x2ec], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x2EC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C891: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705C892: pop ecx */
    MEM32(esi + 0x29C) = eax; /* 0x1705C893: mov dword ptr [esi + 0x29c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C90B; /* 0x1705C899: je 0x1705c90b */
L_1705C89B:
    /* cmp eax, edi */ /* 0x1705C89B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705C90B; /* 0x1705C89D: je 0x1705c90b */
L_1705C89F:
    ecx = MEM32(ebx + 0x268); /* 0x1705C89F: mov ecx, dword ptr [ebx + 0x268] */
    esi = MEM32(ebx + 0x29C); /* 0x1705C8A5: mov esi, dword ptr [ebx + 0x29c] */
    ecx = ecx + ecx * 4; /* 0x1705C8AB: lea ecx, [ecx + ecx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705C8AE: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705C8AE: shl ecx, 2 */
    edi = eax; /* 0x1705C8B1: mov edi, eax */
    eax = ecx; /* 0x1705C8B3: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705C8B5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705C8B5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705C8B8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705C8BA: mov ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1705C8BC: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705C8BF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1705C8C2: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705C8C6:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1705C8C6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705C8CA: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebx + 0x288); /* 0x1705C8CC: mov ecx, dword ptr [ebx + 0x288] */
    MEM32(eax + 0x288) = ecx; /* 0x1705C8D2: mov dword ptr [eax + 0x288], ecx */
    ecx = MEM32(eax + 0x298); /* 0x1705C8D8: mov ecx, dword ptr [eax + 0x298] */
    ecx = MEM32(ecx + 0x8); /* 0x1705C8DE: mov ecx, dword ptr [ecx + 8] */
    MEM32(eax + 0x284) = ecx; /* 0x1705C8E1: mov dword ptr [eax + 0x284], ecx */
    ecx = MEM32(eax + 0x23C); /* 0x1705C8E7: mov ecx, dword ptr [eax + 0x23c] */
    edi = eax; /* 0x1705C8ED: mov edi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C904; /* 0x1705C8EF: jne 0x1705c904 */
L_1705C8F1:
    PUSH32(esp, ecx); /* 0x1705C8F1: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705C8F2: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x1705C8F5: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1705A6CF); /* 0x1705C8F8: call 0x1705a6cf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705C8FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1705C8FF: mov dword ptr [ebp + 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705C91B; /* 0x1705C902: jl 0x1705c91b */
L_1705C904:
    eax = MEM32(ebp + 0x18); /* 0x1705C904: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = edi; /* 0x1705C907: mov dword ptr [eax], edi */
    goto L_1705C93F; /* 0x1705C909: jmp 0x1705c93f */
L_1705C90B:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1705C90B: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1705C925; /* 0x1705C912: jmp 0x1705c925 */
L_1705C914:
    MEM32(ebp + 0xC) = 0x8876086Cu; /* 0x1705C914: mov dword ptr [ebp + 0xc], 0x8876086c */
L_1705C91B:
    /* test edi, edi */ /* 0x1705C91B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C93F; /* 0x1705C91D: je 0x1705c93f */
L_1705C91F:
    eax = MEM32(edi); /* 0x1705C91F: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1705C921: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1705C922: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1705C925:
    eax = MEM32(ebp + (-0x8)); /* 0x1705C925: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1705C928: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C93F; /* 0x1705C92A: je 0x1705c93f */
L_1705C92C:
    ecx = MEM32(eax); /* 0x1705C92C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C92E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705C92F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705C932:
    eax = MEM32(ebp + (-0x4)); /* 0x1705C932: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705C935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705C93F; /* 0x1705C937: je 0x1705c93f */
L_1705C939:
    ecx = MEM32(eax); /* 0x1705C939: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705C93B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705C93C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705C93F:
    eax = MEM32(ebp + 0xC); /* 0x1705C93F: mov eax, dword ptr [ebp + 0xc] */
L_1705C942:
    esi = POP32_VAL(esp); /* 0x1705C942: pop esi */
L_1705C943:
    edi = POP32_VAL(esp); /* 0x1705C943: pop edi */
    ebx = POP32_VAL(esp); /* 0x1705C944: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705C945: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1705C946: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1705C94E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705C94Eu);

L_1705C94E:
    edi = edi; /* 0x1705C94E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705C950: push ebp */
    ebp = esp; /* 0x1705C951: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705C953: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705C956: push ebx */
    PUSH32(esp, esi); /* 0x1705C957: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705C958: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705C95B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1705C95D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1705C95E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1705C960: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705C963: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C974; /* 0x1705C966: jne 0x1705c974 */
L_1705C968:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1705C968: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_1705CD96; /* 0x1705C96F: jmp 0x1705cd96 */
L_1705C974:
    eax = MEM32(esi + 0x2C0); /* 0x1705C974: mov eax, dword ptr [esi + 0x2c0] */
    PUSH32(esp, MEM32(esi + 0x2B8)); /* 0x1705C97A: push dword ptr [esi + 0x2b8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1705C980: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1705C983: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705C985: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705C986: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C989: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705C98B: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705CD96; /* 0x1705C98E: jl 0x1705cd96 */
L_1705C994:
    eax = MEM32(esi + 0x268); /* 0x1705C994: mov eax, dword ptr [esi + 0x268] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705C99A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705C99A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705C99D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705C99E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705C9A3: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1705C9A5: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705C9A7: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705C9B6; /* 0x1705C9A8: jne 0x1705c9b6 */
L_1705C9AA:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1705C9AA: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1705CD96; /* 0x1705C9B1: jmp 0x1705cd96 */
L_1705C9B6:
    eax = esi + 0x254; /* 0x1705C9B6: lea eax, [esi + 0x254] */
    PUSH32(esp, ebx); /* 0x1705C9BC: push ebx */
    PUSH32(esp, eax); /* 0x1705C9BD: push eax */
    ecx = esi + 0x8; /* 0x1705C9BE: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_1704EA87); /* 0x1705C9C1: call 0x1704ea87 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1705C9C6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705C9C8: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1705CD96; /* 0x1705C9CB: jl 0x1705cd96 */
L_1705C9D1:
    /* cmp MEM32(esi + 0x2A8), ebx */ /* 0x1705C9D1: cmp dword ptr [esi + 0x2a8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705CD52; /* 0x1705C9D7: jbe 0x1705cd52 */
L_1705C9DD:
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2A8) = MEM32(esi + 0x2A8) - 1; /* 0x1705C9DD: dec dword ptr [esi + 0x2a8] */
    _flag_k = FK_DEC;
    eax = MEM32(esi + 0x2A8); /* 0x1705C9E3: mov eax, dword ptr [esi + 0x2a8] */
    ecx = MEM32(esi + 0x284); /* 0x1705C9E9: mov ecx, dword ptr [esi + 0x284] */
    ebx = ecx + eax * 8; /* 0x1705C9EF: lea ebx, [ecx + eax*8] */
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x1705C9F2: movzx eax, word ptr [ebx + 6] */
    /* cmp MEM16(ebx + 0x4), 0 */ /* 0x1705C9F6: cmp word ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(esi + 0x258); /* 0x1705C9FB: mov ecx, dword ptr [esi + 0x258] */
    MEM32(ebp + 0x8) = eax; /* 0x1705CA01: mov dword ptr [ebp + 8], eax */
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x1705CA04: seta al */
    MEM8(esi + 0x2C4) = (uint8_t)(LO8(eax)); /* 0x1705CA07: mov byte ptr [esi + 0x2c4], al */
    eax = MEM32(ebx); /* 0x1705CA0D: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705CA0F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(ebx + 0x6)); /* 0x1705CA11: mov dl, byte ptr [ebx + 6] */
    eax = eax + eax * 2; /* 0x1705CA14: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1705CA17: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x17005960));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx * 4 + 0x17005960); /* 0x1705CA1A: add eax, dword ptr [edx*4 + 0x17005960] */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705CA21: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx + eax * 4); /* 0x1705CA28: mov eax, dword ptr [ecx + eax*4] */
    edx = MEM32(esi + 0x260); /* 0x1705CA2B: mov edx, dword ptr [esi + 0x260] */
    MEM32(esi + 0x2E8) = eax; /* 0x1705CA31: mov dword ptr [esi + 0x2e8], eax */
    SET_LO16(eax, MEM16(edx + eax * 2)); /* 0x1705CA37: mov ax, word ptr [edx + eax*2] */
    MEM16(esi + 0x2E4) = (uint16_t)(LO16(eax)); /* 0x1705CA3B: mov word ptr [esi + 0x2e4], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CC32; /* 0x1705CA42: je 0x1705cc32 */
L_1705CA48:
    /* test MEM8(ebp + 0x9), 0x20u */ /* 0x1705CA48: test byte ptr [ebp + 9], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x9)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi + 0x2E8); /* 0x1705CA4C: mov eax, dword ptr [esi + 0x2e8] */
    eax = eax + eax * 2; /* 0x1705CA52: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4); /* 0x1705CA55: mov eax, dword ptr [ecx + eax*4] */
    MEM32(esi + 0x2EC) = eax; /* 0x1705CA58: mov dword ptr [esi + 0x2ec], eax */
    SET_LO16(eax, MEM16(edx + eax * 2)); /* 0x1705CA5E: mov ax, word ptr [edx + eax*2] */
    edx = MEM32(esi + 0x264); /* 0x1705CA62: mov edx, dword ptr [esi + 0x264] */
    MEM16(esi + 0x2E6) = (uint16_t)(LO16(eax)); /* 0x1705CA68: mov word ptr [esi + 0x2e6], ax */
    eax = (uint32_t)LO16(eax); /* 0x1705CA6F: movzx eax, ax */
    ecx = eax + eax * 4; /* 0x1705CA72: lea ecx, [eax + eax*4] */
    ecx = edx + ecx * 4; /* 0x1705CA75: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705CA78: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705CA7B: mov ecx, dword ptr [ecx + 0xc] */
    ecx = edx + ecx + (-0x1); /* 0x1705CA7E: lea ecx, [edx + ecx - 1] */
    MEM32(edi + eax * 4) = ecx; /* 0x1705CA82: mov dword ptr [edi + eax*4], ecx */
    eax = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CA85: movzx eax, word ptr [esi + 0x2e4] */
    edx = MEM32(esi + 0x264); /* 0x1705CA8C: mov edx, dword ptr [esi + 0x264] */
    ecx = eax + eax * 4; /* 0x1705CA92: lea ecx, [eax + eax*4] */
    ecx = edx + ecx * 4; /* 0x1705CA95: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705CA98: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705CA9B: mov ecx, dword ptr [ecx + 0xc] */
    ecx = edx + ecx + (-0x1); /* 0x1705CA9E: lea ecx, [edx + ecx - 1] */
    MEM32(edi + eax * 4) = ecx; /* 0x1705CAA2: mov dword ptr [edi + eax*4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705CB10; /* 0x1705CAA5: je 0x1705cb10 */
L_1705CAA7:
    eax = MEM32(esi + 0x2EC); /* 0x1705CAA7: mov eax, dword ptr [esi + 0x2ec] */
    ecx = MEM32(esi + 0x258); /* 0x1705CAAD: mov ecx, dword ptr [esi + 0x258] */
    eax = eax + eax * 2; /* 0x1705CAB3: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4 + 0x4); /* 0x1705CAB6: mov eax, dword ptr [ecx + eax*4 + 4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1705CABA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1705CABD: mov dword ptr [ebp - 8], eax */
    MEM32(esi + 0x2FC) = eax; /* 0x1705CAC0: mov dword ptr [esi + 0x2fc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CD71; /* 0x1705CAC6: je 0x1705cd71 */
L_1705CACC:
    PUSH32(esp, MEM32(esi + 0x2EC)); /* 0x1705CACC: push dword ptr [esi + 0x2ec] */
    eax = eax + eax * 2; /* 0x1705CAD2: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1705CAD5: lea eax, [ecx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CAD8: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CAD9: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1705CADE: mov ecx, dword ptr [ebp - 8] */
    edx = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CAE1: movzx edx, word ptr [esi + 0x2e6] */
    edx = MEM32(edi + edx * 4); /* 0x1705CAE8: mov edx, dword ptr [edi + edx*4] */
    ecx = ecx + ecx * 2; /* 0x1705CAEB: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x1700595C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x1700595C); /* 0x1705CAEE: add ecx, dword ptr [eax*4 + 0x1700595c] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705CAF5: mov eax, dword ptr [esi + 0x254] */
    eax = MEM32(eax + ecx * 4); /* 0x1705CAFB: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1705CAFE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1705CB01: mov dword ptr [ecx + edx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CB04: movzx eax, word ptr [esi + 0x2e6] */
    eax = edi + eax * 4; /* 0x1705CB0B: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CB0E: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705CB10:
    eax = MEM32(ebp + 0x8); /* 0x1705CB10: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705CB13: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x40u);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0x40u; /* 0x1705CB16: and dword ptr [ebp - 8], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CBAA; /* 0x1705CB1A: jne 0x1705cbaa */
L_1705CB20:
    /* test HI8(eax), 1 */ /* 0x1705CB20: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CBAA; /* 0x1705CB23: jne 0x1705cbaa */
L_1705CB29:
    /* test LO8(eax), 0x20u */ /* 0x1705CB29: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CBAA; /* 0x1705CB2B: jne 0x1705cbaa */
L_1705CB2D:
    eax = MEM32(esi + 0x2EC); /* 0x1705CB2D: mov eax, dword ptr [esi + 0x2ec] */
    ecx = MEM32(esi + 0x258); /* 0x1705CB33: mov ecx, dword ptr [esi + 0x258] */
    eax = eax + eax * 2; /* 0x1705CB39: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4); /* 0x1705CB3C: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1705CB3F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1705CB42: mov dword ptr [ebp - 0x10], eax */
    MEM32(esi + 0x2F8) = eax; /* 0x1705CB45: mov dword ptr [esi + 0x2f8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CD71; /* 0x1705CB4B: je 0x1705cd71 */
L_1705CB51:
    PUSH32(esp, MEM32(esi + 0x2EC)); /* 0x1705CB51: push dword ptr [esi + 0x2ec] */
    eax = eax + eax * 2; /* 0x1705CB57: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1705CB5A: lea eax, [ecx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CB5D: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CB5E: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1705CB63: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1705CB66: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx + ecx * 2; /* 0x1705CB69: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x1700595C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x1700595C); /* 0x1705CB6C: add ecx, dword ptr [eax*4 + 0x1700595c] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705CB73: mov eax, dword ptr [esi + 0x254] */
    ecx = MEM32(eax + ecx * 4); /* 0x1705CB79: mov ecx, dword ptr [eax + ecx*4] */
    eax = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CB7C: movzx eax, word ptr [esi + 0x2e6] */
    eax = MEM32(edi + eax * 4); /* 0x1705CB83: mov eax, dword ptr [edi + eax*4] */
    MEM32(edx + eax * 4) = ecx; /* 0x1705CB86: mov dword ptr [edx + eax*4], ecx */
    eax = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CB89: movzx eax, word ptr [esi + 0x2e6] */
    eax = edi + eax * 4; /* 0x1705CB90: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CB93: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    /* test MEM8(ebp + 0x9), 2 */ /* 0x1705CB95: test byte ptr [ebp + 9], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x9)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CBDD; /* 0x1705CB99: jne 0x1705cbdd */
L_1705CB9B:
    eax = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CB9B: movzx eax, word ptr [esi + 0x2e6] */
    eax = MEM32(edi + eax * 4); /* 0x1705CBA2: mov eax, dword ptr [edi + eax*4] */
    MEM32(edx + eax * 4) = ecx; /* 0x1705CBA5: mov dword ptr [edx + eax*4], ecx */
    goto L_1705CBD1; /* 0x1705CBA8: jmp 0x1705cbd1 */
L_1705CBAA:
    /* test HI8(eax), 2 */ /* 0x1705CBAA: test ah, 2 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CBDD; /* 0x1705CBAD: jne 0x1705cbdd */
L_1705CBAF:
    eax = MEM32(esi + 0x2EC); /* 0x1705CBAF: mov eax, dword ptr [esi + 0x2ec] */
    ecx = MEM32(esi + 0x254); /* 0x1705CBB5: mov ecx, dword ptr [esi + 0x254] */
    edx = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CBBB: movzx edx, word ptr [esi + 0x2e6] */
    edx = MEM32(edi + edx * 4); /* 0x1705CBC2: mov edx, dword ptr [edi + edx*4] */
    eax = eax + eax * 2; /* 0x1705CBC5: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4); /* 0x1705CBC8: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1705CBCB: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1705CBCE: mov dword ptr [ecx + edx*4], eax */
L_1705CBD1:
    eax = (uint32_t)MEM16(esi + 0x2E6); /* 0x1705CBD1: movzx eax, word ptr [esi + 0x2e6] */
    eax = edi + eax * 4; /* 0x1705CBD8: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CBDB: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705CBDD:
    /* test MEM8(ebp + 0x9), 8 */ /* 0x1705CBDD: test byte ptr [ebp + 9], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x9)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705CC1C; /* 0x1705CBE1: je 0x1705cc1c */
L_1705CBE3:
    edx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CBE3: movzx edx, word ptr [esi + 0x2e4] */
    edx = MEM32(edi + edx * 4); /* 0x1705CBEA: mov edx, dword ptr [edi + edx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705CBED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebx + 0x6)); /* 0x1705CBEF: mov al, byte ptr [ebx + 6] */
    ebx = MEM32(ebx); /* 0x1705CBF2: mov ebx, dword ptr [ebx] */
    ecx = ebx + ebx * 2; /* 0x1705CBF4: lea ecx, [ebx + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1705CBF7: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x1700595C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x1700595C); /* 0x1705CBFA: add ecx, dword ptr [eax*4 + 0x1700595c] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705CC01: mov eax, dword ptr [esi + 0x254] */
    eax = MEM32(eax + ecx * 4); /* 0x1705CC07: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1705CC0A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1705CC0D: mov dword ptr [ecx + edx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CC10: movzx eax, word ptr [esi + 0x2e4] */
    eax = edi + eax * 4; /* 0x1705CC17: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CC1A: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705CC1C:
    /* test MEM8(ebp + 0x8), 0x90u */ /* 0x1705CC1C: test byte ptr [ebp + 8], 0x90 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705CD00; /* 0x1705CC20: jne 0x1705cd00 */
L_1705CC26:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1705CC26: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CC93; /* 0x1705CC2A: je 0x1705cc93 */
L_1705CC2C:
    /* test MEM8(ebp + 0x8), 0x20u */ /* 0x1705CC2C: test byte ptr [ebp + 8], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1705CC91; /* 0x1705CC30: jmp 0x1705cc91 */
L_1705CC32:
    /* test MEM8(ebp + 0x9), 8 */ /* 0x1705CC32: test byte ptr [ebp + 9], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x9)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(esi + 0x264); /* 0x1705CC36: mov edx, dword ptr [esi + 0x264] */
    eax = (uint32_t)LO16(eax); /* 0x1705CC3C: movzx eax, ax */
    ecx = eax + eax * 4; /* 0x1705CC3F: lea ecx, [eax + eax*4] */
    ecx = edx + ecx * 4; /* 0x1705CC42: lea ecx, [edx + ecx*4] */
    edx = MEM32(ecx + 0x10); /* 0x1705CC45: mov edx, dword ptr [ecx + 0x10] */
    ecx = MEM32(ecx + 0xC); /* 0x1705CC48: mov ecx, dword ptr [ecx + 0xc] */
    ecx = edx + ecx + (-0x1); /* 0x1705CC4B: lea ecx, [edx + ecx - 1] */
    MEM32(edi + eax * 4) = ecx; /* 0x1705CC4F: mov dword ptr [edi + eax*4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705CC8D; /* 0x1705CC52: je 0x1705cc8d */
L_1705CC54:
    edx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CC54: movzx edx, word ptr [esi + 0x2e4] */
    edx = MEM32(edi + edx * 4); /* 0x1705CC5B: mov edx, dword ptr [edi + edx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705CC5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebx + 0x6)); /* 0x1705CC60: mov al, byte ptr [ebx + 6] */
    ebx = MEM32(ebx); /* 0x1705CC63: mov ebx, dword ptr [ebx] */
    ecx = ebx + ebx * 2; /* 0x1705CC65: lea ecx, [ebx + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1705CC68: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x1700595C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x1700595C); /* 0x1705CC6B: add ecx, dword ptr [eax*4 + 0x1700595c] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x254); /* 0x1705CC72: mov eax, dword ptr [esi + 0x254] */
    eax = MEM32(eax + ecx * 4); /* 0x1705CC78: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1705CC7B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1705CC7E: mov dword ptr [ecx + edx*4], eax */
    eax = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CC81: movzx eax, word ptr [esi + 0x2e4] */
    eax = edi + eax * 4; /* 0x1705CC88: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CC8B: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1705CC8D:
    /* test MEM8(ebp + 0x8), 0x90u */ /* 0x1705CC8D: test byte ptr [ebp + 8], 0x90 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1705CC91:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1705CD00; /* 0x1705CC91: jne 0x1705cd00 */
L_1705CC93:
    ecx = MEM32(esi + 0x2E8); /* 0x1705CC93: mov ecx, dword ptr [esi + 0x2e8] */
    eax = MEM32(esi + 0x258); /* 0x1705CC99: mov eax, dword ptr [esi + 0x258] */
    ecx = ecx + ecx * 2; /* 0x1705CC9F: lea ecx, [ecx + ecx*2] */
    ebx = MEM32(eax + ecx * 4 + 0x8); /* 0x1705CCA2: mov ebx, dword ptr [eax + ecx*4 + 8] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1705CCA6: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x2F4) = ebx; /* 0x1705CCA9: mov dword ptr [esi + 0x2f4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CD71; /* 0x1705CCAF: je 0x1705cd71 */
L_1705CCB5:
    PUSH32(esp, MEM32(esi + 0x2E8)); /* 0x1705CCB5: push dword ptr [esi + 0x2e8] */
    ecx = ebx + ebx * 2; /* 0x1705CCBB: lea ecx, [ebx + ebx*2] */
    eax = eax + ecx * 4; /* 0x1705CCBE: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1705CCC1: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CCC2: call 0x170501fa */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x1705CCC7: mov edx, dword ptr [ebp + 0xc] */
    ecx = ebx + ebx * 2; /* 0x1705CCCA: lea ecx, [ebx + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CCCD: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x254); /* 0x1705CCCF: mov ecx, dword ptr [esi + 0x254] */
    eax = MEM32(ecx + eax * 4); /* 0x1705CCD5: mov eax, dword ptr [ecx + eax*4] */
    ecx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CCD8: movzx ecx, word ptr [esi + 0x2e4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705CCDF: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x1705CCE2: mov dword ptr [edx + ecx*4], eax */
    ecx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CCE5: movzx ecx, word ptr [esi + 0x2e4] */
    ecx = edi + ecx * 4; /* 0x1705CCEC: lea ecx, [edi + ecx*4] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1705CCEF: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    ecx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CCF1: movzx ecx, word ptr [esi + 0x2e4] */
    ecx = MEM32(edi + ecx * 4); /* 0x1705CCF8: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x1705CCFB: mov dword ptr [edx + ecx*4], eax */
    goto L_1705CD22; /* 0x1705CCFE: jmp 0x1705cd22 */
L_1705CD00:
    eax = MEM32(esi + 0x2E8); /* 0x1705CD00: mov eax, dword ptr [esi + 0x2e8] */
    ecx = MEM32(esi + 0x254); /* 0x1705CD06: mov ecx, dword ptr [esi + 0x254] */
    edx = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CD0C: movzx edx, word ptr [esi + 0x2e4] */
    edx = MEM32(edi + edx * 4); /* 0x1705CD13: mov edx, dword ptr [edi + edx*4] */
    eax = eax + eax * 2; /* 0x1705CD16: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4); /* 0x1705CD19: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + 0xC); /* 0x1705CD1C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1705CD1F: mov dword ptr [ecx + edx*4], eax */
L_1705CD22:
    eax = (uint32_t)MEM16(esi + 0x2E4); /* 0x1705CD22: movzx eax, word ptr [esi + 0x2e4] */
    eax = edi + eax * 4; /* 0x1705CD29: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1705CD2C: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x284); /* 0x1705CD2E: mov ecx, dword ptr [esi + 0x284] */
    eax = MEM32(esi + 0x2A8); /* 0x1705CD34: mov eax, dword ptr [esi + 0x2a8] */
    eax = ecx + eax * 8; /* 0x1705CD3A: lea eax, [ecx + eax*8] */
    PUSH32(esp, eax); /* 0x1705CD3D: push eax */
    ecx = esi; /* 0x1705CD3E: mov ecx, esi */
    RECOMP_CALL(sub_1705CDD4); /* 0x1705CD40: call 0x1705cdd4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x2A8), 0 */ /* 0x1705CD45: cmp dword ptr [esi + 0x2a8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1705C9DD; /* 0x1705CD4C: ja 0x1705c9dd */
L_1705CD52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705CD52: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x268), edx */ /* 0x1705CD54: cmp dword ptr [esi + 0x268], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x268)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edx; /* 0x1705CD5A: mov dword ptr [ebp + 8], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705CD96; /* 0x1705CD5D: jbe 0x1705cd96 */
L_1705CD5F:
    eax = MEM32(esi + 0x264); /* 0x1705CD5F: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705CD65: add eax, edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0xC); /* 0x1705CD67: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1705CD6A: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CD6D: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1705CD81; /* 0x1705CD6F: jmp 0x1705cd81 */
L_1705CD71:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x1705CD71: mov dword ptr [ebp - 4], 0x80004005 */
    goto L_1705CD96; /* 0x1705CD78: jmp 0x1705cd96 */
L_1705CD7A:
    ebx = MEM32(ebp + 0xC); /* 0x1705CD7A: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebx + ecx * 4) = ecx; /* 0x1705CD7D: mov dword ptr [ebx + ecx*4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705CD80: inc ecx */
    _flag_k = FK_INC;
L_1705CD81:
    /* cmp ecx, eax */ /* 0x1705CD81: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705CD7A; /* 0x1705CD83: jb 0x1705cd7a */
L_1705CD85:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1705CD85: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x1705CD88: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1705CD8B: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x268) */ /* 0x1705CD8E: cmp eax, dword ptr [esi + 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x268));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705CD5F; /* 0x1705CD94: jb 0x1705cd5f */
L_1705CD96:
    eax = esi + 0x254; /* 0x1705CD96: lea eax, [esi + 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705CD9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ebx */ /* 0x1705CD9E: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CDB0; /* 0x1705CDA0: je 0x1705cdb0 */
L_1705CDA2:
    MEM32(eax) = ebx; /* 0x1705CDA2: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x250); /* 0x1705CDA4: mov eax, dword ptr [esi + 0x250] */
    ecx = MEM32(eax); /* 0x1705CDAA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705CDAC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705CDAD: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1705CDB0:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1705CDB0: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705CDBE; /* 0x1705CDB3: jbe 0x1705cdbe */
L_1705CDB5:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705CDB5: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x1705CDB8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1705CDBA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1705CDBB: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
L_1705CDBE:
    PUSH32(esp, edi); /* 0x1705CDBE: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1705CDBF: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1705CDC4: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1705CDC7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1705CDC8: pop edi */
    esi = POP32_VAL(esp); /* 0x1705CDC9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705CDCA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705CDCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705CDCC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705CDD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705CDD4u);

L_1705CDD4:
    edi = edi; /* 0x1705CDD4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705CDD6: push ebp */
    ebp = esp; /* 0x1705CDD7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1705CDD9: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705CDDC: push ebx */
    PUSH32(esp, esi); /* 0x1705CDDD: push esi */
    esi = ecx; /* 0x1705CDDE: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705CDE0: push edi */
    eax = esi + 0x8; /* 0x1705CDE1: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1705CDE4: push eax */
    ecx = ebp + (-0x1C); /* 0x1705CDE5: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1704FE8A); /* 0x1705CDE8: call 0x1704fe8a */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1705CDED: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1705CDF0: push edi */
    ecx = esi; /* 0x1705CDF1: mov ecx, esi */
    RECOMP_CALL(sub_1705CFA8); /* 0x1705CDF3: call 0x1705cfa8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1705CDF8: push 1 */
    PUSH32(esp, MEM32(esi + 0x2CC)); /* 0x1705CDFA: push dword ptr [esi + 0x2cc] */
    ecx = ebp + (-0x1C); /* 0x1705CE00: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, MEM32(esi + 0x2E8)); /* 0x1705CE03: push dword ptr [esi + 0x2e8] */
    RECOMP_CALL(sub_17055F2F); /* 0x1705CE09: call 0x17055f2f */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705CE0E: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CEC9; /* 0x1705CE15: je 0x1705cec9 */
L_1705CE1B:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1705CE1B: movzx eax, word ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1705CE1F: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705CE23: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1705CECF; /* 0x1705CE24: je 0x1705cecf */
L_1705CE2A:
    ecx = ebp + (-0x1C); /* 0x1705CE2A: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_170565B5); /* 0x1705CE2D: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1705CE32: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705CE36: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CE3F; /* 0x1705CE38: je 0x1705ce3f */
L_1705CE3A:
    edx = MEM32(ebp + (-0x10)); /* 0x1705CE3A: mov edx, dword ptr [ebp - 0x10] */
    goto L_1705CE4A; /* 0x1705CE3D: jmp 0x1705ce4a */
L_1705CE3F:
    eax = MEM32(ebp + (-0x10)); /* 0x1705CE3F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, 3); /* 0x1705CE42: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705CE44: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705CE45: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1705CE47: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1705CE48: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1705CE4A:
    eax = edx + ecx * 2; /* 0x1705CE4A: lea eax, [edx + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CE4D: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x254); /* 0x1705CE4F: mov ecx, dword ptr [esi + 0x254] */
    eax = ecx + eax * 4; /* 0x1705CE55: lea eax, [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x1705CE58: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x2CC) */ /* 0x1705CE5A: cmp ecx, dword ptr [esi + 0x2cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x2CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705CE6A; /* 0x1705CE60: jne 0x1705ce6a */
L_1705CE62:
    ecx = MEM32(esi + 0x2D0); /* 0x1705CE62: mov ecx, dword ptr [esi + 0x2d0] */
    goto L_1705CE70; /* 0x1705CE68: jmp 0x1705ce70 */
L_1705CE6A:
    ecx = MEM32(esi + 0x2D8); /* 0x1705CE6A: mov ecx, dword ptr [esi + 0x2d8] */
L_1705CE70:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1705CE70: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x1705CE73: mov dword ptr [eax], ecx */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1705CE75: movzx eax, word ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705CE79: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1705CE7A: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705CE2A; /* 0x1705CE7D: jb 0x1705ce2a */
L_1705CE7F:
    goto L_1705CECF; /* 0x1705CE7F: jmp 0x1705cecf */
L_1705CE81:
    ecx = ebp + (-0x1C); /* 0x1705CE81: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_170565B5); /* 0x1705CE84: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1705CE89: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705CE8D: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CE96; /* 0x1705CE8F: je 0x1705ce96 */
L_1705CE91:
    edx = MEM32(ebp + (-0x10)); /* 0x1705CE91: mov edx, dword ptr [ebp - 0x10] */
    goto L_1705CEA1; /* 0x1705CE94: jmp 0x1705cea1 */
L_1705CE96:
    eax = MEM32(ebp + (-0x10)); /* 0x1705CE96: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, 3); /* 0x1705CE99: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705CE9B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705CE9C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705CE9E: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1705CE9F: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1705CEA1:
    eax = edx + ecx * 2; /* 0x1705CEA1: lea eax, [edx + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CEA4: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x254); /* 0x1705CEA6: mov ecx, dword ptr [esi + 0x254] */
    eax = ecx + eax * 4; /* 0x1705CEAC: lea eax, [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x1705CEAF: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x2CC) */ /* 0x1705CEB1: cmp ecx, dword ptr [esi + 0x2cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x2CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705CEC1; /* 0x1705CEB7: jne 0x1705cec1 */
L_1705CEB9:
    ecx = MEM32(esi + 0x2D0); /* 0x1705CEB9: mov ecx, dword ptr [esi + 0x2d0] */
    goto L_1705CEC7; /* 0x1705CEBF: jmp 0x1705cec7 */
L_1705CEC1:
    ecx = MEM32(esi + 0x2D8); /* 0x1705CEC1: mov ecx, dword ptr [esi + 0x2d8] */
L_1705CEC7:
    MEM32(eax) = ecx; /* 0x1705CEC7: mov dword ptr [eax], ecx */
L_1705CEC9:
    /* cmp MEM32(ebp + (-0x14)), 0xFFFFFFFFu */ /* 0x1705CEC9: cmp dword ptr [ebp - 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705CE81; /* 0x1705CECD: jne 0x1705ce81 */
L_1705CECF:
    edi = MEM32(esi + 0x2F4); /* 0x1705CECF: mov edi, dword ptr [esi + 0x2f4] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1705CED5: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CF00; /* 0x1705CED8: je 0x1705cf00 */
L_1705CEDA:
    ebx = MEM32(esi + 0x258); /* 0x1705CEDA: mov ebx, dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x2E8)); /* 0x1705CEE0: push dword ptr [esi + 0x2e8] */
    eax = edi + edi * 2; /* 0x1705CEE6: lea eax, [edi + edi*2] */
    eax = ebx + eax * 4; /* 0x1705CEE9: lea eax, [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CEEC: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CEED: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705CEF2: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CEF5: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x2F0); /* 0x1705CEF7: mov ecx, dword ptr [esi + 0x2f0] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705CEFD: mov dword ptr [ebx + eax*4], ecx */
L_1705CF00:
    edi = MEM32(esi + 0x2F0); /* 0x1705CF00: mov edi, dword ptr [esi + 0x2f0] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1705CF06: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CF31; /* 0x1705CF09: je 0x1705cf31 */
L_1705CF0B:
    ebx = MEM32(esi + 0x258); /* 0x1705CF0B: mov ebx, dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x2E8)); /* 0x1705CF11: push dword ptr [esi + 0x2e8] */
    eax = edi + edi * 2; /* 0x1705CF17: lea eax, [edi + edi*2] */
    eax = ebx + eax * 4; /* 0x1705CF1A: lea eax, [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CF1D: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CF1E: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705CF23: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CF26: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x2F4); /* 0x1705CF28: mov ecx, dword ptr [esi + 0x2f4] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705CF2E: mov dword ptr [ebx + eax*4], ecx */
L_1705CF31:
    /* cmp MEM8(esi + 0x2C4), 0 */ /* 0x1705CF31: cmp byte ptr [esi + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CF9C; /* 0x1705CF38: je 0x1705cf9c */
L_1705CF3A:
    edi = MEM32(esi + 0x2FC); /* 0x1705CF3A: mov edi, dword ptr [esi + 0x2fc] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1705CF40: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CF6B; /* 0x1705CF43: je 0x1705cf6b */
L_1705CF45:
    ebx = MEM32(esi + 0x258); /* 0x1705CF45: mov ebx, dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x2EC)); /* 0x1705CF4B: push dword ptr [esi + 0x2ec] */
    eax = edi + edi * 2; /* 0x1705CF51: lea eax, [edi + edi*2] */
    eax = ebx + eax * 4; /* 0x1705CF54: lea eax, [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CF57: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CF58: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705CF5D: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CF60: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x2F8); /* 0x1705CF62: mov ecx, dword ptr [esi + 0x2f8] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705CF68: mov dword ptr [ebx + eax*4], ecx */
L_1705CF6B:
    edi = MEM32(esi + 0x2F8); /* 0x1705CF6B: mov edi, dword ptr [esi + 0x2f8] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1705CF71: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705CF9C; /* 0x1705CF74: je 0x1705cf9c */
L_1705CF76:
    ebx = MEM32(esi + 0x258); /* 0x1705CF76: mov ebx, dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x2EC)); /* 0x1705CF7C: push dword ptr [esi + 0x2ec] */
    eax = edi + edi * 2; /* 0x1705CF82: lea eax, [edi + edi*2] */
    eax = ebx + eax * 4; /* 0x1705CF85: lea eax, [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x1705CF88: push eax */
    RECOMP_CALL(sub_170501FA); /* 0x1705CF89: call 0x170501fa */
    RECOMP_FLAGS_IN();
    ecx = edi + edi * 2; /* 0x1705CF8E: lea ecx, [edi + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705CF91: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x2FC); /* 0x1705CF93: mov ecx, dword ptr [esi + 0x2fc] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1705CF99: mov dword ptr [ebx + eax*4], ecx */
L_1705CF9C:
    edi = POP32_VAL(esp); /* 0x1705CF9C: pop edi */
    esi = POP32_VAL(esp); /* 0x1705CF9D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705CF9E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705CF9F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705CFA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705CFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705CFA8u);

L_1705CFA8:
    edi = edi; /* 0x1705CFA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705CFAA: push ebp */
    ebp = esp; /* 0x1705CFAB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1705CFAD: push ebx */
    PUSH32(esp, esi); /* 0x1705CFAE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705CFAF: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM16(esi + 0x4), 0 */ /* 0x1705CFB2: cmp word ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(ebx, MEM16(esi + 0x6)); /* 0x1705CFB7: mov bx, word ptr [esi + 6] */
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x1705CFBB: seta al */
    MEM8(ecx + 0x2C4) = (uint8_t)(LO8(eax)); /* 0x1705CFBE: mov byte ptr [ecx + 0x2c4], al */
    eax = (uint32_t)LO16(ebx); /* 0x1705CFC4: movzx eax, bx */
    edx = eax; /* 0x1705CFC7: mov edx, eax */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x1705CFC9: shr edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((edx >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 14u; /* 0x1705CFC9: shr edx, 0xe */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x1705CFCC: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x290)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x290) = MEM32(ecx + 0x290) - edx; /* 0x1705CFCF: sub dword ptr [ecx + 0x290], edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi); /* 0x1705CFD5: mov edx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1705CFD7: push edi */
    edi = ecx + 0x2F0; /* 0x1705CFD8: lea edi, [ecx + 0x2f0] */
    MEM32(edi) = edx; /* 0x1705CFDE: mov dword ptr [edi], edx */
    edi = MEM32(edi); /* 0x1705CFE0: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705CFE2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(esi + 0x6)); /* 0x1705CFE4: mov dl, byte ptr [esi + 6] */
    esi = edi + edi * 2; /* 0x1705CFE7: lea esi, [edi + edi*2] */
    edi = MEM32(ecx + 0x254); /* 0x1705CFEA: mov edi, dword ptr [ecx + 0x254] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1705CFF0: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x300) = edx; /* 0x1705CFF3: mov dword ptr [ecx + 0x300], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1705CFF9: add edx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edi + edx * 4); /* 0x1705CFFB: mov edx, dword ptr [edi + edx*4] */
    MEM32(ecx + 0x2C8) = edx; /* 0x1705CFFE: mov dword ptr [ecx + 0x2c8], edx */
    edx = MEM32(ecx + 0x300); /* 0x1705D004: mov edx, dword ptr [ecx + 0x300] */
    edx = MEM32(edx * 4 + 0x17005960); /* 0x1705D00A: mov edx, dword ptr [edx*4 + 0x17005960] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1705D011: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ecx + 0x258); /* 0x1705D013: mov esi, dword ptr [ecx + 0x258] */
    edx = MEM32(esi + edx * 4); /* 0x1705D019: mov edx, dword ptr [esi + edx*4] */
    esi = MEM32(ecx + 0x260); /* 0x1705D01C: mov esi, dword ptr [ecx + 0x260] */
    MEM32(ecx + 0x2E8) = edx; /* 0x1705D022: mov dword ptr [ecx + 0x2e8], edx */
    SET_LO16(edx, MEM16(esi + edx * 2)); /* 0x1705D028: mov dx, word ptr [esi + edx*2] */
    esi = MEM32(ecx + 0x264); /* 0x1705D02C: mov esi, dword ptr [ecx + 0x264] */
    MEM16(ecx + 0x2E4) = (uint16_t)(LO16(edx)); /* 0x1705D032: mov word ptr [ecx + 0x2e4], dx */
    edx = (uint32_t)LO16(edx); /* 0x1705D039: movzx edx, dx */
    edx = edx + edx * 4; /* 0x1705D03C: lea edx, [edx + edx*4] */
    edx = esi + edx * 4 + 0x8; /* 0x1705D03F: lea edx, [esi + edx*4 + 8] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1705D043: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x2E8); /* 0x1705D045: mov edx, dword ptr [ecx + 0x2e8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2B4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2B4) = MEM32(ecx + 0x2B4) - 1; /* 0x1705D04B: dec dword ptr [ecx + 0x2b4] */
    _flag_k = FK_DEC;
    /* cmp MEM8(ecx + 0x2C4), 0 */ /* 0x1705D051: cmp byte ptr [ecx + 0x2c4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x2C4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x258); /* 0x1705D058: mov esi, dword ptr [ecx + 0x258] */
    edx = edx + edx * 2; /* 0x1705D05E: lea edx, [edx + edx*2] */
    edx = MEM32(esi + edx * 4); /* 0x1705D061: mov edx, dword ptr [esi + edx*4] */
    MEM32(ecx + 0x2EC) = edx; /* 0x1705D064: mov dword ptr [ecx + 0x2ec], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D151; /* 0x1705D06A: je 0x1705d151 */
L_1705D070:
    esi = MEM32(ecx + 0x260); /* 0x1705D070: mov esi, dword ptr [ecx + 0x260] */
    SET_LO16(edx, MEM16(esi + edx * 2)); /* 0x1705D076: mov dx, word ptr [esi + edx*2] */
    esi = MEM32(ecx + 0x264); /* 0x1705D07A: mov esi, dword ptr [ecx + 0x264] */
    MEM16(ecx + 0x2E6) = (uint16_t)(LO16(edx)); /* 0x1705D080: mov word ptr [ecx + 0x2e6], dx */
    edx = (uint32_t)LO16(edx); /* 0x1705D087: movzx edx, dx */
    edx = edx + edx * 4; /* 0x1705D08A: lea edx, [edx + edx*4] */
    edx = esi + edx * 4 + 0x8; /* 0x1705D08D: lea edx, [esi + edx*4 + 8] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1705D091: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2B4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2B4) = MEM32(ecx + 0x2B4) - 1; /* 0x1705D093: dec dword ptr [ecx + 0x2b4] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x2EC); /* 0x1705D099: mov edx, dword ptr [ecx + 0x2ec] */
    edx = edx + edx * 2; /* 0x1705D09F: lea edx, [edx + edx*2] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x1705D0A2: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x1705D0A2: shr eax, 0xf */
    _flag_a = (uint32_t)(MEM32(ecx + 0x290)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x290) = MEM32(ecx + 0x290) - eax; /* 0x1705D0A5: sub dword ptr [ecx + 0x290], eax */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x258); /* 0x1705D0AB: mov eax, dword ptr [ecx + 0x258] */
    edx = MEM32(eax + edx * 4); /* 0x1705D0B1: mov edx, dword ptr [eax + edx*4] */
    MEM32(ecx + 0x2F8) = edx; /* 0x1705D0B4: mov dword ptr [ecx + 0x2f8], edx */
    edx = MEM32(ecx + 0x2EC); /* 0x1705D0BA: mov edx, dword ptr [ecx + 0x2ec] */
    edx = edx + edx * 2; /* 0x1705D0C0: lea edx, [edx + edx*2] */
    eax = MEM32(eax + edx * 4 + 0x4); /* 0x1705D0C3: mov eax, dword ptr [eax + edx*4 + 4] */
    edx = MEM32(ecx + 0x2EC); /* 0x1705D0C7: mov edx, dword ptr [ecx + 0x2ec] */
    edx = edx + edx * 2; /* 0x1705D0CD: lea edx, [edx + edx*2] */
    MEM32(ecx + 0x2FC) = eax; /* 0x1705D0D0: mov dword ptr [ecx + 0x2fc], eax */
    eax = MEM32(ecx + 0x254); /* 0x1705D0D6: mov eax, dword ptr [ecx + 0x254] */
    edx = MEM32(eax + edx * 4); /* 0x1705D0DC: mov edx, dword ptr [eax + edx*4] */
    MEM32(ecx + 0x2D8) = edx; /* 0x1705D0DF: mov dword ptr [ecx + 0x2d8], edx */
    edx = MEM32(ecx + 0x2EC); /* 0x1705D0E5: mov edx, dword ptr [ecx + 0x2ec] */
    edx = edx + edx * 2; /* 0x1705D0EB: lea edx, [edx + edx*2] */
    eax = MEM32(eax + edx * 4 + 0x8); /* 0x1705D0EE: mov eax, dword ptr [eax + edx*4 + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705D0F2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D0F4: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), 0x90u */ /* 0x1705D0F5: test bl, 0x90 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx + 0x2D4) = eax; /* 0x1705D0F8: mov dword ptr [ecx + 0x2d4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D10D; /* 0x1705D0FE: jne 0x1705d10d */
L_1705D100:
    /* test LO8(ebx), 0x40u */ /* 0x1705D100: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D10A; /* 0x1705D103: je 0x1705d10a */
L_1705D105:
    /* test LO8(ebx), 0x20u */ /* 0x1705D105: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D10D; /* 0x1705D108: jne 0x1705d10d */
L_1705D10A:
    PUSH32(esp, 2); /* 0x1705D10A: push 2 */
    edx = POP32_VAL(esp); /* 0x1705D10C: pop edx */
L_1705D10D:
    /* test HI8(ebx), 8 */ /* 0x1705D10D: test bh, 8 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D113; /* 0x1705D110: je 0x1705d113 */
L_1705D112:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D112: inc edx */
    _flag_k = FK_INC;
L_1705D113:
    eax = (uint32_t)MEM16(ecx + 0x2E4); /* 0x1705D113: movzx eax, word ptr [ecx + 0x2e4] */
    esi = MEM32(ecx + 0x264); /* 0x1705D11A: mov esi, dword ptr [ecx + 0x264] */
    eax = eax + eax * 4; /* 0x1705D120: lea eax, [eax + eax*4] */
    eax = esi + eax * 4 + 0x10; /* 0x1705D123: lea eax, [esi + eax*4 + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1705D127: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x2C0) = MEM32(ecx + 0x2C0) - edx; /* 0x1705D129: sub dword ptr [ecx + 0x2c0], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705D12F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(ebx), 2 */ /* 0x1705D131: test bh, 2 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D137; /* 0x1705D134: jne 0x1705d137 */
L_1705D136:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D136: inc edx */
    _flag_k = FK_INC;
L_1705D137:
    /* test LO8(ebx), 0x60u */ /* 0x1705D137: test bl, 0x60 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D142; /* 0x1705D13A: jne 0x1705d142 */
L_1705D13C:
    /* test HI8(ebx), 1 */ /* 0x1705D13C: test bh, 1 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D142; /* 0x1705D13F: jne 0x1705d142 */
L_1705D141:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D141: inc edx */
    _flag_k = FK_INC;
L_1705D142:
    /* test HI8(ebx), 0x20u */ /* 0x1705D142: test bh, 0x20 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D148; /* 0x1705D145: je 0x1705d148 */
L_1705D147:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D147: inc edx */
    _flag_k = FK_INC;
L_1705D148:
    eax = (uint32_t)MEM16(ecx + 0x2E6); /* 0x1705D148: movzx eax, word ptr [ecx + 0x2e6] */
    goto L_1705D169; /* 0x1705D14F: jmp 0x1705d169 */
L_1705D151:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705D151: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D153: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), 0x90u */ /* 0x1705D154: test bl, 0x90 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D15C; /* 0x1705D157: jne 0x1705d15c */
L_1705D159:
    PUSH32(esp, 2); /* 0x1705D159: push 2 */
    edx = POP32_VAL(esp); /* 0x1705D15B: pop edx */
L_1705D15C:
    /* test HI8(ebx), 8 */ /* 0x1705D15C: test bh, 8 */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D162; /* 0x1705D15F: je 0x1705d162 */
L_1705D161:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1705D161: inc edx */
    _flag_k = FK_INC;
L_1705D162:
    eax = (uint32_t)MEM16(ecx + 0x2E4); /* 0x1705D162: movzx eax, word ptr [ecx + 0x2e4] */
L_1705D169:
    esi = MEM32(ecx + 0x264); /* 0x1705D169: mov esi, dword ptr [ecx + 0x264] */
    eax = eax + eax * 4; /* 0x1705D16F: lea eax, [eax + eax*4] */
    eax = esi + eax * 4 + 0x10; /* 0x1705D172: lea eax, [esi + eax*4 + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1705D176: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x2C0) = MEM32(ecx + 0x2C0) - edx; /* 0x1705D178: sub dword ptr [ecx + 0x2c0], edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x2E8); /* 0x1705D17E: mov eax, dword ptr [ecx + 0x2e8] */
    edx = MEM32(ecx + 0x258); /* 0x1705D184: mov edx, dword ptr [ecx + 0x258] */
    eax = eax + eax * 2; /* 0x1705D18A: lea eax, [eax + eax*2] */
    eax = MEM32(edx + eax * 4 + 0x8); /* 0x1705D18D: mov eax, dword ptr [edx + eax*4 + 8] */
    edx = MEM32(ecx + 0x2E8); /* 0x1705D191: mov edx, dword ptr [ecx + 0x2e8] */
    MEM32(ecx + 0x2F4) = eax; /* 0x1705D197: mov dword ptr [ecx + 0x2f4], eax */
    eax = MEM32(ecx + 0x254); /* 0x1705D19D: mov eax, dword ptr [ecx + 0x254] */
    edx = edx + edx * 2; /* 0x1705D1A3: lea edx, [edx + edx*2] */
    edx = MEM32(eax + edx * 4); /* 0x1705D1A6: mov edx, dword ptr [eax + edx*4] */
    MEM32(ecx + 0x2D0) = edx; /* 0x1705D1A9: mov dword ptr [ecx + 0x2d0], edx */
    edx = MEM32(ecx + 0x2E8); /* 0x1705D1AF: mov edx, dword ptr [ecx + 0x2e8] */
    edi = POP32_VAL(esp); /* 0x1705D1B5: pop edi */
    edx = edx + edx * 2; /* 0x1705D1B6: lea edx, [edx + edx*2] */
    eax = MEM32(eax + edx * 4 + 0x4); /* 0x1705D1B9: mov eax, dword ptr [eax + edx*4 + 4] */
    esi = POP32_VAL(esp); /* 0x1705D1BD: pop esi */
    MEM32(ecx + 0x2CC) = eax; /* 0x1705D1BE: mov dword ptr [ecx + 0x2cc], eax */
    ebx = POP32_VAL(esp); /* 0x1705D1C4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1705D1C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D1C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D1CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D1CEu);

L_1705D1CE:
    edi = edi; /* 0x1705D1CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D1D0: push ebp */
    ebp = esp; /* 0x1705D1D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705D1D3: push esi */
    esi = ecx; /* 0x1705D1D4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705D1D6: push edi */
    edi = esi + 0x8; /* 0x1705D1D7: lea edi, [esi + 8] */
    ecx = edi; /* 0x1705D1DA: mov ecx, edi */
    MEM32(esi) = 0x17005C70u; /* 0x1705D1DC: mov dword ptr [esi], 0x17005c70 */
    MEM32(esi + 0x4) = 1; /* 0x1705D1E2: mov dword ptr [esi + 4], 1 */
    RECOMP_CALL(sub_1704AC26); /* 0x1705D1E9: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1705D1EE: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x1705D1F1: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1705D1F6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D1F7: push dword ptr [ebp + 0xc] */
    ecx = esi + 0xCC; /* 0x1705D1FA: lea ecx, [esi + 0xcc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705D200: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17059E91); /* 0x1705D203: call 0x17059e91 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D208: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x34C) = eax; /* 0x1705D20A: mov dword ptr [esi + 0x34c], eax */
    MEM32(esi + 0x354) = eax; /* 0x1705D210: mov dword ptr [esi + 0x354], eax */
    MEM32(esi + 0x358) = eax; /* 0x1705D216: mov dword ptr [esi + 0x358], eax */
    MEM32(esi + 0x35C) = eax; /* 0x1705D21C: mov dword ptr [esi + 0x35c], eax */
    MEM32(esi + 0x360) = eax; /* 0x1705D222: mov dword ptr [esi + 0x360], eax */
    MEM32(esi + 0x364) = eax; /* 0x1705D228: mov dword ptr [esi + 0x364], eax */
    MEM32(esi + 0x380) = eax; /* 0x1705D22E: mov dword ptr [esi + 0x380], eax */
    MEM32(esi + 0x388) = eax; /* 0x1705D234: mov dword ptr [esi + 0x388], eax */
    MEM32(esi + 0x390) = eax; /* 0x1705D23A: mov dword ptr [esi + 0x390], eax */
    MEM32(esi + 0x394) = eax; /* 0x1705D240: mov dword ptr [esi + 0x394], eax */
    MEM32(esi + 0x398) = eax; /* 0x1705D246: mov dword ptr [esi + 0x398], eax */
    MEM32(esi + 0x39C) = eax; /* 0x1705D24C: mov dword ptr [esi + 0x39c], eax */
    MEM32(esi + 0x3A0) = eax; /* 0x1705D252: mov dword ptr [esi + 0x3a0], eax */
    MEM32(esi + 0x3A4) = eax; /* 0x1705D258: mov dword ptr [esi + 0x3a4], eax */
    MEM32(esi + 0x3A8) = eax; /* 0x1705D25E: mov dword ptr [esi + 0x3a8], eax */
    MEM32(esi + 0x3AC) = eax; /* 0x1705D264: mov dword ptr [esi + 0x3ac], eax */
    MEM32(esi + 0x3B0) = eax; /* 0x1705D26A: mov dword ptr [esi + 0x3b0], eax */
    MEM32(esi + 0x3B4) = eax; /* 0x1705D270: mov dword ptr [esi + 0x3b4], eax */
    MEM32(esi + 0x3B8) = eax; /* 0x1705D276: mov dword ptr [esi + 0x3b8], eax */
    MEM32(esi + 0x3BC) = eax; /* 0x1705D27C: mov dword ptr [esi + 0x3bc], eax */
    MEM32(esi + 0x3C0) = eax; /* 0x1705D282: mov dword ptr [esi + 0x3c0], eax */
    MEM32(esi + 0x3C4) = eax; /* 0x1705D288: mov dword ptr [esi + 0x3c4], eax */
    MEM32(esi + 0x3C8) = eax; /* 0x1705D28E: mov dword ptr [esi + 0x3c8], eax */
    MEM32(esi + 0x3CC) = eax; /* 0x1705D294: mov dword ptr [esi + 0x3cc], eax */
    MEM32(esi + 0x448) = eax; /* 0x1705D29A: mov dword ptr [esi + 0x448], eax */
    MEM32(esi + 0x44C) = eax; /* 0x1705D2A0: mov dword ptr [esi + 0x44c], eax */
    MEM32(esi + 0x450) = eax; /* 0x1705D2A6: mov dword ptr [esi + 0x450], eax */
    MEM32(esi + 0x454) = eax; /* 0x1705D2AC: mov dword ptr [esi + 0x454], eax */
    MEM32(esi + 0x660) = eax; /* 0x1705D2B2: mov dword ptr [esi + 0x660], eax */
    MEM32(esi + 0x66C) = eax; /* 0x1705D2B8: mov dword ptr [esi + 0x66c], eax */
    MEM32(esi + 0x670) = eax; /* 0x1705D2BE: mov dword ptr [esi + 0x670], eax */
    eax = esi + 0xD8; /* 0x1705D2C4: lea eax, [esi + 0xd8] */
    PUSH32(esp, eax); /* 0x1705D2CA: push eax */
    ecx = edi; /* 0x1705D2CB: mov ecx, edi */
    RECOMP_CALL(sub_1703CC5E); /* 0x1705D2CD: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x2E4) | 0xFu)); _flag_b = (uint32_t)((MEM32(esi + 0x2E4) | 0xFu));
    MEM32(esi + 0x2E4) = MEM32(esi + 0x2E4) | 0xFu; /* 0x1705D2D2: or dword ptr [esi + 0x2e4], 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705D2D9: pop edi */
    MEM32(esi + 0x33C) = esi; /* 0x1705D2DA: mov dword ptr [esi + 0x33c], esi */
    eax = esi; /* 0x1705D2E0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705D2E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705D2E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705D2E4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705D2EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D2ECu);

L_1705D2EC:
    edi = edi; /* 0x1705D2EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D2EE: push ebp */
    ebp = esp; /* 0x1705D2EF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D2F1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D2F4: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCCu; /* 0x1705D2F7: add eax, 0xcc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705D2FC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D2FE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1705D2FF: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705D302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705D303: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705D30B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D30Bu);

L_1705D30B:
    edi = edi; /* 0x1705D30B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D30D: push ebp */
    ebp = esp; /* 0x1705D30E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D310: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D313: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCCu; /* 0x1705D316: add eax, 0xcc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705D31B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D31D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1705D31E: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705D321: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705D322: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705D32A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D32Au);

L_1705D32A:
    edi = edi; /* 0x1705D32A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D32C: push ebp */
    ebp = esp; /* 0x1705D32D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1705D32F: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705D332: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1705D335: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705D336: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1705D338: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705D33A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705D33B: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705D33E: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705D341: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705D344: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + 0x10) = eax; /* 0x1705D347: mov dword ptr [ebp + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D355; /* 0x1705D34A: jne 0x1705d355 */
L_1705D34C:
    eax = esi + 0xD8; /* 0x1705D34C: lea eax, [esi + 0xd8] */
    MEM32(ebp + 0x10) = eax; /* 0x1705D352: mov dword ptr [ebp + 0x10], eax */
L_1705D355:
    PUSH32(esp, ebx); /* 0x1705D355: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D356: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9F0); /* 0x1705D359: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D35E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D36C; /* 0x1705D360: jne 0x1705d36c */
L_1705D362:
    eax = 0x8876086Cu; /* 0x1705D362: mov eax, 0x8876086c */
    goto L_1705D4DA; /* 0x1705D367: jmp 0x1705d4da */
L_1705D36C:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x1705D36C: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D385; /* 0x1705D373: jne 0x1705d385 */
L_1705D375:
    /* test MEM8(ebp + 0xD), 0x10u */ /* 0x1705D375: test byte ptr [ebp + 0xd], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D385; /* 0x1705D379: jne 0x1705d385 */
L_1705D37B:
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1705D37B: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D385; /* 0x1705D37E: je 0x1705d385 */
L_1705D380:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1705D380: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D38F; /* 0x1705D383: jne 0x1705d38f */
L_1705D385:
    ebx = 0x8876086Cu; /* 0x1705D385: mov ebx, 0x8876086c */
    goto L_1705D4CF; /* 0x1705D38A: jmp 0x1705d4cf */
L_1705D38F:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1705D38F: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1705D392: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D3E5; /* 0x1705D393: je 0x1705d3e5 */
L_1705D395:
    eax = MEM32(esi + 0x330); /* 0x1705D395: mov eax, dword ptr [esi + 0x330] */
    eax = eax + eax * 2; /* 0x1705D39B: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705D39E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705D39E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705D3A1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705D3A2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705D3A7: mov edi, eax */
    /* test edi, edi */ /* 0x1705D3A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705D3AB: pop ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x1705D3AC: mov dword ptr [ebp - 0xc], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D3BB; /* 0x1705D3AF: jne 0x1705d3bb */
L_1705D3B1:
    ebx = 0x8007000Eu; /* 0x1705D3B1: mov ebx, 0x8007000e */
    goto L_1705D4AC; /* 0x1705D3B6: jmp 0x1705d4ac */
L_1705D3BB:
    eax = MEM32(esi + 0x330); /* 0x1705D3BB: mov eax, dword ptr [esi + 0x330] */
    ecx = MEM32(esi + 0x31C); /* 0x1705D3C1: mov ecx, dword ptr [esi + 0x31c] */
    eax = eax + eax * 2; /* 0x1705D3C7: lea eax, [eax + eax*2] */
    /* test eax, eax */ /* 0x1705D3CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D3E5; /* 0x1705D3CC: jbe 0x1705d3e5 */
L_1705D3CE:
    edx = MEM32(ecx); /* 0x1705D3CE: mov edx, dword ptr [ecx] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1705D3D0: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D3D9; /* 0x1705D3D3: je 0x1705d3d9 */
L_1705D3D5:
    MEM32(edi) = edx; /* 0x1705D3D5: mov dword ptr [edi], edx */
    goto L_1705D3DC; /* 0x1705D3D7: jmp 0x1705d3dc */
L_1705D3D9:
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1705D3D9: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D3DC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1705D3DC: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1705D3DF: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705D3E2: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705D3CE; /* 0x1705D3E3: jne 0x1705d3ce */
L_1705D3E5:
    edi = MEM32(ebp + 0x1C); /* 0x1705D3E5: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x1705D3E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D3EF; /* 0x1705D3EA: je 0x1705d3ef */
L_1705D3EC:
    ebx = ebp + (-0x8); /* 0x1705D3EC: lea ebx, [ebp - 8] */
L_1705D3EF:
    edx = ebp + (-0x4); /* 0x1705D3EF: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1705D3F2: push edx */
    PUSH32(esp, ebx); /* 0x1705D3F3: push ebx */
    PUSH32(esp, 0); /* 0x1705D3F4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705D3F6: push dword ptr [ebp + 0x18] */
    eax = esi + 0xCC; /* 0x1705D3F9: lea eax, [esi + 0xcc] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705D3FF: push dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x1705D402: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x03000000u); /* 0x1705D404: push 0x3000000 */
    PUSH32(esp, eax); /* 0x1705D409: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x1705D40A: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705D40D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1705D40F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D4AC; /* 0x1705D411: jl 0x1705d4ac */
L_1705D417:
    eax = MEM32(ebp + 0xC); /* 0x1705D417: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(esi + 0x2E0) */ /* 0x1705D41A: cmp eax, dword ptr [esi + 0x2e0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x2E0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D440; /* 0x1705D420: jne 0x1705d440 */
L_1705D422:
    eax = esi + 0xD8; /* 0x1705D422: lea eax, [esi + 0xd8] */
    PUSH32(esp, eax); /* 0x1705D428: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D429: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705D42C: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D431: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D440; /* 0x1705D433: je 0x1705d440 */
L_1705D435:
    eax = MEM32(esi + 0x2FC); /* 0x1705D435: mov eax, dword ptr [esi + 0x2fc] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1705D43B: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D471; /* 0x1705D43E: je 0x1705d471 */
L_1705D440:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D440: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1705D443: mov ecx, dword ptr [eax] */
    edx = ebp + 0x8; /* 0x1705D445: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1705D448: push edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705D449: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D44C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D44F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705D452: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705D453: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705D456: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1705D458: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D4AC; /* 0x1705D45A: jl 0x1705d4ac */
L_1705D45C:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D45C: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705D45F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D469; /* 0x1705D461: je 0x1705d469 */
L_1705D463:
    ecx = MEM32(eax); /* 0x1705D463: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D465: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D466: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705D469:
    eax = MEM32(ebp + 0x8); /* 0x1705D469: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705D46C: mov dword ptr [ebp - 4], eax */
    goto L_1705D474; /* 0x1705D46F: jmp 0x1705d474 */
L_1705D471:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D471: mov eax, dword ptr [ebp - 4] */
L_1705D474:
    /* test edi, edi */ /* 0x1705D474: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D4A3; /* 0x1705D476: je 0x1705d4a3 */
L_1705D478:
    ecx = MEM32(eax); /* 0x1705D478: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D47A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1705D47B: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705D47E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705D47E: shl eax, 2 */
    MEM32(ebp + 0xC) = eax; /* 0x1705D481: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1705D484: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1705D487: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D489: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1705D48A: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705D48D: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x1705D48F: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705D492: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705D494: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705D494: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705D497: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705D499: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1705D49B: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705D49E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705D4A1: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1705D4A3:
    ecx = MEM32(ebp + 0x20); /* 0x1705D4A3: mov ecx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705D4A6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1705D4AA: mov dword ptr [ecx], eax */
L_1705D4AC:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D4AC: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705D4AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705D4B1: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D4BE; /* 0x1705D4B2: je 0x1705d4be */
L_1705D4B4:
    ecx = MEM32(eax); /* 0x1705D4B4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D4B6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D4B7: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705D4BA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D4BE:
    eax = MEM32(ebp + (-0x8)); /* 0x1705D4BE: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1705D4C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D4CF; /* 0x1705D4C3: je 0x1705d4cf */
L_1705D4C5:
    ecx = MEM32(eax); /* 0x1705D4C5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D4C7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D4C8: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1705D4CB: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D4CF:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705D4CF: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1705D4D2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705D4D7: pop ecx */
    eax = ebx; /* 0x1705D4D8: mov eax, ebx */
L_1705D4DA:
    esi = POP32_VAL(esp); /* 0x1705D4DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705D4DB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705D4DC: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1705D4DD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1705D4E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D4E5u);

L_1705D4E5:
    edi = edi; /* 0x1705D4E5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D4E7: push ebp */
    ebp = esp; /* 0x1705D4E8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D4EA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x380); /* 0x1705D4ED: mov eax, dword ptr [eax + 0x380] */
    ebp = POP32_VAL(esp); /* 0x1705D4F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D4F4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D4FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D4FCu);

L_1705D4FC:
    edi = edi; /* 0x1705D4FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D4FE: push ebp */
    ebp = esp; /* 0x1705D4FF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D501: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x384); /* 0x1705D504: mov eax, dword ptr [eax + 0x384] */
    ebp = POP32_VAL(esp); /* 0x1705D50A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D50B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D513(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D513u);

L_1705D513:
    edi = edi; /* 0x1705D513: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D515: push ebp */
    ebp = esp; /* 0x1705D516: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1705D518: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1705D519: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1705D51C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D527; /* 0x1705D51E: jne 0x1705d527 */
L_1705D520:
    eax = 0x8876086Cu; /* 0x1705D520: mov eax, 0x8876086c */
    goto L_1705D54B; /* 0x1705D525: jmp 0x1705d54b */
L_1705D527:
    eax = MEM32(ebp + 0x8); /* 0x1705D527: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x450); /* 0x1705D52A: mov ecx, dword ptr [eax + 0x450] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1705D530: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1705D530: shl ecx, 2 */
    PUSH32(esp, esi); /* 0x1705D533: push esi */
    esi = MEM32(eax + 0x44C); /* 0x1705D534: mov esi, dword ptr [eax + 0x44c] */
    eax = ecx; /* 0x1705D53A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705D53C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705D53C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705D53F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705D541: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705D543: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705D546: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D548: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1705D54A: pop esi */
L_1705D54B:
    edi = POP32_VAL(esp); /* 0x1705D54B: pop edi */
    ebp = POP32_VAL(esp); /* 0x1705D54C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705D54D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705D555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D555u);

L_1705D555:
    edi = edi; /* 0x1705D555: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D557: push ebp */
    ebp = esp; /* 0x1705D558: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1705D55A: push esi */
    esi = ecx; /* 0x1705D55B: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1705D55D: push edi */
    edi = esi + 0x8; /* 0x1705D55E: lea edi, [esi + 8] */
    ecx = edi; /* 0x1705D561: mov ecx, edi */
    MEM32(esi) = 0x17005CC0u; /* 0x1705D563: mov dword ptr [esi], 0x17005cc0 */
    MEM32(esi + 0x4) = 1; /* 0x1705D569: mov dword ptr [esi + 4], 1 */
    RECOMP_CALL(sub_1704AC26); /* 0x1705D570: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1705D575: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x1705D578: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1705D57D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D57E: push dword ptr [ebp + 0xc] */
    ecx = esi + 0xCC; /* 0x1705D581: lea ecx, [esi + 0xcc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1705D587: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17059980); /* 0x1705D58A: call 0x17059980 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D58F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x34C) = eax; /* 0x1705D591: mov dword ptr [esi + 0x34c], eax */
    MEM32(esi + 0x354) = eax; /* 0x1705D597: mov dword ptr [esi + 0x354], eax */
    MEM32(esi + 0x358) = eax; /* 0x1705D59D: mov dword ptr [esi + 0x358], eax */
    MEM32(esi + 0x35C) = eax; /* 0x1705D5A3: mov dword ptr [esi + 0x35c], eax */
    MEM32(esi + 0x360) = eax; /* 0x1705D5A9: mov dword ptr [esi + 0x360], eax */
    MEM32(esi + 0x364) = eax; /* 0x1705D5AF: mov dword ptr [esi + 0x364], eax */
    MEM32(esi + 0x380) = eax; /* 0x1705D5B5: mov dword ptr [esi + 0x380], eax */
    MEM32(esi + 0x388) = eax; /* 0x1705D5BB: mov dword ptr [esi + 0x388], eax */
    MEM32(esi + 0x390) = eax; /* 0x1705D5C1: mov dword ptr [esi + 0x390], eax */
    MEM32(esi + 0x394) = eax; /* 0x1705D5C7: mov dword ptr [esi + 0x394], eax */
    MEM32(esi + 0x398) = eax; /* 0x1705D5CD: mov dword ptr [esi + 0x398], eax */
    MEM32(esi + 0x39C) = eax; /* 0x1705D5D3: mov dword ptr [esi + 0x39c], eax */
    MEM32(esi + 0x3A0) = eax; /* 0x1705D5D9: mov dword ptr [esi + 0x3a0], eax */
    MEM32(esi + 0x3A4) = eax; /* 0x1705D5DF: mov dword ptr [esi + 0x3a4], eax */
    MEM32(esi + 0x3A8) = eax; /* 0x1705D5E5: mov dword ptr [esi + 0x3a8], eax */
    MEM32(esi + 0x3AC) = eax; /* 0x1705D5EB: mov dword ptr [esi + 0x3ac], eax */
    MEM32(esi + 0x3B0) = eax; /* 0x1705D5F1: mov dword ptr [esi + 0x3b0], eax */
    MEM32(esi + 0x3B4) = eax; /* 0x1705D5F7: mov dword ptr [esi + 0x3b4], eax */
    MEM32(esi + 0x3B8) = eax; /* 0x1705D5FD: mov dword ptr [esi + 0x3b8], eax */
    MEM32(esi + 0x3BC) = eax; /* 0x1705D603: mov dword ptr [esi + 0x3bc], eax */
    MEM32(esi + 0x3C0) = eax; /* 0x1705D609: mov dword ptr [esi + 0x3c0], eax */
    MEM32(esi + 0x3C4) = eax; /* 0x1705D60F: mov dword ptr [esi + 0x3c4], eax */
    MEM32(esi + 0x3C8) = eax; /* 0x1705D615: mov dword ptr [esi + 0x3c8], eax */
    MEM32(esi + 0x3CC) = eax; /* 0x1705D61B: mov dword ptr [esi + 0x3cc], eax */
    MEM32(esi + 0x448) = eax; /* 0x1705D621: mov dword ptr [esi + 0x448], eax */
    MEM32(esi + 0x44C) = eax; /* 0x1705D627: mov dword ptr [esi + 0x44c], eax */
    MEM32(esi + 0x450) = eax; /* 0x1705D62D: mov dword ptr [esi + 0x450], eax */
    MEM32(esi + 0x454) = eax; /* 0x1705D633: mov dword ptr [esi + 0x454], eax */
    MEM32(esi + 0x660) = eax; /* 0x1705D639: mov dword ptr [esi + 0x660], eax */
    MEM32(esi + 0x66C) = eax; /* 0x1705D63F: mov dword ptr [esi + 0x66c], eax */
    MEM32(esi + 0x670) = eax; /* 0x1705D645: mov dword ptr [esi + 0x670], eax */
    eax = esi + 0xD8; /* 0x1705D64B: lea eax, [esi + 0xd8] */
    PUSH32(esp, eax); /* 0x1705D651: push eax */
    ecx = edi; /* 0x1705D652: mov ecx, edi */
    RECOMP_CALL(sub_1703CC5E); /* 0x1705D654: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x2E4) | 0xFu)); _flag_b = (uint32_t)((MEM32(esi + 0x2E4) | 0xFu));
    MEM32(esi + 0x2E4) = MEM32(esi + 0x2E4) | 0xFu; /* 0x1705D659: or dword ptr [esi + 0x2e4], 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705D660: pop edi */
    MEM32(esi + 0x33C) = esi; /* 0x1705D661: mov dword ptr [esi + 0x33c], esi */
    eax = esi; /* 0x1705D667: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1705D669: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705D66A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705D66B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705D673(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D673u);

L_1705D673:
    edi = edi; /* 0x1705D673: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D675: push ebp */
    ebp = esp; /* 0x1705D676: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D678: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCCu; /* 0x1705D67B: add eax, 0xcc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705D680: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D682: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1705D683: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705D686: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D687: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D68F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D68Fu);

L_1705D68F:
    edi = edi; /* 0x1705D68F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D691: push ebp */
    ebp = esp; /* 0x1705D692: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D694: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCCu; /* 0x1705D697: add eax, 0xcc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1705D69C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D69E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1705D69F: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1705D6A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D6A3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D6AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D6ABu);

L_1705D6AB:
    edi = edi; /* 0x1705D6AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D6AD: push ebp */
    ebp = esp; /* 0x1705D6AE: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1705D6B0: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1705D6B3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1705D6B6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1705D6B7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1705D6BA: push edi */
    PUSH32(esp, 4); /* 0x1705D6BB: push 4 */
    ecx = POP32_VAL(esp); /* 0x1705D6BD: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1705D6BE: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705D6C3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1705D6C5: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1705D6DA; /* 0x1705D6C7: je 0x1705d6da */
L_1705D6C9:
    esi = MEM32(ebp + 0xC); /* 0x1705D6C9: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1705D6CC: push 4 */
    ecx = POP32_VAL(esp); /* 0x1705D6CE: pop ecx */
    edi = 0x17001BA0u; /* 0x1705D6CF: mov edi, 0x17001ba0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705D6D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1705D6D6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1705D6E9; /* 0x1705D6D8: jne 0x1705d6e9 */
L_1705D6DA:
    ecx = MEM32(ebp + 0x8); /* 0x1705D6DA: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1705D6DD: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1705D6DF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1705D6E1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1705D6E2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D6E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705D6EE; /* 0x1705D6E7: jmp 0x1705d6ee */
L_1705D6E9:
    eax = 0x80004002u; /* 0x1705D6E9: mov eax, 0x80004002 */
L_1705D6EE:
    edi = POP32_VAL(esp); /* 0x1705D6EE: pop edi */
    esi = POP32_VAL(esp); /* 0x1705D6EF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1705D6F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1705D6F1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1705D6F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D6F9u);

L_1705D6F9:
    edi = edi; /* 0x1705D6F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D6FB: push ebp */
    ebp = esp; /* 0x1705D6FC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D6FE: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x36C); /* 0x1705D701: mov eax, dword ptr [eax + 0x36c] */
    ebp = POP32_VAL(esp); /* 0x1705D707: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D708: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D710u);

L_1705D710:
    edi = edi; /* 0x1705D710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D712: push ebp */
    ebp = esp; /* 0x1705D713: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1705D715: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x370); /* 0x1705D718: mov eax, dword ptr [eax + 0x370] */
    ebp = POP32_VAL(esp); /* 0x1705D71E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1705D71F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1705D727(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D727u);

L_1705D727:
    edi = edi; /* 0x1705D727: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D729: push ebp */
    ebp = esp; /* 0x1705D72A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1705D72C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705D72F: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1705D732: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705D733: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1705D735: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1705D737: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705D738: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1705D73B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1705D73E: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1705D741: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1705D744: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + 0x10) = eax; /* 0x1705D747: mov dword ptr [ebp + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D755; /* 0x1705D74A: jne 0x1705d755 */
L_1705D74C:
    eax = esi + 0xD8; /* 0x1705D74C: lea eax, [esi + 0xd8] */
    MEM32(ebp + 0x10) = eax; /* 0x1705D752: mov dword ptr [ebp + 0x10], eax */
L_1705D755:
    PUSH32(esp, ebx); /* 0x1705D755: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D756: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9F0); /* 0x1705D759: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D75E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D76C; /* 0x1705D760: jne 0x1705d76c */
L_1705D762:
    eax = 0x8876086Cu; /* 0x1705D762: mov eax, 0x8876086c */
    goto L_1705D8E5; /* 0x1705D767: jmp 0x1705d8e5 */
L_1705D76C:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x1705D76C: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D785; /* 0x1705D773: jne 0x1705d785 */
L_1705D775:
    /* test MEM8(ebp + 0xD), 0x10u */ /* 0x1705D775: test byte ptr [ebp + 0xd], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xD)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D785; /* 0x1705D779: jne 0x1705d785 */
L_1705D77B:
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1705D77B: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D785; /* 0x1705D77E: je 0x1705d785 */
L_1705D780:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1705D780: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D78F; /* 0x1705D783: jne 0x1705d78f */
L_1705D785:
    ebx = 0x8876086Cu; /* 0x1705D785: mov ebx, 0x8876086c */
    goto L_1705D8DA; /* 0x1705D78A: jmp 0x1705d8da */
L_1705D78F:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1705D78F: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1705D792: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D7EC; /* 0x1705D793: je 0x1705d7ec */
L_1705D795:
    eax = MEM32(esi + 0x330); /* 0x1705D795: mov eax, dword ptr [esi + 0x330] */
    eax = eax + eax * 2; /* 0x1705D79B: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705D79E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705D79E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705D7A1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705D7A2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1705D7A7: mov edx, eax */
    /* cmp edx, ebx */ /* 0x1705D7A9: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705D7AB: pop ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x1705D7AC: mov dword ptr [ebp - 0xc], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D7BB; /* 0x1705D7AF: jne 0x1705d7bb */
L_1705D7B1:
    ebx = 0x8007000Eu; /* 0x1705D7B1: mov ebx, 0x8007000e */
    goto L_1705D8B7; /* 0x1705D7B6: jmp 0x1705d8b7 */
L_1705D7BB:
    eax = MEM32(esi + 0x330); /* 0x1705D7BB: mov eax, dword ptr [esi + 0x330] */
    ecx = MEM32(esi + 0x31C); /* 0x1705D7C1: mov ecx, dword ptr [esi + 0x31c] */
    eax = eax + eax * 2; /* 0x1705D7C7: lea eax, [eax + eax*2] */
    /* cmp eax, ebx */ /* 0x1705D7CA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705D7EC; /* 0x1705D7CC: jbe 0x1705d7ec */
L_1705D7CE:
    SET_LO16(edi, MEM16(ecx)); /* 0x1705D7CE: mov di, word ptr [ecx] */
    /* cmp LO16(edi), 0xFFFFu */ /* 0x1705D7D1: cmp di, 0xffff */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D7DF; /* 0x1705D7D6: je 0x1705d7df */
L_1705D7D8:
    edi = (uint32_t)LO16(edi); /* 0x1705D7D8: movzx edi, di */
    MEM32(edx) = edi; /* 0x1705D7DB: mov dword ptr [edx], edi */
    goto L_1705D7E2; /* 0x1705D7DD: jmp 0x1705d7e2 */
L_1705D7DF:
    _flag_a = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu));
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu; /* 0x1705D7DF: or dword ptr [edx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D7E2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1705D7E2: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705D7E5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705D7E6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705D7E7: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1705D7CE; /* 0x1705D7E8: jne 0x1705d7ce */
L_1705D7EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1705D7EA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D7EC:
    edi = MEM32(ebp + 0x1C); /* 0x1705D7EC: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edi, ebx */ /* 0x1705D7EF: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D7F9; /* 0x1705D7F1: je 0x1705d7f9 */
L_1705D7F3:
    eax = ebp + (-0x8); /* 0x1705D7F3: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705D7F6: mov dword ptr [ebp - 0x10], eax */
L_1705D7F9:
    edx = ebp + (-0x4); /* 0x1705D7F9: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1705D7FC: push edx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705D7FD: push dword ptr [ebp - 0x10] */
    eax = esi + 0xCC; /* 0x1705D800: lea eax, [esi + 0xcc] */
    ecx = MEM32(eax); /* 0x1705D806: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1705D808: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705D809: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705D80C: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x03000000u); /* 0x1705D80F: push 0x3000000 */
    PUSH32(esp, eax); /* 0x1705D814: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x1705D815: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705D818: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1705D81A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D8B7; /* 0x1705D81C: jl 0x1705d8b7 */
L_1705D822:
    eax = MEM32(ebp + 0xC); /* 0x1705D822: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(esi + 0x2E0) */ /* 0x1705D825: cmp eax, dword ptr [esi + 0x2e0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x2E0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705D84B; /* 0x1705D82B: jne 0x1705d84b */
L_1705D82D:
    eax = esi + 0xD8; /* 0x1705D82D: lea eax, [esi + 0xd8] */
    PUSH32(esp, eax); /* 0x1705D833: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D834: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704EB9F); /* 0x1705D837: call 0x1704eb9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D83C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D84B; /* 0x1705D83E: je 0x1705d84b */
L_1705D840:
    eax = MEM32(esi + 0x2FC); /* 0x1705D840: mov eax, dword ptr [esi + 0x2fc] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1705D846: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D87C; /* 0x1705D849: je 0x1705d87c */
L_1705D84B:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D84B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1705D84E: mov ecx, dword ptr [eax] */
    edx = ebp + 0x8; /* 0x1705D850: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1705D853: push edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705D854: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1705D857: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D85A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705D85D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705D85E: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1705D861: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1705D863: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D8B7; /* 0x1705D865: jl 0x1705d8b7 */
L_1705D867:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D867: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705D86A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D874; /* 0x1705D86C: je 0x1705d874 */
L_1705D86E:
    ecx = MEM32(eax); /* 0x1705D86E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D870: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D871: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1705D874:
    eax = MEM32(ebp + 0x8); /* 0x1705D874: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705D877: mov dword ptr [ebp - 4], eax */
    goto L_1705D87F; /* 0x1705D87A: jmp 0x1705d87f */
L_1705D87C:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D87C: mov eax, dword ptr [ebp - 4] */
L_1705D87F:
    /* test edi, edi */ /* 0x1705D87F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D8AE; /* 0x1705D881: je 0x1705d8ae */
L_1705D883:
    ecx = MEM32(eax); /* 0x1705D883: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D885: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1705D886: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705D889: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705D889: shl eax, 2 */
    MEM32(ebp + 0xC) = eax; /* 0x1705D88C: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1705D88F: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1705D892: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D894: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1705D895: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705D898: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x1705D89A: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1705D89D: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705D89F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705D89F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705D8A2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705D8A4: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1705D8A6: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705D8A9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705D8AC: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1705D8AE:
    ecx = MEM32(ebp + 0x20); /* 0x1705D8AE: mov ecx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705D8B1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1705D8B5: mov dword ptr [ecx], eax */
L_1705D8B7:
    eax = MEM32(ebp + (-0x4)); /* 0x1705D8B7: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1705D8BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705D8BC: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D8C9; /* 0x1705D8BD: je 0x1705d8c9 */
L_1705D8BF:
    ecx = MEM32(eax); /* 0x1705D8BF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D8C1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D8C2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1705D8C5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D8C9:
    eax = MEM32(ebp + (-0x8)); /* 0x1705D8C9: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1705D8CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D8DA; /* 0x1705D8CE: je 0x1705d8da */
L_1705D8D0:
    ecx = MEM32(eax); /* 0x1705D8D0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705D8D2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1705D8D3: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1705D8D6: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705D8DA:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705D8DA: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1705D8DD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705D8E2: pop ecx */
    eax = ebx; /* 0x1705D8E3: mov eax, ebx */
L_1705D8E5:
    esi = POP32_VAL(esp); /* 0x1705D8E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705D8E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705D8E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1705D8E8: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1705D8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D8F0u);

L_1705D8F0:
    edi = edi; /* 0x1705D8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D8F2: push ebp */
    ebp = esp; /* 0x1705D8F3: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1705D8F5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1705D8F6: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1705D8F9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D904; /* 0x1705D8FB: jne 0x1705d904 */
L_1705D8FD:
    eax = 0x8876086Cu; /* 0x1705D8FD: mov eax, 0x8876086c */
    goto L_1705D916; /* 0x1705D902: jmp 0x1705d916 */
L_1705D904:
    PUSH32(esp, esi); /* 0x1705D904: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1705D905: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFu); /* 0x1705D908: push 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40Cu; /* 0x1705D90A: add esi, 0x40c */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1705D910: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705D911: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D913: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1705D915: pop esi */
L_1705D916:
    edi = POP32_VAL(esp); /* 0x1705D916: pop edi */
    ebp = POP32_VAL(esp); /* 0x1705D917: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1705D918: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705D920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D920u);

L_1705D920:
    edi = edi; /* 0x1705D920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D922: push ebp */
    ebp = esp; /* 0x1705D923: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x1705D925: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705D92B: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1705D92E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1705D930: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x1705D936: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D975; /* 0x1705D939: je 0x1705d975 */
L_1705D93B:
    /* test eax, eax */ /* 0x1705D93B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D975; /* 0x1705D93D: je 0x1705d975 */
L_1705D93F:
    /* test LO8(eax), 1 */ /* 0x1705D93F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D975; /* 0x1705D941: jne 0x1705d975 */
L_1705D943:
    ecx = ebp + (-0x208); /* 0x1705D943: lea ecx, [ebp - 0x208] */
    PUSH32(esp, ecx); /* 0x1705D949: push ecx */
    PUSH32(esp, eax); /* 0x1705D94A: push eax */
    RECOMP_CALL(sub_170533BA); /* 0x1705D94B: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D950: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D97A; /* 0x1705D952: jl 0x1705d97a */
L_1705D954:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1705D954: push dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x8); /* 0x1705D957: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1705D95A: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1705D95D: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705D95F: push dword ptr [ebp + 0x18] */
    edx = ebp + (-0x208); /* 0x1705D962: lea edx, [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705D968: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1705D96B: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D96C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705D96F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1705D970: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_1705D97A; /* 0x1705D973: jmp 0x1705d97a */
L_1705D975:
    eax = 0x8876086Cu; /* 0x1705D975: mov eax, 0x8876086c */
L_1705D97A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705D97A: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1705D97B: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1705D983(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D983u);

L_1705D983:
    edi = edi; /* 0x1705D983: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D985: push ebp */
    ebp = esp; /* 0x1705D986: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x1705D988: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1705D98E: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1705D991: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1705D993: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x1705D999: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705D9D8; /* 0x1705D99C: je 0x1705d9d8 */
L_1705D99E:
    /* test eax, eax */ /* 0x1705D99E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705D9D8; /* 0x1705D9A0: je 0x1705d9d8 */
L_1705D9A2:
    /* test LO8(eax), 1 */ /* 0x1705D9A2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705D9D8; /* 0x1705D9A4: jne 0x1705d9d8 */
L_1705D9A6:
    ecx = ebp + (-0x208); /* 0x1705D9A6: lea ecx, [ebp - 0x208] */
    PUSH32(esp, ecx); /* 0x1705D9AC: push ecx */
    PUSH32(esp, eax); /* 0x1705D9AD: push eax */
    RECOMP_CALL(sub_170533BA); /* 0x1705D9AE: call 0x170533ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705D9B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705D9DD; /* 0x1705D9B5: jl 0x1705d9dd */
L_1705D9B7:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1705D9B7: push dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x8); /* 0x1705D9BA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1705D9BD: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1705D9C0: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1705D9C2: push dword ptr [ebp + 0x18] */
    edx = ebp + (-0x208); /* 0x1705D9C5: lea edx, [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1705D9CB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1705D9CE: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1705D9CF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1705D9D2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705D9D3: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    goto L_1705D9DD; /* 0x1705D9D6: jmp 0x1705d9dd */
L_1705D9D8:
    eax = 0x8876086Cu; /* 0x1705D9D8: mov eax, 0x8876086c */
L_1705D9DD:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705D9DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1705D9DE: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1705D9E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705D9E6u);

L_1705D9E6:
    edi = edi; /* 0x1705D9E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705D9E8: push ebp */
    ebp = esp; /* 0x1705D9E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x1705D9EB: sub esp, 0x68 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705D9EE: push ebx */
    PUSH32(esp, esi); /* 0x1705D9EF: push esi */
    ebx = ecx; /* 0x1705D9F0: mov ebx, ecx */
    esi = MEM32(ebx + 0x330); /* 0x1705D9F2: mov esi, dword ptr [ebx + 0x330] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705D9F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1705D9FA: push edi */
    PUSH32(esp, MEM32(ebx + 0xC8)); /* 0x1705D9FB: push dword ptr [ebx + 0xc8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705DA01: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x48)) = esi; /* 0x1705DA04: mov dword ptr [ebp - 0x48], esi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1705DA07: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1705DA0A: mov dword ptr [ebp - 0x4c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705DA0D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = eax; /* 0x1705DA12: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebx + 0x308); /* 0x1705DA15: mov eax, dword ptr [ebx + 0x308] */
    PUSH32(esp, eax); /* 0x1705DA1B: push eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x1705DA1C: mov dword ptr [ebp - 0x44], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705DA1F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705DA24: mov edi, eax */
    /* test edi, edi */ /* 0x1705DA26: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705DA28: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705DA29: pop ecx */
    MEM32(ebx + 0x364) = edi; /* 0x1705DA2A: mov dword ptr [ebx + 0x364], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705DFCA; /* 0x1705DA30: je 0x1705dfca */
L_1705DA36:
    ecx = MEM32(ebx + 0x308); /* 0x1705DA36: mov ecx, dword ptr [ebx + 0x308] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1705DA3C: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x1705DA40: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705DA42: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705DA42: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705DA45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705DA47: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705DA49: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705DA4B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1705DA4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705DA50: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705DBAD; /* 0x1705DA52: jbe 0x1705dbad */
L_1705DA58:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1705DA58: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705DA5C:
    eax = MEM32(ebx + 0x318); /* 0x1705DA5C: mov eax, dword ptr [ebx + 0x318] */
    ecx = MEM32(ebp + (-0x34)); /* 0x1705DA62: mov ecx, dword ptr [ebp - 0x34] */
    /* cmp MEM32(ecx + eax), 0xFFFFFFFFu */ /* 0x1705DA65: cmp dword ptr [ecx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DB9A; /* 0x1705DA69: je 0x1705db9a */
L_1705DA6F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1705DA6F: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1705DA73: mov eax, ecx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1705DA75: mov dword ptr [ebp - 0x3c], eax */
L_1705DA78:
    eax = MEM32(ebx + 0x318); /* 0x1705DA78: mov eax, dword ptr [ebx + 0x318] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1705DA7E: mov ecx, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ecx + eax); /* 0x1705DA81: mov ecx, dword ptr [ecx + eax] */
    eax = MEM32(ebx + 0x310); /* 0x1705DA84: mov eax, dword ptr [ebx + 0x310] */
    eax = MEM32(eax + ecx * 4); /* 0x1705DA8A: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, ecx */ /* 0x1705DA8D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebx + 0x320); /* 0x1705DA8F: mov esi, dword ptr [ebx + 0x320] */
    edx = MEM32(ebp + (-0xC)); /* 0x1705DA95: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(esi + edx * 4); /* 0x1705DA98: mov esi, dword ptr [esi + edx*4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1705DA9B: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x1705DA9E: mov dword ptr [ebp - 0x14], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DB89; /* 0x1705DAA1: jne 0x1705db89 */
L_1705DAA7:
    esi = MEM32(ebx + 0x364); /* 0x1705DAA7: mov esi, dword ptr [ebx + 0x364] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1705DAAD: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1705DAAF: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DB89; /* 0x1705DAB2: jne 0x1705db89 */
L_1705DAB8:
    PUSH32(esp, 0); /* 0x1705DAB8: push 0 */
    MEM8(eax) = (uint8_t)(1); /* 0x1705DABA: mov byte ptr [eax], 1 */
    eax = ebx + 0xCC; /* 0x1705DABD: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x1705DAC3: push eax */
    PUSH32(esp, ecx); /* 0x1705DAC4: push ecx */
    PUSH32(esp, edx); /* 0x1705DAC5: push edx */
    ecx = ebp + (-0x68); /* 0x1705DAC6: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17050C3A); /* 0x1705DAC9: call 0x17050c3a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x68); /* 0x1705DACE: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17051CC0); /* 0x1705DAD1: call 0x17051cc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705DAD6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705DB38; /* 0x1705DAD8: jne 0x1705db38 */
L_1705DADA:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DADA: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DB19; /* 0x1705DADE: je 0x1705db19 */
L_1705DAE0:
    esi = MEM32(ebx + 0x320); /* 0x1705DAE0: mov esi, dword ptr [ebx + 0x320] */
L_1705DAE6:
    ecx = ebp + (-0x68); /* 0x1705DAE6: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DAE9: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705DAEE: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705DAF2: mov ecx, eax */
    eax = MEM32(ebp + (-0x5C)); /* 0x1705DAF4: mov eax, dword ptr [ebp - 0x5c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DAFE; /* 0x1705DAF7: je 0x1705dafe */
L_1705DAF9:
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DAF9: mov dword ptr [ebp - 4], eax */
    goto L_1705DB09; /* 0x1705DAFC: jmp 0x1705db09 */
L_1705DAFE:
    PUSH32(esp, 3); /* 0x1705DAFE: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705DB00: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705DB01: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705DB03: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1705DB04: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705DB06: mov dword ptr [ebp - 4], edx */
L_1705DB09:
    eax = MEM32(ebp + (-0x14)); /* 0x1705DB09: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(esi + ecx * 4) */ /* 0x1705DB0C: cmp eax, dword ptr [esi + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DB1C; /* 0x1705DB0F: jne 0x1705db1c */
L_1705DB11:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DB11: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DAE6; /* 0x1705DB15: jne 0x1705dae6 */
L_1705DB17:
    goto L_1705DB1C; /* 0x1705DB17: jmp 0x1705db1c */
L_1705DB19:
    ecx = MEM32(ebp + (-0x18)); /* 0x1705DB19: mov ecx, dword ptr [ebp - 0x18] */
L_1705DB1C:
    eax = MEM32(ebp + (-0x4)); /* 0x1705DB1C: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebx + 0x318); /* 0x1705DB1F: mov edx, dword ptr [ebx + 0x318] */
    eax = eax + ecx * 2; /* 0x1705DB25: lea eax, [eax + ecx*2] */
    PUSH32(esp, 0); /* 0x1705DB28: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705DB2A: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edx + eax * 4)); /* 0x1705DB2C: push dword ptr [edx + eax*4] */
    PUSH32(esp, ecx); /* 0x1705DB2F: push ecx */
    ecx = ebp + (-0x68); /* 0x1705DB30: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17055F2F); /* 0x1705DB33: call 0x17055f2f */
    RECOMP_FLAGS_IN();
L_1705DB38:
    ecx = ebp + (-0x68); /* 0x1705DB38: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DB3B: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705DB40: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ebx + 0x318); /* 0x1705DB44: mov esi, dword ptr [ebx + 0x318] */
    ecx = eax; /* 0x1705DB4A: mov ecx, eax */
    eax = ecx + ecx * 2; /* 0x1705DB4C: lea eax, [ecx + ecx*2] */
    esi = esi + eax * 4; /* 0x1705DB4F: lea esi, [esi + eax*4] */
    eax = MEM32(ebp + (-0x5C)); /* 0x1705DB52: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1705DB55: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DB5F; /* 0x1705DB58: je 0x1705db5f */
L_1705DB5A:
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DB5A: mov dword ptr [ebp - 4], eax */
    goto L_1705DB6A; /* 0x1705DB5D: jmp 0x1705db6a */
L_1705DB5F:
    PUSH32(esp, 3); /* 0x1705DB5F: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705DB61: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705DB62: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705DB64: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1705DB65: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705DB67: mov dword ptr [ebp - 4], edx */
L_1705DB6A:
    eax = MEM32(ebp + (-0x4)); /* 0x1705DB6A: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(esi + eax * 4); /* 0x1705DB6D: mov eax, dword ptr [esi + eax*4] */
    esi = MEM32(ebx + 0x320); /* 0x1705DB70: mov esi, dword ptr [ebx + 0x320] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705DB76: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + ecx * 4); /* 0x1705DB79: mov eax, dword ptr [esi + ecx*4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1705DB7C: mov dword ptr [ebp - 0x14], eax */
L_1705DB7F:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DB7F: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DCAA; /* 0x1705DB83: jne 0x1705dcaa */
L_1705DB89:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 1; /* 0x1705DB89: inc dword ptr [ebp - 0x20] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) + 4; /* 0x1705DB8C: add dword ptr [ebp - 0x3c], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x20)), 3 */ /* 0x1705DB90: cmp dword ptr [ebp - 0x20], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705DA78; /* 0x1705DB94: jb 0x1705da78 */
L_1705DB9A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1705DB9A: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x48)); /* 0x1705DB9D: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 0xCu; /* 0x1705DBA0: add dword ptr [ebp - 0x34], 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x1705DBA4: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705DA5C; /* 0x1705DBA7: jb 0x1705da5c */
L_1705DBAD:
    ecx = MEM32(ebx + 0x308); /* 0x1705DBAD: mov ecx, dword ptr [ebx + 0x308] */
    /* cmp MEM32(ebp + (-0x44)), ecx */ /* 0x1705DBB3: cmp dword ptr [ebp - 0x44], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705DBE7; /* 0x1705DBB6: jae 0x1705dbe7 */
L_1705DBB8:
    PUSH32(esp, MEM32(ebx + 0x364)); /* 0x1705DBB8: push dword ptr [ebx + 0x364] */
    RECOMP_CALL(sub_1721B010); /* 0x1705DBBE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x308)); /* 0x1705DBC3: push dword ptr [ebx + 0x308] */
    RECOMP_CALL(sub_1721B01C); /* 0x1705DBC9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DBCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705DBD0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705DBD1: pop ecx */
    MEM32(ebx + 0x364) = eax; /* 0x1705DBD2: mov dword ptr [ebx + 0x364], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705DFCA; /* 0x1705DBD8: je 0x1705dfca */
L_1705DBDE:
    ecx = MEM32(ebx + 0x308); /* 0x1705DBDE: mov ecx, dword ptr [ebx + 0x308] */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1705DBE4: mov dword ptr [ebp - 0x44], ecx */
L_1705DBE7:
    edi = MEM32(ebx + 0x364); /* 0x1705DBE7: mov edi, dword ptr [ebx + 0x364] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1705DBED: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x1705DBF1: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705DBF3: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705DBF3: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705DBF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705DBF8: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705DBFA: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705DBFC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1705DBFF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705DC01: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705DFD1; /* 0x1705DC03: jbe 0x1705dfd1 */
L_1705DC09:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1705DC09: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705DC0D:
    eax = MEM32(ebx + 0x318); /* 0x1705DC0D: mov eax, dword ptr [ebx + 0x318] */
    ecx = MEM32(ebp + (-0x34)); /* 0x1705DC13: mov ecx, dword ptr [ebp - 0x34] */
    /* cmp MEM32(ecx + eax), 0xFFFFFFFFu */ /* 0x1705DC16: cmp dword ptr [ecx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DF88; /* 0x1705DC1A: je 0x1705df88 */
L_1705DC20:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1705DC20: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1705DC24: mov eax, ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1705DC26: mov dword ptr [ebp - 0x38], eax */
L_1705DC29:
    eax = MEM32(ebx + 0x318); /* 0x1705DC29: mov eax, dword ptr [ebx + 0x318] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1705DC2F: mov ecx, dword ptr [ebp - 0x38] */
    esi = MEM32(ecx + eax); /* 0x1705DC32: mov esi, dword ptr [ecx + eax] */
    eax = MEM32(ebx + 0x310); /* 0x1705DC35: mov eax, dword ptr [ebx + 0x310] */
    eax = MEM32(eax + esi * 4); /* 0x1705DC3B: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebx + 0x364); /* 0x1705DC3E: mov ecx, dword ptr [ebx + 0x364] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1705DC44: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705DC47: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1705DC49: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DF77; /* 0x1705DC4C: jne 0x1705df77 */
L_1705DC52:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & 0; /* 0x1705DC52: and dword ptr [ebp - 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1705DC56: push 0 */
    MEM8(eax) = (uint8_t)(1); /* 0x1705DC58: mov byte ptr [eax], 1 */
    eax = ebx + 0xCC; /* 0x1705DC5B: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x1705DC61: push eax */
    PUSH32(esp, esi); /* 0x1705DC62: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1705DC63: push dword ptr [ebp - 0xc] */
    ecx = ebp + (-0x68); /* 0x1705DC66: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17050C3A); /* 0x1705DC69: call 0x17050c3a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x68); /* 0x1705DC6E: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17051CC0); /* 0x1705DC71: call 0x17051cc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705DC76: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705DE37; /* 0x1705DC78: jne 0x1705de37 */
L_1705DC7E:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DC7E: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DE18; /* 0x1705DC82: je 0x1705de18 */
L_1705DC88:
    ecx = ebp + (-0x68); /* 0x1705DC88: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DC8B: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705DC90: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705DC94: mov ecx, eax */
    eax = MEM32(ebp + (-0x5C)); /* 0x1705DC96: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1705DC99: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DDEE; /* 0x1705DC9C: je 0x1705ddee */
L_1705DCA2:
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DCA2: mov dword ptr [ebp - 4], eax */
    goto L_1705DDF9; /* 0x1705DCA5: jmp 0x1705ddf9 */
L_1705DCAA:
    ecx = ebp + (-0x68); /* 0x1705DCAA: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DCAD: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DCB2: push dword ptr [ebp - 0x1c] */
    edi = eax; /* 0x1705DCB5: mov edi, eax */
    eax = MEM32(ebx + 0x318); /* 0x1705DCB7: mov eax, dword ptr [ebx + 0x318] */
    ecx = edi + edi * 2; /* 0x1705DCBD: lea ecx, [edi + edi*2] */
    eax = eax + ecx * 4; /* 0x1705DCC0: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1705DCC3: push eax */
    ecx = ebx + 0xCC; /* 0x1705DCC4: lea ecx, [ebx + 0xcc] */
    MEM32(ebp + (-0x18)) = edi; /* 0x1705DCCA: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1705DCCD: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_17051B69); /* 0x1705DCD0: call 0x17051b69 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1705DCD5: mov ecx, dword ptr [ebp - 0x14] */
    edi = MEM32(esi + edi * 4); /* 0x1705DCD8: mov edi, dword ptr [esi + edi*4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1705DCDB: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x1705DCDE: mov dword ptr [ebp - 0x38], ecx */
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x1705DCE1: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x1705DCE4: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DCE7: mov dword ptr [ebp - 4], eax */
    eax = ecx + eax * 4; /* 0x1705DCEA: lea eax, [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x1705DCED: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1705DCEF: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1705DCF2: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1705DCF5: mov dword ptr [ebp - 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DB7F; /* 0x1705DCF8: je 0x1705db7f */
L_1705DCFE:
    /* cmp ecx, edx */ /* 0x1705DCFE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DB7F; /* 0x1705DD00: jne 0x1705db7f */
L_1705DD06:
    edi = MEM32(eax); /* 0x1705DD06: mov edi, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1705DD08: push 0 */
    eax = ebp + (-0x40); /* 0x1705DD0A: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1705DD0D: push eax */
    ecx = ebx + 0xCC; /* 0x1705DD0E: lea ecx, [ebx + 0xcc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1705DD14: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_1704FE30); /* 0x1705DD17: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DD1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1705DD1E: mov dword ptr [ebp - 0x10], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705DFD1; /* 0x1705DD21: jl 0x1705dfd1 */
L_1705DD27:
    ecx = MEM32(ebx + 0xC8); /* 0x1705DD27: mov ecx, dword ptr [ebx + 0xc8] */
    eax = MEM32(ebx + 0x308); /* 0x1705DD2D: mov eax, dword ptr [ebx + 0x308] */
    esi = ecx; /* 0x1705DD33: mov esi, ecx */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x1705DD35: imul esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x40)); /* 0x1705DD38: add esi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x30)); /* 0x1705DD3B: mov edi, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1705DD3E: mov dword ptr [ebp - 0x28], eax */
    eax = ecx; /* 0x1705DD41: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705DD43: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705DD43: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705DD46: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705DD48: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705DD4A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705DD4D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = ebx + 0xCC; /* 0x1705DD4F: lea esi, [ebx + 0xcc] */
    eax = MEM32(esi + 0x234); /* 0x1705DD55: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x1705DD5B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705DD5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705DD5E: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DD61: push dword ptr [ebp - 0x1c] */
    ecx = esi; /* 0x1705DD64: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705DD66: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_170579BD); /* 0x1705DD69: call 0x170579bd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DD6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1705DD70: mov dword ptr [ebp - 0x10], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705DFD1; /* 0x1705DD73: jl 0x1705dfd1 */
L_1705DD79:
    eax = MEM32(ebp + (-0x24)); /* 0x1705DD79: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1705DD7C: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x1705DD7F: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + (-0x14)); /* 0x1705DD81: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1705DD84: mov dword ptr [ebp - 0x38], eax */
L_1705DD87:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DD87: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DB89; /* 0x1705DD8B: je 0x1705db89 */
L_1705DD91:
    ecx = ebp + (-0x68); /* 0x1705DD91: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DD94: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705DD99: mov ecx, dword ptr [ebx + 0x318] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DD9F: push dword ptr [ebp - 0x1c] */
    esi = MEM32(ebx + 0x320); /* 0x1705DDA2: mov esi, dword ptr [ebx + 0x320] */
    edx = eax + eax * 2; /* 0x1705DDA8: lea edx, [eax + eax*2] */
    edi = ecx + edx * 4; /* 0x1705DDAB: lea edi, [ecx + edx*4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1705DDAE: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + eax * 4); /* 0x1705DDB1: mov eax, dword ptr [esi + eax*4] */
    PUSH32(esp, edi); /* 0x1705DDB4: push edi */
    ecx = ebx + 0xCC; /* 0x1705DDB5: lea ecx, [ebx + 0xcc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1705DDBB: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_17051B69); /* 0x1705DDBE: call 0x17051b69 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1705DDC3: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DDC6: mov dword ptr [ebp - 4], eax */
    eax = edi + eax * 4; /* 0x1705DDC9: lea eax, [edi + eax*4] */
    /* cmp MEM32(eax), ecx */ /* 0x1705DDCC: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x1705DDCE: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DB7F; /* 0x1705DDD1: jne 0x1705db7f */
L_1705DDD7:
    ecx = MEM32(ebp + (-0x38)); /* 0x1705DDD7: mov ecx, dword ptr [ebp - 0x38] */
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1705DDDA: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DDE6; /* 0x1705DDDD: jne 0x1705dde6 */
L_1705DDDF:
    ecx = MEM32(ebp + (-0x28)); /* 0x1705DDDF: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x1705DDE2: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1705DD87; /* 0x1705DDE4: jmp 0x1705dd87 */
L_1705DDE6:
    eax = MEM32(ebp + (-0x24)); /* 0x1705DDE6: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_1705DD06; /* 0x1705DDE9: jmp 0x1705dd06 */
L_1705DDEE:
    PUSH32(esp, 3); /* 0x1705DDEE: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705DDF0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705DDF1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1705DDF3: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1705DDF4: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705DDF6: mov dword ptr [ebp - 4], edx */
L_1705DDF9:
    eax = MEM32(ebp + (-0x4)); /* 0x1705DDF9: mov eax, dword ptr [ebp - 4] */
    edx = eax + ecx * 2; /* 0x1705DDFC: lea edx, [eax + ecx*2] */
    eax = MEM32(ebx + 0x318); /* 0x1705DDFF: mov eax, dword ptr [ebx + 0x318] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1705DE05: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(eax + edx * 4) */ /* 0x1705DE07: cmp esi, dword ptr [eax + edx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DE1B; /* 0x1705DE0A: jne 0x1705de1b */
L_1705DE0C:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DE0C: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DC88; /* 0x1705DE10: jne 0x1705dc88 */
L_1705DE16:
    goto L_1705DE1B; /* 0x1705DE16: jmp 0x1705de1b */
L_1705DE18:
    ecx = MEM32(ebp + (-0x18)); /* 0x1705DE18: mov ecx, dword ptr [ebp - 0x18] */
L_1705DE1B:
    eax = MEM32(ebp + (-0x4)); /* 0x1705DE1B: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebx + 0x318); /* 0x1705DE1E: mov edx, dword ptr [ebx + 0x318] */
    eax = eax + ecx * 2; /* 0x1705DE24: lea eax, [eax + ecx*2] */
    PUSH32(esp, 0); /* 0x1705DE27: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705DE29: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edx + eax * 4)); /* 0x1705DE2B: push dword ptr [edx + eax*4] */
    PUSH32(esp, ecx); /* 0x1705DE2E: push ecx */
    ecx = ebp + (-0x68); /* 0x1705DE2F: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17055F2F); /* 0x1705DE32: call 0x17055f2f */
    RECOMP_FLAGS_IN();
L_1705DE37:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1705DE37: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x60)), edi */ /* 0x1705DE3A: cmp dword ptr [ebp - 0x60], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DF77; /* 0x1705DE3D: je 0x1705df77 */
L_1705DE43:
    ecx = ebp + (-0x68); /* 0x1705DE43: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DE46: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705DE4B: mov ecx, dword ptr [ebx + 0x318] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DE51: push dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1705DE54: mov dword ptr [ebp - 0x18], eax */
    eax = eax + eax * 2; /* 0x1705DE57: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x1705DE5A: lea esi, [ecx + eax*4] */
    PUSH32(esp, esi); /* 0x1705DE5D: push esi */
    ecx = ebx + 0xCC; /* 0x1705DE5E: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_17051B69); /* 0x1705DE64: call 0x17051b69 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DE69: mov dword ptr [ebp - 4], eax */
    eax = esi + eax * 4; /* 0x1705DE6C: lea eax, [esi + eax*4] */
    /* cmp MEM32(eax), edi */ /* 0x1705DE6F: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x1705DE71: mov dword ptr [ebp - 0x24], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DF6D; /* 0x1705DE74: je 0x1705df6d */
L_1705DE7A:
    goto L_1705DF38; /* 0x1705DE7A: jmp 0x1705df38 */
L_1705DE7F:
    PUSH32(esp, 0); /* 0x1705DE7F: push 0 */
    eax = ebp + (-0x40); /* 0x1705DE81: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1705DE84: push eax */
    ecx = ebx + 0xCC; /* 0x1705DE85: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_1704FE30); /* 0x1705DE8B: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DE90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1705DE92: mov dword ptr [ebp - 0x10], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705DFD1; /* 0x1705DE95: jl 0x1705dfd1 */
L_1705DE9B:
    ecx = MEM32(ebx + 0xC8); /* 0x1705DE9B: mov ecx, dword ptr [ebx + 0xc8] */
    eax = MEM32(ebx + 0x308); /* 0x1705DEA1: mov eax, dword ptr [ebx + 0x308] */
    edi = MEM32(ebp + (-0x30)); /* 0x1705DEA7: mov edi, dword ptr [ebp - 0x30] */
    esi = ecx; /* 0x1705DEAA: mov esi, ecx */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x8))); /* 0x1705DEAC: imul esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x40)); /* 0x1705DEB0: add esi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x1705DEB3: mov dword ptr [ebp - 0x28], eax */
    eax = ecx; /* 0x1705DEB6: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705DEB8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705DEB8: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705DEBB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705DEBD: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705DEBF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705DEC2: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = ebx + 0xCC; /* 0x1705DEC4: lea edi, [ebx + 0xcc] */
    eax = MEM32(edi + 0x234); /* 0x1705DECA: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x1705DED0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705DED2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705DED3: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DED6: push dword ptr [ebp - 0x1c] */
    ecx = edi; /* 0x1705DED9: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705DEDB: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_170579BD); /* 0x1705DEDE: call 0x170579bd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DEE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1705DEE5: mov dword ptr [ebp - 0x10], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705DFD1; /* 0x1705DEE8: jl 0x1705dfd1 */
L_1705DEEE:
    eax = MEM32(ebp + (-0x24)); /* 0x1705DEEE: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1705DEF1: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x1705DEF4: mov dword ptr [eax], ecx */
L_1705DEF6:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DEF6: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705DF77; /* 0x1705DEFA: je 0x1705df77 */
L_1705DEFC:
    ecx = ebp + (-0x68); /* 0x1705DEFC: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_170565B5); /* 0x1705DEFF: call 0x170565b5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705DF04: mov ecx, dword ptr [ebx + 0x318] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705DF0A: push dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1705DF0D: mov dword ptr [ebp - 0x18], eax */
    eax = eax + eax * 2; /* 0x1705DF10: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x1705DF13: lea esi, [ecx + eax*4] */
    PUSH32(esp, esi); /* 0x1705DF16: push esi */
    ecx = edi; /* 0x1705DF17: mov ecx, edi */
    RECOMP_CALL(sub_17051B69); /* 0x1705DF19: call 0x17051b69 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1705DF1E: mov edx, dword ptr [ebp - 8] */
    ecx = esi + eax * 4; /* 0x1705DF21: lea ecx, [esi + eax*4] */
    /* cmp MEM32(ecx), edx */ /* 0x1705DF24: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1705DF26: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DF32; /* 0x1705DF29: jne 0x1705df32 */
L_1705DF2B:
    eax = MEM32(ebp + (-0x28)); /* 0x1705DF2B: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ecx) = eax; /* 0x1705DF2E: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_1705DEF6; /* 0x1705DF30: jmp 0x1705def6 */
L_1705DF32:
    eax = esi + eax * 4; /* 0x1705DF32: lea eax, [esi + eax*4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1705DF35: mov dword ptr [ebp - 0x24], eax */
L_1705DF38:
    eax = MEM32(eax); /* 0x1705DF38: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705DF3A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1705DF3B: push dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705DF3E: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705DF41: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_17051DE1); /* 0x1705DF44: call 0x17051de1 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705DF49: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705DE7F; /* 0x1705DF4B: jne 0x1705de7f */
L_1705DF51:
    eax = ebp + (-0x4C); /* 0x1705DF51: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1705DF54: push eax */
    eax = ebp + (-0x3C); /* 0x1705DF55: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1705DF58: push eax */
    eax = ebp + (-0x8); /* 0x1705DF59: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1705DF5C: push eax */
    eax = ebp + (-0x2C); /* 0x1705DF5D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1705DF60: push eax */
    RECOMP_CALL(sub_17051E0D); /* 0x1705DF61: call 0x17051e0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DF66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705DFCA; /* 0x1705DF68: je 0x1705dfca */
L_1705DF6A:
    edi = MEM32(ebp + (-0x8)); /* 0x1705DF6A: mov edi, dword ptr [ebp - 8] */
L_1705DF6D:
    /* cmp MEM32(ebp + (-0x60)), 0xFFFFFFFFu */ /* 0x1705DF6D: cmp dword ptr [ebp - 0x60], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DE43; /* 0x1705DF71: jne 0x1705de43 */
L_1705DF77:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 1; /* 0x1705DF77: inc dword ptr [ebp - 0x20] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 4; /* 0x1705DF7A: add dword ptr [ebp - 0x38], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x20)), 3 */ /* 0x1705DF7E: cmp dword ptr [ebp - 0x20], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705DC29; /* 0x1705DF82: jb 0x1705dc29 */
L_1705DF88:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1705DF88: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1705DF8B: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 0xCu; /* 0x1705DF8E: add dword ptr [ebp - 0x34], 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x48)) */ /* 0x1705DF92: cmp eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705DC0D; /* 0x1705DF95: jb 0x1705dc0d */
L_1705DF9B:
    goto L_1705DFD1; /* 0x1705DF9B: jmp 0x1705dfd1 */
L_1705DF9D:
    eax = MEM32(ebp + (-0x44)); /* 0x1705DF9D: mov eax, dword ptr [ebp - 0x44] */
    /* cmp eax, MEM32(ebx + 0x308) */ /* 0x1705DFA0: cmp eax, dword ptr [ebx + 0x308] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x308));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705DFDC; /* 0x1705DFA6: jae 0x1705dfdc */
L_1705DFA8:
    PUSH32(esp, MEM32(ebx + 0x364)); /* 0x1705DFA8: push dword ptr [ebx + 0x364] */
    RECOMP_CALL(sub_1721B010); /* 0x1705DFAE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x308)); /* 0x1705DFB3: push dword ptr [ebx + 0x308] */
    RECOMP_CALL(sub_1721B01C); /* 0x1705DFB9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705DFBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705DFC0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705DFC1: pop ecx */
    MEM32(ebx + 0x364) = eax; /* 0x1705DFC2: mov dword ptr [ebx + 0x364], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705DFDC; /* 0x1705DFC8: jne 0x1705dfdc */
L_1705DFCA:
    MEM32(ebp + (-0x10)) = 0x8007000Eu; /* 0x1705DFCA: mov dword ptr [ebp - 0x10], 0x8007000e */
L_1705DFD1:
    /* cmp MEM32(ebx + 0x364), 0 */ /* 0x1705DFD1: cmp dword ptr [ebx + 0x364], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x364)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705DF9D; /* 0x1705DFD8: jne 0x1705df9d */
L_1705DFDA:
    goto L_1705DFF8; /* 0x1705DFDA: jmp 0x1705dff8 */
L_1705DFDC:
    ecx = MEM32(ebx + 0x308); /* 0x1705DFDC: mov ecx, dword ptr [ebx + 0x308] */
    edi = MEM32(ebx + 0x364); /* 0x1705DFE2: mov edi, dword ptr [ebx + 0x364] */
    edx = ecx; /* 0x1705DFE8: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705DFEA: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705DFEA: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705DFED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705DFEF: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705DFF1: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705DFF3: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705DFF6: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_1705DFF8:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1705DFF8: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1705DFFC: pop edi */
    esi = POP32_VAL(esp); /* 0x1705DFFD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705DFFE: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E00A; /* 0x1705DFFF: je 0x1705e00a */
L_1705E001:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705E001: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E004: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705E009: pop ecx */
L_1705E00A:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705E00A: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E00D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1705E012: mov eax, dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x1705E015: pop ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705E016: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1705E017: ret  */
    RECOMP_REGS_OUT();
}

void sub_1705E01D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705E01Du);

L_1705E01D:
    edi = edi; /* 0x1705E01D: mov edi, edi */
    PUSH32(esp, esi); /* 0x1705E01F: push esi */
    esi = ecx; /* 0x1705E020: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1705E022: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1705E025: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705E02B; /* 0x1705E027: jne 0x1705e02b */
L_1705E029:
    esi = POP32_VAL(esp); /* 0x1705E029: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1705E02A: ret  */
L_1705E02B:
    /* cmp eax, 1 */ /* 0x1705E02B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x1705E02E: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1705E030: push edi */
    edi = MEM32(ecx); /* 0x1705E031: mov edi, dword ptr [ecx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705E040; /* 0x1705E033: jbe 0x1705e040 */
L_1705E035:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705E035: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1705E036: push eax */
    PUSH32(esp, 0); /* 0x1705E037: push 0 */
    ecx = esi; /* 0x1705E039: mov ecx, esi */
    RECOMP_CALL(sub_17051DA0); /* 0x1705E03B: call 0x17051da0 */
    RECOMP_FLAGS_IN();
L_1705E040:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x1705E040: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1705E043: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705E056; /* 0x1705E047: jbe 0x1705e056 */
L_1705E049:
    PUSH32(esp, 1); /* 0x1705E049: push 1 */
    PUSH32(esp, 0); /* 0x1705E04B: push 0 */
    PUSH32(esp, 0); /* 0x1705E04D: push 0 */
    ecx = esi; /* 0x1705E04F: mov ecx, esi */
    RECOMP_CALL(sub_1705818D); /* 0x1705E051: call 0x1705818d */
    RECOMP_FLAGS_IN();
L_1705E056:
    _flag_a = (uint32_t)((MEM32(edi + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0xC) | 0xFFFFFFFFu));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | 0xFFFFFFFFu; /* 0x1705E056: or dword ptr [edi + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1705E05A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1705E05C: pop edi */
    esi = POP32_VAL(esp); /* 0x1705E05D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1705E05E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1705E064(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705E064u);

L_1705E064:
    edi = edi; /* 0x1705E064: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705E066: push ebp */
    ebp = esp; /* 0x1705E067: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x1705E069: sub esp, 0x60 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1705E06C: push ebx */
    PUSH32(esp, esi); /* 0x1705E06D: push esi */
    ebx = ecx; /* 0x1705E06E: mov ebx, ecx */
    SET_LO16(eax, MEM16(ebx + 0x330)); /* 0x1705E070: mov ax, word ptr [ebx + 0x330] */
    PUSH32(esp, edi); /* 0x1705E077: push edi */
    PUSH32(esp, MEM32(ebx + 0xC8)); /* 0x1705E078: push dword ptr [ebx + 0xc8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705E07E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = esi; /* 0x1705E080: mov dword ptr [ebp - 0x18], esi */
    MEM16(ebp + (-0x34)) = (uint16_t)(LO16(eax)); /* 0x1705E083: mov word ptr [ebp - 0x34], ax */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1705E087: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1705E08A: mov dword ptr [ebp - 0x4c], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1705E08D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = eax; /* 0x1705E092: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebx + 0x308); /* 0x1705E095: mov eax, dword ptr [ebx + 0x308] */
    PUSH32(esp, eax); /* 0x1705E09B: push eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x1705E09C: mov dword ptr [ebp - 0x40], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705E09F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705E0A4: mov edi, eax */
    /* cmp edi, esi */ /* 0x1705E0A6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705E0A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705E0A9: pop ecx */
    MEM32(ebx + 0x364) = edi; /* 0x1705E0AA: mov dword ptr [ebx + 0x364], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E698; /* 0x1705E0B0: je 0x1705e698 */
L_1705E0B6:
    ecx = MEM32(ebx + 0x308); /* 0x1705E0B6: mov ecx, dword ptr [ebx + 0x308] */
    edx = ecx; /* 0x1705E0BC: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705E0BE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705E0BE: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705E0C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705E0C3: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705E0C5: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705E0C7: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x34)), LO16(esi) */ /* 0x1705E0CA: cmp word ptr [ebp - 0x34], si */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x34))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705E0CE: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x8)) = esi; /* 0x1705E0D0: mov dword ptr [ebp - 8], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705E25A; /* 0x1705E0D3: jbe 0x1705e25a */
L_1705E0D9:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x1705E0D9: movzx eax, word ptr [ebp - 8] */
    edx = MEM32(ebx + 0x318); /* 0x1705E0DD: mov edx, dword ptr [ebx + 0x318] */
    ecx = eax + eax * 2; /* 0x1705E0E3: lea ecx, [eax + eax*2] */
    /* cmp MEM16(edx + ecx * 2), 0xFFFFu */ /* 0x1705E0E6: cmp word ptr [edx + ecx*2], 0xffff */
    _flag_a = (uint32_t)(MEM16(edx + ecx * 2)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E249; /* 0x1705E0EC: je 0x1705e249 */
L_1705E0F2:
    ecx = eax + eax * 2; /* 0x1705E0F2: lea ecx, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705E0F5: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705E0F5: shl eax, 2 */
    MEM32(ebp + (-0x14)) = esi; /* 0x1705E0F8: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x38)) = ecx; /* 0x1705E0FB: mov dword ptr [ebp - 0x38], ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x1705E0FE: mov dword ptr [ebp - 0x44], eax */
L_1705E101:
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x1705E101: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x38)); /* 0x1705E105: add eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x318); /* 0x1705E108: mov ecx, dword ptr [ebx + 0x318] */
    SET_LO16(ecx, MEM16(ecx + eax * 2)); /* 0x1705E10E: mov cx, word ptr [ecx + eax*2] */
    edx = MEM32(ebx + 0x310); /* 0x1705E112: mov edx, dword ptr [ebx + 0x310] */
    edi = MEM32(ebp + (-0x44)); /* 0x1705E118: mov edi, dword ptr [ebp - 0x44] */
    eax = (uint32_t)LO16(ecx); /* 0x1705E11B: movzx eax, cx */
    eax = (uint32_t)MEM16(edx + eax * 2); /* 0x1705E11E: movzx eax, word ptr [edx + eax*2] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1705E122: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebx + 0x320); /* 0x1705E125: mov edx, dword ptr [ebx + 0x320] */
    edx = MEM32(edi + edx); /* 0x1705E12B: mov edx, dword ptr [edi + edx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1705E12E: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1705E131: mov dword ptr [ebp - 0x1c], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E239; /* 0x1705E134: jne 0x1705e239 */
L_1705E13A:
    edx = MEM32(ebx + 0x364); /* 0x1705E13A: mov edx, dword ptr [ebx + 0x364] */
    eax = (uint32_t)LO16(eax); /* 0x1705E140: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705E143: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1705E145: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E239; /* 0x1705E148: jne 0x1705e239 */
L_1705E14E:
    PUSH32(esp, esi); /* 0x1705E14E: push esi */
    MEM8(eax) = (uint8_t)(1); /* 0x1705E14F: mov byte ptr [eax], 1 */
    eax = ebx + 0xCC; /* 0x1705E152: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x1705E158: push eax */
    PUSH32(esp, ecx); /* 0x1705E159: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705E15A: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x60); /* 0x1705E15D: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17050BBD); /* 0x1705E160: call 0x17050bbd */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x60); /* 0x1705E165: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17051BB1); /* 0x1705E168: call 0x17051bb1 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705E16D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705E1DF; /* 0x1705E16F: jne 0x1705e1df */
L_1705E171:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E171: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E1BA; /* 0x1705E177: je 0x1705e1ba */
L_1705E179:
    esi = MEM32(ebx + 0x320); /* 0x1705E179: mov esi, dword ptr [ebx + 0x320] */
L_1705E17F:
    ecx = ebp + (-0x60); /* 0x1705E17F: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E182: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705E187: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1705E18B: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E197; /* 0x1705E18D: je 0x1705e197 */
L_1705E18F:
    eax = MEM32(ebp + (-0x5A)); /* 0x1705E18F: mov eax, dword ptr [ebp - 0x5a] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E192: mov dword ptr [ebp - 4], eax */
    goto L_1705E1A5; /* 0x1705E195: jmp 0x1705e1a5 */
L_1705E197:
    eax = (uint32_t)MEM16(ebp + (-0x5A)); /* 0x1705E197: movzx eax, word ptr [ebp - 0x5a] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705E19B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1705E19C: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705E19E: cdq  */
    edi = POP32_VAL(esp); /* 0x1705E19F: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x1705E1A0: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705E1A2: mov dword ptr [ebp - 4], edx */
L_1705E1A5:
    edx = MEM32(ebp + (-0x1C)); /* 0x1705E1A5: mov edx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO16(ecx); /* 0x1705E1A8: movzx eax, cx */
    /* cmp edx, MEM32(esi + eax * 4) */ /* 0x1705E1AB: cmp edx, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + eax * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E1BD; /* 0x1705E1AE: jne 0x1705e1bd */
L_1705E1B0:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E1B0: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E17F; /* 0x1705E1B6: jne 0x1705e17f */
L_1705E1B8:
    goto L_1705E1BD; /* 0x1705E1B8: jmp 0x1705e1bd */
L_1705E1BA:
    ecx = MEM32(ebp + (-0x10)); /* 0x1705E1BA: mov ecx, dword ptr [ebp - 0x10] */
L_1705E1BD:
    edx = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1705E1BD: movzx edx, word ptr [ebp - 4] */
    eax = (uint32_t)LO16(ecx); /* 0x1705E1C1: movzx eax, cx */
    eax = eax + eax * 2; /* 0x1705E1C4: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1705E1C7: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x318); /* 0x1705E1C9: mov edx, dword ptr [ebx + 0x318] */
    eax = (uint32_t)MEM16(edx + eax * 2); /* 0x1705E1CF: movzx eax, word ptr [edx + eax*2] */
    PUSH32(esp, 0); /* 0x1705E1D3: push 0 */
    PUSH32(esp, eax); /* 0x1705E1D5: push eax */
    PUSH32(esp, ecx); /* 0x1705E1D6: push ecx */
    ecx = ebp + (-0x60); /* 0x1705E1D7: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17055EB7); /* 0x1705E1DA: call 0x17055eb7 */
    RECOMP_FLAGS_IN();
L_1705E1DF:
    ecx = ebp + (-0x60); /* 0x1705E1DF: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E1E2: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705E1E7: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO16(eax); /* 0x1705E1EB: movzx ecx, ax */
    edx = ecx + ecx * 2; /* 0x1705E1EE: lea edx, [ecx + ecx*2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E1F1: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x318); /* 0x1705E1F4: mov eax, dword ptr [ebx + 0x318] */
    esi = eax + edx * 2; /* 0x1705E1FA: lea esi, [eax + edx*2] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E207; /* 0x1705E1FD: je 0x1705e207 */
L_1705E1FF:
    eax = MEM32(ebp + (-0x5A)); /* 0x1705E1FF: mov eax, dword ptr [ebp - 0x5a] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E202: mov dword ptr [ebp - 4], eax */
    goto L_1705E215; /* 0x1705E205: jmp 0x1705e215 */
L_1705E207:
    eax = (uint32_t)MEM16(ebp + (-0x5A)); /* 0x1705E207: movzx eax, word ptr [ebp - 0x5a] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705E20B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1705E20C: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705E20E: cdq  */
    edi = POP32_VAL(esp); /* 0x1705E20F: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x1705E210: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705E212: mov dword ptr [ebp - 4], edx */
L_1705E215:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1705E215: movzx eax, word ptr [ebp - 4] */
    SET_LO16(eax, MEM16(esi + eax * 2)); /* 0x1705E219: mov ax, word ptr [esi + eax*2] */
    edi = MEM32(ebx + 0x320); /* 0x1705E21D: mov edi, dword ptr [ebx + 0x320] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1705E223: mov word ptr [ebp - 0xc], ax */
    eax = MEM32(edi + ecx * 4); /* 0x1705E227: mov eax, dword ptr [edi + ecx*4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1705E22A: mov dword ptr [ebp - 0x1c], eax */
L_1705E22D:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E22D: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E2BC; /* 0x1705E233: jne 0x1705e2bc */
L_1705E239:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1705E239: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705E23C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x14)), 3 */ /* 0x1705E23E: cmp word ptr [ebp - 0x14], 3 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705E101; /* 0x1705E243: jb 0x1705e101 */
L_1705E249:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705E249: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    SET_LO16(eax, MEM16(ebp + (-0x8))); /* 0x1705E24C: mov ax, word ptr [ebp - 8] */
    /* cmp LO16(eax), MEM16(ebp + (-0x34)) */ /* 0x1705E250: cmp ax, word ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x34))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705E0D9; /* 0x1705E254: jb 0x1705e0d9 */
L_1705E25A:
    ecx = MEM32(ebx + 0x308); /* 0x1705E25A: mov ecx, dword ptr [ebx + 0x308] */
    /* cmp MEM32(ebp + (-0x40)), ecx */ /* 0x1705E260: cmp dword ptr [ebp - 0x40], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705E294; /* 0x1705E263: jae 0x1705e294 */
L_1705E265:
    PUSH32(esp, MEM32(ebx + 0x364)); /* 0x1705E265: push dword ptr [ebx + 0x364] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E26B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x308)); /* 0x1705E270: push dword ptr [ebx + 0x308] */
    RECOMP_CALL(sub_1721B01C); /* 0x1705E276: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705E27B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705E27D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705E27E: pop ecx */
    MEM32(ebx + 0x364) = eax; /* 0x1705E27F: mov dword ptr [ebx + 0x364], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E698; /* 0x1705E285: je 0x1705e698 */
L_1705E28B:
    ecx = MEM32(ebx + 0x308); /* 0x1705E28B: mov ecx, dword ptr [ebx + 0x308] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1705E291: mov dword ptr [ebp - 0x40], ecx */
L_1705E294:
    edi = MEM32(ebx + 0x364); /* 0x1705E294: mov edi, dword ptr [ebx + 0x364] */
    edx = ecx; /* 0x1705E29A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705E29C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705E29C: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705E29F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705E2A1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705E2A3: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705E2A5: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x34)), LO16(esi) */ /* 0x1705E2A8: cmp word ptr [ebp - 0x34], si */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x34))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705E2AC: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x8)) = esi; /* 0x1705E2AE: mov dword ptr [ebp - 8], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705E69F; /* 0x1705E2B1: jbe 0x1705e69f */
L_1705E2B7:
    goto L_1705E422; /* 0x1705E2B7: jmp 0x1705e422 */
L_1705E2BC:
    ecx = ebp + (-0x60); /* 0x1705E2BC: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E2BF: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x1705E2C4: movzx esi, ax */
    ecx = esi + esi * 2; /* 0x1705E2C7: lea ecx, [esi + esi*2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E2CA: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x318); /* 0x1705E2CD: mov eax, dword ptr [ebx + 0x318] */
    ecx = eax + ecx * 2; /* 0x1705E2D3: lea ecx, [eax + ecx*2] */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1705E2D6: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1705E2DA: push eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1705E2DB: mov dword ptr [ebp - 0x28], ecx */
    PUSH32(esp, ecx); /* 0x1705E2DE: push ecx */
    ecx = ebx + 0xCC; /* 0x1705E2DF: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_170514DF); /* 0x1705E2E5: call 0x170514df */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x1705E2EA: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1705E2ED: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(edi + esi * 4); /* 0x1705E2F0: mov esi, dword ptr [edi + esi*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E2F3: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x48)) = edx; /* 0x1705E2F6: mov dword ptr [ebp - 0x48], edx */
    edx = MEM32(ebp + (-0x28)); /* 0x1705E2F9: mov edx, dword ptr [ebp - 0x28] */
    eax = (uint32_t)LO16(eax); /* 0x1705E2FC: movzx eax, ax */
    eax = edx + eax * 2; /* 0x1705E2FF: lea eax, [edx + eax*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705E302: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, esi */ /* 0x1705E304: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO16(edx, MEM16(eax)); /* 0x1705E306: mov dx, word ptr [eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1705E309: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1705E30C: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x1705E30F: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E22D; /* 0x1705E312: je 0x1705e22d */
L_1705E318:
    /* cmp LO16(edx), MEM16(ebp + (-0x48)) */ /* 0x1705E318: cmp dx, word ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x48))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E22D; /* 0x1705E31C: jne 0x1705e22d */
L_1705E322:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705E322: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(eax)); /* 0x1705E324: mov si, word ptr [eax] */
    PUSH32(esp, 0); /* 0x1705E327: push 0 */
    eax = ebp + (-0x3C); /* 0x1705E329: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1705E32C: push eax */
    ecx = ebx + 0xCC; /* 0x1705E32D: lea ecx, [ebx + 0xcc] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1705E333: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1704FE30); /* 0x1705E336: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705E33B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1705E33D: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705E69F; /* 0x1705E340: jl 0x1705e69f */
L_1705E346:
    ecx = MEM32(ebx + 0xC8); /* 0x1705E346: mov ecx, dword ptr [ebx + 0xc8] */
    SET_LO16(eax, MEM16(ebx + 0x308)); /* 0x1705E34C: mov ax, word ptr [ebx + 0x308] */
    edi = MEM32(ebp + (-0x30)); /* 0x1705E353: mov edi, dword ptr [ebp - 0x30] */
    esi = (uint32_t)LO16(esi); /* 0x1705E356: movzx esi, si */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x1705E359: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x3C)); /* 0x1705E35C: add esi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x1705E35F: mov word ptr [ebp - 0x28], ax */
    eax = ecx; /* 0x1705E363: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705E365: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705E365: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705E368: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705E36A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705E36C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705E36F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = ebx + 0xCC; /* 0x1705E371: lea esi, [ebx + 0xcc] */
    eax = MEM32(esi + 0x234); /* 0x1705E377: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x1705E37D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705E37F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705E380: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1705E383: push dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x1705E386: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705E388: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_170572BC); /* 0x1705E38B: call 0x170572bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705E390: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1705E392: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705E69F; /* 0x1705E395: jl 0x1705e69f */
L_1705E39B:
    eax = MEM32(ebp + (-0x24)); /* 0x1705E39B: mov eax, dword ptr [ebp - 0x24] */
    SET_LO16(ecx, MEM16(ebp + (-0x28))); /* 0x1705E39E: mov cx, word ptr [ebp - 0x28] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1705E3A2: mov word ptr [eax], cx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1705E3A5: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x1705E3A8: mov dword ptr [ebp - 0x48], eax */
L_1705E3AB:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E3AB: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E239; /* 0x1705E3B1: je 0x1705e239 */
L_1705E3B7:
    ecx = ebp + (-0x60); /* 0x1705E3B7: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E3BA: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x320); /* 0x1705E3BF: mov edi, dword ptr [ebx + 0x320] */
    ecx = MEM32(ebx + 0x318); /* 0x1705E3C5: mov ecx, dword ptr [ebx + 0x318] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E3CB: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E3CE: movzx eax, ax */
    edx = eax + eax * 2; /* 0x1705E3D1: lea edx, [eax + eax*2] */
    eax = MEM32(edi + eax * 4); /* 0x1705E3D4: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1705E3D7: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1705E3DA: movzx eax, word ptr [ebp - 0x20] */
    esi = ecx + edx * 2; /* 0x1705E3DE: lea esi, [ecx + edx*2] */
    PUSH32(esp, eax); /* 0x1705E3E1: push eax */
    PUSH32(esp, esi); /* 0x1705E3E2: push esi */
    ecx = ebx + 0xCC; /* 0x1705E3E3: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_170514DF); /* 0x1705E3E9: call 0x170514df */
    RECOMP_FLAGS_IN();
    SET_LO16(ecx, MEM16(ebp + (-0xC))); /* 0x1705E3EE: mov cx, word ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E3F2: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E3F5: movzx eax, ax */
    eax = esi + eax * 2; /* 0x1705E3F8: lea eax, [esi + eax*2] */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1705E3FB: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x24)) = eax; /* 0x1705E3FE: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E22D; /* 0x1705E401: jne 0x1705e22d */
L_1705E407:
    ecx = MEM32(ebp + (-0x48)); /* 0x1705E407: mov ecx, dword ptr [ebp - 0x48] */
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x1705E40A: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E418; /* 0x1705E40D: jne 0x1705e418 */
L_1705E40F:
    SET_LO16(ecx, MEM16(ebp + (-0x28))); /* 0x1705E40F: mov cx, word ptr [ebp - 0x28] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1705E413: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1705E3AB; /* 0x1705E416: jmp 0x1705e3ab */
L_1705E418:
    eax = MEM32(ebp + (-0x24)); /* 0x1705E418: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_1705E322; /* 0x1705E41B: jmp 0x1705e322 */
L_1705E420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705E420: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705E422:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x1705E422: movzx eax, word ptr [ebp - 8] */
    edx = MEM32(ebx + 0x318); /* 0x1705E426: mov edx, dword ptr [ebx + 0x318] */
    ecx = eax + eax * 2; /* 0x1705E42C: lea ecx, [eax + eax*2] */
    /* cmp MEM16(edx + ecx * 2), 0xFFFFu */ /* 0x1705E42F: cmp word ptr [edx + ecx*2], 0xffff */
    _flag_a = (uint32_t)(MEM16(edx + ecx * 2)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E685; /* 0x1705E435: je 0x1705e685 */
L_1705E43B:
    eax = eax + eax * 2; /* 0x1705E43B: lea eax, [eax + eax*2] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1705E43E: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x38)) = eax; /* 0x1705E441: mov dword ptr [ebp - 0x38], eax */
L_1705E444:
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x1705E444: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x38)); /* 0x1705E448: add eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x318); /* 0x1705E44B: mov ecx, dword ptr [ebx + 0x318] */
    SET_LO16(esi, MEM16(ecx + eax * 2)); /* 0x1705E451: mov si, word ptr [ecx + eax*2] */
    ecx = MEM32(ebx + 0x310); /* 0x1705E455: mov ecx, dword ptr [ebx + 0x310] */
    eax = (uint32_t)LO16(esi); /* 0x1705E45B: movzx eax, si */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x1705E45E: movzx eax, word ptr [ecx + eax*2] */
    ecx = MEM32(ebx + 0x364); /* 0x1705E462: mov ecx, dword ptr [ebx + 0x364] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1705E468: mov dword ptr [ebp - 0x20], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E46B: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705E46E: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1705E470: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E677; /* 0x1705E473: jne 0x1705e677 */
L_1705E479:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1705E479: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1705E47D: push 0 */
    MEM8(eax) = (uint8_t)(1); /* 0x1705E47F: mov byte ptr [eax], 1 */
    eax = ebx + 0xCC; /* 0x1705E482: lea eax, [ebx + 0xcc] */
    PUSH32(esp, eax); /* 0x1705E488: push eax */
    PUSH32(esp, esi); /* 0x1705E489: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1705E48A: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x60); /* 0x1705E48D: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17050BBD); /* 0x1705E490: call 0x17050bbd */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x60); /* 0x1705E495: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17051BB1); /* 0x1705E498: call 0x17051bb1 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705E49D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705E516; /* 0x1705E49F: jne 0x1705e516 */
L_1705E4A1:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E4A1: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E4F1; /* 0x1705E4A7: je 0x1705e4f1 */
L_1705E4A9:
    edi = MEM32(ebx + 0x318); /* 0x1705E4A9: mov edi, dword ptr [ebx + 0x318] */
L_1705E4AF:
    ecx = ebp + (-0x60); /* 0x1705E4AF: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E4B2: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x50)), 0 */ /* 0x1705E4B7: cmp byte ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x50))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E4BB: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E4C8; /* 0x1705E4BE: je 0x1705e4c8 */
L_1705E4C0:
    eax = MEM32(ebp + (-0x5A)); /* 0x1705E4C0: mov eax, dword ptr [ebp - 0x5a] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E4C3: mov dword ptr [ebp - 4], eax */
    goto L_1705E4D6; /* 0x1705E4C6: jmp 0x1705e4d6 */
L_1705E4C8:
    eax = (uint32_t)MEM16(ebp + (-0x5A)); /* 0x1705E4C8: movzx eax, word ptr [ebp - 0x5a] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705E4CC: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1705E4CD: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1705E4CF: cdq  */
    ecx = POP32_VAL(esp); /* 0x1705E4D0: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1705E4D1: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = edx; /* 0x1705E4D3: mov dword ptr [ebp - 4], edx */
L_1705E4D6:
    eax = (uint32_t)MEM16(ebp + (-0x10)); /* 0x1705E4D6: movzx eax, word ptr [ebp - 0x10] */
    ecx = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1705E4DA: movzx ecx, word ptr [ebp - 4] */
    eax = eax + eax * 2; /* 0x1705E4DE: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705E4E1: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), MEM16(edi + eax * 2) */ /* 0x1705E4E3: cmp si, word ptr [edi + eax*2] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(edi + eax * 2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E4F1; /* 0x1705E4E7: jne 0x1705e4f1 */
L_1705E4E9:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E4E9: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E4AF; /* 0x1705E4EF: jne 0x1705e4af */
L_1705E4F1:
    eax = (uint32_t)MEM16(ebp + (-0x10)); /* 0x1705E4F1: movzx eax, word ptr [ebp - 0x10] */
    ecx = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1705E4F5: movzx ecx, word ptr [ebp - 4] */
    eax = eax + eax * 2; /* 0x1705E4F9: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1705E4FC: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x318); /* 0x1705E4FE: mov ecx, dword ptr [ebx + 0x318] */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x1705E504: movzx eax, word ptr [ecx + eax*2] */
    PUSH32(esp, 0); /* 0x1705E508: push 0 */
    PUSH32(esp, eax); /* 0x1705E50A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1705E50B: push dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x60); /* 0x1705E50E: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_17055EB7); /* 0x1705E511: call 0x17055eb7 */
    RECOMP_FLAGS_IN();
L_1705E516:
    edi = 0xFFFFu; /* 0x1705E516: mov edi, 0xffff */
    /* cmp MEM16(ebp + (-0x5C)), LO16(edi) */ /* 0x1705E51B: cmp word ptr [ebp - 0x5c], di */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E677; /* 0x1705E51F: je 0x1705e677 */
L_1705E525:
    ecx = ebp + (-0x60); /* 0x1705E525: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E528: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705E52D: mov ecx, dword ptr [ebx + 0x318] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E533: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E536: movzx eax, ax */
    eax = eax + eax * 2; /* 0x1705E539: lea eax, [eax + eax*2] */
    esi = ecx + eax * 2; /* 0x1705E53C: lea esi, [ecx + eax*2] */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1705E53F: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1705E543: push eax */
    PUSH32(esp, esi); /* 0x1705E544: push esi */
    ecx = ebx + 0xCC; /* 0x1705E545: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_170514DF); /* 0x1705E54B: call 0x170514df */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E550: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E553: movzx eax, ax */
    eax = esi + eax * 2; /* 0x1705E556: lea eax, [esi + eax*2] */
    /* cmp MEM16(eax), LO16(edi) */ /* 0x1705E559: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x24)) = eax; /* 0x1705E55C: mov dword ptr [ebp - 0x24], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E66B; /* 0x1705E55F: je 0x1705e66b */
L_1705E565:
    goto L_1705E635; /* 0x1705E565: jmp 0x1705e635 */
L_1705E56A:
    PUSH32(esp, 0); /* 0x1705E56A: push 0 */
    eax = ebp + (-0x3C); /* 0x1705E56C: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1705E56F: push eax */
    ecx = ebx + 0xCC; /* 0x1705E570: lea ecx, [ebx + 0xcc] */
    RECOMP_CALL(sub_1704FE30); /* 0x1705E576: call 0x1704fe30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705E57B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1705E57D: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705E69F; /* 0x1705E580: jl 0x1705e69f */
L_1705E586:
    ecx = MEM32(ebx + 0xC8); /* 0x1705E586: mov ecx, dword ptr [ebx + 0xc8] */
    esi = (uint32_t)MEM16(ebp + (-0xC)); /* 0x1705E58C: movzx esi, word ptr [ebp - 0xc] */
    SET_LO16(eax, MEM16(ebx + 0x308)); /* 0x1705E590: mov ax, word ptr [ebx + 0x308] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x1705E597: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x3C)); /* 0x1705E59A: add esi, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x30)); /* 0x1705E59D: mov edi, dword ptr [ebp - 0x30] */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x1705E5A0: mov word ptr [ebp - 0x28], ax */
    eax = ecx; /* 0x1705E5A4: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705E5A6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705E5A6: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1705E5A9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1705E5AB: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705E5AD: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1705E5B0: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = ebx + 0xCC; /* 0x1705E5B2: lea edi, [ebx + 0xcc] */
    eax = MEM32(edi + 0x234); /* 0x1705E5B8: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x1705E5BE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1705E5C0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1705E5C1: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1705E5C4: push dword ptr [ebp - 0x20] */
    ecx = edi; /* 0x1705E5C7: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705E5C9: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_170572BC); /* 0x1705E5CC: call 0x170572bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705E5D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1705E5D3: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1705E69F; /* 0x1705E5D6: jl 0x1705e69f */
L_1705E5DC:
    eax = MEM32(ebp + (-0x24)); /* 0x1705E5DC: mov eax, dword ptr [ebp - 0x24] */
L_1705E5DF:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E5DF: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(ecx, MEM16(ebp + (-0x28))); /* 0x1705E5E5: mov cx, word ptr [ebp - 0x28] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1705E5E9: mov word ptr [eax], cx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E677; /* 0x1705E5EC: je 0x1705e677 */
L_1705E5F2:
    ecx = ebp + (-0x60); /* 0x1705E5F2: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_170564A4); /* 0x1705E5F5: call 0x170564a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x318); /* 0x1705E5FA: mov ecx, dword ptr [ebx + 0x318] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1705E600: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E603: movzx eax, ax */
    eax = eax + eax * 2; /* 0x1705E606: lea eax, [eax + eax*2] */
    esi = ecx + eax * 2; /* 0x1705E609: lea esi, [ecx + eax*2] */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1705E60C: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1705E610: push eax */
    PUSH32(esp, esi); /* 0x1705E611: push esi */
    ecx = edi; /* 0x1705E612: mov ecx, edi */
    RECOMP_CALL(sub_170514DF); /* 0x1705E614: call 0x170514df */
    RECOMP_FLAGS_IN();
    SET_LO16(ecx, MEM16(ebp + (-0xC))); /* 0x1705E619: mov cx, word ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1705E61D: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO16(eax); /* 0x1705E620: movzx eax, ax */
    eax = esi + eax * 2; /* 0x1705E623: lea eax, [esi + eax*2] */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1705E626: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E5DF; /* 0x1705E629: je 0x1705e5df */
L_1705E62B:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1705E62B: movzx eax, word ptr [ebp - 4] */
    eax = esi + eax * 2; /* 0x1705E62F: lea eax, [esi + eax*2] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1705E632: mov dword ptr [ebp - 0x24], eax */
L_1705E635:
    eax = (uint32_t)MEM16(eax); /* 0x1705E635: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x1705E638: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1705E639: push dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1705E63C: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705E63F: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_17051F2A); /* 0x1705E642: call 0x17051f2a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1705E647: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705E56A; /* 0x1705E649: jne 0x1705e56a */
L_1705E64F:
    eax = ebp + (-0x4C); /* 0x1705E64F: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1705E652: push eax */
    eax = ebp + (-0x1C); /* 0x1705E653: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1705E656: push eax */
    eax = ebp + (-0xC); /* 0x1705E657: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1705E65A: push eax */
    eax = ebp + (-0x2C); /* 0x1705E65B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1705E65E: push eax */
    RECOMP_CALL(sub_17051F58); /* 0x1705E65F: call 0x17051f58 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705E664: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705E698; /* 0x1705E666: je 0x1705e698 */
L_1705E668:
    edi = MEM32(ebp + (-0xC)); /* 0x1705E668: mov edi, dword ptr [ebp - 0xc] */
L_1705E66B:
    /* cmp MEM16(ebp + (-0x5C)), 0xFFFFu */ /* 0x1705E66B: cmp word ptr [ebp - 0x5c], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x5C))) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E525; /* 0x1705E671: jne 0x1705e525 */
L_1705E677:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1705E677: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    /* cmp MEM16(ebp + (-0x14)), 3 */ /* 0x1705E67A: cmp word ptr [ebp - 0x14], 3 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705E444; /* 0x1705E67F: jb 0x1705e444 */
L_1705E685:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1705E685: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    SET_LO16(eax, MEM16(ebp + (-0x8))); /* 0x1705E688: mov ax, word ptr [ebp - 8] */
    /* cmp LO16(eax), MEM16(ebp + (-0x34)) */ /* 0x1705E68C: cmp ax, word ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x34))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705E420; /* 0x1705E690: jb 0x1705e420 */
L_1705E696:
    goto L_1705E69F; /* 0x1705E696: jmp 0x1705e69f */
L_1705E698:
    MEM32(ebp + (-0x18)) = 0x8007000Eu; /* 0x1705E698: mov dword ptr [ebp - 0x18], 0x8007000e */
L_1705E69F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1705E69F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705E6D7; /* 0x1705E6A1: jmp 0x1705e6d7 */
L_1705E6A3:
    eax = MEM32(ebp + (-0x40)); /* 0x1705E6A3: mov eax, dword ptr [ebp - 0x40] */
    /* cmp eax, MEM32(ebx + 0x308) */ /* 0x1705E6A6: cmp eax, dword ptr [ebx + 0x308] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x308));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1705E6E1; /* 0x1705E6AC: jae 0x1705e6e1 */
L_1705E6AE:
    PUSH32(esp, MEM32(ebx + 0x364)); /* 0x1705E6AE: push dword ptr [ebx + 0x364] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E6B4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x308)); /* 0x1705E6B9: push dword ptr [ebx + 0x308] */
    RECOMP_CALL(sub_1721B01C); /* 0x1705E6BF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1705E6C4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705E6C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1705E6C7: pop ecx */
    MEM32(ebx + 0x364) = eax; /* 0x1705E6C8: mov dword ptr [ebx + 0x364], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E6E1; /* 0x1705E6CE: jne 0x1705e6e1 */
L_1705E6D0:
    MEM32(ebp + (-0x18)) = 0x8007000Eu; /* 0x1705E6D0: mov dword ptr [ebp - 0x18], 0x8007000e */
L_1705E6D7:
    /* cmp MEM32(ebx + 0x364), esi */ /* 0x1705E6D7: cmp dword ptr [ebx + 0x364], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x364)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705E6A3; /* 0x1705E6DD: jne 0x1705e6a3 */
L_1705E6DF:
    goto L_1705E6FD; /* 0x1705E6DF: jmp 0x1705e6fd */
L_1705E6E1:
    ecx = MEM32(ebx + 0x308); /* 0x1705E6E1: mov ecx, dword ptr [ebx + 0x308] */
    edi = MEM32(ebx + 0x364); /* 0x1705E6E7: mov edi, dword ptr [ebx + 0x364] */
    edx = ecx; /* 0x1705E6ED: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1705E6EF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1705E6EF: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705E6F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705E6F4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705E6F6: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705E6F8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1705E6FB: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_1705E6FD:
    /* cmp MEM32(ebp + (-0x2C)), esi */ /* 0x1705E6FD: cmp dword ptr [ebp - 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1705E700: pop edi */
    esi = POP32_VAL(esp); /* 0x1705E701: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705E702: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705E70E; /* 0x1705E703: je 0x1705e70e */
L_1705E705:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1705E705: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E708: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1705E70D: pop ecx */
L_1705E70E:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1705E70E: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1721B010); /* 0x1705E711: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1705E716: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1705E719: pop ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705E71A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1705E71B: ret  */
    RECOMP_REGS_OUT();
}
